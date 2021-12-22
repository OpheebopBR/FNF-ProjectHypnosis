#include <hxcpp.h>

#ifndef INCLUDED_cc9afe4755847ade
#define INCLUDED_cc9afe4755847ade
#include "linc_lua.h"
#endif
#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_DiscordClient
#include <DiscordClient.h>
#endif
#ifndef INCLUDED_MainMenuState
#include <MainMenuState.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_discord_rpc_DiscordRpc
#include <discord_rpc/DiscordRpc.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
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
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_llua_Lua_helper
#include <llua/Lua_helper.h>
#endif
#ifndef INCLUDED_sys_thread__Thread_HaxeThread
#include <sys/thread/_Thread/HaxeThread.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e5abf8620039da0e_16_new,"DiscordClient","new",0xa1a2b969,"DiscordClient.new","Discord.hx",16,0xa6c9e0b2)
HX_LOCAL_STACK_FRAME(_hx_pos_e5abf8620039da0e_38_shutdown,"DiscordClient","shutdown",0x0f46b2ed,"DiscordClient.shutdown","Discord.hx",38,0xa6c9e0b2)
HX_LOCAL_STACK_FRAME(_hx_pos_e5abf8620039da0e_43_onReady,"DiscordClient","onReady",0x690ae04d,"DiscordClient.onReady","Discord.hx",43,0xa6c9e0b2)
HX_LOCAL_STACK_FRAME(_hx_pos_e5abf8620039da0e_53_onError,"DiscordClient","onError",0xf57a0bb2,"DiscordClient.onError","Discord.hx",53,0xa6c9e0b2)
HX_LOCAL_STACK_FRAME(_hx_pos_e5abf8620039da0e_58_onDisconnected,"DiscordClient","onDisconnected",0xa84d7d11,"DiscordClient.onDisconnected","Discord.hx",58,0xa6c9e0b2)
HX_LOCAL_STACK_FRAME(_hx_pos_e5abf8620039da0e_65_initialize,"DiscordClient","initialize",0x1dd16b67,"DiscordClient.initialize","Discord.hx",65,0xa6c9e0b2)
HX_LOCAL_STACK_FRAME(_hx_pos_e5abf8620039da0e_62_initialize,"DiscordClient","initialize",0x1dd16b67,"DiscordClient.initialize","Discord.hx",62,0xa6c9e0b2)
HX_LOCAL_STACK_FRAME(_hx_pos_e5abf8620039da0e_71_changePresence,"DiscordClient","changePresence",0xb0052162,"DiscordClient.changePresence","Discord.hx",71,0xa6c9e0b2)
HX_LOCAL_STACK_FRAME(_hx_pos_e5abf8620039da0e_96_addLuaCallbacks,"DiscordClient","addLuaCallbacks",0x51cfc080,"DiscordClient.addLuaCallbacks","Discord.hx",96,0xa6c9e0b2)
HX_LOCAL_STACK_FRAME(_hx_pos_e5abf8620039da0e_95_addLuaCallbacks,"DiscordClient","addLuaCallbacks",0x51cfc080,"DiscordClient.addLuaCallbacks","Discord.hx",95,0xa6c9e0b2)

void DiscordClient_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_e5abf8620039da0e_16_new)
HXLINE(  17)		::haxe::Log_obj::trace(HX_("Discord Client starting...",0d,5b,39,a8),::hx::SourceInfo(HX_("source/Discord.hx",a6,a8,2e,33),17,HX_("DiscordClient",f7,d0,c5,2b),HX_("new",60,d0,53,00)));
HXLINE(  18)		::discord_rpc::DiscordRpc_obj::start( ::Dynamic(::hx::Anon_obj::Create(4)
            			->setFixed(0,HX_("onDisconnected",7a,eb,5a,b8),::DiscordClient_obj::onDisconnected_dyn())
            			->setFixed(1,HX_("onError",29,6a,67,09),::DiscordClient_obj::onError_dyn())
            			->setFixed(2,HX_("clientID",e6,72,8f,15),HX_("863222024192262205",be,6e,40,13))
            			->setFixed(3,HX_("onReady",c4,3e,f8,7c),::DiscordClient_obj::onReady_dyn())));
HXLINE(  24)		::haxe::Log_obj::trace(HX_("Discord Client started.",8e,09,8e,36),::hx::SourceInfo(HX_("source/Discord.hx",a6,a8,2e,33),24,HX_("DiscordClient",f7,d0,c5,2b),HX_("new",60,d0,53,00)));
HXLINE(  26)		while(true){
HXLINE(  28)			::discord_rpc::DiscordRpc_obj::process();
HXLINE(  29)			::Sys_obj::sleep(( (Float)(2) ));
            		}
            	}

Dynamic DiscordClient_obj::__CreateEmpty() { return new DiscordClient_obj; }

void *DiscordClient_obj::_hx_vtable = 0;

Dynamic DiscordClient_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DiscordClient_obj > _hx_result = new DiscordClient_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DiscordClient_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x080ce637;
}

void DiscordClient_obj::shutdown(){
            	HX_STACKFRAME(&_hx_pos_e5abf8620039da0e_38_shutdown)
HXDLIN(  38)		::discord_rpc::DiscordRpc_obj::shutdown();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(DiscordClient_obj,shutdown,(void))

void DiscordClient_obj::onReady(){
            	HX_STACKFRAME(&_hx_pos_e5abf8620039da0e_43_onReady)
HXDLIN(  43)		::discord_rpc::DiscordRpc_obj::presence( ::Dynamic(::hx::Anon_obj::Create(4)
            			->setFixed(0,HX_("state",11,76,0b,84),null())
            			->setFixed(1,HX_("details",c2,dc,56,ab),HX_("In the Menus",0a,c1,ad,c6))
            			->setFixed(2,HX_("largeImageKey",df,8f,e3,ae),HX_("icon",79,e7,b2,45))
            			->setFixed(3,HX_("largeImageText",6d,3e,2d,5e),HX_("Psych Engine",47,a4,90,86))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(DiscordClient_obj,onReady,(void))

void DiscordClient_obj::onError(int _code,::String _message){
            	HX_STACKFRAME(&_hx_pos_e5abf8620039da0e_53_onError)
HXDLIN(  53)		::haxe::Log_obj::trace((((HX_("Error! ",87,92,5b,b7) + _code) + HX_(" : ",c6,7a,18,00)) + _message),::hx::SourceInfo(HX_("source/Discord.hx",a6,a8,2e,33),53,HX_("DiscordClient",f7,d0,c5,2b),HX_("onError",29,6a,67,09)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DiscordClient_obj,onError,(void))

void DiscordClient_obj::onDisconnected(int _code,::String _message){
            	HX_STACKFRAME(&_hx_pos_e5abf8620039da0e_58_onDisconnected)
HXDLIN(  58)		::haxe::Log_obj::trace((((HX_("Disconnected! ",7a,e1,87,53) + _code) + HX_(" : ",c6,7a,18,00)) + _message),::hx::SourceInfo(HX_("source/Discord.hx",a6,a8,2e,33),58,HX_("DiscordClient",f7,d0,c5,2b),HX_("onDisconnected",7a,eb,5a,b8)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DiscordClient_obj,onDisconnected,(void))

void DiscordClient_obj::initialize(){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_e5abf8620039da0e_65_initialize)
HXLINE(  65)			 ::DiscordClient_obj::__alloc( HX_CTX );
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_STACKFRAME(&_hx_pos_e5abf8620039da0e_62_initialize)
HXLINE(  63)		 ::sys::thread::_Thread::HaxeThread DiscordDaemon = ::sys::thread::_Thread::HaxeThread_obj::create( ::Dynamic(new _hx_Closure_0()),false);
HXLINE(  67)		::haxe::Log_obj::trace(HX_("Discord Client initialized",f3,a9,32,06),::hx::SourceInfo(HX_("source/Discord.hx",a6,a8,2e,33),67,HX_("DiscordClient",f7,d0,c5,2b),HX_("initialize",50,31,bb,ec)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(DiscordClient_obj,initialize,(void))

void DiscordClient_obj::changePresence(::String details,::String state,::String smallImageKey, ::Dynamic hasStartTimestamp, ::Dynamic endTimestamp){
            	HX_STACKFRAME(&_hx_pos_e5abf8620039da0e_71_changePresence)
HXLINE(  72)		Float startTimestamp;
HXDLIN(  72)		if (( (bool)(hasStartTimestamp) )) {
HXLINE(  72)			startTimestamp = ::Date_obj::now()->getTime();
            		}
            		else {
HXLINE(  72)			startTimestamp = ( (Float)(0) );
            		}
HXLINE(  74)		if (::hx::IsGreater( endTimestamp,0 )) {
HXLINE(  76)			endTimestamp = (startTimestamp + endTimestamp);
            		}
HXLINE(  83)		::String _hx_tmp = (HX_("Engine Version: ",e0,15,79,71) + ::MainMenuState_obj::psychEngineVersion);
HXLINE(  86)		 ::Dynamic _hx_tmp1 = ::Std_obj::_hx_int((startTimestamp / ( (Float)(1000) )));
HXLINE(  79)		::discord_rpc::DiscordRpc_obj::presence( ::Dynamic(::hx::Anon_obj::Create(7)
            			->setFixed(0,HX_("state",11,76,0b,84),state)
            			->setFixed(1,HX_("smallImageKey",eb,38,69,a3),smallImageKey)
            			->setFixed(2,HX_("details",c2,dc,56,ab),details)
            			->setFixed(3,HX_("largeImageKey",df,8f,e3,ae),HX_("icon",79,e7,b2,45))
            			->setFixed(4,HX_("endTimestamp",7b,dd,d0,b4),::Std_obj::_hx_int((( (Float)(endTimestamp) ) / ( (Float)(1000) ))))
            			->setFixed(5,HX_("startTimestamp",14,a4,09,c5),_hx_tmp1)
            			->setFixed(6,HX_("largeImageText",6d,3e,2d,5e),_hx_tmp)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(DiscordClient_obj,changePresence,(void))

void DiscordClient_obj::addLuaCallbacks( cpp::Reference<lua_State> lua){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(5)
            		void _hx_run(::String details,::String state,::String smallImageKey, ::Dynamic hasStartTimestamp, ::Dynamic endTimestamp){
            			HX_STACKFRAME(&_hx_pos_e5abf8620039da0e_96_addLuaCallbacks)
HXLINE(  96)			::DiscordClient_obj::changePresence(details,state,smallImageKey,hasStartTimestamp,endTimestamp);
            		}
            		HX_END_LOCAL_FUNC5((void))

            	HX_STACKFRAME(&_hx_pos_e5abf8620039da0e_95_addLuaCallbacks)
HXDLIN(  95)		::llua::Lua_helper_obj::callbacks->set(HX_("changePresence",cb,8f,12,c0), ::Dynamic(new _hx_Closure_0()));
HXDLIN(  95)		linc::callbacks::add_callback_function(lua,HX_("changePresence",cb,8f,12,c0));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DiscordClient_obj,addLuaCallbacks,(void))


::hx::ObjectPtr< DiscordClient_obj > DiscordClient_obj::__new() {
	::hx::ObjectPtr< DiscordClient_obj > __this = new DiscordClient_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< DiscordClient_obj > DiscordClient_obj::__alloc(::hx::Ctx *_hx_ctx) {
	DiscordClient_obj *__this = (DiscordClient_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DiscordClient_obj), false, "DiscordClient"));
	*(void **)__this = DiscordClient_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

DiscordClient_obj::DiscordClient_obj()
{
}

bool DiscordClient_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"onReady") ) { outValue = onReady_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"onError") ) { outValue = onError_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"shutdown") ) { outValue = shutdown_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { outValue = initialize_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onDisconnected") ) { outValue = onDisconnected_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"changePresence") ) { outValue = changePresence_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"addLuaCallbacks") ) { outValue = addLuaCallbacks_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *DiscordClient_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *DiscordClient_obj_sStaticStorageInfo = 0;
#endif

::hx::Class DiscordClient_obj::__mClass;

static ::String DiscordClient_obj_sStaticFields[] = {
	HX_("shutdown",96,fc,0b,6b),
	HX_("onReady",c4,3e,f8,7c),
	HX_("onError",29,6a,67,09),
	HX_("onDisconnected",7a,eb,5a,b8),
	HX_("initialize",50,31,bb,ec),
	HX_("changePresence",cb,8f,12,c0),
	HX_("addLuaCallbacks",f7,ed,82,4d),
	::String(null())
};

void DiscordClient_obj::__register()
{
	DiscordClient_obj _hx_dummy;
	DiscordClient_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("DiscordClient",f7,d0,c5,2b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DiscordClient_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(DiscordClient_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< DiscordClient_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DiscordClient_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DiscordClient_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

