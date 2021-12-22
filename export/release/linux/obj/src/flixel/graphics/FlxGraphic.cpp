#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
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
#ifndef INCLUDED_flixel_graphics_frames_FlxImageFrame
#include <flixel/graphics/frames/FlxImageFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxGraphicsShader
#include <flixel/graphics/tile/FlxGraphicsShader.h>
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
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxRect
#include <flixel/util/FlxPool_flixel_math_FlxRect.h>
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
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_BalancedTree
#include <haxe/ds/BalancedTree.h>
#endif
#ifndef INCLUDED_haxe_ds_EnumValueMap
#include <haxe/ds/EnumValueMap.h>
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
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3b8710f86d15c371_22_new,"flixel.graphics.FlxGraphic","new",0x02373c99,"flixel.graphics.FlxGraphic.new","flixel/graphics/FlxGraphic.hx",22,0xb3633517)
HX_LOCAL_STACK_FRAME(_hx_pos_3b8710f86d15c371_412_dump,"flixel.graphics.FlxGraphic","dump",0xe78dc2db,"flixel.graphics.FlxGraphic.dump","flixel/graphics/FlxGraphic.hx",412,0xb3633517)
HX_LOCAL_STACK_FRAME(_hx_pos_3b8710f86d15c371_426_undump,"flixel.graphics.FlxGraphic","undump",0xf6fcc174,"flixel.graphics.FlxGraphic.undump","flixel/graphics/FlxGraphic.hx",426,0xb3633517)
HX_LOCAL_STACK_FRAME(_hx_pos_3b8710f86d15c371_440_onContext,"flixel.graphics.FlxGraphic","onContext",0x4fa62b89,"flixel.graphics.FlxGraphic.onContext","flixel/graphics/FlxGraphic.hx",440,0xb3633517)
HX_LOCAL_STACK_FRAME(_hx_pos_3b8710f86d15c371_452_onAssetsReload,"flixel.graphics.FlxGraphic","onAssetsReload",0x9c63b062,"flixel.graphics.FlxGraphic.onAssetsReload","flixel/graphics/FlxGraphic.hx",452,0xb3633517)
HX_LOCAL_STACK_FRAME(_hx_pos_3b8710f86d15c371_466_destroy,"flixel.graphics.FlxGraphic","destroy",0x6c66a9b3,"flixel.graphics.FlxGraphic.destroy","flixel/graphics/FlxGraphic.hx",466,0xb3633517)
HX_LOCAL_STACK_FRAME(_hx_pos_3b8710f86d15c371_502_addFrameCollection,"flixel.graphics.FlxGraphic","addFrameCollection",0x06dd03b1,"flixel.graphics.FlxGraphic.addFrameCollection","flixel/graphics/FlxGraphic.hx",502,0xb3633517)
HX_LOCAL_STACK_FRAME(_hx_pos_3b8710f86d15c371_516_getFramesCollections,"flixel.graphics.FlxGraphic","getFramesCollections",0xa4089c80,"flixel.graphics.FlxGraphic.getFramesCollections","flixel/graphics/FlxGraphic.hx",516,0xb3633517)
HX_LOCAL_STACK_FRAME(_hx_pos_3b8710f86d15c371_534_getEmptyFrame,"flixel.graphics.FlxGraphic","getEmptyFrame",0xc5b0f80f,"flixel.graphics.FlxGraphic.getEmptyFrame","flixel/graphics/FlxGraphic.hx",534,0xb3633517)
HX_LOCAL_STACK_FRAME(_hx_pos_3b8710f86d15c371_570_getBitmapFromSystem,"flixel.graphics.FlxGraphic","getBitmapFromSystem",0xb3be27b7,"flixel.graphics.FlxGraphic.getBitmapFromSystem","flixel/graphics/FlxGraphic.hx",570,0xb3633517)
HX_LOCAL_STACK_FRAME(_hx_pos_3b8710f86d15c371_585_get_canBeDumped,"flixel.graphics.FlxGraphic","get_canBeDumped",0x9b8a5e36,"flixel.graphics.FlxGraphic.get_canBeDumped","flixel/graphics/FlxGraphic.hx",585,0xb3633517)
HX_LOCAL_STACK_FRAME(_hx_pos_3b8710f86d15c371_590_get_useCount,"flixel.graphics.FlxGraphic","get_useCount",0x2bcc1fb8,"flixel.graphics.FlxGraphic.get_useCount","flixel/graphics/FlxGraphic.hx",590,0xb3633517)
HX_LOCAL_STACK_FRAME(_hx_pos_3b8710f86d15c371_594_set_useCount,"flixel.graphics.FlxGraphic","set_useCount",0x40c5432c,"flixel.graphics.FlxGraphic.set_useCount","flixel/graphics/FlxGraphic.hx",594,0xb3633517)
HX_LOCAL_STACK_FRAME(_hx_pos_3b8710f86d15c371_603_get_destroyOnNoUse,"flixel.graphics.FlxGraphic","get_destroyOnNoUse",0x7e860bbd,"flixel.graphics.FlxGraphic.get_destroyOnNoUse","flixel/graphics/FlxGraphic.hx",603,0xb3633517)
HX_LOCAL_STACK_FRAME(_hx_pos_3b8710f86d15c371_607_set_destroyOnNoUse,"flixel.graphics.FlxGraphic","set_destroyOnNoUse",0x5b353e31,"flixel.graphics.FlxGraphic.set_destroyOnNoUse","flixel/graphics/FlxGraphic.hx",607,0xb3633517)
HX_LOCAL_STACK_FRAME(_hx_pos_3b8710f86d15c371_615_get_imageFrame,"flixel.graphics.FlxGraphic","get_imageFrame",0xc1224382,"flixel.graphics.FlxGraphic.get_imageFrame","flixel/graphics/FlxGraphic.hx",615,0xb3633517)
HX_LOCAL_STACK_FRAME(_hx_pos_3b8710f86d15c371_624_get_atlasFrames,"flixel.graphics.FlxGraphic","get_atlasFrames",0x774c10a1,"flixel.graphics.FlxGraphic.get_atlasFrames","flixel/graphics/FlxGraphic.hx",624,0xb3633517)
HX_LOCAL_STACK_FRAME(_hx_pos_3b8710f86d15c371_628_set_bitmap,"flixel.graphics.FlxGraphic","set_bitmap",0x39ee9b13,"flixel.graphics.FlxGraphic.set_bitmap","flixel/graphics/FlxGraphic.hx",628,0xb3633517)
HX_LOCAL_STACK_FRAME(_hx_pos_3b8710f86d15c371_41_fromAssetKey,"flixel.graphics.FlxGraphic","fromAssetKey",0xcea54dc0,"flixel.graphics.FlxGraphic.fromAssetKey","flixel/graphics/FlxGraphic.hx",41,0xb3633517)
HX_LOCAL_STACK_FRAME(_hx_pos_3b8710f86d15c371_77_fromClass,"flixel.graphics.FlxGraphic","fromClass",0x5b653f67,"flixel.graphics.FlxGraphic.fromClass","flixel/graphics/FlxGraphic.hx",77,0xb3633517)
HX_LOCAL_STACK_FRAME(_hx_pos_3b8710f86d15c371_108_fromBitmapData,"flixel.graphics.FlxGraphic","fromBitmapData",0x64c8842a,"flixel.graphics.FlxGraphic.fromBitmapData","flixel/graphics/FlxGraphic.hx",108,0xb3633517)
HX_LOCAL_STACK_FRAME(_hx_pos_3b8710f86d15c371_147_fromFrame,"flixel.graphics.FlxGraphic","fromFrame",0x19903f5c,"flixel.graphics.FlxGraphic.fromFrame","flixel/graphics/FlxGraphic.hx",147,0xb3633517)
HX_LOCAL_STACK_FRAME(_hx_pos_3b8710f86d15c371_177_fromFrames,"flixel.graphics.FlxGraphic","fromFrames",0x44a73197,"flixel.graphics.FlxGraphic.fromFrames","flixel/graphics/FlxGraphic.hx",177,0xb3633517)
HX_LOCAL_STACK_FRAME(_hx_pos_3b8710f86d15c371_191_fromGraphic,"flixel.graphics.FlxGraphic","fromGraphic",0xf9378b97,"flixel.graphics.FlxGraphic.fromGraphic","flixel/graphics/FlxGraphic.hx",191,0xb3633517)
HX_LOCAL_STACK_FRAME(_hx_pos_3b8710f86d15c371_214_fromRectangle,"flixel.graphics.FlxGraphic","fromRectangle",0x6fce5ede,"flixel.graphics.FlxGraphic.fromRectangle","flixel/graphics/FlxGraphic.hx",214,0xb3633517)
HX_LOCAL_STACK_FRAME(_hx_pos_3b8710f86d15c371_235_getBitmap,"flixel.graphics.FlxGraphic","getBitmap",0xcbe6761e,"flixel.graphics.FlxGraphic.getBitmap","flixel/graphics/FlxGraphic.hx",235,0xb3633517)
HX_LOCAL_STACK_FRAME(_hx_pos_3b8710f86d15c371_249_createGraphic,"flixel.graphics.FlxGraphic","createGraphic",0x3eb28085,"flixel.graphics.FlxGraphic.createGraphic","flixel/graphics/FlxGraphic.hx",249,0xb3633517)
HX_LOCAL_STACK_FRAME(_hx_pos_3b8710f86d15c371_28_boot,"flixel.graphics.FlxGraphic","boot",0xe636c9d9,"flixel.graphics.FlxGraphic.boot","flixel/graphics/FlxGraphic.hx",28,0xb3633517)
namespace flixel{
namespace graphics{

void FlxGraphic_obj::__construct(::String Key, ::openfl::display::BitmapData Bitmap, ::Dynamic Persist){
            	HX_GC_STACKFRAME(&_hx_pos_3b8710f86d15c371_22_new)
HXLINE( 383)		this->_destroyOnNoUse = true;
HXLINE( 381)		this->_useCount = 0;
HXLINE( 365)		this->unique = false;
HXLINE( 312)		this->isDumped = false;
HXLINE( 301)		this->persist = false;
HXLINE( 285)		this->height = 0;
HXLINE( 280)		this->width = 0;
HXLINE( 395)		this->key = Key;
HXLINE( 396)		bool _hx_tmp;
HXDLIN( 396)		if (::hx::IsNotNull( Persist )) {
HXLINE( 396)			_hx_tmp = ( (bool)(Persist) );
            		}
            		else {
HXLINE( 396)			_hx_tmp = ::flixel::graphics::FlxGraphic_obj::defaultPersist;
            		}
HXDLIN( 396)		this->persist = _hx_tmp;
HXLINE( 398)		this->frameCollections =  ::haxe::ds::EnumValueMap_obj::__alloc( HX_CTX );
HXLINE( 399)		this->frameCollectionTypes = ::Array_obj< ::Dynamic>::__new();
HXLINE( 400)		this->set_bitmap(Bitmap);
HXLINE( 403)		this->shader =  ::flixel::graphics::tile::FlxGraphicsShader_obj::__alloc( HX_CTX );
            	}

Dynamic FlxGraphic_obj::__CreateEmpty() { return new FlxGraphic_obj; }

void *FlxGraphic_obj::_hx_vtable = 0;

Dynamic FlxGraphic_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxGraphic_obj > _hx_result = new FlxGraphic_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool FlxGraphic_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0b2fcf89;
}

static ::flixel::util::IFlxDestroyable_obj _hx_flixel_graphics_FlxGraphic__hx_flixel_util_IFlxDestroyable= {
	( void (::hx::Object::*)())&::flixel::graphics::FlxGraphic_obj::destroy,
};

void *FlxGraphic_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xd4fe2fcd: return &_hx_flixel_graphics_FlxGraphic__hx_flixel_util_IFlxDestroyable;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void FlxGraphic_obj::dump(){
            	HX_STACKFRAME(&_hx_pos_3b8710f86d15c371_412_dump)
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGraphic_obj,dump,(void))

void FlxGraphic_obj::undump(){
            	HX_STACKFRAME(&_hx_pos_3b8710f86d15c371_426_undump)
HXLINE( 427)		 ::openfl::display::BitmapData newBitmap = this->getBitmapFromSystem();
HXLINE( 428)		if (::hx::IsNotNull( newBitmap )) {
HXLINE( 429)			this->set_bitmap(newBitmap);
            		}
HXLINE( 430)		this->isDumped = false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGraphic_obj,undump,(void))

void FlxGraphic_obj::onContext(){
            	HX_STACKFRAME(&_hx_pos_3b8710f86d15c371_440_onContext)
HXDLIN( 440)		if (this->isDumped) {
HXLINE( 442)			this->undump();
HXLINE( 443)			this->dump();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGraphic_obj,onContext,(void))

void FlxGraphic_obj::onAssetsReload(){
            	HX_STACKFRAME(&_hx_pos_3b8710f86d15c371_452_onAssetsReload)
HXLINE( 453)		bool _hx_tmp;
HXDLIN( 453)		if (::hx::IsNull( this->assetsClass )) {
HXLINE( 453)			_hx_tmp = ::hx::IsNotNull( this->assetsKey );
            		}
            		else {
HXLINE( 453)			_hx_tmp = true;
            		}
HXDLIN( 453)		if (!(_hx_tmp)) {
HXLINE( 454)			return;
            		}
HXLINE( 456)		bool dumped = this->isDumped;
HXLINE( 457)		this->undump();
HXLINE( 458)		if (dumped) {
HXLINE( 459)			this->dump();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGraphic_obj,onAssetsReload,(void))

void FlxGraphic_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_3b8710f86d15c371_466_destroy)
HXLINE( 467)		this->set_bitmap(::flixel::util::FlxDestroyUtil_obj::dispose(this->bitmap));
HXLINE( 470)		this->shader = null();
HXLINE( 476)		this->key = null();
HXLINE( 477)		this->assetsKey = null();
HXLINE( 478)		this->assetsClass = null();
HXLINE( 479)		this->_imageFrame = null();
HXLINE( 481)		if (::hx::IsNull( this->frameCollections )) {
HXLINE( 482)			return;
            		}
HXLINE( 484)		::Array< ::Dynamic> collections;
HXLINE( 485)		{
HXLINE( 485)			int _g = 0;
HXDLIN( 485)			::Array< ::Dynamic> _g1 = this->frameCollectionTypes;
HXDLIN( 485)			while((_g < _g1->length)){
HXLINE( 485)				 ::flixel::graphics::frames::FlxFrameCollectionType collectionType = _g1->__get(_g).StaticCast<  ::flixel::graphics::frames::FlxFrameCollectionType >();
HXDLIN( 485)				_g = (_g + 1);
HXLINE( 487)				collections = ( (::Array< ::Dynamic>)(this->frameCollections->get(collectionType)) );
HXLINE( 488)				::flixel::util::FlxDestroyUtil_obj::destroyArray(collections);
            			}
            		}
HXLINE( 491)		this->frameCollections = null();
HXLINE( 492)		this->frameCollectionTypes = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGraphic_obj,destroy,(void))

void FlxGraphic_obj::addFrameCollection( ::flixel::graphics::frames::FlxFramesCollection collection){
            	HX_STACKFRAME(&_hx_pos_3b8710f86d15c371_502_addFrameCollection)
HXDLIN( 502)		if (::hx::IsNotNull( collection->type )) {
HXLINE( 504)			 ::flixel::graphics::frames::FlxFrameCollectionType type = collection->type;
HXDLIN( 504)			::cpp::VirtualArray collections = ( (::cpp::VirtualArray)(this->frameCollections->get(type)) );
HXDLIN( 504)			if (::hx::IsNull( collections )) {
HXLINE( 504)				collections = ::Array_obj< ::Dynamic>::__new();
HXDLIN( 504)				this->frameCollections->set(type,collections);
            			}
HXDLIN( 504)			::cpp::VirtualArray collections1 = collections;
HXLINE( 505)			collections1->push(collection);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxGraphic_obj,addFrameCollection,(void))

::cpp::VirtualArray FlxGraphic_obj::getFramesCollections( ::flixel::graphics::frames::FlxFrameCollectionType type){
            	HX_STACKFRAME(&_hx_pos_3b8710f86d15c371_516_getFramesCollections)
HXLINE( 517)		::cpp::VirtualArray collections = ( (::cpp::VirtualArray)(this->frameCollections->get(type)) );
HXLINE( 518)		if (::hx::IsNull( collections )) {
HXLINE( 520)			collections = ::Array_obj< ::Dynamic>::__new();
HXLINE( 521)			this->frameCollections->set(type,collections);
            		}
HXLINE( 523)		return collections;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxGraphic_obj,getFramesCollections,return )

 ::flixel::graphics::frames::FlxFrame FlxGraphic_obj::getEmptyFrame( ::flixel::math::FlxPoint size){
            	HX_GC_STACKFRAME(&_hx_pos_3b8710f86d15c371_534_getEmptyFrame)
HXLINE( 535)		 ::flixel::graphics::frames::FlxFrame frame =  ::flixel::graphics::frames::FlxFrame_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this),null(),null(),null());
HXLINE( 536)		frame->type = 2;
HXLINE( 537)		 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN( 537)		_this->x = ( (Float)(0) );
HXDLIN( 537)		_this->y = ( (Float)(0) );
HXDLIN( 537)		_this->width = ( (Float)(0) );
HXDLIN( 537)		_this->height = ( (Float)(0) );
HXDLIN( 537)		 ::flixel::math::FlxRect rect = _this;
HXDLIN( 537)		rect->_inPool = false;
HXDLIN( 537)		frame->set_frame(rect);
HXLINE( 538)		{
HXLINE( 538)			 ::flixel::math::FlxPoint _this1 = frame->sourceSize;
HXDLIN( 538)			_this1->set_x(size->x);
HXDLIN( 538)			_this1->set_y(size->y);
HXDLIN( 538)			if (size->_weak) {
HXLINE( 538)				size->put();
            			}
            		}
HXLINE( 539)		return frame;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxGraphic_obj,getEmptyFrame,return )

 ::openfl::display::BitmapData FlxGraphic_obj::getBitmapFromSystem(){
            	HX_STACKFRAME(&_hx_pos_3b8710f86d15c371_570_getBitmapFromSystem)
HXLINE( 571)		 ::openfl::display::BitmapData newBitmap = null();
HXLINE( 572)		if (::hx::IsNotNull( this->assetsClass )) {
HXLINE( 573)			newBitmap = ( ( ::openfl::display::BitmapData)(::Type_obj::createInstance(this->assetsClass,::cpp::VirtualArray_obj::__new(0))) );
            		}
            		else {
HXLINE( 574)			if (::hx::IsNotNull( this->assetsKey )) {
HXLINE( 575)				::String id = this->assetsKey;
HXDLIN( 575)				if (::openfl::utils::Assets_obj::exists(id,null())) {
HXLINE( 575)					newBitmap = ::openfl::utils::Assets_obj::getBitmapData(id,false);
            				}
            				else {
HXLINE( 575)					newBitmap = null();
            				}
            			}
            		}
HXLINE( 577)		if (::hx::IsNotNull( newBitmap )) {
HXLINE( 578)			if (this->unique) {
HXLINE( 578)				return newBitmap->clone();
            			}
            			else {
HXLINE( 578)				return newBitmap;
            			}
            		}
HXLINE( 580)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGraphic_obj,getBitmapFromSystem,return )

