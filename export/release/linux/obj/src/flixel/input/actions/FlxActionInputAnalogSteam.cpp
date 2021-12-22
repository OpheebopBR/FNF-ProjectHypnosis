#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_actions_FlxActionInput
#include <flixel/input/actions/FlxActionInput.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionInputAnalog
#include <flixel/input/actions/FlxActionInputAnalog.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionInputAnalogSteam
#include <flixel/input/actions/FlxActionInputAnalogSteam.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxInputDevice
#include <flixel/input/actions/FlxInputDevice.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0eb872effe6b625f_269_new,"flixel.input.actions.FlxActionInputAnalogSteam","new",0xcbc88569,"flixel.input.actions.FlxActionInputAnalogSteam.new","flixel/input/actions/FlxActionInputAnalog.hx",269,0x00ad3122)
HX_LOCAL_STACK_FRAME(_hx_pos_0eb872effe6b625f_276_update,"flixel.input.actions.FlxActionInputAnalogSteam","update",0x05a2dca0,"flixel.input.actions.FlxActionInputAnalogSteam.update","flixel/input/actions/FlxActionInputAnalog.hx",276,0x00ad3122)
namespace flixel{
namespace input{
namespace actions{

void FlxActionInputAnalogSteam_obj::__construct(int ActionHandle,int Trigger,::hx::Null< int >  __o_Axis,::hx::Null< int >  __o_DeviceID){
            		int Axis = __o_Axis.Default(3);
            		int DeviceID = __o_DeviceID.Default(-1);
            	HX_STACKFRAME(&_hx_pos_0eb872effe6b625f_269_new)
HXDLIN( 269)		super::__construct(::flixel::input::actions::FlxInputDevice_obj::STEAM_CONTROLLER_dyn(),ActionHandle,Trigger,Axis,DeviceID);
            	}

Dynamic FlxActionInputAnalogSteam_obj::__CreateEmpty() { return new FlxActionInputAnalogSteam_obj; }

void *FlxActionInputAnalogSteam_obj::_hx_vtable = 0;

Dynamic FlxActionInputAnalogSteam_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxActionInputAnalogSteam_obj > _hx_result = new FlxActionInputAnalogSteam_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool FlxActionInputAnalogSteam_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x7764aa43) {
		if (inClassId<=(int)0x20308a99) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x20308a99;
		} else {
			return inClassId==(int)0x7764aa43;
		}
	} else {
		return inClassId==(int)0x7f995ee1;
	}
}

void FlxActionInputAnalogSteam_obj::update(){
            	HX_STACKFRAME(&_hx_pos_0eb872effe6b625f_276_update)
            	}



::hx::ObjectPtr< FlxActionInputAnalogSteam_obj > FlxActionInputAnalogSteam_obj::__new(int ActionHandle,int Trigger,::hx::Null< int >  __o_Axis,::hx::Null< int >  __o_DeviceID) {
	::hx::ObjectPtr< FlxActionInputAnalogSteam_obj > __this = new FlxActionInputAnalogSteam_obj();
	__this->__construct(ActionHandle,Trigger,__o_Axis,__o_DeviceID);
	return __this;
}

::hx::ObjectPtr< FlxActionInputAnalogSteam_obj > FlxActionInputAnalogSteam_obj::__alloc(::hx::Ctx *_hx_ctx,int ActionHandle,int Trigger,::hx::Null< int >  __o_Axis,::hx::Null< int >  __o_DeviceID) {
	FlxActionInputAnalogSteam_obj *__this = (FlxActionInputAnalogSteam_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxActionInputAnalogSteam_obj), true, "flixel.input.actions.FlxActionInputAnalogSteam"));
	*(void **)__this = FlxActionInputAnalogSteam_obj::_hx_vtable;
	__this->__construct(ActionHandle,Trigger,__o_Axis,__o_DeviceID);
	return __this;
}

FlxActionInputAnalogSteam_obj::FlxActionInputAnalogSteam_obj()
{
}

::hx::Val FlxActionInputAnalogSteam_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FlxActionInputAnalogSteam_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *FlxActionInputAnalogSteam_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxActionInputAnalogSteam_obj_sMemberFields[] = {
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class FlxActionInputAnalogSteam_obj::__mClass;

void FlxActionInputAnalogSteam_obj::__register()
{
	FlxActionInputAnalogSteam_obj _hx_dummy;
	FlxActionInputAnalogSteam_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.input.actions.FlxActionInputAnalogSteam",f7,9c,15,c4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxActionInputAnalogSteam_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxActionInputAnalogSteam_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxActionInputAnalogSteam_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxActionInputAnalogSteam_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace input
} // end namespace actions
