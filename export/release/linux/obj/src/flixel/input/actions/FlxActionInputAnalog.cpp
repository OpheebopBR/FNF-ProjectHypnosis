#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxAction
#include <flixel/input/actions/FlxAction.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionInput
#include <flixel/input/actions/FlxActionInput.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionInputAnalog
#include <flixel/input/actions/FlxActionInputAnalog.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxInputDevice
#include <flixel/input/actions/FlxInputDevice.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxInputType
#include <flixel/input/actions/FlxInputType.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_11dc5d554a568b00_302_new,"flixel.input.actions.FlxActionInputAnalog","new",0x759b504b,"flixel.input.actions.FlxActionInputAnalog.new","flixel/input/actions/FlxActionInputAnalog.hx",302,0x00ad3122)
HX_LOCAL_STACK_FRAME(_hx_pos_11dc5d554a568b00_323_check,"flixel.input.actions.FlxActionInputAnalog","check",0x3bce2973,"flixel.input.actions.FlxActionInputAnalog.check","flixel/input/actions/FlxActionInputAnalog.hx",323,0x00ad3122)
HX_LOCAL_STACK_FRAME(_hx_pos_11dc5d554a568b00_360_checkAxis,"flixel.input.actions.FlxActionInputAnalog","checkAxis",0x0afda7b4,"flixel.input.actions.FlxActionInputAnalog.checkAxis","flixel/input/actions/FlxActionInputAnalog.hx",360,0x00ad3122)
HX_LOCAL_STACK_FRAME(_hx_pos_11dc5d554a568b00_366_updateValues,"flixel.input.actions.FlxActionInputAnalog","updateValues",0xef275580,"flixel.input.actions.FlxActionInputAnalog.updateValues","flixel/input/actions/FlxActionInputAnalog.hx",366,0x00ad3122)
HX_LOCAL_STACK_FRAME(_hx_pos_11dc5d554a568b00_311_boot,"flixel.input.actions.FlxActionInputAnalog","boot",0x6a63f1e7,"flixel.input.actions.FlxActionInputAnalog.boot","flixel/input/actions/FlxActionInputAnalog.hx",311,0x00ad3122)
HX_LOCAL_STACK_FRAME(_hx_pos_11dc5d554a568b00_312_boot,"flixel.input.actions.FlxActionInputAnalog","boot",0x6a63f1e7,"flixel.input.actions.FlxActionInputAnalog.boot","flixel/input/actions/FlxActionInputAnalog.hx",312,0x00ad3122)
namespace flixel{
namespace input{
namespace actions{

void FlxActionInputAnalog_obj::__construct( ::flixel::input::actions::FlxInputDevice Device,int InputID,int Trigger,::hx::Null< int >  __o_Axis,::hx::Null< int >  __o_DeviceID){
            		int Axis = __o_Axis.Default(3);
            		int DeviceID = __o_DeviceID.Default(-2);
            	HX_GC_STACKFRAME(&_hx_pos_11dc5d554a568b00_302_new)
HXLINE( 307)		this->y = ((Float)0);
HXLINE( 306)		this->x = ((Float)0);
HXLINE( 316)		super::__construct(::flixel::input::actions::FlxInputType_obj::ANALOG_dyn(),Device,InputID,Trigger,DeviceID);
HXLINE( 317)		this->axis = Axis;
HXLINE( 318)		this->xMoved =  ::flixel::input::FlxInput_obj::__alloc( HX_CTX ,0);
HXLINE( 319)		this->yMoved =  ::flixel::input::FlxInput_obj::__alloc( HX_CTX ,1);
            	}

Dynamic FlxActionInputAnalog_obj::__CreateEmpty() { return new FlxActionInputAnalog_obj; }

void *FlxActionInputAnalog_obj::_hx_vtable = 0;

Dynamic FlxActionInputAnalog_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxActionInputAnalog_obj > _hx_result = new FlxActionInputAnalog_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool FlxActionInputAnalog_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x20308a99) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x20308a99;
	} else {
		return inClassId==(int)0x7f995ee1;
	}
}

