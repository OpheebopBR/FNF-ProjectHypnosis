#ifndef INCLUDED_DebugLuaText
#define INCLUDED_DebugLuaText

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
HX_DECLARE_CLASS0(DebugLuaText)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES DebugLuaText_obj : public  ::flixel::text::FlxText_obj
{
	public:
		typedef  ::flixel::text::FlxText_obj super;
		typedef DebugLuaText_obj OBJ_;
		DebugLuaText_obj();

	public:
		enum { _hx_ClassId = 0x716f4352 };

		void __construct(::String text, ::flixel::group::FlxTypedGroup parentGroup);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="DebugLuaText")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"DebugLuaText"); }
		static ::hx::ObjectPtr< DebugLuaText_obj > __new(::String text, ::flixel::group::FlxTypedGroup parentGroup);
		static ::hx::ObjectPtr< DebugLuaText_obj > __alloc(::hx::Ctx *_hx_ctx,::String text, ::flixel::group::FlxTypedGroup parentGroup);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DebugLuaText_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DebugLuaText",92,f0,8d,88); }

		Float disableTime;
		 ::flixel::group::FlxTypedGroup parentGroup;
		void update(Float elapsed);

};


#endif /* INCLUDED_DebugLuaText */ 
