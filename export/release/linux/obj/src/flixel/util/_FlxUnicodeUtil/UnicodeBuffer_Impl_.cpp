#include <hxcpp.h>

#ifndef INCLUDED_flixel_util__FlxUnicodeUtil_UnicodeBuffer_Impl_
#include <flixel/util/_FlxUnicodeUtil/UnicodeBuffer_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_118c490c28c43de2_51__new,"flixel.util._FlxUnicodeUtil.UnicodeBuffer_Impl_","_new",0x2e99190e,"flixel.util._FlxUnicodeUtil.UnicodeBuffer_Impl_._new","flixel/util/FlxUnicodeUtil.hx",51,0x26f9f857)
HX_LOCAL_STACK_FRAME(_hx_pos_118c490c28c43de2_59_addChar,"flixel.util._FlxUnicodeUtil.UnicodeBuffer_Impl_","addChar",0x64c0680a,"flixel.util._FlxUnicodeUtil.UnicodeBuffer_Impl_.addChar","flixel/util/FlxUnicodeUtil.hx",59,0x26f9f857)
HX_LOCAL_STACK_FRAME(_hx_pos_118c490c28c43de2_69_toString,"flixel.util._FlxUnicodeUtil.UnicodeBuffer_Impl_","toString",0x3cf8aed9,"flixel.util._FlxUnicodeUtil.UnicodeBuffer_Impl_.toString","flixel/util/FlxUnicodeUtil.hx",69,0x26f9f857)
namespace flixel{
namespace util{
namespace _FlxUnicodeUtil{

void UnicodeBuffer_Impl__obj::__construct() { }

Dynamic UnicodeBuffer_Impl__obj::__CreateEmpty() { return new UnicodeBuffer_Impl__obj; }

void *UnicodeBuffer_Impl__obj::_hx_vtable = 0;

Dynamic UnicodeBuffer_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< UnicodeBuffer_Impl__obj > _hx_result = new UnicodeBuffer_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool UnicodeBuffer_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x245bb1b7;
}

::String UnicodeBuffer_Impl__obj::_new(::String __o_s){
            		::String s = __o_s;
            		if (::hx::IsNull(__o_s)) s = HX_("",00,00,00,00);
            	HX_STACKFRAME(&_hx_pos_118c490c28c43de2_51__new)
HXDLIN(  51)		::String this1 = s;
HXDLIN(  51)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(UnicodeBuffer_Impl__obj,_new,return )

::String UnicodeBuffer_Impl__obj::addChar(::String this1,int c){
            	HX_STACKFRAME(&_hx_pos_118c490c28c43de2_59_addChar)
HXDLIN(  59)		::String s = (this1 + ::String::fromCharCode(c));
HXDLIN(  59)		if (::hx::IsNull( s )) {
HXDLIN(  59)			s = HX_("",00,00,00,00);
            		}
HXDLIN(  59)		::String this2 = s;
HXDLIN(  59)		return this2;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(UnicodeBuffer_Impl__obj,addChar,return )

::String UnicodeBuffer_Impl__obj::toString(::String this1){
            	HX_STACKFRAME(&_hx_pos_118c490c28c43de2_69_toString)
HXDLIN(  69)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(UnicodeBuffer_Impl__obj,toString,return )


UnicodeBuffer_Impl__obj::UnicodeBuffer_Impl__obj()
{
}

bool UnicodeBuffer_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"addChar") ) { outValue = addChar_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *UnicodeBuffer_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *UnicodeBuffer_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class UnicodeBuffer_Impl__obj::__mClass;

static ::String UnicodeBuffer_Impl__obj_sStaticFields[] = {
	HX_("_new",61,15,1f,3f),
	HX_("addChar",97,a1,fc,7d),
	HX_("toString",ac,d0,6e,38),
	::String(null())
};

void UnicodeBuffer_Impl__obj::__register()
{
	UnicodeBuffer_Impl__obj _hx_dummy;
	UnicodeBuffer_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.util._FlxUnicodeUtil.UnicodeBuffer_Impl_",e1,fb,92,a5);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &UnicodeBuffer_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(UnicodeBuffer_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< UnicodeBuffer_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = UnicodeBuffer_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = UnicodeBuffer_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace util
} // end namespace _FlxUnicodeUtil
