#ifndef INCLUDED_flixel_input_actions_FlxActionInputAnalogMouseMotion
#define INCLUDED_flixel_input_actions_FlxActionInputAnalogMouseMotion

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_input_actions_FlxActionInputAnalog
#include <flixel/input/actions/FlxActionInputAnalog.h>
#endif
HX_DECLARE_CLASS3(flixel,input,actions,FlxActionInput)
HX_DECLARE_CLASS3(flixel,input,actions,FlxActionInputAnalog)
HX_DECLARE_CLASS3(flixel,input,actions,FlxActionInputAnalogMouseMotion)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace flixel{
namespace input{
namespace actions{


class HXCPP_CLASS_ATTRIBUTES FlxActionInputAnalogMouseMotion_obj : public  ::flixel::input::actions::FlxActionInputAnalog_obj
{
	public:
		typedef  ::flixel::input::actions::FlxActionInputAnalog_obj super;
		typedef FlxActionInputAnalogMouseMotion_obj OBJ_;
		FlxActionInputAnalogMouseMotion_obj();

	public:
		enum { _hx_ClassId = 0x1d9f0cda };

		void __construct(int Trigger,::hx::Null< int >  __o_Axis,::hx::Null< int >  __o_PixelsPerUnit,::hx::Null< Float >  __o_DeadZone,::hx::Null< bool >  __o_InvertY,::hx::Null< bool >  __o_InvertX);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.input.actions.FlxActionInputAnalogMouseMotion")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.input.actions.FlxActionInputAnalogMouseMotion"); }
		static ::hx::ObjectPtr< FlxActionInputAnalogMouseMotion_obj > __new(int Trigger,::hx::Null< int >  __o_Axis,::hx::Null< int >  __o_PixelsPerUnit,::hx::Null< Float >  __o_DeadZone,::hx::Null< bool >  __o_InvertY,::hx::Null< bool >  __o_InvertX);
		static ::hx::ObjectPtr< FlxActionInputAnalogMouseMotion_obj > __alloc(::hx::Ctx *_hx_ctx,int Trigger,::hx::Null< int >  __o_Axis,::hx::Null< int >  __o_PixelsPerUnit,::hx::Null< Float >  __o_DeadZone,::hx::Null< bool >  __o_InvertY,::hx::Null< bool >  __o_InvertX);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxActionInputAnalogMouseMotion_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxActionInputAnalogMouseMotion",49,02,c1,d1); }

		Float lastX;
		Float lastY;
		int pixelsPerUnit;
		Float deadZone;
		bool invertX;
		bool invertY;
		void update();

		void updateXYPosition(Float X,Float Y);
		::Dynamic updateXYPosition_dyn();

};

} // end namespace flixel
} // end namespace input
} // end namespace actions

#endif /* INCLUDED_flixel_input_actions_FlxActionInputAnalogMouseMotion */ 
