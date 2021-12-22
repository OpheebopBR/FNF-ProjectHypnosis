#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
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
#ifndef INCLUDED_flixel_input_actions_FlxActionManager
#include <flixel/input/actions/FlxActionManager.h>
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
#ifndef INCLUDED_flixel_input_actions_ResetPolicy
#include <flixel/input/actions/ResetPolicy.h>
#endif
#ifndef INCLUDED_flixel_input_actions__FlxActionManager_ActionSetRegister
#include <flixel/input/actions/_FlxActionManager/ActionSetRegister.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepad
#include <flixel/input/gamepad/FlxGamepad.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadManager
#include <flixel/input/gamepad/FlxGamepadManager.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadModel
#include <flixel/input/gamepad/FlxGamepadModel.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SignalFrontEnd
#include <flixel/system/frontEnds/SignalFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxSignal
#include <flixel/util/IFlxSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxBaseSignal
#include <flixel/util/_FlxSignal/FlxBaseSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal0
#include <flixel/util/_FlxSignal/FlxSignal0.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal1
#include <flixel/util/_FlxSignal/FlxSignal1.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal3
#include <flixel/util/_FlxSignal/FlxSignal3.h>
#endif
#ifndef INCLUDED_haxe_format_JsonPrinter
#include <haxe/format/JsonPrinter.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_55e4e352cde6aeec_40_new,"flixel.input.actions.FlxActionManager","new",0x49728ade,"flixel.input.actions.FlxActionManager.new","flixel/input/actions/FlxActionManager.hx",40,0x69ee576f)
HX_LOCAL_STACK_FRAME(_hx_pos_55e4e352cde6aeec_94_activateSet,"flixel.input.actions.FlxActionManager","activateSet",0x0d61b22d,"flixel.input.actions.FlxActionManager.activateSet","flixel/input/actions/FlxActionManager.hx",94,0x69ee576f)
HX_LOCAL_STACK_FRAME(_hx_pos_55e4e352cde6aeec_106_addActions,"flixel.input.actions.FlxActionManager","addActions",0xd318e11e,"flixel.input.actions.FlxActionManager.addActions","flixel/input/actions/FlxActionManager.hx",106,0x69ee576f)
HX_LOCAL_STACK_FRAME(_hx_pos_55e4e352cde6aeec_124_addAction,"flixel.input.actions.FlxActionManager","addAction",0xd1e11db5,"flixel.input.actions.FlxActionManager.addAction","flixel/input/actions/FlxActionManager.hx",124,0x69ee576f)
HX_LOCAL_STACK_FRAME(_hx_pos_55e4e352cde6aeec_152_addSet,"flixel.input.actions.FlxActionManager","addSet",0xa1a31443,"flixel.input.actions.FlxActionManager.addSet","flixel/input/actions/FlxActionManager.hx",152,0x69ee576f)
HX_LOCAL_STACK_FRAME(_hx_pos_55e4e352cde6aeec_171_deactivateSet,"flixel.input.actions.FlxActionManager","deactivateSet",0x8ee293cc,"flixel.input.actions.FlxActionManager.deactivateSet","flixel/input/actions/FlxActionManager.hx",171,0x69ee576f)
HX_LOCAL_STACK_FRAME(_hx_pos_55e4e352cde6aeec_177_destroy,"flixel.input.actions.FlxActionManager","destroy",0x6906fe78,"flixel.input.actions.FlxActionManager.destroy","flixel/input/actions/FlxActionManager.hx",177,0x69ee576f)
HX_LOCAL_STACK_FRAME(_hx_pos_55e4e352cde6aeec_188_getSetIndex,"flixel.input.actions.FlxActionManager","getSetIndex",0xc2772f44,"flixel.input.actions.FlxActionManager.getSetIndex","flixel/input/actions/FlxActionManager.hx",188,0x69ee576f)
HX_LOCAL_STACK_FRAME(_hx_pos_55e4e352cde6aeec_203_getSetName,"flixel.input.actions.FlxActionManager","getSetName",0x6245ea59,"flixel.input.actions.FlxActionManager.getSetName","flixel/input/actions/FlxActionManager.hx",203,0x69ee576f)
HX_LOCAL_STACK_FRAME(_hx_pos_55e4e352cde6aeec_215_getSet,"flixel.input.actions.FlxActionManager","getSet",0xa5c13cee,"flixel.input.actions.FlxActionManager.getSet","flixel/input/actions/FlxActionManager.hx",215,0x69ee576f)
HX_LOCAL_STACK_FRAME(_hx_pos_55e4e352cde6aeec_226_getSetActivatedForDevice,"flixel.input.actions.FlxActionManager","getSetActivatedForDevice",0x2880457c,"flixel.input.actions.FlxActionManager.getSetActivatedForDevice","flixel/input/actions/FlxActionManager.hx",226,0x69ee576f)
HX_LOCAL_STACK_FRAME(_hx_pos_55e4e352cde6aeec_320_initFromJson,"flixel.input.actions.FlxActionManager","initFromJson",0xabcb9da4,"flixel.input.actions.FlxActionManager.initFromJson","flixel/input/actions/FlxActionManager.hx",320,0x69ee576f)
HX_LOCAL_STACK_FRAME(_hx_pos_55e4e352cde6aeec_347_exportToJson,"flixel.input.actions.FlxActionManager","exportToJson",0x53d14799,"flixel.input.actions.FlxActionManager.exportToJson","flixel/input/actions/FlxActionManager.hx",347,0x69ee576f)
HX_LOCAL_STACK_FRAME(_hx_pos_55e4e352cde6aeec_344_exportToJson,"flixel.input.actions.FlxActionManager","exportToJson",0x53d14799,"flixel.input.actions.FlxActionManager.exportToJson","flixel/input/actions/FlxActionManager.hx",344,0x69ee576f)
HX_LOCAL_STACK_FRAME(_hx_pos_55e4e352cde6aeec_374_removeSet,"flixel.input.actions.FlxActionManager","removeSet",0xce6966bc,"flixel.input.actions.FlxActionManager.removeSet","flixel/input/actions/FlxActionManager.hx",374,0x69ee576f)
HX_LOCAL_STACK_FRAME(_hx_pos_55e4e352cde6aeec_394_removeAction,"flixel.input.actions.FlxActionManager","removeAction",0xe854dcdc,"flixel.input.actions.FlxActionManager.removeAction","flixel/input/actions/FlxActionManager.hx",394,0x69ee576f)
HX_LOCAL_STACK_FRAME(_hx_pos_55e4e352cde6aeec_407_reset,"flixel.input.actions.FlxActionManager","reset",0xc0e91fcd,"flixel.input.actions.FlxActionManager.reset","flixel/input/actions/FlxActionManager.hx",407,0x69ee576f)
HX_LOCAL_STACK_FRAME(_hx_pos_55e4e352cde6aeec_411_get_numSets,"flixel.input.actions.FlxActionManager","get_numSets",0xf606008c,"flixel.input.actions.FlxActionManager.get_numSets","flixel/input/actions/FlxActionManager.hx",411,0x69ee576f)
HX_LOCAL_STACK_FRAME(_hx_pos_55e4e352cde6aeec_416_onChange,"flixel.input.actions.FlxActionManager","onChange",0x435604b1,"flixel.input.actions.FlxActionManager.onChange","flixel/input/actions/FlxActionManager.hx",416,0x69ee576f)
HX_LOCAL_STACK_FRAME(_hx_pos_55e4e352cde6aeec_421_onDeviceConnected,"flixel.input.actions.FlxActionManager","onDeviceConnected",0xbd973ff2,"flixel.input.actions.FlxActionManager.onDeviceConnected","flixel/input/actions/FlxActionManager.hx",421,0x69ee576f)
HX_LOCAL_STACK_FRAME(_hx_pos_55e4e352cde6aeec_426_onDeviceDisconnected,"flixel.input.actions.FlxActionManager","onDeviceDisconnected",0x6bbd0e32,"flixel.input.actions.FlxActionManager.onDeviceDisconnected","flixel/input/actions/FlxActionManager.hx",426,0x69ee576f)
HX_LOCAL_STACK_FRAME(_hx_pos_55e4e352cde6aeec_438_onFocus,"flixel.input.actions.FlxActionManager","onFocus",0xdf47cfb7,"flixel.input.actions.FlxActionManager.onFocus","flixel/input/actions/FlxActionManager.hx",438,0x69ee576f)
HX_LOCAL_STACK_FRAME(_hx_pos_55e4e352cde6aeec_440_onFocusLost,"flixel.input.actions.FlxActionManager","onFocusLost",0x11c04d3b,"flixel.input.actions.FlxActionManager.onFocusLost","flixel/input/actions/FlxActionManager.hx",440,0x69ee576f)
HX_LOCAL_STACK_FRAME(_hx_pos_55e4e352cde6aeec_444_onStateSwitched,"flixel.input.actions.FlxActionManager","onStateSwitched",0x6c921963,"flixel.input.actions.FlxActionManager.onStateSwitched","flixel/input/actions/FlxActionManager.hx",444,0x69ee576f)
HX_LOCAL_STACK_FRAME(_hx_pos_55e4e352cde6aeec_464_onSteamConnected,"flixel.input.actions.FlxActionManager","onSteamConnected",0xa0bb1e5a,"flixel.input.actions.FlxActionManager.onSteamConnected","flixel/input/actions/FlxActionManager.hx",464,0x69ee576f)
HX_LOCAL_STACK_FRAME(_hx_pos_55e4e352cde6aeec_485_onSteamDisconnected,"flixel.input.actions.FlxActionManager","onSteamDisconnected",0xe29620ca,"flixel.input.actions.FlxActionManager.onSteamDisconnected","flixel/input/actions/FlxActionManager.hx",485,0x69ee576f)
HX_LOCAL_STACK_FRAME(_hx_pos_55e4e352cde6aeec_497_updateSteamControllers,"flixel.input.actions.FlxActionManager","updateSteamControllers",0x59f8d412,"flixel.input.actions.FlxActionManager.updateSteamControllers","flixel/input/actions/FlxActionManager.hx",497,0x69ee576f)
HX_LOCAL_STACK_FRAME(_hx_pos_55e4e352cde6aeec_514_updateSteamOrigins,"flixel.input.actions.FlxActionManager","updateSteamOrigins",0x5ea63a08,"flixel.input.actions.FlxActionManager.updateSteamOrigins","flixel/input/actions/FlxActionManager.hx",514,0x69ee576f)
HX_LOCAL_STACK_FRAME(_hx_pos_55e4e352cde6aeec_526_update,"flixel.input.actions.FlxActionManager","update",0x899fee4b,"flixel.input.actions.FlxActionManager.update","flixel/input/actions/FlxActionManager.hx",526,0x69ee576f)
namespace flixel{
namespace input{
namespace actions{

void FlxActionManager_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_55e4e352cde6aeec_40_new)
HXLINE(  69)		this->resetOnStateSwitch = ::flixel::input::actions::ResetPolicy_obj::DEFAULT_SET_ONLY_dyn();
HXLINE(  44)		this->defaultSet = null();
HXLINE(  73)		this->sets = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  74)		this->_hx_register =  ::flixel::input::actions::_FlxActionManager::ActionSetRegister_obj::__alloc( HX_CTX );
HXLINE(  75)		this->deviceConnected =  ::flixel::util::_FlxSignal::FlxSignal3_obj::__alloc( HX_CTX );
HXLINE(  76)		this->deviceDisconnected =  ::flixel::util::_FlxSignal::FlxSignal3_obj::__alloc( HX_CTX );
HXLINE(  77)		this->inputsChanged =  ::flixel::util::_FlxSignal::FlxSignal1_obj::__alloc( HX_CTX );
HXLINE(  79)		::flixel::FlxG_obj::gamepads->deviceConnected->add(this->onDeviceConnected_dyn());
HXLINE(  80)		::flixel::FlxG_obj::gamepads->deviceDisconnected->add(this->onDeviceDisconnected_dyn());
HXLINE(  82)		::flixel::input::actions::FlxSteamController_obj::onControllerConnect = this->updateSteamControllers_dyn();
HXLINE(  83)		::flixel::input::actions::FlxSteamController_obj::onOriginUpdate = this->updateSteamOrigins_dyn();
HXLINE(  84)		::flixel::FlxG_obj::signals->preStateSwitch->add(this->onStateSwitched_dyn());
            	}

