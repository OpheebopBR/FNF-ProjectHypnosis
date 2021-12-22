#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxAction
#include <flixel/input/actions/FlxAction.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionInput
#include <flixel/input/actions/FlxActionInput.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxInputType
#include <flixel/input/actions/FlxInputType.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_46dea4e2f301566f_311_new,"flixel.input.actions.FlxAction","new",0x71052df3,"flixel.input.actions.FlxAction.new","flixel/input/actions/FlxAction.hx",311,0xb046b220)
HX_LOCAL_STACK_FRAME(_hx_pos_46dea4e2f301566f_381_getFirstSteamOrigin,"flixel.input.actions.FlxAction","getFirstSteamOrigin",0x6f5d528f,"flixel.input.actions.FlxAction.getFirstSteamOrigin","flixel/input/actions/FlxAction.hx",381,0xb046b220)
HX_LOCAL_STACK_FRAME(_hx_pos_46dea4e2f301566f_399_getSteamOrigins,"flixel.input.actions.FlxAction","getSteamOrigins",0x8a9d7ee6,"flixel.input.actions.FlxAction.getSteamOrigins","flixel/input/actions/FlxAction.hx",399,0xb046b220)
HX_LOCAL_STACK_FRAME(_hx_pos_46dea4e2f301566f_403_removeAll,"flixel.input.actions.FlxAction","removeAll",0x834d6510,"flixel.input.actions.FlxAction.removeAll","flixel/input/actions/FlxAction.hx",403,0xb046b220)
HX_LOCAL_STACK_FRAME(_hx_pos_46dea4e2f301566f_415_remove,"flixel.input.actions.FlxAction","remove",0x3279bc91,"flixel.input.actions.FlxAction.remove","flixel/input/actions/FlxAction.hx",415,0xb046b220)
HX_LOCAL_STACK_FRAME(_hx_pos_46dea4e2f301566f_427_toString,"flixel.input.actions.FlxAction","toString",0x9d225e39,"flixel.input.actions.FlxAction.toString","flixel/input/actions/FlxAction.hx",427,0xb046b220)
HX_LOCAL_STACK_FRAME(_hx_pos_46dea4e2f301566f_434_check,"flixel.input.actions.FlxAction","check",0x4ba8c11b,"flixel.input.actions.FlxAction.check","flixel/input/actions/FlxAction.hx",434,0xb046b220)
HX_LOCAL_STACK_FRAME(_hx_pos_46dea4e2f301566f_476_update,"flixel.input.actions.FlxAction","update",0xb4f6a656,"flixel.input.actions.FlxAction.update","flixel/input/actions/FlxAction.hx",476,0xb046b220)
HX_LOCAL_STACK_FRAME(_hx_pos_46dea4e2f301566f_480_destroy,"flixel.input.actions.FlxAction","destroy",0x2991500d,"flixel.input.actions.FlxAction.destroy","flixel/input/actions/FlxAction.hx",480,0xb046b220)
HX_LOCAL_STACK_FRAME(_hx_pos_46dea4e2f301566f_491_match,"flixel.input.actions.FlxAction","match",0x09157198,"flixel.input.actions.FlxAction.match","flixel/input/actions/FlxAction.hx",491,0xb046b220)
HX_LOCAL_STACK_FRAME(_hx_pos_46dea4e2f301566f_495_addGenericInput,"flixel.input.actions.FlxAction","addGenericInput",0x4a082847,"flixel.input.actions.FlxAction.addGenericInput","flixel/input/actions/FlxAction.hx",495,0xb046b220)
HX_LOCAL_STACK_FRAME(_hx_pos_46dea4e2f301566f_507_checkExists,"flixel.input.actions.FlxAction","checkExists",0x7f679957,"flixel.input.actions.FlxAction.checkExists","flixel/input/actions/FlxAction.hx",507,0xb046b220)
namespace flixel{
namespace input{
namespace actions{

void FlxAction_obj::__construct( ::flixel::input::actions::FlxInputType InputType,::String Name){
            	HX_STACKFRAME(&_hx_pos_46dea4e2f301566f_311_new)
HXLINE( 347)		this->steamOriginsChanged = false;
HXLINE( 342)		this->_checked = false;
HXLINE( 341)		this->_timestamp = 0;
HXLINE( 339)		this->_y = null();
HXLINE( 338)		this->_x = null();
HXLINE( 331)		this->triggered = false;
HXLINE( 326)		this->steamHandle = -1;
HXLINE( 356)		this->type = InputType;
HXLINE( 357)		this->name = Name;
HXLINE( 358)		this->inputs = ::Array_obj< ::Dynamic>::__new(0);
            	}

Dynamic FlxAction_obj::__CreateEmpty() { return new FlxAction_obj; }

void *FlxAction_obj::_hx_vtable = 0;

Dynamic FlxAction_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxAction_obj > _hx_result = new FlxAction_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool FlxAction_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2660e195;
}

static ::flixel::util::IFlxDestroyable_obj _hx_flixel_input_actions_FlxAction__hx_flixel_util_IFlxDestroyable= {
	( void (::hx::Object::*)())&::flixel::input::actions::FlxAction_obj::destroy,
};

void *FlxAction_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xd4fe2fcd: return &_hx_flixel_input_actions_FlxAction__hx_flixel_util_IFlxDestroyable;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

int FlxAction_obj::getFirstSteamOrigin(){
            	HX_STACKFRAME(&_hx_pos_46dea4e2f301566f_381_getFirstSteamOrigin)
HXDLIN( 381)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxAction_obj,getFirstSteamOrigin,return )

::Array< int > FlxAction_obj::getSteamOrigins(::Array< int > origins){
            	HX_STACKFRAME(&_hx_pos_46dea4e2f301566f_399_getSteamOrigins)
HXDLIN( 399)		return origins;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxAction_obj,getSteamOrigins,return )

void FlxAction_obj::removeAll(::hx::Null< bool >  __o_Destroy){
            		bool Destroy = __o_Destroy.Default(true);
            	HX_STACKFRAME(&_hx_pos_46dea4e2f301566f_403_removeAll)
HXLINE( 404)		int len = this->inputs->length;
HXLINE( 405)		{
HXLINE( 405)			int _g = 0;
HXDLIN( 405)			int _g1 = len;
HXDLIN( 405)			while((_g < _g1)){
HXLINE( 405)				_g = (_g + 1);
HXDLIN( 405)				int i = (_g - 1);
HXLINE( 407)				int j = ((len - i) - 1);
HXLINE( 408)				 ::flixel::input::actions::FlxActionInput input = this->inputs->__get(j).StaticCast<  ::flixel::input::actions::FlxActionInput >();
HXLINE( 409)				this->remove(input,Destroy);
HXLINE( 410)				this->inputs->removeRange(j,1);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxAction_obj,removeAll,(void))

void FlxAction_obj::remove( ::flixel::input::actions::FlxActionInput Input,::hx::Null< bool >  __o_Destroy){
            		bool Destroy = __o_Destroy.Default(false);
            	HX_STACKFRAME(&_hx_pos_46dea4e2f301566f_415_remove)
HXLINE( 416)		if (::hx::IsNull( Input )) {
HXLINE( 417)			return;
            		}
HXLINE( 418)		this->inputs->remove(Input);
HXLINE( 419)		if (Destroy) {
HXLINE( 421)			Input->destroy();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxAction_obj,remove,(void))

::String FlxAction_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_46dea4e2f301566f_427_toString)
HXDLIN( 427)		::String _hx_tmp = ((HX_("FlxAction(",80,bd,59,96) + ::Std_obj::string(this->type)) + HX_(") name:",58,20,e0,0a));
HXDLIN( 427)		return (_hx_tmp + this->name);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxAction_obj,toString,return )

bool FlxAction_obj::check(){
            	HX_STACKFRAME(&_hx_pos_46dea4e2f301566f_434_check)
HXLINE( 435)		this->_x = null();
HXLINE( 436)		this->_y = null();
HXLINE( 438)		if ((this->_timestamp == ::flixel::FlxG_obj::game->ticks)) {
HXLINE( 440)			this->triggered = this->_checked;
HXLINE( 441)			return this->_checked;
            		}
HXLINE( 444)		this->_timestamp = ::flixel::FlxG_obj::game->ticks;
HXLINE( 445)		this->_checked = false;
HXLINE( 447)		int len;
HXDLIN( 447)		if (::hx::IsNotNull( this->inputs )) {
HXLINE( 447)			len = this->inputs->length;
            		}
            		else {
HXLINE( 447)			len = 0;
            		}
HXLINE( 448)		{
HXLINE( 448)			int _g = 0;
HXDLIN( 448)			int _g1 = len;
HXDLIN( 448)			while((_g < _g1)){
HXLINE( 448)				_g = (_g + 1);
HXDLIN( 448)				int i = (_g - 1);
HXLINE( 450)				int j = ((len - i) - 1);
HXLINE( 451)				 ::flixel::input::actions::FlxActionInput input = this->inputs->__get(j).StaticCast<  ::flixel::input::actions::FlxActionInput >();
HXLINE( 453)				if (input->destroyed) {
HXLINE( 455)					this->inputs->removeRange(j,1);
HXLINE( 456)					continue;
            				}
HXLINE( 459)				input->update();
HXLINE( 461)				if (input->check(::hx::ObjectPtr<OBJ_>(this))) {
HXLINE( 463)					this->_checked = true;
            				}
            			}
            		}
HXLINE( 467)		this->triggered = this->_checked;
HXLINE( 468)		return this->_checked;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxAction_obj,check,return )

void FlxAction_obj::update(){
            	HX_STACKFRAME(&_hx_pos_46dea4e2f301566f_476_update)
HXDLIN( 476)		this->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxAction_obj,update,(void))

void FlxAction_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_46dea4e2f301566f_480_destroy)
HXLINE( 481)		::flixel::util::FlxDestroyUtil_obj::destroyArray(this->inputs);
HXLINE( 482)		this->inputs = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxAction_obj,destroy,(void))

bool FlxAction_obj::match( ::flixel::input::actions::FlxAction other){
            	HX_STACKFRAME(&_hx_pos_46dea4e2f301566f_491_match)
HXDLIN( 491)		if ((this->name == other->name)) {
HXDLIN( 491)			return (this->steamHandle == other->steamHandle);
            		}
            		else {
HXDLIN( 491)			return false;
            		}
HXDLIN( 491)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxAction_obj,match,return )

