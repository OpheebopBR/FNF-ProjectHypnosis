#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_flixel_addons_ui_BorderDef
#include <flixel/addons/ui/BorderDef.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_ButtonLabelStyle
#include <flixel/addons/ui/ButtonLabelStyle.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_CheckStyle
#include <flixel/addons/ui/CheckStyle.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUI
#include <flixel/addons/ui/FlxUI.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIButton
#include <flixel/addons/ui/FlxUIButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUICheckBox
#include <flixel/addons/ui/FlxUICheckBox.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIGroup
#include <flixel/addons/ui/FlxUIGroup.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIList
#include <flixel/addons/ui/FlxUIList.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIRadioGroup
#include <flixel/addons/ui/FlxUIRadioGroup.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIText
#include <flixel/addons/ui/FlxUIText.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUITypedButton
#include <flixel/addons/ui/FlxUITypedButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FontDef
#include <flixel/addons/ui/FontDef.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_U
#include <flixel/addons/ui/U.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_ICursorPointable
#include <flixel/addons/ui/interfaces/ICursorPointable.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIButton
#include <flixel/addons/ui/interfaces/IFlxUIButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIClickable
#include <flixel/addons/ui/interfaces/IFlxUIClickable.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIWidget
#include <flixel/addons/ui/interfaces/IFlxUIWidget.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IHasParams
#include <flixel/addons/ui/interfaces/IHasParams.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_ILabeled
#include <flixel/addons/ui/interfaces/ILabeled.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IResizable
#include <flixel/addons/ui/interfaces/IResizable.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
#ifndef INCLUDED_flixel_text__FlxText_FlxTextAlign_Impl_
#include <flixel/text/_FlxText/FlxTextAlign_Impl_.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton
#include <flixel/ui/FlxTypedButton.h>
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
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_215b0c31593ed545_15_new,"flixel.addons.ui.FlxUIRadioGroup","new",0xb1b15e6b,"flixel.addons.ui.FlxUIRadioGroup.new","flixel/addons/ui/FlxUIRadioGroup.hx",15,0x807a4586)
HX_LOCAL_STACK_FRAME(_hx_pos_215b0c31593ed545_25_set_activeStyle,"flixel.addons.ui.FlxUIRadioGroup","set_activeStyle",0x2acfccb9,"flixel.addons.ui.FlxUIRadioGroup.set_activeStyle","flixel/addons/ui/FlxUIRadioGroup.hx",25,0x807a4586)
HX_LOCAL_STACK_FRAME(_hx_pos_215b0c31593ed545_34_set_inactiveStyle,"flixel.addons.ui.FlxUIRadioGroup","set_inactiveStyle",0x59ff0874,"flixel.addons.ui.FlxUIRadioGroup.set_inactiveStyle","flixel/addons/ui/FlxUIRadioGroup.hx",34,0x807a4586)
HX_LOCAL_STACK_FRAME(_hx_pos_215b0c31593ed545_44_get_numRadios,"flixel.addons.ui.FlxUIRadioGroup","get_numRadios",0xf40593a0,"flixel.addons.ui.FlxUIRadioGroup.get_numRadios","flixel/addons/ui/FlxUIRadioGroup.hx",44,0x807a4586)
HX_LOCAL_STACK_FRAME(_hx_pos_215b0c31593ed545_52_set_skipButtonUpdate,"flixel.addons.ui.FlxUIRadioGroup","set_skipButtonUpdate",0x2de214cc,"flixel.addons.ui.FlxUIRadioGroup.set_skipButtonUpdate","flixel/addons/ui/FlxUIRadioGroup.hx",52,0x807a4586)
HX_LOCAL_STACK_FRAME(_hx_pos_215b0c31593ed545_66_set_params,"flixel.addons.ui.FlxUIRadioGroup","set_params",0x363b22d8,"flixel.addons.ui.FlxUIRadioGroup.set_params","flixel/addons/ui/FlxUIRadioGroup.hx",66,0x807a4586)
HX_LOCAL_STACK_FRAME(_hx_pos_215b0c31593ed545_78_set_width,"flixel.addons.ui.FlxUIRadioGroup","set_width",0x37c526b4,"flixel.addons.ui.FlxUIRadioGroup.set_width","flixel/addons/ui/FlxUIRadioGroup.hx",78,0x807a4586)
HX_LOCAL_STACK_FRAME(_hx_pos_215b0c31593ed545_91_set_height,"flixel.addons.ui.FlxUIRadioGroup","set_height",0x4b0c2f79,"flixel.addons.ui.FlxUIRadioGroup.set_height","flixel/addons/ui/FlxUIRadioGroup.hx",91,0x807a4586)
HX_LOCAL_STACK_FRAME(_hx_pos_215b0c31593ed545_145_loadGraphics,"flixel.addons.ui.FlxUIRadioGroup","loadGraphics",0x1884bda6,"flixel.addons.ui.FlxUIRadioGroup.loadGraphics","flixel/addons/ui/FlxUIRadioGroup.hx",145,0x807a4586)
HX_LOCAL_STACK_FRAME(_hx_pos_215b0c31593ed545_184_destroy,"flixel.addons.ui.FlxUIRadioGroup","destroy",0x842b1c85,"flixel.addons.ui.FlxUIRadioGroup.destroy","flixel/addons/ui/FlxUIRadioGroup.hx",184,0x807a4586)
HX_LOCAL_STACK_FRAME(_hx_pos_215b0c31593ed545_202_updateLabel,"flixel.addons.ui.FlxUIRadioGroup","updateLabel",0x24428836,"flixel.addons.ui.FlxUIRadioGroup.updateLabel","flixel/addons/ui/FlxUIRadioGroup.hx",202,0x807a4586)
HX_LOCAL_STACK_FRAME(_hx_pos_215b0c31593ed545_216_updateId,"flixel.addons.ui.FlxUIRadioGroup","updateId",0xc8a6c459,"flixel.addons.ui.FlxUIRadioGroup.updateId","flixel/addons/ui/FlxUIRadioGroup.hx",216,0x807a4586)
HX_LOCAL_STACK_FRAME(_hx_pos_215b0c31593ed545_225_show,"flixel.addons.ui.FlxUIRadioGroup","show",0xccd19092,"flixel.addons.ui.FlxUIRadioGroup.show","flixel/addons/ui/FlxUIRadioGroup.hx",225,0x807a4586)
HX_LOCAL_STACK_FRAME(_hx_pos_215b0c31593ed545_232_updateRadios,"flixel.addons.ui.FlxUIRadioGroup","updateRadios",0xfd6e4a96,"flixel.addons.ui.FlxUIRadioGroup.updateRadios","flixel/addons/ui/FlxUIRadioGroup.hx",232,0x807a4586)
HX_LOCAL_STACK_FRAME(_hx_pos_215b0c31593ed545_244_getRadios,"flixel.addons.ui.FlxUIRadioGroup","getRadios",0x73b57c99,"flixel.addons.ui.FlxUIRadioGroup.getRadios","flixel/addons/ui/FlxUIRadioGroup.hx",244,0x807a4586)
HX_LOCAL_STACK_FRAME(_hx_pos_215b0c31593ed545_248_getLabel,"flixel.addons.ui.FlxUIRadioGroup","getLabel",0x2032c793,"flixel.addons.ui.FlxUIRadioGroup.getLabel","flixel/addons/ui/FlxUIRadioGroup.hx",248,0x807a4586)
HX_LOCAL_STACK_FRAME(_hx_pos_215b0c31593ed545_257_getId,"flixel.addons.ui.FlxUIRadioGroup","getId",0x7fc5f8dc,"flixel.addons.ui.FlxUIRadioGroup.getId","flixel/addons/ui/FlxUIRadioGroup.hx",257,0x807a4586)
HX_LOCAL_STACK_FRAME(_hx_pos_215b0c31593ed545_266_getIsVisible,"flixel.addons.ui.FlxUIRadioGroup","getIsVisible",0x032d6ac7,"flixel.addons.ui.FlxUIRadioGroup.getIsVisible","flixel/addons/ui/FlxUIRadioGroup.hx",266,0x807a4586)
HX_LOCAL_STACK_FRAME(_hx_pos_215b0c31593ed545_277_get_clickable,"flixel.addons.ui.FlxUIRadioGroup","get_clickable",0xc69c2b84,"flixel.addons.ui.FlxUIRadioGroup.get_clickable","flixel/addons/ui/FlxUIRadioGroup.hx",277,0x807a4586)
HX_LOCAL_STACK_FRAME(_hx_pos_215b0c31593ed545_281_set_clickable,"flixel.addons.ui.FlxUIRadioGroup","set_clickable",0x0ba20d90,"flixel.addons.ui.FlxUIRadioGroup.set_clickable","flixel/addons/ui/FlxUIRadioGroup.hx",281,0x807a4586)
HX_LOCAL_STACK_FRAME(_hx_pos_215b0c31593ed545_292_get_selectedIndex,"flixel.addons.ui.FlxUIRadioGroup","get_selectedIndex",0x2e506d59,"flixel.addons.ui.FlxUIRadioGroup.get_selectedIndex","flixel/addons/ui/FlxUIRadioGroup.hx",292,0x807a4586)
HX_LOCAL_STACK_FRAME(_hx_pos_215b0c31593ed545_296_set_selectedIndex,"flixel.addons.ui.FlxUIRadioGroup","set_selectedIndex",0x51be4565,"flixel.addons.ui.FlxUIRadioGroup.set_selectedIndex","flixel/addons/ui/FlxUIRadioGroup.hx",296,0x807a4586)
HX_LOCAL_STACK_FRAME(_hx_pos_215b0c31593ed545_317_get_selectedLabel,"flixel.addons.ui.FlxUIRadioGroup","get_selectedLabel",0xdfeae03b,"flixel.addons.ui.FlxUIRadioGroup.get_selectedLabel","flixel/addons/ui/FlxUIRadioGroup.hx",317,0x807a4586)
HX_LOCAL_STACK_FRAME(_hx_pos_215b0c31593ed545_321_set_selectedLabel,"flixel.addons.ui.FlxUIRadioGroup","set_selectedLabel",0x0358b847,"flixel.addons.ui.FlxUIRadioGroup.set_selectedLabel","flixel/addons/ui/FlxUIRadioGroup.hx",321,0x807a4586)
HX_LOCAL_STACK_FRAME(_hx_pos_215b0c31593ed545_343_get_selectedId,"flixel.addons.ui.FlxUIRadioGroup","get_selectedId",0x00916734,"flixel.addons.ui.FlxUIRadioGroup.get_selectedId","flixel/addons/ui/FlxUIRadioGroup.hx",343,0x807a4586)
HX_LOCAL_STACK_FRAME(_hx_pos_215b0c31593ed545_347_set_selectedId,"flixel.addons.ui.FlxUIRadioGroup","set_selectedId",0x20b14fa8,"flixel.addons.ui.FlxUIRadioGroup.set_selectedId","flixel/addons/ui/FlxUIRadioGroup.hx",347,0x807a4586)
HX_LOCAL_STACK_FRAME(_hx_pos_215b0c31593ed545_376_setLineScroll,"flixel.addons.ui.FlxUIRadioGroup","setLineScroll",0x8e2ebb2e,"flixel.addons.ui.FlxUIRadioGroup.setLineScroll","flixel/addons/ui/FlxUIRadioGroup.hx",376,0x807a4586)
HX_LOCAL_STACK_FRAME(_hx_pos_215b0c31593ed545_389_setRadioActive,"flixel.addons.ui.FlxUIRadioGroup","setRadioActive",0xd9735874,"flixel.addons.ui.FlxUIRadioGroup.setRadioActive","flixel/addons/ui/FlxUIRadioGroup.hx",389,0x807a4586)
HX_LOCAL_STACK_FRAME(_hx_pos_215b0c31593ed545_422__refreshRadios,"flixel.addons.ui.FlxUIRadioGroup","_refreshRadios",0xb14e4769,"flixel.addons.ui.FlxUIRadioGroup._refreshRadios","flixel/addons/ui/FlxUIRadioGroup.hx",422,0x807a4586)
HX_LOCAL_STACK_FRAME(_hx_pos_215b0c31593ed545_464__refreshRadios,"flixel.addons.ui.FlxUIRadioGroup","_refreshRadios",0xb14e4769,"flixel.addons.ui.FlxUIRadioGroup._refreshRadios","flixel/addons/ui/FlxUIRadioGroup.hx",464,0x807a4586)
HX_LOCAL_STACK_FRAME(_hx_pos_215b0c31593ed545_527_updateActives,"flixel.addons.ui.FlxUIRadioGroup","updateActives",0x034b5aaf,"flixel.addons.ui.FlxUIRadioGroup.updateActives","flixel/addons/ui/FlxUIRadioGroup.hx",527,0x807a4586)
HX_LOCAL_STACK_FRAME(_hx_pos_215b0c31593ed545_546_makeActiveStyle,"flixel.addons.ui.FlxUIRadioGroup","makeActiveStyle",0x9d1f80c8,"flixel.addons.ui.FlxUIRadioGroup.makeActiveStyle","flixel/addons/ui/FlxUIRadioGroup.hx",546,0x807a4586)
HX_LOCAL_STACK_FRAME(_hx_pos_215b0c31593ed545_561__onCheckBoxEvent,"flixel.addons.ui.FlxUIRadioGroup","_onCheckBoxEvent",0xc5d5ffee,"flixel.addons.ui.FlxUIRadioGroup._onCheckBoxEvent","flixel/addons/ui/FlxUIRadioGroup.hx",561,0x807a4586)
HX_LOCAL_STACK_FRAME(_hx_pos_215b0c31593ed545_565__onClick,"flixel.addons.ui.FlxUIRadioGroup","_onClick",0x69011e3f,"flixel.addons.ui.FlxUIRadioGroup._onClick","flixel/addons/ui/FlxUIRadioGroup.hx",565,0x807a4586)
HX_LOCAL_STACK_FRAME(_hx_pos_215b0c31593ed545_47_boot,"flixel.addons.ui.FlxUIRadioGroup","boot",0xc19a3fc7,"flixel.addons.ui.FlxUIRadioGroup.boot","flixel/addons/ui/FlxUIRadioGroup.hx",47,0x807a4586)
namespace flixel{
namespace addons{
namespace ui{

void FlxUIRadioGroup_obj::__construct(Float X,Float Y,::Array< ::String > ids_,::Array< ::String > labels_, ::Dynamic callback_,::hx::Null< Float >  __o_y_space_,::hx::Null< int >  __o_width_,::hx::Null< int >  __o_height_,::hx::Null< int >  __o_label_width_,::String __o_MoreString, ::flixel::math::FlxPoint PrevButtonOffset, ::flixel::math::FlxPoint NextButtonOffset,::Dynamic PrevButton,::Dynamic NextButton){
            		Float y_space_ = __o_y_space_.Default(25);
            		int width_ = __o_width_.Default(100);
            		int height_ = __o_height_.Default(20);
            		int label_width_ = __o_label_width_.Default(100);
            		::String MoreString = __o_MoreString;
            		if (::hx::IsNull(__o_MoreString)) MoreString = HX_("<X> more...",7b,65,54,87);
            	HX_GC_STACKFRAME(&_hx_pos_215b0c31593ed545_15_new)
HXLINE( 415)		this->_clickable = true;
HXLINE( 413)		this->_selected = 0;
HXLINE( 412)		this->_y_space = ((Float)25);
HXLINE( 410)		this->_height = 20;
HXLINE( 409)		this->_width = 100;
HXLINE( 408)		this->_label_width = 100;
HXLINE(  75)		this->fixedSize = false;
HXLINE( 124)		super::__construct(null(),null());
HXLINE( 125)		this->_y_space = y_space_;
HXLINE( 126)		this->_width = width_;
HXLINE( 127)		this->_height = height_;
HXLINE( 128)		this->_label_width = label_width_;
HXLINE( 129)		if (::hx::IsNull( ids_ )) {
HXLINE( 130)			ids_ = ::Array_obj< ::String >::__new(0);
            		}
HXLINE( 131)		if (::hx::IsNull( labels_ )) {
HXLINE( 132)			labels_ = ::Array_obj< ::String >::__new(0);
            		}
HXLINE( 133)		this->callback = callback_;
HXLINE( 134)		this->_list_radios = ::Array_obj< ::Dynamic>::__new();
HXLINE( 135)		this->_list_active = ::Array_obj< bool >::__new(0);
HXLINE( 136)		this->_list =  ::flixel::addons::ui::FlxUIList_obj::__alloc( HX_CTX ,0,0,null(),0,0,MoreString,1,0,PrevButtonOffset,NextButtonOffset,PrevButton,NextButton);
HXLINE( 137)		this->add(this->_list);
HXLINE( 138)		this->updateRadios(ids_,labels_);
HXLINE( 139)		this->loadGraphics(null(),null());
HXLINE( 140)		this->set_x(X);
HXLINE( 141)		this->set_y(Y);
            	}

Dynamic FlxUIRadioGroup_obj::__CreateEmpty() { return new FlxUIRadioGroup_obj; }

void *FlxUIRadioGroup_obj::_hx_vtable = 0;

Dynamic FlxUIRadioGroup_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxUIRadioGroup_obj > _hx_result = new FlxUIRadioGroup_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8],inArgs[9],inArgs[10],inArgs[11],inArgs[12],inArgs[13]);
	return _hx_result;
}

bool FlxUIRadioGroup_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x398eb8dc) {
		if (inClassId<=(int)0x2c01639b) {
			if (inClassId<=(int)0x288ce903) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x288ce903;
			} else {
				return inClassId==(int)0x2c01639b;
			}
		} else {
			return inClassId==(int)0x398eb8dc;
		}
	} else {
		if (inClassId<=(int)0x7ccf8994) {
			return inClassId==(int)0x41492aa3 || inClassId==(int)0x7ccf8994;
		} else {
			return inClassId==(int)0x7dab0655;
		}
	}
}

static ::flixel::addons::ui::interfaces::IHasParams_obj _hx_flixel_addons_ui_FlxUIRadioGroup__hx_flixel_addons_ui_interfaces_IHasParams= {
	( ::cpp::VirtualArray (::hx::Object::*)(::cpp::VirtualArray))&::flixel::addons::ui::FlxUIRadioGroup_obj::set_params,
};

static ::flixel::addons::ui::interfaces::IFlxUIClickable_obj _hx_flixel_addons_ui_FlxUIRadioGroup__hx_flixel_addons_ui_interfaces_IFlxUIClickable= {
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUIRadioGroup_obj::set_skipButtonUpdate,
};

void *FlxUIRadioGroup_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x9e5db374: return &_hx_flixel_addons_ui_FlxUIRadioGroup__hx_flixel_addons_ui_interfaces_IHasParams;
		case (int)0x3e998408: return &_hx_flixel_addons_ui_FlxUIRadioGroup__hx_flixel_addons_ui_interfaces_IFlxUIClickable;
	}
	return super::_hx_getInterface(inHash);
}

 ::flixel::addons::ui::CheckStyle FlxUIRadioGroup_obj::set_activeStyle( ::flixel::addons::ui::CheckStyle b){
            	HX_STACKFRAME(&_hx_pos_215b0c31593ed545_25_set_activeStyle)
HXLINE(  26)		this->activeStyle = b;
HXLINE(  27)		this->updateActives();
HXLINE(  28)		return this->activeStyle;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIRadioGroup_obj,set_activeStyle,return )

 ::flixel::addons::ui::CheckStyle FlxUIRadioGroup_obj::set_inactiveStyle( ::flixel::addons::ui::CheckStyle b){
            	HX_STACKFRAME(&_hx_pos_215b0c31593ed545_34_set_inactiveStyle)
HXLINE(  35)		this->inactiveStyle = b;
HXLINE(  36)		this->updateActives();
HXLINE(  37)		return this->inactiveStyle;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIRadioGroup_obj,set_inactiveStyle,return )

int FlxUIRadioGroup_obj::get_numRadios(){
            	HX_STACKFRAME(&_hx_pos_215b0c31593ed545_44_get_numRadios)
HXDLIN(  44)		return this->_list_radios->length;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxUIRadioGroup_obj,get_numRadios,return )

bool FlxUIRadioGroup_obj::set_skipButtonUpdate(bool b){
            	HX_STACKFRAME(&_hx_pos_215b0c31593ed545_52_set_skipButtonUpdate)
HXLINE(  53)		this->skipButtonUpdate = b;
HXLINE(  54)		{
HXLINE(  54)			int _g = 0;
HXDLIN(  54)			::Array< ::Dynamic> _g1 = this->_list_radios;
HXDLIN(  54)			while((_g < _g1->length)){
HXLINE(  54)				 ::flixel::addons::ui::FlxUICheckBox fcb = _g1->__get(_g).StaticCast<  ::flixel::addons::ui::FlxUICheckBox >();
HXDLIN(  54)				_g = (_g + 1);
HXLINE(  56)				fcb->set_skipButtonUpdate(b);
            			}
            		}
HXLINE(  58)		return this->skipButtonUpdate;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIRadioGroup_obj,set_skipButtonUpdate,return )

::cpp::VirtualArray FlxUIRadioGroup_obj::set_params(::cpp::VirtualArray p){
            	HX_STACKFRAME(&_hx_pos_215b0c31593ed545_66_set_params)
HXLINE(  67)		this->params = p;
HXLINE(  68)		return this->params;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIRadioGroup_obj,set_params,return )

Float FlxUIRadioGroup_obj::set_width(Float Value){
            	HX_STACKFRAME(&_hx_pos_215b0c31593ed545_78_set_width)
HXLINE(  79)		this->super::set_width(Value);
HXLINE(  80)		if (this->fixedSize) {
HXLINE(  82)			if (::hx::IsNotNull( this->_list )) {
HXLINE(  84)				this->_list->set_width(Value);
            			}
            		}
HXLINE(  87)		return Value;
            	}


Float FlxUIRadioGroup_obj::set_height(Float Value){
            	HX_STACKFRAME(&_hx_pos_215b0c31593ed545_91_set_height)
HXLINE(  92)		this->super::set_height(Value);
HXLINE(  93)		if (this->fixedSize) {
HXLINE(  95)			if (::hx::IsNotNull( this->_list )) {
HXLINE(  97)				this->_list->set_height(Value);
            			}
            		}
HXLINE( 100)		return Value;
            	}


void FlxUIRadioGroup_obj::loadGraphics( ::Dynamic Box, ::Dynamic Dot){
            	HX_STACKFRAME(&_hx_pos_215b0c31593ed545_145_loadGraphics)
HXLINE( 146)		if (::hx::IsNotNull( Box )) {
HXLINE( 148)			this->_box_asset = Box;
            		}
            		else {
HXLINE( 152)			this->_box_asset = HX_("flixel/flixel-ui/img/radio.png",8d,a3,b0,52);
            		}
HXLINE( 154)		if (::hx::IsNotNull( Dot )) {
HXLINE( 156)			this->_dot_asset = Dot;
            		}
            		else {
HXLINE( 160)			this->_dot_asset = HX_("flixel/flixel-ui/img/radio_dot.png",17,49,b2,eb);
            		}
HXLINE( 163)		if (::Std_obj::isOfType(this->_box_asset,::hx::ClassOf< ::flixel::FlxSprite >())) {
HXLINE( 165)			 ::flixel::FlxSprite fs = ( ( ::flixel::FlxSprite)(this->_box_asset) );
HXLINE( 166)			this->_box_asset = fs->graphic->key;
            		}
HXLINE( 169)		if (::Std_obj::isOfType(this->_dot_asset,::hx::ClassOf< ::flixel::FlxSprite >())) {
HXLINE( 171)			 ::flixel::FlxSprite fs = ( ( ::flixel::FlxSprite)(this->_dot_asset) );
HXLINE( 172)			this->_dot_asset = fs->graphic->key;
            		}
HXLINE( 175)		{
HXLINE( 175)			int _g = 0;
HXDLIN( 175)			::Array< ::Dynamic> _g1 = this->_list_radios;
HXDLIN( 175)			while((_g < _g1->length)){
HXLINE( 175)				 ::flixel::addons::ui::FlxUICheckBox c = _g1->__get(_g).StaticCast<  ::flixel::addons::ui::FlxUICheckBox >();
HXDLIN( 175)				_g = (_g + 1);
HXLINE( 177)				c->box->loadGraphic(this->_box_asset,true,null(),null(),null(),null());
HXLINE( 178)				c->mark->loadGraphic(this->_dot_asset,null(),null(),null(),null(),null());
            			}
            		}
HXLINE( 180)		this->_refreshRadios();
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxUIRadioGroup_obj,loadGraphics,(void))

void FlxUIRadioGroup_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_215b0c31593ed545_184_destroy)
HXLINE( 185)		if (::hx::IsNotNull( this->_list_radios )) {
HXLINE( 187)			::flixel::addons::ui::U_obj::clearArray(this->_list_radios);
            		}
HXLINE( 189)		if (::hx::IsNotNull( this->_list_active )) {
HXLINE( 191)			::flixel::addons::ui::U_obj::clearArray(this->_list_active);
            		}
HXLINE( 193)		this->_list_active = null();
HXLINE( 194)		this->_list_radios = null();
HXLINE( 195)		this->_list = null();
HXLINE( 196)		this->_ids = null();
HXLINE( 197)		this->_labels = null();
HXLINE( 198)		this->super::destroy();
            	}


bool FlxUIRadioGroup_obj::updateLabel(int i,::String label_){
            	HX_STACKFRAME(&_hx_pos_215b0c31593ed545_202_updateLabel)
HXLINE( 203)		if ((i >= this->_list_radios->length)) {
HXLINE( 204)			return false;
            		}
HXLINE( 205)		this->_labels[i] = label_;
HXLINE( 206)		 ::flixel::addons::ui::FlxUICheckBox c = this->_list_radios->__get(i).StaticCast<  ::flixel::addons::ui::FlxUICheckBox >();
HXLINE( 207)		if (::hx::IsNotNull( c )) {
HXLINE( 209)			c->button->set_width(( (Float)(this->_label_width) ));
HXLINE( 210)			c->set_text(label_);
            		}
HXLINE( 212)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxUIRadioGroup_obj,updateLabel,return )

bool FlxUIRadioGroup_obj::updateId(int i,::String id_){
            	HX_STACKFRAME(&_hx_pos_215b0c31593ed545_216_updateId)
HXLINE( 217)		if ((i >= this->_list_radios->length)) {
HXLINE( 218)			return false;
            		}
HXLINE( 219)		this->_ids[i] = id_;
HXLINE( 220)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxUIRadioGroup_obj,updateId,return )

void FlxUIRadioGroup_obj::show(bool b){
            	HX_STACKFRAME(&_hx_pos_215b0c31593ed545_225_show)
HXDLIN( 225)		int _g = 0;
HXDLIN( 225)		::Array< ::Dynamic> _g1 = this->_list->group->members;
HXDLIN( 225)		while((_g < _g1->length)){
HXDLIN( 225)			 ::flixel::FlxSprite fo = _g1->__get(_g).StaticCast<  ::flixel::FlxSprite >();
HXDLIN( 225)			_g = (_g + 1);
HXLINE( 227)			fo->set_visible(b);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIRadioGroup_obj,show,(void))

void FlxUIRadioGroup_obj::updateRadios(::Array< ::String > ids_,::Array< ::String > labels_){
            	HX_STACKFRAME(&_hx_pos_215b0c31593ed545_232_updateRadios)
HXLINE( 233)		this->_ids = ids_;
HXLINE( 234)		this->_labels = labels_;
HXLINE( 235)		{
HXLINE( 235)			int _g = 0;
HXDLIN( 235)			::Array< ::Dynamic> _g1 = this->_list_radios;
HXDLIN( 235)			while((_g < _g1->length)){
HXLINE( 235)				 ::flixel::addons::ui::FlxUICheckBox c = _g1->__get(_g).StaticCast<  ::flixel::addons::ui::FlxUICheckBox >();
HXDLIN( 235)				_g = (_g + 1);
HXLINE( 237)				c->set_visible(false);
            			}
            		}
HXLINE( 239)		this->_refreshRadios();
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxUIRadioGroup_obj,updateRadios,(void))

::Array< ::Dynamic> FlxUIRadioGroup_obj::getRadios(){
            	HX_STACKFRAME(&_hx_pos_215b0c31593ed545_244_getRadios)
HXDLIN( 244)		return this->_list_radios;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxUIRadioGroup_obj,getRadios,return )

::String FlxUIRadioGroup_obj::getLabel(int i){
            	HX_STACKFRAME(&_hx_pos_215b0c31593ed545_248_getLabel)
HXLINE( 249)		bool _hx_tmp;
HXDLIN( 249)		if ((i >= 0)) {
HXLINE( 249)			_hx_tmp = (i < this->_labels->length);
            		}
            		else {
HXLINE( 249)			_hx_tmp = false;
            		}
HXDLIN( 249)		if (_hx_tmp) {
HXLINE( 251)			return this->_labels->__get(i);
            		}
HXLINE( 253)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIRadioGroup_obj,getLabel,return )

::String FlxUIRadioGroup_obj::getId(int i){
            	HX_STACKFRAME(&_hx_pos_215b0c31593ed545_257_getId)
HXLINE( 258)		bool _hx_tmp;
HXDLIN( 258)		if ((i >= 0)) {
HXLINE( 258)			_hx_tmp = (i < this->_ids->length);
            		}
            		else {
HXLINE( 258)			_hx_tmp = false;
            		}
HXDLIN( 258)		if (_hx_tmp) {
HXLINE( 260)			return this->_ids->__get(i);
            		}
HXLINE( 262)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIRadioGroup_obj,getId,return )

bool FlxUIRadioGroup_obj::getIsVisible(int i){
            	HX_STACKFRAME(&_hx_pos_215b0c31593ed545_266_getIsVisible)
HXLINE( 267)		bool _hx_tmp;
HXDLIN( 267)		if ((i >= 0)) {
HXLINE( 267)			_hx_tmp = (i < this->_list_radios->length);
            		}
            		else {
HXLINE( 267)			_hx_tmp = false;
            		}
HXDLIN( 267)		if (_hx_tmp) {
HXLINE( 269)			return this->_list_radios->__get(i).StaticCast<  ::flixel::addons::ui::FlxUICheckBox >()->visible;
            		}
HXLINE( 271)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIRadioGroup_obj,getIsVisible,return )

bool FlxUIRadioGroup_obj::get_clickable(){
            	HX_STACKFRAME(&_hx_pos_215b0c31593ed545_277_get_clickable)
HXDLIN( 277)		return this->_clickable;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxUIRadioGroup_obj,get_clickable,return )

bool FlxUIRadioGroup_obj::set_clickable(bool b){
            	HX_STACKFRAME(&_hx_pos_215b0c31593ed545_281_set_clickable)
HXLINE( 282)		this->_clickable = b;
HXLINE( 283)		{
HXLINE( 283)			int _g = 0;
HXDLIN( 283)			::Array< ::Dynamic> _g1 = this->_list_radios;
HXDLIN( 283)			while((_g < _g1->length)){
HXLINE( 283)				 ::flixel::addons::ui::FlxUICheckBox c = _g1->__get(_g).StaticCast<  ::flixel::addons::ui::FlxUICheckBox >();
HXDLIN( 283)				_g = (_g + 1);
HXLINE( 285)				c->set_active(b);
            			}
            		}
HXLINE( 287)		return this->_clickable;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIRadioGroup_obj,set_clickable,return )

int FlxUIRadioGroup_obj::get_selectedIndex(){
            	HX_STACKFRAME(&_hx_pos_215b0c31593ed545_292_get_selectedIndex)
HXDLIN( 292)		return this->_selected;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxUIRadioGroup_obj,get_selectedIndex,return )

int FlxUIRadioGroup_obj::set_selectedIndex(int i){
            	HX_STACKFRAME(&_hx_pos_215b0c31593ed545_296_set_selectedIndex)
HXLINE( 297)		this->_selected = i;
HXLINE( 298)		int j = 0;
HXLINE( 299)		{
HXLINE( 299)			int _g = 0;
HXDLIN( 299)			::Array< ::Dynamic> _g1 = this->_list_radios;
HXDLIN( 299)			while((_g < _g1->length)){
HXLINE( 299)				 ::flixel::addons::ui::FlxUICheckBox c = _g1->__get(_g).StaticCast<  ::flixel::addons::ui::FlxUICheckBox >();
HXDLIN( 299)				_g = (_g + 1);
HXLINE( 301)				c->set_checked(false);
HXLINE( 302)				if ((j == i)) {
HXLINE( 304)					c->set_checked(true);
            				}
HXLINE( 306)				j = (j + 1);
            			}
            		}
HXLINE( 308)		bool _hx_tmp;
HXDLIN( 308)		if ((this->_selected >= 0)) {
HXLINE( 308)			_hx_tmp = (this->_selected >= this->_list_radios->length);
            		}
            		else {
HXLINE( 308)			_hx_tmp = true;
            		}
HXDLIN( 308)		if (_hx_tmp) {
HXLINE( 310)			this->_selected = -1;
            		}
HXLINE( 312)		return this->_selected;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIRadioGroup_obj,set_selectedIndex,return )

::String FlxUIRadioGroup_obj::get_selectedLabel(){
            	HX_STACKFRAME(&_hx_pos_215b0c31593ed545_317_get_selectedLabel)
HXDLIN( 317)		return this->_labels->__get(this->_selected);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxUIRadioGroup_obj,get_selectedLabel,return )

::String FlxUIRadioGroup_obj::set_selectedLabel(::String str){
            	HX_STACKFRAME(&_hx_pos_215b0c31593ed545_321_set_selectedLabel)
HXLINE( 322)		int i = 0;
HXLINE( 323)		this->_selected = -1;
HXLINE( 324)		{
HXLINE( 324)			int _g = 0;
HXDLIN( 324)			::Array< ::Dynamic> _g1 = this->_list_radios;
HXDLIN( 324)			while((_g < _g1->length)){
HXLINE( 324)				 ::flixel::addons::ui::FlxUICheckBox c = _g1->__get(_g).StaticCast<  ::flixel::addons::ui::FlxUICheckBox >();
HXDLIN( 324)				_g = (_g + 1);
HXLINE( 326)				c->set_checked(false);
HXLINE( 327)				if ((this->_labels->__get(i) == str)) {
HXLINE( 329)					this->_selected = i;
HXLINE( 330)					c->set_checked(true);
            				}
HXLINE( 332)				i = (i + 1);
            			}
            		}
HXLINE( 334)		bool _hx_tmp;
HXDLIN( 334)		if ((this->_selected >= 0)) {
HXLINE( 334)			_hx_tmp = (this->_selected < this->_labels->length);
            		}
            		else {
HXLINE( 334)			_hx_tmp = false;
            		}
HXDLIN( 334)		if (_hx_tmp) {
HXLINE( 336)			return this->_labels->__get(this->_selected);
            		}
HXLINE( 338)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIRadioGroup_obj,set_selectedLabel,return )

::String FlxUIRadioGroup_obj::get_selectedId(){
            	HX_STACKFRAME(&_hx_pos_215b0c31593ed545_343_get_selectedId)
HXDLIN( 343)		return this->_ids->__get(this->_selected);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxUIRadioGroup_obj,get_selectedId,return )

::String FlxUIRadioGroup_obj::set_selectedId(::String str){
            	HX_STACKFRAME(&_hx_pos_215b0c31593ed545_347_set_selectedId)
HXLINE( 348)		int i = 0;
HXLINE( 349)		this->_selected = -1;
HXLINE( 350)		{
HXLINE( 350)			int _g = 0;
HXDLIN( 350)			::Array< ::Dynamic> _g1 = this->_list_radios;
HXDLIN( 350)			while((_g < _g1->length)){
HXLINE( 350)				 ::flixel::addons::ui::FlxUICheckBox c = _g1->__get(_g).StaticCast<  ::flixel::addons::ui::FlxUICheckBox >();
HXDLIN( 350)				_g = (_g + 1);
HXLINE( 352)				c->set_checked(false);
HXLINE( 353)				if ((this->_ids->__get(i) == str)) {
HXLINE( 355)					this->_selected = i;
HXLINE( 356)					c->set_checked(true);
            				}
HXLINE( 358)				i = (i + 1);
            			}
            		}
HXLINE( 360)		bool _hx_tmp;
HXDLIN( 360)		if ((this->_selected >= 0)) {
HXLINE( 360)			_hx_tmp = (this->_selected < this->_ids->length);
            		}
            		else {
HXLINE( 360)			_hx_tmp = false;
            		}
HXDLIN( 360)		if (_hx_tmp) {
HXLINE( 362)			return this->_ids->__get(this->_selected);
            		}
HXLINE( 364)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIRadioGroup_obj,set_selectedId,return )

 ::flixel::math::FlxPoint FlxUIRadioGroup_obj::setLineScroll(int scroll, ::Dynamic max_items){
            	HX_STACKFRAME(&_hx_pos_215b0c31593ed545_376_setLineScroll)
HXLINE( 377)		this->_list->set_scrollIndex(scroll);
HXLINE( 378)		if (::hx::IsNotNull( max_items )) {
HXLINE( 380)			if ((this->_list->stacking == 1)) {
HXLINE( 382)				this->set_height(((this->_y_space * ( (Float)(max_items) )) + 1));
            			}
            		}
HXLINE( 385)		Float X = ( (Float)(this->_list->amountPrevious) );
HXDLIN( 385)		Float Y = ( (Float)(this->_list->amountNext) );
HXDLIN( 385)		 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y);
HXDLIN( 385)		point->_inPool = false;
HXDLIN( 385)		return point;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxUIRadioGroup_obj,setLineScroll,return )

