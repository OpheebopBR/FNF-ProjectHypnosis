#ifndef INCLUDED_FreeplayState
#define INCLUDED_FreeplayState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
HX_DECLARE_CLASS0(FreeplayState)
HX_DECLARE_CLASS0(HealthIcon)
HX_DECLARE_CLASS0(MusicBeatState)
HX_DECLARE_CLASS0(SongMetadata)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS3(flixel,addons,transition,FlxTransitionableState)
HX_DECLARE_CLASS3(flixel,addons,transition,TransitionData)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIState)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IEventGetter)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,_hx_system,FlxSound)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,tweens,FlxTween)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES FreeplayState_obj : public  ::MusicBeatState_obj
{
	public:
		typedef  ::MusicBeatState_obj super;
		typedef FreeplayState_obj OBJ_;
		FreeplayState_obj();

	public:
		enum { _hx_ClassId = 0x5f09868d };

		void __construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="FreeplayState")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"FreeplayState"); }
		static ::hx::ObjectPtr< FreeplayState_obj > __new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		static ::hx::ObjectPtr< FreeplayState_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FreeplayState_obj();

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
		::String __ToString() const { return HX_("FreeplayState",31,61,f2,b3); }

		static void __boot();
		static int curSelected;
		static ::String lastDifficultyName;
		static bool curPlaying;
		static int instPlaying;
		static  ::flixel::_hx_system::FlxSound vocals;
		static void destroyFreeplayVocals();
		static ::Dynamic destroyFreeplayVocals_dyn();

		::Array< ::Dynamic> songs;
		 ::flixel::text::FlxText selector;
		int curDifficulty;
		 ::flixel::FlxSprite scoreBG;
		 ::flixel::text::FlxText scoreText;
		 ::flixel::text::FlxText diffText;
		int lerpScore;
		Float lerpRating;
		int intendedScore;
		Float intendedRating;
		 ::flixel::group::FlxTypedGroup grpSongs;
		::Array< ::Dynamic> iconArray;
		 ::flixel::FlxSprite bg;
		int intendedColor;
		 ::flixel::tweens::FlxTween colorTween;
		void create();

		void closeSubState();

		void addSong(::String songName,int weekNum,::String songCharacter,int color);
		::Dynamic addSong_dyn();

		void update(Float elapsed);

		void beatHit();

		void changeDiff(::hx::Null< int >  change);
		::Dynamic changeDiff_dyn();

		void changeSelection(::hx::Null< int >  change,::hx::Null< bool >  playSound);
		::Dynamic changeSelection_dyn();

		void positionHighscore();
		::Dynamic positionHighscore_dyn();

};


#endif /* INCLUDED_FreeplayState */ 
