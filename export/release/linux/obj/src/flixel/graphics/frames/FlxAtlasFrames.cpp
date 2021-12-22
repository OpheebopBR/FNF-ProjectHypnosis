#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED__Xml_XmlType_Impl_
#include <_Xml/XmlType_Impl_.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrame
#include <flixel/graphics/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrameCollectionType
#include <flixel/graphics/frames/FlxFrameCollectionType.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxRect
#include <flixel/util/FlxPool_flixel_math_FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_BalancedTree
#include <haxe/ds/BalancedTree.h>
#endif
#ifndef INCLUDED_haxe_ds_EnumValueMap
#include <haxe/ds/EnumValueMap.h>
#endif
#ifndef INCLUDED_haxe_format_JsonParser
#include <haxe/format/JsonParser.h>
#endif
#ifndef INCLUDED_haxe_xml__Access_AttribAccess_Impl_
#include <haxe/xml/_Access/AttribAccess_Impl_.h>
#endif
#ifndef INCLUDED_haxe_xml__Access_HasAttribAccess_Impl_
#include <haxe/xml/_Access/HasAttribAccess_Impl_.h>
#endif
#ifndef INCLUDED_haxe_xml__Access_NodeListAccess_Impl_
#include <haxe/xml/_Access/NodeListAccess_Impl_.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d294561f5bda5770_28_new,"flixel.graphics.frames.FlxAtlasFrames","new",0xed20cbc8,"flixel.graphics.frames.FlxAtlasFrames.new","flixel/graphics/frames/FlxAtlasFrames.hx",28,0x501ecb67)
HX_LOCAL_STACK_FRAME(_hx_pos_d294561f5bda5770_409_addBorder,"flixel.graphics.frames.FlxAtlasFrames","addBorder",0x1a31fb55,"flixel.graphics.frames.FlxAtlasFrames.addBorder","flixel/graphics/frames/FlxAtlasFrames.hx",409,0x501ecb67)
HX_LOCAL_STACK_FRAME(_hx_pos_d294561f5bda5770_42_fromTexturePackerJson,"flixel.graphics.frames.FlxAtlasFrames","fromTexturePackerJson",0xae76e627,"flixel.graphics.frames.FlxAtlasFrames.fromTexturePackerJson","flixel/graphics/frames/FlxAtlasFrames.hx",42,0x501ecb67)
HX_LOCAL_STACK_FRAME(_hx_pos_d294561f5bda5770_101_texturePackerHelper,"flixel.graphics.frames.FlxAtlasFrames","texturePackerHelper",0x397d6e77,"flixel.graphics.frames.FlxAtlasFrames.texturePackerHelper","flixel/graphics/frames/FlxAtlasFrames.hx",101,0x501ecb67)
HX_LOCAL_STACK_FRAME(_hx_pos_d294561f5bda5770_132_fromLibGdx,"flixel.graphics.frames.FlxAtlasFrames","fromLibGdx",0x5ef5c818,"flixel.graphics.frames.FlxAtlasFrames.fromLibGdx","flixel/graphics/frames/FlxAtlasFrames.hx",132,0x501ecb67)
HX_LOCAL_STACK_FRAME(_hx_pos_d294561f5bda5770_211_getDimensions,"flixel.graphics.frames.FlxAtlasFrames","getDimensions",0x0a6267eb,"flixel.graphics.frames.FlxAtlasFrames.getDimensions","flixel/graphics/frames/FlxAtlasFrames.hx",211,0x501ecb67)
HX_LOCAL_STACK_FRAME(_hx_pos_d294561f5bda5770_232_fromSparrow,"flixel.graphics.frames.FlxAtlasFrames","fromSparrow",0x30bf432a,"flixel.graphics.frames.FlxAtlasFrames.fromSparrow","flixel/graphics/frames/FlxAtlasFrames.hx",232,0x501ecb67)
HX_LOCAL_STACK_FRAME(_hx_pos_d294561f5bda5770_297_fromTexturePackerXml,"flixel.graphics.frames.FlxAtlasFrames","fromTexturePackerXml",0x5ca98eb8,"flixel.graphics.frames.FlxAtlasFrames.fromTexturePackerXml","flixel/graphics/frames/FlxAtlasFrames.hx",297,0x501ecb67)
HX_LOCAL_STACK_FRAME(_hx_pos_d294561f5bda5770_349_fromSpriteSheetPacker,"flixel.graphics.frames.FlxAtlasFrames","fromSpriteSheetPacker",0x4fb8a81e,"flixel.graphics.frames.FlxAtlasFrames.fromSpriteSheetPacker","flixel/graphics/frames/FlxAtlasFrames.hx",349,0x501ecb67)
HX_LOCAL_STACK_FRAME(_hx_pos_d294561f5bda5770_395_findFrame,"flixel.graphics.frames.FlxAtlasFrames","findFrame",0xf36e229c,"flixel.graphics.frames.FlxAtlasFrames.findFrame","flixel/graphics/frames/FlxAtlasFrames.hx",395,0x501ecb67)
namespace flixel{
namespace graphics{
namespace frames{

void FlxAtlasFrames_obj::__construct( ::flixel::graphics::FlxGraphic parent, ::flixel::math::FlxPoint border){
            	HX_STACKFRAME(&_hx_pos_d294561f5bda5770_28_new)
HXDLIN(  28)		super::__construct(parent,::flixel::graphics::frames::FlxFrameCollectionType_obj::ATLAS_dyn(),border);
            	}

Dynamic FlxAtlasFrames_obj::__CreateEmpty() { return new FlxAtlasFrames_obj; }

void *FlxAtlasFrames_obj::_hx_vtable = 0;

Dynamic FlxAtlasFrames_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxAtlasFrames_obj > _hx_result = new FlxAtlasFrames_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool FlxAtlasFrames_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1ee6bdec) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1ee6bdec;
	} else {
		return inClassId==(int)0x7907b929;
	}
}

 ::flixel::graphics::frames::FlxFramesCollection FlxAtlasFrames_obj::addBorder( ::flixel::math::FlxPoint border){
            	HX_GC_STACKFRAME(&_hx_pos_d294561f5bda5770_409_addBorder)
HXLINE( 410)		 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 410)		point->_inPool = false;
HXDLIN( 410)		 ::flixel::math::FlxPoint point1 = point;
HXDLIN( 410)		point1->_weak = true;
HXDLIN( 410)		 ::flixel::math::FlxPoint resultBorder = point1->addPoint(this->border)->addPoint(border);
HXLINE( 411)		 ::flixel::graphics::frames::FlxAtlasFrames atlasFrames = ::flixel::graphics::frames::FlxAtlasFrames_obj::findFrame(this->parent,resultBorder);
HXLINE( 412)		if (::hx::IsNotNull( atlasFrames )) {
HXLINE( 413)			return atlasFrames;
            		}
