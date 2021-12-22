#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
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
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_lime__internal_backend_native_NativeOpenGLRenderContext
#include <lime/_internal/backend/native/NativeOpenGLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GL
#include <lime/graphics/opengl/GL.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif
#ifndef INCLUDED_openfl_utils_IAssetCache
#include <openfl/utils/IAssetCache.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c7913b0c5b2fbcc7_24_new,"flixel.system.frontEnds.BitmapFrontEnd","new",0x0f2331ed,"flixel.system.frontEnds.BitmapFrontEnd.new","flixel/system/frontEnds/BitmapFrontEnd.hx",24,0x91a05ae2)
HX_LOCAL_STACK_FRAME(_hx_pos_c7913b0c5b2fbcc7_53_onAssetsReload,"flixel.system.frontEnds.BitmapFrontEnd","onAssetsReload",0x7811d38e,"flixel.system.frontEnds.BitmapFrontEnd.onAssetsReload","flixel/system/frontEnds/BitmapFrontEnd.hx",53,0x91a05ae2)
HX_LOCAL_STACK_FRAME(_hx_pos_c7913b0c5b2fbcc7_69_onContext,"flixel.system.frontEnds.BitmapFrontEnd","onContext",0x0e82d7dd,"flixel.system.frontEnds.BitmapFrontEnd.onContext","flixel/system/frontEnds/BitmapFrontEnd.hx",69,0x91a05ae2)
HX_LOCAL_STACK_FRAME(_hx_pos_c7913b0c5b2fbcc7_86_dumpCache,"flixel.system.frontEnds.BitmapFrontEnd","dumpCache",0xf899b9bb,"flixel.system.frontEnds.BitmapFrontEnd.dumpCache","flixel/system/frontEnds/BitmapFrontEnd.hx",86,0x91a05ae2)
HX_LOCAL_STACK_FRAME(_hx_pos_c7913b0c5b2fbcc7_103_undumpCache,"flixel.system.frontEnds.BitmapFrontEnd","undumpCache",0xfe6eed82,"flixel.system.frontEnds.BitmapFrontEnd.undumpCache","flixel/system/frontEnds/BitmapFrontEnd.hx",103,0x91a05ae2)
HX_LOCAL_STACK_FRAME(_hx_pos_c7913b0c5b2fbcc7_122_checkCache,"flixel.system.frontEnds.BitmapFrontEnd","checkCache",0xe81c366d,"flixel.system.frontEnds.BitmapFrontEnd.checkCache","flixel/system/frontEnds/BitmapFrontEnd.hx",122,0x91a05ae2)
HX_LOCAL_STACK_FRAME(_hx_pos_c7913b0c5b2fbcc7_137_create,"flixel.system.frontEnds.BitmapFrontEnd","create",0xd385bb8f,"flixel.system.frontEnds.BitmapFrontEnd.create","flixel/system/frontEnds/BitmapFrontEnd.hx",137,0x91a05ae2)
HX_LOCAL_STACK_FRAME(_hx_pos_c7913b0c5b2fbcc7_152_add,"flixel.system.frontEnds.BitmapFrontEnd","add",0x0f1953ae,"flixel.system.frontEnds.BitmapFrontEnd.add","flixel/system/frontEnds/BitmapFrontEnd.hx",152,0x91a05ae2)
HX_LOCAL_STACK_FRAME(_hx_pos_c7913b0c5b2fbcc7_173_addGraphic,"flixel.system.frontEnds.BitmapFrontEnd","addGraphic",0x72a9209a,"flixel.system.frontEnds.BitmapFrontEnd.addGraphic","flixel/system/frontEnds/BitmapFrontEnd.hx",173,0x91a05ae2)
HX_LOCAL_STACK_FRAME(_hx_pos_c7913b0c5b2fbcc7_185_get,"flixel.system.frontEnds.BitmapFrontEnd","get",0x0f1de223,"flixel.system.frontEnds.BitmapFrontEnd.get","flixel/system/frontEnds/BitmapFrontEnd.hx",185,0x91a05ae2)
HX_LOCAL_STACK_FRAME(_hx_pos_c7913b0c5b2fbcc7_195_findKeyForBitmap,"flixel.system.frontEnds.BitmapFrontEnd","findKeyForBitmap",0x03085a65,"flixel.system.frontEnds.BitmapFrontEnd.findKeyForBitmap","flixel/system/frontEnds/BitmapFrontEnd.hx",195,0x91a05ae2)
HX_LOCAL_STACK_FRAME(_hx_pos_c7913b0c5b2fbcc7_213_getKeyForClass,"flixel.system.frontEnds.BitmapFrontEnd","getKeyForClass",0x26696fcb,"flixel.system.frontEnds.BitmapFrontEnd.getKeyForClass","flixel/system/frontEnds/BitmapFrontEnd.hx",213,0x91a05ae2)
HX_LOCAL_STACK_FRAME(_hx_pos_c7913b0c5b2fbcc7_225_generateKey,"flixel.system.frontEnds.BitmapFrontEnd","generateKey",0xe3b3c7f7,"flixel.system.frontEnds.BitmapFrontEnd.generateKey","flixel/system/frontEnds/BitmapFrontEnd.hx",225,0x91a05ae2)
HX_LOCAL_STACK_FRAME(_hx_pos_c7913b0c5b2fbcc7_243_getUniqueKey,"flixel.system.frontEnds.BitmapFrontEnd","getUniqueKey",0x2898506b,"flixel.system.frontEnds.BitmapFrontEnd.getUniqueKey","flixel/system/frontEnds/BitmapFrontEnd.hx",243,0x91a05ae2)
HX_LOCAL_STACK_FRAME(_hx_pos_c7913b0c5b2fbcc7_274_getKeyWithSpacesAndBorders,"flixel.system.frontEnds.BitmapFrontEnd","getKeyWithSpacesAndBorders",0x04327ebf,"flixel.system.frontEnds.BitmapFrontEnd.getKeyWithSpacesAndBorders","flixel/system/frontEnds/BitmapFrontEnd.hx",274,0x91a05ae2)
HX_LOCAL_STACK_FRAME(_hx_pos_c7913b0c5b2fbcc7_298_remove,"flixel.system.frontEnds.BitmapFrontEnd","remove",0x5bfef0d7,"flixel.system.frontEnds.BitmapFrontEnd.remove","flixel/system/frontEnds/BitmapFrontEnd.hx",298,0x91a05ae2)
HX_LOCAL_STACK_FRAME(_hx_pos_c7913b0c5b2fbcc7_311_removeByKey,"flixel.system.frontEnds.BitmapFrontEnd","removeByKey",0x593bffb1,"flixel.system.frontEnds.BitmapFrontEnd.removeByKey","flixel/system/frontEnds/BitmapFrontEnd.hx",311,0x91a05ae2)
HX_LOCAL_STACK_FRAME(_hx_pos_c7913b0c5b2fbcc7_323_removeIfNoUse,"flixel.system.frontEnds.BitmapFrontEnd","removeIfNoUse",0x6b036552,"flixel.system.frontEnds.BitmapFrontEnd.removeIfNoUse","flixel/system/frontEnds/BitmapFrontEnd.hx",323,0x91a05ae2)
HX_LOCAL_STACK_FRAME(_hx_pos_c7913b0c5b2fbcc7_332_clearCache,"flixel.system.frontEnds.BitmapFrontEnd","clearCache",0xad367388,"flixel.system.frontEnds.BitmapFrontEnd.clearCache","flixel/system/frontEnds/BitmapFrontEnd.hx",332,0x91a05ae2)
HX_LOCAL_STACK_FRAME(_hx_pos_c7913b0c5b2fbcc7_352_removeKey,"flixel.system.frontEnds.BitmapFrontEnd","removeKey",0xe84d3108,"flixel.system.frontEnds.BitmapFrontEnd.removeKey","flixel/system/frontEnds/BitmapFrontEnd.hx",352,0x91a05ae2)
HX_LOCAL_STACK_FRAME(_hx_pos_c7913b0c5b2fbcc7_363_reset,"flixel.system.frontEnds.BitmapFrontEnd","reset",0xd15ce89c,"flixel.system.frontEnds.BitmapFrontEnd.reset","flixel/system/frontEnds/BitmapFrontEnd.hx",363,0x91a05ae2)
HX_LOCAL_STACK_FRAME(_hx_pos_c7913b0c5b2fbcc7_386_clearUnused,"flixel.system.frontEnds.BitmapFrontEnd","clearUnused",0x9cfedd10,"flixel.system.frontEnds.BitmapFrontEnd.clearUnused","flixel/system/frontEnds/BitmapFrontEnd.hx",386,0x91a05ae2)
HX_LOCAL_STACK_FRAME(_hx_pos_c7913b0c5b2fbcc7_399_get_maxTextureSize,"flixel.system.frontEnds.BitmapFrontEnd","get_maxTextureSize",0x8d42ecd4,"flixel.system.frontEnds.BitmapFrontEnd.get_maxTextureSize","flixel/system/frontEnds/BitmapFrontEnd.hx",399,0x91a05ae2)
HX_LOCAL_STACK_FRAME(_hx_pos_c7913b0c5b2fbcc7_404_get_whitePixel,"flixel.system.frontEnds.BitmapFrontEnd","get_whitePixel",0xa476cef9,"flixel.system.frontEnds.BitmapFrontEnd.get_whitePixel","flixel/system/frontEnds/BitmapFrontEnd.hx",404,0x91a05ae2)
namespace flixel{
namespace _hx_system{
namespace frontEnds{

void BitmapFrontEnd_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_c7913b0c5b2fbcc7_24_new)
HXLINE(  44)		this->_lastUniqueKeyIndex = 0;
HXLINE(  48)		this->reset();
            	}

Dynamic BitmapFrontEnd_obj::__CreateEmpty() { return new BitmapFrontEnd_obj; }

void *BitmapFrontEnd_obj::_hx_vtable = 0;

Dynamic BitmapFrontEnd_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BitmapFrontEnd_obj > _hx_result = new BitmapFrontEnd_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool BitmapFrontEnd_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3df39a77;
}

