#include <hxcpp.h>

#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_KeyboardScheme
#include <KeyboardScheme.h>
#endif
#ifndef INCLUDED_PlayerSettings
#include <PlayerSettings.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionSet
#include <flixel/input/actions/FlxActionSet.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepad
#include <flixel/input/gamepad/FlxGamepad.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadManager
#include <flixel/input/gamepad/FlxGamepadManager.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxSignal
#include <flixel/util/IFlxSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxBaseSignal
#include <flixel/util/_FlxSignal/FlxBaseSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal1
#include <flixel/util/_FlxSignal/FlxSignal1.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_cbc83c06c393c08a_37_new,"PlayerSettings","new",0x78ce3476,"PlayerSettings.new","PlayerSettings.hx",37,0x01b08bba)
HX_LOCAL_STACK_FRAME(_hx_pos_cbc83c06c393c08a_44_setKeyboardScheme,"PlayerSettings","setKeyboardScheme",0x0dd76e04,"PlayerSettings.setKeyboardScheme","PlayerSettings.hx",44,0x01b08bba)
HX_LOCAL_STACK_FRAME(_hx_pos_cbc83c06c393c08a_119_init,"PlayerSettings","init",0x38586a3a,"PlayerSettings.init","PlayerSettings.hx",119,0x01b08bba)
HX_LOCAL_STACK_FRAME(_hx_pos_cbc83c06c393c08a_155_updateGamepads,"PlayerSettings","updateGamepads",0x33d42785,"PlayerSettings.updateGamepads","PlayerSettings.hx",155,0x01b08bba)
HX_LOCAL_STACK_FRAME(_hx_pos_cbc83c06c393c08a_183_reset,"PlayerSettings","reset",0x3db45f65,"PlayerSettings.reset","PlayerSettings.hx",183,0x01b08bba)
HX_LOCAL_STACK_FRAME(_hx_pos_cbc83c06c393c08a_12_boot,"PlayerSettings","boot",0x33b8b35c,"PlayerSettings.boot","PlayerSettings.hx",12,0x01b08bba)
HX_LOCAL_STACK_FRAME(_hx_pos_cbc83c06c393c08a_13_boot,"PlayerSettings","boot",0x33b8b35c,"PlayerSettings.boot","PlayerSettings.hx",13,0x01b08bba)
HX_LOCAL_STACK_FRAME(_hx_pos_cbc83c06c393c08a_18_boot,"PlayerSettings","boot",0x33b8b35c,"PlayerSettings.boot","PlayerSettings.hx",18,0x01b08bba)
HX_LOCAL_STACK_FRAME(_hx_pos_cbc83c06c393c08a_19_boot,"PlayerSettings","boot",0x33b8b35c,"PlayerSettings.boot","PlayerSettings.hx",19,0x01b08bba)

void PlayerSettings_obj::__construct(int id, ::KeyboardScheme scheme){
            	HX_GC_STACKFRAME(&_hx_pos_cbc83c06c393c08a_37_new)
HXLINE(  38)		this->id = id;
HXLINE(  39)		this->controls =  ::Controls_obj::__alloc( HX_CTX ,(HX_("player",61,eb,b8,37) + id),scheme);
            	}

Dynamic PlayerSettings_obj::__CreateEmpty() { return new PlayerSettings_obj; }

void *PlayerSettings_obj::_hx_vtable = 0;

Dynamic PlayerSettings_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PlayerSettings_obj > _hx_result = new PlayerSettings_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool PlayerSettings_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x29c50444;
}

