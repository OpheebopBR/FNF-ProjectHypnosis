#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimation
#include <flixel/animation/FlxAnimation.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxBaseAnimation
#include <flixel/animation/FlxBaseAnimation.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrame
#include <flixel/graphics/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxImageFrame
#include <flixel/graphics/frames/FlxImageFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxTileFrames
#include <flixel/graphics/frames/FlxTileFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxGraphicsShader
#include <flixel/graphics/tile/FlxGraphicsShader.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMatrix
#include <flixel/math/FlxMatrix.h>
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
#ifndef INCLUDED_flixel_util_FlxBitmapDataUtil
#include <flixel/util/FlxBitmapDataUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxColorTransformUtil
#include <flixel/util/FlxColorTransformUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_LabelValuePair
#include <flixel/util/FlxPool_flixel_util_LabelValuePair.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
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
#ifndef INCLUDED_flixel_util_LabelValuePair
#include <flixel/util/LabelValuePair.h>
#endif
#ifndef INCLUDED_flixel_util__FlxColor_FlxColor_Impl_
#include <flixel/util/_FlxColor/FlxColor_Impl_.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsShader
#include <openfl/display/GraphicsShader.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_cfd221447aa7194b_40_new,"flixel.FlxSprite","new",0x4dfa64d7,"flixel.FlxSprite.new","flixel/FlxSprite.hx",40,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_279_initVars,"flixel.FlxSprite","initVars",0x31793705,"flixel.FlxSprite.initVars","flixel/FlxSprite.hx",279,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_307_destroy,"flixel.FlxSprite","destroy",0x0fb5c8f1,"flixel.FlxSprite.destroy","flixel/FlxSprite.hx",307,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_337_clone,"flixel.FlxSprite","clone",0x3c30f394,"flixel.FlxSprite.clone","flixel/FlxSprite.hx",337,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_348_loadGraphicFromSprite,"flixel.FlxSprite","loadGraphicFromSprite",0xd0637b08,"flixel.FlxSprite.loadGraphicFromSprite","flixel/FlxSprite.hx",348,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_385_loadGraphic,"flixel.FlxSprite","loadGraphic",0x47377c99,"flixel.FlxSprite.loadGraphic","flixel/FlxSprite.hx",385,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_428_loadRotatedGraphic,"flixel.FlxSprite","loadRotatedGraphic",0xceb71e2e,"flixel.FlxSprite.loadRotatedGraphic","flixel/FlxSprite.hx",428,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_489_loadRotatedFrame,"flixel.FlxSprite","loadRotatedFrame",0xe0d52e33,"flixel.FlxSprite.loadRotatedFrame","flixel/FlxSprite.hx",489,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_524_makeGraphic,"flixel.FlxSprite","makeGraphic",0xbaa3e5d1,"flixel.FlxSprite.makeGraphic","flixel/FlxSprite.hx",524,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_533_graphicLoaded,"flixel.FlxSprite","graphicLoaded",0xacabf404,"flixel.FlxSprite.graphicLoaded","flixel/FlxSprite.hx",533,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_539_resetSize,"flixel.FlxSprite","resetSize",0x5d8771e7,"flixel.FlxSprite.resetSize","flixel/FlxSprite.hx",539,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_550_resetFrameSize,"flixel.FlxSprite","resetFrameSize",0xb7baa4a8,"flixel.FlxSprite.resetFrameSize","flixel/FlxSprite.hx",550,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_564_resetSizeFromFrame,"flixel.FlxSprite","resetSizeFromFrame",0xf893db7c,"flixel.FlxSprite.resetSizeFromFrame","flixel/FlxSprite.hx",564,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_577_resetFrame,"flixel.FlxSprite","resetFrame",0x02a6a847,"flixel.FlxSprite.resetFrame","flixel/FlxSprite.hx",577,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_588_setGraphicSize,"flixel.FlxSprite","setGraphicSize",0x516eb7f0,"flixel.FlxSprite.setGraphicSize","flixel/FlxSprite.hx",588,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_607_updateHitbox,"flixel.FlxSprite","updateHitbox",0x9470392a,"flixel.FlxSprite.updateHitbox","flixel/FlxSprite.hx",607,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_619_resetHelpers,"flixel.FlxSprite","resetHelpers",0x6fc22ddf,"flixel.FlxSprite.resetHelpers","flixel/FlxSprite.hx",619,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_641_update,"flixel.FlxSprite","update",0xe75bd5f2,"flixel.FlxSprite.update","flixel/FlxSprite.hx",641,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_651_updateAnimation,"flixel.FlxSprite","updateAnimation",0x7e6eaab2,"flixel.FlxSprite.updateAnimation","flixel/FlxSprite.hx",651,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_657_checkEmptyFrame,"flixel.FlxSprite","checkEmptyFrame",0xe3dea03f,"flixel.FlxSprite.checkEmptyFrame","flixel/FlxSprite.hx",657,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_665_draw,"flixel.FlxSprite","draw",0xe68b7fad,"flixel.FlxSprite.draw","flixel/FlxSprite.hx",665,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_699_drawSimple,"flixel.FlxSprite","drawSimple",0x0dc977bf,"flixel.FlxSprite.drawSimple","flixel/FlxSprite.hx",699,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_709_drawComplex,"flixel.FlxSprite","drawComplex",0xcf4c0e03,"flixel.FlxSprite.drawComplex","flixel/FlxSprite.hx",709,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_743_stamp,"flixel.FlxSprite","stamp",0x77d9503a,"flixel.FlxSprite.stamp","flixel/FlxSprite.hx",743,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_790_drawFrame,"flixel.FlxSprite","drawFrame",0x99d67540,"flixel.FlxSprite.drawFrame","flixel/FlxSprite.hx",790,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_811_centerOffsets,"flixel.FlxSprite","centerOffsets",0x583e0f62,"flixel.FlxSprite.centerOffsets","flixel/FlxSprite.hx",811,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_827_centerOrigin,"flixel.FlxSprite","centerOrigin",0x4cbae644,"flixel.FlxSprite.centerOrigin","flixel/FlxSprite.hx",827,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_840_replaceColor,"flixel.FlxSprite","replaceColor",0x7b700138,"flixel.FlxSprite.replaceColor","flixel/FlxSprite.hx",840,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_862_setColorTransform,"flixel.FlxSprite","setColorTransform",0xa09a3582,"flixel.FlxSprite.setColorTransform","flixel/FlxSprite.hx",862,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_874_updateColorTransform,"flixel.FlxSprite","updateColorTransform",0x79f9051b,"flixel.FlxSprite.updateColorTransform","flixel/FlxSprite.hx",874,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_897_pixelsOverlapPoint,"flixel.FlxSprite","pixelsOverlapPoint",0x4c878b7f,"flixel.FlxSprite.pixelsOverlapPoint","flixel/FlxSprite.hx",897,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_928_calcFrame,"flixel.FlxSprite","calcFrame",0xc4d45b0f,"flixel.FlxSprite.calcFrame","flixel/FlxSprite.hx",928,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_941_updateFramePixels,"flixel.FlxSprite","updateFramePixels",0x2cd43e68,"flixel.FlxSprite.updateFramePixels","flixel/FlxSprite.hx",941,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_990_getGraphicMidpoint,"flixel.FlxSprite","getGraphicMidpoint",0xc420be03,"flixel.FlxSprite.getGraphicMidpoint","flixel/FlxSprite.hx",990,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1004_isOnScreen,"flixel.FlxSprite","isOnScreen",0xb5403c5e,"flixel.FlxSprite.isOnScreen","flixel/FlxSprite.hx",1004,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1055_isSimpleRender,"flixel.FlxSprite","isSimpleRender",0x6aa0d51b,"flixel.FlxSprite.isSimpleRender","flixel/FlxSprite.hx",1055,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1071_isSimpleRenderBlit,"flixel.FlxSprite","isSimpleRenderBlit",0x4bf362f0,"flixel.FlxSprite.isSimpleRenderBlit","flixel/FlxSprite.hx",1071,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1089_setFacingFlip,"flixel.FlxSprite","setFacingFlip",0x6816c060,"flixel.FlxSprite.setFacingFlip","flixel/FlxSprite.hx",1089,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1101_setFrames,"flixel.FlxSprite","setFrames",0xd774ec9f,"flixel.FlxSprite.setFrames","flixel/FlxSprite.hx",1101,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1138_get_pixels,"flixel.FlxSprite","get_pixels",0x90b8575f,"flixel.FlxSprite.get_pixels","flixel/FlxSprite.hx",1138,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1143_set_pixels,"flixel.FlxSprite","set_pixels",0x9435f5d3,"flixel.FlxSprite.set_pixels","flixel/FlxSprite.hx",1143,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1162_set_frame,"flixel.FlxSprite","set_frame",0xf8c58847,"flixel.FlxSprite.set_frame","flixel/FlxSprite.hx",1162,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1198_set_facing,"flixel.FlxSprite","set_facing",0xeb9145c0,"flixel.FlxSprite.set_facing","flixel/FlxSprite.hx",1198,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1211_set_alpha,"flixel.FlxSprite","set_alpha",0x13d8b778,"flixel.FlxSprite.set_alpha","flixel/FlxSprite.hx",1211,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1223_set_color,"flixel.FlxSprite","set_color",0x3c9e817d,"flixel.FlxSprite.set_color","flixel/FlxSprite.hx",1223,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1235_set_angle,"flixel.FlxSprite","set_angle",0x152453ed,"flixel.FlxSprite.set_angle","flixel/FlxSprite.hx",1235,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1249_updateTrig,"flixel.FlxSprite","updateTrig",0x193f7fee,"flixel.FlxSprite.updateTrig","flixel/FlxSprite.hx",1249,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1261_set_blend,"flixel.FlxSprite","set_blend",0xa736f86b,"flixel.FlxSprite.set_blend","flixel/FlxSprite.hx",1261,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1270_set_graphic,"flixel.FlxSprite","set_graphic",0x07012542,"flixel.FlxSprite.set_graphic","flixel/FlxSprite.hx",1270,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1288_set_clipRect,"flixel.FlxSprite","set_clipRect",0x60020c3a,"flixel.FlxSprite.set_clipRect","flixel/FlxSprite.hx",1288,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1309_set_frames,"flixel.FlxSprite","set_frames",0xb411b64c,"flixel.FlxSprite.set_frames","flixel/FlxSprite.hx",1309,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1338_set_flipX,"flixel.FlxSprite","set_flipX",0xf4d45525,"flixel.FlxSprite.set_flipX","flixel/FlxSprite.hx",1338,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1349_set_flipY,"flixel.FlxSprite","set_flipY",0xf4d45526,"flixel.FlxSprite.set_flipY","flixel/FlxSprite.hx",1349,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1361_set_antialiasing,"flixel.FlxSprite","set_antialiasing",0xf8f29e1a,"flixel.FlxSprite.set_antialiasing","flixel/FlxSprite.hx",1361,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1367_set_useFramePixels,"flixel.FlxSprite","set_useFramePixels",0x72e62ad9,"flixel.FlxSprite.set_useFramePixels","flixel/FlxSprite.hx",1367,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1391_checkFlipX,"flixel.FlxSprite","checkFlipX",0x26093f8c,"flixel.FlxSprite.checkFlipX","flixel/FlxSprite.hx",1391,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1402_checkFlipY,"flixel.FlxSprite","checkFlipY",0x26093f8d,"flixel.FlxSprite.checkFlipY","flixel/FlxSprite.hx",1402,0x0384bffa)
namespace flixel{

void FlxSprite_obj::__construct( ::Dynamic __o_X, ::Dynamic __o_Y, ::Dynamic SimpleGraphic){
            		 ::Dynamic X = __o_X;
            		if (::hx::IsNull(__o_X)) X = 0;
            		 ::Dynamic Y = __o_Y;
            		if (::hx::IsNull(__o_Y)) Y = 0;
            	HX_GC_STACKFRAME(&_hx_pos_cfd221447aa7194b_40_new)
HXLINE( 257)		this->_facingFlip =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE( 251)		this->_angleChanged = true;
HXLINE( 249)		this->_cosAngle = ((Float)1);
HXLINE( 246)		this->_sinAngle = ((Float)0);
HXLINE( 203)		this->_facingVerticalMult = 1;
HXLINE( 201)		this->_facingHorizontalMult = 1;
HXLINE( 168)		this->useColorTransform = false;
HXLINE( 161)		this->color = 16777215;
HXLINE( 131)		this->flipY = false;
HXLINE( 126)		this->flipX = false;
HXLINE( 121)		this->facing = 16;
HXLINE( 115)		this->alpha = ((Float)1.0);
HXLINE( 110)		this->bakedRotationAngle = ((Float)0);
HXLINE(  97)		this->numFrames = 0;
HXLINE(  91)		this->frameHeight = 0;
HXLINE(  86)		this->frameWidth = 0;
HXLINE(  70)		this->dirty = true;
HXLINE(  64)		this->antialiasing = false;
HXLINE(  59)		this->useFramePixels = true;
HXLINE( 270)		super::__construct(X,Y,null(),null());
HXLINE( 272)		this->set_useFramePixels(::flixel::FlxG_obj::renderBlit);
HXLINE( 273)		if (::hx::IsNotNull( SimpleGraphic )) {
HXLINE( 274)			this->loadGraphic(SimpleGraphic,null(),null(),null(),null(),null());
            		}
            	}

Dynamic FlxSprite_obj::__CreateEmpty() { return new FlxSprite_obj; }

void *FlxSprite_obj::_hx_vtable = 0;

Dynamic FlxSprite_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxSprite_obj > _hx_result = new FlxSprite_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool FlxSprite_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x7ccf8994) {
		if (inClassId<=(int)0x2c01639b) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2c01639b;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	} else {
		return inClassId==(int)0x7dab0655;
	}
}

void FlxSprite_obj::initVars(){
            	HX_GC_STACKFRAME(&_hx_pos_cfd221447aa7194b_279_initVars)
HXLINE( 280)		this->super::initVars();
HXLINE( 282)		this->animation =  ::flixel::animation::FlxAnimationController_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this));
HXLINE( 284)		this->_flashPoint =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,null(),null());
HXLINE( 285)		this->_flashRect =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE( 286)		this->_flashRect2 =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE( 287)		this->_flashPointZero =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,null(),null());
HXLINE( 288)		 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 288)		point->_inPool = false;
HXDLIN( 288)		this->offset = point;
HXLINE( 289)		 ::flixel::math::FlxPoint point1 = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 289)		point1->_inPool = false;
HXDLIN( 289)		this->origin = point1;
HXLINE( 290)		 ::flixel::math::FlxPoint point2 = ::flixel::math::FlxPoint_obj::_pool->get()->set(1,1);
HXDLIN( 290)		point2->_inPool = false;
HXDLIN( 290)		this->scale = point2;
HXLINE( 291)		 ::flixel::math::FlxPoint point3 = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 291)		point3->_inPool = false;
HXDLIN( 291)		this->_halfSize = point3;
HXLINE( 292)		this->_matrix =  ::flixel::math::FlxMatrix_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
HXLINE( 293)		this->colorTransform =  ::openfl::geom::ColorTransform_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null());
            	}


