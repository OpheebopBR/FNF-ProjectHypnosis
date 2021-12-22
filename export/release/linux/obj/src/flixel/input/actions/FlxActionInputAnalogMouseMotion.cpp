#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
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
#ifndef INCLUDED_flixel_input_actions_FlxActionInputAnalogMouseMotion
#include <flixel/input/actions/FlxActionInputAnalogMouseMotion.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_2807c6723785a0be_74_new,"flixel.input.actions.FlxActionInputAnalogMouseMotion","new",0x363469d4,"flixel.input.actions.FlxActionInputAnalogMouseMotion.new","flixel/input/actions/FlxActionInputAnalog.hx",74,0x00ad3122)
HX_LOCAL_STACK_FRAME(_hx_pos_2807c6723785a0be_107_update,"flixel.input.actions.FlxActionInputAnalogMouseMotion","update",0xab774d15,"flixel.input.actions.FlxActionInputAnalogMouseMotion.update","flixel/input/actions/FlxActionInputAnalog.hx",107,0x00ad3122)
HX_LOCAL_STACK_FRAME(_hx_pos_2807c6723785a0be_112_updateXYPosition,"flixel.input.actions.FlxActionInputAnalogMouseMotion","updateXYPosition",0xd2eb6c1f,"flixel.input.actions.FlxActionInputAnalogMouseMotion.updateXYPosition","flixel/input/actions/FlxActionInputAnalog.hx",112,0x00ad3122)
namespace flixel{
namespace input{
namespace actions{

void FlxActionInputAnalogMouseMotion_obj::__construct(int Trigger,::hx::Null< int >  __o_Axis,::hx::Null< int >  __o_PixelsPerUnit,::hx::Null< Float >  __o_DeadZone,::hx::Null< bool >  __o_InvertY,::hx::Null< bool >  __o_InvertX){
            		int Axis = __o_Axis.Default(3);
            		int PixelsPerUnit = __o_PixelsPerUnit.Default(10);
            		Float DeadZone = __o_DeadZone.Default(((Float)0.1));
            		bool InvertY = __o_InvertY.Default(false);
            		bool InvertX = __o_InvertX.Default(false);
            	HX_STACKFRAME(&_hx_pos_2807c6723785a0be_74_new)
HXLINE(  77)		this->lastY = ((Float)0);
HXLINE(  76)		this->lastX = ((Float)0);
HXLINE(  95)		this->pixelsPerUnit = PixelsPerUnit;
HXLINE(  96)		if ((this->pixelsPerUnit < 1)) {
HXLINE(  97)			this->pixelsPerUnit = 1;
            		}
HXLINE(  98)		this->deadZone = DeadZone;
HXLINE(  99)		this->invertX = InvertX;
HXLINE( 100)		this->invertY = InvertY;
HXLINE( 101)		super::__construct(::flixel::input::actions::FlxInputDevice_obj::MOUSE_dyn(),-1,Trigger,Axis,null());
            	}

Dynamic FlxActionInputAnalogMouseMotion_obj::__CreateEmpty() { return new FlxActionInputAnalogMouseMotion_obj; }

void *FlxActionInputAnalogMouseMotion_obj::_hx_vtable = 0;

Dynamic FlxActionInputAnalogMouseMotion_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxActionInputAnalogMouseMotion_obj > _hx_result = new FlxActionInputAnalogMouseMotion_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _hx_result;
}

bool FlxActionInputAnalogMouseMotion_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x20308a99) {
		if (inClassId<=(int)0x1d9f0cda) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x1d9f0cda;
		} else {
			return inClassId==(int)0x20308a99;
		}
	} else {
		return inClassId==(int)0x7f995ee1;
	}
}

void FlxActionInputAnalogMouseMotion_obj::update(){
            	HX_STACKFRAME(&_hx_pos_2807c6723785a0be_107_update)
HXDLIN( 107)		this->updateXYPosition(( (Float)(::flixel::FlxG_obj::mouse->x) ),( (Float)(::flixel::FlxG_obj::mouse->y) ));
            	}


void FlxActionInputAnalogMouseMotion_obj::updateXYPosition(Float X,Float Y){
            	HX_STACKFRAME(&_hx_pos_2807c6723785a0be_112_updateXYPosition)
HXLINE( 113)		Float xDiff = (X - this->lastX);
HXLINE( 114)		Float yDiff = (Y - this->lastY);
HXLINE( 116)		this->lastX = X;
HXLINE( 117)		this->lastY = Y;
HXLINE( 119)		if (this->invertX) {
HXLINE( 120)			xDiff = (xDiff * ( (Float)(-1) ));
            		}
HXLINE( 121)		if (this->invertY) {
HXLINE( 122)			yDiff = (yDiff * ( (Float)(-1) ));
            		}
HXLINE( 124)		xDiff = (xDiff / ( (Float)(this->pixelsPerUnit) ));
HXLINE( 125)		yDiff = (yDiff / ( (Float)(this->pixelsPerUnit) ));
HXLINE( 127)		if ((::Math_obj::abs(xDiff) < this->deadZone)) {
HXLINE( 128)			xDiff = ( (Float)(0) );
            		}
HXLINE( 129)		if ((::Math_obj::abs(yDiff) < this->deadZone)) {
HXLINE( 130)			yDiff = ( (Float)(0) );
            		}
HXLINE( 132)		this->updateValues(xDiff,yDiff);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxActionInputAnalogMouseMotion_obj,updateXYPosition,(void))


