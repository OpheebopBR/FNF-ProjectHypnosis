#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
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
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
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
#ifndef INCLUDED_openfl_events_KeyboardEvent
#include <openfl/events/KeyboardEvent.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_dc302cd06b06584e_8_new,"flixel.input.FlxKeyManager","new",0x4637a4fc,"flixel.input.FlxKeyManager.new","flixel/input/FlxKeyManager.hx",8,0xfedfa8b6)
HX_LOCAL_STACK_FRAME(_hx_pos_dc302cd06b06584e_62_anyPressed,"flixel.input.FlxKeyManager","anyPressed",0xbdbeabfa,"flixel.input.FlxKeyManager.anyPressed","flixel/input/FlxKeyManager.hx",62,0xfedfa8b6)
HX_LOCAL_STACK_FRAME(_hx_pos_dc302cd06b06584e_73_anyJustPressed,"flixel.input.FlxKeyManager","anyJustPressed",0x4d22732e,"flixel.input.FlxKeyManager.anyJustPressed","flixel/input/FlxKeyManager.hx",73,0xfedfa8b6)
HX_LOCAL_STACK_FRAME(_hx_pos_dc302cd06b06584e_84_anyJustReleased,"flixel.input.FlxKeyManager","anyJustReleased",0x37d862b1,"flixel.input.FlxKeyManager.anyJustReleased","flixel/input/FlxKeyManager.hx",84,0xfedfa8b6)
HX_LOCAL_STACK_FRAME(_hx_pos_dc302cd06b06584e_93_firstPressed,"flixel.input.FlxKeyManager","firstPressed",0xa191a036,"flixel.input.FlxKeyManager.firstPressed","flixel/input/FlxKeyManager.hx",93,0xfedfa8b6)
HX_LOCAL_STACK_FRAME(_hx_pos_dc302cd06b06584e_110_firstJustPressed,"flixel.input.FlxKeyManager","firstJustPressed",0xd38a356a,"flixel.input.FlxKeyManager.firstJustPressed","flixel/input/FlxKeyManager.hx",110,0xfedfa8b6)
HX_LOCAL_STACK_FRAME(_hx_pos_dc302cd06b06584e_127_firstJustReleased,"flixel.input.FlxKeyManager","firstJustReleased",0x4c3a94f5,"flixel.input.FlxKeyManager.firstJustReleased","flixel/input/FlxKeyManager.hx",127,0xfedfa8b6)
HX_LOCAL_STACK_FRAME(_hx_pos_dc302cd06b06584e_147_checkStatus,"flixel.input.FlxKeyManager","checkStatus",0xbf018ab6,"flixel.input.FlxKeyManager.checkStatus","flixel/input/FlxKeyManager.hx",147,0xfedfa8b6)
HX_LOCAL_STACK_FRAME(_hx_pos_dc302cd06b06584e_184_getIsDown,"flixel.input.FlxKeyManager","getIsDown",0x4bba783e,"flixel.input.FlxKeyManager.getIsDown","flixel/input/FlxKeyManager.hx",184,0xfedfa8b6)
HX_LOCAL_STACK_FRAME(_hx_pos_dc302cd06b06584e_201_destroy,"flixel.input.FlxKeyManager","destroy",0x5d667f96,"flixel.input.FlxKeyManager.destroy","flixel/input/FlxKeyManager.hx",201,0xfedfa8b6)
HX_LOCAL_STACK_FRAME(_hx_pos_dc302cd06b06584e_211_reset,"flixel.input.FlxKeyManager","reset",0x4cbf7d6b,"flixel.input.FlxKeyManager.reset","flixel/input/FlxKeyManager.hx",211,0xfedfa8b6)
HX_LOCAL_STACK_FRAME(_hx_pos_dc302cd06b06584e_236_update,"flixel.input.FlxKeyManager","update",0x595b7aed,"flixel.input.FlxKeyManager.update","flixel/input/FlxKeyManager.hx",236,0xfedfa8b6)
HX_LOCAL_STACK_FRAME(_hx_pos_dc302cd06b06584e_253_checkKeyArrayState,"flixel.input.FlxKeyManager","checkKeyArrayState",0xb44c8d33,"flixel.input.FlxKeyManager.checkKeyArrayState","flixel/input/FlxKeyManager.hx",253,0xfedfa8b6)
HX_LOCAL_STACK_FRAME(_hx_pos_dc302cd06b06584e_272_onKeyUp,"flixel.input.FlxKeyManager","onKeyUp",0xae1caad7,"flixel.input.FlxKeyManager.onKeyUp","flixel/input/FlxKeyManager.hx",272,0xfedfa8b6)
HX_LOCAL_STACK_FRAME(_hx_pos_dc302cd06b06584e_286_onKeyDown,"flixel.input.FlxKeyManager","onKeyDown",0xe38153de,"flixel.input.FlxKeyManager.onKeyDown","flixel/input/FlxKeyManager.hx",286,0xfedfa8b6)
HX_LOCAL_STACK_FRAME(_hx_pos_dc302cd06b06584e_297_handlePreventDefaultKeys,"flixel.input.FlxKeyManager","handlePreventDefaultKeys",0x60508309,"flixel.input.FlxKeyManager.handlePreventDefaultKeys","flixel/input/FlxKeyManager.hx",297,0xfedfa8b6)
HX_LOCAL_STACK_FRAME(_hx_pos_dc302cd06b06584e_314_inKeyArray,"flixel.input.FlxKeyManager","inKeyArray",0xf3ad4f63,"flixel.input.FlxKeyManager.inKeyArray","flixel/input/FlxKeyManager.hx",314,0xfedfa8b6)
HX_LOCAL_STACK_FRAME(_hx_pos_dc302cd06b06584e_335_resolveKeyCode,"flixel.input.FlxKeyManager","resolveKeyCode",0x9a8225c4,"flixel.input.FlxKeyManager.resolveKeyCode","flixel/input/FlxKeyManager.hx",335,0xfedfa8b6)
HX_LOCAL_STACK_FRAME(_hx_pos_dc302cd06b06584e_342_updateKeyStates,"flixel.input.FlxKeyManager","updateKeyStates",0xe52c7794,"flixel.input.FlxKeyManager.updateKeyStates","flixel/input/FlxKeyManager.hx",342,0xfedfa8b6)
HX_LOCAL_STACK_FRAME(_hx_pos_dc302cd06b06584e_358_onFocus,"flixel.input.FlxKeyManager","onFocus",0xd3a750d5,"flixel.input.FlxKeyManager.onFocus","flixel/input/FlxKeyManager.hx",358,0xfedfa8b6)
HX_LOCAL_STACK_FRAME(_hx_pos_dc302cd06b06584e_362_onFocusLost,"flixel.input.FlxKeyManager","onFocusLost",0x1879b559,"flixel.input.FlxKeyManager.onFocusLost","flixel/input/FlxKeyManager.hx",362,0xfedfa8b6)
HX_LOCAL_STACK_FRAME(_hx_pos_dc302cd06b06584e_370_getKey,"flixel.input.FlxKeyManager","getKey",0x7576b78d,"flixel.input.FlxKeyManager.getKey","flixel/input/FlxKeyManager.hx",370,0xfedfa8b6)
namespace flixel{
namespace input{

void FlxKeyManager_obj::__construct( ::Dynamic createKeyList){
            	HX_GC_STACKFRAME(&_hx_pos_dc302cd06b06584e_8_new)
HXLINE(  52)		this->_keyListMap =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE(  47)		this->_keyListArray = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  20)		this->preventDefaultKeys = ::cpp::VirtualArray_obj::__new(0);
HXLINE(  13)		this->enabled = true;
HXLINE( 222)		::openfl::Lib_obj::get_current()->stage->addEventListener(HX_("keyDown",a1,69,47,9c),this->onKeyDown_dyn(),null(),null(),null());
HXLINE( 223)		::openfl::Lib_obj::get_current()->stage->addEventListener(HX_("keyUp",da,b9,fe,de),this->onKeyUp_dyn(),null(),null(),null());
HXLINE( 225)		this->pressed = createKeyList(1,::hx::ObjectPtr<OBJ_>(this));
HXLINE( 226)		this->released = createKeyList(0,::hx::ObjectPtr<OBJ_>(this));
HXLINE( 227)		this->justPressed = createKeyList(2,::hx::ObjectPtr<OBJ_>(this));
HXLINE( 228)		this->justReleased = createKeyList(-1,::hx::ObjectPtr<OBJ_>(this));
            	}

Dynamic FlxKeyManager_obj::__CreateEmpty() { return new FlxKeyManager_obj; }

void *FlxKeyManager_obj::_hx_vtable = 0;

Dynamic FlxKeyManager_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxKeyManager_obj > _hx_result = new FlxKeyManager_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool FlxKeyManager_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5fcf46d2;
}