 ::flixel::input::actions::FlxAction FlxAction_obj::addGenericInput( ::flixel::input::actions::FlxActionInput input){
            	HX_STACKFRAME(&_hx_pos_46dea4e2f301566f_495_addGenericInput)
HXLINE( 496)		if (::hx::IsNull( this->inputs )) {
HXLINE( 498)			this->inputs = ::Array_obj< ::Dynamic>::__new(0);
            		}
HXLINE( 500)		if (!(this->checkExists(input))) {
HXLINE( 501)			this->inputs->push(input);
            		}
HXLINE( 503)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxAction_obj,addGenericInput,return )

bool FlxAction_obj::checkExists( ::flixel::input::actions::FlxActionInput input){
            	HX_STACKFRAME(&_hx_pos_46dea4e2f301566f_507_checkExists)
HXLINE( 508)		if (::hx::IsNull( this->inputs )) {
HXLINE( 509)			return false;
            		}
HXLINE( 510)		return this->inputs->contains(input);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxAction_obj,checkExists,return )


::hx::ObjectPtr< FlxAction_obj > FlxAction_obj::__new( ::flixel::input::actions::FlxInputType InputType,::String Name) {
	::hx::ObjectPtr< FlxAction_obj > __this = new FlxAction_obj();
	__this->__construct(InputType,Name);
	return __this;
}

::hx::ObjectPtr< FlxAction_obj > FlxAction_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::input::actions::FlxInputType InputType,::String Name) {
	FlxAction_obj *__this = (FlxAction_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxAction_obj), true, "flixel.input.actions.FlxAction"));
	*(void **)__this = FlxAction_obj::_hx_vtable;
	__this->__construct(InputType,Name);
	return __this;
}

