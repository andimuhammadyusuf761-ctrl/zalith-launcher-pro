package ca.dnamobile.javalauncher.skin;

import android.content.Context;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.widget.ImageView;

import androidx.annotation.NonNull;
import androidx.annotation.Nullable;

import java.io.InputStream;
import java.net.HttpURLConnection;
import java.net.URL;
import java.util.concurrent.Executor;
import java.util.concurrent.Executors;

/** Loads and caches player head textures for display in the DroidBridge UI. */
public final class PlayerHeadLoader {
    private static final Executor EXECUTOR = Executors.newSingleThreadExecutor();

    private PlayerHeadLoader() {}

    /**
     * Asynchronously load a player head from Crafatar and set it on an ImageView.
     * Falls back to a default drawable on failure.
     */
    public static void load(@NonNull Context context, @Nullable String uuid,
                            @NonNull ImageView target, int fallbackDrawable) {
        if (uuid == null) {
            target.setImageResource(fallbackDrawable);
            return;
        }
        EXECUTOR.execute(() -> {
            Bitmap bmp = downloadHead(uuid);
            target.post(() -> {
                if (bmp != null) target.setImageBitmap(bmp);
                else target.setImageResource(fallbackDrawable);
            });
        });
    }

    @Nullable
    private static Bitmap downloadHead(String uuid) {
        try {
            URL url = new URL("https://crafatar.com/avatars/" + uuid + "?size=64&overlay");
            HttpURLConnection conn = (HttpURLConnection) url.openConnection();
            conn.setConnectTimeout(5000);
            conn.setReadTimeout(5000);
            try (InputStream is = conn.getInputStream()) {
                return BitmapFactory.decodeStream(is);
            } finally {
                conn.disconnect();
            }
        } catch (Exception e) {
            return null;
        }
    }
}
