#ifndef INCLUDED_MenuItem
#define INCLUDED_MenuItem

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS0(MenuItem)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES MenuItem_obj : public  ::flixel::FlxSprite_obj
{
	public:
		typedef  ::flixel::FlxSprite_obj super;
		typedef MenuItem_obj OBJ_;
		MenuItem_obj();

	public:
		enum { _hx_ClassId = 0x2f356bfa };

		void __construct(Float x,Float y,::String __o_weekName);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="MenuItem")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"MenuItem"); }
		static ::hx::ObjectPtr< MenuItem_obj > __new(Float x,Float y,::String __o_weekName);
		static ::hx::ObjectPtr< MenuItem_obj > __alloc(::hx::Ctx *_hx_ctx,Float x,Float y,::String __o_weekName);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~MenuItem_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("MenuItem",72,ae,e0,25); }

		Float targetY;
		int flashingInt;
		bool isFlashing;
		void startFlashing();
		::Dynamic startFlashing_dyn();

		int fakeFramerate;
		void update(Float elapsed);

};


#endif /* INCLUDED_MenuItem */ 
