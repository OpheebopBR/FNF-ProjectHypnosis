#include <hxcpp.h>

#ifndef INCLUDED_InputFormatter
#include <InputFormatter.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad__FlxGamepadInputID_FlxGamepadInputID_Impl_
#include <flixel/input/gamepad/_FlxGamepadInputID/FlxGamepadInputID_Impl_.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard__FlxKey_FlxKey_Impl_
#include <flixel/input/keyboard/_FlxKey/FlxKey_Impl_.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_83fba6cf8a731fd3_9_getKeyName,"InputFormatter","getKeyName",0x9f93bd82,"InputFormatter.getKeyName","InputFormatter.hx",9,0x55ad10fe)
HX_LOCAL_STACK_FRAME(_hx_pos_83fba6cf8a731fd3_101_getGamepadButton,"InputFormatter","getGamepadButton",0x3751096b,"InputFormatter.getGamepadButton","InputFormatter.hx",101,0x55ad10fe)

void InputFormatter_obj::__construct() { }

Dynamic InputFormatter_obj::__CreateEmpty() { return new InputFormatter_obj; }

void *InputFormatter_obj::_hx_vtable = 0;

Dynamic InputFormatter_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< InputFormatter_obj > _hx_result = new InputFormatter_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool InputFormatter_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0bac54e4;
}