static ::flixel::input::IFlxInputManager_obj _hx_flixel_input_FlxKeyManager__hx_flixel_input_IFlxInputManager= {
	( void (::hx::Object::*)())&::flixel::input::FlxKeyManager_obj::destroy,
	( void (::hx::Object::*)())&::flixel::input::FlxKeyManager_obj::reset,
	( void (::hx::Object::*)())&::flixel::input::FlxKeyManager_obj::update,
	( void (::hx::Object::*)())&::flixel::input::FlxKeyManager_obj::onFocus,
	( void (::hx::Object::*)())&::flixel::input::FlxKeyManager_obj::onFocusLost,
};

static ::flixel::util::IFlxDestroyable_obj _hx_flixel_input_FlxKeyManager__hx_flixel_util_IFlxDestroyable= {
	( void (::hx::Object::*)())&::flixel::input::FlxKeyManager_obj::destroy,
};

void *FlxKeyManager_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x65dd217a: return &_hx_flixel_input_FlxKeyManager__hx_flixel_input_IFlxInputManager;
		case (int)0xd4fe2fcd: return &_hx_flixel_input_FlxKeyManager__hx_flixel_util_IFlxDestroyable;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

bool FlxKeyManager_obj::anyPressed(::cpp::VirtualArray KeyArray){
            	HX_STACKFRAME(&_hx_pos_dc302cd06b06584e_62_anyPressed)
HXDLIN(  62)		return this->checkKeyArrayState(KeyArray,1);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxKeyManager_obj,anyPressed,return )

