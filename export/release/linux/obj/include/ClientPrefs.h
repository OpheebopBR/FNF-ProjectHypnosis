#ifndef INCLUDED_ClientPrefs
#define INCLUDED_ClientPrefs

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(ClientPrefs)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)



class HXCPP_CLASS_ATTRIBUTES ClientPrefs_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ClientPrefs_obj OBJ_;
		ClientPrefs_obj();

	public:
		enum { _hx_ClassId = 0x3ddb9b05 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="ClientPrefs")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"ClientPrefs"); }

		inline static ::hx::ObjectPtr< ClientPrefs_obj > __new() {
			::hx::ObjectPtr< ClientPrefs_obj > __this = new ClientPrefs_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< ClientPrefs_obj > __alloc(::hx::Ctx *_hx_ctx) {
			ClientPrefs_obj *__this = (ClientPrefs_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ClientPrefs_obj), false, "ClientPrefs"));
			*(void **)__this = ClientPrefs_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ClientPrefs_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ClientPrefs",c5,55,e0,8a); }

		static void __boot();
		static bool downScroll;
		static bool middleScroll;
		static bool showFPS;
		static bool flashing;
		static bool globalAntialiasing;
		static bool noteSplashes;
		static bool lowQuality;
		static int framerate;
		static bool maxOptimization;
		static Float underlay;
		static bool cursing;
		static bool violence;
		static bool camZooms;
		static bool foreverInfo;
		static ::String infoTextBorder;
		static bool osuRatings;
		static ::String uiSkin;
		static bool hideHud;
		static int noteOffset;
		static ::Array< ::Dynamic> arrowHSV;
		static bool imagesPersist;
		static bool ghostTapping;
		static ::String timeBarType;
		static bool scoreZoom;
		static bool noReset;
		static Float healthBarAlpha;
		static bool controllerMode;
		static  ::haxe::ds::StringMap gameplaySettings;
		static ::Array< int > comboOffset;
		static bool keSustains;
		static int ratingOffset;
		static int sickWindow;
		static int goodWindow;
		static int badWindow;
		static Float safeFrames;
		static  ::haxe::ds::StringMap keyBinds;
		static  ::haxe::ds::StringMap defaultKeys;
		static  ::haxe::ds::StringMap controllerBinds;
		static  ::haxe::ds::StringMap controllerDefaultBinds;
		static void loadDefaultKeys();
		static ::Dynamic loadDefaultKeys_dyn();

		static void saveSettings();
		static ::Dynamic saveSettings_dyn();

		static void loadPrefs();
		static ::Dynamic loadPrefs_dyn();

		static  ::Dynamic getGameplaySetting(::String name, ::Dynamic defaultValue);
		static ::Dynamic getGameplaySetting_dyn();

		static void reloadControls();
		static ::Dynamic reloadControls_dyn();

		static ::Array< int > copyKey(::Array< int > arrayToCopy);
		static ::Dynamic copyKey_dyn();

};


#endif /* INCLUDED_ClientPrefs */ 
