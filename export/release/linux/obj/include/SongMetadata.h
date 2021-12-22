#ifndef INCLUDED_SongMetadata
#define INCLUDED_SongMetadata

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(SongMetadata)



class HXCPP_CLASS_ATTRIBUTES SongMetadata_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef SongMetadata_obj OBJ_;
		SongMetadata_obj();

	public:
		enum { _hx_ClassId = 0x17e3920c };

		void __construct(::String song,int week,::String songCharacter,int color);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="SongMetadata")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"SongMetadata"); }
		static ::hx::ObjectPtr< SongMetadata_obj > __new(::String song,int week,::String songCharacter,int color);
		static ::hx::ObjectPtr< SongMetadata_obj > __alloc(::hx::Ctx *_hx_ctx,::String song,int week,::String songCharacter,int color);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SongMetadata_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SongMetadata",84,70,6d,ca); }

		::String songName;
		int week;
		::String songCharacter;
		int color;
		::String folder;
};


#endif /* INCLUDED_SongMetadata */ 
