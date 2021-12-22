#ifndef INCLUDED_ModMetadata
#define INCLUDED_ModMetadata

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Alphabet)
HX_DECLARE_CLASS0(AttachedSprite)
HX_DECLARE_CLASS0(ModMetadata)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES ModMetadata_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ModMetadata_obj OBJ_;
		ModMetadata_obj();

	public:
		enum { _hx_ClassId = 0x56442971 };

		void __construct(::String folder);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="ModMetadata")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"ModMetadata"); }
		static ::hx::ObjectPtr< ModMetadata_obj > __new(::String folder);
		static ::hx::ObjectPtr< ModMetadata_obj > __alloc(::hx::Ctx *_hx_ctx,::String folder);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ModMetadata_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ModMetadata",31,e4,48,a3); }

		::String folder;
		::String name;
		::String description;
		int color;
		bool restart;
		 ::Alphabet alphabet;
		 ::AttachedSprite icon;
};


#endif /* INCLUDED_ModMetadata */ 
