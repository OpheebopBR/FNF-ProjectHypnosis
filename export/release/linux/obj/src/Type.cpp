#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_ValueType
#include <ValueType.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_fd61cb8e002c8329_36_getClass,"Type","getClass",0xc4e49bd6,"Type.getClass","/usr/share/haxe/std/cpp/_std/Type.hx",36,0x978d9ce0)
HX_LOCAL_STACK_FRAME(_hx_pos_fd61cb8e002c8329_50_getEnum,"Type","getEnum",0x326d2523,"Type.getEnum","/usr/share/haxe/std/cpp/_std/Type.hx",50,0x978d9ce0)
HX_LOCAL_STACK_FRAME(_hx_pos_fd61cb8e002c8329_58_getSuperClass,"Type","getSuperClass",0xd9ffa85f,"Type.getSuperClass","/usr/share/haxe/std/cpp/_std/Type.hx",58,0x978d9ce0)
HX_LOCAL_STACK_FRAME(_hx_pos_fd61cb8e002c8329_61_getClassName,"Type","getClassName",0x8e66dd41,"Type.getClassName","/usr/share/haxe/std/cpp/_std/Type.hx",61,0x978d9ce0)
HX_LOCAL_STACK_FRAME(_hx_pos_fd61cb8e002c8329_68_getEnumName,"Type","getEnumName",0x9b42910e,"Type.getEnumName","/usr/share/haxe/std/cpp/_std/Type.hx",68,0x978d9ce0)
HX_LOCAL_STACK_FRAME(_hx_pos_fd61cb8e002c8329_72_resolveClass,"Type","resolveClass",0x23b06bc0,"Type.resolveClass","/usr/share/haxe/std/cpp/_std/Type.hx",72,0x978d9ce0)
HX_LOCAL_STACK_FRAME(_hx_pos_fd61cb8e002c8329_80_resolveEnum,"Type","resolveEnum",0x26394079,"Type.resolveEnum","/usr/share/haxe/std/cpp/_std/Type.hx",80,0x978d9ce0)
HX_LOCAL_STACK_FRAME(_hx_pos_fd61cb8e002c8329_88_createInstance,"Type","createInstance",0xab84f9c5,"Type.createInstance","/usr/share/haxe/std/cpp/_std/Type.hx",88,0x978d9ce0)
HX_LOCAL_STACK_FRAME(_hx_pos_fd61cb8e002c8329_96_createEmptyInstance,"Type","createEmptyInstance",0xcb752312,"Type.createEmptyInstance","/usr/share/haxe/std/cpp/_std/Type.hx",96,0x978d9ce0)
HX_LOCAL_STACK_FRAME(_hx_pos_fd61cb8e002c8329_100_createEnum,"Type","createEnum",0xd8d56d31,"Type.createEnum","/usr/share/haxe/std/cpp/_std/Type.hx",100,0x978d9ce0)
HX_LOCAL_STACK_FRAME(_hx_pos_fd61cb8e002c8329_111_getInstanceFields,"Type","getInstanceFields",0xe970f890,"Type.getInstanceFields","/usr/share/haxe/std/cpp/_std/Type.hx",111,0x978d9ce0)
HX_LOCAL_STACK_FRAME(_hx_pos_fd61cb8e002c8329_115_getClassFields,"Type","getClassFields",0x7edf22ef,"Type.getClassFields","/usr/share/haxe/std/cpp/_std/Type.hx",115,0x978d9ce0)
HX_LOCAL_STACK_FRAME(_hx_pos_fd61cb8e002c8329_120_getEnumConstructs,"Type","getEnumConstructs",0x7f46cf7f,"Type.getEnumConstructs","/usr/share/haxe/std/cpp/_std/Type.hx",120,0x978d9ce0)
HX_LOCAL_STACK_FRAME(_hx_pos_fd61cb8e002c8329_124_typeof,"Type","typeof",0xd6c51d65,"Type.typeof","/usr/share/haxe/std/cpp/_std/Type.hx",124,0x978d9ce0)
HX_LOCAL_STACK_FRAME(_hx_pos_fd61cb8e002c8329_153_enumConstructor,"Type","enumConstructor",0x45f8fde5,"Type.enumConstructor","/usr/share/haxe/std/cpp/_std/Type.hx",153,0x978d9ce0)
HX_LOCAL_STACK_FRAME(_hx_pos_fd61cb8e002c8329_158_enumParameters,"Type","enumParameters",0xf9e1b41f,"Type.enumParameters","/usr/share/haxe/std/cpp/_std/Type.hx",158,0x978d9ce0)

void Type_obj::__construct() { }

Dynamic Type_obj::__CreateEmpty() { return new Type_obj; }

void *Type_obj::_hx_vtable = 0;

Dynamic Type_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Type_obj > _hx_result = new Type_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Type_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0c3514fe;
}

