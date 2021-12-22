#include <hxcpp.h>

#ifndef INCLUDED_ClientPrefs
#include <ClientPrefs.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_MusicBeatSubstate
#include <MusicBeatSubstate.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_FlxSubState
#include <flixel/FlxSubState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_FPS
#include <openfl/display/FPS.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_options_BaseOptionsMenu
#include <options/BaseOptionsMenu.h>
#endif
#ifndef INCLUDED_options_Option
#include <options/Option.h>
#endif
#ifndef INCLUDED_options_VisualsUISubState
#include <options/VisualsUISubState.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4e14480e50e84747_33_new,"options.VisualsUISubState","new",0xc75f2e1a,"options.VisualsUISubState.new","options/VisualsUISubState.hx",33,0x3f30f917)
static const ::String _hx_array_data_f33bd928_1[] = {
	HX_("Outline",62,3f,0f,af),HX_("Shadow",00,3c,b5,51),HX_("Outline Fast",3a,3c,a7,a0),HX_("None",d8,3e,e3,33),
};
static const ::String _hx_array_data_f33bd928_2[] = {
	HX_("Time Left",fa,08,f2,62),HX_("Time Elapsed",29,71,5d,35),HX_("Song Name",76,e6,ca,de),HX_("Disabled",9c,fd,b5,55),
};
static const ::String _hx_array_data_f33bd928_3[] = {
	HX_("Default",a1,00,15,69),HX_("Forever",87,16,46,a7),HX_("Kade",b7,f2,dc,31),HX_("Simplylove",d8,4f,c6,8a),
};
HX_LOCAL_STACK_FRAME(_hx_pos_4e14480e50e84747_153_onChangeFPSCounter,"options.VisualsUISubState","onChangeFPSCounter",0xf92afa68,"options.VisualsUISubState.onChangeFPSCounter","options/VisualsUISubState.hx",153,0x3f30f917)
namespace options{

void VisualsUISubState_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_4e14480e50e84747_33_new)
HXLINE(  34)		this->title = HX_("Visuals and UI",ea,4a,1e,90);
HXLINE(  35)		this->rpcTitle = HX_("Visuals & UI Settings Menu",d7,56,13,0a);
HXLINE(  37)		 ::options::Option option =  ::options::Option_obj::__alloc( HX_CTX ,HX_("Camera Zooms",45,a6,9b,43),HX_("If unchecked, the camera won't zoom in on a beat hit.",fd,78,13,6b),HX_("camZooms",71,f3,cd,90),HX_("bool",2a,84,1b,41),true,null());
HXLINE(  42)		this->addOption(option);
HXLINE(  44)		 ::options::Option option1 =  ::options::Option_obj::__alloc( HX_CTX ,HX_("Flashing Lights",0b,e4,0d,04),HX_("Uncheck this if you're sensitive to flashing lights!",9e,ed,11,12),HX_("flashing",32,85,e8,99),HX_("bool",2a,84,1b,41),true,null());
HXLINE(  49)		this->addOption(option1);
HXLINE(  52)		 ::options::Option option2 =  ::options::Option_obj::__alloc( HX_CTX ,HX_("FPS Counter",85,ef,54,c9),HX_("If unchecked, hides FPS Counter.",17,fc,a1,74),HX_("showFPS",ec,0a,9a,7b),HX_("bool",2a,84,1b,41),true,null());
HXLINE(  57)		this->addOption(option2);
HXLINE(  58)		option2->onChange = this->onChangeFPSCounter_dyn();
HXLINE(  60)		 ::options::Option option3 =  ::options::Option_obj::__alloc( HX_CTX ,HX_("Hide HUD",59,3a,04,5d),HX_("If checked, hides most HUD elements.",b8,a1,19,66),HX_("hideHud",15,b9,3c,b7),HX_("bool",2a,84,1b,41),false,null());
HXLINE(  65)		this->addOption(option3);
HXLINE(  67)		 ::options::Option option4 =  ::options::Option_obj::__alloc( HX_CTX ,HX_("Letter Grades",b6,2f,05,58),HX_("If checked, Ratings will follow a more Competitive System, \nbased on many rythm games that use this same grading system",1e,f2,52,f7),HX_("osuRatings",e5,da,7e,71),HX_("bool",2a,84,1b,41),false,null());
HXLINE(  72)		this->addOption(option4);
HXLINE(  74)		 ::options::Option option5 =  ::options::Option_obj::__alloc( HX_CTX ,HX_("Note Splashes",83,c7,78,74),HX_("If unchecked, hitting \"Sick!\" notes won't show particles.",eb,88,e6,c4),HX_("noteSplashes",a7,57,29,8d),HX_("bool",2a,84,1b,41),true,null());
HXLINE(  79)		this->addOption(option5);
HXLINE(  81)		 ::options::Option option6 =  ::options::Option_obj::__alloc( HX_CTX ,HX_("Score Text Zoom on Hit",da,24,e2,56),HX_("If unchecked, disables the Score text zooming\neverytime you hit a note.",bc,95,97,3e),HX_("scoreZoom",85,53,bc,e0),HX_("bool",2a,84,1b,41),true,null());
HXLINE(  86)		this->addOption(option6);
HXLINE(  88)		 ::options::Option option7 =  ::options::Option_obj::__alloc( HX_CTX ,HX_("Separate Accuracy from Rating",a9,f7,56,48),HX_("If checked, the game will \nShow Accuracy Percentage and Ratings in separate boxes on the Info Bar",36,bc,ef,3b),HX_("foreverInfo",b5,32,83,9a),HX_("bool",2a,84,1b,41),false,null());
HXLINE(  93)		this->addOption(option7);
HXLINE(  96)		 ::options::Option option8 =  ::options::Option_obj::__alloc( HX_CTX ,HX_("Health Bar Transparency",a9,7c,d2,65),HX_("How much transparent should the health bar and icons be.",16,a5,40,f3),HX_("healthBarAlpha",47,c9,a0,80),HX_("percent",c5,aa,da,78),1,null());
HXLINE( 101)		option8->scrollSpeed = ((Float)1.6);
HXLINE( 102)		option8->minValue = ((Float)0.0);
HXLINE( 103)		option8->maxValue = 1;
HXLINE( 104)		option8->changeValue = ((Float)0.1);
HXLINE( 105)		option8->decimals = 1;
HXLINE( 106)		this->addOption(option8);
HXLINE( 108)		 ::options::Option option9 =  ::options::Option_obj::__alloc( HX_CTX ,HX_("Text Borders:",26,a6,87,ee),HX_("What should the Info Bar and Botplay Text Border look like?",15,59,04,11),HX_("infoTextBorder",87,1f,3f,76),HX_("string",d1,28,30,11),HX_("Outline",62,3f,0f,af),::Array_obj< ::String >::fromData( _hx_array_data_f33bd928_1,4));
HXLINE( 114)		this->addOption(option9);
HXLINE( 116)		 ::options::Option option10 =  ::options::Option_obj::__alloc( HX_CTX ,HX_("Lane Transparency",cc,20,70,ec),HX_("Change your lane underlay's transparency here",27,b0,9f,eb),HX_("underlay",4c,76,1c,71),HX_("float",9c,c5,96,02),true,null());
HXLINE( 121)		option10->displayFormat = HX_("%v",b1,20,00,00);
HXLINE( 122)		option10->scrollSpeed = ( (Float)(100) );
HXLINE( 123)		option10->changeValue = ((Float)0.1);
HXLINE( 124)		option10->decimals = 1;
HXLINE( 125)		option10->minValue = 0;
HXLINE( 126)		option10->maxValue = 1;
HXLINE( 127)		this->addOption(option10);
HXLINE( 129)		 ::options::Option option11 =  ::options::Option_obj::__alloc( HX_CTX ,HX_("Time Bar:",fa,e7,52,5c),HX_("What should the Time Bar display?",bd,00,f8,02),HX_("timeBarType",a0,5d,bb,01),HX_("string",d1,28,30,11),HX_("Time Left",fa,08,f2,62),::Array_obj< ::String >::fromData( _hx_array_data_f33bd928_2,4));
HXLINE( 135)		this->addOption(option11);
HXLINE( 137)		 ::options::Option option12 =  ::options::Option_obj::__alloc( HX_CTX ,HX_("UI Skin:",31,54,16,b6),HX_("What should your Judgements look like?",0d,b2,99,1a),HX_("uiSkin",f1,62,02,74),HX_("string",d1,28,30,11),HX_("Default",a1,00,15,69),::Array_obj< ::String >::fromData( _hx_array_data_f33bd928_3,4));
HXLINE( 143)		this->addOption(option12);
HXLINE( 147)		super::__construct();
            	}

