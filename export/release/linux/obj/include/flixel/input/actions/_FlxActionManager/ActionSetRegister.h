#ifndef INCLUDED_flixel_input_actions__FlxActionManager_ActionSetRegister
#define INCLUDED_flixel_input_actions__FlxActionManager_ActionSetRegister

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
HX_DECLARE_CLASS3(flixel,input,actions,FlxAction)
HX_DECLARE_CLASS3(flixel,input,actions,FlxActionAnalog)
HX_DECLARE_CLASS3(flixel,input,actions,FlxActionDigital)
HX_DECLARE_CLASS3(flixel,input,actions,FlxActionSet)
HX_DECLARE_CLASS3(flixel,input,actions,FlxInputDevice)
HX_DECLARE_CLASS4(flixel,input,actions,_FlxActionManager,ActionSetRegister)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace flixel{
namespace input{
namespace actions{
namespace _FlxActionManager{


class HXCPP_CLASS_ATTRIBUTES ActionSetRegister_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ActionSetRegister_obj OBJ_;
		ActionSetRegister_obj();

	public:
		enum { _hx_ClassId = 0x091fb37a };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.input.actions._FlxActionManager.ActionSetRegister")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.input.actions._FlxActionManager.ActionSetRegister"); }
		static ::hx::ObjectPtr< ActionSetRegister_obj > __new();
		static ::hx::ObjectPtr< ActionSetRegister_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ActionSetRegister_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("ActionSetRegister",ef,5b,8e,06); }

		int mouseSet;
		int keyboardSet;
		int gamepadAllSet;
		int steamControllerAllSet;
		::Array< int > gamepadSets;
		::Array< int > steamControllerSets;
		void destroy();
		::Dynamic destroy_dyn();

		void activate(int ActionSet, ::flixel::input::actions::FlxInputDevice Device,::hx::Null< int >  DeviceID);
		::Dynamic activate_dyn();

		void markActiveSets(::Array< ::Dynamic> sets);
		::Dynamic markActiveSets_dyn();

		void update(::Array< ::Dynamic> sets);
		::Dynamic update_dyn();

		void updateSteam(::Array< ::Dynamic> sets);
		::Dynamic updateSteam_dyn();

		void setActivate(int ActionSet, ::flixel::input::actions::FlxInputDevice Device,::hx::Null< int >  DeviceID,::hx::Null< bool >  DoActivate);
		::Dynamic setActivate_dyn();

		::Array< ::Dynamic> updateSteamOrigins(::Array< ::Dynamic> sets);
		::Dynamic updateSteamOrigins_dyn();

		void updateDigitalActionOrigins( ::flixel::input::actions::FlxActionDigital action,int deviceID,int setHandle);
		::Dynamic updateDigitalActionOrigins_dyn();

		void updateAnalogActionOrigins( ::flixel::input::actions::FlxActionAnalog action,int deviceID,int setHandle);
		::Dynamic updateAnalogActionOrigins_dyn();

		int cheapChecksum(::Array< int > arr);
		::Dynamic cheapChecksum_dyn();

		void updateSteamInputs(::Array< ::Dynamic> sets);
		::Dynamic updateSteamInputs_dyn();

		void changeSteamControllerActionSet(int controllerHandle,int newSet,::Array< ::Dynamic> sets);
		::Dynamic changeSteamControllerActionSet_dyn();

		void syncDevice( ::flixel::input::actions::FlxInputDevice device,::Array< ::Dynamic> sets);
		::Dynamic syncDevice_dyn();

		void clearSetFromArray(::hx::Null< int >  ActionSet,::Array< int > array);
		::Dynamic clearSetFromArray_dyn();

};

} // end namespace flixel
} // end namespace input
} // end namespace actions
} // end namespace _FlxActionManager

#endif /* INCLUDED_flixel_input_actions__FlxActionManager_ActionSetRegister */ 
