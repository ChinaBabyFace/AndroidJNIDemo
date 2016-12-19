/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_libharu_PdfPage */

#ifndef _Included_org_libharu_PdfPage
#define _Included_org_libharu_PdfPage
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_libharu_PdfPage
 * Method:    initIDs
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_libharu_PdfPage_initIDs
  (JNIEnv *, jclass);

/*
 * Class:     org_libharu_PdfPage
 * Method:    create
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_libharu_PdfPage_create
  (JNIEnv *, jobject, jint);

/*
 * Class:     org_libharu_PdfPage
 * Method:    insertPage
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_org_libharu_PdfPage_insertPage
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     org_libharu_PdfPage
 * Method:    setSize
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_org_libharu_PdfPage_setSize
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     org_libharu_PdfPage
 * Method:    setWidth
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_org_libharu_PdfPage_setWidth
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     org_libharu_PdfPage
 * Method:    setHeight
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_org_libharu_PdfPage_setHeight
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     org_libharu_PdfPage
 * Method:    getWidth
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_org_libharu_PdfPage_getWidth
  (JNIEnv *, jobject);

/*
 * Class:     org_libharu_PdfPage
 * Method:    getHeight
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_org_libharu_PdfPage_getHeight
  (JNIEnv *, jobject);

/*
 * Class:     org_libharu_PdfPage
 * Method:    getLineWidth
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_org_libharu_PdfPage_getLineWidth
  (JNIEnv *, jobject);

/*
 * Class:     org_libharu_PdfPage
 * Method:    arc
 * Signature: (FFFFF)V
 */
JNIEXPORT void JNICALL Java_org_libharu_PdfPage_arc
  (JNIEnv *, jobject, jfloat, jfloat, jfloat, jfloat, jfloat);

/*
 * Class:     org_libharu_PdfPage
 * Method:    beginText
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_libharu_PdfPage_beginText
  (JNIEnv *, jobject);

/*
 * Class:     org_libharu_PdfPage
 * Method:    circle
 * Signature: (FFF)V
 */
JNIEXPORT void JNICALL Java_org_libharu_PdfPage_circle
  (JNIEnv *, jobject, jfloat, jfloat, jfloat);

/*
 * Class:     org_libharu_PdfPage
 * Method:    clip
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_libharu_PdfPage_clip
  (JNIEnv *, jobject);

/*
 * Class:     org_libharu_PdfPage
 * Method:    closePath
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_libharu_PdfPage_closePath
  (JNIEnv *, jobject);

/*
 * Class:     org_libharu_PdfPage
 * Method:    closePathStroke
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_libharu_PdfPage_closePathStroke
  (JNIEnv *, jobject);

/*
 * Class:     org_libharu_PdfPage
 * Method:    closePathEofillStroke
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_libharu_PdfPage_closePathEofillStroke
  (JNIEnv *, jobject);

/*
 * Class:     org_libharu_PdfPage
 * Method:    closePathFillStroke
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_libharu_PdfPage_closePathFillStroke
  (JNIEnv *, jobject);

/*
 * Class:     org_libharu_PdfPage
 * Method:    concat
 * Signature: (FFFFFF)V
 */
JNIEXPORT void JNICALL Java_org_libharu_PdfPage_concat
  (JNIEnv *, jobject, jfloat, jfloat, jfloat, jfloat, jfloat, jfloat);

/*
 * Class:     org_libharu_PdfPage
 * Method:    curveTo
 * Signature: (FFFFFF)V
 */
JNIEXPORT void JNICALL Java_org_libharu_PdfPage_curveTo
  (JNIEnv *, jobject, jfloat, jfloat, jfloat, jfloat, jfloat, jfloat);

/*
 * Class:     org_libharu_PdfPage
 * Method:    curveTo2
 * Signature: (FFFF)V
 */
JNIEXPORT void JNICALL Java_org_libharu_PdfPage_curveTo2
  (JNIEnv *, jobject, jfloat, jfloat, jfloat, jfloat);

/*
 * Class:     org_libharu_PdfPage
 * Method:    curveTo3
 * Signature: (FFFF)V
 */
JNIEXPORT void JNICALL Java_org_libharu_PdfPage_curveTo3
  (JNIEnv *, jobject, jfloat, jfloat, jfloat, jfloat);

/*
 * Class:     org_libharu_PdfPage
 * Method:    drawJpegImage
 * Signature: ([BFFFF)V
 */