Dynamic FlxActionManager_obj::__CreateEmpty() { return new FlxActionManager_obj; }

void *FlxActionManager_obj::_hx_vtable = 0;

Dynamic FlxActionManager_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxActionManager_obj > _hx_result = new FlxActionManager_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxActionManager_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x34fe5abc;
}

static ::flixel::input::IFlxInputManager_obj _hx_flixel_input_actions_FlxActionManager__hx_flixel_input_IFlxInputManager= {
	( void (::hx::Object::*)())&::flixel::input::actions::FlxActionManager_obj::destroy,
	( void (::hx::Object::*)())&::flixel::input::actions::FlxActionManager_obj::reset,
	( void (::hx::Object::*)())&::flixel::input::actions::FlxActionManager_obj::update,
	( void (::hx::Object::*)())&::flixel::input::actions::FlxActionManager_obj::onFocus,
	( void (::hx::Object::*)())&::flixel::input::actions::FlxActionManager_obj::onFocusLost,
};

static ::flixel::util::IFlxDestroyable_obj _hx_flixel_input_actions_FlxActionManager__hx_flixel_util_IFlxDestroyable= {
	( void (::hx::Object::*)())&::flixel::input::actions::FlxActionManager_obj::destroy,
};

void *FlxActionManager_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x65dd217a: return &_hx_flixel_input_actions_FlxActionManager__hx_flixel_input_IFlxInputManager;
		case (int)0xd4fe2fcd: return &_hx_flixel_input_actions_FlxActionManager__hx_flixel_util_IFlxDestroyable;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void FlxActionManager_obj::activateSet(int ActionSet, ::flixel::input::actions::FlxInputDevice Device,int DeviceID){
            	HX_STACKFRAME(&_hx_pos_55e4e352cde6aeec_94_activateSet)
HXLINE(  95)		this->_hx_register->activate(ActionSet,Device,DeviceID);
HXLINE(  96)		this->onChange();
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxActionManager_obj,activateSet,(void))

