#ifndef INCLUDED_StrumNote
#define INCLUDED_StrumNote

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS0(ColorSwap)
HX_DECLARE_CLASS0(StrumNote)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES StrumNote_obj : public  ::flixel::FlxSprite_obj
{
	public:
		typedef  ::flixel::FlxSprite_obj super;
		typedef StrumNote_obj OBJ_;
		StrumNote_obj();

	public:
		enum { _hx_ClassId = 0x5544cefb };

		void __construct(Float x,Float y,int leData,int player);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="StrumNote")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"StrumNote"); }
		static ::hx::ObjectPtr< StrumNote_obj > __new(Float x,Float y,int leData,int player);
		static ::hx::ObjectPtr< StrumNote_obj > __alloc(::hx::Ctx *_hx_ctx,Float x,Float y,int leData,int player);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~StrumNote_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("StrumNote",bb,59,01,92); }

		 ::ColorSwap colorSwap;
		Float resetAnim;
		int noteData;
		Float direction;
		int player;
		::String texture;
		::String set_texture(::String value);
		::Dynamic set_texture_dyn();

		void reloadNote();
		::Dynamic reloadNote_dyn();

		void postAddedToGroup();
		::Dynamic postAddedToGroup_dyn();

		void update(Float elapsed);

		void playAnim(::String anim, ::Dynamic force);
		::Dynamic playAnim_dyn();

};


#endif /* INCLUDED_StrumNote */ 
