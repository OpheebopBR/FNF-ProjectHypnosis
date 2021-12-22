#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxAction
#include <flixel/input/actions/FlxAction.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionAnalog
#include <flixel/input/actions/FlxActionAnalog.h>
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
#ifndef INCLUDED_flixel_input_actions_FlxActionInputAnalogGamepad
#include <flixel/input/actions/FlxActionInputAnalogGamepad.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionInputAnalogMouseMotion
#include <flixel/input/actions/FlxActionInputAnalogMouseMotion.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionInputAnalogMousePosition
#include <flixel/input/actions/FlxActionInputAnalogMousePosition.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxInputType
#include <flixel/input/actions/FlxInputType.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2a6906383b7ff16a_195_new,"flixel.input.actions.FlxActionAnalog","new",0xa7741703,"flixel.input.actions.FlxActionAnalog.new","flixel/input/actions/FlxAction.hx",195,0xb046b220)
HX_LOCAL_STACK_FRAME(_hx_pos_2a6906383b7ff16a_204_add,"flixel.input.actions.FlxActionAnalog","add",0xa76a38c4,"flixel.input.actions.FlxActionAnalog.add","flixel/input/actions/FlxAction.hx",204,0xb046b220)
HX_LOCAL_STACK_FRAME(_hx_pos_2a6906383b7ff16a_224_addMouseClickAndDragMotion,"flixel.input.actions.FlxActionAnalog","addMouseClickAndDragMotion",0x8868dcba,"flixel.input.actions.FlxActionAnalog.addMouseClickAndDragMotion","flixel/input/actions/FlxAction.hx",224,0xb046b220)
HX_LOCAL_STACK_FRAME(_hx_pos_2a6906383b7ff16a_240_addMouseMotion,"flixel.input.actions.FlxActionAnalog","addMouseMotion",0xf87907d7,"flixel.input.actions.FlxActionAnalog.addMouseMotion","flixel/input/actions/FlxAction.hx",240,0xb046b220)
HX_LOCAL_STACK_FRAME(_hx_pos_2a6906383b7ff16a_251_addMousePosition,"flixel.input.actions.FlxActionAnalog","addMousePosition",0x17328c8a,"flixel.input.actions.FlxActionAnalog.addMousePosition","flixel/input/actions/FlxAction.hx",251,0xb046b220)
HX_LOCAL_STACK_FRAME(_hx_pos_2a6906383b7ff16a_265_addGamepad,"flixel.input.actions.FlxActionAnalog","addGamepad",0xa443303d,"flixel.input.actions.FlxActionAnalog.addGamepad","flixel/input/actions/FlxAction.hx",265,0xb046b220)
HX_LOCAL_STACK_FRAME(_hx_pos_2a6906383b7ff16a_269_update,"flixel.input.actions.FlxActionAnalog","update",0xc492c746,"flixel.input.actions.FlxActionAnalog.update","flixel/input/actions/FlxAction.hx",269,0xb046b220)
HX_LOCAL_STACK_FRAME(_hx_pos_2a6906383b7ff16a_276_destroy,"flixel.input.actions.FlxActionAnalog","destroy",0xc292011d,"flixel.input.actions.FlxActionAnalog.destroy","flixel/input/actions/FlxAction.hx",276,0xb046b220)
HX_LOCAL_STACK_FRAME(_hx_pos_2a6906383b7ff16a_283_toString,"flixel.input.actions.FlxActionAnalog","toString",0xe4bc9b29,"flixel.input.actions.FlxActionAnalog.toString","flixel/input/actions/FlxAction.hx",283,0xb046b220)
HX_LOCAL_STACK_FRAME(_hx_pos_2a6906383b7ff16a_287_check,"flixel.input.actions.FlxActionAnalog","check",0x2a700e2b,"flixel.input.actions.FlxActionAnalog.check","flixel/input/actions/FlxAction.hx",287,0xb046b220)
HX_LOCAL_STACK_FRAME(_hx_pos_2a6906383b7ff16a_298_get_x,"flixel.input.actions.FlxActionAnalog","get_x",0x761a1ab2,"flixel.input.actions.FlxActionAnalog.get_x","flixel/input/actions/FlxAction.hx",298,0xb046b220)
HX_LOCAL_STACK_FRAME(_hx_pos_2a6906383b7ff16a_303_get_y,"flixel.input.actions.FlxActionAnalog","get_y",0x761a1ab3,"flixel.input.actions.FlxActionAnalog.get_y","flixel/input/actions/FlxAction.hx",303,0xb046b220)
namespace flixel{
namespace input{
namespace actions{

void FlxActionAnalog_obj::__construct(::String __o_Name, ::Dynamic Callback){
            		::String Name = __o_Name;
            		if (::hx::IsNull(__o_Name)) Name = HX_("",00,00,00,00);
            	HX_STACKFRAME(&_hx_pos_2a6906383b7ff16a_195_new)
HXLINE( 196)		super::__construct(::flixel::input::actions::FlxInputType_obj::ANALOG_dyn(),Name);
HXLINE( 197)		this->callback = Callback;
            	}

Dynamic FlxActionAnalog_obj::__CreateEmpty() { return new FlxActionAnalog_obj; }

void *FlxActionAnalog_obj::_hx_vtable = 0;

Dynamic FlxActionAnalog_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxActionAnalog_obj > _hx_result = new FlxActionAnalog_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool FlxActionAnalog_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2660e195) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x2660e195;
	} else {
		return inClassId==(int)0x537409a5;
	}
}

 ::flixel::input::actions::FlxActionAnalog FlxActionAnalog_obj::add( ::flixel::input::actions::FlxActionInputAnalog input){
            	HX_STACKFRAME(&_hx_pos_2a6906383b7ff16a_204_add)
HXLINE( 205)		this->addGenericInput(input);
HXLINE( 206)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxActionAnalog_obj,add,return )

 ::flixel::input::actions::FlxActionAnalog FlxActionAnalog_obj::addMouseClickAndDragMotion(int ButtonID,int Trigger,::hx::Null< int >  __o_Axis,::hx::Null< int >  __o_PixelsPerUnit,::hx::Null< Float >  __o_DeadZone,::hx::Null< bool >  __o_InvertY,::hx::Null< bool >  __o_InvertX){
            		int Axis = __o_Axis.Default(3);
            		int PixelsPerUnit = __o_PixelsPerUnit.Default(10);
            		Float DeadZone = __o_DeadZone.Default(((Float)0.1));
            		bool InvertY = __o_InvertY.Default(false);
            		bool InvertX = __o_InvertX.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_2a6906383b7ff16a_224_addMouseClickAndDragMotion)
