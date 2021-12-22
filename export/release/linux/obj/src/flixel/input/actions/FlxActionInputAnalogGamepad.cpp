#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionInput
#include <flixel/input/actions/FlxActionInput.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionInputAnalog
#include <flixel/input/actions/FlxActionInputAnalog.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionInputAnalogGamepad
#include <flixel/input/actions/FlxActionInputAnalogGamepad.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxInputDevice
#include <flixel/input/actions/FlxInputDevice.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepad
#include <flixel/input/gamepad/FlxGamepad.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadAnalogStick
#include <flixel/input/gamepad/FlxGamepadAnalogStick.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadButton
#include <flixel/input/gamepad/FlxGamepadButton.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadManager
#include <flixel/input/gamepad/FlxGamepadManager.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_lists_FlxBaseGamepadList
#include <flixel/input/gamepad/lists/FlxBaseGamepadList.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_lists_FlxGamepadAnalogList
#include <flixel/input/gamepad/lists/FlxGamepadAnalogList.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_lists_FlxGamepadAnalogValueList
#include <flixel/input/gamepad/lists/FlxGamepadAnalogValueList.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_lists_FlxGamepadButtonList
#include <flixel/input/gamepad/lists/FlxGamepadButtonList.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_FlxGamepadMapping
#include <flixel/input/gamepad/mappings/FlxGamepadMapping.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c9d761a2eac45f19_197_new,"flixel.input.actions.FlxActionInputAnalogGamepad","new",0xd9f55bba,"flixel.input.actions.FlxActionInputAnalogGamepad.new","flixel/input/actions/FlxActionInputAnalog.hx",197,0x00ad3122)
HX_LOCAL_STACK_FRAME(_hx_pos_c9d761a2eac45f19_201_update,"flixel.input.actions.FlxActionInputAnalogGamepad","update",0xc42a0eef,"flixel.input.actions.FlxActionInputAnalogGamepad.update","flixel/input/actions/FlxActionInputAnalog.hx",201,0x00ad3122)
namespace flixel{
namespace input{
namespace actions{

void FlxActionInputAnalogGamepad_obj::__construct(int InputID,int Trigger,::hx::Null< int >  __o_Axis,::hx::Null< int >  __o_GamepadID){
            		int Axis = __o_Axis.Default(3);
            		int GamepadID = __o_GamepadID.Default(-2);
            	HX_STACKFRAME(&_hx_pos_c9d761a2eac45f19_197_new)
HXDLIN( 197)		super::__construct(::flixel::input::actions::FlxInputDevice_obj::GAMEPAD_dyn(),InputID,Trigger,Axis,GamepadID);
            	}

Dynamic FlxActionInputAnalogGamepad_obj::__CreateEmpty() { return new FlxActionInputAnalogGamepad_obj; }

void *FlxActionInputAnalogGamepad_obj::_hx_vtable = 0;

Dynamic FlxActionInputAnalogGamepad_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxActionInputAnalogGamepad_obj > _hx_result = new FlxActionInputAnalogGamepad_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool FlxActionInputAnalogGamepad_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x5e4ab4dc) {
		if (inClassId<=(int)0x20308a99) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x20308a99;
		} else {
			return inClassId==(int)0x5e4ab4dc;
		}
	} else {
		return inClassId==(int)0x7f995ee1;
	}
}

