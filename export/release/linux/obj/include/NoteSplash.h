#ifndef INCLUDED_NoteSplash
#define INCLUDED_NoteSplash

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS0(ColorSwap)
HX_DECLARE_CLASS0(NoteSplash)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES NoteSplash_obj : public  ::flixel::FlxSprite_obj
{
	public:
		typedef  ::flixel::FlxSprite_obj super;
		typedef NoteSplash_obj OBJ_;
		NoteSplash_obj();

	public:
		enum { _hx_ClassId = 0x6c20b5d9 };

		void __construct(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y, ::Dynamic __o_note);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="NoteSplash")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"NoteSplash"); }
		static ::hx::ObjectPtr< NoteSplash_obj > __new(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y, ::Dynamic __o_note);
		static ::hx::ObjectPtr< NoteSplash_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y, ::Dynamic __o_note);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~NoteSplash_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("NoteSplash",19,93,5d,54); }

		 ::ColorSwap colorSwap;
		::String idleAnim;
		::String textureLoaded;
		void setupNoteSplash(Float x,Float y,::hx::Null< int >  note,::String texture,::hx::Null< Float >  hueColor,::hx::Null< Float >  satColor,::hx::Null< Float >  brtColor);
		::Dynamic setupNoteSplash_dyn();

		void loadAnims(::String skin);
		::Dynamic loadAnims_dyn();

		void update(Float elapsed);

};


#endif /* INCLUDED_NoteSplash */ 
