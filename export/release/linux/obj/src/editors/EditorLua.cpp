#include <hxcpp.h>

#ifndef INCLUDED_cc9afe4755847ade
#define INCLUDED_cc9afe4755847ade
#include "linc_lua.h"
#endif
#ifndef INCLUDED_ClientPrefs
#include <ClientPrefs.h>
#endif
#ifndef INCLUDED_Conductor
#include <Conductor.h>
#endif
#ifndef INCLUDED_DiscordClient
#include <DiscordClient.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_ValueType
#include <ValueType.h>
#endif
#ifndef INCLUDED_editors_EditorLua
#include <editors/EditorLua.h>
#endif
#ifndef INCLUDED_editors_EditorPlayState
#include <editors/EditorPlayState.h>
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
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
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
#ifndef INCLUDED_lime_app_Application
#include <lime/app/Application.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_app_Module
#include <lime/app/Module.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
#ifndef INCLUDED_llua_Convert
#include <llua/Convert.h>
#endif
#ifndef INCLUDED_llua_Lua_helper
#include <llua/Lua_helper.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1dd272e8491e8c9a_36_new,"editors.EditorLua","new",0xe36c1415,"editors.EditorLua.new","editors/EditorLua.hx",36,0x0e85427c)
HX_DEFINE_STACK_FRAME(_hx_pos_1dd272e8491e8c9a_90_new,"editors.EditorLua","new",0xe36c1415,"editors.EditorLua.new","editors/EditorLua.hx",90,0x0e85427c)
HX_DEFINE_STACK_FRAME(_hx_pos_1dd272e8491e8c9a_102_new,"editors.EditorLua","new",0xe36c1415,"editors.EditorLua.new","editors/EditorLua.hx",102,0x0e85427c)
HX_DEFINE_STACK_FRAME(_hx_pos_1dd272e8491e8c9a_114_new,"editors.EditorLua","new",0xe36c1415,"editors.EditorLua.new","editors/EditorLua.hx",114,0x0e85427c)
HX_DEFINE_STACK_FRAME(_hx_pos_1dd272e8491e8c9a_128_new,"editors.EditorLua","new",0xe36c1415,"editors.EditorLua.new","editors/EditorLua.hx",128,0x0e85427c)
HX_DEFINE_STACK_FRAME(_hx_pos_1dd272e8491e8c9a_141_new,"editors.EditorLua","new",0xe36c1415,"editors.EditorLua.new","editors/EditorLua.hx",141,0x0e85427c)
HX_DEFINE_STACK_FRAME(_hx_pos_1dd272e8491e8c9a_154_new,"editors.EditorLua","new",0xe36c1415,"editors.EditorLua.new","editors/EditorLua.hx",154,0x0e85427c)
HX_DEFINE_STACK_FRAME(_hx_pos_1dd272e8491e8c9a_159_new,"editors.EditorLua","new",0xe36c1415,"editors.EditorLua.new","editors/EditorLua.hx",159,0x0e85427c)
HX_DEFINE_STACK_FRAME(_hx_pos_1dd272e8491e8c9a_167_new,"editors.EditorLua","new",0xe36c1415,"editors.EditorLua.new","editors/EditorLua.hx",167,0x0e85427c)
HX_DEFINE_STACK_FRAME(_hx_pos_1dd272e8491e8c9a_175_new,"editors.EditorLua","new",0xe36c1415,"editors.EditorLua.new","editors/EditorLua.hx",175,0x0e85427c)
HX_LOCAL_STACK_FRAME(_hx_pos_1dd272e8491e8c9a_189_call,"editors.EditorLua","call",0x13dd1349,"editors.EditorLua.call","editors/EditorLua.hx",189,0x0e85427c)
HX_LOCAL_STACK_FRAME(_hx_pos_1dd272e8491e8c9a_222_resultIsAllowed,"editors.EditorLua","resultIsAllowed",0xefffe0f6,"editors.EditorLua.resultIsAllowed","editors/EditorLua.hx",222,0x0e85427c)
HX_LOCAL_STACK_FRAME(_hx_pos_1dd272e8491e8c9a_231_set,"editors.EditorLua","set",0xe36fdf57,"editors.EditorLua.set","editors/EditorLua.hx",231,0x0e85427c)
HX_LOCAL_STACK_FRAME(_hx_pos_1dd272e8491e8c9a_243_getBool,"editors.EditorLua","getBool",0x731af615,"editors.EditorLua.getBool","editors/EditorLua.hx",243,0x0e85427c)
HX_LOCAL_STACK_FRAME(_hx_pos_1dd272e8491e8c9a_259_stop,"editors.EditorLua","stop",0x1e7eeaad,"editors.EditorLua.stop","editors/EditorLua.hx",259,0x0e85427c)
HX_LOCAL_STACK_FRAME(_hx_pos_1dd272e8491e8c9a_37_boot,"editors.EditorLua","boot",0x133e7edd,"editors.EditorLua.boot","editors/EditorLua.hx",37,0x0e85427c)
HX_LOCAL_STACK_FRAME(_hx_pos_1dd272e8491e8c9a_38_boot,"editors.EditorLua","boot",0x133e7edd,"editors.EditorLua.boot","editors/EditorLua.hx",38,0x0e85427c)
namespace editors{

void EditorLua_obj::__construct(::String script){
            	HX_STACKFRAME(&_hx_pos_1dd272e8491e8c9a_36_new)
HXLINE(  41)		this->lua = null();
HXLINE(  46)		this->lua = luaL_newstate();
HXLINE(  47)		luaL_openlibs(this->lua);
HXLINE(  48)		{
HXLINE(  48)			 cpp::Reference<lua_State> l = this->lua;
HXDLIN(  48)			linc::callbacks::set_callbacks_function(::cpp::Function< int ( cpp::Reference<lua_State>,::String)>(::hx::AnyCast(&::llua::Lua_helper_obj::callback_handler )));
            		}
HXLINE(  53)		 ::Dynamic result = luaL_dofile(this->lua,script);
HXLINE(  54)		::String resultStr = linc::lua::tostring(this->lua,( (int)(result) ));
HXLINE(  55)		bool _hx_tmp;
HXDLIN(  55)		if (::hx::IsNotNull( resultStr )) {
HXLINE(  55)			_hx_tmp = ::hx::IsNotEq( result,0 );
            		}
            		else {
HXLINE(  55)			_hx_tmp = false;
            		}
HXDLIN(  55)		if (_hx_tmp) {
HXLINE(  56)			::lime::app::Application_obj::current->_hx___window->alert(resultStr,HX_("Error on .LUA script!",e9,36,0d,31));
HXLINE(  57)			::haxe::Log_obj::trace((HX_("Error on .LUA script! ",17,d5,82,ba) + resultStr),::hx::SourceInfo(HX_("source/editors/EditorLua.hx",70,03,47,39),57,HX_("editors.EditorLua",a3,65,49,99),HX_("new",60,d0,53,00)));
HXLINE(  58)			this->lua = null();
HXLINE(  59)			return;
            		}
HXLINE(  61)		::haxe::Log_obj::trace((HX_("Lua file loaded succesfully:",7f,6a,cb,37) + script),::hx::SourceInfo(HX_("source/editors/EditorLua.hx",70,03,47,39),61,HX_("editors.EditorLua",a3,65,49,99),HX_("new",60,d0,53,00)));
HXLINE(  64)		this->set(HX_("Function_Stop",c9,a5,e8,d3),::editors::EditorLua_obj::Function_Stop);
HXLINE(  65)		this->set(HX_("Function_Continue",ae,85,11,8b),::editors::EditorLua_obj::Function_Continue);
HXLINE(  66)		this->set(HX_("inChartEditor",46,79,c6,62),true);
HXLINE(  68)		this->set(HX_("curBpm",3f,61,c3,3e),::Conductor_obj::bpm);
HXLINE(  69)		this->set(HX_("bpm",df,be,4a,00), ::Dynamic(::PlayState_obj::SONG->__Field(HX_("bpm",df,be,4a,00),::hx::paccDynamic)));
HXLINE(  70)		this->set(HX_("scrollSpeed",3a,e0,46,cb), ::Dynamic(::PlayState_obj::SONG->__Field(HX_("speed",87,97,69,81),::hx::paccDynamic)));
HXLINE(  71)		this->set(HX_("crochet",34,d5,b5,d4),::Conductor_obj::crochet);
HXLINE(  72)		this->set(HX_("stepCrochet",48,d7,ff,e6),::Conductor_obj::stepCrochet);
HXLINE(  73)		this->set(HX_("songLength",9b,3a,8c,fa),::flixel::FlxG_obj::sound->music->_length);
HXLINE(  74)		this->set(HX_("songName",c0,d0,d7,36), ::Dynamic(::PlayState_obj::SONG->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic)));
HXLINE(  76)		this->set(HX_("screenWidth",fa,02,e8,81),::flixel::FlxG_obj::width);
HXLINE(  77)		this->set(HX_("screenHeight",73,10,6a,df),::flixel::FlxG_obj::height);
HXLINE(  79)		{
HXLINE(  79)			{
HXLINE(  80)				this->set((HX_("defaultPlayerStrumX",91,a3,83,89) + 0),0);
HXLINE(  81)				this->set((HX_("defaultPlayerStrumY",92,a3,83,89) + 0),0);
HXLINE(  82)				this->set((HX_("defaultOpponentStrumX",0d,e1,d7,f1) + 0),0);
HXLINE(  83)				this->set((HX_("defaultOpponentStrumY",0e,e1,d7,f1) + 0),0);
            			}
HXLINE(  79)			{
HXLINE(  80)				this->set((HX_("defaultPlayerStrumX",91,a3,83,89) + 1),0);
HXLINE(  81)				this->set((HX_("defaultPlayerStrumY",92,a3,83,89) + 1),0);
HXLINE(  82)				this->set((HX_("defaultOpponentStrumX",0d,e1,d7,f1) + 1),0);
HXLINE(  83)				this->set((HX_("defaultOpponentStrumY",0e,e1,d7,f1) + 1),0);
            			}
HXLINE(  79)			{
HXLINE(  80)				this->set((HX_("defaultPlayerStrumX",91,a3,83,89) + 2),0);
HXLINE(  81)				this->set((HX_("defaultPlayerStrumY",92,a3,83,89) + 2),0);
HXLINE(  82)				this->set((HX_("defaultOpponentStrumX",0d,e1,d7,f1) + 2),0);
HXLINE(  83)				this->set((HX_("defaultOpponentStrumY",0e,e1,d7,f1) + 2),0);
            			}
HXLINE(  79)			{
HXLINE(  80)				this->set((HX_("defaultPlayerStrumX",91,a3,83,89) + 3),0);
HXLINE(  81)				this->set((HX_("defaultPlayerStrumY",92,a3,83,89) + 3),0);
HXLINE(  82)				this->set((HX_("defaultOpponentStrumX",0d,e1,d7,f1) + 3),0);
HXLINE(  83)				this->set((HX_("defaultOpponentStrumY",0e,e1,d7,f1) + 3),0);
            			}
            		}
HXLINE(  86)		this->set(HX_("downscroll",ef,45,d4,4f),::ClientPrefs_obj::downScroll);
HXLINE(  87)		this->set(HX_("middlescroll",22,59,c4,2d),::ClientPrefs_obj::middleScroll);
HXLINE(  90)		{
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            			 ::Dynamic _hx_run(::String variable){
            				HX_STACKFRAME(&_hx_pos_1dd272e8491e8c9a_90_new)
HXLINE(  91)				::Array< ::String > killMe = variable.split(HX_(".",2e,00,00,00));
HXLINE(  92)				if ((killMe->length > 1)) {
HXLINE(  93)					 ::Dynamic coverMeInPiss = ::Reflect_obj::getProperty(::editors::EditorPlayState_obj::instance,killMe->__get(0));
HXLINE(  95)					{
HXLINE(  95)						int _g = 1;
HXDLIN(  95)						int _g1 = (killMe->length - 1);
HXDLIN(  95)						while((_g < _g1)){
HXLINE(  95)							_g = (_g + 1);
HXDLIN(  95)							int i = (_g - 1);
HXLINE(  96)							coverMeInPiss = ::Reflect_obj::getProperty(coverMeInPiss,killMe->__get(i));
            						}
            					}
HXLINE(  98)					return ::Reflect_obj::getProperty(coverMeInPiss,killMe->__get((killMe->length - 1)));
            				}
HXLINE( 100)				return ::Reflect_obj::getProperty(::editors::EditorPlayState_obj::instance,variable);
            			}
            			HX_END_LOCAL_FUNC1(return)

HXLINE(  90)			 cpp::Reference<lua_State> l1 = this->lua;
HXDLIN(  90)			::llua::Lua_helper_obj::callbacks->set(HX_("getProperty",0b,0b,2c,d2), ::Dynamic(new _hx_Closure_0()));
HXDLIN(  90)			linc::callbacks::add_callback_function(l1,HX_("getProperty",0b,0b,2c,d2));
            		}
HXLINE( 102)		{
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_1) HXARGC(2)
            			void _hx_run(::String variable, ::Dynamic value){
            				HX_STACKFRAME(&_hx_pos_1dd272e8491e8c9a_102_new)
HXLINE( 103)				::Array< ::String > killMe = variable.split(HX_(".",2e,00,00,00));
HXLINE( 104)				if ((killMe->length > 1)) {
HXLINE( 105)					 ::Dynamic coverMeInPiss = ::Reflect_obj::getProperty(::editors::EditorPlayState_obj::instance,killMe->__get(0));
HXLINE( 107)					{
HXLINE( 107)						int _g = 1;
HXDLIN( 107)						int _g1 = (killMe->length - 1);
HXDLIN( 107)						while((_g < _g1)){
HXLINE( 107)							_g = (_g + 1);
HXDLIN( 107)							int i = (_g - 1);
HXLINE( 108)							coverMeInPiss = ::Reflect_obj::getProperty(coverMeInPiss,killMe->__get(i));
            						}
            					}
HXLINE( 110)					::Reflect_obj::setProperty(coverMeInPiss,killMe->__get((killMe->length - 1)),value);
HXDLIN( 110)					return;
            				}
HXLINE( 112)				::Reflect_obj::setProperty(::editors::EditorPlayState_obj::instance,variable,value);
            			}
            			HX_END_LOCAL_FUNC2((void))

HXLINE( 102)			 cpp::Reference<lua_State> l2 = this->lua;
HXDLIN( 102)			::llua::Lua_helper_obj::callbacks->set(HX_("setProperty",17,12,99,dc), ::Dynamic(new _hx_Closure_1()));
HXDLIN( 102)			linc::callbacks::add_callback_function(l2,HX_("setProperty",17,12,99,dc));
            		}
HXLINE( 114)		{
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_2) HXARGC(3)
            			 ::Dynamic _hx_run(::String obj,int index, ::Dynamic variable){
            				HX_STACKFRAME(&_hx_pos_1dd272e8491e8c9a_114_new)
HXLINE( 115)				if (::Std_obj::isOfType(::Reflect_obj::getProperty(::editors::EditorPlayState_obj::instance,obj),::hx::ClassOf< ::flixel::group::FlxTypedGroup >())) {
HXLINE( 116)					return ::Reflect_obj::getProperty( ::Dynamic(::Reflect_obj::getProperty(::editors::EditorPlayState_obj::instance,obj)->__Field(HX_("members",d9,2c,70,1a),::hx::paccDynamic))->__GetItem(index),( (::String)(variable) ));
            				}
HXLINE( 119)				 ::Dynamic leArray = ::Reflect_obj::getProperty(::editors::EditorPlayState_obj::instance,obj)->__GetItem(index);
HXLINE( 120)				if (::hx::IsNotNull( leArray )) {
HXLINE( 121)					if (::hx::IsPointerEq( ::Type_obj::_hx_typeof(variable),::ValueType_obj::TInt_dyn() )) {
HXLINE( 122)						return leArray->__GetItem(( (int)(variable) ));
            					}
HXLINE( 124)					return ::Reflect_obj::getProperty(leArray,( (::String)(variable) ));
            				}
HXLINE( 126)				return null();
            			}
            			HX_END_LOCAL_FUNC3(return)

HXLINE( 114)			 cpp::Reference<lua_State> l3 = this->lua;
HXDLIN( 114)			::llua::Lua_helper_obj::callbacks->set(HX_("getPropertyFromGroup",ea,38,fe,ee), ::Dynamic(new _hx_Closure_2()));
HXDLIN( 114)			linc::callbacks::add_callback_function(l3,HX_("getPropertyFromGroup",ea,38,fe,ee));
            		}
HXLINE( 128)		{
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_3) HXARGC(4)
            			void _hx_run(::String obj,int index, ::Dynamic variable, ::Dynamic value){
            				HX_STACKFRAME(&_hx_pos_1dd272e8491e8c9a_128_new)
HXLINE( 129)				if (::Std_obj::isOfType(::Reflect_obj::getProperty(::editors::EditorPlayState_obj::instance,obj),::hx::ClassOf< ::flixel::group::FlxTypedGroup >())) {
HXLINE( 130)					::Reflect_obj::setProperty( ::Dynamic(::Reflect_obj::getProperty(::editors::EditorPlayState_obj::instance,obj)->__Field(HX_("members",d9,2c,70,1a),::hx::paccDynamic))->__GetItem(index),( (::String)(variable) ),value);
HXDLIN( 130)					return;
            				}
HXLINE( 133)				 ::Dynamic leArray = ::Reflect_obj::getProperty(::editors::EditorPlayState_obj::instance,obj)->__GetItem(index);
HXLINE( 134)				if (::hx::IsNotNull( leArray )) {
HXLINE( 135)					if (::hx::IsPointerEq( ::Type_obj::_hx_typeof(variable),::ValueType_obj::TInt_dyn() )) {
HXLINE( 136)						leArray->__SetItem(( (int)(variable) ),value);
HXDLIN( 136)						return;
            					}
HXLINE( 138)					::Reflect_obj::setProperty(leArray,( (::String)(variable) ),value);
HXDLIN( 138)					return;
            				}
            			}
            			HX_END_LOCAL_FUNC4((void))

