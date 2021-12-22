#ifndef INCLUDED_PlayState
#define INCLUDED_PlayState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
HX_DECLARE_CLASS0(AchievementObject)
HX_DECLARE_CLASS0(AttachedSprite)
HX_DECLARE_CLASS0(BGSprite)
HX_DECLARE_CLASS0(BackgroundGirls)
HX_DECLARE_CLASS0(Boyfriend)
HX_DECLARE_CLASS0(Character)
HX_DECLARE_CLASS0(DialogueBox)
HX_DECLARE_CLASS0(DialogueBoxPsych)
HX_DECLARE_CLASS0(FunkinLua)
HX_DECLARE_CLASS0(HealthIcon)
HX_DECLARE_CLASS0(ModchartSprite)
HX_DECLARE_CLASS0(MusicBeatState)
HX_DECLARE_CLASS0(Note)
HX_DECLARE_CLASS0(PlayState)
HX_DECLARE_CLASS0(WiggleEffect)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxCamera)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS1(flixel,FlxSubState)
HX_DECLARE_CLASS3(flixel,addons,transition,FlxTransitionableState)
HX_DECLARE_CLASS3(flixel,addons,transition,TransitionData)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIState)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IEventGetter)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,_hx_system,FlxSound)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,tweens,FlxTween)
HX_DECLARE_CLASS2(flixel,ui,FlxBar)
HX_DECLARE_CLASS2(flixel,util,FlxTimer)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,KeyboardEvent)



class HXCPP_CLASS_ATTRIBUTES PlayState_obj : public  ::MusicBeatState_obj
{
	public:
		typedef  ::MusicBeatState_obj super;
		typedef PlayState_obj OBJ_;
		PlayState_obj();

	public:
		enum { _hx_ClassId = 0x0a05f89d };

