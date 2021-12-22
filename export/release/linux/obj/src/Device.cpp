#include <hxcpp.h>

#ifndef INCLUDED_Device
#include <Device.h>
#endif

::Device Device_obj::Gamepad(int id)
{
	return ::hx::CreateEnum< Device_obj >(HX_("Gamepad",81,08,d7,56),1,1)->_hx_init(0,id);
}

::Device Device_obj::Keys;

bool Device_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Gamepad",81,08,d7,56)) { outValue = Device_obj::Gamepad_dyn(); return true; }
	if (inName==HX_("Keys",14,0e,e0,31)) { outValue = Device_obj::Keys; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(Device_obj)

int Device_obj::__FindIndex(::String inName)
{
	if (inName==HX_("Gamepad",81,08,d7,56)) return 1;
	if (inName==HX_("Keys",14,0e,e0,31)) return 0;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Device_obj,Gamepad,return)

int Device_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("Gamepad",81,08,d7,56)) return 1;
	if (inName==HX_("Keys",14,0e,e0,31)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val Device_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Gamepad",81,08,d7,56)) return Gamepad_dyn();
	if (inName==HX_("Keys",14,0e,e0,31)) return Keys;
	return super::__Field(inName,inCallProp);
}

static ::String Device_obj_sStaticFields[] = {
	HX_("Keys",14,0e,e0,31),
	HX_("Gamepad",81,08,d7,56),
	::String(null())
};

::hx::Class Device_obj::__mClass;

Dynamic __Create_Device_obj() { return new Device_obj; }

void Device_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("Device",b6,50,0c,a6), ::hx::TCanCast< Device_obj >,Device_obj_sStaticFields,0,
	&__Create_Device_obj, &__Create,
	&super::__SGetClass(), &CreateDevice_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &Device_obj::__GetStatic;
}

void Device_obj::__boot()
{
Keys = ::hx::CreateConstEnum< Device_obj >(HX_("Keys",14,0e,e0,31),0);
}


