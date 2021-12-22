#ifndef INCLUDED_flixel_input_actions_FlxActionInputDigitalMouseWheel
#define INCLUDED_flixel_input_actions_FlxActionInputDigitalMouseWheel

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
HX_DECLARE_CLASS3(flixel,input,actions,FlxActionInputDigitalMouseWheel)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace flixel{
namespace input{
namespace actions{


class HXCPP_CLASS_ATTRIBUTES FlxActionInputDigitalMouseWheel_obj : public  ::flixel::input::actions::FlxActionInputDigital_obj
{
	public:
		typedef  ::flixel::input::actions::FlxActionInputDigital_obj super;
		typedef FlxActionInputDigitalMouseWheel_obj OBJ_;
		FlxActionInputDigitalMouseWheel_obj();

	public:
		enum { _hx_ClassId = 0x61a2751d };

		void __construct(bool Positive,int Trigger);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.input.actions.FlxActionInputDigitalMouseWheel")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.input.actions.FlxActionInputDigitalMouseWheel"); }
		static ::hx::ObjectPtr< FlxActionInputDigitalMouseWheel_obj > __new(bool Positive,int Trigger);
		static ::hx::ObjectPtr< FlxActionInputDigitalMouseWheel_obj > __alloc(::hx::Ctx *_hx_ctx,bool Positive,int Trigger);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxActionInputDigitalMouseWheel_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxActionInputDigitalMouseWheel",8c,6a,c4,15); }

		 ::flixel::input::FlxInput input;
		int sign;
		bool check( ::flixel::input::actions::FlxAction Action);

		void update();

};

} // end namespace flixel
} // end namespace input
} // end namespace actions

#endif /* INCLUDED_flixel_input_actions_FlxActionInputDigitalMouseWheel */ 