		void __construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="PlayState")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"PlayState"); }
		static ::hx::ObjectPtr< PlayState_obj > __new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		static ::hx::ObjectPtr< PlayState_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PlayState_obj();

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
		::String __ToString() const { return HX_("PlayState",5d,83,c2,46); }

		static void __boot();
		static int STRUM_X;
		static int STRUM_X_MIDDLESCROLL;
		static ::cpp::VirtualArray ratingStuff;
		static ::cpp::VirtualArray osuRatings;
		static ::String curStage;
		static bool isPixelStage;
		static  ::Dynamic SONG;
		static bool isStoryMode;
		static int storyWeek;
		static ::Array< ::String > storyPlaylist;
		static int storyDifficulty;
		static  ::flixel::math::FlxPoint prevCamFollow;
		static  ::flixel::FlxObject prevCamFollowPos;
		static bool changedDifficulty;
		static bool chartingMode;
		static int campaignScore;
		static int campaignMisses;
		static bool seenCutscene;
		static int deathCounter;
		static Float daPixelZoom;
		static  ::PlayState instance;
		static void cancelMusicFadeTween();
		static ::Dynamic cancelMusicFadeTween_dyn();

		 ::haxe::ds::StringMap modchartTweens;
		 ::haxe::ds::StringMap modchartSprites;
		 ::haxe::ds::StringMap modchartTimers;
		 ::haxe::ds::StringMap modchartSounds;
		 ::haxe::ds::StringMap modchartTexts;
		bool isCameraOnForcedPos;
		 ::haxe::ds::StringMap boyfriendMap;
		 ::haxe::ds::StringMap dadMap;
		 ::haxe::ds::StringMap gfMap;
		Float BF_X;
		Float BF_Y;
		Float DAD_X;
		Float DAD_Y;
		Float GF_X;
		Float GF_Y;
		 ::flixel::tweens::FlxTween songSpeedTween;
		Float songSpeed;
		 ::flixel::group::FlxTypedSpriteGroup boyfriendGroup;
		 ::flixel::group::FlxTypedSpriteGroup dadGroup;
		 ::flixel::group::FlxTypedSpriteGroup gfGroup;
		 ::flixel::_hx_system::FlxSound vocals;
		 ::Character dad;
		 ::Character gf;
		 ::Boyfriend boyfriend;
		 ::flixel::group::FlxTypedGroup notes;
		::Array< ::Dynamic> unspawnNotes;
		::cpp::VirtualArray eventNotes;
		 ::flixel::FlxSprite strumLine;
		 ::flixel::math::FlxPoint camFollow;
		 ::flixel::FlxObject camFollowPos;
		 ::flixel::FlxSprite laneunderlay;
		 ::flixel::FlxSprite laneunderlayOpponent;
		 ::flixel::group::FlxTypedGroup strumLineNotes;
		 ::flixel::group::FlxTypedGroup opponentStrums;
		 ::flixel::group::FlxTypedGroup playerStrums;
		 ::flixel::group::FlxTypedGroup grpNoteSplashes;
		bool camZooming;
		::String curSong;
		int gfSpeed;
		Float health;
		int combo;
		 ::AttachedSprite healthBarBG;
		 ::flixel::ui::FlxBar healthBar;
		Float songPercent;
		 ::AttachedSprite timeBarBG;
		 ::flixel::ui::FlxBar timeBar;
		int sicks;
		int goods;
		int bads;
		int shits;
		bool generatedMusic;
		bool endingSong;
		bool startingSong;
		bool updateTime;
		Float healthGain;
		Float healthLoss;
		bool instakillOnMiss;
		bool cpuControlled;
		bool practiceMode;
		Float botplaySine;
		 ::flixel::text::FlxText botplayTxt;
		 ::HealthIcon iconP1;
		 ::HealthIcon iconP2;
		 ::flixel::FlxCamera camHUD;
		 ::flixel::FlxCamera camGame;
		 ::flixel::FlxCamera camOther;
		Float cameraSpeed;
		::Array< ::String > dialogue;
		 ::BGSprite halloweenBG;
		 ::BGSprite halloweenWhite;
		 ::flixel::group::FlxTypedGroup phillyCityLights;
		 ::BGSprite phillyTrain;
		 ::ModchartSprite blammedLightsBlack;
		 ::flixel::tweens::FlxTween blammedLightsBlackTween;
		 ::flixel::group::FlxTypedGroup phillyCityLightsEvent;
		 ::flixel::tweens::FlxTween phillyCityLightsEventTween;
		 ::flixel::_hx_system::FlxSound trainSound;
		int limoKillingState;
		 ::BGSprite limo;
		 ::BGSprite limoMetalPole;
		 ::BGSprite limoLight;
		 ::BGSprite limoCorpse;
		 ::BGSprite limoCorpseTwo;
		 ::BGSprite bgLimo;
		 ::flixel::group::FlxTypedGroup grpLimoParticles;
		 ::flixel::group::FlxTypedGroup grpLimoDancers;
		 ::BGSprite fastCar;
		 ::BGSprite upperBoppers;
		 ::BGSprite bottomBoppers;
		 ::BGSprite santa;
		Float heyTimer;
		 ::BackgroundGirls bgGirls;
		 ::WiggleEffect wiggleShit;
		 ::BGSprite bgGhouls;
		int songScore;
		int songHits;
		int songMisses;
		 ::flixel::text::FlxText scoreTxt;
		 ::flixel::text::FlxText timeTxt;
		 ::flixel::tweens::FlxTween scoreTxtTween;
		 ::flixel::text::FlxText versionTxt;
		Float defaultCamZoom;
		::Array< ::String > singAnimations;
		bool inCutscene;
		Float songLength;
		::String storyDifficultyText;
		::String detailsText;
		::String detailsPausedText;
		::Array< bool > keysPressed;
		Float boyfriendIdleTime;
		bool boyfriendIdled;
		::Array< ::Dynamic> luaArray;
		 ::flixel::group::FlxTypedGroup luaDebugGroup;
		::String introSoundsSuffix;
		::Array< int > debugKeysChart;
		::Array< int > debugKeysCharacter;
		::cpp::VirtualArray keysArray;
		void create();

		Float set_songSpeed(Float value);
		::Dynamic set_songSpeed_dyn();

		void addTextToDebug(::String text);
		::Dynamic addTextToDebug_dyn();

		void reloadHealthBarColors();
		::Dynamic reloadHealthBarColors_dyn();

		void addCharacterToList(::String newCharacter,int type);
		::Dynamic addCharacterToList_dyn();

		void startCharacterLua(::String name);
		::Dynamic startCharacterLua_dyn();

		void startCharacterPos( ::Character _hx_char, ::Dynamic gfCheck);
		::Dynamic startCharacterPos_dyn();

		void startVideo(::String name);
		::Dynamic startVideo_dyn();

		int dialogueCount;
		 ::DialogueBoxPsych psychDialogue;
		void startDialogue( ::Dynamic dialogueFile,::String song);
		::Dynamic startDialogue_dyn();

		void schoolIntro( ::DialogueBox dialogueBox);
		::Dynamic schoolIntro_dyn();

		 ::flixel::util::FlxTimer startTimer;
		 ::flixel::util::FlxTimer finishTimer;
		 ::flixel::FlxSprite countdownReady;
		 ::flixel::FlxSprite countdownSet;
		 ::flixel::FlxSprite countdownGo;
		void startCountdown();
		::Dynamic startCountdown_dyn();

		void startNextDialogue();
		::Dynamic startNextDialogue_dyn();

		void skipDialogue();
		::Dynamic skipDialogue_dyn();

		int previousFrameTime;
		int lastReportedPlayheadPosition;
		Float songTime;
		void startSong();
		::Dynamic startSong_dyn();

		int debugNum;
		 ::haxe::ds::StringMap noteTypeMap;
		 ::haxe::ds::StringMap eventPushedMap;
		void generateSong(::String dataPath);
		::Dynamic generateSong_dyn();

		void eventPushed(::cpp::VirtualArray event);
		::Dynamic eventPushed_dyn();

		Float eventNoteEarlyTrigger(::cpp::VirtualArray event);
		::Dynamic eventNoteEarlyTrigger_dyn();

		int sortByShit( ::Note Obj1, ::Note Obj2);
		::Dynamic sortByShit_dyn();

		int sortByTime(::cpp::VirtualArray Obj1,::cpp::VirtualArray Obj2);
		::Dynamic sortByTime_dyn();

		void generateStaticArrows(int player);
		::Dynamic generateStaticArrows_dyn();

		void openSubState( ::flixel::FlxSubState SubState);

		void closeSubState();

		void onFocus();

		void onFocusLost();

		void resyncVocals();
		::Dynamic resyncVocals_dyn();

		bool paused;
		bool startedCountdown;
		bool canPause;
		Float limoSpeed;
		void update(Float elapsed);

		void openChartEditor();
		::Dynamic openChartEditor_dyn();

		bool isDead;
		bool doDeathCheck( ::Dynamic skipHealthCheck);
		::Dynamic doDeathCheck_dyn();

		void checkEventNote();
		::Dynamic checkEventNote_dyn();

		bool getControl(::String key);
		::Dynamic getControl_dyn();

		void triggerEventNote(::String eventName,::String value1,::String value2);
		::Dynamic triggerEventNote_dyn();

		void moveCameraSection( ::Dynamic id);
		::Dynamic moveCameraSection_dyn();

		 ::flixel::tweens::FlxTween cameraTwn;
		void moveCamera(bool isDad);
		::Dynamic moveCamera_dyn();

		void tweenCamIn();
		::Dynamic tweenCamIn_dyn();

		void snapCamFollowToPos(Float x,Float y);
		::Dynamic snapCamFollowToPos_dyn();

		void finishSong();
		::Dynamic finishSong_dyn();

		bool transitioning;
		void endSong();
		::Dynamic endSong_dyn();

		 ::AchievementObject achievementObj;
		void startAchievement(::String achieve);
		::Dynamic startAchievement_dyn();

		void achievementEnd();
		::Dynamic achievementEnd_dyn();

		void KillNotes();
		::Dynamic KillNotes_dyn();

		int totalPlayed;
		Float totalNotesHit;
		void popUpScore( ::Note note);
		::Dynamic popUpScore_dyn();

		void onKeyPress( ::openfl::events::KeyboardEvent event);
		::Dynamic onKeyPress_dyn();

		void onKeyRelease( ::openfl::events::KeyboardEvent event);
		::Dynamic onKeyRelease_dyn();

		int getKeyFromEvent(int key);
		::Dynamic getKeyFromEvent_dyn();

		void keyShit();
		::Dynamic keyShit_dyn();

		void noteMiss( ::Note daNote);
		::Dynamic noteMiss_dyn();

		void noteMissPress(::hx::Null< int >  direction);
		::Dynamic noteMissPress_dyn();

		void opponentNoteHit( ::Note note);
		::Dynamic opponentNoteHit_dyn();

		void goodNoteHit( ::Note note);
		::Dynamic goodNoteHit_dyn();

		void spawnNoteSplashOnNote( ::Note note);
		::Dynamic spawnNoteSplashOnNote_dyn();

		void spawnNoteSplash(Float x,Float y,int data, ::Note note);
		::Dynamic spawnNoteSplash_dyn();

		bool fastCarCanDrive;
		void resetFastCar();
		::Dynamic resetFastCar_dyn();

		 ::flixel::util::FlxTimer carTimer;
		void fastCarDrive();
		::Dynamic fastCarDrive_dyn();

		bool trainMoving;
		Float trainFrameTiming;
		int trainCars;
		bool trainFinishing;
		int trainCooldown;
		void trainStart();
		::Dynamic trainStart_dyn();

		bool startedMoving;
		void updateTrainPos();
		::Dynamic updateTrainPos_dyn();

		void trainReset();
		::Dynamic trainReset_dyn();

		void lightningStrikeShit();
		::Dynamic lightningStrikeShit_dyn();

		void killHenchmen();
		::Dynamic killHenchmen_dyn();

		void resetLimoKill();
		::Dynamic resetLimoKill_dyn();

		bool preventLuaRemove;
		void destroy();

		void removeLua( ::FunkinLua lua);
		::Dynamic removeLua_dyn();

		int lastStepHit;
		void stepHit();

		int lightningStrikeBeat;
		int lightningOffset;
		int lastBeatHit;
		void beatHit();

		::Array< ::Dynamic> closeLuas;
		 ::Dynamic callOnLuas(::String event,::cpp::VirtualArray args);
		::Dynamic callOnLuas_dyn();

		void setOnLuas(::String variable, ::Dynamic arg);
		::Dynamic setOnLuas_dyn();

		void StrumPlayAnim(bool isDad,int id,Float time);
		::Dynamic StrumPlayAnim_dyn();

		::String ratingName;
		Float ratingPercent;
		::String ratingFC;
		void RecalculateRating();
		::Dynamic RecalculateRating_dyn();

		::String checkForAchievement(::Array< ::String > achievesToCheck);
		::Dynamic checkForAchievement_dyn();

		int curLight;
		int curLightEvent;
};


#endif /* INCLUDED_PlayState */ 
