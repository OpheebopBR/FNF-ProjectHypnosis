#include <hxcpp.h>

#ifndef INCLUDED_openfl_ui__MultitouchInputMode_MultitouchInputMode_Impl_
#include <openfl/ui/_MultitouchInputMode/MultitouchInputMode_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_db969e8eaa4463f9_36_fromString,"openfl.ui._MultitouchInputMode.MultitouchInputMode_Impl_","fromString",0x1bb65d6c,"openfl.ui._MultitouchInputMode.MultitouchInputMode_Impl_.fromString","openfl/ui/MultitouchInputMode.hx",36,0x44de2b53)
HX_LOCAL_STACK_FRAME(_hx_pos_db969e8eaa4463f9_47_toString,"openfl.ui._MultitouchInputMode.MultitouchInputMode_Impl_","toString",0xaea349fd,"openfl.ui._MultitouchInputMode.MultitouchInputMode_Impl_.toString","openfl/ui/MultitouchInputMode.hx",47,0x44de2b53)
HX_LOCAL_STACK_FRAME(_hx_pos_db969e8eaa4463f9_20_boot,"openfl.ui._MultitouchInputMode.MultitouchInputMode_Impl_","boot",0x3642c103,"openfl.ui._MultitouchInputMode.MultitouchInputMode_Impl_.boot","openfl/ui/MultitouchInputMode.hx",20,0x44de2b53)
HX_LOCAL_STACK_FRAME(_hx_pos_db969e8eaa4463f9_26_boot,"openfl.ui._MultitouchInputMode.MultitouchInputMode_Impl_","boot",0x3642c103,"openfl.ui._MultitouchInputMode.MultitouchInputMode_Impl_.boot","openfl/ui/MultitouchInputMode.hx",26,0x44de2b53)
HX_LOCAL_STACK_FRAME(_hx_pos_db969e8eaa4463f9_32_boot,"openfl.ui._MultitouchInputMode.MultitouchInputMode_Impl_","boot",0x3642c103,"openfl.ui._MultitouchInputMode.MultitouchInputMode_Impl_.boot","openfl/ui/MultitouchInputMode.hx",32,0x44de2b53)
namespace openfl{
namespace ui{
namespace _MultitouchInputMode{

void MultitouchInputMode_Impl__obj::__construct() { }

Dynamic MultitouchInputMode_Impl__obj::__CreateEmpty() { return new MultitouchInputMode_Impl__obj; }

void *MultitouchInputMode_Impl__obj::_hx_vtable = 0;

Dynamic MultitouchInputMode_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MultitouchInputMode_Impl__obj > _hx_result = new MultitouchInputMode_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool MultitouchInputMode_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4519187b;
}

 ::Dynamic MultitouchInputMode_Impl__obj::GESTURE;

 ::Dynamic MultitouchInputMode_Impl__obj::NONE;

 ::Dynamic MultitouchInputMode_Impl__obj::TOUCH_POINT;

 ::Dynamic MultitouchInputMode_Impl__obj::fromString(::String value){
            	HX_STACKFRAME(&_hx_pos_db969e8eaa4463f9_36_fromString)
HXDLIN(  36)		::String _hx_switch_0 = value;
            		if (  (_hx_switch_0==HX_("gesture",89,da,48,a1)) ){
HXLINE(  38)			return 0;
HXDLIN(  38)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("none",b8,12,0a,49)) ){
HXLINE(  39)			return 1;
HXDLIN(  39)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("touchPoint",11,98,20,c0)) ){
HXLINE(  40)			return 2;
HXDLIN(  40)			goto _hx_goto_0;
            		}
            		/* default */{
HXLINE(  41)			return null();
            		}
            		_hx_goto_0:;
HXLINE(  36)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MultitouchInputMode_Impl__obj,fromString,return )

::String MultitouchInputMode_Impl__obj::toString( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_db969e8eaa4463f9_47_toString)
HXDLIN(  47)		 ::Dynamic _hx_switch_0 = this1;
            		if (  (_hx_switch_0==0) ){
HXLINE(  49)			return HX_("gesture",89,da,48,a1);
HXDLIN(  49)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==1) ){
HXLINE(  50)			return HX_("none",b8,12,0a,49);
HXDLIN(  50)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==2) ){
HXLINE(  51)			return HX_("touchPoint",11,98,20,c0);
HXDLIN(  51)			goto _hx_goto_2;
            		}
            		/* default */{
HXLINE(  52)			return null();
            		}
            		_hx_goto_2:;
HXLINE(  47)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MultitouchInputMode_Impl__obj,toString,return )


MultitouchInputMode_Impl__obj::MultitouchInputMode_Impl__obj()
{
}

bool MultitouchInputMode_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *MultitouchInputMode_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo MultitouchInputMode_Impl__obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &MultitouchInputMode_Impl__obj::GESTURE,HX_("GESTURE",69,ae,1c,21)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &MultitouchInputMode_Impl__obj::NONE,HX_("NONE",b8,da,ca,33)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &MultitouchInputMode_Impl__obj::TOUCH_POINT,HX_("TOUCH_POINT",50,84,c0,94)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void MultitouchInputMode_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MultitouchInputMode_Impl__obj::GESTURE,"GESTURE");
	HX_MARK_MEMBER_NAME(MultitouchInputMode_Impl__obj::NONE,"NONE");
	HX_MARK_MEMBER_NAME(MultitouchInputMode_Impl__obj::TOUCH_POINT,"TOUCH_POINT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void MultitouchInputMode_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MultitouchInputMode_Impl__obj::GESTURE,"GESTURE");
	HX_VISIT_MEMBER_NAME(MultitouchInputMode_Impl__obj::NONE,"NONE");
	HX_VISIT_MEMBER_NAME(MultitouchInputMode_Impl__obj::TOUCH_POINT,"TOUCH_POINT");
};

#endif

::hx::Class MultitouchInputMode_Impl__obj::__mClass;

static ::String MultitouchInputMode_Impl__obj_sStaticFields[] = {
	HX_("GESTURE",69,ae,1c,21),
	HX_("NONE",b8,da,ca,33),
	HX_("TOUCH_POINT",50,84,c0,94),
	HX_("fromString",db,2d,74,54),
	HX_("toString",ac,d0,6e,38),
	::String(null())
};

void MultitouchInputMode_Impl__obj::__register()
{
	MultitouchInputMode_Impl__obj _hx_dummy;
	MultitouchInputMode_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.ui._MultitouchInputMode.MultitouchInputMode_Impl_",3d,55,b8,85);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &MultitouchInputMode_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = MultitouchInputMode_Impl__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(MultitouchInputMode_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< MultitouchInputMode_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = MultitouchInputMode_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MultitouchInputMode_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MultitouchInputMode_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void MultitouchInputMode_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_db969e8eaa4463f9_20_boot)
HXDLIN(  20)		GESTURE = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_db969e8eaa4463f9_26_boot)
HXDLIN(  26)		NONE = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_db969e8eaa4463f9_32_boot)
HXDLIN(  32)		TOUCH_POINT = 2;
            	}
}

} // end namespace openfl
} // end namespace ui
} // end namespace _MultitouchInputMode
