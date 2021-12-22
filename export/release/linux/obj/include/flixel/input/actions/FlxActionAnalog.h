#ifndef INCLUDED_flixel_input_actions_FlxActionAnalog
#define INCLUDED_flixel_input_actions_FlxActionAnalog

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_input_actions_FlxAction
#include <flixel/input/actions/FlxAction.h>
#endif
HX_DECLARE_CLASS3(flixel,input,actions,FlxAction)
HX_DECLARE_CLASS3(flixel,input,actions,FlxActionAnalog)
HX_DECLARE_CLASS3(flixel,input,actions,FlxActionInput)
HX_DECLARE_CLASS3(flixel,input,actions,FlxActionInputAnalog)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace flixel{
namespace input{
namespace actions{


class HXCPP_CLASS_ATTRIBUTES FlxActionAnalog_obj : public  ::flixel::input::actions::FlxAction_obj
{
	public:
		typedef  ::flixel::input::actions::FlxAction_obj super;
		typedef FlxActionAnalog_obj OBJ_;
		FlxActionAnalog_obj();

	public:
		enum { _hx_ClassId = 0x537409a5 };

		void __construct(::String __o_Name, ::Dynamic Callback);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.input.actions.FlxActionAnalog")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.input.actions.FlxActionAnalog"); }
		static ::hx::ObjectPtr< FlxActionAnalog_obj > __new(::String __o_Name, ::Dynamic Callback);
		static ::hx::ObjectPtr< FlxActionAnalog_obj > __alloc(::hx::Ctx *_hx_ctx,::String __o_Name, ::Dynamic Callback);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxActionAnalog_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxActionAnalog",f8,2d,57,fd); }

		 ::Dynamic callback;
		Dynamic callback_dyn() { return callback;}
		 ::flixel::input::actions::FlxActionAnalog add( ::flixel::input::actions::FlxActionInputAnalog input);
		::Dynamic add_dyn();

		 ::flixel::input::actions::FlxActionAnalog addMouseClickAndDragMotion(int ButtonID,int Trigger,::hx::Null< int >  Axis,::hx::Null< int >  PixelsPerUnit,::hx::Null< Float >  DeadZone,::hx::Null< bool >  InvertY,::hx::Null< bool >  InvertX);
		::Dynamic addMouseClickAndDragMotion_dyn();

		 ::flixel::input::actions::FlxActionAnalog addMouseMotion(int Trigger,::hx::Null< int >  Axis,::hx::Null< int >  PixelsPerUnit,::hx::Null< Float >  DeadZone,::hx::Null< bool >  InvertY,::hx::Null< bool >  InvertX);
		::Dynamic addMouseMotion_dyn();

		 ::flixel::input::actions::FlxActionAnalog addMousePosition(int Trigger,::hx::Null< int >  Axis);
		::Dynamic addMousePosition_dyn();

		 ::flixel::input::actions::FlxActionAnalog addGamepad(int InputID,int Trigger,::hx::Null< int >  Axis,::hx::Null< int >  GamepadID);
		::Dynamic addGamepad_dyn();

		void update();

		void destroy();

		virtual ::String toString();

		bool check();

		Float get_x();
		::Dynamic get_x_dyn();

		Float get_y();
		::Dynamic get_y_dyn();

};

} // end namespace flixel
} // end namespace input
} // end namespace actions

#endif /* INCLUDED_flixel_input_actions_FlxActionAnalog */ 
