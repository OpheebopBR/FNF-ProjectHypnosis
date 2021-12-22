#include <hxcpp.h>

#ifndef INCLUDED__UnicodeString_UnicodeString_Impl_
#include <_UnicodeString/UnicodeString_Impl_.h>
#endif
#ifndef INCLUDED_flixel_util_FlxUnicodeUtil
#include <flixel/util/FlxUnicodeUtil.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_36b7e3e8752e2119_13_uLength,"flixel.util.FlxUnicodeUtil","uLength",0x9c838c34,"flixel.util.FlxUnicodeUtil.uLength","flixel/util/FlxUnicodeUtil.hx",13,0x26f9f857)
HX_LOCAL_STACK_FRAME(_hx_pos_36b7e3e8752e2119_22_uEquals,"flixel.util.FlxUnicodeUtil","uEquals",0xbd6ee58d,"flixel.util.FlxUnicodeUtil.uEquals","flixel/util/FlxUnicodeUtil.hx",22,0x26f9f857)
HX_LOCAL_STACK_FRAME(_hx_pos_36b7e3e8752e2119_31_uSub,"flixel.util.FlxUnicodeUtil","uSub",0xecba3572,"flixel.util.FlxUnicodeUtil.uSub","flixel/util/FlxUnicodeUtil.hx",31,0x26f9f857)
HX_LOCAL_STACK_FRAME(_hx_pos_36b7e3e8752e2119_40_uCharCodeAt,"flixel.util.FlxUnicodeUtil","uCharCodeAt",0xeed99d44,"flixel.util.FlxUnicodeUtil.uCharCodeAt","flixel/util/FlxUnicodeUtil.hx",40,0x26f9f857)
namespace flixel{
namespace util{

void FlxUnicodeUtil_obj::__construct() { }

Dynamic FlxUnicodeUtil_obj::__CreateEmpty() { return new FlxUnicodeUtil_obj; }

void *FlxUnicodeUtil_obj::_hx_vtable = 0;

Dynamic FlxUnicodeUtil_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxUnicodeUtil_obj > _hx_result = new FlxUnicodeUtil_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxUnicodeUtil_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2deb6c2b;
}

int FlxUnicodeUtil_obj::uLength(::String s){
            	HX_STACKFRAME(&_hx_pos_36b7e3e8752e2119_13_uLength)
HXDLIN(  13)		return ::_UnicodeString::UnicodeString_Impl__obj::get_length(s);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxUnicodeUtil_obj,uLength,return )

bool FlxUnicodeUtil_obj::uEquals(::String a,::String b){
            	HX_STACKFRAME(&_hx_pos_36b7e3e8752e2119_22_uEquals)
HXDLIN(  22)		return (a == b);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxUnicodeUtil_obj,uEquals,return )

::String FlxUnicodeUtil_obj::uSub(::String s,int pos,int len){
            	HX_STACKFRAME(&_hx_pos_36b7e3e8752e2119_31_uSub)
HXDLIN(  31)		return ::_UnicodeString::UnicodeString_Impl__obj::substr(s,pos,len);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxUnicodeUtil_obj,uSub,return )

 ::Dynamic FlxUnicodeUtil_obj::uCharCodeAt(::String s,int index){
            	HX_STACKFRAME(&_hx_pos_36b7e3e8752e2119_40_uCharCodeAt)
HXDLIN(  40)		return ::_UnicodeString::UnicodeString_Impl__obj::charCodeAt(s,index);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxUnicodeUtil_obj,uCharCodeAt,return )


FlxUnicodeUtil_obj::FlxUnicodeUtil_obj()
{
}

bool FlxUnicodeUtil_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"uSub") ) { outValue = uSub_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"uLength") ) { outValue = uLength_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"uEquals") ) { outValue = uEquals_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"uCharCodeAt") ) { outValue = uCharCodeAt_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FlxUnicodeUtil_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *FlxUnicodeUtil_obj_sStaticStorageInfo = 0;
#endif

::hx::Class FlxUnicodeUtil_obj::__mClass;

static ::String FlxUnicodeUtil_obj_sStaticFields[] = {
	HX_("uLength",3b,4f,eb,d4),
	HX_("uEquals",94,a8,d6,f5),
	HX_("uSub",0b,58,95,4d),
	HX_("uCharCodeAt",cb,ef,ac,11),
	::String(null())
};

void FlxUnicodeUtil_obj::__register()
{
	FlxUnicodeUtil_obj _hx_dummy;
	FlxUnicodeUtil_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.util.FlxUnicodeUtil",67,7c,8a,18);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxUnicodeUtil_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxUnicodeUtil_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< FlxUnicodeUtil_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxUnicodeUtil_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxUnicodeUtil_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace util