void FlxActionInputAnalogGamepad_obj::update(){
            	HX_STACKFRAME(&_hx_pos_c9d761a2eac45f19_201_update)
HXLINE( 202)		if ((this->deviceID == -1)) {
HXLINE( 204)			return;
            		}
HXLINE( 208)		 ::flixel::input::gamepad::FlxGamepad gamepad = null();
HXLINE( 210)		if ((this->deviceID == -2)) {
HXLINE( 212)			gamepad = ::flixel::FlxG_obj::gamepads->getFirstActiveGamepad();
            		}
            		else {
HXLINE( 214)			if ((this->deviceID >= 0)) {
HXLINE( 216)				gamepad = ::flixel::FlxG_obj::gamepads->_activeGamepads->__get(this->deviceID).StaticCast<  ::flixel::input::gamepad::FlxGamepad >();
            			}
            		}
HXLINE( 219)		if (::hx::IsNotNull( gamepad )) {
HXLINE( 221)			switch((int)(this->inputID)){
            				case (int)17: {
HXLINE( 230)					this->updateValues(gamepad->analog->value->gamepad->getAxis(17),( (Float)(0) ));
            				}
            				break;
            				case (int)18: {
HXLINE( 233)					this->updateValues(gamepad->analog->value->gamepad->getAxis(18),( (Float)(0) ));
            				}
            				break;
            				case (int)19: {
HXLINE( 224)					 ::flixel::input::gamepad::FlxGamepad _this = gamepad->analog->value->gamepad;
HXDLIN( 224)					Float _hx_tmp = _this->getAnalogXAxisValue(_this->mapping->getAnalogStick(19));
HXDLIN( 224)					 ::flixel::input::gamepad::FlxGamepad _this1 = gamepad->analog->value->gamepad;
HXDLIN( 224)					this->updateValues(_hx_tmp,_this1->getYAxisRaw(_this1->mapping->getAnalogStick(19)));
            				}
            				break;
            				case (int)20: {
HXLINE( 227)					 ::flixel::input::gamepad::FlxGamepad _this = gamepad->analog->value->gamepad;
HXDLIN( 227)					Float _hx_tmp = _this->getAnalogXAxisValue(_this->mapping->getAnalogStick(20));
HXDLIN( 227)					 ::flixel::input::gamepad::FlxGamepad _this1 = gamepad->analog->value->gamepad;
HXDLIN( 227)					this->updateValues(_hx_tmp,_this1->getYAxisRaw(_this1->mapping->getAnalogStick(20)));
            				}
            				break;
            				case (int)21: {
HXLINE( 242)					Float _hx_tmp;
HXDLIN( 242)					 ::flixel::input::gamepad::lists::FlxGamepadButtonList _this = gamepad->pressed;
HXDLIN( 242)					int id = 13;
HXDLIN( 242)					 ::flixel::input::gamepad::FlxGamepad _this1 = _this->gamepad;
HXDLIN( 242)					int Status = _this->status;
HXDLIN( 242)					bool _hx_tmp1;
HXDLIN( 242)					switch((int)(id)){
            						case (int)-2: {
HXLINE( 242)							_hx_tmp1 = _this1->anyButton(Status);
            						}
            						break;
            						case (int)-1: {
HXLINE( 242)							_hx_tmp1 = !(_this1->anyButton(Status));
            						}
            						break;
            						default:{
HXLINE( 242)							int RawID = _this1->mapping->getRawID(id);
HXDLIN( 242)							 ::flixel::input::gamepad::FlxGamepadButton button = _this1->buttons->__get(RawID).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN( 242)							if (::hx::IsNotNull( button )) {
HXLINE( 242)								_hx_tmp1 = button->hasState(Status);
            							}
            							else {
HXLINE( 242)								_hx_tmp1 = false;
            							}
            						}
            					}
HXDLIN( 242)					if (_hx_tmp1) {
HXLINE( 242)						_hx_tmp = ((Float)-1.0);
            					}
            					else {
HXLINE( 242)						 ::flixel::input::gamepad::lists::FlxGamepadButtonList _this = gamepad->pressed;
HXDLIN( 242)						int id = 14;
HXDLIN( 242)						 ::flixel::input::gamepad::FlxGamepad _this1 = _this->gamepad;
HXDLIN( 242)						int Status = _this->status;
HXDLIN( 242)						bool _hx_tmp1;
HXDLIN( 242)						switch((int)(id)){
            							case (int)-2: {
HXLINE( 242)								_hx_tmp1 = _this1->anyButton(Status);
            							}
            							break;
            							case (int)-1: {
HXLINE( 242)								_hx_tmp1 = !(_this1->anyButton(Status));
            							}
            							break;
            							default:{
HXLINE( 242)								int RawID = _this1->mapping->getRawID(id);
HXDLIN( 242)								 ::flixel::input::gamepad::FlxGamepadButton button = _this1->buttons->__get(RawID).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN( 242)								if (::hx::IsNotNull( button )) {
HXLINE( 242)									_hx_tmp1 = button->hasState(Status);
            								}
            								else {
HXLINE( 242)									_hx_tmp1 = false;
            								}
            							}
            						}
HXDLIN( 242)						if (_hx_tmp1) {
HXLINE( 242)							_hx_tmp = ((Float)1.0);
            						}
            						else {
HXLINE( 242)							_hx_tmp = ((Float)0.0);
            						}
            					}
HXLINE( 243)					Float _hx_tmp2;
HXDLIN( 243)					 ::flixel::input::gamepad::lists::FlxGamepadButtonList _this2 = gamepad->pressed;
HXDLIN( 243)					int id1 = 11;
HXDLIN( 243)					 ::flixel::input::gamepad::FlxGamepad _this3 = _this2->gamepad;
HXDLIN( 243)					int Status1 = _this2->status;
HXDLIN( 243)					bool _hx_tmp3;
HXDLIN( 243)					switch((int)(id1)){
            						case (int)-2: {
HXLINE( 243)							_hx_tmp3 = _this3->anyButton(Status1);
            						}
            						break;
            						case (int)-1: {
HXLINE( 243)							_hx_tmp3 = !(_this3->anyButton(Status1));
            						}
            						break;
            						default:{
HXLINE( 243)							int RawID = _this3->mapping->getRawID(id1);
HXDLIN( 243)							 ::flixel::input::gamepad::FlxGamepadButton button = _this3->buttons->__get(RawID).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN( 243)							if (::hx::IsNotNull( button )) {
HXLINE( 243)								_hx_tmp3 = button->hasState(Status1);
            							}
            							else {
HXLINE( 243)								_hx_tmp3 = false;
            							}
            						}
            					}
HXDLIN( 243)					if (_hx_tmp3) {
HXLINE( 243)						_hx_tmp2 = ((Float)-1.0);
            					}
            					else {
HXLINE( 243)						 ::flixel::input::gamepad::lists::FlxGamepadButtonList _this = gamepad->pressed;
HXDLIN( 243)						int id = 12;
HXDLIN( 243)						 ::flixel::input::gamepad::FlxGamepad _this1 = _this->gamepad;
HXDLIN( 243)						int Status = _this->status;
HXDLIN( 243)						bool _hx_tmp;
HXDLIN( 243)						switch((int)(id)){
            							case (int)-2: {
HXLINE( 243)								_hx_tmp = _this1->anyButton(Status);
            							}
            							break;
            							case (int)-1: {
HXLINE( 243)								_hx_tmp = !(_this1->anyButton(Status));
            							}
            							break;
            							default:{
HXLINE( 243)								int RawID = _this1->mapping->getRawID(id);
HXDLIN( 243)								 ::flixel::input::gamepad::FlxGamepadButton button = _this1->buttons->__get(RawID).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN( 243)								if (::hx::IsNotNull( button )) {
HXLINE( 243)									_hx_tmp = button->hasState(Status);
            								}
            								else {
HXLINE( 243)									_hx_tmp = false;
            								}
            							}
            						}
HXDLIN( 243)						if (_hx_tmp) {
HXLINE( 243)							_hx_tmp2 = ((Float)1.0);
            						}
            						else {
HXLINE( 243)							_hx_tmp2 = ((Float)0.0);
            						}
            					}
HXLINE( 242)					this->updateValues(_hx_tmp,_hx_tmp2);
            				}
            				break;
            				case (int)28: {
HXLINE( 236)					this->updateValues(gamepad->analog->value->gamepad->getAxis(28),( (Float)(0) ));
            				}
            				break;
            				case (int)29: {
HXLINE( 239)					this->updateValues(gamepad->analog->value->gamepad->getAxis(29),( (Float)(0) ));
            				}
            				break;
            			}
            		}
            		else {
HXLINE( 248)			this->updateValues(( (Float)(0) ),( (Float)(0) ));
            		}
            	}