void PlayerSettings_obj::setKeyboardScheme( ::KeyboardScheme scheme){
            	HX_STACKFRAME(&_hx_pos_cbc83c06c393c08a_44_setKeyboardScheme)
HXDLIN(  44)		this->controls->setKeyboardScheme(scheme,null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(PlayerSettings_obj,setKeyboardScheme,(void))

int PlayerSettings_obj::numPlayers;

int PlayerSettings_obj::numAvatars;

 ::PlayerSettings PlayerSettings_obj::player1;

 ::PlayerSettings PlayerSettings_obj::player2;

 ::flixel::util::_FlxSignal::FlxSignal1 PlayerSettings_obj::onAvatarAdd;

 ::flixel::util::_FlxSignal::FlxSignal1 PlayerSettings_obj::onAvatarRemove;

void PlayerSettings_obj::init(){
            	HX_GC_STACKFRAME(&_hx_pos_cbc83c06c393c08a_119_init)
HXLINE( 120)		if (::hx::IsNull( ::PlayerSettings_obj::player1 )) {
HXLINE( 122)			::PlayerSettings_obj::player1 =  ::PlayerSettings_obj::__alloc( HX_CTX ,0,::KeyboardScheme_obj::Solo_dyn());
HXLINE( 123)			++::PlayerSettings_obj::numPlayers;
            		}
HXLINE( 126)		int numGamepads = ::flixel::FlxG_obj::gamepads->get_numActiveGamepads();
HXLINE( 127)		if ((numGamepads > 0)) {
HXLINE( 129)			 ::flixel::input::gamepad::FlxGamepad gamepad = ::flixel::FlxG_obj::gamepads->_activeGamepads->__get(0).StaticCast<  ::flixel::input::gamepad::FlxGamepad >();
HXLINE( 130)			if (::hx::IsNull( gamepad )) {
HXLINE( 131)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Unexpected null gamepad. id:0",5a,05,91,b2)));
            			}
HXLINE( 133)			::PlayerSettings_obj::player1->controls->addDefaultGamepad(0);
            		}
HXLINE( 136)		if ((numGamepads > 1)) {
HXLINE( 138)			if (::hx::IsNull( ::PlayerSettings_obj::player2 )) {
HXLINE( 140)				::PlayerSettings_obj::player2 =  ::PlayerSettings_obj::__alloc( HX_CTX ,1,::KeyboardScheme_obj::None_dyn());
HXLINE( 141)				++::PlayerSettings_obj::numPlayers;
            			}
HXLINE( 144)			 ::flixel::input::gamepad::FlxGamepad gamepad = ::flixel::FlxG_obj::gamepads->_activeGamepads->__get(1).StaticCast<  ::flixel::input::gamepad::FlxGamepad >();
HXLINE( 145)			if (::hx::IsNull( gamepad )) {
HXLINE( 146)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Unexpected null gamepad. id:0",5a,05,91,b2)));
            			}
HXLINE( 148)			::PlayerSettings_obj::player2->controls->addDefaultGamepad(1);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(PlayerSettings_obj,init,(void))

void PlayerSettings_obj::updateGamepads(){
            	HX_GC_STACKFRAME(&_hx_pos_cbc83c06c393c08a_155_updateGamepads)
HXLINE( 156)		int numGamepads = ::flixel::FlxG_obj::gamepads->get_numActiveGamepads();
HXLINE( 157)		if ((numGamepads > 0)) {
HXLINE( 159)			 ::flixel::input::gamepad::FlxGamepad gamepad = ::flixel::FlxG_obj::gamepads->_activeGamepads->__get(0).StaticCast<  ::flixel::input::gamepad::FlxGamepad >();
HXLINE( 160)			if (::hx::IsNull( gamepad )) {
HXLINE( 161)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Unexpected null gamepad. id:0",5a,05,91,b2)));
            			}
HXLINE( 163)			::PlayerSettings_obj::player1->controls->addDefaultGamepad(0);
            		}
HXLINE( 166)		if ((numGamepads > 1)) {
HXLINE( 168)			if (::hx::IsNull( ::PlayerSettings_obj::player2 )) {
HXLINE( 170)				::PlayerSettings_obj::player2 =  ::PlayerSettings_obj::__alloc( HX_CTX ,1,::KeyboardScheme_obj::None_dyn());
HXLINE( 171)				++::PlayerSettings_obj::numPlayers;
            			}
HXLINE( 174)			 ::flixel::input::gamepad::FlxGamepad gamepad = ::flixel::FlxG_obj::gamepads->_activeGamepads->__get(1).StaticCast<  ::flixel::input::gamepad::FlxGamepad >();
HXLINE( 175)			if (::hx::IsNull( gamepad )) {
HXLINE( 176)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Unexpected null gamepad. id:0",5a,05,91,b2)));
            			}
HXLINE( 178)			::PlayerSettings_obj::player2->controls->addDefaultGamepad(1);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(PlayerSettings_obj,updateGamepads,(void))

void PlayerSettings_obj::reset(){
            	HX_STACKFRAME(&_hx_pos_cbc83c06c393c08a_183_reset)
HXLINE( 184)		::PlayerSettings_obj::player1 = null();
HXLINE( 185)		::PlayerSettings_obj::player2 = null();
HXLINE( 186)		::PlayerSettings_obj::numPlayers = 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(PlayerSettings_obj,reset,(void))


::hx::ObjectPtr< PlayerSettings_obj > PlayerSettings_obj::__new(int id, ::KeyboardScheme scheme) {
	::hx::ObjectPtr< PlayerSettings_obj > __this = new PlayerSettings_obj();
	__this->__construct(id,scheme);
	return __this;
}

::hx::ObjectPtr< PlayerSettings_obj > PlayerSettings_obj::__alloc(::hx::Ctx *_hx_ctx,int id, ::KeyboardScheme scheme) {
	PlayerSettings_obj *__this = (PlayerSettings_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PlayerSettings_obj), true, "PlayerSettings"));
	*(void **)__this = PlayerSettings_obj::_hx_vtable;
	__this->__construct(id,scheme);
	return __this;
}

PlayerSettings_obj::PlayerSettings_obj()
{
}

void PlayerSettings_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PlayerSettings);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(controls,"controls");
	HX_MARK_END_CLASS();
}

void PlayerSettings_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(controls,"controls");
}

::hx::Val PlayerSettings_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return ::hx::Val( id ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"controls") ) { return ::hx::Val( controls ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"setKeyboardScheme") ) { return ::hx::Val( setKeyboardScheme_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool PlayerSettings_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { outValue = init_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { outValue = reset_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"player1") ) { outValue = ( player1 ); return true; }
		if (HX_FIELD_EQ(inName,"player2") ) { outValue = ( player2 ); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"numPlayers") ) { outValue = ( numPlayers ); return true; }
		if (HX_FIELD_EQ(inName,"numAvatars") ) { outValue = ( numAvatars ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onAvatarAdd") ) { outValue = ( onAvatarAdd ); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onAvatarRemove") ) { outValue = ( onAvatarRemove ); return true; }
		if (HX_FIELD_EQ(inName,"updateGamepads") ) { outValue = updateGamepads_dyn(); return true; }
	}
	return false;
}

