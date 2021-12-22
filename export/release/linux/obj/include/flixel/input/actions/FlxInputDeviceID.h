#ifndef INCLUDED_flixel_input_actions_FlxInputDeviceID
#define INCLUDED_flixel_input_actions_FlxInputDeviceID

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,input,actions,FlxInputDeviceID)

namespace flixel{
namespace input{
namespace actions{


class HXCPP_CLASS_ATTRIBUTES FlxInputDeviceID_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxInputDeviceID_obj OBJ_;
		FlxInputDeviceID_obj();

	public:
		enum { _hx_ClassId = 0x10dfec1c };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="flixel.input.actions.FlxInputDeviceID")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"flixel.input.actions.FlxInputDeviceID"); }

		inline static ::hx::ObjectPtr< FlxInputDeviceID_obj > __new() {
			::hx::ObjectPtr< FlxInputDeviceID_obj > __this = new FlxInputDeviceID_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< FlxInputDeviceID_obj > __alloc(::hx::Ctx *_hx_ctx) {
			FlxInputDeviceID_obj *__this = (FlxInputDeviceID_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxInputDeviceID_obj), false, "flixel.input.actions.FlxInputDeviceID"));
			*(void **)__this = FlxInputDeviceID_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxInputDeviceID_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxInputDeviceID",69,90,bc,0d); }

		static void __boot();
		static int ALL;
		static int FIRST_ACTIVE;
		static int NONE;
};

} // end namespace flixel
} // end namespace input
} // end namespace actions

#endif /* INCLUDED_flixel_input_actions_FlxInputDeviceID */ 