HXLINE( 415)		atlasFrames =  ::flixel::graphics::frames::FlxAtlasFrames_obj::__alloc( HX_CTX ,this->parent,resultBorder);
HXLINE( 417)		{
HXLINE( 417)			int _g = 0;
HXDLIN( 417)			::Array< ::Dynamic> _g1 = this->frames;
HXDLIN( 417)			while((_g < _g1->length)){
HXLINE( 417)				 ::flixel::graphics::frames::FlxFrame frame = _g1->__get(_g).StaticCast<  ::flixel::graphics::frames::FlxFrame >();
HXDLIN( 417)				_g = (_g + 1);
HXLINE( 418)				atlasFrames->pushFrame(frame->setBorderTo(border,null()));
            			}
            		}
HXLINE( 420)		return atlasFrames;
            	}


 ::flixel::graphics::frames::FlxAtlasFrames FlxAtlasFrames_obj::fromTexturePackerJson( ::Dynamic Source, ::Dynamic Description){
            	HX_GC_STACKFRAME(&_hx_pos_d294561f5bda5770_42_fromTexturePackerJson)
HXLINE(  43)		 ::flixel::graphics::FlxGraphic graphic = ::flixel::FlxG_obj::bitmap->add(Source,false,null());
HXLINE(  44)		if (::hx::IsNull( graphic )) {
HXLINE(  45)			return null();
            		}
HXLINE(  48)		 ::flixel::graphics::frames::FlxAtlasFrames frames = ::flixel::graphics::frames::FlxAtlasFrames_obj::findFrame(graphic,null());
HXLINE(  49)		if (::hx::IsNotNull( frames )) {
HXLINE(  50)			return frames;
            		}
HXLINE(  52)		bool _hx_tmp;
HXDLIN(  52)		if (::hx::IsNotNull( graphic )) {
HXLINE(  52)			_hx_tmp = ::hx::IsNull( Description );
            		}
            		else {
HXLINE(  52)			_hx_tmp = true;
            		}
HXDLIN(  52)		if (_hx_tmp) {
HXLINE(  53)			return null();
            		}
HXLINE(  55)		frames =  ::flixel::graphics::frames::FlxAtlasFrames_obj::__alloc( HX_CTX ,graphic,null());
HXLINE(  57)		 ::Dynamic data;
HXLINE(  59)		if (::Std_obj::isOfType(Description,::hx::ClassOf< ::String >())) {
HXLINE(  61)			::String json = ( (::String)(Description) );
HXLINE(  63)			if (::openfl::utils::Assets_obj::exists(json,null())) {
HXLINE(  64)				json = ::openfl::utils::Assets_obj::getText(json);
            			}
HXLINE(  66)			data =  ::haxe::format::JsonParser_obj::__alloc( HX_CTX ,json)->doParse();
            		}
            		else {
HXLINE(  70)			data = Description;
            		}
HXLINE(  74)		if (::Std_obj::isOfType( ::Dynamic(data->__Field(HX_("frames",a6,af,85,ac),::hx::paccDynamic)),::hx::ArrayBase::__mClass)) {
HXLINE(  76)			int _g = 0;
HXDLIN(  76)			::Array< ::Dynamic> _g1 = ::Lambda_obj::array(data->__Field(HX_("frames",a6,af,85,ac),::hx::paccDynamic));
HXDLIN(  76)			while((_g < _g1->length)){
HXLINE(  76)				 ::Dynamic frame = _g1->__get(_g);
HXDLIN(  76)				_g = (_g + 1);
HXLINE(  78)				::flixel::graphics::frames::FlxAtlasFrames_obj::texturePackerHelper(( (::String)(frame->__Field(HX_("filename",c7,2e,6a,77),::hx::paccDynamic)) ),frame,frames);
            			}
            		}
            		else {
HXLINE(  84)			int _g = 0;
HXDLIN(  84)			::Array< ::String > _g1 = ::Reflect_obj::fields( ::Dynamic(data->__Field(HX_("frames",a6,af,85,ac),::hx::paccDynamic)));
HXDLIN(  84)			while((_g < _g1->length)){
HXLINE(  84)				::String frameName = _g1->__get(_g);
HXDLIN(  84)				_g = (_g + 1);
HXLINE(  86)				::flixel::graphics::frames::FlxAtlasFrames_obj::texturePackerHelper(frameName,::Reflect_obj::field( ::Dynamic(data->__Field(HX_("frames",a6,af,85,ac),::hx::paccDynamic)),frameName),frames);
            			}
            		}
HXLINE(  90)		return frames;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxAtlasFrames_obj,fromTexturePackerJson,return )

