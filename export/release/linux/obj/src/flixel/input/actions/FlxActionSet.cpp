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
#ifndef INCLUDED_flixel_input_actions_FlxActionDigital
#include <flixel/input/actions/FlxActionDigital.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionInput
#include <flixel/input/actions/FlxActionInput.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionInputAnalog
#include <flixel/input/actions/FlxActionInputAnalog.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionInputAnalogSteam
#include <flixel/input/actions/FlxActionInputAnalogSteam.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionInputDigital
#include <flixel/input/actions/FlxActionInputDigital.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionInputDigitalSteam
#include <flixel/input/actions/FlxActionInputDigitalSteam.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionSet
#include <flixel/input/actions/FlxActionSet.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxInputDevice
#include <flixel/input/actions/FlxInputDevice.h>
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
#ifndef INCLUDED_haxe_format_JsonPrinter
#include <haxe/format/JsonPrinter.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_266239be989c53a0_26_new,"flixel.input.actions.FlxActionSet","new",0x7bcda713,"flixel.input.actions.FlxActionSet.new","flixel/input/actions/FlxActionSet.hx",26,0x0b1a665a)
HX_LOCAL_STACK_FRAME(_hx_pos_266239be989c53a0_174_toJson,"flixel.input.actions.FlxActionSet","toJson",0x9c42c870,"flixel.input.actions.FlxActionSet.toJson","flixel/input/actions/FlxActionSet.hx",174,0x0b1a665a)
HX_LOCAL_STACK_FRAME(_hx_pos_266239be989c53a0_171_toJson,"flixel.input.actions.FlxActionSet","toJson",0x9c42c870,"flixel.input.actions.FlxActionSet.toJson","flixel/input/actions/FlxActionSet.hx",171,0x0b1a665a)
HX_LOCAL_STACK_FRAME(_hx_pos_266239be989c53a0_206_attachSteamController,"flixel.input.actions.FlxActionSet","attachSteamController",0x1aba707a,"flixel.input.actions.FlxActionSet.attachSteamController","flixel/input/actions/FlxActionSet.hx",206,0x0b1a665a)
HX_LOCAL_STACK_FRAME(_hx_pos_266239be989c53a0_212_add,"flixel.input.actions.FlxActionSet","add",0x7bc3c8d4,"flixel.input.actions.FlxActionSet.add","flixel/input/actions/FlxActionSet.hx",212,0x0b1a665a)
HX_LOCAL_STACK_FRAME(_hx_pos_266239be989c53a0_233_destroy,"flixel.input.actions.FlxActionSet","destroy",0x215cd92d,"flixel.input.actions.FlxActionSet.destroy","flixel/input/actions/FlxActionSet.hx",233,0x0b1a665a)
HX_LOCAL_STACK_FRAME(_hx_pos_266239be989c53a0_245_remove,"flixel.input.actions.FlxActionSet","remove",0x24a9b771,"flixel.input.actions.FlxActionSet.remove","flixel/input/actions/FlxActionSet.hx",245,0x0b1a665a)
HX_LOCAL_STACK_FRAME(_hx_pos_266239be989c53a0_270_update,"flixel.input.actions.FlxActionSet","update",0xa726a136,"flixel.input.actions.FlxActionSet.update","flixel/input/actions/FlxActionSet.hx",270,0x0b1a665a)
HX_LOCAL_STACK_FRAME(_hx_pos_266239be989c53a0_285_attachSteamControllerSub,"flixel.input.actions.FlxActionSet","attachSteamControllerSub",0x2e4ef926,"flixel.input.actions.FlxActionSet.attachSteamControllerSub","flixel/input/actions/FlxActionSet.hx",285,0x0b1a665a)
HX_LOCAL_STACK_FRAME(_hx_pos_266239be989c53a0_131_fromJson,"flixel.input.actions.FlxActionSet","fromJson",0xe334111f,"flixel.input.actions.FlxActionSet.fromJson","flixel/input/actions/FlxActionSet.hx",131,0x0b1a665a)
namespace flixel{
namespace input{
namespace actions{

void FlxActionSet_obj::__construct(::String Name,::Array< ::Dynamic> DigitalActions,::Array< ::Dynamic> AnalogActions){
            	HX_STACKFRAME(&_hx_pos_266239be989c53a0_26_new)
HXLINE(  53)		this->active = true;
HXLINE(  31)		this->name = HX_("",00,00,00,00);
HXLINE( 190)		this->name = Name;
HXLINE( 191)		if (::hx::IsNull( DigitalActions )) {
HXLINE( 192)			DigitalActions = ::Array_obj< ::Dynamic>::__new(0);
            		}
HXLINE( 193)		if (::hx::IsNull( AnalogActions )) {
HXLINE( 194)			AnalogActions = ::Array_obj< ::Dynamic>::__new(0);
            		}
HXLINE( 195)		this->digitalActions = DigitalActions;
HXLINE( 196)		this->analogActions = AnalogActions;
            	}

Dynamic FlxActionSet_obj::__CreateEmpty() { return new FlxActionSet_obj; }

void *FlxActionSet_obj::_hx_vtable = 0;

Dynamic FlxActionSet_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxActionSet_obj > _hx_result = new FlxActionSet_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool FlxActionSet_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x315ddd0d;
}

static ::flixel::util::IFlxDestroyable_obj _hx_flixel_input_actions_FlxActionSet__hx_flixel_util_IFlxDestroyable= {
	( void (::hx::Object::*)())&::flixel::input::actions::FlxActionSet_obj::destroy,
};

void *FlxActionSet_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xd4fe2fcd: return &_hx_flixel_input_actions_FlxActionSet__hx_flixel_util_IFlxDestroyable;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

::String FlxActionSet_obj::toJson(){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(2)
            		 ::Dynamic _hx_run( ::Dynamic key, ::Dynamic value){
            			HX_STACKFRAME(&_hx_pos_266239be989c53a0_174_toJson)
HXLINE( 175)			if (::Std_obj::isOfType(value,::hx::ClassOf< ::flixel::input::actions::FlxAction >())) {
HXLINE( 177)				 ::flixel::input::actions::FlxAction fa = ( ( ::flixel::input::actions::FlxAction)(value) );
HXLINE( 178)				return  ::Dynamic(::hx::Anon_obj::Create(3)
            					->setFixed(0,HX_("steamHandle",58,b2,39,8c),fa->steamHandle)
            					->setFixed(1,HX_("name",4b,72,ff,48),fa->name)
            					->setFixed(2,HX_("type",ba,f2,08,4d),fa->type));
            			}
HXLINE( 184)			return value;
            		}
            		HX_END_LOCAL_FUNC2(return)

            	HX_STACKFRAME(&_hx_pos_266239be989c53a0_171_toJson)
HXLINE( 172)		::String space = HX_("\t",09,00,00,00);
HXLINE( 173)		return ::haxe::format::JsonPrinter_obj::print(::hx::ObjectPtr<OBJ_>(this), ::Dynamic(new _hx_Closure_0()),space);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxActionSet_obj,toJson,return )

void FlxActionSet_obj::attachSteamController(int Handle,::hx::Null< bool >  __o_Attach){
            		bool Attach = __o_Attach.Default(true);
            	HX_STACKFRAME(&_hx_pos_266239be989c53a0_206_attachSteamController)
HXLINE( 207)		this->attachSteamControllerSub(Handle,Attach,::flixel::input::actions::FlxInputType_obj::DIGITAL_dyn(),this->digitalActions,null());
HXLINE( 208)		this->attachSteamControllerSub(Handle,Attach,::flixel::input::actions::FlxInputType_obj::ANALOG_dyn(),null(),this->analogActions);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxActionSet_obj,attachSteamController,(void))

bool FlxActionSet_obj::add( ::flixel::input::actions::FlxAction Action){
            	HX_STACKFRAME(&_hx_pos_266239be989c53a0_212_add)
HXLINE( 213)		if (::hx::IsPointerEq( Action->type,::flixel::input::actions::FlxInputType_obj::DIGITAL_dyn() )) {
HXLINE( 215)			 ::flixel::input::actions::FlxActionDigital dAction = ( ( ::flixel::input::actions::FlxActionDigital)(Action) );
HXLINE( 216)			if (this->digitalActions->contains(dAction)) {
HXLINE( 217)				return false;
            			}
HXLINE( 218)			this->digitalActions->push(dAction);
HXLINE( 219)			return true;
            		}
            		else {
HXLINE( 221)			if (::hx::IsPointerEq( Action->type,::flixel::input::actions::FlxInputType_obj::ANALOG_dyn() )) {
HXLINE( 223)				 ::flixel::input::actions::FlxActionAnalog aAction = ( ( ::flixel::input::actions::FlxActionAnalog)(Action) );
HXLINE( 224)				if (this->analogActions->contains(aAction)) {
HXLINE( 225)					return false;
            				}
HXLINE( 226)				this->analogActions->push(aAction);
HXLINE( 227)				return true;
            			}
            		}
HXLINE( 229)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxActionSet_obj,add,return )

void FlxActionSet_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_266239be989c53a0_233_destroy)
HXLINE( 234)		this->digitalActions = ::flixel::util::FlxDestroyUtil_obj::destroyArray(this->digitalActions);
HXLINE( 235)		this->analogActions = ::flixel::util::FlxDestroyUtil_obj::destroyArray(this->analogActions);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxActionSet_obj,destroy,(void))