::hx::Val PlayerSettings_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"controls") ) { controls=inValue.Cast<  ::Controls >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool PlayerSettings_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"player1") ) { player1=ioValue.Cast<  ::PlayerSettings >(); return true; }
		if (HX_FIELD_EQ(inName,"player2") ) { player2=ioValue.Cast<  ::PlayerSettings >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"numPlayers") ) { numPlayers=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"numAvatars") ) { numAvatars=ioValue.Cast< int >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onAvatarAdd") ) { onAvatarAdd=ioValue.Cast<  ::flixel::util::_FlxSignal::FlxSignal1 >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onAvatarRemove") ) { onAvatarRemove=ioValue.Cast<  ::flixel::util::_FlxSignal::FlxSignal1 >(); return true; }
	}
	return false;
}

void PlayerSettings_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("id",db,5b,00,00));
	outFields->push(HX_("controls",76,86,bc,37));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo PlayerSettings_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(PlayerSettings_obj,id),HX_("id",db,5b,00,00)},
	{::hx::fsObject /*  ::Controls */ ,(int)offsetof(PlayerSettings_obj,controls),HX_("controls",76,86,bc,37)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo PlayerSettings_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &PlayerSettings_obj::numPlayers,HX_("numPlayers",4c,48,35,ba)},
	{::hx::fsInt,(void *) &PlayerSettings_obj::numAvatars,HX_("numAvatars",94,d4,b3,46)},
	{::hx::fsObject /*  ::PlayerSettings */ ,(void *) &PlayerSettings_obj::player1,HX_("player1",b0,09,15,8a)},
	{::hx::fsObject /*  ::PlayerSettings */ ,(void *) &PlayerSettings_obj::player2,HX_("player2",b1,09,15,8a)},
	{::hx::fsObject /*  ::flixel::util::_FlxSignal::FlxSignal1 */ ,(void *) &PlayerSettings_obj::onAvatarAdd,HX_("onAvatarAdd",69,62,6e,b5)},
	{::hx::fsObject /*  ::flixel::util::_FlxSignal::FlxSignal1 */ ,(void *) &PlayerSettings_obj::onAvatarRemove,HX_("onAvatarRemove",fc,88,61,55)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String PlayerSettings_obj_sMemberFields[] = {
	HX_("id",db,5b,00,00),
	HX_("controls",76,86,bc,37),
	HX_("setKeyboardScheme",6e,4f,d6,5b),
	::String(null()) };

static void PlayerSettings_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PlayerSettings_obj::numPlayers,"numPlayers");
	HX_MARK_MEMBER_NAME(PlayerSettings_obj::numAvatars,"numAvatars");
	HX_MARK_MEMBER_NAME(PlayerSettings_obj::player1,"player1");
	HX_MARK_MEMBER_NAME(PlayerSettings_obj::player2,"player2");
	HX_MARK_MEMBER_NAME(PlayerSettings_obj::onAvatarAdd,"onAvatarAdd");
	HX_MARK_MEMBER_NAME(PlayerSettings_obj::onAvatarRemove,"onAvatarRemove");
};

