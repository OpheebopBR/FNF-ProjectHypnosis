#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_TouchEvent
#include <openfl/events/TouchEvent.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a67c52c2b0f75a05_453_new,"openfl.events.TouchEvent","new",0xe223a0c4,"openfl.events.TouchEvent.new","openfl/events/TouchEvent.hx",453,0x2fe85d0c)
HX_LOCAL_STACK_FRAME(_hx_pos_a67c52c2b0f75a05_475_clone,"openfl.events.TouchEvent","clone",0x1a12c4c1,"openfl.events.TouchEvent.clone","openfl/events/TouchEvent.hx",475,0x2fe85d0c)
HX_LOCAL_STACK_FRAME(_hx_pos_a67c52c2b0f75a05_486_toString,"openfl.events.TouchEvent","toString",0x9efd15c8,"openfl.events.TouchEvent.toString","openfl/events/TouchEvent.hx",486,0x2fe85d0c)
static const ::String _hx_array_data_e5132ed2_3[] = {
	HX_("type",ba,f2,08,4d),HX_("bubbles",67,bb,56,61),HX_("cancelable",14,a0,79,c4),HX_("touchPointID",2c,be,83,7b),HX_("isPrimaryTouchPoint",29,3f,07,49),HX_("localX",8d,74,bf,59),HX_("localY",8e,74,bf,59),HX_("sizeX",77,08,d9,7c),HX_("sizeY",78,08,d9,7c),HX_("pressure",c5,ab,1d,70),HX_("relatedObject",0a,bf,cb,e8),HX_("ctrlKey",b4,35,7d,61),HX_("altKey",f6,a7,ca,44),HX_("shiftKey",3d,92,9f,99),HX_("commandKey",14,71,9b,43),HX_("controlKey",42,8e,a5,04),
};
HX_LOCAL_STACK_FRAME(_hx_pos_a67c52c2b0f75a05_497_updateAfterEvent,"openfl.events.TouchEvent","updateAfterEvent",0xeb0abce3,"openfl.events.TouchEvent.updateAfterEvent","openfl/events/TouchEvent.hx",497,0x2fe85d0c)
HX_LOCAL_STACK_FRAME(_hx_pos_a67c52c2b0f75a05_511___init,"openfl.events.TouchEvent","__init",0x9cbf244c,"openfl.events.TouchEvent.__init","openfl/events/TouchEvent.hx",511,0x2fe85d0c)
HX_LOCAL_STACK_FRAME(_hx_pos_a67c52c2b0f75a05_501___create,"openfl.events.TouchEvent","__create",0x8acd1738,"openfl.events.TouchEvent.__create","openfl/events/TouchEvent.hx",501,0x2fe85d0c)
HX_LOCAL_STACK_FRAME(_hx_pos_a67c52c2b0f75a05_39_boot,"openfl.events.TouchEvent","boot",0xf5220b4e,"openfl.events.TouchEvent.boot","openfl/events/TouchEvent.hx",39,0x2fe85d0c)
HX_LOCAL_STACK_FRAME(_hx_pos_a67c52c2b0f75a05_77_boot,"openfl.events.TouchEvent","boot",0xf5220b4e,"openfl.events.TouchEvent.boot","openfl/events/TouchEvent.hx",77,0x2fe85d0c)
HX_LOCAL_STACK_FRAME(_hx_pos_a67c52c2b0f75a05_107_boot,"openfl.events.TouchEvent","boot",0xf5220b4e,"openfl.events.TouchEvent.boot","openfl/events/TouchEvent.hx",107,0x2fe85d0c)
HX_LOCAL_STACK_FRAME(_hx_pos_a67c52c2b0f75a05_137_boot,"openfl.events.TouchEvent","boot",0xf5220b4e,"openfl.events.TouchEvent.boot","openfl/events/TouchEvent.hx",137,0x2fe85d0c)
HX_LOCAL_STACK_FRAME(_hx_pos_a67c52c2b0f75a05_167_boot,"openfl.events.TouchEvent","boot",0xf5220b4e,"openfl.events.TouchEvent.boot","openfl/events/TouchEvent.hx",167,0x2fe85d0c)
HX_LOCAL_STACK_FRAME(_hx_pos_a67c52c2b0f75a05_197_boot,"openfl.events.TouchEvent","boot",0xf5220b4e,"openfl.events.TouchEvent.boot","openfl/events/TouchEvent.hx",197,0x2fe85d0c)
HX_LOCAL_STACK_FRAME(_hx_pos_a67c52c2b0f75a05_227_boot,"openfl.events.TouchEvent","boot",0xf5220b4e,"openfl.events.TouchEvent.boot","openfl/events/TouchEvent.hx",227,0x2fe85d0c)
HX_LOCAL_STACK_FRAME(_hx_pos_a67c52c2b0f75a05_257_boot,"openfl.events.TouchEvent","boot",0xf5220b4e,"openfl.events.TouchEvent.boot","openfl/events/TouchEvent.hx",257,0x2fe85d0c)
HX_LOCAL_STACK_FRAME(_hx_pos_a67c52c2b0f75a05_287_boot,"openfl.events.TouchEvent","boot",0xf5220b4e,"openfl.events.TouchEvent.boot","openfl/events/TouchEvent.hx",287,0x2fe85d0c)
namespace openfl{
namespace events{

void TouchEvent_obj::__construct(::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable,::hx::Null< int >  __o_touchPointID,::hx::Null< bool >  __o_isPrimaryTouchPoint,::hx::Null< Float >  __o_localX,::hx::Null< Float >  __o_localY,::hx::Null< Float >  __o_sizeX,::hx::Null< Float >  __o_sizeY,::hx::Null< Float >  __o_pressure, ::openfl::display::InteractiveObject relatedObject,::hx::Null< bool >  __o_ctrlKey,::hx::Null< bool >  __o_altKey,::hx::Null< bool >  __o_shiftKey,::hx::Null< bool >  __o_commandKey,::hx::Null< bool >  __o_controlKey,::hx::Null< Float >  __o_timestamp,::String touchIntent, ::openfl::utils::ByteArrayData samples,::hx::Null< bool >  __o_isTouchPointCanceled){
            		bool bubbles = __o_bubbles.Default(true);
            		bool cancelable = __o_cancelable.Default(false);
            		int touchPointID = __o_touchPointID.Default(0);
            		bool isPrimaryTouchPoint = __o_isPrimaryTouchPoint.Default(false);
            		Float localX = __o_localX.Default(0);
            		Float localY = __o_localY.Default(0);
            		Float sizeX = __o_sizeX.Default(0);
            		Float sizeY = __o_sizeY.Default(0);
            		Float pressure = __o_pressure.Default(0);
            		bool ctrlKey = __o_ctrlKey.Default(false);
            		bool altKey = __o_altKey.Default(false);
            		bool shiftKey = __o_shiftKey.Default(false);
            		bool commandKey = __o_commandKey.Default(false);
            		bool controlKey = __o_controlKey.Default(false);
            		Float timestamp = __o_timestamp.Default(0);
            		bool isTouchPointCanceled = __o_isTouchPointCanceled.Default(false);
            	HX_STACKFRAME(&_hx_pos_a67c52c2b0f75a05_453_new)
HXLINE( 454)		super::__construct(type,bubbles,cancelable);
HXLINE( 456)		this->touchPointID = touchPointID;
HXLINE( 457)		this->isPrimaryTouchPoint = isPrimaryTouchPoint;
HXLINE( 458)		this->localX = localX;
HXLINE( 459)		this->localY = localY;
HXLINE( 460)		this->sizeX = sizeX;
HXLINE( 461)		this->sizeY = sizeY;
HXLINE( 462)		this->pressure = pressure;
HXLINE( 463)		this->relatedObject = relatedObject;
HXLINE( 464)		this->ctrlKey = ctrlKey;
HXLINE( 465)		this->altKey = altKey;
HXLINE( 466)		this->shiftKey = shiftKey;
HXLINE( 467)		this->commandKey = commandKey;
HXLINE( 468)		this->controlKey = controlKey;
HXLINE( 470)		this->stageX = ::Math_obj::NaN;
HXLINE( 471)		this->stageY = ::Math_obj::NaN;
            	}

Dynamic TouchEvent_obj::__CreateEmpty() { return new TouchEvent_obj; }

void *TouchEvent_obj::_hx_vtable = 0;

Dynamic TouchEvent_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TouchEvent_obj > _hx_result = new TouchEvent_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8],inArgs[9],inArgs[10],inArgs[11],inArgs[12],inArgs[13],inArgs[14],inArgs[15],inArgs[16],inArgs[17],inArgs[18],inArgs[19]);
	return _hx_result;
}