bool FlxActionInputAnalog_obj::check( ::flixel::input::actions::FlxAction Action){
            	HX_STACKFRAME(&_hx_pos_11dc5d554a568b00_323_check)
HXLINE( 324)		bool returnVal;
HXDLIN( 324)		switch((int)(this->axis)){
            			case (int)0: {
HXLINE( 326)				int state = this->xMoved->current;
HXDLIN( 326)				switch((int)(this->trigger)){
            					case (int)-1: {
HXLINE( 324)						returnVal = (state == -1);
            					}
            					break;
            					case (int)0: {
HXLINE( 326)						if ((state != 0)) {
HXLINE( 324)							returnVal = (state == -1);
            						}
            						else {
HXLINE( 324)							returnVal = true;
            						}
            					}
            					break;
            					case (int)1: {
HXLINE( 326)						if ((state != 1)) {
HXLINE( 324)							returnVal = (state == 2);
            						}
            						else {
HXLINE( 324)							returnVal = true;
            						}
            					}
            					break;
            					case (int)2: {
HXLINE( 324)						returnVal = (state == 2);
            					}
            					break;
            					default:{
HXLINE( 324)						returnVal = false;
            					}
            				}
            			}
            			break;
            			case (int)1: {
HXLINE( 327)				int state = this->yMoved->current;
HXDLIN( 327)				switch((int)(this->trigger)){
            					case (int)-1: {
HXLINE( 324)						returnVal = (state == -1);
            					}
            					break;
            					case (int)0: {
HXLINE( 327)						if ((state != 0)) {
HXLINE( 324)							returnVal = (state == -1);
            						}
            						else {
HXLINE( 324)							returnVal = true;
            						}
            					}
            					break;
            					case (int)1: {
HXLINE( 327)						if ((state != 1)) {
HXLINE( 324)							returnVal = (state == 2);
            						}
            						else {
HXLINE( 324)							returnVal = true;
            						}
            					}
            					break;
            					case (int)2: {
HXLINE( 324)						returnVal = (state == 2);
            					}
            					break;
            					default:{
HXLINE( 324)						returnVal = false;
            					}
            				}
            			}
            			break;
            			case (int)2: {
HXLINE( 328)				int state = this->xMoved->current;
HXDLIN( 328)				bool returnVal1;
HXDLIN( 328)				switch((int)(this->trigger)){
            					case (int)-1: {
HXLINE( 328)						returnVal1 = (state == -1);
            					}
            					break;
            					case (int)0: {
HXLINE( 328)						if ((state != 0)) {
HXLINE( 328)							returnVal1 = (state == -1);
            						}
            						else {
HXLINE( 328)							returnVal1 = true;
            						}
            					}
            					break;
            					case (int)1: {
HXLINE( 328)						if ((state != 1)) {
HXLINE( 328)							returnVal1 = (state == 2);
            						}
            						else {
HXLINE( 328)							returnVal1 = true;
            						}
            					}
            					break;
            					case (int)2: {
HXLINE( 328)						returnVal1 = (state == 2);
            					}
            					break;
            					default:{
HXLINE( 328)						returnVal1 = false;
            					}
            				}
HXDLIN( 328)				if (returnVal1) {
HXLINE( 328)					int state = this->yMoved->current;
HXDLIN( 328)					switch((int)(this->trigger)){
            						case (int)-1: {
HXLINE( 324)							returnVal = (state == -1);
            						}
            						break;
            						case (int)0: {
HXLINE( 328)							if ((state != 0)) {
HXLINE( 324)								returnVal = (state == -1);
            							}
            							else {
HXLINE( 324)								returnVal = true;
            							}
            						}
            						break;
            						case (int)1: {
HXLINE( 328)							if ((state != 1)) {
HXLINE( 324)								returnVal = (state == 2);
            							}
            							else {
HXLINE( 324)								returnVal = true;
            							}
            						}
            						break;
            						case (int)2: {
HXLINE( 324)							returnVal = (state == 2);
            						}
            						break;
            						default:{
HXLINE( 324)							returnVal = false;
            						}
            					}
            				}
            				else {
HXLINE( 324)					returnVal = false;
            				}
            			}
            			break;
            			case (int)3: {
HXLINE( 332)				switch((int)(this->trigger)){
            					case (int)-1: {
HXLINE( 341)						bool returnVal1;
HXDLIN( 341)						if (this->checkAxis(true,-1)) {
HXLINE( 341)							returnVal1 = this->checkAxis(false,0);
            						}
            						else {
HXLINE( 341)							returnVal1 = false;
            						}
HXDLIN( 341)						if (!(returnVal1)) {
HXLINE( 343)							if (this->checkAxis(true,0)) {
HXLINE( 324)								returnVal = this->checkAxis(false,-1);
            							}
            							else {
HXLINE( 324)								returnVal = false;
            							}
            						}
            						else {
HXLINE( 324)							returnVal = true;
            						}
            					}
            					break;
            					case (int)0: {
HXLINE( 335)						if (!(this->checkAxis(true,0))) {
HXLINE( 324)							returnVal = this->checkAxis(false,0);
            						}
            						else {
HXLINE( 324)							returnVal = true;
            						}
            					}
            					break;
            					case (int)1: {
HXLINE( 334)						if (!(this->checkAxis(true,1))) {
HXLINE( 324)							returnVal = this->checkAxis(false,1);
            						}
            						else {
HXLINE( 324)							returnVal = true;
            						}
            					}
            					break;
            					case (int)2: {
HXLINE( 337)						bool returnVal1;
HXDLIN( 337)						bool returnVal2;
HXDLIN( 337)						if (this->checkAxis(true,2)) {
HXLINE( 337)							returnVal2 = this->checkAxis(false,2);
            						}
            						else {
HXLINE( 337)							returnVal2 = false;
            						}
HXDLIN( 337)						if (!(returnVal2)) {
HXLINE( 338)							if (this->checkAxis(true,2)) {
HXLINE( 337)								returnVal1 = this->checkAxis(false,0);
            							}
            							else {
HXLINE( 337)								returnVal1 = false;
            							}
            						}
            						else {
HXLINE( 337)							returnVal1 = true;
            						}
HXDLIN( 337)						if (!(returnVal1)) {
HXLINE( 339)							if (this->checkAxis(true,0)) {
HXLINE( 324)								returnVal = this->checkAxis(false,2);
            							}
            							else {
HXLINE( 324)								returnVal = false;
            							}
            						}
            						else {
HXLINE( 324)							returnVal = true;
            						}
            					}
            					break;
            				}
            			}
            			break;
            		}
HXLINE( 348)		if (returnVal) {
HXLINE( 350)			if (::hx::IsNull( Action->_x )) {
HXLINE( 351)				Action->_x = this->x;
            			}
HXLINE( 352)			if (::hx::IsNull( Action->_y )) {
HXLINE( 353)				Action->_y = this->y;
            			}
            		}
HXLINE( 356)		return returnVal;
            	}


