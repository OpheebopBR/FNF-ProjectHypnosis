#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_actions_ResetPolicy
#include <flixel/input/actions/ResetPolicy.h>
#endif
namespace flixel{
namespace input{
namespace actions{

::flixel::input::actions::ResetPolicy ResetPolicy_obj::ALL_SETS;

::flixel::input::actions::ResetPolicy ResetPolicy_obj::DEFAULT_SET_ONLY;

::flixel::input::actions::ResetPolicy ResetPolicy_obj::NONE;

bool ResetPolicy_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("ALL_SETS",cf,1d,70,2b)) { outValue = ResetPolicy_obj::ALL_SETS; return true; }
	if (inName==HX_("DEFAULT_SET_ONLY",27,e9,a0,b6)) { outValue = ResetPolicy_obj::DEFAULT_SET_ONLY; return true; }
	if (inName==HX_("NONE",b8,da,ca,33)) { outValue = ResetPolicy_obj::NONE; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(ResetPolicy_obj)

int ResetPolicy_obj::__FindIndex(::String inName)
{
	if (inName==HX_("ALL_SETS",cf,1d,70,2b)) return 1;
	if (inName==HX_("DEFAULT_SET_ONLY",27,e9,a0,b6)) return 2;
	if (inName==HX_("NONE",b8,da,ca,33)) return 0;
	return super::__FindIndex(inName);
}

int ResetPolicy_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("ALL_SETS",cf,1d,70,2b)) return 0;
	if (inName==HX_("DEFAULT_SET_ONLY",27,e9,a0,b6)) return 0;
	if (inName==HX_("NONE",b8,da,ca,33)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val ResetPolicy_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("ALL_SETS",cf,1d,70,2b)) return ALL_SETS;
	if (inName==HX_("DEFAULT_SET_ONLY",27,e9,a0,b6)) return DEFAULT_SET_ONLY;
	if (inName==HX_("NONE",b8,da,ca,33)) return NONE;
	return super::__Field(inName,inCallProp);
}

static ::String ResetPolicy_obj_sStaticFields[] = {
	HX_("NONE",b8,da,ca,33),
	HX_("ALL_SETS",cf,1d,70,2b),
	HX_("DEFAULT_SET_ONLY",27,e9,a0,b6),
	::String(null())
};

::hx::Class ResetPolicy_obj::__mClass;

Dynamic __Create_ResetPolicy_obj() { return new ResetPolicy_obj; }

void ResetPolicy_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("flixel.input.actions.ResetPolicy",1a,a2,1d,33), ::hx::TCanCast< ResetPolicy_obj >,ResetPolicy_obj_sStaticFields,0,
	&__Create_ResetPolicy_obj, &__Create,
	&super::__SGetClass(), &CreateResetPolicy_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &ResetPolicy_obj::__GetStatic;
}

void ResetPolicy_obj::__boot()
{
ALL_SETS = ::hx::CreateConstEnum< ResetPolicy_obj >(HX_("ALL_SETS",cf,1d,70,2b),1);
DEFAULT_SET_ONLY = ::hx::CreateConstEnum< ResetPolicy_obj >(HX_("DEFAULT_SET_ONLY",27,e9,a0,b6),2);
NONE = ::hx::CreateConstEnum< ResetPolicy_obj >(HX_("NONE",b8,da,ca,33),0);
}


} // end namespace flixel
} // end namespace input
} // end namespace actions
