#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
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
#ifndef INCLUDED_flixel_input_actions_FlxActionInputDigitalMouseWheel
#include <flixel/input/actions/FlxActionInputDigitalMouseWheel.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxInputDevice
#include <flixel/input/actions/FlxInputDevice.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_fd83a9ade4fc1bcd_29_new,"flixel.input.actions.FlxActionInputDigitalMouseWheel","new",0x77e4af97,"flixel.input.actions.FlxActionInputDigitalMouseWheel.new","flixel/input/actions/FlxActionInputDigital.hx",29,0x47a4ecd2)
HX_LOCAL_STACK_FRAME(_hx_pos_fd83a9ade4fc1bcd_48_check,"flixel.input.actions.FlxActionInputDigitalMouseWheel","check",0x6aa6f3bf,"flixel.input.actions.FlxActionInputDigitalMouseWheel.check","flixel/input/actions/FlxActionInputDigital.hx",48,0x47a4ecd2)
HX_LOCAL_STACK_FRAME(_hx_pos_fd83a9ade4fc1bcd_61_update,"flixel.input.actions.FlxActionInputDigitalMouseWheel","update",0xb464c332,"flixel.input.actions.FlxActionInputDigitalMouseWheel.update","flixel/input/actions/FlxActionInputDigital.hx",61,0x47a4ecd2)
namespace flixel{
namespace input{
namespace actions{

void FlxActionInputDigitalMouseWheel_obj::__construct(bool Positive,int Trigger){
            	HX_GC_STACKFRAME(&_hx_pos_fd83a9ade4fc1bcd_29_new)
HXLINE(  32)		this->sign = 0;
HXLINE(  41)		super::__construct(::flixel::input::actions::FlxInputDevice_obj::MOUSE_WHEEL_dyn(),0,Trigger,null());
HXLINE(  42)		this->input =  ::flixel::input::FlxInput_obj::__alloc( HX_CTX ,0);
HXLINE(  43)		int _hx_tmp;
HXDLIN(  43)		if (Positive) {
HXLINE(  43)			_hx_tmp = 1;
            		}
            		else {
HXLINE(  43)			_hx_tmp = -1;
            		}
HXDLIN(  43)		this->sign = _hx_tmp;
            	}

Dynamic FlxActionInputDigitalMouseWheel_obj::__CreateEmpty() { return new FlxActionInputDigitalMouseWheel_obj; }

void *FlxActionInputDigitalMouseWheel_obj::_hx_vtable = 0;

Dynamic FlxActionInputDigitalMouseWheel_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxActionInputDigitalMouseWheel_obj > _hx_result = new FlxActionInputDigitalMouseWheel_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool FlxActionInputDigitalMouseWheel_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x20308a99) {
		if (inClassId<=(int)0x1600da07) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x1600da07;
		} else {
			return inClassId==(int)0x20308a99;
		}
	} else {
		return inClassId==(int)0x61a2751d;
	}
}

bool FlxActionInputDigitalMouseWheel_obj::check( ::flixel::input::actions::FlxAction Action){
            	HX_STACKFRAME(&_hx_pos_fd83a9ade4fc1bcd_48_check)
HXDLIN(  48)		switch((int)(this->trigger)){
            			case (int)-1: {
HXLINE(  54)				return (this->input->current == -1);
            			}
            			break;
            			case (int)0: {
HXLINE(  52)				 ::flixel::input::FlxInput _this = this->input;
HXDLIN(  52)				bool _hx_tmp;
HXDLIN(  52)				if ((_this->current != 0)) {
HXLINE(  52)					_hx_tmp = (_this->current == -1);
            				}
            				else {
HXLINE(  52)					_hx_tmp = true;
            				}
HXDLIN(  52)				if (!(_hx_tmp)) {
HXLINE(  52)					return (this->input->current == -1);
            				}
            				else {
HXLINE(  52)					return true;
            				}
            			}
            			break;
            			case (int)1: {
HXLINE(  51)				 ::flixel::input::FlxInput _this = this->input;
HXDLIN(  51)				bool _hx_tmp;
HXDLIN(  51)				if ((_this->current != 1)) {
HXLINE(  51)					_hx_tmp = (_this->current == 2);
            				}
            				else {
HXLINE(  51)					_hx_tmp = true;
            				}
HXDLIN(  51)				if (!(_hx_tmp)) {
HXLINE(  51)					return (this->input->current == 2);
            				}
            				else {
HXLINE(  51)					return true;
            				}
            			}
            			break;
            			case (int)2: {
HXLINE(  53)				return (this->input->current == 2);
            			}
            			break;
            			default:{
HXLINE(  56)				return false;
            			}
            		}
HXLINE(  48)		return false;
            	}


