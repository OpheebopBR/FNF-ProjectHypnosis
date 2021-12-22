#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxAction
#include <flixel/input/actions/FlxAction.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionAnalog
#include <flixel/input/actions/FlxActionAnalog.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionDigital
#include <flixel/input/actions/FlxActionDigital.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionSet
#include <flixel/input/actions/FlxActionSet.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxInputDevice
#include <flixel/input/actions/FlxInputDevice.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxSteamController
#include <flixel/input/actions/FlxSteamController.h>
#endif
#ifndef INCLUDED_flixel_input_actions__FlxActionManager_ActionSetRegister
#include <flixel/input/actions/_FlxActionManager/ActionSetRegister.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadManager
#include <flixel/input/gamepad/FlxGamepadManager.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_28ddf475545284e3_534_new,"flixel.input.actions._FlxActionManager.ActionSetRegister","new",0x5fc48710,"flixel.input.actions._FlxActionManager.ActionSetRegister.new","flixel/input/actions/FlxActionManager.hx",534,0x69ee576f)
HX_LOCAL_STACK_FRAME(_hx_pos_28ddf475545284e3_574_destroy,"flixel.input.actions._FlxActionManager.ActionSetRegister","destroy",0x400ffbaa,"flixel.input.actions._FlxActionManager.ActionSetRegister.destroy","flixel/input/actions/FlxActionManager.hx",574,0x69ee576f)
HX_LOCAL_STACK_FRAME(_hx_pos_28ddf475545284e3_581_activate,"flixel.input.actions._FlxActionManager.ActionSetRegister","activate",0xe2b72703,"flixel.input.actions._FlxActionManager.ActionSetRegister.activate","flixel/input/actions/FlxActionManager.hx",581,0x69ee576f)
HX_LOCAL_STACK_FRAME(_hx_pos_28ddf475545284e3_585_markActiveSets,"flixel.input.actions._FlxActionManager.ActionSetRegister","markActiveSets",0xa4387934,"flixel.input.actions._FlxActionManager.ActionSetRegister.markActiveSets","flixel/input/actions/FlxActionManager.hx",585,0x69ee576f)
HX_LOCAL_STACK_FRAME(_hx_pos_28ddf475545284e3_603_update,"flixel.input.actions._FlxActionManager.ActionSetRegister","update",0x2ec01d59,"flixel.input.actions._FlxActionManager.ActionSetRegister.update","flixel/input/actions/FlxActionManager.hx",603,0x69ee576f)
HX_LOCAL_STACK_FRAME(_hx_pos_28ddf475545284e3_610_updateSteam,"flixel.input.actions._FlxActionManager.ActionSetRegister","updateSteam",0x5fb5be77,"flixel.input.actions._FlxActionManager.ActionSetRegister.updateSteam","flixel/input/actions/FlxActionManager.hx",610,0x69ee576f)
HX_LOCAL_STACK_FRAME(_hx_pos_28ddf475545284e3_636_setActivate,"flixel.input.actions._FlxActionManager.ActionSetRegister","setActivate",0x0c1bcc25,"flixel.input.actions._FlxActionManager.ActionSetRegister.setActivate","flixel/input/actions/FlxActionManager.hx",636,0x69ee576f)
HX_LOCAL_STACK_FRAME(_hx_pos_28ddf475545284e3_751_updateSteamOrigins,"flixel.input.actions._FlxActionManager.ActionSetRegister","updateSteamOrigins",0x5b57c616,"flixel.input.actions._FlxActionManager.ActionSetRegister.updateSteamOrigins","flixel/input/actions/FlxActionManager.hx",751,0x69ee576f)
HX_LOCAL_STACK_FRAME(_hx_pos_28ddf475545284e3_756_updateDigitalActionOrigins,"flixel.input.actions._FlxActionManager.ActionSetRegister","updateDigitalActionOrigins",0x89672bb8,"flixel.input.actions._FlxActionManager.ActionSetRegister.updateDigitalActionOrigins","flixel/input/actions/FlxActionManager.hx",756,0x69ee576f)
HX_LOCAL_STACK_FRAME(_hx_pos_28ddf475545284e3_780_updateAnalogActionOrigins,"flixel.input.actions._FlxActionManager.ActionSetRegister","updateAnalogActionOrigins",0x5f8c108e,"flixel.input.actions._FlxActionManager.ActionSetRegister.updateAnalogActionOrigins","flixel/input/actions/FlxActionManager.hx",780,0x69ee576f)
HX_LOCAL_STACK_FRAME(_hx_pos_28ddf475545284e3_802_cheapChecksum,"flixel.input.actions._FlxActionManager.ActionSetRegister","cheapChecksum",0xf8192aa2,"flixel.input.actions._FlxActionManager.ActionSetRegister.cheapChecksum","flixel/input/actions/FlxActionManager.hx",802,0x69ee576f)
HX_LOCAL_STACK_FRAME(_hx_pos_28ddf475545284e3_824_updateSteamInputs,"flixel.input.actions._FlxActionManager.ActionSetRegister","updateSteamInputs",0xa894ab00,"flixel.input.actions._FlxActionManager.ActionSetRegister.updateSteamInputs","flixel/input/actions/FlxActionManager.hx",824,0x69ee576f)
HX_LOCAL_STACK_FRAME(_hx_pos_28ddf475545284e3_854_changeSteamControllerActionSet,"flixel.input.actions._FlxActionManager.ActionSetRegister","changeSteamControllerActionSet",0xdb1ce980,"flixel.input.actions._FlxActionManager.ActionSetRegister.changeSteamControllerActionSet","flixel/input/actions/FlxActionManager.hx",854,0x69ee576f)
HX_LOCAL_STACK_FRAME(_hx_pos_28ddf475545284e3_886_syncDevice,"flixel.input.actions._FlxActionManager.ActionSetRegister","syncDevice",0x027540a1,"flixel.input.actions._FlxActionManager.ActionSetRegister.syncDevice","flixel/input/actions/FlxActionManager.hx",886,0x69ee576f)
HX_LOCAL_STACK_FRAME(_hx_pos_28ddf475545284e3_937_clearSetFromArray,"flixel.input.actions._FlxActionManager.ActionSetRegister","clearSetFromArray",0xe1c17faa,"flixel.input.actions._FlxActionManager.ActionSetRegister.clearSetFromArray","flixel/input/actions/FlxActionManager.hx",937,0x69ee576f)
namespace flixel{
namespace input{
namespace actions{
namespace _FlxActionManager{

void ActionSetRegister_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_28ddf475545284e3_534_new)
HXLINE( 554)		this->steamControllerAllSet = -1;
HXLINE( 549)		this->gamepadAllSet = -1;
HXLINE( 544)		this->keyboardSet = -1;
HXLINE( 539)		this->mouseSet = -1;
HXLINE( 568)		::flixel::input::actions::FlxSteamController_obj::init();
HXLINE( 569)		this->gamepadSets = ::Array_obj< int >::__new(0);
HXLINE( 570)		this->steamControllerSets = ::Array_obj< int >::__new(0);
            	}

Dynamic ActionSetRegister_obj::__CreateEmpty() { return new ActionSetRegister_obj; }

void *ActionSetRegister_obj::_hx_vtable = 0;

Dynamic ActionSetRegister_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ActionSetRegister_obj > _hx_result = new ActionSetRegister_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ActionSetRegister_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x091fb37a;
}

static ::flixel::util::IFlxDestroyable_obj _hx_flixel_input_actions__FlxActionManager_ActionSetRegister__hx_flixel_util_IFlxDestroyable= {
	( void (::hx::Object::*)())&::flixel::input::actions::_FlxActionManager::ActionSetRegister_obj::destroy,
};

void *ActionSetRegister_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xd4fe2fcd: return &_hx_flixel_input_actions__FlxActionManager_ActionSetRegister__hx_flixel_util_IFlxDestroyable;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void ActionSetRegister_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_28ddf475545284e3_574_destroy)
HXLINE( 575)		this->gamepadSets = null();
HXLINE( 576)		this->steamControllerSets = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ActionSetRegister_obj,destroy,(void))

