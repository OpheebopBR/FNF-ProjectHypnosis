#include <hxcpp.h>

#ifndef INCLUDED_ClientPrefs
#include <ClientPrefs.h>
#endif
#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_FlashingState
#include <FlashingState.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
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
#ifndef INCLUDED_flixel_effects_FlxFlicker
#include <flixel/effects/FlxFlicker.h>
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
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimerManager
#include <flixel/util/FlxTimerManager.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_fe772f19f43355ce_14_new,"FlashingState","new",0x81ccd7d1,"FlashingState.new","FlashingState.hx",14,0xb3aaccbf)
HX_LOCAL_STACK_FRAME(_hx_pos_fe772f19f43355ce_20_create,"FlashingState","create",0x5765dc2b,"FlashingState.create","FlashingState.hx",20,0xb3aaccbf)
HX_LOCAL_STACK_FRAME(_hx_pos_fe772f19f43355ce_39_update,"FlashingState","update",0x625bfb38,"FlashingState.update","FlashingState.hx",39,0xb3aaccbf)
HX_LOCAL_STACK_FRAME(_hx_pos_fe772f19f43355ce_52_update,"FlashingState","update",0x625bfb38,"FlashingState.update","FlashingState.hx",52,0xb3aaccbf)
HX_LOCAL_STACK_FRAME(_hx_pos_fe772f19f43355ce_51_update,"FlashingState","update",0x625bfb38,"FlashingState.update","FlashingState.hx",51,0xb3aaccbf)
HX_LOCAL_STACK_FRAME(_hx_pos_fe772f19f43355ce_59_update,"FlashingState","update",0x625bfb38,"FlashingState.update","FlashingState.hx",59,0xb3aaccbf)
HX_LOCAL_STACK_FRAME(_hx_pos_fe772f19f43355ce_16_boot,"FlashingState","boot",0x0988ffa1,"FlashingState.boot","FlashingState.hx",16,0xb3aaccbf)

void FlashingState_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_fe772f19f43355ce_14_new)
HXDLIN(  14)		super::__construct(TransIn,TransOut);
            	}

Dynamic FlashingState_obj::__CreateEmpty() { return new FlashingState_obj; }

void *FlashingState_obj::_hx_vtable = 0;

Dynamic FlashingState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlashingState_obj > _hx_result = new FlashingState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool FlashingState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3f706236) {
		if (inClassId<=(int)0x2d5db09f) {
			if (inClassId<=(int)0x23a57bae) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x23a57bae;
			} else {
				return inClassId==(int)0x2d5db09f;
			}
		} else {
			return inClassId==(int)0x2f064378 || inClassId==(int)0x3f706236;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x62817b24 || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

void FlashingState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_fe772f19f43355ce_20_create)
HXLINE(  21)		this->super::create();
HXLINE(  23)		 ::flixel::FlxSprite bg =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null())->makeGraphic(::flixel::FlxG_obj::width,::flixel::FlxG_obj::height,-16777216,null(),null());
HXLINE(  24)		this->add(bg);
HXLINE(  26)		this->warnText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,0,0,::flixel::FlxG_obj::width,HX_("Hey, watch out!\n\n\t\t\tThis Mod contains some flashing lights!\n\n\t\t\tPress ENTER to disable them now or go to Options Menu.\n\n\t\t\tPress ESCAPE to ignore this message.\n\n\t\t\tYou've been warned!",99,b4,d1,af),32,null());
HXLINE(  33)		this->warnText->setFormat(HX_("VCR OSD Mono",be,44,e4,b8),32,-1,HX_("center",d5,25,db,05),null(),null(),null());
HXLINE(  34)		this->warnText->screenCenter(::flixel::util::FlxAxes_obj::Y_dyn());
HXLINE(  35)		this->add(this->warnText);
            	}


