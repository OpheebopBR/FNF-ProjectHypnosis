#ifndef INCLUDED_flixel_addons_ui_SortMethod
#define INCLUDED_flixel_addons_ui_SortMethod

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,addons,ui,SortMethod)
namespace flixel{
namespace addons{
namespace ui{


class SortMethod_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef SortMethod_obj OBJ_;

	public:
		SortMethod_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("flixel.addons.ui.SortMethod",70,bd,f0,6c); }
		::String __ToString() const { return HX_("SortMethod.",4f,6e,51,f6) + _hx_tag; }

		static ::flixel::addons::ui::SortMethod ID;
		static inline ::flixel::addons::ui::SortMethod ID_dyn() { return ID; }
		static ::flixel::addons::ui::SortMethod XY;
		static inline ::flixel::addons::ui::SortMethod XY_dyn() { return XY; }
};

} // end namespace flixel
} // end namespace addons
} // end namespace ui

#endif /* INCLUDED_flixel_addons_ui_SortMethod */ 
