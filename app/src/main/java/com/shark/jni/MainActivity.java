package com.shark.jni;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    // Used to load the 'native-lib' library on application startup.
    static {
        System.loadLibrary("libpdf-lib");
    }
//    include_directories(
//            src/main/cpp/libhpdf-2.3.0RC2/
//            src/main/cpp/libpng-1.5.7/
//            src/main/cpp/
//    )
//    src/main/cpp/libpng-1.5.7/png.c
//    src/main/cpp/libpng-1.5.7/png.h
//    src/main/cpp/libpng-1.5.7/pngerror.c
//    src/main/cpp/libpng-1.5.7/pngget.c
//    src/main/cpp/libpng-1.5.7/pngmem.c
//    src/main/cpp/libpng-1.5.7/pngpread.c
//    src/main/cpp/libpng-1.5.7/pngread.c
//    src/main/cpp/libpng-1.5.7/pngrio.c
//    src/main/cpp/libpng-1.5.7/pngrtran.c
//    src/main/cpp/libpng-1.5.7/pngrutil.c
//    src/main/cpp/libpng-1.5.7/pngset.c
//    src/main/cpp/libpng-1.5.7/pngtrans.c
//    src/main/cpp/libpng-1.5.7/pngwio.c
//    src/main/cpp/libpng-1.5.7/pngwrite.c
//    src/main/cpp/libpng-1.5.7/pngwtran.c
//    src/main/cpp/libpng-1.5.7/pngwutil.c
//
//    src/main/cpp/libhpdf-2.3.0RC2/hpdf_3dmeasure.c
//    src/main/cpp/libhpdf-2.3.0RC2/hpdf_annotation.c
//    src/main/cpp/libhpdf-2.3.0RC2/hpdf_array.c
//    src/main/cpp/libhpdf-2.3.0RC2/hpdf_binary.c
//    src/main/cpp/libhpdf-2.3.0RC2/hpdf_boolean.c
//    src/main/cpp/libhpdf-2.3.0RC2/hpdf_catalog.c
//    src/main/cpp/libhpdf-2.3.0RC2/hpdf_destination.c
//    src/main/cpp/libhpdf-2.3.0RC2/hpdf_dict.c
//    src/main/cpp/libhpdf-2.3.0RC2/hpdf_doc.c
//    src/main/cpp/libhpdf-2.3.0RC2/hpdf_doc_png.c
//    src/main/cpp/libhpdf-2.3.0RC2/hpdf_encoder.c
//    src/main/cpp/libhpdf-2.3.0RC2/hpdf_encoder_cns.c
//    src/main/cpp/libhpdf-2.3.0RC2/hpdf_encoder_cnt.c
//    src/main/cpp/libhpdf-2.3.0RC2/hpdf_encoder_jp.c
//    src/main/cpp/libhpdf-2.3.0RC2/hpdf_encoder_kr.c
//    src/main/cpp/libhpdf-2.3.0RC2/hpdf_encoder_utf.c
//    src/main/cpp/libhpdf-2.3.0RC2/hpdf_encrypt.c
//    src/main/cpp/libhpdf-2.3.0RC2/hpdf_encryptdict.c
//    src/main/cpp/libhpdf-2.3.0RC2/hpdf_error.c
//    src/main/cpp/libhpdf-2.3.0RC2/hpdf_exdata.c
//    src/main/cpp/libhpdf-2.3.0RC2/hpdf_ext_gstate.c
//    src/main/cpp/libhpdf-2.3.0RC2/hpdf_font.c
//    src/main/cpp/libhpdf-2.3.0RC2/hpdf_font_cid.c
//    src/main/cpp/libhpdf-2.3.0RC2/hpdf_fontdef_base14.c
//    src/main/cpp/libhpdf-2.3.0RC2/hpdf_fontdef.c
//    src/main/cpp/libhpdf-2.3.0RC2/hpdf_fontdef_cid.c
//    src/main/cpp/libhpdf-2.3.0RC2/hpdf_fontdef_cns.c
//    src/main/cpp/libhpdf-2.3.0RC2/hpdf_fontdef_cnt.c
//    src/main/cpp/libhpdf-2.3.0RC2/hpdf_fontdef_jp.c
//    src/main/cpp/libhpdf-2.3.0RC2/hpdf_fontdef_kr.c
//    src/main/cpp/libhpdf-2.3.0RC2/hpdf_fontdef_tt.c
//    src/main/cpp/libhpdf-2.3.0RC2/hpdf_fontdef_type1.c
//    src/main/cpp/libhpdf-2.3.0RC2/hpdf_font_tt.c
//    src/main/cpp/libhpdf-2.3.0RC2/hpdf_font_type1.c
//    src/main/cpp/libhpdf-2.3.0RC2/hpdf_gstate.c
//    src/main/cpp/libhpdf-2.3.0RC2/hpdf_image.c
//    src/main/cpp/libhpdf-2.3.0RC2/hpdf_image_ccitt.c
//    src/main/cpp/libhpdf-2.3.0RC2/hpdf_image_png.c
//    src/main/cpp/libhpdf-2.3.0RC2/hpdf_info.c
//    src/main/cpp/libhpdf-2.3.0RC2/hpdf_list.c
//    src/main/cpp/libhpdf-2.3.0RC2/hpdf_mmgr.c
//    src/main/cpp/libhpdf-2.3.0RC2/hpdf_name.c
//    src/main/cpp/libhpdf-2.3.0RC2/hpdf_namedict.c
//    src/main/cpp/libhpdf-2.3.0RC2/hpdf_null.c
//    src/main/cpp/libhpdf-2.3.0RC2/hpdf_number.c
//    src/main/cpp/libhpdf-2.3.0RC2/hpdf_objects.c
//    src/main/cpp/libhpdf-2.3.0RC2/hpdf_outline.c
//    src/main/cpp/libhpdf-2.3.0RC2/hpdf_page_label.c
//    src/main/cpp/libhpdf-2.3.0RC2/hpdf_page_operator.c
//    src/main/cpp/libhpdf-2.3.0RC2/hpdf_pages.c
//    src/main/cpp/libhpdf-2.3.0RC2/hpdf_pdfa.c
//    src/main/cpp/libhpdf-2.3.0RC2/hpdf_real.c
//    src/main/cpp/libhpdf-2.3.0RC2/hpdf_streams.c
//    src/main/cpp/libhpdf-2.3.0RC2/hpdf_string.c
//    src/main/cpp/libhpdf-2.3.0RC2/hpdf_u3d.c
//    src/main/cpp/libhpdf-2.3.0RC2/hpdf_utils.c
//    src/main/cpp/libhpdf-2.3.0RC2/hpdf_xref.c
//
//    src/main/cpp/org_libharu_PdfDocument.c
//    src/main/cpp/org_libharu_PdfPage.c
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        // Example of a call to a native method
        TextView tv = (TextView) findViewById(R.id.sample_text);
        tv.setText(stringFromJNI());
    }

    /**
     * A native method that is implemented by the 'native-lib' native library,
     * which is packaged with this application.
     */
    public native String stringFromJNI();
}