bool FlxGraphic_obj::get_canBeDumped(){
            	HX_STACKFRAME(&_hx_pos_3b8710f86d15c371_585_get_canBeDumped)
HXDLIN( 585)		if (::hx::IsNull( this->assetsClass )) {
HXDLIN( 585)			return ::hx::IsNotNull( this->assetsKey );
            		}
            		else {
HXDLIN( 585)			return true;
            		}
HXDLIN( 585)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGraphic_obj,get_canBeDumped,return )

int FlxGraphic_obj::get_useCount(){
            	HX_STACKFRAME(&_hx_pos_3b8710f86d15c371_590_get_useCount)
HXDLIN( 590)		return this->_useCount;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGraphic_obj,get_useCount,return )

int FlxGraphic_obj::set_useCount(int Value){
            	HX_STACKFRAME(&_hx_pos_3b8710f86d15c371_594_set_useCount)
HXLINE( 595)		bool _hx_tmp;
HXDLIN( 595)		bool _hx_tmp1;
HXDLIN( 595)		if ((Value <= 0)) {
HXLINE( 595)			_hx_tmp1 = this->_destroyOnNoUse;
            		}
            		else {
HXLINE( 595)			_hx_tmp1 = false;
            		}
HXDLIN( 595)		if (_hx_tmp1) {
HXLINE( 595)			_hx_tmp = !(this->persist);
            		}
            		else {
HXLINE( 595)			_hx_tmp = false;
            		}
HXDLIN( 595)		if (_hx_tmp) {
HXLINE( 596)			::flixel::FlxG_obj::bitmap->remove(::hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE( 598)		return (this->_useCount = Value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxGraphic_obj,set_useCount,return )

bool FlxGraphic_obj::get_destroyOnNoUse(){
            	HX_STACKFRAME(&_hx_pos_3b8710f86d15c371_603_get_destroyOnNoUse)
HXDLIN( 603)		return this->_destroyOnNoUse;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGraphic_obj,get_destroyOnNoUse,return )

bool FlxGraphic_obj::set_destroyOnNoUse(bool Value){
            	HX_STACKFRAME(&_hx_pos_3b8710f86d15c371_607_set_destroyOnNoUse)
HXLINE( 608)		bool _hx_tmp;
HXDLIN( 608)		bool _hx_tmp1;
HXDLIN( 608)		bool _hx_tmp2;
HXDLIN( 608)		if (Value) {
HXLINE( 608)			_hx_tmp2 = (this->_useCount <= 0);
            		}
            		else {
HXLINE( 608)			_hx_tmp2 = false;
            		}
HXDLIN( 608)		if (_hx_tmp2) {
HXLINE( 608)			_hx_tmp1 = ::hx::IsNotNull( this->key );
            		}
            		else {
HXLINE( 608)			_hx_tmp1 = false;
            		}
HXDLIN( 608)		if (_hx_tmp1) {
HXLINE( 608)			_hx_tmp = !(this->persist);
            		}
            		else {
HXLINE( 608)			_hx_tmp = false;
            		}
HXDLIN( 608)		if (_hx_tmp) {
HXLINE( 609)			::flixel::FlxG_obj::bitmap->remove(::hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE( 611)		return (this->_destroyOnNoUse = Value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxGraphic_obj,set_destroyOnNoUse,return )

 ::flixel::graphics::frames::FlxImageFrame FlxGraphic_obj::get_imageFrame(){
            	HX_STACKFRAME(&_hx_pos_3b8710f86d15c371_615_get_imageFrame)
HXLINE( 616)		if (::hx::IsNull( this->_imageFrame )) {
HXLINE( 617)			Float Width = ( (Float)(this->bitmap->width) );
HXDLIN( 617)			Float Height = ( (Float)(this->bitmap->height) );
HXDLIN( 617)			 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN( 617)			_this->x = ( (Float)(0) );
HXDLIN( 617)			_this->y = ( (Float)(0) );
HXDLIN( 617)			_this->width = Width;
HXDLIN( 617)			_this->height = Height;
HXDLIN( 617)			 ::flixel::math::FlxRect rect = _this;
HXDLIN( 617)			rect->_inPool = false;
HXDLIN( 617)			this->_imageFrame = ::flixel::graphics::frames::FlxImageFrame_obj::fromRectangle(::hx::ObjectPtr<OBJ_>(this),rect);
            		}
HXLINE( 619)		return this->_imageFrame;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGraphic_obj,get_imageFrame,return )

 ::flixel::graphics::frames::FlxAtlasFrames FlxGraphic_obj::get_atlasFrames(){
            	HX_STACKFRAME(&_hx_pos_3b8710f86d15c371_624_get_atlasFrames)
HXDLIN( 624)		return ::flixel::graphics::frames::FlxAtlasFrames_obj::findFrame(::hx::ObjectPtr<OBJ_>(this),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGraphic_obj,get_atlasFrames,return )

 ::openfl::display::BitmapData FlxGraphic_obj::set_bitmap( ::openfl::display::BitmapData value){
            	HX_STACKFRAME(&_hx_pos_3b8710f86d15c371_628_set_bitmap)
HXLINE( 629)		if (::hx::IsNotNull( value )) {
HXLINE( 631)			this->bitmap = value;
HXLINE( 632)			this->width = this->bitmap->width;
HXLINE( 633)			this->height = this->bitmap->height;
            		}
HXLINE( 640)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxGraphic_obj,set_bitmap,return )

bool FlxGraphic_obj::defaultPersist;

 ::flixel::graphics::FlxGraphic FlxGraphic_obj::fromAssetKey(::String Source,::hx::Null< bool >  __o_Unique,::String Key,::hx::Null< bool >  __o_Cache){
            		bool Unique = __o_Unique.Default(false);
            		bool Cache = __o_Cache.Default(true);
            	HX_STACKFRAME(&_hx_pos_3b8710f86d15c371_41_fromAssetKey)
HXLINE(  42)		 ::openfl::display::BitmapData bitmap = null();
HXLINE(  44)		if (!(Cache)) {
HXLINE(  46)			 ::openfl::display::BitmapData bitmap1;
HXDLIN(  46)			if (::openfl::utils::Assets_obj::exists(Source,null())) {
HXLINE(  46)				bitmap1 = ::openfl::utils::Assets_obj::getBitmapData(Source,false);
            			}
            			else {
HXLINE(  46)				bitmap1 = null();
            			}
HXDLIN(  46)			bitmap = bitmap1;
HXLINE(  47)			if (::hx::IsNull( bitmap )) {
HXLINE(  48)				return null();
            			}
HXLINE(  49)			return ::flixel::graphics::FlxGraphic_obj::createGraphic(bitmap,Key,Unique,Cache);
            		}
HXLINE(  52)		::String key = ::flixel::FlxG_obj::bitmap->generateKey(Source,Key,Unique);
HXLINE(  53)		 ::flixel::graphics::FlxGraphic graphic = ( ( ::flixel::graphics::FlxGraphic)(::flixel::FlxG_obj::bitmap->_cache->get(key)) );
HXLINE(  54)		if (::hx::IsNotNull( graphic )) {
HXLINE(  55)			return graphic;
            		}
HXLINE(  57)		 ::openfl::display::BitmapData bitmap1;
HXDLIN(  57)		if (::openfl::utils::Assets_obj::exists(Source,null())) {
HXLINE(  57)			bitmap1 = ::openfl::utils::Assets_obj::getBitmapData(Source,false);
            		}
            		else {
HXLINE(  57)			bitmap1 = null();
            		}
HXDLIN(  57)		bitmap = bitmap1;
HXLINE(  58)		if (::hx::IsNull( bitmap )) {
HXLINE(  59)			return null();
            		}
HXLINE(  61)		graphic = ::flixel::graphics::FlxGraphic_obj::createGraphic(bitmap,key,Unique,null());
HXLINE(  62)		graphic->assetsKey = Source;
HXLINE(  63)		return graphic;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxGraphic_obj,fromAssetKey,return )

 ::flixel::graphics::FlxGraphic FlxGraphic_obj::fromClass(::hx::Class Source,::hx::Null< bool >  __o_Unique,::String Key,::hx::Null< bool >  __o_Cache){
            		bool Unique = __o_Unique.Default(false);
            		bool Cache = __o_Cache.Default(true);
            	HX_STACKFRAME(&_hx_pos_3b8710f86d15c371_77_fromClass)
HXLINE(  78)		 ::openfl::display::BitmapData bitmap = null();
HXLINE(  79)		if (!(Cache)) {
HXLINE(  81)			bitmap = ( ( ::openfl::display::BitmapData)(::Type_obj::createInstance(Source,::cpp::VirtualArray_obj::__new(0))) );
HXLINE(  82)			return ::flixel::graphics::FlxGraphic_obj::createGraphic(bitmap,Key,Unique,Cache);
            		}
HXLINE(  85)		 ::flixel::_hx_system::frontEnds::BitmapFrontEnd _this = ::flixel::FlxG_obj::bitmap;
HXDLIN(  85)		::String key = ::Type_obj::getClassName(Source);
HXLINE(  86)		key = ::flixel::FlxG_obj::bitmap->generateKey(key,Key,Unique);
HXLINE(  87)		 ::flixel::graphics::FlxGraphic graphic = ( ( ::flixel::graphics::FlxGraphic)(::flixel::FlxG_obj::bitmap->_cache->get(key)) );
HXLINE(  88)		if (::hx::IsNotNull( graphic )) {
HXLINE(  89)			return graphic;
            		}
HXLINE(  91)		bitmap = ( ( ::openfl::display::BitmapData)(::Type_obj::createInstance(Source,::cpp::VirtualArray_obj::__new(0))) );
HXLINE(  92)		graphic = ::flixel::graphics::FlxGraphic_obj::createGraphic(bitmap,key,Unique,null());
HXLINE(  93)		graphic->assetsClass = Source;
HXLINE(  94)		return graphic;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxGraphic_obj,fromClass,return )

 ::flixel::graphics::FlxGraphic FlxGraphic_obj::fromBitmapData( ::openfl::display::BitmapData Source,::hx::Null< bool >  __o_Unique,::String Key,::hx::Null< bool >  __o_Cache){
            		bool Unique = __o_Unique.Default(false);
            		bool Cache = __o_Cache.Default(true);
            	HX_STACKFRAME(&_hx_pos_3b8710f86d15c371_108_fromBitmapData)
HXLINE( 109)		if (!(Cache)) {
HXLINE( 110)			return ::flixel::graphics::FlxGraphic_obj::createGraphic(Source,Key,Unique,Cache);
            		}
HXLINE( 112)		::String key = ::flixel::FlxG_obj::bitmap->findKeyForBitmap(Source);
HXLINE( 114)		::String assetKey = null();
HXLINE( 115)		::hx::Class assetClass = null();
HXLINE( 116)		 ::flixel::graphics::FlxGraphic graphic = null();
HXLINE( 117)		if (::hx::IsNotNull( key )) {
HXLINE( 119)			graphic = ( ( ::flixel::graphics::FlxGraphic)(::flixel::FlxG_obj::bitmap->_cache->get(key)) );
HXLINE( 120)			assetKey = graphic->assetsKey;
HXLINE( 121)			assetClass = graphic->assetsClass;
            		}
HXLINE( 124)		key = ::flixel::FlxG_obj::bitmap->generateKey(key,Key,Unique);
HXLINE( 125)		graphic = ( ( ::flixel::graphics::FlxGraphic)(::flixel::FlxG_obj::bitmap->_cache->get(key)) );
HXLINE( 126)		if (::hx::IsNotNull( graphic )) {
HXLINE( 127)			return graphic;
            		}
HXLINE( 129)		graphic = ::flixel::graphics::FlxGraphic_obj::createGraphic(Source,key,Unique,null());
HXLINE( 130)		graphic->assetsKey = assetKey;
HXLINE( 131)		graphic->assetsClass = assetClass;
HXLINE( 132)		return graphic;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxGraphic_obj,fromBitmapData,return )

 ::flixel::graphics::FlxGraphic FlxGraphic_obj::fromFrame( ::flixel::graphics::frames::FlxFrame Source,::hx::Null< bool >  __o_Unique,::String Key,::hx::Null< bool >  __o_Cache){
            		bool Unique = __o_Unique.Default(false);
            		bool Cache = __o_Cache.Default(true);
            	HX_STACKFRAME(&_hx_pos_3b8710f86d15c371_147_fromFrame)
HXLINE( 148)		::String key = Source->name;
HXLINE( 149)		if (::hx::IsNull( key )) {
HXLINE( 150)			 ::flixel::math::FlxRect _this = Source->frame;
HXDLIN( 150)			 ::Dynamic value = _this->x;
HXDLIN( 150)			 ::flixel::util::LabelValuePair _this1 = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN( 150)			_this1->label = HX_("x",78,00,00,00);
HXDLIN( 150)			_this1->value = value;
HXDLIN( 150)			 ::Dynamic value1 = _this->y;
HXDLIN( 150)			 ::flixel::util::LabelValuePair _this2 = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN( 150)			_this2->label = HX_("y",79,00,00,00);
HXDLIN( 150)			_this2->value = value1;
HXDLIN( 150)			 ::Dynamic value2 = _this->width;
HXDLIN( 150)			 ::flixel::util::LabelValuePair _this3 = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN( 150)			_this3->label = HX_("w",77,00,00,00);
HXDLIN( 150)			_this3->value = value2;
HXDLIN( 150)			 ::Dynamic value3 = _this->height;
HXDLIN( 150)			 ::flixel::util::LabelValuePair _this4 = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN( 150)			_this4->label = HX_("h",68,00,00,00);
HXDLIN( 150)			_this4->value = value3;
HXDLIN( 150)			key = ::flixel::util::FlxStringUtil_obj::getDebugString(::Array_obj< ::Dynamic>::__new(4)->init(0,_this1)->init(1,_this2)->init(2,_this3)->init(3,_this4));
            		}
HXLINE( 151)		key = ((Source->parent->key + HX_(":",3a,00,00,00)) + key);
HXLINE( 152)		key = ::flixel::FlxG_obj::bitmap->generateKey(key,Key,Unique);
HXLINE( 153)		 ::flixel::graphics::FlxGraphic graphic = ( ( ::flixel::graphics::FlxGraphic)(::flixel::FlxG_obj::bitmap->_cache->get(key)) );
HXLINE( 154)		if (::hx::IsNotNull( graphic )) {
HXLINE( 155)			return graphic;
            		}
HXLINE( 157)		 ::openfl::display::BitmapData bitmap = Source->paint(null(),null(),null(),null());
HXLINE( 158)		graphic = ::flixel::graphics::FlxGraphic_obj::createGraphic(bitmap,key,Unique,Cache);
HXLINE( 159)		 ::flixel::graphics::frames::FlxImageFrame image = ::flixel::graphics::frames::FlxImageFrame_obj::fromGraphic(graphic,null());
HXLINE( 160)		image->frames->__get(0).StaticCast<  ::flixel::graphics::frames::FlxFrame >()->name = Source->name;
HXLINE( 161)		return graphic;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxGraphic_obj,fromFrame,return )

 ::flixel::graphics::FlxGraphic FlxGraphic_obj::fromFrames( ::flixel::graphics::frames::FlxFramesCollection Source,::hx::Null< bool >  __o_Unique,::String Key){
            		bool Unique = __o_Unique.Default(false);
            	HX_STACKFRAME(&_hx_pos_3b8710f86d15c371_177_fromFrames)
HXDLIN( 177)		return ::flixel::graphics::FlxGraphic_obj::fromGraphic(Source->parent,Unique,Key);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxGraphic_obj,fromFrames,return )

 ::flixel::graphics::FlxGraphic FlxGraphic_obj::fromGraphic( ::flixel::graphics::FlxGraphic Source,::hx::Null< bool >  __o_Unique,::String Key){
            		bool Unique = __o_Unique.Default(false);
            	HX_STACKFRAME(&_hx_pos_3b8710f86d15c371_191_fromGraphic)
HXLINE( 192)		if (!(Unique)) {
HXLINE( 193)			return Source;
            		}
HXLINE( 195)		::String key = ::flixel::FlxG_obj::bitmap->generateKey(Source->key,Key,Unique);
HXLINE( 196)		 ::flixel::graphics::FlxGraphic graphic = ::flixel::graphics::FlxGraphic_obj::createGraphic(Source->bitmap,key,Unique,null());
HXLINE( 197)		graphic->unique = Unique;
HXLINE( 198)		graphic->assetsClass = Source->assetsClass;
HXLINE( 199)		graphic->assetsKey = Source->assetsKey;
HXLINE( 200)		::flixel::FlxG_obj::bitmap->_cache->set(graphic->key,graphic);
HXDLIN( 200)		return graphic;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxGraphic_obj,fromGraphic,return )

 ::flixel::graphics::FlxGraphic FlxGraphic_obj::fromRectangle(int Width,int Height,int Color,::hx::Null< bool >  __o_Unique,::String Key){
            		bool Unique = __o_Unique.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_3b8710f86d15c371_214_fromRectangle)
HXLINE( 215)		::String systemKey = ((((Width + HX_("x",78,00,00,00)) + Height) + HX_(":",3a,00,00,00)) + Color);
HXLINE( 216)		::String key = ::flixel::FlxG_obj::bitmap->generateKey(systemKey,Key,Unique);
HXLINE( 218)		 ::flixel::graphics::FlxGraphic graphic = ( ( ::flixel::graphics::FlxGraphic)(::flixel::FlxG_obj::bitmap->_cache->get(key)) );
HXLINE( 219)		if (::hx::IsNotNull( graphic )) {
HXLINE( 220)			return graphic;
            		}
HXLINE( 222)		 ::openfl::display::BitmapData bitmap =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,Width,Height,true,Color);
HXLINE( 223)		return ::flixel::graphics::FlxGraphic_obj::createGraphic(bitmap,key,null(),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxGraphic_obj,fromRectangle,return )

 ::openfl::display::BitmapData FlxGraphic_obj::getBitmap( ::openfl::display::BitmapData Bitmap,::hx::Null< bool >  __o_Unique){
            		bool Unique = __o_Unique.Default(false);
            	HX_STACKFRAME(&_hx_pos_3b8710f86d15c371_235_getBitmap)
HXDLIN( 235)		if (Unique) {
HXDLIN( 235)			return Bitmap->clone();
            		}
            		else {
HXDLIN( 235)			return Bitmap;
            		}
HXDLIN( 235)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxGraphic_obj,getBitmap,return )

 ::flixel::graphics::FlxGraphic FlxGraphic_obj::createGraphic( ::openfl::display::BitmapData Bitmap,::String Key,::hx::Null< bool >  __o_Unique,::hx::Null< bool >  __o_Cache){
            		bool Unique = __o_Unique.Default(false);
            		bool Cache = __o_Cache.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_3b8710f86d15c371_249_createGraphic)
HXLINE( 250)		if (Unique) {
HXLINE( 250)			Bitmap = Bitmap->clone();
            		}
HXLINE( 251)		 ::flixel::graphics::FlxGraphic graphic = null();
HXLINE( 253)		if (Cache) {
HXLINE( 255)			graphic =  ::flixel::graphics::FlxGraphic_obj::__alloc( HX_CTX ,Key,Bitmap,null());
HXLINE( 256)			graphic->unique = Unique;
HXLINE( 257)			::flixel::FlxG_obj::bitmap->_cache->set(graphic->key,graphic);
            		}
            		else {
HXLINE( 261)			graphic =  ::flixel::graphics::FlxGraphic_obj::__alloc( HX_CTX ,null(),Bitmap,null());
            		}
HXLINE( 264)		return graphic;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxGraphic_obj,createGraphic,return )


::hx::ObjectPtr< FlxGraphic_obj > FlxGraphic_obj::__new(::String Key, ::openfl::display::BitmapData Bitmap, ::Dynamic Persist) {
	::hx::ObjectPtr< FlxGraphic_obj > __this = new FlxGraphic_obj();
	__this->__construct(Key,Bitmap,Persist);
	return __this;
}

::hx::ObjectPtr< FlxGraphic_obj > FlxGraphic_obj::__alloc(::hx::Ctx *_hx_ctx,::String Key, ::openfl::display::BitmapData Bitmap, ::Dynamic Persist) {
	FlxGraphic_obj *__this = (FlxGraphic_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxGraphic_obj), true, "flixel.graphics.FlxGraphic"));
	*(void **)__this = FlxGraphic_obj::_hx_vtable;
	__this->__construct(Key,Bitmap,Persist);
	return __this;
}

FlxGraphic_obj::FlxGraphic_obj()
{
}

void FlxGraphic_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxGraphic);
	HX_MARK_MEMBER_NAME(key,"key");
	HX_MARK_MEMBER_NAME(bitmap,"bitmap");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(assetsKey,"assetsKey");
	HX_MARK_MEMBER_NAME(assetsClass,"assetsClass");
	HX_MARK_MEMBER_NAME(persist,"persist");
	HX_MARK_MEMBER_NAME(isDumped,"isDumped");
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_MEMBER_NAME(frameCollections,"frameCollections");
	HX_MARK_MEMBER_NAME(frameCollectionTypes,"frameCollectionTypes");
	HX_MARK_MEMBER_NAME(unique,"unique");
	HX_MARK_MEMBER_NAME(_imageFrame,"_imageFrame");
	HX_MARK_MEMBER_NAME(_useCount,"_useCount");
	HX_MARK_MEMBER_NAME(_destroyOnNoUse,"_destroyOnNoUse");
	HX_MARK_END_CLASS();
}

void FlxGraphic_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(key,"key");
	HX_VISIT_MEMBER_NAME(bitmap,"bitmap");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(assetsKey,"assetsKey");
	HX_VISIT_MEMBER_NAME(assetsClass,"assetsClass");
	HX_VISIT_MEMBER_NAME(persist,"persist");
	HX_VISIT_MEMBER_NAME(isDumped,"isDumped");
	HX_VISIT_MEMBER_NAME(shader,"shader");
	HX_VISIT_MEMBER_NAME(frameCollections,"frameCollections");
	HX_VISIT_MEMBER_NAME(frameCollectionTypes,"frameCollectionTypes");
	HX_VISIT_MEMBER_NAME(unique,"unique");
	HX_VISIT_MEMBER_NAME(_imageFrame,"_imageFrame");
	HX_VISIT_MEMBER_NAME(_useCount,"_useCount");
	HX_VISIT_MEMBER_NAME(_destroyOnNoUse,"_destroyOnNoUse");
}