bool TouchEvent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x08ec4c31) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x08ec4c31;
	} else {
		return inClassId==(int)0x5ca4f464;
	}
}

 ::openfl::events::Event TouchEvent_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_a67c52c2b0f75a05_475_clone)
HXLINE( 476)		 ::openfl::events::TouchEvent event =  ::openfl::events::TouchEvent_obj::__alloc( HX_CTX ,this->type,this->bubbles,this->cancelable,this->touchPointID,this->isPrimaryTouchPoint,this->localX,this->localY,this->sizeX,this->sizeY,this->pressure,this->relatedObject,this->ctrlKey,this->altKey,this->shiftKey,this->commandKey,this->controlKey,null(),null(),null(),null());
HXLINE( 478)		event->target = this->target;
HXLINE( 479)		event->currentTarget = this->currentTarget;
HXLINE( 480)		event->eventPhase = this->eventPhase;
HXLINE( 481)		return event;
            	}


::String TouchEvent_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_a67c52c2b0f75a05_486_toString)
HXDLIN( 486)		return this->_hx___formatToString(HX_("TouchEvent",fb,af,06,66),::Array_obj< ::String >::fromData( _hx_array_data_e5132ed2_3,16));
            	}


void TouchEvent_obj::updateAfterEvent(){
            	HX_STACKFRAME(&_hx_pos_a67c52c2b0f75a05_497_updateAfterEvent)
            	}