void FlxAtlasFrames_obj::texturePackerHelper(::String FrameName, ::Dynamic FrameData, ::flixel::graphics::frames::FlxAtlasFrames Frames){
            	HX_STACKFRAME(&_hx_pos_d294561f5bda5770_101_texturePackerHelper)
HXLINE( 102)		bool rotated = ( (bool)(FrameData->__Field(HX_("rotated",a9,49,1d,f1),::hx::paccDynamic)) );
HXLINE( 103)		::String name = FrameName;
HXLINE( 104)		Float X = ( (Float)( ::Dynamic(FrameData->__Field(HX_("sourceSize",3c,87,b7,74),::hx::paccDynamic))->__Field(HX_("w",77,00,00,00),::hx::paccDynamic)) );
HXDLIN( 104)		Float Y = ( (Float)( ::Dynamic(FrameData->__Field(HX_("sourceSize",3c,87,b7,74),::hx::paccDynamic))->__Field(HX_("h",68,00,00,00),::hx::paccDynamic)) );
HXDLIN( 104)		 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y);
HXDLIN( 104)		point->_inPool = false;
HXDLIN( 104)		 ::flixel::math::FlxPoint sourceSize = point;
HXLINE( 105)		Float X1 = ( (Float)( ::Dynamic(FrameData->__Field(HX_("spriteSourceSize",a1,7f,c1,03),::hx::paccDynamic))->__Field(HX_("x",78,00,00,00),::hx::paccDynamic)) );
HXDLIN( 105)		Float Y1 = ( (Float)( ::Dynamic(FrameData->__Field(HX_("spriteSourceSize",a1,7f,c1,03),::hx::paccDynamic))->__Field(HX_("y",79,00,00,00),::hx::paccDynamic)) );
HXDLIN( 105)		 ::flixel::math::FlxPoint point1 = ::flixel::math::FlxPoint_obj::_pool->get()->set(X1,Y1);
HXDLIN( 105)		point1->_inPool = false;
HXDLIN( 105)		 ::flixel::math::FlxPoint offset = point1;
HXLINE( 106)		int angle = 0;
HXLINE( 107)		 ::flixel::math::FlxRect frameRect = null();
HXLINE( 109)		if (rotated) {
HXLINE( 111)			Float X = ( (Float)( ::Dynamic(FrameData->__Field(HX_("frame",2d,78,83,06),::hx::paccDynamic))->__Field(HX_("x",78,00,00,00),::hx::paccDynamic)) );
HXDLIN( 111)			Float Y = ( (Float)( ::Dynamic(FrameData->__Field(HX_("frame",2d,78,83,06),::hx::paccDynamic))->__Field(HX_("y",79,00,00,00),::hx::paccDynamic)) );
HXDLIN( 111)			Float Width = ( (Float)( ::Dynamic(FrameData->__Field(HX_("frame",2d,78,83,06),::hx::paccDynamic))->__Field(HX_("h",68,00,00,00),::hx::paccDynamic)) );
HXDLIN( 111)			Float Height = ( (Float)( ::Dynamic(FrameData->__Field(HX_("frame",2d,78,83,06),::hx::paccDynamic))->__Field(HX_("w",77,00,00,00),::hx::paccDynamic)) );
HXDLIN( 111)			 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN( 111)			_this->x = X;
HXDLIN( 111)			_this->y = Y;
HXDLIN( 111)			_this->width = Width;
HXDLIN( 111)			_this->height = Height;
HXDLIN( 111)			 ::flixel::math::FlxRect rect = _this;
HXDLIN( 111)			rect->_inPool = false;
HXDLIN( 111)			frameRect = rect;
HXLINE( 112)			angle = -90;
            		}
            		else {
HXLINE( 116)			Float X = ( (Float)( ::Dynamic(FrameData->__Field(HX_("frame",2d,78,83,06),::hx::paccDynamic))->__Field(HX_("x",78,00,00,00),::hx::paccDynamic)) );
HXDLIN( 116)			Float Y = ( (Float)( ::Dynamic(FrameData->__Field(HX_("frame",2d,78,83,06),::hx::paccDynamic))->__Field(HX_("y",79,00,00,00),::hx::paccDynamic)) );
HXDLIN( 116)			Float Width = ( (Float)( ::Dynamic(FrameData->__Field(HX_("frame",2d,78,83,06),::hx::paccDynamic))->__Field(HX_("w",77,00,00,00),::hx::paccDynamic)) );
HXDLIN( 116)			Float Height = ( (Float)( ::Dynamic(FrameData->__Field(HX_("frame",2d,78,83,06),::hx::paccDynamic))->__Field(HX_("h",68,00,00,00),::hx::paccDynamic)) );
HXDLIN( 116)			 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN( 116)			_this->x = X;
HXDLIN( 116)			_this->y = Y;
HXDLIN( 116)			_this->width = Width;
HXDLIN( 116)			_this->height = Height;
HXDLIN( 116)			 ::flixel::math::FlxRect rect = _this;
HXDLIN( 116)			rect->_inPool = false;
HXDLIN( 116)			frameRect = rect;
            		}