void FlxSprite_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_307_destroy)
HXLINE( 308)		this->super::destroy();
HXLINE( 310)		this->animation = ( ( ::flixel::animation::FlxAnimationController)(::flixel::util::FlxDestroyUtil_obj::destroy(this->animation)) );
HXLINE( 312)		this->offset = ( ( ::flixel::math::FlxPoint)(::flixel::util::FlxDestroyUtil_obj::put(this->offset)) );
HXLINE( 313)		this->origin = ( ( ::flixel::math::FlxPoint)(::flixel::util::FlxDestroyUtil_obj::put(this->origin)) );
HXLINE( 314)		this->scale = ( ( ::flixel::math::FlxPoint)(::flixel::util::FlxDestroyUtil_obj::put(this->scale)) );
HXLINE( 315)		this->_halfSize = ( ( ::flixel::math::FlxPoint)(::flixel::util::FlxDestroyUtil_obj::put(this->_halfSize)) );
HXLINE( 317)		this->framePixels = ::flixel::util::FlxDestroyUtil_obj::dispose(this->framePixels);
HXLINE( 319)		this->_flashPoint = null();
HXLINE( 320)		this->_flashRect = null();
HXLINE( 321)		this->_flashRect2 = null();
HXLINE( 322)		this->_flashPointZero = null();
HXLINE( 323)		this->_matrix = null();
HXLINE( 324)		this->colorTransform = null();
HXLINE( 325)		this->set_blend(null());
HXLINE( 327)		this->set_frames(null());
HXLINE( 328)		this->set_graphic(null());
HXLINE( 329)		this->_frame = ( ( ::flixel::graphics::frames::FlxFrame)(::flixel::util::FlxDestroyUtil_obj::destroy(this->_frame)) );
HXLINE( 330)		this->_frameGraphic = ( ( ::flixel::graphics::FlxGraphic)(::flixel::util::FlxDestroyUtil_obj::destroy(this->_frameGraphic)) );
HXLINE( 332)		this->shader = null();
            	}


 ::flixel::FlxSprite FlxSprite_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_cfd221447aa7194b_337_clone)
HXDLIN( 337)		return  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null())->loadGraphicFromSprite(::hx::ObjectPtr<OBJ_>(this));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,clone,return )

 ::flixel::FlxSprite FlxSprite_obj::loadGraphicFromSprite( ::flixel::FlxSprite Sprite){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_348_loadGraphicFromSprite)
HXLINE( 349)		this->set_frames(Sprite->frames);
HXLINE( 350)		this->bakedRotationAngle = Sprite->bakedRotationAngle;
HXLINE( 351)		if ((this->bakedRotationAngle > 0)) {
HXLINE( 353)			this->set_width(Sprite->get_width());
HXLINE( 354)			this->set_height(Sprite->get_height());
HXLINE( 355)			this->centerOffsets(null());
            		}
HXLINE( 357)		this->set_antialiasing(Sprite->antialiasing);
HXLINE( 358)		this->animation->copyFrom(Sprite->animation);
HXLINE( 359)		this->graphicLoaded();
HXLINE( 360)		this->set_clipRect(Sprite->clipRect);
HXLINE( 361)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,loadGraphicFromSprite,return )

 ::flixel::FlxSprite FlxSprite_obj::loadGraphic( ::Dynamic Graphic,::hx::Null< bool >  __o_Animated,::hx::Null< int >  __o_Width,::hx::Null< int >  __o_Height,::hx::Null< bool >  __o_Unique,::String Key){
            		bool Animated = __o_Animated.Default(false);
            		int Width = __o_Width.Default(0);
            		int Height = __o_Height.Default(0);
            		bool Unique = __o_Unique.Default(false);
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_385_loadGraphic)
HXLINE( 386)		 ::flixel::graphics::FlxGraphic graph = ::flixel::FlxG_obj::bitmap->add(Graphic,Unique,Key);
HXLINE( 387)		if (::hx::IsNull( graph )) {
HXLINE( 388)			return ::hx::ObjectPtr<OBJ_>(this);
            		}
HXLINE( 390)		if ((Width == 0)) {
HXLINE( 392)			if (Animated) {
HXLINE( 392)				Width = graph->height;
            			}
            			else {
HXLINE( 392)				Width = graph->width;
            			}
HXLINE( 393)			if ((Width > graph->width)) {
HXLINE( 393)				Width = graph->width;
            			}
            		}
HXLINE( 396)		if ((Height == 0)) {
HXLINE( 398)			if (Animated) {
HXLINE( 398)				Height = Width;
            			}
            			else {
HXLINE( 398)				Height = graph->height;
            			}
HXLINE( 399)			if ((Height > graph->height)) {
HXLINE( 399)				Height = graph->height;
            			}
            		}
HXLINE( 402)		if (Animated) {
HXLINE( 403)			 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(Width,Height);
HXDLIN( 403)			point->_inPool = false;
HXDLIN( 403)			this->set_frames(::flixel::graphics::frames::FlxTileFrames_obj::fromGraphic(graph,point,null(),null()));
            		}
            		else {
HXLINE( 405)			this->set_frames(graph->get_imageFrame());
            		}
HXLINE( 407)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC6(FlxSprite_obj,loadGraphic,return )

 ::flixel::FlxSprite FlxSprite_obj::loadRotatedGraphic( ::Dynamic Graphic,::hx::Null< int >  __o_Rotations,::hx::Null< int >  __o_Frame,::hx::Null< bool >  __o_AntiAliasing,::hx::Null< bool >  __o_AutoBuffer,::String Key){
            		int Rotations = __o_Rotations.Default(16);
            		int Frame = __o_Frame.Default(-1);
            		bool AntiAliasing = __o_AntiAliasing.Default(false);
            		bool AutoBuffer = __o_AutoBuffer.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_cfd221447aa7194b_428_loadRotatedGraphic)
HXLINE( 429)		 ::flixel::graphics::FlxGraphic brushGraphic = ::flixel::FlxG_obj::bitmap->add(Graphic,false,Key);
HXLINE( 430)		if (::hx::IsNull( brushGraphic )) {
HXLINE( 431)			return ::hx::ObjectPtr<OBJ_>(this);
            		}
HXLINE( 433)		 ::openfl::display::BitmapData brush = brushGraphic->bitmap;
HXLINE( 434)		::String key = brushGraphic->key;
HXLINE( 436)		if ((Frame >= 0)) {
HXLINE( 439)			int brushSize = brush->height;
HXLINE( 440)			int framesNum = ::Std_obj::_hx_int((( (Float)(brush->width) ) / ( (Float)(brushSize) )));
HXLINE( 441)			if ((framesNum <= Frame)) {
HXLINE( 441)				Frame = ::hx::Mod(Frame,framesNum);
            			}
HXLINE( 442)			key = (key + (HX_(":",3a,00,00,00) + Frame));
HXLINE( 444)			 ::openfl::display::BitmapData full = brush;
HXLINE( 445)			brush =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,brushSize,brushSize,true,0);
HXLINE( 446)			this->_flashRect->setTo(( (Float)((Frame * brushSize)) ),( (Float)(0) ),( (Float)(brushSize) ),( (Float)(brushSize) ));
HXLINE( 447)			brush->copyPixels(full,this->_flashRect,this->_flashPointZero,null(),null(),null());
            		}
HXLINE( 450)		key = (key + (((HX_(":",3a,00,00,00) + Rotations) + HX_(":",3a,00,00,00)) + ::Std_obj::string(AutoBuffer)));
HXLINE( 453)		 ::flixel::graphics::FlxGraphic tempGraph = ( ( ::flixel::graphics::FlxGraphic)(::flixel::FlxG_obj::bitmap->_cache->get(key)) );
HXLINE( 454)		if (::hx::IsNull( tempGraph )) {
HXLINE( 456)			 ::openfl::display::BitmapData bitmap = ::flixel::util::FlxBitmapDataUtil_obj::generateRotations(brush,Rotations,AntiAliasing,AutoBuffer);
HXLINE( 457)			tempGraph = ::flixel::graphics::FlxGraphic_obj::fromBitmapData(bitmap,false,key,null());
            		}
HXLINE( 460)		int max;
HXDLIN( 460)		if ((brush->height > brush->width)) {
HXLINE( 460)			max = brush->height;
            		}
            		else {
HXLINE( 460)			max = brush->width;
            		}
HXLINE( 461)		if (AutoBuffer) {
HXLINE( 461)			max = ::Std_obj::_hx_int((( (Float)(max) ) * ((Float)1.5)));
            		}
HXLINE( 463)		 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(max,max);
HXDLIN( 463)		point->_inPool = false;
HXDLIN( 463)		this->set_frames(::flixel::graphics::frames::FlxTileFrames_obj::fromGraphic(tempGraph,point,null(),null()));
HXLINE( 465)		if (AutoBuffer) {
HXLINE( 467)			this->set_width(( (Float)(brush->width) ));
HXLINE( 468)			this->set_height(( (Float)(brush->height) ));
HXLINE( 469)			this->centerOffsets(null());
            		}
HXLINE( 472)		this->bakedRotationAngle = (( (Float)(360) ) / ( (Float)(Rotations) ));
HXLINE( 473)		this->animation->createPrerotated(null());
HXLINE( 474)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC6(FlxSprite_obj,loadRotatedGraphic,return )

 ::flixel::FlxSprite FlxSprite_obj::loadRotatedFrame( ::flixel::graphics::frames::FlxFrame Frame,::hx::Null< int >  __o_Rotations,::hx::Null< bool >  __o_AntiAliasing,::hx::Null< bool >  __o_AutoBuffer){
            		int Rotations = __o_Rotations.Default(16);
            		bool AntiAliasing = __o_AntiAliasing.Default(false);
            		bool AutoBuffer = __o_AutoBuffer.Default(false);
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_489_loadRotatedFrame)
HXLINE( 490)		::String key = Frame->parent->key;
HXLINE( 491)		if (::hx::IsNotNull( Frame->name )) {
HXLINE( 492)			key = (key + (HX_(":",3a,00,00,00) + Frame->name));
            		}
            		else {
HXLINE( 494)			 ::flixel::math::FlxRect _this = Frame->frame;
HXDLIN( 494)			 ::Dynamic value = _this->x;
HXDLIN( 494)			 ::flixel::util::LabelValuePair _this1 = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN( 494)			_this1->label = HX_("x",78,00,00,00);
HXDLIN( 494)			_this1->value = value;
HXDLIN( 494)			 ::Dynamic value1 = _this->y;
HXDLIN( 494)			 ::flixel::util::LabelValuePair _this2 = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN( 494)			_this2->label = HX_("y",79,00,00,00);
HXDLIN( 494)			_this2->value = value1;
HXDLIN( 494)			 ::Dynamic value2 = _this->width;
HXDLIN( 494)			 ::flixel::util::LabelValuePair _this3 = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN( 494)			_this3->label = HX_("w",77,00,00,00);
HXDLIN( 494)			_this3->value = value2;
HXDLIN( 494)			 ::Dynamic value3 = _this->height;
HXDLIN( 494)			 ::flixel::util::LabelValuePair _this4 = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN( 494)			_this4->label = HX_("h",68,00,00,00);
HXDLIN( 494)			_this4->value = value3;
HXDLIN( 494)			key = (key + (HX_(":",3a,00,00,00) + ::flixel::util::FlxStringUtil_obj::getDebugString(::Array_obj< ::Dynamic>::__new(4)->init(0,_this1)->init(1,_this2)->init(2,_this3)->init(3,_this4))));
            		}
HXLINE( 496)		 ::flixel::graphics::FlxGraphic graphic = ( ( ::flixel::graphics::FlxGraphic)(::flixel::FlxG_obj::bitmap->_cache->get(key)) );
HXLINE( 497)		if (::hx::IsNull( graphic )) {
HXLINE( 498)			graphic = ::flixel::graphics::FlxGraphic_obj::fromBitmapData(Frame->paint(null(),null(),null(),null()),false,key,null());
            		}
HXLINE( 500)		return this->loadRotatedGraphic(graphic,Rotations,-1,AntiAliasing,AutoBuffer,null());
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxSprite_obj,loadRotatedFrame,return )

 ::flixel::FlxSprite FlxSprite_obj::makeGraphic(int Width,int Height,::hx::Null< int >  __o_Color,::hx::Null< bool >  __o_Unique,::String Key){
            		int Color = __o_Color.Default(-1);
            		bool Unique = __o_Unique.Default(false);
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_524_makeGraphic)
HXLINE( 525)		 ::flixel::graphics::FlxGraphic graph = ::flixel::FlxG_obj::bitmap->create(Width,Height,Color,Unique,Key);
HXLINE( 526)		this->set_frames(graph->get_imageFrame());
HXLINE( 527)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC5(FlxSprite_obj,makeGraphic,return )

void FlxSprite_obj::graphicLoaded(){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_533_graphicLoaded)
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,graphicLoaded,(void))

void FlxSprite_obj::resetSize(){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_539_resetSize)
HXLINE( 540)		this->_flashRect->x = ( (Float)(0) );
HXLINE( 541)		this->_flashRect->y = ( (Float)(0) );
HXLINE( 542)		this->_flashRect->width = ( (Float)(this->frameWidth) );
HXLINE( 543)		this->_flashRect->height = ( (Float)(this->frameHeight) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,resetSize,(void))

void FlxSprite_obj::resetFrameSize(){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_550_resetFrameSize)
HXLINE( 551)		if (::hx::IsNotNull( this->frame )) {
HXLINE( 553)			this->frameWidth = ::Std_obj::_hx_int(this->frame->sourceSize->x);
HXLINE( 554)			this->frameHeight = ::Std_obj::_hx_int(this->frame->sourceSize->y);
            		}
HXLINE( 556)		this->_halfSize->set((((Float)0.5) * ( (Float)(this->frameWidth) )),(((Float)0.5) * ( (Float)(this->frameHeight) )));
HXLINE( 557)		{
HXLINE( 557)			this->_flashRect->x = ( (Float)(0) );
HXDLIN( 557)			this->_flashRect->y = ( (Float)(0) );
HXDLIN( 557)			this->_flashRect->width = ( (Float)(this->frameWidth) );
HXDLIN( 557)			this->_flashRect->height = ( (Float)(this->frameHeight) );
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,resetFrameSize,(void))