HX_DEFINE_DYNAMIC_FUNC0(TouchEvent_obj,updateAfterEvent,(void))

void TouchEvent_obj::_hx___init(){
            	HX_STACKFRAME(&_hx_pos_a67c52c2b0f75a05_511___init)
HXLINE( 512)		this->super::_hx___init();
HXLINE( 513)		this->touchPointID = 0;
HXLINE( 514)		this->isPrimaryTouchPoint = false;
HXLINE( 515)		this->localX = ( (Float)(0) );
HXLINE( 516)		this->localY = ( (Float)(0) );
HXLINE( 517)		this->sizeX = ( (Float)(0) );
HXLINE( 518)		this->sizeY = ( (Float)(0) );
HXLINE( 519)		this->pressure = ( (Float)(0) );
HXLINE( 520)		this->relatedObject = null();
HXLINE( 521)		this->ctrlKey = false;
HXLINE( 522)		this->altKey = false;
HXLINE( 523)		this->shiftKey = false;
HXLINE( 524)		this->commandKey = false;
HXLINE( 525)		this->controlKey = false;
HXLINE( 527)		this->stageX = ::Math_obj::NaN;
HXLINE( 528)		this->stageY = ::Math_obj::NaN;
            	}


::String TouchEvent_obj::TOUCH_BEGIN;

::String TouchEvent_obj::TOUCH_END;

::String TouchEvent_obj::TOUCH_MOVE;

::String TouchEvent_obj::TOUCH_OUT;

::String TouchEvent_obj::TOUCH_OVER;

