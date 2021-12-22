#ifndef INCLUDED_CheckboxThingie
#define INCLUDED_CheckboxThingie

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS0(CheckboxThingie)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES CheckboxThingie_obj : public  ::flixel::FlxSprite_obj
{
	public:
		typedef  ::flixel::FlxSprite_obj super;
		typedef CheckboxThingie_obj OBJ_;
		CheckboxThingie_obj();

	public:
		enum { _hx_ClassId = 0x178a89bb };

		void __construct(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y, ::Dynamic __o_checked);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="CheckboxThingie")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"CheckboxThingie"); }
		static ::hx::ObjectPtr< CheckboxThingie_obj > __new(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y, ::Dynamic __o_checked);
		static ::hx::ObjectPtr< CheckboxThingie_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y, ::Dynamic __o_checked);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CheckboxThingie_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CheckboxThingie",27,b7,47,be); }

		 ::flixel::FlxSprite sprTracker;
		bool daValue;
		bool copyAlpha;
		Float offsetX;
		Float offsetY;
		void update(Float elapsed);

		bool set_daValue(bool check);
		::Dynamic set_daValue_dyn();

		void animationFinished(::String name);
		::Dynamic animationFinished_dyn();

};


#endif /* INCLUDED_CheckboxThingie */ 
