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
#ifndef INCLUDED_flixel_input_actions_FlxActionInputAnalogClickAndDragMouseMotion
#include <flixel/input/actions/FlxActionInputAnalogClickAndDragMouseMotion.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionInputAnalogMouseMotion
#include <flixel/input/actions/FlxActionInputAnalogMouseMotion.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouseButton
#include <flixel/input/mouse/FlxMouseButton.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_aa3e9b81dcfc3b35_46_new,"flixel.input.actions.FlxActionInputAnalogClickAndDragMouseMotion","new",0xa8f71c91,"flixel.input.actions.FlxActionInputAnalogClickAndDragMouseMotion.new","flixel/input/actions/FlxActionInputAnalog.hx",46,0x00ad3122)
HX_LOCAL_STACK_FRAME(_hx_pos_aa3e9b81dcfc3b35_52_updateValues,"flixel.input.actions.FlxActionInputAnalogClickAndDragMouseMotion","updateValues",0xe44ed07a,"flixel.input.actions.FlxActionInputAnalogClickAndDragMouseMotion.updateValues","flixel/input/actions/FlxActionInputAnalog.hx",52,0x00ad3122)
namespace flixel{
namespace input{
namespace actions{

void FlxActionInputAnalogClickAndDragMouseMotion_obj::__construct(int ButtonID,int Trigger,::hx::Null< int >  __o_Axis,::hx::Null< int >  __o_PixelsPerUnit,::hx::Null< Float >  __o_DeadZone,::hx::Null< bool >  __o_InvertY,::hx::Null< bool >  __o_InvertX){
            		int Axis = __o_Axis.Default(3);
            		int PixelsPerUnit = __o_PixelsPerUnit.Default(10);
            		Float DeadZone = __o_DeadZone.Default(((Float)0.1));
            		bool InvertY = __o_InvertY.Default(false);
            		bool InvertX = __o_InvertX.Default(false);
            	HX_STACKFRAME(&_hx_pos_aa3e9b81dcfc3b35_46_new)
HXLINE(  47)		super::__construct(Trigger,Axis,PixelsPerUnit,DeadZone,InvertY,InvertX);
HXLINE(  48)		this->button = ButtonID;
            	}

Dynamic FlxActionInputAnalogClickAndDragMouseMotion_obj::__CreateEmpty() { return new FlxActionInputAnalogClickAndDragMouseMotion_obj; }

void *FlxActionInputAnalogClickAndDragMouseMotion_obj::_hx_vtable = 0;

Dynamic FlxActionInputAnalogClickAndDragMouseMotion_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxActionInputAnalogClickAndDragMouseMotion_obj > _hx_result = new FlxActionInputAnalogClickAndDragMouseMotion_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return _hx_result;
}

bool FlxActionInputAnalogClickAndDragMouseMotion_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1d9f0cda) {
		if (inClassId<=(int)0x0c5bf117) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0c5bf117;
		} else {
			return inClassId==(int)0x1d9f0cda;
		}
	} else {
		return inClassId==(int)0x20308a99 || inClassId==(int)0x7f995ee1;
	}
}

void FlxActionInputAnalogClickAndDragMouseMotion_obj::updateValues(Float X,Float Y){
            	HX_STACKFRAME(&_hx_pos_aa3e9b81dcfc3b35_52_updateValues)
HXLINE(  53)		bool pass = false;
HXLINE(  55)		switch((int)(this->button)){
            			case (int)-3: {
HXLINE(  58)				 ::flixel::input::mouse::FlxMouseButton _this = ::flixel::FlxG_obj::mouse->_rightButton;
HXDLIN(  58)				if ((_this->current != 1)) {
HXLINE(  58)					pass = (_this->current == 2);
            				}
            				else {
HXLINE(  58)					pass = true;
            				}
            			}
            			break;
            			case (int)-2: {
HXLINE(  59)				 ::flixel::input::mouse::FlxMouseButton _this = ::flixel::FlxG_obj::mouse->_middleButton;
HXDLIN(  59)				if ((_this->current != 1)) {
HXLINE(  59)					pass = (_this->current == 2);
            				}
            				else {
HXLINE(  59)					pass = true;
            				}
            			}
            			break;
            			case (int)-1: {
HXLINE(  57)				 ::flixel::input::mouse::FlxMouseButton _this = ::flixel::FlxG_obj::mouse->_leftButton;
HXDLIN(  57)				if ((_this->current != 1)) {
HXLINE(  57)					pass = (_this->current == 2);
            				}
            				else {
HXLINE(  57)					pass = true;
            				}
            			}
            			break;
            		}
HXLINE(  62)		if (!(pass)) {
HXLINE(  64)			X = ( (Float)(0) );
HXLINE(  65)			Y = ( (Float)(0) );
            		}
HXLINE(  67)		this->super::updateValues(X,Y);
            	}