::String TouchEvent_obj::TOUCH_ROLL_OUT;

::String TouchEvent_obj::TOUCH_ROLL_OVER;

::String TouchEvent_obj::TOUCH_TAP;

 ::openfl::events::TouchEvent TouchEvent_obj::_hx___create(::String type, ::Dynamic touch,Float stageX,Float stageY, ::openfl::geom::Point local, ::openfl::display::InteractiveObject target){
            	HX_GC_STACKFRAME(&_hx_pos_a67c52c2b0f75a05_501___create)
HXLINE( 502)		 ::openfl::events::TouchEvent evt =  ::openfl::events::TouchEvent_obj::__alloc( HX_CTX ,type,true,false,0,true,local->x,local->y,1,1,1,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
HXLINE( 503)		evt->stageX = stageX;
HXLINE( 504)		evt->stageY = stageY;
HXLINE( 505)		evt->target = target;
HXLINE( 507)		return evt;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(TouchEvent_obj,_hx___create,return )


::hx::ObjectPtr< TouchEvent_obj > TouchEvent_obj::__new(::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable,::hx::Null< int >  __o_touchPointID,::hx::Null< bool >  __o_isPrimaryTouchPoint,::hx::Null< Float >  __o_localX,::hx::Null< Float >  __o_localY,::hx::Null< Float >  __o_sizeX,::hx::Null< Float >  __o_sizeY,::hx::Null< Float >  __o_pressure, ::openfl::display::InteractiveObject relatedObject,::hx::Null< bool >  __o_ctrlKey,::hx::Null< bool >  __o_altKey,::hx::Null< bool >  __o_shiftKey,::hx::Null< bool >  __o_commandKey,::hx::Null< bool >  __o_controlKey,::hx::Null< Float >  __o_timestamp,::String touchIntent, ::openfl::utils::ByteArrayData samples,::hx::Null< bool >  __o_isTouchPointCanceled) {
	::hx::ObjectPtr< TouchEvent_obj > __this = new TouchEvent_obj();
	__this->__construct(type,__o_bubbles,__o_cancelable,__o_touchPointID,__o_isPrimaryTouchPoint,__o_localX,__o_localY,__o_sizeX,__o_sizeY,__o_pressure,relatedObject,__o_ctrlKey,__o_altKey,__o_shiftKey,__o_commandKey,__o_controlKey,__o_timestamp,touchIntent,samples,__o_isTouchPointCanceled);
	return __this;
}

::hx::ObjectPtr< TouchEvent_obj > TouchEvent_obj::__alloc(::hx::Ctx *_hx_ctx,::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable,::hx::Null< int >  __o_touchPointID,::hx::Null< bool >  __o_isPrimaryTouchPoint,::hx::Null< Float >  __o_localX,::hx::Null< Float >  __o_localY,::hx::Null< Float >  __o_sizeX,::hx::Null< Float >  __o_sizeY,::hx::Null< Float >  __o_pressure, ::openfl::display::InteractiveObject relatedObject,::hx::Null< bool >  __o_ctrlKey,::hx::Null< bool >  __o_altKey,::hx::Null< bool >  __o_shiftKey,::hx::Null< bool >  __o_commandKey,::hx::Null< bool >  __o_controlKey,::hx::Null< Float >  __o_timestamp,::String touchIntent, ::openfl::utils::ByteArrayData samples,::hx::Null< bool >  __o_isTouchPointCanceled) {
	TouchEvent_obj *__this = (TouchEvent_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TouchEvent_obj), true, "openfl.events.TouchEvent"));
	*(void **)__this = TouchEvent_obj::_hx_vtable;
	__this->__construct(type,__o_bubbles,__o_cancelable,__o_touchPointID,__o_isPrimaryTouchPoint,__o_localX,__o_localY,__o_sizeX,__o_sizeY,__o_pressure,relatedObject,__o_ctrlKey,__o_altKey,__o_shiftKey,__o_commandKey,__o_controlKey,__o_timestamp,touchIntent,samples,__o_isTouchPointCanceled);
	return __this;
}