void BitmapFrontEnd_obj::onAssetsReload( ::Dynamic _){
            	HX_STACKFRAME(&_hx_pos_c7913b0c5b2fbcc7_53_onAssetsReload)
HXDLIN(  53)		 ::Dynamic key = this->_cache->keys();
HXDLIN(  53)		while(( (bool)(key->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXDLIN(  53)			::String key1 = ( (::String)(key->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  55)			 ::flixel::graphics::FlxGraphic obj = ( ( ::flixel::graphics::FlxGraphic)(this->_cache->get(key1)) );
HXLINE(  56)			bool _hx_tmp;
HXDLIN(  56)			if (::hx::IsNotNull( obj )) {
HXLINE(  56)				if (::hx::IsNull( obj->assetsClass )) {
HXLINE(  56)					_hx_tmp = ::hx::IsNotNull( obj->assetsKey );
            				}
            				else {
HXLINE(  56)					_hx_tmp = true;
            				}
            			}
            			else {
HXLINE(  56)				_hx_tmp = false;
            			}
HXDLIN(  56)			if (_hx_tmp) {
HXLINE(  58)				obj->onAssetsReload();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFrontEnd_obj,onAssetsReload,(void))

void BitmapFrontEnd_obj::onContext(){
            	HX_STACKFRAME(&_hx_pos_c7913b0c5b2fbcc7_69_onContext)
HXDLIN(  69)		 ::Dynamic key = this->_cache->keys();
HXDLIN(  69)		while(( (bool)(key->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXDLIN(  69)			::String key1 = ( (::String)(key->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  71)			 ::flixel::graphics::FlxGraphic obj = ( ( ::flixel::graphics::FlxGraphic)(this->_cache->get(key1)) );
HXLINE(  72)			bool _hx_tmp;
HXDLIN(  72)			if (::hx::IsNotNull( obj )) {
HXLINE(  72)				_hx_tmp = obj->isDumped;
            			}
            			else {
HXLINE(  72)				_hx_tmp = false;
            			}
HXDLIN(  72)			if (_hx_tmp) {
HXLINE(  74)				obj->onContext();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(BitmapFrontEnd_obj,onContext,(void))

void BitmapFrontEnd_obj::dumpCache(){
            	HX_STACKFRAME(&_hx_pos_c7913b0c5b2fbcc7_86_dumpCache)
HXDLIN(  86)		 ::Dynamic key = this->_cache->keys();
HXDLIN(  86)		while(( (bool)(key->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXDLIN(  86)			::String key1 = ( (::String)(key->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  88)			 ::flixel::graphics::FlxGraphic obj = ( ( ::flixel::graphics::FlxGraphic)(this->_cache->get(key1)) );
HXLINE(  89)			bool _hx_tmp;
HXDLIN(  89)			if (::hx::IsNotNull( obj )) {
HXLINE(  89)				if (::hx::IsNull( obj->assetsClass )) {
HXLINE(  89)					_hx_tmp = ::hx::IsNotNull( obj->assetsKey );
            				}
            				else {
HXLINE(  89)					_hx_tmp = true;
            				}
            			}
            			else {
HXLINE(  89)				_hx_tmp = false;
            			}
HXDLIN(  89)			if (_hx_tmp) {
HXLINE(  91)				obj->dump();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(BitmapFrontEnd_obj,dumpCache,(void))

void BitmapFrontEnd_obj::undumpCache(){
            	HX_STACKFRAME(&_hx_pos_c7913b0c5b2fbcc7_103_undumpCache)
HXDLIN( 103)		 ::Dynamic key = this->_cache->keys();
HXDLIN( 103)		while(( (bool)(key->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXDLIN( 103)			::String key1 = ( (::String)(key->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 105)			 ::flixel::graphics::FlxGraphic obj = ( ( ::flixel::graphics::FlxGraphic)(this->_cache->get(key1)) );
HXLINE( 106)			bool _hx_tmp;
HXDLIN( 106)			if (::hx::IsNotNull( obj )) {
HXLINE( 106)				_hx_tmp = obj->isDumped;
            			}
            			else {
HXLINE( 106)				_hx_tmp = false;
            			}
HXDLIN( 106)			if (_hx_tmp) {
HXLINE( 108)				obj->undump();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(BitmapFrontEnd_obj,undumpCache,(void))

bool BitmapFrontEnd_obj::checkCache(::String Key){
            	HX_STACKFRAME(&_hx_pos_c7913b0c5b2fbcc7_122_checkCache)
HXDLIN( 122)		return ::hx::IsNotNull( ( ( ::flixel::graphics::FlxGraphic)(this->_cache->get(Key)) ) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFrontEnd_obj,checkCache,return )

 ::flixel::graphics::FlxGraphic BitmapFrontEnd_obj::create(int Width,int Height,int Color,::hx::Null< bool >  __o_Unique,::String Key){
            		bool Unique = __o_Unique.Default(false);
            	HX_STACKFRAME(&_hx_pos_c7913b0c5b2fbcc7_137_create)
HXDLIN( 137)		return ::flixel::graphics::FlxGraphic_obj::fromRectangle(Width,Height,Color,Unique,Key);
            	}


HX_DEFINE_DYNAMIC_FUNC5(BitmapFrontEnd_obj,create,return )

 ::flixel::graphics::FlxGraphic BitmapFrontEnd_obj::add( ::Dynamic Graphic,::hx::Null< bool >  __o_Unique,::String Key){
            		bool Unique = __o_Unique.Default(false);
            	HX_STACKFRAME(&_hx_pos_c7913b0c5b2fbcc7_152_add)
HXLINE( 153)		if (::Std_obj::isOfType(Graphic,::hx::ClassOf< ::flixel::graphics::FlxGraphic >())) {
HXLINE( 155)			return ::flixel::graphics::FlxGraphic_obj::fromGraphic(( ( ::flixel::graphics::FlxGraphic)(Graphic) ),Unique,Key);
            		}
            		else {
HXLINE( 157)			if (::Std_obj::isOfType(Graphic,::hx::ClassOf< ::openfl::display::BitmapData >())) {
HXLINE( 159)				return ::flixel::graphics::FlxGraphic_obj::fromBitmapData(( ( ::openfl::display::BitmapData)(Graphic) ),Unique,Key,null());
            			}
            		}
HXLINE( 163)		return ::flixel::graphics::FlxGraphic_obj::fromAssetKey(::Std_obj::string(Graphic),Unique,Key,null());
            	}


HX_DEFINE_DYNAMIC_FUNC3(BitmapFrontEnd_obj,add,return )

 ::flixel::graphics::FlxGraphic BitmapFrontEnd_obj::addGraphic( ::flixel::graphics::FlxGraphic graphic){
            	HX_STACKFRAME(&_hx_pos_c7913b0c5b2fbcc7_173_addGraphic)
HXLINE( 174)		this->_cache->set(graphic->key,graphic);
HXLINE( 175)		return graphic;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFrontEnd_obj,addGraphic,return )

 ::flixel::graphics::FlxGraphic BitmapFrontEnd_obj::get(::String key){
            	HX_STACKFRAME(&_hx_pos_c7913b0c5b2fbcc7_185_get)
HXDLIN( 185)		return ( ( ::flixel::graphics::FlxGraphic)(this->_cache->get(key)) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFrontEnd_obj,get,return )

::String BitmapFrontEnd_obj::findKeyForBitmap( ::openfl::display::BitmapData bmd){
            	HX_STACKFRAME(&_hx_pos_c7913b0c5b2fbcc7_195_findKeyForBitmap)
HXLINE( 196)		{
HXLINE( 196)			 ::Dynamic key = this->_cache->keys();
HXDLIN( 196)			while(( (bool)(key->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 196)				::String key1 = ( (::String)(key->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 198)				 ::flixel::graphics::FlxGraphic obj = ( ( ::flixel::graphics::FlxGraphic)(this->_cache->get(key1)) );
HXLINE( 199)				bool _hx_tmp;
HXDLIN( 199)				if (::hx::IsNotNull( obj )) {
HXLINE( 199)					_hx_tmp = ::hx::IsInstanceEq( obj->bitmap,bmd );
            				}
            				else {
HXLINE( 199)					_hx_tmp = false;
            				}
HXDLIN( 199)				if (_hx_tmp) {
HXLINE( 200)					return key1;
            				}
            			}
            		}
HXLINE( 202)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFrontEnd_obj,findKeyForBitmap,return )

::String BitmapFrontEnd_obj::getKeyForClass(::hx::Class source){
            	HX_STACKFRAME(&_hx_pos_c7913b0c5b2fbcc7_213_getKeyForClass)
HXDLIN( 213)		return ::Type_obj::getClassName(source);
            	}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFrontEnd_obj,getKeyForClass,return )

::String BitmapFrontEnd_obj::generateKey(::String systemKey,::String userKey,::hx::Null< bool >  __o_unique){
            		bool unique = __o_unique.Default(false);
            	HX_STACKFRAME(&_hx_pos_c7913b0c5b2fbcc7_225_generateKey)
HXLINE( 226)		::String key = userKey;
HXLINE( 227)		if (::hx::IsNull( key )) {
HXLINE( 228)			key = systemKey;
            		}
HXLINE( 230)		bool _hx_tmp;
HXDLIN( 230)		if (!(unique)) {
HXLINE( 230)			_hx_tmp = ::hx::IsNull( key );
            		}
            		else {
HXLINE( 230)			_hx_tmp = true;
            		}
HXDLIN( 230)		if (_hx_tmp) {
HXLINE( 231)			key = this->getUniqueKey(key);
            		}
HXLINE( 233)		return key;
            	}


HX_DEFINE_DYNAMIC_FUNC3(BitmapFrontEnd_obj,generateKey,return )

::String BitmapFrontEnd_obj::getUniqueKey(::String baseKey){
            	HX_STACKFRAME(&_hx_pos_c7913b0c5b2fbcc7_243_getUniqueKey)
HXLINE( 244)		if (::hx::IsNull( baseKey )) {
HXLINE( 245)			baseKey = HX_("pixels",2d,ef,a9,8c);
            		}
HXLINE( 247)		if (::hx::IsNull( ( ( ::flixel::graphics::FlxGraphic)(this->_cache->get(baseKey)) ) )) {
HXLINE( 248)			return baseKey;
            		}
HXLINE( 250)		int i = this->_lastUniqueKeyIndex;
HXLINE( 251)		::String uniqueKey;
HXLINE( 252)		while(true){
HXLINE( 254)			i = (i + 1);
HXLINE( 255)			uniqueKey = (baseKey + i);
HXLINE( 252)			if (!(::hx::IsNotNull( ( ( ::flixel::graphics::FlxGraphic)(this->_cache->get(uniqueKey)) ) ))) {
HXLINE( 252)				goto _hx_goto_18;
            			}
            		}
            		_hx_goto_18:;
HXLINE( 259)		this->_lastUniqueKeyIndex = i;
HXLINE( 260)		return uniqueKey;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFrontEnd_obj,getUniqueKey,return )

::String BitmapFrontEnd_obj::getKeyWithSpacesAndBorders(::String baseKey, ::flixel::math::FlxPoint frameSize, ::flixel::math::FlxPoint frameSpacing, ::flixel::math::FlxPoint frameBorder, ::flixel::math::FlxRect region){
            	HX_STACKFRAME(&_hx_pos_c7913b0c5b2fbcc7_274_getKeyWithSpacesAndBorders)
HXLINE( 275)		::String result = baseKey;
HXLINE( 277)		if (::hx::IsNotNull( region )) {
HXLINE( 278)			result = (result + (((((((HX_("_Region:",27,96,a5,81) + region->x) + HX_("_",5f,00,00,00)) + region->y) + HX_("_",5f,00,00,00)) + region->width) + HX_("_",5f,00,00,00)) + region->height));
            		}
HXLINE( 280)		if (::hx::IsNotNull( frameSize )) {
HXLINE( 281)			result = (result + (((HX_("_FrameSize:",2b,0e,3a,29) + frameSize->x) + HX_("_",5f,00,00,00)) + frameSize->y));
            		}
HXLINE( 283)		if (::hx::IsNotNull( frameSpacing )) {
HXLINE( 284)			result = (result + (((HX_("_Spaces:",0e,b0,c1,98) + frameSpacing->x) + HX_("_",5f,00,00,00)) + frameSpacing->y));
            		}
HXLINE( 286)		if (::hx::IsNotNull( frameBorder )) {
HXLINE( 287)			result = (result + (((HX_("_Border:",2f,83,f2,39) + frameBorder->x) + HX_("_",5f,00,00,00)) + frameBorder->y));
            		}
HXLINE( 289)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC5(BitmapFrontEnd_obj,getKeyWithSpacesAndBorders,return )

void BitmapFrontEnd_obj::remove( ::flixel::graphics::FlxGraphic graphic){
            	HX_STACKFRAME(&_hx_pos_c7913b0c5b2fbcc7_298_remove)
HXDLIN( 298)		if (::hx::IsNotNull( graphic )) {
HXLINE( 300)			{
HXLINE( 300)				::String key = graphic->key;
HXDLIN( 300)				if (::hx::IsNotNull( key )) {
HXLINE( 300)					::openfl::utils::IAssetCache_obj::removeBitmapData(::openfl::utils::Assets_obj::cache,key);
HXDLIN( 300)					this->_cache->remove(key);
            				}
            			}
HXLINE( 301)			graphic->destroy();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFrontEnd_obj,remove,(void))

void BitmapFrontEnd_obj::removeByKey(::String key){
            	HX_STACKFRAME(&_hx_pos_c7913b0c5b2fbcc7_311_removeByKey)
HXDLIN( 311)		if (::hx::IsNotNull( key )) {
HXLINE( 313)			 ::flixel::graphics::FlxGraphic obj = ( ( ::flixel::graphics::FlxGraphic)(this->_cache->get(key)) );
HXLINE( 314)			if (::hx::IsNotNull( key )) {
HXLINE( 314)				::openfl::utils::IAssetCache_obj::removeBitmapData(::openfl::utils::Assets_obj::cache,key);
HXDLIN( 314)				this->_cache->remove(key);
            			}
HXLINE( 316)			if (::hx::IsNotNull( obj )) {
HXLINE( 317)				obj->destroy();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFrontEnd_obj,removeByKey,(void))

void BitmapFrontEnd_obj::removeIfNoUse( ::flixel::graphics::FlxGraphic graphic){
            	HX_STACKFRAME(&_hx_pos_c7913b0c5b2fbcc7_323_removeIfNoUse)
HXDLIN( 323)		bool _hx_tmp;
HXDLIN( 323)		bool _hx_tmp1;
HXDLIN( 323)		if (::hx::IsNotNull( graphic )) {
HXDLIN( 323)			_hx_tmp1 = (graphic->get_useCount() == 0);
            		}
            		else {
HXDLIN( 323)			_hx_tmp1 = false;
            		}
HXDLIN( 323)		if (_hx_tmp1) {
HXDLIN( 323)			_hx_tmp = !(graphic->persist);
            		}
            		else {
HXDLIN( 323)			_hx_tmp = false;
            		}
HXDLIN( 323)		if (_hx_tmp) {
HXLINE( 324)			this->remove(graphic);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFrontEnd_obj,removeIfNoUse,(void))

void BitmapFrontEnd_obj::clearCache(){
            	HX_GC_STACKFRAME(&_hx_pos_c7913b0c5b2fbcc7_332_clearCache)
HXLINE( 333)		if (::hx::IsNull( this->_cache )) {
HXLINE( 335)			this->_cache =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 336)			return;
            		}
HXLINE( 339)		{
HXLINE( 339)			 ::Dynamic key = this->_cache->keys();
HXDLIN( 339)			while(( (bool)(key->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 339)				::String key1 = ( (::String)(key->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 341)				 ::flixel::graphics::FlxGraphic obj = ( ( ::flixel::graphics::FlxGraphic)(this->_cache->get(key1)) );
HXLINE( 342)				bool _hx_tmp;
HXDLIN( 342)				bool _hx_tmp1;
HXDLIN( 342)				if (::hx::IsNotNull( obj )) {
HXLINE( 342)					_hx_tmp1 = !(obj->persist);
            				}
            				else {
HXLINE( 342)					_hx_tmp1 = false;
            				}
HXDLIN( 342)				if (_hx_tmp1) {
HXLINE( 342)					_hx_tmp = (obj->get_useCount() <= 0);
            				}
            				else {
HXLINE( 342)					_hx_tmp = false;
            				}
HXDLIN( 342)				if (_hx_tmp) {
HXLINE( 344)					if (::hx::IsNotNull( key1 )) {
HXLINE( 344)						::openfl::utils::IAssetCache_obj::removeBitmapData(::openfl::utils::Assets_obj::cache,key1);
HXDLIN( 344)						this->_cache->remove(key1);
            					}
HXLINE( 345)					obj->destroy();
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(BitmapFrontEnd_obj,clearCache,(void))

void BitmapFrontEnd_obj::removeKey(::String key){
            	HX_STACKFRAME(&_hx_pos_c7913b0c5b2fbcc7_352_removeKey)
HXDLIN( 352)		if (::hx::IsNotNull( key )) {
HXLINE( 354)			::openfl::utils::IAssetCache_obj::removeBitmapData(::openfl::utils::Assets_obj::cache,key);
HXLINE( 355)			this->_cache->remove(key);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFrontEnd_obj,removeKey,(void))

void BitmapFrontEnd_obj::reset(){
            	HX_GC_STACKFRAME(&_hx_pos_c7913b0c5b2fbcc7_363_reset)
HXLINE( 364)		if (::hx::IsNull( this->_cache )) {
HXLINE( 366)			this->_cache =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 367)			return;
            		}
HXLINE( 370)		{
HXLINE( 370)			 ::Dynamic key = this->_cache->keys();
HXDLIN( 370)			while(( (bool)(key->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 370)				::String key1 = ( (::String)(key->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 372)				 ::flixel::graphics::FlxGraphic obj = ( ( ::flixel::graphics::FlxGraphic)(this->_cache->get(key1)) );
HXLINE( 373)				if (::hx::IsNotNull( key1 )) {
HXLINE( 373)					::openfl::utils::IAssetCache_obj::removeBitmapData(::openfl::utils::Assets_obj::cache,key1);
HXDLIN( 373)					this->_cache->remove(key1);
            				}
HXLINE( 375)				if (::hx::IsNotNull( obj )) {
HXLINE( 376)					obj->destroy();
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(BitmapFrontEnd_obj,reset,(void))

void BitmapFrontEnd_obj::clearUnused(){
            	HX_STACKFRAME(&_hx_pos_c7913b0c5b2fbcc7_386_clearUnused)
HXDLIN( 386)		 ::Dynamic key = this->_cache->keys();
HXDLIN( 386)		while(( (bool)(key->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXDLIN( 386)			::String key1 = ( (::String)(key->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 388)			 ::flixel::graphics::FlxGraphic obj = ( ( ::flixel::graphics::FlxGraphic)(this->_cache->get(key1)) );
HXLINE( 389)			bool _hx_tmp;
HXDLIN( 389)			bool _hx_tmp1;
HXDLIN( 389)			bool _hx_tmp2;
HXDLIN( 389)			if (::hx::IsNotNull( obj )) {
HXLINE( 389)				_hx_tmp2 = (obj->get_useCount() <= 0);
            			}
            			else {
HXLINE( 389)				_hx_tmp2 = false;
            			}
HXDLIN( 389)			if (_hx_tmp2) {
HXLINE( 389)				_hx_tmp1 = !(obj->persist);
            			}
            			else {
HXLINE( 389)				_hx_tmp1 = false;
            			}
HXDLIN( 389)			if (_hx_tmp1) {
HXLINE( 389)				_hx_tmp = obj->get_destroyOnNoUse();
            			}
            			else {
HXLINE( 389)				_hx_tmp = false;
            			}
HXDLIN( 389)			if (_hx_tmp) {
HXLINE( 391)				this->removeByKey(key1);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(BitmapFrontEnd_obj,clearUnused,(void))

int BitmapFrontEnd_obj::get_maxTextureSize(){
            	HX_STACKFRAME(&_hx_pos_c7913b0c5b2fbcc7_399_get_maxTextureSize)
HXDLIN( 399)		return ( (int)(::lime::graphics::opengl::GL_obj::context->getParameter(3379)) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(BitmapFrontEnd_obj,get_maxTextureSize,return )

 ::flixel::graphics::frames::FlxFrame BitmapFrontEnd_obj::get_whitePixel(){
            	HX_GC_STACKFRAME(&_hx_pos_c7913b0c5b2fbcc7_404_get_whitePixel)
HXLINE( 405)		if (::hx::IsNull( this->_whitePixel )) {
HXLINE( 407)			 ::openfl::display::BitmapData bd =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,10,10,true,-1);
HXLINE( 408)			 ::flixel::graphics::FlxGraphic graphic = ::flixel::FlxG_obj::bitmap->add(bd,true,HX_("whitePixels",b6,92,ba,9e));
HXLINE( 409)			graphic->persist = true;
HXLINE( 410)			this->_whitePixel = graphic->get_imageFrame()->get_frame();
            		}
HXLINE( 413)		return this->_whitePixel;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BitmapFrontEnd_obj,get_whitePixel,return )


::hx::ObjectPtr< BitmapFrontEnd_obj > BitmapFrontEnd_obj::__new() {
	::hx::ObjectPtr< BitmapFrontEnd_obj > __this = new BitmapFrontEnd_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< BitmapFrontEnd_obj > BitmapFrontEnd_obj::__alloc(::hx::Ctx *_hx_ctx) {
	BitmapFrontEnd_obj *__this = (BitmapFrontEnd_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BitmapFrontEnd_obj), true, "flixel.system.frontEnds.BitmapFrontEnd"));
	*(void **)__this = BitmapFrontEnd_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

BitmapFrontEnd_obj::BitmapFrontEnd_obj()
{
}

void BitmapFrontEnd_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BitmapFrontEnd);
	HX_MARK_MEMBER_NAME(_cache,"_cache");
	HX_MARK_MEMBER_NAME(_whitePixel,"_whitePixel");
	HX_MARK_MEMBER_NAME(_lastUniqueKeyIndex,"_lastUniqueKeyIndex");
	HX_MARK_END_CLASS();
}

void BitmapFrontEnd_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_cache,"_cache");
	HX_VISIT_MEMBER_NAME(_whitePixel,"_whitePixel");
	HX_VISIT_MEMBER_NAME(_lastUniqueKeyIndex,"_lastUniqueKeyIndex");
}

::hx::Val BitmapFrontEnd_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return ::hx::Val( reset_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_cache") ) { return ::hx::Val( _cache ); }
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"remove") ) { return ::hx::Val( remove_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onContext") ) { return ::hx::Val( onContext_dyn() ); }
		if (HX_FIELD_EQ(inName,"dumpCache") ) { return ::hx::Val( dumpCache_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeKey") ) { return ::hx::Val( removeKey_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"whitePixel") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_whitePixel() ); }
		if (HX_FIELD_EQ(inName,"checkCache") ) { return ::hx::Val( checkCache_dyn() ); }
		if (HX_FIELD_EQ(inName,"addGraphic") ) { return ::hx::Val( addGraphic_dyn() ); }
		if (HX_FIELD_EQ(inName,"clearCache") ) { return ::hx::Val( clearCache_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_whitePixel") ) { return ::hx::Val( _whitePixel ); }
		if (HX_FIELD_EQ(inName,"undumpCache") ) { return ::hx::Val( undumpCache_dyn() ); }
		if (HX_FIELD_EQ(inName,"generateKey") ) { return ::hx::Val( generateKey_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeByKey") ) { return ::hx::Val( removeByKey_dyn() ); }
		if (HX_FIELD_EQ(inName,"clearUnused") ) { return ::hx::Val( clearUnused_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getUniqueKey") ) { return ::hx::Val( getUniqueKey_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"removeIfNoUse") ) { return ::hx::Val( removeIfNoUse_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"maxTextureSize") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_maxTextureSize() ); }
		if (HX_FIELD_EQ(inName,"onAssetsReload") ) { return ::hx::Val( onAssetsReload_dyn() ); }
		if (HX_FIELD_EQ(inName,"getKeyForClass") ) { return ::hx::Val( getKeyForClass_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_whitePixel") ) { return ::hx::Val( get_whitePixel_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"findKeyForBitmap") ) { return ::hx::Val( findKeyForBitmap_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_maxTextureSize") ) { return ::hx::Val( get_maxTextureSize_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_lastUniqueKeyIndex") ) { return ::hx::Val( _lastUniqueKeyIndex ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"getKeyWithSpacesAndBorders") ) { return ::hx::Val( getKeyWithSpacesAndBorders_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val BitmapFrontEnd_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_cache") ) { _cache=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_whitePixel") ) { _whitePixel=inValue.Cast<  ::flixel::graphics::frames::FlxFrame >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_lastUniqueKeyIndex") ) { _lastUniqueKeyIndex=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BitmapFrontEnd_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("maxTextureSize",f8,a6,7c,0a));
	outFields->push(HX_("whitePixel",1d,a7,f7,19));
	outFields->push(HX_("_cache",83,e1,fb,3c));
	outFields->push(HX_("_whitePixel",3c,74,81,ec));
	outFields->push(HX_("_lastUniqueKeyIndex",39,d6,77,aa));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BitmapFrontEnd_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(BitmapFrontEnd_obj,_cache),HX_("_cache",83,e1,fb,3c)},
	{::hx::fsObject /*  ::flixel::graphics::frames::FlxFrame */ ,(int)offsetof(BitmapFrontEnd_obj,_whitePixel),HX_("_whitePixel",3c,74,81,ec)},
	{::hx::fsInt,(int)offsetof(BitmapFrontEnd_obj,_lastUniqueKeyIndex),HX_("_lastUniqueKeyIndex",39,d6,77,aa)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *BitmapFrontEnd_obj_sStaticStorageInfo = 0;
#endif

static ::String BitmapFrontEnd_obj_sMemberFields[] = {
	HX_("_cache",83,e1,fb,3c),
	HX_("_whitePixel",3c,74,81,ec),
	HX_("_lastUniqueKeyIndex",39,d6,77,aa),
	HX_("onAssetsReload",fb,33,88,63),
	HX_("onContext",90,4e,22,f1),
	HX_("dumpCache",6e,30,39,db),
	HX_("undumpCache",f5,b6,df,60),
	HX_("checkCache",5a,9c,04,51),
	HX_("create",fc,66,0f,7c),
	HX_("add",21,f2,49,00),
	HX_("addGraphic",87,86,91,db),
	HX_("get",96,80,4e,00),
	HX_("findKeyForBitmap",12,70,29,81),
	HX_("getKeyForClass",38,d0,df,11),
	HX_("generateKey",6a,91,24,46),
	HX_("getUniqueKey",98,cb,d7,e8),
	HX_("getKeyWithSpacesAndBorders",ac,4e,ae,2a),
	HX_("remove",44,9c,88,04),
	HX_("removeByKey",24,c9,ac,bb),
	HX_("removeIfNoUse",85,b1,4f,e2),
	HX_("clearCache",75,d9,1e,16),
	HX_("removeKey",bb,a7,ec,ca),
	HX_("reset",cf,49,c8,e6),
	HX_("clearUnused",83,a6,6f,ff),
	HX_("get_maxTextureSize",c1,87,16,a6),
	HX_("get_whitePixel",66,2f,ed,8f),
	::String(null()) };

::hx::Class BitmapFrontEnd_obj::__mClass;

void BitmapFrontEnd_obj::__register()
{
	BitmapFrontEnd_obj _hx_dummy;
	BitmapFrontEnd_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.system.frontEnds.BitmapFrontEnd",7b,b7,f6,16);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BitmapFrontEnd_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BitmapFrontEnd_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BitmapFrontEnd_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BitmapFrontEnd_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace frontEnds