HXDLIN( 224)		return this->add( ::flixel::input::actions::FlxActionInputAnalogClickAndDragMouseMotion_obj::__alloc( HX_CTX ,ButtonID,Trigger,Axis,PixelsPerUnit,DeadZone,InvertY,InvertX));
            	}


HX_DEFINE_DYNAMIC_FUNC7(FlxActionAnalog_obj,addMouseClickAndDragMotion,return )

 ::flixel::input::actions::FlxActionAnalog FlxActionAnalog_obj::addMouseMotion(int Trigger,::hx::Null< int >  __o_Axis,::hx::Null< int >  __o_PixelsPerUnit,::hx::Null< Float >  __o_DeadZone,::hx::Null< bool >  __o_InvertY,::hx::Null< bool >  __o_InvertX){
            		int Axis = __o_Axis.Default(3);
            		int PixelsPerUnit = __o_PixelsPerUnit.Default(10);
            		Float DeadZone = __o_DeadZone.Default(((Float)0.1));
            		bool InvertY = __o_InvertY.Default(false);
            		bool InvertX = __o_InvertX.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_2a6906383b7ff16a_240_addMouseMotion)
HXDLIN( 240)		return this->add( ::flixel::input::actions::FlxActionInputAnalogMouseMotion_obj::__alloc( HX_CTX ,Trigger,Axis,PixelsPerUnit,DeadZone,InvertY,InvertX));
            	}


HX_DEFINE_DYNAMIC_FUNC6(FlxActionAnalog_obj,addMouseMotion,return )

 ::flixel::input::actions::FlxActionAnalog FlxActionAnalog_obj::addMousePosition(int Trigger,::hx::Null< int >  __o_Axis){
            		int Axis = __o_Axis.Default(3);
            	HX_GC_STACKFRAME(&_hx_pos_2a6906383b7ff16a_251_addMousePosition)
HXDLIN( 251)		return this->add( ::flixel::input::actions::FlxActionInputAnalogMousePosition_obj::__alloc( HX_CTX ,Trigger,Axis));
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxActionAnalog_obj,addMousePosition,return )

 ::flixel::input::actions::FlxActionAnalog FlxActionAnalog_obj::addGamepad(int InputID,int Trigger,::hx::Null< int >  __o_Axis,::hx::Null< int >  __o_GamepadID){
            		int Axis = __o_Axis.Default(3);
            		int GamepadID = __o_GamepadID.Default(-2);
            	HX_GC_STACKFRAME(&_hx_pos_2a6906383b7ff16a_265_addGamepad)
HXDLIN( 265)		return this->add( ::flixel::input::actions::FlxActionInputAnalogGamepad_obj::__alloc( HX_CTX ,InputID,Trigger,Axis,GamepadID));
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxActionAnalog_obj,addGamepad,return )

void FlxActionAnalog_obj::update(){
            	HX_STACKFRAME(&_hx_pos_2a6906383b7ff16a_269_update)
HXLINE( 270)		this->_x = null();
HXLINE( 271)		this->_y = null();
HXLINE( 272)		this->super::update();
            	}


void FlxActionAnalog_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_2a6906383b7ff16a_276_destroy)
HXLINE( 277)		this->callback = null();
HXLINE( 278)		this->super::destroy();
            	}