HXLINE( 119)		Frames->addAtlasFrame(frameRect,sourceSize,offset,name,angle,null(),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxAtlasFrames_obj,texturePackerHelper,(void))

 ::flixel::graphics::frames::FlxAtlasFrames FlxAtlasFrames_obj::fromLibGdx( ::Dynamic source,::String description){
            	HX_GC_STACKFRAME(&_hx_pos_d294561f5bda5770_132_fromLibGdx)
HXLINE( 133)		 ::flixel::graphics::FlxGraphic graphic = ::flixel::FlxG_obj::bitmap->add(source,null(),null());
HXLINE( 134)		if (::hx::IsNull( graphic )) {
HXLINE( 135)			return null();
            		}
HXLINE( 138)		 ::flixel::graphics::frames::FlxAtlasFrames frames = ::flixel::graphics::frames::FlxAtlasFrames_obj::findFrame(graphic,null());
HXLINE( 139)		if (::hx::IsNotNull( frames )) {
HXLINE( 140)			return frames;
            		}
HXLINE( 142)		bool _hx_tmp;
HXDLIN( 142)		if (::hx::IsNotNull( graphic )) {
HXLINE( 142)			_hx_tmp = ::hx::IsNull( description );
            		}
            		else {
HXLINE( 142)			_hx_tmp = true;
            		}
HXDLIN( 142)		if (_hx_tmp) {
HXLINE( 143)			return null();
            		}
HXLINE( 145)		frames =  ::flixel::graphics::frames::FlxAtlasFrames_obj::__alloc( HX_CTX ,graphic,null());
HXLINE( 147)		if (::openfl::utils::Assets_obj::exists(description,null())) {
HXLINE( 148)			description = ::openfl::utils::Assets_obj::getText(description);
            		}
HXLINE( 150)		::String pack = ::StringTools_obj::trim(description);
HXLINE( 151)		::Array< ::String > lines = pack.split(HX_("\n",0a,00,00,00));
HXLINE( 154)		int repeatLine;
HXDLIN( 154)		if ((lines->__get(3).indexOf(HX_("repeat:",7f,d8,87,a6),null()) > -1)) {
HXLINE( 154)			repeatLine = 3;
            		}
            		else {
HXLINE( 154)			repeatLine = 4;
            		}
HXLINE( 155)		lines->removeRange(0,(repeatLine + 1));
HXLINE( 157)		int numElementsPerImage = 7;
HXLINE( 158)		int numImages = ::Std_obj::_hx_int((( (Float)(lines->length) ) / ( (Float)(numElementsPerImage) )));
HXLINE( 160)		{
HXLINE( 160)			int _g = 0;
HXDLIN( 160)			int _g1 = numImages;
HXDLIN( 160)			while((_g < _g1)){
HXLINE( 160)				_g = (_g + 1);
HXDLIN( 160)				int i = (_g - 1);
HXLINE( 162)				int curIndex = (i * numElementsPerImage);
HXLINE( 164)				curIndex = (curIndex + 1);
HXDLIN( 164)				::String name = lines->__get((curIndex - 1));
HXLINE( 165)				curIndex = (curIndex + 1);
HXDLIN( 165)				bool rotated = (lines->__get((curIndex - 1)).indexOf(HX_("true",4e,a7,03,4d),null()) >= 0);
HXLINE( 166)				int angle;
HXDLIN( 166)				if (rotated) {
HXLINE( 166)					angle = 90;
            				}
            				else {
HXLINE( 166)					angle = 0;
            				}
HXLINE( 168)				curIndex = (curIndex + 1);
HXDLIN( 168)				::String tempString = lines->__get((curIndex - 1));
HXLINE( 169)				 ::Dynamic size = ::flixel::graphics::frames::FlxAtlasFrames_obj::getDimensions(tempString);
HXLINE( 171)				int imageX = ( (int)(size->__Field(HX_("x",78,00,00,00),::hx::paccDynamic)) );
HXLINE( 172)				int imageY = ( (int)(size->__Field(HX_("y",79,00,00,00),::hx::paccDynamic)) );
HXLINE( 174)				curIndex = (curIndex + 1);
HXDLIN( 174)				tempString = lines->__get((curIndex - 1));
HXLINE( 175)				size = ::flixel::graphics::frames::FlxAtlasFrames_obj::getDimensions(tempString);
HXLINE( 177)				int imageWidth = ( (int)(size->__Field(HX_("x",78,00,00,00),::hx::paccDynamic)) );
HXLINE( 178)				int imageHeight = ( (int)(size->__Field(HX_("y",79,00,00,00),::hx::paccDynamic)) );
HXLINE( 180)				 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN( 180)				_this->x = ( (Float)(imageX) );
HXDLIN( 180)				_this->y = ( (Float)(imageY) );
HXDLIN( 180)				_this->width = ( (Float)(imageWidth) );
HXDLIN( 180)				_this->height = ( (Float)(imageHeight) );
HXDLIN( 180)				 ::flixel::math::FlxRect rect = _this;
HXDLIN( 180)				rect->_inPool = false;
HXDLIN( 180)				 ::flixel::math::FlxRect rect1 = rect;
HXLINE( 182)				curIndex = (curIndex + 1);
HXDLIN( 182)				tempString = lines->__get((curIndex - 1));
HXLINE( 183)				size = ::flixel::graphics::frames::FlxAtlasFrames_obj::getDimensions(tempString);
HXLINE( 185)				Float X = ( (Float)(size->__Field(HX_("x",78,00,00,00),::hx::paccDynamic)) );
HXDLIN( 185)				Float Y = ( (Float)(size->__Field(HX_("y",79,00,00,00),::hx::paccDynamic)) );
HXDLIN( 185)				 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y);
HXDLIN( 185)				point->_inPool = false;
HXDLIN( 185)				 ::flixel::math::FlxPoint sourceSize = point;
HXLINE( 187)				curIndex = (curIndex + 1);
HXDLIN( 187)				tempString = lines->__get((curIndex - 1));
HXLINE( 188)				size = ::flixel::graphics::frames::FlxAtlasFrames_obj::getDimensions(tempString);
HXLINE( 190)				curIndex = (curIndex + 1);
HXDLIN( 190)				tempString = lines->__get((curIndex - 1));
HXLINE( 191)				 ::Dynamic index = ::Std_obj::parseInt(tempString.split(HX_(":",3a,00,00,00))->__get(1));
HXLINE( 193)				if (::hx::IsNotEq( index,-1 )) {
HXLINE( 194)					name = (name + (HX_("_",5f,00,00,00) + index));
            				}
HXLINE( 200)				Float X1 = ( (Float)(size->__Field(HX_("x",78,00,00,00),::hx::paccDynamic)) );
HXDLIN( 200)				Float Y1 = ((sourceSize->y - ( (Float)(size->__Field(HX_("y",79,00,00,00),::hx::paccDynamic)) )) - ( (Float)(imageHeight) ));
HXDLIN( 200)				 ::flixel::math::FlxPoint point1 = ::flixel::math::FlxPoint_obj::_pool->get()->set(X1,Y1);
HXDLIN( 200)				point1->_inPool = false;
HXDLIN( 200)				 ::flixel::math::FlxPoint offset = point1;
HXLINE( 201)				frames->addAtlasFrame(rect1,sourceSize,offset,name,angle,null(),null());
            			}
            		}