TouchEvent_obj::TouchEvent_obj()
{
}

void TouchEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TouchEvent);
	HX_MARK_MEMBER_NAME(altKey,"altKey");
	HX_MARK_MEMBER_NAME(commandKey,"commandKey");
	HX_MARK_MEMBER_NAME(controlKey,"controlKey");
	HX_MARK_MEMBER_NAME(ctrlKey,"ctrlKey");
	HX_MARK_MEMBER_NAME(delta,"delta");
	HX_MARK_MEMBER_NAME(isPrimaryTouchPoint,"isPrimaryTouchPoint");
	HX_MARK_MEMBER_NAME(localX,"localX");
	HX_MARK_MEMBER_NAME(localY,"localY");
	HX_MARK_MEMBER_NAME(pressure,"pressure");
	HX_MARK_MEMBER_NAME(relatedObject,"relatedObject");
	HX_MARK_MEMBER_NAME(shiftKey,"shiftKey");
	HX_MARK_MEMBER_NAME(sizeX,"sizeX");
	HX_MARK_MEMBER_NAME(sizeY,"sizeY");
	HX_MARK_MEMBER_NAME(stageX,"stageX");
	HX_MARK_MEMBER_NAME(stageY,"stageY");
	HX_MARK_MEMBER_NAME(touchPointID,"touchPointID");
	 ::openfl::events::Event_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TouchEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(altKey,"altKey");
	HX_VISIT_MEMBER_NAME(commandKey,"commandKey");
	HX_VISIT_MEMBER_NAME(controlKey,"controlKey");
	HX_VISIT_MEMBER_NAME(ctrlKey,"ctrlKey");
	HX_VISIT_MEMBER_NAME(delta,"delta");
	HX_VISIT_MEMBER_NAME(isPrimaryTouchPoint,"isPrimaryTouchPoint");
	HX_VISIT_MEMBER_NAME(localX,"localX");
	HX_VISIT_MEMBER_NAME(localY,"localY");
	HX_VISIT_MEMBER_NAME(pressure,"pressure");
	HX_VISIT_MEMBER_NAME(relatedObject,"relatedObject");
	HX_VISIT_MEMBER_NAME(shiftKey,"shiftKey");
	HX_VISIT_MEMBER_NAME(sizeX,"sizeX");
	HX_VISIT_MEMBER_NAME(sizeY,"sizeY");
	HX_VISIT_MEMBER_NAME(stageX,"stageX");
	HX_VISIT_MEMBER_NAME(stageY,"stageY");
	HX_VISIT_MEMBER_NAME(touchPointID,"touchPointID");
	 ::openfl::events::Event_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val TouchEvent_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"delta") ) { return ::hx::Val( delta ); }
		if (HX_FIELD_EQ(inName,"sizeX") ) { return ::hx::Val( sizeX ); }
		if (HX_FIELD_EQ(inName,"sizeY") ) { return ::hx::Val( sizeY ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"altKey") ) { return ::hx::Val( altKey ); }
		if (HX_FIELD_EQ(inName,"localX") ) { return ::hx::Val( localX ); }
		if (HX_FIELD_EQ(inName,"localY") ) { return ::hx::Val( localY ); }
		if (HX_FIELD_EQ(inName,"stageX") ) { return ::hx::Val( stageX ); }
		if (HX_FIELD_EQ(inName,"stageY") ) { return ::hx::Val( stageY ); }
		if (HX_FIELD_EQ(inName,"__init") ) { return ::hx::Val( _hx___init_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"ctrlKey") ) { return ::hx::Val( ctrlKey ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"pressure") ) { return ::hx::Val( pressure ); }
		if (HX_FIELD_EQ(inName,"shiftKey") ) { return ::hx::Val( shiftKey ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"commandKey") ) { return ::hx::Val( commandKey ); }
		if (HX_FIELD_EQ(inName,"controlKey") ) { return ::hx::Val( controlKey ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"touchPointID") ) { return ::hx::Val( touchPointID ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"relatedObject") ) { return ::hx::Val( relatedObject ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"updateAfterEvent") ) { return ::hx::Val( updateAfterEvent_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"isPrimaryTouchPoint") ) { return ::hx::Val( isPrimaryTouchPoint ); }
	}
	return super::__Field(inName,inCallProp);
}

