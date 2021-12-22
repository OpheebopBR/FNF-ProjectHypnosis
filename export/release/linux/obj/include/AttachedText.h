#ifndef INCLUDED_AttachedText
#define INCLUDED_AttachedText

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Alphabet
#include <Alphabet.h>
#endif
HX_DECLARE_CLASS0(Alphabet)
HX_DECLARE_CLASS0(AttachedText)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES AttachedText_obj : public  ::Alphabet_obj
{
	public:
		typedef  ::Alphabet_obj super;
		typedef AttachedText_obj OBJ_;
		AttachedText_obj();

	public:
		enum { _hx_ClassId = 0x3fa6a911 };

		void __construct(::String __o_text, ::Dynamic __o_offsetX, ::Dynamic __o_offsetY, ::Dynamic __o_bold, ::Dynamic __o_scale);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="AttachedText")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"AttachedText"); }
		static ::hx::ObjectPtr< AttachedText_obj > __new(::String __o_text, ::Dynamic __o_offsetX, ::Dynamic __o_offsetY, ::Dynamic __o_bold, ::Dynamic __o_scale);
		static ::hx::ObjectPtr< AttachedText_obj > __alloc(::hx::Ctx *_hx_ctx,::String __o_text, ::Dynamic __o_offsetX, ::Dynamic __o_offsetY, ::Dynamic __o_bold, ::Dynamic __o_scale);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AttachedText_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AttachedText",51,56,c5,56); }

		Float offsetX;
		Float offsetY;
		 ::flixel::FlxSprite sprTracker;
		bool copyVisible;
		bool copyAlpha;
		void update(Float elapsed);

};


#endif /* INCLUDED_AttachedText */ 
