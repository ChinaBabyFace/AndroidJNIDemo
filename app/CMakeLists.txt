# Sets the minimum version of CMake required to build the native
# library. You should either keep the default value or only pass a
# value of 3.4.0 or lower.

cmake_minimum_required(VERSION 3.6.0)

# Creates and names a library, sets it as either STATIC
# or SHARED, and provides the relative paths to its source code.
# You can define multiple libraries, and CMake builds it for you.
# Gradle automatically packages shared libraries with your APK.

add_library( # Sets the name of the library.
             pdf-lib

             # Sets the library as a shared library.
             SHARED

             # Provides a relative path to your source file(s).
             # Associated headers in the same location as their source
             # file are automatically included.
             # src/main/cpp/native-lib.cpp
    src/main/cpp/libpng-1.5.7/png.c
    src/main/cpp/libpng-1.5.7/png.h
    src/main/cpp/libpng-1.5.7/pngerror.c
    src/main/cpp/libpng-1.5.7/pngget.c
    src/main/cpp/libpng-1.5.7/pngmem.c
    src/main/cpp/libpng-1.5.7/pngpread.c
    src/main/cpp/libpng-1.5.7/pngread.c
    src/main/cpp/libpng-1.5.7/pngrio.c
    src/main/cpp/libpng-1.5.7/pngrtran.c
    src/main/cpp/libpng-1.5.7/pngrutil.c
    src/main/cpp/libpng-1.5.7/pngset.c
    src/main/cpp/libpng-1.5.7/pngtrans.c
    src/main/cpp/libpng-1.5.7/pngwio.c
    src/main/cpp/libpng-1.5.7/pngwrite.c
    src/main/cpp/libpng-1.5.7/pngwtran.c
    src/main/cpp/libpng-1.5.7/pngwutil.c

    src/main/cpp/libhpdf-2.3.0RC2/hpdf_3dmeasure.c
    src/main/cpp/libhpdf-2.3.0RC2/hpdf_annotation.c
    src/main/cpp/libhpdf-2.3.0RC2/hpdf_array.c
    src/main/cpp/libhpdf-2.3.0RC2/hpdf_binary.c
    src/main/cpp/libhpdf-2.3.0RC2/hpdf_boolean.c
    src/main/cpp/libhpdf-2.3.0RC2/hpdf_catalog.c
    src/main/cpp/libhpdf-2.3.0RC2/hpdf_destination.c
    src/main/cpp/libhpdf-2.3.0RC2/hpdf_dict.c
    src/main/cpp/libhpdf-2.3.0RC2/hpdf_doc.c
    src/main/cpp/libhpdf-2.3.0RC2/hpdf_doc_png.c
    src/main/cpp/libhpdf-2.3.0RC2/hpdf_encoder.c
    src/main/cpp/libhpdf-2.3.0RC2/hpdf_encoder_cns.c
    src/main/cpp/libhpdf-2.3.0RC2/hpdf_encoder_cnt.c
    src/main/cpp/libhpdf-2.3.0RC2/hpdf_encoder_jp.c
    src/main/cpp/libhpdf-2.3.0RC2/hpdf_encoder_kr.c
    src/main/cpp/libhpdf-2.3.0RC2/hpdf_encoder_utf.c
    src/main/cpp/libhpdf-2.3.0RC2/hpdf_encrypt.c
    src/main/cpp/libhpdf-2.3.0RC2/hpdf_encryptdict.c
    src/main/cpp/libhpdf-2.3.0RC2/hpdf_error.c
    src/main/cpp/libhpdf-2.3.0RC2/hpdf_exdata.c
    src/main/cpp/libhpdf-2.3.0RC2/hpdf_ext_gstate.c
    src/main/cpp/libhpdf-2.3.0RC2/hpdf_font.c
    src/main/cpp/libhpdf-2.3.0RC2/hpdf_font_cid.c
    src/main/cpp/libhpdf-2.3.0RC2/hpdf_fontdef_base14.c
    src/main/cpp/libhpdf-2.3.0RC2/hpdf_fontdef.c
    src/main/cpp/libhpdf-2.3.0RC2/hpdf_fontdef_cid.c
    src/main/cpp/libhpdf-2.3.0RC2/hpdf_fontdef_cns.c
    src/main/cpp/libhpdf-2.3.0RC2/hpdf_fontdef_cnt.c
    src/main/cpp/libhpdf-2.3.0RC2/hpdf_fontdef_jp.c
    src/main/cpp/libhpdf-2.3.0RC2/hpdf_fontdef_kr.c
    src/main/cpp/libhpdf-2.3.0RC2/hpdf_fontdef_tt.c
    src/main/cpp/libhpdf-2.3.0RC2/hpdf_fontdef_type1.c
    src/main/cpp/libhpdf-2.3.0RC2/hpdf_font_tt.c
    src/main/cpp/libhpdf-2.3.0RC2/hpdf_font_type1.c
    src/main/cpp/libhpdf-2.3.0RC2/hpdf_gstate.c
    src/main/cpp/libhpdf-2.3.0RC2/hpdf_image.c
    src/main/cpp/libhpdf-2.3.0RC2/hpdf_image_ccitt.c
    src/main/cpp/libhpdf-2.3.0RC2/hpdf_image_png.c
    src/main/cpp/libhpdf-2.3.0RC2/hpdf_info.c
    src/main/cpp/libhpdf-2.3.0RC2/hpdf_list.c
    src/main/cpp/libhpdf-2.3.0RC2/hpdf_mmgr.c
    src/main/cpp/libhpdf-2.3.0RC2/hpdf_name.c
    src/main/cpp/libhpdf-2.3.0RC2/hpdf_namedict.c
    src/main/cpp/libhpdf-2.3.0RC2/hpdf_null.c
    src/main/cpp/libhpdf-2.3.0RC2/hpdf_number.c
    src/main/cpp/libhpdf-2.3.0RC2/hpdf_objects.c
    src/main/cpp/libhpdf-2.3.0RC2/hpdf_outline.c
    src/main/cpp/libhpdf-2.3.0RC2/hpdf_page_label.c
    src/main/cpp/libhpdf-2.3.0RC2/hpdf_page_operator.c
    src/main/cpp/libhpdf-2.3.0RC2/hpdf_pages.c
    src/main/cpp/libhpdf-2.3.0RC2/hpdf_pdfa.c
    src/main/cpp/libhpdf-2.3.0RC2/hpdf_real.c
    src/main/cpp/libhpdf-2.3.0RC2/hpdf_streams.c
    src/main/cpp/libhpdf-2.3.0RC2/hpdf_string.c
    src/main/cpp/libhpdf-2.3.0RC2/hpdf_u3d.c
    src/main/cpp/libhpdf-2.3.0RC2/hpdf_utils.c
    src/main/cpp/libhpdf-2.3.0RC2/hpdf_xref.c

    src/main/cpp/org_libharu_PdfDocument.c
    src/main/cpp/org_libharu_PdfPage.c
            )

    include_directories(
            src/main/cpp/libhpdf-2.3.0RC2/
            src/main/cpp/libpng-1.5.7/
            src/main/cpp/
    )

# Searches for a specified prebuilt library and stores the path as a
# variable. Because system libraries are included in the search path by
# default, you only need to specify the name of the public NDK library
# you want to add. CMake verifies that the library exists before
# completing its build.

find_library( # Sets the name of the path variable.
              log-lib

              # Specifies the name of the NDK library that
              # you want CMake to locate.
              log
              adroid)

# Specifies libraries CMake should link to your target library. You
# can link multiple libraries, such as libraries you define in the
# build script, prebuilt third-party libraries, or system libraries.

target_link_libraries( # Specifies the target library.
                       pdf-lib
                       android
                       # Links the target library to the log library
                       # included in the NDK.
                       ${log-lib} )
