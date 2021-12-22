#ifndef INCLUDED_options_VisualsUISubState
#define INCLUDED_options_VisualsUISubState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_options_BaseOptionsMenu
#include <options/BaseOptionsMenu.h>
#endif
HX_DECLARE_CLASS0(MusicBeatSubstate)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS1(flixel,FlxSubState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(options,BaseOptionsMenu)
HX_DECLARE_CLASS1(options,VisualsUISubState)

namespace options{


class HXCPP_CLASS_ATTRIBUTES VisualsUISubState_obj : public  ::options::BaseOptionsMenu_obj
{
	public:
		typedef  ::options::BaseOptionsMenu_obj super;
		typedef VisualsUISubState_obj OBJ_;
		VisualsUISubState_obj();

	public:
		enum { _hx_ClassId = 0x39ef0ffe };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="options.VisualsUISubState")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"options.VisualsUISubState"); }
		static ::hx::ObjectPtr< VisualsUISubState_obj > __new();
		static ::hx::ObjectPtr< VisualsUISubState_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~VisualsUISubState_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("VisualsUISubState",38,8a,f2,77); }

		void onChangeFPSCounter();
		::Dynamic onChangeFPSCounter_dyn();

};

} // end namespace options

#endif /* INCLUDED_options_VisualsUISubState */ 
