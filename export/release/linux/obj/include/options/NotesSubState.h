#ifndef INCLUDED_options_NotesSubState
#define INCLUDED_options_NotesSubState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_MusicBeatSubstate
#include <MusicBeatSubstate.h>
#endif
HX_DECLARE_CLASS0(Alphabet)
HX_DECLARE_CLASS0(ColorSwap)
HX_DECLARE_CLASS0(MusicBeatSubstate)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS1(flixel,FlxSubState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(options,NotesSubState)

namespace options{


class HXCPP_CLASS_ATTRIBUTES NotesSubState_obj : public  ::MusicBeatSubstate_obj
{
	public:
		typedef  ::MusicBeatSubstate_obj super;
		typedef NotesSubState_obj OBJ_;
		NotesSubState_obj();

	public:
		enum { _hx_ClassId = 0x1154fc14 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="options.NotesSubState")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"options.NotesSubState"); }
		static ::hx::ObjectPtr< NotesSubState_obj > __new();
		static ::hx::ObjectPtr< NotesSubState_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~NotesSubState_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("NotesSubState",b2,5d,1f,9a); }

		static void __boot();
		static int curSelected;
		static int typeSelected;
		 ::flixel::group::FlxTypedGroup grpNumbers;
		 ::flixel::group::FlxTypedGroup grpNotes;
		::Array< ::Dynamic> shaderArray;
		Float curValue;
		Float holdTime;
		int nextAccept;
		 ::flixel::FlxSprite blackBG;
		 ::Alphabet hsbText;
		int posX;
		bool changingNote;
		void update(Float elapsed);

		void changeSelection(::hx::Null< int >  change);
		::Dynamic changeSelection_dyn();

		void changeType(::hx::Null< int >  change);
		::Dynamic changeType_dyn();

		void resetValue(int selected,int type);
		::Dynamic resetValue_dyn();

		void updateValue(::hx::Null< Float >  change);
		::Dynamic updateValue_dyn();

};

} // end namespace options

#endif /* INCLUDED_options_NotesSubState */ 
