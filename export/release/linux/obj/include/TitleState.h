#ifndef INCLUDED_TitleState
#define INCLUDED_TitleState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
HX_DECLARE_CLASS0(Alphabet)
HX_DECLARE_CLASS0(ColorSwap)
HX_DECLARE_CLASS0(MusicBeatState)
HX_DECLARE_CLASS0(TitleState)
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
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES TitleState_obj : public  ::MusicBeatState_obj
{
	public:
		typedef  ::MusicBeatState_obj super;
		typedef TitleState_obj OBJ_;
		TitleState_obj();

	public:
		enum { _hx_ClassId = 0x22c6bd01 };

		void __construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="TitleState")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"TitleState"); }
		static ::hx::ObjectPtr< TitleState_obj > __new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		static ::hx::ObjectPtr< TitleState_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TitleState_obj();

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
		::String __ToString() const { return HX_("TitleState",79,8d,a1,8c); }

		static void __boot();
		static ::Array< int > muteKeys;
		static ::Array< int > volumeDownKeys;
		static ::Array< int > volumeUpKeys;
		static bool initialized;
		static ::String updateVersion;
		static bool closedState;
		 ::flixel::FlxSprite blackScreen;
		 ::flixel::group::FlxTypedGroup credGroup;
		 ::Alphabet credTextShit;
		 ::flixel::group::FlxTypedGroup textGroup;
		 ::flixel::FlxSprite ngSpr;
		::Array< ::String > curWacky;
		 ::flixel::FlxSprite wackyImage;
		bool easterEggEnabled;
		::Array< int > easterEggKeyCombination;
		::Array< int > lastKeysPressed;
		bool mustUpdate;
		 ::Dynamic titleJSON;
		void create();

		 ::flixel::FlxSprite logoBl;
		 ::flixel::FlxSprite logo;
		 ::flixel::FlxSprite gfDance;
		bool danceLeft;
		 ::flixel::FlxSprite titleText;
		 ::ColorSwap swagShader;
		void startIntro();
		::Dynamic startIntro_dyn();

		::Array< ::Dynamic> getIntroTextShit();
		::Dynamic getIntroTextShit_dyn();

		bool transitioning;
		void update(Float elapsed);

		void createCoolText(::Array< ::String > textArray, ::Dynamic offset);
		::Dynamic createCoolText_dyn();

		void addMoreText(::String text, ::Dynamic offset);
		::Dynamic addMoreText_dyn();

		void deleteCoolText();
		::Dynamic deleteCoolText_dyn();

		int sickBeats;
		void beatHit();

		bool skippedIntro;
		void skipIntro();
		::Dynamic skipIntro_dyn();

};


#endif /* INCLUDED_TitleState */ 
