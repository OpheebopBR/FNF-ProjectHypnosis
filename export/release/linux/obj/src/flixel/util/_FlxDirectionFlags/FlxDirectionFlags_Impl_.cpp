#include <hxcpp.h>

#ifndef INCLUDED_flixel_util__FlxDirectionFlags_FlxDirectionFlags_Impl_
#include <flixel/util/_FlxDirectionFlags/FlxDirectionFlags_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_01e78c70af2a6c38_39_has,"flixel.util._FlxDirectionFlags.FlxDirectionFlags_Impl_","has",0xa8930bad,"flixel.util._FlxDirectionFlags.FlxDirectionFlags_Impl_.has","flixel/util/FlxDirectionFlags.hx",39,0x7932e23e)
HX_LOCAL_STACK_FRAME(_hx_pos_01e78c70af2a6c38_47_with,"flixel.util._FlxDirectionFlags.FlxDirectionFlags_Impl_","with",0xe2077253,"flixel.util._FlxDirectionFlags.FlxDirectionFlags_Impl_.with","flixel/util/FlxDirectionFlags.hx",47,0x7932e23e)
HX_LOCAL_STACK_FRAME(_hx_pos_01e78c70af2a6c38_55_without,"flixel.util._FlxDirectionFlags.FlxDirectionFlags_Impl_","without",0x6ddd241b,"flixel.util._FlxDirectionFlags.FlxDirectionFlags_Impl_.without","flixel/util/FlxDirectionFlags.hx",55,0x7932e23e)
HX_LOCAL_STACK_FRAME(_hx_pos_01e78c70af2a6c38_59_toString,"flixel.util._FlxDirectionFlags.FlxDirectionFlags_Impl_","toString",0xba867779,"flixel.util._FlxDirectionFlags.FlxDirectionFlags_Impl_.toString","flixel/util/FlxDirectionFlags.hx",59,0x7932e23e)
HX_LOCAL_STACK_FRAME(_hx_pos_01e78c70af2a6c38_10_boot,"flixel.util._FlxDirectionFlags.FlxDirectionFlags_Impl_","boot",0xd42a807f,"flixel.util._FlxDirectionFlags.FlxDirectionFlags_Impl_.boot","flixel/util/FlxDirectionFlags.hx",10,0x7932e23e)
HX_LOCAL_STACK_FRAME(_hx_pos_01e78c70af2a6c38_11_boot,"flixel.util._FlxDirectionFlags.FlxDirectionFlags_Impl_","boot",0xd42a807f,"flixel.util._FlxDirectionFlags.FlxDirectionFlags_Impl_.boot","flixel/util/FlxDirectionFlags.hx",11,0x7932e23e)
HX_LOCAL_STACK_FRAME(_hx_pos_01e78c70af2a6c38_12_boot,"flixel.util._FlxDirectionFlags.FlxDirectionFlags_Impl_","boot",0xd42a807f,"flixel.util._FlxDirectionFlags.FlxDirectionFlags_Impl_.boot","flixel/util/FlxDirectionFlags.hx",12,0x7932e23e)
HX_LOCAL_STACK_FRAME(_hx_pos_01e78c70af2a6c38_13_boot,"flixel.util._FlxDirectionFlags.FlxDirectionFlags_Impl_","boot",0xd42a807f,"flixel.util._FlxDirectionFlags.FlxDirectionFlags_Impl_.boot","flixel/util/FlxDirectionFlags.hx",13,0x7932e23e)
HX_LOCAL_STACK_FRAME(_hx_pos_01e78c70af2a6c38_20_boot,"flixel.util._FlxDirectionFlags.FlxDirectionFlags_Impl_","boot",0xd42a807f,"flixel.util._FlxDirectionFlags.FlxDirectionFlags_Impl_.boot","flixel/util/FlxDirectionFlags.hx",20,0x7932e23e)
HX_LOCAL_STACK_FRAME(_hx_pos_01e78c70af2a6c38_23_boot,"flixel.util._FlxDirectionFlags.FlxDirectionFlags_Impl_","boot",0xd42a807f,"flixel.util._FlxDirectionFlags.FlxDirectionFlags_Impl_.boot","flixel/util/FlxDirectionFlags.hx",23,0x7932e23e)
HX_LOCAL_STACK_FRAME(_hx_pos_01e78c70af2a6c38_26_boot,"flixel.util._FlxDirectionFlags.FlxDirectionFlags_Impl_","boot",0xd42a807f,"flixel.util._FlxDirectionFlags.FlxDirectionFlags_Impl_.boot","flixel/util/FlxDirectionFlags.hx",26,0x7932e23e)
HX_LOCAL_STACK_FRAME(_hx_pos_01e78c70af2a6c38_29_boot,"flixel.util._FlxDirectionFlags.FlxDirectionFlags_Impl_","boot",0xd42a807f,"flixel.util._FlxDirectionFlags.FlxDirectionFlags_Impl_.boot","flixel/util/FlxDirectionFlags.hx",29,0x7932e23e)
HX_LOCAL_STACK_FRAME(_hx_pos_01e78c70af2a6c38_32_boot,"flixel.util._FlxDirectionFlags.FlxDirectionFlags_Impl_","boot",0xd42a807f,"flixel.util._FlxDirectionFlags.FlxDirectionFlags_Impl_.boot","flixel/util/FlxDirectionFlags.hx",32,0x7932e23e)
namespace flixel{
namespace util{
namespace _FlxDirectionFlags{

void FlxDirectionFlags_Impl__obj::__construct() { }

Dynamic FlxDirectionFlags_Impl__obj::__CreateEmpty() { return new FlxDirectionFlags_Impl__obj; }

void *FlxDirectionFlags_Impl__obj::_hx_vtable = 0;

Dynamic FlxDirectionFlags_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxDirectionFlags_Impl__obj > _hx_result = new FlxDirectionFlags_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxDirectionFlags_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x13f9d119;
}

int FlxDirectionFlags_Impl__obj::LEFT;

int FlxDirectionFlags_Impl__obj::RIGHT;

int FlxDirectionFlags_Impl__obj::UP;

int FlxDirectionFlags_Impl__obj::DOWN;

int FlxDirectionFlags_Impl__obj::NONE;

int FlxDirectionFlags_Impl__obj::CEILING;

int FlxDirectionFlags_Impl__obj::FLOOR;

int FlxDirectionFlags_Impl__obj::WALL;

int FlxDirectionFlags_Impl__obj::ANY;

bool FlxDirectionFlags_Impl__obj::has(int this1,int dir){
            	HX_STACKFRAME(&_hx_pos_01e78c70af2a6c38_39_has)
HXDLIN(  39)		return ((this1 & dir) == dir);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxDirectionFlags_Impl__obj,has,return )

int FlxDirectionFlags_Impl__obj::with(int this1,int dir){
            	HX_STACKFRAME(&_hx_pos_01e78c70af2a6c38_47_with)
HXDLIN(  47)		return (this1 | dir);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxDirectionFlags_Impl__obj,with,return )

int FlxDirectionFlags_Impl__obj::without(int this1,int dir){
            	HX_STACKFRAME(&_hx_pos_01e78c70af2a6c38_55_without)
HXDLIN(  55)		return (this1 & ~(dir));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxDirectionFlags_Impl__obj,without,return )

::String FlxDirectionFlags_Impl__obj::toString(int this1){
            	HX_STACKFRAME(&_hx_pos_01e78c70af2a6c38_59_toString)
HXLINE(  60)		if ((this1 == 0)) {
HXLINE(  61)			return HX_("NONE",b8,da,ca,33);
            		}
HXLINE(  63)		::String str = HX_("",00,00,00,00);
HXLINE(  64)		int dir = 1;
HXDLIN(  64)		if (((this1 & dir) == dir)) {
HXLINE(  65)			str = (str + HX_(" | L",88,07,85,15));
            		}
HXLINE(  66)		int dir1 = 16;
HXDLIN(  66)		if (((this1 & dir1) == dir1)) {
HXLINE(  67)			str = (str + HX_(" | R",8e,07,85,15));
            		}
HXLINE(  68)		int dir2 = 256;
HXDLIN(  68)		if (((this1 & dir2) == dir2)) {
HXLINE(  69)			str = (str + HX_(" | U",91,07,85,15));
            		}
HXLINE(  70)		int dir3 = 4096;
HXDLIN(  70)		if (((this1 & dir3) == dir3)) {
HXLINE(  71)			str = (str + HX_(" | D",80,07,85,15));
            		}
HXLINE(  74)		return str.substr(3,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxDirectionFlags_Impl__obj,toString,return )


FlxDirectionFlags_Impl__obj::FlxDirectionFlags_Impl__obj()
{
}

bool FlxDirectionFlags_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"has") ) { outValue = has_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"with") ) { outValue = with_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"without") ) { outValue = without_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FlxDirectionFlags_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo FlxDirectionFlags_Impl__obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &FlxDirectionFlags_Impl__obj::LEFT,HX_("LEFT",07,d0,70,32)},
	{::hx::fsInt,(void *) &FlxDirectionFlags_Impl__obj::RIGHT,HX_("RIGHT",bc,43,52,67)},
	{::hx::fsInt,(void *) &FlxDirectionFlags_Impl__obj::UP,HX_("UP",5b,4a,00,00)},
	{::hx::fsInt,(void *) &FlxDirectionFlags_Impl__obj::DOWN,HX_("DOWN",62,c0,2e,2d)},
	{::hx::fsInt,(void *) &FlxDirectionFlags_Impl__obj::NONE,HX_("NONE",b8,da,ca,33)},
	{::hx::fsInt,(void *) &FlxDirectionFlags_Impl__obj::CEILING,HX_("CEILING",dd,32,72,b3)},
	{::hx::fsInt,(void *) &FlxDirectionFlags_Impl__obj::FLOOR,HX_("FLOOR",ac,09,85,80)},
	{::hx::fsInt,(void *) &FlxDirectionFlags_Impl__obj::WALL,HX_("WALL",0a,25,b3,39)},
	{::hx::fsInt,(void *) &FlxDirectionFlags_Impl__obj::ANY,HX_("ANY",cc,96,31,00)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void FlxDirectionFlags_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxDirectionFlags_Impl__obj::LEFT,"LEFT");
	HX_MARK_MEMBER_NAME(FlxDirectionFlags_Impl__obj::RIGHT,"RIGHT");
	HX_MARK_MEMBER_NAME(FlxDirectionFlags_Impl__obj::UP,"UP");
	HX_MARK_MEMBER_NAME(FlxDirectionFlags_Impl__obj::DOWN,"DOWN");
	HX_MARK_MEMBER_NAME(FlxDirectionFlags_Impl__obj::NONE,"NONE");
	HX_MARK_MEMBER_NAME(FlxDirectionFlags_Impl__obj::CEILING,"CEILING");
	HX_MARK_MEMBER_NAME(FlxDirectionFlags_Impl__obj::FLOOR,"FLOOR");
	HX_MARK_MEMBER_NAME(FlxDirectionFlags_Impl__obj::WALL,"WALL");
	HX_MARK_MEMBER_NAME(FlxDirectionFlags_Impl__obj::ANY,"ANY");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxDirectionFlags_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxDirectionFlags_Impl__obj::LEFT,"LEFT");
	HX_VISIT_MEMBER_NAME(FlxDirectionFlags_Impl__obj::RIGHT,"RIGHT");
	HX_VISIT_MEMBER_NAME(FlxDirectionFlags_Impl__obj::UP,"UP");
	HX_VISIT_MEMBER_NAME(FlxDirectionFlags_Impl__obj::DOWN,"DOWN");
	HX_VISIT_MEMBER_NAME(FlxDirectionFlags_Impl__obj::NONE,"NONE");
	HX_VISIT_MEMBER_NAME(FlxDirectionFlags_Impl__obj::CEILING,"CEILING");
	HX_VISIT_MEMBER_NAME(FlxDirectionFlags_Impl__obj::FLOOR,"FLOOR");
	HX_VISIT_MEMBER_NAME(FlxDirectionFlags_Impl__obj::WALL,"WALL");
	HX_VISIT_MEMBER_NAME(FlxDirectionFlags_Impl__obj::ANY,"ANY");
};