JNIEXPORT void JNICALL Java_org_libharu_PdfPage_drawJpegImage
  (JNIEnv *, jobject, jbyteArray, jfloat, jfloat, jfloat, jfloat);

/*
 * Class:     org_libharu_PdfPage
 * Method:    drawJpegImageFromFile
 * Signature: (Ljava/lang/String;FFFF)V
 */
JNIEXPORT void JNICALL Java_org_libharu_PdfPage_drawJpegImageFromFile
  (JNIEnv *, jobject, jstring, jfloat, jfloat, jfloat, jfloat);

/*
 * Class:     org_libharu_PdfPage
 * Method:    drawPngImage
 * Signature: ([BFFFF)V
 */
JNIEXPORT void JNICALL Java_org_libharu_PdfPage_drawPngImage
  (JNIEnv *, jobject, jbyteArray, jfloat, jfloat, jfloat, jfloat);

/*
 * Class:     org_libharu_PdfPage
 * Method:    drawPngImageFromFile
 * Signature: (Ljava/lang/String;FFFF)V
 */
JNIEXPORT void JNICALL Java_org_libharu_PdfPage_drawPngImageFromFile
  (JNIEnv *, jobject, jstring, jfloat, jfloat, jfloat, jfloat);

/*
 * Class:     org_libharu_PdfPage
 * Method:    ellipse
 * Signature: (FFFF)V
 */
JNIEXPORT void JNICALL Java_org_libharu_PdfPage_ellipse
  (JNIEnv *, jobject, jfloat, jfloat, jfloat, jfloat);

/*
 * Class:     org_libharu_PdfPage
 * Method:    endPath
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_libharu_PdfPage_endPath
  (JNIEnv *, jobject);

/*
 * Class:     org_libharu_PdfPage
 * Method:    endText
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_libharu_PdfPage_endText
  (JNIEnv *, jobject);

/*
 * Class:     org_libharu_PdfPage
 * Method:    eoclip
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_libharu_PdfPage_eoclip
  (JNIEnv *, jobject);

/*
 * Class:     org_libharu_PdfPage
 * Method:    eofill
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_libharu_PdfPage_eofill
  (JNIEnv *, jobject);

/*
 * Class:     org_libharu_PdfPage
 * Method:    eofillStroke
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_libharu_PdfPage_eofillStroke
  (JNIEnv *, jobject);

/*
 * Class:     org_libharu_PdfPage
 * Method:    fill
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_libharu_PdfPage_fill
  (JNIEnv *, jobject);

/*
 * Class:     org_libharu_PdfPage
 * Method:    fillStroke
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_libharu_PdfPage_fillStroke
  (JNIEnv *, jobject);

/*
 * Class:     org_libharu_PdfPage
 * Method:    gRestore
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_libharu_PdfPage_gRestore
  (JNIEnv *, jobject);

/*
 * Class:     org_libharu_PdfPage
 * Method:    gSave
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_libharu_PdfPage_gSave
  (JNIEnv *, jobject);

/*
 * Class:     org_libharu_PdfPage
 * Method:    lineTo
 * Signature: (FF)V
 */
JNIEXPORT void JNICALL Java_org_libharu_PdfPage_lineTo
  (JNIEnv *, jobject, jfloat, jfloat);

/*
 * Class:     org_libharu_PdfPage
 * Method:    moveTextPos
 * Signature: (FF)V
 */
JNIEXPORT void JNICALL Java_org_libharu_PdfPage_moveTextPos
  (JNIEnv *, jobject, jfloat, jfloat);

/*
 * Class:     org_libharu_PdfPage
 * Method:    moveTextPos2
 * Signature: (FF)V
 */
JNIEXPORT void JNICALL Java_org_libharu_PdfPage_moveTextPos2
  (JNIEnv *, jobject, jfloat, jfloat);

/*
 * Class:     org_libharu_PdfPage
 * Method:    moveTo
 * Signature: (FF)V
 */
JNIEXPORT void JNICALL Java_org_libharu_PdfPage_moveTo
  (JNIEnv *, jobject, jfloat, jfloat);

/*
 * Class:     org_libharu_PdfPage
 * Method:    moveToNextLine
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_libharu_PdfPage_moveToNextLine
  (JNIEnv *, jobject);

/*
 * Class:     org_libharu_PdfPage
 * Method:    rectangle
 * Signature: (FFFF)V
 */