bool TouchEvent_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"__create") ) { outValue = _hx___create_dyn(); return true; }
	}
	return false;
}

::hx::Val TouchEvent_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"delta") ) { delta=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sizeX") ) { sizeX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sizeY") ) { sizeY=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"altKey") ) { altKey=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"localX") ) { localX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"localY") ) { localY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stageX") ) { stageX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stageY") ) { stageY=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"ctrlKey") ) { ctrlKey=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"pressure") ) { pressure=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shiftKey") ) { shiftKey=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"commandKey") ) { commandKey=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"controlKey") ) { controlKey=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"touchPointID") ) { touchPointID=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"relatedObject") ) { relatedObject=inValue.Cast<  ::openfl::display::InteractiveObject >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"isPrimaryTouchPoint") ) { isPrimaryTouchPoint=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TouchEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("altKey",f6,a7,ca,44));
	outFields->push(HX_("commandKey",14,71,9b,43));
	outFields->push(HX_("controlKey",42,8e,a5,04));
	outFields->push(HX_("ctrlKey",b4,35,7d,61));
	outFields->push(HX_("delta",f8,e7,26,d7));
	outFields->push(HX_("isPrimaryTouchPoint",29,3f,07,49));
	outFields->push(HX_("localX",8d,74,bf,59));
	outFields->push(HX_("localY",8e,74,bf,59));
	outFields->push(HX_("pressure",c5,ab,1d,70));
	outFields->push(HX_("relatedObject",0a,bf,cb,e8));
	outFields->push(HX_("shiftKey",3d,92,9f,99));
	outFields->push(HX_("sizeX",77,08,d9,7c));
	outFields->push(HX_("sizeY",78,08,d9,7c));
	outFields->push(HX_("stageX",da,fb,f1,05));
	outFields->push(HX_("stageY",db,fb,f1,05));
	outFields->push(HX_("touchPointID",2c,be,83,7b));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TouchEvent_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(TouchEvent_obj,altKey),HX_("altKey",f6,a7,ca,44)},
	{::hx::fsBool,(int)offsetof(TouchEvent_obj,commandKey),HX_("commandKey",14,71,9b,43)},
	{::hx::fsBool,(int)offsetof(TouchEvent_obj,controlKey),HX_("controlKey",42,8e,a5,04)},
	{::hx::fsBool,(int)offsetof(TouchEvent_obj,ctrlKey),HX_("ctrlKey",b4,35,7d,61)},
	{::hx::fsInt,(int)offsetof(TouchEvent_obj,delta),HX_("delta",f8,e7,26,d7)},
	{::hx::fsBool,(int)offsetof(TouchEvent_obj,isPrimaryTouchPoint),HX_("isPrimaryTouchPoint",29,3f,07,49)},
	{::hx::fsFloat,(int)offsetof(TouchEvent_obj,localX),HX_("localX",8d,74,bf,59)},
	{::hx::fsFloat,(int)offsetof(TouchEvent_obj,localY),HX_("localY",8e,74,bf,59)},
	{::hx::fsFloat,(int)offsetof(TouchEvent_obj,pressure),HX_("pressure",c5,ab,1d,70)},
	{::hx::fsObject /*  ::openfl::display::InteractiveObject */ ,(int)offsetof(TouchEvent_obj,relatedObject),HX_("relatedObject",0a,bf,cb,e8)},
	{::hx::fsBool,(int)offsetof(TouchEvent_obj,shiftKey),HX_("shiftKey",3d,92,9f,99)},
	{::hx::fsFloat,(int)offsetof(TouchEvent_obj,sizeX),HX_("sizeX",77,08,d9,7c)},
	{::hx::fsFloat,(int)offsetof(TouchEvent_obj,sizeY),HX_("sizeY",78,08,d9,7c)},
	{::hx::fsFloat,(int)offsetof(TouchEvent_obj,stageX),HX_("stageX",da,fb,f1,05)},
	{::hx::fsFloat,(int)offsetof(TouchEvent_obj,stageY),HX_("stageY",db,fb,f1,05)},
	{::hx::fsInt,(int)offsetof(TouchEvent_obj,touchPointID),HX_("touchPointID",2c,be,83,7b)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo TouchEvent_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &TouchEvent_obj::TOUCH_BEGIN,HX_("TOUCH_BEGIN",29,ba,86,7e)},
	{::hx::fsString,(void *) &TouchEvent_obj::TOUCH_END,HX_("TOUCH_END",db,ef,2a,2a)},
	{::hx::fsString,(void *) &TouchEvent_obj::TOUCH_MOVE,HX_("TOUCH_MOVE",f1,76,b1,c0)},
	{::hx::fsString,(void *) &TouchEvent_obj::TOUCH_OUT,HX_("TOUCH_OUT",8e,8c,32,2a)},
	{::hx::fsString,(void *) &TouchEvent_obj::TOUCH_OVER,HX_("TOUCH_OVER",34,25,09,c2)},
	{::hx::fsString,(void *) &TouchEvent_obj::TOUCH_ROLL_OUT,HX_("TOUCH_ROLL_OUT",4c,73,76,de)},
	{::hx::fsString,(void *) &TouchEvent_obj::TOUCH_ROLL_OVER,HX_("TOUCH_ROLL_OVER",b6,24,2f,c9)},
	{::hx::fsString,(void *) &TouchEvent_obj::TOUCH_TAP,HX_("TOUCH_TAP",63,46,36,2a)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String TouchEvent_obj_sMemberFields[] = {
	HX_("altKey",f6,a7,ca,44),
	HX_("commandKey",14,71,9b,43),
	HX_("controlKey",42,8e,a5,04),
	HX_("ctrlKey",b4,35,7d,61),
	HX_("delta",f8,e7,26,d7),
	HX_("isPrimaryTouchPoint",29,3f,07,49),
	HX_("localX",8d,74,bf,59),
	HX_("localY",8e,74,bf,59),
	HX_("pressure",c5,ab,1d,70),
	HX_("relatedObject",0a,bf,cb,e8),
	HX_("shiftKey",3d,92,9f,99),
	HX_("sizeX",77,08,d9,7c),
	HX_("sizeY",78,08,d9,7c),
	HX_("stageX",da,fb,f1,05),
	HX_("stageY",db,fb,f1,05),
	HX_("touchPointID",2c,be,83,7b),
	HX_("clone",5d,13,63,48),
	HX_("toString",ac,d0,6e,38),
	HX_("updateAfterEvent",c7,fb,c7,22),
	HX_("__init",30,9e,b3,f4),
	::String(null()) };

static void TouchEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TouchEvent_obj::TOUCH_BEGIN,"TOUCH_BEGIN");
	HX_MARK_MEMBER_NAME(TouchEvent_obj::TOUCH_END,"TOUCH_END");
	HX_MARK_MEMBER_NAME(TouchEvent_obj::TOUCH_MOVE,"TOUCH_MOVE");
	HX_MARK_MEMBER_NAME(TouchEvent_obj::TOUCH_OUT,"TOUCH_OUT");
	HX_MARK_MEMBER_NAME(TouchEvent_obj::TOUCH_OVER,"TOUCH_OVER");
	HX_MARK_MEMBER_NAME(TouchEvent_obj::TOUCH_ROLL_OUT,"TOUCH_ROLL_OUT");
	HX_MARK_MEMBER_NAME(TouchEvent_obj::TOUCH_ROLL_OVER,"TOUCH_ROLL_OVER");
	HX_MARK_MEMBER_NAME(TouchEvent_obj::TOUCH_TAP,"TOUCH_TAP");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TouchEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TouchEvent_obj::TOUCH_BEGIN,"TOUCH_BEGIN");
	HX_VISIT_MEMBER_NAME(TouchEvent_obj::TOUCH_END,"TOUCH_END");
	HX_VISIT_MEMBER_NAME(TouchEvent_obj::TOUCH_MOVE,"TOUCH_MOVE");
	HX_VISIT_MEMBER_NAME(TouchEvent_obj::TOUCH_OUT,"TOUCH_OUT");
	HX_VISIT_MEMBER_NAME(TouchEvent_obj::TOUCH_OVER,"TOUCH_OVER");
	HX_VISIT_MEMBER_NAME(TouchEvent_obj::TOUCH_ROLL_OUT,"TOUCH_ROLL_OUT");
	HX_VISIT_MEMBER_NAME(TouchEvent_obj::TOUCH_ROLL_OVER,"TOUCH_ROLL_OVER");
	HX_VISIT_MEMBER_NAME(TouchEvent_obj::TOUCH_TAP,"TOUCH_TAP");
};