HXLINE( 128)			 cpp::Reference<lua_State> l4 = this->lua;
HXDLIN( 128)			::llua::Lua_helper_obj::callbacks->set(HX_("setPropertyFromGroup",5e,f0,b5,bb), ::Dynamic(new _hx_Closure_3()));
HXDLIN( 128)			linc::callbacks::add_callback_function(l4,HX_("setPropertyFromGroup",5e,f0,b5,bb));
            		}
HXLINE( 141)		{
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_4) HXARGC(3)
            			void _hx_run(::String obj,int index, ::Dynamic __o_dontDestroy){
            		bool dontDestroy = __o_dontDestroy.Default(false);
            				HX_STACKFRAME(&_hx_pos_1dd272e8491e8c9a_141_new)
HXLINE( 142)				if (::Std_obj::isOfType(::Reflect_obj::getProperty(::editors::EditorPlayState_obj::instance,obj),::hx::ClassOf< ::flixel::group::FlxTypedGroup >())) {
HXLINE( 143)					 ::Dynamic sex =  ::Dynamic(::Reflect_obj::getProperty(::editors::EditorPlayState_obj::instance,obj)->__Field(HX_("members",d9,2c,70,1a),::hx::paccDynamic))->__GetItem(index);
HXLINE( 144)					if (!(dontDestroy)) {
HXLINE( 145)						sex->__Field(HX_("kill",9e,df,09,47),::hx::paccDynamic)();
            					}
HXLINE( 146)					::Reflect_obj::getProperty(::editors::EditorPlayState_obj::instance,obj)->__Field(HX_("remove",44,9c,88,04),::hx::paccDynamic)(sex,true);
HXLINE( 147)					if (!(dontDestroy)) {
HXLINE( 148)						sex->__Field(HX_("destroy",fa,2c,86,24),::hx::paccDynamic)();
            					}
HXLINE( 149)					return;
            				}
HXLINE( 151)				 ::Dynamic _hx_tmp =  ::Dynamic(::Reflect_obj::getProperty(::editors::EditorPlayState_obj::instance,obj)->__Field(HX_("remove",44,9c,88,04),::hx::paccDynamic));
HXDLIN( 151)				_hx_tmp(::Reflect_obj::getProperty(::editors::EditorPlayState_obj::instance,obj)->__GetItem(index));
            			}
            			HX_END_LOCAL_FUNC3((void))

HXLINE( 141)			 cpp::Reference<lua_State> l5 = this->lua;
HXDLIN( 141)			::llua::Lua_helper_obj::callbacks->set(HX_("removeFromGroup",91,38,9c,8f), ::Dynamic(new _hx_Closure_4()));
HXDLIN( 141)			linc::callbacks::add_callback_function(l5,HX_("removeFromGroup",91,38,9c,8f));
            		}
HXLINE( 154)		{
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_5) HXARGC(1)
            			 ::Dynamic _hx_run(::String color){
            				HX_STACKFRAME(&_hx_pos_1dd272e8491e8c9a_154_new)
HXLINE( 155)				if (!(::StringTools_obj::startsWith(color,HX_("0x",48,2a,00,00)))) {
HXLINE( 155)					color = (HX_("0xff",88,a5,15,20) + color);
            				}
HXLINE( 156)				return ::Std_obj::parseInt(color);
            			}
            			HX_END_LOCAL_FUNC1(return)

HXLINE( 154)			 cpp::Reference<lua_State> l6 = this->lua;
HXDLIN( 154)			::llua::Lua_helper_obj::callbacks->set(HX_("getColorFromHex",24,62,3b,a4), ::Dynamic(new _hx_Closure_5()));
HXDLIN( 154)			linc::callbacks::add_callback_function(l6,HX_("getColorFromHex",24,62,3b,a4));
            		}
HXLINE( 159)		{
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_6) HXARGC(3)
            			void _hx_run(::String obj,int x, ::Dynamic __o_y){
            		int y = __o_y.Default(0);
            				HX_STACKFRAME(&_hx_pos_1dd272e8491e8c9a_159_new)
HXLINE( 160)				 ::flixel::FlxSprite poop = ( ( ::flixel::FlxSprite)(::Reflect_obj::getProperty(::editors::EditorPlayState_obj::instance,obj)) );
HXLINE( 161)				if (::hx::IsNotNull( poop )) {
HXLINE( 162)					poop->setGraphicSize(x,y);
HXLINE( 163)					poop->updateHitbox();
HXLINE( 164)					return;
            				}
            			}
            			HX_END_LOCAL_FUNC3((void))

HXLINE( 159)			 cpp::Reference<lua_State> l7 = this->lua;
HXDLIN( 159)			::llua::Lua_helper_obj::callbacks->set(HX_("setGraphicSize",07,d7,f8,2d), ::Dynamic(new _hx_Closure_6()));
HXDLIN( 159)			linc::callbacks::add_callback_function(l7,HX_("setGraphicSize",07,d7,f8,2d));
            		}
HXLINE( 167)		{
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_7) HXARGC(3)
            			void _hx_run(::String obj,Float x,Float y){
            				HX_STACKFRAME(&_hx_pos_1dd272e8491e8c9a_167_new)
HXLINE( 168)				 ::flixel::FlxSprite poop = ( ( ::flixel::FlxSprite)(::Reflect_obj::getProperty(::editors::EditorPlayState_obj::instance,obj)) );
HXLINE( 169)				if (::hx::IsNotNull( poop )) {
HXLINE( 170)					poop->scale->set(x,y);
HXLINE( 171)					poop->updateHitbox();
HXLINE( 172)					return;
            				}
            			}
            			HX_END_LOCAL_FUNC3((void))

HXLINE( 167)			 cpp::Reference<lua_State> l8 = this->lua;
HXDLIN( 167)			::llua::Lua_helper_obj::callbacks->set(HX_("scaleObject",e9,44,43,01), ::Dynamic(new _hx_Closure_7()));
HXDLIN( 167)			linc::callbacks::add_callback_function(l8,HX_("scaleObject",e9,44,43,01));
            		}
HXLINE( 175)		{
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_8) HXARGC(1)
            			void _hx_run(::String obj){
            				HX_STACKFRAME(&_hx_pos_1dd272e8491e8c9a_175_new)
HXLINE( 176)				 ::flixel::FlxSprite poop = ( ( ::flixel::FlxSprite)(::Reflect_obj::getProperty(::editors::EditorPlayState_obj::instance,obj)) );
HXLINE( 177)				if (::hx::IsNotNull( poop )) {
HXLINE( 178)					poop->updateHitbox();
HXLINE( 179)					return;
            				}
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE( 175)			 cpp::Reference<lua_State> l9 = this->lua;
HXDLIN( 175)			::llua::Lua_helper_obj::callbacks->set(HX_("updateHitbox",81,94,eb,56), ::Dynamic(new _hx_Closure_8()));
HXDLIN( 175)			linc::callbacks::add_callback_function(l9,HX_("updateHitbox",81,94,eb,56));
            		}
HXLINE( 183)		::DiscordClient_obj::addLuaCallbacks(this->lua);
HXLINE( 185)		this->call(HX_("onCreate",7b,5d,bc,5b),::cpp::VirtualArray_obj::__new(0));
            	}

Dynamic EditorLua_obj::__CreateEmpty() { return new EditorLua_obj; }

void *EditorLua_obj::_hx_vtable = 0;

Dynamic EditorLua_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< EditorLua_obj > _hx_result = new EditorLua_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool EditorLua_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5fc5764d;
}

 ::Dynamic EditorLua_obj::call(::String event,::cpp::VirtualArray args){
            	HX_STACKFRAME(&_hx_pos_1dd272e8491e8c9a_189_call)
HXLINE( 191)		if (::hx::IsNull( this->lua )) {
HXLINE( 192)			return ::editors::EditorLua_obj::Function_Continue;
            		}
HXLINE( 195)		lua_getglobal(this->lua,event);
HXLINE( 197)		{
HXLINE( 197)			int _g = 0;
HXDLIN( 197)			while((_g < args->get_length())){
HXLINE( 197)				 ::Dynamic arg = args->__get(_g);
HXDLIN( 197)				_g = (_g + 1);
HXLINE( 198)				::llua::Convert_obj::toLua(this->lua,arg);
            			}
            		}
HXLINE( 201)		 ::Dynamic result = lua_pcall(this->lua,args->get_length(),1,0);
HXLINE( 202)		bool _hx_tmp;
HXDLIN( 202)		if (::hx::IsNotNull( result )) {
HXLINE( 202)			_hx_tmp = this->resultIsAllowed(this->lua,result);
            		}
            		else {
HXLINE( 202)			_hx_tmp = false;
            		}
HXDLIN( 202)		if (_hx_tmp) {
HXLINE( 206)			if ((lua_type(this->lua,-1) == 4)) {
HXLINE( 207)				::String error = linc::lua::tostring(this->lua,-1);
HXLINE( 208)				lua_pop(this->lua,1);
HXLINE( 209)				if ((error == HX_("attempt to call a nil value",93,04,85,54))) {
HXLINE( 210)					return ::editors::EditorLua_obj::Function_Continue;
            				}
            			}
HXLINE( 214)			 cpp::Reference<lua_State> l = this->lua;
HXDLIN( 214)			int v = ( (int)(result) );
HXDLIN( 214)			 ::Dynamic ret = null();
HXDLIN( 214)			switch((int)(lua_type(l,v))){
            				case (int)0: {
HXLINE( 214)					ret = null();
            				}
            				break;
            				case (int)1: {
HXLINE( 214)					ret = (lua_toboolean(l,v) != 0);
            				}
            				break;
            				case (int)3: {
HXLINE( 214)					ret = lua_tonumber(l,v);
            				}
            				break;
            				case (int)4: {
HXLINE( 214)					ret = linc::lua::tostring(l,v);
            				}
            				break;
            				case (int)5: {
HXLINE( 214)					bool array = true;
HXDLIN( 214)					 ::Dynamic ret1 = null();
HXDLIN( 214)					lua_pushnil(l);
HXDLIN( 214)					while((lua_next(l,-2) != 0)){
HXLINE( 214)						if ((lua_type(l,-2) != 3)) {
HXLINE( 214)							array = false;
HXDLIN( 214)							lua_pop(l,2);
HXDLIN( 214)							goto _hx_goto_13;
            						}
HXDLIN( 214)						Float n = lua_tonumber(l,-2);
HXDLIN( 214)						if ((n != ::Std_obj::_hx_int(n))) {
HXLINE( 214)							array = false;
HXDLIN( 214)							lua_pop(l,2);
HXDLIN( 214)							goto _hx_goto_13;
            						}
HXDLIN( 214)						lua_pop(l,1);
            					}
            					_hx_goto_13:;
HXDLIN( 214)					if (array) {
HXLINE( 214)						::cpp::VirtualArray arr = ::cpp::VirtualArray_obj::__new(0);
HXDLIN( 214)						lua_pushnil(l);
HXDLIN( 214)						while((lua_next(l,-2) != 0)){
HXLINE( 214)							int index = (lua_tointeger(l,-2) - 1);
HXDLIN( 214)							 ::Dynamic ret = null();
HXDLIN( 214)							switch((int)(lua_type(l,-1))){
            								case (int)0: {
HXLINE( 214)									ret = null();
            								}
            								break;
            								case (int)1: {
HXLINE( 214)									ret = (lua_toboolean(l,-1) != 0);
            								}
            								break;
            								case (int)3: {
HXLINE( 214)									ret = lua_tonumber(l,-1);
            								}
            								break;
            								case (int)4: {
HXLINE( 214)									ret = linc::lua::tostring(l,-1);
            								}
            								break;
            								case (int)5: {
HXLINE( 214)									bool array = true;
HXDLIN( 214)									 ::Dynamic ret1 = null();
HXDLIN( 214)									lua_pushnil(l);
HXDLIN( 214)									while((lua_next(l,-2) != 0)){
HXLINE( 214)										if ((lua_type(l,-2) != 3)) {
HXLINE( 214)											array = false;
HXDLIN( 214)											lua_pop(l,2);
HXDLIN( 214)											goto _hx_goto_15;
            										}
HXDLIN( 214)										Float n = lua_tonumber(l,-2);
HXDLIN( 214)										if ((n != ::Std_obj::_hx_int(n))) {
HXLINE( 214)											array = false;
HXDLIN( 214)											lua_pop(l,2);
HXDLIN( 214)											goto _hx_goto_15;
            										}
HXDLIN( 214)										lua_pop(l,1);
            									}
            									_hx_goto_15:;
HXDLIN( 214)									if (array) {
HXLINE( 214)										::cpp::VirtualArray arr = ::cpp::VirtualArray_obj::__new(0);
HXDLIN( 214)										lua_pushnil(l);
HXDLIN( 214)										while((lua_next(l,-2) != 0)){
HXLINE( 214)											int index = (lua_tointeger(l,-2) - 1);
HXDLIN( 214)											arr->set(index,::llua::Convert_obj::fromLua(l,-1));
HXDLIN( 214)											lua_pop(l,1);
            										}
HXDLIN( 214)										ret1 = arr;
            									}
            									else {
HXLINE( 214)										 hx::Anon obj = hx::Anon_obj::Create();
HXDLIN( 214)										lua_pushnil(l);
HXDLIN( 214)										while((lua_next(l,-2) != 0)){
HXLINE( 214)											::String ret = ::Std_obj::string(::llua::Convert_obj::fromLua(l,-2));
HXDLIN( 214)											obj->hx::Anon_obj::Add(ret,::llua::Convert_obj::fromLua(l,-1));
HXDLIN( 214)											lua_pop(l,1);
            										}
HXDLIN( 214)										ret1 = obj;
            									}
HXDLIN( 214)									ret = ret1;
            								}
            								break;
            								default:{
HXLINE( 214)									ret = null();
HXDLIN( 214)									::haxe::Log_obj::trace(HX_("return value not supported\n",48,41,fb,c8),::hx::SourceInfo(HX_("llua/Convert.hx",6e,6a,e3,49),96,HX_("llua.Convert",31,b8,44,19),HX_("fromLua",6e,2a,fd,57)));
            								}
            							}
HXDLIN( 214)							arr->set(index,ret);
HXDLIN( 214)							lua_pop(l,1);
            						}
HXDLIN( 214)						ret1 = arr;
            					}
            					else {
HXLINE( 214)						 hx::Anon obj = hx::Anon_obj::Create();
HXDLIN( 214)						lua_pushnil(l);
HXDLIN( 214)						while((lua_next(l,-2) != 0)){
HXLINE( 214)							 ::Dynamic ret = null();
HXDLIN( 214)							switch((int)(lua_type(l,-2))){
            								case (int)0: {
HXLINE( 214)									ret = null();
            								}
            								break;
            								case (int)1: {
HXLINE( 214)									ret = (lua_toboolean(l,-2) != 0);
            								}
            								break;
            								case (int)3: {
HXLINE( 214)									ret = lua_tonumber(l,-2);
            								}
            								break;
            								case (int)4: {
HXLINE( 214)									ret = linc::lua::tostring(l,-2);
            								}
            								break;
            								case (int)5: {
HXLINE( 214)									bool array = true;
HXDLIN( 214)									 ::Dynamic ret1 = null();
HXDLIN( 214)									lua_pushnil(l);
HXDLIN( 214)									while((lua_next(l,-2) != 0)){
HXLINE( 214)										if ((lua_type(l,-2) != 3)) {
HXLINE( 214)											array = false;
HXDLIN( 214)											lua_pop(l,2);
HXDLIN( 214)											goto _hx_goto_19;
            										}
HXDLIN( 214)										Float n = lua_tonumber(l,-2);
HXDLIN( 214)										if ((n != ::Std_obj::_hx_int(n))) {
HXLINE( 214)											array = false;
HXDLIN( 214)											lua_pop(l,2);
HXDLIN( 214)											goto _hx_goto_19;
            										}
HXDLIN( 214)										lua_pop(l,1);
            									}
            									_hx_goto_19:;
HXDLIN( 214)									if (array) {
HXLINE( 214)										::cpp::VirtualArray arr = ::cpp::VirtualArray_obj::__new(0);
HXDLIN( 214)										lua_pushnil(l);
HXDLIN( 214)										while((lua_next(l,-2) != 0)){
HXLINE( 214)											int index = (lua_tointeger(l,-2) - 1);
HXDLIN( 214)											 ::Dynamic ret = null();
HXDLIN( 214)											switch((int)(lua_type(l,-1))){
            												case (int)0: {
HXLINE( 214)													ret = null();
            												}
            												break;
            												case (int)1: {
HXLINE( 214)													ret = (lua_toboolean(l,-1) != 0);
            												}
            												break;
            												case (int)3: {
HXLINE( 214)													ret = lua_tonumber(l,-1);
            												}
            												break;
            												case (int)4: {
HXLINE( 214)													ret = linc::lua::tostring(l,-1);
            												}
            												break;
            												case (int)5: {
HXLINE( 214)													bool array = true;
HXDLIN( 214)													 ::Dynamic ret1 = null();
HXDLIN( 214)													lua_pushnil(l);
HXDLIN( 214)													while((lua_next(l,-2) != 0)){
HXLINE( 214)														if ((lua_type(l,-2) != 3)) {
HXLINE( 214)															array = false;
HXDLIN( 214)															lua_pop(l,2);
HXDLIN( 214)															goto _hx_goto_21;
            														}
HXDLIN( 214)														Float n = lua_tonumber(l,-2);
HXDLIN( 214)														if ((n != ::Std_obj::_hx_int(n))) {
HXLINE( 214)															array = false;
HXDLIN( 214)															lua_pop(l,2);
HXDLIN( 214)															goto _hx_goto_21;
            														}
HXDLIN( 214)														lua_pop(l,1);
            													}
            													_hx_goto_21:;
HXDLIN( 214)													if (array) {
HXLINE( 214)														::cpp::VirtualArray arr = ::cpp::VirtualArray_obj::__new(0);
HXDLIN( 214)														lua_pushnil(l);
HXDLIN( 214)														while((lua_next(l,-2) != 0)){
HXLINE( 214)															int index = (lua_tointeger(l,-2) - 1);
HXDLIN( 214)															arr->set(index,::llua::Convert_obj::fromLua(l,-1));
HXDLIN( 214)															lua_pop(l,1);
            														}
HXDLIN( 214)														ret1 = arr;
            													}
            													else {
HXLINE( 214)														 hx::Anon obj = hx::Anon_obj::Create();
HXDLIN( 214)														lua_pushnil(l);
HXDLIN( 214)														while((lua_next(l,-2) != 0)){
HXLINE( 214)															::String ret = ::Std_obj::string(::llua::Convert_obj::fromLua(l,-2));
HXDLIN( 214)															obj->hx::Anon_obj::Add(ret,::llua::Convert_obj::fromLua(l,-1));
HXDLIN( 214)															lua_pop(l,1);
            														}
HXDLIN( 214)														ret1 = obj;
            													}
HXDLIN( 214)													ret = ret1;
            												}
            												break;
            												default:{
HXLINE( 214)													ret = null();
HXDLIN( 214)													::haxe::Log_obj::trace(HX_("return value not supported\n",48,41,fb,c8),::hx::SourceInfo(HX_("llua/Convert.hx",6e,6a,e3,49),96,HX_("llua.Convert",31,b8,44,19),HX_("fromLua",6e,2a,fd,57)));
            												}
            											}
HXDLIN( 214)											arr->set(index,ret);
HXDLIN( 214)											lua_pop(l,1);
            										}
HXDLIN( 214)										ret1 = arr;
            									}
            									else {
HXLINE( 214)										 hx::Anon obj = hx::Anon_obj::Create();
HXDLIN( 214)										lua_pushnil(l);
HXDLIN( 214)										while((lua_next(l,-2) != 0)){
HXLINE( 214)											 ::Dynamic ret = null();
HXDLIN( 214)											switch((int)(lua_type(l,-2))){
            												case (int)0: {
HXLINE( 214)													ret = null();
            												}
            												break;
            												case (int)1: {
HXLINE( 214)													ret = (lua_toboolean(l,-2) != 0);
            												}
            												break;
            												case (int)3: {
HXLINE( 214)													ret = lua_tonumber(l,-2);
            												}
            												break;
            												case (int)4: {
HXLINE( 214)													ret = linc::lua::tostring(l,-2);
            												}
            												break;
            												case (int)5: {
HXLINE( 214)													bool array = true;
HXDLIN( 214)													 ::Dynamic ret1 = null();
HXDLIN( 214)													lua_pushnil(l);
HXDLIN( 214)													while((lua_next(l,-2) != 0)){
HXLINE( 214)														if ((lua_type(l,-2) != 3)) {
HXLINE( 214)															array = false;
HXDLIN( 214)															lua_pop(l,2);
HXDLIN( 214)															goto _hx_goto_25;
            														}
HXDLIN( 214)														Float n = lua_tonumber(l,-2);
HXDLIN( 214)														if ((n != ::Std_obj::_hx_int(n))) {
HXLINE( 214)															array = false;
HXDLIN( 214)															lua_pop(l,2);
HXDLIN( 214)															goto _hx_goto_25;
            														}
HXDLIN( 214)														lua_pop(l,1);
            													}
            													_hx_goto_25:;
HXDLIN( 214)													if (array) {
HXLINE( 214)														::cpp::VirtualArray arr = ::cpp::VirtualArray_obj::__new(0);
HXDLIN( 214)														lua_pushnil(l);
HXDLIN( 214)														while((lua_next(l,-2) != 0)){
HXLINE( 214)															int index = (lua_tointeger(l,-2) - 1);
HXDLIN( 214)															arr->set(index,::llua::Convert_obj::fromLua(l,-1));
HXDLIN( 214)															lua_pop(l,1);
            														}
HXDLIN( 214)														ret1 = arr;
            													}
            													else {
HXLINE( 214)														 hx::Anon obj = hx::Anon_obj::Create();
HXDLIN( 214)														lua_pushnil(l);
HXDLIN( 214)														while((lua_next(l,-2) != 0)){
HXLINE( 214)															::String ret = ::Std_obj::string(::llua::Convert_obj::fromLua(l,-2));
HXDLIN( 214)															obj->hx::Anon_obj::Add(ret,::llua::Convert_obj::fromLua(l,-1));
HXDLIN( 214)															lua_pop(l,1);
            														}
HXDLIN( 214)														ret1 = obj;
            													}
HXDLIN( 214)													ret = ret1;
            												}
            												break;
            												default:{
HXLINE( 214)													ret = null();
HXDLIN( 214)													::haxe::Log_obj::trace(HX_("return value not supported\n",48,41,fb,c8),::hx::SourceInfo(HX_("llua/Convert.hx",6e,6a,e3,49),96,HX_("llua.Convert",31,b8,44,19),HX_("fromLua",6e,2a,fd,57)));
            												}
            											}
HXDLIN( 214)											::String ret1 = ::Std_obj::string(ret);
HXDLIN( 214)											 ::Dynamic ret2 = null();
HXDLIN( 214)											switch((int)(lua_type(l,-1))){
            												case (int)0: {
HXLINE( 214)													ret2 = null();
            												}
            												break;
            												case (int)1: {
HXLINE( 214)													ret2 = (lua_toboolean(l,-1) != 0);
            												}
            												break;
            												case (int)3: {
HXLINE( 214)													ret2 = lua_tonumber(l,-1);
            												}
            												break;
            												case (int)4: {
HXLINE( 214)													ret2 = linc::lua::tostring(l,-1);
            												}
            												break;
            												case (int)5: {
HXLINE( 214)													bool array = true;
HXDLIN( 214)													 ::Dynamic ret = null();
HXDLIN( 214)													lua_pushnil(l);
HXDLIN( 214)													while((lua_next(l,-2) != 0)){
HXLINE( 214)														if ((lua_type(l,-2) != 3)) {
HXLINE( 214)															array = false;
HXDLIN( 214)															lua_pop(l,2);
HXDLIN( 214)															goto _hx_goto_28;
            														}
HXDLIN( 214)														Float n = lua_tonumber(l,-2);
HXDLIN( 214)														if ((n != ::Std_obj::_hx_int(n))) {
HXLINE( 214)															array = false;
HXDLIN( 214)															lua_pop(l,2);
HXDLIN( 214)															goto _hx_goto_28;
            														}
HXDLIN( 214)														lua_pop(l,1);
            													}
            													_hx_goto_28:;
HXDLIN( 214)													if (array) {
HXLINE( 214)														::cpp::VirtualArray arr = ::cpp::VirtualArray_obj::__new(0);
HXDLIN( 214)														lua_pushnil(l);
HXDLIN( 214)														while((lua_next(l,-2) != 0)){
HXLINE( 214)															int index = (lua_tointeger(l,-2) - 1);
HXDLIN( 214)															arr->set(index,::llua::Convert_obj::fromLua(l,-1));
HXDLIN( 214)															lua_pop(l,1);
            														}
HXDLIN( 214)														ret = arr;
            													}
            													else {
HXLINE( 214)														 hx::Anon obj = hx::Anon_obj::Create();
HXDLIN( 214)														lua_pushnil(l);
HXDLIN( 214)														while((lua_next(l,-2) != 0)){
HXLINE( 214)															::String ret = ::Std_obj::string(::llua::Convert_obj::fromLua(l,-2));
HXDLIN( 214)															obj->hx::Anon_obj::Add(ret,::llua::Convert_obj::fromLua(l,-1));
HXDLIN( 214)															lua_pop(l,1);
            														}
HXDLIN( 214)														ret = obj;
            													}
HXDLIN( 214)													ret2 = ret;
            												}
            												break;
            												default:{
HXLINE( 214)													ret2 = null();
HXDLIN( 214)													::haxe::Log_obj::trace(HX_("return value not supported\n",48,41,fb,c8),::hx::SourceInfo(HX_("llua/Convert.hx",6e,6a,e3,49),96,HX_("llua.Convert",31,b8,44,19),HX_("fromLua",6e,2a,fd,57)));
            												}
            											}
HXDLIN( 214)											obj->hx::Anon_obj::Add(ret1,ret2);
HXDLIN( 214)											lua_pop(l,1);
            										}
HXDLIN( 214)										ret1 = obj;
            									}
HXDLIN( 214)									ret = ret1;
            								}
            								break;
            								default:{
HXLINE( 214)									ret = null();
HXDLIN( 214)									::haxe::Log_obj::trace(HX_("return value not supported\n",48,41,fb,c8),::hx::SourceInfo(HX_("llua/Convert.hx",6e,6a,e3,49),96,HX_("llua.Convert",31,b8,44,19),HX_("fromLua",6e,2a,fd,57)));
            								}
            							}
HXDLIN( 214)							::String ret1 = ::Std_obj::string(ret);
HXDLIN( 214)							 ::Dynamic ret2 = null();
HXDLIN( 214)							switch((int)(lua_type(l,-1))){
            								case (int)0: {
HXLINE( 214)									ret2 = null();
            								}
            								break;
            								case (int)1: {
HXLINE( 214)									ret2 = (lua_toboolean(l,-1) != 0);
            								}
            								break;
            								case (int)3: {
HXLINE( 214)									ret2 = lua_tonumber(l,-1);
            								}
            								break;
            								case (int)4: {
HXLINE( 214)									ret2 = linc::lua::tostring(l,-1);
            								}
            								break;
            								case (int)5: {
HXLINE( 214)									bool array = true;
HXDLIN( 214)									 ::Dynamic ret = null();
HXDLIN( 214)									lua_pushnil(l);
HXDLIN( 214)									while((lua_next(l,-2) != 0)){
HXLINE( 214)										if ((lua_type(l,-2) != 3)) {
HXLINE( 214)											array = false;
HXDLIN( 214)											lua_pop(l,2);
HXDLIN( 214)											goto _hx_goto_31;
            										}
HXDLIN( 214)										Float n = lua_tonumber(l,-2);
HXDLIN( 214)										if ((n != ::Std_obj::_hx_int(n))) {
HXLINE( 214)											array = false;
HXDLIN( 214)											lua_pop(l,2);
HXDLIN( 214)											goto _hx_goto_31;
            										}
HXDLIN( 214)										lua_pop(l,1);
            									}
            									_hx_goto_31:;
HXDLIN( 214)									if (array) {
HXLINE( 214)										::cpp::VirtualArray arr = ::cpp::VirtualArray_obj::__new(0);
HXDLIN( 214)										lua_pushnil(l);
HXDLIN( 214)										while((lua_next(l,-2) != 0)){
HXLINE( 214)											int index = (lua_tointeger(l,-2) - 1);
HXDLIN( 214)											arr->set(index,::llua::Convert_obj::fromLua(l,-1));
HXDLIN( 214)											lua_pop(l,1);
            										}
HXDLIN( 214)										ret = arr;
            									}
            									else {
HXLINE( 214)										 hx::Anon obj = hx::Anon_obj::Create();
HXDLIN( 214)										lua_pushnil(l);
HXDLIN( 214)										while((lua_next(l,-2) != 0)){
HXLINE( 214)											::String ret = ::Std_obj::string(::llua::Convert_obj::fromLua(l,-2));
HXDLIN( 214)											obj->hx::Anon_obj::Add(ret,::llua::Convert_obj::fromLua(l,-1));
HXDLIN( 214)											lua_pop(l,1);
            										}
HXDLIN( 214)										ret = obj;
            									}
HXDLIN( 214)									ret2 = ret;
            								}
            								break;
            								default:{
HXLINE( 214)									ret2 = null();
HXDLIN( 214)									::haxe::Log_obj::trace(HX_("return value not supported\n",48,41,fb,c8),::hx::SourceInfo(HX_("llua/Convert.hx",6e,6a,e3,49),96,HX_("llua.Convert",31,b8,44,19),HX_("fromLua",6e,2a,fd,57)));
            								}
            							}
HXDLIN( 214)							obj->hx::Anon_obj::Add(ret1,ret2);
HXDLIN( 214)							lua_pop(l,1);
            						}
HXDLIN( 214)						ret1 = obj;
            					}
HXDLIN( 214)					ret = ret1;
            				}
            				break;
            				default:{
HXLINE( 214)					ret = null();
HXDLIN( 214)					::haxe::Log_obj::trace(HX_("return value not supported\n",48,41,fb,c8),::hx::SourceInfo(HX_("llua/Convert.hx",6e,6a,e3,49),96,HX_("llua.Convert",31,b8,44,19),HX_("fromLua",6e,2a,fd,57)));
            				}
            			}
HXDLIN( 214)			 ::Dynamic conv = ret;
HXLINE( 215)			return conv;
            		}
HXLINE( 218)		return ::editors::EditorLua_obj::Function_Continue;
            	}


HX_DEFINE_DYNAMIC_FUNC2(EditorLua_obj,call,return )

