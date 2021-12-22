#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxAction
#include <flixel/input/actions/FlxAction.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionInput
#include <flixel/input/actions/FlxActionInput.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionInputDigital
#include <flixel/input/actions/FlxActionInputDigital.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionInputDigitalMouse
#include <flixel/input/actions/FlxActionInputDigitalMouse.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxInputDevice
#include <flixel/input/actions/FlxInputDevice.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouseButton
#include <flixel/input/mouse/FlxMouseButton.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_8b4852ea118491e2_220_new,"flixel.input.actions.FlxActionInputDigitalMouse","new",0xf9b35088,"flixel.input.actions.FlxActionInputDigitalMouse.new","flixel/input/actions/FlxActionInputDigital.hx",220,0x47a4ecd2)
HX_LOCAL_STACK_FRAME(_hx_pos_8b4852ea118491e2_225_check,"flixel.input.actions.FlxActionInputDigitalMouse","check",0xf61472f0,"flixel.input.actions.FlxActionInputDigitalMouse.check","flixel/input/actions/FlxActionInputDigital.hx",225,0x47a4ecd2)
namespace flixel{
namespace input{
namespace actions{

void FlxActionInputDigitalMouse_obj::__construct(int ButtonID,int Trigger){
            	HX_STACKFRAME(&_hx_pos_8b4852ea118491e2_220_new)
HXDLIN( 220)		super::__construct(::flixel::input::actions::FlxInputDevice_obj::MOUSE_dyn(),ButtonID,Trigger,null());
            	}

Dynamic FlxActionInputDigitalMouse_obj::__CreateEmpty() { return new FlxActionInputDigitalMouse_obj; }

void *FlxActionInputDigitalMouse_obj::_hx_vtable = 0;

Dynamic FlxActionInputDigitalMouse_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxActionInputDigitalMouse_obj > _hx_result = new FlxActionInputDigitalMouse_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool FlxActionInputDigitalMouse_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x20308a99) {
		if (inClassId<=(int)0x1600da07) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x1600da07;
		} else {
			return inClassId==(int)0x20308a99;
		}
	} else {
		return inClassId==(int)0x62baf29e;
	}
}

bool FlxActionInputDigitalMouse_obj::check( ::flixel::input::actions::FlxAction Action){
            	HX_STACKFRAME(&_hx_pos_8b4852ea118491e2_225_check)
HXDLIN( 225)		switch((int)(this->inputID)){
            			case (int)-3: {
HXLINE( 242)				switch((int)(this->trigger)){
            					case (int)-1: {
HXLINE( 247)						return (::flixel::FlxG_obj::mouse->_rightButton->current == -1);
            					}
            					break;
            					case (int)0: {
HXLINE( 245)						 ::flixel::input::mouse::FlxMouseButton _this = ::flixel::FlxG_obj::mouse->_rightButton;
HXDLIN( 245)						bool _hx_tmp;
HXDLIN( 245)						if ((_this->current != 1)) {
HXLINE( 245)							_hx_tmp = (_this->current == 2);
            						}
            						else {
HXLINE( 245)							_hx_tmp = true;
            						}
HXDLIN( 245)						if (_hx_tmp) {
HXLINE( 245)							return (::flixel::FlxG_obj::mouse->_rightButton->current == -1);
            						}
            						else {
HXLINE( 245)							return true;
            						}
            					}
            					break;
            					case (int)1: {
HXLINE( 244)						 ::flixel::input::mouse::FlxMouseButton _this = ::flixel::FlxG_obj::mouse->_rightButton;
HXDLIN( 244)						bool _hx_tmp;
HXDLIN( 244)						if ((_this->current != 1)) {
HXLINE( 244)							_hx_tmp = (_this->current == 2);
            						}
            						else {
HXLINE( 244)							_hx_tmp = true;
            						}
HXDLIN( 244)						if (!(_hx_tmp)) {
HXLINE( 244)							return (::flixel::FlxG_obj::mouse->_rightButton->current == 2);
            						}
            						else {
HXLINE( 244)							return true;
            						}
            					}
            					break;
            					case (int)2: {
HXLINE( 246)						return (::flixel::FlxG_obj::mouse->_rightButton->current == 2);
            					}
            					break;
            				}
            			}
            			break;
            			case (int)-2: {
HXLINE( 235)				switch((int)(this->trigger)){
            					case (int)-1: {
HXLINE( 240)						return (::flixel::FlxG_obj::mouse->_middleButton->current == -1);
            					}
            					break;
            					case (int)0: {
HXLINE( 238)						 ::flixel::input::mouse::FlxMouseButton _this = ::flixel::FlxG_obj::mouse->_middleButton;
HXDLIN( 238)						bool _hx_tmp;
HXDLIN( 238)						if ((_this->current != 1)) {
HXLINE( 238)							_hx_tmp = (_this->current == 2);
            						}
            						else {
HXLINE( 238)							_hx_tmp = true;
            						}
HXDLIN( 238)						if (_hx_tmp) {
HXLINE( 238)							return (::flixel::FlxG_obj::mouse->_middleButton->current == -1);
            						}
            						else {
HXLINE( 238)							return true;
            						}
            					}
            					break;
            					case (int)1: {
HXLINE( 237)						 ::flixel::input::mouse::FlxMouseButton _this = ::flixel::FlxG_obj::mouse->_middleButton;
HXDLIN( 237)						bool _hx_tmp;
HXDLIN( 237)						if ((_this->current != 1)) {
HXLINE( 237)							_hx_tmp = (_this->current == 2);
            						}
            						else {
HXLINE( 237)							_hx_tmp = true;
            						}
HXDLIN( 237)						if (!(_hx_tmp)) {
HXLINE( 237)							return (::flixel::FlxG_obj::mouse->_middleButton->current == 2);
            						}
            						else {
HXLINE( 237)							return true;
            						}
            					}
            					break;
            					case (int)2: {
HXLINE( 239)						return (::flixel::FlxG_obj::mouse->_middleButton->current == 2);
            					}
            					break;
            				}
            			}
            			break;
            			case (int)-1: {
HXLINE( 228)				switch((int)(this->trigger)){
            					case (int)-1: {
HXLINE( 233)						return (::flixel::FlxG_obj::mouse->_leftButton->current == -1);
            					}
            					break;
            					case (int)0: {
HXLINE( 231)						 ::flixel::input::mouse::FlxMouseButton _this = ::flixel::FlxG_obj::mouse->_leftButton;
HXDLIN( 231)						bool _hx_tmp;
HXDLIN( 231)						if ((_this->current != 1)) {
HXLINE( 231)							_hx_tmp = (_this->current == 2);
            						}
            						else {
HXLINE( 231)							_hx_tmp = true;
            						}
HXDLIN( 231)						if (_hx_tmp) {
HXLINE( 231)							return (::flixel::FlxG_obj::mouse->_leftButton->current == -1);
            						}
            						else {
HXLINE( 231)							return true;
            						}
            					}
            					break;
            					case (int)1: {
HXLINE( 230)						 ::flixel::input::mouse::FlxMouseButton _this = ::flixel::FlxG_obj::mouse->_leftButton;
HXDLIN( 230)						bool _hx_tmp;
HXDLIN( 230)						if ((_this->current != 1)) {
HXLINE( 230)							_hx_tmp = (_this->current == 2);
            						}
            						else {
HXLINE( 230)							_hx_tmp = true;
            						}
HXDLIN( 230)						if (!(_hx_tmp)) {
HXLINE( 230)							return (::flixel::FlxG_obj::mouse->_leftButton->current == 2);
            						}
            						else {
HXLINE( 230)							return true;
            						}
            					}
            					break;
            					case (int)2: {
HXLINE( 232)						return (::flixel::FlxG_obj::mouse->_leftButton->current == 2);
            					}
            					break;
            				}
            			}
            			break;
            			default:{
HXLINE( 250)				return false;
            			}
            		}
HXLINE( 225)		return false;
            	}



::hx::ObjectPtr< FlxActionInputDigitalMouse_obj > FlxActionInputDigitalMouse_obj::__new(int ButtonID,int Trigger) {
	::hx::ObjectPtr< FlxActionInputDigitalMouse_obj > __this = new FlxActionInputDigitalMouse_obj();
	__this->__construct(ButtonID,Trigger);
	return __this;
}

::hx::ObjectPtr< FlxActionInputDigitalMouse_obj > FlxActionInputDigitalMouse_obj::__alloc(::hx::Ctx *_hx_ctx,int ButtonID,int Trigger) {
	FlxActionInputDigitalMouse_obj *__this = (FlxActionInputDigitalMouse_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxActionInputDigitalMouse_obj), true, "flixel.input.actions.FlxActionInputDigitalMouse"));
	*(void **)__this = FlxActionInputDigitalMouse_obj::_hx_vtable;
	__this->__construct(ButtonID,Trigger);
	return __this;
}

FlxActionInputDigitalMouse_obj::FlxActionInputDigitalMouse_obj()
{
}

::hx::Val FlxActionInputDigitalMouse_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"check") ) { return ::hx::Val( check_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FlxActionInputDigitalMouse_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *FlxActionInputDigitalMouse_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxActionInputDigitalMouse_obj_sMemberFields[] = {
	HX_("check",c8,98,b6,45),
	::String(null()) };

::hx::Class FlxActionInputDigitalMouse_obj::__mClass;

void FlxActionInputDigitalMouse_obj::__register()
{
	FlxActionInputDigitalMouse_obj _hx_dummy;
	FlxActionInputDigitalMouse_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.input.actions.FlxActionInputDigitalMouse",96,ac,16,ce);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxActionInputDigitalMouse_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxActionInputDigitalMouse_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxActionInputDigitalMouse_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxActionInputDigitalMouse_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace input
} // end namespace actions
