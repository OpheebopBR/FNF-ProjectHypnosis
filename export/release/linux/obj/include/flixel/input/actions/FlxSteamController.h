#ifndef INCLUDED_flixel_input_actions_FlxSteamController
#define INCLUDED_flixel_input_actions_FlxSteamController

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,input,actions,FlxSteamController)
HX_DECLARE_CLASS4(flixel,input,actions,_FlxSteamController,DigitalActionData)
HX_DECLARE_CLASS4(flixel,input,actions,_FlxSteamController,FlxSteamControllerMetadata)

namespace flixel{
namespace input{
namespace actions{


class HXCPP_CLASS_ATTRIBUTES FlxSteamController_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxSteamController_obj OBJ_;
		FlxSteamController_obj();

	public:
		enum { _hx_ClassId = 0x08f7058d };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="flixel.input.actions.FlxSteamController")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"flixel.input.actions.FlxSteamController"); }

		inline static ::hx::ObjectPtr< FlxSteamController_obj > __new() {
			::hx::ObjectPtr< FlxSteamController_obj > __this = new FlxSteamController_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< FlxSteamController_obj > __alloc(::hx::Ctx *_hx_ctx) {
			FlxSteamController_obj *__this = (FlxSteamController_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxSteamController_obj), false, "flixel.input.actions.FlxSteamController"));
			*(void **)__this = FlxSteamController_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxSteamController_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxSteamController",1a,17,7f,71); }

		static void __boot();
		static Float CONTROLLER_CONNECT_POLL_TIME;
		static Float ORIGIN_DATA_POLL_TIME;
		static ::Array< ::Dynamic> controllers;
		static  ::Dynamic onControllerConnect;
		static Dynamic onControllerConnect_dyn() { return onControllerConnect;}
		static  ::Dynamic onOriginUpdate;
		static Dynamic onOriginUpdate_dyn() { return onOriginUpdate;}
		static int get_MAX_CONTROLLERS();
		static ::Dynamic get_MAX_CONTROLLERS_dyn();

		static int get_MAX_ORIGINS();
		static ::Dynamic get_MAX_ORIGINS_dyn();

		static void clear();
		static ::Dynamic clear_dyn();

		static void init();
		static ::Dynamic init_dyn();

		static int getActionSetHandle(::String name);
		static ::Dynamic getActionSetHandle_dyn();

		static int getCurrentActionSet(int SteamControllerHandle);
		static ::Dynamic getCurrentActionSet_dyn();

		static void activateActionSet(int SteamControllerHandle,int ActionSetHandle);
		static ::Dynamic activateActionSet_dyn();

		static int getFirstActiveHandle();
		static ::Dynamic getFirstActiveHandle_dyn();

		static ::Array< int > getConnectedControllers();
		static ::Dynamic getConnectedControllers_dyn();

		static  ::Dynamic getAnalogActionData(int controller,int action, ::Dynamic data);
		static ::Dynamic getAnalogActionData_dyn();

		static  ::flixel::input::actions::_FlxSteamController::DigitalActionData getDigitalActionData(int controller,int action);
		static ::Dynamic getDigitalActionData_dyn();

		static int getAnalogActionHandle(::String name);
		static ::Dynamic getAnalogActionHandle_dyn();

		static int getDigitalActionHandle(::String name);
		static ::Dynamic getDigitalActionHandle_dyn();

};

} // end namespace flixel
} // end namespace input
} // end namespace actions

#endif /* INCLUDED_flixel_input_actions_FlxSteamController */ 
