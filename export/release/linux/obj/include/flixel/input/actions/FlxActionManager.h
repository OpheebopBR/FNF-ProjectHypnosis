#ifndef INCLUDED_flixel_input_actions_FlxActionManager
#define INCLUDED_flixel_input_actions_FlxActionManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
HX_DECLARE_CLASS2(flixel,input,IFlxInputManager)
HX_DECLARE_CLASS3(flixel,input,actions,FlxAction)
HX_DECLARE_CLASS3(flixel,input,actions,FlxActionAnalog)
HX_DECLARE_CLASS3(flixel,input,actions,FlxActionDigital)
HX_DECLARE_CLASS3(flixel,input,actions,FlxActionManager)
HX_DECLARE_CLASS3(flixel,input,actions,FlxActionSet)
HX_DECLARE_CLASS3(flixel,input,actions,FlxInputDevice)
HX_DECLARE_CLASS3(flixel,input,actions,ResetPolicy)
HX_DECLARE_CLASS4(flixel,input,actions,_FlxActionManager,ActionSetRegister)
HX_DECLARE_CLASS3(flixel,input,gamepad,FlxGamepad)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxSignal)
HX_DECLARE_CLASS3(flixel,util,_FlxSignal,FlxBaseSignal)
HX_DECLARE_CLASS3(flixel,util,_FlxSignal,FlxSignal1)
HX_DECLARE_CLASS3(flixel,util,_FlxSignal,FlxSignal3)

namespace flixel{
namespace input{
namespace actions{


class HXCPP_CLASS_ATTRIBUTES FlxActionManager_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxActionManager_obj OBJ_;
		FlxActionManager_obj();

	public:
		enum { _hx_ClassId = 0x34fe5abc };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.input.actions.FlxActionManager")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.input.actions.FlxActionManager"); }
		static ::hx::ObjectPtr< FlxActionManager_obj > __new();
		static ::hx::ObjectPtr< FlxActionManager_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxActionManager_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("FlxActionManager",a5,09,39,e4); }

		::Array< ::Dynamic> sets;
		 ::flixel::input::actions::_FlxActionManager::ActionSetRegister _hx_register;
		 ::flixel::input::actions::FlxActionSet defaultSet;
		 ::flixel::util::_FlxSignal::FlxSignal3 deviceDisconnected;
		 ::flixel::util::_FlxSignal::FlxSignal3 deviceConnected;
		 ::flixel::util::_FlxSignal::FlxSignal1 inputsChanged;
		 ::flixel::input::actions::ResetPolicy resetOnStateSwitch;
		void activateSet(int ActionSet, ::flixel::input::actions::FlxInputDevice Device,int DeviceID);
		::Dynamic activateSet_dyn();

		bool addActions(::Array< ::Dynamic> Actions,::hx::Null< int >  ActionSet);
		::Dynamic addActions_dyn();

		bool addAction( ::flixel::input::actions::FlxAction Action,::hx::Null< int >  ActionSet);
		::Dynamic addAction_dyn();

		int addSet( ::flixel::input::actions::FlxActionSet set);
		::Dynamic addSet_dyn();

		void deactivateSet(int ActionSet,::hx::Null< int >  DeviceID);
		::Dynamic deactivateSet_dyn();

		void destroy();
		::Dynamic destroy_dyn();

		int getSetIndex(::String Name);
		::Dynamic getSetIndex_dyn();

		::String getSetName(int Index);
		::Dynamic getSetName_dyn();

		 ::flixel::input::actions::FlxActionSet getSet(int Index);
		::Dynamic getSet_dyn();

		 ::flixel::input::actions::FlxActionSet getSetActivatedForDevice( ::flixel::input::actions::FlxInputDevice device,::hx::Null< int >  deviceID);
		::Dynamic getSetActivatedForDevice_dyn();

		int initFromJson( ::Dynamic data, ::Dynamic CallbackDigital, ::Dynamic CallbackAnalog);
		::Dynamic initFromJson_dyn();

		::String exportToJson();
		::Dynamic exportToJson_dyn();

		bool removeSet( ::flixel::input::actions::FlxActionSet Set,::hx::Null< bool >  Destroy);
		::Dynamic removeSet_dyn();

		bool removeAction( ::flixel::input::actions::FlxAction Action,int ActionSet);
		::Dynamic removeAction_dyn();

		void reset();
		::Dynamic reset_dyn();

		int get_numSets();
		::Dynamic get_numSets_dyn();

		void onChange();
		::Dynamic onChange_dyn();

		void onDeviceConnected( ::flixel::input::gamepad::FlxGamepad gamepad);
		::Dynamic onDeviceConnected_dyn();

		void onDeviceDisconnected( ::flixel::input::gamepad::FlxGamepad gamepad);
		::Dynamic onDeviceDisconnected_dyn();

		void onFocus();
		::Dynamic onFocus_dyn();

		void onFocusLost();
		::Dynamic onFocusLost_dyn();

		void onStateSwitched();
		::Dynamic onStateSwitched_dyn();

		void onSteamConnected(int handle);
		::Dynamic onSteamConnected_dyn();

		void onSteamDisconnected(int handle);
		::Dynamic onSteamDisconnected_dyn();

		void updateSteamControllers();
		::Dynamic updateSteamControllers_dyn();

		void updateSteamOrigins();
		::Dynamic updateSteamOrigins_dyn();

		void update();
		::Dynamic update_dyn();

};

} // end namespace flixel
} // end namespace input
} // end namespace actions

#endif /* INCLUDED_flixel_input_actions_FlxActionManager */ 