JNIEXPORT void JNICALL Java_org_libharu_PdfPage_rectangle
  (JNIEnv *, jobject, jfloat, jfloat, jfloat, jfloat);

/*
 * Class:     org_libharu_PdfPage
 * Method:    setCharSpace
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_org_libharu_PdfPage_setCharSpace
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     org_libharu_PdfPage
 * Method:    setCMYKFill
 * Signature: (FFFF)V
 */
JNIEXPORT void JNICALL Java_org_libharu_PdfPage_setCMYKFill
  (JNIEnv *, jobject, jfloat, jfloat, jfloat, jfloat);

/*
 * Class:     org_libharu_PdfPage
 * Method:    setCMYKStroke
 * Signature: (FFFF)V
 */
JNIEXPORT void JNICALL Java_org_libharu_PdfPage_setCMYKStroke
  (JNIEnv *, jobject, jfloat, jfloat, jfloat, jfloat);

/*
 * Class:     org_libharu_PdfPage
 * Method:    setGrayFill
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_org_libharu_PdfPage_setGrayFill
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     org_libharu_PdfPage
 * Method:    setGrayStroke
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_org_libharu_PdfPage_setGrayStroke
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     org_libharu_PdfPage
 * Method:    setHorizontalScaling
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_org_libharu_PdfPage_setHorizontalScaling
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     org_libharu_PdfPage
 * Method:    setLineCap
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_libharu_PdfPage_setLineCap
  (JNIEnv *, jobject, jint);

/*
 * Class:     org_libharu_PdfPage
 * Method:    setLineJoin
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_libharu_PdfPage_setLineJoin
  (JNIEnv *, jobject, jint);

/*
 * Class:     org_libharu_PdfPage
 * Method:    setLineWidth
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_org_libharu_PdfPage_setLineWidth
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     org_libharu_PdfPage
 * Method:    setMiterLimit
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_org_libharu_PdfPage_setMiterLimit
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     org_libharu_PdfPage
 * Method:    setRGBFill
 * Signature: (FFF)V
 */
JNIEXPORT void JNICALL Java_org_libharu_PdfPage_setRGBFill
  (JNIEnv *, jobject, jfloat, jfloat, jfloat);

/*
 * Class:     org_libharu_PdfPage
 * Method:    setRGBStroke
 * Signature: (FFF)V
 */
JNIEXPORT void JNICALL Java_org_libharu_PdfPage_setRGBStroke
  (JNIEnv *, jobject, jfloat, jfloat, jfloat);

/*
 * Class:     org_libharu_PdfPage
 * Method:    setTextLeading
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_org_libharu_PdfPage_setTextLeading
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     org_libharu_PdfPage
 * Method:    setTextRenderingMode
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_libharu_PdfPage_setTextRenderingMode
  (JNIEnv *, jobject, jint);

/*
 * Class:     org_libharu_PdfPage
 * Method:    setTextRise
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_org_libharu_PdfPage_setTextRise
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     org_libharu_PdfPage
 * Method:    setTextWordSpace
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_org_libharu_PdfPage_setTextWordSpace
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     org_libharu_PdfPage
 * Method:    showText
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_libharu_PdfPage_showText
  (JNIEnv *, jobject, jstring);

/*
 * Class:     org_libharu_PdfPage
 * Method:    showTextNextLine
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_libharu_PdfPage_showTextNextLine
  (JNIEnv *, jobject, jstring);

/*
 * Class:     org_libharu_PdfPage
 * Method:    showTextNextLineEx
 * Signature: (FFLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_libharu_PdfPage_showTextNextLineEx
  (JNIEnv *, jobject, jfloat, jfloat, jstring);

/*
 * Class:     org_libharu_PdfPage
 * Method:    stroke
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_libharu_PdfPage_stroke
  (JNIEnv *, jobject);

/*
 * Class:     org_libharu_PdfPage
 * Method:    textOut
 * Signature: (FFLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_libharu_PdfPage_textOut
  (JNIEnv *, jobject, jfloat, jfloat, jstring);

/*
 * Class:     org_libharu_PdfPage
 * Method:    textRect
 * Signature: (FFFFLjava/lang/String;I)V
 */
JNIEXPORT void JNICALL Java_org_libharu_PdfPage_textRect
  (JNIEnv *, jobject, jfloat, jfloat, jfloat, jfloat, jstring, jint);

#ifdef __cplusplus
}
#endif
#endif
