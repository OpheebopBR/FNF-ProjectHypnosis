#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxAction
#include <flixel/input/actions/FlxAction.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionDigital
#include <flixel/input/actions/FlxActionDigital.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionInput
#include <flixel/input/actions/FlxActionInput.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionInputDigital
#include <flixel/input/actions/FlxActionInputDigital.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionInputDigitalGamepad
#include <flixel/input/actions/FlxActionInputDigitalGamepad.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionInputDigitalIFlxInput
#include <flixel/input/actions/FlxActionInputDigitalIFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionInputDigitalKeyboard
#include <flixel/input/actions/FlxActionInputDigitalKeyboard.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionInputDigitalMouse
#include <flixel/input/actions/FlxActionInputDigitalMouse.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionInputDigitalMouseWheel
#include <flixel/input/actions/FlxActionInputDigitalMouseWheel.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxInputType
#include <flixel/input/actions/FlxInputType.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_740854858cd8efa1_51_new,"flixel.input.actions.FlxActionDigital","new",0xd7b051c9,"flixel.input.actions.FlxActionDigital.new","flixel/input/actions/FlxAction.hx",51,0xb046b220)
HX_LOCAL_STACK_FRAME(_hx_pos_740854858cd8efa1_62_add,"flixel.input.actions.FlxActionDigital","add",0xd7a6738a,"flixel.input.actions.FlxActionDigital.add","flixel/input/actions/FlxAction.hx",62,0xb046b220)
HX_LOCAL_STACK_FRAME(_hx_pos_740854858cd8efa1_82_addInput,"flixel.input.actions.FlxActionDigital","addInput",0x37a3ac20,"flixel.input.actions.FlxActionDigital.addInput","flixel/input/actions/FlxAction.hx",82,0xb046b220)
HX_LOCAL_STACK_FRAME(_hx_pos_740854858cd8efa1_94_addGamepad,"flixel.input.actions.FlxActionDigital","addGamepad",0xde667a37,"flixel.input.actions.FlxActionDigital.addGamepad","flixel/input/actions/FlxAction.hx",94,0xb046b220)
HX_LOCAL_STACK_FRAME(_hx_pos_740854858cd8efa1_105_addKey,"flixel.input.actions.FlxActionDigital","addKey",0x53142035,"flixel.input.actions.FlxActionDigital.addKey","flixel/input/actions/FlxAction.hx",105,0xb046b220)
HX_LOCAL_STACK_FRAME(_hx_pos_740854858cd8efa1_116_addMouse,"flixel.input.actions.FlxActionDigital","addMouse",0x85eafe3b,"flixel.input.actions.FlxActionDigital.addMouse","flixel/input/actions/FlxAction.hx",116,0xb046b220)
HX_LOCAL_STACK_FRAME(_hx_pos_740854858cd8efa1_127_addMouseWheel,"flixel.input.actions.FlxActionDigital","addMouseWheel",0x63723060,"flixel.input.actions.FlxActionDigital.addMouseWheel","flixel/input/actions/FlxAction.hx",127,0xb046b220)
HX_LOCAL_STACK_FRAME(_hx_pos_740854858cd8efa1_146_destroy,"flixel.input.actions.FlxActionDigital","destroy",0xffca16e3,"flixel.input.actions.FlxActionDigital.destroy","flixel/input/actions/FlxAction.hx",146,0xb046b220)
HX_LOCAL_STACK_FRAME(_hx_pos_740854858cd8efa1_152_check,"flixel.input.actions.FlxActionDigital","check",0x0e450671,"flixel.input.actions.FlxActionDigital.check","flixel/input/actions/FlxAction.hx",152,0xb046b220)
namespace flixel{
namespace input{
namespace actions{

void FlxActionDigital_obj::__construct(::String __o_Name, ::Dynamic Callback){
            		::String Name = __o_Name;
            		if (::hx::IsNull(__o_Name)) Name = HX_("",00,00,00,00);
            	HX_STACKFRAME(&_hx_pos_740854858cd8efa1_51_new)
HXLINE(  52)		super::__construct(::flixel::input::actions::FlxInputType_obj::DIGITAL_dyn(),Name);
HXLINE(  53)		this->callback = Callback;
            	}

Dynamic FlxActionDigital_obj::__CreateEmpty() { return new FlxActionDigital_obj; }

void *FlxActionDigital_obj::_hx_vtable = 0;

Dynamic FlxActionDigital_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxActionDigital_obj > _hx_result = new FlxActionDigital_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool FlxActionDigital_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2660e195) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x2660e195;
	} else {
		return inClassId==(int)0x53d9a55f;
	}
}

 ::flixel::input::actions::FlxActionDigital FlxActionDigital_obj::add( ::flixel::input::actions::FlxActionInputDigital input){
            	HX_STACKFRAME(&_hx_pos_740854858cd8efa1_62_add)
HXLINE(  63)		this->addGenericInput(input);
HXLINE(  64)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxActionDigital_obj,add,return )

 ::flixel::input::actions::FlxActionDigital FlxActionDigital_obj::addInput(::Dynamic Input,int Trigger){
            	HX_GC_STACKFRAME(&_hx_pos_740854858cd8efa1_82_addInput)
HXDLIN(  82)		return this->add( ::flixel::input::actions::FlxActionInputDigitalIFlxInput_obj::__alloc( HX_CTX ,Input,Trigger));
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxActionDigital_obj,addInput,return )

 ::flixel::input::actions::FlxActionDigital FlxActionDigital_obj::addGamepad(int InputID,int Trigger,::hx::Null< int >  __o_GamepadID){
            		int GamepadID = __o_GamepadID.Default(-2);
            	HX_GC_STACKFRAME(&_hx_pos_740854858cd8efa1_94_addGamepad)
HXDLIN(  94)		return this->add( ::flixel::input::actions::FlxActionInputDigitalGamepad_obj::__alloc( HX_CTX ,InputID,Trigger,GamepadID));
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxActionDigital_obj,addGamepad,return )

 ::flixel::input::actions::FlxActionDigital FlxActionDigital_obj::addKey(int Key,int Trigger){
            	HX_GC_STACKFRAME(&_hx_pos_740854858cd8efa1_105_addKey)
HXDLIN( 105)		return this->add( ::flixel::input::actions::FlxActionInputDigitalKeyboard_obj::__alloc( HX_CTX ,Key,Trigger));
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxActionDigital_obj,addKey,return )

 ::flixel::input::actions::FlxActionDigital FlxActionDigital_obj::addMouse(int ButtonID,int Trigger){
            	HX_GC_STACKFRAME(&_hx_pos_740854858cd8efa1_116_addMouse)
HXDLIN( 116)		return this->add( ::flixel::input::actions::FlxActionInputDigitalMouse_obj::__alloc( HX_CTX ,ButtonID,Trigger));
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxActionDigital_obj,addMouse,return )

 ::flixel::input::actions::FlxActionDigital FlxActionDigital_obj::addMouseWheel(bool Positive,int Trigger){
            	HX_GC_STACKFRAME(&_hx_pos_740854858cd8efa1_127_addMouseWheel)
HXDLIN( 127)		return this->add( ::flixel::input::actions::FlxActionInputDigitalMouseWheel_obj::__alloc( HX_CTX ,Positive,Trigger));
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxActionDigital_obj,addMouseWheel,return )