::hx::Val FlxGraphic_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"key") ) { return ::hx::Val( key ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"dump") ) { return ::hx::Val( dump_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return ::hx::Val( width ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bitmap") ) { return ::hx::Val( bitmap ); }
		if (HX_FIELD_EQ(inName,"height") ) { return ::hx::Val( height ); }
		if (HX_FIELD_EQ(inName,"shader") ) { return ::hx::Val( shader ); }
		if (HX_FIELD_EQ(inName,"unique") ) { return ::hx::Val( unique ); }
		if (HX_FIELD_EQ(inName,"undump") ) { return ::hx::Val( undump_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"persist") ) { return ::hx::Val( persist ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isDumped") ) { return ::hx::Val( isDumped ); }
		if (HX_FIELD_EQ(inName,"useCount") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_useCount() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"assetsKey") ) { return ::hx::Val( assetsKey ); }
		if (HX_FIELD_EQ(inName,"_useCount") ) { return ::hx::Val( _useCount ); }
		if (HX_FIELD_EQ(inName,"onContext") ) { return ::hx::Val( onContext_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"imageFrame") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_imageFrame() ); }
		if (HX_FIELD_EQ(inName,"set_bitmap") ) { return ::hx::Val( set_bitmap_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"assetsClass") ) { return ::hx::Val( assetsClass ); }
		if (HX_FIELD_EQ(inName,"canBeDumped") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_canBeDumped() ); }
		if (HX_FIELD_EQ(inName,"atlasFrames") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_atlasFrames() ); }
		if (HX_FIELD_EQ(inName,"_imageFrame") ) { return ::hx::Val( _imageFrame ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_useCount") ) { return ::hx::Val( get_useCount_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_useCount") ) { return ::hx::Val( set_useCount_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getEmptyFrame") ) { return ::hx::Val( getEmptyFrame_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"destroyOnNoUse") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_destroyOnNoUse() ); }
		if (HX_FIELD_EQ(inName,"onAssetsReload") ) { return ::hx::Val( onAssetsReload_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_imageFrame") ) { return ::hx::Val( get_imageFrame_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_destroyOnNoUse") ) { return ::hx::Val( _destroyOnNoUse ); }
		if (HX_FIELD_EQ(inName,"get_canBeDumped") ) { return ::hx::Val( get_canBeDumped_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_atlasFrames") ) { return ::hx::Val( get_atlasFrames_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"frameCollections") ) { return ::hx::Val( frameCollections ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"addFrameCollection") ) { return ::hx::Val( addFrameCollection_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_destroyOnNoUse") ) { return ::hx::Val( get_destroyOnNoUse_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_destroyOnNoUse") ) { return ::hx::Val( set_destroyOnNoUse_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getBitmapFromSystem") ) { return ::hx::Val( getBitmapFromSystem_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"frameCollectionTypes") ) { return ::hx::Val( frameCollectionTypes ); }
		if (HX_FIELD_EQ(inName,"getFramesCollections") ) { return ::hx::Val( getFramesCollections_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxGraphic_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"fromClass") ) { outValue = fromClass_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"fromFrame") ) { outValue = fromFrame_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getBitmap") ) { outValue = getBitmap_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromFrames") ) { outValue = fromFrames_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fromGraphic") ) { outValue = fromGraphic_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"fromAssetKey") ) { outValue = fromAssetKey_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"fromRectangle") ) { outValue = fromRectangle_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"createGraphic") ) { outValue = createGraphic_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"defaultPersist") ) { outValue = ( defaultPersist ); return true; }
		if (HX_FIELD_EQ(inName,"fromBitmapData") ) { outValue = fromBitmapData_dyn(); return true; }
	}
	return false;
}