HXLINE( 204)		return frames;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxAtlasFrames_obj,fromLibGdx,return )

 ::Dynamic FlxAtlasFrames_obj::getDimensions(::String line){
            	HX_STACKFRAME(&_hx_pos_d294561f5bda5770_211_getDimensions)
HXLINE( 212)		int colonPosition = line.indexOf(HX_(":",3a,00,00,00),null());
HXLINE( 213)		int comaPosition = line.indexOf(HX_(",",2c,00,00,00),null());
HXLINE( 216)		 ::Dynamic _hx_tmp = ::Std_obj::parseInt(line.substring((colonPosition + 1),comaPosition));
HXLINE( 215)		return  ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("x",78,00,00,00),_hx_tmp)
            			->setFixed(1,HX_("y",79,00,00,00),::Std_obj::parseInt(line.substring((comaPosition + 1),line.length))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxAtlasFrames_obj,getDimensions,return )

 ::flixel::graphics::frames::FlxAtlasFrames FlxAtlasFrames_obj::fromSparrow( ::Dynamic Source,::String Description){
            	HX_GC_STACKFRAME(&_hx_pos_d294561f5bda5770_232_fromSparrow)
HXLINE( 233)		 ::flixel::graphics::FlxGraphic graphic = ::flixel::FlxG_obj::bitmap->add(Source,null(),null());
HXLINE( 234)		if (::hx::IsNull( graphic )) {
HXLINE( 235)			return null();
            		}
HXLINE( 238)		 ::flixel::graphics::frames::FlxAtlasFrames frames = ::flixel::graphics::frames::FlxAtlasFrames_obj::findFrame(graphic,null());
HXLINE( 239)		if (::hx::IsNotNull( frames )) {
HXLINE( 240)			return frames;
            		}
HXLINE( 242)		bool _hx_tmp;
HXDLIN( 242)		if (::hx::IsNotNull( graphic )) {
HXLINE( 242)			_hx_tmp = ::hx::IsNull( Description );
            		}
            		else {
HXLINE( 242)			_hx_tmp = true;
            		}
HXDLIN( 242)		if (_hx_tmp) {
HXLINE( 243)			return null();
            		}
HXLINE( 245)		frames =  ::flixel::graphics::frames::FlxAtlasFrames_obj::__alloc( HX_CTX ,graphic,null());
HXLINE( 247)		if (::openfl::utils::Assets_obj::exists(Description,null())) {
HXLINE( 248)			Description = ::openfl::utils::Assets_obj::getText(Description);
            		}
HXLINE( 250)		 ::Xml x = ::Xml_obj::parse(Description)->firstElement();
HXDLIN( 250)		bool _hx_tmp1;
HXDLIN( 250)		if ((x->nodeType != ::Xml_obj::Document)) {
HXLINE( 250)			_hx_tmp1 = (x->nodeType != ::Xml_obj::Element);
            		}
            		else {
HXLINE( 250)			_hx_tmp1 = false;
            		}
HXDLIN( 250)		if (_hx_tmp1) {
HXLINE( 250)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Invalid nodeType ",3b,e0,cb,e1) + ::_Xml::XmlType_Impl__obj::toString(x->nodeType))));
            		}
HXDLIN( 250)		 ::Xml this1 = x;
HXDLIN( 250)		 ::Xml data = this1;
HXLINE( 252)		{
HXLINE( 252)			int _g = 0;
HXDLIN( 252)			::Array< ::Dynamic> _g1 = ::haxe::xml::_Access::NodeListAccess_Impl__obj::resolve(data,HX_("SubTexture",5b,7b,fb,11));
HXDLIN( 252)			while((_g < _g1->length)){
HXLINE( 252)				 ::Xml texture = _g1->__get(_g).StaticCast<  ::Xml >();
HXDLIN( 252)				_g = (_g + 1);
HXLINE( 254)				::String name = ::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(texture,HX_("name",4b,72,ff,48));
HXLINE( 255)				bool trimmed = ::haxe::xml::_Access::HasAttribAccess_Impl__obj::resolve(texture,HX_("frameX",8b,af,85,ac));
HXLINE( 256)				bool rotated;
HXDLIN( 256)				if (::haxe::xml::_Access::HasAttribAccess_Impl__obj::resolve(texture,HX_("rotated",a9,49,1d,f1))) {
HXLINE( 256)					rotated = (::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(texture,HX_("rotated",a9,49,1d,f1)) == HX_("true",4e,a7,03,4d));
            				}
            				else {
HXLINE( 256)					rotated = false;
            				}
HXLINE( 257)				bool flipX;
HXDLIN( 257)				if (::haxe::xml::_Access::HasAttribAccess_Impl__obj::resolve(texture,HX_("flipX",0b,45,92,02))) {
HXLINE( 257)					flipX = (::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(texture,HX_("flipX",0b,45,92,02)) == HX_("true",4e,a7,03,4d));
            				}
            				else {
HXLINE( 257)					flipX = false;
            				}
HXLINE( 258)				bool flipY;
HXDLIN( 258)				if (::haxe::xml::_Access::HasAttribAccess_Impl__obj::resolve(texture,HX_("flipY",0c,45,92,02))) {
HXLINE( 258)					flipY = (::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(texture,HX_("flipY",0c,45,92,02)) == HX_("true",4e,a7,03,4d));
            				}
            				else {
HXLINE( 258)					flipY = false;
            				}
HXLINE( 260)				Float X = ::Std_obj::parseFloat(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(texture,HX_("x",78,00,00,00)));
HXDLIN( 260)				Float Y = ::Std_obj::parseFloat(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(texture,HX_("y",79,00,00,00)));
HXDLIN( 260)				Float Width = ::Std_obj::parseFloat(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(texture,HX_("width",06,b6,62,ca)));
HXDLIN( 260)				Float Height = ::Std_obj::parseFloat(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(texture,HX_("height",e7,07,4c,02)));
HXDLIN( 260)				 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN( 260)				_this->x = X;
HXDLIN( 260)				_this->y = Y;
HXDLIN( 260)				_this->width = Width;
HXDLIN( 260)				_this->height = Height;
HXDLIN( 260)				 ::flixel::math::FlxRect rect = _this;
HXDLIN( 260)				rect->_inPool = false;
HXDLIN( 260)				 ::flixel::math::FlxRect rect1 = rect;
HXLINE( 263)				 ::openfl::geom::Rectangle size;
HXDLIN( 263)				if (trimmed) {
HXLINE( 265)					 ::Dynamic size1 = ::Std_obj::parseInt(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(texture,HX_("frameX",8b,af,85,ac)));
HXDLIN( 265)					 ::Dynamic size2 = ::Std_obj::parseInt(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(texture,HX_("frameY",8c,af,85,ac)));
HXDLIN( 265)					 ::Dynamic size3 = ::Std_obj::parseInt(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(texture,HX_("frameWidth",99,ea,88,ad)));
HXLINE( 263)					size =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,size1,size2,size3,::Std_obj::parseInt(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(texture,HX_("frameHeight",f4,d3,93,e0))));
            				}
            				else {
HXLINE( 263)					size =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,0,0,rect1->width,rect1->height);
            				}
HXLINE( 273)				int angle;
HXDLIN( 273)				if (rotated) {
HXLINE( 273)					angle = -90;
            				}
            				else {
HXLINE( 273)					angle = 0;
            				}
HXLINE( 275)				Float X1 = -(size->get_left());
HXDLIN( 275)				Float Y1 = -(size->get_top());
HXDLIN( 275)				 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X1,Y1);
HXDLIN( 275)				point->_inPool = false;
HXDLIN( 275)				 ::flixel::math::FlxPoint offset = point;
HXLINE( 276)				Float X2 = size->width;
HXDLIN( 276)				Float Y2 = size->height;
HXDLIN( 276)				 ::flixel::math::FlxPoint point1 = ::flixel::math::FlxPoint_obj::_pool->get()->set(X2,Y2);
HXDLIN( 276)				point1->_inPool = false;
HXDLIN( 276)				 ::flixel::math::FlxPoint sourceSize = point1;
HXLINE( 278)				bool _hx_tmp;
HXDLIN( 278)				if (rotated) {
HXLINE( 278)					_hx_tmp = !(trimmed);
            				}
            				else {
HXLINE( 278)					_hx_tmp = false;
            				}
