#ifndef INCLUDED_flixel_system__FlxBasePreloader_DefaultPreloader
#define INCLUDED_flixel_system__FlxBasePreloader_DefaultPreloader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
HX_DECLARE_CLASS3(flixel,_hx_system,_FlxBasePreloader,DefaultPreloader)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,ProgressEvent)

namespace flixel{
namespace _hx_system{
namespace _FlxBasePreloader{


class HXCPP_CLASS_ATTRIBUTES DefaultPreloader_obj : public  ::openfl::display::Sprite_obj
{
	public:
		typedef  ::openfl::display::Sprite_obj super;
		typedef DefaultPreloader_obj OBJ_;
		DefaultPreloader_obj();

	public:
		enum { _hx_ClassId = 0x318ede3c };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.system._FlxBasePreloader.DefaultPreloader")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.system._FlxBasePreloader.DefaultPreloader"); }
		static ::hx::ObjectPtr< DefaultPreloader_obj > __new();
		static ::hx::ObjectPtr< DefaultPreloader_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DefaultPreloader_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DefaultPreloader",95,27,6f,5f); }

		void onAddedToStage( ::openfl::events::Event _);
		::Dynamic onAddedToStage_dyn();

		void onComplete( ::openfl::events::Event event);
		::Dynamic onComplete_dyn();

		void onProgress( ::openfl::events::ProgressEvent event);
		::Dynamic onProgress_dyn();

		virtual void onInit();
		::Dynamic onInit_dyn();

		virtual void onLoaded();
		::Dynamic onLoaded_dyn();

		virtual void onUpdate(int bytesLoaded,int bytesTotal);
		::Dynamic onUpdate_dyn();

};

} // end namespace flixel
} // end namespace system
} // end namespace _FlxBasePreloader

#endif /* INCLUDED_flixel_system__FlxBasePreloader_DefaultPreloader */ 
