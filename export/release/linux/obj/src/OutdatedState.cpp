#include <hxcpp.h>

#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_CoolUtil
#include <CoolUtil.h>
#endif
#ifndef INCLUDED_MainMenuState
#include <MainMenuState.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_OutdatedState
#include <OutdatedState.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_PlayerSettings
#include <PlayerSettings.h>
#endif
#ifndef INCLUDED_TitleState
#include <TitleState.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_TransitionData
#include <flixel/addons/transition/TransitionData.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIState
#include <flixel/addons/ui/FlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#include <flixel/addons/ui/interfaces/IFlxUIState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxAction
#include <flixel/input/actions/FlxAction.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionDigital
#include <flixel/input/actions/FlxActionDigital.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionSet
#include <flixel/input/actions/FlxActionSet.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSoundGroup
#include <flixel/system/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_VarTween
#include <flixel/tweens/misc/VarTween.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_69e2278de2687cb4_14_new,"OutdatedState","new",0xe5dabf1b,"OutdatedState.new","OutdatedState.hx",14,0xcfaadcb5)
HX_LOCAL_STACK_FRAME(_hx_pos_69e2278de2687cb4_20_create,"OutdatedState","create",0x1aac1f21,"OutdatedState.create","OutdatedState.hx",20,0xcfaadcb5)
HX_LOCAL_STACK_FRAME(_hx_pos_69e2278de2687cb4_39_update,"OutdatedState","update",0x25a23e2e,"OutdatedState.update","OutdatedState.hx",39,0xcfaadcb5)
HX_LOCAL_STACK_FRAME(_hx_pos_69e2278de2687cb4_47_update,"OutdatedState","update",0x25a23e2e,"OutdatedState.update","OutdatedState.hx",47,0xcfaadcb5)
HX_LOCAL_STACK_FRAME(_hx_pos_69e2278de2687cb4_16_boot,"OutdatedState","boot",0x31a57917,"OutdatedState.boot","OutdatedState.hx",16,0xcfaadcb5)

void OutdatedState_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_69e2278de2687cb4_14_new)
HXDLIN(  14)		super::__construct(TransIn,TransOut);
            	}

Dynamic OutdatedState_obj::__CreateEmpty() { return new OutdatedState_obj; }

void *OutdatedState_obj::_hx_vtable = 0;

Dynamic OutdatedState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< OutdatedState_obj > _hx_result = new OutdatedState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool OutdatedState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x443faae9) {
		if (inClassId<=(int)0x2f064378) {
			if (inClassId<=(int)0x23a57bae) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x23a57bae;
			} else {
				return inClassId==(int)0x2f064378;
			}
		} else {
			return inClassId==(int)0x3f706236 || inClassId==(int)0x443faae9;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x62817b24 || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

void OutdatedState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_69e2278de2687cb4_20_create)
HXLINE(  21)		this->super::create();
HXLINE(  23)		 ::flixel::FlxSprite bg =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null())->makeGraphic(::flixel::FlxG_obj::width,::flixel::FlxG_obj::height,-16777216,null(),null());
HXLINE(  24)		this->add(bg);
HXLINE(  26)		this->warnText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,0,0,::flixel::FlxG_obj::width,((((HX_("Sup bro, looks like you're running an   \n\n\t\t\toutdated version of Psych Engine (",18,4f,ad,2f) + ::MainMenuState_obj::psychEngineVersion) + HX_("),\n\n\t\t\tplease update to ",be,0d,d5,c9)) + ::TitleState_obj::updateVersion) + HX_("!\n\n\t\t\t\n\n\t\t\tThank you for using the Engine!",25,eb,9e,64)),32,null());
HXLINE(  33)		this->warnText->setFormat(HX_("VCR OSD Mono",be,44,e4,b8),32,-1,HX_("center",d5,25,db,05),null(),null(),null());
HXLINE(  34)		this->warnText->screenCenter(::flixel::util::FlxAxes_obj::Y_dyn());
HXLINE(  35)		this->add(this->warnText);
            	}