FlxAction_obj::FlxAction_obj()
{
}

void FlxAction_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxAction);
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(steamHandle,"steamHandle");
	HX_MARK_MEMBER_NAME(triggered,"triggered");
	HX_MARK_MEMBER_NAME(inputs,"inputs");
	HX_MARK_MEMBER_NAME(_x,"_x");
	HX_MARK_MEMBER_NAME(_y,"_y");
	HX_MARK_MEMBER_NAME(_timestamp,"_timestamp");
	HX_MARK_MEMBER_NAME(_checked,"_checked");
	HX_MARK_MEMBER_NAME(steamOriginsChanged,"steamOriginsChanged");
	HX_MARK_END_CLASS();
}

void FlxAction_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(steamHandle,"steamHandle");
	HX_VISIT_MEMBER_NAME(triggered,"triggered");
	HX_VISIT_MEMBER_NAME(inputs,"inputs");
	HX_VISIT_MEMBER_NAME(_x,"_x");
	HX_VISIT_MEMBER_NAME(_y,"_y");
	HX_VISIT_MEMBER_NAME(_timestamp,"_timestamp");
	HX_VISIT_MEMBER_NAME(_checked,"_checked");
	HX_VISIT_MEMBER_NAME(steamOriginsChanged,"steamOriginsChanged");
}