::hx::ObjectPtr< FlxActionInputAnalogMouseMotion_obj > FlxActionInputAnalogMouseMotion_obj::__new(int Trigger,::hx::Null< int >  __o_Axis,::hx::Null< int >  __o_PixelsPerUnit,::hx::Null< Float >  __o_DeadZone,::hx::Null< bool >  __o_InvertY,::hx::Null< bool >  __o_InvertX) {
	::hx::ObjectPtr< FlxActionInputAnalogMouseMotion_obj > __this = new FlxActionInputAnalogMouseMotion_obj();
	__this->__construct(Trigger,__o_Axis,__o_PixelsPerUnit,__o_DeadZone,__o_InvertY,__o_InvertX);
	return __this;
}

::hx::ObjectPtr< FlxActionInputAnalogMouseMotion_obj > FlxActionInputAnalogMouseMotion_obj::__alloc(::hx::Ctx *_hx_ctx,int Trigger,::hx::Null< int >  __o_Axis,::hx::Null< int >  __o_PixelsPerUnit,::hx::Null< Float >  __o_DeadZone,::hx::Null< bool >  __o_InvertY,::hx::Null< bool >  __o_InvertX) {
	FlxActionInputAnalogMouseMotion_obj *__this = (FlxActionInputAnalogMouseMotion_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxActionInputAnalogMouseMotion_obj), true, "flixel.input.actions.FlxActionInputAnalogMouseMotion"));
	*(void **)__this = FlxActionInputAnalogMouseMotion_obj::_hx_vtable;
	__this->__construct(Trigger,__o_Axis,__o_PixelsPerUnit,__o_DeadZone,__o_InvertY,__o_InvertX);
	return __this;
}

FlxActionInputAnalogMouseMotion_obj::FlxActionInputAnalogMouseMotion_obj()
{
}

::hx::Val FlxActionInputAnalogMouseMotion_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"lastX") ) { return ::hx::Val( lastX ); }
		if (HX_FIELD_EQ(inName,"lastY") ) { return ::hx::Val( lastY ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"invertX") ) { return ::hx::Val( invertX ); }
		if (HX_FIELD_EQ(inName,"invertY") ) { return ::hx::Val( invertY ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"deadZone") ) { return ::hx::Val( deadZone ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"pixelsPerUnit") ) { return ::hx::Val( pixelsPerUnit ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"updateXYPosition") ) { return ::hx::Val( updateXYPosition_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxActionInputAnalogMouseMotion_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"lastX") ) { lastX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastY") ) { lastY=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"invertX") ) { invertX=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"invertY") ) { invertY=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"deadZone") ) { deadZone=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"pixelsPerUnit") ) { pixelsPerUnit=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxActionInputAnalogMouseMotion_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("lastX",42,01,bc,6f));
	outFields->push(HX_("lastY",43,01,bc,6f));
	outFields->push(HX_("pixelsPerUnit",54,a6,d1,ad));
	outFields->push(HX_("deadZone",f0,3e,2e,58));
	outFields->push(HX_("invertX",82,4c,f1,3d));
	outFields->push(HX_("invertY",83,4c,f1,3d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxActionInputAnalogMouseMotion_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(FlxActionInputAnalogMouseMotion_obj,lastX),HX_("lastX",42,01,bc,6f)},
	{::hx::fsFloat,(int)offsetof(FlxActionInputAnalogMouseMotion_obj,lastY),HX_("lastY",43,01,bc,6f)},
	{::hx::fsInt,(int)offsetof(FlxActionInputAnalogMouseMotion_obj,pixelsPerUnit),HX_("pixelsPerUnit",54,a6,d1,ad)},
	{::hx::fsFloat,(int)offsetof(FlxActionInputAnalogMouseMotion_obj,deadZone),HX_("deadZone",f0,3e,2e,58)},
	{::hx::fsBool,(int)offsetof(FlxActionInputAnalogMouseMotion_obj,invertX),HX_("invertX",82,4c,f1,3d)},
	{::hx::fsBool,(int)offsetof(FlxActionInputAnalogMouseMotion_obj,invertY),HX_("invertY",83,4c,f1,3d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxActionInputAnalogMouseMotion_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxActionInputAnalogMouseMotion_obj_sMemberFields[] = {
	HX_("lastX",42,01,bc,6f),
	HX_("lastY",43,01,bc,6f),
	HX_("pixelsPerUnit",54,a6,d1,ad),
	HX_("deadZone",f0,3e,2e,58),
	HX_("invertX",82,4c,f1,3d),
	HX_("invertY",83,4c,f1,3d),
	HX_("update",09,86,05,87),
	HX_("updateXYPosition",13,de,6d,67),
	::String(null()) };

::hx::Class FlxActionInputAnalogMouseMotion_obj::__mClass;

void FlxActionInputAnalogMouseMotion_obj::__register()
{
	FlxActionInputAnalogMouseMotion_obj _hx_dummy;
	FlxActionInputAnalogMouseMotion_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.input.actions.FlxActionInputAnalogMouseMotion",e2,2f,a6,d6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxActionInputAnalogMouseMotion_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxActionInputAnalogMouseMotion_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxActionInputAnalogMouseMotion_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxActionInputAnalogMouseMotion_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace input
} // end namespace actions
