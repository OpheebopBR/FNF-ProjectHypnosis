#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_actions__FlxSteamController_DigitalActionData
#include <flixel/input/actions/_FlxSteamController/DigitalActionData.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_9afc3f56130d1af7_298_new,"flixel.input.actions._FlxSteamController.DigitalActionData","new",0x4c5bf9ae,"flixel.input.actions._FlxSteamController.DigitalActionData.new","flixel/input/actions/FlxSteamController.hx",298,0xf3119a9a)
namespace flixel{
namespace input{
namespace actions{
namespace _FlxSteamController{

void DigitalActionData_obj::__construct(bool bActive,bool bState){
            	HX_STACKFRAME(&_hx_pos_9afc3f56130d1af7_298_new)
HXLINE( 299)		this->bActive = bActive;
HXLINE( 300)		this->bState = bState;
            	}

Dynamic DigitalActionData_obj::__CreateEmpty() { return new DigitalActionData_obj; }

void *DigitalActionData_obj::_hx_vtable = 0;

Dynamic DigitalActionData_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DigitalActionData_obj > _hx_result = new DigitalActionData_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool DigitalActionData_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6cab160e;
}


DigitalActionData_obj::DigitalActionData_obj()
{
}

::hx::Val DigitalActionData_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"bState") ) { return ::hx::Val( bState ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bActive") ) { return ::hx::Val( bActive ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val DigitalActionData_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"bState") ) { bState=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bActive") ) { bActive=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DigitalActionData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("bActive",c8,2b,12,36));
	outFields->push(HX_("bState",4f,42,32,46));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DigitalActionData_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(DigitalActionData_obj,bActive),HX_("bActive",c8,2b,12,36)},
	{::hx::fsBool,(int)offsetof(DigitalActionData_obj,bState),HX_("bState",4f,42,32,46)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *DigitalActionData_obj_sStaticStorageInfo = 0;
#endif

static ::String DigitalActionData_obj_sMemberFields[] = {
	HX_("bActive",c8,2b,12,36),
	HX_("bState",4f,42,32,46),
	::String(null()) };

::hx::Class DigitalActionData_obj::__mClass;

void DigitalActionData_obj::__register()
{
	DigitalActionData_obj _hx_dummy;
	DigitalActionData_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.input.actions._FlxSteamController.DigitalActionData",bc,4a,5e,c0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DigitalActionData_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DigitalActionData_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DigitalActionData_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DigitalActionData_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace input
} // end namespace actions
} // end namespace _FlxSteamController