bool FlxKeyManager_obj::anyJustPressed(::cpp::VirtualArray KeyArray){
            	HX_STACKFRAME(&_hx_pos_dc302cd06b06584e_73_anyJustPressed)
HXDLIN(  73)		return this->checkKeyArrayState(KeyArray,2);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxKeyManager_obj,anyJustPressed,return )

bool FlxKeyManager_obj::anyJustReleased(::cpp::VirtualArray KeyArray){
            	HX_STACKFRAME(&_hx_pos_dc302cd06b06584e_84_anyJustReleased)
HXDLIN(  84)		return this->checkKeyArrayState(KeyArray,-1);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxKeyManager_obj,anyJustReleased,return )

int FlxKeyManager_obj::firstPressed(){
            	HX_STACKFRAME(&_hx_pos_dc302cd06b06584e_93_firstPressed)
HXLINE(  94)		{
HXLINE(  94)			int _g = 0;
HXDLIN(  94)			::Array< ::Dynamic> _g1 = this->_keyListArray;
HXDLIN(  94)			while((_g < _g1->length)){
HXLINE(  94)				 ::flixel::input::FlxInput key = _g1->__get(_g).StaticCast<  ::flixel::input::FlxInput >();
HXDLIN(  94)				_g = (_g + 1);
HXLINE(  96)				bool _hx_tmp;
HXDLIN(  96)				if (::hx::IsNotNull( key )) {
HXLINE(  96)					if ((key->current != 1)) {
HXLINE(  96)						_hx_tmp = (key->current == 2);
            					}
            					else {
HXLINE(  96)						_hx_tmp = true;
            					}
            				}
            				else {
HXLINE(  96)					_hx_tmp = false;
            				}
HXDLIN(  96)				if (_hx_tmp) {
HXLINE(  98)					return ( (int)(key->ID) );
            				}
            			}
            		}
HXLINE( 101)		return -1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyManager_obj,firstPressed,return )

int FlxKeyManager_obj::firstJustPressed(){
            	HX_STACKFRAME(&_hx_pos_dc302cd06b06584e_110_firstJustPressed)
HXLINE( 111)		{
HXLINE( 111)			int _g = 0;
HXDLIN( 111)			::Array< ::Dynamic> _g1 = this->_keyListArray;
HXDLIN( 111)			while((_g < _g1->length)){
HXLINE( 111)				 ::flixel::input::FlxInput key = _g1->__get(_g).StaticCast<  ::flixel::input::FlxInput >();
HXDLIN( 111)				_g = (_g + 1);
HXLINE( 113)				bool _hx_tmp;
HXDLIN( 113)				if (::hx::IsNotNull( key )) {
HXLINE( 113)					_hx_tmp = (key->current == 2);
            				}
            				else {
HXLINE( 113)					_hx_tmp = false;
            				}
HXDLIN( 113)				if (_hx_tmp) {
HXLINE( 115)					return ( (int)(key->ID) );
            				}
            			}
            		}
HXLINE( 118)		return -1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyManager_obj,firstJustPressed,return )

