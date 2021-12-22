#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_actions__FlxSteamController_FlxSteamControllerMetadata
#include <flixel/input/actions/_FlxSteamController/FlxSteamControllerMetadata.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b3c7a14cf0e9a2b1_305_new,"flixel.input.actions._FlxSteamController.FlxSteamControllerMetadata","new",0x409d3fb7,"flixel.input.actions._FlxSteamController.FlxSteamControllerMetadata.new","flixel/input/actions/FlxSteamController.hx",305,0xf3119a9a)
namespace flixel{
namespace input{
namespace actions{
namespace _FlxSteamController{

void FlxSteamControllerMetadata_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_b3c7a14cf0e9a2b1_305_new)
HXLINE( 310)		this->connected =  ::flixel::input::FlxInput_obj::__alloc( HX_CTX ,0);
HXLINE( 309)		this->active = false;
HXLINE( 308)		this->actionSet = -1;
HXLINE( 307)		this->handle = -1;
            	}

Dynamic FlxSteamControllerMetadata_obj::__CreateEmpty() { return new FlxSteamControllerMetadata_obj; }

void *FlxSteamControllerMetadata_obj::_hx_vtable = 0;

Dynamic FlxSteamControllerMetadata_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxSteamControllerMetadata_obj > _hx_result = new FlxSteamControllerMetadata_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxSteamControllerMetadata_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1aabd2b3;
}


::hx::ObjectPtr< FlxSteamControllerMetadata_obj > FlxSteamControllerMetadata_obj::__new() {
	::hx::ObjectPtr< FlxSteamControllerMetadata_obj > __this = new FlxSteamControllerMetadata_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< FlxSteamControllerMetadata_obj > FlxSteamControllerMetadata_obj::__alloc(::hx::Ctx *_hx_ctx) {
	FlxSteamControllerMetadata_obj *__this = (FlxSteamControllerMetadata_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxSteamControllerMetadata_obj), true, "flixel.input.actions._FlxSteamController.FlxSteamControllerMetadata"));
	*(void **)__this = FlxSteamControllerMetadata_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FlxSteamControllerMetadata_obj::FlxSteamControllerMetadata_obj()
{
}

void FlxSteamControllerMetadata_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxSteamControllerMetadata);
	HX_MARK_MEMBER_NAME(handle,"handle");
	HX_MARK_MEMBER_NAME(actionSet,"actionSet");
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_MEMBER_NAME(connected,"connected");
	HX_MARK_END_CLASS();
}

void FlxSteamControllerMetadata_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(handle,"handle");
	HX_VISIT_MEMBER_NAME(actionSet,"actionSet");
	HX_VISIT_MEMBER_NAME(active,"active");
	HX_VISIT_MEMBER_NAME(connected,"connected");
}

::hx::Val FlxSteamControllerMetadata_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { return ::hx::Val( handle ); }
		if (HX_FIELD_EQ(inName,"active") ) { return ::hx::Val( active ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"actionSet") ) { return ::hx::Val( actionSet ); }
		if (HX_FIELD_EQ(inName,"connected") ) { return ::hx::Val( connected ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxSteamControllerMetadata_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { handle=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"actionSet") ) { actionSet=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"connected") ) { connected=inValue.Cast<  ::flixel::input::FlxInput >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxSteamControllerMetadata_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("handle",a8,83,fd,b7));
	outFields->push(HX_("actionSet",8c,cd,9c,11));
	outFields->push(HX_("active",c6,41,46,16));
	outFields->push(HX_("connected",c9,e2,f6,a2));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxSteamControllerMetadata_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(FlxSteamControllerMetadata_obj,handle),HX_("handle",a8,83,fd,b7)},
	{::hx::fsInt,(int)offsetof(FlxSteamControllerMetadata_obj,actionSet),HX_("actionSet",8c,cd,9c,11)},
	{::hx::fsBool,(int)offsetof(FlxSteamControllerMetadata_obj,active),HX_("active",c6,41,46,16)},
	{::hx::fsObject /*  ::flixel::input::FlxInput */ ,(int)offsetof(FlxSteamControllerMetadata_obj,connected),HX_("connected",c9,e2,f6,a2)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxSteamControllerMetadata_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxSteamControllerMetadata_obj_sMemberFields[] = {
	HX_("handle",a8,83,fd,b7),
	HX_("actionSet",8c,cd,9c,11),
	HX_("active",c6,41,46,16),
	HX_("connected",c9,e2,f6,a2),
	::String(null()) };

::hx::Class FlxSteamControllerMetadata_obj::__mClass;

void FlxSteamControllerMetadata_obj::__register()
{
	FlxSteamControllerMetadata_obj _hx_dummy;
	FlxSteamControllerMetadata_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.input.actions._FlxSteamController.FlxSteamControllerMetadata",45,98,8f,0b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxSteamControllerMetadata_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxSteamControllerMetadata_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxSteamControllerMetadata_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxSteamControllerMetadata_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace input
} // end namespace actions
} // end namespace _FlxSteamController