bool FlxActionManager_obj::addActions(::Array< ::Dynamic> Actions,::hx::Null< int >  __o_ActionSet){
            		int ActionSet = __o_ActionSet.Default(0);
            	HX_STACKFRAME(&_hx_pos_55e4e352cde6aeec_106_addActions)
HXLINE( 107)		bool success = true;
HXLINE( 108)		{
HXLINE( 108)			int _g = 0;
HXDLIN( 108)			while((_g < Actions->length)){
HXLINE( 108)				 ::flixel::input::actions::FlxAction Action = Actions->__get(_g).StaticCast<  ::flixel::input::actions::FlxAction >();
HXDLIN( 108)				_g = (_g + 1);
HXLINE( 110)				bool result = this->addAction(Action,null());
HXLINE( 111)				if (!(result)) {
HXLINE( 112)					success = false;
            				}
            			}
            		}
HXLINE( 114)		return success;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxActionManager_obj,addActions,return )

bool FlxActionManager_obj::addAction( ::flixel::input::actions::FlxAction Action,::hx::Null< int >  __o_ActionSet){
            		int ActionSet = __o_ActionSet.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_55e4e352cde6aeec_124_addAction)
HXLINE( 125)		bool success = false;
HXLINE( 127)		if (::hx::IsNull( this->sets )) {
HXLINE( 128)			this->sets = ::Array_obj< ::Dynamic>::__new(0);
            		}
HXLINE( 129)		if ((this->sets->length == 0)) {
HXLINE( 131)			this->defaultSet =  ::flixel::input::actions::FlxActionSet_obj::__alloc( HX_CTX ,HX_("default",c1,d8,c3,9b),null(),null());
HXLINE( 132)			int defaultSetIndex = this->addSet(this->defaultSet);
HXLINE( 133)			this->activateSet(defaultSetIndex,::flixel::input::actions::FlxInputDevice_obj::ALL_dyn(),-1);
            		}
HXLINE( 136)		bool _hx_tmp;
HXDLIN( 136)		if ((ActionSet >= 0)) {
HXLINE( 136)			_hx_tmp = (ActionSet < this->sets->length);
            		}
            		else {
HXLINE( 136)			_hx_tmp = false;
            		}
HXDLIN( 136)		if (_hx_tmp) {
HXLINE( 138)			success = this->sets->__get(ActionSet).StaticCast<  ::flixel::input::actions::FlxActionSet >()->add(Action);
            		}
HXLINE( 141)		this->onChange();
HXLINE( 143)		return success;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxActionManager_obj,addAction,return )

int FlxActionManager_obj::addSet( ::flixel::input::actions::FlxActionSet set){
            	HX_STACKFRAME(&_hx_pos_55e4e352cde6aeec_152_addSet)
HXLINE( 153)		if (this->sets->contains(set)) {
HXLINE( 155)			return -1;
            		}
HXLINE( 158)		this->sets->push(set);
HXLINE( 160)		this->onChange();
HXLINE( 162)		return (this->sets->length - 1);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxActionManager_obj,addSet,return )

