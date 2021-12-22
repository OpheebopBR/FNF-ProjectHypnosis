#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_PluginFrontEnd
#include <flixel/system/frontEnds/PluginFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTweenManager
#include <flixel/tweens/FlxTweenManager.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_4a20ba41f30cf210_15_new,"flixel.system.frontEnds.PluginFrontEnd","new",0x6ca9c2b1,"flixel.system.frontEnds.PluginFrontEnd.new","flixel/system/frontEnds/PluginFrontEnd.hx",15,0xbff70e9e)
HX_LOCAL_STACK_FRAME(_hx_pos_4a20ba41f30cf210_30_add_flixel_tweens_FlxTweenManager,"flixel.system.frontEnds.PluginFrontEnd","add_flixel_tweens_FlxTweenManager",0xfdb05bd3,"flixel.system.frontEnds.PluginFrontEnd.add_flixel_tweens_FlxTweenManager","flixel/system/frontEnds/PluginFrontEnd.hx",30,0xbff70e9e)
HX_LOCAL_STACK_FRAME(_hx_pos_4a20ba41f30cf210_30_add_flixel_util_FlxTimerManager,"flixel.system.frontEnds.PluginFrontEnd","add_flixel_util_FlxTimerManager",0x16f6f493,"flixel.system.frontEnds.PluginFrontEnd.add_flixel_util_FlxTimerManager","flixel/system/frontEnds/PluginFrontEnd.hx",30,0xbff70e9e)
HX_LOCAL_STACK_FRAME(_hx_pos_4a20ba41f30cf210_52_get,"flixel.system.frontEnds.PluginFrontEnd","get",0x6ca472e7,"flixel.system.frontEnds.PluginFrontEnd.get","flixel/system/frontEnds/PluginFrontEnd.hx",52,0xbff70e9e)
HX_LOCAL_STACK_FRAME(_hx_pos_4a20ba41f30cf210_71_remove,"flixel.system.frontEnds.PluginFrontEnd","remove",0x66803293,"flixel.system.frontEnds.PluginFrontEnd.remove","flixel/system/frontEnds/PluginFrontEnd.hx",71,0xbff70e9e)
HX_LOCAL_STACK_FRAME(_hx_pos_4a20ba41f30cf210_95_removeType,"flixel.system.frontEnds.PluginFrontEnd","removeType",0x8b4a96ed,"flixel.system.frontEnds.PluginFrontEnd.removeType","flixel/system/frontEnds/PluginFrontEnd.hx",95,0xbff70e9e)
HX_LOCAL_STACK_FRAME(_hx_pos_4a20ba41f30cf210_126_update,"flixel.system.frontEnds.PluginFrontEnd","update",0xe8fd1c58,"flixel.system.frontEnds.PluginFrontEnd.update","flixel/system/frontEnds/PluginFrontEnd.hx",126,0xbff70e9e)
HX_LOCAL_STACK_FRAME(_hx_pos_4a20ba41f30cf210_141_draw,"flixel.system.frontEnds.PluginFrontEnd","draw",0xa14e4093,"flixel.system.frontEnds.PluginFrontEnd.draw","flixel/system/frontEnds/PluginFrontEnd.hx",141,0xbff70e9e)
namespace flixel{
namespace _hx_system{
namespace frontEnds{

void PluginFrontEnd_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_4a20ba41f30cf210_15_new)
HXLINE(  20)		this->list = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 116)		this->add_flixel_util_FlxTimerManager((::flixel::util::FlxTimer_obj::globalManager =  ::flixel::util::FlxTimerManager_obj::__alloc( HX_CTX )));
HXLINE( 117)		this->add_flixel_tweens_FlxTweenManager((::flixel::tweens::FlxTween_obj::globalManager =  ::flixel::tweens::FlxTweenManager_obj::__alloc( HX_CTX )));
            	}

Dynamic PluginFrontEnd_obj::__CreateEmpty() { return new PluginFrontEnd_obj; }

void *PluginFrontEnd_obj::_hx_vtable = 0;