bool FlxActionSet_obj::remove( ::flixel::input::actions::FlxAction Action,::hx::Null< bool >  __o_Destroy){
            		bool Destroy = __o_Destroy.Default(true);
            	HX_STACKFRAME(&_hx_pos_266239be989c53a0_245_remove)
HXLINE( 246)		bool result = false;
HXLINE( 247)		if (::hx::IsPointerEq( Action->type,::flixel::input::actions::FlxInputType_obj::DIGITAL_dyn() )) {
HXLINE( 249)			result = this->digitalActions->remove(( ( ::flixel::input::actions::FlxActionDigital)(Action) ));
HXLINE( 250)			bool _hx_tmp;
HXDLIN( 250)			if (result) {
HXLINE( 250)				_hx_tmp = Destroy;
            			}
            			else {
HXLINE( 250)				_hx_tmp = false;
            			}
HXDLIN( 250)			if (_hx_tmp) {
HXLINE( 252)				Action->destroy();
            			}
            		}
            		else {
HXLINE( 255)			if (::hx::IsPointerEq( Action->type,::flixel::input::actions::FlxInputType_obj::ANALOG_dyn() )) {
HXLINE( 257)				result = this->analogActions->remove(( ( ::flixel::input::actions::FlxActionAnalog)(Action) ));
HXLINE( 258)				bool _hx_tmp;
HXDLIN( 258)				if (result) {
HXLINE( 258)					_hx_tmp = Destroy;
            				}
            				else {
HXLINE( 258)					_hx_tmp = false;
            				}
HXDLIN( 258)				if (_hx_tmp) {
HXLINE( 260)					Action->destroy();
            				}
            			}
            		}
HXLINE( 263)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxActionSet_obj,remove,return )

