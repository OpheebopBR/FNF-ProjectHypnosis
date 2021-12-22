#ifndef INCLUDED_flixel_input_actions__FlxSteamController_FlxSteamUpdater
#define INCLUDED_flixel_input_actions__FlxSteamController_FlxSteamUpdater

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
HX_DECLARE_CLASS2(flixel,input,IFlxInputManager)
HX_DECLARE_CLASS4(flixel,input,actions,_FlxSteamController,FlxSteamUpdater)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace flixel{
namespace input{
namespace actions{
namespace _FlxSteamController{


class HXCPP_CLASS_ATTRIBUTES FlxSteamUpdater_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxSteamUpdater_obj OBJ_;
		FlxSteamUpdater_obj();

	public:
		enum { _hx_ClassId = 0x51c28ac1 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="flixel.input.actions._FlxSteamController.FlxSteamUpdater")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"flixel.input.actions._FlxSteamController.FlxSteamUpdater"); }
		static ::hx::ObjectPtr< FlxSteamUpdater_obj > __new();
		static ::hx::ObjectPtr< FlxSteamUpdater_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxSteamUpdater_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("FlxSteamUpdater",0b,69,76,d6); }

		Float controllerTime;
		Float originTime;
		void destroy();
		::Dynamic destroy_dyn();

		void reset();
		::Dynamic reset_dyn();

		void update();
		::Dynamic update_dyn();

		void onFocus();
		::Dynamic onFocus_dyn();

		void onFocusLost();
		::Dynamic onFocusLost_dyn();

};

} // end namespace flixel
} // end namespace input
} // end namespace actions
} // end namespace _FlxSteamController

#endif /* INCLUDED_flixel_input_actions__FlxSteamController_FlxSteamUpdater */ 
