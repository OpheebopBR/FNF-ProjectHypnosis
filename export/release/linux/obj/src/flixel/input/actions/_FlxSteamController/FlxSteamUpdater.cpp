#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_actions__FlxSteamController_FlxSteamUpdater
#include <flixel/input/actions/_FlxSteamController/FlxSteamUpdater.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_73718e0fc886006b_316_new,"flixel.input.actions._FlxSteamController.FlxSteamUpdater","new",0xf44d5c61,"flixel.input.actions._FlxSteamController.FlxSteamUpdater.new","flixel/input/actions/FlxSteamController.hx",316,0xf3119a9a)
HX_LOCAL_STACK_FRAME(_hx_pos_73718e0fc886006b_323_destroy,"flixel.input.actions._FlxSteamController.FlxSteamUpdater","destroy",0xb59c4d7b,"flixel.input.actions._FlxSteamController.FlxSteamUpdater.destroy","flixel/input/actions/FlxSteamController.hx",323,0xf3119a9a)
HX_LOCAL_STACK_FRAME(_hx_pos_73718e0fc886006b_325_reset,"flixel.input.actions._FlxSteamController.FlxSteamUpdater","reset",0xf53d9810,"flixel.input.actions._FlxSteamController.FlxSteamUpdater.reset","flixel/input/actions/FlxSteamController.hx",325,0xf3119a9a)
HX_LOCAL_STACK_FRAME(_hx_pos_73718e0fc886006b_329_update,"flixel.input.actions._FlxSteamController.FlxSteamUpdater","update",0x1f34b0a8,"flixel.input.actions._FlxSteamController.FlxSteamUpdater.update","flixel/input/actions/FlxSteamController.hx",329,0xf3119a9a)
HX_LOCAL_STACK_FRAME(_hx_pos_73718e0fc886006b_353_onFocus,"flixel.input.actions._FlxSteamController.FlxSteamUpdater","onFocus",0x2bdd1eba,"flixel.input.actions._FlxSteamController.FlxSteamUpdater.onFocus","flixel/input/actions/FlxSteamController.hx",353,0xf3119a9a)
HX_LOCAL_STACK_FRAME(_hx_pos_73718e0fc886006b_355_onFocusLost,"flixel.input.actions._FlxSteamController.FlxSteamUpdater","onFocusLost",0x2edcd9be,"flixel.input.actions._FlxSteamController.FlxSteamUpdater.onFocusLost","flixel/input/actions/FlxSteamController.hx",355,0xf3119a9a)
namespace flixel{
namespace input{
namespace actions{
namespace _FlxSteamController{

void FlxSteamUpdater_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_73718e0fc886006b_316_new)
HXLINE( 319)		this->originTime = ((Float)0.0);
HXLINE( 318)		this->controllerTime = ((Float)0.0);
            	}

Dynamic FlxSteamUpdater_obj::__CreateEmpty() { return new FlxSteamUpdater_obj; }

void *FlxSteamUpdater_obj::_hx_vtable = 0;

Dynamic FlxSteamUpdater_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxSteamUpdater_obj > _hx_result = new FlxSteamUpdater_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxSteamUpdater_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x51c28ac1;
}

static ::flixel::input::IFlxInputManager_obj _hx_flixel_input_actions__FlxSteamController_FlxSteamUpdater__hx_flixel_input_IFlxInputManager= {
	( void (::hx::Object::*)())&::flixel::input::actions::_FlxSteamController::FlxSteamUpdater_obj::destroy,
	( void (::hx::Object::*)())&::flixel::input::actions::_FlxSteamController::FlxSteamUpdater_obj::reset,
	( void (::hx::Object::*)())&::flixel::input::actions::_FlxSteamController::FlxSteamUpdater_obj::update,
	( void (::hx::Object::*)())&::flixel::input::actions::_FlxSteamController::FlxSteamUpdater_obj::onFocus,
	( void (::hx::Object::*)())&::flixel::input::actions::_FlxSteamController::FlxSteamUpdater_obj::onFocusLost,
};

static ::flixel::util::IFlxDestroyable_obj _hx_flixel_input_actions__FlxSteamController_FlxSteamUpdater__hx_flixel_util_IFlxDestroyable= {
	( void (::hx::Object::*)())&::flixel::input::actions::_FlxSteamController::FlxSteamUpdater_obj::destroy,
};

void *FlxSteamUpdater_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x65dd217a: return &_hx_flixel_input_actions__FlxSteamController_FlxSteamUpdater__hx_flixel_input_IFlxInputManager;
		case (int)0xd4fe2fcd: return &_hx_flixel_input_actions__FlxSteamController_FlxSteamUpdater__hx_flixel_util_IFlxDestroyable;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void FlxSteamUpdater_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_73718e0fc886006b_323_destroy)
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSteamUpdater_obj,destroy,(void))

void FlxSteamUpdater_obj::reset(){
            	HX_STACKFRAME(&_hx_pos_73718e0fc886006b_325_reset)
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSteamUpdater_obj,reset,(void))

void FlxSteamUpdater_obj::update(){
            	HX_STACKFRAME(&_hx_pos_73718e0fc886006b_329_update)
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSteamUpdater_obj,update,(void))

void FlxSteamUpdater_obj::onFocus(){
            	HX_STACKFRAME(&_hx_pos_73718e0fc886006b_353_onFocus)
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSteamUpdater_obj,onFocus,(void))

void FlxSteamUpdater_obj::onFocusLost(){
            	HX_STACKFRAME(&_hx_pos_73718e0fc886006b_355_onFocusLost)
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSteamUpdater_obj,onFocusLost,(void))


::hx::ObjectPtr< FlxSteamUpdater_obj > FlxSteamUpdater_obj::__new() {
	::hx::ObjectPtr< FlxSteamUpdater_obj > __this = new FlxSteamUpdater_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< FlxSteamUpdater_obj > FlxSteamUpdater_obj::__alloc(::hx::Ctx *_hx_ctx) {
	FlxSteamUpdater_obj *__this = (FlxSteamUpdater_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxSteamUpdater_obj), false, "flixel.input.actions._FlxSteamController.FlxSteamUpdater"));
	*(void **)__this = FlxSteamUpdater_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FlxSteamUpdater_obj::FlxSteamUpdater_obj()
{
}

::hx::Val FlxSteamUpdater_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return ::hx::Val( reset_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		if (HX_FIELD_EQ(inName,"onFocus") ) { return ::hx::Val( onFocus_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"originTime") ) { return ::hx::Val( originTime ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return ::hx::Val( onFocusLost_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"controllerTime") ) { return ::hx::Val( controllerTime ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxSteamUpdater_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"originTime") ) { originTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"controllerTime") ) { controllerTime=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxSteamUpdater_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("controllerTime",c9,0e,43,2e));
	outFields->push(HX_("originTime",13,fd,00,0a));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxSteamUpdater_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(FlxSteamUpdater_obj,controllerTime),HX_("controllerTime",c9,0e,43,2e)},
	{::hx::fsFloat,(int)offsetof(FlxSteamUpdater_obj,originTime),HX_("originTime",13,fd,00,0a)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxSteamUpdater_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxSteamUpdater_obj_sMemberFields[] = {
	HX_("controllerTime",c9,0e,43,2e),
	HX_("originTime",13,fd,00,0a),
	HX_("destroy",fa,2c,86,24),
	HX_("reset",cf,49,c8,e6),
	HX_("update",09,86,05,87),
	HX_("onFocus",39,fe,c6,9a),
	HX_("onFocusLost",bd,e4,85,41),
	::String(null()) };

::hx::Class FlxSteamUpdater_obj::__mClass;

void FlxSteamUpdater_obj::__register()
{
	FlxSteamUpdater_obj _hx_dummy;
	FlxSteamUpdater_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.input.actions._FlxSteamController.FlxSteamUpdater",ef,97,b5,b8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxSteamUpdater_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxSteamUpdater_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxSteamUpdater_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxSteamUpdater_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace input
} // end namespace actions
} // end namespace _FlxSteamController