bool FlxActionInputAnalog_obj::checkAxis(bool isX,int state){
            	HX_STACKFRAME(&_hx_pos_11dc5d554a568b00_360_checkAxis)
HXLINE( 361)		 ::flixel::input::FlxInput input;
HXDLIN( 361)		if (isX) {
HXLINE( 361)			input = this->xMoved;
            		}
            		else {
HXLINE( 361)			input = this->yMoved;
            		}
HXLINE( 362)		int state1 = input->current;
HXDLIN( 362)		switch((int)(state)){
            			case (int)-1: {
HXLINE( 362)				return (state1 == -1);
            			}
            			break;
            			case (int)0: {
HXLINE( 362)				if ((state1 != 0)) {
HXLINE( 362)					return (state1 == -1);
            				}
            				else {
HXLINE( 362)					return true;
            				}
            			}
            			break;
            			case (int)1: {
HXLINE( 362)				if ((state1 != 1)) {
HXLINE( 362)					return (state1 == 2);
            				}
            				else {
HXLINE( 362)					return true;
            				}
            			}
            			break;
            			case (int)2: {
HXLINE( 362)				return (state1 == 2);
            			}
            			break;
            			default:{
HXLINE( 362)				return false;
            			}
            		}
HXDLIN( 362)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxActionInputAnalog_obj,checkAxis,return )

void FlxActionInputAnalog_obj::updateValues(Float X,Float Y){
            	HX_STACKFRAME(&_hx_pos_11dc5d554a568b00_366_updateValues)
HXLINE( 367)		if ((X != 0)) {
HXLINE( 369)			this->xMoved->press();
            		}
            		else {
HXLINE( 373)			this->xMoved->release();
            		}
HXLINE( 376)		if ((Y != 0)) {
HXLINE( 378)			this->yMoved->press();
            		}
            		else {
HXLINE( 382)			this->yMoved->release();
            		}
HXLINE( 385)		this->x = X;
HXLINE( 386)		this->y = Y;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxActionInputAnalog_obj,updateValues,(void))

bool FlxActionInputAnalog_obj::A_X;

bool FlxActionInputAnalog_obj::A_Y;


::hx::ObjectPtr< FlxActionInputAnalog_obj > FlxActionInputAnalog_obj::__new( ::flixel::input::actions::FlxInputDevice Device,int InputID,int Trigger,::hx::Null< int >  __o_Axis,::hx::Null< int >  __o_DeviceID) {
	::hx::ObjectPtr< FlxActionInputAnalog_obj > __this = new FlxActionInputAnalog_obj();
	__this->__construct(Device,InputID,Trigger,__o_Axis,__o_DeviceID);
	return __this;
}

::hx::ObjectPtr< FlxActionInputAnalog_obj > FlxActionInputAnalog_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::input::actions::FlxInputDevice Device,int InputID,int Trigger,::hx::Null< int >  __o_Axis,::hx::Null< int >  __o_DeviceID) {
	FlxActionInputAnalog_obj *__this = (FlxActionInputAnalog_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxActionInputAnalog_obj), true, "flixel.input.actions.FlxActionInputAnalog"));
	*(void **)__this = FlxActionInputAnalog_obj::_hx_vtable;
	__this->__construct(Device,InputID,Trigger,__o_Axis,__o_DeviceID);
	return __this;
}