void FlxActionSet_obj::update(){
            	HX_STACKFRAME(&_hx_pos_266239be989c53a0_270_update)
HXLINE( 271)		if (!(this->active)) {
HXLINE( 272)			return;
            		}
HXLINE( 273)		{
HXLINE( 273)			int _g = 0;
HXDLIN( 273)			::Array< ::Dynamic> _g1 = this->digitalActions;
HXDLIN( 273)			while((_g < _g1->length)){
HXLINE( 273)				 ::flixel::input::actions::FlxActionDigital digitalAction = _g1->__get(_g).StaticCast<  ::flixel::input::actions::FlxActionDigital >();
HXDLIN( 273)				_g = (_g + 1);
HXLINE( 275)				digitalAction->update();
            			}
            		}
HXLINE( 277)		{
HXLINE( 277)			int _g2 = 0;
HXDLIN( 277)			::Array< ::Dynamic> _g3 = this->analogActions;
HXDLIN( 277)			while((_g2 < _g3->length)){
HXLINE( 277)				 ::flixel::input::actions::FlxActionAnalog analogAction = _g3->__get(_g2).StaticCast<  ::flixel::input::actions::FlxActionAnalog >();
HXDLIN( 277)				_g2 = (_g2 + 1);
HXLINE( 279)				analogAction->update();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxActionSet_obj,update,(void))

void FlxActionSet_obj::attachSteamControllerSub(int Handle,bool Attach, ::flixel::input::actions::FlxInputType InputType,::Array< ::Dynamic> DigitalActions,::Array< ::Dynamic> AnalogActions){
            	HX_GC_STACKFRAME(&_hx_pos_266239be989c53a0_285_attachSteamControllerSub)
HXLINE( 286)		int length;
HXDLIN( 286)		if (::hx::IsPointerEq( InputType,::flixel::input::actions::FlxInputType_obj::DIGITAL_dyn() )) {
HXLINE( 286)			length = DigitalActions->length;
            		}
            		else {
HXLINE( 286)			length = AnalogActions->length;
            		}
HXLINE( 288)		{
HXLINE( 288)			int _g = 0;
HXDLIN( 288)			int _g1 = length;
HXDLIN( 288)			while((_g < _g1)){
HXLINE( 288)				_g = (_g + 1);
HXDLIN( 288)				int i = (_g - 1);
HXLINE( 290)				 ::flixel::input::actions::FlxAction action;
HXDLIN( 290)				if (::hx::IsPointerEq( InputType,::flixel::input::actions::FlxInputType_obj::DIGITAL_dyn() )) {
HXLINE( 290)					action = DigitalActions->__get(i).StaticCast<  ::flixel::input::actions::FlxActionDigital >();
            				}
            				else {
HXLINE( 290)					action = AnalogActions->__get(i).StaticCast<  ::flixel::input::actions::FlxActionAnalog >();
            				}
HXLINE( 292)				if ((action->steamHandle != -1)) {
HXLINE( 294)					bool inputExists = false;
HXLINE( 295)					 ::flixel::input::actions::FlxActionInput theInput = null();
HXLINE( 298)					if (::hx::IsNotNull( action->inputs )) {
HXLINE( 300)						int _g = 0;
HXDLIN( 300)						::Array< ::Dynamic> _g1 = action->inputs;
HXDLIN( 300)						while((_g < _g1->length)){
HXLINE( 300)							 ::flixel::input::actions::FlxActionInput input = _g1->__get(_g).StaticCast<  ::flixel::input::actions::FlxActionInput >();
HXDLIN( 300)							_g = (_g + 1);
HXLINE( 302)							bool _hx_tmp;
HXDLIN( 302)							if (::hx::IsPointerEq( input->device,::flixel::input::actions::FlxInputDevice_obj::STEAM_CONTROLLER_dyn() )) {
HXLINE( 302)								_hx_tmp = (input->deviceID == Handle);
            							}
            							else {
HXLINE( 302)								_hx_tmp = false;
            							}
HXDLIN( 302)							if (_hx_tmp) {
HXLINE( 304)								inputExists = true;
HXLINE( 305)								theInput = input;
            							}
            						}
            					}
HXLINE( 310)					if (Attach) {
HXLINE( 314)						if (!(inputExists)) {
HXLINE( 316)							if (::hx::IsPointerEq( InputType,::flixel::input::actions::FlxInputType_obj::DIGITAL_dyn() )) {
HXLINE( 318)								DigitalActions->__get(i).StaticCast<  ::flixel::input::actions::FlxActionDigital >()->add( ::flixel::input::actions::FlxActionInputDigitalSteam_obj::__alloc( HX_CTX ,action->steamHandle,2,Handle));
            							}
            							else {
HXLINE( 320)								if (::hx::IsPointerEq( InputType,::flixel::input::actions::FlxInputType_obj::ANALOG_dyn() )) {
HXLINE( 322)									AnalogActions->__get(i).StaticCast<  ::flixel::input::actions::FlxActionAnalog >()->add( ::flixel::input::actions::FlxActionInputAnalogSteam_obj::__alloc( HX_CTX ,action->steamHandle,1,3,Handle));
            								}
            							}
            						}
            					}
            					else {
HXLINE( 326)						if (inputExists) {
HXLINE( 329)							action->remove(theInput,null());
            						}
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC5(FlxActionSet_obj,attachSteamControllerSub,(void))

 ::flixel::input::actions::FlxActionSet FlxActionSet_obj::fromJson( ::Dynamic Data, ::Dynamic CallbackDigital, ::Dynamic CallbackAnalog){
            	HX_GC_STACKFRAME(&_hx_pos_266239be989c53a0_131_fromJson)
HXLINE( 132)		::Array< ::Dynamic> digitalActions = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 133)		::Array< ::Dynamic> analogActions = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 135)		if (::hx::IsNull( Data )) {
HXLINE( 136)			return null();
            		}
HXLINE( 138)		if (::hx::IsNotNull( Data->__Field(HX_("digitalActions",05,8f,e5,5b),::hx::paccDynamic) )) {
HXLINE( 140)			::cpp::VirtualArray arrD = ( (::cpp::VirtualArray)(Data->__Field(HX_("digitalActions",05,8f,e5,5b),::hx::paccDynamic)) );
HXLINE( 141)			{
HXLINE( 141)				int _g = 0;
HXDLIN( 141)				while((_g < arrD->get_length())){
HXLINE( 141)					 ::Dynamic d = arrD->__get(_g);
HXDLIN( 141)					_g = (_g + 1);
HXLINE( 143)					::String dName = ( (::String)(d) );
HXLINE( 144)					 ::flixel::input::actions::FlxActionDigital action =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,dName,CallbackDigital);
HXLINE( 145)					digitalActions->push(action);
            				}
            			}
            		}
HXLINE( 149)		if (::hx::IsNotNull( Data->__Field(HX_("analogActions",ad,7b,59,50),::hx::paccDynamic) )) {
HXLINE( 151)			::cpp::VirtualArray arrA = ( (::cpp::VirtualArray)(Data->__Field(HX_("analogActions",ad,7b,59,50),::hx::paccDynamic)) );
HXLINE( 152)			{
HXLINE( 152)				int _g = 0;
HXDLIN( 152)				while((_g < arrA->get_length())){
HXLINE( 152)					 ::Dynamic a = arrA->__get(_g);
HXDLIN( 152)					_g = (_g + 1);
HXLINE( 154)					::String aName = ( (::String)(a) );
HXLINE( 155)					 ::flixel::input::actions::FlxActionAnalog action =  ::flixel::input::actions::FlxActionAnalog_obj::__alloc( HX_CTX ,aName,CallbackAnalog);
HXLINE( 156)					analogActions->push(action);
            				}
            			}
            		}
HXLINE( 160)		if (::hx::IsNotNull( Data->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic) )) {
HXLINE( 162)			::String name = ( (::String)(Data->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)) );
HXLINE( 163)			 ::flixel::input::actions::FlxActionSet set =  ::flixel::input::actions::FlxActionSet_obj::__alloc( HX_CTX ,name,digitalActions,analogActions);
HXLINE( 164)			return set;
            		}
HXLINE( 167)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxActionSet_obj,fromJson,return )


::hx::ObjectPtr< FlxActionSet_obj > FlxActionSet_obj::__new(::String Name,::Array< ::Dynamic> DigitalActions,::Array< ::Dynamic> AnalogActions) {
	::hx::ObjectPtr< FlxActionSet_obj > __this = new FlxActionSet_obj();
	__this->__construct(Name,DigitalActions,AnalogActions);
	return __this;
}

::hx::ObjectPtr< FlxActionSet_obj > FlxActionSet_obj::__alloc(::hx::Ctx *_hx_ctx,::String Name,::Array< ::Dynamic> DigitalActions,::Array< ::Dynamic> AnalogActions) {
	FlxActionSet_obj *__this = (FlxActionSet_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxActionSet_obj), true, "flixel.input.actions.FlxActionSet"));
	*(void **)__this = FlxActionSet_obj::_hx_vtable;
	__this->__construct(Name,DigitalActions,AnalogActions);
	return __this;
}