#endif

::hx::Class FlxDirectionFlags_Impl__obj::__mClass;

static ::String FlxDirectionFlags_Impl__obj_sStaticFields[] = {
	HX_("LEFT",07,d0,70,32),
	HX_("RIGHT",bc,43,52,67),
	HX_("UP",5b,4a,00,00),
	HX_("DOWN",62,c0,2e,2d),
	HX_("NONE",b8,da,ca,33),
	HX_("CEILING",dd,32,72,b3),
	HX_("FLOOR",ac,09,85,80),
	HX_("WALL",0a,25,b3,39),
	HX_("ANY",cc,96,31,00),
	HX_("has",5a,3f,4f,00),
	HX_("with",06,76,f8,4e),
	HX_("without",48,32,81,5f),
	HX_("toString",ac,d0,6e,38),
	::String(null())
};

void FlxDirectionFlags_Impl__obj::__register()
{
	FlxDirectionFlags_Impl__obj _hx_dummy;
	FlxDirectionFlags_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.util._FlxDirectionFlags.FlxDirectionFlags_Impl_",41,c7,60,2f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxDirectionFlags_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxDirectionFlags_Impl__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxDirectionFlags_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< FlxDirectionFlags_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxDirectionFlags_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxDirectionFlags_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxDirectionFlags_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxDirectionFlags_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_01e78c70af2a6c38_10_boot)
HXDLIN(  10)		LEFT = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_01e78c70af2a6c38_11_boot)
HXDLIN(  11)		RIGHT = 16;
            	}
{
            	HX_STACKFRAME(&_hx_pos_01e78c70af2a6c38_12_boot)
HXDLIN(  12)		UP = 256;
            	}
{
            	HX_STACKFRAME(&_hx_pos_01e78c70af2a6c38_13_boot)
HXDLIN(  13)		DOWN = 4096;
            	}
{
            	HX_STACKFRAME(&_hx_pos_01e78c70af2a6c38_20_boot)
HXDLIN(  20)		NONE = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_01e78c70af2a6c38_23_boot)
HXDLIN(  23)		CEILING = 256;
            	}
{
            	HX_STACKFRAME(&_hx_pos_01e78c70af2a6c38_26_boot)
HXDLIN(  26)		FLOOR = 4096;
            	}
{
            	HX_STACKFRAME(&_hx_pos_01e78c70af2a6c38_29_boot)
HXDLIN(  29)		WALL = 17;
            	}
{
            	HX_STACKFRAME(&_hx_pos_01e78c70af2a6c38_32_boot)
HXDLIN(  32)		ANY = 4369;
            	}
}

} // end namespace flixel
} // end namespace util
} // end namespace _FlxDirectionFlags