void FlxActionManager_obj::deactivateSet(int ActionSet,::hx::Null< int >  __o_DeviceID){
            		int DeviceID = __o_DeviceID.Default(-1);
            	HX_STACKFRAME(&_hx_pos_55e4e352cde6aeec_171_deactivateSet)
HXLINE( 172)		this->_hx_register->activate(ActionSet,::flixel::input::actions::FlxInputDevice_obj::NONE_dyn(),DeviceID);
HXLINE( 173)		this->onChange();
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxActionManager_obj,deactivateSet,(void))

void FlxActionManager_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_55e4e352cde6aeec_177_destroy)
HXLINE( 178)		this->sets = ::flixel::util::FlxDestroyUtil_obj::destroyArray(this->sets);
HXLINE( 179)		this->_hx_register = ( ( ::flixel::input::actions::_FlxActionManager::ActionSetRegister)(::flixel::util::FlxDestroyUtil_obj::destroy(this->_hx_register)) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxActionManager_obj,destroy,(void))

int FlxActionManager_obj::getSetIndex(::String Name){
            	HX_STACKFRAME(&_hx_pos_55e4e352cde6aeec_188_getSetIndex)
HXLINE( 189)		{
HXLINE( 189)			int _g = 0;
HXDLIN( 189)			int _g1 = this->sets->length;
HXDLIN( 189)			while((_g < _g1)){
HXLINE( 189)				_g = (_g + 1);
HXDLIN( 189)				int i = (_g - 1);
HXLINE( 191)				if ((this->sets->__get(i).StaticCast<  ::flixel::input::actions::FlxActionSet >()->name == Name)) {
HXLINE( 192)					return i;
            				}
            			}
            		}
HXLINE( 194)		return -1;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxActionManager_obj,getSetIndex,return )

::String FlxActionManager_obj::getSetName(int Index){
            	HX_STACKFRAME(&_hx_pos_55e4e352cde6aeec_203_getSetName)
HXLINE( 204)		bool _hx_tmp;
HXDLIN( 204)		if ((Index >= 0)) {
HXLINE( 204)			_hx_tmp = (Index < this->sets->length);
            		}
            		else {
HXLINE( 204)			_hx_tmp = false;
            		}
HXDLIN( 204)		if (_hx_tmp) {
HXLINE( 205)			return this->sets->__get(Index).StaticCast<  ::flixel::input::actions::FlxActionSet >()->name;
            		}
HXLINE( 206)		return HX_("",00,00,00,00);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxActionManager_obj,getSetName,return )

 ::flixel::input::actions::FlxActionSet FlxActionManager_obj::getSet(int Index){
            	HX_STACKFRAME(&_hx_pos_55e4e352cde6aeec_215_getSet)
HXLINE( 216)		bool _hx_tmp;
HXDLIN( 216)		if ((Index >= 0)) {
HXLINE( 216)			_hx_tmp = (Index < this->sets->length);
            		}
            		else {
HXLINE( 216)			_hx_tmp = false;
            		}
HXDLIN( 216)		if (_hx_tmp) {
HXLINE( 217)			return this->sets->__get(Index).StaticCast<  ::flixel::input::actions::FlxActionSet >();
            		}
HXLINE( 218)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxActionManager_obj,getSet,return )

 ::flixel::input::actions::FlxActionSet FlxActionManager_obj::getSetActivatedForDevice( ::flixel::input::actions::FlxInputDevice device,::hx::Null< int >  __o_deviceID){
            		int deviceID = __o_deviceID.Default(-1);
            	HX_STACKFRAME(&_hx_pos_55e4e352cde6aeec_226_getSetActivatedForDevice)
HXLINE( 227)		int id = -1;
HXLINE( 228)		int index = -1;
HXLINE( 230)		switch((int)(device->_hx_getIndex())){
            			case (int)1: {
HXLINE( 235)				index = this->_hx_register->mouseSet;
            			}
            			break;
            			case (int)3: {
HXLINE( 233)				index = this->_hx_register->keyboardSet;
            			}
            			break;
            			case (int)4: {
HXLINE( 237)				switch((int)(deviceID)){
            					case (int)-3: {
HXLINE( 244)						index = -1;
            					}
            					break;
            					case (int)-2: {
HXLINE( 242)						id = ::flixel::FlxG_obj::gamepads->getFirstActiveGamepadID();
            					}
            					break;
            					case (int)-1: {
HXLINE( 239)						index = this->_hx_register->gamepadAllSet;
            					}
            					break;
            					default:{
HXLINE( 246)						if ((this->_hx_register->gamepadAllSet != -1)) {
HXLINE( 247)							index = this->_hx_register->gamepadAllSet;
            						}
            						else {
HXLINE( 249)							id = deviceID;
            						}
            					}
            				}
HXLINE( 251)				bool _hx_tmp;
HXDLIN( 251)				if ((id >= 0)) {
HXLINE( 251)					_hx_tmp = (id < this->_hx_register->gamepadSets->length);
            				}
            				else {
HXLINE( 251)					_hx_tmp = false;
            				}
HXDLIN( 251)				if (_hx_tmp) {
HXLINE( 253)					index = this->_hx_register->gamepadSets->__get(id);
            				}
            			}
            			break;
            			case (int)5: {
HXLINE( 256)				switch((int)(deviceID)){
            					case (int)-3: {
HXLINE( 259)						index = -1;
            					}
            					break;
            					case (int)-1: {
HXLINE( 258)						index = this->_hx_register->steamControllerAllSet;
            					}
            					break;
            					default:{
HXLINE( 261)						if ((this->_hx_register->steamControllerAllSet != -1)) {
HXLINE( 262)							index = this->_hx_register->steamControllerAllSet;
            						}
            						else {
HXLINE( 264)							id = deviceID;
            						}
            					}
            				}
HXLINE( 266)				bool _hx_tmp;
HXDLIN( 266)				if ((id >= 0)) {
HXLINE( 266)					_hx_tmp = (id < this->_hx_register->steamControllerSets->length);
            				}
            				else {
HXLINE( 266)					_hx_tmp = false;
            				}
HXDLIN( 266)				if (_hx_tmp) {
HXLINE( 268)					index = this->_hx_register->steamControllerSets->__get(id);
            				}
            			}
            			break;
            			case (int)9: {
HXLINE( 271)				if ((deviceID == -1)) {
HXLINE( 273)					index = this->_hx_register->gamepadAllSet;
            				}
            			}
            			break;
            			default:{
HXLINE( 276)				index = -1;
            			}
            		}
HXLINE( 279)		bool _hx_tmp;
HXDLIN( 279)		if ((index >= 0)) {
HXLINE( 279)			_hx_tmp = (index < this->sets->length);
            		}
            		else {
HXLINE( 279)			_hx_tmp = false;
            		}
HXDLIN( 279)		if (_hx_tmp) {
HXLINE( 281)			return this->sets->__get(index).StaticCast<  ::flixel::input::actions::FlxActionSet >();
            		}
HXLINE( 284)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxActionManager_obj,getSetActivatedForDevice,return )

