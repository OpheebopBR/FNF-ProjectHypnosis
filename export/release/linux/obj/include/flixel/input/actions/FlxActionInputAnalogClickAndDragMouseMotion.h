#ifndef INCLUDED_flixel_input_actions_FlxActionInputAnalogClickAndDragMouseMotion
#define INCLUDED_flixel_input_actions_FlxActionInputAnalogClickAndDragMouseMotion

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_input_actions_FlxActionInputAnalogMouseMotion
#include <flixel/input/actions/FlxActionInputAnalogMouseMotion.h>
#endif
HX_DECLARE_CLASS3(flixel,input,actions,FlxActionInput)
HX_DECLARE_CLASS3(flixel,input,actions,FlxActionInputAnalog)
HX_DECLARE_CLASS3(flixel,input,actions,FlxActionInputAnalogClickAndDragMouseMotion)
HX_DECLARE_CLASS3(flixel,input,actions,FlxActionInputAnalogMouseMotion)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace flixel{
namespace input{
namespace actions{


class HXCPP_CLASS_ATTRIBUTES FlxActionInputAnalogClickAndDragMouseMotion_obj : public  ::flixel::input::actions::FlxActionInputAnalogMouseMotion_obj
{
	public:
		typedef  ::flixel::input::actions::FlxActionInputAnalogMouseMotion_obj super;
		typedef FlxActionInputAnalogClickAndDragMouseMotion_obj OBJ_;
		FlxActionInputAnalogClickAndDragMouseMotion_obj();

	public:
		enum { _hx_ClassId = 0x0c5bf117 };

		void __construct(int ButtonID,int Trigger,::hx::Null< int >  __o_Axis,::hx::Null< int >  __o_PixelsPerUnit,::hx::Null< Float >  __o_DeadZone,::hx::Null< bool >  __o_InvertY,::hx::Null< bool >  __o_InvertX);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.input.actions.FlxActionInputAnalogClickAndDragMouseMotion")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.input.actions.FlxActionInputAnalogClickAndDragMouseMotion"); }
		static ::hx::ObjectPtr< FlxActionInputAnalogClickAndDragMouseMotion_obj > __new(int ButtonID,int Trigger,::hx::Null< int >  __o_Axis,::hx::Null< int >  __o_PixelsPerUnit,::hx::Null< Float >  __o_DeadZone,::hx::Null< bool >  __o_InvertY,::hx::Null< bool >  __o_InvertX);
		static ::hx::ObjectPtr< FlxActionInputAnalogClickAndDragMouseMotion_obj > __alloc(::hx::Ctx *_hx_ctx,int ButtonID,int Trigger,::hx::Null< int >  __o_Axis,::hx::Null< int >  __o_PixelsPerUnit,::hx::Null< Float >  __o_DeadZone,::hx::Null< bool >  __o_InvertY,::hx::Null< bool >  __o_InvertX);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxActionInputAnalogClickAndDragMouseMotion_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxActionInputAnalogClickAndDragMouseMotion",06,d1,8f,64); }

		int button;
		void updateValues(Float X,Float Y);

};

} // end namespace flixel
} // end namespace input
} // end namespace actions

#endif /* INCLUDED_flixel_input_actions_FlxActionInputAnalogClickAndDragMouseMotion */ 