HXDLIN( 278)				if (_hx_tmp) {
HXLINE( 279)					sourceSize->set(size->height,size->width);
            				}
HXLINE( 281)				frames->addAtlasFrame(rect1,sourceSize,offset,name,angle,flipX,flipY);
            			}
            		}
HXLINE( 284)		return frames;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxAtlasFrames_obj,fromSparrow,return )

 ::flixel::graphics::frames::FlxAtlasFrames FlxAtlasFrames_obj::fromTexturePackerXml( ::Dynamic Source,::String Description){
            	HX_GC_STACKFRAME(&_hx_pos_d294561f5bda5770_297_fromTexturePackerXml)
HXLINE( 298)		 ::flixel::graphics::FlxGraphic graphic = ::flixel::FlxG_obj::bitmap->add(Source,false,null());
HXLINE( 299)		if (::hx::IsNull( graphic )) {
HXLINE( 300)			return null();
            		}
HXLINE( 303)		 ::flixel::graphics::frames::FlxAtlasFrames frames = ::flixel::graphics::frames::FlxAtlasFrames_obj::findFrame(graphic,null());
HXLINE( 304)		if (::hx::IsNotNull( frames )) {
HXLINE( 305)			return frames;
            		}
HXLINE( 307)		bool _hx_tmp;
HXDLIN( 307)		if (::hx::IsNotNull( graphic )) {
HXLINE( 307)			_hx_tmp = ::hx::IsNull( Description );
            		}
            		else {
HXLINE( 307)			_hx_tmp = true;
            		}
HXDLIN( 307)		if (_hx_tmp) {
HXLINE( 308)			return null();
            		}
HXLINE( 310)		frames =  ::flixel::graphics::frames::FlxAtlasFrames_obj::__alloc( HX_CTX ,graphic,null());
HXLINE( 312)		if (::openfl::utils::Assets_obj::exists(Description,null())) {
HXLINE( 313)			Description = ::openfl::utils::Assets_obj::getText(Description);
            		}
HXLINE( 315)		 ::Xml xml = ::Xml_obj::parse(Description);
HXLINE( 317)		{
HXLINE( 317)			 ::Dynamic sprite = xml->firstElement()->elements();
HXDLIN( 317)			while(( (bool)(sprite->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 317)				 ::Xml sprite1 = ( ( ::Xml)(sprite->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 319)				bool trimmed;
HXDLIN( 319)				if (!(sprite1->exists(HX_("oX",09,61,00,00)))) {
HXLINE( 319)					trimmed = sprite1->exists(HX_("oY",0a,61,00,00));
            				}
            				else {
HXLINE( 319)					trimmed = true;
            				}
HXLINE( 320)				bool rotated;
HXDLIN( 320)				if (sprite1->exists(HX_("r",72,00,00,00))) {
HXLINE( 320)					rotated = (sprite1->get(HX_("r",72,00,00,00)) == HX_("y",79,00,00,00));
            				}
            				else {
HXLINE( 320)					rotated = false;
            				}
HXLINE( 321)				int angle;
HXDLIN( 321)				if (rotated) {
HXLINE( 321)					angle = -90;
            				}
            				else {
HXLINE( 321)					angle = 0;
            				}
HXLINE( 322)				::String name = sprite1->get(HX_("n",6e,00,00,00));
HXLINE( 323)				 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(0,0);
HXDLIN( 323)				point->_inPool = false;
HXDLIN( 323)				 ::flixel::math::FlxPoint offset = point;
HXLINE( 324)				Float X = ( (Float)(::Std_obj::parseInt(sprite1->get(HX_("x",78,00,00,00)))) );
HXDLIN( 324)				Float Y = ( (Float)(::Std_obj::parseInt(sprite1->get(HX_("y",79,00,00,00)))) );
HXDLIN( 324)				Float Width = ( (Float)(::Std_obj::parseInt(sprite1->get(HX_("w",77,00,00,00)))) );
HXDLIN( 324)				Float Height = ( (Float)(::Std_obj::parseInt(sprite1->get(HX_("h",68,00,00,00)))) );
HXDLIN( 324)				 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN( 324)				_this->x = X;
HXDLIN( 324)				_this->y = Y;
HXDLIN( 324)				_this->width = Width;
HXDLIN( 324)				_this->height = Height;
HXDLIN( 324)				 ::flixel::math::FlxRect rect = _this;
HXDLIN( 324)				rect->_inPool = false;
HXDLIN( 324)				 ::flixel::math::FlxRect rect1 = rect;
HXLINE( 325)				Float X1 = rect1->width;
HXDLIN( 325)				Float Y1 = rect1->height;
HXDLIN( 325)				 ::flixel::math::FlxPoint point1 = ::flixel::math::FlxPoint_obj::_pool->get()->set(X1,Y1);
HXDLIN( 325)				point1->_inPool = false;
HXDLIN( 325)				 ::flixel::math::FlxPoint sourceSize = point1;
HXLINE( 327)				if (trimmed) {
HXLINE( 329)					 ::Dynamic _hx_tmp = ::Std_obj::parseInt(sprite1->get(HX_("oX",09,61,00,00)));
HXDLIN( 329)					offset->set(_hx_tmp,::Std_obj::parseInt(sprite1->get(HX_("oY",0a,61,00,00))));
HXLINE( 330)					 ::Dynamic _hx_tmp1 = ::Std_obj::parseInt(sprite1->get(HX_("oW",08,61,00,00)));
HXDLIN( 330)					sourceSize->set(_hx_tmp1,::Std_obj::parseInt(sprite1->get(HX_("oH",f9,60,00,00))));
            				}
HXLINE( 333)				frames->addAtlasFrame(rect1,sourceSize,offset,name,angle,null(),null());
            			}
            		}
HXLINE( 336)		return frames;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxAtlasFrames_obj,fromTexturePackerXml,return )

 ::flixel::graphics::frames::FlxAtlasFrames FlxAtlasFrames_obj::fromSpriteSheetPacker( ::Dynamic Source,::String Description){
            	HX_GC_STACKFRAME(&_hx_pos_d294561f5bda5770_349_fromSpriteSheetPacker)
HXLINE( 350)		 ::flixel::graphics::FlxGraphic graphic = ::flixel::FlxG_obj::bitmap->add(Source,null(),null());
HXLINE( 351)		if (::hx::IsNull( graphic )) {
HXLINE( 352)			return null();
            		}
HXLINE( 355)		 ::flixel::graphics::frames::FlxAtlasFrames frames = ::flixel::graphics::frames::FlxAtlasFrames_obj::findFrame(graphic,null());
HXLINE( 356)		if (::hx::IsNotNull( frames )) {
HXLINE( 357)			return frames;
            		}
HXLINE( 359)		bool _hx_tmp;
HXDLIN( 359)		if (::hx::IsNotNull( graphic )) {
HXLINE( 359)			_hx_tmp = ::hx::IsNull( Description );
            		}
            		else {
HXLINE( 359)			_hx_tmp = true;
            		}
HXDLIN( 359)		if (_hx_tmp) {
HXLINE( 360)			return null();
            		}
HXLINE( 362)		frames =  ::flixel::graphics::frames::FlxAtlasFrames_obj::__alloc( HX_CTX ,graphic,null());
HXLINE( 364)		if (::openfl::utils::Assets_obj::exists(Description,null())) {
HXLINE( 365)			Description = ::openfl::utils::Assets_obj::getText(Description);
            		}
HXLINE( 367)		::String pack = ::StringTools_obj::trim(Description);
HXLINE( 368)		::Array< ::String > lines = pack.split(HX_("\n",0a,00,00,00));
HXLINE( 370)		{
HXLINE( 370)			int _g = 0;
HXDLIN( 370)			int _g1 = lines->length;
HXDLIN( 370)			while((_g < _g1)){
HXLINE( 370)				_g = (_g + 1);
HXDLIN( 370)				int i = (_g - 1);
HXLINE( 372)				::Array< ::String > currImageData = lines->__get(i).split(HX_("=",3d,00,00,00));
HXLINE( 373)				::String name = ::StringTools_obj::trim(currImageData->__get(0));
HXLINE( 374)				::Array< ::String > currImageRegion = ::StringTools_obj::trim(currImageData->__get(1)).split(HX_(" ",20,00,00,00));
HXLINE( 376)				Float X = ( (Float)(::Std_obj::parseInt(currImageRegion->__get(0))) );
HXDLIN( 376)				Float Y = ( (Float)(::Std_obj::parseInt(currImageRegion->__get(1))) );
HXDLIN( 376)				Float Width = ( (Float)(::Std_obj::parseInt(currImageRegion->__get(2))) );
HXDLIN( 376)				Float Height = ( (Float)(::Std_obj::parseInt(currImageRegion->__get(3))) );
HXDLIN( 376)				 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN( 376)				_this->x = X;
HXDLIN( 376)				_this->y = Y;
HXDLIN( 376)				_this->width = Width;
HXDLIN( 376)				_this->height = Height;
HXDLIN( 376)				 ::flixel::math::FlxRect rect = _this;
HXDLIN( 376)				rect->_inPool = false;
HXDLIN( 376)				 ::flixel::math::FlxRect rect1 = rect;
HXLINE( 378)				Float X1 = rect1->width;
HXDLIN( 378)				Float Y1 = rect1->height;
HXDLIN( 378)				 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X1,Y1);
HXDLIN( 378)				point->_inPool = false;
HXDLIN( 378)				 ::flixel::math::FlxPoint sourceSize = point;
HXLINE( 379)				 ::flixel::math::FlxPoint point1 = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 379)				point1->_inPool = false;
HXDLIN( 379)				 ::flixel::math::FlxPoint offset = point1;
HXLINE( 381)				frames->addAtlasFrame(rect1,sourceSize,offset,name,0,null(),null());
            			}
            		}
HXLINE( 384)		return frames;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxAtlasFrames_obj,fromSpriteSheetPacker,return )

 ::flixel::graphics::frames::FlxAtlasFrames FlxAtlasFrames_obj::findFrame( ::flixel::graphics::FlxGraphic graphic, ::flixel::math::FlxPoint border){
            	HX_STACKFRAME(&_hx_pos_d294561f5bda5770_395_findFrame)
HXLINE( 396)		if (::hx::IsNull( border )) {
HXLINE( 397)			 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 397)			point->_inPool = false;
HXDLIN( 397)			 ::flixel::math::FlxPoint point1 = point;
HXDLIN( 397)			point1->_weak = true;
HXDLIN( 397)			border = point1;
            		}
