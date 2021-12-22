#ifndef INCLUDED_editors_WeekEditorState
#define INCLUDED_editors_WeekEditorState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
HX_DECLARE_CLASS0(MenuItem)
HX_DECLARE_CLASS0(MusicBeatState)
HX_DECLARE_CLASS1(editors,WeekEditorState)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS1(flixel,IFlxBasic)
HX_DECLARE_CLASS1(flixel,IFlxSprite)
HX_DECLARE_CLASS3(flixel,addons,transition,FlxTransitionableState)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxInputText)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUICheckBox)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIGroup)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIInputText)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIState)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUITabMenu)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,ICursorPointable)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IEventGetter)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIClickable)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIState)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIWidget)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IHasParams)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,ILabeled)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IResizable)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(openfl,events,ErrorEvent)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IOErrorEvent)
HX_DECLARE_CLASS2(openfl,events,TextEvent)
HX_DECLARE_CLASS2(openfl,net,FileReference)

namespace editors{


class HXCPP_CLASS_ATTRIBUTES WeekEditorState_obj : public  ::MusicBeatState_obj
{
	public:
		typedef  ::MusicBeatState_obj super;
		typedef WeekEditorState_obj OBJ_;
		WeekEditorState_obj();

	public:
		enum { _hx_ClassId = 0x088951ee };

		void __construct( ::Dynamic weekFile);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="editors.WeekEditorState")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"editors.WeekEditorState"); }
		static ::hx::ObjectPtr< WeekEditorState_obj > __new( ::Dynamic weekFile);
		static ::hx::ObjectPtr< WeekEditorState_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic weekFile);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~WeekEditorState_obj();

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
		::String __ToString() const { return HX_("WeekEditorState",70,8d,79,6c); }

		static void __boot();
		static ::String weekFileName;
		static  ::openfl::net::FileReference _file;
		static void loadWeek();
		static ::Dynamic loadWeek_dyn();

		static  ::Dynamic loadedWeek;
		static bool loadError;
		static void onLoadComplete( ::openfl::events::Event _);
		static ::Dynamic onLoadComplete_dyn();

		static void onLoadCancel( ::openfl::events::Event _);
		static ::Dynamic onLoadCancel_dyn();

		static void onLoadError( ::openfl::events::IOErrorEvent _);
		static ::Dynamic onLoadError_dyn();

		static void saveWeek( ::Dynamic weekFile);
		static ::Dynamic saveWeek_dyn();

		static void onSaveComplete( ::openfl::events::Event _);
		static ::Dynamic onSaveComplete_dyn();

		static void onSaveCancel( ::openfl::events::Event _);
		static ::Dynamic onSaveCancel_dyn();

		static void onSaveError( ::openfl::events::IOErrorEvent _);
		static ::Dynamic onSaveError_dyn();

		 ::flixel::text::FlxText txtWeekTitle;
		 ::flixel::FlxSprite bgSprite;
		 ::flixel::FlxSprite lock;
		 ::flixel::text::FlxText txtTracklist;
		 ::flixel::group::FlxTypedGroup grpWeekCharacters;
		 ::MenuItem weekThing;
		 ::flixel::text::FlxText missingFileText;
		 ::Dynamic weekFile;
		void create();

		 ::flixel::addons::ui::FlxUITabMenu UI_box;
		::Array< ::Dynamic> blockPressWhileTypingOn;
		void addEditorBox();
		::Dynamic addEditorBox_dyn();

		 ::flixel::addons::ui::FlxUIInputText songsInputText;
		 ::flixel::addons::ui::FlxUIInputText backgroundInputText;
		 ::flixel::addons::ui::FlxUIInputText displayNameInputText;
		 ::flixel::addons::ui::FlxUIInputText weekNameInputText;
		 ::flixel::addons::ui::FlxUIInputText weekFileInputText;
		 ::flixel::addons::ui::FlxUIInputText opponentInputText;
		 ::flixel::addons::ui::FlxUIInputText boyfriendInputText;
		 ::flixel::addons::ui::FlxUIInputText girlfriendInputText;
		 ::flixel::addons::ui::FlxUICheckBox hideCheckbox;
		void addWeekUI();
		::Dynamic addWeekUI_dyn();

		 ::flixel::addons::ui::FlxUIInputText weekBeforeInputText;
		 ::flixel::addons::ui::FlxUIInputText difficultiesInputText;
		 ::flixel::addons::ui::FlxUICheckBox lockedCheckbox;
		void addOtherUI();
		::Dynamic addOtherUI_dyn();

		void reloadAllShit();
		::Dynamic reloadAllShit_dyn();

		void updateText();
		::Dynamic updateText_dyn();

		void reloadBG();
		::Dynamic reloadBG_dyn();

		void reloadWeekThing();
		::Dynamic reloadWeekThing_dyn();

		void getEvent(::String id, ::Dynamic sender, ::Dynamic data,::cpp::VirtualArray params);

		void update(Float elapsed);

		void recalculateStuffPosition();
		::Dynamic recalculateStuffPosition_dyn();

};

} // end namespace editors

#endif /* INCLUDED_editors_WeekEditorState */ 
