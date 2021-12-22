#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_iterators_ArrayIterator
#include <haxe/iterators/ArrayIterator.h>
#endif
#ifndef INCLUDED_haxe_iterators_MapKeyValueIterator
#include <haxe/iterators/MapKeyValueIterator.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_22bae1b4f3b43c4a_58_new,"haxe.ds.StringMap","new",0x0f13f0c6,"haxe.ds.StringMap.new","/usr/share/haxe/std/cpp/_std/haxe/ds/StringMap.hx",58,0x911cf5ce)
HX_LOCAL_STACK_FRAME(_hx_pos_22bae1b4f3b43c4a_61_set,"haxe.ds.StringMap","set",0x0f17bc08,"haxe.ds.StringMap.set","/usr/share/haxe/std/cpp/_std/haxe/ds/StringMap.hx",61,0x911cf5ce)
HX_LOCAL_STACK_FRAME(_hx_pos_22bae1b4f3b43c4a_65_get,"haxe.ds.StringMap","get",0x0f0ea0fc,"haxe.ds.StringMap.get","/usr/share/haxe/std/cpp/_std/haxe/ds/StringMap.hx",65,0x911cf5ce)
HX_LOCAL_STACK_FRAME(_hx_pos_22bae1b4f3b43c4a_69_exists,"haxe.ds.StringMap","exists",0xd35fc136,"haxe.ds.StringMap.exists","/usr/share/haxe/std/cpp/_std/haxe/ds/StringMap.hx",69,0x911cf5ce)
HX_LOCAL_STACK_FRAME(_hx_pos_22bae1b4f3b43c4a_73_remove,"haxe.ds.StringMap","remove",0x18083f9e,"haxe.ds.StringMap.remove","/usr/share/haxe/std/cpp/_std/haxe/ds/StringMap.hx",73,0x911cf5ce)
HX_LOCAL_STACK_FRAME(_hx_pos_22bae1b4f3b43c4a_76_keys,"haxe.ds.StringMap","keys",0x20631ace,"haxe.ds.StringMap.keys","/usr/share/haxe/std/cpp/_std/haxe/ds/StringMap.hx",76,0x911cf5ce)
HX_LOCAL_STACK_FRAME(_hx_pos_22bae1b4f3b43c4a_81_iterator,"haxe.ds.StringMap","iterator",0x40ccf7c8,"haxe.ds.StringMap.iterator","/usr/share/haxe/std/cpp/_std/haxe/ds/StringMap.hx",81,0x911cf5ce)
HX_LOCAL_STACK_FRAME(_hx_pos_22bae1b4f3b43c4a_87_keyValueIterator,"haxe.ds.StringMap","keyValueIterator",0x3fa9e53a,"haxe.ds.StringMap.keyValueIterator","/usr/share/haxe/std/cpp/_std/haxe/ds/StringMap.hx",87,0x911cf5ce)
HX_LOCAL_STACK_FRAME(_hx_pos_22bae1b4f3b43c4a_90_copy,"haxe.ds.StringMap","copy",0x1b20f48f,"haxe.ds.StringMap.copy","/usr/share/haxe/std/cpp/_std/haxe/ds/StringMap.hx",90,0x911cf5ce)
HX_LOCAL_STACK_FRAME(_hx_pos_22bae1b4f3b43c4a_98_toString,"haxe.ds.StringMap","toString",0xe5a17e86,"haxe.ds.StringMap.toString","/usr/share/haxe/std/cpp/_std/haxe/ds/StringMap.hx",98,0x911cf5ce)
HX_LOCAL_STACK_FRAME(_hx_pos_22bae1b4f3b43c4a_103_clear,"haxe.ds.StringMap","clear",0x9fb0f773,"haxe.ds.StringMap.clear","/usr/share/haxe/std/cpp/_std/haxe/ds/StringMap.hx",103,0x911cf5ce)
namespace haxe{
namespace ds{

void StringMap_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_22bae1b4f3b43c4a_58_new)
            	}

