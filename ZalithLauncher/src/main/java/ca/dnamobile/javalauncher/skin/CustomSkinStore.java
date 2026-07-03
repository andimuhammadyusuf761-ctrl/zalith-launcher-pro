package ca.dnamobile.javalauncher.skin;

import android.content.Context;
import android.content.SharedPreferences;

import androidx.annotation.NonNull;
import androidx.annotation.Nullable;

import java.io.File;

/** Stores a custom (offline) skin file path and model type for the active account. */
public final class CustomSkinStore {
    private static final String PREFS = "custom_skin_store";
    private static final String KEY_PATH = "skin_path";
    private static final String KEY_MODEL = "skin_model";

    private final SharedPreferences prefs;

    public CustomSkinStore(@NonNull Context context) {
        prefs = context.getSharedPreferences(PREFS, Context.MODE_PRIVATE);
    }

    @Nullable
    public File getSkinFile() {
        String path = prefs.getString(KEY_PATH, null);
        if (path == null) return null;
        File f = new File(path);
        return f.exists() ? f : null;
    }

    @NonNull
    public SkinModelType getModel() {
        return SkinModelType.fromId(prefs.getString(KEY_MODEL, "default"));
    }

    public void setSkin(@NonNull File skinFile, @NonNull SkinModelType model) {
        prefs.edit()
                .putString(KEY_PATH, skinFile.getAbsolutePath())
                .putString(KEY_MODEL, model.id)
                .apply();
    }

    public void clear() {
        prefs.edit().clear().apply();
    }

    public boolean hasSkin() {
        return getSkinFile() != null;
    }
}
