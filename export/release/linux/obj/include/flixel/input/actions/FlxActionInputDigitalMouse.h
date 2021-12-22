#ifndef INCLUDED_flixel_input_actions_FlxActionInputDigitalMouse
#define INCLUDED_flixel_input_actions_FlxActionInputDigitalMouse

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_input_actions_FlxActionInputDigital
#include <flixel/input/actions/FlxActionInputDigital.h>
#endif
HX_DECLARE_CLASS3(flixel,input,actions,FlxAction)
HX_DECLARE_CLASS3(flixel,input,actions,FlxActionInput)
HX_DECLARE_CLASS3(flixel,input,actions,FlxActionInputDigital)
HX_DECLARE_CLASS3(flixel,input,actions,FlxActionInputDigitalMouse)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace flixel{
namespace input{
namespace actions{


class HXCPP_CLASS_ATTRIBUTES FlxActionInputDigitalMouse_obj : public  ::flixel::input::actions::FlxActionInputDigital_obj
{
	public:
		typedef  ::flixel::input::actions::FlxActionInputDigital_obj super;
		typedef FlxActionInputDigitalMouse_obj OBJ_;
		FlxActionInputDigitalMouse_obj();

	public:
		enum { _hx_ClassId = 0x62baf29e };

		void __construct(int ButtonID,int Trigger);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.input.actions.FlxActionInputDigitalMouse")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.input.actions.FlxActionInputDigitalMouse"); }
		static ::hx::ObjectPtr< FlxActionInputDigitalMouse_obj > __new(int ButtonID,int Trigger);
		static ::hx::ObjectPtr< FlxActionInputDigitalMouse_obj > __alloc(::hx::Ctx *_hx_ctx,int ButtonID,int Trigger);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxActionInputDigitalMouse_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxActionInputDigitalMouse",8f,f3,9a,fe); }

		bool check( ::flixel::input::actions::FlxAction Action);

};

} // end namespace flixel
} // end namespace input
} // end namespace actions

#endif /* INCLUDED_flixel_input_actions_FlxActionInputDigitalMouse */ 
