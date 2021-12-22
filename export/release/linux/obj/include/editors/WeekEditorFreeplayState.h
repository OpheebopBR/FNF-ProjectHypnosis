#ifndef INCLUDED_editors_WeekEditorFreeplayState
#define INCLUDED_editors_WeekEditorFreeplayState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
HX_DECLARE_CLASS0(HealthIcon)
HX_DECLARE_CLASS0(MusicBeatState)
HX_DECLARE_CLASS1(editors,WeekEditorFreeplayState)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS1(flixel,IFlxBasic)
HX_DECLARE_CLASS1(flixel,IFlxSprite)
HX_DECLARE_CLASS3(flixel,addons,transition,FlxTransitionableState)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxInputText)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIGroup)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIInputText)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUINumericStepper)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIState)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUITabMenu)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IEventGetter)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIClickable)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIState)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIWidget)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IHasParams)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IResizable)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace editors{


class HXCPP_CLASS_ATTRIBUTES WeekEditorFreeplayState_obj : public  ::MusicBeatState_obj
{
	public:
		typedef  ::MusicBeatState_obj super;
		typedef WeekEditorFreeplayState_obj OBJ_;
		WeekEditorFreeplayState_obj();

	public:
		enum { _hx_ClassId = 0x05368392 };

		void __construct( ::Dynamic weekFile);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="editors.WeekEditorFreeplayState")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"editors.WeekEditorFreeplayState"); }
		static ::hx::ObjectPtr< WeekEditorFreeplayState_obj > __new( ::Dynamic weekFile);
		static ::hx::ObjectPtr< WeekEditorFreeplayState_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic weekFile);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~WeekEditorFreeplayState_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("WeekEditorFreeplayState",b0,1f,75,6a); }

		 ::Dynamic weekFile;
		 ::flixel::FlxSprite bg;
		 ::flixel::group::FlxTypedGroup grpSongs;
		::Array< ::Dynamic> iconArray;
		int curSelected;
		void create();

		 ::flixel::addons::ui::FlxUITabMenu UI_box;
		::Array< ::Dynamic> blockPressWhileTypingOn;
		void addEditorBox();
		::Dynamic addEditorBox_dyn();

		void getEvent(::String id, ::Dynamic sender, ::Dynamic data,::cpp::VirtualArray params);

		 ::flixel::addons::ui::FlxUINumericStepper bgColorStepperR;
		 ::flixel::addons::ui::FlxUINumericStepper bgColorStepperG;
		 ::flixel::addons::ui::FlxUINumericStepper bgColorStepperB;
		 ::flixel::addons::ui::FlxUIInputText iconInputText;
		void addFreeplayUI();
		::Dynamic addFreeplayUI_dyn();

		void updateBG();
		::Dynamic updateBG_dyn();

		void changeSelection(::hx::Null< int >  change);
		::Dynamic changeSelection_dyn();

		void update(Float elapsed);

};

} // end namespace editors

#endif /* INCLUDED_editors_WeekEditorFreeplayState */ 