#ifdef HXCPP_VISIT_ALLOCS
static void PlayerSettings_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PlayerSettings_obj::numPlayers,"numPlayers");
	HX_VISIT_MEMBER_NAME(PlayerSettings_obj::numAvatars,"numAvatars");
	HX_VISIT_MEMBER_NAME(PlayerSettings_obj::player1,"player1");
	HX_VISIT_MEMBER_NAME(PlayerSettings_obj::player2,"player2");
	HX_VISIT_MEMBER_NAME(PlayerSettings_obj::onAvatarAdd,"onAvatarAdd");
	HX_VISIT_MEMBER_NAME(PlayerSettings_obj::onAvatarRemove,"onAvatarRemove");
};

#endif

::hx::Class PlayerSettings_obj::__mClass;

static ::String PlayerSettings_obj_sStaticFields[] = {
	HX_("numPlayers",4c,48,35,ba),
	HX_("numAvatars",94,d4,b3,46),
	HX_("player1",b0,09,15,8a),
	HX_("player2",b1,09,15,8a),
	HX_("onAvatarAdd",69,62,6e,b5),
	HX_("onAvatarRemove",fc,88,61,55),
	HX_("init",10,3b,bb,45),
	HX_("updateGamepads",db,9f,c8,00),
	HX_("reset",cf,49,c8,e6),
	::String(null())
};

void PlayerSettings_obj::__register()
{
	PlayerSettings_obj _hx_dummy;
	PlayerSettings_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("PlayerSettings",84,81,d9,47);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &PlayerSettings_obj::__GetStatic;
	__mClass->mSetStaticField = &PlayerSettings_obj::__SetStatic;
	__mClass->mMarkFunc = PlayerSettings_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(PlayerSettings_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PlayerSettings_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PlayerSettings_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = PlayerSettings_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PlayerSettings_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PlayerSettings_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void PlayerSettings_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_cbc83c06c393c08a_12_boot)
HXDLIN(  12)		numPlayers = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_cbc83c06c393c08a_13_boot)
HXDLIN(  13)		numAvatars = 0;
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_cbc83c06c393c08a_18_boot)
HXDLIN(  18)		onAvatarAdd =  ::flixel::util::_FlxSignal::FlxSignal1_obj::__alloc( HX_CTX );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_cbc83c06c393c08a_19_boot)
HXDLIN(  19)		onAvatarRemove =  ::flixel::util::_FlxSignal::FlxSignal1_obj::__alloc( HX_CTX );
            	}
}