void FlxSprite_obj::resetSizeFromFrame(){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_564_resetSizeFromFrame)
HXLINE( 565)		this->set_width(( (Float)(this->frameWidth) ));
HXLINE( 566)		this->set_height(( (Float)(this->frameHeight) ));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,resetSizeFromFrame,(void))

void FlxSprite_obj::resetFrame(){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_577_resetFrame)
HXDLIN( 577)		this->set_frame(this->frame);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,resetFrame,(void))

void FlxSprite_obj::setGraphicSize(::hx::Null< int >  __o_Width,::hx::Null< int >  __o_Height){
            		int Width = __o_Width.Default(0);
            		int Height = __o_Height.Default(0);
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_588_setGraphicSize)
HXLINE( 589)		bool _hx_tmp;
HXDLIN( 589)		if ((Width <= 0)) {
HXLINE( 589)			_hx_tmp = (Height <= 0);
            		}
            		else {
HXLINE( 589)			_hx_tmp = false;
            		}
HXDLIN( 589)		if (_hx_tmp) {
HXLINE( 590)			return;
            		}
HXLINE( 592)		Float newScaleX = (( (Float)(Width) ) / ( (Float)(this->frameWidth) ));
HXLINE( 593)		Float newScaleY = (( (Float)(Height) ) / ( (Float)(this->frameHeight) ));
HXLINE( 594)		this->scale->set(newScaleX,newScaleY);
HXLINE( 596)		if ((Width <= 0)) {
HXLINE( 597)			this->scale->set_x(newScaleY);
            		}
            		else {
HXLINE( 598)			if ((Height <= 0)) {
HXLINE( 599)				this->scale->set_y(newScaleX);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxSprite_obj,setGraphicSize,(void))

void FlxSprite_obj::updateHitbox(){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_607_updateHitbox)
HXLINE( 608)		this->set_width((::Math_obj::abs(this->scale->x) * ( (Float)(this->frameWidth) )));
HXLINE( 609)		this->set_height((::Math_obj::abs(this->scale->y) * ( (Float)(this->frameHeight) )));
HXLINE( 610)		 ::flixel::math::FlxPoint _hx_tmp = this->offset;
HXDLIN( 610)		Float _hx_tmp1 = this->get_width();
HXDLIN( 610)		Float _hx_tmp2 = (((Float)-0.5) * (_hx_tmp1 - ( (Float)(this->frameWidth) )));
HXDLIN( 610)		Float _hx_tmp3 = this->get_height();
HXDLIN( 610)		_hx_tmp->set(_hx_tmp2,(((Float)-0.5) * (_hx_tmp3 - ( (Float)(this->frameHeight) ))));
HXLINE( 611)		this->origin->set((( (Float)(this->frameWidth) ) * ((Float)0.5)),(( (Float)(this->frameHeight) ) * ((Float)0.5)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,updateHitbox,(void))

void FlxSprite_obj::resetHelpers(){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_619_resetHelpers)
HXLINE( 620)		{
HXLINE( 620)			if (::hx::IsNotNull( this->frame )) {
HXLINE( 620)				this->frameWidth = ::Std_obj::_hx_int(this->frame->sourceSize->x);
HXDLIN( 620)				this->frameHeight = ::Std_obj::_hx_int(this->frame->sourceSize->y);
            			}
HXDLIN( 620)			this->_halfSize->set((((Float)0.5) * ( (Float)(this->frameWidth) )),(((Float)0.5) * ( (Float)(this->frameHeight) )));
HXDLIN( 620)			{
HXLINE( 620)				this->_flashRect->x = ( (Float)(0) );
HXDLIN( 620)				this->_flashRect->y = ( (Float)(0) );
HXDLIN( 620)				this->_flashRect->width = ( (Float)(this->frameWidth) );
HXDLIN( 620)				this->_flashRect->height = ( (Float)(this->frameHeight) );
            			}
            		}
HXLINE( 621)		{
HXLINE( 621)			this->set_width(( (Float)(this->frameWidth) ));
HXDLIN( 621)			this->set_height(( (Float)(this->frameHeight) ));
            		}
HXLINE( 622)		this->_flashRect2->x = ( (Float)(0) );
HXLINE( 623)		this->_flashRect2->y = ( (Float)(0) );
HXLINE( 625)		if (::hx::IsNotNull( this->graphic )) {
HXLINE( 627)			this->_flashRect2->width = ( (Float)(this->graphic->width) );
HXLINE( 628)			this->_flashRect2->height = ( (Float)(this->graphic->height) );
            		}
HXLINE( 631)		this->origin->set((( (Float)(this->frameWidth) ) * ((Float)0.5)),(( (Float)(this->frameHeight) ) * ((Float)0.5)));
HXLINE( 633)		if (::flixel::FlxG_obj::renderBlit) {
HXLINE( 635)			this->dirty = true;
HXLINE( 636)			this->updateFramePixels();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,resetHelpers,(void))

void FlxSprite_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_641_update)
HXLINE( 642)		this->super::update(elapsed);
HXLINE( 643)		this->updateAnimation(elapsed);
            	}


void FlxSprite_obj::updateAnimation(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_651_updateAnimation)
HXDLIN( 651)		this->animation->update(elapsed);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,updateAnimation,(void))

void FlxSprite_obj::checkEmptyFrame(){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_657_checkEmptyFrame)
HXDLIN( 657)		if (::hx::IsNull( this->_frame )) {
HXLINE( 658)			this->loadGraphic(HX_("flixel/images/logo/default.png",1c,39,3e,0e),null(),null(),null(),null(),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,checkEmptyFrame,(void))

void FlxSprite_obj::draw(){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_665_draw)
HXLINE( 666)		this->checkEmptyFrame();
HXLINE( 668)		bool _hx_tmp;
HXDLIN( 668)		if ((this->alpha != 0)) {
HXLINE( 668)			_hx_tmp = (this->_frame->type == 2);
            		}
            		else {
HXLINE( 668)			_hx_tmp = true;
            		}
HXDLIN( 668)		if (_hx_tmp) {
HXLINE( 669)			return;
            		}
HXLINE( 671)		if (this->dirty) {
HXLINE( 672)			this->calcFrame(this->useFramePixels);
            		}
HXLINE( 674)		{
HXLINE( 674)			int _g = 0;
HXDLIN( 674)			::Array< ::Dynamic> _g1 = this->get_cameras();
HXDLIN( 674)			while((_g < _g1->length)){
HXLINE( 674)				 ::flixel::FlxCamera camera = _g1->__get(_g).StaticCast<  ::flixel::FlxCamera >();
HXDLIN( 674)				_g = (_g + 1);
HXLINE( 676)				bool _hx_tmp;
HXDLIN( 676)				bool _hx_tmp1;
HXDLIN( 676)				if (camera->visible) {
HXLINE( 676)					_hx_tmp1 = !(camera->exists);
            				}
            				else {
HXLINE( 676)					_hx_tmp1 = true;
            				}
HXDLIN( 676)				if (!(_hx_tmp1)) {
HXLINE( 676)					_hx_tmp = !(this->isOnScreen(camera));
            				}
            				else {
HXLINE( 676)					_hx_tmp = true;
            				}
HXDLIN( 676)				if (_hx_tmp) {
HXLINE( 677)					continue;
            				}
HXLINE( 679)				this->getScreenPosition(this->_point,camera)->subtractPoint(this->offset);
HXLINE( 681)				if (this->isSimpleRender(camera)) {
HXLINE( 682)					this->drawSimple(camera);
            				}
            				else {
HXLINE( 684)					this->drawComplex(camera);
            				}
            			}
            		}
            	}


void FlxSprite_obj::drawSimple( ::flixel::FlxCamera camera){
            	HX_GC_STACKFRAME(&_hx_pos_cfd221447aa7194b_699_drawSimple)
HXLINE( 700)		if (this->isPixelPerfectRender(camera)) {
HXLINE( 701)			 ::flixel::math::FlxPoint _this = this->_point;
HXDLIN( 701)			_this->set_x(( (Float)(::Math_obj::floor(_this->x)) ));
HXDLIN( 701)			_this->set_y(( (Float)(::Math_obj::floor(_this->y)) ));
            		}
HXLINE( 703)		{
HXLINE( 703)			 ::flixel::math::FlxPoint _this = this->_point;
HXDLIN( 703)			 ::openfl::geom::Point FlashPoint = this->_flashPoint;
HXDLIN( 703)			if (::hx::IsNull( FlashPoint )) {
HXLINE( 703)				FlashPoint =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,null(),null());
            			}
HXDLIN( 703)			FlashPoint->x = _this->x;
HXDLIN( 703)			FlashPoint->y = _this->y;
            		}
HXLINE( 704)		camera->copyPixels(this->_frame,this->framePixels,this->_flashRect,this->_flashPoint,this->colorTransform,this->blend,this->antialiasing,null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,drawSimple,(void))

void FlxSprite_obj::drawComplex( ::flixel::FlxCamera camera){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_709_drawComplex)
HXLINE( 710)		bool doFlipX = (this->flipX != this->_frame->flipX);
HXDLIN( 710)		bool _hx_tmp;
HXDLIN( 710)		if (::hx::IsNotNull( this->animation->_curAnim )) {
HXLINE( 710)			_hx_tmp = (doFlipX != this->animation->_curAnim->flipX);
            		}
            		else {
HXLINE( 710)			_hx_tmp = doFlipX;
            		}
HXDLIN( 710)		bool doFlipY = (this->flipY != this->_frame->flipY);
HXDLIN( 710)		bool _hx_tmp1;
HXDLIN( 710)		if (::hx::IsNotNull( this->animation->_curAnim )) {
HXLINE( 710)			_hx_tmp1 = (doFlipY != this->animation->_curAnim->flipY);
            		}
            		else {
HXLINE( 710)			_hx_tmp1 = doFlipY;
            		}
HXDLIN( 710)		this->_frame->prepareMatrix(this->_matrix,0,_hx_tmp,_hx_tmp1);
HXLINE( 711)		this->_matrix->translate(-(this->origin->x),-(this->origin->y));
HXLINE( 712)		this->_matrix->scale(this->scale->x,this->scale->y);
HXLINE( 714)		if ((this->bakedRotationAngle <= 0)) {
HXLINE( 716)			if (this->_angleChanged) {
HXLINE( 716)				Float radians = (this->angle * (::Math_obj::PI / ( (Float)(180) )));
HXDLIN( 716)				this->_sinAngle = ::Math_obj::sin(radians);
HXDLIN( 716)				this->_cosAngle = ::Math_obj::cos(radians);
HXDLIN( 716)				this->_angleChanged = false;
            			}
HXLINE( 718)			if ((this->angle != 0)) {
HXLINE( 719)				 ::flixel::math::FlxMatrix _this = this->_matrix;
HXDLIN( 719)				Float cos = this->_cosAngle;
HXDLIN( 719)				Float sin = this->_sinAngle;
HXDLIN( 719)				Float a1 = ((_this->a * cos) - (_this->b * sin));
HXDLIN( 719)				_this->b = ((_this->a * sin) + (_this->b * cos));
HXDLIN( 719)				_this->a = a1;
HXDLIN( 719)				Float c1 = ((_this->c * cos) - (_this->d * sin));
HXDLIN( 719)				_this->d = ((_this->c * sin) + (_this->d * cos));
HXDLIN( 719)				_this->c = c1;
HXDLIN( 719)				Float tx1 = ((_this->tx * cos) - (_this->ty * sin));
HXDLIN( 719)				_this->ty = ((_this->tx * sin) + (_this->ty * cos));
HXDLIN( 719)				_this->tx = tx1;
            			}
            		}
HXLINE( 722)		{
HXLINE( 722)			 ::flixel::math::FlxPoint _this = this->_point;
HXDLIN( 722)			Float Y = this->origin->y;
HXDLIN( 722)			_this->set_x((_this->x + this->origin->x));
HXDLIN( 722)			_this->set_y((_this->y + Y));
            		}
HXLINE( 723)		this->_matrix->translate(this->_point->x,this->_point->y);
HXLINE( 725)		if (this->isPixelPerfectRender(camera)) {
HXLINE( 727)			this->_matrix->tx = ( (Float)(::Math_obj::floor(this->_matrix->tx)) );
HXLINE( 728)			this->_matrix->ty = ( (Float)(::Math_obj::floor(this->_matrix->ty)) );
            		}
HXLINE( 731)		camera->drawPixels(this->_frame,this->framePixels,this->_matrix,this->colorTransform,this->blend,this->antialiasing,this->shader);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,drawComplex,(void))

void FlxSprite_obj::stamp( ::flixel::FlxSprite Brush,::hx::Null< int >  __o_X,::hx::Null< int >  __o_Y){
            		int X = __o_X.Default(0);
            		int Y = __o_Y.Default(0);
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_743_stamp)
HXLINE( 744)		Brush->drawFrame(null());
HXLINE( 746)		bool _hx_tmp;
HXDLIN( 746)		if (::hx::IsNotNull( this->graphic )) {
HXLINE( 746)			_hx_tmp = ::hx::IsNull( Brush->graphic );
            		}
            		else {
HXLINE( 746)			_hx_tmp = true;
            		}
HXDLIN( 746)		if (_hx_tmp) {
HXLINE( 747)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Cannot stamp to or from a FlxSprite with no graphics.",72,0b,d4,aa)));
            		}
HXLINE( 749)		 ::openfl::display::BitmapData bitmapData = Brush->framePixels;
HXLINE( 751)		if (this->isSimpleRenderBlit(null())) {
HXLINE( 753)			this->_flashPoint->x = (X + this->frame->frame->x);
HXLINE( 754)			this->_flashPoint->y = (Y + this->frame->frame->y);
HXLINE( 755)			this->_flashRect2->width = ( (Float)(bitmapData->width) );
HXLINE( 756)			this->_flashRect2->height = ( (Float)(bitmapData->height) );
HXLINE( 757)			this->graphic->bitmap->copyPixels(bitmapData,this->_flashRect2,this->_flashPoint,null(),null(),true);
HXLINE( 758)			this->_flashRect2->width = ( (Float)(this->graphic->bitmap->width) );
HXLINE( 759)			this->_flashRect2->height = ( (Float)(this->graphic->bitmap->height) );
            		}
            		else {
HXLINE( 763)			this->_matrix->identity();
HXLINE( 764)			this->_matrix->translate(-(Brush->origin->x),-(Brush->origin->y));
HXLINE( 765)			this->_matrix->scale(Brush->scale->x,Brush->scale->y);
HXLINE( 766)			if ((Brush->angle != 0)) {
HXLINE( 768)				this->_matrix->rotate((Brush->angle * (::Math_obj::PI / ( (Float)(180) ))));
            			}
HXLINE( 770)			this->_matrix->translate(((X + this->frame->frame->x) + Brush->origin->x),((Y + this->frame->frame->y) + Brush->origin->y));
HXLINE( 771)			 ::Dynamic brushBlend = Brush->blend;
HXLINE( 772)			this->graphic->bitmap->draw(bitmapData,this->_matrix,null(),brushBlend,null(),Brush->antialiasing);
            		}
