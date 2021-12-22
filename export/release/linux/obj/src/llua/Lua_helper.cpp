#include <hxcpp.h>

#ifndef INCLUDED_cc9afe4755847ade
#define INCLUDED_cc9afe4755847ade
#include "linc_lua.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
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
#ifndef INCLUDED_llua_Convert
#include <llua/Convert.h>
#endif
#ifndef INCLUDED_llua_Lua_helper
#include <llua/Lua_helper.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_176a1fae691a892a_516_print_function,"llua.Lua_helper","print_function",0x45befe61,"llua.Lua_helper.print_function","llua/Lua.hx",516,0x35651a49)
HX_LOCAL_STACK_FRAME(_hx_pos_176a1fae691a892a_524_register_hxtrace,"llua.Lua_helper","register_hxtrace",0x0bdf71d0,"llua.Lua_helper.register_hxtrace","llua/Lua.hx",524,0x35651a49)
HX_LOCAL_STACK_FRAME(_hx_pos_176a1fae691a892a_533___default_trace,"llua.Lua_helper","__default_trace",0xf1154c90,"llua.Lua_helper.__default_trace","llua/Lua.hx",533,0x35651a49)
HX_LOCAL_STACK_FRAME(_hx_pos_176a1fae691a892a_539_add_callback,"llua.Lua_helper","add_callback",0xe670c8da,"llua.Lua_helper.add_callback","llua/Lua.hx",539,0x35651a49)
HX_LOCAL_STACK_FRAME(_hx_pos_176a1fae691a892a_547_remove_callback,"llua.Lua_helper","remove_callback",0xf7602ac9,"llua.Lua_helper.remove_callback","llua/Lua.hx",547,0x35651a49)
HX_LOCAL_STACK_FRAME(_hx_pos_176a1fae691a892a_555_callback_handler,"llua.Lua_helper","callback_handler",0xc7862d87,"llua.Lua_helper.callback_handler","llua/Lua.hx",555,0x35651a49)
HX_LOCAL_STACK_FRAME(_hx_pos_176a1fae691a892a_537_boot,"llua.Lua_helper","boot",0x226c2b29,"llua.Lua_helper.boot","llua/Lua.hx",537,0x35651a49)
namespace llua{

void Lua_helper_obj::__construct() { }

Dynamic Lua_helper_obj::__CreateEmpty() { return new Lua_helper_obj; }

void *Lua_helper_obj::_hx_vtable = 0;

Dynamic Lua_helper_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Lua_helper_obj > _hx_result = new Lua_helper_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Lua_helper_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7b0276d5;
}

int Lua_helper_obj::print_function(::String s){
            	HX_STACKFRAME(&_hx_pos_176a1fae691a892a_516_print_function)
HXLINE( 519)		::llua::Lua_helper_obj::trace(s,::hx::SourceInfo(HX_("llua/Lua.hx",49,1a,65,35),519,HX_("llua.Lua_helper",d7,1c,13,8b),HX_("print_function",aa,5c,49,10)));
HXLINE( 520)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lua_helper_obj,print_function,return )

void Lua_helper_obj::register_hxtrace( cpp::Reference<lua_State> l){
            	HX_STACKFRAME(&_hx_pos_176a1fae691a892a_524_register_hxtrace)
HXLINE( 526)		linc::helpers::register_hxtrace_func(::cpp::Function< int (::String)>(::hx::AnyCast(&::llua::Lua_helper_obj::print_function )));
HXLINE( 527)		linc::helpers::register_hxtrace_lib(l);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lua_helper_obj,register_hxtrace,(void))

HX_BEGIN_DEFAULT_FUNC(__default_trace,Lua_helper_obj)
void _hx_run(::String s, ::Dynamic inf){
            	HX_STACKFRAME(&_hx_pos_176a1fae691a892a_533___default_trace)
HXDLIN( 533)		::haxe::Log_obj::trace(s,::hx::SourceInfo(HX_("llua/Lua.hx",49,1a,65,35),533,HX_("llua.Lua_helper",d7,1c,13,8b),HX_("trace",85,8e,1f,16)));
            	}
HX_END_LOCAL_FUNC2((void))
HX_END_DEFAULT_FUNC

::Dynamic Lua_helper_obj::trace;

 ::haxe::ds::StringMap Lua_helper_obj::callbacks;

bool Lua_helper_obj::add_callback( cpp::Reference<lua_State> l,::String fname, ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_176a1fae691a892a_539_add_callback)
HXLINE( 541)		::llua::Lua_helper_obj::callbacks->set(fname,f);
HXLINE( 542)		linc::callbacks::add_callback_function(l,fname);
HXLINE( 543)		return true;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Lua_helper_obj,add_callback,return )

bool Lua_helper_obj::remove_callback( cpp::Reference<lua_State> l,::String fname){
            	HX_STACKFRAME(&_hx_pos_176a1fae691a892a_547_remove_callback)
HXLINE( 549)		::llua::Lua_helper_obj::callbacks->remove(fname);
HXLINE( 550)		linc::callbacks::remove_callback_function(l,fname);
HXLINE( 551)		return true;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Lua_helper_obj,remove_callback,return )

int Lua_helper_obj::callback_handler( cpp::Reference<lua_State> l,::String fname){
            	HX_STACKFRAME(&_hx_pos_176a1fae691a892a_555_callback_handler)
HXLINE( 557)		 ::Dynamic cbf = ::llua::Lua_helper_obj::callbacks->get(fname);
HXLINE( 559)		if (::hx::IsNull( cbf )) {
HXLINE( 560)			return 0;
            		}
HXLINE( 563)		int nparams = lua_gettop(l);
HXLINE( 564)		::cpp::VirtualArray args = ::cpp::VirtualArray_obj::__new(0);
HXLINE( 566)		{
HXLINE( 566)			int _g = 0;
HXDLIN( 566)			int _g1 = nparams;
HXDLIN( 566)			while((_g < _g1)){
HXLINE( 566)				_g = (_g + 1);
HXDLIN( 566)				int i = (_g - 1);
HXLINE( 567)				int v = (i + 1);
HXDLIN( 567)				 ::Dynamic ret = null();
HXDLIN( 567)				switch((int)(lua_type(l,v))){
            					case (int)0: {
HXLINE( 567)						ret = null();
            					}
            					break;
            					case (int)1: {
HXLINE( 567)						ret = (lua_toboolean(l,v) != 0);
            					}
            					break;
            					case (int)3: {
HXLINE( 567)						ret = lua_tonumber(l,v);
            					}
            					break;
            					case (int)4: {
HXLINE( 567)						ret = linc::lua::tostring(l,v);
            					}
            					break;
            					case (int)5: {
HXLINE( 567)						bool array = true;
HXDLIN( 567)						 ::Dynamic ret1 = null();
HXDLIN( 567)						lua_pushnil(l);
HXDLIN( 567)						while((lua_next(l,-2) != 0)){
HXLINE( 567)							if ((lua_type(l,-2) != 3)) {
HXLINE( 567)								array = false;
HXDLIN( 567)								lua_pop(l,2);
HXDLIN( 567)								goto _hx_goto_6;
            							}
HXDLIN( 567)							Float n = lua_tonumber(l,-2);
HXDLIN( 567)							if ((n != ::Std_obj::_hx_int(n))) {
HXLINE( 567)								array = false;
HXDLIN( 567)								lua_pop(l,2);
HXDLIN( 567)								goto _hx_goto_6;
            							}
HXDLIN( 567)							lua_pop(l,1);
            						}
            						_hx_goto_6:;
HXDLIN( 567)						if (array) {
HXLINE( 567)							::cpp::VirtualArray arr = ::cpp::VirtualArray_obj::__new(0);
HXDLIN( 567)							lua_pushnil(l);
HXDLIN( 567)							while((lua_next(l,-2) != 0)){
HXLINE( 567)								int index = (lua_tointeger(l,-2) - 1);
HXDLIN( 567)								 ::Dynamic ret = null();
HXDLIN( 567)								switch((int)(lua_type(l,-1))){
            									case (int)0: {
HXLINE( 567)										ret = null();
            									}
            									break;
            									case (int)1: {
HXLINE( 567)										ret = (lua_toboolean(l,-1) != 0);
            									}
            									break;
            									case (int)3: {
HXLINE( 567)										ret = lua_tonumber(l,-1);
            									}
            									break;
            									case (int)4: {
HXLINE( 567)										ret = linc::lua::tostring(l,-1);
            									}
            									break;
            									case (int)5: {
HXLINE( 567)										bool array = true;
HXDLIN( 567)										 ::Dynamic ret1 = null();
HXDLIN( 567)										lua_pushnil(l);
HXDLIN( 567)										while((lua_next(l,-2) != 0)){
HXLINE( 567)											if ((lua_type(l,-2) != 3)) {
HXLINE( 567)												array = false;
HXDLIN( 567)												lua_pop(l,2);
HXDLIN( 567)												goto _hx_goto_8;
            											}
HXDLIN( 567)											Float n = lua_tonumber(l,-2);
HXDLIN( 567)											if ((n != ::Std_obj::_hx_int(n))) {
HXLINE( 567)												array = false;
HXDLIN( 567)												lua_pop(l,2);
HXDLIN( 567)												goto _hx_goto_8;
            											}
HXDLIN( 567)											lua_pop(l,1);
            										}
            										_hx_goto_8:;
HXDLIN( 567)										if (array) {
HXLINE( 567)											::cpp::VirtualArray arr = ::cpp::VirtualArray_obj::__new(0);
HXDLIN( 567)											lua_pushnil(l);
HXDLIN( 567)											while((lua_next(l,-2) != 0)){
HXLINE( 567)												int index = (lua_tointeger(l,-2) - 1);
HXDLIN( 567)												arr->set(index,::llua::Convert_obj::fromLua(l,-1));
HXDLIN( 567)												lua_pop(l,1);
            											}
HXDLIN( 567)											ret1 = arr;
            										}
            										else {
HXLINE( 567)											 hx::Anon obj = hx::Anon_obj::Create();
HXDLIN( 567)											lua_pushnil(l);
HXDLIN( 567)											while((lua_next(l,-2) != 0)){
HXLINE( 567)												::String ret = ::Std_obj::string(::llua::Convert_obj::fromLua(l,-2));
HXDLIN( 567)												obj->hx::Anon_obj::Add(ret,::llua::Convert_obj::fromLua(l,-1));
HXDLIN( 567)												lua_pop(l,1);
            											}
HXDLIN( 567)											ret1 = obj;
            										}
HXDLIN( 567)										ret = ret1;
            									}
            									break;
            									default:{
HXLINE( 567)										ret = null();
HXDLIN( 567)										::haxe::Log_obj::trace(HX_("return value not supported\n",48,41,fb,c8),::hx::SourceInfo(HX_("llua/Convert.hx",6e,6a,e3,49),96,HX_("llua.Convert",31,b8,44,19),HX_("fromLua",6e,2a,fd,57)));
            									}
            								}
HXDLIN( 567)								arr->set(index,ret);
HXDLIN( 567)								lua_pop(l,1);
            							}
HXDLIN( 567)							ret1 = arr;
            						}
            						else {
HXLINE( 567)							 hx::Anon obj = hx::Anon_obj::Create();
HXDLIN( 567)							lua_pushnil(l);
HXDLIN( 567)							while((lua_next(l,-2) != 0)){
HXLINE( 567)								 ::Dynamic ret = null();
HXDLIN( 567)								switch((int)(lua_type(l,-2))){
            									case (int)0: {
HXLINE( 567)										ret = null();
            									}
            									break;
            									case (int)1: {
HXLINE( 567)										ret = (lua_toboolean(l,-2) != 0);
            									}
            									break;
            									case (int)3: {
HXLINE( 567)										ret = lua_tonumber(l,-2);
            									}
            									break;
            									case (int)4: {
HXLINE( 567)										ret = linc::lua::tostring(l,-2);
            									}
            									break;
            									case (int)5: {
HXLINE( 567)										bool array = true;
HXDLIN( 567)										 ::Dynamic ret1 = null();
HXDLIN( 567)										lua_pushnil(l);
HXDLIN( 567)										while((lua_next(l,-2) != 0)){
HXLINE( 567)											if ((lua_type(l,-2) != 3)) {
HXLINE( 567)												array = false;
HXDLIN( 567)												lua_pop(l,2);
HXDLIN( 567)												goto _hx_goto_12;
            											}
HXDLIN( 567)											Float n = lua_tonumber(l,-2);
HXDLIN( 567)											if ((n != ::Std_obj::_hx_int(n))) {
HXLINE( 567)												array = false;
HXDLIN( 567)												lua_pop(l,2);
HXDLIN( 567)												goto _hx_goto_12;
            											}
HXDLIN( 567)											lua_pop(l,1);
            										}
            										_hx_goto_12:;
HXDLIN( 567)										if (array) {
HXLINE( 567)											::cpp::VirtualArray arr = ::cpp::VirtualArray_obj::__new(0);
HXDLIN( 567)											lua_pushnil(l);
HXDLIN( 567)											while((lua_next(l,-2) != 0)){
HXLINE( 567)												int index = (lua_tointeger(l,-2) - 1);
HXDLIN( 567)												 ::Dynamic ret = null();
HXDLIN( 567)												switch((int)(lua_type(l,-1))){
            													case (int)0: {
HXLINE( 567)														ret = null();
            													}
            													break;
            													case (int)1: {
HXLINE( 567)														ret = (lua_toboolean(l,-1) != 0);
            													}
            													break;
            													case (int)3: {
HXLINE( 567)														ret = lua_tonumber(l,-1);
            													}
            													break;
            													case (int)4: {
HXLINE( 567)														ret = linc::lua::tostring(l,-1);
            													}
            													break;
            													case (int)5: {
HXLINE( 567)														bool array = true;
HXDLIN( 567)														 ::Dynamic ret1 = null();
HXDLIN( 567)														lua_pushnil(l);
HXDLIN( 567)														while((lua_next(l,-2) != 0)){
HXLINE( 567)															if ((lua_type(l,-2) != 3)) {
HXLINE( 567)																array = false;
HXDLIN( 567)																lua_pop(l,2);
HXDLIN( 567)																goto _hx_goto_14;
            															}
HXDLIN( 567)															Float n = lua_tonumber(l,-2);
HXDLIN( 567)															if ((n != ::Std_obj::_hx_int(n))) {
HXLINE( 567)																array = false;
HXDLIN( 567)																lua_pop(l,2);
HXDLIN( 567)																goto _hx_goto_14;
            															}
HXDLIN( 567)															lua_pop(l,1);
            														}
            														_hx_goto_14:;
HXDLIN( 567)														if (array) {
HXLINE( 567)															::cpp::VirtualArray arr = ::cpp::VirtualArray_obj::__new(0);
HXDLIN( 567)															lua_pushnil(l);
HXDLIN( 567)															while((lua_next(l,-2) != 0)){
HXLINE( 567)																int index = (lua_tointeger(l,-2) - 1);
HXDLIN( 567)																arr->set(index,::llua::Convert_obj::fromLua(l,-1));
HXDLIN( 567)																lua_pop(l,1);
            															}
HXDLIN( 567)															ret1 = arr;
            														}
            														else {
HXLINE( 567)															 hx::Anon obj = hx::Anon_obj::Create();
HXDLIN( 567)															lua_pushnil(l);
HXDLIN( 567)															while((lua_next(l,-2) != 0)){
HXLINE( 567)																::String ret = ::Std_obj::string(::llua::Convert_obj::fromLua(l,-2));
HXDLIN( 567)																obj->hx::Anon_obj::Add(ret,::llua::Convert_obj::fromLua(l,-1));
HXDLIN( 567)																lua_pop(l,1);
            															}
HXDLIN( 567)															ret1 = obj;
            														}
HXDLIN( 567)														ret = ret1;
            													}
            													break;
            													default:{
HXLINE( 567)														ret = null();
HXDLIN( 567)														::haxe::Log_obj::trace(HX_("return value not supported\n",48,41,fb,c8),::hx::SourceInfo(HX_("llua/Convert.hx",6e,6a,e3,49),96,HX_("llua.Convert",31,b8,44,19),HX_("fromLua",6e,2a,fd,57)));
            													}
            												}
HXDLIN( 567)												arr->set(index,ret);
HXDLIN( 567)												lua_pop(l,1);
            											}
HXDLIN( 567)											ret1 = arr;
            										}
            										else {
HXLINE( 567)											 hx::Anon obj = hx::Anon_obj::Create();
HXDLIN( 567)											lua_pushnil(l);
HXDLIN( 567)											while((lua_next(l,-2) != 0)){
HXLINE( 567)												 ::Dynamic ret = null();
HXDLIN( 567)												switch((int)(lua_type(l,-2))){
            													case (int)0: {
HXLINE( 567)														ret = null();
            													}
            													break;
            													case (int)1: {
HXLINE( 567)														ret = (lua_toboolean(l,-2) != 0);
            													}
            													break;
            													case (int)3: {
HXLINE( 567)														ret = lua_tonumber(l,-2);
            													}
            													break;
            													case (int)4: {
HXLINE( 567)														ret = linc::lua::tostring(l,-2);
            													}
            													break;
            													case (int)5: {
HXLINE( 567)														bool array = true;
HXDLIN( 567)														 ::Dynamic ret1 = null();
HXDLIN( 567)														lua_pushnil(l);
HXDLIN( 567)														while((lua_next(l,-2) != 0)){
HXLINE( 567)															if ((lua_type(l,-2) != 3)) {
HXLINE( 567)																array = false;
HXDLIN( 567)																lua_pop(l,2);
HXDLIN( 567)																goto _hx_goto_18;
            															}
HXDLIN( 567)															Float n = lua_tonumber(l,-2);
HXDLIN( 567)															if ((n != ::Std_obj::_hx_int(n))) {
HXLINE( 567)																array = false;
HXDLIN( 567)																lua_pop(l,2);
HXDLIN( 567)																goto _hx_goto_18;
            															}
HXDLIN( 567)															lua_pop(l,1);
            														}
            														_hx_goto_18:;
HXDLIN( 567)														if (array) {
HXLINE( 567)															::cpp::VirtualArray arr = ::cpp::VirtualArray_obj::__new(0);
HXDLIN( 567)															lua_pushnil(l);
HXDLIN( 567)															while((lua_next(l,-2) != 0)){
HXLINE( 567)																int index = (lua_tointeger(l,-2) - 1);
HXDLIN( 567)																arr->set(index,::llua::Convert_obj::fromLua(l,-1));
HXDLIN( 567)																lua_pop(l,1);
            															}
HXDLIN( 567)															ret1 = arr;
            														}
            														else {
HXLINE( 567)															 hx::Anon obj = hx::Anon_obj::Create();
HXDLIN( 567)															lua_pushnil(l);
HXDLIN( 567)															while((lua_next(l,-2) != 0)){
HXLINE( 567)																::String ret = ::Std_obj::string(::llua::Convert_obj::fromLua(l,-2));
HXDLIN( 567)																obj->hx::Anon_obj::Add(ret,::llua::Convert_obj::fromLua(l,-1));
HXDLIN( 567)																lua_pop(l,1);
            															}
HXDLIN( 567)															ret1 = obj;
            														}
HXDLIN( 567)														ret = ret1;
            													}
            													break;
            													default:{
HXLINE( 567)														ret = null();
HXDLIN( 567)														::haxe::Log_obj::trace(HX_("return value not supported\n",48,41,fb,c8),::hx::SourceInfo(HX_("llua/Convert.hx",6e,6a,e3,49),96,HX_("llua.Convert",31,b8,44,19),HX_("fromLua",6e,2a,fd,57)));
            													}
            												}
HXDLIN( 567)												::String ret1 = ::Std_obj::string(ret);
HXDLIN( 567)												 ::Dynamic ret2 = null();
HXDLIN( 567)												switch((int)(lua_type(l,-1))){
            													case (int)0: {
HXLINE( 567)														ret2 = null();
            													}
            													break;
            													case (int)1: {
HXLINE( 567)														ret2 = (lua_toboolean(l,-1) != 0);
            													}
            													break;
            													case (int)3: {
HXLINE( 567)														ret2 = lua_tonumber(l,-1);
            													}
            													break;
            													case (int)4: {
HXLINE( 567)														ret2 = linc::lua::tostring(l,-1);
            													}
            													break;
            													case (int)5: {
HXLINE( 567)														bool array = true;
HXDLIN( 567)														 ::Dynamic ret = null();
HXDLIN( 567)														lua_pushnil(l);
HXDLIN( 567)														while((lua_next(l,-2) != 0)){
HXLINE( 567)															if ((lua_type(l,-2) != 3)) {
HXLINE( 567)																array = false;
HXDLIN( 567)																lua_pop(l,2);
HXDLIN( 567)																goto _hx_goto_21;
            															}
HXDLIN( 567)															Float n = lua_tonumber(l,-2);
HXDLIN( 567)															if ((n != ::Std_obj::_hx_int(n))) {
HXLINE( 567)																array = false;
HXDLIN( 567)																lua_pop(l,2);
HXDLIN( 567)																goto _hx_goto_21;
            															}
HXDLIN( 567)															lua_pop(l,1);
            														}
            														_hx_goto_21:;
HXDLIN( 567)														if (array) {
HXLINE( 567)															::cpp::VirtualArray arr = ::cpp::VirtualArray_obj::__new(0);
HXDLIN( 567)															lua_pushnil(l);
HXDLIN( 567)															while((lua_next(l,-2) != 0)){
HXLINE( 567)																int index = (lua_tointeger(l,-2) - 1);
HXDLIN( 567)																arr->set(index,::llua::Convert_obj::fromLua(l,-1));
HXDLIN( 567)																lua_pop(l,1);
            															}
HXDLIN( 567)															ret = arr;
            														}
            														else {
HXLINE( 567)															 hx::Anon obj = hx::Anon_obj::Create();
HXDLIN( 567)															lua_pushnil(l);
HXDLIN( 567)															while((lua_next(l,-2) != 0)){
HXLINE( 567)																::String ret = ::Std_obj::string(::llua::Convert_obj::fromLua(l,-2));
HXDLIN( 567)																obj->hx::Anon_obj::Add(ret,::llua::Convert_obj::fromLua(l,-1));
HXDLIN( 567)																lua_pop(l,1);
            															}
HXDLIN( 567)															ret = obj;
            														}
HXDLIN( 567)														ret2 = ret;
            													}
            													break;
            													default:{
HXLINE( 567)														ret2 = null();
HXDLIN( 567)														::haxe::Log_obj::trace(HX_("return value not supported\n",48,41,fb,c8),::hx::SourceInfo(HX_("llua/Convert.hx",6e,6a,e3,49),96,HX_("llua.Convert",31,b8,44,19),HX_("fromLua",6e,2a,fd,57)));
            													}
            												}
HXDLIN( 567)												obj->hx::Anon_obj::Add(ret1,ret2);
HXDLIN( 567)												lua_pop(l,1);
            											}
HXDLIN( 567)											ret1 = obj;
            										}
HXDLIN( 567)										ret = ret1;
            									}
            									break;
            									default:{
HXLINE( 567)										ret = null();
HXDLIN( 567)										::haxe::Log_obj::trace(HX_("return value not supported\n",48,41,fb,c8),::hx::SourceInfo(HX_("llua/Convert.hx",6e,6a,e3,49),96,HX_("llua.Convert",31,b8,44,19),HX_("fromLua",6e,2a,fd,57)));
            									}
            								}
HXDLIN( 567)								::String ret1 = ::Std_obj::string(ret);
HXDLIN( 567)								 ::Dynamic ret2 = null();
HXDLIN( 567)								switch((int)(lua_type(l,-1))){
            									case (int)0: {
HXLINE( 567)										ret2 = null();
            									}
            									break;
            									case (int)1: {
HXLINE( 567)										ret2 = (lua_toboolean(l,-1) != 0);
            									}
            									break;
            									case (int)3: {
HXLINE( 567)										ret2 = lua_tonumber(l,-1);
            									}
            									break;
            									case (int)4: {
HXLINE( 567)										ret2 = linc::lua::tostring(l,-1);
            									}
            									break;
            									case (int)5: {
HXLINE( 567)										bool array = true;
HXDLIN( 567)										 ::Dynamic ret = null();
HXDLIN( 567)										lua_pushnil(l);
HXDLIN( 567)										while((lua_next(l,-2) != 0)){
HXLINE( 567)											if ((lua_type(l,-2) != 3)) {
HXLINE( 567)												array = false;
HXDLIN( 567)												lua_pop(l,2);
HXDLIN( 567)												goto _hx_goto_24;
            											}
HXDLIN( 567)											Float n = lua_tonumber(l,-2);
HXDLIN( 567)											if ((n != ::Std_obj::_hx_int(n))) {
HXLINE( 567)												array = false;
HXDLIN( 567)												lua_pop(l,2);
HXDLIN( 567)												goto _hx_goto_24;
            											}
HXDLIN( 567)											lua_pop(l,1);
            										}
            										_hx_goto_24:;
HXDLIN( 567)										if (array) {
HXLINE( 567)											::cpp::VirtualArray arr = ::cpp::VirtualArray_obj::__new(0);
HXDLIN( 567)											lua_pushnil(l);
HXDLIN( 567)											while((lua_next(l,-2) != 0)){
HXLINE( 567)												int index = (lua_tointeger(l,-2) - 1);
HXDLIN( 567)												arr->set(index,::llua::Convert_obj::fromLua(l,-1));
HXDLIN( 567)												lua_pop(l,1);
            											}
HXDLIN( 567)											ret = arr;
            										}
            										else {
HXLINE( 567)											 hx::Anon obj = hx::Anon_obj::Create();
HXDLIN( 567)											lua_pushnil(l);
HXDLIN( 567)											while((lua_next(l,-2) != 0)){
HXLINE( 567)												::String ret = ::Std_obj::string(::llua::Convert_obj::fromLua(l,-2));
HXDLIN( 567)												obj->hx::Anon_obj::Add(ret,::llua::Convert_obj::fromLua(l,-1));
HXDLIN( 567)												lua_pop(l,1);
            											}
HXDLIN( 567)											ret = obj;
            										}
HXDLIN( 567)										ret2 = ret;
            									}
            									break;
            									default:{
HXLINE( 567)										ret2 = null();
HXDLIN( 567)										::haxe::Log_obj::trace(HX_("return value not supported\n",48,41,fb,c8),::hx::SourceInfo(HX_("llua/Convert.hx",6e,6a,e3,49),96,HX_("llua.Convert",31,b8,44,19),HX_("fromLua",6e,2a,fd,57)));
            									}
            								}
HXDLIN( 567)								obj->hx::Anon_obj::Add(ret1,ret2);
HXDLIN( 567)								lua_pop(l,1);
            							}
HXDLIN( 567)							ret1 = obj;
            						}
HXDLIN( 567)						ret = ret1;
            					}
            					break;
            					default:{
HXLINE( 567)						ret = null();
HXDLIN( 567)						::haxe::Log_obj::trace(HX_("return value not supported\n",48,41,fb,c8),::hx::SourceInfo(HX_("llua/Convert.hx",6e,6a,e3,49),96,HX_("llua.Convert",31,b8,44,19),HX_("fromLua",6e,2a,fd,57)));
            					}
            				}
HXDLIN( 567)				args->set(i,ret);
            			}
            		}
HXLINE( 570)		 ::Dynamic ret = null();
HXLINE( 572)		switch((int)(nparams)){
            			case (int)0: {
HXLINE( 574)				ret = cbf();
            			}
            			break;
            			case (int)1: {
HXLINE( 576)				ret = cbf(args->__get(0));
            			}
            			break;
            			case (int)2: {
HXLINE( 578)				ret = cbf(args->__get(0),args->__get(1));
            			}
            			break;
            			case (int)3: {
HXLINE( 580)				ret = cbf(args->__get(0),args->__get(1),args->__get(2));
            			}
            			break;
            			case (int)4: {
HXLINE( 582)				ret = cbf(args->__get(0),args->__get(1),args->__get(2),args->__get(3));
            			}
            			break;
            			case (int)5: {
HXLINE( 584)				ret = cbf(args->__get(0),args->__get(1),args->__get(2),args->__get(3),args->__get(4));
            			}
            			break;
            			default:{
HXLINE( 586)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("> 5 arguments is not supported",62,23,e5,68)));
            			}
            		}
HXLINE( 589)		if (::hx::IsNotNull( ret )) {
HXLINE( 590)			::llua::Convert_obj::toLua(l,ret);
            		}
HXLINE( 594)		return 1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Lua_helper_obj,callback_handler,return )


Lua_helper_obj::Lua_helper_obj()
{
}

bool Lua_helper_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"trace") ) { outValue = ( trace ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"callbacks") ) { outValue = ( callbacks ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"add_callback") ) { outValue = add_callback_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"print_function") ) { outValue = print_function_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"remove_callback") ) { outValue = remove_callback_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"register_hxtrace") ) { outValue = register_hxtrace_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"callback_handler") ) { outValue = callback_handler_dyn(); return true; }
	}
	return false;
}

bool Lua_helper_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"trace") ) { trace=ioValue.Cast<  ::Dynamic >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"callbacks") ) { callbacks=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Lua_helper_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Lua_helper_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &Lua_helper_obj::trace,HX_("trace",85,8e,1f,16)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &Lua_helper_obj::callbacks,HX_("callbacks",0e,f3,bf,a6)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Lua_helper_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Lua_helper_obj::trace,"trace");
	HX_MARK_MEMBER_NAME(Lua_helper_obj::callbacks,"callbacks");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Lua_helper_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Lua_helper_obj::trace,"trace");
	HX_VISIT_MEMBER_NAME(Lua_helper_obj::callbacks,"callbacks");
};

#endif

::hx::Class Lua_helper_obj::__mClass;

static ::String Lua_helper_obj_sStaticFields[] = {
	HX_("print_function",aa,5c,49,10),
	HX_("register_hxtrace",59,b4,74,54),
	HX_("trace",85,8e,1f,16),
	HX_("callbacks",0e,f3,bf,a6),
	HX_("add_callback",e3,d2,1d,24),
	HX_("remove_callback",60,4c,e8,65),
	HX_("callback_handler",10,70,1b,10),
	::String(null())
};

void Lua_helper_obj::__register()
{
	Lua_helper_obj _hx_dummy;
	Lua_helper_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("llua.Lua_helper",d7,1c,13,8b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Lua_helper_obj::__GetStatic;
	__mClass->mSetStaticField = &Lua_helper_obj::__SetStatic;
	__mClass->mMarkFunc = Lua_helper_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Lua_helper_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Lua_helper_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Lua_helper_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Lua_helper_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Lua_helper_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Lua_helper_obj::__boot()
{
	trace = new __default_trace;

{
            	HX_GC_STACKFRAME(&_hx_pos_176a1fae691a892a_537_boot)
HXDLIN( 537)		callbacks =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}
}

} // end namespace llua