void ActionSetRegister_obj::activate(int ActionSet, ::flixel::input::actions::FlxInputDevice Device,::hx::Null< int >  __o_DeviceID){
            		int DeviceID = __o_DeviceID.Default(-2);
            	HX_STACKFRAME(&_hx_pos_28ddf475545284e3_581_activate)
HXDLIN( 581)		this->setActivate(ActionSet,Device,DeviceID,null());
            	}


HX_DEFINE_DYNAMIC_FUNC3(ActionSetRegister_obj,activate,(void))

void ActionSetRegister_obj::markActiveSets(::Array< ::Dynamic> sets){
            	HX_STACKFRAME(&_hx_pos_28ddf475545284e3_585_markActiveSets)
HXLINE( 586)		{
HXLINE( 586)			int _g = 0;
HXDLIN( 586)			int _g1 = sets->length;
HXDLIN( 586)			while((_g < _g1)){
HXLINE( 586)				_g = (_g + 1);
HXDLIN( 586)				int i = (_g - 1);
HXLINE( 588)				sets->__get(i).StaticCast<  ::flixel::input::actions::FlxActionSet >()->active = false;
            			}
            		}
HXLINE( 591)		this->syncDevice(::flixel::input::actions::FlxInputDevice_obj::MOUSE_dyn(),sets);
HXLINE( 592)		this->syncDevice(::flixel::input::actions::FlxInputDevice_obj::KEYBOARD_dyn(),sets);
HXLINE( 593)		this->syncDevice(::flixel::input::actions::FlxInputDevice_obj::GAMEPAD_dyn(),sets);
HXLINE( 594)		this->syncDevice(::flixel::input::actions::FlxInputDevice_obj::STEAM_CONTROLLER_dyn(),sets);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ActionSetRegister_obj,markActiveSets,(void))