::hx::Val FlxAction_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"_x") ) { return ::hx::Val( _x ); }
		if (HX_FIELD_EQ(inName,"_y") ) { return ::hx::Val( _y ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return ::hx::Val( type ); }
		if (HX_FIELD_EQ(inName,"name") ) { return ::hx::Val( name ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"check") ) { return ::hx::Val( check_dyn() ); }
		if (HX_FIELD_EQ(inName,"match") ) { return ::hx::Val( match_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"inputs") ) { return ::hx::Val( inputs ); }
		if (HX_FIELD_EQ(inName,"remove") ) { return ::hx::Val( remove_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_checked") ) { return ::hx::Val( _checked ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"triggered") ) { return ::hx::Val( triggered ); }
		if (HX_FIELD_EQ(inName,"removeAll") ) { return ::hx::Val( removeAll_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_timestamp") ) { return ::hx::Val( _timestamp ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"steamHandle") ) { return ::hx::Val( steamHandle ); }
		if (HX_FIELD_EQ(inName,"checkExists") ) { return ::hx::Val( checkExists_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getSteamOrigins") ) { return ::hx::Val( getSteamOrigins_dyn() ); }
		if (HX_FIELD_EQ(inName,"addGenericInput") ) { return ::hx::Val( addGenericInput_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"steamOriginsChanged") ) { return ::hx::Val( steamOriginsChanged ); }
		if (HX_FIELD_EQ(inName,"getFirstSteamOrigin") ) { return ::hx::Val( getFirstSteamOrigin_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxAction_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"_x") ) { _x=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_y") ) { _y=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast<  ::flixel::input::actions::FlxInputType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"inputs") ) { inputs=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_checked") ) { _checked=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"triggered") ) { triggered=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_timestamp") ) { _timestamp=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"steamHandle") ) { steamHandle=inValue.Cast< int >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"steamOriginsChanged") ) { steamOriginsChanged=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxAction_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("type",ba,f2,08,4d));
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("steamHandle",58,b2,39,8c));
	outFields->push(HX_("triggered",97,6b,49,dc));
	outFields->push(HX_("inputs",29,c5,ed,9b));
	outFields->push(HX_("_x",39,53,00,00));
	outFields->push(HX_("_y",3a,53,00,00));
	outFields->push(HX_("_timestamp",97,50,71,01));
	outFields->push(HX_("_checked",a8,0c,dd,4c));
	outFields->push(HX_("steamOriginsChanged",57,eb,ff,ee));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxAction_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::input::actions::FlxInputType */ ,(int)offsetof(FlxAction_obj,type),HX_("type",ba,f2,08,4d)},
	{::hx::fsString,(int)offsetof(FlxAction_obj,name),HX_("name",4b,72,ff,48)},
	{::hx::fsInt,(int)offsetof(FlxAction_obj,steamHandle),HX_("steamHandle",58,b2,39,8c)},
	{::hx::fsBool,(int)offsetof(FlxAction_obj,triggered),HX_("triggered",97,6b,49,dc)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(FlxAction_obj,inputs),HX_("inputs",29,c5,ed,9b)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxAction_obj,_x),HX_("_x",39,53,00,00)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxAction_obj,_y),HX_("_y",3a,53,00,00)},
	{::hx::fsInt,(int)offsetof(FlxAction_obj,_timestamp),HX_("_timestamp",97,50,71,01)},
	{::hx::fsBool,(int)offsetof(FlxAction_obj,_checked),HX_("_checked",a8,0c,dd,4c)},
	{::hx::fsBool,(int)offsetof(FlxAction_obj,steamOriginsChanged),HX_("steamOriginsChanged",57,eb,ff,ee)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxAction_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxAction_obj_sMemberFields[] = {
	HX_("type",ba,f2,08,4d),
	HX_("name",4b,72,ff,48),
	HX_("steamHandle",58,b2,39,8c),
	HX_("triggered",97,6b,49,dc),
	HX_("inputs",29,c5,ed,9b),
	HX_("_x",39,53,00,00),
	HX_("_y",3a,53,00,00),
	HX_("_timestamp",97,50,71,01),
	HX_("_checked",a8,0c,dd,4c),
	HX_("steamOriginsChanged",57,eb,ff,ee),
	HX_("getFirstSteamOrigin",fc,5e,60,07),
	HX_("getSteamOrigins",d3,90,4c,59),
	HX_("removeAll",3d,17,e5,ca),
	HX_("remove",44,9c,88,04),
	HX_("toString",ac,d0,6e,38),
	HX_("check",c8,98,b6,45),
	HX_("update",09,86,05,87),
	HX_("destroy",fa,2c,86,24),
	HX_("match",45,49,23,03),
	HX_("addGenericInput",34,3a,b7,18),
	HX_("checkExists",c4,f0,f1,a1),
	::String(null()) };

::hx::Class FlxAction_obj::__mClass;

void FlxAction_obj::__register()
{
	FlxAction_obj _hx_dummy;
	FlxAction_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.input.actions.FlxAction",81,b8,dc,b2);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxAction_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxAction_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxAction_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxAction_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace input
} // end namespace actions