int FlxKeyManager_obj::firstJustReleased(){
            	HX_STACKFRAME(&_hx_pos_dc302cd06b06584e_127_firstJustReleased)
HXLINE( 128)		{
HXLINE( 128)			int _g = 0;
HXDLIN( 128)			::Array< ::Dynamic> _g1 = this->_keyListArray;
HXDLIN( 128)			while((_g < _g1->length)){
HXLINE( 128)				 ::flixel::input::FlxInput key = _g1->__get(_g).StaticCast<  ::flixel::input::FlxInput >();
HXDLIN( 128)				_g = (_g + 1);
HXLINE( 130)				bool _hx_tmp;
HXDLIN( 130)				if (::hx::IsNotNull( key )) {
HXLINE( 130)					_hx_tmp = (key->current == -1);
            				}
            				else {
HXLINE( 130)					_hx_tmp = false;
            				}
HXDLIN( 130)				if (_hx_tmp) {
HXLINE( 132)					return ( (int)(key->ID) );
            				}
            			}
            		}
HXLINE( 135)		return -1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyManager_obj,firstJustReleased,return )

bool FlxKeyManager_obj::checkStatus( ::Dynamic KeyCode,int Status){
            	HX_STACKFRAME(&_hx_pos_dc302cd06b06584e_147_checkStatus)
HXDLIN( 147)		 ::Dynamic _hx_switch_0 = KeyCode;
            		if (  (_hx_switch_0==-2) ){
HXLINE( 150)			switch((int)(Status)){
            				case (int)-1: {
HXLINE( 155)					return ( ( ::flixel::input::FlxBaseKeyList)(this->justReleased) )->get_ANY();
            				}
            				break;
            				case (int)0: {
HXLINE( 154)					return ( ( ::flixel::input::FlxBaseKeyList)(this->released) )->get_ANY();
            				}
            				break;
            				case (int)1: {
HXLINE( 152)					return ( ( ::flixel::input::FlxBaseKeyList)(this->pressed) )->get_ANY();
            				}
            				break;
            				case (int)2: {
HXLINE( 153)					return ( ( ::flixel::input::FlxBaseKeyList)(this->justPressed) )->get_ANY();
            				}
            				break;
            			}
HXLINE( 150)			goto _hx_goto_10;
            		}
            		if (  (_hx_switch_0==-1) ){
HXLINE( 158)			switch((int)(Status)){
            				case (int)-1: {
HXLINE( 163)					return ( ( ::flixel::input::FlxBaseKeyList)(this->justReleased) )->get_NONE();
            				}
            				break;
            				case (int)0: {
HXLINE( 162)					return ( ( ::flixel::input::FlxBaseKeyList)(this->released) )->get_NONE();
            				}
            				break;
            				case (int)1: {
HXLINE( 160)					return ( ( ::flixel::input::FlxBaseKeyList)(this->pressed) )->get_NONE();
            				}
            				break;
            				case (int)2: {
HXLINE( 161)					return ( ( ::flixel::input::FlxBaseKeyList)(this->justPressed) )->get_NONE();
            				}
            				break;
            			}
HXLINE( 158)			goto _hx_goto_10;
            		}
            		/* default */{
HXLINE( 166)			 ::flixel::input::FlxInput key = ( ( ::flixel::input::FlxInput)(this->_keyListMap->get(( (int)(KeyCode) ))) );
HXLINE( 167)			if (::hx::IsNull( key )) {
HXLINE( 172)				return false;
            			}
HXLINE( 174)			return key->hasState(Status);
            		}
            		_hx_goto_10:;
HXLINE( 147)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxKeyManager_obj,checkStatus,return )