::String FlxActionAnalog_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_2a6906383b7ff16a_283_toString)
HXDLIN( 283)		::String _hx_tmp = ((HX_("FlxAction(",80,bd,59,96) + ::Std_obj::string(this->type)) + HX_(") name:",58,20,e0,0a));
HXDLIN( 283)		return (((((_hx_tmp + this->name) + HX_(" x/y:",38,3e,48,bc)) + this->_x) + HX_(",",2c,00,00,00)) + this->_y);
            	}


bool FlxActionAnalog_obj::check(){
            	HX_STACKFRAME(&_hx_pos_2a6906383b7ff16a_287_check)
HXLINE( 288)		bool val = this->super::check();
HXLINE( 289)		bool _hx_tmp;
HXDLIN( 289)		if (val) {
HXLINE( 289)			_hx_tmp = ::hx::IsNotNull( this->callback );
            		}
            		else {
HXLINE( 289)			_hx_tmp = false;
            		}
HXDLIN( 289)		if (_hx_tmp) {
HXLINE( 291)			this->callback(::hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE( 293)		return val;
            	}


Float FlxActionAnalog_obj::get_x(){
            	HX_STACKFRAME(&_hx_pos_2a6906383b7ff16a_298_get_x)
HXDLIN( 298)		if (::hx::IsNotNull( this->_x )) {
HXDLIN( 298)			return ( (Float)(this->_x) );
            		}
            		else {
HXDLIN( 298)			return ( (Float)(0) );
            		}
HXDLIN( 298)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxActionAnalog_obj,get_x,return )

Float FlxActionAnalog_obj::get_y(){
            	HX_STACKFRAME(&_hx_pos_2a6906383b7ff16a_303_get_y)
HXDLIN( 303)		if (::hx::IsNotNull( this->_y )) {
HXDLIN( 303)			return ( (Float)(this->_y) );
            		}
            		else {
HXDLIN( 303)			return ( (Float)(0) );
            		}
HXDLIN( 303)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxActionAnalog_obj,get_y,return )


::hx::ObjectPtr< FlxActionAnalog_obj > FlxActionAnalog_obj::__new(::String __o_Name, ::Dynamic Callback) {
	::hx::ObjectPtr< FlxActionAnalog_obj > __this = new FlxActionAnalog_obj();
	__this->__construct(__o_Name,Callback);
	return __this;
}

::hx::ObjectPtr< FlxActionAnalog_obj > FlxActionAnalog_obj::__alloc(::hx::Ctx *_hx_ctx,::String __o_Name, ::Dynamic Callback) {
	FlxActionAnalog_obj *__this = (FlxActionAnalog_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxActionAnalog_obj), true, "flixel.input.actions.FlxActionAnalog"));
	*(void **)__this = FlxActionAnalog_obj::_hx_vtable;
	__this->__construct(__o_Name,Callback);
	return __this;
}

FlxActionAnalog_obj::FlxActionAnalog_obj()
{
}

void FlxActionAnalog_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxActionAnalog);
	HX_MARK_MEMBER_NAME(callback,"callback");
	 ::flixel::input::actions::FlxAction_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxActionAnalog_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(callback,"callback");
	 ::flixel::input::actions::FlxAction_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxActionAnalog_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_x() ); }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_y() ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"check") ) { return ::hx::Val( check_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_x") ) { return ::hx::Val( get_x_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_y") ) { return ::hx::Val( get_y_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"callback") ) { return ::hx::Val( callback ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"addGamepad") ) { return ::hx::Val( addGamepad_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"addMouseMotion") ) { return ::hx::Val( addMouseMotion_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"addMousePosition") ) { return ::hx::Val( addMousePosition_dyn() ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"addMouseClickAndDragMotion") ) { return ::hx::Val( addMouseClickAndDragMotion_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxActionAnalog_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"callback") ) { callback=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxActionAnalog_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxActionAnalog_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxActionAnalog_obj,callback),HX_("callback",c5,99,06,7f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxActionAnalog_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxActionAnalog_obj_sMemberFields[] = {
	HX_("callback",c5,99,06,7f),
	HX_("add",21,f2,49,00),
	HX_("addMouseClickAndDragMotion",fd,ae,7d,fb),
	HX_("addMouseMotion",9a,c1,bc,56),
	HX_("addMousePosition",0d,7d,2a,59),
	HX_("addGamepad",80,0c,10,f1),
	HX_("update",09,86,05,87),
	HX_("destroy",fa,2c,86,24),
	HX_("toString",ac,d0,6e,38),
	HX_("check",c8,98,b6,45),
	HX_("get_x",4f,a5,60,91),
	HX_("get_y",50,a5,60,91),
	::String(null()) };

::hx::Class FlxActionAnalog_obj::__mClass;

void FlxActionAnalog_obj::__register()
{
	FlxActionAnalog_obj _hx_dummy;
	FlxActionAnalog_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.input.actions.FlxActionAnalog",91,d9,3d,35);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxActionAnalog_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxActionAnalog_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxActionAnalog_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxActionAnalog_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace input
} // end namespace actions
