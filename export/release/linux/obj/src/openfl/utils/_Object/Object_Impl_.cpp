#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_iterators_ArrayIterator
#include <haxe/iterators/ArrayIterator.h>
#endif
#ifndef INCLUDED_haxe_lang_Iterable
#include <haxe/lang/Iterable.h>
#endif
#ifndef INCLUDED_openfl_utils__Object_Object_Impl_
#include <openfl/utils/_Object/Object_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_c98f1d3e0b4ce330_5__new,"openfl.utils._Object.Object_Impl_","_new",0x3180f425,"openfl.utils._Object.Object_Impl_._new","openfl/utils/Object.hx",5,0xcbd6e8e2)
HX_LOCAL_STACK_FRAME(_hx_pos_c98f1d3e0b4ce330_12_hasOwnProperty,"openfl.utils._Object.Object_Impl_","hasOwnProperty",0xff2b1b45,"openfl.utils._Object.Object_Impl_.hasOwnProperty","openfl/utils/Object.hx",12,0xcbd6e8e2)
HX_LOCAL_STACK_FRAME(_hx_pos_c98f1d3e0b4ce330_16_isPrototypeOf,"openfl.utils._Object.Object_Impl_","isPrototypeOf",0xd2a05c4b,"openfl.utils._Object.Object_Impl_.isPrototypeOf","openfl/utils/Object.hx",16,0xcbd6e8e2)
HX_LOCAL_STACK_FRAME(_hx_pos_c98f1d3e0b4ce330_30_iterator,"openfl.utils._Object.Object_Impl_","iterator",0x99ccdab2,"openfl.utils._Object.Object_Impl_.iterator","openfl/utils/Object.hx",30,0xcbd6e8e2)
HX_LOCAL_STACK_FRAME(_hx_pos_c98f1d3e0b4ce330_38_propertyIsEnumerable,"openfl.utils._Object.Object_Impl_","propertyIsEnumerable",0xddba318b,"openfl.utils._Object.Object_Impl_.propertyIsEnumerable","openfl/utils/Object.hx",38,0xcbd6e8e2)
HX_LOCAL_STACK_FRAME(_hx_pos_c98f1d3e0b4ce330_45_toLocaleString,"openfl.utils._Object.Object_Impl_","toLocaleString",0x947c7aea,"openfl.utils._Object.Object_Impl_.toLocaleString","openfl/utils/Object.hx",45,0xcbd6e8e2)
HX_LOCAL_STACK_FRAME(_hx_pos_c98f1d3e0b4ce330_50_toString,"openfl.utils._Object.Object_Impl_","toString",0x3ea16170,"openfl.utils._Object.Object_Impl_.toString","openfl/utils/Object.hx",50,0xcbd6e8e2)
HX_LOCAL_STACK_FRAME(_hx_pos_c98f1d3e0b4ce330_55_valueOf,"openfl.utils._Object.Object_Impl_","valueOf",0xaf96f6a4,"openfl.utils._Object.Object_Impl_.valueOf","openfl/utils/Object.hx",55,0xcbd6e8e2)
HX_LOCAL_STACK_FRAME(_hx_pos_c98f1d3e0b4ce330_61___fieldRead,"openfl.utils._Object.Object_Impl_","__fieldRead",0x26777bcc,"openfl.utils._Object.Object_Impl_.__fieldRead","openfl/utils/Object.hx",61,0xcbd6e8e2)
HX_LOCAL_STACK_FRAME(_hx_pos_c98f1d3e0b4ce330_68___fieldWrite,"openfl.utils._Object.Object_Impl_","__fieldWrite",0x6bb3a3a9,"openfl.utils._Object.Object_Impl_.__fieldWrite","openfl/utils/Object.hx",68,0xcbd6e8e2)
HX_LOCAL_STACK_FRAME(_hx_pos_c98f1d3e0b4ce330_75___get,"openfl.utils._Object.Object_Impl_","__get",0x156bee32,"openfl.utils._Object.Object_Impl_.__get","openfl/utils/Object.hx",75,0xcbd6e8e2)
HX_LOCAL_STACK_FRAME(_hx_pos_c98f1d3e0b4ce330_80___set,"openfl.utils._Object.Object_Impl_","__set",0x1575093e,"openfl.utils._Object.Object_Impl_.__set","openfl/utils/Object.hx",80,0xcbd6e8e2)
HX_LOCAL_STACK_FRAME(_hx_pos_c98f1d3e0b4ce330_3_boot,"openfl.utils._Object.Object_Impl_","boot",0x337d62f6,"openfl.utils._Object.Object_Impl_.boot","openfl/utils/Object.hx",3,0xcbd6e8e2)
namespace openfl{
namespace utils{
namespace _Object{

void Object_Impl__obj::__construct() { }

Dynamic Object_Impl__obj::__CreateEmpty() { return new Object_Impl__obj; }

void *Object_Impl__obj::_hx_vtable = 0;

Dynamic Object_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Object_Impl__obj > _hx_result = new Object_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Object_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6bbb6220;
}

