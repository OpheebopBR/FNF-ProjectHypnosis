#include <hxcpp.h>

#ifndef INCLUDED__UnicodeString_UnicodeString_Impl_
#include <_UnicodeString/UnicodeString_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_2407e69e78391f9d_167_charCodeAt,"_UnicodeString.UnicodeString_Impl_","charCodeAt",0xd9768435,"_UnicodeString.UnicodeString_Impl_.charCodeAt","/usr/share/haxe/std/UnicodeString.hx",167,0x68c6118b)
HX_LOCAL_STACK_FRAME(_hx_pos_2407e69e78391f9d_315_substr,"_UnicodeString.UnicodeString_Impl_","substr",0xd1a740f0,"_UnicodeString.UnicodeString_Impl_.substr","/usr/share/haxe/std/UnicodeString.hx",315,0x68c6118b)
HX_LOCAL_STACK_FRAME(_hx_pos_2407e69e78391f9d_415_get_length,"_UnicodeString.UnicodeString_Impl_","get_length",0x33b0a1ee,"_UnicodeString.UnicodeString_Impl_.get_length","/usr/share/haxe/std/UnicodeString.hx",415,0x68c6118b)
namespace _UnicodeString{

void UnicodeString_Impl__obj::__construct() { }

Dynamic UnicodeString_Impl__obj::__CreateEmpty() { return new UnicodeString_Impl__obj; }

void *UnicodeString_Impl__obj::_hx_vtable = 0;

Dynamic UnicodeString_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< UnicodeString_Impl__obj > _hx_result = new UnicodeString_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool UnicodeString_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x699a1cff;
}

 ::Dynamic UnicodeString_Impl__obj::charCodeAt(::String this1,int index){
            	HX_STACKFRAME(&_hx_pos_2407e69e78391f9d_167_charCodeAt)
HXLINE( 168)		if ((index < 0)) {
HXLINE( 169)			return null();
            		}
HXLINE( 170)		int unicodeOffset = 0;
HXLINE( 171)		int nativeOffset = 0;
HXLINE( 172)		while((nativeOffset < this1.length)){
HXLINE( 173)			nativeOffset = (nativeOffset + 1);
HXDLIN( 173)			int index1 = (nativeOffset - 1);
HXDLIN( 173)			int c = this1.cca(index1);
HXDLIN( 173)			bool _hx_tmp;
HXDLIN( 173)			if ((c >= 55296)) {
HXLINE( 173)				_hx_tmp = (c <= 56319);
            			}
            			else {
HXLINE( 173)				_hx_tmp = false;
            			}
HXDLIN( 173)			if (_hx_tmp) {
HXLINE( 173)				c = (((c - 55232) << 10) | (this1.cca((index1 + 1)) & 1023));
            			}
HXDLIN( 173)			int c1 = c;
HXLINE( 174)			if ((unicodeOffset == index)) {
HXLINE( 175)				return c1;
            			}
HXLINE( 177)			if ((c1 >= 65536)) {
HXLINE( 178)				nativeOffset = (nativeOffset + 1);
            			}
HXLINE( 180)			unicodeOffset = (unicodeOffset + 1);
            		}
HXLINE( 182)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(UnicodeString_Impl__obj,charCodeAt,return )

::String UnicodeString_Impl__obj::substr(::String this1,int pos, ::Dynamic len){
            	HX_STACKFRAME(&_hx_pos_2407e69e78391f9d_315_substr)
HXLINE( 316)		if ((pos < 0)) {
HXLINE( 317)			pos = (::_UnicodeString::UnicodeString_Impl__obj::get_length(this1) + pos);
HXLINE( 318)			if ((pos < 0)) {
HXLINE( 319)				pos = 0;
            			}
            		}
HXLINE( 322)		if (::hx::IsNotNull( len )) {
HXLINE( 323)			if (::hx::IsLess( len,0 )) {
HXLINE( 324)				len = (::_UnicodeString::UnicodeString_Impl__obj::get_length(this1) + len);
            			}
HXLINE( 326)			if (::hx::IsLessEq( len,0 )) {
HXLINE( 327)				return HX_("",00,00,00,00);
            			}
            		}
HXLINE( 330)		int unicodeOffset = 0;
HXLINE( 331)		int nativeOffset = 0;
HXLINE( 332)		int fromOffset = -1;
HXLINE( 333)		int subLength = 0;
HXLINE( 334)		while((nativeOffset < this1.length)){
HXLINE( 335)			int c = this1.cca(nativeOffset);
HXDLIN( 335)			bool _hx_tmp;
HXDLIN( 335)			if ((c >= 55296)) {
HXLINE( 335)				_hx_tmp = (c <= 56319);
            			}
            			else {
HXLINE( 335)				_hx_tmp = false;
            			}
HXDLIN( 335)			if (_hx_tmp) {
HXLINE( 335)				c = (((c - 55232) << 10) | (this1.cca((nativeOffset + 1)) & 1023));
            			}
HXDLIN( 335)			int c1 = c;
HXLINE( 337)			if ((unicodeOffset >= pos)) {
HXLINE( 338)				if ((fromOffset < 0)) {
HXLINE( 339)					if (::hx::IsNull( len )) {
HXLINE( 340)						return this1.substr(nativeOffset,null());
            					}
HXLINE( 342)					fromOffset = nativeOffset;
            				}
HXLINE( 344)				subLength = (subLength + 1);
HXLINE( 345)				if (::hx::IsGreaterEq( subLength,len )) {
HXLINE( 346)					int lastOffset;
HXDLIN( 346)					if ((c1 < 65536)) {
HXLINE( 346)						lastOffset = nativeOffset;
            					}
            					else {
HXLINE( 346)						lastOffset = (nativeOffset + 1);
            					}
HXLINE( 347)					return this1.substr(fromOffset,((lastOffset - fromOffset) + 1));
            				}
            			}
HXLINE( 351)			int nativeOffset1;
HXDLIN( 351)			if ((c1 >= 65536)) {
HXLINE( 351)				nativeOffset1 = 2;
            			}
            			else {
HXLINE( 351)				nativeOffset1 = 1;
            			}
HXDLIN( 351)			nativeOffset = (nativeOffset + nativeOffset1);
HXLINE( 352)			unicodeOffset = (unicodeOffset + 1);
            		}
HXLINE( 354)		if ((fromOffset < 0)) {
HXLINE( 354)			return HX_("",00,00,00,00);
            		}
            		else {
HXLINE( 354)			return this1.substr(fromOffset,null());
            		}
HXDLIN( 354)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(UnicodeString_Impl__obj,substr,return )

int UnicodeString_Impl__obj::get_length(::String this1){
            	HX_STACKFRAME(&_hx_pos_2407e69e78391f9d_415_get_length)
HXLINE( 416)		int l = 0;
HXLINE( 417)		{
HXLINE( 417)			int _g_offset = 0;
HXDLIN( 417)			::String _g_s = this1;
HXDLIN( 417)			while((_g_offset < _g_s.length)){
HXLINE( 417)				::String s = _g_s;
HXDLIN( 417)				_g_offset = (_g_offset + 1);
HXDLIN( 417)				int index = (_g_offset - 1);
HXDLIN( 417)				int c = s.cca(index);
HXDLIN( 417)				bool _hx_tmp;
HXDLIN( 417)				if ((c >= 55296)) {
HXLINE( 417)					_hx_tmp = (c <= 56319);
            				}
            				else {
HXLINE( 417)					_hx_tmp = false;
            				}
HXDLIN( 417)				if (_hx_tmp) {
HXLINE( 635)					c = (((c - 55232) << 10) | (s.cca((index + 1)) & 1023));
            				}
HXLINE( 417)				int c1 = c;
HXDLIN( 417)				if ((c1 >= 65536)) {
HXLINE( 417)					_g_offset = (_g_offset + 1);
            				}
HXDLIN( 417)				int c2 = c1;
HXLINE( 418)				l = (l + 1);
            			}
            		}
HXLINE( 420)		return l;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(UnicodeString_Impl__obj,get_length,return )


UnicodeString_Impl__obj::UnicodeString_Impl__obj()
{
}

bool UnicodeString_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"substr") ) { outValue = substr_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"charCodeAt") ) { outValue = charCodeAt_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_length") ) { outValue = get_length_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *UnicodeString_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *UnicodeString_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class UnicodeString_Impl__obj::__mClass;

static ::String UnicodeString_Impl__obj_sStaticFields[] = {
	HX_("charCodeAt",f6,e6,54,35),
	HX_("substr",31,ef,0a,9a),
	HX_("get_length",af,04,8f,8f),
	::String(null())
};

void UnicodeString_Impl__obj::__register()
{
	UnicodeString_Impl__obj _hx_dummy;
	UnicodeString_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("_UnicodeString.UnicodeString_Impl_",cf,cc,3a,6f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &UnicodeString_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(UnicodeString_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< UnicodeString_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = UnicodeString_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = UnicodeString_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace _UnicodeString