::hx::Val FlxGraphic_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"key") ) { key=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bitmap") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_bitmap(inValue.Cast<  ::openfl::display::BitmapData >()) );bitmap=inValue.Cast<  ::openfl::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast<  ::flixel::graphics::tile::FlxGraphicsShader >(); return inValue; }
		if (HX_FIELD_EQ(inName,"unique") ) { unique=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"persist") ) { persist=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isDumped") ) { isDumped=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"useCount") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_useCount(inValue.Cast< int >()) ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"assetsKey") ) { assetsKey=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_useCount") ) { _useCount=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"assetsClass") ) { assetsClass=inValue.Cast< ::hx::Class >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_imageFrame") ) { _imageFrame=inValue.Cast<  ::flixel::graphics::frames::FlxImageFrame >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"destroyOnNoUse") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_destroyOnNoUse(inValue.Cast< bool >()) ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_destroyOnNoUse") ) { _destroyOnNoUse=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"frameCollections") ) { frameCollections=inValue.Cast<  ::haxe::ds::EnumValueMap >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"frameCollectionTypes") ) { frameCollectionTypes=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxGraphic_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"defaultPersist") ) { defaultPersist=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

void FlxGraphic_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("key",9f,89,51,00));
	outFields->push(HX_("bitmap",ef,0f,0c,f1));
	outFields->push(HX_("width",06,b6,62,ca));
	outFields->push(HX_("height",e7,07,4c,02));
	outFields->push(HX_("assetsKey",dc,ec,09,c6));
	outFields->push(HX_("assetsClass",b5,e4,5d,37));
	outFields->push(HX_("persist",14,22,71,83));
	outFields->push(HX_("destroyOnNoUse",0d,ef,5c,a2));
	outFields->push(HX_("isDumped",1d,26,5d,fa));
	outFields->push(HX_("canBeDumped",e6,48,77,53));
	outFields->push(HX_("shader",25,bf,20,1d));
	outFields->push(HX_("useCount",08,a7,ce,11));
	outFields->push(HX_("imageFrame",d2,3e,51,12));
	outFields->push(HX_("atlasFrames",51,fb,38,2f));
	outFields->push(HX_("frameCollections",28,29,8a,63));
	outFields->push(HX_("frameCollectionTypes",8e,07,3e,dd));
	outFields->push(HX_("unique",11,93,92,63));
	outFields->push(HX_("_imageFrame",f1,0b,db,e4));
	outFields->push(HX_("_useCount",67,9e,64,59));
	outFields->push(HX_("_destroyOnNoUse",ac,37,bd,eb));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxGraphic_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(FlxGraphic_obj,key),HX_("key",9f,89,51,00)},
	{::hx::fsObject /*  ::openfl::display::BitmapData */ ,(int)offsetof(FlxGraphic_obj,bitmap),HX_("bitmap",ef,0f,0c,f1)},
	{::hx::fsInt,(int)offsetof(FlxGraphic_obj,width),HX_("width",06,b6,62,ca)},
	{::hx::fsInt,(int)offsetof(FlxGraphic_obj,height),HX_("height",e7,07,4c,02)},
	{::hx::fsString,(int)offsetof(FlxGraphic_obj,assetsKey),HX_("assetsKey",dc,ec,09,c6)},
	{::hx::fsObject /* ::hx::Class */ ,(int)offsetof(FlxGraphic_obj,assetsClass),HX_("assetsClass",b5,e4,5d,37)},
	{::hx::fsBool,(int)offsetof(FlxGraphic_obj,persist),HX_("persist",14,22,71,83)},
	{::hx::fsBool,(int)offsetof(FlxGraphic_obj,isDumped),HX_("isDumped",1d,26,5d,fa)},
	{::hx::fsObject /*  ::flixel::graphics::tile::FlxGraphicsShader */ ,(int)offsetof(FlxGraphic_obj,shader),HX_("shader",25,bf,20,1d)},
	{::hx::fsObject /*  ::haxe::ds::EnumValueMap */ ,(int)offsetof(FlxGraphic_obj,frameCollections),HX_("frameCollections",28,29,8a,63)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(FlxGraphic_obj,frameCollectionTypes),HX_("frameCollectionTypes",8e,07,3e,dd)},
	{::hx::fsBool,(int)offsetof(FlxGraphic_obj,unique),HX_("unique",11,93,92,63)},
	{::hx::fsObject /*  ::flixel::graphics::frames::FlxImageFrame */ ,(int)offsetof(FlxGraphic_obj,_imageFrame),HX_("_imageFrame",f1,0b,db,e4)},
	{::hx::fsInt,(int)offsetof(FlxGraphic_obj,_useCount),HX_("_useCount",67,9e,64,59)},
	{::hx::fsBool,(int)offsetof(FlxGraphic_obj,_destroyOnNoUse),HX_("_destroyOnNoUse",ac,37,bd,eb)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo FlxGraphic_obj_sStaticStorageInfo[] = {
	{::hx::fsBool,(void *) &FlxGraphic_obj::defaultPersist,HX_("defaultPersist",53,7b,b1,b2)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String FlxGraphic_obj_sMemberFields[] = {
	HX_("key",9f,89,51,00),
	HX_("bitmap",ef,0f,0c,f1),
	HX_("width",06,b6,62,ca),
	HX_("height",e7,07,4c,02),
	HX_("assetsKey",dc,ec,09,c6),
	HX_("assetsClass",b5,e4,5d,37),
	HX_("persist",14,22,71,83),
	HX_("isDumped",1d,26,5d,fa),
	HX_("shader",25,bf,20,1d),
	HX_("frameCollections",28,29,8a,63),
	HX_("frameCollectionTypes",8e,07,3e,dd),
	HX_("unique",11,93,92,63),
	HX_("_imageFrame",f1,0b,db,e4),
	HX_("_useCount",67,9e,64,59),
	HX_("_destroyOnNoUse",ac,37,bd,eb),
	HX_("dump",34,7d,72,42),
	HX_("undump",0d,84,47,60),
	HX_("onContext",90,4e,22,f1),
	HX_("onAssetsReload",fb,33,88,63),
	HX_("destroy",fa,2c,86,24),
	HX_("addFrameCollection",ca,c7,4d,c6),
	HX_("getFramesCollections",d9,58,45,b4),
	HX_("getEmptyFrame",96,aa,48,e3),
	HX_("getBitmapFromSystem",7e,f9,f8,76),
	HX_("get_canBeDumped",7d,00,59,14),
	HX_("get_useCount",11,5b,e8,c6),
	HX_("set_useCount",85,7e,e1,db),
	HX_("get_destroyOnNoUse",d6,cf,f6,3d),
	HX_("set_destroyOnNoUse",4a,02,a6,1a),
	HX_("get_imageFrame",1b,c7,46,88),
	HX_("get_atlasFrames",e8,b2,1a,f0),
	HX_("set_bitmap",2c,1e,11,e5),
	::String(null()) };

static void FlxGraphic_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxGraphic_obj::defaultPersist,"defaultPersist");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxGraphic_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxGraphic_obj::defaultPersist,"defaultPersist");
};

