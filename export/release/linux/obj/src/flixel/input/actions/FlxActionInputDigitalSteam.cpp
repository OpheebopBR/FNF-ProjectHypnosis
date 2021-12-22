#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
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
#ifndef INCLUDED_flixel_input_actions_FlxActionInputDigitalSteam
#include <flixel/input/actions/FlxActionInputDigitalSteam.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxInputDevice
#include <flixel/input/actions/FlxInputDevice.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxSteamController
#include <flixel/input/actions/FlxSteamController.h>
#endif
#ifndef INCLUDED_flixel_input_actions__FlxSteamController_DigitalActionData
#include <flixel/input/actions/_FlxSteamController/DigitalActionData.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_90d9fb36f8ba61ec_271_new,"flixel.input.actions.FlxActionInputDigitalSteam","new",0xd8c8ba73,"flixel.input.actions.FlxActionInputDigitalSteam.new","flixel/input/actions/FlxActionInputDigital.hx",271,0x47a4ecd2)
HX_LOCAL_STACK_FRAME(_hx_pos_90d9fb36f8ba61ec_281_check,"flixel.input.actions.FlxActionInputDigitalSteam","check",0xd4c86d9b,"flixel.input.actions.FlxActionInputDigitalSteam.check","flixel/input/actions/FlxActionInputDigital.hx",281,0x47a4ecd2)
HX_LOCAL_STACK_FRAME(_hx_pos_90d9fb36f8ba61ec_292_update,"flixel.input.actions.FlxActionInputDigitalSteam","update",0x278de9d6,"flixel.input.actions.FlxActionInputDigitalSteam.update","flixel/input/actions/FlxActionInputDigital.hx",292,0x47a4ecd2)
HX_LOCAL_STACK_FRAME(_hx_pos_90d9fb36f8ba61ec_299_getSteamControllerData,"flixel.input.actions.FlxActionInputDigitalSteam","getSteamControllerData",0x2ad0f26d,"flixel.input.actions.FlxActionInputDigitalSteam.getSteamControllerData","flixel/input/actions/FlxActionInputDigital.hx",299,0x47a4ecd2)
namespace flixel{
namespace input{
namespace actions{

void FlxActionInputDigitalSteam_obj::__construct(int ActionHandle,int Trigger, ::Dynamic __o_DeviceHandle){
            		 ::Dynamic DeviceHandle = __o_DeviceHandle;
            		if (::hx::IsNull(__o_DeviceHandle)) DeviceHandle = -2;
            	HX_STACKFRAME(&_hx_pos_90d9fb36f8ba61ec_271_new)
HXDLIN( 271)		super::__construct(::flixel::input::actions::FlxInputDevice_obj::STEAM_CONTROLLER_dyn(),ActionHandle,Trigger,DeviceHandle);
            	}

Dynamic FlxActionInputDigitalSteam_obj::__CreateEmpty() { return new FlxActionInputDigitalSteam_obj; }

void *FlxActionInputDigitalSteam_obj::_hx_vtable = 0;

Dynamic FlxActionInputDigitalSteam_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxActionInputDigitalSteam_obj > _hx_result = new FlxActionInputDigitalSteam_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool FlxActionInputDigitalSteam_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1600da07) {
		if (inClassId<=(int)0x0ecc656d) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0ecc656d;
		} else {
			return inClassId==(int)0x1600da07;
		}
	} else {
		return inClassId==(int)0x20308a99;
	}
}

bool FlxActionInputDigitalSteam_obj::check( ::flixel::input::actions::FlxAction Action){
            	HX_STACKFRAME(&_hx_pos_90d9fb36f8ba61ec_281_check)
HXDLIN( 281)		switch((int)(this->trigger)){
            			case (int)-1: {
HXLINE( 286)				return (this->steamInput->current == -1);
            			}
            			break;
            			case (int)0: {
HXLINE( 284)				 ::flixel::input::FlxInput _this = this->steamInput;
HXDLIN( 284)				bool _hx_tmp;
HXDLIN( 284)				if ((_this->current != 0)) {
HXLINE( 284)					_hx_tmp = (_this->current == -1);
            				}
            				else {
HXLINE( 284)					_hx_tmp = true;
            				}
HXDLIN( 284)				if (_hx_tmp) {
HXLINE( 284)					return (this->steamInput->current == -1);
            				}
            				else {
HXLINE( 284)					return true;
            				}
            			}
            			break;
            			case (int)1: {
HXLINE( 283)				 ::flixel::input::FlxInput _this = this->steamInput;
HXDLIN( 283)				bool _hx_tmp;
HXDLIN( 283)				if ((_this->current != 1)) {
HXLINE( 283)					_hx_tmp = (_this->current == 2);
            				}
            				else {
HXLINE( 283)					_hx_tmp = true;
            				}
HXDLIN( 283)				if (!(_hx_tmp)) {
HXLINE( 283)					return (this->steamInput->current == 2);
            				}
            				else {
HXLINE( 283)					return true;
            				}
            			}
            			break;
            			case (int)2: {
HXLINE( 285)				return (this->steamInput->current == 2);
            			}
            			break;
            		}
HXLINE( 281)		return false;
            	}