::hx::ObjectPtr< FlxActionInputAnalogGamepad_obj > FlxActionInputAnalogGamepad_obj::__new(int InputID,int Trigger,::hx::Null< int >  __o_Axis,::hx::Null< int >  __o_GamepadID) {
	::hx::ObjectPtr< FlxActionInputAnalogGamepad_obj > __this = new FlxActionInputAnalogGamepad_obj();
	__this->__construct(InputID,Trigger,__o_Axis,__o_GamepadID);
	return __this;
}

::hx::ObjectPtr< FlxActionInputAnalogGamepad_obj > FlxActionInputAnalogGamepad_obj::__alloc(::hx::Ctx *_hx_ctx,int InputID,int Trigger,::hx::Null< int >  __o_Axis,::hx::Null< int >  __o_GamepadID) {
	FlxActionInputAnalogGamepad_obj *__this = (FlxActionInputAnalogGamepad_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxActionInputAnalogGamepad_obj), true, "flixel.input.actions.FlxActionInputAnalogGamepad"));
	*(void **)__this = FlxActionInputAnalogGamepad_obj::_hx_vtable;
	__this->__construct(InputID,Trigger,__o_Axis,__o_GamepadID);
	return __this;
}

FlxActionInputAnalogGamepad_obj::FlxActionInputAnalogGamepad_obj()
{
}

::hx::Val FlxActionInputAnalogGamepad_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FlxActionInputAnalogGamepad_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *FlxActionInputAnalogGamepad_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxActionInputAnalogGamepad_obj_sMemberFields[] = {
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class FlxActionInputAnalogGamepad_obj::__mClass;

void FlxActionInputAnalogGamepad_obj::__register()
{
	FlxActionInputAnalogGamepad_obj _hx_dummy;
	FlxActionInputAnalogGamepad_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.input.actions.FlxActionInputAnalogGamepad",c8,b6,82,3c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxActionInputAnalogGamepad_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxActionInputAnalogGamepad_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxActionInputAnalogGamepad_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxActionInputAnalogGamepad_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace input
} // end namespace actions