::hx::Class Type_obj::getClass( ::Dynamic o){
            	HX_STACKFRAME(&_hx_pos_fd61cb8e002c8329_36_getClass)
HXLINE(  37)		bool _hx_tmp;
HXDLIN(  37)		if (::hx::IsNotNull( o )) {
HXLINE(  37)			_hx_tmp = !(::Reflect_obj::isObject(o));
            		}
            		else {
HXLINE(  37)			_hx_tmp = true;
            		}
HXDLIN(  37)		if (_hx_tmp) {
HXLINE(  38)			return null();
            		}
HXLINE(  39)		 ::Dynamic c = o->__GetClass();
HXLINE(  40)		::String _hx_switch_0 = ( (::String)(c->toString()) );
            		if (  (_hx_switch_0==HX_("Class",18,e8,85,db)) ){
HXLINE(  44)			return null();
HXDLIN(  44)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("__Anon",8c,1a,43,da)) ){
HXLINE(  42)			return null();
HXDLIN(  42)			goto _hx_goto_0;
            		}
            		_hx_goto_0:;
HXLINE(  46)		return c;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Type_obj,getClass,return )

::hx::Class Type_obj::getEnum( ::Dynamic o){
            	HX_STACKFRAME(&_hx_pos_fd61cb8e002c8329_50_getEnum)
HXLINE(  51)		if (::hx::IsNull( o )) {
HXLINE(  52)			return null();
            		}
HXLINE(  53)		return o->__GetClass();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Type_obj,getEnum,return )

::hx::Class Type_obj::getSuperClass(::hx::Class c){
            	HX_STACKFRAME(&_hx_pos_fd61cb8e002c8329_58_getSuperClass)
HXDLIN(  58)		return c->GetSuper();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Type_obj,getSuperClass,return )

::String Type_obj::getClassName(::hx::Class c){
            	HX_STACKFRAME(&_hx_pos_fd61cb8e002c8329_61_getClassName)
HXLINE(  62)		if (::hx::IsNull( c )) {
HXLINE(  63)			return null();
            		}
HXLINE(  64)		return c->mName;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Type_obj,getClassName,return )

