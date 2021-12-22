#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_IFlxBasic
#include <flixel/IFlxBasic.h>
#endif
#ifndef INCLUDED_flixel_IFlxSprite
#include <flixel/IFlxSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUISprite
#include <flixel/addons/ui/FlxUISprite.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_U
#include <flixel/addons/ui/U.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIWidget
#include <flixel/addons/ui/interfaces/IFlxUIWidget.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IResizable
#include <flixel/addons/ui/interfaces/IResizable.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_22e81ddbc10a4d63_14_new,"flixel.addons.ui.FlxUISprite","new",0xd5a60c2c,"flixel.addons.ui.FlxUISprite.new","flixel/addons/ui/FlxUISprite.hx",14,0xc16e6665)
HX_LOCAL_STACK_FRAME(_hx_pos_22e81ddbc10a4d63_38_set_resize_ratio,"flixel.addons.ui.FlxUISprite","set_resize_ratio",0xbe28f3f1,"flixel.addons.ui.FlxUISprite.set_resize_ratio","flixel/addons/ui/FlxUISprite.hx",38,0xc16e6665)
HX_LOCAL_STACK_FRAME(_hx_pos_22e81ddbc10a4d63_47_set_resize_point,"flixel.addons.ui.FlxUISprite","set_resize_point",0xa0947336,"flixel.addons.ui.FlxUISprite.set_resize_point","flixel/addons/ui/FlxUISprite.hx",47,0xc16e6665)
HX_LOCAL_STACK_FRAME(_hx_pos_22e81ddbc10a4d63_64_recycle,"flixel.addons.ui.FlxUISprite","recycle",0x37d621df,"flixel.addons.ui.FlxUISprite.recycle","flixel/addons/ui/FlxUISprite.hx",64,0xc16e6665)
HX_LOCAL_STACK_FRAME(_hx_pos_22e81ddbc10a4d63_69_resize,"flixel.addons.ui.FlxUISprite","resize",0x58d785a8,"flixel.addons.ui.FlxUISprite.resize","flixel/addons/ui/FlxUISprite.hx",69,0xc16e6665)
HX_LOCAL_STACK_FRAME(_hx_pos_22e81ddbc10a4d63_111_loadGraphicAtScale,"flixel.addons.ui.FlxUISprite","loadGraphicAtScale",0x16f15949,"flixel.addons.ui.FlxUISprite.loadGraphicAtScale","flixel/addons/ui/FlxUISprite.hx",111,0xc16e6665)
HX_LOCAL_STACK_FRAME(_hx_pos_22e81ddbc10a4d63_129_loadGraphic,"flixel.addons.ui.FlxUISprite","loadGraphic",0x778a00ee,"flixel.addons.ui.FlxUISprite.loadGraphic","flixel/addons/ui/FlxUISprite.hx",129,0xc16e6665)
HX_LOCAL_STACK_FRAME(_hx_pos_22e81ddbc10a4d63_140_destroy,"flixel.addons.ui.FlxUISprite","destroy",0x24d03ec6,"flixel.addons.ui.FlxUISprite.destroy","flixel/addons/ui/FlxUISprite.hx",140,0xc16e6665)
HX_LOCAL_STACK_FRAME(_hx_pos_22e81ddbc10a4d63_148_loadFromScaledGraphic,"flixel.addons.ui.FlxUISprite","loadFromScaledGraphic",0xde4b092a,"flixel.addons.ui.FlxUISprite.loadFromScaledGraphic","flixel/addons/ui/FlxUISprite.hx",148,0xc16e6665)
HX_LOCAL_STACK_FRAME(_hx_pos_22e81ddbc10a4d63_27_boot,"flixel.addons.ui.FlxUISprite","boot",0x13bd9ae6,"flixel.addons.ui.FlxUISprite.boot","flixel/addons/ui/FlxUISprite.hx",27,0xc16e6665)
HX_LOCAL_STACK_FRAME(_hx_pos_22e81ddbc10a4d63_28_boot,"flixel.addons.ui.FlxUISprite","boot",0x13bd9ae6,"flixel.addons.ui.FlxUISprite.boot","flixel/addons/ui/FlxUISprite.hx",28,0xc16e6665)
HX_LOCAL_STACK_FRAME(_hx_pos_22e81ddbc10a4d63_29_boot,"flixel.addons.ui.FlxUISprite","boot",0x13bd9ae6,"flixel.addons.ui.FlxUISprite.boot","flixel/addons/ui/FlxUISprite.hx",29,0xc16e6665)
namespace flixel{
namespace addons{
namespace ui{

void FlxUISprite_obj::__construct(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y, ::Dynamic SimpleGraphic){
            		Float X = __o_X.Default(0);
            		Float Y = __o_Y.Default(0);
            	HX_STACKFRAME(&_hx_pos_22e81ddbc10a4d63_14_new)
HXLINE( 151)		this->_originalKey = HX_("",00,00,00,00);
HXLINE(  35)		this->resize_ratio_axis = 1;
HXLINE(  25)		this->recycled = false;
HXLINE(  22)		this->ptr_owner = null();
HXLINE(  16)		this->broadcastToFlxUI = true;
HXLINE(  59)		super::__construct(X,Y,SimpleGraphic);
            	}

Dynamic FlxUISprite_obj::__CreateEmpty() { return new FlxUISprite_obj; }

void *FlxUISprite_obj::_hx_vtable = 0;

Dynamic FlxUISprite_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxUISprite_obj > _hx_result = new FlxUISprite_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool FlxUISprite_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2c01639b) {
		if (inClassId<=(int)0x0dc54e00) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0dc54e00;
		} else {
			return inClassId==(int)0x2c01639b;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

static ::flixel::IFlxSprite_obj _hx_flixel_addons_ui_FlxUISprite__hx_flixel_IFlxSprite= {
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUISprite_obj::set_active,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUISprite_obj::set_visible,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUISprite_obj::set_alive,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUISprite_obj::set_exists,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUISprite_obj::draw,
	( void (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUISprite_obj::update,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUISprite_obj::destroy,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUISprite_obj::kill,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUISprite_obj::revive,
	( ::String (::hx::Object::*)())&::flixel::addons::ui::FlxUISprite_obj::toString,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUISprite_obj::set_x,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUISprite_obj::set_y,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUISprite_obj::set_alpha,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUISprite_obj::set_angle,
	( int (::hx::Object::*)(int))&::flixel::addons::ui::FlxUISprite_obj::set_facing,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUISprite_obj::set_moves,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUISprite_obj::set_immovable,
	( void (::hx::Object::*)(Float,Float))&::flixel::addons::ui::FlxUISprite_obj::reset,
	( void (::hx::Object::*)(::hx::Null< Float > ,::hx::Null< Float > ))&::flixel::addons::ui::FlxUISprite_obj::setPosition,
};

static ::flixel::IFlxBasic_obj _hx_flixel_addons_ui_FlxUISprite__hx_flixel_IFlxBasic= {
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUISprite_obj::set_active,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUISprite_obj::set_visible,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUISprite_obj::set_alive,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUISprite_obj::set_exists,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUISprite_obj::draw,
	( void (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUISprite_obj::update,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUISprite_obj::destroy,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUISprite_obj::kill,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUISprite_obj::revive,
	( ::String (::hx::Object::*)())&::flixel::addons::ui::FlxUISprite_obj::toString,
};

static ::flixel::addons::ui::interfaces::IFlxUIWidget_obj _hx_flixel_addons_ui_FlxUISprite__hx_flixel_addons_ui_interfaces_IFlxUIWidget= {
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUISprite_obj::set_active,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUISprite_obj::set_visible,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUISprite_obj::set_alive,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUISprite_obj::set_exists,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUISprite_obj::draw,
	( void (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUISprite_obj::update,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUISprite_obj::destroy,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUISprite_obj::kill,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUISprite_obj::revive,
	( ::String (::hx::Object::*)())&::flixel::addons::ui::FlxUISprite_obj::toString,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUISprite_obj::set_x,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUISprite_obj::set_y,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUISprite_obj::set_alpha,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUISprite_obj::set_angle,
	( int (::hx::Object::*)(int))&::flixel::addons::ui::FlxUISprite_obj::set_facing,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUISprite_obj::set_moves,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUISprite_obj::set_immovable,
	( void (::hx::Object::*)(Float,Float))&::flixel::addons::ui::FlxUISprite_obj::reset,
	( void (::hx::Object::*)(::hx::Null< Float > ,::hx::Null< Float > ))&::flixel::addons::ui::FlxUISprite_obj::setPosition,
	( Float (::hx::Object::*)())&::flixel::addons::ui::FlxUISprite_obj::get_width,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUISprite_obj::set_width,
	( Float (::hx::Object::*)())&::flixel::addons::ui::FlxUISprite_obj::get_height,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUISprite_obj::set_height,
};

static ::flixel::addons::ui::interfaces::IResizable_obj _hx_flixel_addons_ui_FlxUISprite__hx_flixel_addons_ui_interfaces_IResizable= {
	( Float (::hx::Object::*)())&::flixel::addons::ui::FlxUISprite_obj::get_width,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUISprite_obj::set_width,
	( Float (::hx::Object::*)())&::flixel::addons::ui::FlxUISprite_obj::get_height,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUISprite_obj::set_height,
	( void (::hx::Object::*)(Float,Float))&::flixel::addons::ui::FlxUISprite_obj::resize,
};

void *FlxUISprite_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x897c83aa: return &_hx_flixel_addons_ui_FlxUISprite__hx_flixel_IFlxSprite;
		case (int)0x284cfea9: return &_hx_flixel_addons_ui_FlxUISprite__hx_flixel_IFlxBasic;
		case (int)0x998525de: return &_hx_flixel_addons_ui_FlxUISprite__hx_flixel_addons_ui_interfaces_IFlxUIWidget;
		case (int)0x194a3c9f: return &_hx_flixel_addons_ui_FlxUISprite__hx_flixel_addons_ui_interfaces_IResizable;
	}
	return super::_hx_getInterface(inHash);
}

Float FlxUISprite_obj::set_resize_ratio(Float r){
            	HX_STACKFRAME(&_hx_pos_22e81ddbc10a4d63_38_set_resize_ratio)
HXLINE(  39)		this->resize_ratio = r;
HXLINE(  40)		return r;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUISprite_obj,set_resize_ratio,return )

 ::flixel::math::FlxPoint FlxUISprite_obj::set_resize_point( ::flixel::math::FlxPoint r){
            	HX_STACKFRAME(&_hx_pos_22e81ddbc10a4d63_47_set_resize_point)
HXLINE(  48)		if (::hx::IsNotNull( r )) {
HXLINE(  50)			 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN(  50)			point->_inPool = false;
HXDLIN(  50)			this->resize_point = point;
HXLINE(  51)			this->resize_point->set_x(r->x);
HXLINE(  52)			this->resize_point->set_y(r->y);
            		}
HXLINE(  54)		return this->resize_point;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUISprite_obj,set_resize_point,return )

void FlxUISprite_obj::recycle( ::Dynamic data){
            	HX_STACKFRAME(&_hx_pos_22e81ddbc10a4d63_64_recycle)
HXDLIN(  64)		this->recycled = true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUISprite_obj,recycle,(void))

void FlxUISprite_obj::resize(Float w,Float h){
            	HX_STACKFRAME(&_hx_pos_22e81ddbc10a4d63_69_resize)
HXLINE(  70)		Float old_width = this->get_width();
HXLINE(  71)		Float old_height = this->get_height();
HXLINE(  73)		if ((this->resize_ratio > 0)) {
HXLINE(  75)			Float effective_ratio = (w / h);
HXLINE(  76)			if ((::Math_obj::abs((effective_ratio - this->resize_ratio)) > ((Float)0.0001))) {
HXLINE(  78)				if ((this->resize_ratio_axis == 1)) {
HXLINE(  80)					h = (w * (( (Float)(1) ) / this->resize_ratio));
            				}
            				else {
HXLINE(  84)					w = (h * (( (Float)(1) ) / this->resize_ratio));
            				}
            			}
            		}
HXLINE(  89)		bool _hx_tmp;
HXDLIN(  89)		if ((this->_originalKey != HX_("",00,00,00,00))) {
HXLINE(  89)			_hx_tmp = ::hx::IsNotNull( this->_originalKey );
            		}
            		else {
HXLINE(  89)			_hx_tmp = false;
            		}
HXDLIN(  89)		if (_hx_tmp) {
HXLINE(  91)			::String newKey = ::flixel::addons::ui::U_obj::loadScaledImage(this->_originalKey,w,h,null());
HXLINE(  92)			bool _hx_tmp;
HXDLIN(  92)			if ((newKey != HX_("",00,00,00,00))) {
HXLINE(  92)				_hx_tmp = ::hx::IsNotNull( newKey );
            			}
            			else {
HXLINE(  92)				_hx_tmp = false;
            			}
HXDLIN(  92)			if (_hx_tmp) {
HXLINE(  94)				this->loadFromScaledGraphic(newKey,null(),null(),null(),null(),null());
            			}
            		}
HXLINE(  98)		Float diff_w = (this->get_width() - old_width);
HXLINE(  99)		Float diff_h = (this->get_height() - old_height);
HXLINE( 101)		if (::hx::IsNotNull( this->resize_point )) {
HXLINE( 103)			Float delta_x = (diff_w * this->resize_point->x);
HXLINE( 104)			Float delta_y = (diff_h * this->resize_point->y);
HXLINE( 105)			this->set_x((this->x - delta_x));
HXLINE( 106)			this->set_y((this->y - delta_y));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxUISprite_obj,resize,(void))

void FlxUISprite_obj::loadGraphicAtScale(::String GraphicKey,Float W,Float H){
            	HX_STACKFRAME(&_hx_pos_22e81ddbc10a4d63_111_loadGraphicAtScale)
HXLINE( 112)		this->loadGraphic(GraphicKey,false,null(),null(),null(),null());
HXLINE( 113)		this->resize(W,H);
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxUISprite_obj,loadGraphicAtScale,(void))

 ::flixel::FlxSprite FlxUISprite_obj::loadGraphic( ::Dynamic Graphic,::hx::Null< bool >  __o_Animated,::hx::Null< int >  __o_Width,::hx::Null< int >  __o_Height,::hx::Null< bool >  __o_Unique,::String Key){
            		bool Animated = __o_Animated.Default(false);
            		int Width = __o_Width.Default(0);
            		int Height = __o_Height.Default(0);
            		bool Unique = __o_Unique.Default(false);
            	HX_STACKFRAME(&_hx_pos_22e81ddbc10a4d63_129_loadGraphic)
HXLINE( 130)		 ::flixel::FlxSprite sprite = this->super::loadGraphic(Graphic,Animated,Width,Height,Unique,Key);
HXLINE( 131)		this->_originalKey = this->graphic->assetsKey;
HXLINE( 132)		if (::hx::IsNull( this->_originalKey )) {
HXLINE( 134)			this->_originalKey = this->graphic->key;
            		}
HXLINE( 136)		return sprite;
            	}


void FlxUISprite_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_22e81ddbc10a4d63_140_destroy)
HXLINE( 141)		this->ptr_owner = null();
HXLINE( 142)		this->super::destroy();
            	}


void FlxUISprite_obj::loadFromScaledGraphic( ::Dynamic Graphic,::hx::Null< bool >  __o_Animated,::hx::Null< int >  __o_Width,::hx::Null< int >  __o_Height,::hx::Null< bool >  __o_Unique,::String Key){
            		bool Animated = __o_Animated.Default(false);
            		int Width = __o_Width.Default(0);
            		int Height = __o_Height.Default(0);
            		bool Unique = __o_Unique.Default(false);
            	HX_STACKFRAME(&_hx_pos_22e81ddbc10a4d63_148_loadFromScaledGraphic)
HXDLIN( 148)		this->super::loadGraphic(Graphic,Animated,Width,Height,Unique,Key);
            	}


HX_DEFINE_DYNAMIC_FUNC6(FlxUISprite_obj,loadFromScaledGraphic,(void))

int FlxUISprite_obj::RESIZE_RATIO_X;

int FlxUISprite_obj::RESIZE_RATIO_Y;

int FlxUISprite_obj::RESIZE_RATIO_UNKNOWN;


::hx::ObjectPtr< FlxUISprite_obj > FlxUISprite_obj::__new(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y, ::Dynamic SimpleGraphic) {
	::hx::ObjectPtr< FlxUISprite_obj > __this = new FlxUISprite_obj();
	__this->__construct(__o_X,__o_Y,SimpleGraphic);
	return __this;
}

::hx::ObjectPtr< FlxUISprite_obj > FlxUISprite_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y, ::Dynamic SimpleGraphic) {
	FlxUISprite_obj *__this = (FlxUISprite_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxUISprite_obj), true, "flixel.addons.ui.FlxUISprite"));
	*(void **)__this = FlxUISprite_obj::_hx_vtable;
	__this->__construct(__o_X,__o_Y,SimpleGraphic);
	return __this;
}

FlxUISprite_obj::FlxUISprite_obj()
{
}

void FlxUISprite_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxUISprite);
	HX_MARK_MEMBER_NAME(broadcastToFlxUI,"broadcastToFlxUI");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(ptr_owner,"ptr_owner");
	HX_MARK_MEMBER_NAME(recycled,"recycled");
	HX_MARK_MEMBER_NAME(resize_ratio,"resize_ratio");
	HX_MARK_MEMBER_NAME(resize_ratio_axis,"resize_ratio_axis");
	HX_MARK_MEMBER_NAME(resize_point,"resize_point");
	HX_MARK_MEMBER_NAME(_originalKey,"_originalKey");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxUISprite_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(broadcastToFlxUI,"broadcastToFlxUI");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(ptr_owner,"ptr_owner");
	HX_VISIT_MEMBER_NAME(recycled,"recycled");
	HX_VISIT_MEMBER_NAME(resize_ratio,"resize_ratio");
	HX_VISIT_MEMBER_NAME(resize_ratio_axis,"resize_ratio_axis");
	HX_VISIT_MEMBER_NAME(resize_point,"resize_point");
	HX_VISIT_MEMBER_NAME(_originalKey,"_originalKey");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxUISprite_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return ::hx::Val( name ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"resize") ) { return ::hx::Val( resize_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"recycle") ) { return ::hx::Val( recycle_dyn() ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"recycled") ) { return ::hx::Val( recycled ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"ptr_owner") ) { return ::hx::Val( ptr_owner ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"loadGraphic") ) { return ::hx::Val( loadGraphic_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"resize_ratio") ) { return ::hx::Val( resize_ratio ); }
		if (HX_FIELD_EQ(inName,"resize_point") ) { return ::hx::Val( resize_point ); }
		if (HX_FIELD_EQ(inName,"_originalKey") ) { return ::hx::Val( _originalKey ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"broadcastToFlxUI") ) { return ::hx::Val( broadcastToFlxUI ); }
		if (HX_FIELD_EQ(inName,"set_resize_ratio") ) { return ::hx::Val( set_resize_ratio_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_resize_point") ) { return ::hx::Val( set_resize_point_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"resize_ratio_axis") ) { return ::hx::Val( resize_ratio_axis ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"loadGraphicAtScale") ) { return ::hx::Val( loadGraphicAtScale_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"loadFromScaledGraphic") ) { return ::hx::Val( loadFromScaledGraphic_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxUISprite_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"recycled") ) { recycled=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"ptr_owner") ) { ptr_owner=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"resize_ratio") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_resize_ratio(inValue.Cast< Float >()) );resize_ratio=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"resize_point") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_resize_point(inValue.Cast<  ::flixel::math::FlxPoint >()) );resize_point=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_originalKey") ) { _originalKey=inValue.Cast< ::String >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"broadcastToFlxUI") ) { broadcastToFlxUI=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"resize_ratio_axis") ) { resize_ratio_axis=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxUISprite_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("broadcastToFlxUI",ca,32,56,1a));
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("ptr_owner",e2,67,66,ed));
	outFields->push(HX_("recycled",f1,00,02,63));
	outFields->push(HX_("resize_ratio",40,c5,84,8f));
	outFields->push(HX_("resize_ratio_axis",40,6b,72,8a));
	outFields->push(HX_("resize_point",85,44,f0,71));
	outFields->push(HX_("_originalKey",cf,83,fd,9a));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxUISprite_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(FlxUISprite_obj,broadcastToFlxUI),HX_("broadcastToFlxUI",ca,32,56,1a)},
	{::hx::fsString,(int)offsetof(FlxUISprite_obj,name),HX_("name",4b,72,ff,48)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxUISprite_obj,ptr_owner),HX_("ptr_owner",e2,67,66,ed)},
	{::hx::fsBool,(int)offsetof(FlxUISprite_obj,recycled),HX_("recycled",f1,00,02,63)},
	{::hx::fsFloat,(int)offsetof(FlxUISprite_obj,resize_ratio),HX_("resize_ratio",40,c5,84,8f)},
	{::hx::fsInt,(int)offsetof(FlxUISprite_obj,resize_ratio_axis),HX_("resize_ratio_axis",40,6b,72,8a)},
	{::hx::fsObject /*  ::flixel::math::FlxPoint */ ,(int)offsetof(FlxUISprite_obj,resize_point),HX_("resize_point",85,44,f0,71)},
	{::hx::fsString,(int)offsetof(FlxUISprite_obj,_originalKey),HX_("_originalKey",cf,83,fd,9a)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo FlxUISprite_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &FlxUISprite_obj::RESIZE_RATIO_X,HX_("RESIZE_RATIO_X",39,84,13,c5)},
	{::hx::fsInt,(void *) &FlxUISprite_obj::RESIZE_RATIO_Y,HX_("RESIZE_RATIO_Y",3a,84,13,c5)},
	{::hx::fsInt,(void *) &FlxUISprite_obj::RESIZE_RATIO_UNKNOWN,HX_("RESIZE_RATIO_UNKNOWN",0b,1a,c4,be)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String FlxUISprite_obj_sMemberFields[] = {
	HX_("broadcastToFlxUI",ca,32,56,1a),
	HX_("name",4b,72,ff,48),
	HX_("ptr_owner",e2,67,66,ed),
	HX_("recycled",f1,00,02,63),
	HX_("resize_ratio",40,c5,84,8f),
	HX_("resize_ratio_axis",40,6b,72,8a),
	HX_("set_resize_ratio",3d,9f,65,ea),
	HX_("resize_point",85,44,f0,71),
	HX_("set_resize_point",82,1e,d1,cc),
	HX_("recycle",13,10,8c,37),
	HX_("resize",f4,59,7b,08),
	HX_("loadGraphicAtScale",95,6f,28,4c),
	HX_("loadGraphic",22,19,a5,44),
	HX_("destroy",fa,2c,86,24),
	HX_("loadFromScaledGraphic",5e,ea,61,42),
	HX_("_originalKey",cf,83,fd,9a),
	::String(null()) };

static void FlxUISprite_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxUISprite_obj::RESIZE_RATIO_X,"RESIZE_RATIO_X");
	HX_MARK_MEMBER_NAME(FlxUISprite_obj::RESIZE_RATIO_Y,"RESIZE_RATIO_Y");
	HX_MARK_MEMBER_NAME(FlxUISprite_obj::RESIZE_RATIO_UNKNOWN,"RESIZE_RATIO_UNKNOWN");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxUISprite_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxUISprite_obj::RESIZE_RATIO_X,"RESIZE_RATIO_X");
	HX_VISIT_MEMBER_NAME(FlxUISprite_obj::RESIZE_RATIO_Y,"RESIZE_RATIO_Y");
	HX_VISIT_MEMBER_NAME(FlxUISprite_obj::RESIZE_RATIO_UNKNOWN,"RESIZE_RATIO_UNKNOWN");
};

#endif

::hx::Class FlxUISprite_obj::__mClass;

static ::String FlxUISprite_obj_sStaticFields[] = {
	HX_("RESIZE_RATIO_X",39,84,13,c5),
	HX_("RESIZE_RATIO_Y",3a,84,13,c5),
	HX_("RESIZE_RATIO_UNKNOWN",0b,1a,c4,be),
	::String(null())
};

void FlxUISprite_obj::__register()
{
	FlxUISprite_obj _hx_dummy;
	FlxUISprite_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.ui.FlxUISprite",3a,c6,51,fe);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxUISprite_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxUISprite_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxUISprite_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxUISprite_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxUISprite_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxUISprite_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxUISprite_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxUISprite_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_22e81ddbc10a4d63_27_boot)
HXDLIN(  27)		RESIZE_RATIO_X = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_22e81ddbc10a4d63_28_boot)
HXDLIN(  28)		RESIZE_RATIO_Y = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_22e81ddbc10a4d63_29_boot)
HXDLIN(  29)		RESIZE_RATIO_UNKNOWN = -1;
            	}
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui
