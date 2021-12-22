#include <hxcpp.h>

#ifndef INCLUDED_MultiCallback
#include <MultiCallback.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_6e3535bb8cfd14a6_265_new,"MultiCallback","new",0x3682e930,"MultiCallback.new","LoadingState.hx",265,0x53ff9bc9)
HX_LOCAL_STACK_FRAME(_hx_pos_6e3535bb8cfd14a6_289_add,"MultiCallback","add",0x36790af1,"MultiCallback.add","LoadingState.hx",289,0x53ff9bc9)
HX_LOCAL_STACK_FRAME(_hx_pos_6e3535bb8cfd14a6_282_add,"MultiCallback","add",0x36790af1,"MultiCallback.add","LoadingState.hx",282,0x53ff9bc9)
HX_LOCAL_STACK_FRAME(_hx_pos_6e3535bb8cfd14a6_314_log,"MultiCallback","log",0x36816d54,"MultiCallback.log","LoadingState.hx",314,0x53ff9bc9)
HX_LOCAL_STACK_FRAME(_hx_pos_6e3535bb8cfd14a6_318_getFired,"MultiCallback","getFired",0x1ac970a8,"MultiCallback.getFired","LoadingState.hx",318,0x53ff9bc9)
HX_LOCAL_STACK_FRAME(_hx_pos_6e3535bb8cfd14a6_319_getUnfired,"MultiCallback","getUnfired",0xfdf08a2f,"MultiCallback.getUnfired","LoadingState.hx",319,0x53ff9bc9)

void MultiCallback_obj::__construct( ::Dynamic callback,::String logId){
            	HX_GC_STACKFRAME(&_hx_pos_6e3535bb8cfd14a6_265_new)
HXLINE( 273)		this->fired = ::Array_obj< ::String >::__new();
HXLINE( 272)		this->unfired =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 270)		this->numRemaining = 0;
HXLINE( 269)		this->length = 0;
HXLINE( 268)		this->logId = null();
HXLINE( 277)		this->callback = callback;
HXLINE( 278)		this->logId = logId;
            	}

Dynamic MultiCallback_obj::__CreateEmpty() { return new MultiCallback_obj; }

void *MultiCallback_obj::_hx_vtable = 0;

Dynamic MultiCallback_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MultiCallback_obj > _hx_result = new MultiCallback_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool MultiCallback_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x40f9e67e;
}

 ::Dynamic MultiCallback_obj::add(::String __o_id){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0,::Array< ::String >,id1, ::MultiCallback,_gthis) HXARGC(0)
            		void _hx_run(){
            			HX_STACKFRAME(&_hx_pos_6e3535bb8cfd14a6_289_add)
HXLINE( 289)			if (_gthis->unfired->exists(id1->__get(0))) {
HXLINE( 291)				_gthis->unfired->remove(id1->__get(0));
HXLINE( 292)				_gthis->fired->push(id1->__get(0));
HXLINE( 293)				_gthis->numRemaining--;
HXLINE( 295)				if (::hx::IsNotNull( _gthis->logId )) {
HXLINE( 296)					if (::hx::IsNotNull( _gthis->logId )) {
HXLINE( 296)						::haxe::Log_obj::trace((((HX_("",00,00,00,00) + _gthis->logId) + HX_(": ",a6,32,00,00)) + ((((HX_("fired ",72,04,21,89) + id1->__get(0)) + HX_(", ",74,26,00,00)) + _gthis->numRemaining) + HX_(" remaining",d6,c2,10,c5))),::hx::SourceInfo(HX_("source/LoadingState.hx",55,7f,fd,f0),315,HX_("MultiCallback",3e,d1,b2,64),HX_("log",84,54,52,00)));
            					}
            				}
HXLINE( 298)				if ((_gthis->numRemaining == 0)) {
HXLINE( 300)					if (::hx::IsNotNull( _gthis->logId )) {
HXLINE( 301)						if (::hx::IsNotNull( _gthis->logId )) {
HXLINE( 301)							::haxe::Log_obj::trace((((HX_("",00,00,00,00) + _gthis->logId) + HX_(": ",a6,32,00,00)) + HX_("all callbacks fired",5d,d8,ec,82)),::hx::SourceInfo(HX_("source/LoadingState.hx",55,7f,fd,f0),315,HX_("MultiCallback",3e,d1,b2,64),HX_("log",84,54,52,00)));
            						}
            					}
HXLINE( 302)					_gthis->callback();
            				}
            			}
            			else {
HXLINE( 306)				if (::hx::IsNotNull( _gthis->logId )) {
HXLINE( 306)					::haxe::Log_obj::trace((((HX_("",00,00,00,00) + _gthis->logId) + HX_(": ",a6,32,00,00)) + (HX_("already fired ",fa,e7,0c,57) + id1->__get(0))),::hx::SourceInfo(HX_("source/LoadingState.hx",55,7f,fd,f0),315,HX_("MultiCallback",3e,d1,b2,64),HX_("log",84,54,52,00)));
            				}
            			}
            		}
            		HX_END_LOCAL_FUNC0((void))

            		::String id = __o_id;
            		if (::hx::IsNull(__o_id)) id = HX_("untitled",e5,fe,be,25);
            	HX_STACKFRAME(&_hx_pos_6e3535bb8cfd14a6_282_add)
HXDLIN( 282)		::Array< ::String > id1 = ::Array_obj< ::String >::__new(1)->init(0,id);
HXDLIN( 282)		 ::MultiCallback _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 283)		id1[0] = (((HX_("",00,00,00,00) + this->length) + HX_(":",3a,00,00,00)) + id1->__get(0));
HXLINE( 284)		this->length++;
HXLINE( 285)		this->numRemaining++;
HXLINE( 286)		 ::Dynamic func = null();
HXLINE( 287)		func =  ::Dynamic(new _hx_Closure_0(id1,_gthis));
HXLINE( 308)		this->unfired->set(id1->__get(0),func);
HXLINE( 309)		return func;
            	}


HX_DEFINE_DYNAMIC_FUNC1(MultiCallback_obj,add,return )

void MultiCallback_obj::log(::String msg){
            	HX_STACKFRAME(&_hx_pos_6e3535bb8cfd14a6_314_log)
HXDLIN( 314)		if (::hx::IsNotNull( this->logId )) {
HXLINE( 315)			::haxe::Log_obj::trace((((HX_("",00,00,00,00) + this->logId) + HX_(": ",a6,32,00,00)) + msg),::hx::SourceInfo(HX_("source/LoadingState.hx",55,7f,fd,f0),315,HX_("MultiCallback",3e,d1,b2,64),HX_("log",84,54,52,00)));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(MultiCallback_obj,log,(void))

::Array< ::String > MultiCallback_obj::getFired(){
            	HX_STACKFRAME(&_hx_pos_6e3535bb8cfd14a6_318_getFired)
HXDLIN( 318)		return this->fired->copy();
            	}


HX_DEFINE_DYNAMIC_FUNC0(MultiCallback_obj,getFired,return )

::Array< ::String > MultiCallback_obj::getUnfired(){
            	HX_STACKFRAME(&_hx_pos_6e3535bb8cfd14a6_319_getUnfired)
HXDLIN( 319)		::Array< ::String > _g = ::Array_obj< ::String >::__new(0);
HXDLIN( 319)		{
HXDLIN( 319)			 ::Dynamic id = this->unfired->keys();
HXDLIN( 319)			while(( (bool)(id->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXDLIN( 319)				::String id1 = ( (::String)(id->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN( 319)				_g->push(id1);
            			}
            		}
HXDLIN( 319)		return _g;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MultiCallback_obj,getUnfired,return )


::hx::ObjectPtr< MultiCallback_obj > MultiCallback_obj::__new( ::Dynamic callback,::String logId) {
	::hx::ObjectPtr< MultiCallback_obj > __this = new MultiCallback_obj();
	__this->__construct(callback,logId);
	return __this;
}

::hx::ObjectPtr< MultiCallback_obj > MultiCallback_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic callback,::String logId) {
	MultiCallback_obj *__this = (MultiCallback_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MultiCallback_obj), true, "MultiCallback"));
	*(void **)__this = MultiCallback_obj::_hx_vtable;
	__this->__construct(callback,logId);
	return __this;
}

MultiCallback_obj::MultiCallback_obj()
{
}

void MultiCallback_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MultiCallback);
	HX_MARK_MEMBER_NAME(callback,"callback");
	HX_MARK_MEMBER_NAME(logId,"logId");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(numRemaining,"numRemaining");
	HX_MARK_MEMBER_NAME(unfired,"unfired");
	HX_MARK_MEMBER_NAME(fired,"fired");
	HX_MARK_END_CLASS();
}

void MultiCallback_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(callback,"callback");
	HX_VISIT_MEMBER_NAME(logId,"logId");
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(numRemaining,"numRemaining");
	HX_VISIT_MEMBER_NAME(unfired,"unfired");
	HX_VISIT_MEMBER_NAME(fired,"fired");
}

::hx::Val MultiCallback_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		if (HX_FIELD_EQ(inName,"log") ) { return ::hx::Val( log_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"logId") ) { return ::hx::Val( logId ); }
		if (HX_FIELD_EQ(inName,"fired") ) { return ::hx::Val( fired ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return ::hx::Val( length ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"unfired") ) { return ::hx::Val( unfired ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"callback") ) { return ::hx::Val( callback ); }
		if (HX_FIELD_EQ(inName,"getFired") ) { return ::hx::Val( getFired_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getUnfired") ) { return ::hx::Val( getUnfired_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"numRemaining") ) { return ::hx::Val( numRemaining ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val MultiCallback_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"logId") ) { logId=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fired") ) { fired=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"unfired") ) { unfired=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"callback") ) { callback=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"numRemaining") ) { numRemaining=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MultiCallback_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("logId",7f,bd,f3,78));
	outFields->push(HX_("length",e6,94,07,9f));
	outFields->push(HX_("numRemaining",d0,cf,31,63));
	outFields->push(HX_("unfired",f5,62,2e,fd));
	outFields->push(HX_("fired",ee,6b,9d,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MultiCallback_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(MultiCallback_obj,callback),HX_("callback",c5,99,06,7f)},
	{::hx::fsString,(int)offsetof(MultiCallback_obj,logId),HX_("logId",7f,bd,f3,78)},
	{::hx::fsInt,(int)offsetof(MultiCallback_obj,length),HX_("length",e6,94,07,9f)},
	{::hx::fsInt,(int)offsetof(MultiCallback_obj,numRemaining),HX_("numRemaining",d0,cf,31,63)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(MultiCallback_obj,unfired),HX_("unfired",f5,62,2e,fd)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(MultiCallback_obj,fired),HX_("fired",ee,6b,9d,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *MultiCallback_obj_sStaticStorageInfo = 0;
#endif

static ::String MultiCallback_obj_sMemberFields[] = {
	HX_("callback",c5,99,06,7f),
	HX_("logId",7f,bd,f3,78),
	HX_("length",e6,94,07,9f),
	HX_("numRemaining",d0,cf,31,63),
	HX_("unfired",f5,62,2e,fd),
	HX_("fired",ee,6b,9d,00),
	HX_("add",21,f2,49,00),
	HX_("log",84,54,52,00),
	HX_("getFired",78,7b,74,60),
	HX_("getUnfired",ff,e8,8f,4c),
	::String(null()) };

::hx::Class MultiCallback_obj::__mClass;

void MultiCallback_obj::__register()
{
	MultiCallback_obj _hx_dummy;
	MultiCallback_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("MultiCallback",3e,d1,b2,64);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MultiCallback_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MultiCallback_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MultiCallback_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MultiCallback_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

