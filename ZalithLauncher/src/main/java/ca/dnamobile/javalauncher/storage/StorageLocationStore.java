package ca.dnamobile.javalauncher.storage;

import android.content.Context;
import android.content.SharedPreferences;

import androidx.annotation.NonNull;
import androidx.annotation.Nullable;

import java.io.File;

/** Persists the chosen game data storage location for DroidBridge. */
public final class StorageLocationStore {
    private static final String PREFS = "storage_location";
    private static final String KEY_PATH = "custom_path";

    private final SharedPreferences prefs;
    private final Context context;

    public StorageLocationStore(@NonNull Context context) {
        this.context = context.getApplicationContext();
        this.prefs = context.getSharedPreferences(PREFS, Context.MODE_PRIVATE);
    }

    /** Returns the user-chosen storage root, or the app's default external files dir. */
    @NonNull
    public File getStorageRoot() {
        String path = prefs.getString(KEY_PATH, null);
        if (path != null) {
            File f = new File(path);
            if (f.exists()) return f;
        }
        File def = context.getExternalFilesDir(null);
        return def != null ? def : context.getFilesDir();
    }

    public void setStorageRoot(@NonNull File root) {
        prefs.edit().putString(KEY_PATH, root.getAbsolutePath()).apply();
    }

    public void clearCustomPath() {
        prefs.edit().remove(KEY_PATH).apply();
    }
}
