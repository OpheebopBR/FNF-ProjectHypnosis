#ifndef INCLUDED_editors_AttachedFlxText
#define INCLUDED_editors_AttachedFlxText

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
HX_DECLARE_CLASS1(editors,AttachedFlxText)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace editors{


class HXCPP_CLASS_ATTRIBUTES AttachedFlxText_obj : public  ::flixel::text::FlxText_obj
{
	public:
		typedef  ::flixel::text::FlxText_obj super;
		typedef AttachedFlxText_obj OBJ_;
		AttachedFlxText_obj();

	public:
		enum { _hx_ClassId = 0x62cdca35 };

		void __construct(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::hx::Null< Float >  __o_FieldWidth,::String Text,::hx::Null< int >  __o_Size,::hx::Null< bool >  __o_EmbeddedFont);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="editors.AttachedFlxText")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"editors.AttachedFlxText"); }
		static ::hx::ObjectPtr< AttachedFlxText_obj > __new(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::hx::Null< Float >  __o_FieldWidth,::String Text,::hx::Null< int >  __o_Size,::hx::Null< bool >  __o_EmbeddedFont);
		static ::hx::ObjectPtr< AttachedFlxText_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::hx::Null< Float >  __o_FieldWidth,::String Text,::hx::Null< int >  __o_Size,::hx::Null< bool >  __o_EmbeddedFont);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AttachedFlxText_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AttachedFlxText",1b,f3,b7,f1); }

		 ::flixel::FlxSprite sprTracker;
		Float xAdd;
		Float yAdd;
		void update(Float elapsed);

};

} // end namespace editors

#endif /* INCLUDED_editors_AttachedFlxText */ 
