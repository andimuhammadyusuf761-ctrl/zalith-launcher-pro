package ca.dnamobile.javalauncher.controls;

import android.app.AlertDialog;
import android.content.Context;
import android.view.LayoutInflater;
import android.view.View;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.ListView;

import androidx.annotation.NonNull;
import androidx.annotation.Nullable;

import java.util.List;

/** Dialog for picking a keyboard key to bind to a touch-control button. */
public final class TouchKeyPickerDialog {
    public interface OnKeyPickedListener {
        void onKeyPicked(int keyCode, @NonNull String keyLabel);
    }

    private TouchKeyPickerDialog() {}

    /** Show the key-picker dialog. */
    public static void show(@NonNull Context context,
                            @NonNull List<String> keyLabels,
                            @NonNull int[] keyCodes,
                            @Nullable OnKeyPickedListener listener) {
        AlertDialog.Builder builder = new AlertDialog.Builder(context);
        builder.setTitle("Pick a key");

        ArrayAdapter<String> adapter = new ArrayAdapter<>(context,
                android.R.layout.simple_list_item_1, keyLabels);
        ListView list = new ListView(context);
        list.setAdapter(adapter);
        list.setOnItemClickListener((parent, view, position, id) -> {
            if (listener != null) {
                listener.onKeyPicked(keyCodes[position], keyLabels.get(position));
            }
        });

        builder.setView(list);
        builder.setNegativeButton("Cancel", null);
        builder.show();
    }
}
