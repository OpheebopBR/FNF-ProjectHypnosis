#ifndef INCLUDED_flixel_input_actions_FlxInputDeviceObject
#define INCLUDED_flixel_input_actions_FlxInputDeviceObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,input,actions,FlxInputDevice)
HX_DECLARE_CLASS3(flixel,input,actions,FlxInputDeviceObject)

namespace flixel{
namespace input{
namespace actions{


class HXCPP_CLASS_ATTRIBUTES FlxInputDeviceObject_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxInputDeviceObject_obj OBJ_;
		FlxInputDeviceObject_obj();

	public:
		enum { _hx_ClassId = 0x1cb2dc3c };

		void __construct( ::flixel::input::actions::FlxInputDevice Device,int ID,::String __o_Model);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.input.actions.FlxInputDeviceObject")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.input.actions.FlxInputDeviceObject"); }
		static ::hx::ObjectPtr< FlxInputDeviceObject_obj > __new( ::flixel::input::actions::FlxInputDevice Device,int ID,::String __o_Model);
		static ::hx::ObjectPtr< FlxInputDeviceObject_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::input::actions::FlxInputDevice Device,int ID,::String __o_Model);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxInputDeviceObject_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxInputDeviceObject",6d,a2,de,b6); }

		 ::flixel::input::actions::FlxInputDevice device;
		int id;
		::String model;
		virtual ::String toString();
		::Dynamic toString_dyn();

};

} // end namespace flixel
} // end namespace input
} // end namespace actions

#endif /* INCLUDED_flixel_input_actions_FlxInputDeviceObject */ 