Dynamic VisualsUISubState_obj::__CreateEmpty() { return new VisualsUISubState_obj; }

void *VisualsUISubState_obj::_hx_vtable = 0;

Dynamic VisualsUISubState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< VisualsUISubState_obj > _hx_result = new VisualsUISubState_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool VisualsUISubState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x39ef0ffe) {
			if (inClassId<=(int)0x0cc50116) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0cc50116;
			} else {
				return inClassId==(int)0x39ef0ffe;
			}
		} else {
			return inClassId==(int)0x5661ffbf || inClassId==(int)0x62817b24;
		}
	} else {
		if (inClassId<=(int)0x7ccf8994) {
			return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
		} else {
			return inClassId==(int)0x7fce3ab0;
		}
	}
}

void VisualsUISubState_obj::onChangeFPSCounter(){
            	HX_STACKFRAME(&_hx_pos_4e14480e50e84747_153_onChangeFPSCounter)
HXDLIN( 153)		if (::hx::IsNotNull( ::Main_obj::fpsVar )) {
HXLINE( 154)			::Main_obj::fpsVar->set_visible(::ClientPrefs_obj::showFPS);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(VisualsUISubState_obj,onChangeFPSCounter,(void))


::hx::ObjectPtr< VisualsUISubState_obj > VisualsUISubState_obj::__new() {
	::hx::ObjectPtr< VisualsUISubState_obj > __this = new VisualsUISubState_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< VisualsUISubState_obj > VisualsUISubState_obj::__alloc(::hx::Ctx *_hx_ctx) {
	VisualsUISubState_obj *__this = (VisualsUISubState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(VisualsUISubState_obj), true, "options.VisualsUISubState"));
	*(void **)__this = VisualsUISubState_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

VisualsUISubState_obj::VisualsUISubState_obj()
{
}

::hx::Val VisualsUISubState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 18:
		if (HX_FIELD_EQ(inName,"onChangeFPSCounter") ) { return ::hx::Val( onChangeFPSCounter_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *VisualsUISubState_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *VisualsUISubState_obj_sStaticStorageInfo = 0;
#endif

static ::String VisualsUISubState_obj_sMemberFields[] = {
	HX_("onChangeFPSCounter",e2,d6,e7,e3),
	::String(null()) };

::hx::Class VisualsUISubState_obj::__mClass;

void VisualsUISubState_obj::__register()
{
	VisualsUISubState_obj _hx_dummy;
	VisualsUISubState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("options.VisualsUISubState",28,d9,3b,f3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(VisualsUISubState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< VisualsUISubState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = VisualsUISubState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = VisualsUISubState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace options
