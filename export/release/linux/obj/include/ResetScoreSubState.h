#ifndef INCLUDED_ResetScoreSubState
#define INCLUDED_ResetScoreSubState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_MusicBeatSubstate
#include <MusicBeatSubstate.h>
#endif
HX_DECLARE_CLASS0(Alphabet)
HX_DECLARE_CLASS0(HealthIcon)
HX_DECLARE_CLASS0(MusicBeatSubstate)
HX_DECLARE_CLASS0(ResetScoreSubState)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS1(flixel,FlxSubState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES ResetScoreSubState_obj : public  ::MusicBeatSubstate_obj
{
	public:
		typedef  ::MusicBeatSubstate_obj super;
		typedef ResetScoreSubState_obj OBJ_;
		ResetScoreSubState_obj();

	public:
		enum { _hx_ClassId = 0x5d837fd8 };

		void __construct(::String song,int difficulty,::String character,::hx::Null< int >  __o_week);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="ResetScoreSubState")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"ResetScoreSubState"); }
		static ::hx::ObjectPtr< ResetScoreSubState_obj > __new(::String song,int difficulty,::String character,::hx::Null< int >  __o_week);
		static ::hx::ObjectPtr< ResetScoreSubState_obj > __alloc(::hx::Ctx *_hx_ctx,::String song,int difficulty,::String character,::hx::Null< int >  __o_week);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ResetScoreSubState_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ResetScoreSubState",b4,92,cb,9e); }

		 ::flixel::FlxSprite bg;
		::Array< ::Dynamic> alphabetArray;
		 ::HealthIcon icon;
		bool onYes;
		 ::Alphabet yesText;
		 ::Alphabet noText;
		::String song;
		int difficulty;
		int week;
		void update(Float elapsed);

		void updateOptions();
		::Dynamic updateOptions_dyn();

};


#endif /* INCLUDED_ResetScoreSubState */ 