 ::Dynamic Object_Impl__obj::_new(){
            	HX_STACKFRAME(&_hx_pos_c98f1d3e0b4ce330_5__new)
HXDLIN(   5)		 ::Dynamic this1 =  ::Dynamic(::hx::Anon_obj::Create(0));
HXDLIN(   5)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Object_Impl__obj,_new,return )

bool Object_Impl__obj::hasOwnProperty( ::Dynamic this1,::String name){
            	HX_STACKFRAME(&_hx_pos_c98f1d3e0b4ce330_12_hasOwnProperty)
HXDLIN(  12)		if (::hx::IsNotNull( this1 )) {
HXDLIN(  12)			return ::Reflect_obj::hasField(this1,name);
            		}
            		else {
HXDLIN(  12)			return false;
            		}
HXDLIN(  12)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Object_Impl__obj,hasOwnProperty,return )

bool Object_Impl__obj::isPrototypeOf( ::Dynamic this1,::hx::Class theClass){
            	HX_STACKFRAME(&_hx_pos_c98f1d3e0b4ce330_16_isPrototypeOf)
HXLINE(  17)		::hx::Class c = ::Type_obj::getClass(this1);
HXLINE(  19)		while(::hx::IsNotNull( c )){
HXLINE(  21)			if (::hx::IsPointerEq( c,theClass )) {
HXLINE(  21)				return true;
            			}
HXLINE(  22)			c = ::Type_obj::getSuperClass(c);
            		}
HXLINE(  25)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Object_Impl__obj,isPrototypeOf,return )

 ::Dynamic Object_Impl__obj::iterator( ::Dynamic this1){
            	HX_GC_STACKFRAME(&_hx_pos_c98f1d3e0b4ce330_30_iterator)
HXLINE(  31)		::Array< ::String > fields = ::Reflect_obj::fields(this1);
HXLINE(  32)		if (::hx::IsNull( fields )) {
HXLINE(  32)			fields = ::Array_obj< ::String >::__new(0);
            		}
HXLINE(  33)		return  ::haxe::iterators::ArrayIterator_obj::__alloc( HX_CTX ,fields);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Object_Impl__obj,iterator,return )

bool Object_Impl__obj::propertyIsEnumerable( ::Dynamic this1,::String name){
            	HX_STACKFRAME(&_hx_pos_c98f1d3e0b4ce330_38_propertyIsEnumerable)
HXDLIN(  38)		bool _hx_tmp;
HXDLIN(  38)		if (::hx::IsNotNull( this1 )) {
HXDLIN(  38)			_hx_tmp = ::Reflect_obj::hasField(this1,name);
            		}
            		else {
HXDLIN(  38)			_hx_tmp = false;
            		}
HXDLIN(  38)		if (_hx_tmp) {
HXLINE(  40)			return ::Std_obj::isOfType(::Reflect_obj::field(this1,name),::hx::ClassOf< ::haxe::lang::Iterable >());
            		}
            		else {
HXDLIN(  38)			return false;
            		}
HXDLIN(  38)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Object_Impl__obj,propertyIsEnumerable,return )

::String Object_Impl__obj::toLocaleString( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_c98f1d3e0b4ce330_45_toLocaleString)
HXDLIN(  45)		return ::Std_obj::string(this1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Object_Impl__obj,toLocaleString,return )

::String Object_Impl__obj::toString( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_c98f1d3e0b4ce330_50_toString)
HXDLIN(  50)		return ::Std_obj::string(this1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Object_Impl__obj,toString,return )