void OutdatedState_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_69e2278de2687cb4_39_update)
HXLINE(  40)		if (!(::OutdatedState_obj::leftState)) {
HXLINE(  41)			bool _hx_tmp;
HXDLIN(  41)			if (!(::PlayerSettings_obj::player1->controls->_accept->check())) {
HXLINE(  41)				_hx_tmp = ::PlayerSettings_obj::player1->controls->_back->check();
            			}
            			else {
HXLINE(  41)				_hx_tmp = true;
            			}
HXDLIN(  41)			if (_hx_tmp) {
            				HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            				void _hx_run( ::flixel::tweens::FlxTween twn){
            					HX_GC_STACKFRAME(&_hx_pos_69e2278de2687cb4_47_update)
HXLINE(  47)					::MusicBeatState_obj::switchState( ::MainMenuState_obj::__alloc( HX_CTX ,null(),null()));
            				}
            				HX_END_LOCAL_FUNC1((void))

HXLINE(  42)				::OutdatedState_obj::leftState = true;
HXLINE(  43)				::CoolUtil_obj::browserLoad(HX_("https://github.com/ShadowMario/FNF-PsychEngine/releases",a2,77,06,8f));
HXLINE(  44)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(  44)				_hx_tmp->play(::Paths_obj::sound(HX_("cancelMenu",39,a4,43,b7),null()),null(),null(),null(),null(),null());
HXLINE(  45)				::flixel::tweens::FlxTween_obj::tween(this->warnText, ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("alpha",5e,a7,96,21),0)),1, ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("onComplete",f8,d4,7e,5d), ::Dynamic(new _hx_Closure_0()))));
            			}
            		}
HXLINE(  52)		this->super::update(elapsed);
            	}


bool OutdatedState_obj::leftState;


::hx::ObjectPtr< OutdatedState_obj > OutdatedState_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< OutdatedState_obj > __this = new OutdatedState_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< OutdatedState_obj > OutdatedState_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	OutdatedState_obj *__this = (OutdatedState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(OutdatedState_obj), true, "OutdatedState"));
	*(void **)__this = OutdatedState_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

OutdatedState_obj::OutdatedState_obj()
{
}

void OutdatedState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(OutdatedState);
	HX_MARK_MEMBER_NAME(warnText,"warnText");
	 ::flixel::addons::ui::FlxUIState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void OutdatedState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(warnText,"warnText");
	 ::flixel::addons::ui::FlxUIState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val OutdatedState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"warnText") ) { return ::hx::Val( warnText ); }
	}
	return super::__Field(inName,inCallProp);
}

bool OutdatedState_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"leftState") ) { outValue = ( leftState ); return true; }
	}
	return false;
}

::hx::Val OutdatedState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"warnText") ) { warnText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool OutdatedState_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"leftState") ) { leftState=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

void OutdatedState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("warnText",13,f6,aa,7a));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo OutdatedState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(OutdatedState_obj,warnText),HX_("warnText",13,f6,aa,7a)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo OutdatedState_obj_sStaticStorageInfo[] = {
	{::hx::fsBool,(void *) &OutdatedState_obj::leftState,HX_("leftState",8a,64,eb,98)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String OutdatedState_obj_sMemberFields[] = {
	HX_("warnText",13,f6,aa,7a),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	::String(null()) };

static void OutdatedState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OutdatedState_obj::leftState,"leftState");
};

#ifdef HXCPP_VISIT_ALLOCS
static void OutdatedState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OutdatedState_obj::leftState,"leftState");
};

#endif

::hx::Class OutdatedState_obj::__mClass;

static ::String OutdatedState_obj_sStaticFields[] = {
	HX_("leftState",8a,64,eb,98),
	::String(null())
};

void OutdatedState_obj::__register()
{
	OutdatedState_obj _hx_dummy;
	OutdatedState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("OutdatedState",a9,95,f8,67);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &OutdatedState_obj::__GetStatic;
	__mClass->mSetStaticField = &OutdatedState_obj::__SetStatic;
	__mClass->mMarkFunc = OutdatedState_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(OutdatedState_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(OutdatedState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< OutdatedState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = OutdatedState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = OutdatedState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = OutdatedState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void OutdatedState_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_69e2278de2687cb4_16_boot)
HXDLIN(  16)		leftState = false;
            	}
}

