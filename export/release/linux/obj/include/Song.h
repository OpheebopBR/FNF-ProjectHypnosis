#ifndef INCLUDED_Song
#define INCLUDED_Song

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_4e288e2989890fc6_35_new)
HX_DECLARE_CLASS0(Song)



class HXCPP_CLASS_ATTRIBUTES Song_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Song_obj OBJ_;
		Song_obj();

	public:
		enum { _hx_ClassId = 0x0b844619 };

		void __construct(::String song,::Array< ::Dynamic> notes,Float bpm);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="Song")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"Song"); }

		inline static ::hx::ObjectPtr< Song_obj > __new(::String song,::Array< ::Dynamic> notes,Float bpm) {
			::hx::ObjectPtr< Song_obj > __this = new Song_obj();
			__this->__construct(song,notes,bpm);
			return __this;
		}

		inline static ::hx::ObjectPtr< Song_obj > __alloc(::hx::Ctx *_hx_ctx,::String song,::Array< ::Dynamic> notes,Float bpm) {
			Song_obj *__this = (Song_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Song_obj), true, "Song"));
			*(void **)__this = Song_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_4e288e2989890fc6_35_new)
HXLINE(  50)		( ( ::Song)(__this) )->gfVersion = HX_("gf",1f,5a,00,00);
HXLINE(  49)		( ( ::Song)(__this) )->player3 = HX_("gf",1f,5a,00,00);
HXLINE(  48)		( ( ::Song)(__this) )->player2 = HX_("dad",47,36,4c,00);
HXLINE(  47)		( ( ::Song)(__this) )->player1 = HX_("bf",c4,55,00,00);
HXLINE(  44)		( ( ::Song)(__this) )->speed = ((Float)1);
HXLINE(  41)		( ( ::Song)(__this) )->needsVoices = true;
HXLINE(  87)		( ( ::Song)(__this) )->song = song;
HXLINE(  88)		( ( ::Song)(__this) )->notes = notes;
HXLINE(  89)		( ( ::Song)(__this) )->bpm = bpm;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Song_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Song",f5,4f,31,37); }

		static void onLoadJson( ::Dynamic songJson);
		static ::Dynamic onLoadJson_dyn();

		static  ::Dynamic loadFromJson(::String jsonInput,::String folder);
		static ::Dynamic loadFromJson_dyn();

		static  ::Dynamic parseJSONshit(::String rawJson);
		static ::Dynamic parseJSONshit_dyn();

		::String song;
		::Array< ::Dynamic> notes;
		::cpp::VirtualArray events;
		Float bpm;
		bool needsVoices;
		::String arrowSkin;
		::String splashSkin;
		Float speed;
		::String stage;
		::String player1;
		::String player2;
		::String player3;
		::String gfVersion;
};


#endif /* INCLUDED_Song */ 