FlxActionSet_obj::FlxActionSet_obj()
{
}

void FlxActionSet_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxActionSet);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(digitalActions,"digitalActions");
	HX_MARK_MEMBER_NAME(analogActions,"analogActions");
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_END_CLASS();
}

void FlxActionSet_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(digitalActions,"digitalActions");
	HX_VISIT_MEMBER_NAME(analogActions,"analogActions");
	HX_VISIT_MEMBER_NAME(active,"active");
}

::hx::Val FlxActionSet_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return ::hx::Val( name ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { return ::hx::Val( active ); }
		if (HX_FIELD_EQ(inName,"toJson") ) { return ::hx::Val( toJson_dyn() ); }
		if (HX_FIELD_EQ(inName,"remove") ) { return ::hx::Val( remove_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"analogActions") ) { return ::hx::Val( analogActions ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"digitalActions") ) { return ::hx::Val( digitalActions ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"attachSteamController") ) { return ::hx::Val( attachSteamController_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"attachSteamControllerSub") ) { return ::hx::Val( attachSteamControllerSub_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxActionSet_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"fromJson") ) { outValue = fromJson_dyn(); return true; }
	}
	return false;
}

::hx::Val FlxActionSet_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"analogActions") ) { analogActions=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"digitalActions") ) { digitalActions=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxActionSet_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("digitalActions",05,8f,e5,5b));
	outFields->push(HX_("analogActions",ad,7b,59,50));
	outFields->push(HX_("active",c6,41,46,16));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxActionSet_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(FlxActionSet_obj,name),HX_("name",4b,72,ff,48)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(FlxActionSet_obj,digitalActions),HX_("digitalActions",05,8f,e5,5b)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(FlxActionSet_obj,analogActions),HX_("analogActions",ad,7b,59,50)},
	{::hx::fsBool,(int)offsetof(FlxActionSet_obj,active),HX_("active",c6,41,46,16)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxActionSet_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxActionSet_obj_sMemberFields[] = {
	HX_("name",4b,72,ff,48),
	HX_("digitalActions",05,8f,e5,5b),
	HX_("analogActions",ad,7b,59,50),
	HX_("active",c6,41,46,16),
	HX_("toJson",43,ad,21,7c),
	HX_("attachSteamController",07,f1,ed,d5),
	HX_("add",21,f2,49,00),
	HX_("destroy",fa,2c,86,24),
	HX_("remove",44,9c,88,04),
	HX_("update",09,86,05,87),
	HX_("attachSteamControllerSub",b9,8e,7e,2d),
	::String(null()) };

::hx::Class FlxActionSet_obj::__mClass;

static ::String FlxActionSet_obj_sStaticFields[] = {
	HX_("fromJson",b2,10,34,a4),
	::String(null())
};

void FlxActionSet_obj::__register()
{
	FlxActionSet_obj _hx_dummy;
	FlxActionSet_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.input.actions.FlxActionSet",a1,21,6a,73);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxActionSet_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxActionSet_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxActionSet_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxActionSet_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxActionSet_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxActionSet_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace input
} // end namespace actions