void FlashingState_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_fe772f19f43355ce_39_update)
HXLINE(  40)		if (!(::FlashingState_obj::leftState)) {
HXLINE(  41)			bool back = ::PlayerSettings_obj::player1->controls->_back->check();
HXLINE(  42)			bool _hx_tmp;
HXDLIN(  42)			if (!(::PlayerSettings_obj::player1->controls->_accept->check())) {
HXLINE(  42)				_hx_tmp = back;
            			}
            			else {
HXLINE(  42)				_hx_tmp = true;
            			}
HXDLIN(  42)			if (_hx_tmp) {
HXLINE(  43)				::FlashingState_obj::leftState = true;
HXLINE(  44)				::flixel::addons::transition::FlxTransitionableState_obj::skipNextTransIn = true;
HXLINE(  45)				::flixel::addons::transition::FlxTransitionableState_obj::skipNextTransOut = true;
HXLINE(  46)				if (!(back)) {
            					HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_1) HXARGC(1)
            					void _hx_run( ::flixel::effects::FlxFlicker flk){
            						HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            						void _hx_run( ::flixel::util::FlxTimer tmr){
            							HX_GC_STACKFRAME(&_hx_pos_fe772f19f43355ce_52_update)
HXLINE(  52)							::MusicBeatState_obj::switchState( ::TitleState_obj::__alloc( HX_CTX ,null(),null()));
            						}
            						HX_END_LOCAL_FUNC1((void))

            						HX_GC_STACKFRAME(&_hx_pos_fe772f19f43355ce_51_update)
HXLINE(  51)						 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(((Float)0.5), ::Dynamic(new _hx_Closure_0()),null());
            					}
            					HX_END_LOCAL_FUNC1((void))

HXLINE(  47)					::ClientPrefs_obj::flashing = false;
HXLINE(  48)					::ClientPrefs_obj::saveSettings();
HXLINE(  49)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(  49)					_hx_tmp->play(::Paths_obj::sound(HX_("confirmMenu",bf,8e,fe,3c),null()),null(),null(),null(),null(),null());
HXLINE(  50)					::flixel::effects::FlxFlicker_obj::flicker(this->warnText,1,((Float)0.1),false,true, ::Dynamic(new _hx_Closure_1()),null());
            				}
            				else {
            					HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_2) HXARGC(1)
            					void _hx_run( ::flixel::tweens::FlxTween twn){
            						HX_GC_STACKFRAME(&_hx_pos_fe772f19f43355ce_59_update)
HXLINE(  59)						::MusicBeatState_obj::switchState( ::TitleState_obj::__alloc( HX_CTX ,null(),null()));
            					}
            					HX_END_LOCAL_FUNC1((void))

HXLINE(  56)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(  56)					_hx_tmp->play(::Paths_obj::sound(HX_("cancelMenu",39,a4,43,b7),null()),null(),null(),null(),null(),null());
HXLINE(  57)					::flixel::tweens::FlxTween_obj::tween(this->warnText, ::Dynamic(::hx::Anon_obj::Create(1)
            						->setFixed(0,HX_("alpha",5e,a7,96,21),0)),1, ::Dynamic(::hx::Anon_obj::Create(1)
            						->setFixed(0,HX_("onComplete",f8,d4,7e,5d), ::Dynamic(new _hx_Closure_2()))));
            				}
            			}
            		}
HXLINE(  65)		this->super::update(elapsed);
            	}


bool FlashingState_obj::leftState;


::hx::ObjectPtr< FlashingState_obj > FlashingState_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< FlashingState_obj > __this = new FlashingState_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< FlashingState_obj > FlashingState_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	FlashingState_obj *__this = (FlashingState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlashingState_obj), true, "FlashingState"));
	*(void **)__this = FlashingState_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

FlashingState_obj::FlashingState_obj()
{
}

void FlashingState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlashingState);
	HX_MARK_MEMBER_NAME(warnText,"warnText");
	 ::flixel::addons::ui::FlxUIState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlashingState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(warnText,"warnText");
	 ::flixel::addons::ui::FlxUIState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlashingState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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

bool FlashingState_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"leftState") ) { outValue = ( leftState ); return true; }
	}
	return false;
}

::hx::Val FlashingState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"warnText") ) { warnText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlashingState_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"leftState") ) { leftState=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

void FlashingState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("warnText",13,f6,aa,7a));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlashingState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(FlashingState_obj,warnText),HX_("warnText",13,f6,aa,7a)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo FlashingState_obj_sStaticStorageInfo[] = {
	{::hx::fsBool,(void *) &FlashingState_obj::leftState,HX_("leftState",8a,64,eb,98)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String FlashingState_obj_sMemberFields[] = {
	HX_("warnText",13,f6,aa,7a),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	::String(null()) };

static void FlashingState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlashingState_obj::leftState,"leftState");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlashingState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlashingState_obj::leftState,"leftState");
};

#endif

::hx::Class FlashingState_obj::__mClass;

static ::String FlashingState_obj_sStaticFields[] = {
	HX_("leftState",8a,64,eb,98),
	::String(null())
};

void FlashingState_obj::__register()
{
	FlashingState_obj _hx_dummy;
	FlashingState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("FlashingState",5f,9b,16,51);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlashingState_obj::__GetStatic;
	__mClass->mSetStaticField = &FlashingState_obj::__SetStatic;
	__mClass->mMarkFunc = FlashingState_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlashingState_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlashingState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlashingState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlashingState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlashingState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlashingState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlashingState_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_fe772f19f43355ce_16_boot)
HXDLIN(  16)		leftState = false;
            	}
}