HXLINE( 399)		 ::flixel::graphics::frames::FlxFrameCollectionType type = ::flixel::graphics::frames::FlxFrameCollectionType_obj::ATLAS_dyn();
HXDLIN( 399)		::cpp::VirtualArray collections = ( (::cpp::VirtualArray)(graphic->frameCollections->get(type)) );
HXDLIN( 399)		if (::hx::IsNull( collections )) {
HXLINE( 399)			collections = ::Array_obj< ::Dynamic>::__new();
HXDLIN( 399)			graphic->frameCollections->set(type,collections);
            		}
HXDLIN( 399)		::Array< ::Dynamic> atlasFrames = collections;
HXLINE( 401)		{
HXLINE( 401)			int _g = 0;
HXDLIN( 401)			while((_g < atlasFrames->length)){
HXLINE( 401)				 ::flixel::graphics::frames::FlxAtlasFrames atlas = atlasFrames->__get(_g).StaticCast<  ::flixel::graphics::frames::FlxAtlasFrames >();
HXDLIN( 401)				_g = (_g + 1);
HXLINE( 402)				 ::flixel::math::FlxPoint _this = atlas->border;
HXDLIN( 402)				bool result;
HXDLIN( 402)				if ((::Math_obj::abs((_this->x - border->x)) <= ((Float)0.0000001))) {
HXLINE( 402)					result = (::Math_obj::abs((_this->y - border->y)) <= ((Float)0.0000001));
            				}
            				else {
HXLINE( 402)					result = false;
            				}
HXDLIN( 402)				if (border->_weak) {
HXLINE( 402)					border->put();
            				}
HXDLIN( 402)				if (result) {
HXLINE( 403)					return atlas;
            				}
            			}
            		}