HXLINE( 775)		if (::flixel::FlxG_obj::renderBlit) {
HXLINE( 777)			this->dirty = true;
HXLINE( 778)			this->calcFrame(null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxSprite_obj,stamp,(void))

void FlxSprite_obj::drawFrame(::hx::Null< bool >  __o_Force){
            		bool Force = __o_Force.Default(false);
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_790_drawFrame)
HXDLIN( 790)		if (::flixel::FlxG_obj::renderBlit) {
HXLINE( 792)			bool _hx_tmp;
HXDLIN( 792)			if (!(Force)) {
HXLINE( 792)				_hx_tmp = this->dirty;
            			}
            			else {
HXLINE( 792)				_hx_tmp = true;
            			}
HXDLIN( 792)			if (_hx_tmp) {
HXLINE( 794)				this->dirty = true;
HXLINE( 795)				this->calcFrame(null());
            			}
            		}
            		else {
HXLINE( 800)			this->dirty = true;
HXLINE( 801)			this->calcFrame(true);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,drawFrame,(void))

void FlxSprite_obj::centerOffsets(::hx::Null< bool >  __o_AdjustPosition){
            		bool AdjustPosition = __o_AdjustPosition.Default(false);
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_811_centerOffsets)
HXLINE( 812)		 ::flixel::math::FlxPoint _hx_tmp = this->offset;
HXDLIN( 812)		int _hx_tmp1 = this->frameWidth;
HXDLIN( 812)		_hx_tmp->set_x(((( (Float)(_hx_tmp1) ) - this->get_width()) * ((Float)0.5)));
HXLINE( 813)		 ::flixel::math::FlxPoint _hx_tmp2 = this->offset;
HXDLIN( 813)		int _hx_tmp3 = this->frameHeight;
HXDLIN( 813)		_hx_tmp2->set_y(((( (Float)(_hx_tmp3) ) - this->get_height()) * ((Float)0.5)));
HXLINE( 814)		if (AdjustPosition) {
HXLINE( 816)			this->set_x((this->x + this->offset->x));
HXLINE( 817)			this->set_y((this->y + this->offset->y));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,centerOffsets,(void))

void FlxSprite_obj::centerOrigin(){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_827_centerOrigin)
HXDLIN( 827)		this->origin->set((( (Float)(this->frameWidth) ) * ((Float)0.5)),(( (Float)(this->frameHeight) ) * ((Float)0.5)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,centerOrigin,(void))

::Array< ::Dynamic> FlxSprite_obj::replaceColor(int Color,int NewColor,::hx::Null< bool >  __o_FetchPositions){
            		bool FetchPositions = __o_FetchPositions.Default(false);
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_840_replaceColor)
HXLINE( 841)		::Array< ::Dynamic> positions = ::flixel::util::FlxBitmapDataUtil_obj::replaceColor(this->graphic->bitmap,Color,NewColor,FetchPositions,null());
HXLINE( 842)		if (::hx::IsNotNull( positions )) {
HXLINE( 843)			this->dirty = true;
            		}
HXLINE( 844)		return positions;
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxSprite_obj,replaceColor,return )

void FlxSprite_obj::setColorTransform(::hx::Null< Float >  __o_redMultiplier,::hx::Null< Float >  __o_greenMultiplier,::hx::Null< Float >  __o_blueMultiplier,::hx::Null< Float >  __o_alphaMultiplier,::hx::Null< int >  __o_redOffset,::hx::Null< int >  __o_greenOffset,::hx::Null< int >  __o_blueOffset,::hx::Null< int >  __o_alphaOffset){
            		Float redMultiplier = __o_redMultiplier.Default(((Float)1.0));
            		Float greenMultiplier = __o_greenMultiplier.Default(((Float)1.0));
            		Float blueMultiplier = __o_blueMultiplier.Default(((Float)1.0));
            		Float alphaMultiplier = __o_alphaMultiplier.Default(((Float)1.0));
            		int redOffset = __o_redOffset.Default(0);
            		int greenOffset = __o_greenOffset.Default(0);
            		int blueOffset = __o_blueOffset.Default(0);
            		int alphaOffset = __o_alphaOffset.Default(0);
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_862_setColorTransform)
HXLINE( 863)		Float Alpha = ( (Float)(1) );
HXDLIN( 863)		int color = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());
HXDLIN( 863)		{
HXLINE( 863)			int Value = ::Math_obj::round((redMultiplier * ( (Float)(255) )));
HXDLIN( 863)			color = (color & -16711681);
HXDLIN( 863)			int color1;
HXDLIN( 863)			if ((Value > 255)) {
HXLINE( 863)				color1 = 255;
            			}
            			else {
HXLINE( 863)				if ((Value < 0)) {
HXLINE( 863)					color1 = 0;
            				}
            				else {
HXLINE( 863)					color1 = Value;
            				}
            			}
HXDLIN( 863)			color = (color | (color1 << 16));
            		}
HXDLIN( 863)		{
HXLINE( 863)			int Value1 = ::Math_obj::round((greenMultiplier * ( (Float)(255) )));
HXDLIN( 863)			color = (color & -65281);
HXDLIN( 863)			int color2;
HXDLIN( 863)			if ((Value1 > 255)) {
HXLINE( 863)				color2 = 255;
            			}
            			else {
HXLINE( 863)				if ((Value1 < 0)) {
HXLINE( 863)					color2 = 0;
            				}
            				else {
HXLINE( 863)					color2 = Value1;
            				}
            			}
HXDLIN( 863)			color = (color | (color2 << 8));
            		}
HXDLIN( 863)		{
HXLINE( 863)			int Value2 = ::Math_obj::round((blueMultiplier * ( (Float)(255) )));
HXDLIN( 863)			color = (color & -256);
HXDLIN( 863)			int color3;
HXDLIN( 863)			if ((Value2 > 255)) {
HXLINE( 863)				color3 = 255;
            			}
            			else {
HXLINE( 863)				if ((Value2 < 0)) {
HXLINE( 863)					color3 = 0;
            				}
            				else {
HXLINE( 863)					color3 = Value2;
            				}
            			}
HXDLIN( 863)			color = (color | color3);
            		}
HXDLIN( 863)		{
HXLINE( 863)			int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 863)			color = (color & 16777215);
HXDLIN( 863)			int color4;
HXDLIN( 863)			if ((Value3 > 255)) {
HXLINE( 863)				color4 = 255;
            			}
            			else {
HXLINE( 863)				if ((Value3 < 0)) {
HXLINE( 863)					color4 = 0;
            				}
            				else {
HXLINE( 863)					color4 = Value3;
            				}
            			}
HXDLIN( 863)			color = (color | (color4 << 24));
            		}
HXDLIN( 863)		this->set_color((color & 16777215));
HXLINE( 864)		this->set_alpha(alphaMultiplier);
HXLINE( 866)		::flixel::util::FlxColorTransformUtil_obj::setMultipliers(this->colorTransform,redMultiplier,greenMultiplier,blueMultiplier,alphaMultiplier);
HXLINE( 867)		::flixel::util::FlxColorTransformUtil_obj::setOffsets(this->colorTransform,redOffset,greenOffset,blueOffset,alphaOffset);
HXLINE( 869)		bool _hx_tmp;
HXDLIN( 869)		bool _hx_tmp1;
HXDLIN( 869)		if ((this->alpha == 1)) {
HXLINE( 869)			_hx_tmp1 = (this->color != 16777215);
            		}
            		else {
HXLINE( 869)			_hx_tmp1 = true;
            		}
HXDLIN( 869)		if (!(_hx_tmp1)) {
HXLINE( 869)			_hx_tmp = ::flixel::util::FlxColorTransformUtil_obj::hasRGBOffsets(this->colorTransform);
            		}
            		else {
HXLINE( 869)			_hx_tmp = true;
            		}
HXDLIN( 869)		this->useColorTransform = _hx_tmp;
HXLINE( 870)		this->dirty = true;
            	}


HX_DEFINE_DYNAMIC_FUNC8(FlxSprite_obj,setColorTransform,(void))

void FlxSprite_obj::updateColorTransform(){
            	HX_GC_STACKFRAME(&_hx_pos_cfd221447aa7194b_874_updateColorTransform)
HXLINE( 875)		if (::hx::IsNull( this->colorTransform )) {
HXLINE( 876)			this->colorTransform =  ::openfl::geom::ColorTransform_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null());
            		}
HXLINE( 878)		bool _hx_tmp;
HXDLIN( 878)		if ((this->alpha == 1)) {
HXLINE( 878)			_hx_tmp = (this->color != 16777215);
            		}
            		else {
HXLINE( 878)			_hx_tmp = true;
            		}
HXDLIN( 878)		this->useColorTransform = _hx_tmp;
HXLINE( 879)		if (this->useColorTransform) {
HXLINE( 880)			::flixel::util::FlxColorTransformUtil_obj::setMultipliers(this->colorTransform,(( (Float)(((this->color >> 16) & 255)) ) / ( (Float)(255) )),(( (Float)(((this->color >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this->color & 255)) ) / ( (Float)(255) )),this->alpha);
            		}
            		else {
HXLINE( 882)			::flixel::util::FlxColorTransformUtil_obj::setMultipliers(this->colorTransform,( (Float)(1) ),( (Float)(1) ),( (Float)(1) ),( (Float)(1) ));
            		}
HXLINE( 884)		this->dirty = true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,updateColorTransform,(void))

bool FlxSprite_obj::pixelsOverlapPoint( ::flixel::math::FlxPoint point,::hx::Null< int >  __o_Mask, ::flixel::FlxCamera Camera){
            		int Mask = __o_Mask.Default(255);
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_897_pixelsOverlapPoint)
HXLINE( 898)		if (::hx::IsNull( Camera )) {
HXLINE( 899)			Camera = ::flixel::FlxG_obj::camera;
            		}
HXLINE( 901)		this->getScreenPosition(this->_point,Camera);
HXLINE( 902)		this->_point->subtractPoint(this->offset);
HXLINE( 903)		this->_flashPoint->x = ((point->x - Camera->scroll->x) - this->_point->x);
HXLINE( 904)		this->_flashPoint->y = ((point->y - Camera->scroll->y) - this->_point->y);
HXLINE( 906)		if (point->_weak) {
HXLINE( 906)			point->put();
            		}
HXLINE( 909)		bool _hx_tmp;
HXDLIN( 909)		bool _hx_tmp1;
HXDLIN( 909)		bool _hx_tmp2;
HXDLIN( 909)		if (!((this->_flashPoint->x < 0))) {
HXLINE( 909)			_hx_tmp2 = (this->_flashPoint->x > this->frameWidth);
            		}
            		else {
HXLINE( 909)			_hx_tmp2 = true;
            		}
HXDLIN( 909)		if (!(_hx_tmp2)) {
HXLINE( 909)			_hx_tmp1 = (this->_flashPoint->y < 0);
            		}
            		else {
HXLINE( 909)			_hx_tmp1 = true;
            		}
HXDLIN( 909)		if (!(_hx_tmp1)) {
HXLINE( 909)			_hx_tmp = (this->_flashPoint->y > this->frameHeight);
            		}
            		else {
HXLINE( 909)			_hx_tmp = true;
            		}
HXDLIN( 909)		if (_hx_tmp) {
HXLINE( 911)			return false;
            		}
            		else {
HXLINE( 915)			 ::openfl::display::BitmapData frameData = this->updateFramePixels();
HXLINE( 916)			int pixelColor = ::Std_obj::_hx_int(this->_flashPoint->x);
HXDLIN( 916)			int pixelColor1 = frameData->getPixel32(pixelColor,::Std_obj::_hx_int(this->_flashPoint->y));
HXLINE( 917)			return ((( (Float)(((pixelColor1 >> 24) & 255)) ) * this->alpha) >= Mask);
            		}
HXLINE( 909)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxSprite_obj,pixelsOverlapPoint,return )

void FlxSprite_obj::calcFrame(::hx::Null< bool >  __o_RunOnCpp){
            		bool RunOnCpp = __o_RunOnCpp.Default(false);
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_928_calcFrame)
HXLINE( 929)		this->checkEmptyFrame();
HXLINE( 931)		bool _hx_tmp;
HXDLIN( 931)		if (::flixel::FlxG_obj::renderTile) {
HXLINE( 931)			_hx_tmp = !(RunOnCpp);
            		}
            		else {
HXLINE( 931)			_hx_tmp = false;
            		}
HXDLIN( 931)		if (_hx_tmp) {
HXLINE( 932)			return;
            		}
HXLINE( 934)		this->updateFramePixels();
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,calcFrame,(void))

 ::openfl::display::BitmapData FlxSprite_obj::updateFramePixels(){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_941_updateFramePixels)
HXLINE( 942)		bool _hx_tmp;
HXDLIN( 942)		if (::hx::IsNotNull( this->_frame )) {
HXLINE( 942)			_hx_tmp = !(this->dirty);
            		}
            		else {
HXLINE( 942)			_hx_tmp = true;
            		}
HXDLIN( 942)		if (_hx_tmp) {
HXLINE( 943)			return this->framePixels;
            		}
HXLINE( 947)		bool _hx_tmp1;
HXDLIN( 947)		if (::flixel::FlxG_obj::renderTile) {
HXLINE( 947)			_hx_tmp1 = ::hx::IsNotNull( this->_frameGraphic );
            		}
            		else {
HXLINE( 947)			_hx_tmp1 = false;
            		}
HXDLIN( 947)		if (_hx_tmp1) {
HXLINE( 949)			this->dirty = false;
HXLINE( 950)			return this->framePixels;
            		}
HXLINE( 953)		bool doFlipX = (this->flipX != this->_frame->flipX);
HXDLIN( 953)		bool doFlipX1;
HXDLIN( 953)		if (::hx::IsNotNull( this->animation->_curAnim )) {
HXLINE( 953)			doFlipX1 = (doFlipX != this->animation->_curAnim->flipX);
            		}
            		else {
HXLINE( 953)			doFlipX1 = doFlipX;
            		}
HXLINE( 954)		bool doFlipY = (this->flipY != this->_frame->flipY);
HXDLIN( 954)		bool doFlipY1;
HXDLIN( 954)		if (::hx::IsNotNull( this->animation->_curAnim )) {
HXLINE( 954)			doFlipY1 = (doFlipY != this->animation->_curAnim->flipY);
            		}
            		else {
HXLINE( 954)			doFlipY1 = doFlipY;
            		}
