#ifndef INCLUDED_flixel_input_actions__FlxSteamController_FlxSteamControllerMetadata
#define INCLUDED_flixel_input_actions__FlxSteamController_FlxSteamControllerMetadata

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flixel,input,FlxInput)
HX_DECLARE_CLASS2(flixel,input,IFlxInput)
HX_DECLARE_CLASS4(flixel,input,actions,_FlxSteamController,FlxSteamControllerMetadata)

namespace flixel{
namespace input{
namespace actions{
namespace _FlxSteamController{


class HXCPP_CLASS_ATTRIBUTES FlxSteamControllerMetadata_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxSteamControllerMetadata_obj OBJ_;
		FlxSteamControllerMetadata_obj();

	public:
		enum { _hx_ClassId = 0x1aabd2b3 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.input.actions._FlxSteamController.FlxSteamControllerMetadata")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.input.actions._FlxSteamController.FlxSteamControllerMetadata"); }
		static ::hx::ObjectPtr< FlxSteamControllerMetadata_obj > __new();
		static ::hx::ObjectPtr< FlxSteamControllerMetadata_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxSteamControllerMetadata_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxSteamControllerMetadata",a9,64,3e,bf); }

		int handle;
		int actionSet;
		bool active;
		 ::flixel::input::FlxInput connected;
};

} // end namespace flixel
} // end namespace input
} // end namespace actions
} // end namespace _FlxSteamController

#endif /* INCLUDED_flixel_input_actions__FlxSteamController_FlxSteamControllerMetadata */ 
