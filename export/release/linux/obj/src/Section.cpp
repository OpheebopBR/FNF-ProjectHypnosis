#include <hxcpp.h>

#ifndef INCLUDED_Section
#include <Section.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ad46d0c3569422f9_15_new,"Section","new",0x086f9537,"Section.new","Section.hx",15,0xb56b3e19)
HX_LOCAL_STACK_FRAME(_hx_pos_ad46d0c3569422f9_27_boot,"Section","boot",0x514bfb7b,"Section.boot","Section.hx",27,0xb56b3e19)

void Section_obj::__construct(::hx::Null< int >  __o_lengthInSteps){
            		int lengthInSteps = __o_lengthInSteps.Default(16);
            	HX_STACKFRAME(&_hx_pos_ad46d0c3569422f9_15_new)
HXLINE(  22)		this->mustHitSection = true;
HXLINE(  21)		this->typeOfSection = 0;
HXLINE(  20)		this->gfSection = false;
HXLINE(  19)		this->lengthInSteps = 16;
HXLINE(  17)		this->sectionNotes = ::cpp::VirtualArray_obj::__new(0);
HXLINE(  31)		this->lengthInSteps = lengthInSteps;
            	}

Dynamic Section_obj::__CreateEmpty() { return new Section_obj; }

void *Section_obj::_hx_vtable = 0;

Dynamic Section_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Section_obj > _hx_result = new Section_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Section_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x085fa621;
}

int Section_obj::COPYCAT;


Section_obj::Section_obj()
{
}

void Section_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Section);
	HX_MARK_MEMBER_NAME(sectionNotes,"sectionNotes");
	HX_MARK_MEMBER_NAME(lengthInSteps,"lengthInSteps");
	HX_MARK_MEMBER_NAME(gfSection,"gfSection");
	HX_MARK_MEMBER_NAME(typeOfSection,"typeOfSection");
	HX_MARK_MEMBER_NAME(mustHitSection,"mustHitSection");
	HX_MARK_END_CLASS();
}

void Section_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(sectionNotes,"sectionNotes");
	HX_VISIT_MEMBER_NAME(lengthInSteps,"lengthInSteps");
	HX_VISIT_MEMBER_NAME(gfSection,"gfSection");
	HX_VISIT_MEMBER_NAME(typeOfSection,"typeOfSection");
	HX_VISIT_MEMBER_NAME(mustHitSection,"mustHitSection");
}

::hx::Val Section_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"gfSection") ) { return ::hx::Val( gfSection ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"sectionNotes") ) { return ::hx::Val( sectionNotes ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"lengthInSteps") ) { return ::hx::Val( lengthInSteps ); }
		if (HX_FIELD_EQ(inName,"typeOfSection") ) { return ::hx::Val( typeOfSection ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"mustHitSection") ) { return ::hx::Val( mustHitSection ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Section_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"COPYCAT") ) { outValue = ( COPYCAT ); return true; }
	}
	return false;
}

::hx::Val Section_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"gfSection") ) { gfSection=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"sectionNotes") ) { sectionNotes=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"lengthInSteps") ) { lengthInSteps=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"typeOfSection") ) { typeOfSection=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"mustHitSection") ) { mustHitSection=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Section_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"COPYCAT") ) { COPYCAT=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void Section_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("sectionNotes",1c,c8,a7,fe));
	outFields->push(HX_("lengthInSteps",3c,ed,41,db));
	outFields->push(HX_("gfSection",86,e5,63,d4));
	outFields->push(HX_("typeOfSection",74,f3,25,fb));
	outFields->push(HX_("mustHitSection",3b,5f,87,62));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Section_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(int)offsetof(Section_obj,sectionNotes),HX_("sectionNotes",1c,c8,a7,fe)},
	{::hx::fsInt,(int)offsetof(Section_obj,lengthInSteps),HX_("lengthInSteps",3c,ed,41,db)},
	{::hx::fsBool,(int)offsetof(Section_obj,gfSection),HX_("gfSection",86,e5,63,d4)},
	{::hx::fsInt,(int)offsetof(Section_obj,typeOfSection),HX_("typeOfSection",74,f3,25,fb)},
	{::hx::fsBool,(int)offsetof(Section_obj,mustHitSection),HX_("mustHitSection",3b,5f,87,62)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Section_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &Section_obj::COPYCAT,HX_("COPYCAT",61,0b,65,c3)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Section_obj_sMemberFields[] = {
	HX_("sectionNotes",1c,c8,a7,fe),
	HX_("lengthInSteps",3c,ed,41,db),
	HX_("gfSection",86,e5,63,d4),
	HX_("typeOfSection",74,f3,25,fb),
	HX_("mustHitSection",3b,5f,87,62),
	::String(null()) };

static void Section_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Section_obj::COPYCAT,"COPYCAT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Section_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Section_obj::COPYCAT,"COPYCAT");
};

#endif

::hx::Class Section_obj::__mClass;

static ::String Section_obj_sStaticFields[] = {
	HX_("COPYCAT",61,0b,65,c3),
	::String(null())
};

void Section_obj::__register()
{
	Section_obj _hx_dummy;
	Section_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Section",c5,2d,29,2b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Section_obj::__GetStatic;
	__mClass->mSetStaticField = &Section_obj::__SetStatic;
	__mClass->mMarkFunc = Section_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Section_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Section_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Section_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Section_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Section_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Section_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Section_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_ad46d0c3569422f9_27_boot)
HXDLIN(  27)		COPYCAT = 0;
            	}
}