Dynamic StringMap_obj::__CreateEmpty() { return new StringMap_obj; }

void *StringMap_obj::_hx_vtable = 0;

Dynamic StringMap_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< StringMap_obj > _hx_result = new StringMap_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool StringMap_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4260cd56;
}

static ::haxe::IMap_obj _hx_haxe_ds_StringMap__hx_haxe_IMap= {
	(  ::Dynamic (::hx::Object::*)( ::Dynamic))&::haxe::ds::StringMap_obj::get_a7a2487a,
	( void (::hx::Object::*)( ::Dynamic, ::Dynamic))&::haxe::ds::StringMap_obj::set_dca24b06,
	( bool (::hx::Object::*)( ::Dynamic))&::haxe::ds::StringMap_obj::exists_64bfc92f,
	( bool (::hx::Object::*)( ::Dynamic))&::haxe::ds::StringMap_obj::remove_64bfc92f,
	(  ::Dynamic (::hx::Object::*)())&::haxe::ds::StringMap_obj::keys,
	(  ::Dynamic (::hx::Object::*)())&::haxe::ds::StringMap_obj::iterator,
	(  ::Dynamic (::hx::Object::*)())&::haxe::ds::StringMap_obj::keyValueIterator,
};

bool StringMap_obj::remove_64bfc92f( ::Dynamic k) {
			return remove(k);
}

bool StringMap_obj::exists_64bfc92f( ::Dynamic k) {
			return exists(k);
}

void StringMap_obj::set_dca24b06( ::Dynamic k, ::Dynamic v) {
			set(k,v);
}

 ::Dynamic StringMap_obj::get_a7a2487a( ::Dynamic k) {
			return get(k);
}
void *StringMap_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x09c2bd39: return &_hx_haxe_ds_StringMap__hx_haxe_IMap;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void StringMap_obj::set(::String key, ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_22bae1b4f3b43c4a_61_set)
HXDLIN(  61)		 ::__string_hash_set(HX_MAP_THIS,key,value);
            	}


HX_DEFINE_DYNAMIC_FUNC2(StringMap_obj,set,(void))

 ::Dynamic StringMap_obj::get(::String key){
            	HX_STACKFRAME(&_hx_pos_22bae1b4f3b43c4a_65_get)
HXDLIN(  65)		return  ::__string_hash_get(this->h,key);
            	}


HX_DEFINE_DYNAMIC_FUNC1(StringMap_obj,get,return )

bool StringMap_obj::exists(::String key){
            	HX_STACKFRAME(&_hx_pos_22bae1b4f3b43c4a_69_exists)
HXDLIN(  69)		return  ::__string_hash_exists(this->h,key);
            	}


HX_DEFINE_DYNAMIC_FUNC1(StringMap_obj,exists,return )

bool StringMap_obj::remove(::String key){
            	HX_STACKFRAME(&_hx_pos_22bae1b4f3b43c4a_73_remove)
HXDLIN(  73)		return  ::__string_hash_remove(this->h,key);
            	}


HX_DEFINE_DYNAMIC_FUNC1(StringMap_obj,remove,return )

 ::Dynamic StringMap_obj::keys(){
            	HX_GC_STACKFRAME(&_hx_pos_22bae1b4f3b43c4a_76_keys)
HXLINE(  77)		::Array< ::String > a =  ::__string_hash_keys(this->h);
HXLINE(  78)		return  ::haxe::iterators::ArrayIterator_obj::__alloc( HX_CTX ,a);
            	}


HX_DEFINE_DYNAMIC_FUNC0(StringMap_obj,keys,return )

 ::Dynamic StringMap_obj::iterator(){
            	HX_GC_STACKFRAME(&_hx_pos_22bae1b4f3b43c4a_81_iterator)
HXLINE(  82)		::cpp::VirtualArray a =  ::__string_hash_values(this->h);
HXLINE(  83)		return  ::haxe::iterators::ArrayIterator_obj::__alloc( HX_CTX ,a);
            	}