void FlxActionInputDigitalMouseWheel_obj::update(){
            	HX_STACKFRAME(&_hx_pos_fd83a9ade4fc1bcd_61_update)
HXLINE(  62)		this->super::update();
HXLINE(  64)		if (((::flixel::FlxG_obj::mouse->wheel * this->sign) > 0)) {
HXLINE(  66)			this->input->press();
            		}
            		else {
HXLINE(  70)			this->input->release();
            		}
            	}



::hx::ObjectPtr< FlxActionInputDigitalMouseWheel_obj > FlxActionInputDigitalMouseWheel_obj::__new(bool Positive,int Trigger) {
	::hx::ObjectPtr< FlxActionInputDigitalMouseWheel_obj > __this = new FlxActionInputDigitalMouseWheel_obj();
	__this->__construct(Positive,Trigger);
	return __this;
}

::hx::ObjectPtr< FlxActionInputDigitalMouseWheel_obj > FlxActionInputDigitalMouseWheel_obj::__alloc(::hx::Ctx *_hx_ctx,bool Positive,int Trigger) {
	FlxActionInputDigitalMouseWheel_obj *__this = (FlxActionInputDigitalMouseWheel_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxActionInputDigitalMouseWheel_obj), true, "flixel.input.actions.FlxActionInputDigitalMouseWheel"));
	*(void **)__this = FlxActionInputDigitalMouseWheel_obj::_hx_vtable;
	__this->__construct(Positive,Trigger);
	return __this;
}

FlxActionInputDigitalMouseWheel_obj::FlxActionInputDigitalMouseWheel_obj()
{
}

void FlxActionInputDigitalMouseWheel_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxActionInputDigitalMouseWheel);
	HX_MARK_MEMBER_NAME(input,"input");
	HX_MARK_MEMBER_NAME(sign,"sign");
	 ::flixel::input::actions::FlxActionInput_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxActionInputDigitalMouseWheel_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(input,"input");
	HX_VISIT_MEMBER_NAME(sign,"sign");
	 ::flixel::input::actions::FlxActionInput_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxActionInputDigitalMouseWheel_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"sign") ) { return ::hx::Val( sign ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"input") ) { return ::hx::Val( input ); }
		if (HX_FIELD_EQ(inName,"check") ) { return ::hx::Val( check_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxActionInputDigitalMouseWheel_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"sign") ) { sign=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"input") ) { input=inValue.Cast<  ::flixel::input::FlxInput >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxActionInputDigitalMouseWheel_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("input",0a,c4,1d,be));
	outFields->push(HX_("sign",3d,90,53,4c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxActionInputDigitalMouseWheel_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::input::FlxInput */ ,(int)offsetof(FlxActionInputDigitalMouseWheel_obj,input),HX_("input",0a,c4,1d,be)},
	{::hx::fsInt,(int)offsetof(FlxActionInputDigitalMouseWheel_obj,sign),HX_("sign",3d,90,53,4c)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxActionInputDigitalMouseWheel_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxActionInputDigitalMouseWheel_obj_sMemberFields[] = {
	HX_("input",0a,c4,1d,be),
	HX_("sign",3d,90,53,4c),
	HX_("check",c8,98,b6,45),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class FlxActionInputDigitalMouseWheel_obj::__mClass;

void FlxActionInputDigitalMouseWheel_obj::__register()
{
	FlxActionInputDigitalMouseWheel_obj _hx_dummy;
	FlxActionInputDigitalMouseWheel_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.input.actions.FlxActionInputDigitalMouseWheel",25,98,a9,1a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxActionInputDigitalMouseWheel_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxActionInputDigitalMouseWheel_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxActionInputDigitalMouseWheel_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxActionInputDigitalMouseWheel_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace input
} // end namespace actions
