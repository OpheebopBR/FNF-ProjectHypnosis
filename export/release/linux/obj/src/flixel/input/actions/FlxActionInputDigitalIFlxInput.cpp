#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxAction
#include <flixel/input/actions/FlxAction.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionInput
#include <flixel/input/actions/FlxActionInput.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionInputDigital
#include <flixel/input/actions/FlxActionInputDigital.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionInputDigitalIFlxInput
#include <flixel/input/actions/FlxActionInputDigitalIFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxInputDevice
#include <flixel/input/actions/FlxInputDevice.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1c94d91c690c9195_362_new,"flixel.input.actions.FlxActionInputDigitalIFlxInput","new",0x9eafe4a4,"flixel.input.actions.FlxActionInputDigitalIFlxInput.new","flixel/input/actions/FlxActionInputDigital.hx",362,0x47a4ecd2)
HX_LOCAL_STACK_FRAME(_hx_pos_1c94d91c690c9195_369_check,"flixel.input.actions.FlxActionInputDigitalIFlxInput","check",0x4273460c,"flixel.input.actions.FlxActionInputDigitalIFlxInput.check","flixel/input/actions/FlxActionInputDigital.hx",369,0x47a4ecd2)
HX_LOCAL_STACK_FRAME(_hx_pos_1c94d91c690c9195_380_destroy,"flixel.input.actions.FlxActionInputDigitalIFlxInput","destroy",0x4bbbb33e,"flixel.input.actions.FlxActionInputDigitalIFlxInput.destroy","flixel/input/actions/FlxActionInputDigital.hx",380,0x47a4ecd2)
namespace flixel{
namespace input{
namespace actions{

void FlxActionInputDigitalIFlxInput_obj::__construct(::Dynamic Input,int Trigger){
            	HX_STACKFRAME(&_hx_pos_1c94d91c690c9195_362_new)
HXLINE( 363)		super::__construct(::flixel::input::actions::FlxInputDevice_obj::IFLXINPUT_OBJECT_dyn(),0,Trigger,null());
HXLINE( 364)		this->input = Input;
            	}

Dynamic FlxActionInputDigitalIFlxInput_obj::__CreateEmpty() { return new FlxActionInputDigitalIFlxInput_obj; }

void *FlxActionInputDigitalIFlxInput_obj::_hx_vtable = 0;

Dynamic FlxActionInputDigitalIFlxInput_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxActionInputDigitalIFlxInput_obj > _hx_result = new FlxActionInputDigitalIFlxInput_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool FlxActionInputDigitalIFlxInput_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x20308a99) {
		if (inClassId<=(int)0x1600da07) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x1600da07;
		} else {
			return inClassId==(int)0x20308a99;
		}
	} else {
		return inClassId==(int)0x77ebecba;
	}
}

bool FlxActionInputDigitalIFlxInput_obj::check( ::flixel::input::actions::FlxAction action){
            	HX_STACKFRAME(&_hx_pos_1c94d91c690c9195_369_check)
HXDLIN( 369)		switch((int)(this->trigger)){
            			case (int)-1: {
HXLINE( 374)				return ::flixel::input::IFlxInput_obj::get_justReleased(this->input);
            			}
            			break;
            			case (int)0: {
HXLINE( 372)				if (::flixel::input::IFlxInput_obj::get_pressed(this->input)) {
HXLINE( 372)					return ::flixel::input::IFlxInput_obj::get_justReleased(this->input);
            				}
            				else {
HXLINE( 372)					return true;
            				}
            			}
            			break;
            			case (int)1: {
HXLINE( 371)				if (!(::flixel::input::IFlxInput_obj::get_pressed(this->input))) {
HXLINE( 371)					return ::flixel::input::IFlxInput_obj::get_justPressed(this->input);
            				}
            				else {
HXLINE( 371)					return true;
            				}
            			}
            			break;
            			case (int)2: {
HXLINE( 373)				return ::flixel::input::IFlxInput_obj::get_justPressed(this->input);
            			}
            			break;
            			default:{
HXLINE( 375)				return false;
            			}
            		}
HXLINE( 369)		return false;
            	}


void FlxActionInputDigitalIFlxInput_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_1c94d91c690c9195_380_destroy)
HXLINE( 381)		this->super::destroy();
HXLINE( 382)		this->input = null();
            	}



::hx::ObjectPtr< FlxActionInputDigitalIFlxInput_obj > FlxActionInputDigitalIFlxInput_obj::__new(::Dynamic Input,int Trigger) {
	::hx::ObjectPtr< FlxActionInputDigitalIFlxInput_obj > __this = new FlxActionInputDigitalIFlxInput_obj();
	__this->__construct(Input,Trigger);
	return __this;
}

::hx::ObjectPtr< FlxActionInputDigitalIFlxInput_obj > FlxActionInputDigitalIFlxInput_obj::__alloc(::hx::Ctx *_hx_ctx,::Dynamic Input,int Trigger) {
	FlxActionInputDigitalIFlxInput_obj *__this = (FlxActionInputDigitalIFlxInput_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxActionInputDigitalIFlxInput_obj), true, "flixel.input.actions.FlxActionInputDigitalIFlxInput"));
	*(void **)__this = FlxActionInputDigitalIFlxInput_obj::_hx_vtable;
	__this->__construct(Input,Trigger);
	return __this;
}

FlxActionInputDigitalIFlxInput_obj::FlxActionInputDigitalIFlxInput_obj()
{
}

void FlxActionInputDigitalIFlxInput_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxActionInputDigitalIFlxInput);
	HX_MARK_MEMBER_NAME(input,"input");
	 ::flixel::input::actions::FlxActionInput_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxActionInputDigitalIFlxInput_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(input,"input");
	 ::flixel::input::actions::FlxActionInput_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxActionInputDigitalIFlxInput_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"input") ) { return ::hx::Val( input ); }
		if (HX_FIELD_EQ(inName,"check") ) { return ::hx::Val( check_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxActionInputDigitalIFlxInput_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"input") ) { input=inValue.Cast< ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxActionInputDigitalIFlxInput_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("input",0a,c4,1d,be));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxActionInputDigitalIFlxInput_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(FlxActionInputDigitalIFlxInput_obj,input),HX_("input",0a,c4,1d,be)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxActionInputDigitalIFlxInput_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxActionInputDigitalIFlxInput_obj_sMemberFields[] = {
	HX_("input",0a,c4,1d,be),
	HX_("check",c8,98,b6,45),
	HX_("destroy",fa,2c,86,24),
	::String(null()) };

::hx::Class FlxActionInputDigitalIFlxInput_obj::__mClass;

void FlxActionInputDigitalIFlxInput_obj::__register()
{
	FlxActionInputDigitalIFlxInput_obj _hx_dummy;
	FlxActionInputDigitalIFlxInput_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.input.actions.FlxActionInputDigitalIFlxInput",b2,02,78,19);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxActionInputDigitalIFlxInput_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxActionInputDigitalIFlxInput_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxActionInputDigitalIFlxInput_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxActionInputDigitalIFlxInput_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace input
} // end namespace actions