FlxActionInputAnalog_obj::FlxActionInputAnalog_obj()
{
}

void FlxActionInputAnalog_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxActionInputAnalog);
	HX_MARK_MEMBER_NAME(axis,"axis");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(xMoved,"xMoved");
	HX_MARK_MEMBER_NAME(yMoved,"yMoved");
	 ::flixel::input::actions::FlxActionInput_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxActionInputAnalog_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(axis,"axis");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(xMoved,"xMoved");
	HX_VISIT_MEMBER_NAME(yMoved,"yMoved");
	 ::flixel::input::actions::FlxActionInput_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxActionInputAnalog_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return ::hx::Val( x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return ::hx::Val( y ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"axis") ) { return ::hx::Val( axis ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"check") ) { return ::hx::Val( check_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"xMoved") ) { return ::hx::Val( xMoved ); }
		if (HX_FIELD_EQ(inName,"yMoved") ) { return ::hx::Val( yMoved ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"checkAxis") ) { return ::hx::Val( checkAxis_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"updateValues") ) { return ::hx::Val( updateValues_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxActionInputAnalog_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"axis") ) { axis=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"xMoved") ) { xMoved=inValue.Cast<  ::flixel::input::FlxInput >(); return inValue; }
		if (HX_FIELD_EQ(inName,"yMoved") ) { yMoved=inValue.Cast<  ::flixel::input::FlxInput >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxActionInputAnalog_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("axis",a1,1c,79,40));
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	outFields->push(HX_("xMoved",9b,88,66,9a));
	outFields->push(HX_("yMoved",fa,e4,c1,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxActionInputAnalog_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(FlxActionInputAnalog_obj,axis),HX_("axis",a1,1c,79,40)},
	{::hx::fsFloat,(int)offsetof(FlxActionInputAnalog_obj,x),HX_("x",78,00,00,00)},
	{::hx::fsFloat,(int)offsetof(FlxActionInputAnalog_obj,y),HX_("y",79,00,00,00)},
	{::hx::fsObject /*  ::flixel::input::FlxInput */ ,(int)offsetof(FlxActionInputAnalog_obj,xMoved),HX_("xMoved",9b,88,66,9a)},
	{::hx::fsObject /*  ::flixel::input::FlxInput */ ,(int)offsetof(FlxActionInputAnalog_obj,yMoved),HX_("yMoved",fa,e4,c1,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo FlxActionInputAnalog_obj_sStaticStorageInfo[] = {
	{::hx::fsBool,(void *) &FlxActionInputAnalog_obj::A_X,HX_("A_X",9a,a5,31,00)},
	{::hx::fsBool,(void *) &FlxActionInputAnalog_obj::A_Y,HX_("A_Y",9b,a5,31,00)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String FlxActionInputAnalog_obj_sMemberFields[] = {
	HX_("axis",a1,1c,79,40),
	HX_("x",78,00,00,00),
	HX_("y",79,00,00,00),
	HX_("xMoved",9b,88,66,9a),
	HX_("yMoved",fa,e4,c1,00),
	HX_("check",c8,98,b6,45),
	HX_("checkAxis",89,e5,58,94),
	HX_("updateValues",cb,aa,7a,4f),
	::String(null()) };

static void FlxActionInputAnalog_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxActionInputAnalog_obj::A_X,"A_X");
	HX_MARK_MEMBER_NAME(FlxActionInputAnalog_obj::A_Y,"A_Y");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxActionInputAnalog_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxActionInputAnalog_obj::A_X,"A_X");
	HX_VISIT_MEMBER_NAME(FlxActionInputAnalog_obj::A_Y,"A_Y");
};

#endif

::hx::Class FlxActionInputAnalog_obj::__mClass;

static ::String FlxActionInputAnalog_obj_sStaticFields[] = {
	HX_("A_X",9a,a5,31,00),
	HX_("A_Y",9b,a5,31,00),
	::String(null())
};

void FlxActionInputAnalog_obj::__register()
{
	FlxActionInputAnalog_obj _hx_dummy;
	FlxActionInputAnalog_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.input.actions.FlxActionInputAnalog",d9,ce,6c,b3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxActionInputAnalog_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxActionInputAnalog_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxActionInputAnalog_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxActionInputAnalog_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxActionInputAnalog_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxActionInputAnalog_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxActionInputAnalog_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxActionInputAnalog_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_11dc5d554a568b00_311_boot)
HXDLIN( 311)		A_X = true;
            	}
{
            	HX_STACKFRAME(&_hx_pos_11dc5d554a568b00_312_boot)
HXDLIN( 312)		A_Y = false;
            	}
}

} // end namespace flixel
} // end namespace input
} // end namespace actions
