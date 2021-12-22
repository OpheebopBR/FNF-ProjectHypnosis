#ifndef INCLUDED_GameplayOption
#define INCLUDED_GameplayOption

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Alphabet)
HX_DECLARE_CLASS0(GameplayOption)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES GameplayOption_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef GameplayOption_obj OBJ_;
		GameplayOption_obj();

	public:
		enum { _hx_ClassId = 0x1dab9a3f };

		void __construct(::String name,::String variable,::String __o_type, ::Dynamic __o_defaultValue,::Array< ::String > options);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="GameplayOption")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"GameplayOption"); }
		static ::hx::ObjectPtr< GameplayOption_obj > __new(::String name,::String variable,::String __o_type, ::Dynamic __o_defaultValue,::Array< ::String > options);
		static ::hx::ObjectPtr< GameplayOption_obj > __alloc(::hx::Ctx *_hx_ctx,::String name,::String variable,::String __o_type, ::Dynamic __o_defaultValue,::Array< ::String > options);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~GameplayOption_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("GameplayOption",1b,0f,82,14); }

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


#endif /* INCLUDED_GameplayOption */ 
