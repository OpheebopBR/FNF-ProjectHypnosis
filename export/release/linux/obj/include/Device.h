#ifndef INCLUDED_Device
#define INCLUDED_Device

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Device)


class Device_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef Device_obj OBJ_;

	public:
		Device_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("Device",b6,50,0c,a6); }
		::String __ToString() const { return HX_("Device.",b8,4e,ba,a4) + _hx_tag; }

		static ::Device Gamepad(int id);
		static ::Dynamic Gamepad_dyn();
		static ::Device Keys;
		static inline ::Device Keys_dyn() { return Keys; }
};


#endif /* INCLUDED_Device */ 