void FlxActionInputDigitalSteam_obj::update(){
            	HX_STACKFRAME(&_hx_pos_90d9fb36f8ba61ec_292_update)
HXDLIN( 292)		int controllerHandle = this->deviceID;
HXDLIN( 292)		if ((controllerHandle == -2)) {
HXDLIN( 292)			controllerHandle = ::flixel::input::actions::FlxSteamController_obj::getFirstActiveHandle();
            		}
HXDLIN( 292)		 ::flixel::input::actions::_FlxSteamController::DigitalActionData data = ::flixel::input::actions::FlxSteamController_obj::getDigitalActionData(controllerHandle,this->inputID);
HXDLIN( 292)		bool _hx_tmp;
HXDLIN( 292)		if (data->bActive) {
HXDLIN( 292)			_hx_tmp = data->bState;
            		}
            		else {
HXDLIN( 292)			_hx_tmp = false;
            		}
HXDLIN( 292)		if (_hx_tmp) {
HXLINE( 293)			this->steamInput->press();
            		}
            		else {
HXLINE( 295)			this->steamInput->release();
            		}
            	}


bool FlxActionInputDigitalSteam_obj::getSteamControllerData(int controllerHandle){
            	HX_STACKFRAME(&_hx_pos_90d9fb36f8ba61ec_299_getSteamControllerData)
HXLINE( 300)		if ((controllerHandle == -2)) {
HXLINE( 302)			controllerHandle = ::flixel::input::actions::FlxSteamController_obj::getFirstActiveHandle();
            		}
HXLINE( 305)		 ::flixel::input::actions::_FlxSteamController::DigitalActionData data = ::flixel::input::actions::FlxSteamController_obj::getDigitalActionData(controllerHandle,this->inputID);
HXLINE( 307)		if (data->bActive) {
HXLINE( 307)			return data->bState;
            		}
            		else {
HXLINE( 307)			return false;
            		}
HXDLIN( 307)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxActionInputDigitalSteam_obj,getSteamControllerData,return )


::hx::ObjectPtr< FlxActionInputDigitalSteam_obj > FlxActionInputDigitalSteam_obj::__new(int ActionHandle,int Trigger, ::Dynamic __o_DeviceHandle) {
	::hx::ObjectPtr< FlxActionInputDigitalSteam_obj > __this = new FlxActionInputDigitalSteam_obj();
	__this->__construct(ActionHandle,Trigger,__o_DeviceHandle);
	return __this;
}

::hx::ObjectPtr< FlxActionInputDigitalSteam_obj > FlxActionInputDigitalSteam_obj::__alloc(::hx::Ctx *_hx_ctx,int ActionHandle,int Trigger, ::Dynamic __o_DeviceHandle) {
	FlxActionInputDigitalSteam_obj *__this = (FlxActionInputDigitalSteam_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxActionInputDigitalSteam_obj), true, "flixel.input.actions.FlxActionInputDigitalSteam"));
	*(void **)__this = FlxActionInputDigitalSteam_obj::_hx_vtable;
	__this->__construct(ActionHandle,Trigger,__o_DeviceHandle);
	return __this;
}

FlxActionInputDigitalSteam_obj::FlxActionInputDigitalSteam_obj()
{
}

void FlxActionInputDigitalSteam_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxActionInputDigitalSteam);
	HX_MARK_MEMBER_NAME(steamInput,"steamInput");
	 ::flixel::input::actions::FlxActionInput_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxActionInputDigitalSteam_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(steamInput,"steamInput");
	 ::flixel::input::actions::FlxActionInput_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxActionInputDigitalSteam_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"check") ) { return ::hx::Val( check_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"steamInput") ) { return ::hx::Val( steamInput ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"getSteamControllerData") ) { return ::hx::Val( getSteamControllerData_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxActionInputDigitalSteam_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"steamInput") ) { steamInput=inValue.Cast<  ::flixel::input::FlxInput >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxActionInputDigitalSteam_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("steamInput",5a,fb,91,2f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxActionInputDigitalSteam_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::input::FlxInput */ ,(int)offsetof(FlxActionInputDigitalSteam_obj,steamInput),HX_("steamInput",5a,fb,91,2f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxActionInputDigitalSteam_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxActionInputDigitalSteam_obj_sMemberFields[] = {
	HX_("steamInput",5a,fb,91,2f),
	HX_("check",c8,98,b6,45),
	HX_("update",09,86,05,87),
	HX_("getSteamControllerData",a0,64,d3,d2),
	::String(null()) };

::hx::Class FlxActionInputDigitalSteam_obj::__mClass;

void FlxActionInputDigitalSteam_obj::__register()
{
	FlxActionInputDigitalSteam_obj _hx_dummy;
	FlxActionInputDigitalSteam_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.input.actions.FlxActionInputDigitalSteam",01,05,c0,45);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxActionInputDigitalSteam_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxActionInputDigitalSteam_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxActionInputDigitalSteam_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxActionInputDigitalSteam_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace input
} // end namespace actions
