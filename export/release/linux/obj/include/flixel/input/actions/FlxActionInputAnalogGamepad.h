#ifndef INCLUDED_flixel_input_actions_FlxActionInputAnalogGamepad
#define INCLUDED_flixel_input_actions_FlxActionInputAnalogGamepad

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_input_actions_FlxActionInputAnalog
#include <flixel/input/actions/FlxActionInputAnalog.h>
#endif
HX_DECLARE_CLASS3(flixel,input,actions,FlxActionInput)
HX_DECLARE_CLASS3(flixel,input,actions,FlxActionInputAnalog)
HX_DECLARE_CLASS3(flixel,input,actions,FlxActionInputAnalogGamepad)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace flixel{
namespace input{
namespace actions{


class HXCPP_CLASS_ATTRIBUTES FlxActionInputAnalogGamepad_obj : public  ::flixel::input::actions::FlxActionInputAnalog_obj
{
	public:
		typedef  ::flixel::input::actions::FlxActionInputAnalog_obj super;
		typedef FlxActionInputAnalogGamepad_obj OBJ_;
		FlxActionInputAnalogGamepad_obj();

	public:
		enum { _hx_ClassId = 0x5e4ab4dc };

		void __construct(int InputID,int Trigger,::hx::Null< int >  __o_Axis,::hx::Null< int >  __o_GamepadID);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.input.actions.FlxActionInputAnalogGamepad")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.input.actions.FlxActionInputAnalogGamepad"); }
		static ::hx::ObjectPtr< FlxActionInputAnalogGamepad_obj > __new(int InputID,int Trigger,::hx::Null< int >  __o_Axis,::hx::Null< int >  __o_GamepadID);
		static ::hx::ObjectPtr< FlxActionInputAnalogGamepad_obj > __alloc(::hx::Ctx *_hx_ctx,int InputID,int Trigger,::hx::Null< int >  __o_Axis,::hx::Null< int >  __o_GamepadID);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxActionInputAnalogGamepad_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxActionInputAnalogGamepad",af,89,bc,7f); }

		void update();

};

} // end namespace flixel
} // end namespace input
} // end namespace actions

#endif /* INCLUDED_flixel_input_actions_FlxActionInputAnalogGamepad */ 