::Array< ::Dynamic> FlxKeyManager_obj::getIsDown(){
            	HX_STACKFRAME(&_hx_pos_dc302cd06b06584e_184_getIsDown)
HXLINE( 185)		::Array< ::Dynamic> keysDown = ::Array_obj< ::Dynamic>::__new();
HXLINE( 187)		{
HXLINE( 187)			int _g = 0;
HXDLIN( 187)			::Array< ::Dynamic> _g1 = this->_keyListArray;
HXDLIN( 187)			while((_g < _g1->length)){
HXLINE( 187)				 ::flixel::input::FlxInput key = _g1->__get(_g).StaticCast<  ::flixel::input::FlxInput >();
HXDLIN( 187)				_g = (_g + 1);
HXLINE( 189)				bool _hx_tmp;
HXDLIN( 189)				if (::hx::IsNotNull( key )) {
HXLINE( 189)					if ((key->current != 1)) {
HXLINE( 189)						_hx_tmp = (key->current == 2);
            					}
            					else {
HXLINE( 189)						_hx_tmp = true;
            					}
            				}
            				else {
HXLINE( 189)					_hx_tmp = false;
            				}
HXDLIN( 189)				if (_hx_tmp) {
HXLINE( 191)					keysDown->push(key);
            				}
            			}
            		}
HXLINE( 194)		return keysDown;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyManager_obj,getIsDown,return )

void FlxKeyManager_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_dc302cd06b06584e_201_destroy)
HXLINE( 202)		this->_keyListArray = null();
HXLINE( 203)		this->_keyListMap = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyManager_obj,destroy,(void))

