#ifndef INCLUDED_flixel_input_actions_FlxActionInputAnalogMousePosition
#define INCLUDED_flixel_input_actions_FlxActionInputAnalogMousePosition

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_input_actions_FlxActionInputAnalog
#include <flixel/input/actions/FlxActionInputAnalog.h>
#endif
HX_DECLARE_CLASS3(flixel,input,actions,FlxActionInput)
HX_DECLARE_CLASS3(flixel,input,actions,FlxActionInputAnalog)
HX_DECLARE_CLASS3(flixel,input,actions,FlxActionInputAnalogMousePosition)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace flixel{
namespace input{
namespace actions{


class HXCPP_CLASS_ATTRIBUTES FlxActionInputAnalogMousePosition_obj : public  ::flixel::input::actions::FlxActionInputAnalog_obj
{
	public:
		typedef  ::flixel::input::actions::FlxActionInputAnalog_obj super;
		typedef FlxActionInputAnalogMousePosition_obj OBJ_;
		FlxActionInputAnalogMousePosition_obj();

	public:
		enum { _hx_ClassId = 0x55a6184d };

		void __construct(int Trigger,::hx::Null< int >  __o_Axis);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.input.actions.FlxActionInputAnalogMousePosition")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.input.actions.FlxActionInputAnalogMousePosition"); }
		static ::hx::ObjectPtr< FlxActionInputAnalogMousePosition_obj > __new(int Trigger,::hx::Null< int >  __o_Axis);
		static ::hx::ObjectPtr< FlxActionInputAnalogMousePosition_obj > __alloc(::hx::Ctx *_hx_ctx,int Trigger,::hx::Null< int >  __o_Axis);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxActionInputAnalogMousePosition_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxActionInputAnalogMousePosition",7c,87,43,ce); }

		void update();

		void updateValues(Float X,Float Y);

};

} // end namespace flixel
} // end namespace input
} // end namespace actions

#endif /* INCLUDED_flixel_input_actions_FlxActionInputAnalogMousePosition */ 
