#ifndef INCLUDED_flixel_input_actions_FlxActionInputDigitalSteam
#define INCLUDED_flixel_input_actions_FlxActionInputDigitalSteam

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_input_actions_FlxActionInputDigital
#include <flixel/input/actions/FlxActionInputDigital.h>
#endif
HX_DECLARE_CLASS2(flixel,input,FlxInput)
HX_DECLARE_CLASS2(flixel,input,IFlxInput)
HX_DECLARE_CLASS3(flixel,input,actions,FlxAction)
HX_DECLARE_CLASS3(flixel,input,actions,FlxActionInput)
HX_DECLARE_CLASS3(flixel,input,actions,FlxActionInputDigital)
HX_DECLARE_CLASS3(flixel,input,actions,FlxActionInputDigitalSteam)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace flixel{
namespace input{
namespace actions{


class HXCPP_CLASS_ATTRIBUTES FlxActionInputDigitalSteam_obj : public  ::flixel::input::actions::FlxActionInputDigital_obj
{
	public:
		typedef  ::flixel::input::actions::FlxActionInputDigital_obj super;
		typedef FlxActionInputDigitalSteam_obj OBJ_;
		FlxActionInputDigitalSteam_obj();

	public:
		enum { _hx_ClassId = 0x0ecc656d };

		void __construct(int ActionHandle,int Trigger, ::Dynamic __o_DeviceHandle);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.input.actions.FlxActionInputDigitalSteam")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.input.actions.FlxActionInputDigitalSteam"); }
		static ::hx::ObjectPtr< FlxActionInputDigitalSteam_obj > __new(int ActionHandle,int Trigger, ::Dynamic __o_DeviceHandle);
		static ::hx::ObjectPtr< FlxActionInputDigitalSteam_obj > __alloc(::hx::Ctx *_hx_ctx,int ActionHandle,int Trigger, ::Dynamic __o_DeviceHandle);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxActionInputDigitalSteam_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxActionInputDigitalSteam",fa,4b,44,76); }

		 ::flixel::input::FlxInput steamInput;
		bool check( ::flixel::input::actions::FlxAction Action);

		void update();

		bool getSteamControllerData(int controllerHandle);
		::Dynamic getSteamControllerData_dyn();

};

} // end namespace flixel
} // end namespace input
} // end namespace actions

#endif /* INCLUDED_flixel_input_actions_FlxActionInputDigitalSteam */ 
