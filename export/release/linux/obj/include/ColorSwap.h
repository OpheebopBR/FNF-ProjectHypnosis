#ifndef INCLUDED_ColorSwap
#define INCLUDED_ColorSwap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(ColorSwap)
HX_DECLARE_CLASS0(ColorSwapShader)
HX_DECLARE_CLASS3(flixel,graphics,tile,FlxGraphicsShader)
HX_DECLARE_CLASS2(openfl,display,GraphicsShader)
HX_DECLARE_CLASS2(openfl,display,Shader)



class HXCPP_CLASS_ATTRIBUTES ColorSwap_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ColorSwap_obj OBJ_;
		ColorSwap_obj();

	public:
		enum { _hx_ClassId = 0x3ba8dcd2 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="ColorSwap")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"ColorSwap"); }
		static ::hx::ObjectPtr< ColorSwap_obj > __new();
		static ::hx::ObjectPtr< ColorSwap_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ColorSwap_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ColorSwap",76,95,9e,c9); }

		 ::ColorSwapShader shader;
		Float hue;
		Float saturation;
		Float brightness;
		Float set_hue(Float value);
		::Dynamic set_hue_dyn();

		Float set_saturation(Float value);
		::Dynamic set_saturation_dyn();

		Float set_brightness(Float value);
		::Dynamic set_brightness_dyn();

};


#endif /* INCLUDED_ColorSwap */ 
