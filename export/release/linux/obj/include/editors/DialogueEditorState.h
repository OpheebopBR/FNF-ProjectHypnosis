#ifndef INCLUDED_editors_DialogueEditorState
#define INCLUDED_editors_DialogueEditorState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
HX_DECLARE_CLASS0(Alphabet)
HX_DECLARE_CLASS0(DialogueCharacter)
HX_DECLARE_CLASS0(MusicBeatState)
HX_DECLARE_CLASS1(editors,DialogueEditorState)
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


class HXCPP_CLASS_ATTRIBUTES DialogueEditorState_obj : public  ::MusicBeatState_obj
{
	public:
		typedef  ::MusicBeatState_obj super;
		typedef DialogueEditorState_obj OBJ_;
		DialogueEditorState_obj();

	public:
		enum { _hx_ClassId = 0x1ef2e476 };

		void __construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="editors.DialogueEditorState")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"editors.DialogueEditorState"); }
		static ::hx::ObjectPtr< DialogueEditorState_obj > __new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		static ::hx::ObjectPtr< DialogueEditorState_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DialogueEditorState_obj();

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
		::String __ToString() const { return HX_("DialogueEditorState",cc,ba,20,44); }

		static void __boot();
		static ::String DEFAULT_TEXT;
		static Float DEFAULT_SPEED;
		static ::String DEFAULT_BUBBLETYPE;
		 ::DialogueCharacter character;
		 ::flixel::FlxSprite box;
		 ::Alphabet daText;
		 ::flixel::text::FlxText selectedText;
		 ::flixel::text::FlxText animText;
		 ::Dynamic defaultLine;
		 ::Dynamic dialogueFile;
		void create();

		 ::flixel::addons::ui::FlxUITabMenu UI_box;
		void addEditorBox();
		::Dynamic addEditorBox_dyn();

		void addSongBox();
		::Dynamic addSongBox_dyn();

		 ::flixel::addons::ui::FlxUIInputText characterInputText;
		 ::flixel::addons::ui::FlxUIInputText lineInputText;
		 ::flixel::addons::ui::FlxUICheckBox angryCheckbox;
		 ::flixel::addons::ui::FlxUINumericStepper speedStepper;
		void addDialogueLineUI();
		::Dynamic addDialogueLineUI_dyn();

		 ::flixel::addons::ui::FlxUIInputText songInputText;
		void addSongUI();
		::Dynamic addSongUI_dyn();

		 ::Dynamic copyDefaultLine();
		::Dynamic copyDefaultLine_dyn();

		void updateTextBox();
		::Dynamic updateTextBox_dyn();

		void reloadCharacter();
		::Dynamic reloadCharacter_dyn();

		void reloadText(::hx::Null< Float >  speed);
		::Dynamic reloadText_dyn();

		void getEvent(::String id, ::Dynamic sender, ::Dynamic data,::cpp::VirtualArray params);

		int curSelected;
		int curAnim;
		::Array< ::Dynamic> blockPressWhileTypingOn;
		bool transitioning;
		void update(Float elapsed);

		void changeText(::hx::Null< int >  add);
		::Dynamic changeText_dyn();

		void characterAnimSpeed();
		::Dynamic characterAnimSpeed_dyn();

		::String ClipboardAdd(::String prefix);
		::Dynamic ClipboardAdd_dyn();

		 ::openfl::net::FileReference _file;
		void loadDialogue();
		::Dynamic loadDialogue_dyn();

		void onLoadComplete( ::openfl::events::Event _);
		::Dynamic onLoadComplete_dyn();

		void onLoadCancel( ::openfl::events::Event _);
		::Dynamic onLoadCancel_dyn();

		void onLoadError( ::openfl::events::IOErrorEvent _);
		::Dynamic onLoadError_dyn();

		void saveDialogue();
		::Dynamic saveDialogue_dyn();

		void onSaveComplete( ::openfl::events::Event _);
		::Dynamic onSaveComplete_dyn();

		void onSaveCancel( ::openfl::events::Event _);
		::Dynamic onSaveCancel_dyn();

		void onSaveError( ::openfl::events::IOErrorEvent _);
		::Dynamic onSaveError_dyn();

};

} // end namespace editors

#endif /* INCLUDED_editors_DialogueEditorState */ 
