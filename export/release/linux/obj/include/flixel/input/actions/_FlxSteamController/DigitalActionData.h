#ifndef INCLUDED_flixel_input_actions__FlxSteamController_DigitalActionData
#define INCLUDED_flixel_input_actions__FlxSteamController_DigitalActionData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_9afc3f56130d1af7_298_new)
HX_DECLARE_CLASS4(flixel,input,actions,_FlxSteamController,DigitalActionData)

namespace flixel{
namespace input{
namespace actions{
namespace _FlxSteamController{


class HXCPP_CLASS_ATTRIBUTES DigitalActionData_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef DigitalActionData_obj OBJ_;
		DigitalActionData_obj();

	public:
		enum { _hx_ClassId = 0x6cab160e };

		void __construct(bool bActive,bool bState);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="flixel.input.actions._FlxSteamController.DigitalActionData")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"flixel.input.actions._FlxSteamController.DigitalActionData"); }

		inline static ::hx::ObjectPtr< DigitalActionData_obj > __new(bool bActive,bool bState) {
			::hx::ObjectPtr< DigitalActionData_obj > __this = new DigitalActionData_obj();
			__this->__construct(bActive,bState);
			return __this;
		}

		inline static ::hx::ObjectPtr< DigitalActionData_obj > __alloc(::hx::Ctx *_hx_ctx,bool bActive,bool bState) {
			DigitalActionData_obj *__this = (DigitalActionData_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DigitalActionData_obj), false, "flixel.input.actions._FlxSteamController.DigitalActionData"));
			*(void **)__this = DigitalActionData_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_9afc3f56130d1af7_298_new)
HXLINE( 299)		( ( ::flixel::input::actions::_FlxSteamController::DigitalActionData)(__this) )->bActive = bActive;
HXLINE( 300)		( ( ::flixel::input::actions::_FlxSteamController::DigitalActionData)(__this) )->bState = bState;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DigitalActionData_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DigitalActionData",d8,9a,ca,6c); }

		bool bActive;
		bool bState;
};

} // end namespace flixel
} // end namespace input
} // end namespace actions
} // end namespace _FlxSteamController

#endif /* INCLUDED_flixel_input_actions__FlxSteamController_DigitalActionData */ 