void FlxKeyManager_obj::reset(){
            	HX_STACKFRAME(&_hx_pos_dc302cd06b06584e_211_reset)
HXDLIN( 211)		int _g = 0;
HXDLIN( 211)		::Array< ::Dynamic> _g1 = this->_keyListArray;
HXDLIN( 211)		while((_g < _g1->length)){
HXDLIN( 211)			 ::flixel::input::FlxInput key = _g1->__get(_g).StaticCast<  ::flixel::input::FlxInput >();
HXDLIN( 211)			_g = (_g + 1);
HXLINE( 213)			if (::hx::IsNotNull( key )) {
HXLINE( 215)				key->release();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyManager_obj,reset,(void))

void FlxKeyManager_obj::update(){
            	HX_STACKFRAME(&_hx_pos_dc302cd06b06584e_236_update)
HXDLIN( 236)		int _g = 0;
HXDLIN( 236)		::Array< ::Dynamic> _g1 = this->_keyListArray;
HXDLIN( 236)		while((_g < _g1->length)){
HXDLIN( 236)			 ::flixel::input::FlxInput key = _g1->__get(_g).StaticCast<  ::flixel::input::FlxInput >();
HXDLIN( 236)			_g = (_g + 1);
HXLINE( 238)			if (::hx::IsNotNull( key )) {
HXLINE( 240)				key->update();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyManager_obj,update,(void))

bool FlxKeyManager_obj::checkKeyArrayState(::cpp::VirtualArray KeyArray,int State){
            	HX_STACKFRAME(&_hx_pos_dc302cd06b06584e_253_checkKeyArrayState)
HXLINE( 254)		if (::hx::IsNull( KeyArray )) {
HXLINE( 256)			return false;
            		}
HXLINE( 259)		{
HXLINE( 259)			int _g = 0;
HXDLIN( 259)			while((_g < KeyArray->get_length())){
HXLINE( 259)				 ::Dynamic code = KeyArray->__get(_g);
HXDLIN( 259)				_g = (_g + 1);
HXLINE( 261)				if (this->checkStatus(code,State)) {
HXLINE( 262)					return true;
            				}
            			}
            		}
HXLINE( 265)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxKeyManager_obj,checkKeyArrayState,return )

void FlxKeyManager_obj::onKeyUp( ::openfl::events::KeyboardEvent event){
            	HX_STACKFRAME(&_hx_pos_dc302cd06b06584e_272_onKeyUp)
HXLINE( 273)		int c = this->resolveKeyCode(event);
HXLINE( 274)		this->handlePreventDefaultKeys(c,event);
HXLINE( 276)		if (this->enabled) {
HXLINE( 278)			 ::flixel::input::FlxInput key = ( ( ::flixel::input::FlxInput)(this->_keyListMap->get(c)) );
HXDLIN( 278)			if (::hx::IsNotNull( key )) {
HXLINE( 278)				key->release();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxKeyManager_obj,onKeyUp,(void))

void FlxKeyManager_obj::onKeyDown( ::openfl::events::KeyboardEvent event){
            	HX_STACKFRAME(&_hx_pos_dc302cd06b06584e_286_onKeyDown)
HXLINE( 287)		int c = this->resolveKeyCode(event);
HXLINE( 288)		this->handlePreventDefaultKeys(c,event);
HXLINE( 290)		if (this->enabled) {
HXLINE( 292)			 ::flixel::input::FlxInput key = ( ( ::flixel::input::FlxInput)(this->_keyListMap->get(c)) );
HXDLIN( 292)			if (::hx::IsNotNull( key )) {
HXLINE( 292)				key->press();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxKeyManager_obj,onKeyDown,(void))

void FlxKeyManager_obj::handlePreventDefaultKeys(int keyCode, ::openfl::events::KeyboardEvent event){
            	HX_STACKFRAME(&_hx_pos_dc302cd06b06584e_297_handlePreventDefaultKeys)
HXLINE( 298)		 ::flixel::input::FlxInput key = ( ( ::flixel::input::FlxInput)(this->_keyListMap->get(keyCode)) );
HXLINE( 299)		bool _hx_tmp;
HXDLIN( 299)		bool _hx_tmp1;
HXDLIN( 299)		if (::hx::IsNotNull( key )) {
HXLINE( 299)			_hx_tmp1 = ::hx::IsNotNull( this->preventDefaultKeys );
            		}
            		else {
HXLINE( 299)			_hx_tmp1 = false;
            		}
HXDLIN( 299)		if (_hx_tmp1) {
HXLINE( 299)			_hx_tmp = (this->preventDefaultKeys->indexOf(key->ID,null()) != -1);
            		}
            		else {
HXLINE( 299)			_hx_tmp = false;
            		}
HXDLIN( 299)		if (_hx_tmp) {
HXLINE( 301)			event->stopImmediatePropagation();
HXLINE( 302)			event->stopPropagation();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxKeyManager_obj,handlePreventDefaultKeys,(void))

bool FlxKeyManager_obj::inKeyArray(::cpp::VirtualArray KeyArray, ::openfl::events::KeyboardEvent Event){
            	HX_STACKFRAME(&_hx_pos_dc302cd06b06584e_314_inKeyArray)
HXLINE( 315)		if (::hx::IsNull( KeyArray )) {
HXLINE( 317)			return false;
            		}
            		else {
HXLINE( 321)			int code = this->resolveKeyCode(Event);
HXLINE( 322)			{
HXLINE( 322)				int _g = 0;
HXDLIN( 322)				while((_g < KeyArray->get_length())){
HXLINE( 322)					 ::Dynamic key = KeyArray->__get(_g);
HXDLIN( 322)					_g = (_g + 1);
HXLINE( 324)					bool _hx_tmp;
HXDLIN( 324)					if (::hx::IsNotEq( key,code )) {
HXLINE( 324)						_hx_tmp = ::hx::IsEq( key,-2 );
            					}
            					else {
HXLINE( 324)						_hx_tmp = true;
            					}
HXDLIN( 324)					if (_hx_tmp) {
HXLINE( 326)						return true;
            					}
            				}
            			}
            		}
HXLINE( 330)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxKeyManager_obj,inKeyArray,return )

int FlxKeyManager_obj::resolveKeyCode( ::openfl::events::KeyboardEvent e){
            	HX_STACKFRAME(&_hx_pos_dc302cd06b06584e_335_resolveKeyCode)
HXDLIN( 335)		return e->keyCode;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxKeyManager_obj,resolveKeyCode,return )

void FlxKeyManager_obj::updateKeyStates(int KeyCode,bool Down){
            	HX_STACKFRAME(&_hx_pos_dc302cd06b06584e_342_updateKeyStates)
HXLINE( 343)		 ::flixel::input::FlxInput key = ( ( ::flixel::input::FlxInput)(this->_keyListMap->get(KeyCode)) );
HXLINE( 345)		if (::hx::IsNotNull( key )) {
HXLINE( 347)			if (Down) {
HXLINE( 349)				key->press();
            			}
            			else {
HXLINE( 353)				key->release();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxKeyManager_obj,updateKeyStates,(void))

void FlxKeyManager_obj::onFocus(){
            	HX_STACKFRAME(&_hx_pos_dc302cd06b06584e_358_onFocus)
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyManager_obj,onFocus,(void))

void FlxKeyManager_obj::onFocusLost(){
            	HX_STACKFRAME(&_hx_pos_dc302cd06b06584e_362_onFocusLost)
HXDLIN( 362)		this->reset();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyManager_obj,onFocusLost,(void))

 ::flixel::input::FlxInput FlxKeyManager_obj::getKey(int KeyCode){
            	HX_STACKFRAME(&_hx_pos_dc302cd06b06584e_370_getKey)
HXDLIN( 370)		return ( ( ::flixel::input::FlxInput)(this->_keyListMap->get(KeyCode)) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxKeyManager_obj,getKey,return )


::hx::ObjectPtr< FlxKeyManager_obj > FlxKeyManager_obj::__new( ::Dynamic createKeyList) {
	::hx::ObjectPtr< FlxKeyManager_obj > __this = new FlxKeyManager_obj();
	__this->__construct(createKeyList);
	return __this;
}

::hx::ObjectPtr< FlxKeyManager_obj > FlxKeyManager_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic createKeyList) {
	FlxKeyManager_obj *__this = (FlxKeyManager_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxKeyManager_obj), true, "flixel.input.FlxKeyManager"));
	*(void **)__this = FlxKeyManager_obj::_hx_vtable;
	__this->__construct(createKeyList);
	return __this;
}

FlxKeyManager_obj::FlxKeyManager_obj()
{
}

void FlxKeyManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxKeyManager);
	HX_MARK_MEMBER_NAME(enabled,"enabled");
	HX_MARK_MEMBER_NAME(preventDefaultKeys,"preventDefaultKeys");
	HX_MARK_MEMBER_NAME(pressed,"pressed");
	HX_MARK_MEMBER_NAME(justPressed,"justPressed");
	HX_MARK_MEMBER_NAME(released,"released");
	HX_MARK_MEMBER_NAME(justReleased,"justReleased");
	HX_MARK_MEMBER_NAME(_keyListArray,"_keyListArray");
	HX_MARK_MEMBER_NAME(_keyListMap,"_keyListMap");
	HX_MARK_END_CLASS();
}

void FlxKeyManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(enabled,"enabled");
	HX_VISIT_MEMBER_NAME(preventDefaultKeys,"preventDefaultKeys");
	HX_VISIT_MEMBER_NAME(pressed,"pressed");
	HX_VISIT_MEMBER_NAME(justPressed,"justPressed");
	HX_VISIT_MEMBER_NAME(released,"released");
	HX_VISIT_MEMBER_NAME(justReleased,"justReleased");
	HX_VISIT_MEMBER_NAME(_keyListArray,"_keyListArray");
	HX_VISIT_MEMBER_NAME(_keyListMap,"_keyListMap");
}

::hx::Val FlxKeyManager_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return ::hx::Val( reset_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		if (HX_FIELD_EQ(inName,"getKey") ) { return ::hx::Val( getKey_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { return ::hx::Val( enabled ); }
		if (HX_FIELD_EQ(inName,"pressed") ) { return ::hx::Val( pressed ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		if (HX_FIELD_EQ(inName,"onKeyUp") ) { return ::hx::Val( onKeyUp_dyn() ); }
		if (HX_FIELD_EQ(inName,"onFocus") ) { return ::hx::Val( onFocus_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"released") ) { return ::hx::Val( released ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getIsDown") ) { return ::hx::Val( getIsDown_dyn() ); }
		if (HX_FIELD_EQ(inName,"onKeyDown") ) { return ::hx::Val( onKeyDown_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"anyPressed") ) { return ::hx::Val( anyPressed_dyn() ); }
		if (HX_FIELD_EQ(inName,"inKeyArray") ) { return ::hx::Val( inKeyArray_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"justPressed") ) { return ::hx::Val( justPressed ); }
		if (HX_FIELD_EQ(inName,"_keyListMap") ) { return ::hx::Val( _keyListMap ); }
		if (HX_FIELD_EQ(inName,"checkStatus") ) { return ::hx::Val( checkStatus_dyn() ); }
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return ::hx::Val( onFocusLost_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"justReleased") ) { return ::hx::Val( justReleased ); }
		if (HX_FIELD_EQ(inName,"firstPressed") ) { return ::hx::Val( firstPressed_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_keyListArray") ) { return ::hx::Val( _keyListArray ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"anyJustPressed") ) { return ::hx::Val( anyJustPressed_dyn() ); }
		if (HX_FIELD_EQ(inName,"resolveKeyCode") ) { return ::hx::Val( resolveKeyCode_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"anyJustReleased") ) { return ::hx::Val( anyJustReleased_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateKeyStates") ) { return ::hx::Val( updateKeyStates_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"firstJustPressed") ) { return ::hx::Val( firstJustPressed_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"firstJustReleased") ) { return ::hx::Val( firstJustReleased_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"preventDefaultKeys") ) { return ::hx::Val( preventDefaultKeys ); }
		if (HX_FIELD_EQ(inName,"checkKeyArrayState") ) { return ::hx::Val( checkKeyArrayState_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"handlePreventDefaultKeys") ) { return ::hx::Val( handlePreventDefaultKeys_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxKeyManager_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { enabled=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pressed") ) { pressed=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"released") ) { released=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"justPressed") ) { justPressed=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_keyListMap") ) { _keyListMap=inValue.Cast<  ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"justReleased") ) { justReleased=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_keyListArray") ) { _keyListArray=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"preventDefaultKeys") ) { preventDefaultKeys=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxKeyManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("enabled",81,04,31,7e));
	outFields->push(HX_("preventDefaultKeys",5d,d3,15,2d));
	outFields->push(HX_("pressed",a2,d2,e6,39));
	outFields->push(HX_("justPressed",d6,0d,a7,f2));
	outFields->push(HX_("released",bd,88,e7,76));
	outFields->push(HX_("justReleased",09,1b,5b,66));
	outFields->push(HX_("_keyListArray",9b,69,07,f6));
	outFields->push(HX_("_keyListMap",1e,a2,94,4b));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxKeyManager_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(FlxKeyManager_obj,enabled),HX_("enabled",81,04,31,7e)},
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(int)offsetof(FlxKeyManager_obj,preventDefaultKeys),HX_("preventDefaultKeys",5d,d3,15,2d)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxKeyManager_obj,pressed),HX_("pressed",a2,d2,e6,39)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxKeyManager_obj,justPressed),HX_("justPressed",d6,0d,a7,f2)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxKeyManager_obj,released),HX_("released",bd,88,e7,76)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxKeyManager_obj,justReleased),HX_("justReleased",09,1b,5b,66)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(FlxKeyManager_obj,_keyListArray),HX_("_keyListArray",9b,69,07,f6)},
	{::hx::fsObject /*  ::haxe::ds::IntMap */ ,(int)offsetof(FlxKeyManager_obj,_keyListMap),HX_("_keyListMap",1e,a2,94,4b)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxKeyManager_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxKeyManager_obj_sMemberFields[] = {
	HX_("enabled",81,04,31,7e),
	HX_("preventDefaultKeys",5d,d3,15,2d),
	HX_("pressed",a2,d2,e6,39),
	HX_("justPressed",d6,0d,a7,f2),
	HX_("released",bd,88,e7,76),
	HX_("justReleased",09,1b,5b,66),
	HX_("_keyListArray",9b,69,07,f6),
	HX_("_keyListMap",1e,a2,94,4b),
	HX_("anyPressed",16,75,02,90),
	HX_("anyJustPressed",4a,fa,b6,a6),
	HX_("anyJustReleased",15,14,3a,40),
	HX_("firstPressed",52,e8,2e,63),
	HX_("firstJustPressed",86,bb,a3,20),
	HX_("firstJustReleased",59,67,76,75),
	HX_("checkStatus",1a,ba,0d,e8),
	HX_("getIsDown",a2,46,2b,dc),
	HX_("destroy",fa,2c,86,24),
	HX_("reset",cf,49,c8,e6),
	HX_("update",09,86,05,87),
	HX_("checkKeyArrayState",4f,d2,68,9f),
	HX_("onKeyUp",3b,58,3c,75),
	HX_("onKeyDown",42,22,f2,73),
	HX_("handlePreventDefaultKeys",25,85,c7,5d),
	HX_("inKeyArray",7f,18,f1,c5),
	HX_("resolveKeyCode",e0,ac,16,f4),
	HX_("updateKeyStates",f8,28,8e,ed),
	HX_("onFocus",39,fe,c6,9a),
	HX_("onFocusLost",bd,e4,85,41),
	HX_("getKey",a9,c2,20,a3),
	::String(null()) };

::hx::Class FlxKeyManager_obj::__mClass;

void FlxKeyManager_obj::__register()
{
	FlxKeyManager_obj _hx_dummy;
	FlxKeyManager_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.input.FlxKeyManager",0a,b7,52,80);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxKeyManager_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxKeyManager_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxKeyManager_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxKeyManager_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace input