void ActionSetRegister_obj::update(::Array< ::Dynamic> sets){
            	HX_STACKFRAME(&_hx_pos_28ddf475545284e3_603_update)
HXDLIN( 603)		int _g = 0;
HXDLIN( 603)		int _g1 = sets->length;
HXDLIN( 603)		while((_g < _g1)){
HXDLIN( 603)			_g = (_g + 1);
HXDLIN( 603)			int i = (_g - 1);
HXLINE( 605)			sets->__get(i).StaticCast<  ::flixel::input::actions::FlxActionSet >()->update();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ActionSetRegister_obj,update,(void))

void ActionSetRegister_obj::updateSteam(::Array< ::Dynamic> sets){
            	HX_STACKFRAME(&_hx_pos_28ddf475545284e3_610_updateSteam)
            	}


HX_DEFINE_DYNAMIC_FUNC1(ActionSetRegister_obj,updateSteam,(void))

void ActionSetRegister_obj::setActivate(int ActionSet, ::flixel::input::actions::FlxInputDevice Device,::hx::Null< int >  __o_DeviceID,::hx::Null< bool >  __o_DoActivate){
            		int DeviceID = __o_DeviceID.Default(-2);
            		bool DoActivate = __o_DoActivate.Default(true);
            	HX_STACKFRAME(&_hx_pos_28ddf475545284e3_636_setActivate)
HXDLIN( 636)		switch((int)(Device->_hx_getIndex())){
            			case (int)1: {
HXLINE( 639)				int _hx_tmp;
HXDLIN( 639)				if (DoActivate) {
HXLINE( 639)					_hx_tmp = ActionSet;
            				}
            				else {
HXLINE( 639)					_hx_tmp = -1;
            				}
HXDLIN( 639)				this->mouseSet = _hx_tmp;
            			}
            			break;
            			case (int)3: {
HXLINE( 641)				int _hx_tmp;
HXDLIN( 641)				if (DoActivate) {
HXLINE( 641)					_hx_tmp = ActionSet;
            				}
            				else {
HXLINE( 641)					_hx_tmp = -1;
            				}
HXDLIN( 641)				this->keyboardSet = _hx_tmp;
            			}
            			break;
            			case (int)4: {
HXLINE( 643)				switch((int)(DeviceID)){
            					case (int)-3: {
HXLINE( 650)						this->clearSetFromArray(ActionSet,this->gamepadSets);
            					}
            					break;
            					case (int)-2: {
HXLINE( 654)						::Array< int > _hx_tmp = this->gamepadSets;
HXDLIN( 654)						int _hx_tmp1 = ::flixel::FlxG_obj::gamepads->getFirstActiveGamepadID();
HXDLIN( 654)						int _hx_tmp2;
HXDLIN( 654)						if (DoActivate) {
HXLINE( 654)							_hx_tmp2 = ActionSet;
            						}
            						else {
HXLINE( 654)							_hx_tmp2 = -1;
            						}
HXDLIN( 654)						_hx_tmp[_hx_tmp1] = _hx_tmp2;
            					}
            					break;
            					case (int)-1: {
HXLINE( 646)						this->clearSetFromArray(-1,this->gamepadSets);
HXLINE( 647)						int _hx_tmp;
HXDLIN( 647)						if (DoActivate) {
HXLINE( 647)							_hx_tmp = ActionSet;
            						}
            						else {
HXLINE( 647)							_hx_tmp = -1;
            						}
HXDLIN( 647)						this->gamepadAllSet = _hx_tmp;
            					}
            					break;
            					default:{
HXLINE( 658)						int _hx_tmp;
HXDLIN( 658)						if (DoActivate) {
HXLINE( 658)							_hx_tmp = ActionSet;
            						}
            						else {
HXLINE( 658)							_hx_tmp = -1;
            						}
HXDLIN( 658)						this->gamepadSets[DeviceID] = _hx_tmp;
            					}
            				}
            			}
            			break;
            			case (int)5: {
HXLINE( 662)				switch((int)(DeviceID)){
            					case (int)-3: {
HXLINE( 675)						this->clearSetFromArray(ActionSet,this->steamControllerSets);
            					}
            					break;
            					case (int)-2: {
HXLINE( 678)						::Array< int > _hx_tmp = this->steamControllerSets;
HXDLIN( 678)						int _hx_tmp1 = ::flixel::input::actions::FlxSteamController_obj::getFirstActiveHandle();
HXDLIN( 678)						int _hx_tmp2;
HXDLIN( 678)						if (DoActivate) {
HXLINE( 678)							_hx_tmp2 = ActionSet;
            						}
            						else {
HXLINE( 678)							_hx_tmp2 = -1;
            						}
HXDLIN( 678)						_hx_tmp[_hx_tmp1] = _hx_tmp2;
            					}
            					break;
            					case (int)-1: {
HXLINE( 665)						int _hx_tmp;
HXDLIN( 665)						if (DoActivate) {
HXLINE( 665)							_hx_tmp = ActionSet;
            						}
            						else {
HXLINE( 665)							_hx_tmp = -1;
            						}
HXDLIN( 665)						this->steamControllerAllSet = _hx_tmp;
HXLINE( 666)						this->clearSetFromArray(-1,this->steamControllerSets);
            					}
            					break;
            					default:{
HXLINE( 681)						int _hx_tmp;
HXDLIN( 681)						if (DoActivate) {
HXLINE( 681)							_hx_tmp = ActionSet;
            						}
            						else {
HXLINE( 681)							_hx_tmp = -1;
            						}
HXDLIN( 681)						this->steamControllerSets[DeviceID] = _hx_tmp;
            					}
            				}
            			}
            			break;
            			case (int)9: {
HXLINE( 685)				this->setActivate(ActionSet,::flixel::input::actions::FlxInputDevice_obj::MOUSE_dyn(),DeviceID,DoActivate);
HXLINE( 686)				this->setActivate(ActionSet,::flixel::input::actions::FlxInputDevice_obj::KEYBOARD_dyn(),DeviceID,DoActivate);
HXLINE( 687)				this->setActivate(ActionSet,::flixel::input::actions::FlxInputDevice_obj::GAMEPAD_dyn(),DeviceID,DoActivate);
            			}
            			break;
            			case (int)10: {
HXLINE( 693)				this->setActivate(ActionSet,::flixel::input::actions::FlxInputDevice_obj::ALL_dyn(),DeviceID,false);
            			}
            			break;
            			default:{
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(ActionSetRegister_obj,setActivate,(void))

::Array< ::Dynamic> ActionSetRegister_obj::updateSteamOrigins(::Array< ::Dynamic> sets){
            	HX_STACKFRAME(&_hx_pos_28ddf475545284e3_751_updateSteamOrigins)
HXDLIN( 751)		return ::Array_obj< ::Dynamic>::__new(0);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ActionSetRegister_obj,updateSteamOrigins,return )

void ActionSetRegister_obj::updateDigitalActionOrigins( ::flixel::input::actions::FlxActionDigital action,int deviceID,int setHandle){
            	HX_STACKFRAME(&_hx_pos_28ddf475545284e3_756_updateDigitalActionOrigins)
            	}


HX_DEFINE_DYNAMIC_FUNC3(ActionSetRegister_obj,updateDigitalActionOrigins,(void))

void ActionSetRegister_obj::updateAnalogActionOrigins( ::flixel::input::actions::FlxActionAnalog action,int deviceID,int setHandle){
            	HX_STACKFRAME(&_hx_pos_28ddf475545284e3_780_updateAnalogActionOrigins)
            	}


HX_DEFINE_DYNAMIC_FUNC3(ActionSetRegister_obj,updateAnalogActionOrigins,(void))

int ActionSetRegister_obj::cheapChecksum(::Array< int > arr){
            	HX_STACKFRAME(&_hx_pos_28ddf475545284e3_802_cheapChecksum)
HXLINE( 805)		int sum1 = 0;
HXLINE( 806)		int sum2 = 0;
HXLINE( 808)		if (::hx::IsNotNull( arr )) {
HXLINE( 810)			int _g = 0;
HXDLIN( 810)			while((_g < arr->length)){
HXLINE( 810)				int n = arr->__get(_g);
HXDLIN( 810)				_g = (_g + 1);
HXLINE( 812)				sum1 = ::hx::Mod((sum1 + n),255);
HXLINE( 813)				sum2 = ::hx::Mod((sum2 + sum1),255);
            			}
            		}
HXLINE( 817)		return ((sum2 << 8) | sum1);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ActionSetRegister_obj,cheapChecksum,return )

void ActionSetRegister_obj::updateSteamInputs(::Array< ::Dynamic> sets){
            	HX_STACKFRAME(&_hx_pos_28ddf475545284e3_824_updateSteamInputs)
            	}


HX_DEFINE_DYNAMIC_FUNC1(ActionSetRegister_obj,updateSteamInputs,(void))

void ActionSetRegister_obj::changeSteamControllerActionSet(int controllerHandle,int newSet,::Array< ::Dynamic> sets){
            	HX_STACKFRAME(&_hx_pos_28ddf475545284e3_854_changeSteamControllerActionSet)
HXLINE( 855)		int lastSet = ::flixel::input::actions::FlxSteamController_obj::getCurrentActionSet(controllerHandle);
HXLINE( 856)		if ((lastSet == newSet)) {
HXLINE( 857)			return;
            		}
HXLINE( 859)		if (::hx::IsNull( sets )) {
HXLINE( 861)			return;
            		}
HXLINE( 864)		if ((lastSet != -1)) {
HXLINE( 866)			if ((lastSet < sets->length)) {
HXLINE( 869)				sets->__get(lastSet).StaticCast<  ::flixel::input::actions::FlxActionSet >()->attachSteamController(controllerHandle,false);
            			}
            		}
HXLINE( 874)		sets->__get(newSet).StaticCast<  ::flixel::input::actions::FlxActionSet >()->attachSteamController(controllerHandle,null());
            	}


HX_DEFINE_DYNAMIC_FUNC3(ActionSetRegister_obj,changeSteamControllerActionSet,(void))

void ActionSetRegister_obj::syncDevice( ::flixel::input::actions::FlxInputDevice device,::Array< ::Dynamic> sets){
            	HX_STACKFRAME(&_hx_pos_28ddf475545284e3_886_syncDevice)
HXDLIN( 886)		switch((int)(device->_hx_getIndex())){
            			case (int)1: {
HXLINE( 889)				bool _hx_tmp;
HXDLIN( 889)				if ((this->mouseSet >= 0)) {
HXLINE( 889)					_hx_tmp = (this->mouseSet < sets->length);
            				}
            				else {
HXLINE( 889)					_hx_tmp = false;
            				}
HXDLIN( 889)				if (_hx_tmp) {
HXLINE( 890)					sets->__get(this->mouseSet).StaticCast<  ::flixel::input::actions::FlxActionSet >()->active = true;
            				}
            			}
            			break;
            			case (int)3: {
HXLINE( 893)				bool _hx_tmp;
HXDLIN( 893)				if ((this->keyboardSet >= 0)) {
HXLINE( 893)					_hx_tmp = (this->keyboardSet < sets->length);
            				}
            				else {
HXLINE( 893)					_hx_tmp = false;
            				}
HXDLIN( 893)				if (_hx_tmp) {
HXLINE( 894)					sets->__get(this->keyboardSet).StaticCast<  ::flixel::input::actions::FlxActionSet >()->active = true;
            				}
            			}
            			break;
            			case (int)4: {
HXLINE( 897)				bool _hx_tmp;
HXDLIN( 897)				if ((this->gamepadAllSet >= 0)) {
HXLINE( 897)					_hx_tmp = (this->gamepadAllSet < sets->length);
            				}
            				else {
HXLINE( 897)					_hx_tmp = false;
            				}
HXDLIN( 897)				if (_hx_tmp) {
HXLINE( 899)					sets->__get(this->gamepadAllSet).StaticCast<  ::flixel::input::actions::FlxActionSet >()->active = true;
            				}
            				else {
HXLINE( 903)					int _g = 0;
HXDLIN( 903)					int _g1 = this->gamepadSets->length;
HXDLIN( 903)					while((_g < _g1)){
HXLINE( 903)						_g = (_g + 1);
HXDLIN( 903)						int i = (_g - 1);
HXLINE( 905)						int gset = this->gamepadSets->__get(i);
HXLINE( 906)						bool _hx_tmp;
HXDLIN( 906)						if ((gset >= 0)) {
HXLINE( 906)							_hx_tmp = (gset < sets->length);
            						}
            						else {
HXLINE( 906)							_hx_tmp = false;
            						}
HXDLIN( 906)						if (_hx_tmp) {
HXLINE( 908)							sets->__get(gset).StaticCast<  ::flixel::input::actions::FlxActionSet >()->active = true;
            						}
            					}
            				}
            			}
            			break;
            			case (int)5: {
HXLINE( 914)				this->updateSteamInputs(sets);
HXLINE( 915)				bool _hx_tmp;
HXDLIN( 915)				if ((this->steamControllerAllSet >= 0)) {
HXLINE( 915)					_hx_tmp = (this->steamControllerAllSet < sets->length);
            				}
            				else {
HXLINE( 915)					_hx_tmp = false;
            				}
HXDLIN( 915)				if (_hx_tmp) {
HXLINE( 917)					sets->__get(this->steamControllerAllSet).StaticCast<  ::flixel::input::actions::FlxActionSet >()->active = true;
            				}
            				else {
HXLINE( 921)					int _g = 0;
HXDLIN( 921)					int _g1 = this->steamControllerSets->length;
HXDLIN( 921)					while((_g < _g1)){
HXLINE( 921)						_g = (_g + 1);
HXDLIN( 921)						int i = (_g - 1);
HXLINE( 923)						int sset = this->steamControllerSets->__get(i);
HXLINE( 924)						bool _hx_tmp;
HXDLIN( 924)						if ((sset >= 0)) {
HXLINE( 924)							_hx_tmp = (sset < sets->length);
            						}
            						else {
HXLINE( 924)							_hx_tmp = false;
            						}
HXDLIN( 924)						if (_hx_tmp) {
HXLINE( 926)							sets->__get(sset).StaticCast<  ::flixel::input::actions::FlxActionSet >()->active = true;
            						}
            					}
            				}
            			}
            			break;
            			default:{
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(ActionSetRegister_obj,syncDevice,(void))

void ActionSetRegister_obj::clearSetFromArray(::hx::Null< int >  __o_ActionSet,::Array< int > array){
            		int ActionSet = __o_ActionSet.Default(-1);
            	HX_STACKFRAME(&_hx_pos_28ddf475545284e3_937_clearSetFromArray)
HXDLIN( 937)		int _g = 0;
HXDLIN( 937)		int _g1 = array->length;
HXDLIN( 937)		while((_g < _g1)){
HXDLIN( 937)			_g = (_g + 1);
HXDLIN( 937)			int i = (_g - 1);
HXLINE( 939)			bool _hx_tmp;
HXDLIN( 939)			if ((ActionSet != -1)) {
HXLINE( 939)				_hx_tmp = (array->__get(i) == ActionSet);
            			}
            			else {
HXLINE( 939)				_hx_tmp = true;
            			}
HXDLIN( 939)			if (_hx_tmp) {
HXLINE( 941)				array[i] = -1;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(ActionSetRegister_obj,clearSetFromArray,(void))


::hx::ObjectPtr< ActionSetRegister_obj > ActionSetRegister_obj::__new() {
	::hx::ObjectPtr< ActionSetRegister_obj > __this = new ActionSetRegister_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ActionSetRegister_obj > ActionSetRegister_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ActionSetRegister_obj *__this = (ActionSetRegister_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ActionSetRegister_obj), true, "flixel.input.actions._FlxActionManager.ActionSetRegister"));
	*(void **)__this = ActionSetRegister_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ActionSetRegister_obj::ActionSetRegister_obj()
{
}

void ActionSetRegister_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ActionSetRegister);
	HX_MARK_MEMBER_NAME(mouseSet,"mouseSet");
	HX_MARK_MEMBER_NAME(keyboardSet,"keyboardSet");
	HX_MARK_MEMBER_NAME(gamepadAllSet,"gamepadAllSet");
	HX_MARK_MEMBER_NAME(steamControllerAllSet,"steamControllerAllSet");
	HX_MARK_MEMBER_NAME(gamepadSets,"gamepadSets");
	HX_MARK_MEMBER_NAME(steamControllerSets,"steamControllerSets");
	HX_MARK_END_CLASS();
}

void ActionSetRegister_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mouseSet,"mouseSet");
	HX_VISIT_MEMBER_NAME(keyboardSet,"keyboardSet");
	HX_VISIT_MEMBER_NAME(gamepadAllSet,"gamepadAllSet");
	HX_VISIT_MEMBER_NAME(steamControllerAllSet,"steamControllerAllSet");
	HX_VISIT_MEMBER_NAME(gamepadSets,"gamepadSets");
	HX_VISIT_MEMBER_NAME(steamControllerSets,"steamControllerSets");
}

::hx::Val ActionSetRegister_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mouseSet") ) { return ::hx::Val( mouseSet ); }
		if (HX_FIELD_EQ(inName,"activate") ) { return ::hx::Val( activate_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"syncDevice") ) { return ::hx::Val( syncDevice_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"keyboardSet") ) { return ::hx::Val( keyboardSet ); }
		if (HX_FIELD_EQ(inName,"gamepadSets") ) { return ::hx::Val( gamepadSets ); }
		if (HX_FIELD_EQ(inName,"updateSteam") ) { return ::hx::Val( updateSteam_dyn() ); }
		if (HX_FIELD_EQ(inName,"setActivate") ) { return ::hx::Val( setActivate_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"gamepadAllSet") ) { return ::hx::Val( gamepadAllSet ); }
		if (HX_FIELD_EQ(inName,"cheapChecksum") ) { return ::hx::Val( cheapChecksum_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"markActiveSets") ) { return ::hx::Val( markActiveSets_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"updateSteamInputs") ) { return ::hx::Val( updateSteamInputs_dyn() ); }
		if (HX_FIELD_EQ(inName,"clearSetFromArray") ) { return ::hx::Val( clearSetFromArray_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"updateSteamOrigins") ) { return ::hx::Val( updateSteamOrigins_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"steamControllerSets") ) { return ::hx::Val( steamControllerSets ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"steamControllerAllSet") ) { return ::hx::Val( steamControllerAllSet ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"updateAnalogActionOrigins") ) { return ::hx::Val( updateAnalogActionOrigins_dyn() ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"updateDigitalActionOrigins") ) { return ::hx::Val( updateDigitalActionOrigins_dyn() ); }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"changeSteamControllerActionSet") ) { return ::hx::Val( changeSteamControllerActionSet_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ActionSetRegister_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"mouseSet") ) { mouseSet=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"keyboardSet") ) { keyboardSet=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gamepadSets") ) { gamepadSets=inValue.Cast< ::Array< int > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"gamepadAllSet") ) { gamepadAllSet=inValue.Cast< int >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"steamControllerSets") ) { steamControllerSets=inValue.Cast< ::Array< int > >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"steamControllerAllSet") ) { steamControllerAllSet=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ActionSetRegister_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("mouseSet",7d,e2,20,a4));
	outFields->push(HX_("keyboardSet",3b,b9,35,0a));
	outFields->push(HX_("gamepadAllSet",82,08,49,5e));
	outFields->push(HX_("steamControllerAllSet",6d,d9,5b,38));
	outFields->push(HX_("gamepadSets",d2,03,a3,dc));
	outFields->push(HX_("steamControllerSets",fd,33,a9,04));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ActionSetRegister_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(ActionSetRegister_obj,mouseSet),HX_("mouseSet",7d,e2,20,a4)},
	{::hx::fsInt,(int)offsetof(ActionSetRegister_obj,keyboardSet),HX_("keyboardSet",3b,b9,35,0a)},
	{::hx::fsInt,(int)offsetof(ActionSetRegister_obj,gamepadAllSet),HX_("gamepadAllSet",82,08,49,5e)},
	{::hx::fsInt,(int)offsetof(ActionSetRegister_obj,steamControllerAllSet),HX_("steamControllerAllSet",6d,d9,5b,38)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(ActionSetRegister_obj,gamepadSets),HX_("gamepadSets",d2,03,a3,dc)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(ActionSetRegister_obj,steamControllerSets),HX_("steamControllerSets",fd,33,a9,04)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ActionSetRegister_obj_sStaticStorageInfo = 0;
#endif

static ::String ActionSetRegister_obj_sMemberFields[] = {
	HX_("mouseSet",7d,e2,20,a4),
	HX_("keyboardSet",3b,b9,35,0a),
	HX_("gamepadAllSet",82,08,49,5e),
	HX_("steamControllerAllSet",6d,d9,5b,38),
	HX_("gamepadSets",d2,03,a3,dc),
	HX_("steamControllerSets",fd,33,a9,04),
	HX_("destroy",fa,2c,86,24),
	HX_("activate",b3,1b,ac,e5),
	HX_("markActiveSets",e4,11,1e,62),
	HX_("update",09,86,05,87),
	HX_("updateSteam",c7,d7,a6,69),
	HX_("setActivate",75,e5,0c,16),
	HX_("updateSteamOrigins",c6,76,6f,ae),
	HX_("updateDigitalActionOrigins",68,0c,a7,49),
	HX_("updateAnalogActionOrigins",de,d5,78,ae),
	HX_("cheapChecksum",f2,37,7f,33),
	HX_("updateSteamInputs",50,a0,93,d4),
	HX_("changeSteamControllerActionSet",30,e2,52,3f),
	HX_("syncDevice",51,c1,14,64),
	HX_("clearSetFromArray",fa,74,c0,0d),
	::String(null()) };

::hx::Class ActionSetRegister_obj::__mClass;

void ActionSetRegister_obj::__register()
{
	ActionSetRegister_obj _hx_dummy;
	ActionSetRegister_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.input.actions._FlxActionManager.ActionSetRegister",1e,ff,97,b5);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ActionSetRegister_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ActionSetRegister_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ActionSetRegister_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ActionSetRegister_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace input
} // end namespace actions
} // end namespace _FlxActionManager