void FlxUIRadioGroup_obj::setRadioActive(int i,bool b){
            	HX_STACKFRAME(&_hx_pos_215b0c31593ed545_389_setRadioActive)
HXLINE( 390)		bool _hx_tmp;
HXDLIN( 390)		if ((i >= 0)) {
HXLINE( 390)			_hx_tmp = (i < this->_list_active->length);
            		}
            		else {
HXLINE( 390)			_hx_tmp = false;
            		}
HXDLIN( 390)		if (_hx_tmp) {
HXLINE( 392)			this->_list_active[i] = b;
            		}
HXLINE( 394)		this->updateActives();
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxUIRadioGroup_obj,setRadioActive,(void))

void FlxUIRadioGroup_obj::_refreshRadios(){
            	HX_GC_STACKFRAME(&_hx_pos_215b0c31593ed545_422__refreshRadios)
HXLINE( 423)		Float xx = this->x;
HXLINE( 424)		Float yy = this->y;
HXLINE( 425)		int i = 0;
HXLINE( 427)		Float maxX = ( (Float)(0) );
HXLINE( 428)		Float maxY = ( (Float)(0) );
HXLINE( 430)		this->_list->_skipRefresh = true;
HXLINE( 432)		{
HXLINE( 432)			int _g = 0;
HXDLIN( 432)			::Array< ::String > _g1 = this->_ids;
HXDLIN( 432)			while((_g < _g1->length)){
HXLINE( 432)				::String id = _g1->__get(_g);
HXDLIN( 432)				_g = (_g + 1);
HXLINE( 434)				::String label = HX_("",00,00,00,00);
HXLINE( 435)				bool _hx_tmp;
HXDLIN( 435)				if (::hx::IsNotNull( this->_labels )) {
HXLINE( 435)					_hx_tmp = (this->_labels->length > i);
            				}
            				else {
HXLINE( 435)					_hx_tmp = false;
            				}
HXDLIN( 435)				if (_hx_tmp) {
HXLINE( 437)					label = this->_labels->__get(i);
            				}
            				else {
HXLINE( 441)					label = ((HX_("<",3c,00,00,00) + id) + HX_(">",3e,00,00,00));
            				}
HXLINE( 443)				 ::flixel::addons::ui::FlxUICheckBox c;
HXLINE( 444)				if ((this->_list_radios->length > i)) {
HXLINE( 446)					c = this->_list_radios->__get(i).StaticCast<  ::flixel::addons::ui::FlxUICheckBox >();
HXLINE( 447)					c->set_visible(true);
HXLINE( 448)					c->set_text(label);
HXLINE( 449)					if ((i == 0)) {
HXLINE( 451)						xx = c->x;
HXLINE( 452)						yy = c->y;
            					}
            					else {
HXLINE( 456)						c->set_x(( (Float)(::Std_obj::_hx_int(xx)) ));
HXLINE( 457)						c->set_y(( (Float)(::Std_obj::_hx_int(yy)) ));
            					}
            				}
            				else {
            					HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::flixel::addons::ui::FlxUICheckBox,checkBox, ::Dynamic,_g) HXARGC(0)
            					void _hx_run(){
            						HX_GC_STACKFRAME(&_hx_pos_215b0c31593ed545_464__refreshRadios)
HXLINE( 464)						_g(checkBox);
            					}
            					HX_END_LOCAL_FUNC0((void))

HXLINE( 462)					c =  ::flixel::addons::ui::FlxUICheckBox_obj::__alloc( HX_CTX ,0,0,this->_box_asset,this->_dot_asset,label,this->_label_width,::cpp::VirtualArray_obj::__new(2)->init(0,id)->init(1,false),null());
HXLINE( 463)					c->broadcastToFlxUI = false;
HXLINE( 464)					 ::Dynamic _g = this->_onCheckBoxEvent_dyn();
HXDLIN( 464)					 ::flixel::addons::ui::FlxUICheckBox checkBox = c;
HXDLIN( 464)					c->callback =  ::Dynamic(new _hx_Closure_0(checkBox,_g));
HXLINE( 466)					this->_list->add(c).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 468)					c->set_x(( (Float)(::Std_obj::_hx_int(xx)) ));
HXLINE( 469)					c->set_y(( (Float)(::Std_obj::_hx_int(yy)) ));
HXLINE( 471)					c->set_text(label);
HXLINE( 472)					if ((this->_list_radios->length > 0)) {
HXLINE( 474)						c->button->copyStyle(( ( ::flixel::addons::ui::FlxUITypedButton)(this->_list_radios->__get(0).StaticCast<  ::flixel::addons::ui::FlxUICheckBox >()->button) ));
HXLINE( 475)						if (::hx::IsNull( this->activeStyle )) {
HXLINE( 477)							this->set_activeStyle(this->makeActiveStyle());
            						}
HXLINE( 479)						 ::flixel::addons::ui::FlxUIButton c1 = c->button;
HXDLIN( 479)						c1->set_width(this->_list_radios->__get(0).StaticCast<  ::flixel::addons::ui::FlxUICheckBox >()->button->get_width());
HXLINE( 480)						 ::flixel::addons::ui::FlxUIButton c2 = c->button;
HXDLIN( 480)						c2->set_height(this->_list_radios->__get(0).StaticCast<  ::flixel::addons::ui::FlxUICheckBox >()->button->get_height());
HXLINE( 481)						c->set_textX(this->_list_radios->__get(0).StaticCast<  ::flixel::addons::ui::FlxUICheckBox >()->textX);
HXLINE( 482)						c->set_textY(this->_list_radios->__get(0).StaticCast<  ::flixel::addons::ui::FlxUICheckBox >()->textY);
            					}
HXLINE( 485)					this->_list_radios->push(c);
HXLINE( 486)					this->_list_active->push(true);
            				}
HXLINE( 489)				if (((xx + c->get_width()) > maxX)) {
HXLINE( 491)					maxX = (xx + c->get_width());
            				}
HXLINE( 493)				if (((yy + c->get_height()) > maxY)) {
HXLINE( 495)					maxY = (yy + c->get_height());
            				}
HXLINE( 498)				yy = (yy + this->_y_space);
HXLINE( 499)				i = (i + 1);
            			}
            		}
