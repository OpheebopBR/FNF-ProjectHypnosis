#include <hxcpp.h>

#ifndef INCLUDED_flixel_addons_ui_SortMethod
#include <flixel/addons/ui/SortMethod.h>
#endif
namespace flixel{
namespace addons{
namespace ui{

::flixel::addons::ui::SortMethod SortMethod_obj::ID;

::flixel::addons::ui::SortMethod SortMethod_obj::XY;

bool SortMethod_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("ID",db,3f,00,00)) { outValue = SortMethod_obj::ID; return true; }
	if (inName==HX_("XY",01,4d,00,00)) { outValue = SortMethod_obj::XY; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(SortMethod_obj)

int SortMethod_obj::__FindIndex(::String inName)
{
	if (inName==HX_("ID",db,3f,00,00)) return 1;
	if (inName==HX_("XY",01,4d,00,00)) return 0;
	return super::__FindIndex(inName);
}

int SortMethod_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("ID",db,3f,00,00)) return 0;
	if (inName==HX_("XY",01,4d,00,00)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val SortMethod_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("ID",db,3f,00,00)) return ID;
	if (inName==HX_("XY",01,4d,00,00)) return XY;
	return super::__Field(inName,inCallProp);
}

static ::String SortMethod_obj_sStaticFields[] = {
	HX_("XY",01,4d,00,00),
	HX_("ID",db,3f,00,00),
	::String(null())
};

::hx::Class SortMethod_obj::__mClass;

Dynamic __Create_SortMethod_obj() { return new SortMethod_obj; }

void SortMethod_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("flixel.addons.ui.SortMethod",70,bd,f0,6c), ::hx::TCanCast< SortMethod_obj >,SortMethod_obj_sStaticFields,0,
	&__Create_SortMethod_obj, &__Create,
	&super::__SGetClass(), &CreateSortMethod_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &SortMethod_obj::__GetStatic;
}

void SortMethod_obj::__boot()
{
ID = ::hx::CreateConstEnum< SortMethod_obj >(HX_("ID",db,3f,00,00),1);
XY = ::hx::CreateConstEnum< SortMethod_obj >(HX_("XY",01,4d,00,00),0);
}


} // end namespace flixel
} // end namespace addons
} // end namespace ui