::String InputFormatter_obj::getKeyName(int key){
            	HX_STACKFRAME(&_hx_pos_83fba6cf8a731fd3_9_getKeyName)
HXDLIN(   9)		switch((int)(key)){
            			case (int)-1: {
HXLINE(  91)				return HX_("---",cd,4c,22,00);
            			}
            			break;
            			case (int)8: {
HXLINE(  11)				return HX_("BckSpc",dc,6f,32,ab);
            			}
            			break;
            			case (int)17: {
HXLINE(  13)				return HX_("Ctrl",cb,b4,a1,2c);
            			}
            			break;
            			case (int)18: {
HXLINE(  15)				return HX_("Alt",09,b1,31,00);
            			}
            			break;
            			case (int)20: {
HXLINE(  17)				return HX_("Caps",41,48,93,2c);
            			}
            			break;
            			case (int)33: {
HXLINE(  19)				return HX_("PgUp",52,84,2f,35);
            			}
            			break;
            			case (int)34: {
HXLINE(  21)				return HX_("PgDown",19,c2,19,78);
            			}
            			break;
            			case (int)48: {
HXLINE(  23)				return HX_("0",30,00,00,00);
            			}
            			break;
            			case (int)49: {
HXLINE(  25)				return HX_("1",31,00,00,00);
            			}
            			break;
            			case (int)50: {
HXLINE(  27)				return HX_("2",32,00,00,00);
            			}
            			break;
            			case (int)51: {
HXLINE(  29)				return HX_("3",33,00,00,00);
            			}
            			break;
            			case (int)52: {
HXLINE(  31)				return HX_("4",34,00,00,00);
            			}
            			break;
            			case (int)53: {
HXLINE(  33)				return HX_("5",35,00,00,00);
            			}
            			break;
            			case (int)54: {
HXLINE(  35)				return HX_("6",36,00,00,00);
            			}
            			break;
            			case (int)55: {
HXLINE(  37)				return HX_("7",37,00,00,00);
            			}
            			break;
            			case (int)56: {
HXLINE(  39)				return HX_("8",38,00,00,00);
            			}
            			break;
            			case (int)57: {
HXLINE(  41)				return HX_("9",39,00,00,00);
            			}
            			break;
            			case (int)96: {
HXLINE(  43)				return HX_("#0",ad,1e,00,00);
            			}
            			break;
            			case (int)97: {
HXLINE(  45)				return HX_("#1",ae,1e,00,00);
            			}
            			break;
            			case (int)98: {
HXLINE(  47)				return HX_("#2",af,1e,00,00);
            			}
            			break;
            			case (int)99: {
HXLINE(  49)				return HX_("#3",b0,1e,00,00);
            			}
            			break;
            			case (int)100: {
HXLINE(  51)				return HX_("#4",b1,1e,00,00);
            			}
            			break;
            			case (int)101: {
HXLINE(  53)				return HX_("#5",b2,1e,00,00);
            			}
            			break;
            			case (int)102: {
HXLINE(  55)				return HX_("#6",b3,1e,00,00);
            			}
            			break;
            			case (int)103: {
HXLINE(  57)				return HX_("#7",b4,1e,00,00);
            			}
            			break;
            			case (int)104: {
HXLINE(  59)				return HX_("#8",b5,1e,00,00);
            			}
            			break;
            			case (int)105: {
HXLINE(  61)				return HX_("#9",b6,1e,00,00);
            			}
            			break;
            			case (int)106: {
HXLINE(  63)				return HX_("#*",a7,1e,00,00);
            			}
            			break;
            			case (int)107: {
HXLINE(  65)				return HX_("#+",a8,1e,00,00);
            			}
            			break;
            			case (int)109: {
HXLINE(  67)				return HX_("#-",aa,1e,00,00);
            			}
            			break;
            			case (int)110: {
HXLINE(  69)				return HX_("#.",ab,1e,00,00);
            			}
            			break;
            			case (int)186: {
HXLINE(  71)				return HX_(";",3b,00,00,00);
            			}
            			break;
            			case (int)188: {
HXLINE(  73)				return HX_(",",2c,00,00,00);
            			}
            			break;
            			case (int)190: {
HXLINE(  75)				return HX_(".",2e,00,00,00);
            			}
            			break;
            			case (int)192: {
HXLINE(  79)				return HX_("`",60,00,00,00);
            			}
            			break;
            			case (int)219: {
HXLINE(  81)				return HX_("[",5b,00,00,00);
            			}
            			break;
            			case (int)221: {
HXLINE(  85)				return HX_("]",5d,00,00,00);
            			}
            			break;
            			case (int)222: {
HXLINE(  87)				return HX_("'",27,00,00,00);
            			}
            			break;
            			case (int)301: {
HXLINE(  89)				return HX_("PrtScrn",7e,c1,07,95);
            			}
            			break;
            			default:{
HXLINE(  93)				::String label = (HX_("",00,00,00,00) + ::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::toStringMap->get_string(key));
HXLINE(  94)				if ((label.toLowerCase() == HX_("null",87,9e,0e,49))) {
HXLINE(  94)					return HX_("---",cd,4c,22,00);
            				}
HXLINE(  95)				::String _hx_tmp = (HX_("",00,00,00,00) + label.charAt(0).toUpperCase());
HXDLIN(  95)				return (_hx_tmp + label.substr(1,null()).toLowerCase());
            			}
            		}
HXLINE(   9)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(InputFormatter_obj,getKeyName,return )

::String InputFormatter_obj::getGamepadButton(int button){
            	HX_STACKFRAME(&_hx_pos_83fba6cf8a731fd3_101_getGamepadButton)
HXDLIN( 101)		switch((int)(button)){
            			case (int)-1: {
HXLINE( 147)				return HX_("---",cd,4c,22,00);
            			}
            			break;
            			case (int)0: {
HXLINE( 103)				return HX_("A",41,00,00,00);
            			}
            			break;
            			case (int)1: {
HXLINE( 105)				return HX_("B",42,00,00,00);
            			}
            			break;
            			case (int)2: {
HXLINE( 107)				return HX_("X",58,00,00,00);
            			}
            			break;
            			case (int)3: {
HXLINE( 109)				return HX_("Y",59,00,00,00);
            			}
            			break;
            			case (int)4: {
HXLINE( 111)				return HX_("LB",76,42,00,00);
            			}
            			break;
            			case (int)5: {
HXLINE( 113)				return HX_("RB",b0,47,00,00);
            			}
            			break;
            			case (int)8: {
HXLINE( 119)				return HX_("LS-Click",a2,8a,0a,50);
            			}
            			break;
            			case (int)9: {
HXLINE( 121)				return HX_("RS-Click",5c,37,39,a7);
            			}
            			break;
            			case (int)11: {
HXLINE( 143)				return HX_("D-Up",24,f2,14,2d);
            			}
            			break;
            			case (int)12: {
HXLINE( 141)				return HX_("D-Down",6b,c8,93,46);
            			}
            			break;
            			case (int)13: {
HXLINE( 139)				return HX_("D-Left",10,d8,d5,4b);
            			}
            			break;
            			case (int)14: {
HXLINE( 145)				return HX_("D-Right",b3,43,54,86);
            			}
            			break;
            			case (int)17: {
HXLINE( 115)				return HX_("LT",88,42,00,00);
            			}
            			break;
            			case (int)18: {
HXLINE( 117)				return HX_("RT",c2,47,00,00);
            			}
            			break;
            			case (int)34: {
HXLINE( 129)				return HX_("LS-Up",c1,3b,73,f9);
            			}
            			break;
            			case (int)35: {
HXLINE( 127)				return HX_("LS-Right",36,1a,10,f1);
            			}
            			break;
            			case (int)36: {
HXLINE( 123)				return HX_("LS-Down",48,73,4d,9e);
            			}
            			break;
            			case (int)37: {
HXLINE( 125)				return HX_("LS-Left",ed,82,8f,a3);
            			}
            			break;
            			case (int)38: {
HXLINE( 137)				return HX_("RS-Up",c7,b6,da,6d);
            			}
            			break;
            			case (int)39: {
HXLINE( 135)				return HX_("RS-Right",f0,c6,3e,48);
            			}
            			break;
            			case (int)40: {
HXLINE( 131)				return HX_("RS-Down",ce,3b,ce,97);
            			}
            			break;
            			case (int)41: {
HXLINE( 133)				return HX_("RS-Left",73,4b,10,9d);
            			}
            			break;
            			default:{
HXLINE( 149)				::String label = (HX_("",00,00,00,00) + ::flixel::input::gamepad::_FlxGamepadInputID::FlxGamepadInputID_Impl__obj::toStringMap->get_string(button));
HXLINE( 150)				bool _hx_tmp = (label.toLowerCase() == HX_("null",87,9e,0e,49));
HXLINE( 151)				::String _hx_tmp1 = (HX_("",00,00,00,00) + label.charAt(0).toUpperCase());
HXDLIN( 151)				return (_hx_tmp1 + label.substr(1,null()).toLowerCase());
            			}
            		}
HXLINE( 101)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(InputFormatter_obj,getGamepadButton,return )


InputFormatter_obj::InputFormatter_obj()
{
}

bool InputFormatter_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"getKeyName") ) { outValue = getKeyName_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getGamepadButton") ) { outValue = getGamepadButton_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *InputFormatter_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *InputFormatter_obj_sStaticStorageInfo = 0;
#endif

::hx::Class InputFormatter_obj::__mClass;

static ::String InputFormatter_obj_sStaticFields[] = {
	HX_("getKeyName",94,69,3a,f2),
	HX_("getGamepadButton",fd,0e,c3,62),
	::String(null())
};

void InputFormatter_obj::__register()
{
	InputFormatter_obj _hx_dummy;
	InputFormatter_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("InputFormatter",c0,c9,82,02);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &InputFormatter_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(InputFormatter_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< InputFormatter_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = InputFormatter_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = InputFormatter_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

