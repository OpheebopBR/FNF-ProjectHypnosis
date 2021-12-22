#ifndef INCLUDED_editors_MenuCharacterEditorState
#define INCLUDED_editors_MenuCharacterEditorState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
HX_DECLARE_CLASS0(MusicBeatState)
HX_DECLARE_CLASS1(editors,MenuCharacterEditorState)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS1(flixel,IFlxBasic)
HX_DECLARE_CLASS1(flixel,IFlxSprite)
HX_DECLARE_CLASS3(flixel,addons,transition,FlxTransitionableState)
HX_DECLARE_CLASS3(flixel,addons,transition,TransitionData)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxInputText)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUICheckBox)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIGroup)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIInputText)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUINumericStepper)
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


class HXCPP_CLASS_ATTRIBUTES MenuCharacterEditorState_obj : public  ::MusicBeatState_obj
{
	public:
		typedef  ::MusicBeatState_obj super;
		typedef MenuCharacterEditorState_obj OBJ_;
		MenuCharacterEditorState_obj();

	public:
		enum { _hx_ClassId = 0x39d1ff1c };

		void __construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="editors.MenuCharacterEditorState")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"editors.MenuCharacterEditorState"); }
		static ::hx::ObjectPtr< MenuCharacterEditorState_obj > __new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		static ::hx::ObjectPtr< MenuCharacterEditorState_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~MenuCharacterEditorState_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("MenuCharacterEditorState",5a,43,53,a7); }

		 ::flixel::group::FlxTypedGroup grpWeekCharacters;
		 ::Dynamic characterFile;
		 ::flixel::text::FlxText txtOffsets;
		::Array< ::String > defaultCharacters;
		void create();

		 ::flixel::addons::ui::FlxUITabMenu UI_typebox;
		 ::flixel::addons::ui::FlxUITabMenu UI_mainbox;
		::Array< ::Dynamic> blockPressWhileTypingOn;
		void addEditorBox();
		::Dynamic addEditorBox_dyn();

		 ::flixel::addons::ui::FlxUICheckBox opponentCheckbox;
		 ::flixel::addons::ui::FlxUICheckBox boyfriendCheckbox;
		 ::flixel::addons::ui::FlxUICheckBox girlfriendCheckbox;
		int curTypeSelected;
		void addTypeUI();
		::Dynamic addTypeUI_dyn();

		 ::flixel::addons::ui::FlxUIInputText imageInputText;
		 ::flixel::addons::ui::FlxUIInputText idleInputText;
		 ::flixel::addons::ui::FlxUIInputText confirmInputText;
		 ::flixel::text::FlxText confirmDescText;
		 ::flixel::addons::ui::FlxUINumericStepper scaleStepper;
		void addCharacterUI();
		::Dynamic addCharacterUI_dyn();

		void updateCharTypeBox();
		::Dynamic updateCharTypeBox_dyn();

		void updateCharacters();
		::Dynamic updateCharacters_dyn();

		void reloadSelectedCharacter();
		::Dynamic reloadSelectedCharacter_dyn();

		void getEvent(::String id, ::Dynamic sender, ::Dynamic data,::cpp::VirtualArray params);

		void update(Float elapsed);

		void updateOffset();
		::Dynamic updateOffset_dyn();

		 ::openfl::net::FileReference _file;
		void loadCharacter();
		::Dynamic loadCharacter_dyn();

		void onLoadComplete( ::openfl::events::Event _);
		::Dynamic onLoadComplete_dyn();

		void onLoadCancel( ::openfl::events::Event _);
		::Dynamic onLoadCancel_dyn();

		void onLoadError( ::openfl::events::IOErrorEvent _);
		::Dynamic onLoadError_dyn();

		void saveCharacter();
		::Dynamic saveCharacter_dyn();

		void onSaveComplete( ::openfl::events::Event _);
		::Dynamic onSaveComplete_dyn();

		void onSaveCancel( ::openfl::events::Event _);
		::Dynamic onSaveCancel_dyn();

		void onSaveError( ::openfl::events::IOErrorEvent _);
		::Dynamic onSaveError_dyn();

};

} // end namespace editors

#endif /* INCLUDED_editors_MenuCharacterEditorState */ 