HXLINE( 501)		if ((this->fixedSize == false)) {
HXLINE( 503)			maxX = (maxX + 5);
HXLINE( 504)			maxY = (maxY + 5);
HXLINE( 505)			if ((maxX > this->_list->get_width())) {
HXLINE( 507)				this->_list->set_width(maxX);
            			}
HXLINE( 509)			if ((maxY > this->_list->get_height())) {
HXLINE( 511)				this->_list->set_height(maxY);
            			}
HXLINE( 513)			this->set_width(maxX);
HXLINE( 514)			this->set_height(maxY);
            		}
HXLINE( 516)		this->_list->_skipRefresh = false;
HXLINE( 518)		if ((this->fixedSize == true)) {
HXLINE( 520)			this->_list->refreshList();
            		}
HXLINE( 523)		this->updateActives();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxUIRadioGroup_obj,_refreshRadios,(void))

void FlxUIRadioGroup_obj::updateActives(){
            	HX_STACKFRAME(&_hx_pos_215b0c31593ed545_527_updateActives)
HXLINE( 528)		int i = 0;
HXLINE( 529)		{
HXLINE( 529)			int _g = 0;
HXDLIN( 529)			::Array< ::Dynamic> _g1 = this->_list_radios;
HXDLIN( 529)			while((_g < _g1->length)){
HXLINE( 529)				 ::flixel::addons::ui::FlxUICheckBox r = _g1->__get(_g).StaticCast<  ::flixel::addons::ui::FlxUICheckBox >();
HXDLIN( 529)				_g = (_g + 1);
HXLINE( 531)				r->set_active(this->_list_active->__get(i));
HXLINE( 533)				bool _hx_tmp;
HXDLIN( 533)				if ((this->_list_active->__get(i) == false)) {
HXLINE( 533)					_hx_tmp = ::hx::IsNotNull( this->inactiveStyle );
            				}
            				else {
HXLINE( 533)					_hx_tmp = false;
            				}
HXDLIN( 533)				if (_hx_tmp) {
HXLINE( 535)					this->inactiveStyle->applyToCheck(r);
            				}
            				else {
HXLINE( 537)					bool _hx_tmp;
HXDLIN( 537)					if ((this->_list_active->__get(i) == true)) {
HXLINE( 537)						_hx_tmp = ::hx::IsNotNull( this->activeStyle );
            					}
            					else {
HXLINE( 537)						_hx_tmp = false;
            					}
HXDLIN( 537)					if (_hx_tmp) {
HXLINE( 539)						this->activeStyle->applyToCheck(r);
            					}
            				}
HXLINE( 541)				i = (i + 1);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxUIRadioGroup_obj,updateActives,(void))

 ::flixel::addons::ui::CheckStyle FlxUIRadioGroup_obj::makeActiveStyle(){
            	HX_GC_STACKFRAME(&_hx_pos_215b0c31593ed545_546_makeActiveStyle)
HXLINE( 547)		if ((this->_list_radios->length > 0)) {
HXLINE( 549)			 ::flixel::addons::ui::FlxUIButton btn = this->_list_radios->__get(0).StaticCast<  ::flixel::addons::ui::FlxUICheckBox >()->button;
HXLINE( 550)			 ::flixel::text::FlxText t = ( ( ::flixel::text::FlxText)(btn->label) );
HXLINE( 551)			 ::flixel::addons::ui::FontDef fd = ::flixel::addons::ui::FontDef_obj::copyFromFlxText(t);
HXLINE( 552)			 ::flixel::addons::ui::BorderDef bd =  ::flixel::addons::ui::BorderDef_obj::__alloc( HX_CTX ,t->borderStyle,t->borderColor,t->borderSize,t->borderQuality);
HXLINE( 553)			::String cs = ::flixel::text::_FlxText::FlxTextAlign_Impl__obj::fromOpenFL(t->_defaultFormat->align);
HXDLIN( 553)			 ::flixel::addons::ui::CheckStyle cs1 =  ::flixel::addons::ui::CheckStyle_obj::__alloc( HX_CTX ,16777215,fd,cs,t->color,bd);
HXLINE( 554)			return cs1;
            		}
HXLINE( 556)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxUIRadioGroup_obj,makeActiveStyle,return )

void FlxUIRadioGroup_obj::_onCheckBoxEvent( ::flixel::addons::ui::FlxUICheckBox checkBox){
            	HX_STACKFRAME(&_hx_pos_215b0c31593ed545_561__onCheckBoxEvent)
HXDLIN( 561)		this->_onClick(checkBox,true);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIRadioGroup_obj,_onCheckBoxEvent,(void))

bool FlxUIRadioGroup_obj::_onClick( ::flixel::addons::ui::FlxUICheckBox checkBox,bool doCallback){
            	HX_STACKFRAME(&_hx_pos_215b0c31593ed545_565__onClick)
HXLINE( 566)		if (!(this->_clickable)) {
HXLINE( 568)			return false;
            		}
HXLINE( 571)		int i = 0;
HXLINE( 572)		{
HXLINE( 572)			int _g = 0;
HXDLIN( 572)			::Array< ::Dynamic> _g1 = this->_list_radios;
HXDLIN( 572)			while((_g < _g1->length)){
HXLINE( 572)				 ::flixel::addons::ui::FlxUICheckBox c = _g1->__get(_g).StaticCast<  ::flixel::addons::ui::FlxUICheckBox >();
HXDLIN( 572)				_g = (_g + 1);
HXLINE( 574)				c->set_checked(false);
HXLINE( 575)				if (::hx::IsInstanceEq( checkBox,c )) {
HXLINE( 577)					this->_selected = i;
HXLINE( 578)					c->set_checked(true);
            				}
HXLINE( 580)				i = (i + 1);
            			}
            		}
HXLINE( 583)		if (doCallback) {
HXLINE( 585)			if (::hx::IsNotNull( this->callback )) {
HXLINE( 587)				 ::Dynamic _hx_tmp = this->callback;
HXDLIN( 587)				_hx_tmp(this->get_selectedId());
            			}
HXLINE( 590)			if (this->broadcastToFlxUI) {
HXLINE( 592)				::flixel::addons::ui::FlxUI_obj::event(HX_("click_radio_group",04,f0,40,57),::hx::ObjectPtr<OBJ_>(this),this->_ids->__get(this->_selected),this->params);
            			}
            		}
HXLINE( 595)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxUIRadioGroup_obj,_onClick,return )

::String FlxUIRadioGroup_obj::CLICK_EVENT;


::hx::ObjectPtr< FlxUIRadioGroup_obj > FlxUIRadioGroup_obj::__new(Float X,Float Y,::Array< ::String > ids_,::Array< ::String > labels_, ::Dynamic callback_,::hx::Null< Float >  __o_y_space_,::hx::Null< int >  __o_width_,::hx::Null< int >  __o_height_,::hx::Null< int >  __o_label_width_,::String __o_MoreString, ::flixel::math::FlxPoint PrevButtonOffset, ::flixel::math::FlxPoint NextButtonOffset,::Dynamic PrevButton,::Dynamic NextButton) {
	::hx::ObjectPtr< FlxUIRadioGroup_obj > __this = new FlxUIRadioGroup_obj();
	__this->__construct(X,Y,ids_,labels_,callback_,__o_y_space_,__o_width_,__o_height_,__o_label_width_,__o_MoreString,PrevButtonOffset,NextButtonOffset,PrevButton,NextButton);
	return __this;
}

::hx::ObjectPtr< FlxUIRadioGroup_obj > FlxUIRadioGroup_obj::__alloc(::hx::Ctx *_hx_ctx,Float X,Float Y,::Array< ::String > ids_,::Array< ::String > labels_, ::Dynamic callback_,::hx::Null< Float >  __o_y_space_,::hx::Null< int >  __o_width_,::hx::Null< int >  __o_height_,::hx::Null< int >  __o_label_width_,::String __o_MoreString, ::flixel::math::FlxPoint PrevButtonOffset, ::flixel::math::FlxPoint NextButtonOffset,::Dynamic PrevButton,::Dynamic NextButton) {
	FlxUIRadioGroup_obj *__this = (FlxUIRadioGroup_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxUIRadioGroup_obj), true, "flixel.addons.ui.FlxUIRadioGroup"));
	*(void **)__this = FlxUIRadioGroup_obj::_hx_vtable;
	__this->__construct(X,Y,ids_,labels_,callback_,__o_y_space_,__o_width_,__o_height_,__o_label_width_,__o_MoreString,PrevButtonOffset,NextButtonOffset,PrevButton,NextButton);
	return __this;
}

FlxUIRadioGroup_obj::FlxUIRadioGroup_obj()
{
}