HXLINE( 956)		bool _hx_tmp2;
HXDLIN( 956)		bool _hx_tmp3;
HXDLIN( 956)		if (!(doFlipX1)) {
HXLINE( 956)			_hx_tmp3 = !(doFlipY1);
            		}
            		else {
HXLINE( 956)			_hx_tmp3 = false;
            		}
HXDLIN( 956)		if (_hx_tmp3) {
HXLINE( 956)			_hx_tmp2 = (this->_frame->type == 0);
            		}
            		else {
HXLINE( 956)			_hx_tmp2 = false;
            		}
HXDLIN( 956)		if (_hx_tmp2) {
HXLINE( 958)			this->framePixels = this->_frame->paint(this->framePixels,this->_flashPointZero,false,true);
            		}
            		else {
HXLINE( 962)			this->framePixels = this->_frame->paintRotatedAndFlipped(this->framePixels,this->_flashPointZero,0,doFlipX1,doFlipY1,false,true);
            		}
HXLINE( 965)		if (this->useColorTransform) {
HXLINE( 967)			this->framePixels->colorTransform(this->_flashRect,this->colorTransform);
            		}
HXLINE( 970)		bool _hx_tmp4;
HXDLIN( 970)		if (::flixel::FlxG_obj::renderTile) {
HXLINE( 970)			_hx_tmp4 = this->useFramePixels;
            		}
            		else {
HXLINE( 970)			_hx_tmp4 = false;
            		}
HXDLIN( 970)		if (_hx_tmp4) {
HXLINE( 973)			this->_frameGraphic = ( ( ::flixel::graphics::FlxGraphic)(::flixel::util::FlxDestroyUtil_obj::destroy(this->_frameGraphic)) );
HXLINE( 974)			this->_frameGraphic = ::flixel::graphics::FlxGraphic_obj::fromBitmapData(this->framePixels,false,null(),false);
HXLINE( 975)			this->_frame = this->_frameGraphic->get_imageFrame()->get_frame()->copyTo(this->_frame);
            		}
HXLINE( 978)		this->dirty = false;
HXLINE( 979)		return this->framePixels;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,updateFramePixels,return )

 ::flixel::math::FlxPoint FlxSprite_obj::getGraphicMidpoint( ::flixel::math::FlxPoint point){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_990_getGraphicMidpoint)
HXLINE( 991)		if (::hx::IsNull( point )) {
HXLINE( 992)			 ::flixel::math::FlxPoint point1 = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 992)			point1->_inPool = false;
HXDLIN( 992)			point = point1;
            		}
HXLINE( 993)		return point->set((this->x + (( (Float)(this->frameWidth) ) * ((Float)0.5))),(this->y + (( (Float)(this->frameHeight) ) * ((Float)0.5))));
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,getGraphicMidpoint,return )

bool FlxSprite_obj::isOnScreen( ::flixel::FlxCamera Camera){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1004_isOnScreen)
HXLINE(1005)		if (::hx::IsNull( Camera )) {
HXLINE(1006)			Camera = ::flixel::FlxG_obj::camera;
            		}
HXLINE(1008)		Float minX = ((this->x - this->offset->x) - (Camera->scroll->x * this->scrollFactor->x));
HXLINE(1009)		Float minY = ((this->y - this->offset->y) - (Camera->scroll->y * this->scrollFactor->y));
HXLINE(1011)		bool _hx_tmp;
HXDLIN(1011)		bool _hx_tmp1;
HXDLIN(1011)		bool _hx_tmp2;
HXDLIN(1011)		if ((this->angle != 0)) {
HXLINE(1011)			_hx_tmp2 = (this->bakedRotationAngle > 0);
            		}
            		else {
HXLINE(1011)			_hx_tmp2 = true;
            		}
HXDLIN(1011)		if (_hx_tmp2) {
HXLINE(1011)			_hx_tmp1 = (this->scale->x == 1);
            		}
            		else {
HXLINE(1011)			_hx_tmp1 = false;
            		}
HXDLIN(1011)		if (_hx_tmp1) {
HXLINE(1011)			_hx_tmp = (this->scale->y == 1);
            		}
            		else {
HXLINE(1011)			_hx_tmp = false;
            		}
HXDLIN(1011)		if (_hx_tmp) {
HXLINE(1013)			this->_point->set(minX,minY);
HXLINE(1014)			 ::flixel::math::FlxPoint point = this->_point;
HXDLIN(1014)			bool _hx_tmp;
HXDLIN(1014)			bool _hx_tmp1;
HXDLIN(1014)			if (((point->x + this->frameWidth) > Camera->viewOffsetX)) {
HXLINE(1014)				_hx_tmp1 = (point->x < Camera->viewOffsetWidth);
            			}
            			else {
HXLINE(1014)				_hx_tmp1 = false;
            			}
HXDLIN(1014)			if (_hx_tmp1) {
HXLINE(1014)				_hx_tmp = ((point->y + this->frameHeight) > Camera->viewOffsetY);
            			}
            			else {
HXLINE(1014)				_hx_tmp = false;
            			}
HXDLIN(1014)			if (_hx_tmp) {
HXLINE(1014)				return (point->y < Camera->viewOffsetHeight);
            			}
            			else {
HXLINE(1014)				return false;
            			}
            		}
HXLINE(1017)		Float radiusX = this->_halfSize->x;
HXLINE(1018)		Float radiusY = this->_halfSize->y;
HXLINE(1020)		Float ox = this->origin->x;
HXLINE(1021)		if ((ox != radiusX)) {
HXLINE(1023)			Float x1 = ::Math_obj::abs(ox);
HXLINE(1024)			Float x2 = ::Math_obj::abs((( (Float)(this->frameWidth) ) - ox));
HXLINE(1025)			radiusX = ::Math_obj::max(x2,x1);
            		}
HXLINE(1028)		Float oy = this->origin->y;
HXLINE(1029)		if ((oy != radiusY)) {
HXLINE(1031)			Float y1 = ::Math_obj::abs(oy);
HXLINE(1032)			Float y2 = ::Math_obj::abs((( (Float)(this->frameHeight) ) - oy));
HXLINE(1033)			radiusY = ::Math_obj::max(y2,y1);
            		}
HXLINE(1036)		radiusX = (radiusX * ::Math_obj::abs(this->scale->x));
HXLINE(1037)		radiusY = (radiusY * ::Math_obj::abs(this->scale->y));
HXLINE(1038)		Float radius = ::Math_obj::max(radiusX,radiusY);
HXLINE(1039)		radius = (radius * ((Float)1.41421356237));
HXLINE(1041)		minX = (minX + (ox - radius));
HXLINE(1042)		minY = (minY + (oy - radius));
HXLINE(1044)		Float doubleRadius = (( (Float)(2) ) * radius);
HXLINE(1046)		this->_point->set(minX,minY);
HXLINE(1047)		 ::flixel::math::FlxPoint point = this->_point;
HXDLIN(1047)		bool _hx_tmp3;
HXDLIN(1047)		bool _hx_tmp4;
HXDLIN(1047)		if (((point->x + doubleRadius) > Camera->viewOffsetX)) {
HXLINE(1047)			_hx_tmp4 = (point->x < Camera->viewOffsetWidth);
            		}
            		else {
HXLINE(1047)			_hx_tmp4 = false;
            		}
HXDLIN(1047)		if (_hx_tmp4) {
HXLINE(1047)			_hx_tmp3 = ((point->y + doubleRadius) > Camera->viewOffsetY);
            		}
            		else {
HXLINE(1047)			_hx_tmp3 = false;
            		}
HXDLIN(1047)		if (_hx_tmp3) {
HXLINE(1047)			return (point->y < Camera->viewOffsetHeight);
            		}
            		else {
HXLINE(1047)			return false;
            		}
HXDLIN(1047)		return false;
            	}


bool FlxSprite_obj::isSimpleRender( ::flixel::FlxCamera camera){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1055_isSimpleRender)
HXLINE(1056)		if (::flixel::FlxG_obj::renderTile) {
HXLINE(1057)			return false;
            		}
HXLINE(1059)		return this->isSimpleRenderBlit(camera);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,isSimpleRender,return )

bool FlxSprite_obj::isSimpleRenderBlit( ::flixel::FlxCamera camera){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1071_isSimpleRenderBlit)
HXLINE(1072)		bool result;
HXDLIN(1072)		bool result1;
HXDLIN(1072)		bool result2;
HXDLIN(1072)		bool result3;
HXDLIN(1072)		if ((this->angle != 0)) {
HXLINE(1072)			result3 = (this->bakedRotationAngle > 0);
            		}
            		else {
HXLINE(1072)			result3 = true;
            		}
HXDLIN(1072)		if (result3) {
HXLINE(1072)			result2 = (this->scale->x == 1);
            		}
            		else {
HXLINE(1072)			result2 = false;
            		}
HXDLIN(1072)		if (result2) {
HXLINE(1072)			result1 = (this->scale->y == 1);
            		}
            		else {
HXLINE(1072)			result1 = false;
            		}
HXDLIN(1072)		if (result1) {
HXLINE(1072)			result = ::hx::IsNull( this->blend );
            		}
            		else {
HXLINE(1072)			result = false;
            		}
HXLINE(1073)		if (result) {
HXLINE(1073)			if (::hx::IsNotNull( camera )) {
HXLINE(1073)				result = this->isPixelPerfectRender(camera);
            			}
            			else {
HXLINE(1073)				result = ( (bool)(this->pixelPerfectRender) );
            			}
            		}
            		else {
HXLINE(1073)			result = false;
            		}
HXLINE(1074)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,isSimpleRenderBlit,return )

void FlxSprite_obj::setFacingFlip(int Direction,bool FlipX,bool FlipY){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1089_setFacingFlip)
HXDLIN(1089)		this->_facingFlip->set(Direction, ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("x",78,00,00,00),FlipX)
            			->setFixed(1,HX_("y",79,00,00,00),FlipY)));
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxSprite_obj,setFacingFlip,(void))

 ::flixel::FlxSprite FlxSprite_obj::setFrames( ::flixel::graphics::frames::FlxFramesCollection Frames,::hx::Null< bool >  __o_saveAnimations){
            		bool saveAnimations = __o_saveAnimations.Default(true);
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1101_setFrames)
HXLINE(1102)		if (saveAnimations) {
HXLINE(1104)			 ::haxe::ds::StringMap animations = this->animation->_animations;
HXLINE(1105)			bool reverse = false;
HXLINE(1106)			int index = 0;
HXLINE(1107)			int frameIndex = this->animation->frameIndex;
HXLINE(1108)			::String currName = null();
HXLINE(1110)			if (::hx::IsNotNull( this->animation->_curAnim )) {
HXLINE(1112)				reverse = this->animation->_curAnim->reversed;
HXLINE(1113)				index = this->animation->_curAnim->curFrame;
HXLINE(1114)				currName = this->animation->_curAnim->name;
            			}
HXLINE(1117)			this->animation->_animations = null();
HXLINE(1118)			this->set_frames(Frames);
HXLINE(1119)			this->set_frame(this->frames->frames->__get(frameIndex).StaticCast<  ::flixel::graphics::frames::FlxFrame >());
HXLINE(1120)			this->animation->_animations = animations;
HXLINE(1122)			if (::hx::IsNotNull( currName )) {
HXLINE(1124)				this->animation->play(currName,false,reverse,index);
            			}
            		}
            		else {
HXLINE(1129)			this->set_frames(Frames);
            		}
HXLINE(1132)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxSprite_obj,setFrames,return )

 ::openfl::display::BitmapData FlxSprite_obj::get_pixels(){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1138_get_pixels)
HXDLIN(1138)		if (::hx::IsNull( this->graphic )) {
HXDLIN(1138)			return null();
            		}
            		else {
HXDLIN(1138)			return this->graphic->bitmap;
            		}
HXDLIN(1138)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,get_pixels,return )

 ::openfl::display::BitmapData FlxSprite_obj::set_pixels( ::openfl::display::BitmapData Pixels){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1143_set_pixels)
HXLINE(1144)		::String key = ::flixel::FlxG_obj::bitmap->findKeyForBitmap(Pixels);
HXLINE(1146)		if (::hx::IsNull( key )) {
HXLINE(1148)			key = ::flixel::FlxG_obj::bitmap->getUniqueKey(null());
HXLINE(1149)			this->set_graphic(::flixel::FlxG_obj::bitmap->add(Pixels,false,key));
            		}
            		else {
HXLINE(1153)			this->set_graphic(( ( ::flixel::graphics::FlxGraphic)(::flixel::FlxG_obj::bitmap->_cache->get(key)) ));
            		}
HXLINE(1156)		this->set_frames(this->graphic->get_imageFrame());
HXLINE(1157)		return Pixels;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_pixels,return )

 ::flixel::graphics::frames::FlxFrame FlxSprite_obj::set_frame( ::flixel::graphics::frames::FlxFrame Value){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1162_set_frame)
HXLINE(1163)		this->frame = Value;
HXLINE(1164)		if (::hx::IsNotNull( this->frame )) {
HXLINE(1166)			{
HXLINE(1166)				if (::hx::IsNotNull( this->frame )) {
HXLINE(1166)					this->frameWidth = ::Std_obj::_hx_int(this->frame->sourceSize->x);
HXDLIN(1166)					this->frameHeight = ::Std_obj::_hx_int(this->frame->sourceSize->y);
            				}
HXDLIN(1166)				this->_halfSize->set((((Float)0.5) * ( (Float)(this->frameWidth) )),(((Float)0.5) * ( (Float)(this->frameHeight) )));
HXDLIN(1166)				{
HXLINE(1166)					this->_flashRect->x = ( (Float)(0) );
HXDLIN(1166)					this->_flashRect->y = ( (Float)(0) );
HXDLIN(1166)					this->_flashRect->width = ( (Float)(this->frameWidth) );
HXDLIN(1166)					this->_flashRect->height = ( (Float)(this->frameHeight) );
            				}
            			}
HXLINE(1167)			this->dirty = true;
            		}
            		else {
HXLINE(1169)			bool _hx_tmp;
HXDLIN(1169)			bool _hx_tmp1;
HXDLIN(1169)			if (::hx::IsNotNull( this->frames )) {
HXLINE(1169)				_hx_tmp1 = ::hx::IsNotNull( this->frames->frames );
            			}
            			else {
HXLINE(1169)				_hx_tmp1 = false;
            			}
HXDLIN(1169)			if (_hx_tmp1) {
HXLINE(1169)				_hx_tmp = (this->numFrames > 0);
            			}
            			else {
HXLINE(1169)				_hx_tmp = false;
            			}
HXDLIN(1169)			if (_hx_tmp) {
HXLINE(1171)				this->frame = this->frames->frames->__get(0).StaticCast<  ::flixel::graphics::frames::FlxFrame >();
HXLINE(1172)				this->dirty = true;
            			}
            			else {
HXLINE(1176)				return null();
            			}
            		}
HXLINE(1179)		if (::flixel::FlxG_obj::renderTile) {
HXLINE(1181)			this->_frameGraphic = ( ( ::flixel::graphics::FlxGraphic)(::flixel::util::FlxDestroyUtil_obj::destroy(this->_frameGraphic)) );
            		}
HXLINE(1184)		if (::hx::IsNotNull( this->clipRect )) {
HXLINE(1186)			this->_frame = this->frame->clipTo(this->clipRect,this->_frame);
            		}
            		else {
HXLINE(1190)			this->_frame = this->frame->copyTo(this->_frame);
            		}
HXLINE(1193)		return this->frame;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_frame,return )

int FlxSprite_obj::set_facing(int Direction){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1198_set_facing)
HXLINE(1199)		 ::Dynamic flip = this->_facingFlip->get(Direction);
HXLINE(1200)		if (::hx::IsNotNull( flip )) {
HXLINE(1202)			this->set_flipX(( (bool)(flip->__Field(HX_("x",78,00,00,00),::hx::paccDynamic)) ));
HXLINE(1203)			this->set_flipY(( (bool)(flip->__Field(HX_("y",79,00,00,00),::hx::paccDynamic)) ));
            		}
HXLINE(1206)		return (this->facing = Direction);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_facing,return )

Float FlxSprite_obj::set_alpha(Float Alpha){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1211_set_alpha)
HXLINE(1212)		if ((this->alpha == Alpha)) {
HXLINE(1214)			return Alpha;
            		}
HXLINE(1216)		Float lowerBound;
HXDLIN(1216)		if ((Alpha < 0)) {
HXLINE(1216)			lowerBound = ( (Float)(0) );
            		}
            		else {
HXLINE(1216)			lowerBound = Alpha;
            		}
HXDLIN(1216)		Float _hx_tmp;
HXDLIN(1216)		if ((lowerBound > 1)) {
HXLINE(1216)			_hx_tmp = ( (Float)(1) );
            		}
            		else {
HXLINE(1216)			_hx_tmp = lowerBound;
            		}
HXDLIN(1216)		this->alpha = _hx_tmp;
HXLINE(1217)		this->updateColorTransform();
HXLINE(1218)		return this->alpha;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_alpha,return )

int FlxSprite_obj::set_color(int Color){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1223_set_color)
HXLINE(1224)		if ((this->color == Color)) {
HXLINE(1226)			return Color;
            		}
HXLINE(1228)		this->color = Color;
HXLINE(1229)		this->updateColorTransform();
HXLINE(1230)		return this->color;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_color,return )

Float FlxSprite_obj::set_angle(Float Value){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1235_set_angle)
HXLINE(1236)		bool newAngle = (this->angle != Value);
HXLINE(1237)		Float ret = this->super::set_angle(Value);
HXLINE(1238)		if (newAngle) {
HXLINE(1240)			this->_angleChanged = true;
HXLINE(1241)			this->animation->update(( (Float)(0) ));
            		}
HXLINE(1243)		return ret;
            	}


void FlxSprite_obj::updateTrig(){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1249_updateTrig)
HXDLIN(1249)		if (this->_angleChanged) {
HXLINE(1251)			Float radians = (this->angle * (::Math_obj::PI / ( (Float)(180) )));
HXLINE(1252)			this->_sinAngle = ::Math_obj::sin(radians);
HXLINE(1253)			this->_cosAngle = ::Math_obj::cos(radians);
HXLINE(1254)			this->_angleChanged = false;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,updateTrig,(void))

 ::Dynamic FlxSprite_obj::set_blend( ::Dynamic Value){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1261_set_blend)
HXDLIN(1261)		return (this->blend = Value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_blend,return )

 ::flixel::graphics::FlxGraphic FlxSprite_obj::set_graphic( ::flixel::graphics::FlxGraphic Value){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1270_set_graphic)
HXLINE(1271)		 ::flixel::graphics::FlxGraphic oldGraphic = this->graphic;
HXLINE(1273)		bool _hx_tmp;
HXDLIN(1273)		if (::hx::IsInstanceNotEq( this->graphic,Value )) {
HXLINE(1273)			_hx_tmp = ::hx::IsNotNull( Value );
            		}
            		else {
HXLINE(1273)			_hx_tmp = false;
            		}
HXDLIN(1273)		if (_hx_tmp) {
HXLINE(1275)			Value->set_useCount((Value->get_useCount() + 1));
            		}
HXLINE(1278)		bool _hx_tmp1;
HXDLIN(1278)		if (::hx::IsNotNull( oldGraphic )) {
HXLINE(1278)			_hx_tmp1 = ::hx::IsInstanceNotEq( oldGraphic,Value );
            		}
            		else {
HXLINE(1278)			_hx_tmp1 = false;
            		}
HXDLIN(1278)		if (_hx_tmp1) {
HXLINE(1280)			oldGraphic->set_useCount((oldGraphic->get_useCount() - 1));
            		}
HXLINE(1283)		return (this->graphic = Value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_graphic,return )

 ::flixel::math::FlxRect FlxSprite_obj::set_clipRect( ::flixel::math::FlxRect rect){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1288_set_clipRect)
HXLINE(1289)		if (::hx::IsNotNull( rect )) {
HXLINE(1290)			rect->x = ( (Float)(::Math_obj::round(rect->x)) );
HXDLIN(1290)			rect->y = ( (Float)(::Math_obj::round(rect->y)) );
HXDLIN(1290)			rect->width = ( (Float)(::Math_obj::round(rect->width)) );
HXDLIN(1290)			rect->height = ( (Float)(::Math_obj::round(rect->height)) );
HXDLIN(1290)			this->clipRect = rect;
            		}
            		else {
HXLINE(1292)			this->clipRect = null();
            		}
HXLINE(1294)		if (::hx::IsNotNull( this->frames )) {
HXLINE(1295)			this->set_frame(this->frames->frames->__get(this->animation->frameIndex).StaticCast<  ::flixel::graphics::frames::FlxFrame >());
            		}
HXLINE(1297)		return rect;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_clipRect,return )

 ::flixel::graphics::frames::FlxFramesCollection FlxSprite_obj::set_frames( ::flixel::graphics::frames::FlxFramesCollection Frames){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1309_set_frames)
HXLINE(1310)		if (::hx::IsNotNull( this->animation )) {
HXLINE(1312)			this->animation->destroyAnimations();
            		}
HXLINE(1315)		if (::hx::IsNotNull( Frames )) {
HXLINE(1317)			this->set_graphic(Frames->parent);
HXLINE(1318)			this->frames = Frames;
HXLINE(1319)			this->set_frame(this->frames->frames->__get(0).StaticCast<  ::flixel::graphics::frames::FlxFrame >());
HXLINE(1320)			this->numFrames = this->frames->frames->length;
HXLINE(1321)			this->resetHelpers();
HXLINE(1322)			this->bakedRotationAngle = ( (Float)(0) );
HXLINE(1323)			this->animation->set_frameIndex(0);
HXLINE(1324)			this->graphicLoaded();
            		}
            		else {
HXLINE(1328)			this->frames = null();
HXLINE(1329)			this->set_frame(null());
HXLINE(1330)			this->set_graphic(null());
            		}
HXLINE(1333)		return Frames;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_frames,return )

bool FlxSprite_obj::set_flipX(bool Value){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1338_set_flipX)
HXLINE(1339)		if (::flixel::FlxG_obj::renderTile) {
HXLINE(1341)			int _hx_tmp;
HXDLIN(1341)			if (Value) {
HXLINE(1341)				_hx_tmp = -1;
            			}
            			else {
HXLINE(1341)				_hx_tmp = 1;
            			}
HXDLIN(1341)			this->_facingHorizontalMult = _hx_tmp;
            		}
HXLINE(1343)		bool _hx_tmp;
HXDLIN(1343)		if ((this->flipX == Value)) {
HXLINE(1343)			_hx_tmp = this->dirty;
            		}
            		else {
HXLINE(1343)			_hx_tmp = true;
            		}
HXDLIN(1343)		this->dirty = _hx_tmp;
HXLINE(1344)		return (this->flipX = Value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_flipX,return )

bool FlxSprite_obj::set_flipY(bool Value){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1349_set_flipY)
HXLINE(1350)		if (::flixel::FlxG_obj::renderTile) {
HXLINE(1352)			int _hx_tmp;
HXDLIN(1352)			if (Value) {
HXLINE(1352)				_hx_tmp = -1;
            			}
            			else {
HXLINE(1352)				_hx_tmp = 1;
            			}
HXDLIN(1352)			this->_facingVerticalMult = _hx_tmp;
            		}
HXLINE(1354)		bool _hx_tmp;
HXDLIN(1354)		if ((this->flipY == Value)) {
HXLINE(1354)			_hx_tmp = this->dirty;
            		}
            		else {
HXLINE(1354)			_hx_tmp = true;
            		}
HXDLIN(1354)		this->dirty = _hx_tmp;
HXLINE(1355)		return (this->flipY = Value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_flipY,return )

bool FlxSprite_obj::set_antialiasing(bool value){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1361_set_antialiasing)
HXDLIN(1361)		return (this->antialiasing = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_antialiasing,return )

bool FlxSprite_obj::set_useFramePixels(bool value){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1367_set_useFramePixels)
HXDLIN(1367)		if (::flixel::FlxG_obj::renderTile) {
HXLINE(1369)			if ((value != this->useFramePixels)) {
HXLINE(1371)				this->useFramePixels = value;
HXLINE(1372)				this->set_frame(this->frame);
HXLINE(1374)				if (value) {
HXLINE(1376)					this->updateFramePixels();
            				}
            			}
HXLINE(1380)			return value;
            		}
            		else {
HXLINE(1384)			this->useFramePixels = true;
HXLINE(1385)			return true;
            		}
HXLINE(1367)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_useFramePixels,return )

bool FlxSprite_obj::checkFlipX(){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1391_checkFlipX)
HXLINE(1392)		bool doFlipX = (this->flipX != this->_frame->flipX);
HXLINE(1393)		if (::hx::IsNotNull( this->animation->_curAnim )) {
HXLINE(1395)			return (doFlipX != this->animation->_curAnim->flipX);
            		}
HXLINE(1397)		return doFlipX;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,checkFlipX,return )

bool FlxSprite_obj::checkFlipY(){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1402_checkFlipY)
HXLINE(1403)		bool doFlipY = (this->flipY != this->_frame->flipY);
HXLINE(1404)		if (::hx::IsNotNull( this->animation->_curAnim )) {
HXLINE(1406)			return (doFlipY != this->animation->_curAnim->flipY);
            		}
HXLINE(1408)		return doFlipY;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,checkFlipY,return )


::hx::ObjectPtr< FlxSprite_obj > FlxSprite_obj::__new( ::Dynamic __o_X, ::Dynamic __o_Y, ::Dynamic SimpleGraphic) {
	::hx::ObjectPtr< FlxSprite_obj > __this = new FlxSprite_obj();
	__this->__construct(__o_X,__o_Y,SimpleGraphic);
	return __this;
}

::hx::ObjectPtr< FlxSprite_obj > FlxSprite_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic __o_X, ::Dynamic __o_Y, ::Dynamic SimpleGraphic) {
	FlxSprite_obj *__this = (FlxSprite_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxSprite_obj), true, "flixel.FlxSprite"));
	*(void **)__this = FlxSprite_obj::_hx_vtable;
	__this->__construct(__o_X,__o_Y,SimpleGraphic);
	return __this;
}

FlxSprite_obj::FlxSprite_obj()
{
}

void FlxSprite_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxSprite);
	HX_MARK_MEMBER_NAME(animation,"animation");
	HX_MARK_MEMBER_NAME(framePixels,"framePixels");
	HX_MARK_MEMBER_NAME(useFramePixels,"useFramePixels");
	HX_MARK_MEMBER_NAME(antialiasing,"antialiasing");
	HX_MARK_MEMBER_NAME(dirty,"dirty");
	HX_MARK_MEMBER_NAME(frame,"frame");
	HX_MARK_MEMBER_NAME(frameWidth,"frameWidth");
	HX_MARK_MEMBER_NAME(frameHeight,"frameHeight");
	HX_MARK_MEMBER_NAME(numFrames,"numFrames");
	HX_MARK_MEMBER_NAME(frames,"frames");
	HX_MARK_MEMBER_NAME(graphic,"graphic");
	HX_MARK_MEMBER_NAME(bakedRotationAngle,"bakedRotationAngle");
	HX_MARK_MEMBER_NAME(alpha,"alpha");
	HX_MARK_MEMBER_NAME(facing,"facing");
	HX_MARK_MEMBER_NAME(flipX,"flipX");
	HX_MARK_MEMBER_NAME(flipY,"flipY");
	HX_MARK_MEMBER_NAME(origin,"origin");
	HX_MARK_MEMBER_NAME(offset,"offset");
	HX_MARK_MEMBER_NAME(scale,"scale");
	HX_MARK_MEMBER_NAME(blend,"blend");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(colorTransform,"colorTransform");
	HX_MARK_MEMBER_NAME(useColorTransform,"useColorTransform");
	HX_MARK_MEMBER_NAME(clipRect,"clipRect");
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_MEMBER_NAME(_frame,"_frame");
	HX_MARK_MEMBER_NAME(_frameGraphic,"_frameGraphic");
	HX_MARK_MEMBER_NAME(_facingHorizontalMult,"_facingHorizontalMult");
	HX_MARK_MEMBER_NAME(_facingVerticalMult,"_facingVerticalMult");
	HX_MARK_MEMBER_NAME(_flashPoint,"_flashPoint");
	HX_MARK_MEMBER_NAME(_flashRect,"_flashRect");
	HX_MARK_MEMBER_NAME(_flashRect2,"_flashRect2");
	HX_MARK_MEMBER_NAME(_flashPointZero,"_flashPointZero");
	HX_MARK_MEMBER_NAME(_matrix,"_matrix");
	HX_MARK_MEMBER_NAME(_halfSize,"_halfSize");
	HX_MARK_MEMBER_NAME(_sinAngle,"_sinAngle");
	HX_MARK_MEMBER_NAME(_cosAngle,"_cosAngle");
	HX_MARK_MEMBER_NAME(_angleChanged,"_angleChanged");
	HX_MARK_MEMBER_NAME(_facingFlip,"_facingFlip");
	 ::flixel::FlxObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxSprite_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(animation,"animation");
	HX_VISIT_MEMBER_NAME(framePixels,"framePixels");
	HX_VISIT_MEMBER_NAME(useFramePixels,"useFramePixels");
	HX_VISIT_MEMBER_NAME(antialiasing,"antialiasing");
	HX_VISIT_MEMBER_NAME(dirty,"dirty");
	HX_VISIT_MEMBER_NAME(frame,"frame");
	HX_VISIT_MEMBER_NAME(frameWidth,"frameWidth");
	HX_VISIT_MEMBER_NAME(frameHeight,"frameHeight");
	HX_VISIT_MEMBER_NAME(numFrames,"numFrames");
	HX_VISIT_MEMBER_NAME(frames,"frames");
	HX_VISIT_MEMBER_NAME(graphic,"graphic");
	HX_VISIT_MEMBER_NAME(bakedRotationAngle,"bakedRotationAngle");
	HX_VISIT_MEMBER_NAME(alpha,"alpha");
	HX_VISIT_MEMBER_NAME(facing,"facing");
	HX_VISIT_MEMBER_NAME(flipX,"flipX");
	HX_VISIT_MEMBER_NAME(flipY,"flipY");
	HX_VISIT_MEMBER_NAME(origin,"origin");
	HX_VISIT_MEMBER_NAME(offset,"offset");
	HX_VISIT_MEMBER_NAME(scale,"scale");
	HX_VISIT_MEMBER_NAME(blend,"blend");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(colorTransform,"colorTransform");
	HX_VISIT_MEMBER_NAME(useColorTransform,"useColorTransform");
	HX_VISIT_MEMBER_NAME(clipRect,"clipRect");
	HX_VISIT_MEMBER_NAME(shader,"shader");
	HX_VISIT_MEMBER_NAME(_frame,"_frame");
	HX_VISIT_MEMBER_NAME(_frameGraphic,"_frameGraphic");
	HX_VISIT_MEMBER_NAME(_facingHorizontalMult,"_facingHorizontalMult");
	HX_VISIT_MEMBER_NAME(_facingVerticalMult,"_facingVerticalMult");
	HX_VISIT_MEMBER_NAME(_flashPoint,"_flashPoint");
	HX_VISIT_MEMBER_NAME(_flashRect,"_flashRect");
	HX_VISIT_MEMBER_NAME(_flashRect2,"_flashRect2");
	HX_VISIT_MEMBER_NAME(_flashPointZero,"_flashPointZero");
	HX_VISIT_MEMBER_NAME(_matrix,"_matrix");
	HX_VISIT_MEMBER_NAME(_halfSize,"_halfSize");
	HX_VISIT_MEMBER_NAME(_sinAngle,"_sinAngle");
	HX_VISIT_MEMBER_NAME(_cosAngle,"_cosAngle");
	HX_VISIT_MEMBER_NAME(_angleChanged,"_angleChanged");
	HX_VISIT_MEMBER_NAME(_facingFlip,"_facingFlip");
	 ::flixel::FlxObject_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxSprite_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return ::hx::Val( draw_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"dirty") ) { return ::hx::Val( dirty ); }
		if (HX_FIELD_EQ(inName,"frame") ) { return ::hx::Val( frame ); }
		if (HX_FIELD_EQ(inName,"alpha") ) { return ::hx::Val( alpha ); }
		if (HX_FIELD_EQ(inName,"flipX") ) { return ::hx::Val( flipX ); }
		if (HX_FIELD_EQ(inName,"flipY") ) { return ::hx::Val( flipY ); }
		if (HX_FIELD_EQ(inName,"scale") ) { return ::hx::Val( scale ); }
		if (HX_FIELD_EQ(inName,"blend") ) { return ::hx::Val( blend ); }
		if (HX_FIELD_EQ(inName,"color") ) { return ::hx::Val( color ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		if (HX_FIELD_EQ(inName,"stamp") ) { return ::hx::Val( stamp_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"pixels") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_pixels() ); }
		if (HX_FIELD_EQ(inName,"frames") ) { return ::hx::Val( frames ); }
		if (HX_FIELD_EQ(inName,"facing") ) { return ::hx::Val( facing ); }
		if (HX_FIELD_EQ(inName,"origin") ) { return ::hx::Val( origin ); }
		if (HX_FIELD_EQ(inName,"offset") ) { return ::hx::Val( offset ); }
		if (HX_FIELD_EQ(inName,"shader") ) { return ::hx::Val( shader ); }
		if (HX_FIELD_EQ(inName,"_frame") ) { return ::hx::Val( _frame ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"graphic") ) { return ::hx::Val( graphic ); }
		if (HX_FIELD_EQ(inName,"_matrix") ) { return ::hx::Val( _matrix ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"clipRect") ) { return ::hx::Val( clipRect ); }
		if (HX_FIELD_EQ(inName,"initVars") ) { return ::hx::Val( initVars_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"animation") ) { return ::hx::Val( animation ); }
		if (HX_FIELD_EQ(inName,"numFrames") ) { return ::hx::Val( numFrames ); }
		if (HX_FIELD_EQ(inName,"_halfSize") ) { return ::hx::Val( _halfSize ); }
		if (HX_FIELD_EQ(inName,"_sinAngle") ) { return ::hx::Val( _sinAngle ); }
		if (HX_FIELD_EQ(inName,"_cosAngle") ) { return ::hx::Val( _cosAngle ); }
		if (HX_FIELD_EQ(inName,"resetSize") ) { return ::hx::Val( resetSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"drawFrame") ) { return ::hx::Val( drawFrame_dyn() ); }
		if (HX_FIELD_EQ(inName,"calcFrame") ) { return ::hx::Val( calcFrame_dyn() ); }
		if (HX_FIELD_EQ(inName,"setFrames") ) { return ::hx::Val( setFrames_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_frame") ) { return ::hx::Val( set_frame_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_alpha") ) { return ::hx::Val( set_alpha_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return ::hx::Val( set_color_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_angle") ) { return ::hx::Val( set_angle_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_blend") ) { return ::hx::Val( set_blend_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_flipX") ) { return ::hx::Val( set_flipX_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_flipY") ) { return ::hx::Val( set_flipY_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"frameWidth") ) { return ::hx::Val( frameWidth ); }
		if (HX_FIELD_EQ(inName,"_flashRect") ) { return ::hx::Val( _flashRect ); }
		if (HX_FIELD_EQ(inName,"resetFrame") ) { return ::hx::Val( resetFrame_dyn() ); }
		if (HX_FIELD_EQ(inName,"drawSimple") ) { return ::hx::Val( drawSimple_dyn() ); }
		if (HX_FIELD_EQ(inName,"isOnScreen") ) { return ::hx::Val( isOnScreen_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_pixels") ) { return ::hx::Val( get_pixels_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_pixels") ) { return ::hx::Val( set_pixels_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_facing") ) { return ::hx::Val( set_facing_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateTrig") ) { return ::hx::Val( updateTrig_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_frames") ) { return ::hx::Val( set_frames_dyn() ); }
		if (HX_FIELD_EQ(inName,"checkFlipX") ) { return ::hx::Val( checkFlipX_dyn() ); }
		if (HX_FIELD_EQ(inName,"checkFlipY") ) { return ::hx::Val( checkFlipY_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"framePixels") ) { return ::hx::Val( framePixels ); }
		if (HX_FIELD_EQ(inName,"frameHeight") ) { return ::hx::Val( frameHeight ); }
		if (HX_FIELD_EQ(inName,"_flashPoint") ) { return ::hx::Val( _flashPoint ); }
		if (HX_FIELD_EQ(inName,"_flashRect2") ) { return ::hx::Val( _flashRect2 ); }
		if (HX_FIELD_EQ(inName,"_facingFlip") ) { return ::hx::Val( _facingFlip ); }
		if (HX_FIELD_EQ(inName,"loadGraphic") ) { return ::hx::Val( loadGraphic_dyn() ); }
		if (HX_FIELD_EQ(inName,"makeGraphic") ) { return ::hx::Val( makeGraphic_dyn() ); }
		if (HX_FIELD_EQ(inName,"drawComplex") ) { return ::hx::Val( drawComplex_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_graphic") ) { return ::hx::Val( set_graphic_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"antialiasing") ) { return ::hx::Val( antialiasing ); }
		if (HX_FIELD_EQ(inName,"updateHitbox") ) { return ::hx::Val( updateHitbox_dyn() ); }
		if (HX_FIELD_EQ(inName,"resetHelpers") ) { return ::hx::Val( resetHelpers_dyn() ); }
		if (HX_FIELD_EQ(inName,"centerOrigin") ) { return ::hx::Val( centerOrigin_dyn() ); }
		if (HX_FIELD_EQ(inName,"replaceColor") ) { return ::hx::Val( replaceColor_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_clipRect") ) { return ::hx::Val( set_clipRect_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_frameGraphic") ) { return ::hx::Val( _frameGraphic ); }
		if (HX_FIELD_EQ(inName,"_angleChanged") ) { return ::hx::Val( _angleChanged ); }
		if (HX_FIELD_EQ(inName,"graphicLoaded") ) { return ::hx::Val( graphicLoaded_dyn() ); }
		if (HX_FIELD_EQ(inName,"centerOffsets") ) { return ::hx::Val( centerOffsets_dyn() ); }
		if (HX_FIELD_EQ(inName,"setFacingFlip") ) { return ::hx::Val( setFacingFlip_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"useFramePixels") ) { return ::hx::Val( useFramePixels ); }
		if (HX_FIELD_EQ(inName,"colorTransform") ) { return ::hx::Val( colorTransform ); }
		if (HX_FIELD_EQ(inName,"resetFrameSize") ) { return ::hx::Val( resetFrameSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"setGraphicSize") ) { return ::hx::Val( setGraphicSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"isSimpleRender") ) { return ::hx::Val( isSimpleRender_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_flashPointZero") ) { return ::hx::Val( _flashPointZero ); }
		if (HX_FIELD_EQ(inName,"updateAnimation") ) { return ::hx::Val( updateAnimation_dyn() ); }
		if (HX_FIELD_EQ(inName,"checkEmptyFrame") ) { return ::hx::Val( checkEmptyFrame_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"loadRotatedFrame") ) { return ::hx::Val( loadRotatedFrame_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_antialiasing") ) { return ::hx::Val( set_antialiasing_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"useColorTransform") ) { return ::hx::Val( useColorTransform ); }
		if (HX_FIELD_EQ(inName,"setColorTransform") ) { return ::hx::Val( setColorTransform_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateFramePixels") ) { return ::hx::Val( updateFramePixels_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"bakedRotationAngle") ) { return ::hx::Val( bakedRotationAngle ); }
		if (HX_FIELD_EQ(inName,"loadRotatedGraphic") ) { return ::hx::Val( loadRotatedGraphic_dyn() ); }
		if (HX_FIELD_EQ(inName,"resetSizeFromFrame") ) { return ::hx::Val( resetSizeFromFrame_dyn() ); }
		if (HX_FIELD_EQ(inName,"pixelsOverlapPoint") ) { return ::hx::Val( pixelsOverlapPoint_dyn() ); }
		if (HX_FIELD_EQ(inName,"getGraphicMidpoint") ) { return ::hx::Val( getGraphicMidpoint_dyn() ); }
		if (HX_FIELD_EQ(inName,"isSimpleRenderBlit") ) { return ::hx::Val( isSimpleRenderBlit_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_useFramePixels") ) { return ::hx::Val( set_useFramePixels_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_facingVerticalMult") ) { return ::hx::Val( _facingVerticalMult ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"updateColorTransform") ) { return ::hx::Val( updateColorTransform_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_facingHorizontalMult") ) { return ::hx::Val( _facingHorizontalMult ); }
		if (HX_FIELD_EQ(inName,"loadGraphicFromSprite") ) { return ::hx::Val( loadGraphicFromSprite_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxSprite_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"dirty") ) { dirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frame") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_frame(inValue.Cast<  ::flixel::graphics::frames::FlxFrame >()) );frame=inValue.Cast<  ::flixel::graphics::frames::FlxFrame >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alpha") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_alpha(inValue.Cast< Float >()) );alpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"flipX") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_flipX(inValue.Cast< bool >()) );flipX=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"flipY") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_flipY(inValue.Cast< bool >()) );flipY=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scale") ) { scale=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blend") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_blend(inValue.Cast<  ::Dynamic >()) );blend=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_color(inValue.Cast< int >()) );color=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"pixels") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_pixels(inValue.Cast<  ::openfl::display::BitmapData >()) ); }
		if (HX_FIELD_EQ(inName,"frames") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_frames(inValue.Cast<  ::flixel::graphics::frames::FlxFramesCollection >()) );frames=inValue.Cast<  ::flixel::graphics::frames::FlxFramesCollection >(); return inValue; }
		if (HX_FIELD_EQ(inName,"facing") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_facing(inValue.Cast< int >()) );facing=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"origin") ) { origin=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offset") ) { offset=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast<  ::flixel::graphics::tile::FlxGraphicsShader >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_frame") ) { _frame=inValue.Cast<  ::flixel::graphics::frames::FlxFrame >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"graphic") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_graphic(inValue.Cast<  ::flixel::graphics::FlxGraphic >()) );graphic=inValue.Cast<  ::flixel::graphics::FlxGraphic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_matrix") ) { _matrix=inValue.Cast<  ::flixel::math::FlxMatrix >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"clipRect") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_clipRect(inValue.Cast<  ::flixel::math::FlxRect >()) );clipRect=inValue.Cast<  ::flixel::math::FlxRect >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"animation") ) { animation=inValue.Cast<  ::flixel::animation::FlxAnimationController >(); return inValue; }
		if (HX_FIELD_EQ(inName,"numFrames") ) { numFrames=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_halfSize") ) { _halfSize=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_sinAngle") ) { _sinAngle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_cosAngle") ) { _cosAngle=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"frameWidth") ) { frameWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashRect") ) { _flashRect=inValue.Cast<  ::openfl::geom::Rectangle >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"framePixels") ) { framePixels=inValue.Cast<  ::openfl::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frameHeight") ) { frameHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashPoint") ) { _flashPoint=inValue.Cast<  ::openfl::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashRect2") ) { _flashRect2=inValue.Cast<  ::openfl::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_facingFlip") ) { _facingFlip=inValue.Cast<  ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"antialiasing") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_antialiasing(inValue.Cast< bool >()) );antialiasing=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_frameGraphic") ) { _frameGraphic=inValue.Cast<  ::flixel::graphics::FlxGraphic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_angleChanged") ) { _angleChanged=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"useFramePixels") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_useFramePixels(inValue.Cast< bool >()) );useFramePixels=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"colorTransform") ) { colorTransform=inValue.Cast<  ::openfl::geom::ColorTransform >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_flashPointZero") ) { _flashPointZero=inValue.Cast<  ::openfl::geom::Point >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"useColorTransform") ) { useColorTransform=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"bakedRotationAngle") ) { bakedRotationAngle=inValue.Cast< Float >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_facingVerticalMult") ) { _facingVerticalMult=inValue.Cast< int >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_facingHorizontalMult") ) { _facingHorizontalMult=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxSprite_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("animation",04,ef,34,4b));
	outFields->push(HX_("framePixels",3a,bb,f1,6a));
	outFields->push(HX_("useFramePixels",33,0e,5a,8e));
	outFields->push(HX_("antialiasing",f4,16,b3,48));
	outFields->push(HX_("dirty",12,50,d0,d9));
	outFields->push(HX_("pixels",2d,ef,a9,8c));
	outFields->push(HX_("frame",2d,78,83,06));
	outFields->push(HX_("frameWidth",99,ea,88,ad));
	outFields->push(HX_("frameHeight",f4,d3,93,e0));
	outFields->push(HX_("numFrames",8c,fa,86,5d));
	outFields->push(HX_("frames",a6,af,85,ac));
	outFields->push(HX_("graphic",a8,5a,07,74));
	outFields->push(HX_("bakedRotationAngle",8a,d1,9c,9b));
	outFields->push(HX_("alpha",5e,a7,96,21));
	outFields->push(HX_("facing",1a,3f,05,e4));
	outFields->push(HX_("flipX",0b,45,92,02));
	outFields->push(HX_("flipY",0c,45,92,02));
	outFields->push(HX_("origin",e6,19,01,4b));
	outFields->push(HX_("offset",93,97,3f,60));
	outFields->push(HX_("scale",8a,ce,ce,78));
	outFields->push(HX_("blend",51,e8,f4,b4));
	outFields->push(HX_("color",63,71,5c,4a));
	outFields->push(HX_("colorTransform",89,d7,3f,ad));
	outFields->push(HX_("useColorTransform",30,e6,ec,72));
	outFields->push(HX_("clipRect",14,90,6a,58));
	outFields->push(HX_("shader",25,bf,20,1d));
	outFields->push(HX_("_frame",6e,bf,6a,02));
	outFields->push(HX_("_frameGraphic",da,ac,00,f7));
	outFields->push(HX_("_facingHorizontalMult",8d,29,a1,51));
	outFields->push(HX_("_facingVerticalMult",df,11,0c,86));
	outFields->push(HX_("_flashPoint",9f,1d,2a,b7));
	outFields->push(HX_("_flashRect",b5,c2,f3,5d));
	outFields->push(HX_("_flashRect2",dd,9b,56,d7));
	outFields->push(HX_("_flashPointZero",67,14,7d,fb));
	outFields->push(HX_("_matrix",e0,47,3f,2a));
	outFields->push(HX_("_halfSize",73,43,4d,66));
	outFields->push(HX_("_sinAngle",fa,54,de,b8));
	outFields->push(HX_("_cosAngle",6b,c9,00,1f));
	outFields->push(HX_("_angleChanged",40,98,5c,b2));
	outFields->push(HX_("_facingFlip",06,e0,9c,02));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxSprite_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::animation::FlxAnimationController */ ,(int)offsetof(FlxSprite_obj,animation),HX_("animation",04,ef,34,4b)},
	{::hx::fsObject /*  ::openfl::display::BitmapData */ ,(int)offsetof(FlxSprite_obj,framePixels),HX_("framePixels",3a,bb,f1,6a)},
	{::hx::fsBool,(int)offsetof(FlxSprite_obj,useFramePixels),HX_("useFramePixels",33,0e,5a,8e)},
	{::hx::fsBool,(int)offsetof(FlxSprite_obj,antialiasing),HX_("antialiasing",f4,16,b3,48)},
	{::hx::fsBool,(int)offsetof(FlxSprite_obj,dirty),HX_("dirty",12,50,d0,d9)},
	{::hx::fsObject /*  ::flixel::graphics::frames::FlxFrame */ ,(int)offsetof(FlxSprite_obj,frame),HX_("frame",2d,78,83,06)},
	{::hx::fsInt,(int)offsetof(FlxSprite_obj,frameWidth),HX_("frameWidth",99,ea,88,ad)},
	{::hx::fsInt,(int)offsetof(FlxSprite_obj,frameHeight),HX_("frameHeight",f4,d3,93,e0)},
	{::hx::fsInt,(int)offsetof(FlxSprite_obj,numFrames),HX_("numFrames",8c,fa,86,5d)},
	{::hx::fsObject /*  ::flixel::graphics::frames::FlxFramesCollection */ ,(int)offsetof(FlxSprite_obj,frames),HX_("frames",a6,af,85,ac)},
	{::hx::fsObject /*  ::flixel::graphics::FlxGraphic */ ,(int)offsetof(FlxSprite_obj,graphic),HX_("graphic",a8,5a,07,74)},
	{::hx::fsFloat,(int)offsetof(FlxSprite_obj,bakedRotationAngle),HX_("bakedRotationAngle",8a,d1,9c,9b)},
	{::hx::fsFloat,(int)offsetof(FlxSprite_obj,alpha),HX_("alpha",5e,a7,96,21)},
	{::hx::fsInt,(int)offsetof(FlxSprite_obj,facing),HX_("facing",1a,3f,05,e4)},
	{::hx::fsBool,(int)offsetof(FlxSprite_obj,flipX),HX_("flipX",0b,45,92,02)},
	{::hx::fsBool,(int)offsetof(FlxSprite_obj,flipY),HX_("flipY",0c,45,92,02)},
	{::hx::fsObject /*  ::flixel::math::FlxPoint */ ,(int)offsetof(FlxSprite_obj,origin),HX_("origin",e6,19,01,4b)},
	{::hx::fsObject /*  ::flixel::math::FlxPoint */ ,(int)offsetof(FlxSprite_obj,offset),HX_("offset",93,97,3f,60)},
	{::hx::fsObject /*  ::flixel::math::FlxPoint */ ,(int)offsetof(FlxSprite_obj,scale),HX_("scale",8a,ce,ce,78)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxSprite_obj,blend),HX_("blend",51,e8,f4,b4)},
	{::hx::fsInt,(int)offsetof(FlxSprite_obj,color),HX_("color",63,71,5c,4a)},
	{::hx::fsObject /*  ::openfl::geom::ColorTransform */ ,(int)offsetof(FlxSprite_obj,colorTransform),HX_("colorTransform",89,d7,3f,ad)},
	{::hx::fsBool,(int)offsetof(FlxSprite_obj,useColorTransform),HX_("useColorTransform",30,e6,ec,72)},
	{::hx::fsObject /*  ::flixel::math::FlxRect */ ,(int)offsetof(FlxSprite_obj,clipRect),HX_("clipRect",14,90,6a,58)},
	{::hx::fsObject /*  ::flixel::graphics::tile::FlxGraphicsShader */ ,(int)offsetof(FlxSprite_obj,shader),HX_("shader",25,bf,20,1d)},
	{::hx::fsObject /*  ::flixel::graphics::frames::FlxFrame */ ,(int)offsetof(FlxSprite_obj,_frame),HX_("_frame",6e,bf,6a,02)},
	{::hx::fsObject /*  ::flixel::graphics::FlxGraphic */ ,(int)offsetof(FlxSprite_obj,_frameGraphic),HX_("_frameGraphic",da,ac,00,f7)},
	{::hx::fsInt,(int)offsetof(FlxSprite_obj,_facingHorizontalMult),HX_("_facingHorizontalMult",8d,29,a1,51)},
	{::hx::fsInt,(int)offsetof(FlxSprite_obj,_facingVerticalMult),HX_("_facingVerticalMult",df,11,0c,86)},
	{::hx::fsObject /*  ::openfl::geom::Point */ ,(int)offsetof(FlxSprite_obj,_flashPoint),HX_("_flashPoint",9f,1d,2a,b7)},
	{::hx::fsObject /*  ::openfl::geom::Rectangle */ ,(int)offsetof(FlxSprite_obj,_flashRect),HX_("_flashRect",b5,c2,f3,5d)},
	{::hx::fsObject /*  ::openfl::geom::Rectangle */ ,(int)offsetof(FlxSprite_obj,_flashRect2),HX_("_flashRect2",dd,9b,56,d7)},
	{::hx::fsObject /*  ::openfl::geom::Point */ ,(int)offsetof(FlxSprite_obj,_flashPointZero),HX_("_flashPointZero",67,14,7d,fb)},
	{::hx::fsObject /*  ::flixel::math::FlxMatrix */ ,(int)offsetof(FlxSprite_obj,_matrix),HX_("_matrix",e0,47,3f,2a)},
	{::hx::fsObject /*  ::flixel::math::FlxPoint */ ,(int)offsetof(FlxSprite_obj,_halfSize),HX_("_halfSize",73,43,4d,66)},
	{::hx::fsFloat,(int)offsetof(FlxSprite_obj,_sinAngle),HX_("_sinAngle",fa,54,de,b8)},
	{::hx::fsFloat,(int)offsetof(FlxSprite_obj,_cosAngle),HX_("_cosAngle",6b,c9,00,1f)},
	{::hx::fsBool,(int)offsetof(FlxSprite_obj,_angleChanged),HX_("_angleChanged",40,98,5c,b2)},
	{::hx::fsObject /*  ::haxe::ds::IntMap */ ,(int)offsetof(FlxSprite_obj,_facingFlip),HX_("_facingFlip",06,e0,9c,02)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxSprite_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxSprite_obj_sMemberFields[] = {
	HX_("animation",04,ef,34,4b),
	HX_("framePixels",3a,bb,f1,6a),
	HX_("useFramePixels",33,0e,5a,8e),
	HX_("antialiasing",f4,16,b3,48),
	HX_("dirty",12,50,d0,d9),
	HX_("frame",2d,78,83,06),
	HX_("frameWidth",99,ea,88,ad),
	HX_("frameHeight",f4,d3,93,e0),
	HX_("numFrames",8c,fa,86,5d),
	HX_("frames",a6,af,85,ac),
	HX_("graphic",a8,5a,07,74),
	HX_("bakedRotationAngle",8a,d1,9c,9b),
	HX_("alpha",5e,a7,96,21),
	HX_("facing",1a,3f,05,e4),
	HX_("flipX",0b,45,92,02),
	HX_("flipY",0c,45,92,02),
	HX_("origin",e6,19,01,4b),
	HX_("offset",93,97,3f,60),
	HX_("scale",8a,ce,ce,78),
	HX_("blend",51,e8,f4,b4),
	HX_("color",63,71,5c,4a),
	HX_("colorTransform",89,d7,3f,ad),
	HX_("useColorTransform",30,e6,ec,72),
	HX_("clipRect",14,90,6a,58),
	HX_("shader",25,bf,20,1d),
	HX_("_frame",6e,bf,6a,02),
	HX_("_frameGraphic",da,ac,00,f7),
	HX_("_facingHorizontalMult",8d,29,a1,51),
	HX_("_facingVerticalMult",df,11,0c,86),
	HX_("_flashPoint",9f,1d,2a,b7),
	HX_("_flashRect",b5,c2,f3,5d),
	HX_("_flashRect2",dd,9b,56,d7),
	HX_("_flashPointZero",67,14,7d,fb),
	HX_("_matrix",e0,47,3f,2a),
	HX_("_halfSize",73,43,4d,66),
	HX_("_sinAngle",fa,54,de,b8),
	HX_("_cosAngle",6b,c9,00,1f),
	HX_("_angleChanged",40,98,5c,b2),
	HX_("_facingFlip",06,e0,9c,02),
	HX_("initVars",dc,5a,00,53),
	HX_("destroy",fa,2c,86,24),
	HX_("clone",5d,13,63,48),
	HX_("loadGraphicFromSprite",d1,7c,73,38),
	HX_("loadGraphic",22,19,a5,44),
	HX_("loadRotatedGraphic",c5,14,74,62),
	HX_("loadRotatedFrame",0a,81,76,8b),
	HX_("makeGraphic",5a,82,11,b8),
	HX_("graphicLoaded",cd,84,20,16),
	HX_("resetSize",30,aa,3f,92),
	HX_("resetFrameSize",bf,c3,44,94),
	HX_("resetSizeFromFrame",13,d2,50,8c),
	HX_("resetFrame",de,af,1f,ef),
	HX_("setGraphicSize",07,d7,f8,2d),
	HX_("updateHitbox",81,94,eb,56),
	HX_("resetHelpers",36,89,3d,32),
	HX_("update",09,86,05,87),
	HX_("updateAnimation",bb,bf,bf,9a),
	HX_("checkEmptyFrame",48,b5,2f,00),
	HX_("draw",04,2c,70,42),
	HX_("drawSimple",56,7f,42,fa),
	HX_("drawComplex",8c,aa,b9,cc),
	HX_("stamp",03,70,0b,84),
	HX_("drawFrame",89,ad,8e,ce),
	HX_("centerOffsets",2b,a0,b2,c1),
	HX_("centerOrigin",9b,41,36,0f),
	HX_("replaceColor",8f,5c,eb,3d),
	HX_("setColorTransform",cb,5e,21,43),
	HX_("updateColorTransform",72,0f,d2,2f),
	HX_("pixelsOverlapPoint",16,82,44,e0),
	HX_("calcFrame",58,93,8c,f9),
	HX_("updateFramePixels",b1,67,5b,cf),
	HX_("getGraphicMidpoint",9a,b4,dd,57),
	HX_("isOnScreen",f5,43,b9,a1),
	HX_("isSimpleRender",32,f4,2a,47),
	HX_("isSimpleRenderBlit",87,59,b0,df),
	HX_("setFacingFlip",29,51,8b,d1),
	HX_("setFrames",e8,24,2d,0c),
	HX_("get_pixels",f6,5e,31,7d),
	HX_("set_pixels",6a,fd,ae,80),
	HX_("set_frame",90,c0,7d,2d),
	HX_("set_facing",57,4d,0a,d8),
	HX_("set_alpha",c1,ef,90,48),
	HX_("set_color",c6,b9,56,71),
	HX_("set_angle",36,8c,dc,49),
	HX_("updateTrig",85,87,b8,05),
	HX_("set_blend",b4,30,ef,db),
	HX_("set_graphic",cb,c1,6e,04),
	HX_("set_clipRect",91,67,7d,22),
	HX_("set_frames",e3,bd,8a,a0),
	HX_("set_flipX",6e,8d,8c,29),
	HX_("set_flipY",6f,8d,8c,29),
	HX_("set_antialiasing",f1,f0,93,a3),
	HX_("set_useFramePixels",70,21,a3,06),
	HX_("checkFlipX",23,47,82,12),
	HX_("checkFlipY",24,47,82,12),
	::String(null()) };

::hx::Class FlxSprite_obj::__mClass;

void FlxSprite_obj::__register()
{
	FlxSprite_obj _hx_dummy;
	FlxSprite_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.FlxSprite",65,ad,eb,e3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxSprite_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxSprite_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxSprite_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxSprite_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