bool EditorLua_obj::resultIsAllowed( cpp::Reference<lua_State> leLua, ::Dynamic leResult){
            	HX_STACKFRAME(&_hx_pos_1dd272e8491e8c9a_222_resultIsAllowed)
HXLINE( 223)		switch((int)(lua_type(leLua,( (int)(leResult) )))){
            			case (int)0: case (int)1: case (int)3: case (int)4: case (int)5: {
HXLINE( 225)				return true;
            			}
            			break;
            		}
HXLINE( 227)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC2(EditorLua_obj,resultIsAllowed,return )

void EditorLua_obj::set(::String variable, ::Dynamic data){
            	HX_STACKFRAME(&_hx_pos_1dd272e8491e8c9a_231_set)
HXLINE( 233)		if (::hx::IsNull( this->lua )) {
HXLINE( 234)			return;
            		}
HXLINE( 237)		::llua::Convert_obj::toLua(this->lua,data);
HXLINE( 238)		lua_setglobal(this->lua,variable);
            	}


HX_DEFINE_DYNAMIC_FUNC2(EditorLua_obj,set,(void))

bool EditorLua_obj::getBool(::String variable){
            	HX_STACKFRAME(&_hx_pos_1dd272e8491e8c9a_243_getBool)
HXLINE( 244)		::String result = null();
HXLINE( 245)		lua_getglobal(this->lua,variable);
HXLINE( 246)		 cpp::Reference<lua_State> l = this->lua;
HXDLIN( 246)		 ::Dynamic ret = null();
HXDLIN( 246)		switch((int)(lua_type(l,-1))){
            			case (int)0: {
HXLINE( 246)				ret = null();
            			}
            			break;
            			case (int)1: {
HXLINE( 246)				ret = (lua_toboolean(l,-1) != 0);
            			}
            			break;
            			case (int)3: {
HXLINE( 246)				ret = lua_tonumber(l,-1);
            			}
            			break;
            			case (int)4: {
HXLINE( 246)				ret = linc::lua::tostring(l,-1);
            			}
            			break;
            			case (int)5: {
HXLINE( 246)				bool array = true;
HXDLIN( 246)				 ::Dynamic ret1 = null();
HXDLIN( 246)				lua_pushnil(l);
HXDLIN( 246)				while((lua_next(l,-2) != 0)){
HXLINE( 246)					if ((lua_type(l,-2) != 3)) {
HXLINE( 246)						array = false;
HXDLIN( 246)						lua_pop(l,2);
HXDLIN( 246)						goto _hx_goto_37;
            					}
HXDLIN( 246)					Float n = lua_tonumber(l,-2);
HXDLIN( 246)					if ((n != ::Std_obj::_hx_int(n))) {
HXLINE( 246)						array = false;
HXDLIN( 246)						lua_pop(l,2);
HXDLIN( 246)						goto _hx_goto_37;
            					}
HXDLIN( 246)					lua_pop(l,1);
            				}
            				_hx_goto_37:;
HXDLIN( 246)				if (array) {
HXLINE( 246)					::cpp::VirtualArray arr = ::cpp::VirtualArray_obj::__new(0);
HXDLIN( 246)					lua_pushnil(l);
HXDLIN( 246)					while((lua_next(l,-2) != 0)){
HXLINE( 246)						int index = (lua_tointeger(l,-2) - 1);
HXDLIN( 246)						 ::Dynamic ret = null();
HXDLIN( 246)						switch((int)(lua_type(l,-1))){
            							case (int)0: {
HXLINE( 246)								ret = null();
            							}
            							break;
            							case (int)1: {
HXLINE( 246)								ret = (lua_toboolean(l,-1) != 0);
            							}
            							break;
            							case (int)3: {
HXLINE( 246)								ret = lua_tonumber(l,-1);
            							}
            							break;
            							case (int)4: {
HXLINE( 246)								ret = linc::lua::tostring(l,-1);
            							}
            							break;
            							case (int)5: {
HXLINE( 246)								bool array = true;
HXDLIN( 246)								 ::Dynamic ret1 = null();
HXDLIN( 246)								lua_pushnil(l);
HXDLIN( 246)								while((lua_next(l,-2) != 0)){
HXLINE( 246)									if ((lua_type(l,-2) != 3)) {
HXLINE( 246)										array = false;
HXDLIN( 246)										lua_pop(l,2);
HXDLIN( 246)										goto _hx_goto_39;
            									}
HXDLIN( 246)									Float n = lua_tonumber(l,-2);
HXDLIN( 246)									if ((n != ::Std_obj::_hx_int(n))) {
HXLINE( 246)										array = false;
HXDLIN( 246)										lua_pop(l,2);
HXDLIN( 246)										goto _hx_goto_39;
            									}
HXDLIN( 246)									lua_pop(l,1);
            								}
            								_hx_goto_39:;
HXDLIN( 246)								if (array) {
HXLINE( 246)									::cpp::VirtualArray arr = ::cpp::VirtualArray_obj::__new(0);
HXDLIN( 246)									lua_pushnil(l);
HXDLIN( 246)									while((lua_next(l,-2) != 0)){
HXLINE( 246)										int index = (lua_tointeger(l,-2) - 1);
HXDLIN( 246)										 ::Dynamic ret = null();
HXDLIN( 246)										switch((int)(lua_type(l,-1))){
            											case (int)0: {
HXLINE( 246)												ret = null();
            											}
            											break;
            											case (int)1: {
HXLINE( 246)												ret = (lua_toboolean(l,-1) != 0);
            											}
            											break;
            											case (int)3: {
HXLINE( 246)												ret = lua_tonumber(l,-1);
            											}
            											break;
            											case (int)4: {
HXLINE( 246)												ret = linc::lua::tostring(l,-1);
            											}
            											break;
            											case (int)5: {
HXLINE( 246)												bool array = true;
HXDLIN( 246)												 ::Dynamic ret1 = null();
HXDLIN( 246)												lua_pushnil(l);
HXDLIN( 246)												while((lua_next(l,-2) != 0)){
HXLINE( 246)													if ((lua_type(l,-2) != 3)) {
HXLINE( 246)														array = false;
HXDLIN( 246)														lua_pop(l,2);
HXDLIN( 246)														goto _hx_goto_41;
            													}
HXDLIN( 246)													Float n = lua_tonumber(l,-2);
HXDLIN( 246)													if ((n != ::Std_obj::_hx_int(n))) {
HXLINE( 246)														array = false;
HXDLIN( 246)														lua_pop(l,2);
HXDLIN( 246)														goto _hx_goto_41;
            													}
HXDLIN( 246)													lua_pop(l,1);
            												}
            												_hx_goto_41:;
HXDLIN( 246)												if (array) {
HXLINE( 246)													::cpp::VirtualArray arr = ::cpp::VirtualArray_obj::__new(0);
HXDLIN( 246)													lua_pushnil(l);
HXDLIN( 246)													while((lua_next(l,-2) != 0)){
HXLINE( 246)														int index = (lua_tointeger(l,-2) - 1);
HXDLIN( 246)														arr->set(index,::llua::Convert_obj::fromLua(l,-1));
HXDLIN( 246)														lua_pop(l,1);
            													}
HXDLIN( 246)													ret1 = arr;
            												}
            												else {
HXLINE( 246)													 hx::Anon obj = hx::Anon_obj::Create();
HXDLIN( 246)													lua_pushnil(l);
HXDLIN( 246)													while((lua_next(l,-2) != 0)){
HXLINE( 246)														::String ret = ::Std_obj::string(::llua::Convert_obj::fromLua(l,-2));
HXDLIN( 246)														obj->hx::Anon_obj::Add(ret,::llua::Convert_obj::fromLua(l,-1));
HXDLIN( 246)														lua_pop(l,1);
            													}
HXDLIN( 246)													ret1 = obj;
            												}
HXDLIN( 246)												ret = ret1;
            											}
            											break;
            											default:{
HXLINE( 246)												ret = null();
HXDLIN( 246)												::haxe::Log_obj::trace(HX_("return value not supported\n",48,41,fb,c8),::hx::SourceInfo(HX_("llua/Convert.hx",6e,6a,e3,49),96,HX_("llua.Convert",31,b8,44,19),HX_("fromLua",6e,2a,fd,57)));
            											}
            										}
HXDLIN( 246)										arr->set(index,ret);
HXDLIN( 246)										lua_pop(l,1);
            									}
HXDLIN( 246)									ret1 = arr;
            								}
            								else {
HXLINE( 246)									 hx::Anon obj = hx::Anon_obj::Create();
HXDLIN( 246)									lua_pushnil(l);
HXDLIN( 246)									while((lua_next(l,-2) != 0)){
HXLINE( 246)										 ::Dynamic ret = null();
HXDLIN( 246)										switch((int)(lua_type(l,-2))){
            											case (int)0: {
HXLINE( 246)												ret = null();
            											}
            											break;
            											case (int)1: {
HXLINE( 246)												ret = (lua_toboolean(l,-2) != 0);
            											}
            											break;
            											case (int)3: {
HXLINE( 246)												ret = lua_tonumber(l,-2);
            											}
            											break;
            											case (int)4: {
HXLINE( 246)												ret = linc::lua::tostring(l,-2);
            											}
            											break;
            											case (int)5: {
HXLINE( 246)												bool array = true;
HXDLIN( 246)												 ::Dynamic ret1 = null();
HXDLIN( 246)												lua_pushnil(l);
HXDLIN( 246)												while((lua_next(l,-2) != 0)){
HXLINE( 246)													if ((lua_type(l,-2) != 3)) {
HXLINE( 246)														array = false;
HXDLIN( 246)														lua_pop(l,2);
HXDLIN( 246)														goto _hx_goto_45;
            													}
HXDLIN( 246)													Float n = lua_tonumber(l,-2);
HXDLIN( 246)													if ((n != ::Std_obj::_hx_int(n))) {
HXLINE( 246)														array = false;
HXDLIN( 246)														lua_pop(l,2);
HXDLIN( 246)														goto _hx_goto_45;
            													}
HXDLIN( 246)													lua_pop(l,1);
            												}
            												_hx_goto_45:;
HXDLIN( 246)												if (array) {
HXLINE( 246)													::cpp::VirtualArray arr = ::cpp::VirtualArray_obj::__new(0);
HXDLIN( 246)													lua_pushnil(l);
HXDLIN( 246)													while((lua_next(l,-2) != 0)){
HXLINE( 246)														int index = (lua_tointeger(l,-2) - 1);
HXDLIN( 246)														 ::Dynamic ret = null();
HXDLIN( 246)														switch((int)(lua_type(l,-1))){
            															case (int)0: {
HXLINE( 246)																ret = null();
            															}
            															break;
            															case (int)1: {
HXLINE( 246)																ret = (lua_toboolean(l,-1) != 0);
            															}
            															break;
            															case (int)3: {
HXLINE( 246)																ret = lua_tonumber(l,-1);
            															}
            															break;
            															case (int)4: {
HXLINE( 246)																ret = linc::lua::tostring(l,-1);
            															}
            															break;
            															case (int)5: {
HXLINE( 246)																bool array = true;
HXDLIN( 246)																 ::Dynamic ret1 = null();
HXDLIN( 246)																lua_pushnil(l);
HXDLIN( 246)																while((lua_next(l,-2) != 0)){
HXLINE( 246)																	if ((lua_type(l,-2) != 3)) {
HXLINE( 246)																		array = false;
HXDLIN( 246)																		lua_pop(l,2);
HXDLIN( 246)																		goto _hx_goto_47;
            																	}
HXDLIN( 246)																	Float n = lua_tonumber(l,-2);
HXDLIN( 246)																	if ((n != ::Std_obj::_hx_int(n))) {
HXLINE( 246)																		array = false;
HXDLIN( 246)																		lua_pop(l,2);
HXDLIN( 246)																		goto _hx_goto_47;
            																	}
HXDLIN( 246)																	lua_pop(l,1);
            																}
            																_hx_goto_47:;
HXDLIN( 246)																if (array) {
HXLINE( 246)																	::cpp::VirtualArray arr = ::cpp::VirtualArray_obj::__new(0);
HXDLIN( 246)																	lua_pushnil(l);
HXDLIN( 246)																	while((lua_next(l,-2) != 0)){
HXLINE( 246)																		int index = (lua_tointeger(l,-2) - 1);
HXDLIN( 246)																		arr->set(index,::llua::Convert_obj::fromLua(l,-1));
HXDLIN( 246)																		lua_pop(l,1);
            																	}
HXDLIN( 246)																	ret1 = arr;
            																}
            																else {
HXLINE( 246)																	 hx::Anon obj = hx::Anon_obj::Create();
HXDLIN( 246)																	lua_pushnil(l);
HXDLIN( 246)																	while((lua_next(l,-2) != 0)){
HXLINE( 246)																		::String ret = ::Std_obj::string(::llua::Convert_obj::fromLua(l,-2));
HXDLIN( 246)																		obj->hx::Anon_obj::Add(ret,::llua::Convert_obj::fromLua(l,-1));
HXDLIN( 246)																		lua_pop(l,1);
            																	}
HXDLIN( 246)																	ret1 = obj;
            																}
HXDLIN( 246)																ret = ret1;
            															}
            															break;
            															default:{
HXLINE( 246)																ret = null();
HXDLIN( 246)																::haxe::Log_obj::trace(HX_("return value not supported\n",48,41,fb,c8),::hx::SourceInfo(HX_("llua/Convert.hx",6e,6a,e3,49),96,HX_("llua.Convert",31,b8,44,19),HX_("fromLua",6e,2a,fd,57)));
            															}
            														}
HXDLIN( 246)														arr->set(index,ret);
HXDLIN( 246)														lua_pop(l,1);
            													}
HXDLIN( 246)													ret1 = arr;
            												}
            												else {
HXLINE( 246)													 hx::Anon obj = hx::Anon_obj::Create();
HXDLIN( 246)													lua_pushnil(l);
HXDLIN( 246)													while((lua_next(l,-2) != 0)){
HXLINE( 246)														 ::Dynamic ret = null();
HXDLIN( 246)														switch((int)(lua_type(l,-2))){
            															case (int)0: {
HXLINE( 246)																ret = null();
            															}
            															break;
            															case (int)1: {
HXLINE( 246)																ret = (lua_toboolean(l,-2) != 0);
            															}
            															break;
            															case (int)3: {
HXLINE( 246)																ret = lua_tonumber(l,-2);
            															}
            															break;
            															case (int)4: {
HXLINE( 246)																ret = linc::lua::tostring(l,-2);
            															}
            															break;
            															case (int)5: {
HXLINE( 246)																bool array = true;
HXDLIN( 246)																 ::Dynamic ret1 = null();
HXDLIN( 246)																lua_pushnil(l);
HXDLIN( 246)																while((lua_next(l,-2) != 0)){
HXLINE( 246)																	if ((lua_type(l,-2) != 3)) {
HXLINE( 246)																		array = false;
HXDLIN( 246)																		lua_pop(l,2);
HXDLIN( 246)																		goto _hx_goto_51;
            																	}
HXDLIN( 246)																	Float n = lua_tonumber(l,-2);
HXDLIN( 246)																	if ((n != ::Std_obj::_hx_int(n))) {
HXLINE( 246)																		array = false;
HXDLIN( 246)																		lua_pop(l,2);
HXDLIN( 246)																		goto _hx_goto_51;
            																	}
HXDLIN( 246)																	lua_pop(l,1);
            																}
            																_hx_goto_51:;
HXDLIN( 246)																if (array) {
HXLINE( 246)																	::cpp::VirtualArray arr = ::cpp::VirtualArray_obj::__new(0);
HXDLIN( 246)																	lua_pushnil(l);
HXDLIN( 246)																	while((lua_next(l,-2) != 0)){
HXLINE( 246)																		int index = (lua_tointeger(l,-2) - 1);
HXDLIN( 246)																		arr->set(index,::llua::Convert_obj::fromLua(l,-1));
HXDLIN( 246)																		lua_pop(l,1);
            																	}
HXDLIN( 246)																	ret1 = arr;
            																}
            																else {
HXLINE( 246)																	 hx::Anon obj = hx::Anon_obj::Create();
HXDLIN( 246)																	lua_pushnil(l);
HXDLIN( 246)																	while((lua_next(l,-2) != 0)){
HXLINE( 246)																		::String ret = ::Std_obj::string(::llua::Convert_obj::fromLua(l,-2));
HXDLIN( 246)																		obj->hx::Anon_obj::Add(ret,::llua::Convert_obj::fromLua(l,-1));
HXDLIN( 246)																		lua_pop(l,1);
            																	}
HXDLIN( 246)																	ret1 = obj;
            																}
HXDLIN( 246)																ret = ret1;
            															}
            															break;
            															default:{
HXLINE( 246)																ret = null();
HXDLIN( 246)																::haxe::Log_obj::trace(HX_("return value not supported\n",48,41,fb,c8),::hx::SourceInfo(HX_("llua/Convert.hx",6e,6a,e3,49),96,HX_("llua.Convert",31,b8,44,19),HX_("fromLua",6e,2a,fd,57)));
            															}
            														}
HXDLIN( 246)														::String ret1 = ::Std_obj::string(ret);
HXDLIN( 246)														 ::Dynamic ret2 = null();
HXDLIN( 246)														switch((int)(lua_type(l,-1))){
            															case (int)0: {
HXLINE( 246)																ret2 = null();
            															}
            															break;
            															case (int)1: {
HXLINE( 246)																ret2 = (lua_toboolean(l,-1) != 0);
            															}
            															break;
            															case (int)3: {
HXLINE( 246)																ret2 = lua_tonumber(l,-1);
            															}
            															break;
            															case (int)4: {
HXLINE( 246)																ret2 = linc::lua::tostring(l,-1);
            															}
            															break;
            															case (int)5: {
HXLINE( 246)																bool array = true;
HXDLIN( 246)																 ::Dynamic ret = null();
HXDLIN( 246)																lua_pushnil(l);
HXDLIN( 246)																while((lua_next(l,-2) != 0)){
HXLINE( 246)																	if ((lua_type(l,-2) != 3)) {
HXLINE( 246)																		array = false;
HXDLIN( 246)																		lua_pop(l,2);
HXDLIN( 246)																		goto _hx_goto_54;
            																	}
HXDLIN( 246)																	Float n = lua_tonumber(l,-2);
HXDLIN( 246)																	if ((n != ::Std_obj::_hx_int(n))) {
HXLINE( 246)																		array = false;
HXDLIN( 246)																		lua_pop(l,2);
HXDLIN( 246)																		goto _hx_goto_54;
            																	}
HXDLIN( 246)																	lua_pop(l,1);
            																}
            																_hx_goto_54:;
HXDLIN( 246)																if (array) {
HXLINE( 246)																	::cpp::VirtualArray arr = ::cpp::VirtualArray_obj::__new(0);
HXDLIN( 246)																	lua_pushnil(l);
HXDLIN( 246)																	while((lua_next(l,-2) != 0)){
HXLINE( 246)																		int index = (lua_tointeger(l,-2) - 1);
HXDLIN( 246)																		arr->set(index,::llua::Convert_obj::fromLua(l,-1));
HXDLIN( 246)																		lua_pop(l,1);
            																	}
HXDLIN( 246)																	ret = arr;
            																}
            																else {
HXLINE( 246)																	 hx::Anon obj = hx::Anon_obj::Create();
HXDLIN( 246)																	lua_pushnil(l);
HXDLIN( 246)																	while((lua_next(l,-2) != 0)){
HXLINE( 246)																		::String ret = ::Std_obj::string(::llua::Convert_obj::fromLua(l,-2));
HXDLIN( 246)																		obj->hx::Anon_obj::Add(ret,::llua::Convert_obj::fromLua(l,-1));
HXDLIN( 246)																		lua_pop(l,1);
            																	}
HXDLIN( 246)																	ret = obj;
            																}
HXDLIN( 246)																ret2 = ret;
            															}
            															break;
            															default:{
HXLINE( 246)																ret2 = null();
HXDLIN( 246)																::haxe::Log_obj::trace(HX_("return value not supported\n",48,41,fb,c8),::hx::SourceInfo(HX_("llua/Convert.hx",6e,6a,e3,49),96,HX_("llua.Convert",31,b8,44,19),HX_("fromLua",6e,2a,fd,57)));
            															}
            														}
HXDLIN( 246)														obj->hx::Anon_obj::Add(ret1,ret2);
HXDLIN( 246)														lua_pop(l,1);
            													}
HXDLIN( 246)													ret1 = obj;
            												}
HXDLIN( 246)												ret = ret1;
            											}
            											break;
            											default:{
HXLINE( 246)												ret = null();
HXDLIN( 246)												::haxe::Log_obj::trace(HX_("return value not supported\n",48,41,fb,c8),::hx::SourceInfo(HX_("llua/Convert.hx",6e,6a,e3,49),96,HX_("llua.Convert",31,b8,44,19),HX_("fromLua",6e,2a,fd,57)));
            											}
            										}
HXDLIN( 246)										::String ret1 = ::Std_obj::string(ret);
HXDLIN( 246)										 ::Dynamic ret2 = null();
HXDLIN( 246)										switch((int)(lua_type(l,-1))){
            											case (int)0: {
HXLINE( 246)												ret2 = null();
            											}
            											break;
            											case (int)1: {
HXLINE( 246)												ret2 = (lua_toboolean(l,-1) != 0);
            											}
            											break;
            											case (int)3: {
HXLINE( 246)												ret2 = lua_tonumber(l,-1);
            											}
            											break;
            											case (int)4: {
HXLINE( 246)												ret2 = linc::lua::tostring(l,-1);
            											}
            											break;
            											case (int)5: {
HXLINE( 246)												bool array = true;
HXDLIN( 246)												 ::Dynamic ret = null();
HXDLIN( 246)												lua_pushnil(l);
HXDLIN( 246)												while((lua_next(l,-2) != 0)){
HXLINE( 246)													if ((lua_type(l,-2) != 3)) {
HXLINE( 246)														array = false;
HXDLIN( 246)														lua_pop(l,2);
HXDLIN( 246)														goto _hx_goto_57;
            													}
HXDLIN( 246)													Float n = lua_tonumber(l,-2);
HXDLIN( 246)													if ((n != ::Std_obj::_hx_int(n))) {
HXLINE( 246)														array = false;
HXDLIN( 246)														lua_pop(l,2);
HXDLIN( 246)														goto _hx_goto_57;
            													}
HXDLIN( 246)													lua_pop(l,1);
            												}
            												_hx_goto_57:;
HXDLIN( 246)												if (array) {
HXLINE( 246)													::cpp::VirtualArray arr = ::cpp::VirtualArray_obj::__new(0);
HXDLIN( 246)													lua_pushnil(l);
HXDLIN( 246)													while((lua_next(l,-2) != 0)){
HXLINE( 246)														int index = (lua_tointeger(l,-2) - 1);
HXDLIN( 246)														arr->set(index,::llua::Convert_obj::fromLua(l,-1));
HXDLIN( 246)														lua_pop(l,1);
            													}
HXDLIN( 246)													ret = arr;
            												}
            												else {
HXLINE( 246)													 hx::Anon obj = hx::Anon_obj::Create();
HXDLIN( 246)													lua_pushnil(l);
HXDLIN( 246)													while((lua_next(l,-2) != 0)){
HXLINE( 246)														::String ret = ::Std_obj::string(::llua::Convert_obj::fromLua(l,-2));
HXDLIN( 246)														obj->hx::Anon_obj::Add(ret,::llua::Convert_obj::fromLua(l,-1));
HXDLIN( 246)														lua_pop(l,1);
            													}
HXDLIN( 246)													ret = obj;
            												}
HXDLIN( 246)												ret2 = ret;
            											}
            											break;
            											default:{
HXLINE( 246)												ret2 = null();
HXDLIN( 246)												::haxe::Log_obj::trace(HX_("return value not supported\n",48,41,fb,c8),::hx::SourceInfo(HX_("llua/Convert.hx",6e,6a,e3,49),96,HX_("llua.Convert",31,b8,44,19),HX_("fromLua",6e,2a,fd,57)));
            											}
            										}
HXDLIN( 246)										obj->hx::Anon_obj::Add(ret1,ret2);
HXDLIN( 246)										lua_pop(l,1);
            									}
HXDLIN( 246)									ret1 = obj;
            								}
HXDLIN( 246)								ret = ret1;
            							}
            							break;
            							default:{
HXLINE( 246)								ret = null();
HXDLIN( 246)								::haxe::Log_obj::trace(HX_("return value not supported\n",48,41,fb,c8),::hx::SourceInfo(HX_("llua/Convert.hx",6e,6a,e3,49),96,HX_("llua.Convert",31,b8,44,19),HX_("fromLua",6e,2a,fd,57)));
            							}
            						}
HXDLIN( 246)						arr->set(index,ret);
HXDLIN( 246)						lua_pop(l,1);
            					}
HXDLIN( 246)					ret1 = arr;
            				}
            				else {
HXLINE( 246)					 hx::Anon obj = hx::Anon_obj::Create();
HXDLIN( 246)					lua_pushnil(l);
HXDLIN( 246)					while((lua_next(l,-2) != 0)){
HXLINE( 246)						 ::Dynamic ret = null();
HXDLIN( 246)						switch((int)(lua_type(l,-2))){
            							case (int)0: {
HXLINE( 246)								ret = null();
            							}
            							break;
            							case (int)1: {
HXLINE( 246)								ret = (lua_toboolean(l,-2) != 0);
            							}
            							break;
            							case (int)3: {
HXLINE( 246)								ret = lua_tonumber(l,-2);
            							}
            							break;
            							case (int)4: {
HXLINE( 246)								ret = linc::lua::tostring(l,-2);
            							}
            							break;
            							case (int)5: {
HXLINE( 246)								bool array = true;
HXDLIN( 246)								 ::Dynamic ret1 = null();
HXDLIN( 246)								lua_pushnil(l);
HXDLIN( 246)								while((lua_next(l,-2) != 0)){
HXLINE( 246)									if ((lua_type(l,-2) != 3)) {
HXLINE( 246)										array = false;
HXDLIN( 246)										lua_pop(l,2);
HXDLIN( 246)										goto _hx_goto_61;
            									}
HXDLIN( 246)									Float n = lua_tonumber(l,-2);
HXDLIN( 246)									if ((n != ::Std_obj::_hx_int(n))) {
HXLINE( 246)										array = false;
HXDLIN( 246)										lua_pop(l,2);
HXDLIN( 246)										goto _hx_goto_61;
            									}
HXDLIN( 246)									lua_pop(l,1);
            								}
            								_hx_goto_61:;
HXDLIN( 246)								if (array) {
HXLINE( 246)									::cpp::VirtualArray arr = ::cpp::VirtualArray_obj::__new(0);
HXDLIN( 246)									lua_pushnil(l);
HXDLIN( 246)									while((lua_next(l,-2) != 0)){
HXLINE( 246)										int index = (lua_tointeger(l,-2) - 1);
HXDLIN( 246)										 ::Dynamic ret = null();
HXDLIN( 246)										switch((int)(lua_type(l,-1))){
            											case (int)0: {
HXLINE( 246)												ret = null();
            											}
            											break;
            											case (int)1: {
HXLINE( 246)												ret = (lua_toboolean(l,-1) != 0);
            											}
            											break;
            											case (int)3: {
HXLINE( 246)												ret = lua_tonumber(l,-1);
            											}
            											break;
            											case (int)4: {
HXLINE( 246)												ret = linc::lua::tostring(l,-1);
            											}
            											break;
            											case (int)5: {
HXLINE( 246)												bool array = true;
HXDLIN( 246)												 ::Dynamic ret1 = null();
HXDLIN( 246)												lua_pushnil(l);
HXDLIN( 246)												while((lua_next(l,-2) != 0)){
HXLINE( 246)													if ((lua_type(l,-2) != 3)) {
HXLINE( 246)														array = false;
HXDLIN( 246)														lua_pop(l,2);
HXDLIN( 246)														goto _hx_goto_63;
            													}
HXDLIN( 246)													Float n = lua_tonumber(l,-2);
HXDLIN( 246)													if ((n != ::Std_obj::_hx_int(n))) {
HXLINE( 246)														array = false;
HXDLIN( 246)														lua_pop(l,2);
HXDLIN( 246)														goto _hx_goto_63;
            													}
HXDLIN( 246)													lua_pop(l,1);
            												}
            												_hx_goto_63:;
HXDLIN( 246)												if (array) {
HXLINE( 246)													::cpp::VirtualArray arr = ::cpp::VirtualArray_obj::__new(0);
HXDLIN( 246)													lua_pushnil(l);
HXDLIN( 246)													while((lua_next(l,-2) != 0)){
HXLINE( 246)														int index = (lua_tointeger(l,-2) - 1);
HXDLIN( 246)														 ::Dynamic ret = null();
HXDLIN( 246)														switch((int)(lua_type(l,-1))){
            															case (int)0: {
HXLINE( 246)																ret = null();
            															}
            															break;
            															case (int)1: {
HXLINE( 246)																ret = (lua_toboolean(l,-1) != 0);
            															}
            															break;
            															case (int)3: {
HXLINE( 246)																ret = lua_tonumber(l,-1);
            															}
            															break;
            															case (int)4: {
HXLINE( 246)																ret = linc::lua::tostring(l,-1);
            															}
            															break;
            															case (int)5: {
HXLINE( 246)																bool array = true;
HXDLIN( 246)																 ::Dynamic ret1 = null();
HXDLIN( 246)																lua_pushnil(l);
HXDLIN( 246)																while((lua_next(l,-2) != 0)){
HXLINE( 246)																	if ((lua_type(l,-2) != 3)) {
HXLINE( 246)																		array = false;
HXDLIN( 246)																		lua_pop(l,2);
HXDLIN( 246)																		goto _hx_goto_65;
            																	}
HXDLIN( 246)																	Float n = lua_tonumber(l,-2);
HXDLIN( 246)																	if ((n != ::Std_obj::_hx_int(n))) {
HXLINE( 246)																		array = false;
HXDLIN( 246)																		lua_pop(l,2);
HXDLIN( 246)																		goto _hx_goto_65;
            																	}
HXDLIN( 246)																	lua_pop(l,1);
            																}
            																_hx_goto_65:;
HXDLIN( 246)																if (array) {
HXLINE( 246)																	::cpp::VirtualArray arr = ::cpp::VirtualArray_obj::__new(0);
HXDLIN( 246)																	lua_pushnil(l);
HXDLIN( 246)																	while((lua_next(l,-2) != 0)){
HXLINE( 246)																		int index = (lua_tointeger(l,-2) - 1);
HXDLIN( 246)																		arr->set(index,::llua::Convert_obj::fromLua(l,-1));
HXDLIN( 246)																		lua_pop(l,1);
            																	}
HXDLIN( 246)																	ret1 = arr;
            																}
            																else {
HXLINE( 246)																	 hx::Anon obj = hx::Anon_obj::Create();
HXDLIN( 246)																	lua_pushnil(l);
HXDLIN( 246)																	while((lua_next(l,-2) != 0)){
HXLINE( 246)																		::String ret = ::Std_obj::string(::llua::Convert_obj::fromLua(l,-2));
HXDLIN( 246)																		obj->hx::Anon_obj::Add(ret,::llua::Convert_obj::fromLua(l,-1));
HXDLIN( 246)																		lua_pop(l,1);
            																	}
HXDLIN( 246)																	ret1 = obj;
            																}
HXDLIN( 246)																ret = ret1;
            															}
            															break;
            															default:{
HXLINE( 246)																ret = null();
HXDLIN( 246)																::haxe::Log_obj::trace(HX_("return value not supported\n",48,41,fb,c8),::hx::SourceInfo(HX_("llua/Convert.hx",6e,6a,e3,49),96,HX_("llua.Convert",31,b8,44,19),HX_("fromLua",6e,2a,fd,57)));
            															}
            														}
HXDLIN( 246)														arr->set(index,ret);
HXDLIN( 246)														lua_pop(l,1);
            													}
HXDLIN( 246)													ret1 = arr;
            												}
            												else {
HXLINE( 246)													 hx::Anon obj = hx::Anon_obj::Create();
HXDLIN( 246)													lua_pushnil(l);
HXDLIN( 246)													while((lua_next(l,-2) != 0)){
HXLINE( 246)														 ::Dynamic ret = null();
HXDLIN( 246)														switch((int)(lua_type(l,-2))){
            															case (int)0: {
HXLINE( 246)																ret = null();
            															}
            															break;
            															case (int)1: {
HXLINE( 246)																ret = (lua_toboolean(l,-2) != 0);
            															}
            															break;
            															case (int)3: {
HXLINE( 246)																ret = lua_tonumber(l,-2);
            															}
            															break;
            															case (int)4: {
HXLINE( 246)																ret = linc::lua::tostring(l,-2);
            															}
            															break;
            															case (int)5: {
HXLINE( 246)																bool array = true;
HXDLIN( 246)																 ::Dynamic ret1 = null();
HXDLIN( 246)																lua_pushnil(l);
HXDLIN( 246)																while((lua_next(l,-2) != 0)){
HXLINE( 246)																	if ((lua_type(l,-2) != 3)) {
HXLINE( 246)																		array = false;
HXDLIN( 246)																		lua_pop(l,2);
HXDLIN( 246)																		goto _hx_goto_69;
            																	}
HXDLIN( 246)																	Float n = lua_tonumber(l,-2);
HXDLIN( 246)																	if ((n != ::Std_obj::_hx_int(n))) {
HXLINE( 246)																		array = false;
HXDLIN( 246)																		lua_pop(l,2);
HXDLIN( 246)																		goto _hx_goto_69;
            																	}
HXDLIN( 246)																	lua_pop(l,1);
            																}
            																_hx_goto_69:;
HXDLIN( 246)																if (array) {
HXLINE( 246)																	::cpp::VirtualArray arr = ::cpp::VirtualArray_obj::__new(0);
HXDLIN( 246)																	lua_pushnil(l);
HXDLIN( 246)																	while((lua_next(l,-2) != 0)){
HXLINE( 246)																		int index = (lua_tointeger(l,-2) - 1);
HXDLIN( 246)																		arr->set(index,::llua::Convert_obj::fromLua(l,-1));
HXDLIN( 246)																		lua_pop(l,1);
            																	}
HXDLIN( 246)																	ret1 = arr;
            																}
            																else {
HXLINE( 246)																	 hx::Anon obj = hx::Anon_obj::Create();
HXDLIN( 246)																	lua_pushnil(l);
HXDLIN( 246)																	while((lua_next(l,-2) != 0)){
HXLINE( 246)																		::String ret = ::Std_obj::string(::llua::Convert_obj::fromLua(l,-2));
HXDLIN( 246)																		obj->hx::Anon_obj::Add(ret,::llua::Convert_obj::fromLua(l,-1));
HXDLIN( 246)																		lua_pop(l,1);
            																	}
HXDLIN( 246)																	ret1 = obj;
            																}
HXDLIN( 246)																ret = ret1;
            															}
            															break;
            															default:{
HXLINE( 246)																ret = null();
HXDLIN( 246)																::haxe::Log_obj::trace(HX_("return value not supported\n",48,41,fb,c8),::hx::SourceInfo(HX_("llua/Convert.hx",6e,6a,e3,49),96,HX_("llua.Convert",31,b8,44,19),HX_("fromLua",6e,2a,fd,57)));
            															}
            														}
HXDLIN( 246)														::String ret1 = ::Std_obj::string(ret);
HXDLIN( 246)														 ::Dynamic ret2 = null();
HXDLIN( 246)														switch((int)(lua_type(l,-1))){
            															case (int)0: {
HXLINE( 246)																ret2 = null();
            															}
            															break;
            															case (int)1: {
HXLINE( 246)																ret2 = (lua_toboolean(l,-1) != 0);
            															}
            															break;
            															case (int)3: {
HXLINE( 246)																ret2 = lua_tonumber(l,-1);
            															}
            															break;
            															case (int)4: {
HXLINE( 246)																ret2 = linc::lua::tostring(l,-1);
            															}
            															break;
            															case (int)5: {
HXLINE( 246)																bool array = true;
HXDLIN( 246)																 ::Dynamic ret = null();
HXDLIN( 246)																lua_pushnil(l);
HXDLIN( 246)																while((lua_next(l,-2) != 0)){
HXLINE( 246)																	if ((lua_type(l,-2) != 3)) {
HXLINE( 246)																		array = false;
HXDLIN( 246)																		lua_pop(l,2);
HXDLIN( 246)																		goto _hx_goto_72;
            																	}
HXDLIN( 246)																	Float n = lua_tonumber(l,-2);
HXDLIN( 246)																	if ((n != ::Std_obj::_hx_int(n))) {
HXLINE( 246)																		array = false;
HXDLIN( 246)																		lua_pop(l,2);
HXDLIN( 246)																		goto _hx_goto_72;
            																	}
HXDLIN( 246)																	lua_pop(l,1);
            																}
            																_hx_goto_72:;
HXDLIN( 246)																if (array) {
HXLINE( 246)																	::cpp::VirtualArray arr = ::cpp::VirtualArray_obj::__new(0);
HXDLIN( 246)																	lua_pushnil(l);
HXDLIN( 246)																	while((lua_next(l,-2) != 0)){
HXLINE( 246)																		int index = (lua_tointeger(l,-2) - 1);
HXDLIN( 246)																		arr->set(index,::llua::Convert_obj::fromLua(l,-1));
HXDLIN( 246)																		lua_pop(l,1);
            																	}
HXDLIN( 246)																	ret = arr;
            																}
            																else {
HXLINE( 246)																	 hx::Anon obj = hx::Anon_obj::Create();
HXDLIN( 246)																	lua_pushnil(l);
HXDLIN( 246)																	while((lua_next(l,-2) != 0)){
HXLINE( 246)																		::String ret = ::Std_obj::string(::llua::Convert_obj::fromLua(l,-2));
HXDLIN( 246)																		obj->hx::Anon_obj::Add(ret,::llua::Convert_obj::fromLua(l,-1));
HXDLIN( 246)																		lua_pop(l,1);
            																	}
HXDLIN( 246)																	ret = obj;
            																}
HXDLIN( 246)																ret2 = ret;
            															}
            															break;
            															default:{
HXLINE( 246)																ret2 = null();
HXDLIN( 246)																::haxe::Log_obj::trace(HX_("return value not supported\n",48,41,fb,c8),::hx::SourceInfo(HX_("llua/Convert.hx",6e,6a,e3,49),96,HX_("llua.Convert",31,b8,44,19),HX_("fromLua",6e,2a,fd,57)));
            															}
            														}
HXDLIN( 246)														obj->hx::Anon_obj::Add(ret1,ret2);
HXDLIN( 246)														lua_pop(l,1);
            													}
HXDLIN( 246)													ret1 = obj;
            												}
HXDLIN( 246)												ret = ret1;
            											}
            											break;
            											default:{
HXLINE( 246)												ret = null();
HXDLIN( 246)												::haxe::Log_obj::trace(HX_("return value not supported\n",48,41,fb,c8),::hx::SourceInfo(HX_("llua/Convert.hx",6e,6a,e3,49),96,HX_("llua.Convert",31,b8,44,19),HX_("fromLua",6e,2a,fd,57)));
            											}
            										}
HXDLIN( 246)										arr->set(index,ret);
HXDLIN( 246)										lua_pop(l,1);
            									}
HXDLIN( 246)									ret1 = arr;
            								}
            								else {
HXLINE( 246)									 hx::Anon obj = hx::Anon_obj::Create();
HXDLIN( 246)									lua_pushnil(l);
HXDLIN( 246)									while((lua_next(l,-2) != 0)){
HXLINE( 246)										 ::Dynamic ret = null();
HXDLIN( 246)										switch((int)(lua_type(l,-2))){
            											case (int)0: {
HXLINE( 246)												ret = null();
            											}
            											break;
            											case (int)1: {
HXLINE( 246)												ret = (lua_toboolean(l,-2) != 0);
            											}
            											break;
            											case (int)3: {
HXLINE( 246)												ret = lua_tonumber(l,-2);
            											}
            											break;
            											case (int)4: {
HXLINE( 246)												ret = linc::lua::tostring(l,-2);
            											}
            											break;
            											case (int)5: {
HXLINE( 246)												bool array = true;
HXDLIN( 246)												 ::Dynamic ret1 = null();
HXDLIN( 246)												lua_pushnil(l);
HXDLIN( 246)												while((lua_next(l,-2) != 0)){
HXLINE( 246)													if ((lua_type(l,-2) != 3)) {
HXLINE( 246)														array = false;
HXDLIN( 246)														lua_pop(l,2);
HXDLIN( 246)														goto _hx_goto_76;
            													}
HXDLIN( 246)													Float n = lua_tonumber(l,-2);
HXDLIN( 246)													if ((n != ::Std_obj::_hx_int(n))) {
HXLINE( 246)														array = false;
HXDLIN( 246)														lua_pop(l,2);
HXDLIN( 246)														goto _hx_goto_76;
            													}
HXDLIN( 246)													lua_pop(l,1);
            												}
            												_hx_goto_76:;
HXDLIN( 246)												if (array) {
HXLINE( 246)													::cpp::VirtualArray arr = ::cpp::VirtualArray_obj::__new(0);
HXDLIN( 246)													lua_pushnil(l);
HXDLIN( 246)													while((lua_next(l,-2) != 0)){
HXLINE( 246)														int index = (lua_tointeger(l,-2) - 1);
HXDLIN( 246)														 ::Dynamic ret = null();
HXDLIN( 246)														switch((int)(lua_type(l,-1))){
            															case (int)0: {
HXLINE( 246)																ret = null();
            															}
            															break;
            															case (int)1: {
HXLINE( 246)																ret = (lua_toboolean(l,-1) != 0);
            															}
            															break;
            															case (int)3: {
HXLINE( 246)																ret = lua_tonumber(l,-1);
            															}
            															break;
            															case (int)4: {
HXLINE( 246)																ret = linc::lua::tostring(l,-1);
            															}
            															break;
            															case (int)5: {
HXLINE( 246)																bool array = true;
HXDLIN( 246)																 ::Dynamic ret1 = null();
HXDLIN( 246)																lua_pushnil(l);
HXDLIN( 246)																while((lua_next(l,-2) != 0)){
HXLINE( 246)																	if ((lua_type(l,-2) != 3)) {
HXLINE( 246)																		array = false;
HXDLIN( 246)																		lua_pop(l,2);
HXDLIN( 246)																		goto _hx_goto_78;
            																	}
HXDLIN( 246)																	Float n = lua_tonumber(l,-2);
HXDLIN( 246)																	if ((n != ::Std_obj::_hx_int(n))) {
HXLINE( 246)																		array = false;
HXDLIN( 246)																		lua_pop(l,2);
HXDLIN( 246)																		goto _hx_goto_78;
            																	}
HXDLIN( 246)																	lua_pop(l,1);
            																}
            																_hx_goto_78:;
HXDLIN( 246)																if (array) {
HXLINE( 246)																	::cpp::VirtualArray arr = ::cpp::VirtualArray_obj::__new(0);
HXDLIN( 246)																	lua_pushnil(l);
HXDLIN( 246)																	while((lua_next(l,-2) != 0)){
HXLINE( 246)																		int index = (lua_tointeger(l,-2) - 1);
HXDLIN( 246)																		arr->set(index,::llua::Convert_obj::fromLua(l,-1));
HXDLIN( 246)																		lua_pop(l,1);
            																	}
HXDLIN( 246)																	ret1 = arr;
            																}
            																else {
HXLINE( 246)																	 hx::Anon obj = hx::Anon_obj::Create();
HXDLIN( 246)																	lua_pushnil(l);
HXDLIN( 246)																	while((lua_next(l,-2) != 0)){
HXLINE( 246)																		::String ret = ::Std_obj::string(::llua::Convert_obj::fromLua(l,-2));
HXDLIN( 246)																		obj->hx::Anon_obj::Add(ret,::llua::Convert_obj::fromLua(l,-1));
HXDLIN( 246)																		lua_pop(l,1);
            																	}
HXDLIN( 246)																	ret1 = obj;
            																}
HXDLIN( 246)																ret = ret1;
            															}
            															break;
            															default:{
HXLINE( 246)																ret = null();
HXDLIN( 246)																::haxe::Log_obj::trace(HX_("return value not supported\n",48,41,fb,c8),::hx::SourceInfo(HX_("llua/Convert.hx",6e,6a,e3,49),96,HX_("llua.Convert",31,b8,44,19),HX_("fromLua",6e,2a,fd,57)));
            															}
            														}
HXDLIN( 246)														arr->set(index,ret);
HXDLIN( 246)														lua_pop(l,1);
            													}
HXDLIN( 246)													ret1 = arr;
            												}
            												else {
HXLINE( 246)													 hx::Anon obj = hx::Anon_obj::Create();
HXDLIN( 246)													lua_pushnil(l);
HXDLIN( 246)													while((lua_next(l,-2) != 0)){
HXLINE( 246)														 ::Dynamic ret = null();
HXDLIN( 246)														switch((int)(lua_type(l,-2))){
            															case (int)0: {
HXLINE( 246)																ret = null();
            															}
            															break;
            															case (int)1: {
HXLINE( 246)																ret = (lua_toboolean(l,-2) != 0);
            															}
            															break;
            															case (int)3: {
HXLINE( 246)																ret = lua_tonumber(l,-2);
            															}
            															break;
            															case (int)4: {
HXLINE( 246)																ret = linc::lua::tostring(l,-2);
            															}
            															break;
            															case (int)5: {
HXLINE( 246)																bool array = true;
HXDLIN( 246)																 ::Dynamic ret1 = null();
HXDLIN( 246)																lua_pushnil(l);
HXDLIN( 246)																while((lua_next(l,-2) != 0)){
HXLINE( 246)																	if ((lua_type(l,-2) != 3)) {
HXLINE( 246)																		array = false;
HXDLIN( 246)																		lua_pop(l,2);
HXDLIN( 246)																		goto _hx_goto_82;
            																	}
HXDLIN( 246)																	Float n = lua_tonumber(l,-2);
HXDLIN( 246)																	if ((n != ::Std_obj::_hx_int(n))) {
HXLINE( 246)																		array = false;
HXDLIN( 246)																		lua_pop(l,2);
HXDLIN( 246)																		goto _hx_goto_82;
            																	}
HXDLIN( 246)																	lua_pop(l,1);
            																}
            																_hx_goto_82:;
HXDLIN( 246)																if (array) {
HXLINE( 246)																	::cpp::VirtualArray arr = ::cpp::VirtualArray_obj::__new(0);
HXDLIN( 246)																	lua_pushnil(l);
HXDLIN( 246)																	while((lua_next(l,-2) != 0)){
HXLINE( 246)																		int index = (lua_tointeger(l,-2) - 1);
HXDLIN( 246)																		arr->set(index,::llua::Convert_obj::fromLua(l,-1));
HXDLIN( 246)																		lua_pop(l,1);
            																	}
HXDLIN( 246)																	ret1 = arr;
            																}
            																else {
HXLINE( 246)																	 hx::Anon obj = hx::Anon_obj::Create();
HXDLIN( 246)																	lua_pushnil(l);
HXDLIN( 246)																	while((lua_next(l,-2) != 0)){
HXLINE( 246)																		::String ret = ::Std_obj::string(::llua::Convert_obj::fromLua(l,-2));
HXDLIN( 246)																		obj->hx::Anon_obj::Add(ret,::llua::Convert_obj::fromLua(l,-1));
HXDLIN( 246)																		lua_pop(l,1);
            																	}
HXDLIN( 246)																	ret1 = obj;
            																}
HXDLIN( 246)																ret = ret1;
            															}
            															break;
            															default:{
HXLINE( 246)																ret = null();
HXDLIN( 246)																::haxe::Log_obj::trace(HX_("return value not supported\n",48,41,fb,c8),::hx::SourceInfo(HX_("llua/Convert.hx",6e,6a,e3,49),96,HX_("llua.Convert",31,b8,44,19),HX_("fromLua",6e,2a,fd,57)));
            															}
            														}
HXDLIN( 246)														::String ret1 = ::Std_obj::string(ret);
HXDLIN( 246)														 ::Dynamic ret2 = null();
HXDLIN( 246)														switch((int)(lua_type(l,-1))){
            															case (int)0: {
HXLINE( 246)																ret2 = null();
            															}
            															break;
            															case (int)1: {
HXLINE( 246)																ret2 = (lua_toboolean(l,-1) != 0);
            															}
            															break;
            															case (int)3: {
HXLINE( 246)																ret2 = lua_tonumber(l,-1);
            															}
            															break;
            															case (int)4: {
HXLINE( 246)																ret2 = linc::lua::tostring(l,-1);
            															}
            															break;
            															case (int)5: {
HXLINE( 246)																bool array = true;
HXDLIN( 246)																 ::Dynamic ret = null();
HXDLIN( 246)																lua_pushnil(l);
HXDLIN( 246)																while((lua_next(l,-2) != 0)){
HXLINE( 246)																	if ((lua_type(l,-2) != 3)) {
HXLINE( 246)																		array = false;
HXDLIN( 246)																		lua_pop(l,2);
HXDLIN( 246)																		goto _hx_goto_85;
            																	}
HXDLIN( 246)																	Float n = lua_tonumber(l,-2);
HXDLIN( 246)																	if ((n != ::Std_obj::_hx_int(n))) {
HXLINE( 246)																		array = false;
HXDLIN( 246)																		lua_pop(l,2);
HXDLIN( 246)																		goto _hx_goto_85;
            																	}
HXDLIN( 246)																	lua_pop(l,1);
            																}
            																_hx_goto_85:;
HXDLIN( 246)																if (array) {
HXLINE( 246)																	::cpp::VirtualArray arr = ::cpp::VirtualArray_obj::__new(0);
HXDLIN( 246)																	lua_pushnil(l);
HXDLIN( 246)																	while((lua_next(l,-2) != 0)){
HXLINE( 246)																		int index = (lua_tointeger(l,-2) - 1);
HXDLIN( 246)																		arr->set(index,::llua::Convert_obj::fromLua(l,-1));
HXDLIN( 246)																		lua_pop(l,1);
            																	}
HXDLIN( 246)																	ret = arr;
            																}
            																else {
HXLINE( 246)																	 hx::Anon obj = hx::Anon_obj::Create();
HXDLIN( 246)																	lua_pushnil(l);
HXDLIN( 246)																	while((lua_next(l,-2) != 0)){
HXLINE( 246)																		::String ret = ::Std_obj::string(::llua::Convert_obj::fromLua(l,-2));
HXDLIN( 246)																		obj->hx::Anon_obj::Add(ret,::llua::Convert_obj::fromLua(l,-1));
HXDLIN( 246)																		lua_pop(l,1);
            																	}
HXDLIN( 246)																	ret = obj;
            																}
HXDLIN( 246)																ret2 = ret;
            															}
            															break;
            															default:{
HXLINE( 246)																ret2 = null();
HXDLIN( 246)																::haxe::Log_obj::trace(HX_("return value not supported\n",48,41,fb,c8),::hx::SourceInfo(HX_("llua/Convert.hx",6e,6a,e3,49),96,HX_("llua.Convert",31,b8,44,19),HX_("fromLua",6e,2a,fd,57)));
            															}
            														}
HXDLIN( 246)														obj->hx::Anon_obj::Add(ret1,ret2);
HXDLIN( 246)														lua_pop(l,1);
            													}
HXDLIN( 246)													ret1 = obj;
            												}
HXDLIN( 246)												ret = ret1;
            											}
            											break;
            											default:{
HXLINE( 246)												ret = null();
HXDLIN( 246)												::haxe::Log_obj::trace(HX_("return value not supported\n",48,41,fb,c8),::hx::SourceInfo(HX_("llua/Convert.hx",6e,6a,e3,49),96,HX_("llua.Convert",31,b8,44,19),HX_("fromLua",6e,2a,fd,57)));
            											}
            										}
HXDLIN( 246)										::String ret1 = ::Std_obj::string(ret);
HXDLIN( 246)										 ::Dynamic ret2 = null();
HXDLIN( 246)										switch((int)(lua_type(l,-1))){
            											case (int)0: {
HXLINE( 246)												ret2 = null();
            											}
            											break;
            											case (int)1: {
HXLINE( 246)												ret2 = (lua_toboolean(l,-1) != 0);
            											}
            											break;
            											case (int)3: {
HXLINE( 246)												ret2 = lua_tonumber(l,-1);
            											}
            											break;
            											case (int)4: {
HXLINE( 246)												ret2 = linc::lua::tostring(l,-1);
            											}
            											break;
            											case (int)5: {
HXLINE( 246)												bool array = true;
HXDLIN( 246)												 ::Dynamic ret = null();
HXDLIN( 246)												lua_pushnil(l);
HXDLIN( 246)												while((lua_next(l,-2) != 0)){
HXLINE( 246)													if ((lua_type(l,-2) != 3)) {
HXLINE( 246)														array = false;
HXDLIN( 246)														lua_pop(l,2);
HXDLIN( 246)														goto _hx_goto_88;
            													}
HXDLIN( 246)													Float n = lua_tonumber(l,-2);
HXDLIN( 246)													if ((n != ::Std_obj::_hx_int(n))) {
HXLINE( 246)														array = false;
HXDLIN( 246)														lua_pop(l,2);
HXDLIN( 246)														goto _hx_goto_88;
            													}
HXDLIN( 246)													lua_pop(l,1);
            												}
            												_hx_goto_88:;
HXDLIN( 246)												if (array) {
HXLINE( 246)													::cpp::VirtualArray arr = ::cpp::VirtualArray_obj::__new(0);
HXDLIN( 246)													lua_pushnil(l);
HXDLIN( 246)													while((lua_next(l,-2) != 0)){
HXLINE( 246)														int index = (lua_tointeger(l,-2) - 1);
HXDLIN( 246)														 ::Dynamic ret = null();
HXDLIN( 246)														switch((int)(lua_type(l,-1))){
            															case (int)0: {
HXLINE( 246)																ret = null();
            															}
            															break;
            															case (int)1: {
HXLINE( 246)																ret = (lua_toboolean(l,-1) != 0);
            															}
            															break;
            															case (int)3: {
HXLINE( 246)																ret = lua_tonumber(l,-1);
            															}
            															break;
            															case (int)4: {
HXLINE( 246)																ret = linc::lua::tostring(l,-1);
            															}
            															break;
            															case (int)5: {
HXLINE( 246)																bool array = true;
HXDLIN( 246)																 ::Dynamic ret1 = null();
HXDLIN( 246)																lua_pushnil(l);
HXDLIN( 246)																while((lua_next(l,-2) != 0)){
HXLINE( 246)																	if ((lua_type(l,-2) != 3)) {
HXLINE( 246)																		array = false;
HXDLIN( 246)																		lua_pop(l,2);
HXDLIN( 246)																		goto _hx_goto_90;
            																	}
HXDLIN( 246)																	Float n = lua_tonumber(l,-2);
HXDLIN( 246)																	if ((n != ::Std_obj::_hx_int(n))) {
HXLINE( 246)																		array = false;
HXDLIN( 246)																		lua_pop(l,2);
HXDLIN( 246)																		goto _hx_goto_90;
            																	}
HXDLIN( 246)																	lua_pop(l,1);
            																}
            																_hx_goto_90:;
HXDLIN( 246)																if (array) {
HXLINE( 246)																	::cpp::VirtualArray arr = ::cpp::VirtualArray_obj::__new(0);
HXDLIN( 246)																	lua_pushnil(l);
HXDLIN( 246)																	while((lua_next(l,-2) != 0)){
HXLINE( 246)																		int index = (lua_tointeger(l,-2) - 1);
HXDLIN( 246)																		arr->set(index,::llua::Convert_obj::fromLua(l,-1));
HXDLIN( 246)																		lua_pop(l,1);
            																	}
HXDLIN( 246)																	ret1 = arr;
            																}
            																else {
HXLINE( 246)																	 hx::Anon obj = hx::Anon_obj::Create();
HXDLIN( 246)																	lua_pushnil(l);
HXDLIN( 246)																	while((lua_next(l,-2) != 0)){
HXLINE( 246)																		::String ret = ::Std_obj::string(::llua::Convert_obj::fromLua(l,-2));
HXDLIN( 246)																		obj->hx::Anon_obj::Add(ret,::llua::Convert_obj::fromLua(l,-1));
HXDLIN( 246)																		lua_pop(l,1);
            																	}
HXDLIN( 246)																	ret1 = obj;
            																}
HXDLIN( 246)																ret = ret1;
            															}
            															break;
            															default:{
HXLINE( 246)																ret = null();
HXDLIN( 246)																::haxe::Log_obj::trace(HX_("return value not supported\n",48,41,fb,c8),::hx::SourceInfo(HX_("llua/Convert.hx",6e,6a,e3,49),96,HX_("llua.Convert",31,b8,44,19),HX_("fromLua",6e,2a,fd,57)));
            															}
            														}
HXDLIN( 246)														arr->set(index,ret);
HXDLIN( 246)														lua_pop(l,1);
            													}
HXDLIN( 246)													ret = arr;
            												}
            												else {
HXLINE( 246)													 hx::Anon obj = hx::Anon_obj::Create();
HXDLIN( 246)													lua_pushnil(l);
HXDLIN( 246)													while((lua_next(l,-2) != 0)){
HXLINE( 246)														 ::Dynamic ret = null();
HXDLIN( 246)														switch((int)(lua_type(l,-2))){
            															case (int)0: {
HXLINE( 246)																ret = null();
            															}
            															break;
            															case (int)1: {
HXLINE( 246)																ret = (lua_toboolean(l,-2) != 0);
            															}
            															break;
            															case (int)3: {
HXLINE( 246)																ret = lua_tonumber(l,-2);
            															}
            															break;
            															case (int)4: {
HXLINE( 246)																ret = linc::lua::tostring(l,-2);
            															}
            															break;
            															case (int)5: {
HXLINE( 246)																bool array = true;
HXDLIN( 246)																 ::Dynamic ret1 = null();
HXDLIN( 246)																lua_pushnil(l);
HXDLIN( 246)																while((lua_next(l,-2) != 0)){
HXLINE( 246)																	if ((lua_type(l,-2) != 3)) {
HXLINE( 246)																		array = false;
HXDLIN( 246)																		lua_pop(l,2);
HXDLIN( 246)																		goto _hx_goto_94;
            																	}
HXDLIN( 246)																	Float n = lua_tonumber(l,-2);
HXDLIN( 246)																	if ((n != ::Std_obj::_hx_int(n))) {
HXLINE( 246)																		array = false;
HXDLIN( 246)																		lua_pop(l,2);
HXDLIN( 246)																		goto _hx_goto_94;
            																	}
HXDLIN( 246)																	lua_pop(l,1);
            																}
            																_hx_goto_94:;
HXDLIN( 246)																if (array) {
HXLINE( 246)																	::cpp::VirtualArray arr = ::cpp::VirtualArray_obj::__new(0);
HXDLIN( 246)																	lua_pushnil(l);
HXDLIN( 246)																	while((lua_next(l,-2) != 0)){
HXLINE( 246)																		int index = (lua_tointeger(l,-2) - 1);
HXDLIN( 246)																		arr->set(index,::llua::Convert_obj::fromLua(l,-1));
HXDLIN( 246)																		lua_pop(l,1);
            																	}
HXDLIN( 246)																	ret1 = arr;
            																}
            																else {
HXLINE( 246)																	 hx::Anon obj = hx::Anon_obj::Create();
HXDLIN( 246)																	lua_pushnil(l);
HXDLIN( 246)																	while((lua_next(l,-2) != 0)){
HXLINE( 246)																		::String ret = ::Std_obj::string(::llua::Convert_obj::fromLua(l,-2));
HXDLIN( 246)																		obj->hx::Anon_obj::Add(ret,::llua::Convert_obj::fromLua(l,-1));
HXDLIN( 246)																		lua_pop(l,1);
            																	}
HXDLIN( 246)																	ret1 = obj;
            																}
HXDLIN( 246)																ret = ret1;
            															}
            															break;
            															default:{
HXLINE( 246)																ret = null();
HXDLIN( 246)																::haxe::Log_obj::trace(HX_("return value not supported\n",48,41,fb,c8),::hx::SourceInfo(HX_("llua/Convert.hx",6e,6a,e3,49),96,HX_("llua.Convert",31,b8,44,19),HX_("fromLua",6e,2a,fd,57)));
            															}
            														}
HXDLIN( 246)														::String ret1 = ::Std_obj::string(ret);
HXDLIN( 246)														 ::Dynamic ret2 = null();
HXDLIN( 246)														switch((int)(lua_type(l,-1))){
            															case (int)0: {
HXLINE( 246)																ret2 = null();
            															}
            															break;
            															case (int)1: {
HXLINE( 246)																ret2 = (lua_toboolean(l,-1) != 0);
            															}
            															break;
            															case (int)3: {
HXLINE( 246)																ret2 = lua_tonumber(l,-1);
            															}
            															break;
            															case (int)4: {
HXLINE( 246)																ret2 = linc::lua::tostring(l,-1);
            															}
            															break;
            															case (int)5: {
HXLINE( 246)																bool array = true;
HXDLIN( 246)																 ::Dynamic ret = null();
HXDLIN( 246)																lua_pushnil(l);
HXDLIN( 246)																while((lua_next(l,-2) != 0)){
HXLINE( 246)																	if ((lua_type(l,-2) != 3)) {
HXLINE( 246)																		array = false;
HXDLIN( 246)																		lua_pop(l,2);
HXDLIN( 246)																		goto _hx_goto_97;
            																	}
HXDLIN( 246)																	Float n = lua_tonumber(l,-2);
HXDLIN( 246)																	if ((n != ::Std_obj::_hx_int(n))) {
HXLINE( 246)																		array = false;
HXDLIN( 246)																		lua_pop(l,2);
HXDLIN( 246)																		goto _hx_goto_97;
            																	}
HXDLIN( 246)																	lua_pop(l,1);
            																}
            																_hx_goto_97:;
HXDLIN( 246)																if (array) {
HXLINE( 246)																	::cpp::VirtualArray arr = ::cpp::VirtualArray_obj::__new(0);
HXDLIN( 246)																	lua_pushnil(l);
HXDLIN( 246)																	while((lua_next(l,-2) != 0)){
HXLINE( 246)																		int index = (lua_tointeger(l,-2) - 1);
HXDLIN( 246)																		arr->set(index,::llua::Convert_obj::fromLua(l,-1));
HXDLIN( 246)																		lua_pop(l,1);
            																	}
HXDLIN( 246)																	ret = arr;
            																}
            																else {
HXLINE( 246)																	 hx::Anon obj = hx::Anon_obj::Create();
HXDLIN( 246)																	lua_pushnil(l);
HXDLIN( 246)																	while((lua_next(l,-2) != 0)){
HXLINE( 246)																		::String ret = ::Std_obj::string(::llua::Convert_obj::fromLua(l,-2));
HXDLIN( 246)																		obj->hx::Anon_obj::Add(ret,::llua::Convert_obj::fromLua(l,-1));
HXDLIN( 246)																		lua_pop(l,1);
            																	}
HXDLIN( 246)																	ret = obj;
            																}
HXDLIN( 246)																ret2 = ret;
            															}
            															break;
            															default:{
HXLINE( 246)																ret2 = null();
HXDLIN( 246)																::haxe::Log_obj::trace(HX_("return value not supported\n",48,41,fb,c8),::hx::SourceInfo(HX_("llua/Convert.hx",6e,6a,e3,49),96,HX_("llua.Convert",31,b8,44,19),HX_("fromLua",6e,2a,fd,57)));
            															}
            														}
HXDLIN( 246)														obj->hx::Anon_obj::Add(ret1,ret2);
HXDLIN( 246)														lua_pop(l,1);
            													}
HXDLIN( 246)													ret = obj;
            												}
HXDLIN( 246)												ret2 = ret;
            											}
            											break;
            											default:{
HXLINE( 246)												ret2 = null();
HXDLIN( 246)												::haxe::Log_obj::trace(HX_("return value not supported\n",48,41,fb,c8),::hx::SourceInfo(HX_("llua/Convert.hx",6e,6a,e3,49),96,HX_("llua.Convert",31,b8,44,19),HX_("fromLua",6e,2a,fd,57)));
            											}
            										}
HXDLIN( 246)										obj->hx::Anon_obj::Add(ret1,ret2);
HXDLIN( 246)										lua_pop(l,1);
            									}
HXDLIN( 246)									ret1 = obj;
            								}
HXDLIN( 246)								ret = ret1;
            							}
            							break;
            							default:{
HXLINE( 246)								ret = null();
HXDLIN( 246)								::haxe::Log_obj::trace(HX_("return value not supported\n",48,41,fb,c8),::hx::SourceInfo(HX_("llua/Convert.hx",6e,6a,e3,49),96,HX_("llua.Convert",31,b8,44,19),HX_("fromLua",6e,2a,fd,57)));
            							}
            						}
HXDLIN( 246)						::String ret1 = ::Std_obj::string(ret);
HXDLIN( 246)						 ::Dynamic ret2 = null();
HXDLIN( 246)						switch((int)(lua_type(l,-1))){
            							case (int)0: {
HXLINE( 246)								ret2 = null();
            							}
            							break;
            							case (int)1: {
HXLINE( 246)								ret2 = (lua_toboolean(l,-1) != 0);
            							}
            							break;
            							case (int)3: {
HXLINE( 246)								ret2 = lua_tonumber(l,-1);
            							}
            							break;
            							case (int)4: {
HXLINE( 246)								ret2 = linc::lua::tostring(l,-1);
            							}
            							break;
            							case (int)5: {
HXLINE( 246)								bool array = true;
HXDLIN( 246)								 ::Dynamic ret = null();
HXDLIN( 246)								lua_pushnil(l);
HXDLIN( 246)								while((lua_next(l,-2) != 0)){
HXLINE( 246)									if ((lua_type(l,-2) != 3)) {
HXLINE( 246)										array = false;
HXDLIN( 246)										lua_pop(l,2);
HXDLIN( 246)										goto _hx_goto_100;
            									}
HXDLIN( 246)									Float n = lua_tonumber(l,-2);
HXDLIN( 246)									if ((n != ::Std_obj::_hx_int(n))) {
HXLINE( 246)										array = false;
HXDLIN( 246)										lua_pop(l,2);
HXDLIN( 246)										goto _hx_goto_100;
            									}
HXDLIN( 246)									lua_pop(l,1);
            								}
            								_hx_goto_100:;
HXDLIN( 246)								if (array) {
HXLINE( 246)									::cpp::VirtualArray arr = ::cpp::VirtualArray_obj::__new(0);
HXDLIN( 246)									lua_pushnil(l);
HXDLIN( 246)									while((lua_next(l,-2) != 0)){
HXLINE( 246)										int index = (lua_tointeger(l,-2) - 1);
HXDLIN( 246)										 ::Dynamic ret = null();
HXDLIN( 246)										switch((int)(lua_type(l,-1))){
            											case (int)0: {
HXLINE( 246)												ret = null();
            											}
            											break;
            											case (int)1: {
HXLINE( 246)												ret = (lua_toboolean(l,-1) != 0);
            											}
            											break;
            											case (int)3: {
HXLINE( 246)												ret = lua_tonumber(l,-1);
            											}
            											break;
            											case (int)4: {
HXLINE( 246)												ret = linc::lua::tostring(l,-1);
            											}
            											break;
            											case (int)5: {
HXLINE( 246)												bool array = true;
HXDLIN( 246)												 ::Dynamic ret1 = null();
HXDLIN( 246)												lua_pushnil(l);
HXDLIN( 246)												while((lua_next(l,-2) != 0)){
HXLINE( 246)													if ((lua_type(l,-2) != 3)) {
HXLINE( 246)														array = false;
HXDLIN( 246)														lua_pop(l,2);
HXDLIN( 246)														goto _hx_goto_102;
            													}
HXDLIN( 246)													Float n = lua_tonumber(l,-2);
HXDLIN( 246)													if ((n != ::Std_obj::_hx_int(n))) {
HXLINE( 246)														array = false;
HXDLIN( 246)														lua_pop(l,2);
HXDLIN( 246)														goto _hx_goto_102;
            													}
HXDLIN( 246)													lua_pop(l,1);
            												}
            												_hx_goto_102:;
HXDLIN( 246)												if (array) {
HXLINE( 246)													::cpp::VirtualArray arr = ::cpp::VirtualArray_obj::__new(0);
HXDLIN( 246)													lua_pushnil(l);
HXDLIN( 246)													while((lua_next(l,-2) != 0)){
HXLINE( 246)														int index = (lua_tointeger(l,-2) - 1);
HXDLIN( 246)														arr->set(index,::llua::Convert_obj::fromLua(l,-1));
HXDLIN( 246)														lua_pop(l,1);
            													}
HXDLIN( 246)													ret1 = arr;
            												}
            												else {
HXLINE( 246)													 hx::Anon obj = hx::Anon_obj::Create();
HXDLIN( 246)													lua_pushnil(l);
HXDLIN( 246)													while((lua_next(l,-2) != 0)){
HXLINE( 246)														::String ret = ::Std_obj::string(::llua::Convert_obj::fromLua(l,-2));
HXDLIN( 246)														obj->hx::Anon_obj::Add(ret,::llua::Convert_obj::fromLua(l,-1));
HXDLIN( 246)														lua_pop(l,1);
            													}
HXDLIN( 246)													ret1 = obj;
            												}
HXDLIN( 246)												ret = ret1;
            											}
            											break;
            											default:{
HXLINE( 246)												ret = null();
HXDLIN( 246)												::haxe::Log_obj::trace(HX_("return value not supported\n",48,41,fb,c8),::hx::SourceInfo(HX_("llua/Convert.hx",6e,6a,e3,49),96,HX_("llua.Convert",31,b8,44,19),HX_("fromLua",6e,2a,fd,57)));
            											}
            										}
HXDLIN( 246)										arr->set(index,ret);
HXDLIN( 246)										lua_pop(l,1);
            									}
HXDLIN( 246)									ret = arr;
            								}
            								else {
HXLINE( 246)									 hx::Anon obj = hx::Anon_obj::Create();
HXDLIN( 246)									lua_pushnil(l);
HXDLIN( 246)									while((lua_next(l,-2) != 0)){
HXLINE( 246)										 ::Dynamic ret = null();
HXDLIN( 246)										switch((int)(lua_type(l,-2))){
            											case (int)0: {
HXLINE( 246)												ret = null();
            											}
            											break;
            											case (int)1: {
HXLINE( 246)												ret = (lua_toboolean(l,-2) != 0);
            											}
            											break;
            											case (int)3: {
HXLINE( 246)												ret = lua_tonumber(l,-2);
            											}
            											break;
            											case (int)4: {
HXLINE( 246)												ret = linc::lua::tostring(l,-2);
            											}
            											break;
            											case (int)5: {
HXLINE( 246)												bool array = true;
HXDLIN( 246)												 ::Dynamic ret1 = null();
HXDLIN( 246)												lua_pushnil(l);
HXDLIN( 246)												while((lua_next(l,-2) != 0)){
HXLINE( 246)													if ((lua_type(l,-2) != 3)) {
HXLINE( 246)														array = false;
HXDLIN( 246)														lua_pop(l,2);
HXDLIN( 246)														goto _hx_goto_106;
            													}
HXDLIN( 246)													Float n = lua_tonumber(l,-2);
HXDLIN( 246)													if ((n != ::Std_obj::_hx_int(n))) {
HXLINE( 246)														array = false;
HXDLIN( 246)														lua_pop(l,2);
HXDLIN( 246)														goto _hx_goto_106;
            													}
HXDLIN( 246)													lua_pop(l,1);
            												}
            												_hx_goto_106:;
HXDLIN( 246)												if (array) {
HXLINE( 246)													::cpp::VirtualArray arr = ::cpp::VirtualArray_obj::__new(0);
HXDLIN( 246)													lua_pushnil(l);
HXDLIN( 246)													while((lua_next(l,-2) != 0)){
HXLINE( 246)														int index = (lua_tointeger(l,-2) - 1);
HXDLIN( 246)														 ::Dynamic ret = null();
HXDLIN( 246)														switch((int)(lua_type(l,-1))){
            															case (int)0: {
HXLINE( 246)																ret = null();
            															}
            															break;
            															case (int)1: {
HXLINE( 246)																ret = (lua_toboolean(l,-1) != 0);
            															}
            															break;
            															case (int)3: {
HXLINE( 246)																ret = lua_tonumber(l,-1);
            															}
            															break;
            															case (int)4: {
HXLINE( 246)																ret = linc::lua::tostring(l,-1);
            															}
            															break;
            															case (int)5: {
HXLINE( 246)																bool array = true;
HXDLIN( 246)																 ::Dynamic ret1 = null();
HXDLIN( 246)																lua_pushnil(l);
HXDLIN( 246)																while((lua_next(l,-2) != 0)){
HXLINE( 246)																	if ((lua_type(l,-2) != 3)) {
HXLINE( 246)																		array = false;
HXDLIN( 246)																		lua_pop(l,2);
HXDLIN( 246)																		goto _hx_goto_108;
            																	}
HXDLIN( 246)																	Float n = lua_tonumber(l,-2);
HXDLIN( 246)																	if ((n != ::Std_obj::_hx_int(n))) {
HXLINE( 246)																		array = false;
HXDLIN( 246)																		lua_pop(l,2);
HXDLIN( 246)																		goto _hx_goto_108;
            																	}
HXDLIN( 246)																	lua_pop(l,1);
            																}
            																_hx_goto_108:;
HXDLIN( 246)																if (array) {
HXLINE( 246)																	::cpp::VirtualArray arr = ::cpp::VirtualArray_obj::__new(0);
HXDLIN( 246)																	lua_pushnil(l);
HXDLIN( 246)																	while((lua_next(l,-2) != 0)){
HXLINE( 246)																		int index = (lua_tointeger(l,-2) - 1);
HXDLIN( 246)																		arr->set(index,::llua::Convert_obj::fromLua(l,-1));
HXDLIN( 246)																		lua_pop(l,1);
            																	}
HXDLIN( 246)																	ret1 = arr;
            																}
            																else {
HXLINE( 246)																	 hx::Anon obj = hx::Anon_obj::Create();
HXDLIN( 246)																	lua_pushnil(l);
HXDLIN( 246)																	while((lua_next(l,-2) != 0)){
HXLINE( 246)																		::String ret = ::Std_obj::string(::llua::Convert_obj::fromLua(l,-2));
HXDLIN( 246)																		obj->hx::Anon_obj::Add(ret,::llua::Convert_obj::fromLua(l,-1));
HXDLIN( 246)																		lua_pop(l,1);
            																	}
HXDLIN( 246)																	ret1 = obj;
            																}
HXDLIN( 246)																ret = ret1;
            															}
            															break;
            															default:{
HXLINE( 246)																ret = null();
HXDLIN( 246)																::haxe::Log_obj::trace(HX_("return value not supported\n",48,41,fb,c8),::hx::SourceInfo(HX_("llua/Convert.hx",6e,6a,e3,49),96,HX_("llua.Convert",31,b8,44,19),HX_("fromLua",6e,2a,fd,57)));
            															}
            														}
HXDLIN( 246)														arr->set(index,ret);
HXDLIN( 246)														lua_pop(l,1);
            													}
HXDLIN( 246)													ret1 = arr;
            												}
            												else {
HXLINE( 246)													 hx::Anon obj = hx::Anon_obj::Create();
HXDLIN( 246)													lua_pushnil(l);
HXDLIN( 246)													while((lua_next(l,-2) != 0)){
HXLINE( 246)														 ::Dynamic ret = null();
HXDLIN( 246)														switch((int)(lua_type(l,-2))){
            															case (int)0: {
HXLINE( 246)																ret = null();
            															}
            															break;
            															case (int)1: {
HXLINE( 246)																ret = (lua_toboolean(l,-2) != 0);
            															}
            															break;
            															case (int)3: {
HXLINE( 246)																ret = lua_tonumber(l,-2);
            															}
            															break;
            															case (int)4: {
HXLINE( 246)																ret = linc::lua::tostring(l,-2);
            															}
            															break;
            															case (int)5: {
HXLINE( 246)																bool array = true;
HXDLIN( 246)																 ::Dynamic ret1 = null();
HXDLIN( 246)																lua_pushnil(l);
HXDLIN( 246)																while((lua_next(l,-2) != 0)){
HXLINE( 246)																	if ((lua_type(l,-2) != 3)) {
HXLINE( 246)																		array = false;
HXDLIN( 246)																		lua_pop(l,2);
HXDLIN( 246)																		goto _hx_goto_112;
            																	}
HXDLIN( 246)																	Float n = lua_tonumber(l,-2);
HXDLIN( 246)																	if ((n != ::Std_obj::_hx_int(n))) {
HXLINE( 246)																		array = false;
HXDLIN( 246)																		lua_pop(l,2);
HXDLIN( 246)																		goto _hx_goto_112;
            																	}
HXDLIN( 246)																	lua_pop(l,1);
            																}
            																_hx_goto_112:;
HXDLIN( 246)																if (array) {
HXLINE( 246)																	::cpp::VirtualArray arr = ::cpp::VirtualArray_obj::__new(0);
HXDLIN( 246)																	lua_pushnil(l);
HXDLIN( 246)																	while((lua_next(l,-2) != 0)){
HXLINE( 246)																		int index = (lua_tointeger(l,-2) - 1);
HXDLIN( 246)																		arr->set(index,::llua::Convert_obj::fromLua(l,-1));
HXDLIN( 246)																		lua_pop(l,1);
            																	}
HXDLIN( 246)																	ret1 = arr;
            																}
            																else {
HXLINE( 246)																	 hx::Anon obj = hx::Anon_obj::Create();
HXDLIN( 246)																	lua_pushnil(l);
HXDLIN( 246)																	while((lua_next(l,-2) != 0)){
HXLINE( 246)																		::String ret = ::Std_obj::string(::llua::Convert_obj::fromLua(l,-2));
HXDLIN( 246)																		obj->hx::Anon_obj::Add(ret,::llua::Convert_obj::fromLua(l,-1));
HXDLIN( 246)																		lua_pop(l,1);
            																	}
HXDLIN( 246)																	ret1 = obj;
            																}
HXDLIN( 246)																ret = ret1;
            															}
            															break;
            															default:{
HXLINE( 246)																ret = null();
HXDLIN( 246)																::haxe::Log_obj::trace(HX_("return value not supported\n",48,41,fb,c8),::hx::SourceInfo(HX_("llua/Convert.hx",6e,6a,e3,49),96,HX_("llua.Convert",31,b8,44,19),HX_("fromLua",6e,2a,fd,57)));
            															}
            														}
HXDLIN( 246)														::String ret1 = ::Std_obj::string(ret);
HXDLIN( 246)														 ::Dynamic ret2 = null();
HXDLIN( 246)														switch((int)(lua_type(l,-1))){
            															case (int)0: {
HXLINE( 246)																ret2 = null();
            															}
            															break;
            															case (int)1: {
HXLINE( 246)																ret2 = (lua_toboolean(l,-1) != 0);
            															}
            															break;
            															case (int)3: {
HXLINE( 246)																ret2 = lua_tonumber(l,-1);
            															}
            															break;
            															case (int)4: {
HXLINE( 246)																ret2 = linc::lua::tostring(l,-1);
            															}
            															break;
            															case (int)5: {
HXLINE( 246)																bool array = true;
HXDLIN( 246)																 ::Dynamic ret = null();
HXDLIN( 246)																lua_pushnil(l);
HXDLIN( 246)																while((lua_next(l,-2) != 0)){
HXLINE( 246)																	if ((lua_type(l,-2) != 3)) {
HXLINE( 246)																		array = false;
HXDLIN( 246)																		lua_pop(l,2);
HXDLIN( 246)																		goto _hx_goto_115;
            																	}
HXDLIN( 246)																	Float n = lua_tonumber(l,-2);
HXDLIN( 246)																	if ((n != ::Std_obj::_hx_int(n))) {
HXLINE( 246)																		array = false;
HXDLIN( 246)																		lua_pop(l,2);
HXDLIN( 246)																		goto _hx_goto_115;
            																	}
HXDLIN( 246)																	lua_pop(l,1);
            																}
            																_hx_goto_115:;
HXDLIN( 246)																if (array) {
HXLINE( 246)																	::cpp::VirtualArray arr = ::cpp::VirtualArray_obj::__new(0);
HXDLIN( 246)																	lua_pushnil(l);
HXDLIN( 246)																	while((lua_next(l,-2) != 0)){
HXLINE( 246)																		int index = (lua_tointeger(l,-2) - 1);
HXDLIN( 246)																		arr->set(index,::llua::Convert_obj::fromLua(l,-1));
HXDLIN( 246)																		lua_pop(l,1);
            																	}
HXDLIN( 246)																	ret = arr;
            																}
            																else {
HXLINE( 246)																	 hx::Anon obj = hx::Anon_obj::Create();
HXDLIN( 246)																	lua_pushnil(l);
HXDLIN( 246)																	while((lua_next(l,-2) != 0)){
HXLINE( 246)																		::String ret = ::Std_obj::string(::llua::Convert_obj::fromLua(l,-2));
HXDLIN( 246)																		obj->hx::Anon_obj::Add(ret,::llua::Convert_obj::fromLua(l,-1));
HXDLIN( 246)																		lua_pop(l,1);
            																	}
HXDLIN( 246)																	ret = obj;
            																}
HXDLIN( 246)																ret2 = ret;
            															}
            															break;
            															default:{
HXLINE( 246)																ret2 = null();
HXDLIN( 246)																::haxe::Log_obj::trace(HX_("return value not supported\n",48,41,fb,c8),::hx::SourceInfo(HX_("llua/Convert.hx",6e,6a,e3,49),96,HX_("llua.Convert",31,b8,44,19),HX_("fromLua",6e,2a,fd,57)));
            															}
            														}
HXDLIN( 246)														obj->hx::Anon_obj::Add(ret1,ret2);
HXDLIN( 246)														lua_pop(l,1);
            													}
HXDLIN( 246)													ret1 = obj;
            												}
HXDLIN( 246)												ret = ret1;
            											}
            											break;
            											default:{
HXLINE( 246)												ret = null();
HXDLIN( 246)												::haxe::Log_obj::trace(HX_("return value not supported\n",48,41,fb,c8),::hx::SourceInfo(HX_("llua/Convert.hx",6e,6a,e3,49),96,HX_("llua.Convert",31,b8,44,19),HX_("fromLua",6e,2a,fd,57)));
            											}
            										}
HXDLIN( 246)										::String ret1 = ::Std_obj::string(ret);
HXDLIN( 246)										 ::Dynamic ret2 = null();
HXDLIN( 246)										switch((int)(lua_type(l,-1))){
            											case (int)0: {
HXLINE( 246)												ret2 = null();
            											}
            											break;
            											case (int)1: {
HXLINE( 246)												ret2 = (lua_toboolean(l,-1) != 0);
            											}
            											break;
            											case (int)3: {
HXLINE( 246)												ret2 = lua_tonumber(l,-1);
            											}
            											break;
            											case (int)4: {
HXLINE( 246)												ret2 = linc::lua::tostring(l,-1);
            											}
            											break;
            											case (int)5: {
HXLINE( 246)												bool array = true;
HXDLIN( 246)												 ::Dynamic ret = null();
HXDLIN( 246)												lua_pushnil(l);
HXDLIN( 246)												while((lua_next(l,-2) != 0)){
HXLINE( 246)													if ((lua_type(l,-2) != 3)) {
HXLINE( 246)														array = false;
HXDLIN( 246)														lua_pop(l,2);
HXDLIN( 246)														goto _hx_goto_118;
            													}
HXDLIN( 246)													Float n = lua_tonumber(l,-2);
HXDLIN( 246)													if ((n != ::Std_obj::_hx_int(n))) {
HXLINE( 246)														array = false;
HXDLIN( 246)														lua_pop(l,2);
HXDLIN( 246)														goto _hx_goto_118;
            													}
HXDLIN( 246)													lua_pop(l,1);
            												}
            												_hx_goto_118:;
HXDLIN( 246)												if (array) {
HXLINE( 246)													::cpp::VirtualArray arr = ::cpp::VirtualArray_obj::__new(0);
HXDLIN( 246)													lua_pushnil(l);
HXDLIN( 246)													while((lua_next(l,-2) != 0)){
HXLINE( 246)														int index = (lua_tointeger(l,-2) - 1);
HXDLIN( 246)														arr->set(index,::llua::Convert_obj::fromLua(l,-1));
HXDLIN( 246)														lua_pop(l,1);
            													}
HXDLIN( 246)													ret = arr;
            												}
            												else {
HXLINE( 246)													 hx::Anon obj = hx::Anon_obj::Create();
HXDLIN( 246)													lua_pushnil(l);
HXDLIN( 246)													while((lua_next(l,-2) != 0)){
HXLINE( 246)														::String ret = ::Std_obj::string(::llua::Convert_obj::fromLua(l,-2));
HXDLIN( 246)														obj->hx::Anon_obj::Add(ret,::llua::Convert_obj::fromLua(l,-1));
HXDLIN( 246)														lua_pop(l,1);
            													}
HXDLIN( 246)													ret = obj;
            												}
HXDLIN( 246)												ret2 = ret;
            											}
            											break;
            											default:{
HXLINE( 246)												ret2 = null();
HXDLIN( 246)												::haxe::Log_obj::trace(HX_("return value not supported\n",48,41,fb,c8),::hx::SourceInfo(HX_("llua/Convert.hx",6e,6a,e3,49),96,HX_("llua.Convert",31,b8,44,19),HX_("fromLua",6e,2a,fd,57)));
            											}
            										}
HXDLIN( 246)										obj->hx::Anon_obj::Add(ret1,ret2);
HXDLIN( 246)										lua_pop(l,1);
            									}
HXDLIN( 246)									ret = obj;
            								}
HXDLIN( 246)								ret2 = ret;
            							}
            							break;
            							default:{
HXLINE( 246)								ret2 = null();
HXDLIN( 246)								::haxe::Log_obj::trace(HX_("return value not supported\n",48,41,fb,c8),::hx::SourceInfo(HX_("llua/Convert.hx",6e,6a,e3,49),96,HX_("llua.Convert",31,b8,44,19),HX_("fromLua",6e,2a,fd,57)));
            							}
            						}
HXDLIN( 246)						obj->hx::Anon_obj::Add(ret1,ret2);
HXDLIN( 246)						lua_pop(l,1);
            					}
HXDLIN( 246)					ret1 = obj;
            				}
HXDLIN( 246)				ret = ret1;
            			}
            			break;
            			default:{
HXLINE( 246)				ret = null();
HXDLIN( 246)				::haxe::Log_obj::trace(HX_("return value not supported\n",48,41,fb,c8),::hx::SourceInfo(HX_("llua/Convert.hx",6e,6a,e3,49),96,HX_("llua.Convert",31,b8,44,19),HX_("fromLua",6e,2a,fd,57)));
            			}
            		}
HXDLIN( 246)		result = ( (::String)(ret) );
HXLINE( 247)		lua_pop(this->lua,1);
HXLINE( 249)		if (::hx::IsNull( result )) {
HXLINE( 250)			return false;
            		}
HXLINE( 255)		return (result == HX_("true",4e,a7,03,4d));
            	}


HX_DEFINE_DYNAMIC_FUNC1(EditorLua_obj,getBool,return )

void EditorLua_obj::stop(){
            	HX_STACKFRAME(&_hx_pos_1dd272e8491e8c9a_259_stop)
HXLINE( 261)		if (::hx::IsNull( this->lua )) {
HXLINE( 262)			return;
            		}
HXLINE( 265)		lua_close(this->lua);
HXLINE( 266)		this->lua = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(EditorLua_obj,stop,(void))

int EditorLua_obj::Function_Stop;

int EditorLua_obj::Function_Continue;


::hx::ObjectPtr< EditorLua_obj > EditorLua_obj::__new(::String script) {
	::hx::ObjectPtr< EditorLua_obj > __this = new EditorLua_obj();
	__this->__construct(script);
	return __this;
}

::hx::ObjectPtr< EditorLua_obj > EditorLua_obj::__alloc(::hx::Ctx *_hx_ctx,::String script) {
	EditorLua_obj *__this = (EditorLua_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(EditorLua_obj), true, "editors.EditorLua"));
	*(void **)__this = EditorLua_obj::_hx_vtable;
	__this->__construct(script);
	return __this;
}

EditorLua_obj::EditorLua_obj()
{
}

void EditorLua_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(EditorLua);
	HX_MARK_MEMBER_NAME(lua,"lua");
	HX_MARK_END_CLASS();
}

void EditorLua_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(lua,"lua");
}

::hx::Val EditorLua_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"lua") ) { return ::hx::Val( lua ); }
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"call") ) { return ::hx::Val( call_dyn() ); }
		if (HX_FIELD_EQ(inName,"stop") ) { return ::hx::Val( stop_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getBool") ) { return ::hx::Val( getBool_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"resultIsAllowed") ) { return ::hx::Val( resultIsAllowed_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool EditorLua_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"Function_Stop") ) { outValue = ( Function_Stop ); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"Function_Continue") ) { outValue = ( Function_Continue ); return true; }
	}
	return false;
}

::hx::Val EditorLua_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"lua") ) { lua=inValue.Cast<  cpp::Reference<lua_State> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool EditorLua_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"Function_Stop") ) { Function_Stop=ioValue.Cast< int >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"Function_Continue") ) { Function_Continue=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void EditorLua_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("lua",b8,59,52,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo EditorLua_obj_sMemberStorageInfo[] = {
	{::hx::fsUnknown /*  cpp::Reference<lua_State> */ ,(int)offsetof(EditorLua_obj,lua),HX_("lua",b8,59,52,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo EditorLua_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &EditorLua_obj::Function_Stop,HX_("Function_Stop",c9,a5,e8,d3)},
	{::hx::fsInt,(void *) &EditorLua_obj::Function_Continue,HX_("Function_Continue",ae,85,11,8b)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String EditorLua_obj_sMemberFields[] = {
	HX_("lua",b8,59,52,00),
	HX_("call",9e,18,ba,41),
	HX_("resultIsAllowed",c1,61,f6,16),
	HX_("set",a2,9b,57,00),
	HX_("getBool",e0,33,9e,13),
	HX_("stop",02,f0,5b,4c),
	::String(null()) };

static void EditorLua_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EditorLua_obj::Function_Stop,"Function_Stop");
	HX_MARK_MEMBER_NAME(EditorLua_obj::Function_Continue,"Function_Continue");
};

#ifdef HXCPP_VISIT_ALLOCS
static void EditorLua_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EditorLua_obj::Function_Stop,"Function_Stop");
	HX_VISIT_MEMBER_NAME(EditorLua_obj::Function_Continue,"Function_Continue");
};

#endif

::hx::Class EditorLua_obj::__mClass;

static ::String EditorLua_obj_sStaticFields[] = {
	HX_("Function_Stop",c9,a5,e8,d3),
	HX_("Function_Continue",ae,85,11,8b),
	::String(null())
};

void EditorLua_obj::__register()
{
	EditorLua_obj _hx_dummy;
	EditorLua_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("editors.EditorLua",a3,65,49,99);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &EditorLua_obj::__GetStatic;
	__mClass->mSetStaticField = &EditorLua_obj::__SetStatic;
	__mClass->mMarkFunc = EditorLua_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(EditorLua_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(EditorLua_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< EditorLua_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = EditorLua_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = EditorLua_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = EditorLua_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void EditorLua_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_1dd272e8491e8c9a_37_boot)
HXDLIN(  37)		Function_Stop = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_1dd272e8491e8c9a_38_boot)
HXDLIN(  38)		Function_Continue = 0;
            	}
}

} // end namespace editors