HX_DEFINE_DYNAMIC_FUNC0(StringMap_obj,iterator,return )

 ::Dynamic StringMap_obj::keyValueIterator(){
            	HX_GC_STACKFRAME(&_hx_pos_22bae1b4f3b43c4a_87_keyValueIterator)
HXDLIN(  87)		return  ::haxe::iterators::MapKeyValueIterator_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this));
            	}


HX_DEFINE_DYNAMIC_FUNC0(StringMap_obj,keyValueIterator,return )

 ::haxe::ds::StringMap StringMap_obj::copy(){
            	HX_GC_STACKFRAME(&_hx_pos_22bae1b4f3b43c4a_90_copy)
HXLINE(  91)		 ::haxe::ds::StringMap copied =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  92)		{
HXLINE(  92)			 ::Dynamic key = this->keys();
HXDLIN(  92)			while(( (bool)(key->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  92)				::String key1 = ( (::String)(key->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  93)				copied->set(key1,this->get(key1));
            			}
            		}
HXLINE(  94)		return copied;
            	}


HX_DEFINE_DYNAMIC_FUNC0(StringMap_obj,copy,return )

::String StringMap_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_22bae1b4f3b43c4a_98_toString)
HXDLIN(  98)		return  ::__string_hash_to_string(this->h);
            	}


HX_DEFINE_DYNAMIC_FUNC0(StringMap_obj,toString,return )

void StringMap_obj::clear(){
            	HX_STACKFRAME(&_hx_pos_22bae1b4f3b43c4a_103_clear)
HXDLIN( 103)		 ::__string_hash_clear(this->h);
            	}


HX_DEFINE_DYNAMIC_FUNC0(StringMap_obj,clear,(void))


::hx::ObjectPtr< StringMap_obj > StringMap_obj::__new() {
	::hx::ObjectPtr< StringMap_obj > __this = new StringMap_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< StringMap_obj > StringMap_obj::__alloc(::hx::Ctx *_hx_ctx) {
	StringMap_obj *__this = (StringMap_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(StringMap_obj), true, "haxe.ds.StringMap"));
	*(void **)__this = StringMap_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

StringMap_obj::StringMap_obj()
{
}

void StringMap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StringMap);
	HX_MARK_MEMBER_NAME(h,"h");
	HX_MARK_END_CLASS();
}

void StringMap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(h,"h");
}

::hx::Val StringMap_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"h") ) { return ::hx::Val( h ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"keys") ) { return ::hx::Val( keys_dyn() ); }
		if (HX_FIELD_EQ(inName,"copy") ) { return ::hx::Val( copy_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return ::hx::Val( clear_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { return ::hx::Val( exists_dyn() ); }
		if (HX_FIELD_EQ(inName,"remove") ) { return ::hx::Val( remove_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"iterator") ) { return ::hx::Val( iterator_dyn() ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"keyValueIterator") ) { return ::hx::Val( keyValueIterator_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val StringMap_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"h") ) { h=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void StringMap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("h",68,00,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo StringMap_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(StringMap_obj,h),HX_("h",68,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *StringMap_obj_sStaticStorageInfo = 0;
#endif

static ::String StringMap_obj_sMemberFields[] = {
	HX_("h",68,00,00,00),
	HX_("set",a2,9b,57,00),
	HX_("get",96,80,4e,00),
	HX_("exists",dc,1d,e0,bf),
	HX_("remove",44,9c,88,04),
	HX_("keys",f4,e1,06,47),
	HX_("iterator",ee,49,9a,93),
	HX_("keyValueIterator",60,cd,ee,4a),
	HX_("copy",b5,bb,c4,41),
	HX_("toString",ac,d0,6e,38),
	HX_("clear",8d,71,5b,48),
	::String(null()) };

::hx::Class StringMap_obj::__mClass;

void StringMap_obj::__register()
{
	StringMap_obj _hx_dummy;
	StringMap_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ds.StringMap",d4,d5,d6,62);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(StringMap_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< StringMap_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StringMap_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StringMap_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ds
