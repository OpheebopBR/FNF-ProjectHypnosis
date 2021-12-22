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
#ifndef INCLUDED_flixel_input_actions_FlxActionInput
#include <flixel/input/actions/FlxActionInput.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionInputAnalog
#include <flixel/input/actions/FlxActionInputAnalog.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionInputAnalogMousePosition
#include <flixel/input/actions/FlxActionInputAnalogMousePosition.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_b426fd3e34bb94f5_148_new,"flixel.input.actions.FlxActionInputAnalogMousePosition","new",0xa7577cc7,"flixel.input.actions.FlxActionInputAnalogMousePosition.new","flixel/input/actions/FlxActionInputAnalog.hx",148,0x00ad3122)
HX_LOCAL_STACK_FRAME(_hx_pos_b426fd3e34bb94f5_154_update,"flixel.input.actions.FlxActionInputAnalogMousePosition","update",0xd8aa5402,"flixel.input.actions.FlxActionInputAnalogMousePosition.update","flixel/input/actions/FlxActionInputAnalog.hx",154,0x00ad3122)
HX_LOCAL_STACK_FRAME(_hx_pos_b426fd3e34bb94f5_159_updateValues,"flixel.input.actions.FlxActionInputAnalogMousePosition","updateValues",0x9697b984,"flixel.input.actions.FlxActionInputAnalogMousePosition.updateValues","flixel/input/actions/FlxActionInputAnalog.hx",159,0x00ad3122)
namespace flixel{
namespace input{
namespace actions{

void FlxActionInputAnalogMousePosition_obj::__construct(int Trigger,::hx::Null< int >  __o_Axis){
            		int Axis = __o_Axis.Default(3);
            	HX_STACKFRAME(&_hx_pos_b426fd3e34bb94f5_148_new)
HXDLIN( 148)		super::__construct(::flixel::input::actions::FlxInputDevice_obj::MOUSE_dyn(),-1,Trigger,Axis,null());
            	}

Dynamic FlxActionInputAnalogMousePosition_obj::__CreateEmpty() { return new FlxActionInputAnalogMousePosition_obj; }

void *FlxActionInputAnalogMousePosition_obj::_hx_vtable = 0;

Dynamic FlxActionInputAnalogMousePosition_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxActionInputAnalogMousePosition_obj > _hx_result = new FlxActionInputAnalogMousePosition_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool FlxActionInputAnalogMousePosition_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x55a6184d) {
		if (inClassId<=(int)0x20308a99) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x20308a99;
		} else {
			return inClassId==(int)0x55a6184d;
		}
	} else {
		return inClassId==(int)0x7f995ee1;
	}
}

void FlxActionInputAnalogMousePosition_obj::update(){
            	HX_STACKFRAME(&_hx_pos_b426fd3e34bb94f5_154_update)
HXDLIN( 154)		this->updateValues(( (Float)(::flixel::FlxG_obj::mouse->x) ),( (Float)(::flixel::FlxG_obj::mouse->y) ));
            	}


void FlxActionInputAnalogMousePosition_obj::updateValues(Float X,Float Y){
            	HX_STACKFRAME(&_hx_pos_b426fd3e34bb94f5_159_updateValues)
HXLINE( 160)		if ((X != this->x)) {
HXLINE( 162)			this->xMoved->press();
            		}
            		else {
HXLINE( 166)			this->xMoved->release();
            		}
HXLINE( 169)		if ((Y != this->y)) {
HXLINE( 171)			this->yMoved->press();
            		}
            		else {
HXLINE( 175)			this->yMoved->release();
            		}
HXLINE( 178)		this->x = X;
HXLINE( 179)		this->y = Y;
            	}



::hx::ObjectPtr< FlxActionInputAnalogMousePosition_obj > FlxActionInputAnalogMousePosition_obj::__new(int Trigger,::hx::Null< int >  __o_Axis) {
	::hx::ObjectPtr< FlxActionInputAnalogMousePosition_obj > __this = new FlxActionInputAnalogMousePosition_obj();
	__this->__construct(Trigger,__o_Axis);
	return __this;
}

::hx::ObjectPtr< FlxActionInputAnalogMousePosition_obj > FlxActionInputAnalogMousePosition_obj::__alloc(::hx::Ctx *_hx_ctx,int Trigger,::hx::Null< int >  __o_Axis) {
	FlxActionInputAnalogMousePosition_obj *__this = (FlxActionInputAnalogMousePosition_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxActionInputAnalogMousePosition_obj), true, "flixel.input.actions.FlxActionInputAnalogMousePosition"));
	*(void **)__this = FlxActionInputAnalogMousePosition_obj::_hx_vtable;
	__this->__construct(Trigger,__o_Axis);
	return __this;
}

FlxActionInputAnalogMousePosition_obj::FlxActionInputAnalogMousePosition_obj()
{
}

::hx::Val FlxActionInputAnalogMousePosition_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"updateValues") ) { return ::hx::Val( updateValues_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FlxActionInputAnalogMousePosition_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *FlxActionInputAnalogMousePosition_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxActionInputAnalogMousePosition_obj_sMemberFields[] = {
	HX_("update",09,86,05,87),
	HX_("updateValues",cb,aa,7a,4f),
	::String(null()) };

::hx::Class FlxActionInputAnalogMousePosition_obj::__mClass;

void FlxActionInputAnalogMousePosition_obj::__register()
{
	FlxActionInputAnalogMousePosition_obj _hx_dummy;
	FlxActionInputAnalogMousePosition_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.input.actions.FlxActionInputAnalogMousePosition",55,0d,02,b9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxActionInputAnalogMousePosition_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxActionInputAnalogMousePosition_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxActionInputAnalogMousePosition_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxActionInputAnalogMousePosition_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace input
} // end namespace actions