int FlxActionManager_obj::initFromJson( ::Dynamic data, ::Dynamic CallbackDigital, ::Dynamic CallbackAnalog){
            	HX_STACKFRAME(&_hx_pos_55e4e352cde6aeec_320_initFromJson)
HXLINE( 321)		if (::hx::IsNull( data )) {
HXLINE( 322)			return 0;
            		}
HXLINE( 324)		int i = 0;
HXLINE( 325)		::Array< ::Dynamic> actionSets = ( (::Array< ::Dynamic>)(data->__Field(HX_("actionSets",67,0d,97,57),::hx::paccDynamic)) );
HXLINE( 326)		if (::hx::IsNull( actionSets )) {
HXLINE( 327)			return 0;
            		}
HXLINE( 329)		{
HXLINE( 329)			int _g = 0;
HXDLIN( 329)			while((_g < actionSets->length)){
HXLINE( 329)				 ::Dynamic set = actionSets->__get(_g);
HXDLIN( 329)				_g = (_g + 1);
HXLINE( 331)				if ((this->addSet(::flixel::input::actions::FlxActionSet_obj::fromJson(set,CallbackDigital,CallbackAnalog)) != -1)) {
HXLINE( 333)					i = (i + 1);
            				}
            			}
            		}
HXLINE( 337)		this->onChange();
HXLINE( 339)		return i;
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxActionManager_obj,initFromJson,return )

::String FlxActionManager_obj::exportToJson(){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(2)
            		 ::Dynamic _hx_run( ::Dynamic key, ::Dynamic value){
            			HX_STACKFRAME(&_hx_pos_55e4e352cde6aeec_347_exportToJson)
HXLINE( 348)			if (::Std_obj::isOfType(value,::hx::ClassOf< ::flixel::input::actions::FlxAction >())) {
HXLINE( 350)				 ::flixel::input::actions::FlxAction fa = ( ( ::flixel::input::actions::FlxAction)(value) );
HXLINE( 351)				return fa->name;
            			}
HXLINE( 353)			if (::Std_obj::isOfType(value,::hx::ClassOf< ::flixel::input::actions::FlxActionSet >())) {
HXLINE( 355)				 ::flixel::input::actions::FlxActionSet fas = ( ( ::flixel::input::actions::FlxActionSet)(value) );
HXLINE( 356)				return  ::Dynamic(::hx::Anon_obj::Create(3)
            					->setFixed(0,HX_("name",4b,72,ff,48),fas->name)
            					->setFixed(1,HX_("analogActions",ad,7b,59,50),fas->analogActions)
            					->setFixed(2,HX_("digitalActions",05,8f,e5,5b),fas->digitalActions));
            			}
HXLINE( 363)			return value;
            		}
            		HX_END_LOCAL_FUNC2(return)

            	HX_STACKFRAME(&_hx_pos_55e4e352cde6aeec_344_exportToJson)
HXLINE( 345)		::String space = HX_("\t",09,00,00,00);
HXLINE( 346)		return ::haxe::format::JsonPrinter_obj::print( ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("actionSets",67,0d,97,57),this->sets)), ::Dynamic(new _hx_Closure_0()),space);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxActionManager_obj,exportToJson,return )

bool FlxActionManager_obj::removeSet( ::flixel::input::actions::FlxActionSet Set,::hx::Null< bool >  __o_Destroy){
            		bool Destroy = __o_Destroy.Default(true);
            	HX_STACKFRAME(&_hx_pos_55e4e352cde6aeec_374_removeSet)
HXLINE( 375)		bool success = this->sets->remove(Set);
HXLINE( 376)		if (success) {
HXLINE( 378)			if (Destroy) {
HXLINE( 379)				::flixel::util::FlxDestroyUtil_obj::destroy(Set);
            			}
HXLINE( 381)			this->onChange();
            		}
HXLINE( 384)		return success;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxActionManager_obj,removeSet,return )

bool FlxActionManager_obj::removeAction( ::flixel::input::actions::FlxAction Action,int ActionSet){
            	HX_STACKFRAME(&_hx_pos_55e4e352cde6aeec_394_removeAction)
HXLINE( 395)		bool success = false;
HXLINE( 397)		bool _hx_tmp;
HXDLIN( 397)		if ((ActionSet >= 0)) {
HXLINE( 397)			_hx_tmp = (ActionSet < this->sets->length);
            		}
            		else {
HXLINE( 397)			_hx_tmp = false;
            		}
HXDLIN( 397)		if (_hx_tmp) {
HXLINE( 399)			success = this->sets->__get(ActionSet).StaticCast<  ::flixel::input::actions::FlxActionSet >()->remove(Action,null());
            		}
HXLINE( 402)		this->onChange();
HXLINE( 404)		return success;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxActionManager_obj,removeAction,return )

void FlxActionManager_obj::reset(){
            	HX_STACKFRAME(&_hx_pos_55e4e352cde6aeec_407_reset)
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxActionManager_obj,reset,(void))

int FlxActionManager_obj::get_numSets(){
            	HX_STACKFRAME(&_hx_pos_55e4e352cde6aeec_411_get_numSets)
HXDLIN( 411)		return this->sets->length;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxActionManager_obj,get_numSets,return )

void FlxActionManager_obj::onChange(){
            	HX_STACKFRAME(&_hx_pos_55e4e352cde6aeec_416_onChange)
HXDLIN( 416)		this->_hx_register->markActiveSets(this->sets);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxActionManager_obj,onChange,(void))

void FlxActionManager_obj::onDeviceConnected( ::flixel::input::gamepad::FlxGamepad gamepad){
            	HX_STACKFRAME(&_hx_pos_55e4e352cde6aeec_421_onDeviceConnected)
HXDLIN( 421)		 ::Dynamic _hx_tmp = this->deviceConnected->dispatch;
HXDLIN( 421)		int gamepad1 = gamepad->id;
HXDLIN( 421)		_hx_tmp(::flixel::input::actions::FlxInputDevice_obj::GAMEPAD_dyn(),gamepad1,::Std_obj::string(gamepad->model).toLowerCase());
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxActionManager_obj,onDeviceConnected,(void))