::hx::ObjectPtr< FlxActionInputAnalogClickAndDragMouseMotion_obj > FlxActionInputAnalogClickAndDragMouseMotion_obj::__new(int ButtonID,int Trigger,::hx::Null< int >  __o_Axis,::hx::Null< int >  __o_PixelsPerUnit,::hx::Null< Float >  __o_DeadZone,::hx::Null< bool >  __o_InvertY,::hx::Null< bool >  __o_InvertX) {
	::hx::ObjectPtr< FlxActionInputAnalogClickAndDragMouseMotion_obj > __this = new FlxActionInputAnalogClickAndDragMouseMotion_obj();
	__this->__construct(ButtonID,Trigger,__o_Axis,__o_PixelsPerUnit,__o_DeadZone,__o_InvertY,__o_InvertX);
	return __this;
}

::hx::ObjectPtr< FlxActionInputAnalogClickAndDragMouseMotion_obj > FlxActionInputAnalogClickAndDragMouseMotion_obj::__alloc(::hx::Ctx *_hx_ctx,int ButtonID,int Trigger,::hx::Null< int >  __o_Axis,::hx::Null< int >  __o_PixelsPerUnit,::hx::Null< Float >  __o_DeadZone,::hx::Null< bool >  __o_InvertY,::hx::Null< bool >  __o_InvertX) {
	FlxActionInputAnalogClickAndDragMouseMotion_obj *__this = (FlxActionInputAnalogClickAndDragMouseMotion_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxActionInputAnalogClickAndDragMouseMotion_obj), true, "flixel.input.actions.FlxActionInputAnalogClickAndDragMouseMotion"));
	*(void **)__this = FlxActionInputAnalogClickAndDragMouseMotion_obj::_hx_vtable;
	__this->__construct(ButtonID,Trigger,__o_Axis,__o_PixelsPerUnit,__o_DeadZone,__o_InvertY,__o_InvertX);
	return __this;
}

FlxActionInputAnalogClickAndDragMouseMotion_obj::FlxActionInputAnalogClickAndDragMouseMotion_obj()
{
}

::hx::Val FlxActionInputAnalogClickAndDragMouseMotion_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"button") ) { return ::hx::Val( button ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"updateValues") ) { return ::hx::Val( updateValues_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxActionInputAnalogClickAndDragMouseMotion_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"button") ) { button=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxActionInputAnalogClickAndDragMouseMotion_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("button",f2,61,e0,d9));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxActionInputAnalogClickAndDragMouseMotion_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(FlxActionInputAnalogClickAndDragMouseMotion_obj,button),HX_("button",f2,61,e0,d9)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxActionInputAnalogClickAndDragMouseMotion_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxActionInputAnalogClickAndDragMouseMotion_obj_sMemberFields[] = {
	HX_("button",f2,61,e0,d9),
	HX_("updateValues",cb,aa,7a,4f),
	::String(null()) };

::hx::Class FlxActionInputAnalogClickAndDragMouseMotion_obj::__mClass;

void FlxActionInputAnalogClickAndDragMouseMotion_obj::__register()
{
	FlxActionInputAnalogClickAndDragMouseMotion_obj _hx_dummy;
	FlxActionInputAnalogClickAndDragMouseMotion_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.input.actions.FlxActionInputAnalogClickAndDragMouseMotion",1f,80,0f,33);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxActionInputAnalogClickAndDragMouseMotion_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxActionInputAnalogClickAndDragMouseMotion_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxActionInputAnalogClickAndDragMouseMotion_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxActionInputAnalogClickAndDragMouseMotion_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace input
} // end namespace actions
