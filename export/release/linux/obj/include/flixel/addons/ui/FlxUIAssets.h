#ifndef INCLUDED_flixel_addons_ui_FlxUIAssets
#define INCLUDED_flixel_addons_ui_FlxUIAssets

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIAssets)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)

namespace flixel{
namespace addons{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES FlxUIAssets_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxUIAssets_obj OBJ_;
		FlxUIAssets_obj();

	public:
		enum { _hx_ClassId = 0x532e2c46 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="flixel.addons.ui.FlxUIAssets")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"flixel.addons.ui.FlxUIAssets"); }

		inline static ::hx::ObjectPtr< FlxUIAssets_obj > __new() {
			::hx::ObjectPtr< FlxUIAssets_obj > __this = new FlxUIAssets_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< FlxUIAssets_obj > __alloc(::hx::Ctx *_hx_ctx) {
			FlxUIAssets_obj *__this = (FlxUIAssets_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxUIAssets_obj), false, "flixel.addons.ui.FlxUIAssets"));
			*(void **)__this = FlxUIAssets_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxUIAssets_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxUIAssets",49,9c,5b,97); }

		static void __boot();
		static ::String IMG_BUTTON;
		static ::String IMG_BUTTON_ARROW_DOWN;
		static ::String IMG_BUTTON_ARROW_LEFT;
		static ::String IMG_BUTTON_ARROW_RIGHT;
		static ::String IMG_BUTTON_ARROW_UP;
		static ::String IMG_BUTTON_THIN;
		static ::String IMG_BUTTON_TOGGLE;
		static int IMG_BUTTON_SIZE;
		static ::String IMG_CHECK_MARK;
		static ::String IMG_CHECK_BOX;
		static ::String IMG_CHROME;
		static ::String IMG_CHROME_LIGHT;
		static ::String IMG_CHROME_FLAT;
		static ::String IMG_CHROME_INSET;
		static ::String IMG_RADIO;
		static ::String IMG_RADIO_DOT;
		static ::String IMG_TAB;
		static ::String IMG_TAB_BACK;
		static ::String IMG_BOX;
		static ::String IMG_DROPDOWN;
		static ::String IMG_PLUS;
		static ::String IMG_MINUS;
		static ::String IMG_HILIGHT;
		static ::String IMG_INVIS;
		static ::String IMG_SWATCH;
		static ::String IMG_TOOLTIP_ARROW;
		static ::String IMG_FINGER_SMALL;
		static ::String IMG_FINGER_BIG;
		static ::String SLICE9_BUTTON;
		static ::String SLICE9_BUTTON_THIN;
		static ::String SLICE9_BUTTON_TOGGLE;
		static ::String SLICE9_TAB;
		static ::String XML_DEFAULTS_ID;
		static ::String XML_DEFAULT_POPUP_ID;
		static ::String XML_DEFAULT_LOADING_SCREEN_ID;
		static  ::haxe::ds::StringMap index_size;
};

} // end namespace flixel
} // end namespace addons
} // end namespace ui

#endif /* INCLUDED_flixel_addons_ui_FlxUIAssets */ 