void FlxActionManager_obj::onDeviceDisconnected( ::flixel::input::gamepad::FlxGamepad gamepad){
            	HX_STACKFRAME(&_hx_pos_55e4e352cde6aeec_426_onDeviceDisconnected)
HXDLIN( 426)		if (::hx::IsNotNull( gamepad )) {
HXLINE( 428)			 ::flixel::input::actions::FlxActionSet actionSet = this->getSetActivatedForDevice(::flixel::input::actions::FlxInputDevice_obj::GAMEPAD_dyn(),gamepad->id);
HXLINE( 429)			bool _hx_tmp;
HXDLIN( 429)			if (::hx::IsNotNull( actionSet )) {
HXLINE( 429)				_hx_tmp = actionSet->active;
            			}
            			else {
HXLINE( 429)				_hx_tmp = false;
            			}
HXDLIN( 429)			if (_hx_tmp) {
HXLINE( 431)				int id = gamepad->id;
HXLINE( 432)				::String model;
HXDLIN( 432)				if (::hx::IsNotNull( gamepad->model )) {
HXLINE( 432)					model = ::Std_obj::string(gamepad->model).toLowerCase();
            				}
            				else {
HXLINE( 432)					model = HX_("",00,00,00,00);
            				}
HXLINE( 433)				this->deviceDisconnected->dispatch(::flixel::input::actions::FlxInputDevice_obj::GAMEPAD_dyn(),id,model);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxActionManager_obj,onDeviceDisconnected,(void))

void FlxActionManager_obj::onFocus(){
            	HX_STACKFRAME(&_hx_pos_55e4e352cde6aeec_438_onFocus)
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxActionManager_obj,onFocus,(void))

void FlxActionManager_obj::onFocusLost(){
            	HX_STACKFRAME(&_hx_pos_55e4e352cde6aeec_440_onFocusLost)
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxActionManager_obj,onFocusLost,(void))

void FlxActionManager_obj::onStateSwitched(){
            	HX_STACKFRAME(&_hx_pos_55e4e352cde6aeec_444_onStateSwitched)
HXDLIN( 444)		switch((int)(this->resetOnStateSwitch->_hx_getIndex())){
            			case (int)1: {
HXLINE( 453)				while((this->sets->length > 0)){
HXLINE( 455)					this->removeSet(this->getSet(0),true);
            				}
HXLINE( 457)				this->defaultSet = null();
            			}
            			break;
            			case (int)2: {
HXLINE( 447)				if (::hx::IsNotNull( this->defaultSet )) {
HXLINE( 449)					this->removeSet(this->defaultSet,true);
            				}
HXLINE( 451)				this->defaultSet = null();
            			}
            			break;
            			default:{
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxActionManager_obj,onStateSwitched,(void))

void FlxActionManager_obj::onSteamConnected(int handle){
            	HX_STACKFRAME(&_hx_pos_55e4e352cde6aeec_464_onSteamConnected)
HXLINE( 465)		int allSetIndex = this->_hx_register->steamControllerAllSet;
HXLINE( 467)		if ((allSetIndex != -1)) {
HXLINE( 469)			this->activateSet(allSetIndex,::flixel::input::actions::FlxInputDevice_obj::STEAM_CONTROLLER_dyn(),-1);
            		}
            		else {
HXLINE( 473)			 ::flixel::input::actions::FlxActionSet actionSet = this->getSetActivatedForDevice(::flixel::input::actions::FlxInputDevice_obj::STEAM_CONTROLLER_dyn(),handle);
HXLINE( 474)			bool _hx_tmp;
HXDLIN( 474)			if (::hx::IsNotNull( actionSet )) {
HXLINE( 474)				_hx_tmp = actionSet->active;
            			}
            			else {
HXLINE( 474)				_hx_tmp = false;
            			}
HXDLIN( 474)			if (_hx_tmp) {
HXLINE( 476)				this->activateSet(this->getSetIndex(actionSet->name),::flixel::input::actions::FlxInputDevice_obj::STEAM_CONTROLLER_dyn(),handle);
            			}
            		}
HXLINE( 480)		this->deviceConnected->dispatch(::flixel::input::actions::FlxInputDevice_obj::STEAM_CONTROLLER_dyn(),handle,HX_("",00,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxActionManager_obj,onSteamConnected,(void))

void FlxActionManager_obj::onSteamDisconnected(int handle){
            	HX_STACKFRAME(&_hx_pos_55e4e352cde6aeec_485_onSteamDisconnected)
HXDLIN( 485)		if ((handle >= 0)) {
HXLINE( 487)			 ::flixel::input::actions::FlxActionSet actionSet = this->getSetActivatedForDevice(::flixel::input::actions::FlxInputDevice_obj::STEAM_CONTROLLER_dyn(),handle);
HXLINE( 488)			bool _hx_tmp;
HXDLIN( 488)			if (::hx::IsNotNull( actionSet )) {
HXLINE( 488)				_hx_tmp = actionSet->active;
            			}
            			else {
HXLINE( 488)				_hx_tmp = false;
            			}
HXDLIN( 488)			if (_hx_tmp) {
HXLINE( 490)				this->deviceDisconnected->dispatch(::flixel::input::actions::FlxInputDevice_obj::STEAM_CONTROLLER_dyn(),handle,HX_("",00,00,00,00));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxActionManager_obj,onSteamDisconnected,(void))

void FlxActionManager_obj::updateSteamControllers(){
            	HX_STACKFRAME(&_hx_pos_55e4e352cde6aeec_497_updateSteamControllers)
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxActionManager_obj,updateSteamControllers,(void))

void FlxActionManager_obj::updateSteamOrigins(){
            	HX_STACKFRAME(&_hx_pos_55e4e352cde6aeec_514_updateSteamOrigins)
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxActionManager_obj,updateSteamOrigins,(void))

void FlxActionManager_obj::update(){
            	HX_STACKFRAME(&_hx_pos_55e4e352cde6aeec_526_update)
HXDLIN( 526)		this->_hx_register->update(this->sets);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxActionManager_obj,update,(void))


::hx::ObjectPtr< FlxActionManager_obj > FlxActionManager_obj::__new() {
	::hx::ObjectPtr< FlxActionManager_obj > __this = new FlxActionManager_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< FlxActionManager_obj > FlxActionManager_obj::__alloc(::hx::Ctx *_hx_ctx) {
	FlxActionManager_obj *__this = (FlxActionManager_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxActionManager_obj), true, "flixel.input.actions.FlxActionManager"));
	*(void **)__this = FlxActionManager_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FlxActionManager_obj::FlxActionManager_obj()
{
}

void FlxActionManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxActionManager);
	HX_MARK_MEMBER_NAME(sets,"sets");
	HX_MARK_MEMBER_NAME(_hx_register,"register");
	HX_MARK_MEMBER_NAME(defaultSet,"defaultSet");
	HX_MARK_MEMBER_NAME(deviceDisconnected,"deviceDisconnected");
	HX_MARK_MEMBER_NAME(deviceConnected,"deviceConnected");
	HX_MARK_MEMBER_NAME(inputsChanged,"inputsChanged");
	HX_MARK_MEMBER_NAME(resetOnStateSwitch,"resetOnStateSwitch");
	HX_MARK_END_CLASS();
}

void FlxActionManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(sets,"sets");
	HX_VISIT_MEMBER_NAME(_hx_register,"register");
	HX_VISIT_MEMBER_NAME(defaultSet,"defaultSet");
	HX_VISIT_MEMBER_NAME(deviceDisconnected,"deviceDisconnected");
	HX_VISIT_MEMBER_NAME(deviceConnected,"deviceConnected");
	HX_VISIT_MEMBER_NAME(inputsChanged,"inputsChanged");
	HX_VISIT_MEMBER_NAME(resetOnStateSwitch,"resetOnStateSwitch");
}

::hx::Val FlxActionManager_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"sets") ) { return ::hx::Val( sets ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return ::hx::Val( reset_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"addSet") ) { return ::hx::Val( addSet_dyn() ); }
		if (HX_FIELD_EQ(inName,"getSet") ) { return ::hx::Val( getSet_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"numSets") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_numSets() ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		if (HX_FIELD_EQ(inName,"onFocus") ) { return ::hx::Val( onFocus_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"register") ) { return ::hx::Val( _hx_register ); }
		if (HX_FIELD_EQ(inName,"onChange") ) { return ::hx::Val( onChange_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"addAction") ) { return ::hx::Val( addAction_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeSet") ) { return ::hx::Val( removeSet_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"defaultSet") ) { return ::hx::Val( defaultSet ); }
		if (HX_FIELD_EQ(inName,"addActions") ) { return ::hx::Val( addActions_dyn() ); }
		if (HX_FIELD_EQ(inName,"getSetName") ) { return ::hx::Val( getSetName_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"activateSet") ) { return ::hx::Val( activateSet_dyn() ); }
		if (HX_FIELD_EQ(inName,"getSetIndex") ) { return ::hx::Val( getSetIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_numSets") ) { return ::hx::Val( get_numSets_dyn() ); }
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return ::hx::Val( onFocusLost_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"initFromJson") ) { return ::hx::Val( initFromJson_dyn() ); }
		if (HX_FIELD_EQ(inName,"exportToJson") ) { return ::hx::Val( exportToJson_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeAction") ) { return ::hx::Val( removeAction_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"inputsChanged") ) { return ::hx::Val( inputsChanged ); }
		if (HX_FIELD_EQ(inName,"deactivateSet") ) { return ::hx::Val( deactivateSet_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"deviceConnected") ) { return ::hx::Val( deviceConnected ); }
		if (HX_FIELD_EQ(inName,"onStateSwitched") ) { return ::hx::Val( onStateSwitched_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"onSteamConnected") ) { return ::hx::Val( onSteamConnected_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"onDeviceConnected") ) { return ::hx::Val( onDeviceConnected_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"deviceDisconnected") ) { return ::hx::Val( deviceDisconnected ); }
		if (HX_FIELD_EQ(inName,"resetOnStateSwitch") ) { return ::hx::Val( resetOnStateSwitch ); }
		if (HX_FIELD_EQ(inName,"updateSteamOrigins") ) { return ::hx::Val( updateSteamOrigins_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"onSteamDisconnected") ) { return ::hx::Val( onSteamDisconnected_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"onDeviceDisconnected") ) { return ::hx::Val( onDeviceDisconnected_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"updateSteamControllers") ) { return ::hx::Val( updateSteamControllers_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"getSetActivatedForDevice") ) { return ::hx::Val( getSetActivatedForDevice_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxActionManager_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"sets") ) { sets=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"register") ) { _hx_register=inValue.Cast<  ::flixel::input::actions::_FlxActionManager::ActionSetRegister >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"defaultSet") ) { defaultSet=inValue.Cast<  ::flixel::input::actions::FlxActionSet >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"inputsChanged") ) { inputsChanged=inValue.Cast<  ::flixel::util::_FlxSignal::FlxSignal1 >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"deviceConnected") ) { deviceConnected=inValue.Cast<  ::flixel::util::_FlxSignal::FlxSignal3 >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"deviceDisconnected") ) { deviceDisconnected=inValue.Cast<  ::flixel::util::_FlxSignal::FlxSignal3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"resetOnStateSwitch") ) { resetOnStateSwitch=inValue.Cast<  ::flixel::input::actions::ResetPolicy >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxActionManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("sets",91,92,50,4c));
	outFields->push(HX_("register",63,a6,9f,d0));
	outFields->push(HX_("defaultSet",61,a9,04,26));
	outFields->push(HX_("numSets",f7,37,d1,9f));
	outFields->push(HX_("deviceDisconnected",71,3d,19,e9));
	outFields->push(HX_("deviceConnected",53,a3,18,17));
	outFields->push(HX_("inputsChanged",cb,fa,b6,00));
	outFields->push(HX_("resetOnStateSwitch",b7,84,01,3e));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxActionManager_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(FlxActionManager_obj,sets),HX_("sets",91,92,50,4c)},
	{::hx::fsObject /*  ::flixel::input::actions::_FlxActionManager::ActionSetRegister */ ,(int)offsetof(FlxActionManager_obj,_hx_register),HX_("register",63,a6,9f,d0)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionSet */ ,(int)offsetof(FlxActionManager_obj,defaultSet),HX_("defaultSet",61,a9,04,26)},
	{::hx::fsObject /*  ::flixel::util::_FlxSignal::FlxSignal3 */ ,(int)offsetof(FlxActionManager_obj,deviceDisconnected),HX_("deviceDisconnected",71,3d,19,e9)},
	{::hx::fsObject /*  ::flixel::util::_FlxSignal::FlxSignal3 */ ,(int)offsetof(FlxActionManager_obj,deviceConnected),HX_("deviceConnected",53,a3,18,17)},
	{::hx::fsObject /*  ::flixel::util::_FlxSignal::FlxSignal1 */ ,(int)offsetof(FlxActionManager_obj,inputsChanged),HX_("inputsChanged",cb,fa,b6,00)},
	{::hx::fsObject /*  ::flixel::input::actions::ResetPolicy */ ,(int)offsetof(FlxActionManager_obj,resetOnStateSwitch),HX_("resetOnStateSwitch",b7,84,01,3e)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxActionManager_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxActionManager_obj_sMemberFields[] = {
	HX_("sets",91,92,50,4c),
	HX_("register",63,a6,9f,d0),
	HX_("defaultSet",61,a9,04,26),
	HX_("deviceDisconnected",71,3d,19,e9),
	HX_("deviceConnected",53,a3,18,17),
	HX_("inputsChanged",cb,fa,b6,00),
	HX_("resetOnStateSwitch",b7,84,01,3e),
	HX_("activateSet",af,49,27,3d),
	HX_("addActions",dc,2f,b8,ce),
	HX_("addAction",b7,70,6a,ce),
	HX_("addSet",01,ac,08,9f),
	HX_("deactivateSet",ce,8f,de,6c),
	HX_("destroy",fa,2c,86,24),
	HX_("getSetIndex",c6,c6,3c,f2),
	HX_("getSetName",17,39,e5,5d),
	HX_("getSet",ac,d4,26,a3),
	HX_("getSetActivatedForDevice",ba,a4,cc,d9),
	HX_("initFromJson",e2,97,ea,48),
	HX_("exportToJson",d7,41,f0,f0),
	HX_("removeSet",be,b9,f2,ca),
	HX_("removeAction",1a,d7,73,85),
	HX_("reset",cf,49,c8,e6),
	HX_("get_numSets",0e,98,cb,25),
	HX_("onChange",ef,87,1f,97),
	HX_("onDeviceConnected",f4,64,0e,d6),
	HX_("onDeviceDisconnected",70,76,dd,2d),
	HX_("onFocus",39,fe,c6,9a),
	HX_("onFocusLost",bd,e4,85,41),
	HX_("onStateSwitched",e5,99,86,be),
	HX_("onSteamConnected",98,0f,b7,04),
	HX_("onSteamDisconnected",4c,0a,e2,62),
	HX_("updateSteamControllers",d0,47,32,33),
	HX_("updateSteamOrigins",c6,76,6f,ae),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class FlxActionManager_obj::__mClass;

void FlxActionManager_obj::__register()
{
	FlxActionManager_obj _hx_dummy;
	FlxActionManager_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.input.actions.FlxActionManager",ec,83,28,96);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxActionManager_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxActionManager_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxActionManager_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxActionManager_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace input
} // end namespace actions