 ::Dynamic Object_Impl__obj::valueOf( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_c98f1d3e0b4ce330_55_valueOf)
HXDLIN(  55)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Object_Impl__obj,valueOf,return )

 ::Dynamic Object_Impl__obj::_hx___fieldRead( ::Dynamic this1,::String name){
            	HX_STACKFRAME(&_hx_pos_c98f1d3e0b4ce330_61___fieldRead)
HXDLIN(  61)		return ::Reflect_obj::getProperty(this1,name);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Object_Impl__obj,_hx___fieldRead,return )

 ::Dynamic Object_Impl__obj::_hx___fieldWrite( ::Dynamic this1,::String name, ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_c98f1d3e0b4ce330_68___fieldWrite)
HXDLIN(  68)		::Reflect_obj::setProperty(this1,name,value);
HXDLIN(  68)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Object_Impl__obj,_hx___fieldWrite,return )

 ::Dynamic Object_Impl__obj::__get( ::Dynamic this1,::String key){
            	HX_STACKFRAME(&_hx_pos_c98f1d3e0b4ce330_75___get)
HXDLIN(  75)		return ::Reflect_obj::getProperty(this1,key);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Object_Impl__obj,__get,return )

 ::Dynamic Object_Impl__obj::__set( ::Dynamic this1,::String key, ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_c98f1d3e0b4ce330_80___set)
HXLINE(  81)		::Reflect_obj::setProperty(this1,key,value);
HXLINE(  82)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Object_Impl__obj,__set,return )


Object_Impl__obj::Object_Impl__obj()
{
}

bool Object_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"__get") ) { outValue = __get_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"__set") ) { outValue = __set_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"valueOf") ) { outValue = valueOf_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"iterator") ) { outValue = iterator_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__fieldRead") ) { outValue = _hx___fieldRead_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__fieldWrite") ) { outValue = _hx___fieldWrite_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"isPrototypeOf") ) { outValue = isPrototypeOf_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"hasOwnProperty") ) { outValue = hasOwnProperty_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toLocaleString") ) { outValue = toLocaleString_dyn(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"propertyIsEnumerable") ) { outValue = propertyIsEnumerable_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Object_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Object_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class Object_Impl__obj::__mClass;

static ::String Object_Impl__obj_sStaticFields[] = {
	HX_("_new",61,15,1f,3f),
	HX_("hasOwnProperty",81,9f,3d,5e),
	HX_("isPrototypeOf",8f,33,2a,cc),
	HX_("iterator",ee,49,9a,93),
	HX_("propertyIsEnumerable",c7,8a,8f,a6),
	HX_("toLocaleString",26,ff,8e,f3),
	HX_("toString",ac,d0,6e,38),
	HX_("valueOf",e8,42,6c,70),
	HX_("__fieldRead",10,3a,22,11),
	HX_("__fieldWrite",e5,60,6f,d6),
	HX_("__get",76,e1,2a,f2),
	HX_("__set",82,fc,33,f2),
	::String(null())
};

void Object_Impl__obj::__register()
{
	Object_Impl__obj _hx_dummy;
	Object_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.utils._Object.Object_Impl_",2a,f8,c6,48);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Object_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Object_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Object_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Object_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Object_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Object_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_c98f1d3e0b4ce330_3_boot)
HXDLIN(   3)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("statics",05,3c,65,36), ::Dynamic(::hx::Anon_obj::Create(3)
            				->setFixed(0,HX_("iterator",ee,49,9a,93), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20)))))
            				->setFixed(1,HX_("__get",76,e1,2a,f2), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20)))))
            				->setFixed(2,HX_("__set",82,fc,33,f2), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))))));
            	}
}

} // end namespace openfl
} // end namespace utils
} // end namespace _Object
