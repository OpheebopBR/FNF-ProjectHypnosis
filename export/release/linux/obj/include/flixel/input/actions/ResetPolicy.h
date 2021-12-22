#ifndef INCLUDED_flixel_input_actions_ResetPolicy
#define INCLUDED_flixel_input_actions_ResetPolicy

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,input,actions,ResetPolicy)
namespace flixel{
namespace input{
namespace actions{


class ResetPolicy_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef ResetPolicy_obj OBJ_;

	public:
		ResetPolicy_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("flixel.input.actions.ResetPolicy",1a,a2,1d,33); }
		::String __ToString() const { return HX_("ResetPolicy.",0d,2a,eb,41) + _hx_tag; }

		static ::flixel::input::actions::ResetPolicy ALL_SETS;
		static inline ::flixel::input::actions::ResetPolicy ALL_SETS_dyn() { return ALL_SETS; }
		static ::flixel::input::actions::ResetPolicy DEFAULT_SET_ONLY;
		static inline ::flixel::input::actions::ResetPolicy DEFAULT_SET_ONLY_dyn() { return DEFAULT_SET_ONLY; }
		static ::flixel::input::actions::ResetPolicy NONE;
		static inline ::flixel::input::actions::ResetPolicy NONE_dyn() { return NONE; }
};

} // end namespace flixel
} // end namespace input
} // end namespace actions

#endif /* INCLUDED_flixel_input_actions_ResetPolicy */ 