::String Type_obj::getEnumName(::hx::Class e){
            	HX_STACKFRAME(&_hx_pos_fd61cb8e002c8329_68_getEnumName)
HXDLIN(  68)		return ( (::String)(e->__ToString()) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Type_obj,getEnumName,return )

::hx::Class Type_obj::resolveClass(::String name){
            	HX_STACKFRAME(&_hx_pos_fd61cb8e002c8329_72_resolveClass)
HXLINE(  73)		::hx::Class result =  ::hx::Class_obj::Resolve(name);
HXLINE(  74)		bool _hx_tmp;
HXDLIN(  74)		if (::hx::IsNotNull( result )) {
HXLINE(  74)			_hx_tmp = ( (bool)(result->__IsEnum()) );
            		}
            		else {
HXLINE(  74)			_hx_tmp = false;
            		}
HXDLIN(  74)		if (_hx_tmp) {
HXLINE(  75)			return null();
            		}
HXLINE(  76)		return result;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Type_obj,resolveClass,return )

::hx::Class Type_obj::resolveEnum(::String name){
            	HX_STACKFRAME(&_hx_pos_fd61cb8e002c8329_80_resolveEnum)
HXLINE(  81)		::hx::Class result =  ::hx::Class_obj::Resolve(name);
HXLINE(  82)		bool _hx_tmp;
HXDLIN(  82)		if (::hx::IsNotNull( result )) {
HXLINE(  82)			_hx_tmp = !(( (bool)(result->__IsEnum()) ));
            		}
            		else {
HXLINE(  82)			_hx_tmp = false;
            		}
HXDLIN(  82)		if (_hx_tmp) {
HXLINE(  83)			return null();
            		}
HXLINE(  84)		return result;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Type_obj,resolveEnum,return )

 ::Dynamic Type_obj::createInstance(::hx::Class cl,::cpp::VirtualArray args){
            	HX_STACKFRAME(&_hx_pos_fd61cb8e002c8329_88_createInstance)
HXLINE(  89)		if (::hx::IsNotNull( cl )) {
HXLINE(  90)			return cl->ConstructArgs(args);
            		}
HXLINE(  91)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Type_obj,createInstance,return )

 ::Dynamic Type_obj::createEmptyInstance(::hx::Class cl){
            	HX_STACKFRAME(&_hx_pos_fd61cb8e002c8329_96_createEmptyInstance)
HXDLIN(  96)		return cl->ConstructEmpty();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Type_obj,createEmptyInstance,return )

 ::Dynamic Type_obj::createEnum(::hx::Class e,::String constr,::cpp::VirtualArray params){
            	HX_STACKFRAME(&_hx_pos_fd61cb8e002c8329_100_createEnum)
HXDLIN( 100)		return e->ConstructEnum(constr,params);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Type_obj,createEnum,return )

::Array< ::String > Type_obj::getInstanceFields(::hx::Class c){
            	HX_STACKFRAME(&_hx_pos_fd61cb8e002c8329_111_getInstanceFields)
HXDLIN( 111)		return ( (::Array< ::String >)(c->GetInstanceFields()) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Type_obj,getInstanceFields,return )

::Array< ::String > Type_obj::getClassFields(::hx::Class c){
            	HX_STACKFRAME(&_hx_pos_fd61cb8e002c8329_115_getClassFields)
HXDLIN( 115)		return ( (::Array< ::String >)(c->GetClassFields()) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Type_obj,getClassFields,return )

::Array< ::String > Type_obj::getEnumConstructs(::hx::Class e){
            	HX_STACKFRAME(&_hx_pos_fd61cb8e002c8329_120_getEnumConstructs)
HXDLIN( 120)		return ( (::Array< ::String >)(e->GetClassFields()) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Type_obj,getEnumConstructs,return )

 ::ValueType Type_obj::_hx_typeof( ::Dynamic v){
            	HX_STACKFRAME(&_hx_pos_fd61cb8e002c8329_124_typeof)
HXLINE( 125)		if (::hx::IsNull( v )) {
HXLINE( 126)			return ::ValueType_obj::TNull_dyn();
            		}
HXLINE( 127)		int t = ( (int)(v->__GetType()) );
HXLINE( 128)		switch((int)(t)){
            			case (int)1: {
HXLINE( 134)				return ::ValueType_obj::TFloat_dyn();
            			}
            			break;
            			case (int)2: {
HXLINE( 130)				return ::ValueType_obj::TBool_dyn();
            			}
            			break;
            			case (int)4: {
HXLINE( 138)				return ::ValueType_obj::TObject_dyn();
            			}
            			break;
            			case (int)6: {
HXLINE( 136)				return ::ValueType_obj::TFunction_dyn();
            			}
            			break;
            			case (int)7: {
HXLINE( 140)				return ::ValueType_obj::TEnum(v->__GetClass());
            			}
            			break;
            			case (int)255: {
HXLINE( 132)				return ::ValueType_obj::TInt_dyn();
            			}
            			break;
            			default:{
HXLINE( 142)				return ::ValueType_obj::TClass(v->__GetClass());
            			}
            		}
HXLINE( 128)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Type_obj,_hx_typeof,return )

::String Type_obj::enumConstructor( ::Dynamic e){
            	HX_STACKFRAME(&_hx_pos_fd61cb8e002c8329_153_enumConstructor)
HXLINE( 154)		 hx::EnumBase value = ( ( hx::EnumBase)(e) );
HXLINE( 155)		return value->_hx_getTag();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Type_obj,enumConstructor,return )

::cpp::VirtualArray Type_obj::enumParameters( ::Dynamic e){
            	HX_STACKFRAME(&_hx_pos_fd61cb8e002c8329_158_enumParameters)
HXLINE( 159)		 hx::EnumBase value = ( ( hx::EnumBase)(e) );
HXLINE( 160)		return value->_hx_getParameters();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Type_obj,enumParameters,return )


Type_obj::Type_obj()
{
}

bool Type_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"typeof") ) { outValue = _hx_typeof_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getEnum") ) { outValue = getEnum_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getClass") ) { outValue = getClass_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"createEnum") ) { outValue = createEnum_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getEnumName") ) { outValue = getEnumName_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"resolveEnum") ) { outValue = resolveEnum_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getClassName") ) { outValue = getClassName_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"resolveClass") ) { outValue = resolveClass_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getSuperClass") ) { outValue = getSuperClass_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"createInstance") ) { outValue = createInstance_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getClassFields") ) { outValue = getClassFields_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"enumParameters") ) { outValue = enumParameters_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"enumConstructor") ) { outValue = enumConstructor_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getInstanceFields") ) { outValue = getInstanceFields_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getEnumConstructs") ) { outValue = getEnumConstructs_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"createEmptyInstance") ) { outValue = createEmptyInstance_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Type_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Type_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Type_obj::__mClass;

static ::String Type_obj_sStaticFields[] = {
	HX_("getClass",c2,87,2f,a8),
	HX_("getEnum",b7,1a,99,15),
	HX_("getSuperClass",f3,04,7a,04),
	HX_("getClassName",2d,2f,94,eb),
	HX_("getEnumName",a2,e0,5a,53),
	HX_("resolveClass",ac,bd,dd,80),
	HX_("resolveEnum",0d,90,51,de),
	HX_("createInstance",b1,9e,1b,ac),
	HX_("createEmptyInstance",a6,26,85,ce),
	HX_("createEnum",1d,2c,a4,55),
	HX_("getInstanceFields",24,2f,97,ed),
	HX_("getClassFields",db,c7,75,7f),
	HX_("getEnumConstructs",13,06,6d,83),
	HX_("typeof",51,f6,36,57),
	HX_("enumConstructor",79,a7,32,c9),
	HX_("enumParameters",0b,59,78,fa),
	::String(null())
};

void Type_obj::__register()
{
	Type_obj _hx_dummy;
	Type_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Type",da,1e,e2,37);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Type_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Type_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Type_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Type_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Type_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

