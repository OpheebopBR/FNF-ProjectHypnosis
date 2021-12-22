#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime__internal_backend_native_NativeCFFI
#include <lime/_internal/backend/native/NativeCFFI.h>
#endif
#ifndef INCLUDED_lime__internal_graphics_ImageDataUtil
#include <lime/_internal/graphics/ImageDataUtil.h>
#endif
#ifndef INCLUDED_lime__internal_graphics_StackBlur
#include <lime/_internal/graphics/StackBlur.h>
#endif
#ifndef INCLUDED_lime__internal_graphics__ImageDataUtil_ImageDataView
#include <lime/_internal/graphics/_ImageDataUtil/ImageDataView.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageBuffer
#include <lime/graphics/ImageBuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageChannel
#include <lime/graphics/ImageChannel.h>
#endif
#ifndef INCLUDED_lime_math_Rectangle
#include <lime/math/Rectangle.h>
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
#ifndef INCLUDED_lime_math_Vector4
#include <lime/math/Vector4.h>
#endif
#ifndef INCLUDED_lime_math__ColorMatrix_ColorMatrix_Impl_
#include <lime/math/_ColorMatrix/ColorMatrix_Impl_.h>
#endif
#ifndef INCLUDED_lime_math__RGBA_RGBA_Impl_
#include <lime/math/_RGBA/RGBA_Impl_.h>
#endif
#ifndef INCLUDED_lime_system_CFFI
#include <lime/system/CFFI.h>
#endif
#ifndef INCLUDED_lime_system_Endian
#include <lime/system/Endian.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_BytePointerData
#include <lime/utils/BytePointerData.h>
#endif
#ifndef INCLUDED_lime_utils_TAError
#include <lime/utils/TAError.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IntVector
#include <openfl/_Vector/IntVector.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_68d87270d4f7b5ed_33_displaceMap,"lime._internal.graphics.ImageDataUtil","displaceMap",0x5f09aa44,"lime._internal.graphics.ImageDataUtil.displaceMap","lime/_internal/graphics/ImageDataUtil.hx",33,0x59dddace)
HX_LOCAL_STACK_FRAME(_hx_pos_68d87270d4f7b5ed_139_bilinear,"lime._internal.graphics.ImageDataUtil","bilinear",0x779ce56b,"lime._internal.graphics.ImageDataUtil.bilinear","lime/_internal/graphics/ImageDataUtil.hx",139,0x59dddace)
HX_LOCAL_STACK_FRAME(_hx_pos_68d87270d4f7b5ed_143_lerpRGBA,"lime._internal.graphics.ImageDataUtil","lerpRGBA",0x6898e12a,"lime._internal.graphics.ImageDataUtil.lerpRGBA","lime/_internal/graphics/ImageDataUtil.hx",143,0x59dddace)
HX_LOCAL_STACK_FRAME(_hx_pos_68d87270d4f7b5ed_155_lerp4f,"lime._internal.graphics.ImageDataUtil","lerp4f",0x5c714ca8,"lime._internal.graphics.ImageDataUtil.lerp4f","lime/_internal/graphics/ImageDataUtil.hx",155,0x59dddace)
HX_LOCAL_STACK_FRAME(_hx_pos_68d87270d4f7b5ed_160_lerp,"lime._internal.graphics.ImageDataUtil","lerp",0x85985576,"lime._internal.graphics.ImageDataUtil.lerp","lime/_internal/graphics/ImageDataUtil.hx",160,0x59dddace)
HX_LOCAL_STACK_FRAME(_hx_pos_68d87270d4f7b5ed_164_colorTransform,"lime._internal.graphics.ImageDataUtil","colorTransform",0x125b6f48,"lime._internal.graphics.ImageDataUtil.colorTransform","lime/_internal/graphics/ImageDataUtil.hx",164,0x59dddace)
HX_LOCAL_STACK_FRAME(_hx_pos_68d87270d4f7b5ed_206_copyChannel,"lime._internal.graphics.ImageDataUtil","copyChannel",0xecaa286f,"lime._internal.graphics.ImageDataUtil.copyChannel","lime/_internal/graphics/ImageDataUtil.hx",206,0x59dddace)
HX_LOCAL_STACK_FRAME(_hx_pos_68d87270d4f7b5ed_295_copyPixels,"lime._internal.graphics.ImageDataUtil","copyPixels",0xd2d56101,"lime._internal.graphics.ImageDataUtil.copyPixels","lime/_internal/graphics/ImageDataUtil.hx",295,0x59dddace)
HX_LOCAL_STACK_FRAME(_hx_pos_68d87270d4f7b5ed_508_fillRect,"lime._internal.graphics.ImageDataUtil","fillRect",0x041873c6,"lime._internal.graphics.ImageDataUtil.fillRect","lime/_internal/graphics/ImageDataUtil.hx",508,0x59dddace)
HX_LOCAL_STACK_FRAME(_hx_pos_68d87270d4f7b5ed_558_floodFill,"lime._internal.graphics.ImageDataUtil","floodFill",0x35740402,"lime._internal.graphics.ImageDataUtil.floodFill","lime/_internal/graphics/ImageDataUtil.hx",558,0x59dddace)
static const int _hx_array_data_0eb0fdcf_29[] = {
	(int)0,(int)-1,(int)1,(int)0,
};
static const int _hx_array_data_0eb0fdcf_30[] = {
	(int)-1,(int)0,(int)0,(int)1,
};
HX_LOCAL_STACK_FRAME(_hx_pos_68d87270d4f7b5ed_642_gaussianBlur,"lime._internal.graphics.ImageDataUtil","gaussianBlur",0xb8d3c441,"lime._internal.graphics.ImageDataUtil.gaussianBlur","lime/_internal/graphics/ImageDataUtil.hx",642,0x59dddace)
HX_LOCAL_STACK_FRAME(_hx_pos_68d87270d4f7b5ed_668_getColorBoundsRect,"lime._internal.graphics.ImageDataUtil","getColorBoundsRect",0x8aa490c5,"lime._internal.graphics.ImageDataUtil.getColorBoundsRect","lime/_internal/graphics/ImageDataUtil.hx",668,0x59dddace)
HX_LOCAL_STACK_FRAME(_hx_pos_68d87270d4f7b5ed_812_getPixel,"lime._internal.graphics.ImageDataUtil","getPixel",0xb9da048f,"lime._internal.graphics.ImageDataUtil.getPixel","lime/_internal/graphics/ImageDataUtil.hx",812,0x59dddace)
HX_LOCAL_STACK_FRAME(_hx_pos_68d87270d4f7b5ed_831_getPixel32,"lime._internal.graphics.ImageDataUtil","getPixel32",0x67cfb2ee,"lime._internal.graphics.ImageDataUtil.getPixel32","lime/_internal/graphics/ImageDataUtil.hx",831,0x59dddace)
HX_LOCAL_STACK_FRAME(_hx_pos_68d87270d4f7b5ed_849_getPixels,"lime._internal.graphics.ImageDataUtil","getPixels",0xe4e9f904,"lime._internal.graphics.ImageDataUtil.getPixels","lime/_internal/graphics/ImageDataUtil.hx",849,0x59dddace)
HX_LOCAL_STACK_FRAME(_hx_pos_68d87270d4f7b5ed_905_merge,"lime._internal.graphics.ImageDataUtil","merge",0xf318fed9,"lime._internal.graphics.ImageDataUtil.merge","lime/_internal/graphics/ImageDataUtil.hx",905,0x59dddace)
HX_LOCAL_STACK_FRAME(_hx_pos_68d87270d4f7b5ed_956_multiplyAlpha,"lime._internal.graphics.ImageDataUtil","multiplyAlpha",0xed49d7bb,"lime._internal.graphics.ImageDataUtil.multiplyAlpha","lime/_internal/graphics/ImageDataUtil.hx",956,0x59dddace)
HX_LOCAL_STACK_FRAME(_hx_pos_68d87270d4f7b5ed_982_resize,"lime._internal.graphics.ImageDataUtil","resize",0xc3399ab3,"lime._internal.graphics.ImageDataUtil.resize","lime/_internal/graphics/ImageDataUtil.hx",982,0x59dddace)
HX_LOCAL_STACK_FRAME(_hx_pos_68d87270d4f7b5ed_1071_resizeBuffer,"lime._internal.graphics.ImageDataUtil","resizeBuffer",0x76145413,"lime._internal.graphics.ImageDataUtil.resizeBuffer","lime/_internal/graphics/ImageDataUtil.hx",1071,0x59dddace)
HX_LOCAL_STACK_FRAME(_hx_pos_68d87270d4f7b5ed_1107_setFormat,"lime._internal.graphics.ImageDataUtil","setFormat",0x391f851a,"lime._internal.graphics.ImageDataUtil.setFormat","lime/_internal/graphics/ImageDataUtil.hx",1107,0x59dddace)
HX_LOCAL_STACK_FRAME(_hx_pos_68d87270d4f7b5ed_1185_setPixel,"lime._internal.graphics.ImageDataUtil","setPixel",0x68375e03,"lime._internal.graphics.ImageDataUtil.setPixel","lime/_internal/graphics/ImageDataUtil.hx",1185,0x59dddace)
HX_LOCAL_STACK_FRAME(_hx_pos_68d87270d4f7b5ed_1213_setPixel32,"lime._internal.graphics.ImageDataUtil","setPixel32",0x6b4d5162,"lime._internal.graphics.ImageDataUtil.setPixel32","lime/_internal/graphics/ImageDataUtil.hx",1213,0x59dddace)
HX_LOCAL_STACK_FRAME(_hx_pos_68d87270d4f7b5ed_1235_setPixels,"lime._internal.graphics.ImageDataUtil","setPixels",0xc83ae510,"lime._internal.graphics.ImageDataUtil.setPixels","lime/_internal/graphics/ImageDataUtil.hx",1235,0x59dddace)
HX_LOCAL_STACK_FRAME(_hx_pos_68d87270d4f7b5ed_1293_threshold,"lime._internal.graphics.ImageDataUtil","threshold",0x108d444c,"lime._internal.graphics.ImageDataUtil.threshold","lime/_internal/graphics/ImageDataUtil.hx",1293,0x59dddace)
HX_LOCAL_STACK_FRAME(_hx_pos_68d87270d4f7b5ed_1406_unmultiplyAlpha,"lime._internal.graphics.ImageDataUtil","unmultiplyAlpha",0x3b9ff802,"lime._internal.graphics.ImageDataUtil.unmultiplyAlpha","lime/_internal/graphics/ImageDataUtil.hx",1406,0x59dddace)
HX_LOCAL_STACK_FRAME(_hx_pos_68d87270d4f7b5ed_1432___boxBlur,"lime._internal.graphics.ImageDataUtil","__boxBlur",0xee145fd3,"lime._internal.graphics.ImageDataUtil.__boxBlur","lime/_internal/graphics/ImageDataUtil.hx",1432,0x59dddace)
HX_LOCAL_STACK_FRAME(_hx_pos_68d87270d4f7b5ed_1452___boxBlurH,"lime._internal.graphics.ImageDataUtil","__boxBlurH",0x63bf7915,"lime._internal.graphics.ImageDataUtil.__boxBlurH","lime/_internal/graphics/ImageDataUtil.hx",1452,0x59dddace)
HX_LOCAL_STACK_FRAME(_hx_pos_68d87270d4f7b5ed_1499___boxBlurT,"lime._internal.graphics.ImageDataUtil","__boxBlurT",0x63bf7921,"lime._internal.graphics.ImageDataUtil.__boxBlurT","lime/_internal/graphics/ImageDataUtil.hx",1499,0x59dddace)
HX_LOCAL_STACK_FRAME(_hx_pos_68d87270d4f7b5ed_1551___calculateSourceOffset,"lime._internal.graphics.ImageDataUtil","__calculateSourceOffset",0x5e2fc695,"lime._internal.graphics.ImageDataUtil.__calculateSourceOffset","lime/_internal/graphics/ImageDataUtil.hx",1551,0x59dddace)
HX_LOCAL_STACK_FRAME(_hx_pos_68d87270d4f7b5ed_1570___getBoxesForGaussianBlur,"lime._internal.graphics.ImageDataUtil","__getBoxesForGaussianBlur",0xdeeea6e9,"lime._internal.graphics.ImageDataUtil.__getBoxesForGaussianBlur","lime/_internal/graphics/ImageDataUtil.hx",1570,0x59dddace)
HX_LOCAL_STACK_FRAME(_hx_pos_68d87270d4f7b5ed_1589___pixelCompare,"lime._internal.graphics.ImageDataUtil","__pixelCompare",0xf2ff119e,"lime._internal.graphics.ImageDataUtil.__pixelCompare","lime/_internal/graphics/ImageDataUtil.hx",1589,0x59dddace)
HX_LOCAL_STACK_FRAME(_hx_pos_68d87270d4f7b5ed_1638___translatePixel,"lime._internal.graphics.ImageDataUtil","__translatePixel",0xf39bf4f7,"lime._internal.graphics.ImageDataUtil.__translatePixel","lime/_internal/graphics/ImageDataUtil.hx",1638,0x59dddace)
namespace lime{
namespace _internal{
namespace graphics{

void ImageDataUtil_obj::__construct() { }

Dynamic ImageDataUtil_obj::__CreateEmpty() { return new ImageDataUtil_obj; }

void *ImageDataUtil_obj::_hx_vtable = 0;

Dynamic ImageDataUtil_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ImageDataUtil_obj > _hx_result = new ImageDataUtil_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ImageDataUtil_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x173c18b5;
}

void ImageDataUtil_obj::displaceMap( ::lime::graphics::Image target, ::lime::graphics::Image source, ::lime::graphics::Image map, ::lime::math::Vector2 mapPoint, ::lime::math::Vector4 componentX, ::lime::math::Vector4 componentY,bool smooth){
            	HX_GC_STACKFRAME(&_hx_pos_68d87270d4f7b5ed_33_displaceMap)
HXLINE(  34)		 ::lime::utils::ArrayBufferView targetData = target->buffer->data;
HXLINE(  35)		 ::lime::utils::ArrayBufferView sourceData = source->buffer->data;
HXLINE(  36)		 ::lime::utils::ArrayBufferView mapData = map->buffer->data;
HXLINE(  38)		int targetFormat = target->buffer->format;
HXLINE(  39)		int sourceFormat = source->buffer->format;
HXLINE(  40)		int mapFormat = map->buffer->format;
HXLINE(  42)		bool targetPremultiplied = target->get_premultiplied();
HXLINE(  43)		bool sourcePremultiplied = source->get_premultiplied();
HXLINE(  44)		bool mapPremultiplied = map->get_premultiplied();
HXLINE(  46)		 ::lime::_internal::graphics::_ImageDataUtil::ImageDataView sourceView =  ::lime::_internal::graphics::_ImageDataUtil::ImageDataView_obj::__alloc( HX_CTX ,source,null());
HXLINE(  47)		 ::lime::_internal::graphics::_ImageDataUtil::ImageDataView mapView =  ::lime::_internal::graphics::_ImageDataUtil::ImageDataView_obj::__alloc( HX_CTX ,map,null());
HXLINE(  49)		int row;
HXLINE(  51)		int sourceOffset;
HXLINE(  53)		int sourcePixel = 0;
HXLINE(  54)		int mapPixel = 0;
HXLINE(  55)		int targetPixel = 0;
HXLINE(  57)		Float mapPixelX;
HXLINE(  58)		Float mapPixelY;
HXLINE(  59)		Float mapPixelA;
HXLINE(  62)		int s1 = 0;
HXLINE(  63)		int s2 = 0;
HXLINE(  64)		int s3 = 0;
HXLINE(  65)		int s4 = 0;
HXLINE(  67)		int mPointXFloor;
HXLINE(  68)		int mPointYFloor;
HXLINE(  70)		int disOffsetXFloor;
HXLINE(  71)		int disOffsetYFloor;
HXLINE(  73)		Float disX;
HXLINE(  74)		Float disY;
HXLINE(  76)		{
HXLINE(  76)			int _g = 0;
HXDLIN(  76)			int _g1 = sourceView->height;
HXDLIN(  76)			while((_g < _g1)){
HXLINE(  76)				_g = (_g + 1);
HXDLIN(  76)				int y = (_g - 1);
HXLINE(  78)				row = (sourceView->byteOffset + (sourceView->stride * y));
HXLINE(  80)				{
HXLINE(  80)					int _g1 = 0;
HXDLIN(  80)					int _g2 = sourceView->width;
HXDLIN(  80)					while((_g1 < _g2)){
HXLINE(  80)						_g1 = (_g1 + 1);
HXDLIN(  80)						int x = (_g1 - 1);
HXLINE(  82)						sourceOffset = (row + (x * 4));
HXLINE(  84)						mPointXFloor = ::Std_obj::_hx_int(mapPoint->x);
HXLINE(  85)						mPointYFloor = ::Std_obj::_hx_int(mapPoint->y);
HXLINE(  87)						if (smooth) {
HXLINE(  89)							{
HXLINE(  89)								int offset = ((sourceView->byteOffset + (sourceView->stride * ((y - mPointYFloor) + 1))) + ((x - mPointXFloor) * 4));
HXDLIN(  89)								switch((int)(mapFormat)){
            									case (int)0: {
HXLINE(  89)										int r = ( (int)(( ::__hxcpp_memory_get_byte(mapData->buffer->b,(mapData->byteOffset + offset)) & 255)) );
HXDLIN(  89)										int g = ( (int)(( ::__hxcpp_memory_get_byte(mapData->buffer->b,(mapData->byteOffset + (offset + 1))) & 255)) );
HXDLIN(  89)										int b = ( (int)(( ::__hxcpp_memory_get_byte(mapData->buffer->b,(mapData->byteOffset + (offset + 2))) & 255)) );
HXDLIN(  89)										s1 = (((((r & 255) << 24) | ((g & 255) << 16)) | ((b & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(mapData->buffer->b,(mapData->byteOffset + (offset + 3))) & 255)) ) & 255));
            									}
            									break;
            									case (int)1: {
HXLINE(  89)										int r = ( (int)(( ::__hxcpp_memory_get_byte(mapData->buffer->b,(mapData->byteOffset + (offset + 1))) & 255)) );
HXDLIN(  89)										int g = ( (int)(( ::__hxcpp_memory_get_byte(mapData->buffer->b,(mapData->byteOffset + (offset + 2))) & 255)) );
HXDLIN(  89)										int b = ( (int)(( ::__hxcpp_memory_get_byte(mapData->buffer->b,(mapData->byteOffset + (offset + 3))) & 255)) );
HXDLIN(  89)										s1 = (((((r & 255) << 24) | ((g & 255) << 16)) | ((b & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(mapData->buffer->b,(mapData->byteOffset + offset)) & 255)) ) & 255));
            									}
            									break;
            									case (int)2: {
HXLINE(  89)										int r = ( (int)(( ::__hxcpp_memory_get_byte(mapData->buffer->b,(mapData->byteOffset + (offset + 2))) & 255)) );
HXDLIN(  89)										int g = ( (int)(( ::__hxcpp_memory_get_byte(mapData->buffer->b,(mapData->byteOffset + (offset + 1))) & 255)) );
HXDLIN(  89)										int b = ( (int)(( ::__hxcpp_memory_get_byte(mapData->buffer->b,(mapData->byteOffset + offset)) & 255)) );
HXDLIN(  89)										s1 = (((((r & 255) << 24) | ((g & 255) << 16)) | ((b & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(mapData->buffer->b,(mapData->byteOffset + (offset + 3))) & 255)) ) & 255));
            									}
            									break;
            								}
HXDLIN(  89)								if (mapPremultiplied) {
HXLINE(  89)									bool _hx_tmp;
HXDLIN(  89)									if (((s1 & 255) != 0)) {
HXLINE(  89)										_hx_tmp = ((s1 & 255) != 255);
            									}
            									else {
HXLINE(  89)										_hx_tmp = false;
            									}
HXDLIN(  89)									if (_hx_tmp) {
HXLINE(  89)										::lime::math::_RGBA::RGBA_Impl__obj::unmult = (((Float)255.0) / ( (Float)((s1 & 255)) ));
HXDLIN(  89)										{
HXLINE(  89)											 ::lime::utils::ArrayBufferView this1 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN(  89)											int r = ( (int)(( ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + ::Math_obj::round((( (Float)((::hx::UShr(s1,24) & 255)) ) * ::lime::math::_RGBA::RGBA_Impl__obj::unmult)))) & 255)) );
HXDLIN(  89)											 ::lime::utils::ArrayBufferView this2 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN(  89)											int g = ( (int)(( ::__hxcpp_memory_get_byte(this2->buffer->b,(this2->byteOffset + ::Math_obj::round((( (Float)((::hx::UShr(s1,16) & 255)) ) * ::lime::math::_RGBA::RGBA_Impl__obj::unmult)))) & 255)) );
HXDLIN(  89)											 ::lime::utils::ArrayBufferView this3 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN(  89)											s1 = (((((r & 255) << 24) | ((g & 255) << 16)) | ((( (int)(( ::__hxcpp_memory_get_byte(this3->buffer->b,(this3->byteOffset + ::Math_obj::round((( (Float)((::hx::UShr(s1,8) & 255)) ) * ::lime::math::_RGBA::RGBA_Impl__obj::unmult)))) & 255)) ) & 255) << 8)) | ((s1 & 255) & 255));
            										}
            									}
            								}
            							}
HXLINE(  90)							{
HXLINE(  90)								int offset1 = ((sourceView->byteOffset + (sourceView->stride * (y - mPointYFloor))) + (((x - mPointXFloor) + 1) * 4));
HXDLIN(  90)								switch((int)(mapFormat)){
            									case (int)0: {
HXLINE(  90)										int r = ( (int)(( ::__hxcpp_memory_get_byte(mapData->buffer->b,(mapData->byteOffset + offset1)) & 255)) );
HXDLIN(  90)										int g = ( (int)(( ::__hxcpp_memory_get_byte(mapData->buffer->b,(mapData->byteOffset + (offset1 + 1))) & 255)) );
HXDLIN(  90)										int b = ( (int)(( ::__hxcpp_memory_get_byte(mapData->buffer->b,(mapData->byteOffset + (offset1 + 2))) & 255)) );
HXDLIN(  90)										s2 = (((((r & 255) << 24) | ((g & 255) << 16)) | ((b & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(mapData->buffer->b,(mapData->byteOffset + (offset1 + 3))) & 255)) ) & 255));
            									}
            									break;
            									case (int)1: {
HXLINE(  90)										int r = ( (int)(( ::__hxcpp_memory_get_byte(mapData->buffer->b,(mapData->byteOffset + (offset1 + 1))) & 255)) );
HXDLIN(  90)										int g = ( (int)(( ::__hxcpp_memory_get_byte(mapData->buffer->b,(mapData->byteOffset + (offset1 + 2))) & 255)) );
HXDLIN(  90)										int b = ( (int)(( ::__hxcpp_memory_get_byte(mapData->buffer->b,(mapData->byteOffset + (offset1 + 3))) & 255)) );
HXDLIN(  90)										s2 = (((((r & 255) << 24) | ((g & 255) << 16)) | ((b & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(mapData->buffer->b,(mapData->byteOffset + offset1)) & 255)) ) & 255));
            									}
            									break;
            									case (int)2: {
HXLINE(  90)										int r = ( (int)(( ::__hxcpp_memory_get_byte(mapData->buffer->b,(mapData->byteOffset + (offset1 + 2))) & 255)) );
HXDLIN(  90)										int g = ( (int)(( ::__hxcpp_memory_get_byte(mapData->buffer->b,(mapData->byteOffset + (offset1 + 1))) & 255)) );
HXDLIN(  90)										int b = ( (int)(( ::__hxcpp_memory_get_byte(mapData->buffer->b,(mapData->byteOffset + offset1)) & 255)) );
HXDLIN(  90)										s2 = (((((r & 255) << 24) | ((g & 255) << 16)) | ((b & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(mapData->buffer->b,(mapData->byteOffset + (offset1 + 3))) & 255)) ) & 255));
            									}
            									break;
            								}
HXDLIN(  90)								if (mapPremultiplied) {
HXLINE(  90)									bool _hx_tmp;
HXDLIN(  90)									if (((s2 & 255) != 0)) {
HXLINE(  90)										_hx_tmp = ((s2 & 255) != 255);
            									}
            									else {
HXLINE(  90)										_hx_tmp = false;
            									}
HXDLIN(  90)									if (_hx_tmp) {
HXLINE(  90)										::lime::math::_RGBA::RGBA_Impl__obj::unmult = (((Float)255.0) / ( (Float)((s2 & 255)) ));
HXDLIN(  90)										{
HXLINE(  90)											 ::lime::utils::ArrayBufferView this1 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN(  90)											int r = ( (int)(( ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + ::Math_obj::round((( (Float)((::hx::UShr(s2,24) & 255)) ) * ::lime::math::_RGBA::RGBA_Impl__obj::unmult)))) & 255)) );
HXDLIN(  90)											 ::lime::utils::ArrayBufferView this2 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN(  90)											int g = ( (int)(( ::__hxcpp_memory_get_byte(this2->buffer->b,(this2->byteOffset + ::Math_obj::round((( (Float)((::hx::UShr(s2,16) & 255)) ) * ::lime::math::_RGBA::RGBA_Impl__obj::unmult)))) & 255)) );
HXDLIN(  90)											 ::lime::utils::ArrayBufferView this3 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN(  90)											s2 = (((((r & 255) << 24) | ((g & 255) << 16)) | ((( (int)(( ::__hxcpp_memory_get_byte(this3->buffer->b,(this3->byteOffset + ::Math_obj::round((( (Float)((::hx::UShr(s2,8) & 255)) ) * ::lime::math::_RGBA::RGBA_Impl__obj::unmult)))) & 255)) ) & 255) << 8)) | ((s2 & 255) & 255));
            										}
            									}
            								}
            							}
HXLINE(  91)							{
HXLINE(  91)								int offset2 = ((sourceView->byteOffset + (sourceView->stride * ((y - mPointYFloor) + 1))) + (((x - mPointXFloor) + 1) * 4));
HXDLIN(  91)								switch((int)(mapFormat)){
            									case (int)0: {
HXLINE(  91)										int r = ( (int)(( ::__hxcpp_memory_get_byte(mapData->buffer->b,(mapData->byteOffset + offset2)) & 255)) );
HXDLIN(  91)										int g = ( (int)(( ::__hxcpp_memory_get_byte(mapData->buffer->b,(mapData->byteOffset + (offset2 + 1))) & 255)) );
HXDLIN(  91)										int b = ( (int)(( ::__hxcpp_memory_get_byte(mapData->buffer->b,(mapData->byteOffset + (offset2 + 2))) & 255)) );
HXDLIN(  91)										s3 = (((((r & 255) << 24) | ((g & 255) << 16)) | ((b & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(mapData->buffer->b,(mapData->byteOffset + (offset2 + 3))) & 255)) ) & 255));
            									}
            									break;
            									case (int)1: {
HXLINE(  91)										int r = ( (int)(( ::__hxcpp_memory_get_byte(mapData->buffer->b,(mapData->byteOffset + (offset2 + 1))) & 255)) );
HXDLIN(  91)										int g = ( (int)(( ::__hxcpp_memory_get_byte(mapData->buffer->b,(mapData->byteOffset + (offset2 + 2))) & 255)) );
HXDLIN(  91)										int b = ( (int)(( ::__hxcpp_memory_get_byte(mapData->buffer->b,(mapData->byteOffset + (offset2 + 3))) & 255)) );
HXDLIN(  91)										s3 = (((((r & 255) << 24) | ((g & 255) << 16)) | ((b & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(mapData->buffer->b,(mapData->byteOffset + offset2)) & 255)) ) & 255));
            									}
            									break;
            									case (int)2: {
HXLINE(  91)										int r = ( (int)(( ::__hxcpp_memory_get_byte(mapData->buffer->b,(mapData->byteOffset + (offset2 + 2))) & 255)) );
HXDLIN(  91)										int g = ( (int)(( ::__hxcpp_memory_get_byte(mapData->buffer->b,(mapData->byteOffset + (offset2 + 1))) & 255)) );
HXDLIN(  91)										int b = ( (int)(( ::__hxcpp_memory_get_byte(mapData->buffer->b,(mapData->byteOffset + offset2)) & 255)) );
HXDLIN(  91)										s3 = (((((r & 255) << 24) | ((g & 255) << 16)) | ((b & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(mapData->buffer->b,(mapData->byteOffset + (offset2 + 3))) & 255)) ) & 255));
            									}
            									break;
            								}
HXDLIN(  91)								if (mapPremultiplied) {
HXLINE(  91)									bool _hx_tmp;
HXDLIN(  91)									if (((s3 & 255) != 0)) {
HXLINE(  91)										_hx_tmp = ((s3 & 255) != 255);
            									}
            									else {
HXLINE(  91)										_hx_tmp = false;
            									}
HXDLIN(  91)									if (_hx_tmp) {
HXLINE(  91)										::lime::math::_RGBA::RGBA_Impl__obj::unmult = (((Float)255.0) / ( (Float)((s3 & 255)) ));
HXDLIN(  91)										{
HXLINE(  91)											 ::lime::utils::ArrayBufferView this1 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN(  91)											int r = ( (int)(( ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + ::Math_obj::round((( (Float)((::hx::UShr(s3,24) & 255)) ) * ::lime::math::_RGBA::RGBA_Impl__obj::unmult)))) & 255)) );
HXDLIN(  91)											 ::lime::utils::ArrayBufferView this2 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN(  91)											int g = ( (int)(( ::__hxcpp_memory_get_byte(this2->buffer->b,(this2->byteOffset + ::Math_obj::round((( (Float)((::hx::UShr(s3,16) & 255)) ) * ::lime::math::_RGBA::RGBA_Impl__obj::unmult)))) & 255)) );
HXDLIN(  91)											 ::lime::utils::ArrayBufferView this3 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN(  91)											s3 = (((((r & 255) << 24) | ((g & 255) << 16)) | ((( (int)(( ::__hxcpp_memory_get_byte(this3->buffer->b,(this3->byteOffset + ::Math_obj::round((( (Float)((::hx::UShr(s3,8) & 255)) ) * ::lime::math::_RGBA::RGBA_Impl__obj::unmult)))) & 255)) ) & 255) << 8)) | ((s3 & 255) & 255));
            										}
            									}
            								}
            							}
HXLINE(  92)							{
HXLINE(  92)								int offset3 = ((sourceView->byteOffset + (sourceView->stride * (y - mPointYFloor))) + ((x - mPointXFloor) * 4));
HXDLIN(  92)								switch((int)(mapFormat)){
            									case (int)0: {
HXLINE(  92)										int r = ( (int)(( ::__hxcpp_memory_get_byte(mapData->buffer->b,(mapData->byteOffset + offset3)) & 255)) );
HXDLIN(  92)										int g = ( (int)(( ::__hxcpp_memory_get_byte(mapData->buffer->b,(mapData->byteOffset + (offset3 + 1))) & 255)) );
HXDLIN(  92)										int b = ( (int)(( ::__hxcpp_memory_get_byte(mapData->buffer->b,(mapData->byteOffset + (offset3 + 2))) & 255)) );
HXDLIN(  92)										s4 = (((((r & 255) << 24) | ((g & 255) << 16)) | ((b & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(mapData->buffer->b,(mapData->byteOffset + (offset3 + 3))) & 255)) ) & 255));
            									}
            									break;
            									case (int)1: {
HXLINE(  92)										int r = ( (int)(( ::__hxcpp_memory_get_byte(mapData->buffer->b,(mapData->byteOffset + (offset3 + 1))) & 255)) );
HXDLIN(  92)										int g = ( (int)(( ::__hxcpp_memory_get_byte(mapData->buffer->b,(mapData->byteOffset + (offset3 + 2))) & 255)) );
HXDLIN(  92)										int b = ( (int)(( ::__hxcpp_memory_get_byte(mapData->buffer->b,(mapData->byteOffset + (offset3 + 3))) & 255)) );
HXDLIN(  92)										s4 = (((((r & 255) << 24) | ((g & 255) << 16)) | ((b & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(mapData->buffer->b,(mapData->byteOffset + offset3)) & 255)) ) & 255));
            									}
            									break;
            									case (int)2: {
HXLINE(  92)										int r = ( (int)(( ::__hxcpp_memory_get_byte(mapData->buffer->b,(mapData->byteOffset + (offset3 + 2))) & 255)) );
HXDLIN(  92)										int g = ( (int)(( ::__hxcpp_memory_get_byte(mapData->buffer->b,(mapData->byteOffset + (offset3 + 1))) & 255)) );
HXDLIN(  92)										int b = ( (int)(( ::__hxcpp_memory_get_byte(mapData->buffer->b,(mapData->byteOffset + offset3)) & 255)) );
HXDLIN(  92)										s4 = (((((r & 255) << 24) | ((g & 255) << 16)) | ((b & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(mapData->buffer->b,(mapData->byteOffset + (offset3 + 3))) & 255)) ) & 255));
            									}
            									break;
            								}
HXDLIN(  92)								if (mapPremultiplied) {
HXLINE(  92)									bool _hx_tmp;
HXDLIN(  92)									if (((s4 & 255) != 0)) {
HXLINE(  92)										_hx_tmp = ((s4 & 255) != 255);
            									}
            									else {
HXLINE(  92)										_hx_tmp = false;
            									}
HXDLIN(  92)									if (_hx_tmp) {
HXLINE(  92)										::lime::math::_RGBA::RGBA_Impl__obj::unmult = (((Float)255.0) / ( (Float)((s4 & 255)) ));
HXDLIN(  92)										{
HXLINE(  92)											 ::lime::utils::ArrayBufferView this1 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN(  92)											int r = ( (int)(( ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + ::Math_obj::round((( (Float)((::hx::UShr(s4,24) & 255)) ) * ::lime::math::_RGBA::RGBA_Impl__obj::unmult)))) & 255)) );
HXDLIN(  92)											 ::lime::utils::ArrayBufferView this2 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN(  92)											int g = ( (int)(( ::__hxcpp_memory_get_byte(this2->buffer->b,(this2->byteOffset + ::Math_obj::round((( (Float)((::hx::UShr(s4,16) & 255)) ) * ::lime::math::_RGBA::RGBA_Impl__obj::unmult)))) & 255)) );
HXDLIN(  92)											 ::lime::utils::ArrayBufferView this3 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN(  92)											s4 = (((((r & 255) << 24) | ((g & 255) << 16)) | ((( (int)(( ::__hxcpp_memory_get_byte(this3->buffer->b,(this3->byteOffset + ::Math_obj::round((( (Float)((::hx::UShr(s4,8) & 255)) ) * ::lime::math::_RGBA::RGBA_Impl__obj::unmult)))) & 255)) ) & 255) << 8)) | ((s4 & 255) & 255));
            										}
            									}
            								}
            							}
HXLINE(  94)							mapPixel = ::lime::_internal::graphics::ImageDataUtil_obj::bilinear(s1,s2,s3,s4,(mapPoint->x - ( (Float)(mPointXFloor) )),(mapPoint->y - ( (Float)(mPointYFloor) )));
            						}
            						else {
HXLINE(  98)							int offset = ((mapView->byteOffset + (mapView->stride * (y - mPointYFloor))) + ((x - mPointXFloor) * 4));
HXDLIN(  98)							switch((int)(mapFormat)){
            								case (int)0: {
HXLINE(  98)									int r = ( (int)(( ::__hxcpp_memory_get_byte(mapData->buffer->b,(mapData->byteOffset + offset)) & 255)) );
HXDLIN(  98)									int g = ( (int)(( ::__hxcpp_memory_get_byte(mapData->buffer->b,(mapData->byteOffset + (offset + 1))) & 255)) );
HXDLIN(  98)									int b = ( (int)(( ::__hxcpp_memory_get_byte(mapData->buffer->b,(mapData->byteOffset + (offset + 2))) & 255)) );
HXDLIN(  98)									mapPixel = (((((r & 255) << 24) | ((g & 255) << 16)) | ((b & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(mapData->buffer->b,(mapData->byteOffset + (offset + 3))) & 255)) ) & 255));
            								}
            								break;
            								case (int)1: {
HXLINE(  98)									int r = ( (int)(( ::__hxcpp_memory_get_byte(mapData->buffer->b,(mapData->byteOffset + (offset + 1))) & 255)) );
HXDLIN(  98)									int g = ( (int)(( ::__hxcpp_memory_get_byte(mapData->buffer->b,(mapData->byteOffset + (offset + 2))) & 255)) );
HXDLIN(  98)									int b = ( (int)(( ::__hxcpp_memory_get_byte(mapData->buffer->b,(mapData->byteOffset + (offset + 3))) & 255)) );
HXDLIN(  98)									mapPixel = (((((r & 255) << 24) | ((g & 255) << 16)) | ((b & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(mapData->buffer->b,(mapData->byteOffset + offset)) & 255)) ) & 255));
            								}
            								break;
            								case (int)2: {
HXLINE(  98)									int r = ( (int)(( ::__hxcpp_memory_get_byte(mapData->buffer->b,(mapData->byteOffset + (offset + 2))) & 255)) );
HXDLIN(  98)									int g = ( (int)(( ::__hxcpp_memory_get_byte(mapData->buffer->b,(mapData->byteOffset + (offset + 1))) & 255)) );
HXDLIN(  98)									int b = ( (int)(( ::__hxcpp_memory_get_byte(mapData->buffer->b,(mapData->byteOffset + offset)) & 255)) );
HXDLIN(  98)									mapPixel = (((((r & 255) << 24) | ((g & 255) << 16)) | ((b & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(mapData->buffer->b,(mapData->byteOffset + (offset + 3))) & 255)) ) & 255));
            								}
            								break;
            							}
HXDLIN(  98)							if (mapPremultiplied) {
HXLINE(  98)								bool _hx_tmp;
HXDLIN(  98)								if (((mapPixel & 255) != 0)) {
HXLINE(  98)									_hx_tmp = ((mapPixel & 255) != 255);
            								}
            								else {
HXLINE(  98)									_hx_tmp = false;
            								}
HXDLIN(  98)								if (_hx_tmp) {
HXLINE(  98)									::lime::math::_RGBA::RGBA_Impl__obj::unmult = (((Float)255.0) / ( (Float)((mapPixel & 255)) ));
HXDLIN(  98)									{
HXLINE(  98)										 ::lime::utils::ArrayBufferView this1 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN(  98)										int r = ( (int)(( ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + ::Math_obj::round((( (Float)((::hx::UShr(mapPixel,24) & 255)) ) * ::lime::math::_RGBA::RGBA_Impl__obj::unmult)))) & 255)) );
HXDLIN(  98)										 ::lime::utils::ArrayBufferView this2 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN(  98)										int g = ( (int)(( ::__hxcpp_memory_get_byte(this2->buffer->b,(this2->byteOffset + ::Math_obj::round((( (Float)((::hx::UShr(mapPixel,16) & 255)) ) * ::lime::math::_RGBA::RGBA_Impl__obj::unmult)))) & 255)) );
HXDLIN(  98)										 ::lime::utils::ArrayBufferView this3 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN(  98)										mapPixel = (((((r & 255) << 24) | ((g & 255) << 16)) | ((( (int)(( ::__hxcpp_memory_get_byte(this3->buffer->b,(this3->byteOffset + ::Math_obj::round((( (Float)((::hx::UShr(mapPixel,8) & 255)) ) * ::lime::math::_RGBA::RGBA_Impl__obj::unmult)))) & 255)) ) & 255) << 8)) | ((mapPixel & 255) & 255));
            									}
            								}
            							}
            						}
HXLINE( 101)						mapPixelA = (( (Float)((mapPixel & 255)) ) / ((Float)255.0));
HXLINE( 102)						mapPixelX = ((( (Float)(((::hx::UShr(mapPixel,24) & 255) - 128)) ) / ((Float)255.0)) * mapPixelA);
HXLINE( 103)						mapPixelY = ((( (Float)(((::hx::UShr(mapPixel,16) & 255) - 128)) ) / ((Float)255.0)) * mapPixelA);
HXLINE( 105)						disX = ((mapPixelX * componentX->x) + (mapPixelY * componentY->x));
HXLINE( 106)						disY = ((mapPixelX * componentX->y) + (mapPixelY * componentY->y));
HXLINE( 108)						disOffsetXFloor = ::Math_obj::floor((disX * ( (Float)(sourceView->width) )));
HXLINE( 109)						disOffsetYFloor = ::Math_obj::floor((disY * ( (Float)(sourceView->height) )));
HXLINE( 111)						if (smooth) {
HXLINE( 113)							{
HXLINE( 113)								int offset = ((sourceView->byteOffset + (sourceView->stride * ((y + disOffsetYFloor) + 1))) + ((x + disOffsetXFloor) * 4));
HXDLIN( 113)								switch((int)(sourceFormat)){
            									case (int)0: {
HXLINE( 113)										int r = ( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + offset)) & 255)) );
HXDLIN( 113)										int g = ( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + (offset + 1))) & 255)) );
HXDLIN( 113)										int b = ( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + (offset + 2))) & 255)) );
HXDLIN( 113)										s1 = (((((r & 255) << 24) | ((g & 255) << 16)) | ((b & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + (offset + 3))) & 255)) ) & 255));
            									}
            									break;
            									case (int)1: {
HXLINE( 113)										int r = ( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + (offset + 1))) & 255)) );
HXDLIN( 113)										int g = ( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + (offset + 2))) & 255)) );
HXDLIN( 113)										int b = ( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + (offset + 3))) & 255)) );
HXDLIN( 113)										s1 = (((((r & 255) << 24) | ((g & 255) << 16)) | ((b & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + offset)) & 255)) ) & 255));
            									}
            									break;
            									case (int)2: {
HXLINE( 113)										int r = ( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + (offset + 2))) & 255)) );
HXDLIN( 113)										int g = ( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + (offset + 1))) & 255)) );
HXDLIN( 113)										int b = ( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + offset)) & 255)) );
HXDLIN( 113)										s1 = (((((r & 255) << 24) | ((g & 255) << 16)) | ((b & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + (offset + 3))) & 255)) ) & 255));
            									}
            									break;
            								}
HXDLIN( 113)								if (sourcePremultiplied) {
HXLINE( 113)									bool _hx_tmp;
HXDLIN( 113)									if (((s1 & 255) != 0)) {
HXLINE( 113)										_hx_tmp = ((s1 & 255) != 255);
            									}
            									else {
HXLINE( 113)										_hx_tmp = false;
            									}
HXDLIN( 113)									if (_hx_tmp) {
HXLINE( 113)										::lime::math::_RGBA::RGBA_Impl__obj::unmult = (((Float)255.0) / ( (Float)((s1 & 255)) ));
HXDLIN( 113)										{
HXLINE( 113)											 ::lime::utils::ArrayBufferView this1 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN( 113)											int r = ( (int)(( ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + ::Math_obj::round((( (Float)((::hx::UShr(s1,24) & 255)) ) * ::lime::math::_RGBA::RGBA_Impl__obj::unmult)))) & 255)) );
HXDLIN( 113)											 ::lime::utils::ArrayBufferView this2 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN( 113)											int g = ( (int)(( ::__hxcpp_memory_get_byte(this2->buffer->b,(this2->byteOffset + ::Math_obj::round((( (Float)((::hx::UShr(s1,16) & 255)) ) * ::lime::math::_RGBA::RGBA_Impl__obj::unmult)))) & 255)) );
HXDLIN( 113)											 ::lime::utils::ArrayBufferView this3 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN( 113)											s1 = (((((r & 255) << 24) | ((g & 255) << 16)) | ((( (int)(( ::__hxcpp_memory_get_byte(this3->buffer->b,(this3->byteOffset + ::Math_obj::round((( (Float)((::hx::UShr(s1,8) & 255)) ) * ::lime::math::_RGBA::RGBA_Impl__obj::unmult)))) & 255)) ) & 255) << 8)) | ((s1 & 255) & 255));
            										}
            									}
            								}
            							}
HXLINE( 114)							{
HXLINE( 114)								int offset1 = ((sourceView->byteOffset + (sourceView->stride * (y + disOffsetYFloor))) + (((x + disOffsetXFloor) + 1) * 4));
HXDLIN( 114)								switch((int)(sourceFormat)){
            									case (int)0: {
HXLINE( 114)										int r = ( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + offset1)) & 255)) );
HXDLIN( 114)										int g = ( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + (offset1 + 1))) & 255)) );
HXDLIN( 114)										int b = ( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + (offset1 + 2))) & 255)) );
HXDLIN( 114)										s2 = (((((r & 255) << 24) | ((g & 255) << 16)) | ((b & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + (offset1 + 3))) & 255)) ) & 255));
            									}
            									break;
            									case (int)1: {
HXLINE( 114)										int r = ( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + (offset1 + 1))) & 255)) );
HXDLIN( 114)										int g = ( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + (offset1 + 2))) & 255)) );
HXDLIN( 114)										int b = ( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + (offset1 + 3))) & 255)) );
HXDLIN( 114)										s2 = (((((r & 255) << 24) | ((g & 255) << 16)) | ((b & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + offset1)) & 255)) ) & 255));
            									}
            									break;
            									case (int)2: {
HXLINE( 114)										int r = ( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + (offset1 + 2))) & 255)) );
HXDLIN( 114)										int g = ( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + (offset1 + 1))) & 255)) );
HXDLIN( 114)										int b = ( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + offset1)) & 255)) );
HXDLIN( 114)										s2 = (((((r & 255) << 24) | ((g & 255) << 16)) | ((b & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + (offset1 + 3))) & 255)) ) & 255));
            									}
            									break;
            								}
HXDLIN( 114)								if (sourcePremultiplied) {
HXLINE( 114)									bool _hx_tmp;
HXDLIN( 114)									if (((s2 & 255) != 0)) {
HXLINE( 114)										_hx_tmp = ((s2 & 255) != 255);
            									}
            									else {
HXLINE( 114)										_hx_tmp = false;
            									}
HXDLIN( 114)									if (_hx_tmp) {
HXLINE( 114)										::lime::math::_RGBA::RGBA_Impl__obj::unmult = (((Float)255.0) / ( (Float)((s2 & 255)) ));
HXDLIN( 114)										{
HXLINE( 114)											 ::lime::utils::ArrayBufferView this1 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN( 114)											int r = ( (int)(( ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + ::Math_obj::round((( (Float)((::hx::UShr(s2,24) & 255)) ) * ::lime::math::_RGBA::RGBA_Impl__obj::unmult)))) & 255)) );
HXDLIN( 114)											 ::lime::utils::ArrayBufferView this2 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN( 114)											int g = ( (int)(( ::__hxcpp_memory_get_byte(this2->buffer->b,(this2->byteOffset + ::Math_obj::round((( (Float)((::hx::UShr(s2,16) & 255)) ) * ::lime::math::_RGBA::RGBA_Impl__obj::unmult)))) & 255)) );
HXDLIN( 114)											 ::lime::utils::ArrayBufferView this3 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN( 114)											s2 = (((((r & 255) << 24) | ((g & 255) << 16)) | ((( (int)(( ::__hxcpp_memory_get_byte(this3->buffer->b,(this3->byteOffset + ::Math_obj::round((( (Float)((::hx::UShr(s2,8) & 255)) ) * ::lime::math::_RGBA::RGBA_Impl__obj::unmult)))) & 255)) ) & 255) << 8)) | ((s2 & 255) & 255));
            										}
            									}
            								}
            							}
HXLINE( 115)							{
HXLINE( 115)								int offset2 = ((sourceView->byteOffset + (sourceView->stride * ((y + disOffsetYFloor) + 1))) + (((x + disOffsetXFloor) + 1) * 4));
HXDLIN( 115)								switch((int)(sourceFormat)){
            									case (int)0: {
HXLINE( 115)										int r = ( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + offset2)) & 255)) );
HXDLIN( 115)										int g = ( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + (offset2 + 1))) & 255)) );
HXDLIN( 115)										int b = ( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + (offset2 + 2))) & 255)) );
HXDLIN( 115)										s3 = (((((r & 255) << 24) | ((g & 255) << 16)) | ((b & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + (offset2 + 3))) & 255)) ) & 255));
            									}
            									break;
            									case (int)1: {
HXLINE( 115)										int r = ( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + (offset2 + 1))) & 255)) );
HXDLIN( 115)										int g = ( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + (offset2 + 2))) & 255)) );
HXDLIN( 115)										int b = ( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + (offset2 + 3))) & 255)) );
HXDLIN( 115)										s3 = (((((r & 255) << 24) | ((g & 255) << 16)) | ((b & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + offset2)) & 255)) ) & 255));
            									}
            									break;
            									case (int)2: {
HXLINE( 115)										int r = ( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + (offset2 + 2))) & 255)) );
HXDLIN( 115)										int g = ( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + (offset2 + 1))) & 255)) );
HXDLIN( 115)										int b = ( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + offset2)) & 255)) );
HXDLIN( 115)										s3 = (((((r & 255) << 24) | ((g & 255) << 16)) | ((b & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + (offset2 + 3))) & 255)) ) & 255));
            									}
            									break;
            								}
HXDLIN( 115)								if (sourcePremultiplied) {
HXLINE( 115)									bool _hx_tmp;
HXDLIN( 115)									if (((s3 & 255) != 0)) {
HXLINE( 115)										_hx_tmp = ((s3 & 255) != 255);
            									}
            									else {
HXLINE( 115)										_hx_tmp = false;
            									}
HXDLIN( 115)									if (_hx_tmp) {
HXLINE( 115)										::lime::math::_RGBA::RGBA_Impl__obj::unmult = (((Float)255.0) / ( (Float)((s3 & 255)) ));
HXDLIN( 115)										{
HXLINE( 115)											 ::lime::utils::ArrayBufferView this1 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN( 115)											int r = ( (int)(( ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + ::Math_obj::round((( (Float)((::hx::UShr(s3,24) & 255)) ) * ::lime::math::_RGBA::RGBA_Impl__obj::unmult)))) & 255)) );
HXDLIN( 115)											 ::lime::utils::ArrayBufferView this2 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN( 115)											int g = ( (int)(( ::__hxcpp_memory_get_byte(this2->buffer->b,(this2->byteOffset + ::Math_obj::round((( (Float)((::hx::UShr(s3,16) & 255)) ) * ::lime::math::_RGBA::RGBA_Impl__obj::unmult)))) & 255)) );
HXDLIN( 115)											 ::lime::utils::ArrayBufferView this3 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN( 115)											s3 = (((((r & 255) << 24) | ((g & 255) << 16)) | ((( (int)(( ::__hxcpp_memory_get_byte(this3->buffer->b,(this3->byteOffset + ::Math_obj::round((( (Float)((::hx::UShr(s3,8) & 255)) ) * ::lime::math::_RGBA::RGBA_Impl__obj::unmult)))) & 255)) ) & 255) << 8)) | ((s3 & 255) & 255));
            										}
            									}
            								}
            							}
HXLINE( 116)							{
HXLINE( 116)								int offset3 = ((sourceView->byteOffset + (sourceView->stride * (y + disOffsetYFloor))) + ((x + disOffsetXFloor) * 4));
HXDLIN( 116)								switch((int)(sourceFormat)){
            									case (int)0: {
HXLINE( 116)										int r = ( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + offset3)) & 255)) );
HXDLIN( 116)										int g = ( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + (offset3 + 1))) & 255)) );
HXDLIN( 116)										int b = ( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + (offset3 + 2))) & 255)) );
HXDLIN( 116)										s4 = (((((r & 255) << 24) | ((g & 255) << 16)) | ((b & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + (offset3 + 3))) & 255)) ) & 255));
            									}
            									break;
            									case (int)1: {
HXLINE( 116)										int r = ( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + (offset3 + 1))) & 255)) );
HXDLIN( 116)										int g = ( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + (offset3 + 2))) & 255)) );
HXDLIN( 116)										int b = ( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + (offset3 + 3))) & 255)) );
HXDLIN( 116)										s4 = (((((r & 255) << 24) | ((g & 255) << 16)) | ((b & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + offset3)) & 255)) ) & 255));
            									}
            									break;
            									case (int)2: {
HXLINE( 116)										int r = ( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + (offset3 + 2))) & 255)) );
HXDLIN( 116)										int g = ( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + (offset3 + 1))) & 255)) );
HXDLIN( 116)										int b = ( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + offset3)) & 255)) );
HXDLIN( 116)										s4 = (((((r & 255) << 24) | ((g & 255) << 16)) | ((b & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + (offset3 + 3))) & 255)) ) & 255));
            									}
            									break;
            								}
HXDLIN( 116)								if (sourcePremultiplied) {
HXLINE( 116)									bool _hx_tmp;
HXDLIN( 116)									if (((s4 & 255) != 0)) {
HXLINE( 116)										_hx_tmp = ((s4 & 255) != 255);
            									}
            									else {
HXLINE( 116)										_hx_tmp = false;
            									}
HXDLIN( 116)									if (_hx_tmp) {
HXLINE( 116)										::lime::math::_RGBA::RGBA_Impl__obj::unmult = (((Float)255.0) / ( (Float)((s4 & 255)) ));
HXDLIN( 116)										{
HXLINE( 116)											 ::lime::utils::ArrayBufferView this1 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN( 116)											int r = ( (int)(( ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + ::Math_obj::round((( (Float)((::hx::UShr(s4,24) & 255)) ) * ::lime::math::_RGBA::RGBA_Impl__obj::unmult)))) & 255)) );
HXDLIN( 116)											 ::lime::utils::ArrayBufferView this2 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN( 116)											int g = ( (int)(( ::__hxcpp_memory_get_byte(this2->buffer->b,(this2->byteOffset + ::Math_obj::round((( (Float)((::hx::UShr(s4,16) & 255)) ) * ::lime::math::_RGBA::RGBA_Impl__obj::unmult)))) & 255)) );
HXDLIN( 116)											 ::lime::utils::ArrayBufferView this3 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN( 116)											s4 = (((((r & 255) << 24) | ((g & 255) << 16)) | ((( (int)(( ::__hxcpp_memory_get_byte(this3->buffer->b,(this3->byteOffset + ::Math_obj::round((( (Float)((::hx::UShr(s4,8) & 255)) ) * ::lime::math::_RGBA::RGBA_Impl__obj::unmult)))) & 255)) ) & 255) << 8)) | ((s4 & 255) & 255));
            										}
            									}
            								}
            							}
HXLINE( 118)							sourcePixel = ::lime::_internal::graphics::ImageDataUtil_obj::bilinear(s1,s2,s3,s4,((disX * ( (Float)(sourceView->width) )) - ( (Float)(disOffsetXFloor) )),((disY * ( (Float)(sourceView->height) )) - ( (Float)(disOffsetYFloor) )));
            						}
            						else {
HXLINE( 122)							int offset = ((sourceView->byteOffset + (sourceView->stride * (y + disOffsetYFloor))) + ((x + disOffsetXFloor) * 4));
HXDLIN( 122)							switch((int)(sourceFormat)){
            								case (int)0: {
HXLINE( 122)									int r = ( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + offset)) & 255)) );
HXDLIN( 122)									int g = ( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + (offset + 1))) & 255)) );
HXDLIN( 122)									int b = ( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + (offset + 2))) & 255)) );
HXDLIN( 122)									sourcePixel = (((((r & 255) << 24) | ((g & 255) << 16)) | ((b & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + (offset + 3))) & 255)) ) & 255));
            								}
            								break;
            								case (int)1: {
HXLINE( 122)									int r = ( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + (offset + 1))) & 255)) );
HXDLIN( 122)									int g = ( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + (offset + 2))) & 255)) );
HXDLIN( 122)									int b = ( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + (offset + 3))) & 255)) );
HXDLIN( 122)									sourcePixel = (((((r & 255) << 24) | ((g & 255) << 16)) | ((b & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + offset)) & 255)) ) & 255));
            								}
            								break;
            								case (int)2: {
HXLINE( 122)									int r = ( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + (offset + 2))) & 255)) );
HXDLIN( 122)									int g = ( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + (offset + 1))) & 255)) );
HXDLIN( 122)									int b = ( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + offset)) & 255)) );
HXDLIN( 122)									sourcePixel = (((((r & 255) << 24) | ((g & 255) << 16)) | ((b & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + (offset + 3))) & 255)) ) & 255));
            								}
            								break;
            							}
HXDLIN( 122)							if (sourcePremultiplied) {
HXLINE( 122)								bool _hx_tmp;
HXDLIN( 122)								if (((sourcePixel & 255) != 0)) {
HXLINE( 122)									_hx_tmp = ((sourcePixel & 255) != 255);
            								}
            								else {
HXLINE( 122)									_hx_tmp = false;
            								}
HXDLIN( 122)								if (_hx_tmp) {
HXLINE( 122)									::lime::math::_RGBA::RGBA_Impl__obj::unmult = (((Float)255.0) / ( (Float)((sourcePixel & 255)) ));
HXDLIN( 122)									{
HXLINE( 122)										 ::lime::utils::ArrayBufferView this1 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN( 122)										int r = ( (int)(( ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + ::Math_obj::round((( (Float)((::hx::UShr(sourcePixel,24) & 255)) ) * ::lime::math::_RGBA::RGBA_Impl__obj::unmult)))) & 255)) );
HXDLIN( 122)										 ::lime::utils::ArrayBufferView this2 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN( 122)										int g = ( (int)(( ::__hxcpp_memory_get_byte(this2->buffer->b,(this2->byteOffset + ::Math_obj::round((( (Float)((::hx::UShr(sourcePixel,16) & 255)) ) * ::lime::math::_RGBA::RGBA_Impl__obj::unmult)))) & 255)) );
HXDLIN( 122)										 ::lime::utils::ArrayBufferView this3 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN( 122)										sourcePixel = (((((r & 255) << 24) | ((g & 255) << 16)) | ((( (int)(( ::__hxcpp_memory_get_byte(this3->buffer->b,(this3->byteOffset + ::Math_obj::round((( (Float)((::hx::UShr(sourcePixel,8) & 255)) ) * ::lime::math::_RGBA::RGBA_Impl__obj::unmult)))) & 255)) ) & 255) << 8)) | ((sourcePixel & 255) & 255));
            									}
            								}
            							}
            						}
HXLINE( 125)						{
HXLINE( 125)							if (targetPremultiplied) {
HXLINE( 125)								if (((sourcePixel & 255) == 0)) {
HXLINE( 125)									if ((sourcePixel != 0)) {
HXLINE( 125)										sourcePixel = 0;
            									}
            								}
            								else {
HXLINE( 125)									if (((sourcePixel & 255) != 255)) {
HXLINE( 125)										 ::lime::utils::ArrayBufferView this1 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___alpha16;
HXDLIN( 125)										::lime::math::_RGBA::RGBA_Impl__obj::a16 = ( (int)( ::__hxcpp_memory_get_ui32(this1->buffer->b,(this1->byteOffset + ((sourcePixel & 255) * 4)))) );
HXDLIN( 125)										sourcePixel = ((((((((::hx::UShr(sourcePixel,24) & 255) * ::lime::math::_RGBA::RGBA_Impl__obj::a16) >> 16) & 255) << 24) | (((((::hx::UShr(sourcePixel,16) & 255) * ::lime::math::_RGBA::RGBA_Impl__obj::a16) >> 16) & 255) << 16)) | (((((::hx::UShr(sourcePixel,8) & 255) * ::lime::math::_RGBA::RGBA_Impl__obj::a16) >> 16) & 255) << 8)) | ((sourcePixel & 255) & 255));
            									}
            								}
            							}
HXDLIN( 125)							switch((int)(targetFormat)){
            								case (int)0: {
HXLINE( 125)									{
HXLINE( 125)										int val = (::hx::UShr(sourcePixel,24) & 255);
HXDLIN( 125)										 ::__hxcpp_memory_set_byte(targetData->buffer->b,(targetData->byteOffset + sourceOffset),val);
            									}
HXDLIN( 125)									{
HXLINE( 125)										int val1 = (::hx::UShr(sourcePixel,16) & 255);
HXDLIN( 125)										 ::__hxcpp_memory_set_byte(targetData->buffer->b,(targetData->byteOffset + (sourceOffset + 1)),val1);
            									}
HXDLIN( 125)									{
HXLINE( 125)										int val2 = (::hx::UShr(sourcePixel,8) & 255);
HXDLIN( 125)										 ::__hxcpp_memory_set_byte(targetData->buffer->b,(targetData->byteOffset + (sourceOffset + 2)),val2);
            									}
HXDLIN( 125)									{
HXLINE( 125)										int val3 = (sourcePixel & 255);
HXDLIN( 125)										 ::__hxcpp_memory_set_byte(targetData->buffer->b,(targetData->byteOffset + (sourceOffset + 3)),val3);
            									}
            								}
            								break;
            								case (int)1: {
HXLINE( 125)									{
HXLINE( 125)										int val = (sourcePixel & 255);
HXDLIN( 125)										 ::__hxcpp_memory_set_byte(targetData->buffer->b,(targetData->byteOffset + sourceOffset),val);
            									}
HXDLIN( 125)									{
HXLINE( 125)										int val1 = (::hx::UShr(sourcePixel,24) & 255);
HXDLIN( 125)										 ::__hxcpp_memory_set_byte(targetData->buffer->b,(targetData->byteOffset + (sourceOffset + 1)),val1);
            									}
HXDLIN( 125)									{
HXLINE( 125)										int val2 = (::hx::UShr(sourcePixel,16) & 255);
HXDLIN( 125)										 ::__hxcpp_memory_set_byte(targetData->buffer->b,(targetData->byteOffset + (sourceOffset + 2)),val2);
            									}
HXDLIN( 125)									{
HXLINE( 125)										int val3 = (::hx::UShr(sourcePixel,8) & 255);
HXDLIN( 125)										 ::__hxcpp_memory_set_byte(targetData->buffer->b,(targetData->byteOffset + (sourceOffset + 3)),val3);
            									}
            								}
            								break;
            								case (int)2: {
HXLINE( 125)									{
HXLINE( 125)										int val = (::hx::UShr(sourcePixel,8) & 255);
HXDLIN( 125)										 ::__hxcpp_memory_set_byte(targetData->buffer->b,(targetData->byteOffset + sourceOffset),val);
            									}
HXDLIN( 125)									{
HXLINE( 125)										int val1 = (::hx::UShr(sourcePixel,16) & 255);
HXDLIN( 125)										 ::__hxcpp_memory_set_byte(targetData->buffer->b,(targetData->byteOffset + (sourceOffset + 1)),val1);
            									}
HXDLIN( 125)									{
HXLINE( 125)										int val2 = (::hx::UShr(sourcePixel,24) & 255);
HXDLIN( 125)										 ::__hxcpp_memory_set_byte(targetData->buffer->b,(targetData->byteOffset + (sourceOffset + 2)),val2);
            									}
HXDLIN( 125)									{
HXLINE( 125)										int val3 = (sourcePixel & 255);
HXDLIN( 125)										 ::__hxcpp_memory_set_byte(targetData->buffer->b,(targetData->byteOffset + (sourceOffset + 3)),val3);
            									}
            								}
            								break;
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE( 129)		target->dirty = true;
HXLINE( 130)		target->version++;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(ImageDataUtil_obj,displaceMap,(void))

int ImageDataUtil_obj::bilinear(int s1,int s2,int s3,int s4,Float su,Float sv){
            	HX_STACKFRAME(&_hx_pos_68d87270d4f7b5ed_139_bilinear)
HXDLIN( 139)		int _hx_tmp = ::lime::_internal::graphics::ImageDataUtil_obj::lerpRGBA(s4,s2,su);
HXDLIN( 139)		return ::lime::_internal::graphics::ImageDataUtil_obj::lerpRGBA(_hx_tmp,::lime::_internal::graphics::ImageDataUtil_obj::lerpRGBA(s1,s3,su),sv);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(ImageDataUtil_obj,bilinear,return )

int ImageDataUtil_obj::lerpRGBA(int v0,int v1,Float x){
            	HX_STACKFRAME(&_hx_pos_68d87270d4f7b5ed_143_lerpRGBA)
HXLINE( 144)		int result = 0;
HXLINE( 145)		{
HXLINE( 145)			int value = ::Math_obj::floor(::lime::_internal::graphics::ImageDataUtil_obj::lerp(( (Float)((::hx::UShr(v0,24) & 255)) ),( (Float)((::hx::UShr(v1,24) & 255)) ),x));
HXDLIN( 145)			result = (((((value & 255) << 24) | (((::hx::UShr(result,16) & 255) & 255) << 16)) | (((::hx::UShr(result,8) & 255) & 255) << 8)) | ((result & 255) & 255));
            		}
HXLINE( 146)		{
HXLINE( 146)			int value1 = ::Math_obj::floor(::lime::_internal::graphics::ImageDataUtil_obj::lerp(( (Float)((::hx::UShr(v0,16) & 255)) ),( (Float)((::hx::UShr(v1,16) & 255)) ),x));
HXDLIN( 146)			result = ((((((::hx::UShr(result,24) & 255) & 255) << 24) | ((value1 & 255) << 16)) | (((::hx::UShr(result,8) & 255) & 255) << 8)) | ((result & 255) & 255));
            		}
HXLINE( 147)		{
HXLINE( 147)			int value2 = ::Math_obj::floor(::lime::_internal::graphics::ImageDataUtil_obj::lerp(( (Float)((::hx::UShr(v0,8) & 255)) ),( (Float)((::hx::UShr(v1,8) & 255)) ),x));
HXDLIN( 147)			result = ((((((::hx::UShr(result,24) & 255) & 255) << 24) | (((::hx::UShr(result,16) & 255) & 255) << 16)) | ((value2 & 255) << 8)) | ((result & 255) & 255));
            		}
HXLINE( 148)		{
HXLINE( 148)			int value3 = ::Math_obj::floor(::lime::_internal::graphics::ImageDataUtil_obj::lerp(( (Float)((v0 & 255)) ),( (Float)((v1 & 255)) ),x));
HXDLIN( 148)			result = ((((((::hx::UShr(result,24) & 255) & 255) << 24) | (((::hx::UShr(result,16) & 255) & 255) << 16)) | (((::hx::UShr(result,8) & 255) & 255) << 8)) | (value3 & 255));
            		}
HXLINE( 150)		return result;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ImageDataUtil_obj,lerpRGBA,return )

 ::lime::math::Vector4 ImageDataUtil_obj::lerp4f( ::lime::math::Vector4 v0, ::lime::math::Vector4 v1,Float x){
            	HX_GC_STACKFRAME(&_hx_pos_68d87270d4f7b5ed_155_lerp4f)
HXDLIN( 155)		Float _hx_tmp = ::lime::_internal::graphics::ImageDataUtil_obj::lerp(v0->x,v1->x,x);
HXDLIN( 155)		Float _hx_tmp1 = ::lime::_internal::graphics::ImageDataUtil_obj::lerp(v0->y,v1->y,x);
HXDLIN( 155)		Float _hx_tmp2 = ::lime::_internal::graphics::ImageDataUtil_obj::lerp(v0->z,v1->z,x);
HXDLIN( 155)		return  ::lime::math::Vector4_obj::__alloc( HX_CTX ,_hx_tmp,_hx_tmp1,_hx_tmp2,::lime::_internal::graphics::ImageDataUtil_obj::lerp(v0->w,v1->w,x));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ImageDataUtil_obj,lerp4f,return )

Float ImageDataUtil_obj::lerp(Float v0,Float v1,Float x){
            	HX_STACKFRAME(&_hx_pos_68d87270d4f7b5ed_160_lerp)
HXDLIN( 160)		return (((((Float)1.0) - x) * v0) + (x * v1));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ImageDataUtil_obj,lerp,return )

void ImageDataUtil_obj::colorTransform( ::lime::graphics::Image image, ::lime::math::Rectangle rect, ::lime::utils::ArrayBufferView colorMatrix){
            	HX_GC_STACKFRAME(&_hx_pos_68d87270d4f7b5ed_164_colorTransform)
HXLINE( 165)		 ::lime::utils::ArrayBufferView data = image->buffer->data;
HXLINE( 166)		if (::hx::IsNull( data )) {
HXLINE( 166)			return;
            		}
HXLINE( 169)		if (::lime::_hx_system::CFFI_obj::enabled) {
HXLINE( 169)			::lime::_internal::backend::native::NativeCFFI_obj::lime_image_data_util_color_transform(::hx::DynamicPtr(image),::hx::DynamicPtr(rect),::hx::DynamicPtr(colorMatrix));
            		}
            		else {
HXLINE( 173)			int format = image->buffer->format;
HXLINE( 174)			bool premultiplied = image->buffer->premultiplied;
HXLINE( 176)			 ::lime::_internal::graphics::_ImageDataUtil::ImageDataView dataView =  ::lime::_internal::graphics::_ImageDataUtil::ImageDataView_obj::__alloc( HX_CTX ,image,rect);
HXLINE( 178)			 ::lime::utils::ArrayBufferView alphaTable = ::lime::math::_ColorMatrix::ColorMatrix_Impl__obj::getAlphaTable(colorMatrix);
HXLINE( 179)			 ::lime::utils::ArrayBufferView redTable = ::lime::math::_ColorMatrix::ColorMatrix_Impl__obj::getRedTable(colorMatrix);
HXLINE( 180)			 ::lime::utils::ArrayBufferView greenTable = ::lime::math::_ColorMatrix::ColorMatrix_Impl__obj::getGreenTable(colorMatrix);
HXLINE( 181)			 ::lime::utils::ArrayBufferView blueTable = ::lime::math::_ColorMatrix::ColorMatrix_Impl__obj::getBlueTable(colorMatrix);
HXLINE( 183)			int row;
HXDLIN( 183)			int offset;
HXDLIN( 183)			int pixel = 0;
HXLINE( 185)			{
HXLINE( 185)				int _g = 0;
HXDLIN( 185)				int _g1 = dataView->height;
HXDLIN( 185)				while((_g < _g1)){
HXLINE( 185)					_g = (_g + 1);
HXDLIN( 185)					int y = (_g - 1);
HXLINE( 187)					row = (dataView->byteOffset + (dataView->stride * y));
HXLINE( 189)					{
HXLINE( 189)						int _g1 = 0;
HXDLIN( 189)						int _g2 = dataView->width;
HXDLIN( 189)						while((_g1 < _g2)){
HXLINE( 189)							_g1 = (_g1 + 1);
HXDLIN( 189)							int x = (_g1 - 1);
HXLINE( 191)							offset = (row + (x * 4));
HXLINE( 193)							{
HXLINE( 193)								switch((int)(format)){
            									case (int)0: {
HXLINE( 193)										int r = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset)) & 255)) );
HXDLIN( 193)										int g = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (offset + 1))) & 255)) );
HXDLIN( 193)										int b = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (offset + 2))) & 255)) );
HXDLIN( 193)										pixel = (((((r & 255) << 24) | ((g & 255) << 16)) | ((b & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (offset + 3))) & 255)) ) & 255));
            									}
            									break;
            									case (int)1: {
HXLINE( 193)										int r = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (offset + 1))) & 255)) );
HXDLIN( 193)										int g = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (offset + 2))) & 255)) );
HXDLIN( 193)										int b = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (offset + 3))) & 255)) );
HXDLIN( 193)										pixel = (((((r & 255) << 24) | ((g & 255) << 16)) | ((b & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset)) & 255)) ) & 255));
            									}
            									break;
            									case (int)2: {
HXLINE( 193)										int r = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (offset + 2))) & 255)) );
HXDLIN( 193)										int g = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (offset + 1))) & 255)) );
HXDLIN( 193)										int b = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset)) & 255)) );
HXDLIN( 193)										pixel = (((((r & 255) << 24) | ((g & 255) << 16)) | ((b & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (offset + 3))) & 255)) ) & 255));
            									}
            									break;
            								}
HXDLIN( 193)								if (premultiplied) {
HXLINE( 193)									bool _hx_tmp;
HXDLIN( 193)									if (((pixel & 255) != 0)) {
HXLINE( 193)										_hx_tmp = ((pixel & 255) != 255);
            									}
            									else {
HXLINE( 193)										_hx_tmp = false;
            									}
HXDLIN( 193)									if (_hx_tmp) {
HXLINE( 193)										::lime::math::_RGBA::RGBA_Impl__obj::unmult = (((Float)255.0) / ( (Float)((pixel & 255)) ));
HXDLIN( 193)										{
HXLINE( 193)											 ::lime::utils::ArrayBufferView this1 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN( 193)											int r = ( (int)(( ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + ::Math_obj::round((( (Float)((::hx::UShr(pixel,24) & 255)) ) * ::lime::math::_RGBA::RGBA_Impl__obj::unmult)))) & 255)) );
HXDLIN( 193)											 ::lime::utils::ArrayBufferView this2 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN( 193)											int g = ( (int)(( ::__hxcpp_memory_get_byte(this2->buffer->b,(this2->byteOffset + ::Math_obj::round((( (Float)((::hx::UShr(pixel,16) & 255)) ) * ::lime::math::_RGBA::RGBA_Impl__obj::unmult)))) & 255)) );
HXDLIN( 193)											 ::lime::utils::ArrayBufferView this3 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN( 193)											pixel = (((((r & 255) << 24) | ((g & 255) << 16)) | ((( (int)(( ::__hxcpp_memory_get_byte(this3->buffer->b,(this3->byteOffset + ::Math_obj::round((( (Float)((::hx::UShr(pixel,8) & 255)) ) * ::lime::math::_RGBA::RGBA_Impl__obj::unmult)))) & 255)) ) & 255) << 8)) | ((pixel & 255) & 255));
            										}
            									}
            								}
            							}
HXLINE( 194)							{
HXLINE( 194)								int r = ( (int)(( ::__hxcpp_memory_get_byte(redTable->buffer->b,(redTable->byteOffset + (::hx::UShr(pixel,24) & 255))) & 255)) );
HXDLIN( 194)								int g = ( (int)(( ::__hxcpp_memory_get_byte(greenTable->buffer->b,(greenTable->byteOffset + (::hx::UShr(pixel,16) & 255))) & 255)) );
HXDLIN( 194)								int b = ( (int)(( ::__hxcpp_memory_get_byte(blueTable->buffer->b,(blueTable->byteOffset + (::hx::UShr(pixel,8) & 255))) & 255)) );
HXDLIN( 194)								pixel = (((((r & 255) << 24) | ((g & 255) << 16)) | ((b & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(alphaTable->buffer->b,(alphaTable->byteOffset + (pixel & 255))) & 255)) ) & 255));
            							}
HXLINE( 195)							{
HXLINE( 195)								if (premultiplied) {
HXLINE( 195)									if (((pixel & 255) == 0)) {
HXLINE( 195)										if ((pixel != 0)) {
HXLINE( 195)											pixel = 0;
            										}
            									}
            									else {
HXLINE( 195)										if (((pixel & 255) != 255)) {
HXLINE( 195)											 ::lime::utils::ArrayBufferView this1 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___alpha16;
HXDLIN( 195)											::lime::math::_RGBA::RGBA_Impl__obj::a16 = ( (int)( ::__hxcpp_memory_get_ui32(this1->buffer->b,(this1->byteOffset + ((pixel & 255) * 4)))) );
HXDLIN( 195)											pixel = ((((((((::hx::UShr(pixel,24) & 255) * ::lime::math::_RGBA::RGBA_Impl__obj::a16) >> 16) & 255) << 24) | (((((::hx::UShr(pixel,16) & 255) * ::lime::math::_RGBA::RGBA_Impl__obj::a16) >> 16) & 255) << 16)) | (((((::hx::UShr(pixel,8) & 255) * ::lime::math::_RGBA::RGBA_Impl__obj::a16) >> 16) & 255) << 8)) | ((pixel & 255) & 255));
            										}
            									}
            								}
HXDLIN( 195)								switch((int)(format)){
            									case (int)0: {
HXLINE( 195)										{
HXLINE( 195)											int val = (::hx::UShr(pixel,24) & 255);
HXDLIN( 195)											 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
            										}
HXDLIN( 195)										{
HXLINE( 195)											int val1 = (::hx::UShr(pixel,16) & 255);
HXDLIN( 195)											 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + (offset + 1)),val1);
            										}
HXDLIN( 195)										{
HXLINE( 195)											int val2 = (::hx::UShr(pixel,8) & 255);
HXDLIN( 195)											 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + (offset + 2)),val2);
            										}
HXDLIN( 195)										{
HXLINE( 195)											int val3 = (pixel & 255);
HXDLIN( 195)											 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + (offset + 3)),val3);
            										}
            									}
            									break;
            									case (int)1: {
HXLINE( 195)										{
HXLINE( 195)											int val = (pixel & 255);
HXDLIN( 195)											 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
            										}
HXDLIN( 195)										{
HXLINE( 195)											int val1 = (::hx::UShr(pixel,24) & 255);
HXDLIN( 195)											 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + (offset + 1)),val1);
            										}
HXDLIN( 195)										{
HXLINE( 195)											int val2 = (::hx::UShr(pixel,16) & 255);
HXDLIN( 195)											 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + (offset + 2)),val2);
            										}
HXDLIN( 195)										{
HXLINE( 195)											int val3 = (::hx::UShr(pixel,8) & 255);
HXDLIN( 195)											 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + (offset + 3)),val3);
            										}
            									}
            									break;
            									case (int)2: {
HXLINE( 195)										{
HXLINE( 195)											int val = (::hx::UShr(pixel,8) & 255);
HXDLIN( 195)											 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
            										}
HXDLIN( 195)										{
HXLINE( 195)											int val1 = (::hx::UShr(pixel,16) & 255);
HXDLIN( 195)											 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + (offset + 1)),val1);
            										}
HXDLIN( 195)										{
HXLINE( 195)											int val2 = (::hx::UShr(pixel,24) & 255);
HXDLIN( 195)											 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + (offset + 2)),val2);
            										}
HXDLIN( 195)										{
HXLINE( 195)											int val3 = (pixel & 255);
HXDLIN( 195)											 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + (offset + 3)),val3);
            										}
            									}
            									break;
            								}
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE( 200)		image->dirty = true;
HXLINE( 201)		image->version++;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ImageDataUtil_obj,colorTransform,(void))

void ImageDataUtil_obj::copyChannel( ::lime::graphics::Image image, ::lime::graphics::Image sourceImage, ::lime::math::Rectangle sourceRect, ::lime::math::Vector2 destPoint, ::lime::graphics::ImageChannel sourceChannel, ::lime::graphics::ImageChannel destChannel){
            	HX_GC_STACKFRAME(&_hx_pos_68d87270d4f7b5ed_206_copyChannel)
HXLINE( 207)		int destIdx;
HXDLIN( 207)		switch((int)(destChannel->_hx_getIndex())){
            			case (int)0: {
HXLINE( 207)				destIdx = 0;
            			}
            			break;
            			case (int)1: {
HXLINE( 207)				destIdx = 1;
            			}
            			break;
            			case (int)2: {
HXLINE( 207)				destIdx = 2;
            			}
            			break;
            			case (int)3: {
HXLINE( 207)				destIdx = 3;
            			}
            			break;
            		}
HXLINE( 215)		int srcIdx;
HXDLIN( 215)		switch((int)(sourceChannel->_hx_getIndex())){
            			case (int)0: {
HXLINE( 215)				srcIdx = 0;
            			}
            			break;
            			case (int)1: {
HXLINE( 215)				srcIdx = 1;
            			}
            			break;
            			case (int)2: {
HXLINE( 215)				srcIdx = 2;
            			}
            			break;
            			case (int)3: {
HXLINE( 215)				srcIdx = 3;
            			}
            			break;
            		}
HXLINE( 223)		 ::lime::utils::ArrayBufferView srcData = sourceImage->buffer->data;
HXLINE( 224)		 ::lime::utils::ArrayBufferView destData = image->buffer->data;
HXLINE( 226)		bool _hx_tmp;
HXDLIN( 226)		if (::hx::IsNotNull( srcData )) {
HXLINE( 226)			_hx_tmp = ::hx::IsNull( destData );
            		}
            		else {
HXLINE( 226)			_hx_tmp = true;
            		}
HXDLIN( 226)		if (_hx_tmp) {
HXLINE( 226)			return;
            		}
HXLINE( 229)		if (::lime::_hx_system::CFFI_obj::enabled) {
HXLINE( 229)			::lime::_internal::backend::native::NativeCFFI_obj::lime_image_data_util_copy_channel(::hx::DynamicPtr(image),::hx::DynamicPtr(sourceImage),::hx::DynamicPtr(sourceRect),::hx::DynamicPtr(destPoint),srcIdx,destIdx);
            		}
            		else {
HXLINE( 233)			 ::lime::_internal::graphics::_ImageDataUtil::ImageDataView srcView =  ::lime::_internal::graphics::_ImageDataUtil::ImageDataView_obj::__alloc( HX_CTX ,sourceImage,sourceRect);
HXLINE( 234)			 ::lime::_internal::graphics::_ImageDataUtil::ImageDataView destView =  ::lime::_internal::graphics::_ImageDataUtil::ImageDataView_obj::__alloc( HX_CTX ,image, ::lime::math::Rectangle_obj::__alloc( HX_CTX ,destPoint->x,destPoint->y,srcView->width,srcView->height));
HXLINE( 236)			int srcFormat = sourceImage->buffer->format;
HXLINE( 237)			int destFormat = image->buffer->format;
HXLINE( 238)			bool srcPremultiplied = sourceImage->buffer->premultiplied;
HXLINE( 239)			bool destPremultiplied = image->buffer->premultiplied;
HXLINE( 241)			int srcPosition;
HXDLIN( 241)			int destPosition;
HXDLIN( 241)			int srcPixel = 0;
HXDLIN( 241)			int destPixel = 0;
HXDLIN( 241)			int value = 0;
HXLINE( 247)			{
HXLINE( 247)				int _g = 0;
HXDLIN( 247)				int _g1 = destView->height;
HXDLIN( 247)				while((_g < _g1)){
HXLINE( 247)					_g = (_g + 1);
HXDLIN( 247)					int y = (_g - 1);
HXLINE( 249)					srcPosition = (srcView->byteOffset + (srcView->stride * y));
HXLINE( 250)					destPosition = (destView->byteOffset + (destView->stride * y));
HXLINE( 252)					{
HXLINE( 252)						int _g1 = 0;
HXDLIN( 252)						int _g2 = destView->width;
HXDLIN( 252)						while((_g1 < _g2)){
HXLINE( 252)							_g1 = (_g1 + 1);
HXDLIN( 252)							int x = (_g1 - 1);
HXLINE( 254)							{
HXLINE( 254)								switch((int)(srcFormat)){
            									case (int)0: {
HXLINE( 254)										int r = ( (int)(( ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + srcPosition)) & 255)) );
HXDLIN( 254)										int g = ( (int)(( ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + (srcPosition + 1))) & 255)) );
HXDLIN( 254)										int b = ( (int)(( ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + (srcPosition + 2))) & 255)) );
HXDLIN( 254)										srcPixel = (((((r & 255) << 24) | ((g & 255) << 16)) | ((b & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + (srcPosition + 3))) & 255)) ) & 255));
            									}
            									break;
            									case (int)1: {
HXLINE( 254)										int r = ( (int)(( ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + (srcPosition + 1))) & 255)) );
HXDLIN( 254)										int g = ( (int)(( ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + (srcPosition + 2))) & 255)) );
HXDLIN( 254)										int b = ( (int)(( ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + (srcPosition + 3))) & 255)) );
HXDLIN( 254)										srcPixel = (((((r & 255) << 24) | ((g & 255) << 16)) | ((b & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + srcPosition)) & 255)) ) & 255));
            									}
            									break;
            									case (int)2: {
HXLINE( 254)										int r = ( (int)(( ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + (srcPosition + 2))) & 255)) );
HXDLIN( 254)										int g = ( (int)(( ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + (srcPosition + 1))) & 255)) );
HXDLIN( 254)										int b = ( (int)(( ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + srcPosition)) & 255)) );
HXDLIN( 254)										srcPixel = (((((r & 255) << 24) | ((g & 255) << 16)) | ((b & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + (srcPosition + 3))) & 255)) ) & 255));
            									}
            									break;
            								}
HXDLIN( 254)								if (srcPremultiplied) {
HXLINE( 254)									bool _hx_tmp;
HXDLIN( 254)									if (((srcPixel & 255) != 0)) {
HXLINE( 254)										_hx_tmp = ((srcPixel & 255) != 255);
            									}
            									else {
HXLINE( 254)										_hx_tmp = false;
            									}
HXDLIN( 254)									if (_hx_tmp) {
HXLINE( 254)										::lime::math::_RGBA::RGBA_Impl__obj::unmult = (((Float)255.0) / ( (Float)((srcPixel & 255)) ));
HXDLIN( 254)										{
HXLINE( 254)											 ::lime::utils::ArrayBufferView this1 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN( 254)											int r = ( (int)(( ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + ::Math_obj::round((( (Float)((::hx::UShr(srcPixel,24) & 255)) ) * ::lime::math::_RGBA::RGBA_Impl__obj::unmult)))) & 255)) );
HXDLIN( 254)											 ::lime::utils::ArrayBufferView this2 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN( 254)											int g = ( (int)(( ::__hxcpp_memory_get_byte(this2->buffer->b,(this2->byteOffset + ::Math_obj::round((( (Float)((::hx::UShr(srcPixel,16) & 255)) ) * ::lime::math::_RGBA::RGBA_Impl__obj::unmult)))) & 255)) );
HXDLIN( 254)											 ::lime::utils::ArrayBufferView this3 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN( 254)											srcPixel = (((((r & 255) << 24) | ((g & 255) << 16)) | ((( (int)(( ::__hxcpp_memory_get_byte(this3->buffer->b,(this3->byteOffset + ::Math_obj::round((( (Float)((::hx::UShr(srcPixel,8) & 255)) ) * ::lime::math::_RGBA::RGBA_Impl__obj::unmult)))) & 255)) ) & 255) << 8)) | ((srcPixel & 255) & 255));
            										}
            									}
            								}
            							}
HXLINE( 255)							{
HXLINE( 255)								switch((int)(destFormat)){
            									case (int)0: {
HXLINE( 255)										int r = ( (int)(( ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + destPosition)) & 255)) );
HXDLIN( 255)										int g = ( (int)(( ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 1))) & 255)) );
HXDLIN( 255)										int b = ( (int)(( ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 2))) & 255)) );
HXDLIN( 255)										destPixel = (((((r & 255) << 24) | ((g & 255) << 16)) | ((b & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 3))) & 255)) ) & 255));
            									}
            									break;
            									case (int)1: {
HXLINE( 255)										int r = ( (int)(( ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 1))) & 255)) );
HXDLIN( 255)										int g = ( (int)(( ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 2))) & 255)) );
HXDLIN( 255)										int b = ( (int)(( ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 3))) & 255)) );
HXDLIN( 255)										destPixel = (((((r & 255) << 24) | ((g & 255) << 16)) | ((b & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + destPosition)) & 255)) ) & 255));
            									}
            									break;
            									case (int)2: {
HXLINE( 255)										int r = ( (int)(( ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 2))) & 255)) );
HXDLIN( 255)										int g = ( (int)(( ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 1))) & 255)) );
HXDLIN( 255)										int b = ( (int)(( ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + destPosition)) & 255)) );
HXDLIN( 255)										destPixel = (((((r & 255) << 24) | ((g & 255) << 16)) | ((b & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 3))) & 255)) ) & 255));
            									}
            									break;
            								}
HXDLIN( 255)								if (destPremultiplied) {
HXLINE( 255)									bool _hx_tmp;
HXDLIN( 255)									if (((destPixel & 255) != 0)) {
HXLINE( 255)										_hx_tmp = ((destPixel & 255) != 255);
            									}
            									else {
HXLINE( 255)										_hx_tmp = false;
            									}
HXDLIN( 255)									if (_hx_tmp) {
HXLINE( 255)										::lime::math::_RGBA::RGBA_Impl__obj::unmult = (((Float)255.0) / ( (Float)((destPixel & 255)) ));
HXDLIN( 255)										{
HXLINE( 255)											 ::lime::utils::ArrayBufferView this1 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN( 255)											int r = ( (int)(( ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + ::Math_obj::round((( (Float)((::hx::UShr(destPixel,24) & 255)) ) * ::lime::math::_RGBA::RGBA_Impl__obj::unmult)))) & 255)) );
HXDLIN( 255)											 ::lime::utils::ArrayBufferView this2 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN( 255)											int g = ( (int)(( ::__hxcpp_memory_get_byte(this2->buffer->b,(this2->byteOffset + ::Math_obj::round((( (Float)((::hx::UShr(destPixel,16) & 255)) ) * ::lime::math::_RGBA::RGBA_Impl__obj::unmult)))) & 255)) );
HXDLIN( 255)											 ::lime::utils::ArrayBufferView this3 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN( 255)											destPixel = (((((r & 255) << 24) | ((g & 255) << 16)) | ((( (int)(( ::__hxcpp_memory_get_byte(this3->buffer->b,(this3->byteOffset + ::Math_obj::round((( (Float)((::hx::UShr(destPixel,8) & 255)) ) * ::lime::math::_RGBA::RGBA_Impl__obj::unmult)))) & 255)) ) & 255) << 8)) | ((destPixel & 255) & 255));
            										}
            									}
            								}
            							}
HXLINE( 257)							switch((int)(srcIdx)){
            								case (int)0: {
HXLINE( 260)									value = (::hx::UShr(srcPixel,24) & 255);
            								}
            								break;
            								case (int)1: {
HXLINE( 262)									value = (::hx::UShr(srcPixel,16) & 255);
            								}
            								break;
            								case (int)2: {
HXLINE( 264)									value = (::hx::UShr(srcPixel,8) & 255);
            								}
            								break;
            								case (int)3: {
HXLINE( 266)									value = (srcPixel & 255);
            								}
            								break;
            							}
HXLINE( 269)							switch((int)(destIdx)){
            								case (int)0: {
HXLINE( 272)									destPixel = (((((value & 255) << 24) | (((::hx::UShr(destPixel,16) & 255) & 255) << 16)) | (((::hx::UShr(destPixel,8) & 255) & 255) << 8)) | ((destPixel & 255) & 255));
            								}
            								break;
            								case (int)1: {
HXLINE( 274)									destPixel = ((((((::hx::UShr(destPixel,24) & 255) & 255) << 24) | ((value & 255) << 16)) | (((::hx::UShr(destPixel,8) & 255) & 255) << 8)) | ((destPixel & 255) & 255));
            								}
            								break;
            								case (int)2: {
HXLINE( 276)									destPixel = ((((((::hx::UShr(destPixel,24) & 255) & 255) << 24) | (((::hx::UShr(destPixel,16) & 255) & 255) << 16)) | ((value & 255) << 8)) | ((destPixel & 255) & 255));
            								}
            								break;
            								case (int)3: {
HXLINE( 278)									destPixel = ((((((::hx::UShr(destPixel,24) & 255) & 255) << 24) | (((::hx::UShr(destPixel,16) & 255) & 255) << 16)) | (((::hx::UShr(destPixel,8) & 255) & 255) << 8)) | (value & 255));
            								}
            								break;
            							}
HXLINE( 281)							{
HXLINE( 281)								if (destPremultiplied) {
HXLINE( 281)									if (((destPixel & 255) == 0)) {
HXLINE( 281)										if ((destPixel != 0)) {
HXLINE( 281)											destPixel = 0;
            										}
            									}
            									else {
HXLINE( 281)										if (((destPixel & 255) != 255)) {
HXLINE( 281)											 ::lime::utils::ArrayBufferView this1 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___alpha16;
HXDLIN( 281)											::lime::math::_RGBA::RGBA_Impl__obj::a16 = ( (int)( ::__hxcpp_memory_get_ui32(this1->buffer->b,(this1->byteOffset + ((destPixel & 255) * 4)))) );
HXDLIN( 281)											destPixel = ((((((((::hx::UShr(destPixel,24) & 255) * ::lime::math::_RGBA::RGBA_Impl__obj::a16) >> 16) & 255) << 24) | (((((::hx::UShr(destPixel,16) & 255) * ::lime::math::_RGBA::RGBA_Impl__obj::a16) >> 16) & 255) << 16)) | (((((::hx::UShr(destPixel,8) & 255) * ::lime::math::_RGBA::RGBA_Impl__obj::a16) >> 16) & 255) << 8)) | ((destPixel & 255) & 255));
            										}
            									}
            								}
HXDLIN( 281)								switch((int)(destFormat)){
            									case (int)0: {
HXLINE( 281)										{
HXLINE( 281)											int val = (::hx::UShr(destPixel,24) & 255);
HXDLIN( 281)											 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
            										}
HXDLIN( 281)										{
HXLINE( 281)											int val1 = (::hx::UShr(destPixel,16) & 255);
HXDLIN( 281)											 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 1)),val1);
            										}
HXDLIN( 281)										{
HXLINE( 281)											int val2 = (::hx::UShr(destPixel,8) & 255);
HXDLIN( 281)											 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 2)),val2);
            										}
HXDLIN( 281)										{
HXLINE( 281)											int val3 = (destPixel & 255);
HXDLIN( 281)											 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 3)),val3);
            										}
            									}
            									break;
            									case (int)1: {
HXLINE( 281)										{
HXLINE( 281)											int val = (destPixel & 255);
HXDLIN( 281)											 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
            										}
HXDLIN( 281)										{
HXLINE( 281)											int val1 = (::hx::UShr(destPixel,24) & 255);
HXDLIN( 281)											 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 1)),val1);
            										}
HXDLIN( 281)										{
HXLINE( 281)											int val2 = (::hx::UShr(destPixel,16) & 255);
HXDLIN( 281)											 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 2)),val2);
            										}
HXDLIN( 281)										{
HXLINE( 281)											int val3 = (::hx::UShr(destPixel,8) & 255);
HXDLIN( 281)											 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 3)),val3);
            										}
            									}
            									break;
            									case (int)2: {
HXLINE( 281)										{
HXLINE( 281)											int val = (::hx::UShr(destPixel,8) & 255);
HXDLIN( 281)											 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
            										}
HXDLIN( 281)										{
HXLINE( 281)											int val1 = (::hx::UShr(destPixel,16) & 255);
HXDLIN( 281)											 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 1)),val1);
            										}
HXDLIN( 281)										{
HXLINE( 281)											int val2 = (::hx::UShr(destPixel,24) & 255);
HXDLIN( 281)											 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 2)),val2);
            										}
HXDLIN( 281)										{
HXLINE( 281)											int val3 = (destPixel & 255);
HXDLIN( 281)											 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 3)),val3);
            										}
            									}
            									break;
            								}
            							}
HXLINE( 283)							srcPosition = (srcPosition + 4);
HXLINE( 284)							destPosition = (destPosition + 4);
            						}
            					}
            				}
            			}
            		}
HXLINE( 289)		image->dirty = true;
HXLINE( 290)		image->version++;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(ImageDataUtil_obj,copyChannel,(void))

void ImageDataUtil_obj::copyPixels( ::lime::graphics::Image image, ::lime::graphics::Image sourceImage, ::lime::math::Rectangle sourceRect, ::lime::math::Vector2 destPoint, ::lime::graphics::Image alphaImage, ::lime::math::Vector2 alphaPoint,::hx::Null< bool >  __o_mergeAlpha){
            		bool mergeAlpha = __o_mergeAlpha.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_68d87270d4f7b5ed_295_copyPixels)
HXLINE( 296)		bool _hx_tmp;
HXDLIN( 296)		bool _hx_tmp1;
HXDLIN( 296)		bool _hx_tmp2;
HXDLIN( 296)		bool _hx_tmp3;
HXDLIN( 296)		bool _hx_tmp4;
HXDLIN( 296)		bool _hx_tmp5;
HXDLIN( 296)		bool _hx_tmp6;
HXDLIN( 296)		bool _hx_tmp7;
HXDLIN( 296)		bool _hx_tmp8;
HXDLIN( 296)		bool _hx_tmp9;
HXDLIN( 296)		bool _hx_tmp10;
HXDLIN( 296)		if ((image->width == sourceImage->width)) {
HXLINE( 296)			_hx_tmp10 = (image->height == sourceImage->height);
            		}
            		else {
HXLINE( 296)			_hx_tmp10 = false;
            		}
HXDLIN( 296)		if (_hx_tmp10) {
HXLINE( 296)			_hx_tmp9 = (sourceRect->width == sourceImage->width);
            		}
            		else {
HXLINE( 296)			_hx_tmp9 = false;
            		}
HXDLIN( 296)		if (_hx_tmp9) {
HXLINE( 296)			_hx_tmp8 = (sourceRect->height == sourceImage->height);
            		}
            		else {
HXLINE( 296)			_hx_tmp8 = false;
            		}
HXDLIN( 296)		if (_hx_tmp8) {
HXLINE( 296)			_hx_tmp7 = (sourceRect->x == 0);
            		}
            		else {
HXLINE( 296)			_hx_tmp7 = false;
            		}
HXDLIN( 296)		if (_hx_tmp7) {
HXLINE( 296)			_hx_tmp6 = (sourceRect->y == 0);
            		}
            		else {
HXLINE( 296)			_hx_tmp6 = false;
            		}
HXDLIN( 296)		if (_hx_tmp6) {
HXLINE( 296)			_hx_tmp5 = (destPoint->x == 0);
            		}
            		else {
HXLINE( 296)			_hx_tmp5 = false;
            		}
HXDLIN( 296)		if (_hx_tmp5) {
HXLINE( 296)			_hx_tmp4 = (destPoint->y == 0);
            		}
            		else {
HXLINE( 296)			_hx_tmp4 = false;
            		}
HXDLIN( 296)		if (_hx_tmp4) {
HXLINE( 296)			_hx_tmp3 = ::hx::IsNull( alphaImage );
            		}
            		else {
HXLINE( 296)			_hx_tmp3 = false;
            		}
HXDLIN( 296)		if (_hx_tmp3) {
HXLINE( 296)			_hx_tmp2 = ::hx::IsNull( alphaPoint );
            		}
            		else {
HXLINE( 296)			_hx_tmp2 = false;
            		}
HXDLIN( 296)		if (_hx_tmp2) {
HXLINE( 296)			_hx_tmp1 = (mergeAlpha == false);
            		}
            		else {
HXLINE( 296)			_hx_tmp1 = false;
            		}
HXDLIN( 296)		if (_hx_tmp1) {
HXLINE( 307)			int _hx_tmp1 = image->get_format();
HXLINE( 296)			_hx_tmp = (_hx_tmp1 == sourceImage->get_format());
            		}
            		else {
HXLINE( 296)			_hx_tmp = false;
            		}
HXDLIN( 296)		if (_hx_tmp) {
HXLINE( 309)			 ::lime::utils::ArrayBufferView _this = image->buffer->data;
HXDLIN( 309)			 ::lime::utils::ArrayBufferView view = sourceImage->buffer->data;
HXDLIN( 309)			::cpp::VirtualArray array = null();
HXDLIN( 309)			int offset = 0;
HXDLIN( 309)			bool _hx_tmp;
HXDLIN( 309)			if (::hx::IsNotNull( view )) {
HXLINE( 309)				_hx_tmp = ::hx::IsNull( array );
            			}
            			else {
HXLINE( 309)				_hx_tmp = false;
            			}
HXDLIN( 309)			if (_hx_tmp) {
HXLINE( 309)				_this->buffer->blit((offset * _this->bytesPerElement),view->buffer,view->byteOffset,view->byteLength);
            			}
            			else {
HXLINE( 309)				bool _hx_tmp;
HXDLIN( 309)				if (::hx::IsNotNull( array )) {
HXLINE( 309)					_hx_tmp = ::hx::IsNull( view );
            				}
            				else {
HXLINE( 309)					_hx_tmp = false;
            				}
HXDLIN( 309)				if (_hx_tmp) {
HXLINE( 309)					_this->copyFromArray(array,offset);
            				}
            				else {
HXLINE( 309)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid .set call. either view, or array must be not-null.",64,ba,b7,6c)));
            				}
            			}
            		}
            		else {
HXLINE( 314)			if (::lime::_hx_system::CFFI_obj::enabled) {
HXLINE( 314)				::lime::_internal::backend::native::NativeCFFI_obj::lime_image_data_util_copy_pixels(::hx::DynamicPtr(image),::hx::DynamicPtr(sourceImage),::hx::DynamicPtr(sourceRect),::hx::DynamicPtr(destPoint),::hx::DynamicPtr(alphaImage),::hx::DynamicPtr(alphaPoint),mergeAlpha);
            			}
            			else {
HXLINE( 318)				 ::lime::utils::ArrayBufferView sourceData = sourceImage->buffer->data;
HXLINE( 319)				 ::lime::utils::ArrayBufferView destData = image->buffer->data;
HXLINE( 321)				bool _hx_tmp;
HXDLIN( 321)				if (::hx::IsNotNull( sourceData )) {
HXLINE( 321)					_hx_tmp = ::hx::IsNull( destData );
            				}
            				else {
HXLINE( 321)					_hx_tmp = true;
            				}
HXDLIN( 321)				if (_hx_tmp) {
HXLINE( 321)					return;
            				}
HXLINE( 323)				 ::lime::_internal::graphics::_ImageDataUtil::ImageDataView sourceView =  ::lime::_internal::graphics::_ImageDataUtil::ImageDataView_obj::__alloc( HX_CTX ,sourceImage,sourceRect);
HXLINE( 324)				 ::lime::math::Rectangle destRect =  ::lime::math::Rectangle_obj::__alloc( HX_CTX ,destPoint->x,destPoint->y,sourceView->width,sourceView->height);
HXLINE( 325)				 ::lime::_internal::graphics::_ImageDataUtil::ImageDataView destView =  ::lime::_internal::graphics::_ImageDataUtil::ImageDataView_obj::__alloc( HX_CTX ,image,destRect);
HXLINE( 327)				int sourceFormat = sourceImage->buffer->format;
HXLINE( 328)				int destFormat = image->buffer->format;
HXLINE( 330)				int sourcePosition;
HXDLIN( 330)				int destPosition;
HXLINE( 331)				Float sourceAlpha;
HXDLIN( 331)				Float destAlpha;
HXDLIN( 331)				Float oneMinusSourceAlpha;
HXDLIN( 331)				Float blendAlpha;
HXLINE( 332)				int sourcePixel = 0;
HXLINE( 333)				int destPixel = 0;
HXLINE( 335)				bool sourcePremultiplied = sourceImage->buffer->premultiplied;
HXLINE( 336)				bool destPremultiplied = image->buffer->premultiplied;
HXLINE( 337)				int sourceBytesPerPixel = ::Std_obj::_hx_int((( (Float)(sourceImage->buffer->bitsPerPixel) ) / ( (Float)(8) )));
HXLINE( 338)				int destBytesPerPixel = ::Std_obj::_hx_int((( (Float)(image->buffer->bitsPerPixel) ) / ( (Float)(8) )));
HXLINE( 340)				bool useAlphaImage;
HXDLIN( 340)				if (::hx::IsNotNull( alphaImage )) {
HXLINE( 340)					useAlphaImage = alphaImage->get_transparent();
            				}
            				else {
HXLINE( 340)					useAlphaImage = false;
            				}
HXLINE( 341)				bool blend;
HXDLIN( 341)				bool blend1;
HXDLIN( 341)				if (!(mergeAlpha)) {
HXLINE( 341)					if (useAlphaImage) {
HXLINE( 341)						blend1 = !(image->get_transparent());
            					}
            					else {
HXLINE( 341)						blend1 = false;
            					}
            				}
            				else {
HXLINE( 341)					blend1 = true;
            				}
HXDLIN( 341)				if (!(blend1)) {
HXLINE( 342)					bool blend1;
HXDLIN( 342)					if (!(mergeAlpha)) {
HXLINE( 342)						blend1 = !(image->get_transparent());
            					}
            					else {
HXLINE( 342)						blend1 = false;
            					}
HXDLIN( 342)					if (blend1) {
HXLINE( 341)						blend = sourceImage->get_transparent();
            					}
            					else {
HXLINE( 341)						blend = false;
            					}
            				}
            				else {
HXLINE( 341)					blend = true;
            				}
HXLINE( 344)				if (!(useAlphaImage)) {
HXLINE( 346)					if (blend) {
HXLINE( 348)						int _g = 0;
HXDLIN( 348)						int _g1 = destView->height;
HXDLIN( 348)						while((_g < _g1)){
HXLINE( 348)							_g = (_g + 1);
HXDLIN( 348)							int y = (_g - 1);
HXLINE( 350)							sourcePosition = (sourceView->byteOffset + (sourceView->stride * y));
HXLINE( 351)							destPosition = (destView->byteOffset + (destView->stride * y));
HXLINE( 353)							{
HXLINE( 353)								int _g1 = 0;
HXDLIN( 353)								int _g2 = destView->width;
HXDLIN( 353)								while((_g1 < _g2)){
HXLINE( 353)									_g1 = (_g1 + 1);
HXDLIN( 353)									int x = (_g1 - 1);
HXLINE( 355)									{
HXLINE( 355)										switch((int)(sourceFormat)){
            											case (int)0: {
HXLINE( 355)												int r = ( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + sourcePosition)) & 255)) );
HXDLIN( 355)												int g = ( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + (sourcePosition + 1))) & 255)) );
HXDLIN( 355)												int b = ( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + (sourcePosition + 2))) & 255)) );
HXDLIN( 355)												sourcePixel = (((((r & 255) << 24) | ((g & 255) << 16)) | ((b & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + (sourcePosition + 3))) & 255)) ) & 255));
            											}
            											break;
            											case (int)1: {
HXLINE( 355)												int r = ( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + (sourcePosition + 1))) & 255)) );
HXDLIN( 355)												int g = ( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + (sourcePosition + 2))) & 255)) );
HXDLIN( 355)												int b = ( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + (sourcePosition + 3))) & 255)) );
HXDLIN( 355)												sourcePixel = (((((r & 255) << 24) | ((g & 255) << 16)) | ((b & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + sourcePosition)) & 255)) ) & 255));
            											}
            											break;
            											case (int)2: {
HXLINE( 355)												int r = ( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + (sourcePosition + 2))) & 255)) );
HXDLIN( 355)												int g = ( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + (sourcePosition + 1))) & 255)) );
HXDLIN( 355)												int b = ( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + sourcePosition)) & 255)) );
HXDLIN( 355)												sourcePixel = (((((r & 255) << 24) | ((g & 255) << 16)) | ((b & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + (sourcePosition + 3))) & 255)) ) & 255));
            											}
            											break;
            										}
HXDLIN( 355)										if (sourcePremultiplied) {
HXLINE( 355)											bool _hx_tmp;
HXDLIN( 355)											if (((sourcePixel & 255) != 0)) {
HXLINE( 355)												_hx_tmp = ((sourcePixel & 255) != 255);
            											}
            											else {
HXLINE( 355)												_hx_tmp = false;
            											}
HXDLIN( 355)											if (_hx_tmp) {
HXLINE( 355)												::lime::math::_RGBA::RGBA_Impl__obj::unmult = (((Float)255.0) / ( (Float)((sourcePixel & 255)) ));
HXDLIN( 355)												{
HXLINE( 355)													 ::lime::utils::ArrayBufferView this1 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN( 355)													int r = ( (int)(( ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + ::Math_obj::round((( (Float)((::hx::UShr(sourcePixel,24) & 255)) ) * ::lime::math::_RGBA::RGBA_Impl__obj::unmult)))) & 255)) );
HXDLIN( 355)													 ::lime::utils::ArrayBufferView this2 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN( 355)													int g = ( (int)(( ::__hxcpp_memory_get_byte(this2->buffer->b,(this2->byteOffset + ::Math_obj::round((( (Float)((::hx::UShr(sourcePixel,16) & 255)) ) * ::lime::math::_RGBA::RGBA_Impl__obj::unmult)))) & 255)) );
HXDLIN( 355)													 ::lime::utils::ArrayBufferView this3 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN( 355)													sourcePixel = (((((r & 255) << 24) | ((g & 255) << 16)) | ((( (int)(( ::__hxcpp_memory_get_byte(this3->buffer->b,(this3->byteOffset + ::Math_obj::round((( (Float)((::hx::UShr(sourcePixel,8) & 255)) ) * ::lime::math::_RGBA::RGBA_Impl__obj::unmult)))) & 255)) ) & 255) << 8)) | ((sourcePixel & 255) & 255));
            												}
            											}
            										}
            									}
HXLINE( 356)									{
HXLINE( 356)										switch((int)(destFormat)){
            											case (int)0: {
HXLINE( 356)												int r = ( (int)(( ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + destPosition)) & 255)) );
HXDLIN( 356)												int g = ( (int)(( ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 1))) & 255)) );
HXDLIN( 356)												int b = ( (int)(( ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 2))) & 255)) );
HXDLIN( 356)												destPixel = (((((r & 255) << 24) | ((g & 255) << 16)) | ((b & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 3))) & 255)) ) & 255));
            											}
            											break;
            											case (int)1: {
HXLINE( 356)												int r = ( (int)(( ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 1))) & 255)) );
HXDLIN( 356)												int g = ( (int)(( ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 2))) & 255)) );
HXDLIN( 356)												int b = ( (int)(( ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 3))) & 255)) );
HXDLIN( 356)												destPixel = (((((r & 255) << 24) | ((g & 255) << 16)) | ((b & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + destPosition)) & 255)) ) & 255));
            											}
            											break;
            											case (int)2: {
HXLINE( 356)												int r = ( (int)(( ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 2))) & 255)) );
HXDLIN( 356)												int g = ( (int)(( ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 1))) & 255)) );
HXDLIN( 356)												int b = ( (int)(( ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + destPosition)) & 255)) );
HXDLIN( 356)												destPixel = (((((r & 255) << 24) | ((g & 255) << 16)) | ((b & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 3))) & 255)) ) & 255));
            											}
            											break;
            										}
HXDLIN( 356)										if (destPremultiplied) {
HXLINE( 356)											bool _hx_tmp;
HXDLIN( 356)											if (((destPixel & 255) != 0)) {
HXLINE( 356)												_hx_tmp = ((destPixel & 255) != 255);
            											}
            											else {
HXLINE( 356)												_hx_tmp = false;
            											}
HXDLIN( 356)											if (_hx_tmp) {
HXLINE( 356)												::lime::math::_RGBA::RGBA_Impl__obj::unmult = (((Float)255.0) / ( (Float)((destPixel & 255)) ));
HXDLIN( 356)												{
HXLINE( 356)													 ::lime::utils::ArrayBufferView this1 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN( 356)													int r = ( (int)(( ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + ::Math_obj::round((( (Float)((::hx::UShr(destPixel,24) & 255)) ) * ::lime::math::_RGBA::RGBA_Impl__obj::unmult)))) & 255)) );
HXDLIN( 356)													 ::lime::utils::ArrayBufferView this2 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN( 356)													int g = ( (int)(( ::__hxcpp_memory_get_byte(this2->buffer->b,(this2->byteOffset + ::Math_obj::round((( (Float)((::hx::UShr(destPixel,16) & 255)) ) * ::lime::math::_RGBA::RGBA_Impl__obj::unmult)))) & 255)) );
HXDLIN( 356)													 ::lime::utils::ArrayBufferView this3 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN( 356)													destPixel = (((((r & 255) << 24) | ((g & 255) << 16)) | ((( (int)(( ::__hxcpp_memory_get_byte(this3->buffer->b,(this3->byteOffset + ::Math_obj::round((( (Float)((::hx::UShr(destPixel,8) & 255)) ) * ::lime::math::_RGBA::RGBA_Impl__obj::unmult)))) & 255)) ) & 255) << 8)) | ((destPixel & 255) & 255));
            												}
            											}
            										}
            									}
HXLINE( 358)									sourceAlpha = (( (Float)((sourcePixel & 255)) ) / ((Float)255.0));
HXLINE( 359)									destAlpha = (( (Float)((destPixel & 255)) ) / ((Float)255.0));
HXLINE( 360)									oneMinusSourceAlpha = (( (Float)(1) ) - sourceAlpha);
HXLINE( 361)									blendAlpha = (sourceAlpha + (destAlpha * oneMinusSourceAlpha));
HXLINE( 363)									if ((blendAlpha == 0)) {
HXLINE( 365)										destPixel = 0;
            									}
            									else {
HXLINE( 369)										{
HXLINE( 369)											 ::lime::utils::ArrayBufferView this1 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN( 369)											int value = ( (int)(( ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + ::Math_obj::round((((( (Float)((::hx::UShr(sourcePixel,24) & 255)) ) * sourceAlpha) + ((( (Float)((::hx::UShr(destPixel,24) & 255)) ) * destAlpha) * oneMinusSourceAlpha)) / blendAlpha)))) & 255)) );
HXDLIN( 369)											destPixel = (((((value & 255) << 24) | (((::hx::UShr(destPixel,16) & 255) & 255) << 16)) | (((::hx::UShr(destPixel,8) & 255) & 255) << 8)) | ((destPixel & 255) & 255));
            										}
HXLINE( 372)										{
HXLINE( 372)											 ::lime::utils::ArrayBufferView this2 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN( 372)											int value1 = ( (int)(( ::__hxcpp_memory_get_byte(this2->buffer->b,(this2->byteOffset + ::Math_obj::round((((( (Float)((::hx::UShr(sourcePixel,16) & 255)) ) * sourceAlpha) + ((( (Float)((::hx::UShr(destPixel,16) & 255)) ) * destAlpha) * oneMinusSourceAlpha)) / blendAlpha)))) & 255)) );
HXDLIN( 372)											destPixel = ((((((::hx::UShr(destPixel,24) & 255) & 255) << 24) | ((value1 & 255) << 16)) | (((::hx::UShr(destPixel,8) & 255) & 255) << 8)) | ((destPixel & 255) & 255));
            										}
HXLINE( 375)										{
HXLINE( 375)											 ::lime::utils::ArrayBufferView this3 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN( 375)											int value2 = ( (int)(( ::__hxcpp_memory_get_byte(this3->buffer->b,(this3->byteOffset + ::Math_obj::round((((( (Float)((::hx::UShr(sourcePixel,8) & 255)) ) * sourceAlpha) + ((( (Float)((::hx::UShr(destPixel,8) & 255)) ) * destAlpha) * oneMinusSourceAlpha)) / blendAlpha)))) & 255)) );
HXDLIN( 375)											destPixel = ((((((::hx::UShr(destPixel,24) & 255) & 255) << 24) | (((::hx::UShr(destPixel,16) & 255) & 255) << 16)) | ((value2 & 255) << 8)) | ((destPixel & 255) & 255));
            										}
HXLINE( 378)										{
HXLINE( 378)											 ::lime::utils::ArrayBufferView this4 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN( 378)											int value3 = ( (int)(( ::__hxcpp_memory_get_byte(this4->buffer->b,(this4->byteOffset + ::Math_obj::round((blendAlpha * ((Float)255.0))))) & 255)) );
HXDLIN( 378)											destPixel = ((((((::hx::UShr(destPixel,24) & 255) & 255) << 24) | (((::hx::UShr(destPixel,16) & 255) & 255) << 16)) | (((::hx::UShr(destPixel,8) & 255) & 255) << 8)) | (value3 & 255));
            										}
            									}
HXLINE( 381)									{
HXLINE( 381)										if (destPremultiplied) {
HXLINE( 381)											if (((destPixel & 255) == 0)) {
HXLINE( 381)												if ((destPixel != 0)) {
HXLINE( 381)													destPixel = 0;
            												}
            											}
            											else {
HXLINE( 381)												if (((destPixel & 255) != 255)) {
HXLINE( 381)													 ::lime::utils::ArrayBufferView this1 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___alpha16;
HXDLIN( 381)													::lime::math::_RGBA::RGBA_Impl__obj::a16 = ( (int)( ::__hxcpp_memory_get_ui32(this1->buffer->b,(this1->byteOffset + ((destPixel & 255) * 4)))) );
HXDLIN( 381)													destPixel = ((((((((::hx::UShr(destPixel,24) & 255) * ::lime::math::_RGBA::RGBA_Impl__obj::a16) >> 16) & 255) << 24) | (((((::hx::UShr(destPixel,16) & 255) * ::lime::math::_RGBA::RGBA_Impl__obj::a16) >> 16) & 255) << 16)) | (((((::hx::UShr(destPixel,8) & 255) * ::lime::math::_RGBA::RGBA_Impl__obj::a16) >> 16) & 255) << 8)) | ((destPixel & 255) & 255));
            												}
            											}
            										}
HXDLIN( 381)										switch((int)(destFormat)){
            											case (int)0: {
HXLINE( 381)												{
HXLINE( 381)													int val = (::hx::UShr(destPixel,24) & 255);
HXDLIN( 381)													 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
            												}
HXDLIN( 381)												{
HXLINE( 381)													int val1 = (::hx::UShr(destPixel,16) & 255);
HXDLIN( 381)													 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 1)),val1);
            												}
HXDLIN( 381)												{
HXLINE( 381)													int val2 = (::hx::UShr(destPixel,8) & 255);
HXDLIN( 381)													 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 2)),val2);
            												}
HXDLIN( 381)												{
HXLINE( 381)													int val3 = (destPixel & 255);
HXDLIN( 381)													 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 3)),val3);
            												}
            											}
            											break;
            											case (int)1: {
HXLINE( 381)												{
HXLINE( 381)													int val = (destPixel & 255);
HXDLIN( 381)													 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
            												}
HXDLIN( 381)												{
HXLINE( 381)													int val1 = (::hx::UShr(destPixel,24) & 255);
HXDLIN( 381)													 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 1)),val1);
            												}
HXDLIN( 381)												{
HXLINE( 381)													int val2 = (::hx::UShr(destPixel,16) & 255);
HXDLIN( 381)													 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 2)),val2);
            												}
HXDLIN( 381)												{
HXLINE( 381)													int val3 = (::hx::UShr(destPixel,8) & 255);
HXDLIN( 381)													 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 3)),val3);
            												}
            											}
            											break;
            											case (int)2: {
HXLINE( 381)												{
HXLINE( 381)													int val = (::hx::UShr(destPixel,8) & 255);
HXDLIN( 381)													 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
            												}
HXDLIN( 381)												{
HXLINE( 381)													int val1 = (::hx::UShr(destPixel,16) & 255);
HXDLIN( 381)													 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 1)),val1);
            												}
HXDLIN( 381)												{
HXLINE( 381)													int val2 = (::hx::UShr(destPixel,24) & 255);
HXDLIN( 381)													 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 2)),val2);
            												}
HXDLIN( 381)												{
HXLINE( 381)													int val3 = (destPixel & 255);
HXDLIN( 381)													 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 3)),val3);
            												}
            											}
            											break;
            										}
            									}
HXLINE( 383)									sourcePosition = (sourcePosition + 4);
HXLINE( 384)									destPosition = (destPosition + 4);
            								}
            							}
            						}
            					}
            					else {
HXLINE( 388)						bool _hx_tmp;
HXDLIN( 388)						bool _hx_tmp1;
HXDLIN( 388)						if ((sourceFormat == destFormat)) {
HXLINE( 388)							_hx_tmp1 = (sourcePremultiplied == destPremultiplied);
            						}
            						else {
HXLINE( 388)							_hx_tmp1 = false;
            						}
HXDLIN( 388)						if (_hx_tmp1) {
HXLINE( 388)							_hx_tmp = (sourceBytesPerPixel == destBytesPerPixel);
            						}
            						else {
HXLINE( 388)							_hx_tmp = false;
            						}
HXDLIN( 388)						if (_hx_tmp) {
HXLINE( 392)							int _g = 0;
HXDLIN( 392)							int _g1 = destView->height;
HXDLIN( 392)							while((_g < _g1)){
HXLINE( 392)								_g = (_g + 1);
HXDLIN( 392)								int y = (_g - 1);
HXLINE( 394)								sourcePosition = (sourceView->byteOffset + (sourceView->stride * y));
HXLINE( 395)								destPosition = (destView->byteOffset + (destView->stride * y));
HXLINE( 401)								destData->buffer->blit(destPosition,sourceData->buffer,sourcePosition,(destView->width * destBytesPerPixel));
            							}
            						}
            						else {
HXLINE( 407)							int _g = 0;
HXDLIN( 407)							int _g1 = destView->height;
HXDLIN( 407)							while((_g < _g1)){
HXLINE( 407)								_g = (_g + 1);
HXDLIN( 407)								int y = (_g - 1);
HXLINE( 409)								sourcePosition = (sourceView->byteOffset + (sourceView->stride * y));
HXLINE( 410)								destPosition = (destView->byteOffset + (destView->stride * y));
HXLINE( 412)								{
HXLINE( 412)									int _g1 = 0;
HXDLIN( 412)									int _g2 = destView->width;
HXDLIN( 412)									while((_g1 < _g2)){
HXLINE( 412)										_g1 = (_g1 + 1);
HXDLIN( 412)										int x = (_g1 - 1);
HXLINE( 414)										{
HXLINE( 414)											switch((int)(sourceFormat)){
            												case (int)0: {
HXLINE( 414)													int r = ( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + sourcePosition)) & 255)) );
HXDLIN( 414)													int g = ( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + (sourcePosition + 1))) & 255)) );
HXDLIN( 414)													int b = ( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + (sourcePosition + 2))) & 255)) );
HXDLIN( 414)													sourcePixel = (((((r & 255) << 24) | ((g & 255) << 16)) | ((b & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + (sourcePosition + 3))) & 255)) ) & 255));
            												}
            												break;
            												case (int)1: {
HXLINE( 414)													int r = ( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + (sourcePosition + 1))) & 255)) );
HXDLIN( 414)													int g = ( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + (sourcePosition + 2))) & 255)) );
HXDLIN( 414)													int b = ( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + (sourcePosition + 3))) & 255)) );
HXDLIN( 414)													sourcePixel = (((((r & 255) << 24) | ((g & 255) << 16)) | ((b & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + sourcePosition)) & 255)) ) & 255));
            												}
            												break;
            												case (int)2: {
HXLINE( 414)													int r = ( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + (sourcePosition + 2))) & 255)) );
HXDLIN( 414)													int g = ( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + (sourcePosition + 1))) & 255)) );
HXDLIN( 414)													int b = ( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + sourcePosition)) & 255)) );
HXDLIN( 414)													sourcePixel = (((((r & 255) << 24) | ((g & 255) << 16)) | ((b & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + (sourcePosition + 3))) & 255)) ) & 255));
            												}
            												break;
            											}
HXDLIN( 414)											if (sourcePremultiplied) {
HXLINE( 414)												bool _hx_tmp;
HXDLIN( 414)												if (((sourcePixel & 255) != 0)) {
HXLINE( 414)													_hx_tmp = ((sourcePixel & 255) != 255);
            												}
            												else {
HXLINE( 414)													_hx_tmp = false;
            												}
HXDLIN( 414)												if (_hx_tmp) {
HXLINE( 414)													::lime::math::_RGBA::RGBA_Impl__obj::unmult = (((Float)255.0) / ( (Float)((sourcePixel & 255)) ));
HXDLIN( 414)													{
HXLINE( 414)														 ::lime::utils::ArrayBufferView this1 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN( 414)														int r = ( (int)(( ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + ::Math_obj::round((( (Float)((::hx::UShr(sourcePixel,24) & 255)) ) * ::lime::math::_RGBA::RGBA_Impl__obj::unmult)))) & 255)) );
HXDLIN( 414)														 ::lime::utils::ArrayBufferView this2 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN( 414)														int g = ( (int)(( ::__hxcpp_memory_get_byte(this2->buffer->b,(this2->byteOffset + ::Math_obj::round((( (Float)((::hx::UShr(sourcePixel,16) & 255)) ) * ::lime::math::_RGBA::RGBA_Impl__obj::unmult)))) & 255)) );
HXDLIN( 414)														 ::lime::utils::ArrayBufferView this3 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN( 414)														sourcePixel = (((((r & 255) << 24) | ((g & 255) << 16)) | ((( (int)(( ::__hxcpp_memory_get_byte(this3->buffer->b,(this3->byteOffset + ::Math_obj::round((( (Float)((::hx::UShr(sourcePixel,8) & 255)) ) * ::lime::math::_RGBA::RGBA_Impl__obj::unmult)))) & 255)) ) & 255) << 8)) | ((sourcePixel & 255) & 255));
            													}
            												}
            											}
            										}
HXLINE( 415)										{
HXLINE( 415)											if (destPremultiplied) {
HXLINE( 415)												if (((sourcePixel & 255) == 0)) {
HXLINE( 415)													if ((sourcePixel != 0)) {
HXLINE( 415)														sourcePixel = 0;
            													}
            												}
            												else {
HXLINE( 415)													if (((sourcePixel & 255) != 255)) {
HXLINE( 415)														 ::lime::utils::ArrayBufferView this1 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___alpha16;
HXDLIN( 415)														::lime::math::_RGBA::RGBA_Impl__obj::a16 = ( (int)( ::__hxcpp_memory_get_ui32(this1->buffer->b,(this1->byteOffset + ((sourcePixel & 255) * 4)))) );
HXDLIN( 415)														sourcePixel = ((((((((::hx::UShr(sourcePixel,24) & 255) * ::lime::math::_RGBA::RGBA_Impl__obj::a16) >> 16) & 255) << 24) | (((((::hx::UShr(sourcePixel,16) & 255) * ::lime::math::_RGBA::RGBA_Impl__obj::a16) >> 16) & 255) << 16)) | (((((::hx::UShr(sourcePixel,8) & 255) * ::lime::math::_RGBA::RGBA_Impl__obj::a16) >> 16) & 255) << 8)) | ((sourcePixel & 255) & 255));
            													}
            												}
            											}
HXDLIN( 415)											switch((int)(destFormat)){
            												case (int)0: {
HXLINE( 415)													{
HXLINE( 415)														int val = (::hx::UShr(sourcePixel,24) & 255);
HXDLIN( 415)														 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
            													}
HXDLIN( 415)													{
HXLINE( 415)														int val1 = (::hx::UShr(sourcePixel,16) & 255);
HXDLIN( 415)														 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 1)),val1);
            													}
HXDLIN( 415)													{
HXLINE( 415)														int val2 = (::hx::UShr(sourcePixel,8) & 255);
HXDLIN( 415)														 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 2)),val2);
            													}
HXDLIN( 415)													{
HXLINE( 415)														int val3 = (sourcePixel & 255);
HXDLIN( 415)														 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 3)),val3);
            													}
            												}
            												break;
            												case (int)1: {
HXLINE( 415)													{
HXLINE( 415)														int val = (sourcePixel & 255);
HXDLIN( 415)														 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
            													}
HXDLIN( 415)													{
HXLINE( 415)														int val1 = (::hx::UShr(sourcePixel,24) & 255);
HXDLIN( 415)														 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 1)),val1);
            													}
HXDLIN( 415)													{
HXLINE( 415)														int val2 = (::hx::UShr(sourcePixel,16) & 255);
HXDLIN( 415)														 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 2)),val2);
            													}
HXDLIN( 415)													{
HXLINE( 415)														int val3 = (::hx::UShr(sourcePixel,8) & 255);
HXDLIN( 415)														 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 3)),val3);
            													}
            												}
            												break;
            												case (int)2: {
HXLINE( 415)													{
HXLINE( 415)														int val = (::hx::UShr(sourcePixel,8) & 255);
HXDLIN( 415)														 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
            													}
HXDLIN( 415)													{
HXLINE( 415)														int val1 = (::hx::UShr(sourcePixel,16) & 255);
HXDLIN( 415)														 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 1)),val1);
            													}
HXDLIN( 415)													{
HXLINE( 415)														int val2 = (::hx::UShr(sourcePixel,24) & 255);
HXDLIN( 415)														 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 2)),val2);
            													}
HXDLIN( 415)													{
HXLINE( 415)														int val3 = (sourcePixel & 255);
HXDLIN( 415)														 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 3)),val3);
            													}
            												}
            												break;
            											}
            										}
HXLINE( 417)										sourcePosition = (sourcePosition + 4);
HXLINE( 418)										destPosition = (destPosition + 4);
            									}
            								}
            							}
            						}
            					}
            				}
            				else {
HXLINE( 425)					 ::lime::utils::ArrayBufferView alphaData = alphaImage->buffer->data;
HXLINE( 426)					int alphaFormat = alphaImage->buffer->format;
HXLINE( 427)					int alphaPosition;
HXDLIN( 427)					int alphaPixel = 0;
HXLINE( 430)					Float alphaView;
HXDLIN( 430)					if (::hx::IsNull( alphaPoint )) {
HXLINE( 430)						alphaView = ( (Float)(0) );
            					}
            					else {
HXLINE( 430)						alphaView = alphaPoint->x;
            					}
HXDLIN( 430)					Float alphaView1;
HXDLIN( 430)					if (::hx::IsNull( alphaPoint )) {
HXLINE( 430)						alphaView1 = ( (Float)(0) );
            					}
            					else {
HXLINE( 430)						alphaView1 = alphaPoint->y;
            					}
HXLINE( 429)					 ::lime::_internal::graphics::_ImageDataUtil::ImageDataView alphaView2 =  ::lime::_internal::graphics::_ImageDataUtil::ImageDataView_obj::__alloc( HX_CTX ,alphaImage, ::lime::math::Rectangle_obj::__alloc( HX_CTX ,(sourceView->x + alphaView),(sourceView->y + alphaView1),sourceView->width,sourceView->height));
HXLINE( 433)					int _hx_tmp = ::Std_obj::_hx_int(destPoint->x);
HXDLIN( 433)					int _hx_tmp1 = ::Std_obj::_hx_int(destPoint->y);
HXDLIN( 433)					destView->clip(_hx_tmp,_hx_tmp1,alphaView2->width,alphaView2->height);
HXLINE( 435)					if (blend) {
HXLINE( 437)						int _g = 0;
HXDLIN( 437)						int _g1 = destView->height;
HXDLIN( 437)						while((_g < _g1)){
HXLINE( 437)							_g = (_g + 1);
HXDLIN( 437)							int y = (_g - 1);
HXLINE( 439)							sourcePosition = (sourceView->byteOffset + (sourceView->stride * y));
HXLINE( 440)							destPosition = (destView->byteOffset + (destView->stride * y));
HXLINE( 441)							alphaPosition = (alphaView2->byteOffset + (alphaView2->stride * y));
HXLINE( 443)							{
HXLINE( 443)								int _g1 = 0;
HXDLIN( 443)								int _g2 = destView->width;
HXDLIN( 443)								while((_g1 < _g2)){
HXLINE( 443)									_g1 = (_g1 + 1);
HXDLIN( 443)									int x = (_g1 - 1);
HXLINE( 445)									{
HXLINE( 445)										switch((int)(sourceFormat)){
            											case (int)0: {
HXLINE( 445)												int r = ( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + sourcePosition)) & 255)) );
HXDLIN( 445)												int g = ( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + (sourcePosition + 1))) & 255)) );
HXDLIN( 445)												int b = ( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + (sourcePosition + 2))) & 255)) );
HXDLIN( 445)												sourcePixel = (((((r & 255) << 24) | ((g & 255) << 16)) | ((b & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + (sourcePosition + 3))) & 255)) ) & 255));
            											}
            											break;
            											case (int)1: {
HXLINE( 445)												int r = ( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + (sourcePosition + 1))) & 255)) );
HXDLIN( 445)												int g = ( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + (sourcePosition + 2))) & 255)) );
HXDLIN( 445)												int b = ( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + (sourcePosition + 3))) & 255)) );
HXDLIN( 445)												sourcePixel = (((((r & 255) << 24) | ((g & 255) << 16)) | ((b & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + sourcePosition)) & 255)) ) & 255));
            											}
            											break;
            											case (int)2: {
HXLINE( 445)												int r = ( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + (sourcePosition + 2))) & 255)) );
HXDLIN( 445)												int g = ( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + (sourcePosition + 1))) & 255)) );
HXDLIN( 445)												int b = ( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + sourcePosition)) & 255)) );
HXDLIN( 445)												sourcePixel = (((((r & 255) << 24) | ((g & 255) << 16)) | ((b & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + (sourcePosition + 3))) & 255)) ) & 255));
            											}
            											break;
            										}
HXDLIN( 445)										if (sourcePremultiplied) {
HXLINE( 445)											bool _hx_tmp;
HXDLIN( 445)											if (((sourcePixel & 255) != 0)) {
HXLINE( 445)												_hx_tmp = ((sourcePixel & 255) != 255);
            											}
            											else {
HXLINE( 445)												_hx_tmp = false;
            											}
HXDLIN( 445)											if (_hx_tmp) {
HXLINE( 445)												::lime::math::_RGBA::RGBA_Impl__obj::unmult = (((Float)255.0) / ( (Float)((sourcePixel & 255)) ));
HXDLIN( 445)												{
HXLINE( 445)													 ::lime::utils::ArrayBufferView this1 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN( 445)													int r = ( (int)(( ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + ::Math_obj::round((( (Float)((::hx::UShr(sourcePixel,24) & 255)) ) * ::lime::math::_RGBA::RGBA_Impl__obj::unmult)))) & 255)) );
HXDLIN( 445)													 ::lime::utils::ArrayBufferView this2 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN( 445)													int g = ( (int)(( ::__hxcpp_memory_get_byte(this2->buffer->b,(this2->byteOffset + ::Math_obj::round((( (Float)((::hx::UShr(sourcePixel,16) & 255)) ) * ::lime::math::_RGBA::RGBA_Impl__obj::unmult)))) & 255)) );
HXDLIN( 445)													 ::lime::utils::ArrayBufferView this3 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN( 445)													sourcePixel = (((((r & 255) << 24) | ((g & 255) << 16)) | ((( (int)(( ::__hxcpp_memory_get_byte(this3->buffer->b,(this3->byteOffset + ::Math_obj::round((( (Float)((::hx::UShr(sourcePixel,8) & 255)) ) * ::lime::math::_RGBA::RGBA_Impl__obj::unmult)))) & 255)) ) & 255) << 8)) | ((sourcePixel & 255) & 255));
            												}
            											}
            										}
            									}
HXLINE( 446)									{
HXLINE( 446)										switch((int)(destFormat)){
            											case (int)0: {
HXLINE( 446)												int r = ( (int)(( ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + destPosition)) & 255)) );
HXDLIN( 446)												int g = ( (int)(( ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 1))) & 255)) );
HXDLIN( 446)												int b = ( (int)(( ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 2))) & 255)) );
HXDLIN( 446)												destPixel = (((((r & 255) << 24) | ((g & 255) << 16)) | ((b & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 3))) & 255)) ) & 255));
            											}
            											break;
            											case (int)1: {
HXLINE( 446)												int r = ( (int)(( ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 1))) & 255)) );
HXDLIN( 446)												int g = ( (int)(( ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 2))) & 255)) );
HXDLIN( 446)												int b = ( (int)(( ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 3))) & 255)) );
HXDLIN( 446)												destPixel = (((((r & 255) << 24) | ((g & 255) << 16)) | ((b & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + destPosition)) & 255)) ) & 255));
            											}
            											break;
            											case (int)2: {
HXLINE( 446)												int r = ( (int)(( ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 2))) & 255)) );
HXDLIN( 446)												int g = ( (int)(( ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 1))) & 255)) );
HXDLIN( 446)												int b = ( (int)(( ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + destPosition)) & 255)) );
HXDLIN( 446)												destPixel = (((((r & 255) << 24) | ((g & 255) << 16)) | ((b & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 3))) & 255)) ) & 255));
            											}
            											break;
            										}
HXDLIN( 446)										if (destPremultiplied) {
HXLINE( 446)											bool _hx_tmp;
HXDLIN( 446)											if (((destPixel & 255) != 0)) {
HXLINE( 446)												_hx_tmp = ((destPixel & 255) != 255);
            											}
            											else {
HXLINE( 446)												_hx_tmp = false;
            											}
HXDLIN( 446)											if (_hx_tmp) {
HXLINE( 446)												::lime::math::_RGBA::RGBA_Impl__obj::unmult = (((Float)255.0) / ( (Float)((destPixel & 255)) ));
HXDLIN( 446)												{
HXLINE( 446)													 ::lime::utils::ArrayBufferView this1 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN( 446)													int r = ( (int)(( ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + ::Math_obj::round((( (Float)((::hx::UShr(destPixel,24) & 255)) ) * ::lime::math::_RGBA::RGBA_Impl__obj::unmult)))) & 255)) );
HXDLIN( 446)													 ::lime::utils::ArrayBufferView this2 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN( 446)													int g = ( (int)(( ::__hxcpp_memory_get_byte(this2->buffer->b,(this2->byteOffset + ::Math_obj::round((( (Float)((::hx::UShr(destPixel,16) & 255)) ) * ::lime::math::_RGBA::RGBA_Impl__obj::unmult)))) & 255)) );
HXDLIN( 446)													 ::lime::utils::ArrayBufferView this3 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN( 446)													destPixel = (((((r & 255) << 24) | ((g & 255) << 16)) | ((( (int)(( ::__hxcpp_memory_get_byte(this3->buffer->b,(this3->byteOffset + ::Math_obj::round((( (Float)((::hx::UShr(destPixel,8) & 255)) ) * ::lime::math::_RGBA::RGBA_Impl__obj::unmult)))) & 255)) ) & 255) << 8)) | ((destPixel & 255) & 255));
            												}
            											}
            										}
            									}
HXLINE( 447)									switch((int)(alphaFormat)){
            										case (int)0: {
HXLINE( 447)											int r = ( (int)(( ::__hxcpp_memory_get_byte(alphaData->buffer->b,(alphaData->byteOffset + alphaPosition)) & 255)) );
HXDLIN( 447)											int g = ( (int)(( ::__hxcpp_memory_get_byte(alphaData->buffer->b,(alphaData->byteOffset + (alphaPosition + 1))) & 255)) );
HXDLIN( 447)											int b = ( (int)(( ::__hxcpp_memory_get_byte(alphaData->buffer->b,(alphaData->byteOffset + (alphaPosition + 2))) & 255)) );
HXDLIN( 447)											alphaPixel = (((((r & 255) << 24) | ((g & 255) << 16)) | ((b & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(alphaData->buffer->b,(alphaData->byteOffset + (alphaPosition + 3))) & 255)) ) & 255));
            										}
            										break;
            										case (int)1: {
HXLINE( 447)											int r = ( (int)(( ::__hxcpp_memory_get_byte(alphaData->buffer->b,(alphaData->byteOffset + (alphaPosition + 1))) & 255)) );
HXDLIN( 447)											int g = ( (int)(( ::__hxcpp_memory_get_byte(alphaData->buffer->b,(alphaData->byteOffset + (alphaPosition + 2))) & 255)) );
HXDLIN( 447)											int b = ( (int)(( ::__hxcpp_memory_get_byte(alphaData->buffer->b,(alphaData->byteOffset + (alphaPosition + 3))) & 255)) );
HXDLIN( 447)											alphaPixel = (((((r & 255) << 24) | ((g & 255) << 16)) | ((b & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(alphaData->buffer->b,(alphaData->byteOffset + alphaPosition)) & 255)) ) & 255));
            										}
            										break;
            										case (int)2: {
HXLINE( 447)											int r = ( (int)(( ::__hxcpp_memory_get_byte(alphaData->buffer->b,(alphaData->byteOffset + (alphaPosition + 2))) & 255)) );
HXDLIN( 447)											int g = ( (int)(( ::__hxcpp_memory_get_byte(alphaData->buffer->b,(alphaData->byteOffset + (alphaPosition + 1))) & 255)) );
HXDLIN( 447)											int b = ( (int)(( ::__hxcpp_memory_get_byte(alphaData->buffer->b,(alphaData->byteOffset + alphaPosition)) & 255)) );
HXDLIN( 447)											alphaPixel = (((((r & 255) << 24) | ((g & 255) << 16)) | ((b & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(alphaData->buffer->b,(alphaData->byteOffset + (alphaPosition + 3))) & 255)) ) & 255));
            										}
            										break;
            									}
HXLINE( 449)									sourceAlpha = ((( (Float)((alphaPixel & 255)) ) / ((Float)255.0)) * (( (Float)((sourcePixel & 255)) ) / ((Float)255.0)));
HXLINE( 451)									if ((sourceAlpha > 0)) {
HXLINE( 453)										destAlpha = (( (Float)((destPixel & 255)) ) / ((Float)255.0));
HXLINE( 454)										oneMinusSourceAlpha = (( (Float)(1) ) - sourceAlpha);
HXLINE( 455)										blendAlpha = (sourceAlpha + (destAlpha * oneMinusSourceAlpha));
HXLINE( 457)										{
HXLINE( 457)											 ::lime::utils::ArrayBufferView this1 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN( 457)											int value = ( (int)(( ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + ::Math_obj::round((((( (Float)((::hx::UShr(sourcePixel,24) & 255)) ) * sourceAlpha) + ((( (Float)((::hx::UShr(destPixel,24) & 255)) ) * destAlpha) * oneMinusSourceAlpha)) / blendAlpha)))) & 255)) );
HXDLIN( 457)											destPixel = (((((value & 255) << 24) | (((::hx::UShr(destPixel,16) & 255) & 255) << 16)) | (((::hx::UShr(destPixel,8) & 255) & 255) << 8)) | ((destPixel & 255) & 255));
            										}
HXLINE( 460)										{
HXLINE( 460)											 ::lime::utils::ArrayBufferView this2 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN( 460)											int value1 = ( (int)(( ::__hxcpp_memory_get_byte(this2->buffer->b,(this2->byteOffset + ::Math_obj::round((((( (Float)((::hx::UShr(sourcePixel,16) & 255)) ) * sourceAlpha) + ((( (Float)((::hx::UShr(destPixel,16) & 255)) ) * destAlpha) * oneMinusSourceAlpha)) / blendAlpha)))) & 255)) );
HXDLIN( 460)											destPixel = ((((((::hx::UShr(destPixel,24) & 255) & 255) << 24) | ((value1 & 255) << 16)) | (((::hx::UShr(destPixel,8) & 255) & 255) << 8)) | ((destPixel & 255) & 255));
            										}
HXLINE( 463)										{
HXLINE( 463)											 ::lime::utils::ArrayBufferView this3 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN( 463)											int value2 = ( (int)(( ::__hxcpp_memory_get_byte(this3->buffer->b,(this3->byteOffset + ::Math_obj::round((((( (Float)((::hx::UShr(sourcePixel,8) & 255)) ) * sourceAlpha) + ((( (Float)((::hx::UShr(destPixel,8) & 255)) ) * destAlpha) * oneMinusSourceAlpha)) / blendAlpha)))) & 255)) );
HXDLIN( 463)											destPixel = ((((((::hx::UShr(destPixel,24) & 255) & 255) << 24) | (((::hx::UShr(destPixel,16) & 255) & 255) << 16)) | ((value2 & 255) << 8)) | ((destPixel & 255) & 255));
            										}
HXLINE( 466)										{
HXLINE( 466)											 ::lime::utils::ArrayBufferView this4 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN( 466)											int value3 = ( (int)(( ::__hxcpp_memory_get_byte(this4->buffer->b,(this4->byteOffset + ::Math_obj::round((blendAlpha * ((Float)255.0))))) & 255)) );
HXDLIN( 466)											destPixel = ((((((::hx::UShr(destPixel,24) & 255) & 255) << 24) | (((::hx::UShr(destPixel,16) & 255) & 255) << 16)) | (((::hx::UShr(destPixel,8) & 255) & 255) << 8)) | (value3 & 255));
            										}
HXLINE( 468)										{
HXLINE( 468)											if (destPremultiplied) {
HXLINE( 468)												if (((destPixel & 255) == 0)) {
HXLINE( 468)													if ((destPixel != 0)) {
HXLINE( 468)														destPixel = 0;
            													}
            												}
            												else {
HXLINE( 468)													if (((destPixel & 255) != 255)) {
HXLINE( 468)														 ::lime::utils::ArrayBufferView this1 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___alpha16;
HXDLIN( 468)														::lime::math::_RGBA::RGBA_Impl__obj::a16 = ( (int)( ::__hxcpp_memory_get_ui32(this1->buffer->b,(this1->byteOffset + ((destPixel & 255) * 4)))) );
HXDLIN( 468)														destPixel = ((((((((::hx::UShr(destPixel,24) & 255) * ::lime::math::_RGBA::RGBA_Impl__obj::a16) >> 16) & 255) << 24) | (((((::hx::UShr(destPixel,16) & 255) * ::lime::math::_RGBA::RGBA_Impl__obj::a16) >> 16) & 255) << 16)) | (((((::hx::UShr(destPixel,8) & 255) * ::lime::math::_RGBA::RGBA_Impl__obj::a16) >> 16) & 255) << 8)) | ((destPixel & 255) & 255));
            													}
            												}
            											}
HXDLIN( 468)											switch((int)(destFormat)){
            												case (int)0: {
HXLINE( 468)													{
HXLINE( 468)														int val = (::hx::UShr(destPixel,24) & 255);
HXDLIN( 468)														 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
            													}
HXDLIN( 468)													{
HXLINE( 468)														int val1 = (::hx::UShr(destPixel,16) & 255);
HXDLIN( 468)														 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 1)),val1);
            													}
HXDLIN( 468)													{
HXLINE( 468)														int val2 = (::hx::UShr(destPixel,8) & 255);
HXDLIN( 468)														 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 2)),val2);
            													}
HXDLIN( 468)													{
HXLINE( 468)														int val3 = (destPixel & 255);
HXDLIN( 468)														 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 3)),val3);
            													}
            												}
            												break;
            												case (int)1: {
HXLINE( 468)													{
HXLINE( 468)														int val = (destPixel & 255);
HXDLIN( 468)														 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
            													}
HXDLIN( 468)													{
HXLINE( 468)														int val1 = (::hx::UShr(destPixel,24) & 255);
HXDLIN( 468)														 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 1)),val1);
            													}
HXDLIN( 468)													{
HXLINE( 468)														int val2 = (::hx::UShr(destPixel,16) & 255);
HXDLIN( 468)														 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 2)),val2);
            													}
HXDLIN( 468)													{
HXLINE( 468)														int val3 = (::hx::UShr(destPixel,8) & 255);
HXDLIN( 468)														 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 3)),val3);
            													}
            												}
            												break;
            												case (int)2: {
HXLINE( 468)													{
HXLINE( 468)														int val = (::hx::UShr(destPixel,8) & 255);
HXDLIN( 468)														 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
            													}
HXDLIN( 468)													{
HXLINE( 468)														int val1 = (::hx::UShr(destPixel,16) & 255);
HXDLIN( 468)														 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 1)),val1);
            													}
HXDLIN( 468)													{
HXLINE( 468)														int val2 = (::hx::UShr(destPixel,24) & 255);
HXDLIN( 468)														 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 2)),val2);
            													}
HXDLIN( 468)													{
HXLINE( 468)														int val3 = (destPixel & 255);
HXDLIN( 468)														 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 3)),val3);
            													}
            												}
            												break;
            											}
            										}
            									}
HXLINE( 471)									sourcePosition = (sourcePosition + 4);
HXLINE( 472)									destPosition = (destPosition + 4);
HXLINE( 473)									alphaPosition = (alphaPosition + 4);
            								}
            							}
            						}
            					}
            					else {
HXLINE( 479)						int _g = 0;
HXDLIN( 479)						int _g1 = destView->height;
HXDLIN( 479)						while((_g < _g1)){
HXLINE( 479)							_g = (_g + 1);
HXDLIN( 479)							int y = (_g - 1);
HXLINE( 481)							sourcePosition = (sourceView->byteOffset + (sourceView->stride * y));
HXLINE( 482)							destPosition = (destView->byteOffset + (destView->stride * y));
HXLINE( 483)							alphaPosition = (alphaView2->byteOffset + (alphaView2->stride * y));
HXLINE( 485)							{
HXLINE( 485)								int _g1 = 0;
HXDLIN( 485)								int _g2 = destView->width;
HXDLIN( 485)								while((_g1 < _g2)){
HXLINE( 485)									_g1 = (_g1 + 1);
HXDLIN( 485)									int x = (_g1 - 1);
HXLINE( 487)									{
HXLINE( 487)										switch((int)(sourceFormat)){
            											case (int)0: {
HXLINE( 487)												int r = ( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + sourcePosition)) & 255)) );
HXDLIN( 487)												int g = ( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + (sourcePosition + 1))) & 255)) );
HXDLIN( 487)												int b = ( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + (sourcePosition + 2))) & 255)) );
HXDLIN( 487)												sourcePixel = (((((r & 255) << 24) | ((g & 255) << 16)) | ((b & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + (sourcePosition + 3))) & 255)) ) & 255));
            											}
            											break;
            											case (int)1: {
HXLINE( 487)												int r = ( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + (sourcePosition + 1))) & 255)) );
HXDLIN( 487)												int g = ( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + (sourcePosition + 2))) & 255)) );
HXDLIN( 487)												int b = ( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + (sourcePosition + 3))) & 255)) );
HXDLIN( 487)												sourcePixel = (((((r & 255) << 24) | ((g & 255) << 16)) | ((b & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + sourcePosition)) & 255)) ) & 255));
            											}
            											break;
            											case (int)2: {
HXLINE( 487)												int r = ( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + (sourcePosition + 2))) & 255)) );
HXDLIN( 487)												int g = ( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + (sourcePosition + 1))) & 255)) );
HXDLIN( 487)												int b = ( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + sourcePosition)) & 255)) );
HXDLIN( 487)												sourcePixel = (((((r & 255) << 24) | ((g & 255) << 16)) | ((b & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + (sourcePosition + 3))) & 255)) ) & 255));
            											}
            											break;
            										}
HXDLIN( 487)										if (sourcePremultiplied) {
HXLINE( 487)											bool _hx_tmp;
HXDLIN( 487)											if (((sourcePixel & 255) != 0)) {
HXLINE( 487)												_hx_tmp = ((sourcePixel & 255) != 255);
            											}
            											else {
HXLINE( 487)												_hx_tmp = false;
            											}
HXDLIN( 487)											if (_hx_tmp) {
HXLINE( 487)												::lime::math::_RGBA::RGBA_Impl__obj::unmult = (((Float)255.0) / ( (Float)((sourcePixel & 255)) ));
HXDLIN( 487)												{
HXLINE( 487)													 ::lime::utils::ArrayBufferView this1 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN( 487)													int r = ( (int)(( ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + ::Math_obj::round((( (Float)((::hx::UShr(sourcePixel,24) & 255)) ) * ::lime::math::_RGBA::RGBA_Impl__obj::unmult)))) & 255)) );
HXDLIN( 487)													 ::lime::utils::ArrayBufferView this2 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN( 487)													int g = ( (int)(( ::__hxcpp_memory_get_byte(this2->buffer->b,(this2->byteOffset + ::Math_obj::round((( (Float)((::hx::UShr(sourcePixel,16) & 255)) ) * ::lime::math::_RGBA::RGBA_Impl__obj::unmult)))) & 255)) );
HXDLIN( 487)													 ::lime::utils::ArrayBufferView this3 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN( 487)													sourcePixel = (((((r & 255) << 24) | ((g & 255) << 16)) | ((( (int)(( ::__hxcpp_memory_get_byte(this3->buffer->b,(this3->byteOffset + ::Math_obj::round((( (Float)((::hx::UShr(sourcePixel,8) & 255)) ) * ::lime::math::_RGBA::RGBA_Impl__obj::unmult)))) & 255)) ) & 255) << 8)) | ((sourcePixel & 255) & 255));
            												}
            											}
            										}
            									}
HXLINE( 488)									switch((int)(alphaFormat)){
            										case (int)0: {
HXLINE( 488)											int r = ( (int)(( ::__hxcpp_memory_get_byte(alphaData->buffer->b,(alphaData->byteOffset + alphaPosition)) & 255)) );
HXDLIN( 488)											int g = ( (int)(( ::__hxcpp_memory_get_byte(alphaData->buffer->b,(alphaData->byteOffset + (alphaPosition + 1))) & 255)) );
HXDLIN( 488)											int b = ( (int)(( ::__hxcpp_memory_get_byte(alphaData->buffer->b,(alphaData->byteOffset + (alphaPosition + 2))) & 255)) );
HXDLIN( 488)											alphaPixel = (((((r & 255) << 24) | ((g & 255) << 16)) | ((b & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(alphaData->buffer->b,(alphaData->byteOffset + (alphaPosition + 3))) & 255)) ) & 255));
            										}
            										break;
            										case (int)1: {
HXLINE( 488)											int r = ( (int)(( ::__hxcpp_memory_get_byte(alphaData->buffer->b,(alphaData->byteOffset + (alphaPosition + 1))) & 255)) );
HXDLIN( 488)											int g = ( (int)(( ::__hxcpp_memory_get_byte(alphaData->buffer->b,(alphaData->byteOffset + (alphaPosition + 2))) & 255)) );
HXDLIN( 488)											int b = ( (int)(( ::__hxcpp_memory_get_byte(alphaData->buffer->b,(alphaData->byteOffset + (alphaPosition + 3))) & 255)) );
HXDLIN( 488)											alphaPixel = (((((r & 255) << 24) | ((g & 255) << 16)) | ((b & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(alphaData->buffer->b,(alphaData->byteOffset + alphaPosition)) & 255)) ) & 255));
            										}
            										break;
            										case (int)2: {
HXLINE( 488)											int r = ( (int)(( ::__hxcpp_memory_get_byte(alphaData->buffer->b,(alphaData->byteOffset + (alphaPosition + 2))) & 255)) );
HXDLIN( 488)											int g = ( (int)(( ::__hxcpp_memory_get_byte(alphaData->buffer->b,(alphaData->byteOffset + (alphaPosition + 1))) & 255)) );
HXDLIN( 488)											int b = ( (int)(( ::__hxcpp_memory_get_byte(alphaData->buffer->b,(alphaData->byteOffset + alphaPosition)) & 255)) );
HXDLIN( 488)											alphaPixel = (((((r & 255) << 24) | ((g & 255) << 16)) | ((b & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(alphaData->buffer->b,(alphaData->byteOffset + (alphaPosition + 3))) & 255)) ) & 255));
            										}
            										break;
            									}
HXLINE( 490)									{
HXLINE( 490)										int value = ::Math_obj::round((( (Float)((sourcePixel & 255)) ) * (( (Float)((alphaPixel & 255)) ) / ( (Float)(255) ))));
HXDLIN( 490)										sourcePixel = ((((((::hx::UShr(sourcePixel,24) & 255) & 255) << 24) | (((::hx::UShr(sourcePixel,16) & 255) & 255) << 16)) | (((::hx::UShr(sourcePixel,8) & 255) & 255) << 8)) | (value & 255));
            									}
HXLINE( 491)									{
HXLINE( 491)										if (destPremultiplied) {
HXLINE( 491)											if (((sourcePixel & 255) == 0)) {
HXLINE( 491)												if ((sourcePixel != 0)) {
HXLINE( 491)													sourcePixel = 0;
            												}
            											}
            											else {
HXLINE( 491)												if (((sourcePixel & 255) != 255)) {
HXLINE( 491)													 ::lime::utils::ArrayBufferView this1 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___alpha16;
HXDLIN( 491)													::lime::math::_RGBA::RGBA_Impl__obj::a16 = ( (int)( ::__hxcpp_memory_get_ui32(this1->buffer->b,(this1->byteOffset + ((sourcePixel & 255) * 4)))) );
HXDLIN( 491)													sourcePixel = ((((((((::hx::UShr(sourcePixel,24) & 255) * ::lime::math::_RGBA::RGBA_Impl__obj::a16) >> 16) & 255) << 24) | (((((::hx::UShr(sourcePixel,16) & 255) * ::lime::math::_RGBA::RGBA_Impl__obj::a16) >> 16) & 255) << 16)) | (((((::hx::UShr(sourcePixel,8) & 255) * ::lime::math::_RGBA::RGBA_Impl__obj::a16) >> 16) & 255) << 8)) | ((sourcePixel & 255) & 255));
            												}
            											}
            										}
HXDLIN( 491)										switch((int)(destFormat)){
            											case (int)0: {
HXLINE( 491)												{
HXLINE( 491)													int val = (::hx::UShr(sourcePixel,24) & 255);
HXDLIN( 491)													 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
            												}
HXDLIN( 491)												{
HXLINE( 491)													int val1 = (::hx::UShr(sourcePixel,16) & 255);
HXDLIN( 491)													 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 1)),val1);
            												}
HXDLIN( 491)												{
HXLINE( 491)													int val2 = (::hx::UShr(sourcePixel,8) & 255);
HXDLIN( 491)													 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 2)),val2);
            												}
HXDLIN( 491)												{
HXLINE( 491)													int val3 = (sourcePixel & 255);
HXDLIN( 491)													 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 3)),val3);
            												}
            											}
            											break;
            											case (int)1: {
HXLINE( 491)												{
HXLINE( 491)													int val = (sourcePixel & 255);
HXDLIN( 491)													 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
            												}
HXDLIN( 491)												{
HXLINE( 491)													int val1 = (::hx::UShr(sourcePixel,24) & 255);
HXDLIN( 491)													 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 1)),val1);
            												}
HXDLIN( 491)												{
HXLINE( 491)													int val2 = (::hx::UShr(sourcePixel,16) & 255);
HXDLIN( 491)													 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 2)),val2);
            												}
HXDLIN( 491)												{
HXLINE( 491)													int val3 = (::hx::UShr(sourcePixel,8) & 255);
HXDLIN( 491)													 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 3)),val3);
            												}
            											}
            											break;
            											case (int)2: {
HXLINE( 491)												{
HXLINE( 491)													int val = (::hx::UShr(sourcePixel,8) & 255);
HXDLIN( 491)													 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
            												}
HXDLIN( 491)												{
HXLINE( 491)													int val1 = (::hx::UShr(sourcePixel,16) & 255);
HXDLIN( 491)													 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 1)),val1);
            												}
HXDLIN( 491)												{
HXLINE( 491)													int val2 = (::hx::UShr(sourcePixel,24) & 255);
HXDLIN( 491)													 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 2)),val2);
            												}
HXDLIN( 491)												{
HXLINE( 491)													int val3 = (sourcePixel & 255);
HXDLIN( 491)													 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 3)),val3);
            												}
            											}
            											break;
            										}
            									}
HXLINE( 493)									sourcePosition = (sourcePosition + 4);
HXLINE( 494)									destPosition = (destPosition + 4);
HXLINE( 495)									alphaPosition = (alphaPosition + 4);
            								}
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE( 503)		image->dirty = true;
HXLINE( 504)		image->version++;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(ImageDataUtil_obj,copyPixels,(void))

void ImageDataUtil_obj::fillRect( ::lime::graphics::Image image, ::lime::math::Rectangle rect,int color,int format){
            	HX_GC_STACKFRAME(&_hx_pos_68d87270d4f7b5ed_508_fillRect)
HXLINE( 509)		int fillColor;
HXLINE( 511)		switch((int)(format)){
            			case (int)1: {
HXLINE( 514)				int argb = color;
HXDLIN( 514)				int this1 = 0;
HXDLIN( 514)				int rgba = this1;
HXDLIN( 514)				rgba = ((((((::hx::UShr(argb,16) & 255) & 255) << 24) | (((::hx::UShr(argb,8) & 255) & 255) << 16)) | (((argb & 255) & 255) << 8)) | ((::hx::UShr(argb,24) & 255) & 255));
HXDLIN( 514)				fillColor = rgba;
            			}
            			break;
            			case (int)2: {
HXLINE( 516)				int bgra = color;
HXDLIN( 516)				int this1 = 0;
HXDLIN( 516)				int rgba = this1;
HXDLIN( 516)				rgba = ((((((::hx::UShr(bgra,8) & 255) & 255) << 24) | (((::hx::UShr(bgra,16) & 255) & 255) << 16)) | (((::hx::UShr(bgra,24) & 255) & 255) << 8)) | ((bgra & 255) & 255));
HXDLIN( 516)				fillColor = rgba;
            			}
            			break;
            			default:{
HXLINE( 518)				fillColor = color;
            			}
            		}
HXLINE( 521)		if (!(image->get_transparent())) {
HXLINE( 523)			fillColor = ((((((::hx::UShr(fillColor,24) & 255) & 255) << 24) | (((::hx::UShr(fillColor,16) & 255) & 255) << 16)) | (((::hx::UShr(fillColor,8) & 255) & 255) << 8)) | 255);
            		}
HXLINE( 526)		 ::lime::utils::ArrayBufferView data = image->buffer->data;
HXLINE( 527)		if (::hx::IsNull( data )) {
HXLINE( 527)			return;
            		}
HXLINE( 530)		if (::lime::_hx_system::CFFI_obj::enabled) {
HXLINE( 530)			::lime::_internal::backend::native::NativeCFFI_obj::lime_image_data_util_fill_rect(::hx::DynamicPtr(image),::hx::DynamicPtr(rect),((fillColor >> 16) & 65535),(fillColor & 65535));
            		}
            		else {
HXLINE( 535)			int format = image->buffer->format;
HXLINE( 536)			bool premultiplied = image->buffer->premultiplied;
HXLINE( 537)			if (premultiplied) {
HXLINE( 537)				if (((fillColor & 255) == 0)) {
HXLINE( 537)					if ((fillColor != 0)) {
HXLINE( 537)						fillColor = 0;
            					}
            				}
            				else {
HXLINE( 537)					if (((fillColor & 255) != 255)) {
HXLINE( 537)						 ::lime::utils::ArrayBufferView this1 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___alpha16;
HXDLIN( 537)						::lime::math::_RGBA::RGBA_Impl__obj::a16 = ( (int)( ::__hxcpp_memory_get_ui32(this1->buffer->b,(this1->byteOffset + ((fillColor & 255) * 4)))) );
HXDLIN( 537)						fillColor = ((((((((::hx::UShr(fillColor,24) & 255) * ::lime::math::_RGBA::RGBA_Impl__obj::a16) >> 16) & 255) << 24) | (((((::hx::UShr(fillColor,16) & 255) * ::lime::math::_RGBA::RGBA_Impl__obj::a16) >> 16) & 255) << 16)) | (((((::hx::UShr(fillColor,8) & 255) * ::lime::math::_RGBA::RGBA_Impl__obj::a16) >> 16) & 255) << 8)) | ((fillColor & 255) & 255));
            					}
            				}
            			}
HXLINE( 539)			 ::lime::_internal::graphics::_ImageDataUtil::ImageDataView dataView =  ::lime::_internal::graphics::_ImageDataUtil::ImageDataView_obj::__alloc( HX_CTX ,image,rect);
HXLINE( 540)			int row;
HXLINE( 542)			{
HXLINE( 542)				int _g = 0;
HXDLIN( 542)				int _g1 = dataView->height;
HXDLIN( 542)				while((_g < _g1)){
HXLINE( 542)					_g = (_g + 1);
HXDLIN( 542)					int y = (_g - 1);
HXLINE( 544)					row = (dataView->byteOffset + (dataView->stride * y));
HXLINE( 546)					{
HXLINE( 546)						int _g1 = 0;
HXDLIN( 546)						int _g2 = dataView->width;
HXDLIN( 546)						while((_g1 < _g2)){
HXLINE( 546)							_g1 = (_g1 + 1);
HXDLIN( 546)							int x = (_g1 - 1);
HXLINE( 548)							{
HXLINE( 548)								int offset = (row + (x * 4));
HXDLIN( 548)								switch((int)(format)){
            									case (int)0: {
HXLINE( 548)										{
HXLINE( 548)											int val = (::hx::UShr(fillColor,24) & 255);
HXDLIN( 548)											 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
            										}
HXDLIN( 548)										{
HXLINE( 548)											int val1 = (::hx::UShr(fillColor,16) & 255);
HXDLIN( 548)											 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + (offset + 1)),val1);
            										}
HXDLIN( 548)										{
HXLINE( 548)											int val2 = (::hx::UShr(fillColor,8) & 255);
HXDLIN( 548)											 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + (offset + 2)),val2);
            										}
HXDLIN( 548)										{
HXLINE( 548)											int val3 = (fillColor & 255);
HXDLIN( 548)											 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + (offset + 3)),val3);
            										}
            									}
            									break;
            									case (int)1: {
HXLINE( 548)										{
HXLINE( 548)											int val = (fillColor & 255);
HXDLIN( 548)											 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
            										}
HXDLIN( 548)										{
HXLINE( 548)											int val1 = (::hx::UShr(fillColor,24) & 255);
HXDLIN( 548)											 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + (offset + 1)),val1);
            										}
HXDLIN( 548)										{
HXLINE( 548)											int val2 = (::hx::UShr(fillColor,16) & 255);
HXDLIN( 548)											 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + (offset + 2)),val2);
            										}
HXDLIN( 548)										{
HXLINE( 548)											int val3 = (::hx::UShr(fillColor,8) & 255);
HXDLIN( 548)											 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + (offset + 3)),val3);
            										}
            									}
            									break;
            									case (int)2: {
HXLINE( 548)										{
HXLINE( 548)											int val = (::hx::UShr(fillColor,8) & 255);
HXDLIN( 548)											 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
            										}
HXDLIN( 548)										{
HXLINE( 548)											int val1 = (::hx::UShr(fillColor,16) & 255);
HXDLIN( 548)											 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + (offset + 1)),val1);
            										}
HXDLIN( 548)										{
HXLINE( 548)											int val2 = (::hx::UShr(fillColor,24) & 255);
HXDLIN( 548)											 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + (offset + 2)),val2);
            										}
HXDLIN( 548)										{
HXLINE( 548)											int val3 = (fillColor & 255);
HXDLIN( 548)											 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + (offset + 3)),val3);
            										}
            									}
            									break;
            								}
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE( 553)		image->dirty = true;
HXLINE( 554)		image->version++;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ImageDataUtil_obj,fillRect,(void))

void ImageDataUtil_obj::floodFill( ::lime::graphics::Image image,int x,int y,int color,int format){
            	HX_STACKFRAME(&_hx_pos_68d87270d4f7b5ed_558_floodFill)
HXLINE( 559)		 ::lime::utils::ArrayBufferView data = image->buffer->data;
HXLINE( 560)		if (::hx::IsNull( data )) {
HXLINE( 560)			return;
            		}
HXLINE( 562)		if ((format == 1)) {
HXLINE( 562)			color = (((color & 16777215) << 8) | ((color >> 24) & 255));
            		}
HXLINE( 565)		if (::lime::_hx_system::CFFI_obj::enabled) {
HXLINE( 565)			::lime::_internal::backend::native::NativeCFFI_obj::lime_image_data_util_flood_fill(::hx::DynamicPtr(image),x,y,((color >> 16) & 65535),(color & 65535));
            		}
            		else {
HXLINE( 570)			int format = image->buffer->format;
HXLINE( 571)			bool premultiplied = image->buffer->premultiplied;
HXLINE( 573)			int fillColor = color;
HXLINE( 575)			int hitColor = 0;
HXLINE( 576)			{
HXLINE( 576)				int offset = (((y + image->offsetY) * (image->buffer->width * 4)) + ((x + image->offsetX) * 4));
HXDLIN( 576)				switch((int)(format)){
            					case (int)0: {
HXLINE( 576)						int r = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset)) & 255)) );
HXDLIN( 576)						int g = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (offset + 1))) & 255)) );
HXDLIN( 576)						int b = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (offset + 2))) & 255)) );
HXDLIN( 576)						hitColor = (((((r & 255) << 24) | ((g & 255) << 16)) | ((b & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (offset + 3))) & 255)) ) & 255));
            					}
            					break;
            					case (int)1: {
HXLINE( 576)						int r = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (offset + 1))) & 255)) );
HXDLIN( 576)						int g = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (offset + 2))) & 255)) );
HXDLIN( 576)						int b = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (offset + 3))) & 255)) );
HXDLIN( 576)						hitColor = (((((r & 255) << 24) | ((g & 255) << 16)) | ((b & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset)) & 255)) ) & 255));
            					}
            					break;
            					case (int)2: {
HXLINE( 576)						int r = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (offset + 2))) & 255)) );
HXDLIN( 576)						int g = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (offset + 1))) & 255)) );
HXDLIN( 576)						int b = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset)) & 255)) );
HXDLIN( 576)						hitColor = (((((r & 255) << 24) | ((g & 255) << 16)) | ((b & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (offset + 3))) & 255)) ) & 255));
            					}
            					break;
            				}
HXDLIN( 576)				if (premultiplied) {
HXLINE( 576)					bool _hx_tmp;
HXDLIN( 576)					if (((hitColor & 255) != 0)) {
HXLINE( 576)						_hx_tmp = ((hitColor & 255) != 255);
            					}
            					else {
HXLINE( 576)						_hx_tmp = false;
            					}
HXDLIN( 576)					if (_hx_tmp) {
HXLINE( 576)						::lime::math::_RGBA::RGBA_Impl__obj::unmult = (((Float)255.0) / ( (Float)((hitColor & 255)) ));
HXDLIN( 576)						{
HXLINE( 576)							 ::lime::utils::ArrayBufferView this1 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN( 576)							int r = ( (int)(( ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + ::Math_obj::round((( (Float)((::hx::UShr(hitColor,24) & 255)) ) * ::lime::math::_RGBA::RGBA_Impl__obj::unmult)))) & 255)) );
HXDLIN( 576)							 ::lime::utils::ArrayBufferView this2 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN( 576)							int g = ( (int)(( ::__hxcpp_memory_get_byte(this2->buffer->b,(this2->byteOffset + ::Math_obj::round((( (Float)((::hx::UShr(hitColor,16) & 255)) ) * ::lime::math::_RGBA::RGBA_Impl__obj::unmult)))) & 255)) );
HXDLIN( 576)							 ::lime::utils::ArrayBufferView this3 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN( 576)							hitColor = (((((r & 255) << 24) | ((g & 255) << 16)) | ((( (int)(( ::__hxcpp_memory_get_byte(this3->buffer->b,(this3->byteOffset + ::Math_obj::round((( (Float)((::hx::UShr(hitColor,8) & 255)) ) * ::lime::math::_RGBA::RGBA_Impl__obj::unmult)))) & 255)) ) & 255) << 8)) | ((hitColor & 255) & 255));
            						}
            					}
            				}
            			}
HXLINE( 578)			if (!(image->get_transparent())) {
HXLINE( 580)				fillColor = ((((((::hx::UShr(fillColor,24) & 255) & 255) << 24) | (((::hx::UShr(fillColor,16) & 255) & 255) << 16)) | (((::hx::UShr(fillColor,8) & 255) & 255) << 8)) | 255);
HXLINE( 581)				hitColor = ((((((::hx::UShr(hitColor,24) & 255) & 255) << 24) | (((::hx::UShr(hitColor,16) & 255) & 255) << 16)) | (((::hx::UShr(hitColor,8) & 255) & 255) << 8)) | 255);
            			}
HXLINE( 584)			if ((fillColor == hitColor)) {
HXLINE( 584)				return;
            			}
HXLINE( 586)			if (premultiplied) {
HXLINE( 586)				if (((fillColor & 255) == 0)) {
HXLINE( 586)					if ((fillColor != 0)) {
HXLINE( 586)						fillColor = 0;
            					}
            				}
            				else {
HXLINE( 586)					if (((fillColor & 255) != 255)) {
HXLINE( 586)						 ::lime::utils::ArrayBufferView this1 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___alpha16;
HXDLIN( 586)						::lime::math::_RGBA::RGBA_Impl__obj::a16 = ( (int)( ::__hxcpp_memory_get_ui32(this1->buffer->b,(this1->byteOffset + ((fillColor & 255) * 4)))) );
HXDLIN( 586)						fillColor = ((((((((::hx::UShr(fillColor,24) & 255) * ::lime::math::_RGBA::RGBA_Impl__obj::a16) >> 16) & 255) << 24) | (((((::hx::UShr(fillColor,16) & 255) * ::lime::math::_RGBA::RGBA_Impl__obj::a16) >> 16) & 255) << 16)) | (((((::hx::UShr(fillColor,8) & 255) * ::lime::math::_RGBA::RGBA_Impl__obj::a16) >> 16) & 255) << 8)) | ((fillColor & 255) & 255));
            					}
            				}
            			}
HXLINE( 588)			::Array< int > dx = ::Array_obj< int >::fromData( _hx_array_data_0eb0fdcf_29,4);
HXLINE( 589)			::Array< int > dy = ::Array_obj< int >::fromData( _hx_array_data_0eb0fdcf_30,4);
HXLINE( 591)			int minX = -(image->offsetX);
HXLINE( 592)			int minY = -(image->offsetY);
HXLINE( 593)			int maxX = (minX + image->width);
HXLINE( 594)			int maxY = (minY + image->height);
HXLINE( 596)			::Array< int > queue = ::Array_obj< int >::__new();
HXLINE( 597)			queue->push(x);
HXLINE( 598)			queue->push(y);
HXLINE( 600)			 ::Dynamic curPointX;
HXDLIN( 600)			 ::Dynamic curPointY;
HXDLIN( 600)			int nextPointX;
HXDLIN( 600)			int nextPointY;
HXDLIN( 600)			int nextPointOffset;
HXDLIN( 600)			int readColor = 0;
HXLINE( 607)			while((queue->length > 0)){
HXLINE( 609)				curPointY = queue->pop();
HXLINE( 610)				curPointX = queue->pop();
HXLINE( 612)				{
HXLINE( 612)					int _g = 0;
HXDLIN( 612)					while((_g < 4)){
HXLINE( 612)						_g = (_g + 1);
HXDLIN( 612)						int i = (_g - 1);
HXLINE( 614)						nextPointX = (curPointX + dx->__get(i));
HXLINE( 615)						nextPointY = (curPointY + dy->__get(i));
HXLINE( 617)						bool _hx_tmp;
HXDLIN( 617)						bool _hx_tmp1;
HXDLIN( 617)						bool _hx_tmp2;
HXDLIN( 617)						if ((nextPointX >= minX)) {
HXLINE( 617)							_hx_tmp2 = (nextPointY < minY);
            						}
            						else {
HXLINE( 617)							_hx_tmp2 = true;
            						}
HXDLIN( 617)						if (!(_hx_tmp2)) {
HXLINE( 617)							_hx_tmp1 = (nextPointX >= maxX);
            						}
            						else {
HXLINE( 617)							_hx_tmp1 = true;
            						}
HXDLIN( 617)						if (!(_hx_tmp1)) {
HXLINE( 617)							_hx_tmp = (nextPointY >= maxY);
            						}
            						else {
HXLINE( 617)							_hx_tmp = true;
            						}
HXDLIN( 617)						if (_hx_tmp) {
HXLINE( 619)							continue;
            						}
HXLINE( 622)						nextPointOffset = (((nextPointY * image->width) + nextPointX) * 4);
HXLINE( 623)						{
HXLINE( 623)							switch((int)(format)){
            								case (int)0: {
HXLINE( 623)									int r = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + nextPointOffset)) & 255)) );
HXDLIN( 623)									int g = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (nextPointOffset + 1))) & 255)) );
HXDLIN( 623)									int b = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (nextPointOffset + 2))) & 255)) );
HXDLIN( 623)									readColor = (((((r & 255) << 24) | ((g & 255) << 16)) | ((b & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (nextPointOffset + 3))) & 255)) ) & 255));
            								}
            								break;
            								case (int)1: {
HXLINE( 623)									int r = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (nextPointOffset + 1))) & 255)) );
HXDLIN( 623)									int g = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (nextPointOffset + 2))) & 255)) );
HXDLIN( 623)									int b = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (nextPointOffset + 3))) & 255)) );
HXDLIN( 623)									readColor = (((((r & 255) << 24) | ((g & 255) << 16)) | ((b & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + nextPointOffset)) & 255)) ) & 255));
            								}
            								break;
            								case (int)2: {
HXLINE( 623)									int r = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (nextPointOffset + 2))) & 255)) );
HXDLIN( 623)									int g = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (nextPointOffset + 1))) & 255)) );
HXDLIN( 623)									int b = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + nextPointOffset)) & 255)) );
HXDLIN( 623)									readColor = (((((r & 255) << 24) | ((g & 255) << 16)) | ((b & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (nextPointOffset + 3))) & 255)) ) & 255));
            								}
            								break;
            							}
HXDLIN( 623)							if (premultiplied) {
HXLINE( 623)								bool _hx_tmp;
HXDLIN( 623)								if (((readColor & 255) != 0)) {
HXLINE( 623)									_hx_tmp = ((readColor & 255) != 255);
            								}
            								else {
HXLINE( 623)									_hx_tmp = false;
            								}
HXDLIN( 623)								if (_hx_tmp) {
HXLINE( 623)									::lime::math::_RGBA::RGBA_Impl__obj::unmult = (((Float)255.0) / ( (Float)((readColor & 255)) ));
HXDLIN( 623)									{
HXLINE( 623)										 ::lime::utils::ArrayBufferView this1 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN( 623)										int r = ( (int)(( ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + ::Math_obj::round((( (Float)((::hx::UShr(readColor,24) & 255)) ) * ::lime::math::_RGBA::RGBA_Impl__obj::unmult)))) & 255)) );
HXDLIN( 623)										 ::lime::utils::ArrayBufferView this2 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN( 623)										int g = ( (int)(( ::__hxcpp_memory_get_byte(this2->buffer->b,(this2->byteOffset + ::Math_obj::round((( (Float)((::hx::UShr(readColor,16) & 255)) ) * ::lime::math::_RGBA::RGBA_Impl__obj::unmult)))) & 255)) );
HXDLIN( 623)										 ::lime::utils::ArrayBufferView this3 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN( 623)										readColor = (((((r & 255) << 24) | ((g & 255) << 16)) | ((( (int)(( ::__hxcpp_memory_get_byte(this3->buffer->b,(this3->byteOffset + ::Math_obj::round((( (Float)((::hx::UShr(readColor,8) & 255)) ) * ::lime::math::_RGBA::RGBA_Impl__obj::unmult)))) & 255)) ) & 255) << 8)) | ((readColor & 255) & 255));
            									}
            								}
            							}
            						}
HXLINE( 625)						if ((readColor == hitColor)) {
HXLINE( 627)							switch((int)(format)){
            								case (int)0: {
HXLINE( 627)									{
HXLINE( 627)										int val = (::hx::UShr(fillColor,24) & 255);
HXDLIN( 627)										 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + nextPointOffset),val);
            									}
HXDLIN( 627)									{
HXLINE( 627)										int val1 = (::hx::UShr(fillColor,16) & 255);
HXDLIN( 627)										 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + (nextPointOffset + 1)),val1);
            									}
HXDLIN( 627)									{
HXLINE( 627)										int val2 = (::hx::UShr(fillColor,8) & 255);
HXDLIN( 627)										 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + (nextPointOffset + 2)),val2);
            									}
HXDLIN( 627)									{
HXLINE( 627)										int val3 = (fillColor & 255);
HXDLIN( 627)										 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + (nextPointOffset + 3)),val3);
            									}
            								}
            								break;
            								case (int)1: {
HXLINE( 627)									{
HXLINE( 627)										int val = (fillColor & 255);
HXDLIN( 627)										 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + nextPointOffset),val);
            									}
HXDLIN( 627)									{
HXLINE( 627)										int val1 = (::hx::UShr(fillColor,24) & 255);
HXDLIN( 627)										 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + (nextPointOffset + 1)),val1);
            									}
HXDLIN( 627)									{
HXLINE( 627)										int val2 = (::hx::UShr(fillColor,16) & 255);
HXDLIN( 627)										 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + (nextPointOffset + 2)),val2);
            									}
HXDLIN( 627)									{
HXLINE( 627)										int val3 = (::hx::UShr(fillColor,8) & 255);
HXDLIN( 627)										 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + (nextPointOffset + 3)),val3);
            									}
            								}
            								break;
            								case (int)2: {
HXLINE( 627)									{
HXLINE( 627)										int val = (::hx::UShr(fillColor,8) & 255);
HXDLIN( 627)										 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + nextPointOffset),val);
            									}
HXDLIN( 627)									{
HXLINE( 627)										int val1 = (::hx::UShr(fillColor,16) & 255);
HXDLIN( 627)										 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + (nextPointOffset + 1)),val1);
            									}
HXDLIN( 627)									{
HXLINE( 627)										int val2 = (::hx::UShr(fillColor,24) & 255);
HXDLIN( 627)										 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + (nextPointOffset + 2)),val2);
            									}
HXDLIN( 627)									{
HXLINE( 627)										int val3 = (fillColor & 255);
HXDLIN( 627)										 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + (nextPointOffset + 3)),val3);
            									}
            								}
            								break;
            							}
HXLINE( 629)							queue->push(nextPointX);
HXLINE( 630)							queue->push(nextPointY);
            						}
            					}
            				}
            			}
            		}
HXLINE( 636)		image->dirty = true;
HXLINE( 637)		image->version++;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(ImageDataUtil_obj,floodFill,(void))

 ::lime::graphics::Image ImageDataUtil_obj::gaussianBlur( ::lime::graphics::Image image, ::lime::graphics::Image sourceImage, ::lime::math::Rectangle sourceRect, ::lime::math::Vector2 destPoint,::hx::Null< Float >  __o_blurX,::hx::Null< Float >  __o_blurY,::hx::Null< int >  __o_quality,::hx::Null< Float >  __o_strength, ::Dynamic color){
            		Float blurX = __o_blurX.Default(4);
            		Float blurY = __o_blurY.Default(4);
            		int quality = __o_quality.Default(1);
            		Float strength = __o_strength.Default(1);
            	HX_STACKFRAME(&_hx_pos_68d87270d4f7b5ed_642_gaussianBlur)
HXLINE( 646)		bool imagePremultiplied = image->get_premultiplied();
HXLINE( 647)		if (imagePremultiplied) {
HXLINE( 647)			image->set_premultiplied(false);
            		}
HXLINE( 657)		::lime::_internal::graphics::StackBlur_obj::blur(image,sourceImage,sourceRect,destPoint,blurX,blurY,quality);
HXLINE( 659)		image->dirty = true;
HXLINE( 660)		image->version++;
HXLINE( 662)		if (imagePremultiplied) {
HXLINE( 662)			image->set_premultiplied(true);
            		}
HXLINE( 664)		return image;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC9(ImageDataUtil_obj,gaussianBlur,return )

 ::lime::math::Rectangle ImageDataUtil_obj::getColorBoundsRect( ::lime::graphics::Image image,int mask,int color,bool findColor,int format){
            	HX_GC_STACKFRAME(&_hx_pos_68d87270d4f7b5ed_668_getColorBoundsRect)
HXLINE( 669)		int left = (image->width + 1);
HXLINE( 670)		int right = 0;
HXLINE( 671)		int top = (image->height + 1);
HXLINE( 672)		int bottom = 0;
HXLINE( 674)		int _color;
HXDLIN( 674)		int _mask;
HXLINE( 676)		switch((int)(format)){
            			case (int)1: {
HXLINE( 679)				int argb = color;
HXDLIN( 679)				int this1 = 0;
HXDLIN( 679)				int rgba = this1;
HXDLIN( 679)				rgba = ((((((::hx::UShr(argb,16) & 255) & 255) << 24) | (((::hx::UShr(argb,8) & 255) & 255) << 16)) | (((argb & 255) & 255) << 8)) | ((::hx::UShr(argb,24) & 255) & 255));
HXDLIN( 679)				_color = rgba;
HXLINE( 680)				int argb1 = mask;
HXDLIN( 680)				int this2 = 0;
HXDLIN( 680)				int rgba1 = this2;
HXDLIN( 680)				rgba1 = ((((((::hx::UShr(argb1,16) & 255) & 255) << 24) | (((::hx::UShr(argb1,8) & 255) & 255) << 16)) | (((argb1 & 255) & 255) << 8)) | ((::hx::UShr(argb1,24) & 255) & 255));
HXDLIN( 680)				_mask = rgba1;
            			}
            			break;
            			case (int)2: {
HXLINE( 683)				int bgra = color;
HXDLIN( 683)				int this1 = 0;
HXDLIN( 683)				int rgba = this1;
HXDLIN( 683)				rgba = ((((((::hx::UShr(bgra,8) & 255) & 255) << 24) | (((::hx::UShr(bgra,16) & 255) & 255) << 16)) | (((::hx::UShr(bgra,24) & 255) & 255) << 8)) | ((bgra & 255) & 255));
HXDLIN( 683)				_color = rgba;
HXLINE( 684)				int bgra1 = mask;
HXDLIN( 684)				int this2 = 0;
HXDLIN( 684)				int rgba1 = this2;
HXDLIN( 684)				rgba1 = ((((((::hx::UShr(bgra1,8) & 255) & 255) << 24) | (((::hx::UShr(bgra1,16) & 255) & 255) << 16)) | (((::hx::UShr(bgra1,24) & 255) & 255) << 8)) | ((bgra1 & 255) & 255));
HXDLIN( 684)				_mask = rgba1;
            			}
            			break;
            			default:{
HXLINE( 687)				_color = color;
HXLINE( 688)				_mask = mask;
            			}
            		}
HXLINE( 691)		if (!(image->get_transparent())) {
HXLINE( 693)			_color = ((((((::hx::UShr(_color,24) & 255) & 255) << 24) | (((::hx::UShr(_color,16) & 255) & 255) << 16)) | (((::hx::UShr(_color,8) & 255) & 255) << 8)) | 255);
HXLINE( 694)			_mask = ((((((::hx::UShr(_mask,24) & 255) & 255) << 24) | (((::hx::UShr(_mask,16) & 255) & 255) << 16)) | (((::hx::UShr(_mask,8) & 255) & 255) << 8)) | 255);
            		}
HXLINE( 697)		int pixel;
HXDLIN( 697)		bool hit;
HXLINE( 699)		{
HXLINE( 699)			int _g = 0;
HXDLIN( 699)			int _g1 = image->width;
HXDLIN( 699)			while((_g < _g1)){
HXLINE( 699)				_g = (_g + 1);
HXDLIN( 699)				int x = (_g - 1);
HXLINE( 701)				hit = false;
HXLINE( 703)				{
HXLINE( 703)					int _g1 = 0;
HXDLIN( 703)					int _g2 = image->height;
HXDLIN( 703)					while((_g1 < _g2)){
HXLINE( 703)						_g1 = (_g1 + 1);
HXDLIN( 703)						int y = (_g1 - 1);
HXLINE( 705)						pixel = image->getPixel32(x,y,0);
HXLINE( 706)						if (findColor) {
HXLINE( 706)							hit = ((pixel & _mask) == _color);
            						}
            						else {
HXLINE( 706)							hit = ((pixel & _mask) != _color);
            						}
HXLINE( 708)						if (hit) {
HXLINE( 710)							if ((x < left)) {
HXLINE( 710)								left = x;
            							}
HXLINE( 711)							goto _hx_goto_33;
            						}
            					}
            					_hx_goto_33:;
            				}
HXLINE( 715)				if (hit) {
HXLINE( 717)					goto _hx_goto_32;
            				}
            			}
            			_hx_goto_32:;
            		}
HXLINE( 721)		int ix;
HXLINE( 723)		{
HXLINE( 723)			int _g2 = 0;
HXDLIN( 723)			int _g3 = image->width;
HXDLIN( 723)			while((_g2 < _g3)){
HXLINE( 723)				_g2 = (_g2 + 1);
HXDLIN( 723)				int x = (_g2 - 1);
HXLINE( 725)				ix = ((image->width - 1) - x);
HXLINE( 726)				hit = false;
HXLINE( 728)				{
HXLINE( 728)					int _g = 0;
HXDLIN( 728)					int _g1 = image->height;
HXDLIN( 728)					while((_g < _g1)){
HXLINE( 728)						_g = (_g + 1);
HXDLIN( 728)						int y = (_g - 1);
HXLINE( 730)						pixel = image->getPixel32(ix,y,0);
HXLINE( 731)						if (findColor) {
HXLINE( 731)							hit = ((pixel & _mask) == _color);
            						}
            						else {
HXLINE( 731)							hit = ((pixel & _mask) != _color);
            						}
HXLINE( 733)						if (hit) {
HXLINE( 735)							if ((ix > right)) {
HXLINE( 735)								right = ix;
            							}
HXLINE( 736)							goto _hx_goto_35;
            						}
            					}
            					_hx_goto_35:;
            				}
HXLINE( 740)				if (hit) {
HXLINE( 742)					goto _hx_goto_34;
            				}
            			}
            			_hx_goto_34:;
            		}
HXLINE( 746)		{
HXLINE( 746)			int _g4 = 0;
HXDLIN( 746)			int _g5 = image->height;
HXDLIN( 746)			while((_g4 < _g5)){
HXLINE( 746)				_g4 = (_g4 + 1);
HXDLIN( 746)				int y = (_g4 - 1);
HXLINE( 748)				hit = false;
HXLINE( 750)				{
HXLINE( 750)					int _g = 0;
HXDLIN( 750)					int _g1 = image->width;
HXDLIN( 750)					while((_g < _g1)){
HXLINE( 750)						_g = (_g + 1);
HXDLIN( 750)						int x = (_g - 1);
HXLINE( 752)						pixel = image->getPixel32(x,y,0);
HXLINE( 753)						if (findColor) {
HXLINE( 753)							hit = ((pixel & _mask) == _color);
            						}
            						else {
HXLINE( 753)							hit = ((pixel & _mask) != _color);
            						}
HXLINE( 755)						if (hit) {
HXLINE( 757)							if ((y < top)) {
HXLINE( 757)								top = y;
            							}
HXLINE( 758)							goto _hx_goto_37;
            						}
            					}
            					_hx_goto_37:;
            				}
HXLINE( 762)				if (hit) {
HXLINE( 764)					goto _hx_goto_36;
            				}
            			}
            			_hx_goto_36:;
            		}
HXLINE( 768)		int iy;
HXLINE( 770)		{
HXLINE( 770)			int _g6 = 0;
HXDLIN( 770)			int _g7 = image->height;
HXDLIN( 770)			while((_g6 < _g7)){
HXLINE( 770)				_g6 = (_g6 + 1);
HXDLIN( 770)				int y = (_g6 - 1);
HXLINE( 772)				iy = ((image->height - 1) - y);
HXLINE( 773)				hit = false;
HXLINE( 775)				{
HXLINE( 775)					int _g = 0;
HXDLIN( 775)					int _g1 = image->width;
HXDLIN( 775)					while((_g < _g1)){
HXLINE( 775)						_g = (_g + 1);
HXDLIN( 775)						int x = (_g - 1);
HXLINE( 777)						pixel = image->getPixel32(x,iy,0);
HXLINE( 778)						if (findColor) {
HXLINE( 778)							hit = ((pixel & _mask) == _color);
            						}
            						else {
HXLINE( 778)							hit = ((pixel & _mask) != _color);
            						}
HXLINE( 780)						if (hit) {
HXLINE( 782)							if ((iy > bottom)) {
HXLINE( 782)								bottom = iy;
            							}
HXLINE( 783)							goto _hx_goto_39;
            						}
            					}
            					_hx_goto_39:;
            				}
HXLINE( 787)				if (hit) {
HXLINE( 789)					goto _hx_goto_38;
            				}
            			}
            			_hx_goto_38:;
            		}
HXLINE( 793)		int w = (right - left);
HXLINE( 794)		int h = (bottom - top);
HXLINE( 796)		if ((w > 0)) {
HXLINE( 796)			w = (w + 1);
            		}
HXLINE( 797)		if ((h > 0)) {
HXLINE( 797)			h = (h + 1);
            		}
HXLINE( 799)		if ((w < 0)) {
HXLINE( 799)			w = 0;
            		}
HXLINE( 800)		if ((h < 0)) {
HXLINE( 800)			h = 0;
            		}
HXLINE( 802)		if ((left == right)) {
HXLINE( 802)			w = 1;
            		}
HXLINE( 803)		if ((top == bottom)) {
HXLINE( 803)			h = 1;
            		}
HXLINE( 805)		if ((left > image->width)) {
HXLINE( 805)			left = 0;
            		}
HXLINE( 806)		if ((top > image->height)) {
HXLINE( 806)			top = 0;
            		}
HXLINE( 808)		return  ::lime::math::Rectangle_obj::__alloc( HX_CTX ,left,top,w,h);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(ImageDataUtil_obj,getColorBoundsRect,return )

int ImageDataUtil_obj::getPixel( ::lime::graphics::Image image,int x,int y,int format){
            	HX_STACKFRAME(&_hx_pos_68d87270d4f7b5ed_812_getPixel)
HXLINE( 813)		int pixel = 0;
HXLINE( 815)		{
HXLINE( 815)			 ::lime::utils::ArrayBufferView data = image->buffer->data;
HXDLIN( 815)			int offset = (((4 * (y + image->offsetY)) * image->buffer->width) + ((x + image->offsetX) * 4));
HXDLIN( 815)			bool premultiplied = image->buffer->premultiplied;
HXDLIN( 815)			switch((int)(image->buffer->format)){
            				case (int)0: {
HXLINE( 815)					int r = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset)) & 255)) );
HXDLIN( 815)					int g = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (offset + 1))) & 255)) );
HXDLIN( 815)					int b = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (offset + 2))) & 255)) );
HXDLIN( 815)					pixel = (((((r & 255) << 24) | ((g & 255) << 16)) | ((b & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (offset + 3))) & 255)) ) & 255));
            				}
            				break;
            				case (int)1: {
HXLINE( 815)					int r = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (offset + 1))) & 255)) );
HXDLIN( 815)					int g = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (offset + 2))) & 255)) );
HXDLIN( 815)					int b = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (offset + 3))) & 255)) );
HXDLIN( 815)					pixel = (((((r & 255) << 24) | ((g & 255) << 16)) | ((b & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset)) & 255)) ) & 255));
            				}
            				break;
            				case (int)2: {
HXLINE( 815)					int r = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (offset + 2))) & 255)) );
HXDLIN( 815)					int g = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (offset + 1))) & 255)) );
HXDLIN( 815)					int b = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset)) & 255)) );
HXDLIN( 815)					pixel = (((((r & 255) << 24) | ((g & 255) << 16)) | ((b & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (offset + 3))) & 255)) ) & 255));
            				}
            				break;
            			}
HXDLIN( 815)			if (premultiplied) {
HXLINE( 815)				bool _hx_tmp;
HXDLIN( 815)				if (((pixel & 255) != 0)) {
HXLINE( 815)					_hx_tmp = ((pixel & 255) != 255);
            				}
            				else {
HXLINE( 815)					_hx_tmp = false;
            				}
HXDLIN( 815)				if (_hx_tmp) {
HXLINE( 815)					::lime::math::_RGBA::RGBA_Impl__obj::unmult = (((Float)255.0) / ( (Float)((pixel & 255)) ));
HXDLIN( 815)					{
HXLINE( 815)						 ::lime::utils::ArrayBufferView this1 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN( 815)						int r = ( (int)(( ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + ::Math_obj::round((( (Float)((::hx::UShr(pixel,24) & 255)) ) * ::lime::math::_RGBA::RGBA_Impl__obj::unmult)))) & 255)) );
HXDLIN( 815)						 ::lime::utils::ArrayBufferView this2 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN( 815)						int g = ( (int)(( ::__hxcpp_memory_get_byte(this2->buffer->b,(this2->byteOffset + ::Math_obj::round((( (Float)((::hx::UShr(pixel,16) & 255)) ) * ::lime::math::_RGBA::RGBA_Impl__obj::unmult)))) & 255)) );
HXDLIN( 815)						 ::lime::utils::ArrayBufferView this3 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN( 815)						pixel = (((((r & 255) << 24) | ((g & 255) << 16)) | ((( (int)(( ::__hxcpp_memory_get_byte(this3->buffer->b,(this3->byteOffset + ::Math_obj::round((( (Float)((::hx::UShr(pixel,8) & 255)) ) * ::lime::math::_RGBA::RGBA_Impl__obj::unmult)))) & 255)) ) & 255) << 8)) | ((pixel & 255) & 255));
            					}
            				}
            			}
            		}
HXLINE( 817)		pixel = ((((((::hx::UShr(pixel,24) & 255) & 255) << 24) | (((::hx::UShr(pixel,16) & 255) & 255) << 16)) | (((::hx::UShr(pixel,8) & 255) & 255) << 8)) | 0);
HXLINE( 819)		switch((int)(format)){
            			case (int)1: {
HXLINE( 822)				int this1 = 0;
HXDLIN( 822)				int argb = this1;
HXDLIN( 822)				argb = ((((((pixel & 255) & 255) << 24) | (((::hx::UShr(pixel,24) & 255) & 255) << 16)) | (((::hx::UShr(pixel,16) & 255) & 255) << 8)) | ((::hx::UShr(pixel,8) & 255) & 255));
HXDLIN( 822)				return argb;
            			}
            			break;
            			case (int)2: {
HXLINE( 824)				int this1 = 0;
HXDLIN( 824)				int bgra = this1;
HXDLIN( 824)				bgra = ((((((::hx::UShr(pixel,8) & 255) & 255) << 24) | (((::hx::UShr(pixel,16) & 255) & 255) << 16)) | (((::hx::UShr(pixel,24) & 255) & 255) << 8)) | ((pixel & 255) & 255));
HXDLIN( 824)				return bgra;
            			}
            			break;
            			default:{
HXLINE( 826)				return pixel;
            			}
            		}
HXLINE( 819)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ImageDataUtil_obj,getPixel,return )

int ImageDataUtil_obj::getPixel32( ::lime::graphics::Image image,int x,int y,int format){
            	HX_STACKFRAME(&_hx_pos_68d87270d4f7b5ed_831_getPixel32)
HXLINE( 832)		int pixel = 0;
HXLINE( 834)		{
HXLINE( 834)			 ::lime::utils::ArrayBufferView data = image->buffer->data;
HXDLIN( 834)			int offset = (((4 * (y + image->offsetY)) * image->buffer->width) + ((x + image->offsetX) * 4));
HXDLIN( 834)			bool premultiplied = image->buffer->premultiplied;
HXDLIN( 834)			switch((int)(image->buffer->format)){
            				case (int)0: {
HXLINE( 834)					int r = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset)) & 255)) );
HXDLIN( 834)					int g = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (offset + 1))) & 255)) );
HXDLIN( 834)					int b = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (offset + 2))) & 255)) );
HXDLIN( 834)					pixel = (((((r & 255) << 24) | ((g & 255) << 16)) | ((b & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (offset + 3))) & 255)) ) & 255));
            				}
            				break;
            				case (int)1: {
HXLINE( 834)					int r = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (offset + 1))) & 255)) );
HXDLIN( 834)					int g = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (offset + 2))) & 255)) );
HXDLIN( 834)					int b = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (offset + 3))) & 255)) );
HXDLIN( 834)					pixel = (((((r & 255) << 24) | ((g & 255) << 16)) | ((b & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset)) & 255)) ) & 255));
            				}
            				break;
            				case (int)2: {
HXLINE( 834)					int r = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (offset + 2))) & 255)) );
HXDLIN( 834)					int g = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (offset + 1))) & 255)) );
HXDLIN( 834)					int b = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset)) & 255)) );
HXDLIN( 834)					pixel = (((((r & 255) << 24) | ((g & 255) << 16)) | ((b & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (offset + 3))) & 255)) ) & 255));
            				}
            				break;
            			}
HXDLIN( 834)			if (premultiplied) {
HXLINE( 834)				bool _hx_tmp;
HXDLIN( 834)				if (((pixel & 255) != 0)) {
HXLINE( 834)					_hx_tmp = ((pixel & 255) != 255);
            				}
            				else {
HXLINE( 834)					_hx_tmp = false;
            				}
HXDLIN( 834)				if (_hx_tmp) {
HXLINE( 834)					::lime::math::_RGBA::RGBA_Impl__obj::unmult = (((Float)255.0) / ( (Float)((pixel & 255)) ));
HXDLIN( 834)					{
HXLINE( 834)						 ::lime::utils::ArrayBufferView this1 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN( 834)						int r = ( (int)(( ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + ::Math_obj::round((( (Float)((::hx::UShr(pixel,24) & 255)) ) * ::lime::math::_RGBA::RGBA_Impl__obj::unmult)))) & 255)) );
HXDLIN( 834)						 ::lime::utils::ArrayBufferView this2 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN( 834)						int g = ( (int)(( ::__hxcpp_memory_get_byte(this2->buffer->b,(this2->byteOffset + ::Math_obj::round((( (Float)((::hx::UShr(pixel,16) & 255)) ) * ::lime::math::_RGBA::RGBA_Impl__obj::unmult)))) & 255)) );
HXDLIN( 834)						 ::lime::utils::ArrayBufferView this3 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN( 834)						pixel = (((((r & 255) << 24) | ((g & 255) << 16)) | ((( (int)(( ::__hxcpp_memory_get_byte(this3->buffer->b,(this3->byteOffset + ::Math_obj::round((( (Float)((::hx::UShr(pixel,8) & 255)) ) * ::lime::math::_RGBA::RGBA_Impl__obj::unmult)))) & 255)) ) & 255) << 8)) | ((pixel & 255) & 255));
            					}
            				}
            			}
            		}
HXLINE( 837)		switch((int)(format)){
            			case (int)1: {
HXLINE( 840)				int this1 = 0;
HXDLIN( 840)				int argb = this1;
HXDLIN( 840)				argb = ((((((pixel & 255) & 255) << 24) | (((::hx::UShr(pixel,24) & 255) & 255) << 16)) | (((::hx::UShr(pixel,16) & 255) & 255) << 8)) | ((::hx::UShr(pixel,8) & 255) & 255));
HXDLIN( 840)				return argb;
            			}
            			break;
            			case (int)2: {
HXLINE( 842)				int this1 = 0;
HXDLIN( 842)				int bgra = this1;
HXDLIN( 842)				bgra = ((((((::hx::UShr(pixel,8) & 255) & 255) << 24) | (((::hx::UShr(pixel,16) & 255) & 255) << 16)) | (((::hx::UShr(pixel,24) & 255) & 255) << 8)) | ((pixel & 255) & 255));
HXDLIN( 842)				return bgra;
            			}
            			break;
            			default:{
HXLINE( 844)				return pixel;
            			}
            		}
HXLINE( 837)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ImageDataUtil_obj,getPixel32,return )

 ::haxe::io::Bytes ImageDataUtil_obj::getPixels( ::lime::graphics::Image image, ::lime::math::Rectangle rect,int format){
            	HX_GC_STACKFRAME(&_hx_pos_68d87270d4f7b5ed_849_getPixels)
HXLINE( 850)		if (::hx::IsNull( image->buffer->data )) {
HXLINE( 850)			return null();
            		}
HXLINE( 852)		int length = ::Std_obj::_hx_int((rect->width * rect->height));
HXLINE( 853)		 ::haxe::io::Bytes bytes = ::haxe::io::Bytes_obj::alloc((length * 4));
HXLINE( 856)		if (::lime::_hx_system::CFFI_obj::enabled) {
HXLINE( 856)			::lime::_internal::backend::native::NativeCFFI_obj::lime_image_data_util_get_pixels(::hx::DynamicPtr(image),::hx::DynamicPtr(rect),format,::hx::DynamicPtr(bytes));
            		}
            		else {
HXLINE( 860)			 ::lime::utils::ArrayBufferView data = image->buffer->data;
HXLINE( 861)			int sourceFormat = image->buffer->format;
HXLINE( 862)			bool premultiplied = image->buffer->premultiplied;
HXLINE( 864)			 ::lime::_internal::graphics::_ImageDataUtil::ImageDataView dataView =  ::lime::_internal::graphics::_ImageDataUtil::ImageDataView_obj::__alloc( HX_CTX ,image,rect);
HXLINE( 865)			int position;
HXLINE( 866)			int argb = 0;
HXLINE( 867)			int bgra = 0;
HXLINE( 868)			int pixel = 0;
HXLINE( 869)			int destPosition = 0;
HXLINE( 871)			{
HXLINE( 871)				int _g = 0;
HXDLIN( 871)				int _g1 = dataView->height;
HXDLIN( 871)				while((_g < _g1)){
HXLINE( 871)					_g = (_g + 1);
HXDLIN( 871)					int y = (_g - 1);
HXLINE( 873)					position = (dataView->byteOffset + (dataView->stride * y));
HXLINE( 875)					{
HXLINE( 875)						int _g1 = 0;
HXDLIN( 875)						int _g2 = dataView->width;
HXDLIN( 875)						while((_g1 < _g2)){
HXLINE( 875)							_g1 = (_g1 + 1);
HXDLIN( 875)							int x = (_g1 - 1);
HXLINE( 877)							{
HXLINE( 877)								switch((int)(sourceFormat)){
            									case (int)0: {
HXLINE( 877)										int r = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + position)) & 255)) );
HXDLIN( 877)										int g = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (position + 1))) & 255)) );
HXDLIN( 877)										int b = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (position + 2))) & 255)) );
HXDLIN( 877)										pixel = (((((r & 255) << 24) | ((g & 255) << 16)) | ((b & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (position + 3))) & 255)) ) & 255));
            									}
            									break;
            									case (int)1: {
HXLINE( 877)										int r = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (position + 1))) & 255)) );
HXDLIN( 877)										int g = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (position + 2))) & 255)) );
HXDLIN( 877)										int b = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (position + 3))) & 255)) );
HXDLIN( 877)										pixel = (((((r & 255) << 24) | ((g & 255) << 16)) | ((b & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + position)) & 255)) ) & 255));
            									}
            									break;
            									case (int)2: {
HXLINE( 877)										int r = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (position + 2))) & 255)) );
HXDLIN( 877)										int g = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (position + 1))) & 255)) );
HXDLIN( 877)										int b = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + position)) & 255)) );
HXDLIN( 877)										pixel = (((((r & 255) << 24) | ((g & 255) << 16)) | ((b & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (position + 3))) & 255)) ) & 255));
            									}
            									break;
            								}
HXDLIN( 877)								if (premultiplied) {
HXLINE( 877)									bool _hx_tmp;
HXDLIN( 877)									if (((pixel & 255) != 0)) {
HXLINE( 877)										_hx_tmp = ((pixel & 255) != 255);
            									}
            									else {
HXLINE( 877)										_hx_tmp = false;
            									}
HXDLIN( 877)									if (_hx_tmp) {
HXLINE( 877)										::lime::math::_RGBA::RGBA_Impl__obj::unmult = (((Float)255.0) / ( (Float)((pixel & 255)) ));
HXDLIN( 877)										{
HXLINE( 877)											 ::lime::utils::ArrayBufferView this1 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN( 877)											int r = ( (int)(( ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + ::Math_obj::round((( (Float)((::hx::UShr(pixel,24) & 255)) ) * ::lime::math::_RGBA::RGBA_Impl__obj::unmult)))) & 255)) );
HXDLIN( 877)											 ::lime::utils::ArrayBufferView this2 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN( 877)											int g = ( (int)(( ::__hxcpp_memory_get_byte(this2->buffer->b,(this2->byteOffset + ::Math_obj::round((( (Float)((::hx::UShr(pixel,16) & 255)) ) * ::lime::math::_RGBA::RGBA_Impl__obj::unmult)))) & 255)) );
HXDLIN( 877)											 ::lime::utils::ArrayBufferView this3 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN( 877)											pixel = (((((r & 255) << 24) | ((g & 255) << 16)) | ((( (int)(( ::__hxcpp_memory_get_byte(this3->buffer->b,(this3->byteOffset + ::Math_obj::round((( (Float)((::hx::UShr(pixel,8) & 255)) ) * ::lime::math::_RGBA::RGBA_Impl__obj::unmult)))) & 255)) ) & 255) << 8)) | ((pixel & 255) & 255));
            										}
            									}
            								}
            							}
HXLINE( 879)							switch((int)(format)){
            								case (int)1: {
HXLINE( 882)									int this1 = 0;
HXDLIN( 882)									int argb1 = this1;
HXDLIN( 882)									argb1 = ((((((pixel & 255) & 255) << 24) | (((::hx::UShr(pixel,24) & 255) & 255) << 16)) | (((::hx::UShr(pixel,16) & 255) & 255) << 8)) | ((::hx::UShr(pixel,8) & 255) & 255));
HXDLIN( 882)									argb = argb1;
HXLINE( 883)									pixel = argb;
            								}
            								break;
            								case (int)2: {
HXLINE( 885)									int this1 = 0;
HXDLIN( 885)									int bgra1 = this1;
HXDLIN( 885)									bgra1 = ((((((::hx::UShr(pixel,8) & 255) & 255) << 24) | (((::hx::UShr(pixel,16) & 255) & 255) << 16)) | (((::hx::UShr(pixel,24) & 255) & 255) << 8)) | ((pixel & 255) & 255));
HXDLIN( 885)									bgra = bgra1;
HXLINE( 886)									pixel = bgra;
            								}
            								break;
            								default:{
            								}
            							}
HXLINE( 890)							{
HXLINE( 890)								destPosition = (destPosition + 1);
HXDLIN( 890)								bytes->b[(destPosition - 1)] = ( (unsigned char)((::hx::UShr(pixel,24) & 255)) );
            							}
HXLINE( 891)							{
HXLINE( 891)								destPosition = (destPosition + 1);
HXDLIN( 891)								bytes->b[(destPosition - 1)] = ( (unsigned char)((::hx::UShr(pixel,16) & 255)) );
            							}
HXLINE( 892)							{
HXLINE( 892)								destPosition = (destPosition + 1);
HXDLIN( 892)								bytes->b[(destPosition - 1)] = ( (unsigned char)((::hx::UShr(pixel,8) & 255)) );
            							}
HXLINE( 893)							{
HXLINE( 893)								destPosition = (destPosition + 1);
HXDLIN( 893)								bytes->b[(destPosition - 1)] = ( (unsigned char)((pixel & 255)) );
            							}
HXLINE( 895)							position = (position + 4);
            						}
            					}
            				}
            			}
            		}
HXLINE( 900)		return bytes;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ImageDataUtil_obj,getPixels,return )

void ImageDataUtil_obj::merge( ::lime::graphics::Image image, ::lime::graphics::Image sourceImage, ::lime::math::Rectangle sourceRect, ::lime::math::Vector2 destPoint,int redMultiplier,int greenMultiplier,int blueMultiplier,int alphaMultiplier){
            	HX_GC_STACKFRAME(&_hx_pos_68d87270d4f7b5ed_905_merge)
HXLINE( 906)		bool _hx_tmp;
HXDLIN( 906)		if (::hx::IsNotNull( image->buffer->data )) {
HXLINE( 906)			_hx_tmp = ::hx::IsNull( sourceImage->buffer->data );
            		}
            		else {
HXLINE( 906)			_hx_tmp = true;
            		}
HXDLIN( 906)		if (_hx_tmp) {
HXLINE( 906)			return;
            		}
HXLINE( 909)		if (::lime::_hx_system::CFFI_obj::enabled) {
HXLINE( 909)			::lime::_internal::backend::native::NativeCFFI_obj::lime_image_data_util_merge(::hx::DynamicPtr(image),::hx::DynamicPtr(sourceImage),::hx::DynamicPtr(sourceRect),::hx::DynamicPtr(destPoint),redMultiplier,greenMultiplier,blueMultiplier,alphaMultiplier);
            		}
            		else {
HXLINE( 914)			 ::lime::_internal::graphics::_ImageDataUtil::ImageDataView sourceView =  ::lime::_internal::graphics::_ImageDataUtil::ImageDataView_obj::__alloc( HX_CTX ,sourceImage,sourceRect);
HXLINE( 915)			 ::lime::_internal::graphics::_ImageDataUtil::ImageDataView destView =  ::lime::_internal::graphics::_ImageDataUtil::ImageDataView_obj::__alloc( HX_CTX ,image, ::lime::math::Rectangle_obj::__alloc( HX_CTX ,destPoint->x,destPoint->y,sourceView->width,sourceView->height));
HXLINE( 917)			 ::lime::utils::ArrayBufferView sourceData = sourceImage->buffer->data;
HXLINE( 918)			 ::lime::utils::ArrayBufferView destData = image->buffer->data;
HXLINE( 919)			int sourceFormat = sourceImage->buffer->format;
HXLINE( 920)			int destFormat = image->buffer->format;
HXLINE( 921)			bool sourcePremultiplied = sourceImage->buffer->premultiplied;
HXLINE( 922)			bool destPremultiplied = image->buffer->premultiplied;
HXLINE( 924)			int sourcePosition;
HXDLIN( 924)			int destPosition;
HXLINE( 925)			int sourcePixel = 0;
HXLINE( 926)			int destPixel = 0;
HXLINE( 928)			{
HXLINE( 928)				int _g = 0;
HXDLIN( 928)				int _g1 = destView->height;
HXDLIN( 928)				while((_g < _g1)){
HXLINE( 928)					_g = (_g + 1);
HXDLIN( 928)					int y = (_g - 1);
HXLINE( 930)					sourcePosition = (sourceView->byteOffset + (sourceView->stride * y));
HXLINE( 931)					destPosition = (destView->byteOffset + (destView->stride * y));
HXLINE( 933)					{
HXLINE( 933)						int _g1 = 0;
HXDLIN( 933)						int _g2 = destView->width;
HXDLIN( 933)						while((_g1 < _g2)){
HXLINE( 933)							_g1 = (_g1 + 1);
HXDLIN( 933)							int x = (_g1 - 1);
HXLINE( 935)							{
HXLINE( 935)								switch((int)(sourceFormat)){
            									case (int)0: {
HXLINE( 935)										int r = ( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + sourcePosition)) & 255)) );
HXDLIN( 935)										int g = ( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + (sourcePosition + 1))) & 255)) );
HXDLIN( 935)										int b = ( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + (sourcePosition + 2))) & 255)) );
HXDLIN( 935)										sourcePixel = (((((r & 255) << 24) | ((g & 255) << 16)) | ((b & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + (sourcePosition + 3))) & 255)) ) & 255));
            									}
            									break;
            									case (int)1: {
HXLINE( 935)										int r = ( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + (sourcePosition + 1))) & 255)) );
HXDLIN( 935)										int g = ( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + (sourcePosition + 2))) & 255)) );
HXDLIN( 935)										int b = ( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + (sourcePosition + 3))) & 255)) );
HXDLIN( 935)										sourcePixel = (((((r & 255) << 24) | ((g & 255) << 16)) | ((b & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + sourcePosition)) & 255)) ) & 255));
            									}
            									break;
            									case (int)2: {
HXLINE( 935)										int r = ( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + (sourcePosition + 2))) & 255)) );
HXDLIN( 935)										int g = ( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + (sourcePosition + 1))) & 255)) );
HXDLIN( 935)										int b = ( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + sourcePosition)) & 255)) );
HXDLIN( 935)										sourcePixel = (((((r & 255) << 24) | ((g & 255) << 16)) | ((b & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + (sourcePosition + 3))) & 255)) ) & 255));
            									}
            									break;
            								}
HXDLIN( 935)								if (sourcePremultiplied) {
HXLINE( 935)									bool _hx_tmp;
HXDLIN( 935)									if (((sourcePixel & 255) != 0)) {
HXLINE( 935)										_hx_tmp = ((sourcePixel & 255) != 255);
            									}
            									else {
HXLINE( 935)										_hx_tmp = false;
            									}
HXDLIN( 935)									if (_hx_tmp) {
HXLINE( 935)										::lime::math::_RGBA::RGBA_Impl__obj::unmult = (((Float)255.0) / ( (Float)((sourcePixel & 255)) ));
HXDLIN( 935)										{
HXLINE( 935)											 ::lime::utils::ArrayBufferView this1 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN( 935)											int r = ( (int)(( ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + ::Math_obj::round((( (Float)((::hx::UShr(sourcePixel,24) & 255)) ) * ::lime::math::_RGBA::RGBA_Impl__obj::unmult)))) & 255)) );
HXDLIN( 935)											 ::lime::utils::ArrayBufferView this2 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN( 935)											int g = ( (int)(( ::__hxcpp_memory_get_byte(this2->buffer->b,(this2->byteOffset + ::Math_obj::round((( (Float)((::hx::UShr(sourcePixel,16) & 255)) ) * ::lime::math::_RGBA::RGBA_Impl__obj::unmult)))) & 255)) );
HXDLIN( 935)											 ::lime::utils::ArrayBufferView this3 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN( 935)											sourcePixel = (((((r & 255) << 24) | ((g & 255) << 16)) | ((( (int)(( ::__hxcpp_memory_get_byte(this3->buffer->b,(this3->byteOffset + ::Math_obj::round((( (Float)((::hx::UShr(sourcePixel,8) & 255)) ) * ::lime::math::_RGBA::RGBA_Impl__obj::unmult)))) & 255)) ) & 255) << 8)) | ((sourcePixel & 255) & 255));
            										}
            									}
            								}
            							}
HXLINE( 936)							{
HXLINE( 936)								switch((int)(destFormat)){
            									case (int)0: {
HXLINE( 936)										int r = ( (int)(( ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + destPosition)) & 255)) );
HXDLIN( 936)										int g = ( (int)(( ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 1))) & 255)) );
HXDLIN( 936)										int b = ( (int)(( ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 2))) & 255)) );
HXDLIN( 936)										destPixel = (((((r & 255) << 24) | ((g & 255) << 16)) | ((b & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 3))) & 255)) ) & 255));
            									}
            									break;
            									case (int)1: {
HXLINE( 936)										int r = ( (int)(( ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 1))) & 255)) );
HXDLIN( 936)										int g = ( (int)(( ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 2))) & 255)) );
HXDLIN( 936)										int b = ( (int)(( ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 3))) & 255)) );
HXDLIN( 936)										destPixel = (((((r & 255) << 24) | ((g & 255) << 16)) | ((b & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + destPosition)) & 255)) ) & 255));
            									}
            									break;
            									case (int)2: {
HXLINE( 936)										int r = ( (int)(( ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 2))) & 255)) );
HXDLIN( 936)										int g = ( (int)(( ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 1))) & 255)) );
HXDLIN( 936)										int b = ( (int)(( ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + destPosition)) & 255)) );
HXDLIN( 936)										destPixel = (((((r & 255) << 24) | ((g & 255) << 16)) | ((b & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 3))) & 255)) ) & 255));
            									}
            									break;
            								}
HXDLIN( 936)								if (destPremultiplied) {
HXLINE( 936)									bool _hx_tmp;
HXDLIN( 936)									if (((destPixel & 255) != 0)) {
HXLINE( 936)										_hx_tmp = ((destPixel & 255) != 255);
            									}
            									else {
HXLINE( 936)										_hx_tmp = false;
            									}
HXDLIN( 936)									if (_hx_tmp) {
HXLINE( 936)										::lime::math::_RGBA::RGBA_Impl__obj::unmult = (((Float)255.0) / ( (Float)((destPixel & 255)) ));
HXDLIN( 936)										{
HXLINE( 936)											 ::lime::utils::ArrayBufferView this1 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN( 936)											int r = ( (int)(( ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + ::Math_obj::round((( (Float)((::hx::UShr(destPixel,24) & 255)) ) * ::lime::math::_RGBA::RGBA_Impl__obj::unmult)))) & 255)) );
HXDLIN( 936)											 ::lime::utils::ArrayBufferView this2 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN( 936)											int g = ( (int)(( ::__hxcpp_memory_get_byte(this2->buffer->b,(this2->byteOffset + ::Math_obj::round((( (Float)((::hx::UShr(destPixel,16) & 255)) ) * ::lime::math::_RGBA::RGBA_Impl__obj::unmult)))) & 255)) );
HXDLIN( 936)											 ::lime::utils::ArrayBufferView this3 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN( 936)											destPixel = (((((r & 255) << 24) | ((g & 255) << 16)) | ((( (int)(( ::__hxcpp_memory_get_byte(this3->buffer->b,(this3->byteOffset + ::Math_obj::round((( (Float)((::hx::UShr(destPixel,8) & 255)) ) * ::lime::math::_RGBA::RGBA_Impl__obj::unmult)))) & 255)) ) & 255) << 8)) | ((destPixel & 255) & 255));
            										}
            									}
            								}
            							}
HXLINE( 938)							{
HXLINE( 938)								int value = ::Std_obj::_hx_int((( (Float)((((::hx::UShr(sourcePixel,24) & 255) * redMultiplier) + ((::hx::UShr(destPixel,24) & 255) * (256 - redMultiplier)))) ) / ( (Float)(256) )));
HXDLIN( 938)								destPixel = (((((value & 255) << 24) | (((::hx::UShr(destPixel,16) & 255) & 255) << 16)) | (((::hx::UShr(destPixel,8) & 255) & 255) << 8)) | ((destPixel & 255) & 255));
            							}
HXLINE( 939)							{
HXLINE( 939)								int value1 = ::Std_obj::_hx_int((( (Float)((((::hx::UShr(sourcePixel,16) & 255) * greenMultiplier) + ((::hx::UShr(destPixel,16) & 255) * (256 - greenMultiplier)))) ) / ( (Float)(256) )));
HXDLIN( 939)								destPixel = ((((((::hx::UShr(destPixel,24) & 255) & 255) << 24) | ((value1 & 255) << 16)) | (((::hx::UShr(destPixel,8) & 255) & 255) << 8)) | ((destPixel & 255) & 255));
            							}
HXLINE( 940)							{
HXLINE( 940)								int value2 = ::Std_obj::_hx_int((( (Float)((((::hx::UShr(sourcePixel,8) & 255) * blueMultiplier) + ((::hx::UShr(destPixel,8) & 255) * (256 - blueMultiplier)))) ) / ( (Float)(256) )));
HXDLIN( 940)								destPixel = ((((((::hx::UShr(destPixel,24) & 255) & 255) << 24) | (((::hx::UShr(destPixel,16) & 255) & 255) << 16)) | ((value2 & 255) << 8)) | ((destPixel & 255) & 255));
            							}
HXLINE( 941)							{
HXLINE( 941)								int value3 = ::Std_obj::_hx_int((( (Float)((((sourcePixel & 255) * alphaMultiplier) + ((destPixel & 255) * (256 - alphaMultiplier)))) ) / ( (Float)(256) )));
HXDLIN( 941)								destPixel = ((((((::hx::UShr(destPixel,24) & 255) & 255) << 24) | (((::hx::UShr(destPixel,16) & 255) & 255) << 16)) | (((::hx::UShr(destPixel,8) & 255) & 255) << 8)) | (value3 & 255));
            							}
HXLINE( 943)							{
HXLINE( 943)								if (destPremultiplied) {
HXLINE( 943)									if (((destPixel & 255) == 0)) {
HXLINE( 943)										if ((destPixel != 0)) {
HXLINE( 943)											destPixel = 0;
            										}
            									}
            									else {
HXLINE( 943)										if (((destPixel & 255) != 255)) {
HXLINE( 943)											 ::lime::utils::ArrayBufferView this1 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___alpha16;
HXDLIN( 943)											::lime::math::_RGBA::RGBA_Impl__obj::a16 = ( (int)( ::__hxcpp_memory_get_ui32(this1->buffer->b,(this1->byteOffset + ((destPixel & 255) * 4)))) );
HXDLIN( 943)											destPixel = ((((((((::hx::UShr(destPixel,24) & 255) * ::lime::math::_RGBA::RGBA_Impl__obj::a16) >> 16) & 255) << 24) | (((((::hx::UShr(destPixel,16) & 255) * ::lime::math::_RGBA::RGBA_Impl__obj::a16) >> 16) & 255) << 16)) | (((((::hx::UShr(destPixel,8) & 255) * ::lime::math::_RGBA::RGBA_Impl__obj::a16) >> 16) & 255) << 8)) | ((destPixel & 255) & 255));
            										}
            									}
            								}
HXDLIN( 943)								switch((int)(destFormat)){
            									case (int)0: {
HXLINE( 943)										{
HXLINE( 943)											int val = (::hx::UShr(destPixel,24) & 255);
HXDLIN( 943)											 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
            										}
HXDLIN( 943)										{
HXLINE( 943)											int val1 = (::hx::UShr(destPixel,16) & 255);
HXDLIN( 943)											 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 1)),val1);
            										}
HXDLIN( 943)										{
HXLINE( 943)											int val2 = (::hx::UShr(destPixel,8) & 255);
HXDLIN( 943)											 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 2)),val2);
            										}
HXDLIN( 943)										{
HXLINE( 943)											int val3 = (destPixel & 255);
HXDLIN( 943)											 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 3)),val3);
            										}
            									}
            									break;
            									case (int)1: {
HXLINE( 943)										{
HXLINE( 943)											int val = (destPixel & 255);
HXDLIN( 943)											 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
            										}
HXDLIN( 943)										{
HXLINE( 943)											int val1 = (::hx::UShr(destPixel,24) & 255);
HXDLIN( 943)											 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 1)),val1);
            										}
HXDLIN( 943)										{
HXLINE( 943)											int val2 = (::hx::UShr(destPixel,16) & 255);
HXDLIN( 943)											 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 2)),val2);
            										}
HXDLIN( 943)										{
HXLINE( 943)											int val3 = (::hx::UShr(destPixel,8) & 255);
HXDLIN( 943)											 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 3)),val3);
            										}
            									}
            									break;
            									case (int)2: {
HXLINE( 943)										{
HXLINE( 943)											int val = (::hx::UShr(destPixel,8) & 255);
HXDLIN( 943)											 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
            										}
HXDLIN( 943)										{
HXLINE( 943)											int val1 = (::hx::UShr(destPixel,16) & 255);
HXDLIN( 943)											 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 1)),val1);
            										}
HXDLIN( 943)										{
HXLINE( 943)											int val2 = (::hx::UShr(destPixel,24) & 255);
HXDLIN( 943)											 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 2)),val2);
            										}
HXDLIN( 943)										{
HXLINE( 943)											int val3 = (destPixel & 255);
HXDLIN( 943)											 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 3)),val3);
            										}
            									}
            									break;
            								}
            							}
HXLINE( 945)							sourcePosition = (sourcePosition + 4);
HXLINE( 946)							destPosition = (destPosition + 4);
            						}
            					}
            				}
            			}
            		}
HXLINE( 951)		image->dirty = true;
HXLINE( 952)		image->version++;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(ImageDataUtil_obj,merge,(void))

void ImageDataUtil_obj::multiplyAlpha( ::lime::graphics::Image image){
            	HX_STACKFRAME(&_hx_pos_68d87270d4f7b5ed_956_multiplyAlpha)
HXLINE( 957)		 ::lime::utils::ArrayBufferView data = image->buffer->data;
HXLINE( 958)		bool _hx_tmp;
HXDLIN( 958)		if (::hx::IsNotNull( data )) {
HXLINE( 958)			_hx_tmp = !(image->buffer->transparent);
            		}
            		else {
HXLINE( 958)			_hx_tmp = true;
            		}
HXDLIN( 958)		if (_hx_tmp) {
HXLINE( 958)			return;
            		}
HXLINE( 961)		if (::lime::_hx_system::CFFI_obj::enabled) {
HXLINE( 961)			::lime::_internal::backend::native::NativeCFFI_obj::lime_image_data_util_multiply_alpha(::hx::DynamicPtr(image));
            		}
            		else {
HXLINE( 965)			int format = image->buffer->format;
HXLINE( 966)			int length = ::Std_obj::_hx_int((( (Float)(data->length) ) / ( (Float)(4) )));
HXLINE( 967)			int pixel = 0;
HXLINE( 969)			{
HXLINE( 969)				int _g = 0;
HXDLIN( 969)				int _g1 = length;
HXDLIN( 969)				while((_g < _g1)){
HXLINE( 969)					_g = (_g + 1);
HXDLIN( 969)					int i = (_g - 1);
HXLINE( 971)					{
HXLINE( 971)						int offset = (i * 4);
HXDLIN( 971)						switch((int)(format)){
            							case (int)0: {
HXLINE( 971)								int r = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset)) & 255)) );
HXDLIN( 971)								int g = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (offset + 1))) & 255)) );
HXDLIN( 971)								int b = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (offset + 2))) & 255)) );
HXDLIN( 971)								pixel = (((((r & 255) << 24) | ((g & 255) << 16)) | ((b & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (offset + 3))) & 255)) ) & 255));
            							}
            							break;
            							case (int)1: {
HXLINE( 971)								int r = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (offset + 1))) & 255)) );
HXDLIN( 971)								int g = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (offset + 2))) & 255)) );
HXDLIN( 971)								int b = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (offset + 3))) & 255)) );
HXDLIN( 971)								pixel = (((((r & 255) << 24) | ((g & 255) << 16)) | ((b & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset)) & 255)) ) & 255));
            							}
            							break;
            							case (int)2: {
HXLINE( 971)								int r = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (offset + 2))) & 255)) );
HXDLIN( 971)								int g = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (offset + 1))) & 255)) );
HXDLIN( 971)								int b = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset)) & 255)) );
HXDLIN( 971)								pixel = (((((r & 255) << 24) | ((g & 255) << 16)) | ((b & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (offset + 3))) & 255)) ) & 255));
            							}
            							break;
            						}
            					}
HXLINE( 972)					{
HXLINE( 972)						int offset1 = (i * 4);
HXDLIN( 972)						if (((pixel & 255) == 0)) {
HXLINE( 972)							if ((pixel != 0)) {
HXLINE( 972)								pixel = 0;
            							}
            						}
            						else {
HXLINE( 972)							if (((pixel & 255) != 255)) {
HXLINE( 972)								 ::lime::utils::ArrayBufferView this1 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___alpha16;
HXDLIN( 972)								::lime::math::_RGBA::RGBA_Impl__obj::a16 = ( (int)( ::__hxcpp_memory_get_ui32(this1->buffer->b,(this1->byteOffset + ((pixel & 255) * 4)))) );
HXDLIN( 972)								pixel = ((((((((::hx::UShr(pixel,24) & 255) * ::lime::math::_RGBA::RGBA_Impl__obj::a16) >> 16) & 255) << 24) | (((((::hx::UShr(pixel,16) & 255) * ::lime::math::_RGBA::RGBA_Impl__obj::a16) >> 16) & 255) << 16)) | (((((::hx::UShr(pixel,8) & 255) * ::lime::math::_RGBA::RGBA_Impl__obj::a16) >> 16) & 255) << 8)) | ((pixel & 255) & 255));
            							}
            						}
HXDLIN( 972)						switch((int)(format)){
            							case (int)0: {
HXLINE( 972)								{
HXLINE( 972)									int val = (::hx::UShr(pixel,24) & 255);
HXDLIN( 972)									 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset1),val);
            								}
HXDLIN( 972)								{
HXLINE( 972)									int val1 = (::hx::UShr(pixel,16) & 255);
HXDLIN( 972)									 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + (offset1 + 1)),val1);
            								}
HXDLIN( 972)								{
HXLINE( 972)									int val2 = (::hx::UShr(pixel,8) & 255);
HXDLIN( 972)									 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + (offset1 + 2)),val2);
            								}
HXDLIN( 972)								{
HXLINE( 972)									int val3 = (pixel & 255);
HXDLIN( 972)									 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + (offset1 + 3)),val3);
            								}
            							}
            							break;
            							case (int)1: {
HXLINE( 972)								{
HXLINE( 972)									int val = (pixel & 255);
HXDLIN( 972)									 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset1),val);
            								}
HXDLIN( 972)								{
HXLINE( 972)									int val1 = (::hx::UShr(pixel,24) & 255);
HXDLIN( 972)									 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + (offset1 + 1)),val1);
            								}
HXDLIN( 972)								{
HXLINE( 972)									int val2 = (::hx::UShr(pixel,16) & 255);
HXDLIN( 972)									 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + (offset1 + 2)),val2);
            								}
HXDLIN( 972)								{
HXLINE( 972)									int val3 = (::hx::UShr(pixel,8) & 255);
HXDLIN( 972)									 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + (offset1 + 3)),val3);
            								}
            							}
            							break;
            							case (int)2: {
HXLINE( 972)								{
HXLINE( 972)									int val = (::hx::UShr(pixel,8) & 255);
HXDLIN( 972)									 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset1),val);
            								}
HXDLIN( 972)								{
HXLINE( 972)									int val1 = (::hx::UShr(pixel,16) & 255);
HXDLIN( 972)									 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + (offset1 + 1)),val1);
            								}
HXDLIN( 972)								{
HXLINE( 972)									int val2 = (::hx::UShr(pixel,24) & 255);
HXDLIN( 972)									 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + (offset1 + 2)),val2);
            								}
HXDLIN( 972)								{
HXLINE( 972)									int val3 = (pixel & 255);
HXDLIN( 972)									 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + (offset1 + 3)),val3);
            								}
            							}
            							break;
            						}
            					}
            				}
            			}
            		}
HXLINE( 976)		image->buffer->premultiplied = true;
HXLINE( 977)		image->dirty = true;
HXLINE( 978)		image->version++;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ImageDataUtil_obj,multiplyAlpha,(void))

void ImageDataUtil_obj::resize( ::lime::graphics::Image image,int newWidth,int newHeight){
            	HX_GC_STACKFRAME(&_hx_pos_68d87270d4f7b5ed_982_resize)
HXLINE( 983)		 ::lime::graphics::ImageBuffer buffer = image->buffer;
HXLINE( 984)		bool _hx_tmp;
HXDLIN( 984)		if ((buffer->width == newWidth)) {
HXLINE( 984)			_hx_tmp = (buffer->height == newHeight);
            		}
            		else {
HXLINE( 984)			_hx_tmp = false;
            		}
HXDLIN( 984)		if (_hx_tmp) {
HXLINE( 984)			return;
            		}
HXLINE( 985)		 ::Dynamic elements = ((newWidth * newHeight) * 4);
HXDLIN( 985)		 ::haxe::io::Bytes buffer1 = null();
HXDLIN( 985)		::cpp::VirtualArray array = null();
HXDLIN( 985)		 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 985)		 ::lime::utils::ArrayBufferView view = null();
HXDLIN( 985)		 ::Dynamic len = null();
HXDLIN( 985)		 ::lime::utils::ArrayBufferView this1;
HXDLIN( 985)		if (::hx::IsNotNull( elements )) {
HXLINE( 985)			this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,4);
            		}
            		else {
HXLINE( 985)			if (::hx::IsNotNull( array )) {
HXLINE( 985)				 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 985)				_this->byteOffset = 0;
HXDLIN( 985)				_this->length = array->get_length();
HXDLIN( 985)				_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 985)				 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 985)				_this->buffer = this2;
HXDLIN( 985)				_this->copyFromArray(array,null());
HXDLIN( 985)				this1 = _this;
            			}
            			else {
HXLINE( 985)				if (::hx::IsNotNull( vector )) {
HXLINE( 985)					 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 985)					::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 985)					_this->byteOffset = 0;
HXDLIN( 985)					_this->length = array->get_length();
HXDLIN( 985)					_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 985)					 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 985)					_this->buffer = this2;
HXDLIN( 985)					_this->copyFromArray(array,null());
HXDLIN( 985)					this1 = _this;
            				}
            				else {
HXLINE( 985)					if (::hx::IsNotNull( view )) {
HXLINE( 985)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 985)						 ::haxe::io::Bytes srcData = view->buffer;
HXDLIN( 985)						int srcLength = view->length;
HXDLIN( 985)						int srcByteOffset = view->byteOffset;
HXDLIN( 985)						int srcElementSize = view->bytesPerElement;
HXDLIN( 985)						int elementSize = _this->bytesPerElement;
HXDLIN( 985)						if ((view->type == _this->type)) {
HXLINE( 985)							int srcLength = srcData->length;
HXDLIN( 985)							int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 985)							 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 985)							_this->buffer = this1;
HXDLIN( 985)							_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            						}
            						else {
HXLINE( 985)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            						}
HXDLIN( 985)						_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 985)						_this->byteOffset = 0;
HXDLIN( 985)						_this->length = srcLength;
HXDLIN( 985)						this1 = _this;
            					}
            					else {
HXLINE( 985)						if (::hx::IsNotNull( buffer1 )) {
HXLINE( 985)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 985)							int in_byteOffset = 0;
HXDLIN( 985)							if ((in_byteOffset < 0)) {
HXLINE( 985)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            							}
HXDLIN( 985)							if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 985)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            							}
HXDLIN( 985)							int bufferByteLength = buffer1->length;
HXDLIN( 985)							int elementSize = _this->bytesPerElement;
HXDLIN( 985)							int newByteLength = bufferByteLength;
HXDLIN( 985)							if (::hx::IsNull( len )) {
HXLINE( 985)								newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 985)								if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 985)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
HXDLIN( 985)								if ((newByteLength < 0)) {
HXLINE( 985)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
            							}
            							else {
HXLINE( 985)								newByteLength = (( (int)(len) ) * _this->bytesPerElement);
HXDLIN( 985)								int newRange = (in_byteOffset + newByteLength);
HXDLIN( 985)								if ((newRange > bufferByteLength)) {
HXLINE( 985)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
            							}
HXDLIN( 985)							_this->buffer = buffer1;
HXDLIN( 985)							_this->byteOffset = in_byteOffset;
HXDLIN( 985)							_this->byteLength = newByteLength;
HXDLIN( 985)							_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 985)							this1 = _this;
            						}
            						else {
HXLINE( 985)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt8Array",6b,44,d5,85)));
            						}
            					}
            				}
            			}
            		}
HXDLIN( 985)		 ::lime::graphics::ImageBuffer newBuffer =  ::lime::graphics::ImageBuffer_obj::__alloc( HX_CTX ,this1,newWidth,newHeight,null(),null());
HXLINE( 988)		if (::lime::_hx_system::CFFI_obj::enabled) {
HXLINE( 988)			::lime::_internal::backend::native::NativeCFFI_obj::lime_image_data_util_resize(::hx::DynamicPtr(image),::hx::DynamicPtr(newBuffer),newWidth,newHeight);
            		}
            		else {
HXLINE( 992)			int imageWidth = image->width;
HXLINE( 993)			int imageHeight = image->height;
HXLINE( 995)			 ::lime::utils::ArrayBufferView data = image->get_data();
HXLINE( 996)			 ::lime::utils::ArrayBufferView newData = newBuffer->data;
HXLINE( 997)			int sourceIndex;
HXDLIN( 997)			int sourceIndexX;
HXDLIN( 997)			int sourceIndexY;
HXDLIN( 997)			int sourceIndexXY;
HXDLIN( 997)			int index;
HXLINE(1002)			int sourceX;
HXDLIN(1002)			int sourceY;
HXLINE(1003)			Float u;
HXDLIN(1003)			Float v;
HXDLIN(1003)			Float uRatio;
HXDLIN(1003)			Float vRatio;
HXDLIN(1003)			Float uOpposite;
HXDLIN(1003)			Float vOpposite;
HXLINE(1010)			{
HXLINE(1010)				int _g = 0;
HXDLIN(1010)				int _g1 = newHeight;
HXDLIN(1010)				while((_g < _g1)){
HXLINE(1010)					_g = (_g + 1);
HXDLIN(1010)					int y = (_g - 1);
HXLINE(1012)					{
HXLINE(1012)						int _g1 = 0;
HXDLIN(1012)						int _g2 = newWidth;
HXDLIN(1012)						while((_g1 < _g2)){
HXLINE(1012)							_g1 = (_g1 + 1);
HXDLIN(1012)							int x = (_g1 - 1);
HXLINE(1016)							u = ((((x + ((Float)0.5)) / ( (Float)(newWidth) )) * ( (Float)(imageWidth) )) - ((Float)0.5));
HXLINE(1017)							v = ((((y + ((Float)0.5)) / ( (Float)(newHeight) )) * ( (Float)(imageHeight) )) - ((Float)0.5));
HXLINE(1019)							sourceX = ::Std_obj::_hx_int(u);
HXLINE(1020)							sourceY = ::Std_obj::_hx_int(v);
HXLINE(1022)							sourceIndex = (((sourceY * imageWidth) + sourceX) * 4);
HXLINE(1023)							if ((sourceX < (imageWidth - 1))) {
HXLINE(1023)								sourceIndexX = (sourceIndex + 4);
            							}
            							else {
HXLINE(1023)								sourceIndexX = sourceIndex;
            							}
HXLINE(1024)							if ((sourceY < (imageHeight - 1))) {
HXLINE(1024)								sourceIndexY = (sourceIndex + (imageWidth * 4));
            							}
            							else {
HXLINE(1024)								sourceIndexY = sourceIndex;
            							}
HXLINE(1025)							if ((sourceIndexX != sourceIndex)) {
HXLINE(1025)								sourceIndexXY = (sourceIndexY + 4);
            							}
            							else {
HXLINE(1025)								sourceIndexXY = sourceIndexY;
            							}
HXLINE(1027)							index = (((y * newWidth) + x) * 4);
HXLINE(1029)							uRatio = (u - ( (Float)(sourceX) ));
HXLINE(1030)							vRatio = (v - ( (Float)(sourceY) ));
HXLINE(1031)							uOpposite = (( (Float)(1) ) - uRatio);
HXLINE(1032)							vOpposite = (( (Float)(1) ) - vRatio);
HXLINE(1034)							{
HXLINE(1034)								int _hx_int = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + sourceIndex)) & 255)) );
HXDLIN(1034)								Float val;
HXDLIN(1034)								if ((_hx_int < 0)) {
HXLINE(1034)									val = (((Float)4294967296.0) + _hx_int);
            								}
            								else {
HXLINE(1034)									val = (_hx_int + ((Float)0.0));
            								}
HXDLIN(1034)								int int1 = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + sourceIndexX)) & 255)) );
HXDLIN(1034)								Float val1;
HXDLIN(1034)								if ((int1 < 0)) {
HXLINE(1034)									val1 = (((Float)4294967296.0) + int1);
            								}
            								else {
HXLINE(1034)									val1 = (int1 + ((Float)0.0));
            								}
HXLINE(1035)								int int2 = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + sourceIndexY)) & 255)) );
HXDLIN(1035)								Float val2;
HXDLIN(1035)								if ((int2 < 0)) {
HXLINE(1035)									val2 = (((Float)4294967296.0) + int2);
            								}
            								else {
HXLINE(1035)									val2 = (int2 + ((Float)0.0));
            								}
HXDLIN(1035)								int int3 = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + sourceIndexXY)) & 255)) );
HXDLIN(1035)								Float val3;
HXDLIN(1035)								if ((int3 < 0)) {
HXLINE(1035)									val3 = (((Float)4294967296.0) + int3);
            								}
            								else {
HXLINE(1035)									val3 = (int3 + ((Float)0.0));
            								}
HXLINE(1034)								int val4 = ::Std_obj::_hx_int(((((val * uOpposite) + (val1 * uRatio)) * vOpposite) + (((val2 * uOpposite) + (val3 * uRatio)) * vRatio)));
HXDLIN(1034)								 ::__hxcpp_memory_set_byte(newData->buffer->b,(newData->byteOffset + index),val4);
            							}
HXLINE(1036)							{
HXLINE(1036)								int int4 = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (sourceIndex + 1))) & 255)) );
HXDLIN(1036)								Float val5;
HXDLIN(1036)								if ((int4 < 0)) {
HXLINE(1036)									val5 = (((Float)4294967296.0) + int4);
            								}
            								else {
HXLINE(1036)									val5 = (int4 + ((Float)0.0));
            								}
HXDLIN(1036)								int int5 = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (sourceIndexX + 1))) & 255)) );
HXDLIN(1036)								Float val6;
HXDLIN(1036)								if ((int5 < 0)) {
HXLINE(1036)									val6 = (((Float)4294967296.0) + int5);
            								}
            								else {
HXLINE(1036)									val6 = (int5 + ((Float)0.0));
            								}
HXLINE(1037)								int int6 = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (sourceIndexY + 1))) & 255)) );
HXDLIN(1037)								Float val7;
HXDLIN(1037)								if ((int6 < 0)) {
HXLINE(1037)									val7 = (((Float)4294967296.0) + int6);
            								}
            								else {
HXLINE(1037)									val7 = (int6 + ((Float)0.0));
            								}
HXDLIN(1037)								int int7 = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (sourceIndexXY + 1))) & 255)) );
HXDLIN(1037)								Float val8;
HXDLIN(1037)								if ((int7 < 0)) {
HXLINE(1037)									val8 = (((Float)4294967296.0) + int7);
            								}
            								else {
HXLINE(1037)									val8 = (int7 + ((Float)0.0));
            								}
HXLINE(1036)								int val9 = ::Std_obj::_hx_int(((((val5 * uOpposite) + (val6 * uRatio)) * vOpposite) + (((val7 * uOpposite) + (val8 * uRatio)) * vRatio)));
HXDLIN(1036)								 ::__hxcpp_memory_set_byte(newData->buffer->b,(newData->byteOffset + (index + 1)),val9);
            							}
HXLINE(1038)							{
HXLINE(1038)								int int8 = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (sourceIndex + 2))) & 255)) );
HXDLIN(1038)								Float val10;
HXDLIN(1038)								if ((int8 < 0)) {
HXLINE(1038)									val10 = (((Float)4294967296.0) + int8);
            								}
            								else {
HXLINE(1038)									val10 = (int8 + ((Float)0.0));
            								}
HXDLIN(1038)								int int9 = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (sourceIndexX + 2))) & 255)) );
HXDLIN(1038)								Float val11;
HXDLIN(1038)								if ((int9 < 0)) {
HXLINE(1038)									val11 = (((Float)4294967296.0) + int9);
            								}
            								else {
HXLINE(1038)									val11 = (int9 + ((Float)0.0));
            								}
HXLINE(1039)								int int10 = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (sourceIndexY + 2))) & 255)) );
HXDLIN(1039)								Float val12;
HXDLIN(1039)								if ((int10 < 0)) {
HXLINE(1039)									val12 = (((Float)4294967296.0) + int10);
            								}
            								else {
HXLINE(1039)									val12 = (int10 + ((Float)0.0));
            								}
HXDLIN(1039)								int int11 = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (sourceIndexXY + 2))) & 255)) );
HXDLIN(1039)								Float val13;
HXDLIN(1039)								if ((int11 < 0)) {
HXLINE(1039)									val13 = (((Float)4294967296.0) + int11);
            								}
            								else {
HXLINE(1039)									val13 = (int11 + ((Float)0.0));
            								}
HXLINE(1038)								int val14 = ::Std_obj::_hx_int(((((val10 * uOpposite) + (val11 * uRatio)) * vOpposite) + (((val12 * uOpposite) + (val13 * uRatio)) * vRatio)));
HXDLIN(1038)								 ::__hxcpp_memory_set_byte(newData->buffer->b,(newData->byteOffset + (index + 2)),val14);
            							}
HXLINE(1043)							bool _hx_tmp;
HXDLIN(1043)							bool _hx_tmp1;
HXDLIN(1043)							if ((( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (sourceIndexX + 3))) & 255)) ) != 0)) {
HXLINE(1043)								_hx_tmp1 = (( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (sourceIndexY + 3))) & 255)) ) == 0);
            							}
            							else {
HXLINE(1043)								_hx_tmp1 = true;
            							}
HXDLIN(1043)							if (!(_hx_tmp1)) {
HXLINE(1043)								_hx_tmp = (( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (sourceIndexXY + 3))) & 255)) ) == 0);
            							}
            							else {
HXLINE(1043)								_hx_tmp = true;
            							}
HXDLIN(1043)							if (_hx_tmp) {
HXLINE(1045)								 ::__hxcpp_memory_set_byte(newData->buffer->b,(newData->byteOffset + (index + 3)),0);
            							}
            							else {
HXLINE(1049)								int val = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (sourceIndex + 3))) & 255)) );
HXDLIN(1049)								 ::__hxcpp_memory_set_byte(newData->buffer->b,(newData->byteOffset + (index + 3)),val);
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE(1055)		buffer->data = newBuffer->data;
HXLINE(1056)		buffer->width = newWidth;
HXLINE(1057)		buffer->height = newHeight;
HXLINE(1066)		image->dirty = true;
HXLINE(1067)		image->version++;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ImageDataUtil_obj,resize,(void))

void ImageDataUtil_obj::resizeBuffer( ::lime::graphics::Image image,int newWidth,int newHeight){
            	HX_GC_STACKFRAME(&_hx_pos_68d87270d4f7b5ed_1071_resizeBuffer)
HXLINE(1072)		 ::lime::graphics::ImageBuffer buffer = image->buffer;
HXLINE(1073)		 ::lime::utils::ArrayBufferView data = image->get_data();
HXLINE(1074)		 ::Dynamic elements = ((newWidth * newHeight) * 4);
HXDLIN(1074)		 ::haxe::io::Bytes buffer1 = null();
HXDLIN(1074)		::cpp::VirtualArray array = null();
HXDLIN(1074)		 ::openfl::_Vector::IntVector vector = null();
HXDLIN(1074)		 ::lime::utils::ArrayBufferView view = null();
HXDLIN(1074)		 ::Dynamic len = null();
HXDLIN(1074)		 ::lime::utils::ArrayBufferView this1;
HXDLIN(1074)		if (::hx::IsNotNull( elements )) {
HXLINE(1074)			this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,4);
            		}
            		else {
HXLINE(1074)			if (::hx::IsNotNull( array )) {
HXLINE(1074)				 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN(1074)				_this->byteOffset = 0;
HXDLIN(1074)				_this->length = array->get_length();
HXDLIN(1074)				_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN(1074)				 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN(1074)				_this->buffer = this2;
HXDLIN(1074)				_this->copyFromArray(array,null());
HXDLIN(1074)				this1 = _this;
            			}
            			else {
HXLINE(1074)				if (::hx::IsNotNull( vector )) {
HXLINE(1074)					 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN(1074)					::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN(1074)					_this->byteOffset = 0;
HXDLIN(1074)					_this->length = array->get_length();
HXDLIN(1074)					_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN(1074)					 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN(1074)					_this->buffer = this2;
HXDLIN(1074)					_this->copyFromArray(array,null());
HXDLIN(1074)					this1 = _this;
            				}
            				else {
HXLINE(1074)					if (::hx::IsNotNull( view )) {
HXLINE(1074)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN(1074)						 ::haxe::io::Bytes srcData = view->buffer;
HXDLIN(1074)						int srcLength = view->length;
HXDLIN(1074)						int srcByteOffset = view->byteOffset;
HXDLIN(1074)						int srcElementSize = view->bytesPerElement;
HXDLIN(1074)						int elementSize = _this->bytesPerElement;
HXDLIN(1074)						if ((view->type == _this->type)) {
HXLINE(1074)							int srcLength = srcData->length;
HXDLIN(1074)							int cloneLength = (srcLength - srcByteOffset);
HXDLIN(1074)							 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN(1074)							_this->buffer = this1;
HXDLIN(1074)							_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            						}
            						else {
HXLINE(1074)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            						}
HXDLIN(1074)						_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN(1074)						_this->byteOffset = 0;
HXDLIN(1074)						_this->length = srcLength;
HXDLIN(1074)						this1 = _this;
            					}
            					else {
HXLINE(1074)						if (::hx::IsNotNull( buffer1 )) {
HXLINE(1074)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN(1074)							int in_byteOffset = 0;
HXDLIN(1074)							if ((in_byteOffset < 0)) {
HXLINE(1074)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            							}
HXDLIN(1074)							if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE(1074)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            							}
HXDLIN(1074)							int bufferByteLength = buffer1->length;
HXDLIN(1074)							int elementSize = _this->bytesPerElement;
HXDLIN(1074)							int newByteLength = bufferByteLength;
HXDLIN(1074)							if (::hx::IsNull( len )) {
HXLINE(1074)								newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN(1074)								if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE(1074)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
HXDLIN(1074)								if ((newByteLength < 0)) {
HXLINE(1074)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
            							}
            							else {
HXLINE(1074)								newByteLength = (( (int)(len) ) * _this->bytesPerElement);
HXDLIN(1074)								int newRange = (in_byteOffset + newByteLength);
HXDLIN(1074)								if ((newRange > bufferByteLength)) {
HXLINE(1074)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
            							}
HXDLIN(1074)							_this->buffer = buffer1;
HXDLIN(1074)							_this->byteOffset = in_byteOffset;
HXDLIN(1074)							_this->byteLength = newByteLength;
HXDLIN(1074)							_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN(1074)							this1 = _this;
            						}
            						else {
HXLINE(1074)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt8Array",6b,44,d5,85)));
            						}
            					}
            				}
            			}
            		}
HXDLIN(1074)		 ::lime::utils::ArrayBufferView newData = this1;
HXLINE(1075)		int sourceIndex;
HXDLIN(1075)		int index;
HXLINE(1077)		{
HXLINE(1077)			int _g = 0;
HXDLIN(1077)			int _g1 = buffer->height;
HXDLIN(1077)			while((_g < _g1)){
HXLINE(1077)				_g = (_g + 1);
HXDLIN(1077)				int y = (_g - 1);
HXLINE(1079)				{
HXLINE(1079)					int _g1 = 0;
HXDLIN(1079)					int _g2 = buffer->width;
HXDLIN(1079)					while((_g1 < _g2)){
HXLINE(1079)						_g1 = (_g1 + 1);
HXDLIN(1079)						int x = (_g1 - 1);
HXLINE(1081)						sourceIndex = (((y * buffer->width) + x) * 4);
HXLINE(1082)						index = (((y * newWidth) + x) * 4);
HXLINE(1084)						{
HXLINE(1084)							int val = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + sourceIndex)) & 255)) );
HXDLIN(1084)							 ::__hxcpp_memory_set_byte(newData->buffer->b,(newData->byteOffset + index),val);
            						}
HXLINE(1085)						{
HXLINE(1085)							int val1 = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (sourceIndex + 1))) & 255)) );
HXDLIN(1085)							 ::__hxcpp_memory_set_byte(newData->buffer->b,(newData->byteOffset + (index + 1)),val1);
            						}
HXLINE(1086)						{
HXLINE(1086)							int val2 = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (sourceIndex + 2))) & 255)) );
HXDLIN(1086)							 ::__hxcpp_memory_set_byte(newData->buffer->b,(newData->byteOffset + (index + 2)),val2);
            						}
HXLINE(1087)						{
HXLINE(1087)							int val3 = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (sourceIndex + 3))) & 255)) );
HXDLIN(1087)							 ::__hxcpp_memory_set_byte(newData->buffer->b,(newData->byteOffset + (index + 3)),val3);
            						}
            					}
            				}
            			}
            		}
HXLINE(1091)		buffer->data = newData;
HXLINE(1092)		buffer->width = newWidth;
HXLINE(1093)		buffer->height = newHeight;
HXLINE(1102)		image->dirty = true;
HXLINE(1103)		image->version++;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ImageDataUtil_obj,resizeBuffer,(void))

void ImageDataUtil_obj::setFormat( ::lime::graphics::Image image,int format){
            	HX_STACKFRAME(&_hx_pos_68d87270d4f7b5ed_1107_setFormat)
HXLINE(1108)		 ::lime::utils::ArrayBufferView data = image->buffer->data;
HXLINE(1109)		if (::hx::IsNull( data )) {
HXLINE(1109)			return;
            		}
HXLINE(1112)		if (::lime::_hx_system::CFFI_obj::enabled) {
HXLINE(1112)			::lime::_internal::backend::native::NativeCFFI_obj::lime_image_data_util_set_format(::hx::DynamicPtr(image),format);
            		}
            		else {
HXLINE(1116)			int index;
HXDLIN(1116)			 ::Dynamic a16;
HXLINE(1117)			int length = ::Std_obj::_hx_int((( (Float)(data->length) ) / ( (Float)(4) )));
HXLINE(1118)			int r1;
HXDLIN(1118)			int g1;
HXDLIN(1118)			int b1;
HXDLIN(1118)			int a1;
HXDLIN(1118)			int r2;
HXDLIN(1118)			int g2;
HXDLIN(1118)			int b2;
HXDLIN(1118)			int a2;
HXLINE(1119)			 ::Dynamic r;
HXDLIN(1119)			 ::Dynamic g;
HXDLIN(1119)			 ::Dynamic b;
HXDLIN(1119)			 ::Dynamic a;
HXLINE(1121)			switch((int)(image->get_format())){
            				case (int)0: {
HXLINE(1124)					r1 = 0;
HXLINE(1125)					g1 = 1;
HXLINE(1126)					b1 = 2;
HXLINE(1127)					a1 = 3;
            				}
            				break;
            				case (int)1: {
HXLINE(1130)					r1 = 1;
HXLINE(1131)					g1 = 2;
HXLINE(1132)					b1 = 3;
HXLINE(1133)					a1 = 0;
            				}
            				break;
            				case (int)2: {
HXLINE(1136)					r1 = 2;
HXLINE(1137)					g1 = 1;
HXLINE(1138)					b1 = 0;
HXLINE(1139)					a1 = 3;
            				}
            				break;
            			}
HXLINE(1142)			switch((int)(format)){
            				case (int)0: {
HXLINE(1145)					r2 = 0;
HXLINE(1146)					g2 = 1;
HXLINE(1147)					b2 = 2;
HXLINE(1148)					a2 = 3;
            				}
            				break;
            				case (int)1: {
HXLINE(1151)					r2 = 1;
HXLINE(1152)					g2 = 2;
HXLINE(1153)					b2 = 3;
HXLINE(1154)					a2 = 0;
            				}
            				break;
            				case (int)2: {
HXLINE(1157)					r2 = 2;
HXLINE(1158)					g2 = 1;
HXLINE(1159)					b2 = 0;
HXLINE(1160)					a2 = 3;
            				}
            				break;
            			}
HXLINE(1163)			{
HXLINE(1163)				int _g = 0;
HXDLIN(1163)				int _g1 = length;
HXDLIN(1163)				while((_g < _g1)){
HXLINE(1163)					_g = (_g + 1);
HXDLIN(1163)					int i = (_g - 1);
HXLINE(1165)					index = (i * 4);
HXLINE(1167)					r = ( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (index + r1))) & 255);
HXLINE(1168)					g = ( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (index + g1))) & 255);
HXLINE(1169)					b = ( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (index + b1))) & 255);
HXLINE(1170)					a = ( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (index + a1))) & 255);
HXLINE(1172)					{
HXLINE(1172)						int val = ( (int)(r) );
HXDLIN(1172)						 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + (index + r2)),val);
            					}
HXLINE(1173)					{
HXLINE(1173)						int val1 = ( (int)(g) );
HXDLIN(1173)						 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + (index + g2)),val1);
            					}
HXLINE(1174)					{
HXLINE(1174)						int val2 = ( (int)(b) );
HXDLIN(1174)						 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + (index + b2)),val2);
            					}
HXLINE(1175)					{
HXLINE(1175)						int val3 = ( (int)(a) );
HXDLIN(1175)						 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + (index + a2)),val3);
            					}
            				}
            			}
            		}
HXLINE(1179)		image->buffer->format = format;
HXLINE(1180)		image->dirty = true;
HXLINE(1181)		image->version++;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ImageDataUtil_obj,setFormat,(void))

void ImageDataUtil_obj::setPixel( ::lime::graphics::Image image,int x,int y,int color,int format){
            	HX_STACKFRAME(&_hx_pos_68d87270d4f7b5ed_1185_setPixel)
HXLINE(1186)		int pixel;
HXLINE(1188)		switch((int)(format)){
            			case (int)1: {
HXLINE(1191)				int argb = color;
HXDLIN(1191)				int this1 = 0;
HXDLIN(1191)				int rgba = this1;
HXDLIN(1191)				rgba = ((((((::hx::UShr(argb,16) & 255) & 255) << 24) | (((::hx::UShr(argb,8) & 255) & 255) << 16)) | (((argb & 255) & 255) << 8)) | ((::hx::UShr(argb,24) & 255) & 255));
HXDLIN(1191)				pixel = rgba;
            			}
            			break;
            			case (int)2: {
HXLINE(1193)				int bgra = color;
HXDLIN(1193)				int this1 = 0;
HXDLIN(1193)				int rgba = this1;
HXDLIN(1193)				rgba = ((((((::hx::UShr(bgra,8) & 255) & 255) << 24) | (((::hx::UShr(bgra,16) & 255) & 255) << 16)) | (((::hx::UShr(bgra,24) & 255) & 255) << 8)) | ((bgra & 255) & 255));
HXDLIN(1193)				pixel = rgba;
            			}
            			break;
            			default:{
HXLINE(1195)				pixel = color;
            			}
            		}
HXLINE(1200)		int this1 = 0;
HXDLIN(1200)		int source = this1;
HXLINE(1201)		{
HXLINE(1201)			 ::lime::utils::ArrayBufferView data = image->buffer->data;
HXDLIN(1201)			int offset = (((4 * (y + image->offsetY)) * image->buffer->width) + ((x + image->offsetX) * 4));
HXDLIN(1201)			bool premultiplied = image->buffer->premultiplied;
HXDLIN(1201)			switch((int)(image->buffer->format)){
            				case (int)0: {
HXLINE(1201)					int r = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset)) & 255)) );
HXDLIN(1201)					int g = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (offset + 1))) & 255)) );
HXDLIN(1201)					int b = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (offset + 2))) & 255)) );
HXDLIN(1201)					source = (((((r & 255) << 24) | ((g & 255) << 16)) | ((b & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (offset + 3))) & 255)) ) & 255));
            				}
            				break;
            				case (int)1: {
HXLINE(1201)					int r = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (offset + 1))) & 255)) );
HXDLIN(1201)					int g = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (offset + 2))) & 255)) );
HXDLIN(1201)					int b = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (offset + 3))) & 255)) );
HXDLIN(1201)					source = (((((r & 255) << 24) | ((g & 255) << 16)) | ((b & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset)) & 255)) ) & 255));
            				}
            				break;
            				case (int)2: {
HXLINE(1201)					int r = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (offset + 2))) & 255)) );
HXDLIN(1201)					int g = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (offset + 1))) & 255)) );
HXDLIN(1201)					int b = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset)) & 255)) );
HXDLIN(1201)					source = (((((r & 255) << 24) | ((g & 255) << 16)) | ((b & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (offset + 3))) & 255)) ) & 255));
            				}
            				break;
            			}
HXDLIN(1201)			if (premultiplied) {
HXLINE(1201)				bool _hx_tmp;
HXDLIN(1201)				if (((source & 255) != 0)) {
HXLINE(1201)					_hx_tmp = ((source & 255) != 255);
            				}
            				else {
HXLINE(1201)					_hx_tmp = false;
            				}
HXDLIN(1201)				if (_hx_tmp) {
HXLINE(1201)					::lime::math::_RGBA::RGBA_Impl__obj::unmult = (((Float)255.0) / ( (Float)((source & 255)) ));
HXDLIN(1201)					{
HXLINE(1201)						 ::lime::utils::ArrayBufferView this1 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN(1201)						int r = ( (int)(( ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + ::Math_obj::round((( (Float)((::hx::UShr(source,24) & 255)) ) * ::lime::math::_RGBA::RGBA_Impl__obj::unmult)))) & 255)) );
HXDLIN(1201)						 ::lime::utils::ArrayBufferView this2 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN(1201)						int g = ( (int)(( ::__hxcpp_memory_get_byte(this2->buffer->b,(this2->byteOffset + ::Math_obj::round((( (Float)((::hx::UShr(source,16) & 255)) ) * ::lime::math::_RGBA::RGBA_Impl__obj::unmult)))) & 255)) );
HXDLIN(1201)						 ::lime::utils::ArrayBufferView this3 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN(1201)						source = (((((r & 255) << 24) | ((g & 255) << 16)) | ((( (int)(( ::__hxcpp_memory_get_byte(this3->buffer->b,(this3->byteOffset + ::Math_obj::round((( (Float)((::hx::UShr(source,8) & 255)) ) * ::lime::math::_RGBA::RGBA_Impl__obj::unmult)))) & 255)) ) & 255) << 8)) | ((source & 255) & 255));
            					}
            				}
            			}
            		}
HXLINE(1204)		{
HXLINE(1204)			int value = (source & 255);
HXDLIN(1204)			pixel = ((((((::hx::UShr(pixel,24) & 255) & 255) << 24) | (((::hx::UShr(pixel,16) & 255) & 255) << 16)) | (((::hx::UShr(pixel,8) & 255) & 255) << 8)) | (value & 255));
            		}
HXLINE(1205)		{
HXLINE(1205)			 ::lime::utils::ArrayBufferView data1 = image->buffer->data;
HXDLIN(1205)			int offset1 = (((4 * (y + image->offsetY)) * image->buffer->width) + ((x + image->offsetX) * 4));
HXDLIN(1205)			int format1 = image->buffer->format;
HXDLIN(1205)			if (image->buffer->premultiplied) {
HXLINE(1205)				if (((pixel & 255) == 0)) {
HXLINE(1205)					if ((pixel != 0)) {
HXLINE(1205)						pixel = 0;
            					}
            				}
            				else {
HXLINE(1205)					if (((pixel & 255) != 255)) {
HXLINE(1205)						 ::lime::utils::ArrayBufferView this1 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___alpha16;
HXDLIN(1205)						::lime::math::_RGBA::RGBA_Impl__obj::a16 = ( (int)( ::__hxcpp_memory_get_ui32(this1->buffer->b,(this1->byteOffset + ((pixel & 255) * 4)))) );
HXDLIN(1205)						pixel = ((((((((::hx::UShr(pixel,24) & 255) * ::lime::math::_RGBA::RGBA_Impl__obj::a16) >> 16) & 255) << 24) | (((((::hx::UShr(pixel,16) & 255) * ::lime::math::_RGBA::RGBA_Impl__obj::a16) >> 16) & 255) << 16)) | (((((::hx::UShr(pixel,8) & 255) * ::lime::math::_RGBA::RGBA_Impl__obj::a16) >> 16) & 255) << 8)) | ((pixel & 255) & 255));
            					}
            				}
            			}
HXDLIN(1205)			switch((int)(format1)){
            				case (int)0: {
HXLINE(1205)					{
HXLINE(1205)						int val = (::hx::UShr(pixel,24) & 255);
HXDLIN(1205)						 ::__hxcpp_memory_set_byte(data1->buffer->b,(data1->byteOffset + offset1),val);
            					}
HXDLIN(1205)					{
HXLINE(1205)						int val1 = (::hx::UShr(pixel,16) & 255);
HXDLIN(1205)						 ::__hxcpp_memory_set_byte(data1->buffer->b,(data1->byteOffset + (offset1 + 1)),val1);
            					}
HXDLIN(1205)					{
HXLINE(1205)						int val2 = (::hx::UShr(pixel,8) & 255);
HXDLIN(1205)						 ::__hxcpp_memory_set_byte(data1->buffer->b,(data1->byteOffset + (offset1 + 2)),val2);
            					}
HXDLIN(1205)					{
HXLINE(1205)						int val3 = (pixel & 255);
HXDLIN(1205)						 ::__hxcpp_memory_set_byte(data1->buffer->b,(data1->byteOffset + (offset1 + 3)),val3);
            					}
            				}
            				break;
            				case (int)1: {
HXLINE(1205)					{
HXLINE(1205)						int val = (pixel & 255);
HXDLIN(1205)						 ::__hxcpp_memory_set_byte(data1->buffer->b,(data1->byteOffset + offset1),val);
            					}
HXDLIN(1205)					{
HXLINE(1205)						int val1 = (::hx::UShr(pixel,24) & 255);
HXDLIN(1205)						 ::__hxcpp_memory_set_byte(data1->buffer->b,(data1->byteOffset + (offset1 + 1)),val1);
            					}
HXDLIN(1205)					{
HXLINE(1205)						int val2 = (::hx::UShr(pixel,16) & 255);
HXDLIN(1205)						 ::__hxcpp_memory_set_byte(data1->buffer->b,(data1->byteOffset + (offset1 + 2)),val2);
            					}
HXDLIN(1205)					{
HXLINE(1205)						int val3 = (::hx::UShr(pixel,8) & 255);
HXDLIN(1205)						 ::__hxcpp_memory_set_byte(data1->buffer->b,(data1->byteOffset + (offset1 + 3)),val3);
            					}
            				}
            				break;
            				case (int)2: {
HXLINE(1205)					{
HXLINE(1205)						int val = (::hx::UShr(pixel,8) & 255);
HXDLIN(1205)						 ::__hxcpp_memory_set_byte(data1->buffer->b,(data1->byteOffset + offset1),val);
            					}
HXDLIN(1205)					{
HXLINE(1205)						int val1 = (::hx::UShr(pixel,16) & 255);
HXDLIN(1205)						 ::__hxcpp_memory_set_byte(data1->buffer->b,(data1->byteOffset + (offset1 + 1)),val1);
            					}
HXDLIN(1205)					{
HXLINE(1205)						int val2 = (::hx::UShr(pixel,24) & 255);
HXDLIN(1205)						 ::__hxcpp_memory_set_byte(data1->buffer->b,(data1->byteOffset + (offset1 + 2)),val2);
            					}
HXDLIN(1205)					{
HXLINE(1205)						int val3 = (pixel & 255);
HXDLIN(1205)						 ::__hxcpp_memory_set_byte(data1->buffer->b,(data1->byteOffset + (offset1 + 3)),val3);
            					}
            				}
            				break;
            			}
            		}
HXLINE(1208)		image->dirty = true;
HXLINE(1209)		image->version++;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(ImageDataUtil_obj,setPixel,(void))

void ImageDataUtil_obj::setPixel32( ::lime::graphics::Image image,int x,int y,int color,int format){
            	HX_STACKFRAME(&_hx_pos_68d87270d4f7b5ed_1213_setPixel32)
HXLINE(1214)		int pixel;
HXLINE(1216)		switch((int)(format)){
            			case (int)1: {
HXLINE(1219)				int argb = color;
HXDLIN(1219)				int this1 = 0;
HXDLIN(1219)				int rgba = this1;
HXDLIN(1219)				rgba = ((((((::hx::UShr(argb,16) & 255) & 255) << 24) | (((::hx::UShr(argb,8) & 255) & 255) << 16)) | (((argb & 255) & 255) << 8)) | ((::hx::UShr(argb,24) & 255) & 255));
HXDLIN(1219)				pixel = rgba;
            			}
            			break;
            			case (int)2: {
HXLINE(1221)				int bgra = color;
HXDLIN(1221)				int this1 = 0;
HXDLIN(1221)				int rgba = this1;
HXDLIN(1221)				rgba = ((((((::hx::UShr(bgra,8) & 255) & 255) << 24) | (((::hx::UShr(bgra,16) & 255) & 255) << 16)) | (((::hx::UShr(bgra,24) & 255) & 255) << 8)) | ((bgra & 255) & 255));
HXDLIN(1221)				pixel = rgba;
            			}
            			break;
            			default:{
HXLINE(1223)				pixel = color;
            			}
            		}
HXLINE(1226)		if (!(image->get_transparent())) {
HXLINE(1226)			pixel = ((((((::hx::UShr(pixel,24) & 255) & 255) << 24) | (((::hx::UShr(pixel,16) & 255) & 255) << 16)) | (((::hx::UShr(pixel,8) & 255) & 255) << 8)) | 255);
            		}
HXLINE(1227)		{
HXLINE(1227)			 ::lime::utils::ArrayBufferView data = image->buffer->data;
HXDLIN(1227)			int offset = (((4 * (y + image->offsetY)) * image->buffer->width) + ((x + image->offsetX) * 4));
HXDLIN(1227)			int format1 = image->buffer->format;
HXDLIN(1227)			if (image->buffer->premultiplied) {
HXLINE(1227)				if (((pixel & 255) == 0)) {
HXLINE(1227)					if ((pixel != 0)) {
HXLINE(1227)						pixel = 0;
            					}
            				}
            				else {
HXLINE(1227)					if (((pixel & 255) != 255)) {
HXLINE(1227)						 ::lime::utils::ArrayBufferView this1 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___alpha16;
HXDLIN(1227)						::lime::math::_RGBA::RGBA_Impl__obj::a16 = ( (int)( ::__hxcpp_memory_get_ui32(this1->buffer->b,(this1->byteOffset + ((pixel & 255) * 4)))) );
HXDLIN(1227)						pixel = ((((((((::hx::UShr(pixel,24) & 255) * ::lime::math::_RGBA::RGBA_Impl__obj::a16) >> 16) & 255) << 24) | (((((::hx::UShr(pixel,16) & 255) * ::lime::math::_RGBA::RGBA_Impl__obj::a16) >> 16) & 255) << 16)) | (((((::hx::UShr(pixel,8) & 255) * ::lime::math::_RGBA::RGBA_Impl__obj::a16) >> 16) & 255) << 8)) | ((pixel & 255) & 255));
            					}
            				}
            			}
HXDLIN(1227)			switch((int)(format1)){
            				case (int)0: {
HXLINE(1227)					{
HXLINE(1227)						int val = (::hx::UShr(pixel,24) & 255);
HXDLIN(1227)						 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
            					}
HXDLIN(1227)					{
HXLINE(1227)						int val1 = (::hx::UShr(pixel,16) & 255);
HXDLIN(1227)						 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + (offset + 1)),val1);
            					}
HXDLIN(1227)					{
HXLINE(1227)						int val2 = (::hx::UShr(pixel,8) & 255);
HXDLIN(1227)						 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + (offset + 2)),val2);
            					}
HXDLIN(1227)					{
HXLINE(1227)						int val3 = (pixel & 255);
HXDLIN(1227)						 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + (offset + 3)),val3);
            					}
            				}
            				break;
            				case (int)1: {
HXLINE(1227)					{
HXLINE(1227)						int val = (pixel & 255);
HXDLIN(1227)						 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
            					}
HXDLIN(1227)					{
HXLINE(1227)						int val1 = (::hx::UShr(pixel,24) & 255);
HXDLIN(1227)						 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + (offset + 1)),val1);
            					}
HXDLIN(1227)					{
HXLINE(1227)						int val2 = (::hx::UShr(pixel,16) & 255);
HXDLIN(1227)						 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + (offset + 2)),val2);
            					}
HXDLIN(1227)					{
HXLINE(1227)						int val3 = (::hx::UShr(pixel,8) & 255);
HXDLIN(1227)						 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + (offset + 3)),val3);
            					}
            				}
            				break;
            				case (int)2: {
HXLINE(1227)					{
HXLINE(1227)						int val = (::hx::UShr(pixel,8) & 255);
HXDLIN(1227)						 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
            					}
HXDLIN(1227)					{
HXLINE(1227)						int val1 = (::hx::UShr(pixel,16) & 255);
HXDLIN(1227)						 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + (offset + 1)),val1);
            					}
HXDLIN(1227)					{
HXLINE(1227)						int val2 = (::hx::UShr(pixel,24) & 255);
HXDLIN(1227)						 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + (offset + 2)),val2);
            					}
HXDLIN(1227)					{
HXLINE(1227)						int val3 = (pixel & 255);
HXDLIN(1227)						 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + (offset + 3)),val3);
            					}
            				}
            				break;
            			}
            		}
HXLINE(1230)		image->dirty = true;
HXLINE(1231)		image->version++;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(ImageDataUtil_obj,setPixel32,(void))

void ImageDataUtil_obj::setPixels( ::lime::graphics::Image image, ::lime::math::Rectangle rect, ::lime::utils::BytePointerData bytePointer,int format, ::lime::_hx_system::Endian endian){
            	HX_GC_STACKFRAME(&_hx_pos_68d87270d4f7b5ed_1235_setPixels)
HXLINE(1236)		if (::hx::IsNull( image->buffer->data )) {
HXLINE(1236)			return;
            		}
HXLINE(1239)		if (::lime::_hx_system::CFFI_obj::enabled) {
HXLINE(1239)			int _hx_tmp;
HXDLIN(1239)			if (::hx::IsPointerEq( endian,::lime::_hx_system::Endian_obj::_hx_BIG_ENDIAN_dyn() )) {
HXLINE(1239)				_hx_tmp = 1;
            			}
            			else {
HXLINE(1239)				_hx_tmp = 0;
            			}
HXDLIN(1239)			::lime::_internal::backend::native::NativeCFFI_obj::lime_image_data_util_set_pixels(::hx::DynamicPtr(image),::hx::DynamicPtr(rect),::hx::DynamicPtr(bytePointer->bytes),bytePointer->offset,format,_hx_tmp);
            		}
            		else {
HXLINE(1243)			 ::lime::utils::ArrayBufferView data = image->buffer->data;
HXLINE(1244)			int sourceFormat = image->buffer->format;
HXLINE(1245)			bool premultiplied = image->buffer->premultiplied;
HXLINE(1246)			 ::lime::_internal::graphics::_ImageDataUtil::ImageDataView dataView =  ::lime::_internal::graphics::_ImageDataUtil::ImageDataView_obj::__alloc( HX_CTX ,image,rect);
HXLINE(1247)			int row;
HXDLIN(1247)			int color;
HXDLIN(1247)			int pixel;
HXLINE(1248)			bool transparent = image->get_transparent();
HXLINE(1249)			 ::haxe::io::Bytes bytes = bytePointer->bytes;
HXLINE(1250)			int dataPosition = bytePointer->offset;
HXLINE(1251)			bool littleEndian = ::hx::IsPointerNotEq( endian,::lime::_hx_system::Endian_obj::_hx_BIG_ENDIAN_dyn() );
HXLINE(1253)			{
HXLINE(1253)				int _g = 0;
HXDLIN(1253)				int _g1 = dataView->height;
HXDLIN(1253)				while((_g < _g1)){
HXLINE(1253)					_g = (_g + 1);
HXDLIN(1253)					int y = (_g - 1);
HXLINE(1255)					row = (dataView->byteOffset + (dataView->stride * y));
HXLINE(1257)					{
HXLINE(1257)						int _g1 = 0;
HXDLIN(1257)						int _g2 = dataView->width;
HXDLIN(1257)						while((_g1 < _g2)){
HXLINE(1257)							_g1 = (_g1 + 1);
HXDLIN(1257)							int x = (_g1 - 1);
HXLINE(1259)							if (littleEndian) {
HXLINE(1261)								color = (((( (int)(bytes->b->__get(dataPosition)) ) | (( (int)(bytes->b->__get((dataPosition + 1))) ) << 8)) | (( (int)(bytes->b->__get((dataPosition + 2))) ) << 16)) | (( (int)(bytes->b->__get((dataPosition + 3))) ) << 24));
            							}
            							else {
HXLINE(1265)								color = (((( (int)(bytes->b->__get((dataPosition + 3))) ) | (( (int)(bytes->b->__get((dataPosition + 2))) ) << 8)) | (( (int)(bytes->b->__get((dataPosition + 1))) ) << 16)) | (( (int)(bytes->b->__get(dataPosition)) ) << 24));
            							}
HXLINE(1269)							dataPosition = (dataPosition + 4);
HXLINE(1271)							switch((int)(format)){
            								case (int)1: {
HXLINE(1274)									int argb = color;
HXDLIN(1274)									int this1 = 0;
HXDLIN(1274)									int rgba = this1;
HXDLIN(1274)									rgba = ((((((::hx::UShr(argb,16) & 255) & 255) << 24) | (((::hx::UShr(argb,8) & 255) & 255) << 16)) | (((argb & 255) & 255) << 8)) | ((::hx::UShr(argb,24) & 255) & 255));
HXDLIN(1274)									pixel = rgba;
            								}
            								break;
            								case (int)2: {
HXLINE(1276)									int bgra = color;
HXDLIN(1276)									int this1 = 0;
HXDLIN(1276)									int rgba = this1;
HXDLIN(1276)									rgba = ((((((::hx::UShr(bgra,8) & 255) & 255) << 24) | (((::hx::UShr(bgra,16) & 255) & 255) << 16)) | (((::hx::UShr(bgra,24) & 255) & 255) << 8)) | ((bgra & 255) & 255));
HXDLIN(1276)									pixel = rgba;
            								}
            								break;
            								default:{
HXLINE(1278)									pixel = color;
            								}
            							}
HXLINE(1281)							if (!(transparent)) {
HXLINE(1281)								pixel = ((((((::hx::UShr(pixel,24) & 255) & 255) << 24) | (((::hx::UShr(pixel,16) & 255) & 255) << 16)) | (((::hx::UShr(pixel,8) & 255) & 255) << 8)) | 255);
            							}
HXLINE(1282)							{
HXLINE(1282)								int offset = (row + (x * 4));
HXDLIN(1282)								if (premultiplied) {
HXLINE(1282)									if (((pixel & 255) == 0)) {
HXLINE(1282)										if ((pixel != 0)) {
HXLINE(1282)											pixel = 0;
            										}
            									}
            									else {
HXLINE(1282)										if (((pixel & 255) != 255)) {
HXLINE(1282)											 ::lime::utils::ArrayBufferView this1 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___alpha16;
HXDLIN(1282)											::lime::math::_RGBA::RGBA_Impl__obj::a16 = ( (int)( ::__hxcpp_memory_get_ui32(this1->buffer->b,(this1->byteOffset + ((pixel & 255) * 4)))) );
HXDLIN(1282)											pixel = ((((((((::hx::UShr(pixel,24) & 255) * ::lime::math::_RGBA::RGBA_Impl__obj::a16) >> 16) & 255) << 24) | (((((::hx::UShr(pixel,16) & 255) * ::lime::math::_RGBA::RGBA_Impl__obj::a16) >> 16) & 255) << 16)) | (((((::hx::UShr(pixel,8) & 255) * ::lime::math::_RGBA::RGBA_Impl__obj::a16) >> 16) & 255) << 8)) | ((pixel & 255) & 255));
            										}
            									}
            								}
HXDLIN(1282)								switch((int)(sourceFormat)){
            									case (int)0: {
HXLINE(1282)										{
HXLINE(1282)											int val = (::hx::UShr(pixel,24) & 255);
HXDLIN(1282)											 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
            										}
HXDLIN(1282)										{
HXLINE(1282)											int val1 = (::hx::UShr(pixel,16) & 255);
HXDLIN(1282)											 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + (offset + 1)),val1);
            										}
HXDLIN(1282)										{
HXLINE(1282)											int val2 = (::hx::UShr(pixel,8) & 255);
HXDLIN(1282)											 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + (offset + 2)),val2);
            										}
HXDLIN(1282)										{
HXLINE(1282)											int val3 = (pixel & 255);
HXDLIN(1282)											 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + (offset + 3)),val3);
            										}
            									}
            									break;
            									case (int)1: {
HXLINE(1282)										{
HXLINE(1282)											int val = (pixel & 255);
HXDLIN(1282)											 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
            										}
HXDLIN(1282)										{
HXLINE(1282)											int val1 = (::hx::UShr(pixel,24) & 255);
HXDLIN(1282)											 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + (offset + 1)),val1);
            										}
HXDLIN(1282)										{
HXLINE(1282)											int val2 = (::hx::UShr(pixel,16) & 255);
HXDLIN(1282)											 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + (offset + 2)),val2);
            										}
HXDLIN(1282)										{
HXLINE(1282)											int val3 = (::hx::UShr(pixel,8) & 255);
HXDLIN(1282)											 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + (offset + 3)),val3);
            										}
            									}
            									break;
            									case (int)2: {
HXLINE(1282)										{
HXLINE(1282)											int val = (::hx::UShr(pixel,8) & 255);
HXDLIN(1282)											 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
            										}
HXDLIN(1282)										{
HXLINE(1282)											int val1 = (::hx::UShr(pixel,16) & 255);
HXDLIN(1282)											 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + (offset + 1)),val1);
            										}
HXDLIN(1282)										{
HXLINE(1282)											int val2 = (::hx::UShr(pixel,24) & 255);
HXDLIN(1282)											 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + (offset + 2)),val2);
            										}
HXDLIN(1282)										{
HXLINE(1282)											int val3 = (pixel & 255);
HXDLIN(1282)											 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + (offset + 3)),val3);
            										}
            									}
            									break;
            								}
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE(1287)		image->dirty = true;
HXLINE(1288)		image->version++;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(ImageDataUtil_obj,setPixels,(void))

int ImageDataUtil_obj::threshold( ::lime::graphics::Image image, ::lime::graphics::Image sourceImage, ::lime::math::Rectangle sourceRect, ::lime::math::Vector2 destPoint,::String operation,int threshold,int color,int mask,bool copySource,int format){
            	HX_GC_STACKFRAME(&_hx_pos_68d87270d4f7b5ed_1293_threshold)
HXLINE(1294)		int _color;
HXDLIN(1294)		int _mask;
HXDLIN(1294)		int _threshold;
HXLINE(1296)		switch((int)(format)){
            			case (int)1: {
HXLINE(1299)				int argb = color;
HXDLIN(1299)				int this1 = 0;
HXDLIN(1299)				int rgba = this1;
HXDLIN(1299)				rgba = ((((((::hx::UShr(argb,16) & 255) & 255) << 24) | (((::hx::UShr(argb,8) & 255) & 255) << 16)) | (((argb & 255) & 255) << 8)) | ((::hx::UShr(argb,24) & 255) & 255));
HXDLIN(1299)				_color = rgba;
HXLINE(1300)				int argb1 = mask;
HXDLIN(1300)				int this2 = 0;
HXDLIN(1300)				int rgba1 = this2;
HXDLIN(1300)				rgba1 = ((((((::hx::UShr(argb1,16) & 255) & 255) << 24) | (((::hx::UShr(argb1,8) & 255) & 255) << 16)) | (((argb1 & 255) & 255) << 8)) | ((::hx::UShr(argb1,24) & 255) & 255));
HXDLIN(1300)				_mask = rgba1;
HXLINE(1301)				int argb2 = threshold;
HXDLIN(1301)				int this3 = 0;
HXDLIN(1301)				int rgba2 = this3;
HXDLIN(1301)				rgba2 = ((((((::hx::UShr(argb2,16) & 255) & 255) << 24) | (((::hx::UShr(argb2,8) & 255) & 255) << 16)) | (((argb2 & 255) & 255) << 8)) | ((::hx::UShr(argb2,24) & 255) & 255));
HXDLIN(1301)				_threshold = rgba2;
            			}
            			break;
            			case (int)2: {
HXLINE(1304)				int bgra = color;
HXDLIN(1304)				int this1 = 0;
HXDLIN(1304)				int rgba = this1;
HXDLIN(1304)				rgba = ((((((::hx::UShr(bgra,8) & 255) & 255) << 24) | (((::hx::UShr(bgra,16) & 255) & 255) << 16)) | (((::hx::UShr(bgra,24) & 255) & 255) << 8)) | ((bgra & 255) & 255));
HXDLIN(1304)				_color = rgba;
HXLINE(1305)				int bgra1 = mask;
HXDLIN(1305)				int this2 = 0;
HXDLIN(1305)				int rgba1 = this2;
HXDLIN(1305)				rgba1 = ((((((::hx::UShr(bgra1,8) & 255) & 255) << 24) | (((::hx::UShr(bgra1,16) & 255) & 255) << 16)) | (((::hx::UShr(bgra1,24) & 255) & 255) << 8)) | ((bgra1 & 255) & 255));
HXDLIN(1305)				_mask = rgba1;
HXLINE(1306)				int bgra2 = threshold;
HXDLIN(1306)				int this3 = 0;
HXDLIN(1306)				int rgba2 = this3;
HXDLIN(1306)				rgba2 = ((((((::hx::UShr(bgra2,8) & 255) & 255) << 24) | (((::hx::UShr(bgra2,16) & 255) & 255) << 16)) | (((::hx::UShr(bgra2,24) & 255) & 255) << 8)) | ((bgra2 & 255) & 255));
HXDLIN(1306)				_threshold = rgba2;
            			}
            			break;
            			default:{
HXLINE(1309)				_color = color;
HXLINE(1310)				_mask = mask;
HXLINE(1311)				_threshold = threshold;
            			}
            		}
HXLINE(1314)		int _operation;
HXDLIN(1314)		::String _hx_switch_0 = operation;
            		if (  (_hx_switch_0==HX_("!=",fc,1c,00,00)) ){
HXLINE(1314)			_operation = 0;
HXDLIN(1314)			goto _hx_goto_64;
            		}
            		if (  (_hx_switch_0==HX_("<",3c,00,00,00)) ){
HXLINE(1314)			_operation = 2;
HXDLIN(1314)			goto _hx_goto_64;
            		}
            		if (  (_hx_switch_0==HX_("<=",81,34,00,00)) ){
HXLINE(1314)			_operation = 3;
HXDLIN(1314)			goto _hx_goto_64;
            		}
            		if (  (_hx_switch_0==HX_("==",60,35,00,00)) ){
HXLINE(1314)			_operation = 1;
HXDLIN(1314)			goto _hx_goto_64;
            		}
            		if (  (_hx_switch_0==HX_(">",3e,00,00,00)) ){
HXLINE(1314)			_operation = 4;
HXDLIN(1314)			goto _hx_goto_64;
            		}
            		if (  (_hx_switch_0==HX_(">=",3f,36,00,00)) ){
HXLINE(1314)			_operation = 5;
HXDLIN(1314)			goto _hx_goto_64;
            		}
            		/* default */{
HXLINE(1314)			_operation = -1;
            		}
            		_hx_goto_64:;
HXLINE(1325)		if ((_operation == -1)) {
HXLINE(1325)			return 0;
            		}
HXLINE(1327)		 ::lime::utils::ArrayBufferView srcData = sourceImage->buffer->data;
HXLINE(1328)		 ::lime::utils::ArrayBufferView destData = image->buffer->data;
HXLINE(1330)		bool _hx_tmp;
HXDLIN(1330)		if (::hx::IsNotNull( srcData )) {
HXLINE(1330)			_hx_tmp = ::hx::IsNull( destData );
            		}
            		else {
HXLINE(1330)			_hx_tmp = true;
            		}
HXDLIN(1330)		if (_hx_tmp) {
HXLINE(1330)			return 0;
            		}
HXLINE(1332)		int hits = 0;
HXLINE(1335)		if (::lime::_hx_system::CFFI_obj::enabled) {
HXLINE(1335)			hits = ::lime::_internal::backend::native::NativeCFFI_obj::lime_image_data_util_threshold(::hx::DynamicPtr(image),::hx::DynamicPtr(sourceImage),::hx::DynamicPtr(sourceRect),::hx::DynamicPtr(destPoint),_operation,((_threshold >> 16) & 65535),(_threshold & 65535),((_color >> 16) & 65535),(_color & 65535),((_mask >> 16) & 65535),(_mask & 65535),copySource);
            		}
            		else {
HXLINE(1340)			 ::lime::_internal::graphics::_ImageDataUtil::ImageDataView srcView =  ::lime::_internal::graphics::_ImageDataUtil::ImageDataView_obj::__alloc( HX_CTX ,sourceImage,sourceRect);
HXLINE(1341)			 ::lime::_internal::graphics::_ImageDataUtil::ImageDataView destView =  ::lime::_internal::graphics::_ImageDataUtil::ImageDataView_obj::__alloc( HX_CTX ,image, ::lime::math::Rectangle_obj::__alloc( HX_CTX ,destPoint->x,destPoint->y,srcView->width,srcView->height));
HXLINE(1343)			int srcFormat = sourceImage->buffer->format;
HXLINE(1344)			int destFormat = image->buffer->format;
HXLINE(1345)			bool srcPremultiplied = sourceImage->buffer->premultiplied;
HXLINE(1346)			bool destPremultiplied = image->buffer->premultiplied;
HXLINE(1348)			int srcPosition;
HXDLIN(1348)			int destPosition;
HXDLIN(1348)			int srcPixel = 0;
HXDLIN(1348)			int destPixel = 0;
HXDLIN(1348)			int pixelMask;
HXDLIN(1348)			bool test;
HXDLIN(1348)			int value;
HXLINE(1356)			{
HXLINE(1356)				int _g = 0;
HXDLIN(1356)				int _g1 = destView->height;
HXDLIN(1356)				while((_g < _g1)){
HXLINE(1356)					_g = (_g + 1);
HXDLIN(1356)					int y = (_g - 1);
HXLINE(1358)					srcPosition = (srcView->byteOffset + (srcView->stride * y));
HXLINE(1359)					destPosition = (destView->byteOffset + (destView->stride * y));
HXLINE(1361)					{
HXLINE(1361)						int _g1 = 0;
HXDLIN(1361)						int _g2 = destView->width;
HXDLIN(1361)						while((_g1 < _g2)){
HXLINE(1361)							_g1 = (_g1 + 1);
HXDLIN(1361)							int x = (_g1 - 1);
HXLINE(1363)							{
HXLINE(1363)								switch((int)(srcFormat)){
            									case (int)0: {
HXLINE(1363)										int r = ( (int)(( ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + srcPosition)) & 255)) );
HXDLIN(1363)										int g = ( (int)(( ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + (srcPosition + 1))) & 255)) );
HXDLIN(1363)										int b = ( (int)(( ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + (srcPosition + 2))) & 255)) );
HXDLIN(1363)										srcPixel = (((((r & 255) << 24) | ((g & 255) << 16)) | ((b & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + (srcPosition + 3))) & 255)) ) & 255));
            									}
            									break;
            									case (int)1: {
HXLINE(1363)										int r = ( (int)(( ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + (srcPosition + 1))) & 255)) );
HXDLIN(1363)										int g = ( (int)(( ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + (srcPosition + 2))) & 255)) );
HXDLIN(1363)										int b = ( (int)(( ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + (srcPosition + 3))) & 255)) );
HXDLIN(1363)										srcPixel = (((((r & 255) << 24) | ((g & 255) << 16)) | ((b & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + srcPosition)) & 255)) ) & 255));
            									}
            									break;
            									case (int)2: {
HXLINE(1363)										int r = ( (int)(( ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + (srcPosition + 2))) & 255)) );
HXDLIN(1363)										int g = ( (int)(( ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + (srcPosition + 1))) & 255)) );
HXDLIN(1363)										int b = ( (int)(( ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + srcPosition)) & 255)) );
HXDLIN(1363)										srcPixel = (((((r & 255) << 24) | ((g & 255) << 16)) | ((b & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + (srcPosition + 3))) & 255)) ) & 255));
            									}
            									break;
            								}
HXDLIN(1363)								if (srcPremultiplied) {
HXLINE(1363)									bool _hx_tmp;
HXDLIN(1363)									if (((srcPixel & 255) != 0)) {
HXLINE(1363)										_hx_tmp = ((srcPixel & 255) != 255);
            									}
            									else {
HXLINE(1363)										_hx_tmp = false;
            									}
HXDLIN(1363)									if (_hx_tmp) {
HXLINE(1363)										::lime::math::_RGBA::RGBA_Impl__obj::unmult = (((Float)255.0) / ( (Float)((srcPixel & 255)) ));
HXDLIN(1363)										{
HXLINE(1363)											 ::lime::utils::ArrayBufferView this1 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN(1363)											int r = ( (int)(( ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + ::Math_obj::round((( (Float)((::hx::UShr(srcPixel,24) & 255)) ) * ::lime::math::_RGBA::RGBA_Impl__obj::unmult)))) & 255)) );
HXDLIN(1363)											 ::lime::utils::ArrayBufferView this2 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN(1363)											int g = ( (int)(( ::__hxcpp_memory_get_byte(this2->buffer->b,(this2->byteOffset + ::Math_obj::round((( (Float)((::hx::UShr(srcPixel,16) & 255)) ) * ::lime::math::_RGBA::RGBA_Impl__obj::unmult)))) & 255)) );
HXDLIN(1363)											 ::lime::utils::ArrayBufferView this3 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN(1363)											srcPixel = (((((r & 255) << 24) | ((g & 255) << 16)) | ((( (int)(( ::__hxcpp_memory_get_byte(this3->buffer->b,(this3->byteOffset + ::Math_obj::round((( (Float)((::hx::UShr(srcPixel,8) & 255)) ) * ::lime::math::_RGBA::RGBA_Impl__obj::unmult)))) & 255)) ) & 255) << 8)) | ((srcPixel & 255) & 255));
            										}
            									}
            								}
            							}
HXLINE(1365)							pixelMask = (srcPixel & _mask);
HXLINE(1367)							int tmp1 = (::hx::UShr(pixelMask,24) & 255);
HXDLIN(1367)							int tmp2 = (::hx::UShr(_threshold,24) & 255);
HXDLIN(1367)							if ((tmp1 != tmp2)) {
HXLINE(1367)								bool aNeg = (tmp1 < 0);
HXDLIN(1367)								bool bNeg = (tmp2 < 0);
HXDLIN(1367)								bool value1;
HXDLIN(1367)								if ((aNeg != bNeg)) {
HXLINE(1367)									value1 = aNeg;
            								}
            								else {
HXLINE(1367)									value1 = (tmp1 > tmp2);
            								}
HXDLIN(1367)								if (value1) {
HXLINE(1367)									value = 1;
            								}
            								else {
HXLINE(1367)									value = -1;
            								}
            							}
            							else {
HXLINE(1367)								tmp1 = (::hx::UShr(pixelMask,16) & 255);
HXDLIN(1367)								tmp2 = (::hx::UShr(_threshold,16) & 255);
HXDLIN(1367)								if ((tmp1 != tmp2)) {
HXLINE(1367)									bool aNeg = (tmp1 < 0);
HXDLIN(1367)									bool bNeg = (tmp2 < 0);
HXDLIN(1367)									bool value1;
HXDLIN(1367)									if ((aNeg != bNeg)) {
HXLINE(1367)										value1 = aNeg;
            									}
            									else {
HXLINE(1367)										value1 = (tmp1 > tmp2);
            									}
HXDLIN(1367)									if (value1) {
HXLINE(1367)										value = 1;
            									}
            									else {
HXLINE(1367)										value = -1;
            									}
            								}
            								else {
HXLINE(1367)									tmp1 = (::hx::UShr(pixelMask,8) & 255);
HXDLIN(1367)									tmp2 = (::hx::UShr(_threshold,8) & 255);
HXDLIN(1367)									if ((tmp1 != tmp2)) {
HXLINE(1367)										bool aNeg = (tmp1 < 0);
HXDLIN(1367)										bool bNeg = (tmp2 < 0);
HXDLIN(1367)										bool value1;
HXDLIN(1367)										if ((aNeg != bNeg)) {
HXLINE(1367)											value1 = aNeg;
            										}
            										else {
HXLINE(1367)											value1 = (tmp1 > tmp2);
            										}
HXDLIN(1367)										if (value1) {
HXLINE(1367)											value = 1;
            										}
            										else {
HXLINE(1367)											value = -1;
            										}
            									}
            									else {
HXLINE(1367)										tmp1 = (pixelMask & 255);
HXDLIN(1367)										tmp2 = (_threshold & 255);
HXDLIN(1367)										if ((tmp1 != tmp2)) {
HXLINE(1367)											bool aNeg = (tmp1 < 0);
HXDLIN(1367)											bool bNeg = (tmp2 < 0);
HXDLIN(1367)											bool value1;
HXDLIN(1367)											if ((aNeg != bNeg)) {
HXLINE(1367)												value1 = aNeg;
            											}
            											else {
HXLINE(1367)												value1 = (tmp1 > tmp2);
            											}
HXDLIN(1367)											if (value1) {
HXLINE(1367)												value = 1;
            											}
            											else {
HXLINE(1367)												value = -1;
            											}
            										}
            										else {
HXLINE(1367)											value = 0;
            										}
            									}
            								}
            							}
HXLINE(1369)							switch((int)(_operation)){
            								case (int)0: {
HXLINE(1371)									test = (value != 0);
            								}
            								break;
            								case (int)1: {
HXLINE(1372)									test = (value == 0);
            								}
            								break;
            								case (int)2: {
HXLINE(1373)									test = (value == -1);
            								}
            								break;
            								case (int)3: {
HXLINE(1374)									if ((value != 0)) {
HXLINE(1374)										test = (value == -1);
            									}
            									else {
HXLINE(1374)										test = true;
            									}
            								}
            								break;
            								case (int)4: {
HXLINE(1375)									test = (value == 1);
            								}
            								break;
            								case (int)5: {
HXLINE(1376)									if ((value != 0)) {
HXLINE(1376)										test = (value == 1);
            									}
            									else {
HXLINE(1376)										test = true;
            									}
            								}
            								break;
            								default:{
HXLINE(1377)									test = false;
            								}
            							}
HXLINE(1380)							if (test) {
HXLINE(1382)								{
HXLINE(1382)									if (destPremultiplied) {
HXLINE(1382)										if (((_color & 255) == 0)) {
HXLINE(1382)											if ((_color != 0)) {
HXLINE(1382)												_color = 0;
            											}
            										}
            										else {
HXLINE(1382)											if (((_color & 255) != 255)) {
HXLINE(1382)												 ::lime::utils::ArrayBufferView this1 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___alpha16;
HXDLIN(1382)												::lime::math::_RGBA::RGBA_Impl__obj::a16 = ( (int)( ::__hxcpp_memory_get_ui32(this1->buffer->b,(this1->byteOffset + ((_color & 255) * 4)))) );
HXDLIN(1382)												_color = ((((((((::hx::UShr(_color,24) & 255) * ::lime::math::_RGBA::RGBA_Impl__obj::a16) >> 16) & 255) << 24) | (((((::hx::UShr(_color,16) & 255) * ::lime::math::_RGBA::RGBA_Impl__obj::a16) >> 16) & 255) << 16)) | (((((::hx::UShr(_color,8) & 255) * ::lime::math::_RGBA::RGBA_Impl__obj::a16) >> 16) & 255) << 8)) | ((_color & 255) & 255));
            											}
            										}
            									}
HXDLIN(1382)									switch((int)(destFormat)){
            										case (int)0: {
HXLINE(1382)											{
HXLINE(1382)												int val = (::hx::UShr(_color,24) & 255);
HXDLIN(1382)												 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
            											}
HXDLIN(1382)											{
HXLINE(1382)												int val1 = (::hx::UShr(_color,16) & 255);
HXDLIN(1382)												 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 1)),val1);
            											}
HXDLIN(1382)											{
HXLINE(1382)												int val2 = (::hx::UShr(_color,8) & 255);
HXDLIN(1382)												 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 2)),val2);
            											}
HXDLIN(1382)											{
HXLINE(1382)												int val3 = (_color & 255);
HXDLIN(1382)												 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 3)),val3);
            											}
            										}
            										break;
            										case (int)1: {
HXLINE(1382)											{
HXLINE(1382)												int val = (_color & 255);
HXDLIN(1382)												 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
            											}
HXDLIN(1382)											{
HXLINE(1382)												int val1 = (::hx::UShr(_color,24) & 255);
HXDLIN(1382)												 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 1)),val1);
            											}
HXDLIN(1382)											{
HXLINE(1382)												int val2 = (::hx::UShr(_color,16) & 255);
HXDLIN(1382)												 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 2)),val2);
            											}
HXDLIN(1382)											{
HXLINE(1382)												int val3 = (::hx::UShr(_color,8) & 255);
HXDLIN(1382)												 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 3)),val3);
            											}
            										}
            										break;
            										case (int)2: {
HXLINE(1382)											{
HXLINE(1382)												int val = (::hx::UShr(_color,8) & 255);
HXDLIN(1382)												 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
            											}
HXDLIN(1382)											{
HXLINE(1382)												int val1 = (::hx::UShr(_color,16) & 255);
HXDLIN(1382)												 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 1)),val1);
            											}
HXDLIN(1382)											{
HXLINE(1382)												int val2 = (::hx::UShr(_color,24) & 255);
HXDLIN(1382)												 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 2)),val2);
            											}
HXDLIN(1382)											{
HXLINE(1382)												int val3 = (_color & 255);
HXDLIN(1382)												 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 3)),val3);
            											}
            										}
            										break;
            									}
            								}
HXLINE(1383)								hits = (hits + 1);
            							}
            							else {
HXLINE(1385)								if (copySource) {
HXLINE(1387)									if (destPremultiplied) {
HXLINE(1387)										if (((srcPixel & 255) == 0)) {
HXLINE(1387)											if ((srcPixel != 0)) {
HXLINE(1387)												srcPixel = 0;
            											}
            										}
            										else {
HXLINE(1387)											if (((srcPixel & 255) != 255)) {
HXLINE(1387)												 ::lime::utils::ArrayBufferView this1 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___alpha16;
HXDLIN(1387)												::lime::math::_RGBA::RGBA_Impl__obj::a16 = ( (int)( ::__hxcpp_memory_get_ui32(this1->buffer->b,(this1->byteOffset + ((srcPixel & 255) * 4)))) );
HXDLIN(1387)												srcPixel = ((((((((::hx::UShr(srcPixel,24) & 255) * ::lime::math::_RGBA::RGBA_Impl__obj::a16) >> 16) & 255) << 24) | (((((::hx::UShr(srcPixel,16) & 255) * ::lime::math::_RGBA::RGBA_Impl__obj::a16) >> 16) & 255) << 16)) | (((((::hx::UShr(srcPixel,8) & 255) * ::lime::math::_RGBA::RGBA_Impl__obj::a16) >> 16) & 255) << 8)) | ((srcPixel & 255) & 255));
            											}
            										}
            									}
HXDLIN(1387)									switch((int)(destFormat)){
            										case (int)0: {
HXLINE(1387)											{
HXLINE(1387)												int val = (::hx::UShr(srcPixel,24) & 255);
HXDLIN(1387)												 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
            											}
HXDLIN(1387)											{
HXLINE(1387)												int val1 = (::hx::UShr(srcPixel,16) & 255);
HXDLIN(1387)												 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 1)),val1);
            											}
HXDLIN(1387)											{
HXLINE(1387)												int val2 = (::hx::UShr(srcPixel,8) & 255);
HXDLIN(1387)												 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 2)),val2);
            											}
HXDLIN(1387)											{
HXLINE(1387)												int val3 = (srcPixel & 255);
HXDLIN(1387)												 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 3)),val3);
            											}
            										}
            										break;
            										case (int)1: {
HXLINE(1387)											{
HXLINE(1387)												int val = (srcPixel & 255);
HXDLIN(1387)												 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
            											}
HXDLIN(1387)											{
HXLINE(1387)												int val1 = (::hx::UShr(srcPixel,24) & 255);
HXDLIN(1387)												 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 1)),val1);
            											}
HXDLIN(1387)											{
HXLINE(1387)												int val2 = (::hx::UShr(srcPixel,16) & 255);
HXDLIN(1387)												 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 2)),val2);
            											}
HXDLIN(1387)											{
HXLINE(1387)												int val3 = (::hx::UShr(srcPixel,8) & 255);
HXDLIN(1387)												 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 3)),val3);
            											}
            										}
            										break;
            										case (int)2: {
HXLINE(1387)											{
HXLINE(1387)												int val = (::hx::UShr(srcPixel,8) & 255);
HXDLIN(1387)												 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
            											}
HXDLIN(1387)											{
HXLINE(1387)												int val1 = (::hx::UShr(srcPixel,16) & 255);
HXDLIN(1387)												 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 1)),val1);
            											}
HXDLIN(1387)											{
HXLINE(1387)												int val2 = (::hx::UShr(srcPixel,24) & 255);
HXDLIN(1387)												 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 2)),val2);
            											}
HXDLIN(1387)											{
HXLINE(1387)												int val3 = (srcPixel & 255);
HXDLIN(1387)												 ::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + (destPosition + 3)),val3);
            											}
            										}
            										break;
            									}
            								}
            							}
HXLINE(1390)							srcPosition = (srcPosition + 4);
HXLINE(1391)							destPosition = (destPosition + 4);
            						}
            					}
            				}
            			}
            		}
HXLINE(1396)		if ((hits > 0)) {
HXLINE(1398)			image->dirty = true;
HXLINE(1399)			image->version++;
            		}
HXLINE(1402)		return hits;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC10(ImageDataUtil_obj,threshold,return )

void ImageDataUtil_obj::unmultiplyAlpha( ::lime::graphics::Image image){
            	HX_STACKFRAME(&_hx_pos_68d87270d4f7b5ed_1406_unmultiplyAlpha)
HXLINE(1407)		 ::lime::utils::ArrayBufferView data = image->buffer->data;
HXLINE(1408)		if (::hx::IsNull( data )) {
HXLINE(1408)			return;
            		}
HXLINE(1411)		if (::lime::_hx_system::CFFI_obj::enabled) {
HXLINE(1411)			::lime::_internal::backend::native::NativeCFFI_obj::lime_image_data_util_unmultiply_alpha(::hx::DynamicPtr(image));
            		}
            		else {
HXLINE(1415)			int format = image->buffer->format;
HXLINE(1416)			int length = ::Std_obj::_hx_int((( (Float)(data->length) ) / ( (Float)(4) )));
HXLINE(1417)			int pixel = 0;
HXLINE(1419)			{
HXLINE(1419)				int _g = 0;
HXDLIN(1419)				int _g1 = length;
HXDLIN(1419)				while((_g < _g1)){
HXLINE(1419)					_g = (_g + 1);
HXDLIN(1419)					int i = (_g - 1);
HXLINE(1421)					{
HXLINE(1421)						int offset = (i * 4);
HXDLIN(1421)						switch((int)(format)){
            							case (int)0: {
HXLINE(1421)								int r = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset)) & 255)) );
HXDLIN(1421)								int g = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (offset + 1))) & 255)) );
HXDLIN(1421)								int b = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (offset + 2))) & 255)) );
HXDLIN(1421)								pixel = (((((r & 255) << 24) | ((g & 255) << 16)) | ((b & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (offset + 3))) & 255)) ) & 255));
            							}
            							break;
            							case (int)1: {
HXLINE(1421)								int r = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (offset + 1))) & 255)) );
HXDLIN(1421)								int g = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (offset + 2))) & 255)) );
HXDLIN(1421)								int b = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (offset + 3))) & 255)) );
HXDLIN(1421)								pixel = (((((r & 255) << 24) | ((g & 255) << 16)) | ((b & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset)) & 255)) ) & 255));
            							}
            							break;
            							case (int)2: {
HXLINE(1421)								int r = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (offset + 2))) & 255)) );
HXDLIN(1421)								int g = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (offset + 1))) & 255)) );
HXDLIN(1421)								int b = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset)) & 255)) );
HXDLIN(1421)								pixel = (((((r & 255) << 24) | ((g & 255) << 16)) | ((b & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (offset + 3))) & 255)) ) & 255));
            							}
            							break;
            						}
HXDLIN(1421)						bool _hx_tmp;
HXDLIN(1421)						if (((pixel & 255) != 0)) {
HXLINE(1421)							_hx_tmp = ((pixel & 255) != 255);
            						}
            						else {
HXLINE(1421)							_hx_tmp = false;
            						}
HXDLIN(1421)						if (_hx_tmp) {
HXLINE(1421)							::lime::math::_RGBA::RGBA_Impl__obj::unmult = (((Float)255.0) / ( (Float)((pixel & 255)) ));
HXDLIN(1421)							{
HXLINE(1421)								 ::lime::utils::ArrayBufferView this1 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN(1421)								int r = ( (int)(( ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + ::Math_obj::round((( (Float)((::hx::UShr(pixel,24) & 255)) ) * ::lime::math::_RGBA::RGBA_Impl__obj::unmult)))) & 255)) );
HXDLIN(1421)								 ::lime::utils::ArrayBufferView this2 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN(1421)								int g = ( (int)(( ::__hxcpp_memory_get_byte(this2->buffer->b,(this2->byteOffset + ::Math_obj::round((( (Float)((::hx::UShr(pixel,16) & 255)) ) * ::lime::math::_RGBA::RGBA_Impl__obj::unmult)))) & 255)) );
HXDLIN(1421)								 ::lime::utils::ArrayBufferView this3 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN(1421)								pixel = (((((r & 255) << 24) | ((g & 255) << 16)) | ((( (int)(( ::__hxcpp_memory_get_byte(this3->buffer->b,(this3->byteOffset + ::Math_obj::round((( (Float)((::hx::UShr(pixel,8) & 255)) ) * ::lime::math::_RGBA::RGBA_Impl__obj::unmult)))) & 255)) ) & 255) << 8)) | ((pixel & 255) & 255));
            							}
            						}
            					}
HXLINE(1422)					{
HXLINE(1422)						int offset1 = (i * 4);
HXDLIN(1422)						switch((int)(format)){
            							case (int)0: {
HXLINE(1422)								{
HXLINE(1422)									int val = (::hx::UShr(pixel,24) & 255);
HXDLIN(1422)									 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset1),val);
            								}
HXDLIN(1422)								{
HXLINE(1422)									int val1 = (::hx::UShr(pixel,16) & 255);
HXDLIN(1422)									 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + (offset1 + 1)),val1);
            								}
HXDLIN(1422)								{
HXLINE(1422)									int val2 = (::hx::UShr(pixel,8) & 255);
HXDLIN(1422)									 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + (offset1 + 2)),val2);
            								}
HXDLIN(1422)								{
HXLINE(1422)									int val3 = (pixel & 255);
HXDLIN(1422)									 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + (offset1 + 3)),val3);
            								}
            							}
            							break;
            							case (int)1: {
HXLINE(1422)								{
HXLINE(1422)									int val = (pixel & 255);
HXDLIN(1422)									 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset1),val);
            								}
HXDLIN(1422)								{
HXLINE(1422)									int val1 = (::hx::UShr(pixel,24) & 255);
HXDLIN(1422)									 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + (offset1 + 1)),val1);
            								}
HXDLIN(1422)								{
HXLINE(1422)									int val2 = (::hx::UShr(pixel,16) & 255);
HXDLIN(1422)									 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + (offset1 + 2)),val2);
            								}
HXDLIN(1422)								{
HXLINE(1422)									int val3 = (::hx::UShr(pixel,8) & 255);
HXDLIN(1422)									 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + (offset1 + 3)),val3);
            								}
            							}
            							break;
            							case (int)2: {
HXLINE(1422)								{
HXLINE(1422)									int val = (::hx::UShr(pixel,8) & 255);
HXDLIN(1422)									 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset1),val);
            								}
HXDLIN(1422)								{
HXLINE(1422)									int val1 = (::hx::UShr(pixel,16) & 255);
HXDLIN(1422)									 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + (offset1 + 1)),val1);
            								}
HXDLIN(1422)								{
HXLINE(1422)									int val2 = (::hx::UShr(pixel,24) & 255);
HXDLIN(1422)									 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + (offset1 + 2)),val2);
            								}
HXDLIN(1422)								{
HXLINE(1422)									int val3 = (pixel & 255);
HXDLIN(1422)									 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + (offset1 + 3)),val3);
            								}
            							}
            							break;
            						}
            					}
            				}
            			}
            		}
HXLINE(1426)		image->buffer->premultiplied = false;
HXLINE(1427)		image->dirty = true;
HXLINE(1428)		image->version++;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ImageDataUtil_obj,unmultiplyAlpha,(void))

void ImageDataUtil_obj::_hx___boxBlur( ::lime::utils::ArrayBufferView imgA, ::lime::utils::ArrayBufferView imgB,int w,int h,Float bx,Float by){
            	HX_STACKFRAME(&_hx_pos_68d87270d4f7b5ed_1432___boxBlur)
HXLINE(1435)		{
HXLINE(1435)			::cpp::VirtualArray array = null();
HXDLIN(1435)			int offset = 0;
HXDLIN(1435)			bool _hx_tmp;
HXDLIN(1435)			if (::hx::IsNotNull( imgA )) {
HXLINE(1435)				_hx_tmp = ::hx::IsNull( array );
            			}
            			else {
HXLINE(1435)				_hx_tmp = false;
            			}
HXDLIN(1435)			if (_hx_tmp) {
HXLINE(1435)				imgB->buffer->blit((offset * imgB->bytesPerElement),imgA->buffer,imgA->byteOffset,imgA->byteLength);
            			}
            			else {
HXLINE(1435)				bool _hx_tmp;
HXDLIN(1435)				if (::hx::IsNotNull( array )) {
HXLINE(1435)					_hx_tmp = ::hx::IsNull( imgA );
            				}
            				else {
HXLINE(1435)					_hx_tmp = false;
            				}
HXDLIN(1435)				if (_hx_tmp) {
HXLINE(1435)					imgB->copyFromArray(array,offset);
            				}
            				else {
HXLINE(1435)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid .set call. either view, or array must be not-null.",64,ba,b7,6c)));
            				}
            			}
            		}
HXLINE(1437)		int bx1 = ::Std_obj::_hx_int(bx);
HXLINE(1438)		int by1 = ::Std_obj::_hx_int(by);
HXLINE(1440)		{
HXLINE(1440)			Float iarr = (( (Float)(1) ) / ( (Float)(((bx1 + bx1) + 1)) ));
HXDLIN(1440)			int ti;
HXDLIN(1440)			int li;
HXDLIN(1440)			int ri;
HXDLIN(1440)			 ::Dynamic fv;
HXDLIN(1440)			 ::Dynamic lv;
HXDLIN(1440)			int val;
HXDLIN(1440)			{
HXLINE(1440)				int _g = 0;
HXDLIN(1440)				int _g1 = h;
HXDLIN(1440)				while((_g < _g1)){
HXLINE(1440)					_g = (_g + 1);
HXDLIN(1440)					int i = (_g - 1);
HXDLIN(1440)					ti = (i * w);
HXDLIN(1440)					li = ti;
HXDLIN(1440)					ri = (ti + bx1);
HXDLIN(1440)					fv = ( ::__hxcpp_memory_get_byte(imgB->buffer->b,(imgB->byteOffset + (ti * 4))) & 255);
HXDLIN(1440)					lv = ( ::__hxcpp_memory_get_byte(imgB->buffer->b,(imgB->byteOffset + (((ti + w) - 1) * 4))) & 255);
HXDLIN(1440)					val = ((bx1 + 1) * ( (int)(fv) ));
HXDLIN(1440)					{
HXLINE(1440)						int _g1 = 0;
HXDLIN(1440)						int _g2 = bx1;
HXDLIN(1440)						while((_g1 < _g2)){
HXLINE(1440)							_g1 = (_g1 + 1);
HXDLIN(1440)							int j = (_g1 - 1);
HXDLIN(1440)							val = (val + ( (int)(( ::__hxcpp_memory_get_byte(imgB->buffer->b,(imgB->byteOffset + ((ti + j) * 4))) & 255)) ));
            						}
            					}
HXDLIN(1440)					{
HXLINE(1440)						int _g3 = 0;
HXDLIN(1440)						int _g4 = (bx1 + 1);
HXDLIN(1440)						while((_g3 < _g4)){
HXLINE(1440)							_g3 = (_g3 + 1);
HXDLIN(1440)							int j = (_g3 - 1);
HXDLIN(1440)							val = (val + (( (int)(( ::__hxcpp_memory_get_byte(imgB->buffer->b,(imgB->byteOffset + (ri * 4))) & 255)) ) - ( (int)(fv) )));
HXDLIN(1440)							{
HXLINE(1440)								int _hx_int = val;
HXDLIN(1440)								Float val1;
HXDLIN(1440)								if ((_hx_int < 0)) {
HXLINE(1440)									val1 = (((Float)4294967296.0) + _hx_int);
            								}
            								else {
HXLINE(1440)									val1 = (_hx_int + ((Float)0.0));
            								}
HXDLIN(1440)								int val2 = ::Math_obj::round((val1 * iarr));
HXDLIN(1440)								 ::__hxcpp_memory_set_byte(imgA->buffer->b,(imgA->byteOffset + (ti * 4)),val2);
            							}
HXDLIN(1440)							ri = (ri + 1);
HXDLIN(1440)							ti = (ti + 1);
            						}
            					}
HXDLIN(1440)					{
HXLINE(1440)						int _g5 = (bx1 + 1);
HXDLIN(1440)						int _g6 = (w - bx1);
HXDLIN(1440)						while((_g5 < _g6)){
HXLINE(1440)							_g5 = (_g5 + 1);
HXDLIN(1440)							int j = (_g5 - 1);
HXDLIN(1440)							int a = ( (int)(( ::__hxcpp_memory_get_byte(imgB->buffer->b,(imgB->byteOffset + (ri * 4))) & 255)) );
HXDLIN(1440)							val = (val + (a - ( (int)(( ::__hxcpp_memory_get_byte(imgB->buffer->b,(imgB->byteOffset + (li * 4))) & 255)) )));
HXDLIN(1440)							{
HXLINE(1440)								int _hx_int = val;
HXDLIN(1440)								Float val1;
HXDLIN(1440)								if ((_hx_int < 0)) {
HXLINE(1440)									val1 = (((Float)4294967296.0) + _hx_int);
            								}
            								else {
HXLINE(1440)									val1 = (_hx_int + ((Float)0.0));
            								}
HXDLIN(1440)								int val2 = ::Math_obj::round((val1 * iarr));
HXDLIN(1440)								 ::__hxcpp_memory_set_byte(imgA->buffer->b,(imgA->byteOffset + (ti * 4)),val2);
            							}
HXDLIN(1440)							ri = (ri + 1);
HXDLIN(1440)							li = (li + 1);
HXDLIN(1440)							ti = (ti + 1);
            						}
            					}
HXDLIN(1440)					{
HXLINE(1440)						int _g7 = (w - bx1);
HXDLIN(1440)						int _g8 = w;
HXDLIN(1440)						while((_g7 < _g8)){
HXLINE(1440)							_g7 = (_g7 + 1);
HXDLIN(1440)							int j = (_g7 - 1);
HXDLIN(1440)							val = (val + (( (int)(lv) ) - ( (int)(( ::__hxcpp_memory_get_byte(imgB->buffer->b,(imgB->byteOffset + (li * 4))) & 255)) )));
HXDLIN(1440)							{
HXLINE(1440)								int _hx_int = val;
HXDLIN(1440)								Float val1;
HXDLIN(1440)								if ((_hx_int < 0)) {
HXLINE(1440)									val1 = (((Float)4294967296.0) + _hx_int);
            								}
            								else {
HXLINE(1440)									val1 = (_hx_int + ((Float)0.0));
            								}
HXDLIN(1440)								int val2 = ::Math_obj::round((val1 * iarr));
HXDLIN(1440)								 ::__hxcpp_memory_set_byte(imgA->buffer->b,(imgA->byteOffset + (ti * 4)),val2);
            							}
HXDLIN(1440)							li = (li + 1);
HXDLIN(1440)							ti = (ti + 1);
            						}
            					}
            				}
            			}
            		}
HXLINE(1441)		{
HXLINE(1441)			Float iarr1 = (( (Float)(1) ) / ( (Float)(((bx1 + bx1) + 1)) ));
HXDLIN(1441)			int ti1;
HXDLIN(1441)			int li1;
HXDLIN(1441)			int ri1;
HXDLIN(1441)			 ::Dynamic fv1;
HXDLIN(1441)			 ::Dynamic lv1;
HXDLIN(1441)			int val1;
HXDLIN(1441)			{
HXLINE(1441)				int _g2 = 0;
HXDLIN(1441)				int _g3 = h;
HXDLIN(1441)				while((_g2 < _g3)){
HXLINE(1441)					_g2 = (_g2 + 1);
HXDLIN(1441)					int i = (_g2 - 1);
HXDLIN(1441)					ti1 = (i * w);
HXDLIN(1441)					li1 = ti1;
HXDLIN(1441)					ri1 = (ti1 + bx1);
HXDLIN(1441)					fv1 = ( ::__hxcpp_memory_get_byte(imgB->buffer->b,(imgB->byteOffset + ((ti1 * 4) + 1))) & 255);
HXDLIN(1441)					lv1 = ( ::__hxcpp_memory_get_byte(imgB->buffer->b,(imgB->byteOffset + ((((ti1 + w) - 1) * 4) + 1))) & 255);
HXDLIN(1441)					val1 = ((bx1 + 1) * ( (int)(fv1) ));
HXDLIN(1441)					{
HXLINE(1441)						int _g = 0;
HXDLIN(1441)						int _g1 = bx1;
HXDLIN(1441)						while((_g < _g1)){
HXLINE(1441)							_g = (_g + 1);
HXDLIN(1441)							int j = (_g - 1);
HXDLIN(1441)							val1 = (val1 + ( (int)(( ::__hxcpp_memory_get_byte(imgB->buffer->b,(imgB->byteOffset + (((ti1 + j) * 4) + 1))) & 255)) ));
            						}
            					}
HXDLIN(1441)					{
HXLINE(1441)						int _g3 = 0;
HXDLIN(1441)						int _g4 = (bx1 + 1);
HXDLIN(1441)						while((_g3 < _g4)){
HXLINE(1441)							_g3 = (_g3 + 1);
HXDLIN(1441)							int j = (_g3 - 1);
HXDLIN(1441)							val1 = (val1 + (( (int)(( ::__hxcpp_memory_get_byte(imgB->buffer->b,(imgB->byteOffset + ((ri1 * 4) + 1))) & 255)) ) - ( (int)(fv1) )));
HXDLIN(1441)							{
HXLINE(1441)								int _hx_int = val1;
HXDLIN(1441)								Float val;
HXDLIN(1441)								if ((_hx_int < 0)) {
HXLINE(1441)									val = (((Float)4294967296.0) + _hx_int);
            								}
            								else {
HXLINE(1441)									val = (_hx_int + ((Float)0.0));
            								}
HXDLIN(1441)								int val2 = ::Math_obj::round((val * iarr1));
HXDLIN(1441)								 ::__hxcpp_memory_set_byte(imgA->buffer->b,(imgA->byteOffset + ((ti1 * 4) + 1)),val2);
            							}
HXDLIN(1441)							ri1 = (ri1 + 1);
HXDLIN(1441)							ti1 = (ti1 + 1);
            						}
            					}
HXDLIN(1441)					{
HXLINE(1441)						int _g5 = (bx1 + 1);
HXDLIN(1441)						int _g6 = (w - bx1);
HXDLIN(1441)						while((_g5 < _g6)){
HXLINE(1441)							_g5 = (_g5 + 1);
HXDLIN(1441)							int j = (_g5 - 1);
HXDLIN(1441)							int a = ( (int)(( ::__hxcpp_memory_get_byte(imgB->buffer->b,(imgB->byteOffset + ((ri1 * 4) + 1))) & 255)) );
HXDLIN(1441)							val1 = (val1 + (a - ( (int)(( ::__hxcpp_memory_get_byte(imgB->buffer->b,(imgB->byteOffset + ((li1 * 4) + 1))) & 255)) )));
HXDLIN(1441)							{
HXLINE(1441)								int _hx_int = val1;
HXDLIN(1441)								Float val;
HXDLIN(1441)								if ((_hx_int < 0)) {
HXLINE(1441)									val = (((Float)4294967296.0) + _hx_int);
            								}
            								else {
HXLINE(1441)									val = (_hx_int + ((Float)0.0));
            								}
HXDLIN(1441)								int val2 = ::Math_obj::round((val * iarr1));
HXDLIN(1441)								 ::__hxcpp_memory_set_byte(imgA->buffer->b,(imgA->byteOffset + ((ti1 * 4) + 1)),val2);
            							}
HXDLIN(1441)							ri1 = (ri1 + 1);
HXDLIN(1441)							li1 = (li1 + 1);
HXDLIN(1441)							ti1 = (ti1 + 1);
            						}
            					}
HXDLIN(1441)					{
HXLINE(1441)						int _g7 = (w - bx1);
HXDLIN(1441)						int _g8 = w;
HXDLIN(1441)						while((_g7 < _g8)){
HXLINE(1441)							_g7 = (_g7 + 1);
HXDLIN(1441)							int j = (_g7 - 1);
HXDLIN(1441)							val1 = (val1 + (( (int)(lv1) ) - ( (int)(( ::__hxcpp_memory_get_byte(imgB->buffer->b,(imgB->byteOffset + ((li1 * 4) + 1))) & 255)) )));
HXDLIN(1441)							{
HXLINE(1441)								int _hx_int = val1;
HXDLIN(1441)								Float val;
HXDLIN(1441)								if ((_hx_int < 0)) {
HXLINE(1441)									val = (((Float)4294967296.0) + _hx_int);
            								}
            								else {
HXLINE(1441)									val = (_hx_int + ((Float)0.0));
            								}
HXDLIN(1441)								int val2 = ::Math_obj::round((val * iarr1));
HXDLIN(1441)								 ::__hxcpp_memory_set_byte(imgA->buffer->b,(imgA->byteOffset + ((ti1 * 4) + 1)),val2);
            							}
HXDLIN(1441)							li1 = (li1 + 1);
HXDLIN(1441)							ti1 = (ti1 + 1);
            						}
            					}
            				}
            			}
            		}
HXLINE(1442)		{
HXLINE(1442)			Float iarr2 = (( (Float)(1) ) / ( (Float)(((bx1 + bx1) + 1)) ));
HXDLIN(1442)			int ti2;
HXDLIN(1442)			int li2;
HXDLIN(1442)			int ri2;
HXDLIN(1442)			 ::Dynamic fv2;
HXDLIN(1442)			 ::Dynamic lv2;
HXDLIN(1442)			int val2;
HXDLIN(1442)			{
HXLINE(1442)				int _g4 = 0;
HXDLIN(1442)				int _g5 = h;
HXDLIN(1442)				while((_g4 < _g5)){
HXLINE(1442)					_g4 = (_g4 + 1);
HXDLIN(1442)					int i = (_g4 - 1);
HXDLIN(1442)					ti2 = (i * w);
HXDLIN(1442)					li2 = ti2;
HXDLIN(1442)					ri2 = (ti2 + bx1);
HXDLIN(1442)					fv2 = ( ::__hxcpp_memory_get_byte(imgB->buffer->b,(imgB->byteOffset + ((ti2 * 4) + 2))) & 255);
HXDLIN(1442)					lv2 = ( ::__hxcpp_memory_get_byte(imgB->buffer->b,(imgB->byteOffset + ((((ti2 + w) - 1) * 4) + 2))) & 255);
HXDLIN(1442)					val2 = ((bx1 + 1) * ( (int)(fv2) ));
HXDLIN(1442)					{
HXLINE(1442)						int _g = 0;
HXDLIN(1442)						int _g1 = bx1;
HXDLIN(1442)						while((_g < _g1)){
HXLINE(1442)							_g = (_g + 1);
HXDLIN(1442)							int j = (_g - 1);
HXDLIN(1442)							val2 = (val2 + ( (int)(( ::__hxcpp_memory_get_byte(imgB->buffer->b,(imgB->byteOffset + (((ti2 + j) * 4) + 2))) & 255)) ));
            						}
            					}
HXDLIN(1442)					{
HXLINE(1442)						int _g2 = 0;
HXDLIN(1442)						int _g3 = (bx1 + 1);
HXDLIN(1442)						while((_g2 < _g3)){
HXLINE(1442)							_g2 = (_g2 + 1);
HXDLIN(1442)							int j = (_g2 - 1);
HXDLIN(1442)							val2 = (val2 + (( (int)(( ::__hxcpp_memory_get_byte(imgB->buffer->b,(imgB->byteOffset + ((ri2 * 4) + 2))) & 255)) ) - ( (int)(fv2) )));
HXDLIN(1442)							{
HXLINE(1442)								int _hx_int = val2;
HXDLIN(1442)								Float val;
HXDLIN(1442)								if ((_hx_int < 0)) {
HXLINE(1442)									val = (((Float)4294967296.0) + _hx_int);
            								}
            								else {
HXLINE(1442)									val = (_hx_int + ((Float)0.0));
            								}
HXDLIN(1442)								int val1 = ::Math_obj::round((val * iarr2));
HXDLIN(1442)								 ::__hxcpp_memory_set_byte(imgA->buffer->b,(imgA->byteOffset + ((ti2 * 4) + 2)),val1);
            							}
HXDLIN(1442)							ri2 = (ri2 + 1);
HXDLIN(1442)							ti2 = (ti2 + 1);
            						}
            					}
HXDLIN(1442)					{
HXLINE(1442)						int _g5 = (bx1 + 1);
HXDLIN(1442)						int _g6 = (w - bx1);
HXDLIN(1442)						while((_g5 < _g6)){
HXLINE(1442)							_g5 = (_g5 + 1);
HXDLIN(1442)							int j = (_g5 - 1);
HXDLIN(1442)							int a = ( (int)(( ::__hxcpp_memory_get_byte(imgB->buffer->b,(imgB->byteOffset + ((ri2 * 4) + 2))) & 255)) );
HXDLIN(1442)							val2 = (val2 + (a - ( (int)(( ::__hxcpp_memory_get_byte(imgB->buffer->b,(imgB->byteOffset + ((li2 * 4) + 2))) & 255)) )));
HXDLIN(1442)							{
HXLINE(1442)								int _hx_int = val2;
HXDLIN(1442)								Float val;
HXDLIN(1442)								if ((_hx_int < 0)) {
HXLINE(1442)									val = (((Float)4294967296.0) + _hx_int);
            								}
            								else {
HXLINE(1442)									val = (_hx_int + ((Float)0.0));
            								}
HXDLIN(1442)								int val1 = ::Math_obj::round((val * iarr2));
HXDLIN(1442)								 ::__hxcpp_memory_set_byte(imgA->buffer->b,(imgA->byteOffset + ((ti2 * 4) + 2)),val1);
            							}
HXDLIN(1442)							ri2 = (ri2 + 1);
HXDLIN(1442)							li2 = (li2 + 1);
HXDLIN(1442)							ti2 = (ti2 + 1);
            						}
            					}
HXDLIN(1442)					{
HXLINE(1442)						int _g7 = (w - bx1);
HXDLIN(1442)						int _g8 = w;
HXDLIN(1442)						while((_g7 < _g8)){
HXLINE(1442)							_g7 = (_g7 + 1);
HXDLIN(1442)							int j = (_g7 - 1);
HXDLIN(1442)							val2 = (val2 + (( (int)(lv2) ) - ( (int)(( ::__hxcpp_memory_get_byte(imgB->buffer->b,(imgB->byteOffset + ((li2 * 4) + 2))) & 255)) )));
HXDLIN(1442)							{
HXLINE(1442)								int _hx_int = val2;
HXDLIN(1442)								Float val;
HXDLIN(1442)								if ((_hx_int < 0)) {
HXLINE(1442)									val = (((Float)4294967296.0) + _hx_int);
            								}
            								else {
HXLINE(1442)									val = (_hx_int + ((Float)0.0));
            								}
HXDLIN(1442)								int val1 = ::Math_obj::round((val * iarr2));
HXDLIN(1442)								 ::__hxcpp_memory_set_byte(imgA->buffer->b,(imgA->byteOffset + ((ti2 * 4) + 2)),val1);
            							}
HXDLIN(1442)							li2 = (li2 + 1);
HXDLIN(1442)							ti2 = (ti2 + 1);
            						}
            					}
            				}
            			}
            		}
HXLINE(1443)		{
HXLINE(1443)			Float iarr3 = (( (Float)(1) ) / ( (Float)(((bx1 + bx1) + 1)) ));
HXDLIN(1443)			int ti3;
HXDLIN(1443)			int li3;
HXDLIN(1443)			int ri3;
HXDLIN(1443)			 ::Dynamic fv3;
HXDLIN(1443)			 ::Dynamic lv3;
HXDLIN(1443)			int val3;
HXDLIN(1443)			{
HXLINE(1443)				int _g6 = 0;
HXDLIN(1443)				int _g7 = h;
HXDLIN(1443)				while((_g6 < _g7)){
HXLINE(1443)					_g6 = (_g6 + 1);
HXDLIN(1443)					int i = (_g6 - 1);
HXDLIN(1443)					ti3 = (i * w);
HXDLIN(1443)					li3 = ti3;
HXDLIN(1443)					ri3 = (ti3 + bx1);
HXDLIN(1443)					fv3 = ( ::__hxcpp_memory_get_byte(imgB->buffer->b,(imgB->byteOffset + ((ti3 * 4) + 3))) & 255);
HXDLIN(1443)					lv3 = ( ::__hxcpp_memory_get_byte(imgB->buffer->b,(imgB->byteOffset + ((((ti3 + w) - 1) * 4) + 3))) & 255);
HXDLIN(1443)					val3 = ((bx1 + 1) * ( (int)(fv3) ));
HXDLIN(1443)					{
HXLINE(1443)						int _g = 0;
HXDLIN(1443)						int _g1 = bx1;
HXDLIN(1443)						while((_g < _g1)){
HXLINE(1443)							_g = (_g + 1);
HXDLIN(1443)							int j = (_g - 1);
HXDLIN(1443)							val3 = (val3 + ( (int)(( ::__hxcpp_memory_get_byte(imgB->buffer->b,(imgB->byteOffset + (((ti3 + j) * 4) + 3))) & 255)) ));
            						}
            					}
HXDLIN(1443)					{
HXLINE(1443)						int _g2 = 0;
HXDLIN(1443)						int _g3 = (bx1 + 1);
HXDLIN(1443)						while((_g2 < _g3)){
HXLINE(1443)							_g2 = (_g2 + 1);
HXDLIN(1443)							int j = (_g2 - 1);
HXDLIN(1443)							val3 = (val3 + (( (int)(( ::__hxcpp_memory_get_byte(imgB->buffer->b,(imgB->byteOffset + ((ri3 * 4) + 3))) & 255)) ) - ( (int)(fv3) )));
HXDLIN(1443)							{
HXLINE(1443)								int _hx_int = val3;
HXDLIN(1443)								Float val;
HXDLIN(1443)								if ((_hx_int < 0)) {
HXLINE(1443)									val = (((Float)4294967296.0) + _hx_int);
            								}
            								else {
HXLINE(1443)									val = (_hx_int + ((Float)0.0));
            								}
HXDLIN(1443)								int val1 = ::Math_obj::round((val * iarr3));
HXDLIN(1443)								 ::__hxcpp_memory_set_byte(imgA->buffer->b,(imgA->byteOffset + ((ti3 * 4) + 3)),val1);
            							}
HXDLIN(1443)							ri3 = (ri3 + 1);
HXDLIN(1443)							ti3 = (ti3 + 1);
            						}
            					}
HXDLIN(1443)					{
HXLINE(1443)						int _g4 = (bx1 + 1);
HXDLIN(1443)						int _g5 = (w - bx1);
HXDLIN(1443)						while((_g4 < _g5)){
HXLINE(1443)							_g4 = (_g4 + 1);
HXDLIN(1443)							int j = (_g4 - 1);
HXDLIN(1443)							int a = ( (int)(( ::__hxcpp_memory_get_byte(imgB->buffer->b,(imgB->byteOffset + ((ri3 * 4) + 3))) & 255)) );
HXDLIN(1443)							val3 = (val3 + (a - ( (int)(( ::__hxcpp_memory_get_byte(imgB->buffer->b,(imgB->byteOffset + ((li3 * 4) + 3))) & 255)) )));
HXDLIN(1443)							{
HXLINE(1443)								int _hx_int = val3;
HXDLIN(1443)								Float val;
HXDLIN(1443)								if ((_hx_int < 0)) {
HXLINE(1443)									val = (((Float)4294967296.0) + _hx_int);
            								}
            								else {
HXLINE(1443)									val = (_hx_int + ((Float)0.0));
            								}
HXDLIN(1443)								int val1 = ::Math_obj::round((val * iarr3));
HXDLIN(1443)								 ::__hxcpp_memory_set_byte(imgA->buffer->b,(imgA->byteOffset + ((ti3 * 4) + 3)),val1);
            							}
HXDLIN(1443)							ri3 = (ri3 + 1);
HXDLIN(1443)							li3 = (li3 + 1);
HXDLIN(1443)							ti3 = (ti3 + 1);
            						}
            					}
HXDLIN(1443)					{
HXLINE(1443)						int _g7 = (w - bx1);
HXDLIN(1443)						int _g8 = w;
HXDLIN(1443)						while((_g7 < _g8)){
HXLINE(1443)							_g7 = (_g7 + 1);
HXDLIN(1443)							int j = (_g7 - 1);
HXDLIN(1443)							val3 = (val3 + (( (int)(lv3) ) - ( (int)(( ::__hxcpp_memory_get_byte(imgB->buffer->b,(imgB->byteOffset + ((li3 * 4) + 3))) & 255)) )));
HXDLIN(1443)							{
HXLINE(1443)								int _hx_int = val3;
HXDLIN(1443)								Float val;
HXDLIN(1443)								if ((_hx_int < 0)) {
HXLINE(1443)									val = (((Float)4294967296.0) + _hx_int);
            								}
            								else {
HXLINE(1443)									val = (_hx_int + ((Float)0.0));
            								}
HXDLIN(1443)								int val1 = ::Math_obj::round((val * iarr3));
HXDLIN(1443)								 ::__hxcpp_memory_set_byte(imgA->buffer->b,(imgA->byteOffset + ((ti3 * 4) + 3)),val1);
            							}
HXDLIN(1443)							li3 = (li3 + 1);
HXDLIN(1443)							ti3 = (ti3 + 1);
            						}
            					}
            				}
            			}
            		}
HXLINE(1445)		{
HXLINE(1445)			Float iarr4 = (( (Float)(1) ) / ( (Float)(((by1 + by1) + 1)) ));
HXDLIN(1445)			int ws = (w * 4);
HXDLIN(1445)			int ti4;
HXDLIN(1445)			int li4;
HXDLIN(1445)			int ri4;
HXDLIN(1445)			 ::Dynamic fv4;
HXDLIN(1445)			 ::Dynamic lv4;
HXDLIN(1445)			int val4;
HXDLIN(1445)			{
HXLINE(1445)				int _g8 = 0;
HXDLIN(1445)				int _g9 = w;
HXDLIN(1445)				while((_g8 < _g9)){
HXLINE(1445)					_g8 = (_g8 + 1);
HXDLIN(1445)					int i = (_g8 - 1);
HXDLIN(1445)					ti4 = (i * 4);
HXDLIN(1445)					li4 = ti4;
HXDLIN(1445)					ri4 = (ti4 + (by1 * ws));
HXDLIN(1445)					fv4 = ( ::__hxcpp_memory_get_byte(imgA->buffer->b,(imgA->byteOffset + ti4)) & 255);
HXDLIN(1445)					lv4 = ( ::__hxcpp_memory_get_byte(imgA->buffer->b,(imgA->byteOffset + (ti4 + (ws * (h - 1))))) & 255);
HXDLIN(1445)					val4 = ((by1 + 1) * ( (int)(fv4) ));
HXDLIN(1445)					{
HXLINE(1445)						int _g = 0;
HXDLIN(1445)						int _g1 = by1;
HXDLIN(1445)						while((_g < _g1)){
HXLINE(1445)							_g = (_g + 1);
HXDLIN(1445)							int j = (_g - 1);
HXDLIN(1445)							val4 = (val4 + ( (int)(( ::__hxcpp_memory_get_byte(imgA->buffer->b,(imgA->byteOffset + (ti4 + (j * ws)))) & 255)) ));
            						}
            					}
HXDLIN(1445)					{
HXLINE(1445)						int _g2 = 0;
HXDLIN(1445)						int _g3 = (by1 + 1);
HXDLIN(1445)						while((_g2 < _g3)){
HXLINE(1445)							_g2 = (_g2 + 1);
HXDLIN(1445)							int j = (_g2 - 1);
HXDLIN(1445)							val4 = (val4 + (( (int)(( ::__hxcpp_memory_get_byte(imgA->buffer->b,(imgA->byteOffset + ri4)) & 255)) ) - ( (int)(fv4) )));
HXDLIN(1445)							{
HXLINE(1445)								int _hx_int = val4;
HXDLIN(1445)								Float val;
HXDLIN(1445)								if ((_hx_int < 0)) {
HXLINE(1445)									val = (((Float)4294967296.0) + _hx_int);
            								}
            								else {
HXLINE(1445)									val = (_hx_int + ((Float)0.0));
            								}
HXDLIN(1445)								int val1 = ::Math_obj::round((val * iarr4));
HXDLIN(1445)								 ::__hxcpp_memory_set_byte(imgB->buffer->b,(imgB->byteOffset + ti4),val1);
            							}
HXDLIN(1445)							ri4 = (ri4 + ws);
HXDLIN(1445)							ti4 = (ti4 + ws);
            						}
            					}
HXDLIN(1445)					{
HXLINE(1445)						int _g4 = (by1 + 1);
HXDLIN(1445)						int _g5 = (h - by1);
HXDLIN(1445)						while((_g4 < _g5)){
HXLINE(1445)							_g4 = (_g4 + 1);
HXDLIN(1445)							int j = (_g4 - 1);
HXDLIN(1445)							int a = ( (int)(( ::__hxcpp_memory_get_byte(imgA->buffer->b,(imgA->byteOffset + ri4)) & 255)) );
HXDLIN(1445)							val4 = (val4 + (a - ( (int)(( ::__hxcpp_memory_get_byte(imgA->buffer->b,(imgA->byteOffset + li4)) & 255)) )));
HXDLIN(1445)							{
HXLINE(1445)								int _hx_int = val4;
HXDLIN(1445)								Float val;
HXDLIN(1445)								if ((_hx_int < 0)) {
HXLINE(1445)									val = (((Float)4294967296.0) + _hx_int);
            								}
            								else {
HXLINE(1445)									val = (_hx_int + ((Float)0.0));
            								}
HXDLIN(1445)								int val1 = ::Math_obj::round((val * iarr4));
HXDLIN(1445)								 ::__hxcpp_memory_set_byte(imgB->buffer->b,(imgB->byteOffset + ti4),val1);
            							}
HXDLIN(1445)							li4 = (li4 + ws);
HXDLIN(1445)							ri4 = (ri4 + ws);
HXDLIN(1445)							ti4 = (ti4 + ws);
            						}
            					}
HXDLIN(1445)					{
HXLINE(1445)						int _g6 = (h - by1);
HXDLIN(1445)						int _g7 = h;
HXDLIN(1445)						while((_g6 < _g7)){
HXLINE(1445)							_g6 = (_g6 + 1);
HXDLIN(1445)							int j = (_g6 - 1);
HXDLIN(1445)							val4 = (val4 + (( (int)(lv4) ) - ( (int)(( ::__hxcpp_memory_get_byte(imgA->buffer->b,(imgA->byteOffset + li4)) & 255)) )));
HXDLIN(1445)							{
HXLINE(1445)								int _hx_int = val4;
HXDLIN(1445)								Float val;
HXDLIN(1445)								if ((_hx_int < 0)) {
HXLINE(1445)									val = (((Float)4294967296.0) + _hx_int);
            								}
            								else {
HXLINE(1445)									val = (_hx_int + ((Float)0.0));
            								}
HXDLIN(1445)								int val1 = ::Math_obj::round((val * iarr4));
HXDLIN(1445)								 ::__hxcpp_memory_set_byte(imgB->buffer->b,(imgB->byteOffset + ti4),val1);
            							}
HXDLIN(1445)							li4 = (li4 + ws);
HXDLIN(1445)							ti4 = (ti4 + ws);
            						}
            					}
            				}
            			}
            		}
HXLINE(1446)		{
HXLINE(1446)			Float iarr5 = (( (Float)(1) ) / ( (Float)(((by1 + by1) + 1)) ));
HXDLIN(1446)			int ws1 = (w * 4);
HXDLIN(1446)			int ti5;
HXDLIN(1446)			int li5;
HXDLIN(1446)			int ri5;
HXDLIN(1446)			 ::Dynamic fv5;
HXDLIN(1446)			 ::Dynamic lv5;
HXDLIN(1446)			int val5;
HXDLIN(1446)			{
HXLINE(1446)				int _g10 = 0;
HXDLIN(1446)				int _g11 = w;
HXDLIN(1446)				while((_g10 < _g11)){
HXLINE(1446)					_g10 = (_g10 + 1);
HXDLIN(1446)					int i = (_g10 - 1);
HXDLIN(1446)					ti5 = ((i * 4) + 1);
HXDLIN(1446)					li5 = ti5;
HXDLIN(1446)					ri5 = (ti5 + (by1 * ws1));
HXDLIN(1446)					fv5 = ( ::__hxcpp_memory_get_byte(imgA->buffer->b,(imgA->byteOffset + ti5)) & 255);
HXDLIN(1446)					lv5 = ( ::__hxcpp_memory_get_byte(imgA->buffer->b,(imgA->byteOffset + (ti5 + (ws1 * (h - 1))))) & 255);
HXDLIN(1446)					val5 = ((by1 + 1) * ( (int)(fv5) ));
HXDLIN(1446)					{
HXLINE(1446)						int _g = 0;
HXDLIN(1446)						int _g1 = by1;
HXDLIN(1446)						while((_g < _g1)){
HXLINE(1446)							_g = (_g + 1);
HXDLIN(1446)							int j = (_g - 1);
HXDLIN(1446)							val5 = (val5 + ( (int)(( ::__hxcpp_memory_get_byte(imgA->buffer->b,(imgA->byteOffset + (ti5 + (j * ws1)))) & 255)) ));
            						}
            					}
HXDLIN(1446)					{
HXLINE(1446)						int _g2 = 0;
HXDLIN(1446)						int _g3 = (by1 + 1);
HXDLIN(1446)						while((_g2 < _g3)){
HXLINE(1446)							_g2 = (_g2 + 1);
HXDLIN(1446)							int j = (_g2 - 1);
HXDLIN(1446)							val5 = (val5 + (( (int)(( ::__hxcpp_memory_get_byte(imgA->buffer->b,(imgA->byteOffset + ri5)) & 255)) ) - ( (int)(fv5) )));
HXDLIN(1446)							{
HXLINE(1446)								int _hx_int = val5;
HXDLIN(1446)								Float val;
HXDLIN(1446)								if ((_hx_int < 0)) {
HXLINE(1446)									val = (((Float)4294967296.0) + _hx_int);
            								}
            								else {
HXLINE(1446)									val = (_hx_int + ((Float)0.0));
            								}
HXDLIN(1446)								int val1 = ::Math_obj::round((val * iarr5));
HXDLIN(1446)								 ::__hxcpp_memory_set_byte(imgB->buffer->b,(imgB->byteOffset + ti5),val1);
            							}
HXDLIN(1446)							ri5 = (ri5 + ws1);
HXDLIN(1446)							ti5 = (ti5 + ws1);
            						}
            					}
HXDLIN(1446)					{
HXLINE(1446)						int _g4 = (by1 + 1);
HXDLIN(1446)						int _g5 = (h - by1);
HXDLIN(1446)						while((_g4 < _g5)){
HXLINE(1446)							_g4 = (_g4 + 1);
HXDLIN(1446)							int j = (_g4 - 1);
HXDLIN(1446)							int a = ( (int)(( ::__hxcpp_memory_get_byte(imgA->buffer->b,(imgA->byteOffset + ri5)) & 255)) );
HXDLIN(1446)							val5 = (val5 + (a - ( (int)(( ::__hxcpp_memory_get_byte(imgA->buffer->b,(imgA->byteOffset + li5)) & 255)) )));
HXDLIN(1446)							{
HXLINE(1446)								int _hx_int = val5;
HXDLIN(1446)								Float val;
HXDLIN(1446)								if ((_hx_int < 0)) {
HXLINE(1446)									val = (((Float)4294967296.0) + _hx_int);
            								}
            								else {
HXLINE(1446)									val = (_hx_int + ((Float)0.0));
            								}
HXDLIN(1446)								int val1 = ::Math_obj::round((val * iarr5));
HXDLIN(1446)								 ::__hxcpp_memory_set_byte(imgB->buffer->b,(imgB->byteOffset + ti5),val1);
            							}
HXDLIN(1446)							li5 = (li5 + ws1);
HXDLIN(1446)							ri5 = (ri5 + ws1);
HXDLIN(1446)							ti5 = (ti5 + ws1);
            						}
            					}
HXDLIN(1446)					{
HXLINE(1446)						int _g6 = (h - by1);
HXDLIN(1446)						int _g7 = h;
HXDLIN(1446)						while((_g6 < _g7)){
HXLINE(1446)							_g6 = (_g6 + 1);
HXDLIN(1446)							int j = (_g6 - 1);
HXDLIN(1446)							val5 = (val5 + (( (int)(lv5) ) - ( (int)(( ::__hxcpp_memory_get_byte(imgA->buffer->b,(imgA->byteOffset + li5)) & 255)) )));
HXDLIN(1446)							{
HXLINE(1446)								int _hx_int = val5;
HXDLIN(1446)								Float val;
HXDLIN(1446)								if ((_hx_int < 0)) {
HXLINE(1446)									val = (((Float)4294967296.0) + _hx_int);
            								}
            								else {
HXLINE(1446)									val = (_hx_int + ((Float)0.0));
            								}
HXDLIN(1446)								int val1 = ::Math_obj::round((val * iarr5));
HXDLIN(1446)								 ::__hxcpp_memory_set_byte(imgB->buffer->b,(imgB->byteOffset + ti5),val1);
            							}
HXDLIN(1446)							li5 = (li5 + ws1);
HXDLIN(1446)							ti5 = (ti5 + ws1);
            						}
            					}
            				}
            			}
            		}
HXLINE(1447)		{
HXLINE(1447)			Float iarr6 = (( (Float)(1) ) / ( (Float)(((by1 + by1) + 1)) ));
HXDLIN(1447)			int ws2 = (w * 4);
HXDLIN(1447)			int ti6;
HXDLIN(1447)			int li6;
HXDLIN(1447)			int ri6;
HXDLIN(1447)			 ::Dynamic fv6;
HXDLIN(1447)			 ::Dynamic lv6;
HXDLIN(1447)			int val6;
HXDLIN(1447)			{
HXLINE(1447)				int _g12 = 0;
HXDLIN(1447)				int _g13 = w;
HXDLIN(1447)				while((_g12 < _g13)){
HXLINE(1447)					_g12 = (_g12 + 1);
HXDLIN(1447)					int i = (_g12 - 1);
HXDLIN(1447)					ti6 = ((i * 4) + 2);
HXDLIN(1447)					li6 = ti6;
HXDLIN(1447)					ri6 = (ti6 + (by1 * ws2));
HXDLIN(1447)					fv6 = ( ::__hxcpp_memory_get_byte(imgA->buffer->b,(imgA->byteOffset + ti6)) & 255);
HXDLIN(1447)					lv6 = ( ::__hxcpp_memory_get_byte(imgA->buffer->b,(imgA->byteOffset + (ti6 + (ws2 * (h - 1))))) & 255);
HXDLIN(1447)					val6 = ((by1 + 1) * ( (int)(fv6) ));
HXDLIN(1447)					{
HXLINE(1447)						int _g = 0;
HXDLIN(1447)						int _g1 = by1;
HXDLIN(1447)						while((_g < _g1)){
HXLINE(1447)							_g = (_g + 1);
HXDLIN(1447)							int j = (_g - 1);
HXDLIN(1447)							val6 = (val6 + ( (int)(( ::__hxcpp_memory_get_byte(imgA->buffer->b,(imgA->byteOffset + (ti6 + (j * ws2)))) & 255)) ));
            						}
            					}
HXDLIN(1447)					{
HXLINE(1447)						int _g2 = 0;
HXDLIN(1447)						int _g3 = (by1 + 1);
HXDLIN(1447)						while((_g2 < _g3)){
HXLINE(1447)							_g2 = (_g2 + 1);
HXDLIN(1447)							int j = (_g2 - 1);
HXDLIN(1447)							val6 = (val6 + (( (int)(( ::__hxcpp_memory_get_byte(imgA->buffer->b,(imgA->byteOffset + ri6)) & 255)) ) - ( (int)(fv6) )));
HXDLIN(1447)							{
HXLINE(1447)								int _hx_int = val6;
HXDLIN(1447)								Float val;
HXDLIN(1447)								if ((_hx_int < 0)) {
HXLINE(1447)									val = (((Float)4294967296.0) + _hx_int);
            								}
            								else {
HXLINE(1447)									val = (_hx_int + ((Float)0.0));
            								}
HXDLIN(1447)								int val1 = ::Math_obj::round((val * iarr6));
HXDLIN(1447)								 ::__hxcpp_memory_set_byte(imgB->buffer->b,(imgB->byteOffset + ti6),val1);
            							}
HXDLIN(1447)							ri6 = (ri6 + ws2);
HXDLIN(1447)							ti6 = (ti6 + ws2);
            						}
            					}
HXDLIN(1447)					{
HXLINE(1447)						int _g4 = (by1 + 1);
HXDLIN(1447)						int _g5 = (h - by1);
HXDLIN(1447)						while((_g4 < _g5)){
HXLINE(1447)							_g4 = (_g4 + 1);
HXDLIN(1447)							int j = (_g4 - 1);
HXDLIN(1447)							int a = ( (int)(( ::__hxcpp_memory_get_byte(imgA->buffer->b,(imgA->byteOffset + ri6)) & 255)) );
HXDLIN(1447)							val6 = (val6 + (a - ( (int)(( ::__hxcpp_memory_get_byte(imgA->buffer->b,(imgA->byteOffset + li6)) & 255)) )));
HXDLIN(1447)							{
HXLINE(1447)								int _hx_int = val6;
HXDLIN(1447)								Float val;
HXDLIN(1447)								if ((_hx_int < 0)) {
HXLINE(1447)									val = (((Float)4294967296.0) + _hx_int);
            								}
            								else {
HXLINE(1447)									val = (_hx_int + ((Float)0.0));
            								}
HXDLIN(1447)								int val1 = ::Math_obj::round((val * iarr6));
HXDLIN(1447)								 ::__hxcpp_memory_set_byte(imgB->buffer->b,(imgB->byteOffset + ti6),val1);
            							}
HXDLIN(1447)							li6 = (li6 + ws2);
HXDLIN(1447)							ri6 = (ri6 + ws2);
HXDLIN(1447)							ti6 = (ti6 + ws2);
            						}
            					}
HXDLIN(1447)					{
HXLINE(1447)						int _g6 = (h - by1);
HXDLIN(1447)						int _g7 = h;
HXDLIN(1447)						while((_g6 < _g7)){
HXLINE(1447)							_g6 = (_g6 + 1);
HXDLIN(1447)							int j = (_g6 - 1);
HXDLIN(1447)							val6 = (val6 + (( (int)(lv6) ) - ( (int)(( ::__hxcpp_memory_get_byte(imgA->buffer->b,(imgA->byteOffset + li6)) & 255)) )));
HXDLIN(1447)							{
HXLINE(1447)								int _hx_int = val6;
HXDLIN(1447)								Float val;
HXDLIN(1447)								if ((_hx_int < 0)) {
HXLINE(1447)									val = (((Float)4294967296.0) + _hx_int);
            								}
            								else {
HXLINE(1447)									val = (_hx_int + ((Float)0.0));
            								}
HXDLIN(1447)								int val1 = ::Math_obj::round((val * iarr6));
HXDLIN(1447)								 ::__hxcpp_memory_set_byte(imgB->buffer->b,(imgB->byteOffset + ti6),val1);
            							}
HXDLIN(1447)							li6 = (li6 + ws2);
HXDLIN(1447)							ti6 = (ti6 + ws2);
            						}
            					}
            				}
            			}
            		}
HXLINE(1448)		{
HXLINE(1448)			Float iarr7 = (( (Float)(1) ) / ( (Float)(((by1 + by1) + 1)) ));
HXDLIN(1448)			int ws3 = (w * 4);
HXDLIN(1448)			int ti7;
HXDLIN(1448)			int li7;
HXDLIN(1448)			int ri7;
HXDLIN(1448)			 ::Dynamic fv7;
HXDLIN(1448)			 ::Dynamic lv7;
HXDLIN(1448)			int val7;
HXDLIN(1448)			{
HXLINE(1448)				int _g14 = 0;
HXDLIN(1448)				int _g15 = w;
HXDLIN(1448)				while((_g14 < _g15)){
HXLINE(1448)					_g14 = (_g14 + 1);
HXDLIN(1448)					int i = (_g14 - 1);
HXDLIN(1448)					ti7 = ((i * 4) + 3);
HXDLIN(1448)					li7 = ti7;
HXDLIN(1448)					ri7 = (ti7 + (by1 * ws3));
HXDLIN(1448)					fv7 = ( ::__hxcpp_memory_get_byte(imgA->buffer->b,(imgA->byteOffset + ti7)) & 255);
HXDLIN(1448)					lv7 = ( ::__hxcpp_memory_get_byte(imgA->buffer->b,(imgA->byteOffset + (ti7 + (ws3 * (h - 1))))) & 255);
HXDLIN(1448)					val7 = ((by1 + 1) * ( (int)(fv7) ));
HXDLIN(1448)					{
HXLINE(1448)						int _g = 0;
HXDLIN(1448)						int _g1 = by1;
HXDLIN(1448)						while((_g < _g1)){
HXLINE(1448)							_g = (_g + 1);
HXDLIN(1448)							int j = (_g - 1);
HXDLIN(1448)							val7 = (val7 + ( (int)(( ::__hxcpp_memory_get_byte(imgA->buffer->b,(imgA->byteOffset + (ti7 + (j * ws3)))) & 255)) ));
            						}
            					}
HXDLIN(1448)					{
HXLINE(1448)						int _g2 = 0;
HXDLIN(1448)						int _g3 = (by1 + 1);
HXDLIN(1448)						while((_g2 < _g3)){
HXLINE(1448)							_g2 = (_g2 + 1);
HXDLIN(1448)							int j = (_g2 - 1);
HXDLIN(1448)							val7 = (val7 + (( (int)(( ::__hxcpp_memory_get_byte(imgA->buffer->b,(imgA->byteOffset + ri7)) & 255)) ) - ( (int)(fv7) )));
HXDLIN(1448)							{
HXLINE(1448)								int _hx_int = val7;
HXDLIN(1448)								Float val;
HXDLIN(1448)								if ((_hx_int < 0)) {
HXLINE(1448)									val = (((Float)4294967296.0) + _hx_int);
            								}
            								else {
HXLINE(1448)									val = (_hx_int + ((Float)0.0));
            								}
HXDLIN(1448)								int val1 = ::Math_obj::round((val * iarr7));
HXDLIN(1448)								 ::__hxcpp_memory_set_byte(imgB->buffer->b,(imgB->byteOffset + ti7),val1);
            							}
HXDLIN(1448)							ri7 = (ri7 + ws3);
HXDLIN(1448)							ti7 = (ti7 + ws3);
            						}
            					}
HXDLIN(1448)					{
HXLINE(1448)						int _g4 = (by1 + 1);
HXDLIN(1448)						int _g5 = (h - by1);
HXDLIN(1448)						while((_g4 < _g5)){
HXLINE(1448)							_g4 = (_g4 + 1);
HXDLIN(1448)							int j = (_g4 - 1);
HXDLIN(1448)							int a = ( (int)(( ::__hxcpp_memory_get_byte(imgA->buffer->b,(imgA->byteOffset + ri7)) & 255)) );
HXDLIN(1448)							val7 = (val7 + (a - ( (int)(( ::__hxcpp_memory_get_byte(imgA->buffer->b,(imgA->byteOffset + li7)) & 255)) )));
HXDLIN(1448)							{
HXLINE(1448)								int _hx_int = val7;
HXDLIN(1448)								Float val;
HXDLIN(1448)								if ((_hx_int < 0)) {
HXLINE(1448)									val = (((Float)4294967296.0) + _hx_int);
            								}
            								else {
HXLINE(1448)									val = (_hx_int + ((Float)0.0));
            								}
HXDLIN(1448)								int val1 = ::Math_obj::round((val * iarr7));
HXDLIN(1448)								 ::__hxcpp_memory_set_byte(imgB->buffer->b,(imgB->byteOffset + ti7),val1);
            							}
HXDLIN(1448)							li7 = (li7 + ws3);
HXDLIN(1448)							ri7 = (ri7 + ws3);
HXDLIN(1448)							ti7 = (ti7 + ws3);
            						}
            					}
HXDLIN(1448)					{
HXLINE(1448)						int _g6 = (h - by1);
HXDLIN(1448)						int _g7 = h;
HXDLIN(1448)						while((_g6 < _g7)){
HXLINE(1448)							_g6 = (_g6 + 1);
HXDLIN(1448)							int j = (_g6 - 1);
HXDLIN(1448)							val7 = (val7 + (( (int)(lv7) ) - ( (int)(( ::__hxcpp_memory_get_byte(imgA->buffer->b,(imgA->byteOffset + li7)) & 255)) )));
HXDLIN(1448)							{
HXLINE(1448)								int _hx_int = val7;
HXDLIN(1448)								Float val;
HXDLIN(1448)								if ((_hx_int < 0)) {
HXLINE(1448)									val = (((Float)4294967296.0) + _hx_int);
            								}
            								else {
HXLINE(1448)									val = (_hx_int + ((Float)0.0));
            								}
HXDLIN(1448)								int val1 = ::Math_obj::round((val * iarr7));
HXDLIN(1448)								 ::__hxcpp_memory_set_byte(imgB->buffer->b,(imgB->byteOffset + ti7),val1);
            							}
HXDLIN(1448)							li7 = (li7 + ws3);
HXDLIN(1448)							ti7 = (ti7 + ws3);
            						}
            					}
            				}
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(ImageDataUtil_obj,_hx___boxBlur,(void))

void ImageDataUtil_obj::_hx___boxBlurH( ::lime::utils::ArrayBufferView imgA, ::lime::utils::ArrayBufferView imgB,int w,int h,int r,int off){
            	HX_STACKFRAME(&_hx_pos_68d87270d4f7b5ed_1452___boxBlurH)
HXLINE(1453)		Float iarr = (( (Float)(1) ) / ( (Float)(((r + r) + 1)) ));
HXLINE(1454)		int ti;
HXDLIN(1454)		int li;
HXDLIN(1454)		int ri;
HXDLIN(1454)		 ::Dynamic fv;
HXDLIN(1454)		 ::Dynamic lv;
HXDLIN(1454)		int val;
HXLINE(1456)		{
HXLINE(1456)			int _g = 0;
HXDLIN(1456)			int _g1 = h;
HXDLIN(1456)			while((_g < _g1)){
HXLINE(1456)				_g = (_g + 1);
HXDLIN(1456)				int i = (_g - 1);
HXLINE(1458)				ti = (i * w);
HXLINE(1459)				li = ti;
HXLINE(1460)				ri = (ti + r);
HXLINE(1462)				fv = ( ::__hxcpp_memory_get_byte(imgA->buffer->b,(imgA->byteOffset + ((ti * 4) + off))) & 255);
HXLINE(1463)				lv = ( ::__hxcpp_memory_get_byte(imgA->buffer->b,(imgA->byteOffset + ((((ti + w) - 1) * 4) + off))) & 255);
HXLINE(1464)				val = ((r + 1) * ( (int)(fv) ));
HXLINE(1466)				{
HXLINE(1466)					int _g1 = 0;
HXDLIN(1466)					int _g2 = r;
HXDLIN(1466)					while((_g1 < _g2)){
HXLINE(1466)						_g1 = (_g1 + 1);
HXDLIN(1466)						int j = (_g1 - 1);
HXLINE(1468)						val = (val + ( (int)(( ::__hxcpp_memory_get_byte(imgA->buffer->b,(imgA->byteOffset + (((ti + j) * 4) + off))) & 255)) ));
            					}
            				}
HXLINE(1471)				{
HXLINE(1471)					int _g3 = 0;
HXDLIN(1471)					int _g4 = (r + 1);
HXDLIN(1471)					while((_g3 < _g4)){
HXLINE(1471)						_g3 = (_g3 + 1);
HXDLIN(1471)						int j = (_g3 - 1);
HXLINE(1473)						val = (val + (( (int)(( ::__hxcpp_memory_get_byte(imgA->buffer->b,(imgA->byteOffset + ((ri * 4) + off))) & 255)) ) - ( (int)(fv) )));
HXLINE(1474)						{
HXLINE(1474)							int _hx_int = val;
HXDLIN(1474)							Float val1;
HXDLIN(1474)							if ((_hx_int < 0)) {
HXLINE(1474)								val1 = (((Float)4294967296.0) + _hx_int);
            							}
            							else {
HXLINE(1474)								val1 = (_hx_int + ((Float)0.0));
            							}
HXDLIN(1474)							int val2 = ::Math_obj::round((val1 * iarr));
HXDLIN(1474)							 ::__hxcpp_memory_set_byte(imgB->buffer->b,(imgB->byteOffset + ((ti * 4) + off)),val2);
            						}
HXLINE(1475)						ri = (ri + 1);
HXLINE(1476)						ti = (ti + 1);
            					}
            				}
HXLINE(1479)				{
HXLINE(1479)					int _g5 = (r + 1);
HXDLIN(1479)					int _g6 = (w - r);
HXDLIN(1479)					while((_g5 < _g6)){
HXLINE(1479)						_g5 = (_g5 + 1);
HXDLIN(1479)						int j = (_g5 - 1);
HXLINE(1481)						int a = ( (int)(( ::__hxcpp_memory_get_byte(imgA->buffer->b,(imgA->byteOffset + ((ri * 4) + off))) & 255)) );
HXDLIN(1481)						val = (val + (a - ( (int)(( ::__hxcpp_memory_get_byte(imgA->buffer->b,(imgA->byteOffset + ((li * 4) + off))) & 255)) )));
HXLINE(1482)						{
HXLINE(1482)							int _hx_int = val;
HXDLIN(1482)							Float val1;
HXDLIN(1482)							if ((_hx_int < 0)) {
HXLINE(1482)								val1 = (((Float)4294967296.0) + _hx_int);
            							}
            							else {
HXLINE(1482)								val1 = (_hx_int + ((Float)0.0));
            							}
HXDLIN(1482)							int val2 = ::Math_obj::round((val1 * iarr));
HXDLIN(1482)							 ::__hxcpp_memory_set_byte(imgB->buffer->b,(imgB->byteOffset + ((ti * 4) + off)),val2);
            						}
HXLINE(1483)						ri = (ri + 1);
HXLINE(1484)						li = (li + 1);
HXLINE(1485)						ti = (ti + 1);
            					}
            				}
HXLINE(1488)				{
HXLINE(1488)					int _g7 = (w - r);
HXDLIN(1488)					int _g8 = w;
HXDLIN(1488)					while((_g7 < _g8)){
HXLINE(1488)						_g7 = (_g7 + 1);
HXDLIN(1488)						int j = (_g7 - 1);
HXLINE(1490)						val = (val + (( (int)(lv) ) - ( (int)(( ::__hxcpp_memory_get_byte(imgA->buffer->b,(imgA->byteOffset + ((li * 4) + off))) & 255)) )));
HXLINE(1491)						{
HXLINE(1491)							int _hx_int = val;
HXDLIN(1491)							Float val1;
HXDLIN(1491)							if ((_hx_int < 0)) {
HXLINE(1491)								val1 = (((Float)4294967296.0) + _hx_int);
            							}
            							else {
HXLINE(1491)								val1 = (_hx_int + ((Float)0.0));
            							}
HXDLIN(1491)							int val2 = ::Math_obj::round((val1 * iarr));
HXDLIN(1491)							 ::__hxcpp_memory_set_byte(imgB->buffer->b,(imgB->byteOffset + ((ti * 4) + off)),val2);
            						}
HXLINE(1492)						li = (li + 1);
HXLINE(1493)						ti = (ti + 1);
            					}
            				}
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(ImageDataUtil_obj,_hx___boxBlurH,(void))

void ImageDataUtil_obj::_hx___boxBlurT( ::lime::utils::ArrayBufferView imgA, ::lime::utils::ArrayBufferView imgB,int w,int h,int r,int off){
            	HX_STACKFRAME(&_hx_pos_68d87270d4f7b5ed_1499___boxBlurT)
HXLINE(1500)		Float iarr = (( (Float)(1) ) / ( (Float)(((r + r) + 1)) ));
HXLINE(1501)		int ws = (w * 4);
HXLINE(1502)		int ti;
HXDLIN(1502)		int li;
HXDLIN(1502)		int ri;
HXDLIN(1502)		 ::Dynamic fv;
HXDLIN(1502)		 ::Dynamic lv;
HXDLIN(1502)		int val;
HXLINE(1504)		{
HXLINE(1504)			int _g = 0;
HXDLIN(1504)			int _g1 = w;
HXDLIN(1504)			while((_g < _g1)){
HXLINE(1504)				_g = (_g + 1);
HXDLIN(1504)				int i = (_g - 1);
HXLINE(1506)				ti = ((i * 4) + off);
HXLINE(1507)				li = ti;
HXLINE(1508)				ri = (ti + (r * ws));
HXLINE(1510)				fv = ( ::__hxcpp_memory_get_byte(imgA->buffer->b,(imgA->byteOffset + ti)) & 255);
HXLINE(1511)				lv = ( ::__hxcpp_memory_get_byte(imgA->buffer->b,(imgA->byteOffset + (ti + (ws * (h - 1))))) & 255);
HXLINE(1512)				val = ((r + 1) * ( (int)(fv) ));
HXLINE(1514)				{
HXLINE(1514)					int _g1 = 0;
HXDLIN(1514)					int _g2 = r;
HXDLIN(1514)					while((_g1 < _g2)){
HXLINE(1514)						_g1 = (_g1 + 1);
HXDLIN(1514)						int j = (_g1 - 1);
HXLINE(1516)						val = (val + ( (int)(( ::__hxcpp_memory_get_byte(imgA->buffer->b,(imgA->byteOffset + (ti + (j * ws)))) & 255)) ));
            					}
            				}
HXLINE(1519)				{
HXLINE(1519)					int _g3 = 0;
HXDLIN(1519)					int _g4 = (r + 1);
HXDLIN(1519)					while((_g3 < _g4)){
HXLINE(1519)						_g3 = (_g3 + 1);
HXDLIN(1519)						int j = (_g3 - 1);
HXLINE(1521)						val = (val + (( (int)(( ::__hxcpp_memory_get_byte(imgA->buffer->b,(imgA->byteOffset + ri)) & 255)) ) - ( (int)(fv) )));
HXLINE(1522)						{
HXLINE(1522)							int _hx_int = val;
HXDLIN(1522)							Float val1;
HXDLIN(1522)							if ((_hx_int < 0)) {
HXLINE(1522)								val1 = (((Float)4294967296.0) + _hx_int);
            							}
            							else {
HXLINE(1522)								val1 = (_hx_int + ((Float)0.0));
            							}
HXDLIN(1522)							int val2 = ::Math_obj::round((val1 * iarr));
HXDLIN(1522)							 ::__hxcpp_memory_set_byte(imgB->buffer->b,(imgB->byteOffset + ti),val2);
            						}
HXLINE(1523)						ri = (ri + ws);
HXLINE(1524)						ti = (ti + ws);
            					}
            				}
HXLINE(1527)				{
HXLINE(1527)					int _g5 = (r + 1);
HXDLIN(1527)					int _g6 = (h - r);
HXDLIN(1527)					while((_g5 < _g6)){
HXLINE(1527)						_g5 = (_g5 + 1);
HXDLIN(1527)						int j = (_g5 - 1);
HXLINE(1529)						int a = ( (int)(( ::__hxcpp_memory_get_byte(imgA->buffer->b,(imgA->byteOffset + ri)) & 255)) );
HXDLIN(1529)						val = (val + (a - ( (int)(( ::__hxcpp_memory_get_byte(imgA->buffer->b,(imgA->byteOffset + li)) & 255)) )));
HXLINE(1530)						{
HXLINE(1530)							int _hx_int = val;
HXDLIN(1530)							Float val1;
HXDLIN(1530)							if ((_hx_int < 0)) {
HXLINE(1530)								val1 = (((Float)4294967296.0) + _hx_int);
            							}
            							else {
HXLINE(1530)								val1 = (_hx_int + ((Float)0.0));
            							}
HXDLIN(1530)							int val2 = ::Math_obj::round((val1 * iarr));
HXDLIN(1530)							 ::__hxcpp_memory_set_byte(imgB->buffer->b,(imgB->byteOffset + ti),val2);
            						}
HXLINE(1531)						li = (li + ws);
HXLINE(1532)						ri = (ri + ws);
HXLINE(1533)						ti = (ti + ws);
            					}
            				}
HXLINE(1536)				{
HXLINE(1536)					int _g7 = (h - r);
HXDLIN(1536)					int _g8 = h;
HXDLIN(1536)					while((_g7 < _g8)){
HXLINE(1536)						_g7 = (_g7 + 1);
HXDLIN(1536)						int j = (_g7 - 1);
HXLINE(1538)						val = (val + (( (int)(lv) ) - ( (int)(( ::__hxcpp_memory_get_byte(imgA->buffer->b,(imgA->byteOffset + li)) & 255)) )));
HXLINE(1539)						{
HXLINE(1539)							int _hx_int = val;
HXDLIN(1539)							Float val1;
HXDLIN(1539)							if ((_hx_int < 0)) {
HXLINE(1539)								val1 = (((Float)4294967296.0) + _hx_int);
            							}
            							else {
HXLINE(1539)								val1 = (_hx_int + ((Float)0.0));
            							}
HXDLIN(1539)							int val2 = ::Math_obj::round((val1 * iarr));
HXDLIN(1539)							 ::__hxcpp_memory_set_byte(imgB->buffer->b,(imgB->byteOffset + ti),val2);
            						}
HXLINE(1540)						li = (li + ws);
HXLINE(1541)						ti = (ti + ws);
            					}
            				}
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(ImageDataUtil_obj,_hx___boxBlurT,(void))

int ImageDataUtil_obj::_hx___calculateSourceOffset( ::lime::math::Rectangle sourceRect, ::lime::math::Vector2 destPoint,int destX,int destY){
            	HX_STACKFRAME(&_hx_pos_68d87270d4f7b5ed_1551___calculateSourceOffset)
HXLINE(1552)		int sourceX = (destX - ::Std_obj::_hx_int(destPoint->x));
HXLINE(1553)		int sourceY = (destY - ::Std_obj::_hx_int(destPoint->y));
HXLINE(1555)		int offset = 0;
HXLINE(1557)		bool _hx_tmp;
HXDLIN(1557)		bool _hx_tmp1;
HXDLIN(1557)		bool _hx_tmp2;
HXDLIN(1557)		if ((sourceX >= 0)) {
HXLINE(1557)			_hx_tmp2 = (sourceY < 0);
            		}
            		else {
HXLINE(1557)			_hx_tmp2 = true;
            		}
HXDLIN(1557)		if (!(_hx_tmp2)) {
HXLINE(1557)			_hx_tmp1 = (sourceX >= sourceRect->width);
            		}
            		else {
HXLINE(1557)			_hx_tmp1 = true;
            		}
HXDLIN(1557)		if (!(_hx_tmp1)) {
HXLINE(1557)			_hx_tmp = (sourceY >= sourceRect->height);
            		}
            		else {
HXLINE(1557)			_hx_tmp = true;
            		}
HXDLIN(1557)		if (_hx_tmp) {
HXLINE(1559)			offset = -1;
            		}
            		else {
HXLINE(1563)			offset = (4 * ((sourceY * ::Std_obj::_hx_int(sourceRect->width)) + sourceX));
            		}
HXLINE(1566)		return offset;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ImageDataUtil_obj,_hx___calculateSourceOffset,return )

::Array< Float > ImageDataUtil_obj::_hx___getBoxesForGaussianBlur(Float sigma,int n){
            	HX_STACKFRAME(&_hx_pos_68d87270d4f7b5ed_1570___getBoxesForGaussianBlur)
HXLINE(1571)		Float wIdeal = ::Math_obj::sqrt(((((( (Float)(12) ) * sigma) * sigma) / ( (Float)(n) )) + 1));
HXLINE(1572)		int wl = ::Math_obj::floor(wIdeal);
HXLINE(1573)		if ((::hx::Mod(wl,2) == 0)) {
HXLINE(1573)			wl = (wl - 1);
            		}
HXLINE(1574)		int wu = (wl + 2);
HXLINE(1576)		Float mIdeal = ((((((( (Float)(12) ) * sigma) * sigma) - ( (Float)(((n * wl) * wl)) )) - ( (Float)(((4 * n) * wl)) )) - ( (Float)((3 * n)) )) / ( (Float)(((-4 * wl) - 4)) ));
HXLINE(1577)		int m = ::Math_obj::round(mIdeal);
HXLINE(1578)		::Array< Float > sizes = ::Array_obj< Float >::__new(0);
HXLINE(1580)		{
HXLINE(1580)			int _g = 0;
HXDLIN(1580)			int _g1 = n;
HXDLIN(1580)			while((_g < _g1)){
HXLINE(1580)				_g = (_g + 1);
HXDLIN(1580)				int i = (_g - 1);
HXLINE(1582)				Float _hx_tmp;
HXDLIN(1582)				if ((i < m)) {
HXLINE(1582)					_hx_tmp = ( (Float)(wl) );
            				}
            				else {
HXLINE(1582)					_hx_tmp = ( (Float)(wu) );
            				}
HXDLIN(1582)				sizes->push(_hx_tmp);
            			}
            		}
HXLINE(1585)		return sizes;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ImageDataUtil_obj,_hx___getBoxesForGaussianBlur,return )

int ImageDataUtil_obj::_hx___pixelCompare(int n1,int n2){
            	HX_STACKFRAME(&_hx_pos_68d87270d4f7b5ed_1589___pixelCompare)
HXLINE(1590)		int tmp1 = (::hx::UShr(n1,24) & 255);
HXLINE(1591)		int tmp2 = (::hx::UShr(n2,24) & 255);
HXLINE(1596)		if ((tmp1 != tmp2)) {
HXLINE(1598)			bool aNeg = (tmp1 < 0);
HXDLIN(1598)			bool bNeg = (tmp2 < 0);
HXDLIN(1598)			bool _hx_tmp;
HXDLIN(1598)			if ((aNeg != bNeg)) {
HXLINE(1598)				_hx_tmp = aNeg;
            			}
            			else {
HXLINE(1598)				_hx_tmp = (tmp1 > tmp2);
            			}
HXDLIN(1598)			if (_hx_tmp) {
HXLINE(1598)				return 1;
            			}
            			else {
HXLINE(1598)				return -1;
            			}
            		}
            		else {
HXLINE(1602)			tmp1 = (::hx::UShr(n1,16) & 255);
HXLINE(1603)			tmp2 = (::hx::UShr(n2,16) & 255);
HXLINE(1605)			if ((tmp1 != tmp2)) {
HXLINE(1607)				bool aNeg = (tmp1 < 0);
HXDLIN(1607)				bool bNeg = (tmp2 < 0);
HXDLIN(1607)				bool _hx_tmp;
HXDLIN(1607)				if ((aNeg != bNeg)) {
HXLINE(1607)					_hx_tmp = aNeg;
            				}
            				else {
HXLINE(1607)					_hx_tmp = (tmp1 > tmp2);
            				}
HXDLIN(1607)				if (_hx_tmp) {
HXLINE(1607)					return 1;
            				}
            				else {
HXLINE(1607)					return -1;
            				}
            			}
            			else {
HXLINE(1611)				tmp1 = (::hx::UShr(n1,8) & 255);
HXLINE(1612)				tmp2 = (::hx::UShr(n2,8) & 255);
HXLINE(1614)				if ((tmp1 != tmp2)) {
HXLINE(1616)					bool aNeg = (tmp1 < 0);
HXDLIN(1616)					bool bNeg = (tmp2 < 0);
HXDLIN(1616)					bool _hx_tmp;
HXDLIN(1616)					if ((aNeg != bNeg)) {
HXLINE(1616)						_hx_tmp = aNeg;
            					}
            					else {
HXLINE(1616)						_hx_tmp = (tmp1 > tmp2);
            					}
HXDLIN(1616)					if (_hx_tmp) {
HXLINE(1616)						return 1;
            					}
            					else {
HXLINE(1616)						return -1;
            					}
            				}
            				else {
HXLINE(1620)					tmp1 = (n1 & 255);
HXLINE(1621)					tmp2 = (n2 & 255);
HXLINE(1623)					if ((tmp1 != tmp2)) {
HXLINE(1625)						bool aNeg = (tmp1 < 0);
HXDLIN(1625)						bool bNeg = (tmp2 < 0);
HXDLIN(1625)						bool _hx_tmp;
HXDLIN(1625)						if ((aNeg != bNeg)) {
HXLINE(1625)							_hx_tmp = aNeg;
            						}
            						else {
HXLINE(1625)							_hx_tmp = (tmp1 > tmp2);
            						}
HXDLIN(1625)						if (_hx_tmp) {
HXLINE(1625)							return 1;
            						}
            						else {
HXLINE(1625)							return -1;
            						}
            					}
            					else {
HXLINE(1629)						return 0;
            					}
            				}
            			}
            		}
HXLINE(1596)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ImageDataUtil_obj,_hx___pixelCompare,return )

void ImageDataUtil_obj::_hx___translatePixel( ::lime::utils::ArrayBufferView imgB, ::lime::math::Rectangle sourceRect, ::lime::math::Rectangle destRect, ::lime::math::Vector2 destPoint,int destX,int destY,Float strength){
            	HX_STACKFRAME(&_hx_pos_68d87270d4f7b5ed_1638___translatePixel)
HXLINE(1639)		int d = (4 * ((destY * ::Std_obj::_hx_int(destRect->width)) + destX));
HXLINE(1640)		int sourceX = (destX - ::Std_obj::_hx_int(destPoint->x));
HXDLIN(1640)		int sourceY = (destY - ::Std_obj::_hx_int(destPoint->y));
HXDLIN(1640)		int offset = 0;
HXDLIN(1640)		bool _hx_tmp;
HXDLIN(1640)		bool _hx_tmp1;
HXDLIN(1640)		bool _hx_tmp2;
HXDLIN(1640)		if ((sourceX >= 0)) {
HXLINE(1640)			_hx_tmp2 = (sourceY < 0);
            		}
            		else {
HXLINE(1640)			_hx_tmp2 = true;
            		}
HXDLIN(1640)		if (!(_hx_tmp2)) {
HXLINE(1640)			_hx_tmp1 = (sourceX >= sourceRect->width);
            		}
            		else {
HXLINE(1640)			_hx_tmp1 = true;
            		}
HXDLIN(1640)		if (!(_hx_tmp1)) {
HXLINE(1640)			_hx_tmp = (sourceY >= sourceRect->height);
            		}
            		else {
HXLINE(1640)			_hx_tmp = true;
            		}
HXDLIN(1640)		if (_hx_tmp) {
HXLINE(1640)			offset = -1;
            		}
            		else {
HXLINE(1640)			offset = (4 * ((sourceY * ::Std_obj::_hx_int(sourceRect->width)) + sourceX));
            		}
HXDLIN(1640)		int s = offset;
HXLINE(1642)		if ((s < 0)) {
HXLINE(1644)			 ::__hxcpp_memory_set_byte(imgB->buffer->b,(imgB->byteOffset + (d + 3)),0);
HXDLIN(1644)			int val = 0;
HXDLIN(1644)			 ::__hxcpp_memory_set_byte(imgB->buffer->b,(imgB->byteOffset + (d + 2)),val);
HXDLIN(1644)			int val1 = val;
HXDLIN(1644)			 ::__hxcpp_memory_set_byte(imgB->buffer->b,(imgB->byteOffset + (d + 1)),val1);
HXDLIN(1644)			int val2 = val1;
HXDLIN(1644)			 ::__hxcpp_memory_set_byte(imgB->buffer->b,(imgB->byteOffset + d),val2);
            		}
            		else {
HXLINE(1648)			{
HXLINE(1648)				int val = ( (int)(( ::__hxcpp_memory_get_byte(imgB->buffer->b,(imgB->byteOffset + s)) & 255)) );
HXDLIN(1648)				 ::__hxcpp_memory_set_byte(imgB->buffer->b,(imgB->byteOffset + d),val);
            			}
HXLINE(1649)			{
HXLINE(1649)				int val1 = ( (int)(( ::__hxcpp_memory_get_byte(imgB->buffer->b,(imgB->byteOffset + (s + 1))) & 255)) );
HXDLIN(1649)				 ::__hxcpp_memory_set_byte(imgB->buffer->b,(imgB->byteOffset + (d + 1)),val1);
            			}
HXLINE(1650)			{
HXLINE(1650)				int val2 = ( (int)(( ::__hxcpp_memory_get_byte(imgB->buffer->b,(imgB->byteOffset + (s + 2))) & 255)) );
HXDLIN(1650)				 ::__hxcpp_memory_set_byte(imgB->buffer->b,(imgB->byteOffset + (d + 2)),val2);
            			}
HXLINE(1652)			int _hx_int = ( (int)(( ::__hxcpp_memory_get_byte(imgB->buffer->b,(imgB->byteOffset + (s + 3))) & 255)) );
HXDLIN(1652)			Float a;
HXDLIN(1652)			if ((_hx_int < 0)) {
HXLINE(1652)				a = (((Float)4294967296.0) + _hx_int);
            			}
            			else {
HXLINE(1652)				a = (_hx_int + ((Float)0.0));
            			}
HXDLIN(1652)			int a1 = ::Std_obj::_hx_int((a * strength));
HXLINE(1653)			{
HXLINE(1653)				int val3;
HXDLIN(1653)				if ((a1 < 0)) {
HXLINE(1653)					val3 = 0;
            				}
            				else {
HXLINE(1653)					if ((a1 > 255)) {
HXLINE(1653)						val3 = 255;
            					}
            					else {
HXLINE(1653)						val3 = a1;
            					}
            				}
HXDLIN(1653)				 ::__hxcpp_memory_set_byte(imgB->buffer->b,(imgB->byteOffset + (d + 3)),val3);
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(ImageDataUtil_obj,_hx___translatePixel,(void))


ImageDataUtil_obj::ImageDataUtil_obj()
{
}

bool ImageDataUtil_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"lerp") ) { outValue = lerp_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"merge") ) { outValue = merge_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"lerp4f") ) { outValue = lerp4f_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"resize") ) { outValue = resize_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"bilinear") ) { outValue = bilinear_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"lerpRGBA") ) { outValue = lerpRGBA_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"fillRect") ) { outValue = fillRect_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getPixel") ) { outValue = getPixel_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"setPixel") ) { outValue = setPixel_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"floodFill") ) { outValue = floodFill_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getPixels") ) { outValue = getPixels_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"setFormat") ) { outValue = setFormat_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"setPixels") ) { outValue = setPixels_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"threshold") ) { outValue = threshold_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"__boxBlur") ) { outValue = _hx___boxBlur_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"copyPixels") ) { outValue = copyPixels_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getPixel32") ) { outValue = getPixel32_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"setPixel32") ) { outValue = setPixel32_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"__boxBlurH") ) { outValue = _hx___boxBlurH_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"__boxBlurT") ) { outValue = _hx___boxBlurT_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"displaceMap") ) { outValue = displaceMap_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"copyChannel") ) { outValue = copyChannel_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"gaussianBlur") ) { outValue = gaussianBlur_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"resizeBuffer") ) { outValue = resizeBuffer_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"multiplyAlpha") ) { outValue = multiplyAlpha_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorTransform") ) { outValue = colorTransform_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"__pixelCompare") ) { outValue = _hx___pixelCompare_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"unmultiplyAlpha") ) { outValue = unmultiplyAlpha_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__translatePixel") ) { outValue = _hx___translatePixel_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getColorBoundsRect") ) { outValue = getColorBoundsRect_dyn(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"__calculateSourceOffset") ) { outValue = _hx___calculateSourceOffset_dyn(); return true; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"__getBoxesForGaussianBlur") ) { outValue = _hx___getBoxesForGaussianBlur_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ImageDataUtil_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ImageDataUtil_obj_sStaticStorageInfo = 0;
#endif

::hx::Class ImageDataUtil_obj::__mClass;

static ::String ImageDataUtil_obj_sStaticFields[] = {
	HX_("displaceMap",63,ff,45,95),
	HX_("bilinear",ec,b6,3d,e0),
	HX_("lerpRGBA",ab,b2,39,d1),
	HX_("lerp4f",e9,0b,b3,a1),
	HX_("lerp",77,12,b0,47),
	HX_("colorTransform",89,d7,3f,ad),
	HX_("copyChannel",8e,7d,e6,22),
	HX_("copyPixels",c2,54,6e,42),
	HX_("fillRect",47,45,b9,6c),
	HX_("floodFill",61,83,8a,59),
	HX_("gaussianBlur",42,ea,61,f7),
	HX_("getColorBoundsRect",86,ad,e8,80),
	HX_("getPixel",10,d6,7a,22),
	HX_("getPixel32",af,a6,68,d7),
	HX_("getPixels",63,78,00,09),
	HX_("merge",b8,a2,c6,05),
	HX_("multiplyAlpha",9a,f2,1c,6b),
	HX_("resize",f4,59,7b,08),
	HX_("resizeBuffer",14,7a,a2,b4),
	HX_("setFormat",79,04,36,5d),
	HX_("setPixel",84,2f,d8,d0),
	HX_("setPixel32",23,45,e6,da),
	HX_("setPixels",6f,64,51,ec),
	HX_("threshold",ab,c3,a3,34),
	HX_("unmultiplyAlpha",a1,c8,96,28),
	HX_("__boxBlur",32,df,2a,12),
	HX_("__boxBlurH",d6,6c,58,d3),
	HX_("__boxBlurT",e2,6c,58,d3),
	HX_("__calculateSourceOffset",34,ce,66,5a),
	HX_("__getBoxesForGaussianBlur",48,14,ae,9c),
	HX_("__pixelCompare",df,79,e3,8d),
	HX_("__translatePixel",78,af,9b,5e),
	::String(null())
};

void ImageDataUtil_obj::__register()
{
	ImageDataUtil_obj _hx_dummy;
	ImageDataUtil_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime._internal.graphics.ImageDataUtil",cf,fd,b0,0e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ImageDataUtil_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ImageDataUtil_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< ImageDataUtil_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ImageDataUtil_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ImageDataUtil_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace _internal
} // end namespace graphics
