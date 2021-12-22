#ifndef INCLUDED_Control
#define INCLUDED_Control

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Control)


class Control_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef Control_obj OBJ_;

	public:
		Control_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("Control",3d,93,d2,e6); }
		::String __ToString() const { return HX_("Control.",51,42,6e,11) + _hx_tag; }

		static ::Control ACCEPT;
		static inline ::Control ACCEPT_dyn() { return ACCEPT; }
		static ::Control BACK;
		static inline ::Control BACK_dyn() { return BACK; }
		static ::Control NOTE_DOWN;
		static inline ::Control NOTE_DOWN_dyn() { return NOTE_DOWN; }
		static ::Control NOTE_LEFT;
		static inline ::Control NOTE_LEFT_dyn() { return NOTE_LEFT; }
		static ::Control NOTE_RIGHT;
		static inline ::Control NOTE_RIGHT_dyn() { return NOTE_RIGHT; }
		static ::Control NOTE_UP;
		static inline ::Control NOTE_UP_dyn() { return NOTE_UP; }
		static ::Control PAUSE;
		static inline ::Control PAUSE_dyn() { return PAUSE; }
		static ::Control RESET;
		static inline ::Control RESET_dyn() { return RESET; }
		static ::Control UI_DOWN;
		static inline ::Control UI_DOWN_dyn() { return UI_DOWN; }
		static ::Control UI_LEFT;
		static inline ::Control UI_LEFT_dyn() { return UI_LEFT; }
		static ::Control UI_RIGHT;
		static inline ::Control UI_RIGHT_dyn() { return UI_RIGHT; }
		static ::Control UI_UP;
		static inline ::Control UI_UP_dyn() { return UI_UP; }
};


#endif /* INCLUDED_Control */ 
