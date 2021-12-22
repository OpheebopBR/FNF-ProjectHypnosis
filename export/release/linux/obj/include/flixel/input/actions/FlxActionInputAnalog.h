#ifndef INCLUDED_flixel_input_actions_FlxActionInputAnalog
#define INCLUDED_flixel_input_actions_FlxActionInputAnalog

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_input_actions_FlxActionInput
#include <flixel/input/actions/FlxActionInput.h>
#endif
HX_DECLARE_CLASS2(flixel,input,FlxInput)
HX_DECLARE_CLASS2(flixel,input,IFlxInput)
HX_DECLARE_CLASS3(flixel,input,actions,FlxAction)
HX_DECLARE_CLASS3(flixel,input,actions,FlxActionInput)
HX_DECLARE_CLASS3(flixel,input,actions,FlxActionInputAnalog)
HX_DECLARE_CLASS3(flixel,input,actions,FlxInputDevice)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace flixel{
namespace input{
namespace actions{


class HXCPP_CLASS_ATTRIBUTES FlxActionInputAnalog_obj : public  ::flixel::input::actions::FlxActionInput_obj
{
	public:
		typedef  ::flixel::input::actions::FlxActionInput_obj super;
		typedef FlxActionInputAnalog_obj OBJ_;
		FlxActionInputAnalog_obj();

	public:
		enum { _hx_ClassId = 0x7f995ee1 };

		void __construct( ::flixel::input::actions::FlxInputDevice Device,int InputID,int Trigger,::hx::Null< int >  __o_Axis,::hx::Null< int >  __o_DeviceID);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.input.actions.FlxActionInputAnalog")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.input.actions.FlxActionInputAnalog"); }
		static ::hx::ObjectPtr< FlxActionInputAnalog_obj > __new( ::flixel::input::actions::FlxInputDevice Device,int InputID,int Trigger,::hx::Null< int >  __o_Axis,::hx::Null< int >  __o_DeviceID);
		static ::hx::ObjectPtr< FlxActionInputAnalog_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::input::actions::FlxInputDevice Device,int InputID,int Trigger,::hx::Null< int >  __o_Axis,::hx::Null< int >  __o_DeviceID);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxActionInputAnalog_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxActionInputAnalog",12,25,c5,19); }

		static void __boot();
		static bool A_X;
		static bool A_Y;
		int axis;
		Float x;
		Float y;
		 ::flixel::input::FlxInput xMoved;
		 ::flixel::input::FlxInput yMoved;
		bool check( ::flixel::input::actions::FlxAction Action);

		bool checkAxis(bool isX,int state);
		::Dynamic checkAxis_dyn();

		virtual void updateValues(Float X,Float Y);
		::Dynamic updateValues_dyn();

};

} // end namespace flixel
} // end namespace input
} // end namespace actions

#endif /* INCLUDED_flixel_input_actions_FlxActionInputAnalog */ 