HXLINE( 405)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxAtlasFrames_obj,findFrame,return )


::hx::ObjectPtr< FlxAtlasFrames_obj > FlxAtlasFrames_obj::__new( ::flixel::graphics::FlxGraphic parent, ::flixel::math::FlxPoint border) {
	::hx::ObjectPtr< FlxAtlasFrames_obj > __this = new FlxAtlasFrames_obj();
	__this->__construct(parent,border);
	return __this;
}

::hx::ObjectPtr< FlxAtlasFrames_obj > FlxAtlasFrames_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::graphics::FlxGraphic parent, ::flixel::math::FlxPoint border) {
	FlxAtlasFrames_obj *__this = (FlxAtlasFrames_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxAtlasFrames_obj), true, "flixel.graphics.frames.FlxAtlasFrames"));
	*(void **)__this = FlxAtlasFrames_obj::_hx_vtable;
	__this->__construct(parent,border);
	return __this;
}

FlxAtlasFrames_obj::FlxAtlasFrames_obj()
{
}

::hx::Val FlxAtlasFrames_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"addBorder") ) { return ::hx::Val( addBorder_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxAtlasFrames_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"findFrame") ) { outValue = findFrame_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromLibGdx") ) { outValue = fromLibGdx_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fromSparrow") ) { outValue = fromSparrow_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getDimensions") ) { outValue = getDimensions_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"texturePackerHelper") ) { outValue = texturePackerHelper_dyn(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"fromTexturePackerXml") ) { outValue = fromTexturePackerXml_dyn(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"fromTexturePackerJson") ) { outValue = fromTexturePackerJson_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"fromSpriteSheetPacker") ) { outValue = fromSpriteSheetPacker_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FlxAtlasFrames_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *FlxAtlasFrames_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxAtlasFrames_obj_sMemberFields[] = {
	HX_("addBorder",ed,81,3e,1c),
	::String(null()) };

::hx::Class FlxAtlasFrames_obj::__mClass;

static ::String FlxAtlasFrames_obj_sStaticFields[] = {
	HX_("fromTexturePackerJson",bf,f0,7e,be),
	HX_("texturePackerHelper",0f,23,bd,b2),
	HX_("fromLibGdx",80,06,df,27),
	HX_("getDimensions",83,1a,12,39),
	HX_("fromSparrow",c2,9f,ec,33),
	HX_("fromTexturePackerXml",20,df,27,fb),
	HX_("fromSpriteSheetPacker",b6,b2,c0,5f),
	HX_("findFrame",34,a9,7a,f5),
	::String(null())
};

void FlxAtlasFrames_obj::__register()
{
	FlxAtlasFrames_obj _hx_dummy;
	FlxAtlasFrames_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.graphics.frames.FlxAtlasFrames",d6,87,d5,6f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxAtlasFrames_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxAtlasFrames_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxAtlasFrames_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxAtlasFrames_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxAtlasFrames_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxAtlasFrames_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace graphics
} // end namespace frames