void FlxUIRadioGroup_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxUIRadioGroup);
	HX_MARK_MEMBER_NAME(activeStyle,"activeStyle");
	HX_MARK_MEMBER_NAME(inactiveStyle,"inactiveStyle");
	HX_MARK_MEMBER_NAME(skipButtonUpdate,"skipButtonUpdate");
	HX_MARK_MEMBER_NAME(callback,"callback");
	HX_MARK_MEMBER_NAME(params,"params");
	HX_MARK_MEMBER_NAME(fixedSize,"fixedSize");
	HX_MARK_MEMBER_NAME(_list_active,"_list_active");
	HX_MARK_MEMBER_NAME(_list,"_list");
	HX_MARK_MEMBER_NAME(_box_asset,"_box_asset");
	HX_MARK_MEMBER_NAME(_dot_asset,"_dot_asset");
	HX_MARK_MEMBER_NAME(_labels,"_labels");
	HX_MARK_MEMBER_NAME(_ids,"_ids");
	HX_MARK_MEMBER_NAME(_label_width,"_label_width");
	HX_MARK_MEMBER_NAME(_width,"_width");
	HX_MARK_MEMBER_NAME(_height,"_height");
	HX_MARK_MEMBER_NAME(_y_space,"_y_space");
	HX_MARK_MEMBER_NAME(_selected,"_selected");
	HX_MARK_MEMBER_NAME(_clickable,"_clickable");
	HX_MARK_MEMBER_NAME(_list_radios,"_list_radios");
	 ::flixel::addons::ui::FlxUIGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxUIRadioGroup_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(activeStyle,"activeStyle");
	HX_VISIT_MEMBER_NAME(inactiveStyle,"inactiveStyle");
	HX_VISIT_MEMBER_NAME(skipButtonUpdate,"skipButtonUpdate");
	HX_VISIT_MEMBER_NAME(callback,"callback");
	HX_VISIT_MEMBER_NAME(params,"params");
	HX_VISIT_MEMBER_NAME(fixedSize,"fixedSize");
	HX_VISIT_MEMBER_NAME(_list_active,"_list_active");
	HX_VISIT_MEMBER_NAME(_list,"_list");
	HX_VISIT_MEMBER_NAME(_box_asset,"_box_asset");
	HX_VISIT_MEMBER_NAME(_dot_asset,"_dot_asset");
	HX_VISIT_MEMBER_NAME(_labels,"_labels");
	HX_VISIT_MEMBER_NAME(_ids,"_ids");
	HX_VISIT_MEMBER_NAME(_label_width,"_label_width");
	HX_VISIT_MEMBER_NAME(_width,"_width");
	HX_VISIT_MEMBER_NAME(_height,"_height");
	HX_VISIT_MEMBER_NAME(_y_space,"_y_space");
	HX_VISIT_MEMBER_NAME(_selected,"_selected");
	HX_VISIT_MEMBER_NAME(_clickable,"_clickable");
	HX_VISIT_MEMBER_NAME(_list_radios,"_list_radios");
	 ::flixel::addons::ui::FlxUIGroup_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxUIRadioGroup_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"show") ) { return ::hx::Val( show_dyn() ); }
		if (HX_FIELD_EQ(inName,"_ids") ) { return ::hx::Val( _ids ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"getId") ) { return ::hx::Val( getId_dyn() ); }
		if (HX_FIELD_EQ(inName,"_list") ) { return ::hx::Val( _list ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"params") ) { return ::hx::Val( params ); }
		if (HX_FIELD_EQ(inName,"_width") ) { return ::hx::Val( _width ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		if (HX_FIELD_EQ(inName,"_labels") ) { return ::hx::Val( _labels ); }
		if (HX_FIELD_EQ(inName,"_height") ) { return ::hx::Val( _height ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"callback") ) { return ::hx::Val( callback ); }
		if (HX_FIELD_EQ(inName,"updateId") ) { return ::hx::Val( updateId_dyn() ); }
		if (HX_FIELD_EQ(inName,"getLabel") ) { return ::hx::Val( getLabel_dyn() ); }
		if (HX_FIELD_EQ(inName,"_y_space") ) { return ::hx::Val( _y_space ); }
		if (HX_FIELD_EQ(inName,"_onClick") ) { return ::hx::Val( _onClick_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"clickable") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_clickable() ); }
		if (HX_FIELD_EQ(inName,"numRadios") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_numRadios() ); }
		if (HX_FIELD_EQ(inName,"fixedSize") ) { return ::hx::Val( fixedSize ); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return ::hx::Val( set_width_dyn() ); }
		if (HX_FIELD_EQ(inName,"getRadios") ) { return ::hx::Val( getRadios_dyn() ); }
		if (HX_FIELD_EQ(inName,"_selected") ) { return ::hx::Val( _selected ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"selectedId") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_selectedId() ); }
		if (HX_FIELD_EQ(inName,"set_params") ) { return ::hx::Val( set_params_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return ::hx::Val( set_height_dyn() ); }
		if (HX_FIELD_EQ(inName,"_box_asset") ) { return ::hx::Val( _box_asset ); }
		if (HX_FIELD_EQ(inName,"_dot_asset") ) { return ::hx::Val( _dot_asset ); }
		if (HX_FIELD_EQ(inName,"_clickable") ) { return ::hx::Val( _clickable ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"activeStyle") ) { return ::hx::Val( activeStyle ); }
		if (HX_FIELD_EQ(inName,"updateLabel") ) { return ::hx::Val( updateLabel_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"loadGraphics") ) { return ::hx::Val( loadGraphics_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateRadios") ) { return ::hx::Val( updateRadios_dyn() ); }
		if (HX_FIELD_EQ(inName,"getIsVisible") ) { return ::hx::Val( getIsVisible_dyn() ); }
		if (HX_FIELD_EQ(inName,"_list_active") ) { return ::hx::Val( _list_active ); }
		if (HX_FIELD_EQ(inName,"_label_width") ) { return ::hx::Val( _label_width ); }
		if (HX_FIELD_EQ(inName,"_list_radios") ) { return ::hx::Val( _list_radios ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"selectedLabel") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_selectedLabel() ); }
		if (HX_FIELD_EQ(inName,"selectedIndex") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_selectedIndex() ); }
		if (HX_FIELD_EQ(inName,"inactiveStyle") ) { return ::hx::Val( inactiveStyle ); }
		if (HX_FIELD_EQ(inName,"get_numRadios") ) { return ::hx::Val( get_numRadios_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_clickable") ) { return ::hx::Val( get_clickable_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_clickable") ) { return ::hx::Val( set_clickable_dyn() ); }
		if (HX_FIELD_EQ(inName,"setLineScroll") ) { return ::hx::Val( setLineScroll_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateActives") ) { return ::hx::Val( updateActives_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_selectedId") ) { return ::hx::Val( get_selectedId_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_selectedId") ) { return ::hx::Val( set_selectedId_dyn() ); }
		if (HX_FIELD_EQ(inName,"setRadioActive") ) { return ::hx::Val( setRadioActive_dyn() ); }
		if (HX_FIELD_EQ(inName,"_refreshRadios") ) { return ::hx::Val( _refreshRadios_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"set_activeStyle") ) { return ::hx::Val( set_activeStyle_dyn() ); }
		if (HX_FIELD_EQ(inName,"makeActiveStyle") ) { return ::hx::Val( makeActiveStyle_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"skipButtonUpdate") ) { return ::hx::Val( skipButtonUpdate ); }
		if (HX_FIELD_EQ(inName,"_onCheckBoxEvent") ) { return ::hx::Val( _onCheckBoxEvent_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"set_inactiveStyle") ) { return ::hx::Val( set_inactiveStyle_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_selectedIndex") ) { return ::hx::Val( get_selectedIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_selectedIndex") ) { return ::hx::Val( set_selectedIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_selectedLabel") ) { return ::hx::Val( get_selectedLabel_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_selectedLabel") ) { return ::hx::Val( set_selectedLabel_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"set_skipButtonUpdate") ) { return ::hx::Val( set_skipButtonUpdate_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxUIRadioGroup_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_ids") ) { _ids=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_list") ) { _list=inValue.Cast<  ::flixel::addons::ui::FlxUIList >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"params") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_params(inValue.Cast< ::cpp::VirtualArray >()) );params=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_width") ) { _width=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_labels") ) { _labels=inValue.Cast< ::Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_height") ) { _height=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"callback") ) { callback=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_y_space") ) { _y_space=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"clickable") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_clickable(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"fixedSize") ) { fixedSize=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_selected") ) { _selected=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"selectedId") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_selectedId(inValue.Cast< ::String >()) ); }
		if (HX_FIELD_EQ(inName,"_box_asset") ) { _box_asset=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_dot_asset") ) { _dot_asset=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_clickable") ) { _clickable=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"activeStyle") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_activeStyle(inValue.Cast<  ::flixel::addons::ui::CheckStyle >()) );activeStyle=inValue.Cast<  ::flixel::addons::ui::CheckStyle >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_list_active") ) { _list_active=inValue.Cast< ::Array< bool > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_label_width") ) { _label_width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_list_radios") ) { _list_radios=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"selectedLabel") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_selectedLabel(inValue.Cast< ::String >()) ); }
		if (HX_FIELD_EQ(inName,"selectedIndex") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_selectedIndex(inValue.Cast< int >()) ); }
		if (HX_FIELD_EQ(inName,"inactiveStyle") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_inactiveStyle(inValue.Cast<  ::flixel::addons::ui::CheckStyle >()) );inactiveStyle=inValue.Cast<  ::flixel::addons::ui::CheckStyle >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"skipButtonUpdate") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_skipButtonUpdate(inValue.Cast< bool >()) );skipButtonUpdate=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxUIRadioGroup_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("clickable",e2,ad,8e,34));
	outFields->push(HX_("selectedId",16,f7,d0,c6));
	outFields->push(HX_("selectedLabel",99,e9,f0,65));
	outFields->push(HX_("selectedIndex",b7,76,56,b4));
	outFields->push(HX_("activeStyle",8b,a5,62,e0));
	outFields->push(HX_("inactiveStyle",c6,39,97,bc));
	outFields->push(HX_("numRadios",fe,15,f8,61));
	outFields->push(HX_("skipButtonUpdate",ba,02,f2,13));
	outFields->push(HX_("params",46,fb,7a,ed));
	outFields->push(HX_("fixedSize",55,90,3a,2d));
	outFields->push(HX_("_list_active",c8,4c,75,d4));
	outFields->push(HX_("_list",3d,38,c4,fa));
	outFields->push(HX_("_box_asset",3d,85,1c,89));
	outFields->push(HX_("_dot_asset",3b,7c,a9,88));
	outFields->push(HX_("_labels",9e,39,f4,b7));
	outFields->push(HX_("_ids",39,49,1b,3f));
	outFields->push(HX_("_label_width",3c,a8,bf,42));
	outFields->push(HX_("_width",47,fd,49,c6));
	outFields->push(HX_("_height",86,19,c3,70));
	outFields->push(HX_("_y_space",c1,4e,ab,5e));
	outFields->push(HX_("_selected",ba,21,03,f9));
	outFields->push(HX_("_clickable",a3,29,31,90));
	outFields->push(HX_("_list_radios",1a,d6,25,6f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxUIRadioGroup_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::addons::ui::CheckStyle */ ,(int)offsetof(FlxUIRadioGroup_obj,activeStyle),HX_("activeStyle",8b,a5,62,e0)},
	{::hx::fsObject /*  ::flixel::addons::ui::CheckStyle */ ,(int)offsetof(FlxUIRadioGroup_obj,inactiveStyle),HX_("inactiveStyle",c6,39,97,bc)},
	{::hx::fsBool,(int)offsetof(FlxUIRadioGroup_obj,skipButtonUpdate),HX_("skipButtonUpdate",ba,02,f2,13)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxUIRadioGroup_obj,callback),HX_("callback",c5,99,06,7f)},
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(int)offsetof(FlxUIRadioGroup_obj,params),HX_("params",46,fb,7a,ed)},
	{::hx::fsBool,(int)offsetof(FlxUIRadioGroup_obj,fixedSize),HX_("fixedSize",55,90,3a,2d)},
	{::hx::fsObject /* ::Array< bool > */ ,(int)offsetof(FlxUIRadioGroup_obj,_list_active),HX_("_list_active",c8,4c,75,d4)},
	{::hx::fsObject /*  ::flixel::addons::ui::FlxUIList */ ,(int)offsetof(FlxUIRadioGroup_obj,_list),HX_("_list",3d,38,c4,fa)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxUIRadioGroup_obj,_box_asset),HX_("_box_asset",3d,85,1c,89)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxUIRadioGroup_obj,_dot_asset),HX_("_dot_asset",3b,7c,a9,88)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(FlxUIRadioGroup_obj,_labels),HX_("_labels",9e,39,f4,b7)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(FlxUIRadioGroup_obj,_ids),HX_("_ids",39,49,1b,3f)},
	{::hx::fsInt,(int)offsetof(FlxUIRadioGroup_obj,_label_width),HX_("_label_width",3c,a8,bf,42)},
	{::hx::fsInt,(int)offsetof(FlxUIRadioGroup_obj,_width),HX_("_width",47,fd,49,c6)},
	{::hx::fsInt,(int)offsetof(FlxUIRadioGroup_obj,_height),HX_("_height",86,19,c3,70)},
	{::hx::fsFloat,(int)offsetof(FlxUIRadioGroup_obj,_y_space),HX_("_y_space",c1,4e,ab,5e)},
	{::hx::fsInt,(int)offsetof(FlxUIRadioGroup_obj,_selected),HX_("_selected",ba,21,03,f9)},
	{::hx::fsBool,(int)offsetof(FlxUIRadioGroup_obj,_clickable),HX_("_clickable",a3,29,31,90)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(FlxUIRadioGroup_obj,_list_radios),HX_("_list_radios",1a,d6,25,6f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo FlxUIRadioGroup_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &FlxUIRadioGroup_obj::CLICK_EVENT,HX_("CLICK_EVENT",63,89,c0,0d)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String FlxUIRadioGroup_obj_sMemberFields[] = {
	HX_("activeStyle",8b,a5,62,e0),
	HX_("set_activeStyle",2e,da,0f,9d),
	HX_("inactiveStyle",c6,39,97,bc),
	HX_("set_inactiveStyle",29,1d,75,e6),
	HX_("get_numRadios",d5,e9,5b,23),
	HX_("skipButtonUpdate",ba,02,f2,13),
	HX_("set_skipButtonUpdate",37,1f,14,ff),
	HX_("callback",c5,99,06,7f),
	HX_("params",46,fb,7a,ed),
	HX_("set_params",83,09,80,e1),
	HX_("fixedSize",55,90,3a,2d),
	HX_("set_width",69,fe,5c,f1),
	HX_("set_height",24,16,51,f6),
	HX_("loadGraphics",11,e5,d0,cb),
	HX_("destroy",fa,2c,86,24),
	HX_("updateLabel",2b,77,47,55),
	HX_("updateId",44,1a,fa,77),
	HX_("show",fd,d4,52,4c),
	HX_("updateRadios",01,72,ba,b0),
	HX_("getRadios",4e,54,4d,2d),
	HX_("getLabel",7e,1d,86,cf),
	HX_("getId",11,92,60,91),
	HX_("getIsVisible",32,92,79,b6),
	HX_("get_clickable",b9,81,f2,f5),
	HX_("set_clickable",c5,63,f8,3a),
	HX_("get_selectedIndex",0e,82,c6,ba),
	HX_("set_selectedIndex",1a,5a,34,de),
	HX_("get_selectedLabel",f0,f4,60,6c),
	HX_("set_selectedLabel",fc,cc,ce,8f),
	HX_("get_selectedId",5f,7f,c6,3c),
	HX_("set_selectedId",d3,67,e6,5c),
	HX_("setLineScroll",63,11,85,bd),
	HX_("setRadioActive",9f,70,a8,15),
	HX_("_list_active",c8,4c,75,d4),
	HX_("_list",3d,38,c4,fa),
	HX_("_box_asset",3d,85,1c,89),
	HX_("_dot_asset",3b,7c,a9,88),
	HX_("_labels",9e,39,f4,b7),
	HX_("_ids",39,49,1b,3f),
	HX_("_label_width",3c,a8,bf,42),
	HX_("_width",47,fd,49,c6),
	HX_("_height",86,19,c3,70),
	HX_("_y_space",c1,4e,ab,5e),
	HX_("_selected",ba,21,03,f9),
	HX_("_clickable",a3,29,31,90),
	HX_("_list_radios",1a,d6,25,6f),
	HX_("_refreshRadios",94,5f,83,ed),
	HX_("updateActives",e4,b0,a1,32),
	HX_("makeActiveStyle",3d,8e,5f,0f),
	HX_("_onCheckBoxEvent",d9,b8,a1,4b),
	HX_("_onClick",2a,74,54,18),
	::String(null()) };

static void FlxUIRadioGroup_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxUIRadioGroup_obj::CLICK_EVENT,"CLICK_EVENT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxUIRadioGroup_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxUIRadioGroup_obj::CLICK_EVENT,"CLICK_EVENT");
};

#endif

::hx::Class FlxUIRadioGroup_obj::__mClass;

static ::String FlxUIRadioGroup_obj_sStaticFields[] = {
	HX_("CLICK_EVENT",63,89,c0,0d),
	::String(null())
};

void FlxUIRadioGroup_obj::__register()
{
	FlxUIRadioGroup_obj _hx_dummy;
	FlxUIRadioGroup_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.ui.FlxUIRadioGroup",f9,4c,99,7f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxUIRadioGroup_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxUIRadioGroup_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxUIRadioGroup_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxUIRadioGroup_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxUIRadioGroup_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxUIRadioGroup_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxUIRadioGroup_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxUIRadioGroup_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_215b0c31593ed545_47_boot)
HXDLIN(  47)		CLICK_EVENT = HX_("click_radio_group",04,f0,40,57);
            	}
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui
