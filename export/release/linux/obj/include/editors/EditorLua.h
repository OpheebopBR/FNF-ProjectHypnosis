#ifndef INCLUDED_editors_EditorLua
#define INCLUDED_editors_EditorLua

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_cc9afe4755847ade
#define INCLUDED_cc9afe4755847ade
#include "linc_lua.h"
#endif
HX_DECLARE_CLASS1(editors,EditorLua)

namespace editors{


class HXCPP_CLASS_ATTRIBUTES EditorLua_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef EditorLua_obj OBJ_;
		EditorLua_obj();

	public:
		enum { _hx_ClassId = 0x5fc5764d };

		void __construct(::String script);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="editors.EditorLua")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"editors.EditorLua"); }
		static ::hx::ObjectPtr< EditorLua_obj > __new(::String script);
		static ::hx::ObjectPtr< EditorLua_obj > __alloc(::hx::Ctx *_hx_ctx,::String script);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~EditorLua_obj();

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
		::String __ToString() const { return HX_("EditorLua",eb,39,88,d7); }

		static void __boot();
		static int Function_Stop;
		static int Function_Continue;
		 cpp::Reference<lua_State> lua;
		 ::Dynamic call(::String event,::cpp::VirtualArray args);
		::Dynamic call_dyn();

		bool resultIsAllowed( cpp::Reference<lua_State> leLua, ::Dynamic leResult);
		::Dynamic resultIsAllowed_dyn();

		void set(::String variable, ::Dynamic data);
		::Dynamic set_dyn();

		bool getBool(::String variable);
		::Dynamic getBool_dyn();

		void stop();
		::Dynamic stop_dyn();

};

} // end namespace editors

#endif /* INCLUDED_editors_EditorLua */ 
