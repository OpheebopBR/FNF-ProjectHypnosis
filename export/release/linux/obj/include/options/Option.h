#ifndef INCLUDED_options_Option
#define INCLUDED_options_Option

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Alphabet)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(options,Option)

namespace options{


class HXCPP_CLASS_ATTRIBUTES Option_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Option_obj OBJ_;
		Option_obj();

	public:
		enum { _hx_ClassId = 0x280eb0f3 };

		void __construct(::String name,::String __o_description,::String variable,::String __o_type, ::Dynamic __o_defaultValue,::Array< ::String > options);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="options.Option")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"options.Option"); }
		static ::hx::ObjectPtr< Option_obj > __new(::String name,::String __o_description,::String variable,::String __o_type, ::Dynamic __o_defaultValue,::Array< ::String > options);
		static ::hx::ObjectPtr< Option_obj > __alloc(::hx::Ctx *_hx_ctx,::String name,::String __o_description,::String variable,::String __o_type, ::Dynamic __o_defaultValue,::Array< ::String > options);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Option_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Option",95,47,0f,60); }

		 ::Alphabet child;
		 ::Dynamic onChange;
		Dynamic onChange_dyn() { return onChange;}
		::String type;
		bool showBoyfriend;
		Float scrollSpeed;
		::String variable;
		 ::Dynamic defaultValue;
		int curOption;
		::Array< ::String > options;
		 ::Dynamic changeValue;
		 ::Dynamic minValue;
		 ::Dynamic maxValue;
		int decimals;
		::String displayFormat;
		::String description;
		::String name;
		void change();
		::Dynamic change_dyn();

		 ::Dynamic getValue();
		::Dynamic getValue_dyn();

		void setValue( ::Dynamic value);
		::Dynamic setValue_dyn();

		void setChild( ::Alphabet child);
		::Dynamic setChild_dyn();

		::String get_text();
		::Dynamic get_text_dyn();

		::String set_text(::String newValue);
		::Dynamic set_text_dyn();

		::String get_type();
		::Dynamic get_type_dyn();

};

} // end namespace options

#endif /* INCLUDED_options_Option */ 