Dynamic PluginFrontEnd_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PluginFrontEnd_obj > _hx_result = new PluginFrontEnd_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool PluginFrontEnd_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4da9793b;
}

 ::flixel::tweens::FlxTweenManager PluginFrontEnd_obj::add_flixel_tweens_FlxTweenManager( ::flixel::tweens::FlxTweenManager Plugin){
            	HX_STACKFRAME(&_hx_pos_4a20ba41f30cf210_30_add_flixel_tweens_FlxTweenManager)
HXLINE(  32)		{
HXLINE(  32)			int _g = 0;
HXDLIN(  32)			::Array< ::Dynamic> _g1 = this->list;
HXDLIN(  32)			while((_g < _g1->length)){
HXLINE(  32)				 ::flixel::FlxBasic plugin = _g1->__get(_g).StaticCast<  ::flixel::FlxBasic >();
HXDLIN(  32)				_g = (_g + 1);
HXLINE(  34)				bool Simple = true;
HXDLIN(  34)				::String _hx_tmp = ::flixel::util::FlxStringUtil_obj::getClassName(Plugin,Simple);
HXDLIN(  34)				if ((_hx_tmp == ::flixel::util::FlxStringUtil_obj::getClassName(plugin,Simple))) {
HXLINE(  36)					return Plugin;
            				}
            			}
            		}
HXLINE(  41)		this->list->push(Plugin);
HXLINE(  42)		return Plugin;
            	}


HX_DEFINE_DYNAMIC_FUNC1(PluginFrontEnd_obj,add_flixel_tweens_FlxTweenManager,return )

 ::flixel::util::FlxTimerManager PluginFrontEnd_obj::add_flixel_util_FlxTimerManager( ::flixel::util::FlxTimerManager Plugin){
            	HX_STACKFRAME(&_hx_pos_4a20ba41f30cf210_30_add_flixel_util_FlxTimerManager)
HXLINE(  32)		{
HXLINE(  32)			int _g = 0;
HXDLIN(  32)			::Array< ::Dynamic> _g1 = this->list;
HXDLIN(  32)			while((_g < _g1->length)){
HXLINE(  32)				 ::flixel::FlxBasic plugin = _g1->__get(_g).StaticCast<  ::flixel::FlxBasic >();
HXDLIN(  32)				_g = (_g + 1);
HXLINE(  34)				bool Simple = true;
HXDLIN(  34)				::String _hx_tmp = ::flixel::util::FlxStringUtil_obj::getClassName(Plugin,Simple);
HXDLIN(  34)				if ((_hx_tmp == ::flixel::util::FlxStringUtil_obj::getClassName(plugin,Simple))) {
HXLINE(  36)					return Plugin;
            				}
            			}
            		}
HXLINE(  41)		this->list->push(Plugin);
HXLINE(  42)		return Plugin;
            	}


