#ifndef INCLUDED_FlxUIDropDownMenuDropDirection
#define INCLUDED_FlxUIDropDownMenuDropDirection

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(FlxUIDropDownMenuDropDirection)


class FlxUIDropDownMenuDropDirection_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef FlxUIDropDownMenuDropDirection_obj OBJ_;

	public:
		FlxUIDropDownMenuDropDirection_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("FlxUIDropDownMenuDropDirection",7a,77,67,00); }
		::String __ToString() const { return HX_("FlxUIDropDownMenuDropDirection.",74,13,21,5a) + _hx_tag; }

		static ::FlxUIDropDownMenuDropDirection Automatic;
		static inline ::FlxUIDropDownMenuDropDirection Automatic_dyn() { return Automatic; }
		static ::FlxUIDropDownMenuDropDirection Down;
		static inline ::FlxUIDropDownMenuDropDirection Down_dyn() { return Down; }
		static ::FlxUIDropDownMenuDropDirection Up;
		static inline ::FlxUIDropDownMenuDropDirection Up_dyn() { return Up; }
};


#endif /* INCLUDED_FlxUIDropDownMenuDropDirection */ 
