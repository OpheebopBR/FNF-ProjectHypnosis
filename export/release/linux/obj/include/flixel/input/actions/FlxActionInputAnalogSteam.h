#ifndef INCLUDED_flixel_input_actions_FlxActionInputAnalogSteam
#define INCLUDED_flixel_input_actions_FlxActionInputAnalogSteam

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_input_actions_FlxActionInputAnalog
#include <flixel/input/actions/FlxActionInputAnalog.h>
#endif
HX_DECLARE_CLASS3(flixel,input,actions,FlxActionInput)
HX_DECLARE_CLASS3(flixel,input,actions,FlxActionInputAnalog)
HX_DECLARE_CLASS3(flixel,input,actions,FlxActionInputAnalogSteam)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace flixel{
namespace input{
namespace actions{


class HXCPP_CLASS_ATTRIBUTES FlxActionInputAnalogSteam_obj : public  ::flixel::input::actions::FlxActionInputAnalog_obj
{
	public:
		typedef  ::flixel::input::actions::FlxActionInputAnalog_obj super;
		typedef FlxActionInputAnalogSteam_obj OBJ_;
		FlxActionInputAnalogSteam_obj();

	public:
		enum { _hx_ClassId = 0x7764aa43 };

		void __construct(int ActionHandle,int Trigger,::hx::Null< int >  __o_Axis,::hx::Null< int >  __o_DeviceID);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.input.actions.FlxActionInputAnalogSteam")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.input.actions.FlxActionInputAnalogSteam"); }
		static ::hx::ObjectPtr< FlxActionInputAnalogSteam_obj > __new(int ActionHandle,int Trigger,::hx::Null< int >  __o_Axis,::hx::Null< int >  __o_DeviceID);
		static ::hx::ObjectPtr< FlxActionInputAnalogSteam_obj > __alloc(::hx::Ctx *_hx_ctx,int ActionHandle,int Trigger,::hx::Null< int >  __o_Axis,::hx::Null< int >  __o_DeviceID);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxActionInputAnalogSteam_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxActionInputAnalogSteam",1e,18,1d,da); }

		void update();

};

} // end namespace flixel
} // end namespace input
} // end namespace actions

#endif /* INCLUDED_flixel_input_actions_FlxActionInputAnalogSteam */ 