#endif

::hx::Class FlxGraphic_obj::__mClass;

static ::String FlxGraphic_obj_sStaticFields[] = {
	HX_("defaultPersist",53,7b,b1,b2),
	HX_("fromAssetKey",19,89,c1,69),
	HX_("fromClass",6e,62,e1,fc),
	HX_("fromBitmapData",c3,07,ed,2b),
	HX_("fromFrame",63,62,0c,bb),
	HX_("fromFrames",b0,b4,c9,ef),
	HX_("fromGraphic",5e,be,47,0c),
	HX_("fromRectangle",65,11,66,8d),
	HX_("getBitmap",25,99,62,6d),
	HX_("createGraphic",0c,33,4a,5c),
	::String(null())
};

void FlxGraphic_obj::__register()
{
	FlxGraphic_obj _hx_dummy;
	FlxGraphic_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.graphics.FlxGraphic",27,fc,ac,ae);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxGraphic_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxGraphic_obj::__SetStatic;
	__mClass->mMarkFunc = FlxGraphic_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxGraphic_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxGraphic_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxGraphic_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxGraphic_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxGraphic_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxGraphic_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxGraphic_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_3b8710f86d15c371_28_boot)
HXDLIN(  28)		defaultPersist = false;
            	}
}

} // end namespace flixel
} // end namespace graphics