HX_DEFINE_DYNAMIC_FUNC1(PluginFrontEnd_obj,add_flixel_util_FlxTimerManager,return )

 ::Dynamic PluginFrontEnd_obj::get(::hx::Class ClassType){
            	HX_STACKFRAME(&_hx_pos_4a20ba41f30cf210_52_get)
HXLINE(  53)		{
HXLINE(  53)			int _g = 0;
HXDLIN(  53)			::Array< ::Dynamic> _g1 = this->list;
HXDLIN(  53)			while((_g < _g1->length)){
HXLINE(  53)				 ::flixel::FlxBasic plugin = _g1->__get(_g).StaticCast<  ::flixel::FlxBasic >();
HXDLIN(  53)				_g = (_g + 1);
HXLINE(  55)				if (::Std_obj::isOfType(plugin,ClassType)) {
HXLINE(  57)					return plugin;
            				}
            			}
            		}
HXLINE(  61)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(PluginFrontEnd_obj,get,return )

 ::Dynamic PluginFrontEnd_obj::remove( ::Dynamic Plugin){
            	HX_STACKFRAME(&_hx_pos_4a20ba41f30cf210_71_remove)
HXLINE(  73)		int i = (this->list->length - 1);
HXLINE(  75)		while((i >= 0)){
HXLINE(  77)			if (::hx::IsInstanceEq( this->list->__get(i).StaticCast<  ::flixel::FlxBasic >(),Plugin )) {
HXLINE(  79)				this->list->removeRange(i,1);
HXLINE(  80)				return Plugin;
            			}
HXLINE(  82)			i = (i - 1);
            		}
HXLINE(  85)		return Plugin;
            	}


HX_DEFINE_DYNAMIC_FUNC1(PluginFrontEnd_obj,remove,return )

bool PluginFrontEnd_obj::removeType(::hx::Class ClassType){
            	HX_STACKFRAME(&_hx_pos_4a20ba41f30cf210_95_removeType)
HXLINE(  97)		bool results = false;
HXLINE(  98)		int i = (this->list->length - 1);
HXLINE( 100)		while((i >= 0)){
HXLINE( 102)			if (::Std_obj::isOfType(this->list->__get(i).StaticCast<  ::flixel::FlxBasic >(),ClassType)) {
HXLINE( 104)				this->list->removeRange(i,1);
HXLINE( 105)				results = true;
            			}
HXLINE( 107)			i = (i - 1);
            		}
HXLINE( 110)		return results;
            	}


HX_DEFINE_DYNAMIC_FUNC1(PluginFrontEnd_obj,removeType,return )

void PluginFrontEnd_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_4a20ba41f30cf210_126_update)
HXDLIN( 126)		int _g = 0;
HXDLIN( 126)		::Array< ::Dynamic> _g1 = this->list;
HXDLIN( 126)		while((_g < _g1->length)){
HXDLIN( 126)			 ::flixel::FlxBasic plugin = _g1->__get(_g).StaticCast<  ::flixel::FlxBasic >();
HXDLIN( 126)			_g = (_g + 1);
HXLINE( 128)			bool _hx_tmp;
HXDLIN( 128)			if (plugin->exists) {
HXLINE( 128)				_hx_tmp = plugin->active;
            			}
            			else {
HXLINE( 128)				_hx_tmp = false;
            			}
HXDLIN( 128)			if (_hx_tmp) {
HXLINE( 130)				plugin->update(elapsed);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(PluginFrontEnd_obj,update,(void))

void PluginFrontEnd_obj::draw(){
            	HX_STACKFRAME(&_hx_pos_4a20ba41f30cf210_141_draw)
HXDLIN( 141)		int _g = 0;
HXDLIN( 141)		::Array< ::Dynamic> _g1 = this->list;
HXDLIN( 141)		while((_g < _g1->length)){
HXDLIN( 141)			 ::flixel::FlxBasic plugin = _g1->__get(_g).StaticCast<  ::flixel::FlxBasic >();
HXDLIN( 141)			_g = (_g + 1);
HXLINE( 143)			bool _hx_tmp;
HXDLIN( 143)			if (plugin->exists) {
HXLINE( 143)				_hx_tmp = plugin->visible;
            			}
            			else {
HXLINE( 143)				_hx_tmp = false;
            			}
HXDLIN( 143)			if (_hx_tmp) {
HXLINE( 145)				plugin->draw();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(PluginFrontEnd_obj,draw,(void))


::hx::ObjectPtr< PluginFrontEnd_obj > PluginFrontEnd_obj::__new() {
	::hx::ObjectPtr< PluginFrontEnd_obj > __this = new PluginFrontEnd_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< PluginFrontEnd_obj > PluginFrontEnd_obj::__alloc(::hx::Ctx *_hx_ctx) {
	PluginFrontEnd_obj *__this = (PluginFrontEnd_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PluginFrontEnd_obj), true, "flixel.system.frontEnds.PluginFrontEnd"));
	*(void **)__this = PluginFrontEnd_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

PluginFrontEnd_obj::PluginFrontEnd_obj()
{
}

void PluginFrontEnd_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PluginFrontEnd);
	HX_MARK_MEMBER_NAME(list,"list");
	HX_MARK_END_CLASS();
}

void PluginFrontEnd_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(list,"list");
}

::hx::Val PluginFrontEnd_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { return ::hx::Val( list ); }
		if (HX_FIELD_EQ(inName,"draw") ) { return ::hx::Val( draw_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { return ::hx::Val( remove_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"removeType") ) { return ::hx::Val( removeType_dyn() ); }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"add_flixel_util_FlxTimerManager") ) { return ::hx::Val( add_flixel_util_FlxTimerManager_dyn() ); }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"add_flixel_tweens_FlxTweenManager") ) { return ::hx::Val( add_flixel_tweens_FlxTweenManager_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val PluginFrontEnd_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { list=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PluginFrontEnd_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("list",5e,1c,b3,47));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo PluginFrontEnd_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(PluginFrontEnd_obj,list),HX_("list",5e,1c,b3,47)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *PluginFrontEnd_obj_sStaticStorageInfo = 0;
#endif

static ::String PluginFrontEnd_obj_sMemberFields[] = {
	HX_("add_flixel_tweens_FlxTweenManager",c2,6b,6c,9d),
	HX_("add_flixel_util_FlxTimerManager",c2,da,89,3f),
	HX_("list",5e,1c,b3,47),
	HX_("get",96,80,4e,00),
	HX_("remove",44,9c,88,04),
	HX_("removeType",1e,2d,28,ca),
	HX_("update",09,86,05,87),
	HX_("draw",04,2c,70,42),
	::String(null()) };

::hx::Class PluginFrontEnd_obj::__mClass;

void PluginFrontEnd_obj::__register()
{
	PluginFrontEnd_obj _hx_dummy;
	PluginFrontEnd_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.system.frontEnds.PluginFrontEnd",3f,96,ac,26);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PluginFrontEnd_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PluginFrontEnd_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PluginFrontEnd_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PluginFrontEnd_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace frontEnds