void FlxActionDigital_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_740854858cd8efa1_146_destroy)
HXLINE( 147)		this->callback = null();
HXLINE( 148)		this->super::destroy();
            	}


bool FlxActionDigital_obj::check(){
            	HX_STACKFRAME(&_hx_pos_740854858cd8efa1_152_check)
HXLINE( 153)		bool val = this->super::check();
HXLINE( 154)		bool _hx_tmp;
HXDLIN( 154)		if (val) {
HXLINE( 154)			_hx_tmp = ::hx::IsNotNull( this->callback );
            		}
            		else {
HXLINE( 154)			_hx_tmp = false;
            		}
HXDLIN( 154)		if (_hx_tmp) {
HXLINE( 156)			this->callback(::hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE( 158)		return val;
            	}



::hx::ObjectPtr< FlxActionDigital_obj > FlxActionDigital_obj::__new(::String __o_Name, ::Dynamic Callback) {
	::hx::ObjectPtr< FlxActionDigital_obj > __this = new FlxActionDigital_obj();
	__this->__construct(__o_Name,Callback);
	return __this;
}

::hx::ObjectPtr< FlxActionDigital_obj > FlxActionDigital_obj::__alloc(::hx::Ctx *_hx_ctx,::String __o_Name, ::Dynamic Callback) {
	FlxActionDigital_obj *__this = (FlxActionDigital_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxActionDigital_obj), true, "flixel.input.actions.FlxActionDigital"));
	*(void **)__this = FlxActionDigital_obj::_hx_vtable;
	__this->__construct(__o_Name,Callback);
	return __this;
}

FlxActionDigital_obj::FlxActionDigital_obj()
{
}

void FlxActionDigital_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxActionDigital);
	HX_MARK_MEMBER_NAME(callback,"callback");
	 ::flixel::input::actions::FlxAction_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxActionDigital_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(callback,"callback");
	 ::flixel::input::actions::FlxAction_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxActionDigital_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"check") ) { return ::hx::Val( check_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"addKey") ) { return ::hx::Val( addKey_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"callback") ) { return ::hx::Val( callback ); }
		if (HX_FIELD_EQ(inName,"addInput") ) { return ::hx::Val( addInput_dyn() ); }
		if (HX_FIELD_EQ(inName,"addMouse") ) { return ::hx::Val( addMouse_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"addGamepad") ) { return ::hx::Val( addGamepad_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"addMouseWheel") ) { return ::hx::Val( addMouseWheel_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxActionDigital_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"callback") ) { callback=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxActionDigital_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxActionDigital_obj,callback),HX_("callback",c5,99,06,7f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxActionDigital_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxActionDigital_obj_sMemberFields[] = {
	HX_("callback",c5,99,06,7f),
	HX_("add",21,f2,49,00),
	HX_("addInput",29,ea,7a,37),
	HX_("addGamepad",80,0c,10,f1),
	HX_("addKey",fe,99,02,9f),
	HX_("addMouse",44,3c,c2,85),
	HX_("addMouseWheel",b7,71,d0,51),
	HX_("destroy",fa,2c,86,24),
	HX_("check",c8,98,b6,45),
	::String(null()) };

::hx::Class FlxActionDigital_obj::__mClass;

void FlxActionDigital_obj::__register()
{
	FlxActionDigital_obj _hx_dummy;
	FlxActionDigital_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.input.actions.FlxActionDigital",57,b9,47,50);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxActionDigital_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxActionDigital_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxActionDigital_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxActionDigital_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace input
} // end namespace actions