#endif

::hx::Class TouchEvent_obj::__mClass;

static ::String TouchEvent_obj_sStaticFields[] = {
	HX_("TOUCH_BEGIN",29,ba,86,7e),
	HX_("TOUCH_END",db,ef,2a,2a),
	HX_("TOUCH_MOVE",f1,76,b1,c0),
	HX_("TOUCH_OUT",8e,8c,32,2a),
	HX_("TOUCH_OVER",34,25,09,c2),
	HX_("TOUCH_ROLL_OUT",4c,73,76,de),
	HX_("TOUCH_ROLL_OVER",b6,24,2f,c9),
	HX_("TOUCH_TAP",63,46,36,2a),
	HX_("__create",1c,d2,3e,24),
	::String(null())
};

void TouchEvent_obj::__register()
{
	TouchEvent_obj _hx_dummy;
	TouchEvent_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.events.TouchEvent",d2,2e,13,e5);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TouchEvent_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = TouchEvent_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(TouchEvent_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TouchEvent_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TouchEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TouchEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TouchEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TouchEvent_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void TouchEvent_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_a67c52c2b0f75a05_39_boot)
HXDLIN(  39)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("fields",79,8e,8e,80), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("delta",f8,e7,26,d7), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))))));
            	}
{
            	HX_STACKFRAME(&_hx_pos_a67c52c2b0f75a05_77_boot)
HXDLIN(  77)		TOUCH_BEGIN = HX_("touchBegin",ea,cd,e6,a9);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a67c52c2b0f75a05_107_boot)
HXDLIN( 107)		TOUCH_END = HX_("touchEnd",5c,c5,09,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a67c52c2b0f75a05_137_boot)
HXDLIN( 137)		TOUCH_MOVE = HX_("touchMove",70,72,cd,0d);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a67c52c2b0f75a05_167_boot)
HXDLIN( 167)		TOUCH_OUT = HX_("touchOut",0f,62,11,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a67c52c2b0f75a05_197_boot)
HXDLIN( 197)		TOUCH_OVER = HX_("touchOver",b3,20,25,0f);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a67c52c2b0f75a05_227_boot)
HXDLIN( 227)		TOUCH_ROLL_OUT = HX_("touchRollOut",12,0f,74,87);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a67c52c2b0f75a05_257_boot)
HXDLIN( 257)		TOUCH_ROLL_OVER = HX_("touchRollOver",50,d6,19,fe);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a67c52c2b0f75a05_287_boot)
HXDLIN( 287)		TOUCH_TAP = HX_("touchTap",e4,1b,15,00);
            	}
}

} // end namespace openfl
} // end namespace events
