#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_actions_FlxInputDeviceID
#include <flixel/input/actions/FlxInputDeviceID.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_8815d627a254acc2_118_boot,"flixel.input.actions.FlxInputDeviceID","boot",0x9ec96ab0,"flixel.input.actions.FlxInputDeviceID.boot","flixel/input/actions/FlxActionInput.hx",118,0x5d496a72)
HX_LOCAL_STACK_FRAME(_hx_pos_8815d627a254acc2_123_boot,"flixel.input.actions.FlxInputDeviceID","boot",0x9ec96ab0,"flixel.input.actions.FlxInputDeviceID.boot","flixel/input/actions/FlxActionInput.hx",123,0x5d496a72)
HX_LOCAL_STACK_FRAME(_hx_pos_8815d627a254acc2_128_boot,"flixel.input.actions.FlxInputDeviceID","boot",0x9ec96ab0,"flixel.input.actions.FlxInputDeviceID.boot","flixel/input/actions/FlxActionInput.hx",128,0x5d496a72)
namespace flixel{
namespace input{
namespace actions{

void FlxInputDeviceID_obj::__construct() { }

Dynamic FlxInputDeviceID_obj::__CreateEmpty() { return new FlxInputDeviceID_obj; }

void *FlxInputDeviceID_obj::_hx_vtable = 0;

Dynamic FlxInputDeviceID_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxInputDeviceID_obj > _hx_result = new FlxInputDeviceID_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxInputDeviceID_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x10dfec1c;
}

int FlxInputDeviceID_obj::ALL;

int FlxInputDeviceID_obj::FIRST_ACTIVE;

int FlxInputDeviceID_obj::NONE;


FlxInputDeviceID_obj::FlxInputDeviceID_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FlxInputDeviceID_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo FlxInputDeviceID_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &FlxInputDeviceID_obj::ALL,HX_("ALL",01,95,31,00)},
	{::hx::fsInt,(void *) &FlxInputDeviceID_obj::FIRST_ACTIVE,HX_("FIRST_ACTIVE",55,71,b1,b1)},
	{::hx::fsInt,(void *) &FlxInputDeviceID_obj::NONE,HX_("NONE",b8,da,ca,33)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void FlxInputDeviceID_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxInputDeviceID_obj::ALL,"ALL");
	HX_MARK_MEMBER_NAME(FlxInputDeviceID_obj::FIRST_ACTIVE,"FIRST_ACTIVE");
	HX_MARK_MEMBER_NAME(FlxInputDeviceID_obj::NONE,"NONE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxInputDeviceID_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxInputDeviceID_obj::ALL,"ALL");
	HX_VISIT_MEMBER_NAME(FlxInputDeviceID_obj::FIRST_ACTIVE,"FIRST_ACTIVE");
	HX_VISIT_MEMBER_NAME(FlxInputDeviceID_obj::NONE,"NONE");
};

#endif

::hx::Class FlxInputDeviceID_obj::__mClass;

static ::String FlxInputDeviceID_obj_sStaticFields[] = {
	HX_("ALL",01,95,31,00),
	HX_("FIRST_ACTIVE",55,71,b1,b1),
	HX_("NONE",b8,da,ca,33),
	::String(null())
};

void FlxInputDeviceID_obj::__register()
{
	FlxInputDeviceID_obj _hx_dummy;
	FlxInputDeviceID_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.input.actions.FlxInputDeviceID",b0,0a,ac,bf);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxInputDeviceID_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxInputDeviceID_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< FlxInputDeviceID_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxInputDeviceID_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxInputDeviceID_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxInputDeviceID_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxInputDeviceID_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_8815d627a254acc2_118_boot)
HXDLIN( 118)		ALL = -1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_8815d627a254acc2_123_boot)
HXDLIN( 123)		FIRST_ACTIVE = -2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_8815d627a254acc2_128_boot)
HXDLIN( 128)		NONE = -3;
            	}
}

} // end namespace flixel
} // end namespace input
} // end namespace actions
