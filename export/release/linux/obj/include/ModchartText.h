#ifndef INCLUDED_ModchartText
#define INCLUDED_ModchartText

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
HX_DECLARE_CLASS0(ModchartText)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES ModchartText_obj : public  ::flixel::text::FlxText_obj
{
	public:
		typedef  ::flixel::text::FlxText_obj super;
		typedef ModchartText_obj OBJ_;
		ModchartText_obj();

	public:
		enum { _hx_ClassId = 0x07c063ed };

		void __construct(Float x,Float y,::String text,Float width);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="ModchartText")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"ModchartText"); }
		static ::hx::ObjectPtr< ModchartText_obj > __new(Float x,Float y,::String text,Float width);
		static ::hx::ObjectPtr< ModchartText_obj > __alloc(::hx::Ctx *_hx_ctx,Float x,Float y,::String text,Float width);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ModchartText_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ModchartText",c9,a9,94,ec); }

		bool wasAdded;
};


#endif /* INCLUDED_ModchartText */ 
