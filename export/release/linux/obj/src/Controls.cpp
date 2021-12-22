#include <hxcpp.h>

#ifndef INCLUDED_ClientPrefs
#include <ClientPrefs.h>
#endif
#ifndef INCLUDED_Control
#include <Control.h>
#endif
#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_Device
#include <Device.h>
#endif
#ifndef INCLUDED_KeyboardScheme
#include <KeyboardScheme.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
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
#ifndef INCLUDED_flixel_input_actions_FlxActionInputDigital
#include <flixel/input/actions/FlxActionInputDigital.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionManager
#include <flixel/input/actions/FlxActionManager.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionSet
#include <flixel/input/actions/FlxActionSet.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxInputDevice
#include <flixel/input/actions/FlxInputDevice.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad__FlxGamepadInputID_FlxGamepadInputID_Impl_
#include <flixel/input/gamepad/_FlxGamepadInputID/FlxGamepadInputID_Impl_.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard__FlxKey_FlxKey_Impl_
#include <flixel/input/keyboard/_FlxKey/FlxKey_Impl_.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_InputFrontEnd
#include <flixel/system/frontEnds/InputFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_BalancedTree
#include <haxe/ds/BalancedTree.h>
#endif
#ifndef INCLUDED_haxe_ds_EnumValueMap
#include <haxe/ds/EnumValueMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_948b5caa279cd923_120_new,"Controls","new",0x4f8de688,"Controls.new","Controls.hx",120,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_163_get_UI_UP,"Controls","get_UI_UP",0x338ac325,"Controls.get_UI_UP","Controls.hx",163,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_168_get_UI_LEFT,"Controls","get_UI_LEFT",0x38228f51,"Controls.get_UI_LEFT","Controls.hx",168,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_173_get_UI_RIGHT,"Controls","get_UI_RIGHT",0x5d27e532,"Controls.get_UI_RIGHT","Controls.hx",173,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_178_get_UI_DOWN,"Controls","get_UI_DOWN",0x32e07fac,"Controls.get_UI_DOWN","Controls.hx",178,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_183_get_UI_UP_P,"Controls","get_UI_UP_P",0x3e1de976,"Controls.get_UI_UP_P","Controls.hx",183,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_188_get_UI_LEFT_P,"Controls","get_UI_LEFT_P",0x716218a2,"Controls.get_UI_LEFT_P","Controls.hx",188,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_193_get_UI_RIGHT_P,"Controls","get_UI_RIGHT_P",0xe2d168c3,"Controls.get_UI_RIGHT_P","Controls.hx",193,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_198_get_UI_DOWN_P,"Controls","get_UI_DOWN_P",0x0bc115bd,"Controls.get_UI_DOWN_P","Controls.hx",198,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_203_get_UI_UP_R,"Controls","get_UI_UP_R",0x3e1de978,"Controls.get_UI_UP_R","Controls.hx",203,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_208_get_UI_LEFT_R,"Controls","get_UI_LEFT_R",0x716218a4,"Controls.get_UI_LEFT_R","Controls.hx",208,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_213_get_UI_RIGHT_R,"Controls","get_UI_RIGHT_R",0xe2d168c5,"Controls.get_UI_RIGHT_R","Controls.hx",213,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_218_get_UI_DOWN_R,"Controls","get_UI_DOWN_R",0x0bc115bf,"Controls.get_UI_DOWN_R","Controls.hx",218,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_223_get_NOTE_UP,"Controls","get_NOTE_UP",0x213b6207,"Controls.get_NOTE_UP","Controls.hx",223,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_228_get_NOTE_LEFT,"Controls","get_NOTE_LEFT",0x6a622ab3,"Controls.get_NOTE_LEFT","Controls.hx",228,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_233_get_NOTE_RIGHT,"Controls","get_NOTE_RIGHT",0x22903f90,"Controls.get_NOTE_RIGHT","Controls.hx",233,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_238_get_NOTE_DOWN,"Controls","get_NOTE_DOWN",0x65201b0e,"Controls.get_NOTE_DOWN","Controls.hx",238,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_243_get_NOTE_UP_P,"Controls","get_NOTE_UP_P",0x705d84d8,"Controls.get_NOTE_UP_P","Controls.hx",243,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_248_get_NOTE_LEFT_P,"Controls","get_NOTE_LEFT_P",0x6748d084,"Controls.get_NOTE_LEFT_P","Controls.hx",248,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_253_get_NOTE_RIGHT_P,"Controls","get_NOTE_RIGHT_P",0x16cb96a1,"Controls.get_NOTE_RIGHT_P","Controls.hx",253,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_258_get_NOTE_DOWN_P,"Controls","get_NOTE_DOWN_P",0x01a7cd9f,"Controls.get_NOTE_DOWN_P","Controls.hx",258,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_263_get_NOTE_UP_R,"Controls","get_NOTE_UP_R",0x705d84da,"Controls.get_NOTE_UP_R","Controls.hx",263,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_268_get_NOTE_LEFT_R,"Controls","get_NOTE_LEFT_R",0x6748d086,"Controls.get_NOTE_LEFT_R","Controls.hx",268,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_273_get_NOTE_RIGHT_R,"Controls","get_NOTE_RIGHT_R",0x16cb96a3,"Controls.get_NOTE_RIGHT_R","Controls.hx",273,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_278_get_NOTE_DOWN_R,"Controls","get_NOTE_DOWN_R",0x01a7cda1,"Controls.get_NOTE_DOWN_R","Controls.hx",278,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_283_get_ACCEPT,"Controls","get_ACCEPT",0x5fc72da9,"Controls.get_ACCEPT","Controls.hx",283,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_288_get_BACK,"Controls","get_BACK",0xc248f688,"Controls.get_BACK","Controls.hx",288,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_293_get_PAUSE,"Controls","get_PAUSE",0x4d388f55,"Controls.get_PAUSE","Controls.hx",293,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_298_get_RESET,"Controls","get_RESET",0x76a9022e,"Controls.get_RESET","Controls.hx",298,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_384_update,"Controls","update",0x9d2db8e1,"Controls.update","Controls.hx",384,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_394_checkByName,"Controls","checkByName",0xbe587cd2,"Controls.checkByName","Controls.hx",394,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_398_getDialogueName,"Controls","getDialogueName",0xe1263f61,"Controls.getDialogueName","Controls.hx",398,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_410_getDialogueNameFromToken,"Controls","getDialogueNameFromToken",0x6458998e,"Controls.getDialogueNameFromToken","Controls.hx",410,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_415_getActionFromControl,"Controls","getActionFromControl",0xa2e9ae5f,"Controls.getActionFromControl","Controls.hx",415,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_446_forEachBound,"Controls","forEachBound",0x9a98930c,"Controls.forEachBound","Controls.hx",446,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_492_replaceBinding,"Controls","replaceBinding",0x45096449,"Controls.replaceBinding","Controls.hx",492,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_513_copyFrom,"Controls","copyFrom",0xdf1da497,"Controls.copyFrom","Controls.hx",513,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_560_copyTo,"Controls","copyTo",0xdf5b4f68,"Controls.copyTo","Controls.hx",560,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_565_mergeKeyboardScheme,"Controls","mergeKeyboardScheme",0x61e2372c,"Controls.mergeKeyboardScheme","Controls.hx",565,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_582_bindKeys,"Controls","bindKeys",0xcb8dbf29,"Controls.bindKeys","Controls.hx",582,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_600_unbindKeys,"Controls","unbindKeys",0xec4b8c82,"Controls.unbindKeys","Controls.hx",600,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_632_setKeyboardScheme,"Controls","setKeyboardScheme",0x039bdb96,"Controls.setKeyboardScheme","Controls.hx",632,0x0ab041e8)
static const int _hx_array_data_116e4296_1120[] = {
	(int)87,
};
static const int _hx_array_data_116e4296_1121[] = {
	(int)83,
};
static const int _hx_array_data_116e4296_1122[] = {
	(int)65,
};
static const int _hx_array_data_116e4296_1123[] = {
	(int)68,
};
static const int _hx_array_data_116e4296_1124[] = {
	(int)87,
};
static const int _hx_array_data_116e4296_1125[] = {
	(int)83,
};
static const int _hx_array_data_116e4296_1126[] = {
	(int)65,
};
static const int _hx_array_data_116e4296_1127[] = {
	(int)68,
};
static const int _hx_array_data_116e4296_1128[] = {
	(int)71,(int)90,
};
static const int _hx_array_data_116e4296_1129[] = {
	(int)72,(int)88,
};
static const int _hx_array_data_116e4296_1130[] = {
	(int)49,
};
static const int _hx_array_data_116e4296_1131[] = {
	(int)82,
};
static const int _hx_array_data_116e4296_1132[] = {
	(int)38,
};
static const int _hx_array_data_116e4296_1133[] = {
	(int)40,
};
static const int _hx_array_data_116e4296_1134[] = {
	(int)37,
};
static const int _hx_array_data_116e4296_1135[] = {
	(int)39,
};
static const int _hx_array_data_116e4296_1136[] = {
	(int)38,
};
static const int _hx_array_data_116e4296_1137[] = {
	(int)40,
};
static const int _hx_array_data_116e4296_1138[] = {
	(int)37,
};
static const int _hx_array_data_116e4296_1139[] = {
	(int)39,
};
static const int _hx_array_data_116e4296_1140[] = {
	(int)79,
};
static const int _hx_array_data_116e4296_1141[] = {
	(int)80,
};
static const int _hx_array_data_116e4296_1142[] = {
	(int)13,
};
static const int _hx_array_data_116e4296_1143[] = {
	(int)8,
};
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_735_removeKeyboard,"Controls","removeKeyboard",0xd2dac3e3,"Controls.removeKeyboard","Controls.hx",735,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_748_addGamepad,"Controls","addGamepad",0xa2c68b58,"Controls.addGamepad","Controls.hx",748,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_761_addGamepadLiteral,"Controls","addGamepadLiteral",0x50b4e0f7,"Controls.addGamepadLiteral","Controls.hx",761,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_774_removeGamepad,"Controls","removeGamepad",0xfdf294e5,"Controls.removeGamepad","Controls.hx",774,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_790_addDefaultGamepad,"Controls","addDefaultGamepad",0xaa5e6409,"Controls.addDefaultGamepad","Controls.hx",790,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_815_bindButtons,"Controls","bindButtons",0x94dee42c,"Controls.bindButtons","Controls.hx",815,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_828_unbindButtons,"Controls","unbindButtons",0x83d33473,"Controls.unbindButtons","Controls.hx",828,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_852_getInputsFor,"Controls","getInputsFor",0xa3571ac2,"Controls.getInputsFor","Controls.hx",852,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_876_removeDevice,"Controls","removeDevice",0x4c1b5cd2,"Controls.removeDevice","Controls.hx",876,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_433_init,"Controls","init",0x495487e8,"Controls.init","Controls.hx",433,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_615_addKeys,"Controls","addKeys",0xd0486edd,"Controls.addKeys","Controls.hx",615,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_621_removeKeys,"Controls","removeKeys",0x75dc9b30,"Controls.removeKeys","Controls.hx",621,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_836_addButtons,"Controls","addButtons",0xe3b5fcf8,"Controls.addButtons","Controls.hx",836,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_841_removeButtons,"Controls","removeButtons",0x3ee20685,"Controls.removeButtons","Controls.hx",841,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_887_isDevice,"Controls","isDevice",0xe09e10f8,"Controls.isDevice","Controls.hx",887,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_896_isGamepad,"Controls","isGamepad",0x5bcd81ff,"Controls.isGamepad","Controls.hx",896,0x0ab041e8)

void Controls_obj::__construct(::String name, ::KeyboardScheme __o_scheme){
            		 ::KeyboardScheme scheme = __o_scheme;
            		if (::hx::IsNull(__o_scheme)) scheme = ::KeyboardScheme_obj::None_dyn();
            	HX_GC_STACKFRAME(&_hx_pos_948b5caa279cd923_120_new)
HXLINE( 158)		this->keyboardScheme = ::KeyboardScheme_obj::None_dyn();
HXLINE( 157)		this->gamepadsAdded = ::Array_obj< int >::__new(0);
HXLINE( 152)		this->byName =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 149)		this->_reset =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("reset",cf,49,c8,e6),null());
HXLINE( 148)		this->_pause =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("pause",f6,d6,57,bd),null());
HXLINE( 147)		this->_back =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("back",27,da,10,41),null());
HXLINE( 146)		this->_accept =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("accept",08,93,06,0b),null());
HXLINE( 145)		this->_note_downR =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("note_down-release",49,ab,d6,d1),null());
HXLINE( 144)		this->_note_rightR =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("note_right-release",c9,28,3c,f1),null());
HXLINE( 143)		this->_note_leftR =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("note_left-release",ee,67,d8,03),null());
HXLINE( 142)		this->_note_upR =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("note_up-release",02,05,01,5e),null());
HXLINE( 141)		this->_note_downP =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("note_down-press",85,b4,95,9a),null());
HXLINE( 140)		this->_note_rightP =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("note_right-press",05,d2,d8,4c),null());
HXLINE( 139)		this->_note_leftP =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("note_left-press",ea,8d,a2,8c),null());
HXLINE( 138)		this->_note_upP =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("note_up-press",fe,fd,7f,20),null());
HXLINE( 137)		this->_note_down =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("note_down",0f,ef,de,9f),null());
HXLINE( 136)		this->_note_right =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("note_right",8f,ec,ca,4e),null());
HXLINE( 135)		this->_note_left =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("note_left",b4,fe,20,a5),null());
HXLINE( 134)		this->_note_up =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("note_up",c8,67,5c,4d),null());
HXLINE( 133)		this->_ui_downR =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("ui_down-release",a7,87,e1,ce),null());
HXLINE( 132)		this->_ui_rightR =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("ui_right-release",ab,1e,b2,5d),null());
HXLINE( 131)		this->_ui_leftR =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("ui_left-release",4c,44,e3,00),null());
HXLINE( 130)		this->_ui_upR =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("ui_up-release",e0,6d,79,3d),null());
HXLINE( 129)		this->_ui_downP =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("ui_down-press",63,1d,0e,7a),null());
HXLINE( 128)		this->_ui_rightP =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("ui_right-press",67,2b,bc,f6),null());
HXLINE( 127)		this->_ui_leftP =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("ui_left-press",c8,f6,1a,6c),null());
HXLINE( 126)		this->_ui_upP =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("ui_up-press",5c,d3,d1,27),null());
HXLINE( 125)		this->_ui_down =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("ui_down",6d,3d,47,f2),null());
HXLINE( 124)		this->_ui_right =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("ui_right",71,30,a7,17),null());
HXLINE( 123)		this->_ui_left =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("ui_left",12,4d,89,f7),null());
HXLINE( 122)		this->_ui_up =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("ui_up",a6,c2,91,a3),null());
HXLINE( 303)		super::__construct(name,null(),null());
HXLINE( 305)		this->add(this->_ui_up);
HXLINE( 306)		this->add(this->_ui_left);
HXLINE( 307)		this->add(this->_ui_right);
HXLINE( 308)		this->add(this->_ui_down);
HXLINE( 309)		this->add(this->_ui_upP);
HXLINE( 310)		this->add(this->_ui_leftP);
HXLINE( 311)		this->add(this->_ui_rightP);
HXLINE( 312)		this->add(this->_ui_downP);
HXLINE( 313)		this->add(this->_ui_upR);
HXLINE( 314)		this->add(this->_ui_leftR);
HXLINE( 315)		this->add(this->_ui_rightR);
HXLINE( 316)		this->add(this->_ui_downR);
HXLINE( 317)		this->add(this->_note_up);
HXLINE( 318)		this->add(this->_note_left);
HXLINE( 319)		this->add(this->_note_right);
HXLINE( 320)		this->add(this->_note_down);
HXLINE( 321)		this->add(this->_note_upP);
HXLINE( 322)		this->add(this->_note_leftP);
HXLINE( 323)		this->add(this->_note_rightP);
HXLINE( 324)		this->add(this->_note_downP);
HXLINE( 325)		this->add(this->_note_upR);
HXLINE( 326)		this->add(this->_note_leftR);
HXLINE( 327)		this->add(this->_note_rightR);
HXLINE( 328)		this->add(this->_note_downR);
HXLINE( 329)		this->add(this->_accept);
HXLINE( 330)		this->add(this->_back);
HXLINE( 331)		this->add(this->_pause);
HXLINE( 332)		this->add(this->_reset);
HXLINE( 334)		{
HXLINE( 334)			int _g = 0;
HXDLIN( 334)			::Array< ::Dynamic> _g1 = this->digitalActions;
HXDLIN( 334)			while((_g < _g1->length)){
HXLINE( 334)				 ::flixel::input::actions::FlxActionDigital action = _g1->__get(_g).StaticCast<  ::flixel::input::actions::FlxActionDigital >();
HXDLIN( 334)				_g = (_g + 1);
HXLINE( 335)				this->byName->set(action->name,action);
            			}
            		}
HXLINE( 337)		this->setKeyboardScheme(scheme,false);
            	}

Dynamic Controls_obj::__CreateEmpty() { return new Controls_obj; }

void *Controls_obj::_hx_vtable = 0;

Dynamic Controls_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Controls_obj > _hx_result = new Controls_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Controls_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x315ddd0d) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x315ddd0d;
	} else {
		return inClassId==(int)0x6cff3556;
	}
}

bool Controls_obj::get_UI_UP(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_163_get_UI_UP)
HXDLIN( 163)		return this->_ui_up->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_UI_UP,return )

bool Controls_obj::get_UI_LEFT(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_168_get_UI_LEFT)
HXDLIN( 168)		return this->_ui_left->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_UI_LEFT,return )

bool Controls_obj::get_UI_RIGHT(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_173_get_UI_RIGHT)
HXDLIN( 173)		return this->_ui_right->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_UI_RIGHT,return )

bool Controls_obj::get_UI_DOWN(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_178_get_UI_DOWN)
HXDLIN( 178)		return this->_ui_down->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_UI_DOWN,return )

bool Controls_obj::get_UI_UP_P(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_183_get_UI_UP_P)
HXDLIN( 183)		return this->_ui_upP->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_UI_UP_P,return )

bool Controls_obj::get_UI_LEFT_P(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_188_get_UI_LEFT_P)
HXDLIN( 188)		return this->_ui_leftP->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_UI_LEFT_P,return )

bool Controls_obj::get_UI_RIGHT_P(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_193_get_UI_RIGHT_P)
HXDLIN( 193)		return this->_ui_rightP->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_UI_RIGHT_P,return )

bool Controls_obj::get_UI_DOWN_P(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_198_get_UI_DOWN_P)
HXDLIN( 198)		return this->_ui_downP->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_UI_DOWN_P,return )

bool Controls_obj::get_UI_UP_R(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_203_get_UI_UP_R)
HXDLIN( 203)		return this->_ui_upR->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_UI_UP_R,return )

bool Controls_obj::get_UI_LEFT_R(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_208_get_UI_LEFT_R)
HXDLIN( 208)		return this->_ui_leftR->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_UI_LEFT_R,return )

bool Controls_obj::get_UI_RIGHT_R(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_213_get_UI_RIGHT_R)
HXDLIN( 213)		return this->_ui_rightR->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_UI_RIGHT_R,return )

bool Controls_obj::get_UI_DOWN_R(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_218_get_UI_DOWN_R)
HXDLIN( 218)		return this->_ui_downR->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_UI_DOWN_R,return )

bool Controls_obj::get_NOTE_UP(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_223_get_NOTE_UP)
HXDLIN( 223)		return this->_note_up->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_NOTE_UP,return )

bool Controls_obj::get_NOTE_LEFT(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_228_get_NOTE_LEFT)
HXDLIN( 228)		return this->_note_left->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_NOTE_LEFT,return )

bool Controls_obj::get_NOTE_RIGHT(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_233_get_NOTE_RIGHT)
HXDLIN( 233)		return this->_note_right->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_NOTE_RIGHT,return )

bool Controls_obj::get_NOTE_DOWN(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_238_get_NOTE_DOWN)
HXDLIN( 238)		return this->_note_down->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_NOTE_DOWN,return )

bool Controls_obj::get_NOTE_UP_P(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_243_get_NOTE_UP_P)
HXDLIN( 243)		return this->_note_upP->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_NOTE_UP_P,return )

bool Controls_obj::get_NOTE_LEFT_P(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_248_get_NOTE_LEFT_P)
HXDLIN( 248)		return this->_note_leftP->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_NOTE_LEFT_P,return )

bool Controls_obj::get_NOTE_RIGHT_P(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_253_get_NOTE_RIGHT_P)
HXDLIN( 253)		return this->_note_rightP->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_NOTE_RIGHT_P,return )

bool Controls_obj::get_NOTE_DOWN_P(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_258_get_NOTE_DOWN_P)
HXDLIN( 258)		return this->_note_downP->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_NOTE_DOWN_P,return )

bool Controls_obj::get_NOTE_UP_R(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_263_get_NOTE_UP_R)
HXDLIN( 263)		return this->_note_upR->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_NOTE_UP_R,return )

bool Controls_obj::get_NOTE_LEFT_R(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_268_get_NOTE_LEFT_R)
HXDLIN( 268)		return this->_note_leftR->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_NOTE_LEFT_R,return )

bool Controls_obj::get_NOTE_RIGHT_R(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_273_get_NOTE_RIGHT_R)
HXDLIN( 273)		return this->_note_rightR->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_NOTE_RIGHT_R,return )

bool Controls_obj::get_NOTE_DOWN_R(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_278_get_NOTE_DOWN_R)
HXDLIN( 278)		return this->_note_downR->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_NOTE_DOWN_R,return )

bool Controls_obj::get_ACCEPT(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_283_get_ACCEPT)
HXDLIN( 283)		return this->_accept->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_ACCEPT,return )

bool Controls_obj::get_BACK(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_288_get_BACK)
HXDLIN( 288)		return this->_back->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_BACK,return )

bool Controls_obj::get_PAUSE(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_293_get_PAUSE)
HXDLIN( 293)		return this->_pause->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_PAUSE,return )

bool Controls_obj::get_RESET(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_298_get_RESET)
HXDLIN( 298)		return this->_reset->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_RESET,return )

void Controls_obj::update(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_384_update)
HXDLIN( 384)		this->super::update();
            	}


bool Controls_obj::checkByName(::String name){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_394_checkByName)
HXDLIN( 394)		return ( ( ::flixel::input::actions::FlxActionDigital)(this->byName->get(name)) )->check();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Controls_obj,checkByName,return )

::String Controls_obj::getDialogueName( ::flixel::input::actions::FlxActionDigital action){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_398_getDialogueName)
HXLINE( 399)		 ::flixel::input::actions::FlxActionInput input = action->inputs->__get(0).StaticCast<  ::flixel::input::actions::FlxActionInput >();
HXLINE( 400)		 ::flixel::input::actions::FlxInputDevice _g = input->device;
HXDLIN( 400)		switch((int)(_g->_hx_getIndex())){
            			case (int)3: {
HXLINE( 402)				return ((HX_("[",5b,00,00,00) + ::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::toStringMap->get(input->inputID)) + HX_("]",5d,00,00,00));
            			}
            			break;
            			case (int)4: {
HXLINE( 403)				return ((HX_("(",28,00,00,00) + ::flixel::input::gamepad::_FlxGamepadInputID::FlxGamepadInputID_Impl__obj::toStringMap->get(input->inputID)) + HX_(")",29,00,00,00));
            			}
            			break;
            			default:{
HXLINE( 404)				 ::flixel::input::actions::FlxInputDevice device = _g;
HXDLIN( 404)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("unhandled device: ",f9,e1,62,a5) + ::Std_obj::string(device))));
            			}
            		}
HXLINE( 400)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Controls_obj,getDialogueName,return )

::String Controls_obj::getDialogueNameFromToken(::String token){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_410_getDialogueNameFromToken)
HXDLIN( 410)		::cpp::VirtualArray params = null();
HXDLIN( 410)		return this->getDialogueName(this->getActionFromControl(::Type_obj::createEnum(::hx::ClassOf< ::Control >(),token.toUpperCase(),params)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Controls_obj,getDialogueNameFromToken,return )

 ::flixel::input::actions::FlxActionDigital Controls_obj::getActionFromControl( ::Control control){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_415_getActionFromControl)
HXDLIN( 415)		switch((int)(control->_hx_getIndex())){
            			case (int)0: {
HXLINE( 417)				return this->_ui_up;
            			}
            			break;
            			case (int)1: {
HXLINE( 419)				return this->_ui_left;
            			}
            			break;
            			case (int)2: {
HXLINE( 420)				return this->_ui_right;
            			}
            			break;
            			case (int)3: {
HXLINE( 418)				return this->_ui_down;
            			}
            			break;
            			case (int)4: {
HXLINE( 421)				return this->_note_up;
            			}
            			break;
            			case (int)5: {
HXLINE( 423)				return this->_note_left;
            			}
            			break;
            			case (int)6: {
HXLINE( 424)				return this->_note_right;
            			}
            			break;
            			case (int)7: {
HXLINE( 422)				return this->_note_down;
            			}
            			break;
            			case (int)8: {
HXLINE( 428)				return this->_reset;
            			}
            			break;
            			case (int)9: {
HXLINE( 425)				return this->_accept;
            			}
            			break;
            			case (int)10: {
HXLINE( 426)				return this->_back;
            			}
            			break;
            			case (int)11: {
HXLINE( 427)				return this->_pause;
            			}
            			break;
            		}
HXLINE( 415)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Controls_obj,getActionFromControl,return )

void Controls_obj::forEachBound( ::Control control, ::Dynamic func){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_446_forEachBound)
HXDLIN( 446)		switch((int)(control->_hx_getIndex())){
            			case (int)0: {
HXLINE( 449)				func(this->_ui_up,1);
HXLINE( 450)				func(this->_ui_upP,2);
HXLINE( 451)				func(this->_ui_upR,-1);
            			}
            			break;
            			case (int)1: {
HXLINE( 453)				func(this->_ui_left,1);
HXLINE( 454)				func(this->_ui_leftP,2);
HXLINE( 455)				func(this->_ui_leftR,-1);
            			}
            			break;
            			case (int)2: {
HXLINE( 457)				func(this->_ui_right,1);
HXLINE( 458)				func(this->_ui_rightP,2);
HXLINE( 459)				func(this->_ui_rightR,-1);
            			}
            			break;
            			case (int)3: {
HXLINE( 461)				func(this->_ui_down,1);
HXLINE( 462)				func(this->_ui_downP,2);
HXLINE( 463)				func(this->_ui_downR,-1);
            			}
            			break;
            			case (int)4: {
HXLINE( 465)				func(this->_note_up,1);
HXLINE( 466)				func(this->_note_upP,2);
HXLINE( 467)				func(this->_note_upR,-1);
            			}
            			break;
            			case (int)5: {
HXLINE( 469)				func(this->_note_left,1);
HXLINE( 470)				func(this->_note_leftP,2);
HXLINE( 471)				func(this->_note_leftR,-1);
            			}
            			break;
            			case (int)6: {
HXLINE( 473)				func(this->_note_right,1);
HXLINE( 474)				func(this->_note_rightP,2);
HXLINE( 475)				func(this->_note_rightR,-1);
            			}
            			break;
            			case (int)7: {
HXLINE( 477)				func(this->_note_down,1);
HXLINE( 478)				func(this->_note_downP,2);
HXLINE( 479)				func(this->_note_downR,-1);
            			}
            			break;
            			case (int)8: {
HXLINE( 487)				func(this->_reset,2);
            			}
            			break;
            			case (int)9: {
HXLINE( 481)				func(this->_accept,2);
            			}
            			break;
            			case (int)10: {
HXLINE( 483)				func(this->_back,2);
            			}
            			break;
            			case (int)11: {
HXLINE( 485)				func(this->_pause,2);
            			}
            			break;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Controls_obj,forEachBound,(void))

void Controls_obj::replaceBinding( ::Control control, ::Device device, ::Dynamic toAdd, ::Dynamic toRemove){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_492_replaceBinding)
HXLINE( 493)		if (::hx::IsEq( toAdd,toRemove )) {
HXLINE( 494)			return;
            		}
HXLINE( 496)		switch((int)(device->_hx_getIndex())){
            			case (int)0: {
HXLINE( 499)				if (::hx::IsNotNull( toRemove )) {
HXLINE( 500)					this->unbindKeys(control,::Array_obj< int >::__new(1)->init(0,toRemove));
            				}
HXLINE( 501)				if (::hx::IsNotNull( toAdd )) {
HXLINE( 502)					this->bindKeys(control,::Array_obj< int >::__new(1)->init(0,toAdd));
            				}
            			}
            			break;
            			case (int)1: {
HXLINE( 504)				int id = device->_hx_getInt(0);
HXDLIN( 504)				{
HXLINE( 505)					if (::hx::IsNotNull( toRemove )) {
HXLINE( 506)						this->unbindButtons(control,id,::Array_obj< int >::__new(1)->init(0,toRemove));
            					}
HXLINE( 507)					if (::hx::IsNotNull( toAdd )) {
HXLINE( 508)						this->bindButtons(control,id,::Array_obj< int >::__new(1)->init(0,toAdd));
            					}
            				}
            			}
            			break;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(Controls_obj,replaceBinding,(void))

void Controls_obj::copyFrom( ::Controls controls, ::Device device){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_513_copyFrom)
HXLINE( 515)		{
HXLINE( 515)			::Dynamic map = controls->byName;
HXDLIN( 515)			::Dynamic _g_map = map;
HXDLIN( 515)			 ::Dynamic _g_keys = ::haxe::IMap_obj::keys(map);
HXDLIN( 515)			while(( (bool)(_g_keys->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 515)				::String key = ( (::String)(_g_keys->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN( 515)				 ::flixel::input::actions::FlxActionDigital _g1_value = ( ( ::flixel::input::actions::FlxActionDigital)(::haxe::IMap_obj::get(_g_map,key)) );
HXDLIN( 515)				::String _g1_key = key;
HXDLIN( 515)				::String name = _g1_key;
HXDLIN( 515)				 ::flixel::input::actions::FlxActionDigital action = _g1_value;
HXLINE( 517)				{
HXLINE( 517)					int _g = 0;
HXDLIN( 517)					::Array< ::Dynamic> _g1 = action->inputs;
HXDLIN( 517)					while((_g < _g1->length)){
HXLINE( 517)						 ::flixel::input::actions::FlxActionInput input = _g1->__get(_g).StaticCast<  ::flixel::input::actions::FlxActionInput >();
HXDLIN( 517)						_g = (_g + 1);
HXLINE( 519)						bool _hx_tmp;
HXDLIN( 519)						if (::hx::IsNotNull( device )) {
HXLINE( 519)							_hx_tmp = ::Controls_obj::isDevice(input,device);
            						}
            						else {
HXLINE( 519)							_hx_tmp = true;
            						}
HXDLIN( 519)						if (_hx_tmp) {
HXLINE( 520)							( ( ::flixel::input::actions::FlxActionDigital)(this->byName->get(name)) )->add(( ( ::flixel::input::actions::FlxActionInputDigital)(input) ));
            						}
            					}
            				}
            			}
            		}
HXLINE( 535)		if (::hx::IsNull( device )) {
HXLINE( 540)			{
HXLINE( 540)				int _g = 0;
HXDLIN( 540)				::Array< int > _g1 = controls->gamepadsAdded;
HXDLIN( 540)				while((_g < _g1->length)){
HXLINE( 540)					int gamepad = _g1->__get(_g);
HXDLIN( 540)					_g = (_g + 1);
HXLINE( 541)					if (!(this->gamepadsAdded->contains(gamepad))) {
HXLINE( 542)						this->gamepadsAdded->push(gamepad);
            					}
            				}
            			}
HXLINE( 549)			this->mergeKeyboardScheme(controls->keyboardScheme);
            		}
            		else {
HXLINE( 535)			switch((int)(device->_hx_getIndex())){
            				case (int)0: {
HXLINE( 554)					this->mergeKeyboardScheme(controls->keyboardScheme);
            				}
            				break;
            				case (int)1: {
HXLINE( 551)					int id = device->_hx_getInt(0);
HXLINE( 552)					this->gamepadsAdded->push(id);
            				}
            				break;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Controls_obj,copyFrom,(void))

void Controls_obj::copyTo( ::Controls controls, ::Device device){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_560_copyTo)
HXDLIN( 560)		controls->copyFrom(::hx::ObjectPtr<OBJ_>(this),device);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Controls_obj,copyTo,(void))

void Controls_obj::mergeKeyboardScheme( ::KeyboardScheme scheme){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_565_mergeKeyboardScheme)
HXDLIN( 565)		if (::hx::IsPointerNotEq( scheme,::KeyboardScheme_obj::None_dyn() )) {
HXLINE( 567)			if ((this->keyboardScheme->_hx_getIndex() == 2)) {
HXLINE( 570)				this->keyboardScheme = scheme;
            			}
            			else {
HXLINE( 572)				this->keyboardScheme = ::KeyboardScheme_obj::Custom_dyn();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Controls_obj,mergeKeyboardScheme,(void))

void Controls_obj::bindKeys( ::Control control,::Array< int > keys){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_582_bindKeys)
HXLINE( 583)		::Array< int > copyKeys = keys->copy();
HXLINE( 584)		{
HXLINE( 584)			int _g = 0;
HXDLIN( 584)			int _g1 = copyKeys->length;
HXDLIN( 584)			while((_g < _g1)){
HXLINE( 584)				_g = (_g + 1);
HXDLIN( 584)				int i = (_g - 1);
HXLINE( 585)				if ((i == -1)) {
HXLINE( 585)					copyKeys->remove(i);
            				}
            			}
            		}
HXLINE( 589)		switch((int)(control->_hx_getIndex())){
            			case (int)0: {
HXLINE( 589)				{
HXLINE( 589)					 ::flixel::input::actions::FlxActionDigital action = this->_ui_up;
HXDLIN( 589)					int state = 1;
HXDLIN( 589)					int _g = 0;
HXDLIN( 589)					while((_g < copyKeys->length)){
HXLINE( 589)						int key = copyKeys->__get(_g);
HXDLIN( 589)						_g = (_g + 1);
HXDLIN( 589)						if ((key != -1)) {
HXLINE( 589)							action->addKey(key,state);
            						}
            					}
            				}
HXDLIN( 589)				{
HXLINE( 589)					 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_upP;
HXDLIN( 589)					int state1 = 2;
HXDLIN( 589)					int _g1 = 0;
HXDLIN( 589)					while((_g1 < copyKeys->length)){
HXLINE( 589)						int key = copyKeys->__get(_g1);
HXDLIN( 589)						_g1 = (_g1 + 1);
HXDLIN( 589)						if ((key != -1)) {
HXLINE( 589)							action1->addKey(key,state1);
            						}
            					}
            				}
HXDLIN( 589)				{
HXLINE( 589)					 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_upR;
HXDLIN( 589)					int state2 = -1;
HXDLIN( 589)					int _g2 = 0;
HXDLIN( 589)					while((_g2 < copyKeys->length)){
HXLINE( 589)						int key = copyKeys->__get(_g2);
HXDLIN( 589)						_g2 = (_g2 + 1);
HXDLIN( 589)						if ((key != -1)) {
HXLINE( 589)							action2->addKey(key,state2);
            						}
            					}
            				}
            			}
            			break;
            			case (int)1: {
HXLINE( 589)				{
HXLINE( 589)					 ::flixel::input::actions::FlxActionDigital action = this->_ui_left;
HXDLIN( 589)					int state = 1;
HXDLIN( 589)					int _g = 0;
HXDLIN( 589)					while((_g < copyKeys->length)){
HXLINE( 589)						int key = copyKeys->__get(_g);
HXDLIN( 589)						_g = (_g + 1);
HXDLIN( 589)						if ((key != -1)) {
HXLINE( 589)							action->addKey(key,state);
            						}
            					}
            				}
HXDLIN( 589)				{
HXLINE( 589)					 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_leftP;
HXDLIN( 589)					int state1 = 2;
HXDLIN( 589)					int _g1 = 0;
HXDLIN( 589)					while((_g1 < copyKeys->length)){
HXLINE( 589)						int key = copyKeys->__get(_g1);
HXDLIN( 589)						_g1 = (_g1 + 1);
HXDLIN( 589)						if ((key != -1)) {
HXLINE( 589)							action1->addKey(key,state1);
            						}
            					}
            				}
HXDLIN( 589)				{
HXLINE( 589)					 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_leftR;
HXDLIN( 589)					int state2 = -1;
HXDLIN( 589)					int _g2 = 0;
HXDLIN( 589)					while((_g2 < copyKeys->length)){
HXLINE( 589)						int key = copyKeys->__get(_g2);
HXDLIN( 589)						_g2 = (_g2 + 1);
HXDLIN( 589)						if ((key != -1)) {
HXLINE( 589)							action2->addKey(key,state2);
            						}
            					}
            				}
            			}
            			break;
            			case (int)2: {
HXLINE( 589)				{
HXLINE( 589)					 ::flixel::input::actions::FlxActionDigital action = this->_ui_right;
HXDLIN( 589)					int state = 1;
HXDLIN( 589)					int _g = 0;
HXDLIN( 589)					while((_g < copyKeys->length)){
HXLINE( 589)						int key = copyKeys->__get(_g);
HXDLIN( 589)						_g = (_g + 1);
HXDLIN( 589)						if ((key != -1)) {
HXLINE( 589)							action->addKey(key,state);
            						}
            					}
            				}
HXDLIN( 589)				{
HXLINE( 589)					 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_rightP;
HXDLIN( 589)					int state1 = 2;
HXDLIN( 589)					int _g1 = 0;
HXDLIN( 589)					while((_g1 < copyKeys->length)){
HXLINE( 589)						int key = copyKeys->__get(_g1);
HXDLIN( 589)						_g1 = (_g1 + 1);
HXDLIN( 589)						if ((key != -1)) {
HXLINE( 589)							action1->addKey(key,state1);
            						}
            					}
            				}
HXDLIN( 589)				{
HXLINE( 589)					 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_rightR;
HXDLIN( 589)					int state2 = -1;
HXDLIN( 589)					int _g2 = 0;
HXDLIN( 589)					while((_g2 < copyKeys->length)){
HXLINE( 589)						int key = copyKeys->__get(_g2);
HXDLIN( 589)						_g2 = (_g2 + 1);
HXDLIN( 589)						if ((key != -1)) {
HXLINE( 589)							action2->addKey(key,state2);
            						}
            					}
            				}
            			}
            			break;
            			case (int)3: {
HXLINE( 589)				{
HXLINE( 589)					 ::flixel::input::actions::FlxActionDigital action = this->_ui_down;
HXDLIN( 589)					int state = 1;
HXDLIN( 589)					int _g = 0;
HXDLIN( 589)					while((_g < copyKeys->length)){
HXLINE( 589)						int key = copyKeys->__get(_g);
HXDLIN( 589)						_g = (_g + 1);
HXDLIN( 589)						if ((key != -1)) {
HXLINE( 589)							action->addKey(key,state);
            						}
            					}
            				}
HXDLIN( 589)				{
HXLINE( 589)					 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_downP;
HXDLIN( 589)					int state1 = 2;
HXDLIN( 589)					int _g1 = 0;
HXDLIN( 589)					while((_g1 < copyKeys->length)){
HXLINE( 589)						int key = copyKeys->__get(_g1);
HXDLIN( 589)						_g1 = (_g1 + 1);
HXDLIN( 589)						if ((key != -1)) {
HXLINE( 589)							action1->addKey(key,state1);
            						}
            					}
            				}
HXDLIN( 589)				{
HXLINE( 589)					 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_downR;
HXDLIN( 589)					int state2 = -1;
HXDLIN( 589)					int _g2 = 0;
HXDLIN( 589)					while((_g2 < copyKeys->length)){
HXLINE( 589)						int key = copyKeys->__get(_g2);
HXDLIN( 589)						_g2 = (_g2 + 1);
HXDLIN( 589)						if ((key != -1)) {
HXLINE( 589)							action2->addKey(key,state2);
            						}
            					}
            				}
            			}
            			break;
            			case (int)4: {
HXLINE( 589)				{
HXLINE( 589)					 ::flixel::input::actions::FlxActionDigital action = this->_note_up;
HXDLIN( 589)					int state = 1;
HXDLIN( 589)					int _g = 0;
HXDLIN( 589)					while((_g < copyKeys->length)){
HXLINE( 589)						int key = copyKeys->__get(_g);
HXDLIN( 589)						_g = (_g + 1);
HXDLIN( 589)						if ((key != -1)) {
HXLINE( 589)							action->addKey(key,state);
            						}
            					}
            				}
HXDLIN( 589)				{
HXLINE( 589)					 ::flixel::input::actions::FlxActionDigital action1 = this->_note_upP;
HXDLIN( 589)					int state1 = 2;
HXDLIN( 589)					int _g1 = 0;
HXDLIN( 589)					while((_g1 < copyKeys->length)){
HXLINE( 589)						int key = copyKeys->__get(_g1);
HXDLIN( 589)						_g1 = (_g1 + 1);
HXDLIN( 589)						if ((key != -1)) {
HXLINE( 589)							action1->addKey(key,state1);
            						}
            					}
            				}
HXDLIN( 589)				{
HXLINE( 589)					 ::flixel::input::actions::FlxActionDigital action2 = this->_note_upR;
HXDLIN( 589)					int state2 = -1;
HXDLIN( 589)					int _g2 = 0;
HXDLIN( 589)					while((_g2 < copyKeys->length)){
HXLINE( 589)						int key = copyKeys->__get(_g2);
HXDLIN( 589)						_g2 = (_g2 + 1);
HXDLIN( 589)						if ((key != -1)) {
HXLINE( 589)							action2->addKey(key,state2);
            						}
            					}
            				}
            			}
            			break;
            			case (int)5: {
HXLINE( 589)				{
HXLINE( 589)					 ::flixel::input::actions::FlxActionDigital action = this->_note_left;
HXDLIN( 589)					int state = 1;
HXDLIN( 589)					int _g = 0;
HXDLIN( 589)					while((_g < copyKeys->length)){
HXLINE( 589)						int key = copyKeys->__get(_g);
HXDLIN( 589)						_g = (_g + 1);
HXDLIN( 589)						if ((key != -1)) {
HXLINE( 589)							action->addKey(key,state);
            						}
            					}
            				}
HXDLIN( 589)				{
HXLINE( 589)					 ::flixel::input::actions::FlxActionDigital action1 = this->_note_leftP;
HXDLIN( 589)					int state1 = 2;
HXDLIN( 589)					int _g1 = 0;
HXDLIN( 589)					while((_g1 < copyKeys->length)){
HXLINE( 589)						int key = copyKeys->__get(_g1);
HXDLIN( 589)						_g1 = (_g1 + 1);
HXDLIN( 589)						if ((key != -1)) {
HXLINE( 589)							action1->addKey(key,state1);
            						}
            					}
            				}
HXDLIN( 589)				{
HXLINE( 589)					 ::flixel::input::actions::FlxActionDigital action2 = this->_note_leftR;
HXDLIN( 589)					int state2 = -1;
HXDLIN( 589)					int _g2 = 0;
HXDLIN( 589)					while((_g2 < copyKeys->length)){
HXLINE( 589)						int key = copyKeys->__get(_g2);
HXDLIN( 589)						_g2 = (_g2 + 1);
HXDLIN( 589)						if ((key != -1)) {
HXLINE( 589)							action2->addKey(key,state2);
            						}
            					}
            				}
            			}
            			break;
            			case (int)6: {
HXLINE( 589)				{
HXLINE( 589)					 ::flixel::input::actions::FlxActionDigital action = this->_note_right;
HXDLIN( 589)					int state = 1;
HXDLIN( 589)					int _g = 0;
HXDLIN( 589)					while((_g < copyKeys->length)){
HXLINE( 589)						int key = copyKeys->__get(_g);
HXDLIN( 589)						_g = (_g + 1);
HXDLIN( 589)						if ((key != -1)) {
HXLINE( 589)							action->addKey(key,state);
            						}
            					}
            				}
HXDLIN( 589)				{
HXLINE( 589)					 ::flixel::input::actions::FlxActionDigital action1 = this->_note_rightP;
HXDLIN( 589)					int state1 = 2;
HXDLIN( 589)					int _g1 = 0;
HXDLIN( 589)					while((_g1 < copyKeys->length)){
HXLINE( 589)						int key = copyKeys->__get(_g1);
HXDLIN( 589)						_g1 = (_g1 + 1);
HXDLIN( 589)						if ((key != -1)) {
HXLINE( 589)							action1->addKey(key,state1);
            						}
            					}
            				}
HXDLIN( 589)				{
HXLINE( 589)					 ::flixel::input::actions::FlxActionDigital action2 = this->_note_rightR;
HXDLIN( 589)					int state2 = -1;
HXDLIN( 589)					int _g2 = 0;
HXDLIN( 589)					while((_g2 < copyKeys->length)){
HXLINE( 589)						int key = copyKeys->__get(_g2);
HXDLIN( 589)						_g2 = (_g2 + 1);
HXDLIN( 589)						if ((key != -1)) {
HXLINE( 589)							action2->addKey(key,state2);
            						}
            					}
            				}
            			}
            			break;
            			case (int)7: {
HXLINE( 589)				{
HXLINE( 589)					 ::flixel::input::actions::FlxActionDigital action = this->_note_down;
HXDLIN( 589)					int state = 1;
HXDLIN( 589)					int _g = 0;
HXDLIN( 589)					while((_g < copyKeys->length)){
HXLINE( 589)						int key = copyKeys->__get(_g);
HXDLIN( 589)						_g = (_g + 1);
HXDLIN( 589)						if ((key != -1)) {
HXLINE( 589)							action->addKey(key,state);
            						}
            					}
            				}
HXDLIN( 589)				{
HXLINE( 589)					 ::flixel::input::actions::FlxActionDigital action1 = this->_note_downP;
HXDLIN( 589)					int state1 = 2;
HXDLIN( 589)					int _g1 = 0;
HXDLIN( 589)					while((_g1 < copyKeys->length)){
HXLINE( 589)						int key = copyKeys->__get(_g1);
HXDLIN( 589)						_g1 = (_g1 + 1);
HXDLIN( 589)						if ((key != -1)) {
HXLINE( 589)							action1->addKey(key,state1);
            						}
            					}
            				}
HXDLIN( 589)				{
HXLINE( 589)					 ::flixel::input::actions::FlxActionDigital action2 = this->_note_downR;
HXDLIN( 589)					int state2 = -1;
HXDLIN( 589)					int _g2 = 0;
HXDLIN( 589)					while((_g2 < copyKeys->length)){
HXLINE( 589)						int key = copyKeys->__get(_g2);
HXDLIN( 589)						_g2 = (_g2 + 1);
HXDLIN( 589)						if ((key != -1)) {
HXLINE( 589)							action2->addKey(key,state2);
            						}
            					}
            				}
            			}
            			break;
            			case (int)8: {
HXLINE( 589)				 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 589)				int state = 2;
HXDLIN( 589)				int _g = 0;
HXDLIN( 589)				while((_g < copyKeys->length)){
HXLINE( 589)					int key = copyKeys->__get(_g);
HXDLIN( 589)					_g = (_g + 1);
HXDLIN( 589)					if ((key != -1)) {
HXLINE( 589)						action->addKey(key,state);
            					}
            				}
            			}
            			break;
            			case (int)9: {
HXLINE( 589)				 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 589)				int state = 2;
HXDLIN( 589)				int _g = 0;
HXDLIN( 589)				while((_g < copyKeys->length)){
HXLINE( 589)					int key = copyKeys->__get(_g);
HXDLIN( 589)					_g = (_g + 1);
HXDLIN( 589)					if ((key != -1)) {
HXLINE( 589)						action->addKey(key,state);
            					}
            				}
            			}
            			break;
            			case (int)10: {
HXLINE( 589)				 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 589)				int state = 2;
HXDLIN( 589)				int _g = 0;
HXDLIN( 589)				while((_g < copyKeys->length)){
HXLINE( 589)					int key = copyKeys->__get(_g);
HXDLIN( 589)					_g = (_g + 1);
HXDLIN( 589)					if ((key != -1)) {
HXLINE( 589)						action->addKey(key,state);
            					}
            				}
            			}
            			break;
            			case (int)11: {
HXLINE( 589)				 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 589)				int state = 2;
HXDLIN( 589)				int _g = 0;
HXDLIN( 589)				while((_g < copyKeys->length)){
HXLINE( 589)					int key = copyKeys->__get(_g);
HXDLIN( 589)					_g = (_g + 1);
HXDLIN( 589)					if ((key != -1)) {
HXLINE( 589)						action->addKey(key,state);
            					}
            				}
            			}
            			break;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Controls_obj,bindKeys,(void))

void Controls_obj::unbindKeys( ::Control control,::Array< int > keys){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_600_unbindKeys)
HXLINE( 601)		::Array< int > copyKeys = keys->copy();
HXLINE( 602)		{
HXLINE( 602)			int _g = 0;
HXDLIN( 602)			int _g1 = copyKeys->length;
HXDLIN( 602)			while((_g < _g1)){
HXLINE( 602)				_g = (_g + 1);
HXDLIN( 602)				int i = (_g - 1);
HXLINE( 603)				if ((i == -1)) {
HXLINE( 603)					copyKeys->remove(i);
            				}
            			}
            		}
HXLINE( 607)		switch((int)(control->_hx_getIndex())){
            			case (int)0: {
HXLINE( 607)				::Controls_obj::removeKeys(this->_ui_up,copyKeys);
HXDLIN( 607)				::Controls_obj::removeKeys(this->_ui_upP,copyKeys);
HXDLIN( 607)				::Controls_obj::removeKeys(this->_ui_upR,copyKeys);
            			}
            			break;
            			case (int)1: {
HXLINE( 607)				::Controls_obj::removeKeys(this->_ui_left,copyKeys);
HXDLIN( 607)				::Controls_obj::removeKeys(this->_ui_leftP,copyKeys);
HXDLIN( 607)				::Controls_obj::removeKeys(this->_ui_leftR,copyKeys);
            			}
            			break;
            			case (int)2: {
HXLINE( 607)				::Controls_obj::removeKeys(this->_ui_right,copyKeys);
HXDLIN( 607)				::Controls_obj::removeKeys(this->_ui_rightP,copyKeys);
HXDLIN( 607)				::Controls_obj::removeKeys(this->_ui_rightR,copyKeys);
            			}
            			break;
            			case (int)3: {
HXLINE( 607)				::Controls_obj::removeKeys(this->_ui_down,copyKeys);
HXDLIN( 607)				::Controls_obj::removeKeys(this->_ui_downP,copyKeys);
HXDLIN( 607)				::Controls_obj::removeKeys(this->_ui_downR,copyKeys);
            			}
            			break;
            			case (int)4: {
HXLINE( 607)				::Controls_obj::removeKeys(this->_note_up,copyKeys);
HXDLIN( 607)				::Controls_obj::removeKeys(this->_note_upP,copyKeys);
HXDLIN( 607)				::Controls_obj::removeKeys(this->_note_upR,copyKeys);
            			}
            			break;
            			case (int)5: {
HXLINE( 607)				::Controls_obj::removeKeys(this->_note_left,copyKeys);
HXDLIN( 607)				::Controls_obj::removeKeys(this->_note_leftP,copyKeys);
HXDLIN( 607)				::Controls_obj::removeKeys(this->_note_leftR,copyKeys);
            			}
            			break;
            			case (int)6: {
HXLINE( 607)				::Controls_obj::removeKeys(this->_note_right,copyKeys);
HXDLIN( 607)				::Controls_obj::removeKeys(this->_note_rightP,copyKeys);
HXDLIN( 607)				::Controls_obj::removeKeys(this->_note_rightR,copyKeys);
            			}
            			break;
            			case (int)7: {
HXLINE( 607)				::Controls_obj::removeKeys(this->_note_down,copyKeys);
HXDLIN( 607)				::Controls_obj::removeKeys(this->_note_downP,copyKeys);
HXDLIN( 607)				::Controls_obj::removeKeys(this->_note_downR,copyKeys);
            			}
            			break;
            			case (int)8: {
HXLINE( 607)				::Controls_obj::removeKeys(this->_reset,copyKeys);
            			}
            			break;
            			case (int)9: {
HXLINE( 607)				::Controls_obj::removeKeys(this->_accept,copyKeys);
            			}
            			break;
            			case (int)10: {
HXLINE( 607)				::Controls_obj::removeKeys(this->_back,copyKeys);
            			}
            			break;
            			case (int)11: {
HXLINE( 607)				::Controls_obj::removeKeys(this->_pause,copyKeys);
            			}
            			break;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Controls_obj,unbindKeys,(void))

void Controls_obj::setKeyboardScheme( ::KeyboardScheme scheme,::hx::Null< bool >  __o_reset){
            		bool reset = __o_reset.Default(true);
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_632_setKeyboardScheme)
HXLINE( 633)		if (reset) {
HXLINE( 634)			this->removeKeyboard();
            		}
HXLINE( 636)		this->keyboardScheme = scheme;
HXLINE( 637)		 ::haxe::ds::StringMap keysMap = ::ClientPrefs_obj::keyBinds;
HXLINE( 640)		switch((int)(scheme->_hx_getIndex())){
            			case (int)0: {
HXLINE( 643)				{
HXLINE( 643)					::Array< int > copyKeys = ( (::Array< int >)(keysMap->get(HX_("ui_up",a6,c2,91,a3))) )->copy();
HXDLIN( 643)					{
HXLINE( 643)						int _g = 0;
HXDLIN( 643)						int _g1 = copyKeys->length;
HXDLIN( 643)						while((_g < _g1)){
HXLINE( 643)							_g = (_g + 1);
HXDLIN( 643)							int i = (_g - 1);
HXDLIN( 643)							if ((i == -1)) {
HXLINE( 643)								copyKeys->remove(i);
            							}
            						}
            					}
HXDLIN( 643)					switch((int)(::Control_obj::UI_UP_dyn()->_hx_getIndex())){
            						case (int)0: {
HXLINE( 643)							{
HXLINE( 643)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_up;
HXDLIN( 643)								int state = 1;
HXDLIN( 643)								int _g = 0;
HXDLIN( 643)								while((_g < copyKeys->length)){
HXLINE( 643)									int key = copyKeys->__get(_g);
HXDLIN( 643)									_g = (_g + 1);
HXDLIN( 643)									if ((key != -1)) {
HXLINE( 643)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 643)							{
HXLINE( 643)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_upP;
HXDLIN( 643)								int state1 = 2;
HXDLIN( 643)								int _g1 = 0;
HXDLIN( 643)								while((_g1 < copyKeys->length)){
HXLINE( 643)									int key = copyKeys->__get(_g1);
HXDLIN( 643)									_g1 = (_g1 + 1);
HXDLIN( 643)									if ((key != -1)) {
HXLINE( 643)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 643)							{
HXLINE( 643)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_upR;
HXDLIN( 643)								int state2 = -1;
HXDLIN( 643)								int _g2 = 0;
HXDLIN( 643)								while((_g2 < copyKeys->length)){
HXLINE( 643)									int key = copyKeys->__get(_g2);
HXDLIN( 643)									_g2 = (_g2 + 1);
HXDLIN( 643)									if ((key != -1)) {
HXLINE( 643)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)1: {
HXLINE( 643)							{
HXLINE( 643)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_left;
HXDLIN( 643)								int state = 1;
HXDLIN( 643)								int _g = 0;
HXDLIN( 643)								while((_g < copyKeys->length)){
HXLINE( 643)									int key = copyKeys->__get(_g);
HXDLIN( 643)									_g = (_g + 1);
HXDLIN( 643)									if ((key != -1)) {
HXLINE( 643)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 643)							{
HXLINE( 643)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_leftP;
HXDLIN( 643)								int state1 = 2;
HXDLIN( 643)								int _g1 = 0;
HXDLIN( 643)								while((_g1 < copyKeys->length)){
HXLINE( 643)									int key = copyKeys->__get(_g1);
HXDLIN( 643)									_g1 = (_g1 + 1);
HXDLIN( 643)									if ((key != -1)) {
HXLINE( 643)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 643)							{
HXLINE( 643)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_leftR;
HXDLIN( 643)								int state2 = -1;
HXDLIN( 643)								int _g2 = 0;
HXDLIN( 643)								while((_g2 < copyKeys->length)){
HXLINE( 643)									int key = copyKeys->__get(_g2);
HXDLIN( 643)									_g2 = (_g2 + 1);
HXDLIN( 643)									if ((key != -1)) {
HXLINE( 643)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)2: {
HXLINE( 643)							{
HXLINE( 643)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_right;
HXDLIN( 643)								int state = 1;
HXDLIN( 643)								int _g = 0;
HXDLIN( 643)								while((_g < copyKeys->length)){
HXLINE( 643)									int key = copyKeys->__get(_g);
HXDLIN( 643)									_g = (_g + 1);
HXDLIN( 643)									if ((key != -1)) {
HXLINE( 643)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 643)							{
HXLINE( 643)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_rightP;
HXDLIN( 643)								int state1 = 2;
HXDLIN( 643)								int _g1 = 0;
HXDLIN( 643)								while((_g1 < copyKeys->length)){
HXLINE( 643)									int key = copyKeys->__get(_g1);
HXDLIN( 643)									_g1 = (_g1 + 1);
HXDLIN( 643)									if ((key != -1)) {
HXLINE( 643)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 643)							{
HXLINE( 643)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_rightR;
HXDLIN( 643)								int state2 = -1;
HXDLIN( 643)								int _g2 = 0;
HXDLIN( 643)								while((_g2 < copyKeys->length)){
HXLINE( 643)									int key = copyKeys->__get(_g2);
HXDLIN( 643)									_g2 = (_g2 + 1);
HXDLIN( 643)									if ((key != -1)) {
HXLINE( 643)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)3: {
HXLINE( 643)							{
HXLINE( 643)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_down;
HXDLIN( 643)								int state = 1;
HXDLIN( 643)								int _g = 0;
HXDLIN( 643)								while((_g < copyKeys->length)){
HXLINE( 643)									int key = copyKeys->__get(_g);
HXDLIN( 643)									_g = (_g + 1);
HXDLIN( 643)									if ((key != -1)) {
HXLINE( 643)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 643)							{
HXLINE( 643)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_downP;
HXDLIN( 643)								int state1 = 2;
HXDLIN( 643)								int _g1 = 0;
HXDLIN( 643)								while((_g1 < copyKeys->length)){
HXLINE( 643)									int key = copyKeys->__get(_g1);
HXDLIN( 643)									_g1 = (_g1 + 1);
HXDLIN( 643)									if ((key != -1)) {
HXLINE( 643)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 643)							{
HXLINE( 643)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_downR;
HXDLIN( 643)								int state2 = -1;
HXDLIN( 643)								int _g2 = 0;
HXDLIN( 643)								while((_g2 < copyKeys->length)){
HXLINE( 643)									int key = copyKeys->__get(_g2);
HXDLIN( 643)									_g2 = (_g2 + 1);
HXDLIN( 643)									if ((key != -1)) {
HXLINE( 643)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)4: {
HXLINE( 643)							{
HXLINE( 643)								 ::flixel::input::actions::FlxActionDigital action = this->_note_up;
HXDLIN( 643)								int state = 1;
HXDLIN( 643)								int _g = 0;
HXDLIN( 643)								while((_g < copyKeys->length)){
HXLINE( 643)									int key = copyKeys->__get(_g);
HXDLIN( 643)									_g = (_g + 1);
HXDLIN( 643)									if ((key != -1)) {
HXLINE( 643)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 643)							{
HXLINE( 643)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_upP;
HXDLIN( 643)								int state1 = 2;
HXDLIN( 643)								int _g1 = 0;
HXDLIN( 643)								while((_g1 < copyKeys->length)){
HXLINE( 643)									int key = copyKeys->__get(_g1);
HXDLIN( 643)									_g1 = (_g1 + 1);
HXDLIN( 643)									if ((key != -1)) {
HXLINE( 643)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 643)							{
HXLINE( 643)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_upR;
HXDLIN( 643)								int state2 = -1;
HXDLIN( 643)								int _g2 = 0;
HXDLIN( 643)								while((_g2 < copyKeys->length)){
HXLINE( 643)									int key = copyKeys->__get(_g2);
HXDLIN( 643)									_g2 = (_g2 + 1);
HXDLIN( 643)									if ((key != -1)) {
HXLINE( 643)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)5: {
HXLINE( 643)							{
HXLINE( 643)								 ::flixel::input::actions::FlxActionDigital action = this->_note_left;
HXDLIN( 643)								int state = 1;
HXDLIN( 643)								int _g = 0;
HXDLIN( 643)								while((_g < copyKeys->length)){
HXLINE( 643)									int key = copyKeys->__get(_g);
HXDLIN( 643)									_g = (_g + 1);
HXDLIN( 643)									if ((key != -1)) {
HXLINE( 643)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 643)							{
HXLINE( 643)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_leftP;
HXDLIN( 643)								int state1 = 2;
HXDLIN( 643)								int _g1 = 0;
HXDLIN( 643)								while((_g1 < copyKeys->length)){
HXLINE( 643)									int key = copyKeys->__get(_g1);
HXDLIN( 643)									_g1 = (_g1 + 1);
HXDLIN( 643)									if ((key != -1)) {
HXLINE( 643)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 643)							{
HXLINE( 643)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_leftR;
HXDLIN( 643)								int state2 = -1;
HXDLIN( 643)								int _g2 = 0;
HXDLIN( 643)								while((_g2 < copyKeys->length)){
HXLINE( 643)									int key = copyKeys->__get(_g2);
HXDLIN( 643)									_g2 = (_g2 + 1);
HXDLIN( 643)									if ((key != -1)) {
HXLINE( 643)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)6: {
HXLINE( 643)							{
HXLINE( 643)								 ::flixel::input::actions::FlxActionDigital action = this->_note_right;
HXDLIN( 643)								int state = 1;
HXDLIN( 643)								int _g = 0;
HXDLIN( 643)								while((_g < copyKeys->length)){
HXLINE( 643)									int key = copyKeys->__get(_g);
HXDLIN( 643)									_g = (_g + 1);
HXDLIN( 643)									if ((key != -1)) {
HXLINE( 643)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 643)							{
HXLINE( 643)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_rightP;
HXDLIN( 643)								int state1 = 2;
HXDLIN( 643)								int _g1 = 0;
HXDLIN( 643)								while((_g1 < copyKeys->length)){
HXLINE( 643)									int key = copyKeys->__get(_g1);
HXDLIN( 643)									_g1 = (_g1 + 1);
HXDLIN( 643)									if ((key != -1)) {
HXLINE( 643)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 643)							{
HXLINE( 643)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_rightR;
HXDLIN( 643)								int state2 = -1;
HXDLIN( 643)								int _g2 = 0;
HXDLIN( 643)								while((_g2 < copyKeys->length)){
HXLINE( 643)									int key = copyKeys->__get(_g2);
HXDLIN( 643)									_g2 = (_g2 + 1);
HXDLIN( 643)									if ((key != -1)) {
HXLINE( 643)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)7: {
HXLINE( 643)							{
HXLINE( 643)								 ::flixel::input::actions::FlxActionDigital action = this->_note_down;
HXDLIN( 643)								int state = 1;
HXDLIN( 643)								int _g = 0;
HXDLIN( 643)								while((_g < copyKeys->length)){
HXLINE( 643)									int key = copyKeys->__get(_g);
HXDLIN( 643)									_g = (_g + 1);
HXDLIN( 643)									if ((key != -1)) {
HXLINE( 643)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 643)							{
HXLINE( 643)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_downP;
HXDLIN( 643)								int state1 = 2;
HXDLIN( 643)								int _g1 = 0;
HXDLIN( 643)								while((_g1 < copyKeys->length)){
HXLINE( 643)									int key = copyKeys->__get(_g1);
HXDLIN( 643)									_g1 = (_g1 + 1);
HXDLIN( 643)									if ((key != -1)) {
HXLINE( 643)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 643)							{
HXLINE( 643)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_downR;
HXDLIN( 643)								int state2 = -1;
HXDLIN( 643)								int _g2 = 0;
HXDLIN( 643)								while((_g2 < copyKeys->length)){
HXLINE( 643)									int key = copyKeys->__get(_g2);
HXDLIN( 643)									_g2 = (_g2 + 1);
HXDLIN( 643)									if ((key != -1)) {
HXLINE( 643)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)8: {
HXLINE( 643)							 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 643)							int state = 2;
HXDLIN( 643)							int _g = 0;
HXDLIN( 643)							while((_g < copyKeys->length)){
HXLINE( 643)								int key = copyKeys->__get(_g);
HXDLIN( 643)								_g = (_g + 1);
HXDLIN( 643)								if ((key != -1)) {
HXLINE( 643)									action->addKey(key,state);
            								}
            							}
            						}
            						break;
            						case (int)9: {
HXLINE( 643)							 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 643)							int state = 2;
HXDLIN( 643)							int _g = 0;
HXDLIN( 643)							while((_g < copyKeys->length)){
HXLINE( 643)								int key = copyKeys->__get(_g);
HXDLIN( 643)								_g = (_g + 1);
HXDLIN( 643)								if ((key != -1)) {
HXLINE( 643)									action->addKey(key,state);
            								}
            							}
            						}
            						break;
            						case (int)10: {
HXLINE( 643)							 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 643)							int state = 2;
HXDLIN( 643)							int _g = 0;
HXDLIN( 643)							while((_g < copyKeys->length)){
HXLINE( 643)								int key = copyKeys->__get(_g);
HXDLIN( 643)								_g = (_g + 1);
HXDLIN( 643)								if ((key != -1)) {
HXLINE( 643)									action->addKey(key,state);
            								}
            							}
            						}
            						break;
            						case (int)11: {
HXLINE( 643)							 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 643)							int state = 2;
HXDLIN( 643)							int _g = 0;
HXDLIN( 643)							while((_g < copyKeys->length)){
HXLINE( 643)								int key = copyKeys->__get(_g);
HXDLIN( 643)								_g = (_g + 1);
HXDLIN( 643)								if ((key != -1)) {
HXLINE( 643)									action->addKey(key,state);
            								}
            							}
            						}
            						break;
            					}
            				}
HXLINE( 644)				{
HXLINE( 644)					::Array< int > copyKeys1 = ( (::Array< int >)(keysMap->get(HX_("ui_down",6d,3d,47,f2))) )->copy();
HXDLIN( 644)					{
HXLINE( 644)						int _g2 = 0;
HXDLIN( 644)						int _g3 = copyKeys1->length;
HXDLIN( 644)						while((_g2 < _g3)){
HXLINE( 644)							_g2 = (_g2 + 1);
HXDLIN( 644)							int i = (_g2 - 1);
HXDLIN( 644)							if ((i == -1)) {
HXLINE( 644)								copyKeys1->remove(i);
            							}
            						}
            					}
HXDLIN( 644)					switch((int)(::Control_obj::UI_DOWN_dyn()->_hx_getIndex())){
            						case (int)0: {
HXLINE( 644)							{
HXLINE( 644)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_up;
HXDLIN( 644)								int state = 1;
HXDLIN( 644)								int _g = 0;
HXDLIN( 644)								while((_g < copyKeys1->length)){
HXLINE( 644)									int key = copyKeys1->__get(_g);
HXDLIN( 644)									_g = (_g + 1);
HXDLIN( 644)									if ((key != -1)) {
HXLINE( 644)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 644)							{
HXLINE( 644)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_upP;
HXDLIN( 644)								int state1 = 2;
HXDLIN( 644)								int _g1 = 0;
HXDLIN( 644)								while((_g1 < copyKeys1->length)){
HXLINE( 644)									int key = copyKeys1->__get(_g1);
HXDLIN( 644)									_g1 = (_g1 + 1);
HXDLIN( 644)									if ((key != -1)) {
HXLINE( 644)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 644)							{
HXLINE( 644)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_upR;
HXDLIN( 644)								int state2 = -1;
HXDLIN( 644)								int _g2 = 0;
HXDLIN( 644)								while((_g2 < copyKeys1->length)){
HXLINE( 644)									int key = copyKeys1->__get(_g2);
HXDLIN( 644)									_g2 = (_g2 + 1);
HXDLIN( 644)									if ((key != -1)) {
HXLINE( 644)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)1: {
HXLINE( 644)							{
HXLINE( 644)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_left;
HXDLIN( 644)								int state = 1;
HXDLIN( 644)								int _g = 0;
HXDLIN( 644)								while((_g < copyKeys1->length)){
HXLINE( 644)									int key = copyKeys1->__get(_g);
HXDLIN( 644)									_g = (_g + 1);
HXDLIN( 644)									if ((key != -1)) {
HXLINE( 644)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 644)							{
HXLINE( 644)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_leftP;
HXDLIN( 644)								int state1 = 2;
HXDLIN( 644)								int _g1 = 0;
HXDLIN( 644)								while((_g1 < copyKeys1->length)){
HXLINE( 644)									int key = copyKeys1->__get(_g1);
HXDLIN( 644)									_g1 = (_g1 + 1);
HXDLIN( 644)									if ((key != -1)) {
HXLINE( 644)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 644)							{
HXLINE( 644)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_leftR;
HXDLIN( 644)								int state2 = -1;
HXDLIN( 644)								int _g2 = 0;
HXDLIN( 644)								while((_g2 < copyKeys1->length)){
HXLINE( 644)									int key = copyKeys1->__get(_g2);
HXDLIN( 644)									_g2 = (_g2 + 1);
HXDLIN( 644)									if ((key != -1)) {
HXLINE( 644)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)2: {
HXLINE( 644)							{
HXLINE( 644)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_right;
HXDLIN( 644)								int state = 1;
HXDLIN( 644)								int _g = 0;
HXDLIN( 644)								while((_g < copyKeys1->length)){
HXLINE( 644)									int key = copyKeys1->__get(_g);
HXDLIN( 644)									_g = (_g + 1);
HXDLIN( 644)									if ((key != -1)) {
HXLINE( 644)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 644)							{
HXLINE( 644)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_rightP;
HXDLIN( 644)								int state1 = 2;
HXDLIN( 644)								int _g1 = 0;
HXDLIN( 644)								while((_g1 < copyKeys1->length)){
HXLINE( 644)									int key = copyKeys1->__get(_g1);
HXDLIN( 644)									_g1 = (_g1 + 1);
HXDLIN( 644)									if ((key != -1)) {
HXLINE( 644)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 644)							{
HXLINE( 644)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_rightR;
HXDLIN( 644)								int state2 = -1;
HXDLIN( 644)								int _g2 = 0;
HXDLIN( 644)								while((_g2 < copyKeys1->length)){
HXLINE( 644)									int key = copyKeys1->__get(_g2);
HXDLIN( 644)									_g2 = (_g2 + 1);
HXDLIN( 644)									if ((key != -1)) {
HXLINE( 644)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)3: {
HXLINE( 644)							{
HXLINE( 644)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_down;
HXDLIN( 644)								int state = 1;
HXDLIN( 644)								int _g = 0;
HXDLIN( 644)								while((_g < copyKeys1->length)){
HXLINE( 644)									int key = copyKeys1->__get(_g);
HXDLIN( 644)									_g = (_g + 1);
HXDLIN( 644)									if ((key != -1)) {
HXLINE( 644)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 644)							{
HXLINE( 644)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_downP;
HXDLIN( 644)								int state1 = 2;
HXDLIN( 644)								int _g1 = 0;
HXDLIN( 644)								while((_g1 < copyKeys1->length)){
HXLINE( 644)									int key = copyKeys1->__get(_g1);
HXDLIN( 644)									_g1 = (_g1 + 1);
HXDLIN( 644)									if ((key != -1)) {
HXLINE( 644)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 644)							{
HXLINE( 644)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_downR;
HXDLIN( 644)								int state2 = -1;
HXDLIN( 644)								int _g2 = 0;
HXDLIN( 644)								while((_g2 < copyKeys1->length)){
HXLINE( 644)									int key = copyKeys1->__get(_g2);
HXDLIN( 644)									_g2 = (_g2 + 1);
HXDLIN( 644)									if ((key != -1)) {
HXLINE( 644)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)4: {
HXLINE( 644)							{
HXLINE( 644)								 ::flixel::input::actions::FlxActionDigital action = this->_note_up;
HXDLIN( 644)								int state = 1;
HXDLIN( 644)								int _g = 0;
HXDLIN( 644)								while((_g < copyKeys1->length)){
HXLINE( 644)									int key = copyKeys1->__get(_g);
HXDLIN( 644)									_g = (_g + 1);
HXDLIN( 644)									if ((key != -1)) {
HXLINE( 644)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 644)							{
HXLINE( 644)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_upP;
HXDLIN( 644)								int state1 = 2;
HXDLIN( 644)								int _g1 = 0;
HXDLIN( 644)								while((_g1 < copyKeys1->length)){
HXLINE( 644)									int key = copyKeys1->__get(_g1);
HXDLIN( 644)									_g1 = (_g1 + 1);
HXDLIN( 644)									if ((key != -1)) {
HXLINE( 644)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 644)							{
HXLINE( 644)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_upR;
HXDLIN( 644)								int state2 = -1;
HXDLIN( 644)								int _g2 = 0;
HXDLIN( 644)								while((_g2 < copyKeys1->length)){
HXLINE( 644)									int key = copyKeys1->__get(_g2);
HXDLIN( 644)									_g2 = (_g2 + 1);
HXDLIN( 644)									if ((key != -1)) {
HXLINE( 644)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)5: {
HXLINE( 644)							{
HXLINE( 644)								 ::flixel::input::actions::FlxActionDigital action = this->_note_left;
HXDLIN( 644)								int state = 1;
HXDLIN( 644)								int _g = 0;
HXDLIN( 644)								while((_g < copyKeys1->length)){
HXLINE( 644)									int key = copyKeys1->__get(_g);
HXDLIN( 644)									_g = (_g + 1);
HXDLIN( 644)									if ((key != -1)) {
HXLINE( 644)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 644)							{
HXLINE( 644)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_leftP;
HXDLIN( 644)								int state1 = 2;
HXDLIN( 644)								int _g1 = 0;
HXDLIN( 644)								while((_g1 < copyKeys1->length)){
HXLINE( 644)									int key = copyKeys1->__get(_g1);
HXDLIN( 644)									_g1 = (_g1 + 1);
HXDLIN( 644)									if ((key != -1)) {
HXLINE( 644)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 644)							{
HXLINE( 644)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_leftR;
HXDLIN( 644)								int state2 = -1;
HXDLIN( 644)								int _g2 = 0;
HXDLIN( 644)								while((_g2 < copyKeys1->length)){
HXLINE( 644)									int key = copyKeys1->__get(_g2);
HXDLIN( 644)									_g2 = (_g2 + 1);
HXDLIN( 644)									if ((key != -1)) {
HXLINE( 644)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)6: {
HXLINE( 644)							{
HXLINE( 644)								 ::flixel::input::actions::FlxActionDigital action = this->_note_right;
HXDLIN( 644)								int state = 1;
HXDLIN( 644)								int _g = 0;
HXDLIN( 644)								while((_g < copyKeys1->length)){
HXLINE( 644)									int key = copyKeys1->__get(_g);
HXDLIN( 644)									_g = (_g + 1);
HXDLIN( 644)									if ((key != -1)) {
HXLINE( 644)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 644)							{
HXLINE( 644)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_rightP;
HXDLIN( 644)								int state1 = 2;
HXDLIN( 644)								int _g1 = 0;
HXDLIN( 644)								while((_g1 < copyKeys1->length)){
HXLINE( 644)									int key = copyKeys1->__get(_g1);
HXDLIN( 644)									_g1 = (_g1 + 1);
HXDLIN( 644)									if ((key != -1)) {
HXLINE( 644)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 644)							{
HXLINE( 644)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_rightR;
HXDLIN( 644)								int state2 = -1;
HXDLIN( 644)								int _g2 = 0;
HXDLIN( 644)								while((_g2 < copyKeys1->length)){
HXLINE( 644)									int key = copyKeys1->__get(_g2);
HXDLIN( 644)									_g2 = (_g2 + 1);
HXDLIN( 644)									if ((key != -1)) {
HXLINE( 644)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)7: {
HXLINE( 644)							{
HXLINE( 644)								 ::flixel::input::actions::FlxActionDigital action = this->_note_down;
HXDLIN( 644)								int state = 1;
HXDLIN( 644)								int _g = 0;
HXDLIN( 644)								while((_g < copyKeys1->length)){
HXLINE( 644)									int key = copyKeys1->__get(_g);
HXDLIN( 644)									_g = (_g + 1);
HXDLIN( 644)									if ((key != -1)) {
HXLINE( 644)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 644)							{
HXLINE( 644)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_downP;
HXDLIN( 644)								int state1 = 2;
HXDLIN( 644)								int _g1 = 0;
HXDLIN( 644)								while((_g1 < copyKeys1->length)){
HXLINE( 644)									int key = copyKeys1->__get(_g1);
HXDLIN( 644)									_g1 = (_g1 + 1);
HXDLIN( 644)									if ((key != -1)) {
HXLINE( 644)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 644)							{
HXLINE( 644)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_downR;
HXDLIN( 644)								int state2 = -1;
HXDLIN( 644)								int _g2 = 0;
HXDLIN( 644)								while((_g2 < copyKeys1->length)){
HXLINE( 644)									int key = copyKeys1->__get(_g2);
HXDLIN( 644)									_g2 = (_g2 + 1);
HXDLIN( 644)									if ((key != -1)) {
HXLINE( 644)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)8: {
HXLINE( 644)							 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 644)							int state = 2;
HXDLIN( 644)							int _g = 0;
HXDLIN( 644)							while((_g < copyKeys1->length)){
HXLINE( 644)								int key = copyKeys1->__get(_g);
HXDLIN( 644)								_g = (_g + 1);
HXDLIN( 644)								if ((key != -1)) {
HXLINE( 644)									action->addKey(key,state);
            								}
            							}
            						}
            						break;
            						case (int)9: {
HXLINE( 644)							 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 644)							int state = 2;
HXDLIN( 644)							int _g = 0;
HXDLIN( 644)							while((_g < copyKeys1->length)){
HXLINE( 644)								int key = copyKeys1->__get(_g);
HXDLIN( 644)								_g = (_g + 1);
HXDLIN( 644)								if ((key != -1)) {
HXLINE( 644)									action->addKey(key,state);
            								}
            							}
            						}
            						break;
            						case (int)10: {
HXLINE( 644)							 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 644)							int state = 2;
HXDLIN( 644)							int _g = 0;
HXDLIN( 644)							while((_g < copyKeys1->length)){
HXLINE( 644)								int key = copyKeys1->__get(_g);
HXDLIN( 644)								_g = (_g + 1);
HXDLIN( 644)								if ((key != -1)) {
HXLINE( 644)									action->addKey(key,state);
            								}
            							}
            						}
            						break;
            						case (int)11: {
HXLINE( 644)							 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 644)							int state = 2;
HXDLIN( 644)							int _g = 0;
HXDLIN( 644)							while((_g < copyKeys1->length)){
HXLINE( 644)								int key = copyKeys1->__get(_g);
HXDLIN( 644)								_g = (_g + 1);
HXDLIN( 644)								if ((key != -1)) {
HXLINE( 644)									action->addKey(key,state);
            								}
            							}
            						}
            						break;
            					}
            				}
HXLINE( 645)				{
HXLINE( 645)					::Array< int > copyKeys2 = ( (::Array< int >)(keysMap->get(HX_("ui_left",12,4d,89,f7))) )->copy();
HXDLIN( 645)					{
HXLINE( 645)						int _g4 = 0;
HXDLIN( 645)						int _g5 = copyKeys2->length;
HXDLIN( 645)						while((_g4 < _g5)){
HXLINE( 645)							_g4 = (_g4 + 1);
HXDLIN( 645)							int i = (_g4 - 1);
HXDLIN( 645)							if ((i == -1)) {
HXLINE( 645)								copyKeys2->remove(i);
            							}
            						}
            					}
HXDLIN( 645)					switch((int)(::Control_obj::UI_LEFT_dyn()->_hx_getIndex())){
            						case (int)0: {
HXLINE( 645)							{
HXLINE( 645)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_up;
HXDLIN( 645)								int state = 1;
HXDLIN( 645)								int _g = 0;
HXDLIN( 645)								while((_g < copyKeys2->length)){
HXLINE( 645)									int key = copyKeys2->__get(_g);
HXDLIN( 645)									_g = (_g + 1);
HXDLIN( 645)									if ((key != -1)) {
HXLINE( 645)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 645)							{
HXLINE( 645)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_upP;
HXDLIN( 645)								int state1 = 2;
HXDLIN( 645)								int _g1 = 0;
HXDLIN( 645)								while((_g1 < copyKeys2->length)){
HXLINE( 645)									int key = copyKeys2->__get(_g1);
HXDLIN( 645)									_g1 = (_g1 + 1);
HXDLIN( 645)									if ((key != -1)) {
HXLINE( 645)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 645)							{
HXLINE( 645)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_upR;
HXDLIN( 645)								int state2 = -1;
HXDLIN( 645)								int _g2 = 0;
HXDLIN( 645)								while((_g2 < copyKeys2->length)){
HXLINE( 645)									int key = copyKeys2->__get(_g2);
HXDLIN( 645)									_g2 = (_g2 + 1);
HXDLIN( 645)									if ((key != -1)) {
HXLINE( 645)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)1: {
HXLINE( 645)							{
HXLINE( 645)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_left;
HXDLIN( 645)								int state = 1;
HXDLIN( 645)								int _g = 0;
HXDLIN( 645)								while((_g < copyKeys2->length)){
HXLINE( 645)									int key = copyKeys2->__get(_g);
HXDLIN( 645)									_g = (_g + 1);
HXDLIN( 645)									if ((key != -1)) {
HXLINE( 645)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 645)							{
HXLINE( 645)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_leftP;
HXDLIN( 645)								int state1 = 2;
HXDLIN( 645)								int _g1 = 0;
HXDLIN( 645)								while((_g1 < copyKeys2->length)){
HXLINE( 645)									int key = copyKeys2->__get(_g1);
HXDLIN( 645)									_g1 = (_g1 + 1);
HXDLIN( 645)									if ((key != -1)) {
HXLINE( 645)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 645)							{
HXLINE( 645)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_leftR;
HXDLIN( 645)								int state2 = -1;
HXDLIN( 645)								int _g2 = 0;
HXDLIN( 645)								while((_g2 < copyKeys2->length)){
HXLINE( 645)									int key = copyKeys2->__get(_g2);
HXDLIN( 645)									_g2 = (_g2 + 1);
HXDLIN( 645)									if ((key != -1)) {
HXLINE( 645)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)2: {
HXLINE( 645)							{
HXLINE( 645)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_right;
HXDLIN( 645)								int state = 1;
HXDLIN( 645)								int _g = 0;
HXDLIN( 645)								while((_g < copyKeys2->length)){
HXLINE( 645)									int key = copyKeys2->__get(_g);
HXDLIN( 645)									_g = (_g + 1);
HXDLIN( 645)									if ((key != -1)) {
HXLINE( 645)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 645)							{
HXLINE( 645)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_rightP;
HXDLIN( 645)								int state1 = 2;
HXDLIN( 645)								int _g1 = 0;
HXDLIN( 645)								while((_g1 < copyKeys2->length)){
HXLINE( 645)									int key = copyKeys2->__get(_g1);
HXDLIN( 645)									_g1 = (_g1 + 1);
HXDLIN( 645)									if ((key != -1)) {
HXLINE( 645)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 645)							{
HXLINE( 645)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_rightR;
HXDLIN( 645)								int state2 = -1;
HXDLIN( 645)								int _g2 = 0;
HXDLIN( 645)								while((_g2 < copyKeys2->length)){
HXLINE( 645)									int key = copyKeys2->__get(_g2);
HXDLIN( 645)									_g2 = (_g2 + 1);
HXDLIN( 645)									if ((key != -1)) {
HXLINE( 645)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)3: {
HXLINE( 645)							{
HXLINE( 645)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_down;
HXDLIN( 645)								int state = 1;
HXDLIN( 645)								int _g = 0;
HXDLIN( 645)								while((_g < copyKeys2->length)){
HXLINE( 645)									int key = copyKeys2->__get(_g);
HXDLIN( 645)									_g = (_g + 1);
HXDLIN( 645)									if ((key != -1)) {
HXLINE( 645)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 645)							{
HXLINE( 645)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_downP;
HXDLIN( 645)								int state1 = 2;
HXDLIN( 645)								int _g1 = 0;
HXDLIN( 645)								while((_g1 < copyKeys2->length)){
HXLINE( 645)									int key = copyKeys2->__get(_g1);
HXDLIN( 645)									_g1 = (_g1 + 1);
HXDLIN( 645)									if ((key != -1)) {
HXLINE( 645)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 645)							{
HXLINE( 645)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_downR;
HXDLIN( 645)								int state2 = -1;
HXDLIN( 645)								int _g2 = 0;
HXDLIN( 645)								while((_g2 < copyKeys2->length)){
HXLINE( 645)									int key = copyKeys2->__get(_g2);
HXDLIN( 645)									_g2 = (_g2 + 1);
HXDLIN( 645)									if ((key != -1)) {
HXLINE( 645)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)4: {
HXLINE( 645)							{
HXLINE( 645)								 ::flixel::input::actions::FlxActionDigital action = this->_note_up;
HXDLIN( 645)								int state = 1;
HXDLIN( 645)								int _g = 0;
HXDLIN( 645)								while((_g < copyKeys2->length)){
HXLINE( 645)									int key = copyKeys2->__get(_g);
HXDLIN( 645)									_g = (_g + 1);
HXDLIN( 645)									if ((key != -1)) {
HXLINE( 645)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 645)							{
HXLINE( 645)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_upP;
HXDLIN( 645)								int state1 = 2;
HXDLIN( 645)								int _g1 = 0;
HXDLIN( 645)								while((_g1 < copyKeys2->length)){
HXLINE( 645)									int key = copyKeys2->__get(_g1);
HXDLIN( 645)									_g1 = (_g1 + 1);
HXDLIN( 645)									if ((key != -1)) {
HXLINE( 645)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 645)							{
HXLINE( 645)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_upR;
HXDLIN( 645)								int state2 = -1;
HXDLIN( 645)								int _g2 = 0;
HXDLIN( 645)								while((_g2 < copyKeys2->length)){
HXLINE( 645)									int key = copyKeys2->__get(_g2);
HXDLIN( 645)									_g2 = (_g2 + 1);
HXDLIN( 645)									if ((key != -1)) {
HXLINE( 645)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)5: {
HXLINE( 645)							{
HXLINE( 645)								 ::flixel::input::actions::FlxActionDigital action = this->_note_left;
HXDLIN( 645)								int state = 1;
HXDLIN( 645)								int _g = 0;
HXDLIN( 645)								while((_g < copyKeys2->length)){
HXLINE( 645)									int key = copyKeys2->__get(_g);
HXDLIN( 645)									_g = (_g + 1);
HXDLIN( 645)									if ((key != -1)) {
HXLINE( 645)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 645)							{
HXLINE( 645)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_leftP;
HXDLIN( 645)								int state1 = 2;
HXDLIN( 645)								int _g1 = 0;
HXDLIN( 645)								while((_g1 < copyKeys2->length)){
HXLINE( 645)									int key = copyKeys2->__get(_g1);
HXDLIN( 645)									_g1 = (_g1 + 1);
HXDLIN( 645)									if ((key != -1)) {
HXLINE( 645)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 645)							{
HXLINE( 645)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_leftR;
HXDLIN( 645)								int state2 = -1;
HXDLIN( 645)								int _g2 = 0;
HXDLIN( 645)								while((_g2 < copyKeys2->length)){
HXLINE( 645)									int key = copyKeys2->__get(_g2);
HXDLIN( 645)									_g2 = (_g2 + 1);
HXDLIN( 645)									if ((key != -1)) {
HXLINE( 645)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)6: {
HXLINE( 645)							{
HXLINE( 645)								 ::flixel::input::actions::FlxActionDigital action = this->_note_right;
HXDLIN( 645)								int state = 1;
HXDLIN( 645)								int _g = 0;
HXDLIN( 645)								while((_g < copyKeys2->length)){
HXLINE( 645)									int key = copyKeys2->__get(_g);
HXDLIN( 645)									_g = (_g + 1);
HXDLIN( 645)									if ((key != -1)) {
HXLINE( 645)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 645)							{
HXLINE( 645)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_rightP;
HXDLIN( 645)								int state1 = 2;
HXDLIN( 645)								int _g1 = 0;
HXDLIN( 645)								while((_g1 < copyKeys2->length)){
HXLINE( 645)									int key = copyKeys2->__get(_g1);
HXDLIN( 645)									_g1 = (_g1 + 1);
HXDLIN( 645)									if ((key != -1)) {
HXLINE( 645)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 645)							{
HXLINE( 645)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_rightR;
HXDLIN( 645)								int state2 = -1;
HXDLIN( 645)								int _g2 = 0;
HXDLIN( 645)								while((_g2 < copyKeys2->length)){
HXLINE( 645)									int key = copyKeys2->__get(_g2);
HXDLIN( 645)									_g2 = (_g2 + 1);
HXDLIN( 645)									if ((key != -1)) {
HXLINE( 645)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)7: {
HXLINE( 645)							{
HXLINE( 645)								 ::flixel::input::actions::FlxActionDigital action = this->_note_down;
HXDLIN( 645)								int state = 1;
HXDLIN( 645)								int _g = 0;
HXDLIN( 645)								while((_g < copyKeys2->length)){
HXLINE( 645)									int key = copyKeys2->__get(_g);
HXDLIN( 645)									_g = (_g + 1);
HXDLIN( 645)									if ((key != -1)) {
HXLINE( 645)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 645)							{
HXLINE( 645)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_downP;
HXDLIN( 645)								int state1 = 2;
HXDLIN( 645)								int _g1 = 0;
HXDLIN( 645)								while((_g1 < copyKeys2->length)){
HXLINE( 645)									int key = copyKeys2->__get(_g1);
HXDLIN( 645)									_g1 = (_g1 + 1);
HXDLIN( 645)									if ((key != -1)) {
HXLINE( 645)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 645)							{
HXLINE( 645)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_downR;
HXDLIN( 645)								int state2 = -1;
HXDLIN( 645)								int _g2 = 0;
HXDLIN( 645)								while((_g2 < copyKeys2->length)){
HXLINE( 645)									int key = copyKeys2->__get(_g2);
HXDLIN( 645)									_g2 = (_g2 + 1);
HXDLIN( 645)									if ((key != -1)) {
HXLINE( 645)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)8: {
HXLINE( 645)							 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 645)							int state = 2;
HXDLIN( 645)							int _g = 0;
HXDLIN( 645)							while((_g < copyKeys2->length)){
HXLINE( 645)								int key = copyKeys2->__get(_g);
HXDLIN( 645)								_g = (_g + 1);
HXDLIN( 645)								if ((key != -1)) {
HXLINE( 645)									action->addKey(key,state);
            								}
            							}
            						}
            						break;
            						case (int)9: {
HXLINE( 645)							 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 645)							int state = 2;
HXDLIN( 645)							int _g = 0;
HXDLIN( 645)							while((_g < copyKeys2->length)){
HXLINE( 645)								int key = copyKeys2->__get(_g);
HXDLIN( 645)								_g = (_g + 1);
HXDLIN( 645)								if ((key != -1)) {
HXLINE( 645)									action->addKey(key,state);
            								}
            							}
            						}
            						break;
            						case (int)10: {
HXLINE( 645)							 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 645)							int state = 2;
HXDLIN( 645)							int _g = 0;
HXDLIN( 645)							while((_g < copyKeys2->length)){
HXLINE( 645)								int key = copyKeys2->__get(_g);
HXDLIN( 645)								_g = (_g + 1);
HXDLIN( 645)								if ((key != -1)) {
HXLINE( 645)									action->addKey(key,state);
            								}
            							}
            						}
            						break;
            						case (int)11: {
HXLINE( 645)							 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 645)							int state = 2;
HXDLIN( 645)							int _g = 0;
HXDLIN( 645)							while((_g < copyKeys2->length)){
HXLINE( 645)								int key = copyKeys2->__get(_g);
HXDLIN( 645)								_g = (_g + 1);
HXDLIN( 645)								if ((key != -1)) {
HXLINE( 645)									action->addKey(key,state);
            								}
            							}
            						}
            						break;
            					}
            				}
HXLINE( 646)				{
HXLINE( 646)					::Array< int > copyKeys3 = ( (::Array< int >)(keysMap->get(HX_("ui_right",71,30,a7,17))) )->copy();
HXDLIN( 646)					{
HXLINE( 646)						int _g6 = 0;
HXDLIN( 646)						int _g7 = copyKeys3->length;
HXDLIN( 646)						while((_g6 < _g7)){
HXLINE( 646)							_g6 = (_g6 + 1);
HXDLIN( 646)							int i = (_g6 - 1);
HXDLIN( 646)							if ((i == -1)) {
HXLINE( 646)								copyKeys3->remove(i);
            							}
            						}
            					}
HXDLIN( 646)					switch((int)(::Control_obj::UI_RIGHT_dyn()->_hx_getIndex())){
            						case (int)0: {
HXLINE( 646)							{
HXLINE( 646)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_up;
HXDLIN( 646)								int state = 1;
HXDLIN( 646)								int _g = 0;
HXDLIN( 646)								while((_g < copyKeys3->length)){
HXLINE( 646)									int key = copyKeys3->__get(_g);
HXDLIN( 646)									_g = (_g + 1);
HXDLIN( 646)									if ((key != -1)) {
HXLINE( 646)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 646)							{
HXLINE( 646)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_upP;
HXDLIN( 646)								int state1 = 2;
HXDLIN( 646)								int _g1 = 0;
HXDLIN( 646)								while((_g1 < copyKeys3->length)){
HXLINE( 646)									int key = copyKeys3->__get(_g1);
HXDLIN( 646)									_g1 = (_g1 + 1);
HXDLIN( 646)									if ((key != -1)) {
HXLINE( 646)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 646)							{
HXLINE( 646)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_upR;
HXDLIN( 646)								int state2 = -1;
HXDLIN( 646)								int _g2 = 0;
HXDLIN( 646)								while((_g2 < copyKeys3->length)){
HXLINE( 646)									int key = copyKeys3->__get(_g2);
HXDLIN( 646)									_g2 = (_g2 + 1);
HXDLIN( 646)									if ((key != -1)) {
HXLINE( 646)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)1: {
HXLINE( 646)							{
HXLINE( 646)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_left;
HXDLIN( 646)								int state = 1;
HXDLIN( 646)								int _g = 0;
HXDLIN( 646)								while((_g < copyKeys3->length)){
HXLINE( 646)									int key = copyKeys3->__get(_g);
HXDLIN( 646)									_g = (_g + 1);
HXDLIN( 646)									if ((key != -1)) {
HXLINE( 646)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 646)							{
HXLINE( 646)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_leftP;
HXDLIN( 646)								int state1 = 2;
HXDLIN( 646)								int _g1 = 0;
HXDLIN( 646)								while((_g1 < copyKeys3->length)){
HXLINE( 646)									int key = copyKeys3->__get(_g1);
HXDLIN( 646)									_g1 = (_g1 + 1);
HXDLIN( 646)									if ((key != -1)) {
HXLINE( 646)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 646)							{
HXLINE( 646)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_leftR;
HXDLIN( 646)								int state2 = -1;
HXDLIN( 646)								int _g2 = 0;
HXDLIN( 646)								while((_g2 < copyKeys3->length)){
HXLINE( 646)									int key = copyKeys3->__get(_g2);
HXDLIN( 646)									_g2 = (_g2 + 1);
HXDLIN( 646)									if ((key != -1)) {
HXLINE( 646)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)2: {
HXLINE( 646)							{
HXLINE( 646)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_right;
HXDLIN( 646)								int state = 1;
HXDLIN( 646)								int _g = 0;
HXDLIN( 646)								while((_g < copyKeys3->length)){
HXLINE( 646)									int key = copyKeys3->__get(_g);
HXDLIN( 646)									_g = (_g + 1);
HXDLIN( 646)									if ((key != -1)) {
HXLINE( 646)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 646)							{
HXLINE( 646)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_rightP;
HXDLIN( 646)								int state1 = 2;
HXDLIN( 646)								int _g1 = 0;
HXDLIN( 646)								while((_g1 < copyKeys3->length)){
HXLINE( 646)									int key = copyKeys3->__get(_g1);
HXDLIN( 646)									_g1 = (_g1 + 1);
HXDLIN( 646)									if ((key != -1)) {
HXLINE( 646)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 646)							{
HXLINE( 646)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_rightR;
HXDLIN( 646)								int state2 = -1;
HXDLIN( 646)								int _g2 = 0;
HXDLIN( 646)								while((_g2 < copyKeys3->length)){
HXLINE( 646)									int key = copyKeys3->__get(_g2);
HXDLIN( 646)									_g2 = (_g2 + 1);
HXDLIN( 646)									if ((key != -1)) {
HXLINE( 646)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)3: {
HXLINE( 646)							{
HXLINE( 646)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_down;
HXDLIN( 646)								int state = 1;
HXDLIN( 646)								int _g = 0;
HXDLIN( 646)								while((_g < copyKeys3->length)){
HXLINE( 646)									int key = copyKeys3->__get(_g);
HXDLIN( 646)									_g = (_g + 1);
HXDLIN( 646)									if ((key != -1)) {
HXLINE( 646)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 646)							{
HXLINE( 646)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_downP;
HXDLIN( 646)								int state1 = 2;
HXDLIN( 646)								int _g1 = 0;
HXDLIN( 646)								while((_g1 < copyKeys3->length)){
HXLINE( 646)									int key = copyKeys3->__get(_g1);
HXDLIN( 646)									_g1 = (_g1 + 1);
HXDLIN( 646)									if ((key != -1)) {
HXLINE( 646)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 646)							{
HXLINE( 646)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_downR;
HXDLIN( 646)								int state2 = -1;
HXDLIN( 646)								int _g2 = 0;
HXDLIN( 646)								while((_g2 < copyKeys3->length)){
HXLINE( 646)									int key = copyKeys3->__get(_g2);
HXDLIN( 646)									_g2 = (_g2 + 1);
HXDLIN( 646)									if ((key != -1)) {
HXLINE( 646)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)4: {
HXLINE( 646)							{
HXLINE( 646)								 ::flixel::input::actions::FlxActionDigital action = this->_note_up;
HXDLIN( 646)								int state = 1;
HXDLIN( 646)								int _g = 0;
HXDLIN( 646)								while((_g < copyKeys3->length)){
HXLINE( 646)									int key = copyKeys3->__get(_g);
HXDLIN( 646)									_g = (_g + 1);
HXDLIN( 646)									if ((key != -1)) {
HXLINE( 646)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 646)							{
HXLINE( 646)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_upP;
HXDLIN( 646)								int state1 = 2;
HXDLIN( 646)								int _g1 = 0;
HXDLIN( 646)								while((_g1 < copyKeys3->length)){
HXLINE( 646)									int key = copyKeys3->__get(_g1);
HXDLIN( 646)									_g1 = (_g1 + 1);
HXDLIN( 646)									if ((key != -1)) {
HXLINE( 646)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 646)							{
HXLINE( 646)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_upR;
HXDLIN( 646)								int state2 = -1;
HXDLIN( 646)								int _g2 = 0;
HXDLIN( 646)								while((_g2 < copyKeys3->length)){
HXLINE( 646)									int key = copyKeys3->__get(_g2);
HXDLIN( 646)									_g2 = (_g2 + 1);
HXDLIN( 646)									if ((key != -1)) {
HXLINE( 646)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)5: {
HXLINE( 646)							{
HXLINE( 646)								 ::flixel::input::actions::FlxActionDigital action = this->_note_left;
HXDLIN( 646)								int state = 1;
HXDLIN( 646)								int _g = 0;
HXDLIN( 646)								while((_g < copyKeys3->length)){
HXLINE( 646)									int key = copyKeys3->__get(_g);
HXDLIN( 646)									_g = (_g + 1);
HXDLIN( 646)									if ((key != -1)) {
HXLINE( 646)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 646)							{
HXLINE( 646)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_leftP;
HXDLIN( 646)								int state1 = 2;
HXDLIN( 646)								int _g1 = 0;
HXDLIN( 646)								while((_g1 < copyKeys3->length)){
HXLINE( 646)									int key = copyKeys3->__get(_g1);
HXDLIN( 646)									_g1 = (_g1 + 1);
HXDLIN( 646)									if ((key != -1)) {
HXLINE( 646)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 646)							{
HXLINE( 646)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_leftR;
HXDLIN( 646)								int state2 = -1;
HXDLIN( 646)								int _g2 = 0;
HXDLIN( 646)								while((_g2 < copyKeys3->length)){
HXLINE( 646)									int key = copyKeys3->__get(_g2);
HXDLIN( 646)									_g2 = (_g2 + 1);
HXDLIN( 646)									if ((key != -1)) {
HXLINE( 646)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)6: {
HXLINE( 646)							{
HXLINE( 646)								 ::flixel::input::actions::FlxActionDigital action = this->_note_right;
HXDLIN( 646)								int state = 1;
HXDLIN( 646)								int _g = 0;
HXDLIN( 646)								while((_g < copyKeys3->length)){
HXLINE( 646)									int key = copyKeys3->__get(_g);
HXDLIN( 646)									_g = (_g + 1);
HXDLIN( 646)									if ((key != -1)) {
HXLINE( 646)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 646)							{
HXLINE( 646)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_rightP;
HXDLIN( 646)								int state1 = 2;
HXDLIN( 646)								int _g1 = 0;
HXDLIN( 646)								while((_g1 < copyKeys3->length)){
HXLINE( 646)									int key = copyKeys3->__get(_g1);
HXDLIN( 646)									_g1 = (_g1 + 1);
HXDLIN( 646)									if ((key != -1)) {
HXLINE( 646)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 646)							{
HXLINE( 646)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_rightR;
HXDLIN( 646)								int state2 = -1;
HXDLIN( 646)								int _g2 = 0;
HXDLIN( 646)								while((_g2 < copyKeys3->length)){
HXLINE( 646)									int key = copyKeys3->__get(_g2);
HXDLIN( 646)									_g2 = (_g2 + 1);
HXDLIN( 646)									if ((key != -1)) {
HXLINE( 646)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)7: {
HXLINE( 646)							{
HXLINE( 646)								 ::flixel::input::actions::FlxActionDigital action = this->_note_down;
HXDLIN( 646)								int state = 1;
HXDLIN( 646)								int _g = 0;
HXDLIN( 646)								while((_g < copyKeys3->length)){
HXLINE( 646)									int key = copyKeys3->__get(_g);
HXDLIN( 646)									_g = (_g + 1);
HXDLIN( 646)									if ((key != -1)) {
HXLINE( 646)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 646)							{
HXLINE( 646)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_downP;
HXDLIN( 646)								int state1 = 2;
HXDLIN( 646)								int _g1 = 0;
HXDLIN( 646)								while((_g1 < copyKeys3->length)){
HXLINE( 646)									int key = copyKeys3->__get(_g1);
HXDLIN( 646)									_g1 = (_g1 + 1);
HXDLIN( 646)									if ((key != -1)) {
HXLINE( 646)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 646)							{
HXLINE( 646)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_downR;
HXDLIN( 646)								int state2 = -1;
HXDLIN( 646)								int _g2 = 0;
HXDLIN( 646)								while((_g2 < copyKeys3->length)){
HXLINE( 646)									int key = copyKeys3->__get(_g2);
HXDLIN( 646)									_g2 = (_g2 + 1);
HXDLIN( 646)									if ((key != -1)) {
HXLINE( 646)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)8: {
HXLINE( 646)							 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 646)							int state = 2;
HXDLIN( 646)							int _g = 0;
HXDLIN( 646)							while((_g < copyKeys3->length)){
HXLINE( 646)								int key = copyKeys3->__get(_g);
HXDLIN( 646)								_g = (_g + 1);
HXDLIN( 646)								if ((key != -1)) {
HXLINE( 646)									action->addKey(key,state);
            								}
            							}
            						}
            						break;
            						case (int)9: {
HXLINE( 646)							 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 646)							int state = 2;
HXDLIN( 646)							int _g = 0;
HXDLIN( 646)							while((_g < copyKeys3->length)){
HXLINE( 646)								int key = copyKeys3->__get(_g);
HXDLIN( 646)								_g = (_g + 1);
HXDLIN( 646)								if ((key != -1)) {
HXLINE( 646)									action->addKey(key,state);
            								}
            							}
            						}
            						break;
            						case (int)10: {
HXLINE( 646)							 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 646)							int state = 2;
HXDLIN( 646)							int _g = 0;
HXDLIN( 646)							while((_g < copyKeys3->length)){
HXLINE( 646)								int key = copyKeys3->__get(_g);
HXDLIN( 646)								_g = (_g + 1);
HXDLIN( 646)								if ((key != -1)) {
HXLINE( 646)									action->addKey(key,state);
            								}
            							}
            						}
            						break;
            						case (int)11: {
HXLINE( 646)							 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 646)							int state = 2;
HXDLIN( 646)							int _g = 0;
HXDLIN( 646)							while((_g < copyKeys3->length)){
HXLINE( 646)								int key = copyKeys3->__get(_g);
HXDLIN( 646)								_g = (_g + 1);
HXDLIN( 646)								if ((key != -1)) {
HXLINE( 646)									action->addKey(key,state);
            								}
            							}
            						}
            						break;
            					}
            				}
HXLINE( 647)				{
HXLINE( 647)					::Array< int > copyKeys4 = ( (::Array< int >)(keysMap->get(HX_("note_up",c8,67,5c,4d))) )->copy();
HXDLIN( 647)					{
HXLINE( 647)						int _g8 = 0;
HXDLIN( 647)						int _g9 = copyKeys4->length;
HXDLIN( 647)						while((_g8 < _g9)){
HXLINE( 647)							_g8 = (_g8 + 1);
HXDLIN( 647)							int i = (_g8 - 1);
HXDLIN( 647)							if ((i == -1)) {
HXLINE( 647)								copyKeys4->remove(i);
            							}
            						}
            					}
HXDLIN( 647)					switch((int)(::Control_obj::NOTE_UP_dyn()->_hx_getIndex())){
            						case (int)0: {
HXLINE( 647)							{
HXLINE( 647)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_up;
HXDLIN( 647)								int state = 1;
HXDLIN( 647)								int _g = 0;
HXDLIN( 647)								while((_g < copyKeys4->length)){
HXLINE( 647)									int key = copyKeys4->__get(_g);
HXDLIN( 647)									_g = (_g + 1);
HXDLIN( 647)									if ((key != -1)) {
HXLINE( 647)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 647)							{
HXLINE( 647)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_upP;
HXDLIN( 647)								int state1 = 2;
HXDLIN( 647)								int _g1 = 0;
HXDLIN( 647)								while((_g1 < copyKeys4->length)){
HXLINE( 647)									int key = copyKeys4->__get(_g1);
HXDLIN( 647)									_g1 = (_g1 + 1);
HXDLIN( 647)									if ((key != -1)) {
HXLINE( 647)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 647)							{
HXLINE( 647)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_upR;
HXDLIN( 647)								int state2 = -1;
HXDLIN( 647)								int _g2 = 0;
HXDLIN( 647)								while((_g2 < copyKeys4->length)){
HXLINE( 647)									int key = copyKeys4->__get(_g2);
HXDLIN( 647)									_g2 = (_g2 + 1);
HXDLIN( 647)									if ((key != -1)) {
HXLINE( 647)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)1: {
HXLINE( 647)							{
HXLINE( 647)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_left;
HXDLIN( 647)								int state = 1;
HXDLIN( 647)								int _g = 0;
HXDLIN( 647)								while((_g < copyKeys4->length)){
HXLINE( 647)									int key = copyKeys4->__get(_g);
HXDLIN( 647)									_g = (_g + 1);
HXDLIN( 647)									if ((key != -1)) {
HXLINE( 647)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 647)							{
HXLINE( 647)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_leftP;
HXDLIN( 647)								int state1 = 2;
HXDLIN( 647)								int _g1 = 0;
HXDLIN( 647)								while((_g1 < copyKeys4->length)){
HXLINE( 647)									int key = copyKeys4->__get(_g1);
HXDLIN( 647)									_g1 = (_g1 + 1);
HXDLIN( 647)									if ((key != -1)) {
HXLINE( 647)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 647)							{
HXLINE( 647)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_leftR;
HXDLIN( 647)								int state2 = -1;
HXDLIN( 647)								int _g2 = 0;
HXDLIN( 647)								while((_g2 < copyKeys4->length)){
HXLINE( 647)									int key = copyKeys4->__get(_g2);
HXDLIN( 647)									_g2 = (_g2 + 1);
HXDLIN( 647)									if ((key != -1)) {
HXLINE( 647)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)2: {
HXLINE( 647)							{
HXLINE( 647)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_right;
HXDLIN( 647)								int state = 1;
HXDLIN( 647)								int _g = 0;
HXDLIN( 647)								while((_g < copyKeys4->length)){
HXLINE( 647)									int key = copyKeys4->__get(_g);
HXDLIN( 647)									_g = (_g + 1);
HXDLIN( 647)									if ((key != -1)) {
HXLINE( 647)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 647)							{
HXLINE( 647)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_rightP;
HXDLIN( 647)								int state1 = 2;
HXDLIN( 647)								int _g1 = 0;
HXDLIN( 647)								while((_g1 < copyKeys4->length)){
HXLINE( 647)									int key = copyKeys4->__get(_g1);
HXDLIN( 647)									_g1 = (_g1 + 1);
HXDLIN( 647)									if ((key != -1)) {
HXLINE( 647)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 647)							{
HXLINE( 647)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_rightR;
HXDLIN( 647)								int state2 = -1;
HXDLIN( 647)								int _g2 = 0;
HXDLIN( 647)								while((_g2 < copyKeys4->length)){
HXLINE( 647)									int key = copyKeys4->__get(_g2);
HXDLIN( 647)									_g2 = (_g2 + 1);
HXDLIN( 647)									if ((key != -1)) {
HXLINE( 647)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)3: {
HXLINE( 647)							{
HXLINE( 647)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_down;
HXDLIN( 647)								int state = 1;
HXDLIN( 647)								int _g = 0;
HXDLIN( 647)								while((_g < copyKeys4->length)){
HXLINE( 647)									int key = copyKeys4->__get(_g);
HXDLIN( 647)									_g = (_g + 1);
HXDLIN( 647)									if ((key != -1)) {
HXLINE( 647)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 647)							{
HXLINE( 647)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_downP;
HXDLIN( 647)								int state1 = 2;
HXDLIN( 647)								int _g1 = 0;
HXDLIN( 647)								while((_g1 < copyKeys4->length)){
HXLINE( 647)									int key = copyKeys4->__get(_g1);
HXDLIN( 647)									_g1 = (_g1 + 1);
HXDLIN( 647)									if ((key != -1)) {
HXLINE( 647)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 647)							{
HXLINE( 647)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_downR;
HXDLIN( 647)								int state2 = -1;
HXDLIN( 647)								int _g2 = 0;
HXDLIN( 647)								while((_g2 < copyKeys4->length)){
HXLINE( 647)									int key = copyKeys4->__get(_g2);
HXDLIN( 647)									_g2 = (_g2 + 1);
HXDLIN( 647)									if ((key != -1)) {
HXLINE( 647)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)4: {
HXLINE( 647)							{
HXLINE( 647)								 ::flixel::input::actions::FlxActionDigital action = this->_note_up;
HXDLIN( 647)								int state = 1;
HXDLIN( 647)								int _g = 0;
HXDLIN( 647)								while((_g < copyKeys4->length)){
HXLINE( 647)									int key = copyKeys4->__get(_g);
HXDLIN( 647)									_g = (_g + 1);
HXDLIN( 647)									if ((key != -1)) {
HXLINE( 647)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 647)							{
HXLINE( 647)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_upP;
HXDLIN( 647)								int state1 = 2;
HXDLIN( 647)								int _g1 = 0;
HXDLIN( 647)								while((_g1 < copyKeys4->length)){
HXLINE( 647)									int key = copyKeys4->__get(_g1);
HXDLIN( 647)									_g1 = (_g1 + 1);
HXDLIN( 647)									if ((key != -1)) {
HXLINE( 647)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 647)							{
HXLINE( 647)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_upR;
HXDLIN( 647)								int state2 = -1;
HXDLIN( 647)								int _g2 = 0;
HXDLIN( 647)								while((_g2 < copyKeys4->length)){
HXLINE( 647)									int key = copyKeys4->__get(_g2);
HXDLIN( 647)									_g2 = (_g2 + 1);
HXDLIN( 647)									if ((key != -1)) {
HXLINE( 647)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)5: {
HXLINE( 647)							{
HXLINE( 647)								 ::flixel::input::actions::FlxActionDigital action = this->_note_left;
HXDLIN( 647)								int state = 1;
HXDLIN( 647)								int _g = 0;
HXDLIN( 647)								while((_g < copyKeys4->length)){
HXLINE( 647)									int key = copyKeys4->__get(_g);
HXDLIN( 647)									_g = (_g + 1);
HXDLIN( 647)									if ((key != -1)) {
HXLINE( 647)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 647)							{
HXLINE( 647)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_leftP;
HXDLIN( 647)								int state1 = 2;
HXDLIN( 647)								int _g1 = 0;
HXDLIN( 647)								while((_g1 < copyKeys4->length)){
HXLINE( 647)									int key = copyKeys4->__get(_g1);
HXDLIN( 647)									_g1 = (_g1 + 1);
HXDLIN( 647)									if ((key != -1)) {
HXLINE( 647)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 647)							{
HXLINE( 647)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_leftR;
HXDLIN( 647)								int state2 = -1;
HXDLIN( 647)								int _g2 = 0;
HXDLIN( 647)								while((_g2 < copyKeys4->length)){
HXLINE( 647)									int key = copyKeys4->__get(_g2);
HXDLIN( 647)									_g2 = (_g2 + 1);
HXDLIN( 647)									if ((key != -1)) {
HXLINE( 647)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)6: {
HXLINE( 647)							{
HXLINE( 647)								 ::flixel::input::actions::FlxActionDigital action = this->_note_right;
HXDLIN( 647)								int state = 1;
HXDLIN( 647)								int _g = 0;
HXDLIN( 647)								while((_g < copyKeys4->length)){
HXLINE( 647)									int key = copyKeys4->__get(_g);
HXDLIN( 647)									_g = (_g + 1);
HXDLIN( 647)									if ((key != -1)) {
HXLINE( 647)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 647)							{
HXLINE( 647)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_rightP;
HXDLIN( 647)								int state1 = 2;
HXDLIN( 647)								int _g1 = 0;
HXDLIN( 647)								while((_g1 < copyKeys4->length)){
HXLINE( 647)									int key = copyKeys4->__get(_g1);
HXDLIN( 647)									_g1 = (_g1 + 1);
HXDLIN( 647)									if ((key != -1)) {
HXLINE( 647)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 647)							{
HXLINE( 647)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_rightR;
HXDLIN( 647)								int state2 = -1;
HXDLIN( 647)								int _g2 = 0;
HXDLIN( 647)								while((_g2 < copyKeys4->length)){
HXLINE( 647)									int key = copyKeys4->__get(_g2);
HXDLIN( 647)									_g2 = (_g2 + 1);
HXDLIN( 647)									if ((key != -1)) {
HXLINE( 647)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)7: {
HXLINE( 647)							{
HXLINE( 647)								 ::flixel::input::actions::FlxActionDigital action = this->_note_down;
HXDLIN( 647)								int state = 1;
HXDLIN( 647)								int _g = 0;
HXDLIN( 647)								while((_g < copyKeys4->length)){
HXLINE( 647)									int key = copyKeys4->__get(_g);
HXDLIN( 647)									_g = (_g + 1);
HXDLIN( 647)									if ((key != -1)) {
HXLINE( 647)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 647)							{
HXLINE( 647)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_downP;
HXDLIN( 647)								int state1 = 2;
HXDLIN( 647)								int _g1 = 0;
HXDLIN( 647)								while((_g1 < copyKeys4->length)){
HXLINE( 647)									int key = copyKeys4->__get(_g1);
HXDLIN( 647)									_g1 = (_g1 + 1);
HXDLIN( 647)									if ((key != -1)) {
HXLINE( 647)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 647)							{
HXLINE( 647)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_downR;
HXDLIN( 647)								int state2 = -1;
HXDLIN( 647)								int _g2 = 0;
HXDLIN( 647)								while((_g2 < copyKeys4->length)){
HXLINE( 647)									int key = copyKeys4->__get(_g2);
HXDLIN( 647)									_g2 = (_g2 + 1);
HXDLIN( 647)									if ((key != -1)) {
HXLINE( 647)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)8: {
HXLINE( 647)							 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 647)							int state = 2;
HXDLIN( 647)							int _g = 0;
HXDLIN( 647)							while((_g < copyKeys4->length)){
HXLINE( 647)								int key = copyKeys4->__get(_g);
HXDLIN( 647)								_g = (_g + 1);
HXDLIN( 647)								if ((key != -1)) {
HXLINE( 647)									action->addKey(key,state);
            								}
            							}
            						}
            						break;
            						case (int)9: {
HXLINE( 647)							 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 647)							int state = 2;
HXDLIN( 647)							int _g = 0;
HXDLIN( 647)							while((_g < copyKeys4->length)){
HXLINE( 647)								int key = copyKeys4->__get(_g);
HXDLIN( 647)								_g = (_g + 1);
HXDLIN( 647)								if ((key != -1)) {
HXLINE( 647)									action->addKey(key,state);
            								}
            							}
            						}
            						break;
            						case (int)10: {
HXLINE( 647)							 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 647)							int state = 2;
HXDLIN( 647)							int _g = 0;
HXDLIN( 647)							while((_g < copyKeys4->length)){
HXLINE( 647)								int key = copyKeys4->__get(_g);
HXDLIN( 647)								_g = (_g + 1);
HXDLIN( 647)								if ((key != -1)) {
HXLINE( 647)									action->addKey(key,state);
            								}
            							}
            						}
            						break;
            						case (int)11: {
HXLINE( 647)							 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 647)							int state = 2;
HXDLIN( 647)							int _g = 0;
HXDLIN( 647)							while((_g < copyKeys4->length)){
HXLINE( 647)								int key = copyKeys4->__get(_g);
HXDLIN( 647)								_g = (_g + 1);
HXDLIN( 647)								if ((key != -1)) {
HXLINE( 647)									action->addKey(key,state);
            								}
            							}
            						}
            						break;
            					}
            				}
HXLINE( 648)				{
HXLINE( 648)					::Array< int > copyKeys5 = ( (::Array< int >)(keysMap->get(HX_("note_down",0f,ef,de,9f))) )->copy();
HXDLIN( 648)					{
HXLINE( 648)						int _g10 = 0;
HXDLIN( 648)						int _g11 = copyKeys5->length;
HXDLIN( 648)						while((_g10 < _g11)){
HXLINE( 648)							_g10 = (_g10 + 1);
HXDLIN( 648)							int i = (_g10 - 1);
HXDLIN( 648)							if ((i == -1)) {
HXLINE( 648)								copyKeys5->remove(i);
            							}
            						}
            					}
HXDLIN( 648)					switch((int)(::Control_obj::NOTE_DOWN_dyn()->_hx_getIndex())){
            						case (int)0: {
HXLINE( 648)							{
HXLINE( 648)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_up;
HXDLIN( 648)								int state = 1;
HXDLIN( 648)								int _g = 0;
HXDLIN( 648)								while((_g < copyKeys5->length)){
HXLINE( 648)									int key = copyKeys5->__get(_g);
HXDLIN( 648)									_g = (_g + 1);
HXDLIN( 648)									if ((key != -1)) {
HXLINE( 648)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 648)							{
HXLINE( 648)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_upP;
HXDLIN( 648)								int state1 = 2;
HXDLIN( 648)								int _g1 = 0;
HXDLIN( 648)								while((_g1 < copyKeys5->length)){
HXLINE( 648)									int key = copyKeys5->__get(_g1);
HXDLIN( 648)									_g1 = (_g1 + 1);
HXDLIN( 648)									if ((key != -1)) {
HXLINE( 648)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 648)							{
HXLINE( 648)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_upR;
HXDLIN( 648)								int state2 = -1;
HXDLIN( 648)								int _g2 = 0;
HXDLIN( 648)								while((_g2 < copyKeys5->length)){
HXLINE( 648)									int key = copyKeys5->__get(_g2);
HXDLIN( 648)									_g2 = (_g2 + 1);
HXDLIN( 648)									if ((key != -1)) {
HXLINE( 648)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)1: {
HXLINE( 648)							{
HXLINE( 648)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_left;
HXDLIN( 648)								int state = 1;
HXDLIN( 648)								int _g = 0;
HXDLIN( 648)								while((_g < copyKeys5->length)){
HXLINE( 648)									int key = copyKeys5->__get(_g);
HXDLIN( 648)									_g = (_g + 1);
HXDLIN( 648)									if ((key != -1)) {
HXLINE( 648)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 648)							{
HXLINE( 648)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_leftP;
HXDLIN( 648)								int state1 = 2;
HXDLIN( 648)								int _g1 = 0;
HXDLIN( 648)								while((_g1 < copyKeys5->length)){
HXLINE( 648)									int key = copyKeys5->__get(_g1);
HXDLIN( 648)									_g1 = (_g1 + 1);
HXDLIN( 648)									if ((key != -1)) {
HXLINE( 648)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 648)							{
HXLINE( 648)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_leftR;
HXDLIN( 648)								int state2 = -1;
HXDLIN( 648)								int _g2 = 0;
HXDLIN( 648)								while((_g2 < copyKeys5->length)){
HXLINE( 648)									int key = copyKeys5->__get(_g2);
HXDLIN( 648)									_g2 = (_g2 + 1);
HXDLIN( 648)									if ((key != -1)) {
HXLINE( 648)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)2: {
HXLINE( 648)							{
HXLINE( 648)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_right;
HXDLIN( 648)								int state = 1;
HXDLIN( 648)								int _g = 0;
HXDLIN( 648)								while((_g < copyKeys5->length)){
HXLINE( 648)									int key = copyKeys5->__get(_g);
HXDLIN( 648)									_g = (_g + 1);
HXDLIN( 648)									if ((key != -1)) {
HXLINE( 648)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 648)							{
HXLINE( 648)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_rightP;
HXDLIN( 648)								int state1 = 2;
HXDLIN( 648)								int _g1 = 0;
HXDLIN( 648)								while((_g1 < copyKeys5->length)){
HXLINE( 648)									int key = copyKeys5->__get(_g1);
HXDLIN( 648)									_g1 = (_g1 + 1);
HXDLIN( 648)									if ((key != -1)) {
HXLINE( 648)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 648)							{
HXLINE( 648)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_rightR;
HXDLIN( 648)								int state2 = -1;
HXDLIN( 648)								int _g2 = 0;
HXDLIN( 648)								while((_g2 < copyKeys5->length)){
HXLINE( 648)									int key = copyKeys5->__get(_g2);
HXDLIN( 648)									_g2 = (_g2 + 1);
HXDLIN( 648)									if ((key != -1)) {
HXLINE( 648)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)3: {
HXLINE( 648)							{
HXLINE( 648)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_down;
HXDLIN( 648)								int state = 1;
HXDLIN( 648)								int _g = 0;
HXDLIN( 648)								while((_g < copyKeys5->length)){
HXLINE( 648)									int key = copyKeys5->__get(_g);
HXDLIN( 648)									_g = (_g + 1);
HXDLIN( 648)									if ((key != -1)) {
HXLINE( 648)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 648)							{
HXLINE( 648)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_downP;
HXDLIN( 648)								int state1 = 2;
HXDLIN( 648)								int _g1 = 0;
HXDLIN( 648)								while((_g1 < copyKeys5->length)){
HXLINE( 648)									int key = copyKeys5->__get(_g1);
HXDLIN( 648)									_g1 = (_g1 + 1);
HXDLIN( 648)									if ((key != -1)) {
HXLINE( 648)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 648)							{
HXLINE( 648)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_downR;
HXDLIN( 648)								int state2 = -1;
HXDLIN( 648)								int _g2 = 0;
HXDLIN( 648)								while((_g2 < copyKeys5->length)){
HXLINE( 648)									int key = copyKeys5->__get(_g2);
HXDLIN( 648)									_g2 = (_g2 + 1);
HXDLIN( 648)									if ((key != -1)) {
HXLINE( 648)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)4: {
HXLINE( 648)							{
HXLINE( 648)								 ::flixel::input::actions::FlxActionDigital action = this->_note_up;
HXDLIN( 648)								int state = 1;
HXDLIN( 648)								int _g = 0;
HXDLIN( 648)								while((_g < copyKeys5->length)){
HXLINE( 648)									int key = copyKeys5->__get(_g);
HXDLIN( 648)									_g = (_g + 1);
HXDLIN( 648)									if ((key != -1)) {
HXLINE( 648)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 648)							{
HXLINE( 648)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_upP;
HXDLIN( 648)								int state1 = 2;
HXDLIN( 648)								int _g1 = 0;
HXDLIN( 648)								while((_g1 < copyKeys5->length)){
HXLINE( 648)									int key = copyKeys5->__get(_g1);
HXDLIN( 648)									_g1 = (_g1 + 1);
HXDLIN( 648)									if ((key != -1)) {
HXLINE( 648)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 648)							{
HXLINE( 648)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_upR;
HXDLIN( 648)								int state2 = -1;
HXDLIN( 648)								int _g2 = 0;
HXDLIN( 648)								while((_g2 < copyKeys5->length)){
HXLINE( 648)									int key = copyKeys5->__get(_g2);
HXDLIN( 648)									_g2 = (_g2 + 1);
HXDLIN( 648)									if ((key != -1)) {
HXLINE( 648)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)5: {
HXLINE( 648)							{
HXLINE( 648)								 ::flixel::input::actions::FlxActionDigital action = this->_note_left;
HXDLIN( 648)								int state = 1;
HXDLIN( 648)								int _g = 0;
HXDLIN( 648)								while((_g < copyKeys5->length)){
HXLINE( 648)									int key = copyKeys5->__get(_g);
HXDLIN( 648)									_g = (_g + 1);
HXDLIN( 648)									if ((key != -1)) {
HXLINE( 648)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 648)							{
HXLINE( 648)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_leftP;
HXDLIN( 648)								int state1 = 2;
HXDLIN( 648)								int _g1 = 0;
HXDLIN( 648)								while((_g1 < copyKeys5->length)){
HXLINE( 648)									int key = copyKeys5->__get(_g1);
HXDLIN( 648)									_g1 = (_g1 + 1);
HXDLIN( 648)									if ((key != -1)) {
HXLINE( 648)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 648)							{
HXLINE( 648)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_leftR;
HXDLIN( 648)								int state2 = -1;
HXDLIN( 648)								int _g2 = 0;
HXDLIN( 648)								while((_g2 < copyKeys5->length)){
HXLINE( 648)									int key = copyKeys5->__get(_g2);
HXDLIN( 648)									_g2 = (_g2 + 1);
HXDLIN( 648)									if ((key != -1)) {
HXLINE( 648)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)6: {
HXLINE( 648)							{
HXLINE( 648)								 ::flixel::input::actions::FlxActionDigital action = this->_note_right;
HXDLIN( 648)								int state = 1;
HXDLIN( 648)								int _g = 0;
HXDLIN( 648)								while((_g < copyKeys5->length)){
HXLINE( 648)									int key = copyKeys5->__get(_g);
HXDLIN( 648)									_g = (_g + 1);
HXDLIN( 648)									if ((key != -1)) {
HXLINE( 648)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 648)							{
HXLINE( 648)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_rightP;
HXDLIN( 648)								int state1 = 2;
HXDLIN( 648)								int _g1 = 0;
HXDLIN( 648)								while((_g1 < copyKeys5->length)){
HXLINE( 648)									int key = copyKeys5->__get(_g1);
HXDLIN( 648)									_g1 = (_g1 + 1);
HXDLIN( 648)									if ((key != -1)) {
HXLINE( 648)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 648)							{
HXLINE( 648)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_rightR;
HXDLIN( 648)								int state2 = -1;
HXDLIN( 648)								int _g2 = 0;
HXDLIN( 648)								while((_g2 < copyKeys5->length)){
HXLINE( 648)									int key = copyKeys5->__get(_g2);
HXDLIN( 648)									_g2 = (_g2 + 1);
HXDLIN( 648)									if ((key != -1)) {
HXLINE( 648)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)7: {
HXLINE( 648)							{
HXLINE( 648)								 ::flixel::input::actions::FlxActionDigital action = this->_note_down;
HXDLIN( 648)								int state = 1;
HXDLIN( 648)								int _g = 0;
HXDLIN( 648)								while((_g < copyKeys5->length)){
HXLINE( 648)									int key = copyKeys5->__get(_g);
HXDLIN( 648)									_g = (_g + 1);
HXDLIN( 648)									if ((key != -1)) {
HXLINE( 648)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 648)							{
HXLINE( 648)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_downP;
HXDLIN( 648)								int state1 = 2;
HXDLIN( 648)								int _g1 = 0;
HXDLIN( 648)								while((_g1 < copyKeys5->length)){
HXLINE( 648)									int key = copyKeys5->__get(_g1);
HXDLIN( 648)									_g1 = (_g1 + 1);
HXDLIN( 648)									if ((key != -1)) {
HXLINE( 648)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 648)							{
HXLINE( 648)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_downR;
HXDLIN( 648)								int state2 = -1;
HXDLIN( 648)								int _g2 = 0;
HXDLIN( 648)								while((_g2 < copyKeys5->length)){
HXLINE( 648)									int key = copyKeys5->__get(_g2);
HXDLIN( 648)									_g2 = (_g2 + 1);
HXDLIN( 648)									if ((key != -1)) {
HXLINE( 648)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)8: {
HXLINE( 648)							 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 648)							int state = 2;
HXDLIN( 648)							int _g = 0;
HXDLIN( 648)							while((_g < copyKeys5->length)){
HXLINE( 648)								int key = copyKeys5->__get(_g);
HXDLIN( 648)								_g = (_g + 1);
HXDLIN( 648)								if ((key != -1)) {
HXLINE( 648)									action->addKey(key,state);
            								}
            							}
            						}
            						break;
            						case (int)9: {
HXLINE( 648)							 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 648)							int state = 2;
HXDLIN( 648)							int _g = 0;
HXDLIN( 648)							while((_g < copyKeys5->length)){
HXLINE( 648)								int key = copyKeys5->__get(_g);
HXDLIN( 648)								_g = (_g + 1);
HXDLIN( 648)								if ((key != -1)) {
HXLINE( 648)									action->addKey(key,state);
            								}
            							}
            						}
            						break;
            						case (int)10: {
HXLINE( 648)							 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 648)							int state = 2;
HXDLIN( 648)							int _g = 0;
HXDLIN( 648)							while((_g < copyKeys5->length)){
HXLINE( 648)								int key = copyKeys5->__get(_g);
HXDLIN( 648)								_g = (_g + 1);
HXDLIN( 648)								if ((key != -1)) {
HXLINE( 648)									action->addKey(key,state);
            								}
            							}
            						}
            						break;
            						case (int)11: {
HXLINE( 648)							 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 648)							int state = 2;
HXDLIN( 648)							int _g = 0;
HXDLIN( 648)							while((_g < copyKeys5->length)){
HXLINE( 648)								int key = copyKeys5->__get(_g);
HXDLIN( 648)								_g = (_g + 1);
HXDLIN( 648)								if ((key != -1)) {
HXLINE( 648)									action->addKey(key,state);
            								}
            							}
            						}
            						break;
            					}
            				}
HXLINE( 649)				{
HXLINE( 649)					::Array< int > copyKeys6 = ( (::Array< int >)(keysMap->get(HX_("note_left",b4,fe,20,a5))) )->copy();
HXDLIN( 649)					{
HXLINE( 649)						int _g12 = 0;
HXDLIN( 649)						int _g13 = copyKeys6->length;
HXDLIN( 649)						while((_g12 < _g13)){
HXLINE( 649)							_g12 = (_g12 + 1);
HXDLIN( 649)							int i = (_g12 - 1);
HXDLIN( 649)							if ((i == -1)) {
HXLINE( 649)								copyKeys6->remove(i);
            							}
            						}
            					}
HXDLIN( 649)					switch((int)(::Control_obj::NOTE_LEFT_dyn()->_hx_getIndex())){
            						case (int)0: {
HXLINE( 649)							{
HXLINE( 649)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_up;
HXDLIN( 649)								int state = 1;
HXDLIN( 649)								int _g = 0;
HXDLIN( 649)								while((_g < copyKeys6->length)){
HXLINE( 649)									int key = copyKeys6->__get(_g);
HXDLIN( 649)									_g = (_g + 1);
HXDLIN( 649)									if ((key != -1)) {
HXLINE( 649)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 649)							{
HXLINE( 649)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_upP;
HXDLIN( 649)								int state1 = 2;
HXDLIN( 649)								int _g1 = 0;
HXDLIN( 649)								while((_g1 < copyKeys6->length)){
HXLINE( 649)									int key = copyKeys6->__get(_g1);
HXDLIN( 649)									_g1 = (_g1 + 1);
HXDLIN( 649)									if ((key != -1)) {
HXLINE( 649)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 649)							{
HXLINE( 649)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_upR;
HXDLIN( 649)								int state2 = -1;
HXDLIN( 649)								int _g2 = 0;
HXDLIN( 649)								while((_g2 < copyKeys6->length)){
HXLINE( 649)									int key = copyKeys6->__get(_g2);
HXDLIN( 649)									_g2 = (_g2 + 1);
HXDLIN( 649)									if ((key != -1)) {
HXLINE( 649)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)1: {
HXLINE( 649)							{
HXLINE( 649)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_left;
HXDLIN( 649)								int state = 1;
HXDLIN( 649)								int _g = 0;
HXDLIN( 649)								while((_g < copyKeys6->length)){
HXLINE( 649)									int key = copyKeys6->__get(_g);
HXDLIN( 649)									_g = (_g + 1);
HXDLIN( 649)									if ((key != -1)) {
HXLINE( 649)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 649)							{
HXLINE( 649)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_leftP;
HXDLIN( 649)								int state1 = 2;
HXDLIN( 649)								int _g1 = 0;
HXDLIN( 649)								while((_g1 < copyKeys6->length)){
HXLINE( 649)									int key = copyKeys6->__get(_g1);
HXDLIN( 649)									_g1 = (_g1 + 1);
HXDLIN( 649)									if ((key != -1)) {
HXLINE( 649)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 649)							{
HXLINE( 649)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_leftR;
HXDLIN( 649)								int state2 = -1;
HXDLIN( 649)								int _g2 = 0;
HXDLIN( 649)								while((_g2 < copyKeys6->length)){
HXLINE( 649)									int key = copyKeys6->__get(_g2);
HXDLIN( 649)									_g2 = (_g2 + 1);
HXDLIN( 649)									if ((key != -1)) {
HXLINE( 649)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)2: {
HXLINE( 649)							{
HXLINE( 649)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_right;
HXDLIN( 649)								int state = 1;
HXDLIN( 649)								int _g = 0;
HXDLIN( 649)								while((_g < copyKeys6->length)){
HXLINE( 649)									int key = copyKeys6->__get(_g);
HXDLIN( 649)									_g = (_g + 1);
HXDLIN( 649)									if ((key != -1)) {
HXLINE( 649)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 649)							{
HXLINE( 649)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_rightP;
HXDLIN( 649)								int state1 = 2;
HXDLIN( 649)								int _g1 = 0;
HXDLIN( 649)								while((_g1 < copyKeys6->length)){
HXLINE( 649)									int key = copyKeys6->__get(_g1);
HXDLIN( 649)									_g1 = (_g1 + 1);
HXDLIN( 649)									if ((key != -1)) {
HXLINE( 649)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 649)							{
HXLINE( 649)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_rightR;
HXDLIN( 649)								int state2 = -1;
HXDLIN( 649)								int _g2 = 0;
HXDLIN( 649)								while((_g2 < copyKeys6->length)){
HXLINE( 649)									int key = copyKeys6->__get(_g2);
HXDLIN( 649)									_g2 = (_g2 + 1);
HXDLIN( 649)									if ((key != -1)) {
HXLINE( 649)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)3: {
HXLINE( 649)							{
HXLINE( 649)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_down;
HXDLIN( 649)								int state = 1;
HXDLIN( 649)								int _g = 0;
HXDLIN( 649)								while((_g < copyKeys6->length)){
HXLINE( 649)									int key = copyKeys6->__get(_g);
HXDLIN( 649)									_g = (_g + 1);
HXDLIN( 649)									if ((key != -1)) {
HXLINE( 649)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 649)							{
HXLINE( 649)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_downP;
HXDLIN( 649)								int state1 = 2;
HXDLIN( 649)								int _g1 = 0;
HXDLIN( 649)								while((_g1 < copyKeys6->length)){
HXLINE( 649)									int key = copyKeys6->__get(_g1);
HXDLIN( 649)									_g1 = (_g1 + 1);
HXDLIN( 649)									if ((key != -1)) {
HXLINE( 649)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 649)							{
HXLINE( 649)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_downR;
HXDLIN( 649)								int state2 = -1;
HXDLIN( 649)								int _g2 = 0;
HXDLIN( 649)								while((_g2 < copyKeys6->length)){
HXLINE( 649)									int key = copyKeys6->__get(_g2);
HXDLIN( 649)									_g2 = (_g2 + 1);
HXDLIN( 649)									if ((key != -1)) {
HXLINE( 649)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)4: {
HXLINE( 649)							{
HXLINE( 649)								 ::flixel::input::actions::FlxActionDigital action = this->_note_up;
HXDLIN( 649)								int state = 1;
HXDLIN( 649)								int _g = 0;
HXDLIN( 649)								while((_g < copyKeys6->length)){
HXLINE( 649)									int key = copyKeys6->__get(_g);
HXDLIN( 649)									_g = (_g + 1);
HXDLIN( 649)									if ((key != -1)) {
HXLINE( 649)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 649)							{
HXLINE( 649)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_upP;
HXDLIN( 649)								int state1 = 2;
HXDLIN( 649)								int _g1 = 0;
HXDLIN( 649)								while((_g1 < copyKeys6->length)){
HXLINE( 649)									int key = copyKeys6->__get(_g1);
HXDLIN( 649)									_g1 = (_g1 + 1);
HXDLIN( 649)									if ((key != -1)) {
HXLINE( 649)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 649)							{
HXLINE( 649)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_upR;
HXDLIN( 649)								int state2 = -1;
HXDLIN( 649)								int _g2 = 0;
HXDLIN( 649)								while((_g2 < copyKeys6->length)){
HXLINE( 649)									int key = copyKeys6->__get(_g2);
HXDLIN( 649)									_g2 = (_g2 + 1);
HXDLIN( 649)									if ((key != -1)) {
HXLINE( 649)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)5: {
HXLINE( 649)							{
HXLINE( 649)								 ::flixel::input::actions::FlxActionDigital action = this->_note_left;
HXDLIN( 649)								int state = 1;
HXDLIN( 649)								int _g = 0;
HXDLIN( 649)								while((_g < copyKeys6->length)){
HXLINE( 649)									int key = copyKeys6->__get(_g);
HXDLIN( 649)									_g = (_g + 1);
HXDLIN( 649)									if ((key != -1)) {
HXLINE( 649)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 649)							{
HXLINE( 649)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_leftP;
HXDLIN( 649)								int state1 = 2;
HXDLIN( 649)								int _g1 = 0;
HXDLIN( 649)								while((_g1 < copyKeys6->length)){
HXLINE( 649)									int key = copyKeys6->__get(_g1);
HXDLIN( 649)									_g1 = (_g1 + 1);
HXDLIN( 649)									if ((key != -1)) {
HXLINE( 649)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 649)							{
HXLINE( 649)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_leftR;
HXDLIN( 649)								int state2 = -1;
HXDLIN( 649)								int _g2 = 0;
HXDLIN( 649)								while((_g2 < copyKeys6->length)){
HXLINE( 649)									int key = copyKeys6->__get(_g2);
HXDLIN( 649)									_g2 = (_g2 + 1);
HXDLIN( 649)									if ((key != -1)) {
HXLINE( 649)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)6: {
HXLINE( 649)							{
HXLINE( 649)								 ::flixel::input::actions::FlxActionDigital action = this->_note_right;
HXDLIN( 649)								int state = 1;
HXDLIN( 649)								int _g = 0;
HXDLIN( 649)								while((_g < copyKeys6->length)){
HXLINE( 649)									int key = copyKeys6->__get(_g);
HXDLIN( 649)									_g = (_g + 1);
HXDLIN( 649)									if ((key != -1)) {
HXLINE( 649)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 649)							{
HXLINE( 649)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_rightP;
HXDLIN( 649)								int state1 = 2;
HXDLIN( 649)								int _g1 = 0;
HXDLIN( 649)								while((_g1 < copyKeys6->length)){
HXLINE( 649)									int key = copyKeys6->__get(_g1);
HXDLIN( 649)									_g1 = (_g1 + 1);
HXDLIN( 649)									if ((key != -1)) {
HXLINE( 649)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 649)							{
HXLINE( 649)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_rightR;
HXDLIN( 649)								int state2 = -1;
HXDLIN( 649)								int _g2 = 0;
HXDLIN( 649)								while((_g2 < copyKeys6->length)){
HXLINE( 649)									int key = copyKeys6->__get(_g2);
HXDLIN( 649)									_g2 = (_g2 + 1);
HXDLIN( 649)									if ((key != -1)) {
HXLINE( 649)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)7: {
HXLINE( 649)							{
HXLINE( 649)								 ::flixel::input::actions::FlxActionDigital action = this->_note_down;
HXDLIN( 649)								int state = 1;
HXDLIN( 649)								int _g = 0;
HXDLIN( 649)								while((_g < copyKeys6->length)){
HXLINE( 649)									int key = copyKeys6->__get(_g);
HXDLIN( 649)									_g = (_g + 1);
HXDLIN( 649)									if ((key != -1)) {
HXLINE( 649)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 649)							{
HXLINE( 649)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_downP;
HXDLIN( 649)								int state1 = 2;
HXDLIN( 649)								int _g1 = 0;
HXDLIN( 649)								while((_g1 < copyKeys6->length)){
HXLINE( 649)									int key = copyKeys6->__get(_g1);
HXDLIN( 649)									_g1 = (_g1 + 1);
HXDLIN( 649)									if ((key != -1)) {
HXLINE( 649)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 649)							{
HXLINE( 649)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_downR;
HXDLIN( 649)								int state2 = -1;
HXDLIN( 649)								int _g2 = 0;
HXDLIN( 649)								while((_g2 < copyKeys6->length)){
HXLINE( 649)									int key = copyKeys6->__get(_g2);
HXDLIN( 649)									_g2 = (_g2 + 1);
HXDLIN( 649)									if ((key != -1)) {
HXLINE( 649)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)8: {
HXLINE( 649)							 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 649)							int state = 2;
HXDLIN( 649)							int _g = 0;
HXDLIN( 649)							while((_g < copyKeys6->length)){
HXLINE( 649)								int key = copyKeys6->__get(_g);
HXDLIN( 649)								_g = (_g + 1);
HXDLIN( 649)								if ((key != -1)) {
HXLINE( 649)									action->addKey(key,state);
            								}
            							}
            						}
            						break;
            						case (int)9: {
HXLINE( 649)							 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 649)							int state = 2;
HXDLIN( 649)							int _g = 0;
HXDLIN( 649)							while((_g < copyKeys6->length)){
HXLINE( 649)								int key = copyKeys6->__get(_g);
HXDLIN( 649)								_g = (_g + 1);
HXDLIN( 649)								if ((key != -1)) {
HXLINE( 649)									action->addKey(key,state);
            								}
            							}
            						}
            						break;
            						case (int)10: {
HXLINE( 649)							 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 649)							int state = 2;
HXDLIN( 649)							int _g = 0;
HXDLIN( 649)							while((_g < copyKeys6->length)){
HXLINE( 649)								int key = copyKeys6->__get(_g);
HXDLIN( 649)								_g = (_g + 1);
HXDLIN( 649)								if ((key != -1)) {
HXLINE( 649)									action->addKey(key,state);
            								}
            							}
            						}
            						break;
            						case (int)11: {
HXLINE( 649)							 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 649)							int state = 2;
HXDLIN( 649)							int _g = 0;
HXDLIN( 649)							while((_g < copyKeys6->length)){
HXLINE( 649)								int key = copyKeys6->__get(_g);
HXDLIN( 649)								_g = (_g + 1);
HXDLIN( 649)								if ((key != -1)) {
HXLINE( 649)									action->addKey(key,state);
            								}
            							}
            						}
            						break;
            					}
            				}
HXLINE( 650)				{
HXLINE( 650)					::Array< int > copyKeys7 = ( (::Array< int >)(keysMap->get(HX_("note_right",8f,ec,ca,4e))) )->copy();
HXDLIN( 650)					{
HXLINE( 650)						int _g14 = 0;
HXDLIN( 650)						int _g15 = copyKeys7->length;
HXDLIN( 650)						while((_g14 < _g15)){
HXLINE( 650)							_g14 = (_g14 + 1);
HXDLIN( 650)							int i = (_g14 - 1);
HXDLIN( 650)							if ((i == -1)) {
HXLINE( 650)								copyKeys7->remove(i);
            							}
            						}
            					}
HXDLIN( 650)					switch((int)(::Control_obj::NOTE_RIGHT_dyn()->_hx_getIndex())){
            						case (int)0: {
HXLINE( 650)							{
HXLINE( 650)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_up;
HXDLIN( 650)								int state = 1;
HXDLIN( 650)								int _g = 0;
HXDLIN( 650)								while((_g < copyKeys7->length)){
HXLINE( 650)									int key = copyKeys7->__get(_g);
HXDLIN( 650)									_g = (_g + 1);
HXDLIN( 650)									if ((key != -1)) {
HXLINE( 650)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 650)							{
HXLINE( 650)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_upP;
HXDLIN( 650)								int state1 = 2;
HXDLIN( 650)								int _g1 = 0;
HXDLIN( 650)								while((_g1 < copyKeys7->length)){
HXLINE( 650)									int key = copyKeys7->__get(_g1);
HXDLIN( 650)									_g1 = (_g1 + 1);
HXDLIN( 650)									if ((key != -1)) {
HXLINE( 650)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 650)							{
HXLINE( 650)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_upR;
HXDLIN( 650)								int state2 = -1;
HXDLIN( 650)								int _g2 = 0;
HXDLIN( 650)								while((_g2 < copyKeys7->length)){
HXLINE( 650)									int key = copyKeys7->__get(_g2);
HXDLIN( 650)									_g2 = (_g2 + 1);
HXDLIN( 650)									if ((key != -1)) {
HXLINE( 650)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)1: {
HXLINE( 650)							{
HXLINE( 650)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_left;
HXDLIN( 650)								int state = 1;
HXDLIN( 650)								int _g = 0;
HXDLIN( 650)								while((_g < copyKeys7->length)){
HXLINE( 650)									int key = copyKeys7->__get(_g);
HXDLIN( 650)									_g = (_g + 1);
HXDLIN( 650)									if ((key != -1)) {
HXLINE( 650)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 650)							{
HXLINE( 650)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_leftP;
HXDLIN( 650)								int state1 = 2;
HXDLIN( 650)								int _g1 = 0;
HXDLIN( 650)								while((_g1 < copyKeys7->length)){
HXLINE( 650)									int key = copyKeys7->__get(_g1);
HXDLIN( 650)									_g1 = (_g1 + 1);
HXDLIN( 650)									if ((key != -1)) {
HXLINE( 650)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 650)							{
HXLINE( 650)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_leftR;
HXDLIN( 650)								int state2 = -1;
HXDLIN( 650)								int _g2 = 0;
HXDLIN( 650)								while((_g2 < copyKeys7->length)){
HXLINE( 650)									int key = copyKeys7->__get(_g2);
HXDLIN( 650)									_g2 = (_g2 + 1);
HXDLIN( 650)									if ((key != -1)) {
HXLINE( 650)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)2: {
HXLINE( 650)							{
HXLINE( 650)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_right;
HXDLIN( 650)								int state = 1;
HXDLIN( 650)								int _g = 0;
HXDLIN( 650)								while((_g < copyKeys7->length)){
HXLINE( 650)									int key = copyKeys7->__get(_g);
HXDLIN( 650)									_g = (_g + 1);
HXDLIN( 650)									if ((key != -1)) {
HXLINE( 650)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 650)							{
HXLINE( 650)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_rightP;
HXDLIN( 650)								int state1 = 2;
HXDLIN( 650)								int _g1 = 0;
HXDLIN( 650)								while((_g1 < copyKeys7->length)){
HXLINE( 650)									int key = copyKeys7->__get(_g1);
HXDLIN( 650)									_g1 = (_g1 + 1);
HXDLIN( 650)									if ((key != -1)) {
HXLINE( 650)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 650)							{
HXLINE( 650)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_rightR;
HXDLIN( 650)								int state2 = -1;
HXDLIN( 650)								int _g2 = 0;
HXDLIN( 650)								while((_g2 < copyKeys7->length)){
HXLINE( 650)									int key = copyKeys7->__get(_g2);
HXDLIN( 650)									_g2 = (_g2 + 1);
HXDLIN( 650)									if ((key != -1)) {
HXLINE( 650)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)3: {
HXLINE( 650)							{
HXLINE( 650)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_down;
HXDLIN( 650)								int state = 1;
HXDLIN( 650)								int _g = 0;
HXDLIN( 650)								while((_g < copyKeys7->length)){
HXLINE( 650)									int key = copyKeys7->__get(_g);
HXDLIN( 650)									_g = (_g + 1);
HXDLIN( 650)									if ((key != -1)) {
HXLINE( 650)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 650)							{
HXLINE( 650)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_downP;
HXDLIN( 650)								int state1 = 2;
HXDLIN( 650)								int _g1 = 0;
HXDLIN( 650)								while((_g1 < copyKeys7->length)){
HXLINE( 650)									int key = copyKeys7->__get(_g1);
HXDLIN( 650)									_g1 = (_g1 + 1);
HXDLIN( 650)									if ((key != -1)) {
HXLINE( 650)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 650)							{
HXLINE( 650)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_downR;
HXDLIN( 650)								int state2 = -1;
HXDLIN( 650)								int _g2 = 0;
HXDLIN( 650)								while((_g2 < copyKeys7->length)){
HXLINE( 650)									int key = copyKeys7->__get(_g2);
HXDLIN( 650)									_g2 = (_g2 + 1);
HXDLIN( 650)									if ((key != -1)) {
HXLINE( 650)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)4: {
HXLINE( 650)							{
HXLINE( 650)								 ::flixel::input::actions::FlxActionDigital action = this->_note_up;
HXDLIN( 650)								int state = 1;
HXDLIN( 650)								int _g = 0;
HXDLIN( 650)								while((_g < copyKeys7->length)){
HXLINE( 650)									int key = copyKeys7->__get(_g);
HXDLIN( 650)									_g = (_g + 1);
HXDLIN( 650)									if ((key != -1)) {
HXLINE( 650)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 650)							{
HXLINE( 650)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_upP;
HXDLIN( 650)								int state1 = 2;
HXDLIN( 650)								int _g1 = 0;
HXDLIN( 650)								while((_g1 < copyKeys7->length)){
HXLINE( 650)									int key = copyKeys7->__get(_g1);
HXDLIN( 650)									_g1 = (_g1 + 1);
HXDLIN( 650)									if ((key != -1)) {
HXLINE( 650)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 650)							{
HXLINE( 650)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_upR;
HXDLIN( 650)								int state2 = -1;
HXDLIN( 650)								int _g2 = 0;
HXDLIN( 650)								while((_g2 < copyKeys7->length)){
HXLINE( 650)									int key = copyKeys7->__get(_g2);
HXDLIN( 650)									_g2 = (_g2 + 1);
HXDLIN( 650)									if ((key != -1)) {
HXLINE( 650)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)5: {
HXLINE( 650)							{
HXLINE( 650)								 ::flixel::input::actions::FlxActionDigital action = this->_note_left;
HXDLIN( 650)								int state = 1;
HXDLIN( 650)								int _g = 0;
HXDLIN( 650)								while((_g < copyKeys7->length)){
HXLINE( 650)									int key = copyKeys7->__get(_g);
HXDLIN( 650)									_g = (_g + 1);
HXDLIN( 650)									if ((key != -1)) {
HXLINE( 650)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 650)							{
HXLINE( 650)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_leftP;
HXDLIN( 650)								int state1 = 2;
HXDLIN( 650)								int _g1 = 0;
HXDLIN( 650)								while((_g1 < copyKeys7->length)){
HXLINE( 650)									int key = copyKeys7->__get(_g1);
HXDLIN( 650)									_g1 = (_g1 + 1);
HXDLIN( 650)									if ((key != -1)) {
HXLINE( 650)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 650)							{
HXLINE( 650)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_leftR;
HXDLIN( 650)								int state2 = -1;
HXDLIN( 650)								int _g2 = 0;
HXDLIN( 650)								while((_g2 < copyKeys7->length)){
HXLINE( 650)									int key = copyKeys7->__get(_g2);
HXDLIN( 650)									_g2 = (_g2 + 1);
HXDLIN( 650)									if ((key != -1)) {
HXLINE( 650)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)6: {
HXLINE( 650)							{
HXLINE( 650)								 ::flixel::input::actions::FlxActionDigital action = this->_note_right;
HXDLIN( 650)								int state = 1;
HXDLIN( 650)								int _g = 0;
HXDLIN( 650)								while((_g < copyKeys7->length)){
HXLINE( 650)									int key = copyKeys7->__get(_g);
HXDLIN( 650)									_g = (_g + 1);
HXDLIN( 650)									if ((key != -1)) {
HXLINE( 650)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 650)							{
HXLINE( 650)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_rightP;
HXDLIN( 650)								int state1 = 2;
HXDLIN( 650)								int _g1 = 0;
HXDLIN( 650)								while((_g1 < copyKeys7->length)){
HXLINE( 650)									int key = copyKeys7->__get(_g1);
HXDLIN( 650)									_g1 = (_g1 + 1);
HXDLIN( 650)									if ((key != -1)) {
HXLINE( 650)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 650)							{
HXLINE( 650)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_rightR;
HXDLIN( 650)								int state2 = -1;
HXDLIN( 650)								int _g2 = 0;
HXDLIN( 650)								while((_g2 < copyKeys7->length)){
HXLINE( 650)									int key = copyKeys7->__get(_g2);
HXDLIN( 650)									_g2 = (_g2 + 1);
HXDLIN( 650)									if ((key != -1)) {
HXLINE( 650)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)7: {
HXLINE( 650)							{
HXLINE( 650)								 ::flixel::input::actions::FlxActionDigital action = this->_note_down;
HXDLIN( 650)								int state = 1;
HXDLIN( 650)								int _g = 0;
HXDLIN( 650)								while((_g < copyKeys7->length)){
HXLINE( 650)									int key = copyKeys7->__get(_g);
HXDLIN( 650)									_g = (_g + 1);
HXDLIN( 650)									if ((key != -1)) {
HXLINE( 650)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 650)							{
HXLINE( 650)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_downP;
HXDLIN( 650)								int state1 = 2;
HXDLIN( 650)								int _g1 = 0;
HXDLIN( 650)								while((_g1 < copyKeys7->length)){
HXLINE( 650)									int key = copyKeys7->__get(_g1);
HXDLIN( 650)									_g1 = (_g1 + 1);
HXDLIN( 650)									if ((key != -1)) {
HXLINE( 650)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 650)							{
HXLINE( 650)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_downR;
HXDLIN( 650)								int state2 = -1;
HXDLIN( 650)								int _g2 = 0;
HXDLIN( 650)								while((_g2 < copyKeys7->length)){
HXLINE( 650)									int key = copyKeys7->__get(_g2);
HXDLIN( 650)									_g2 = (_g2 + 1);
HXDLIN( 650)									if ((key != -1)) {
HXLINE( 650)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)8: {
HXLINE( 650)							 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 650)							int state = 2;
HXDLIN( 650)							int _g = 0;
HXDLIN( 650)							while((_g < copyKeys7->length)){
HXLINE( 650)								int key = copyKeys7->__get(_g);
HXDLIN( 650)								_g = (_g + 1);
HXDLIN( 650)								if ((key != -1)) {
HXLINE( 650)									action->addKey(key,state);
            								}
            							}
            						}
            						break;
            						case (int)9: {
HXLINE( 650)							 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 650)							int state = 2;
HXDLIN( 650)							int _g = 0;
HXDLIN( 650)							while((_g < copyKeys7->length)){
HXLINE( 650)								int key = copyKeys7->__get(_g);
HXDLIN( 650)								_g = (_g + 1);
HXDLIN( 650)								if ((key != -1)) {
HXLINE( 650)									action->addKey(key,state);
            								}
            							}
            						}
            						break;
            						case (int)10: {
HXLINE( 650)							 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 650)							int state = 2;
HXDLIN( 650)							int _g = 0;
HXDLIN( 650)							while((_g < copyKeys7->length)){
HXLINE( 650)								int key = copyKeys7->__get(_g);
HXDLIN( 650)								_g = (_g + 1);
HXDLIN( 650)								if ((key != -1)) {
HXLINE( 650)									action->addKey(key,state);
            								}
            							}
            						}
            						break;
            						case (int)11: {
HXLINE( 650)							 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 650)							int state = 2;
HXDLIN( 650)							int _g = 0;
HXDLIN( 650)							while((_g < copyKeys7->length)){
HXLINE( 650)								int key = copyKeys7->__get(_g);
HXDLIN( 650)								_g = (_g + 1);
HXDLIN( 650)								if ((key != -1)) {
HXLINE( 650)									action->addKey(key,state);
            								}
            							}
            						}
            						break;
            					}
            				}
HXLINE( 652)				{
HXLINE( 652)					::Array< int > copyKeys8 = ( (::Array< int >)(keysMap->get(HX_("accept",08,93,06,0b))) )->copy();
HXDLIN( 652)					{
HXLINE( 652)						int _g16 = 0;
HXDLIN( 652)						int _g17 = copyKeys8->length;
HXDLIN( 652)						while((_g16 < _g17)){
HXLINE( 652)							_g16 = (_g16 + 1);
HXDLIN( 652)							int i = (_g16 - 1);
HXDLIN( 652)							if ((i == -1)) {
HXLINE( 652)								copyKeys8->remove(i);
            							}
            						}
            					}
HXDLIN( 652)					switch((int)(::Control_obj::ACCEPT_dyn()->_hx_getIndex())){
            						case (int)0: {
HXLINE( 652)							{
HXLINE( 652)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_up;
HXDLIN( 652)								int state = 1;
HXDLIN( 652)								int _g = 0;
HXDLIN( 652)								while((_g < copyKeys8->length)){
HXLINE( 652)									int key = copyKeys8->__get(_g);
HXDLIN( 652)									_g = (_g + 1);
HXDLIN( 652)									if ((key != -1)) {
HXLINE( 652)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 652)							{
HXLINE( 652)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_upP;
HXDLIN( 652)								int state1 = 2;
HXDLIN( 652)								int _g1 = 0;
HXDLIN( 652)								while((_g1 < copyKeys8->length)){
HXLINE( 652)									int key = copyKeys8->__get(_g1);
HXDLIN( 652)									_g1 = (_g1 + 1);
HXDLIN( 652)									if ((key != -1)) {
HXLINE( 652)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 652)							{
HXLINE( 652)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_upR;
HXDLIN( 652)								int state2 = -1;
HXDLIN( 652)								int _g2 = 0;
HXDLIN( 652)								while((_g2 < copyKeys8->length)){
HXLINE( 652)									int key = copyKeys8->__get(_g2);
HXDLIN( 652)									_g2 = (_g2 + 1);
HXDLIN( 652)									if ((key != -1)) {
HXLINE( 652)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)1: {
HXLINE( 652)							{
HXLINE( 652)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_left;
HXDLIN( 652)								int state = 1;
HXDLIN( 652)								int _g = 0;
HXDLIN( 652)								while((_g < copyKeys8->length)){
HXLINE( 652)									int key = copyKeys8->__get(_g);
HXDLIN( 652)									_g = (_g + 1);
HXDLIN( 652)									if ((key != -1)) {
HXLINE( 652)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 652)							{
HXLINE( 652)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_leftP;
HXDLIN( 652)								int state1 = 2;
HXDLIN( 652)								int _g1 = 0;
HXDLIN( 652)								while((_g1 < copyKeys8->length)){
HXLINE( 652)									int key = copyKeys8->__get(_g1);
HXDLIN( 652)									_g1 = (_g1 + 1);
HXDLIN( 652)									if ((key != -1)) {
HXLINE( 652)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 652)							{
HXLINE( 652)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_leftR;
HXDLIN( 652)								int state2 = -1;
HXDLIN( 652)								int _g2 = 0;
HXDLIN( 652)								while((_g2 < copyKeys8->length)){
HXLINE( 652)									int key = copyKeys8->__get(_g2);
HXDLIN( 652)									_g2 = (_g2 + 1);
HXDLIN( 652)									if ((key != -1)) {
HXLINE( 652)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)2: {
HXLINE( 652)							{
HXLINE( 652)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_right;
HXDLIN( 652)								int state = 1;
HXDLIN( 652)								int _g = 0;
HXDLIN( 652)								while((_g < copyKeys8->length)){
HXLINE( 652)									int key = copyKeys8->__get(_g);
HXDLIN( 652)									_g = (_g + 1);
HXDLIN( 652)									if ((key != -1)) {
HXLINE( 652)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 652)							{
HXLINE( 652)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_rightP;
HXDLIN( 652)								int state1 = 2;
HXDLIN( 652)								int _g1 = 0;
HXDLIN( 652)								while((_g1 < copyKeys8->length)){
HXLINE( 652)									int key = copyKeys8->__get(_g1);
HXDLIN( 652)									_g1 = (_g1 + 1);
HXDLIN( 652)									if ((key != -1)) {
HXLINE( 652)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 652)							{
HXLINE( 652)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_rightR;
HXDLIN( 652)								int state2 = -1;
HXDLIN( 652)								int _g2 = 0;
HXDLIN( 652)								while((_g2 < copyKeys8->length)){
HXLINE( 652)									int key = copyKeys8->__get(_g2);
HXDLIN( 652)									_g2 = (_g2 + 1);
HXDLIN( 652)									if ((key != -1)) {
HXLINE( 652)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)3: {
HXLINE( 652)							{
HXLINE( 652)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_down;
HXDLIN( 652)								int state = 1;
HXDLIN( 652)								int _g = 0;
HXDLIN( 652)								while((_g < copyKeys8->length)){
HXLINE( 652)									int key = copyKeys8->__get(_g);
HXDLIN( 652)									_g = (_g + 1);
HXDLIN( 652)									if ((key != -1)) {
HXLINE( 652)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 652)							{
HXLINE( 652)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_downP;
HXDLIN( 652)								int state1 = 2;
HXDLIN( 652)								int _g1 = 0;
HXDLIN( 652)								while((_g1 < copyKeys8->length)){
HXLINE( 652)									int key = copyKeys8->__get(_g1);
HXDLIN( 652)									_g1 = (_g1 + 1);
HXDLIN( 652)									if ((key != -1)) {
HXLINE( 652)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 652)							{
HXLINE( 652)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_downR;
HXDLIN( 652)								int state2 = -1;
HXDLIN( 652)								int _g2 = 0;
HXDLIN( 652)								while((_g2 < copyKeys8->length)){
HXLINE( 652)									int key = copyKeys8->__get(_g2);
HXDLIN( 652)									_g2 = (_g2 + 1);
HXDLIN( 652)									if ((key != -1)) {
HXLINE( 652)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)4: {
HXLINE( 652)							{
HXLINE( 652)								 ::flixel::input::actions::FlxActionDigital action = this->_note_up;
HXDLIN( 652)								int state = 1;
HXDLIN( 652)								int _g = 0;
HXDLIN( 652)								while((_g < copyKeys8->length)){
HXLINE( 652)									int key = copyKeys8->__get(_g);
HXDLIN( 652)									_g = (_g + 1);
HXDLIN( 652)									if ((key != -1)) {
HXLINE( 652)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 652)							{
HXLINE( 652)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_upP;
HXDLIN( 652)								int state1 = 2;
HXDLIN( 652)								int _g1 = 0;
HXDLIN( 652)								while((_g1 < copyKeys8->length)){
HXLINE( 652)									int key = copyKeys8->__get(_g1);
HXDLIN( 652)									_g1 = (_g1 + 1);
HXDLIN( 652)									if ((key != -1)) {
HXLINE( 652)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 652)							{
HXLINE( 652)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_upR;
HXDLIN( 652)								int state2 = -1;
HXDLIN( 652)								int _g2 = 0;
HXDLIN( 652)								while((_g2 < copyKeys8->length)){
HXLINE( 652)									int key = copyKeys8->__get(_g2);
HXDLIN( 652)									_g2 = (_g2 + 1);
HXDLIN( 652)									if ((key != -1)) {
HXLINE( 652)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)5: {
HXLINE( 652)							{
HXLINE( 652)								 ::flixel::input::actions::FlxActionDigital action = this->_note_left;
HXDLIN( 652)								int state = 1;
HXDLIN( 652)								int _g = 0;
HXDLIN( 652)								while((_g < copyKeys8->length)){
HXLINE( 652)									int key = copyKeys8->__get(_g);
HXDLIN( 652)									_g = (_g + 1);
HXDLIN( 652)									if ((key != -1)) {
HXLINE( 652)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 652)							{
HXLINE( 652)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_leftP;
HXDLIN( 652)								int state1 = 2;
HXDLIN( 652)								int _g1 = 0;
HXDLIN( 652)								while((_g1 < copyKeys8->length)){
HXLINE( 652)									int key = copyKeys8->__get(_g1);
HXDLIN( 652)									_g1 = (_g1 + 1);
HXDLIN( 652)									if ((key != -1)) {
HXLINE( 652)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 652)							{
HXLINE( 652)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_leftR;
HXDLIN( 652)								int state2 = -1;
HXDLIN( 652)								int _g2 = 0;
HXDLIN( 652)								while((_g2 < copyKeys8->length)){
HXLINE( 652)									int key = copyKeys8->__get(_g2);
HXDLIN( 652)									_g2 = (_g2 + 1);
HXDLIN( 652)									if ((key != -1)) {
HXLINE( 652)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)6: {
HXLINE( 652)							{
HXLINE( 652)								 ::flixel::input::actions::FlxActionDigital action = this->_note_right;
HXDLIN( 652)								int state = 1;
HXDLIN( 652)								int _g = 0;
HXDLIN( 652)								while((_g < copyKeys8->length)){
HXLINE( 652)									int key = copyKeys8->__get(_g);
HXDLIN( 652)									_g = (_g + 1);
HXDLIN( 652)									if ((key != -1)) {
HXLINE( 652)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 652)							{
HXLINE( 652)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_rightP;
HXDLIN( 652)								int state1 = 2;
HXDLIN( 652)								int _g1 = 0;
HXDLIN( 652)								while((_g1 < copyKeys8->length)){
HXLINE( 652)									int key = copyKeys8->__get(_g1);
HXDLIN( 652)									_g1 = (_g1 + 1);
HXDLIN( 652)									if ((key != -1)) {
HXLINE( 652)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 652)							{
HXLINE( 652)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_rightR;
HXDLIN( 652)								int state2 = -1;
HXDLIN( 652)								int _g2 = 0;
HXDLIN( 652)								while((_g2 < copyKeys8->length)){
HXLINE( 652)									int key = copyKeys8->__get(_g2);
HXDLIN( 652)									_g2 = (_g2 + 1);
HXDLIN( 652)									if ((key != -1)) {
HXLINE( 652)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)7: {
HXLINE( 652)							{
HXLINE( 652)								 ::flixel::input::actions::FlxActionDigital action = this->_note_down;
HXDLIN( 652)								int state = 1;
HXDLIN( 652)								int _g = 0;
HXDLIN( 652)								while((_g < copyKeys8->length)){
HXLINE( 652)									int key = copyKeys8->__get(_g);
HXDLIN( 652)									_g = (_g + 1);
HXDLIN( 652)									if ((key != -1)) {
HXLINE( 652)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 652)							{
HXLINE( 652)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_downP;
HXDLIN( 652)								int state1 = 2;
HXDLIN( 652)								int _g1 = 0;
HXDLIN( 652)								while((_g1 < copyKeys8->length)){
HXLINE( 652)									int key = copyKeys8->__get(_g1);
HXDLIN( 652)									_g1 = (_g1 + 1);
HXDLIN( 652)									if ((key != -1)) {
HXLINE( 652)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 652)							{
HXLINE( 652)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_downR;
HXDLIN( 652)								int state2 = -1;
HXDLIN( 652)								int _g2 = 0;
HXDLIN( 652)								while((_g2 < copyKeys8->length)){
HXLINE( 652)									int key = copyKeys8->__get(_g2);
HXDLIN( 652)									_g2 = (_g2 + 1);
HXDLIN( 652)									if ((key != -1)) {
HXLINE( 652)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)8: {
HXLINE( 652)							 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 652)							int state = 2;
HXDLIN( 652)							int _g = 0;
HXDLIN( 652)							while((_g < copyKeys8->length)){
HXLINE( 652)								int key = copyKeys8->__get(_g);
HXDLIN( 652)								_g = (_g + 1);
HXDLIN( 652)								if ((key != -1)) {
HXLINE( 652)									action->addKey(key,state);
            								}
            							}
            						}
            						break;
            						case (int)9: {
HXLINE( 652)							 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 652)							int state = 2;
HXDLIN( 652)							int _g = 0;
HXDLIN( 652)							while((_g < copyKeys8->length)){
HXLINE( 652)								int key = copyKeys8->__get(_g);
HXDLIN( 652)								_g = (_g + 1);
HXDLIN( 652)								if ((key != -1)) {
HXLINE( 652)									action->addKey(key,state);
            								}
            							}
            						}
            						break;
            						case (int)10: {
HXLINE( 652)							 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 652)							int state = 2;
HXDLIN( 652)							int _g = 0;
HXDLIN( 652)							while((_g < copyKeys8->length)){
HXLINE( 652)								int key = copyKeys8->__get(_g);
HXDLIN( 652)								_g = (_g + 1);
HXDLIN( 652)								if ((key != -1)) {
HXLINE( 652)									action->addKey(key,state);
            								}
            							}
            						}
            						break;
            						case (int)11: {
HXLINE( 652)							 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 652)							int state = 2;
HXDLIN( 652)							int _g = 0;
HXDLIN( 652)							while((_g < copyKeys8->length)){
HXLINE( 652)								int key = copyKeys8->__get(_g);
HXDLIN( 652)								_g = (_g + 1);
HXDLIN( 652)								if ((key != -1)) {
HXLINE( 652)									action->addKey(key,state);
            								}
            							}
            						}
            						break;
            					}
            				}
HXLINE( 653)				{
HXLINE( 653)					::Array< int > copyKeys9 = ( (::Array< int >)(keysMap->get(HX_("back",27,da,10,41))) )->copy();
HXDLIN( 653)					{
HXLINE( 653)						int _g18 = 0;
HXDLIN( 653)						int _g19 = copyKeys9->length;
HXDLIN( 653)						while((_g18 < _g19)){
HXLINE( 653)							_g18 = (_g18 + 1);
HXDLIN( 653)							int i = (_g18 - 1);
HXDLIN( 653)							if ((i == -1)) {
HXLINE( 653)								copyKeys9->remove(i);
            							}
            						}
            					}
HXDLIN( 653)					switch((int)(::Control_obj::BACK_dyn()->_hx_getIndex())){
            						case (int)0: {
HXLINE( 653)							{
HXLINE( 653)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_up;
HXDLIN( 653)								int state = 1;
HXDLIN( 653)								int _g = 0;
HXDLIN( 653)								while((_g < copyKeys9->length)){
HXLINE( 653)									int key = copyKeys9->__get(_g);
HXDLIN( 653)									_g = (_g + 1);
HXDLIN( 653)									if ((key != -1)) {
HXLINE( 653)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 653)							{
HXLINE( 653)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_upP;
HXDLIN( 653)								int state1 = 2;
HXDLIN( 653)								int _g1 = 0;
HXDLIN( 653)								while((_g1 < copyKeys9->length)){
HXLINE( 653)									int key = copyKeys9->__get(_g1);
HXDLIN( 653)									_g1 = (_g1 + 1);
HXDLIN( 653)									if ((key != -1)) {
HXLINE( 653)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 653)							{
HXLINE( 653)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_upR;
HXDLIN( 653)								int state2 = -1;
HXDLIN( 653)								int _g2 = 0;
HXDLIN( 653)								while((_g2 < copyKeys9->length)){
HXLINE( 653)									int key = copyKeys9->__get(_g2);
HXDLIN( 653)									_g2 = (_g2 + 1);
HXDLIN( 653)									if ((key != -1)) {
HXLINE( 653)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)1: {
HXLINE( 653)							{
HXLINE( 653)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_left;
HXDLIN( 653)								int state = 1;
HXDLIN( 653)								int _g = 0;
HXDLIN( 653)								while((_g < copyKeys9->length)){
HXLINE( 653)									int key = copyKeys9->__get(_g);
HXDLIN( 653)									_g = (_g + 1);
HXDLIN( 653)									if ((key != -1)) {
HXLINE( 653)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 653)							{
HXLINE( 653)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_leftP;
HXDLIN( 653)								int state1 = 2;
HXDLIN( 653)								int _g1 = 0;
HXDLIN( 653)								while((_g1 < copyKeys9->length)){
HXLINE( 653)									int key = copyKeys9->__get(_g1);
HXDLIN( 653)									_g1 = (_g1 + 1);
HXDLIN( 653)									if ((key != -1)) {
HXLINE( 653)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 653)							{
HXLINE( 653)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_leftR;
HXDLIN( 653)								int state2 = -1;
HXDLIN( 653)								int _g2 = 0;
HXDLIN( 653)								while((_g2 < copyKeys9->length)){
HXLINE( 653)									int key = copyKeys9->__get(_g2);
HXDLIN( 653)									_g2 = (_g2 + 1);
HXDLIN( 653)									if ((key != -1)) {
HXLINE( 653)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)2: {
HXLINE( 653)							{
HXLINE( 653)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_right;
HXDLIN( 653)								int state = 1;
HXDLIN( 653)								int _g = 0;
HXDLIN( 653)								while((_g < copyKeys9->length)){
HXLINE( 653)									int key = copyKeys9->__get(_g);
HXDLIN( 653)									_g = (_g + 1);
HXDLIN( 653)									if ((key != -1)) {
HXLINE( 653)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 653)							{
HXLINE( 653)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_rightP;
HXDLIN( 653)								int state1 = 2;
HXDLIN( 653)								int _g1 = 0;
HXDLIN( 653)								while((_g1 < copyKeys9->length)){
HXLINE( 653)									int key = copyKeys9->__get(_g1);
HXDLIN( 653)									_g1 = (_g1 + 1);
HXDLIN( 653)									if ((key != -1)) {
HXLINE( 653)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 653)							{
HXLINE( 653)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_rightR;
HXDLIN( 653)								int state2 = -1;
HXDLIN( 653)								int _g2 = 0;
HXDLIN( 653)								while((_g2 < copyKeys9->length)){
HXLINE( 653)									int key = copyKeys9->__get(_g2);
HXDLIN( 653)									_g2 = (_g2 + 1);
HXDLIN( 653)									if ((key != -1)) {
HXLINE( 653)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)3: {
HXLINE( 653)							{
HXLINE( 653)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_down;
HXDLIN( 653)								int state = 1;
HXDLIN( 653)								int _g = 0;
HXDLIN( 653)								while((_g < copyKeys9->length)){
HXLINE( 653)									int key = copyKeys9->__get(_g);
HXDLIN( 653)									_g = (_g + 1);
HXDLIN( 653)									if ((key != -1)) {
HXLINE( 653)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 653)							{
HXLINE( 653)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_downP;
HXDLIN( 653)								int state1 = 2;
HXDLIN( 653)								int _g1 = 0;
HXDLIN( 653)								while((_g1 < copyKeys9->length)){
HXLINE( 653)									int key = copyKeys9->__get(_g1);
HXDLIN( 653)									_g1 = (_g1 + 1);
HXDLIN( 653)									if ((key != -1)) {
HXLINE( 653)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 653)							{
HXLINE( 653)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_downR;
HXDLIN( 653)								int state2 = -1;
HXDLIN( 653)								int _g2 = 0;
HXDLIN( 653)								while((_g2 < copyKeys9->length)){
HXLINE( 653)									int key = copyKeys9->__get(_g2);
HXDLIN( 653)									_g2 = (_g2 + 1);
HXDLIN( 653)									if ((key != -1)) {
HXLINE( 653)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)4: {
HXLINE( 653)							{
HXLINE( 653)								 ::flixel::input::actions::FlxActionDigital action = this->_note_up;
HXDLIN( 653)								int state = 1;
HXDLIN( 653)								int _g = 0;
HXDLIN( 653)								while((_g < copyKeys9->length)){
HXLINE( 653)									int key = copyKeys9->__get(_g);
HXDLIN( 653)									_g = (_g + 1);
HXDLIN( 653)									if ((key != -1)) {
HXLINE( 653)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 653)							{
HXLINE( 653)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_upP;
HXDLIN( 653)								int state1 = 2;
HXDLIN( 653)								int _g1 = 0;
HXDLIN( 653)								while((_g1 < copyKeys9->length)){
HXLINE( 653)									int key = copyKeys9->__get(_g1);
HXDLIN( 653)									_g1 = (_g1 + 1);
HXDLIN( 653)									if ((key != -1)) {
HXLINE( 653)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 653)							{
HXLINE( 653)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_upR;
HXDLIN( 653)								int state2 = -1;
HXDLIN( 653)								int _g2 = 0;
HXDLIN( 653)								while((_g2 < copyKeys9->length)){
HXLINE( 653)									int key = copyKeys9->__get(_g2);
HXDLIN( 653)									_g2 = (_g2 + 1);
HXDLIN( 653)									if ((key != -1)) {
HXLINE( 653)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)5: {
HXLINE( 653)							{
HXLINE( 653)								 ::flixel::input::actions::FlxActionDigital action = this->_note_left;
HXDLIN( 653)								int state = 1;
HXDLIN( 653)								int _g = 0;
HXDLIN( 653)								while((_g < copyKeys9->length)){
HXLINE( 653)									int key = copyKeys9->__get(_g);
HXDLIN( 653)									_g = (_g + 1);
HXDLIN( 653)									if ((key != -1)) {
HXLINE( 653)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 653)							{
HXLINE( 653)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_leftP;
HXDLIN( 653)								int state1 = 2;
HXDLIN( 653)								int _g1 = 0;
HXDLIN( 653)								while((_g1 < copyKeys9->length)){
HXLINE( 653)									int key = copyKeys9->__get(_g1);
HXDLIN( 653)									_g1 = (_g1 + 1);
HXDLIN( 653)									if ((key != -1)) {
HXLINE( 653)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 653)							{
HXLINE( 653)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_leftR;
HXDLIN( 653)								int state2 = -1;
HXDLIN( 653)								int _g2 = 0;
HXDLIN( 653)								while((_g2 < copyKeys9->length)){
HXLINE( 653)									int key = copyKeys9->__get(_g2);
HXDLIN( 653)									_g2 = (_g2 + 1);
HXDLIN( 653)									if ((key != -1)) {
HXLINE( 653)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)6: {
HXLINE( 653)							{
HXLINE( 653)								 ::flixel::input::actions::FlxActionDigital action = this->_note_right;
HXDLIN( 653)								int state = 1;
HXDLIN( 653)								int _g = 0;
HXDLIN( 653)								while((_g < copyKeys9->length)){
HXLINE( 653)									int key = copyKeys9->__get(_g);
HXDLIN( 653)									_g = (_g + 1);
HXDLIN( 653)									if ((key != -1)) {
HXLINE( 653)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 653)							{
HXLINE( 653)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_rightP;
HXDLIN( 653)								int state1 = 2;
HXDLIN( 653)								int _g1 = 0;
HXDLIN( 653)								while((_g1 < copyKeys9->length)){
HXLINE( 653)									int key = copyKeys9->__get(_g1);
HXDLIN( 653)									_g1 = (_g1 + 1);
HXDLIN( 653)									if ((key != -1)) {
HXLINE( 653)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 653)							{
HXLINE( 653)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_rightR;
HXDLIN( 653)								int state2 = -1;
HXDLIN( 653)								int _g2 = 0;
HXDLIN( 653)								while((_g2 < copyKeys9->length)){
HXLINE( 653)									int key = copyKeys9->__get(_g2);
HXDLIN( 653)									_g2 = (_g2 + 1);
HXDLIN( 653)									if ((key != -1)) {
HXLINE( 653)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)7: {
HXLINE( 653)							{
HXLINE( 653)								 ::flixel::input::actions::FlxActionDigital action = this->_note_down;
HXDLIN( 653)								int state = 1;
HXDLIN( 653)								int _g = 0;
HXDLIN( 653)								while((_g < copyKeys9->length)){
HXLINE( 653)									int key = copyKeys9->__get(_g);
HXDLIN( 653)									_g = (_g + 1);
HXDLIN( 653)									if ((key != -1)) {
HXLINE( 653)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 653)							{
HXLINE( 653)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_downP;
HXDLIN( 653)								int state1 = 2;
HXDLIN( 653)								int _g1 = 0;
HXDLIN( 653)								while((_g1 < copyKeys9->length)){
HXLINE( 653)									int key = copyKeys9->__get(_g1);
HXDLIN( 653)									_g1 = (_g1 + 1);
HXDLIN( 653)									if ((key != -1)) {
HXLINE( 653)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 653)							{
HXLINE( 653)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_downR;
HXDLIN( 653)								int state2 = -1;
HXDLIN( 653)								int _g2 = 0;
HXDLIN( 653)								while((_g2 < copyKeys9->length)){
HXLINE( 653)									int key = copyKeys9->__get(_g2);
HXDLIN( 653)									_g2 = (_g2 + 1);
HXDLIN( 653)									if ((key != -1)) {
HXLINE( 653)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)8: {
HXLINE( 653)							 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 653)							int state = 2;
HXDLIN( 653)							int _g = 0;
HXDLIN( 653)							while((_g < copyKeys9->length)){
HXLINE( 653)								int key = copyKeys9->__get(_g);
HXDLIN( 653)								_g = (_g + 1);
HXDLIN( 653)								if ((key != -1)) {
HXLINE( 653)									action->addKey(key,state);
            								}
            							}
            						}
            						break;
            						case (int)9: {
HXLINE( 653)							 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 653)							int state = 2;
HXDLIN( 653)							int _g = 0;
HXDLIN( 653)							while((_g < copyKeys9->length)){
HXLINE( 653)								int key = copyKeys9->__get(_g);
HXDLIN( 653)								_g = (_g + 1);
HXDLIN( 653)								if ((key != -1)) {
HXLINE( 653)									action->addKey(key,state);
            								}
            							}
            						}
            						break;
            						case (int)10: {
HXLINE( 653)							 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 653)							int state = 2;
HXDLIN( 653)							int _g = 0;
HXDLIN( 653)							while((_g < copyKeys9->length)){
HXLINE( 653)								int key = copyKeys9->__get(_g);
HXDLIN( 653)								_g = (_g + 1);
HXDLIN( 653)								if ((key != -1)) {
HXLINE( 653)									action->addKey(key,state);
            								}
            							}
            						}
            						break;
            						case (int)11: {
HXLINE( 653)							 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 653)							int state = 2;
HXDLIN( 653)							int _g = 0;
HXDLIN( 653)							while((_g < copyKeys9->length)){
HXLINE( 653)								int key = copyKeys9->__get(_g);
HXDLIN( 653)								_g = (_g + 1);
HXDLIN( 653)								if ((key != -1)) {
HXLINE( 653)									action->addKey(key,state);
            								}
            							}
            						}
            						break;
            					}
            				}
HXLINE( 654)				{
HXLINE( 654)					::Array< int > copyKeys10 = ( (::Array< int >)(keysMap->get(HX_("pause",f6,d6,57,bd))) )->copy();
HXDLIN( 654)					{
HXLINE( 654)						int _g20 = 0;
HXDLIN( 654)						int _g21 = copyKeys10->length;
HXDLIN( 654)						while((_g20 < _g21)){
HXLINE( 654)							_g20 = (_g20 + 1);
HXDLIN( 654)							int i = (_g20 - 1);
HXDLIN( 654)							if ((i == -1)) {
HXLINE( 654)								copyKeys10->remove(i);
            							}
            						}
            					}
HXDLIN( 654)					switch((int)(::Control_obj::PAUSE_dyn()->_hx_getIndex())){
            						case (int)0: {
HXLINE( 654)							{
HXLINE( 654)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_up;
HXDLIN( 654)								int state = 1;
HXDLIN( 654)								int _g = 0;
HXDLIN( 654)								while((_g < copyKeys10->length)){
HXLINE( 654)									int key = copyKeys10->__get(_g);
HXDLIN( 654)									_g = (_g + 1);
HXDLIN( 654)									if ((key != -1)) {
HXLINE( 654)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 654)							{
HXLINE( 654)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_upP;
HXDLIN( 654)								int state1 = 2;
HXDLIN( 654)								int _g1 = 0;
HXDLIN( 654)								while((_g1 < copyKeys10->length)){
HXLINE( 654)									int key = copyKeys10->__get(_g1);
HXDLIN( 654)									_g1 = (_g1 + 1);
HXDLIN( 654)									if ((key != -1)) {
HXLINE( 654)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 654)							{
HXLINE( 654)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_upR;
HXDLIN( 654)								int state2 = -1;
HXDLIN( 654)								int _g2 = 0;
HXDLIN( 654)								while((_g2 < copyKeys10->length)){
HXLINE( 654)									int key = copyKeys10->__get(_g2);
HXDLIN( 654)									_g2 = (_g2 + 1);
HXDLIN( 654)									if ((key != -1)) {
HXLINE( 654)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)1: {
HXLINE( 654)							{
HXLINE( 654)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_left;
HXDLIN( 654)								int state = 1;
HXDLIN( 654)								int _g = 0;
HXDLIN( 654)								while((_g < copyKeys10->length)){
HXLINE( 654)									int key = copyKeys10->__get(_g);
HXDLIN( 654)									_g = (_g + 1);
HXDLIN( 654)									if ((key != -1)) {
HXLINE( 654)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 654)							{
HXLINE( 654)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_leftP;
HXDLIN( 654)								int state1 = 2;
HXDLIN( 654)								int _g1 = 0;
HXDLIN( 654)								while((_g1 < copyKeys10->length)){
HXLINE( 654)									int key = copyKeys10->__get(_g1);
HXDLIN( 654)									_g1 = (_g1 + 1);
HXDLIN( 654)									if ((key != -1)) {
HXLINE( 654)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 654)							{
HXLINE( 654)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_leftR;
HXDLIN( 654)								int state2 = -1;
HXDLIN( 654)								int _g2 = 0;
HXDLIN( 654)								while((_g2 < copyKeys10->length)){
HXLINE( 654)									int key = copyKeys10->__get(_g2);
HXDLIN( 654)									_g2 = (_g2 + 1);
HXDLIN( 654)									if ((key != -1)) {
HXLINE( 654)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)2: {
HXLINE( 654)							{
HXLINE( 654)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_right;
HXDLIN( 654)								int state = 1;
HXDLIN( 654)								int _g = 0;
HXDLIN( 654)								while((_g < copyKeys10->length)){
HXLINE( 654)									int key = copyKeys10->__get(_g);
HXDLIN( 654)									_g = (_g + 1);
HXDLIN( 654)									if ((key != -1)) {
HXLINE( 654)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 654)							{
HXLINE( 654)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_rightP;
HXDLIN( 654)								int state1 = 2;
HXDLIN( 654)								int _g1 = 0;
HXDLIN( 654)								while((_g1 < copyKeys10->length)){
HXLINE( 654)									int key = copyKeys10->__get(_g1);
HXDLIN( 654)									_g1 = (_g1 + 1);
HXDLIN( 654)									if ((key != -1)) {
HXLINE( 654)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 654)							{
HXLINE( 654)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_rightR;
HXDLIN( 654)								int state2 = -1;
HXDLIN( 654)								int _g2 = 0;
HXDLIN( 654)								while((_g2 < copyKeys10->length)){
HXLINE( 654)									int key = copyKeys10->__get(_g2);
HXDLIN( 654)									_g2 = (_g2 + 1);
HXDLIN( 654)									if ((key != -1)) {
HXLINE( 654)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)3: {
HXLINE( 654)							{
HXLINE( 654)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_down;
HXDLIN( 654)								int state = 1;
HXDLIN( 654)								int _g = 0;
HXDLIN( 654)								while((_g < copyKeys10->length)){
HXLINE( 654)									int key = copyKeys10->__get(_g);
HXDLIN( 654)									_g = (_g + 1);
HXDLIN( 654)									if ((key != -1)) {
HXLINE( 654)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 654)							{
HXLINE( 654)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_downP;
HXDLIN( 654)								int state1 = 2;
HXDLIN( 654)								int _g1 = 0;
HXDLIN( 654)								while((_g1 < copyKeys10->length)){
HXLINE( 654)									int key = copyKeys10->__get(_g1);
HXDLIN( 654)									_g1 = (_g1 + 1);
HXDLIN( 654)									if ((key != -1)) {
HXLINE( 654)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 654)							{
HXLINE( 654)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_downR;
HXDLIN( 654)								int state2 = -1;
HXDLIN( 654)								int _g2 = 0;
HXDLIN( 654)								while((_g2 < copyKeys10->length)){
HXLINE( 654)									int key = copyKeys10->__get(_g2);
HXDLIN( 654)									_g2 = (_g2 + 1);
HXDLIN( 654)									if ((key != -1)) {
HXLINE( 654)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)4: {
HXLINE( 654)							{
HXLINE( 654)								 ::flixel::input::actions::FlxActionDigital action = this->_note_up;
HXDLIN( 654)								int state = 1;
HXDLIN( 654)								int _g = 0;
HXDLIN( 654)								while((_g < copyKeys10->length)){
HXLINE( 654)									int key = copyKeys10->__get(_g);
HXDLIN( 654)									_g = (_g + 1);
HXDLIN( 654)									if ((key != -1)) {
HXLINE( 654)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 654)							{
HXLINE( 654)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_upP;
HXDLIN( 654)								int state1 = 2;
HXDLIN( 654)								int _g1 = 0;
HXDLIN( 654)								while((_g1 < copyKeys10->length)){
HXLINE( 654)									int key = copyKeys10->__get(_g1);
HXDLIN( 654)									_g1 = (_g1 + 1);
HXDLIN( 654)									if ((key != -1)) {
HXLINE( 654)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 654)							{
HXLINE( 654)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_upR;
HXDLIN( 654)								int state2 = -1;
HXDLIN( 654)								int _g2 = 0;
HXDLIN( 654)								while((_g2 < copyKeys10->length)){
HXLINE( 654)									int key = copyKeys10->__get(_g2);
HXDLIN( 654)									_g2 = (_g2 + 1);
HXDLIN( 654)									if ((key != -1)) {
HXLINE( 654)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)5: {
HXLINE( 654)							{
HXLINE( 654)								 ::flixel::input::actions::FlxActionDigital action = this->_note_left;
HXDLIN( 654)								int state = 1;
HXDLIN( 654)								int _g = 0;
HXDLIN( 654)								while((_g < copyKeys10->length)){
HXLINE( 654)									int key = copyKeys10->__get(_g);
HXDLIN( 654)									_g = (_g + 1);
HXDLIN( 654)									if ((key != -1)) {
HXLINE( 654)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 654)							{
HXLINE( 654)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_leftP;
HXDLIN( 654)								int state1 = 2;
HXDLIN( 654)								int _g1 = 0;
HXDLIN( 654)								while((_g1 < copyKeys10->length)){
HXLINE( 654)									int key = copyKeys10->__get(_g1);
HXDLIN( 654)									_g1 = (_g1 + 1);
HXDLIN( 654)									if ((key != -1)) {
HXLINE( 654)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 654)							{
HXLINE( 654)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_leftR;
HXDLIN( 654)								int state2 = -1;
HXDLIN( 654)								int _g2 = 0;
HXDLIN( 654)								while((_g2 < copyKeys10->length)){
HXLINE( 654)									int key = copyKeys10->__get(_g2);
HXDLIN( 654)									_g2 = (_g2 + 1);
HXDLIN( 654)									if ((key != -1)) {
HXLINE( 654)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)6: {
HXLINE( 654)							{
HXLINE( 654)								 ::flixel::input::actions::FlxActionDigital action = this->_note_right;
HXDLIN( 654)								int state = 1;
HXDLIN( 654)								int _g = 0;
HXDLIN( 654)								while((_g < copyKeys10->length)){
HXLINE( 654)									int key = copyKeys10->__get(_g);
HXDLIN( 654)									_g = (_g + 1);
HXDLIN( 654)									if ((key != -1)) {
HXLINE( 654)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 654)							{
HXLINE( 654)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_rightP;
HXDLIN( 654)								int state1 = 2;
HXDLIN( 654)								int _g1 = 0;
HXDLIN( 654)								while((_g1 < copyKeys10->length)){
HXLINE( 654)									int key = copyKeys10->__get(_g1);
HXDLIN( 654)									_g1 = (_g1 + 1);
HXDLIN( 654)									if ((key != -1)) {
HXLINE( 654)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 654)							{
HXLINE( 654)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_rightR;
HXDLIN( 654)								int state2 = -1;
HXDLIN( 654)								int _g2 = 0;
HXDLIN( 654)								while((_g2 < copyKeys10->length)){
HXLINE( 654)									int key = copyKeys10->__get(_g2);
HXDLIN( 654)									_g2 = (_g2 + 1);
HXDLIN( 654)									if ((key != -1)) {
HXLINE( 654)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)7: {
HXLINE( 654)							{
HXLINE( 654)								 ::flixel::input::actions::FlxActionDigital action = this->_note_down;
HXDLIN( 654)								int state = 1;
HXDLIN( 654)								int _g = 0;
HXDLIN( 654)								while((_g < copyKeys10->length)){
HXLINE( 654)									int key = copyKeys10->__get(_g);
HXDLIN( 654)									_g = (_g + 1);
HXDLIN( 654)									if ((key != -1)) {
HXLINE( 654)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 654)							{
HXLINE( 654)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_downP;
HXDLIN( 654)								int state1 = 2;
HXDLIN( 654)								int _g1 = 0;
HXDLIN( 654)								while((_g1 < copyKeys10->length)){
HXLINE( 654)									int key = copyKeys10->__get(_g1);
HXDLIN( 654)									_g1 = (_g1 + 1);
HXDLIN( 654)									if ((key != -1)) {
HXLINE( 654)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 654)							{
HXLINE( 654)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_downR;
HXDLIN( 654)								int state2 = -1;
HXDLIN( 654)								int _g2 = 0;
HXDLIN( 654)								while((_g2 < copyKeys10->length)){
HXLINE( 654)									int key = copyKeys10->__get(_g2);
HXDLIN( 654)									_g2 = (_g2 + 1);
HXDLIN( 654)									if ((key != -1)) {
HXLINE( 654)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)8: {
HXLINE( 654)							 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 654)							int state = 2;
HXDLIN( 654)							int _g = 0;
HXDLIN( 654)							while((_g < copyKeys10->length)){
HXLINE( 654)								int key = copyKeys10->__get(_g);
HXDLIN( 654)								_g = (_g + 1);
HXDLIN( 654)								if ((key != -1)) {
HXLINE( 654)									action->addKey(key,state);
            								}
            							}
            						}
            						break;
            						case (int)9: {
HXLINE( 654)							 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 654)							int state = 2;
HXDLIN( 654)							int _g = 0;
HXDLIN( 654)							while((_g < copyKeys10->length)){
HXLINE( 654)								int key = copyKeys10->__get(_g);
HXDLIN( 654)								_g = (_g + 1);
HXDLIN( 654)								if ((key != -1)) {
HXLINE( 654)									action->addKey(key,state);
            								}
            							}
            						}
            						break;
            						case (int)10: {
HXLINE( 654)							 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 654)							int state = 2;
HXDLIN( 654)							int _g = 0;
HXDLIN( 654)							while((_g < copyKeys10->length)){
HXLINE( 654)								int key = copyKeys10->__get(_g);
HXDLIN( 654)								_g = (_g + 1);
HXDLIN( 654)								if ((key != -1)) {
HXLINE( 654)									action->addKey(key,state);
            								}
            							}
            						}
            						break;
            						case (int)11: {
HXLINE( 654)							 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 654)							int state = 2;
HXDLIN( 654)							int _g = 0;
HXDLIN( 654)							while((_g < copyKeys10->length)){
HXLINE( 654)								int key = copyKeys10->__get(_g);
HXDLIN( 654)								_g = (_g + 1);
HXDLIN( 654)								if ((key != -1)) {
HXLINE( 654)									action->addKey(key,state);
            								}
            							}
            						}
            						break;
            					}
            				}
HXLINE( 655)				{
HXLINE( 655)					::Array< int > copyKeys11 = ( (::Array< int >)(keysMap->get(HX_("reset",cf,49,c8,e6))) )->copy();
HXDLIN( 655)					{
HXLINE( 655)						int _g22 = 0;
HXDLIN( 655)						int _g23 = copyKeys11->length;
HXDLIN( 655)						while((_g22 < _g23)){
HXLINE( 655)							_g22 = (_g22 + 1);
HXDLIN( 655)							int i = (_g22 - 1);
HXDLIN( 655)							if ((i == -1)) {
HXLINE( 655)								copyKeys11->remove(i);
            							}
            						}
            					}
HXDLIN( 655)					switch((int)(::Control_obj::RESET_dyn()->_hx_getIndex())){
            						case (int)0: {
HXLINE( 655)							{
HXLINE( 655)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_up;
HXDLIN( 655)								int state = 1;
HXDLIN( 655)								int _g = 0;
HXDLIN( 655)								while((_g < copyKeys11->length)){
HXLINE( 655)									int key = copyKeys11->__get(_g);
HXDLIN( 655)									_g = (_g + 1);
HXDLIN( 655)									if ((key != -1)) {
HXLINE( 655)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 655)							{
HXLINE( 655)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_upP;
HXDLIN( 655)								int state1 = 2;
HXDLIN( 655)								int _g1 = 0;
HXDLIN( 655)								while((_g1 < copyKeys11->length)){
HXLINE( 655)									int key = copyKeys11->__get(_g1);
HXDLIN( 655)									_g1 = (_g1 + 1);
HXDLIN( 655)									if ((key != -1)) {
HXLINE( 655)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 655)							{
HXLINE( 655)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_upR;
HXDLIN( 655)								int state2 = -1;
HXDLIN( 655)								int _g2 = 0;
HXDLIN( 655)								while((_g2 < copyKeys11->length)){
HXLINE( 655)									int key = copyKeys11->__get(_g2);
HXDLIN( 655)									_g2 = (_g2 + 1);
HXDLIN( 655)									if ((key != -1)) {
HXLINE( 655)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)1: {
HXLINE( 655)							{
HXLINE( 655)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_left;
HXDLIN( 655)								int state = 1;
HXDLIN( 655)								int _g = 0;
HXDLIN( 655)								while((_g < copyKeys11->length)){
HXLINE( 655)									int key = copyKeys11->__get(_g);
HXDLIN( 655)									_g = (_g + 1);
HXDLIN( 655)									if ((key != -1)) {
HXLINE( 655)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 655)							{
HXLINE( 655)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_leftP;
HXDLIN( 655)								int state1 = 2;
HXDLIN( 655)								int _g1 = 0;
HXDLIN( 655)								while((_g1 < copyKeys11->length)){
HXLINE( 655)									int key = copyKeys11->__get(_g1);
HXDLIN( 655)									_g1 = (_g1 + 1);
HXDLIN( 655)									if ((key != -1)) {
HXLINE( 655)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 655)							{
HXLINE( 655)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_leftR;
HXDLIN( 655)								int state2 = -1;
HXDLIN( 655)								int _g2 = 0;
HXDLIN( 655)								while((_g2 < copyKeys11->length)){
HXLINE( 655)									int key = copyKeys11->__get(_g2);
HXDLIN( 655)									_g2 = (_g2 + 1);
HXDLIN( 655)									if ((key != -1)) {
HXLINE( 655)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)2: {
HXLINE( 655)							{
HXLINE( 655)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_right;
HXDLIN( 655)								int state = 1;
HXDLIN( 655)								int _g = 0;
HXDLIN( 655)								while((_g < copyKeys11->length)){
HXLINE( 655)									int key = copyKeys11->__get(_g);
HXDLIN( 655)									_g = (_g + 1);
HXDLIN( 655)									if ((key != -1)) {
HXLINE( 655)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 655)							{
HXLINE( 655)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_rightP;
HXDLIN( 655)								int state1 = 2;
HXDLIN( 655)								int _g1 = 0;
HXDLIN( 655)								while((_g1 < copyKeys11->length)){
HXLINE( 655)									int key = copyKeys11->__get(_g1);
HXDLIN( 655)									_g1 = (_g1 + 1);
HXDLIN( 655)									if ((key != -1)) {
HXLINE( 655)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 655)							{
HXLINE( 655)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_rightR;
HXDLIN( 655)								int state2 = -1;
HXDLIN( 655)								int _g2 = 0;
HXDLIN( 655)								while((_g2 < copyKeys11->length)){
HXLINE( 655)									int key = copyKeys11->__get(_g2);
HXDLIN( 655)									_g2 = (_g2 + 1);
HXDLIN( 655)									if ((key != -1)) {
HXLINE( 655)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)3: {
HXLINE( 655)							{
HXLINE( 655)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_down;
HXDLIN( 655)								int state = 1;
HXDLIN( 655)								int _g = 0;
HXDLIN( 655)								while((_g < copyKeys11->length)){
HXLINE( 655)									int key = copyKeys11->__get(_g);
HXDLIN( 655)									_g = (_g + 1);
HXDLIN( 655)									if ((key != -1)) {
HXLINE( 655)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 655)							{
HXLINE( 655)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_downP;
HXDLIN( 655)								int state1 = 2;
HXDLIN( 655)								int _g1 = 0;
HXDLIN( 655)								while((_g1 < copyKeys11->length)){
HXLINE( 655)									int key = copyKeys11->__get(_g1);
HXDLIN( 655)									_g1 = (_g1 + 1);
HXDLIN( 655)									if ((key != -1)) {
HXLINE( 655)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 655)							{
HXLINE( 655)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_downR;
HXDLIN( 655)								int state2 = -1;
HXDLIN( 655)								int _g2 = 0;
HXDLIN( 655)								while((_g2 < copyKeys11->length)){
HXLINE( 655)									int key = copyKeys11->__get(_g2);
HXDLIN( 655)									_g2 = (_g2 + 1);
HXDLIN( 655)									if ((key != -1)) {
HXLINE( 655)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)4: {
HXLINE( 655)							{
HXLINE( 655)								 ::flixel::input::actions::FlxActionDigital action = this->_note_up;
HXDLIN( 655)								int state = 1;
HXDLIN( 655)								int _g = 0;
HXDLIN( 655)								while((_g < copyKeys11->length)){
HXLINE( 655)									int key = copyKeys11->__get(_g);
HXDLIN( 655)									_g = (_g + 1);
HXDLIN( 655)									if ((key != -1)) {
HXLINE( 655)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 655)							{
HXLINE( 655)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_upP;
HXDLIN( 655)								int state1 = 2;
HXDLIN( 655)								int _g1 = 0;
HXDLIN( 655)								while((_g1 < copyKeys11->length)){
HXLINE( 655)									int key = copyKeys11->__get(_g1);
HXDLIN( 655)									_g1 = (_g1 + 1);
HXDLIN( 655)									if ((key != -1)) {
HXLINE( 655)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 655)							{
HXLINE( 655)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_upR;
HXDLIN( 655)								int state2 = -1;
HXDLIN( 655)								int _g2 = 0;
HXDLIN( 655)								while((_g2 < copyKeys11->length)){
HXLINE( 655)									int key = copyKeys11->__get(_g2);
HXDLIN( 655)									_g2 = (_g2 + 1);
HXDLIN( 655)									if ((key != -1)) {
HXLINE( 655)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)5: {
HXLINE( 655)							{
HXLINE( 655)								 ::flixel::input::actions::FlxActionDigital action = this->_note_left;
HXDLIN( 655)								int state = 1;
HXDLIN( 655)								int _g = 0;
HXDLIN( 655)								while((_g < copyKeys11->length)){
HXLINE( 655)									int key = copyKeys11->__get(_g);
HXDLIN( 655)									_g = (_g + 1);
HXDLIN( 655)									if ((key != -1)) {
HXLINE( 655)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 655)							{
HXLINE( 655)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_leftP;
HXDLIN( 655)								int state1 = 2;
HXDLIN( 655)								int _g1 = 0;
HXDLIN( 655)								while((_g1 < copyKeys11->length)){
HXLINE( 655)									int key = copyKeys11->__get(_g1);
HXDLIN( 655)									_g1 = (_g1 + 1);
HXDLIN( 655)									if ((key != -1)) {
HXLINE( 655)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 655)							{
HXLINE( 655)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_leftR;
HXDLIN( 655)								int state2 = -1;
HXDLIN( 655)								int _g2 = 0;
HXDLIN( 655)								while((_g2 < copyKeys11->length)){
HXLINE( 655)									int key = copyKeys11->__get(_g2);
HXDLIN( 655)									_g2 = (_g2 + 1);
HXDLIN( 655)									if ((key != -1)) {
HXLINE( 655)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)6: {
HXLINE( 655)							{
HXLINE( 655)								 ::flixel::input::actions::FlxActionDigital action = this->_note_right;
HXDLIN( 655)								int state = 1;
HXDLIN( 655)								int _g = 0;
HXDLIN( 655)								while((_g < copyKeys11->length)){
HXLINE( 655)									int key = copyKeys11->__get(_g);
HXDLIN( 655)									_g = (_g + 1);
HXDLIN( 655)									if ((key != -1)) {
HXLINE( 655)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 655)							{
HXLINE( 655)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_rightP;
HXDLIN( 655)								int state1 = 2;
HXDLIN( 655)								int _g1 = 0;
HXDLIN( 655)								while((_g1 < copyKeys11->length)){
HXLINE( 655)									int key = copyKeys11->__get(_g1);
HXDLIN( 655)									_g1 = (_g1 + 1);
HXDLIN( 655)									if ((key != -1)) {
HXLINE( 655)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 655)							{
HXLINE( 655)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_rightR;
HXDLIN( 655)								int state2 = -1;
HXDLIN( 655)								int _g2 = 0;
HXDLIN( 655)								while((_g2 < copyKeys11->length)){
HXLINE( 655)									int key = copyKeys11->__get(_g2);
HXDLIN( 655)									_g2 = (_g2 + 1);
HXDLIN( 655)									if ((key != -1)) {
HXLINE( 655)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)7: {
HXLINE( 655)							{
HXLINE( 655)								 ::flixel::input::actions::FlxActionDigital action = this->_note_down;
HXDLIN( 655)								int state = 1;
HXDLIN( 655)								int _g = 0;
HXDLIN( 655)								while((_g < copyKeys11->length)){
HXLINE( 655)									int key = copyKeys11->__get(_g);
HXDLIN( 655)									_g = (_g + 1);
HXDLIN( 655)									if ((key != -1)) {
HXLINE( 655)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 655)							{
HXLINE( 655)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_downP;
HXDLIN( 655)								int state1 = 2;
HXDLIN( 655)								int _g1 = 0;
HXDLIN( 655)								while((_g1 < copyKeys11->length)){
HXLINE( 655)									int key = copyKeys11->__get(_g1);
HXDLIN( 655)									_g1 = (_g1 + 1);
HXDLIN( 655)									if ((key != -1)) {
HXLINE( 655)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 655)							{
HXLINE( 655)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_downR;
HXDLIN( 655)								int state2 = -1;
HXDLIN( 655)								int _g2 = 0;
HXDLIN( 655)								while((_g2 < copyKeys11->length)){
HXLINE( 655)									int key = copyKeys11->__get(_g2);
HXDLIN( 655)									_g2 = (_g2 + 1);
HXDLIN( 655)									if ((key != -1)) {
HXLINE( 655)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)8: {
HXLINE( 655)							 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 655)							int state = 2;
HXDLIN( 655)							int _g = 0;
HXDLIN( 655)							while((_g < copyKeys11->length)){
HXLINE( 655)								int key = copyKeys11->__get(_g);
HXDLIN( 655)								_g = (_g + 1);
HXDLIN( 655)								if ((key != -1)) {
HXLINE( 655)									action->addKey(key,state);
            								}
            							}
            						}
            						break;
            						case (int)9: {
HXLINE( 655)							 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 655)							int state = 2;
HXDLIN( 655)							int _g = 0;
HXDLIN( 655)							while((_g < copyKeys11->length)){
HXLINE( 655)								int key = copyKeys11->__get(_g);
HXDLIN( 655)								_g = (_g + 1);
HXDLIN( 655)								if ((key != -1)) {
HXLINE( 655)									action->addKey(key,state);
            								}
            							}
            						}
            						break;
            						case (int)10: {
HXLINE( 655)							 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 655)							int state = 2;
HXDLIN( 655)							int _g = 0;
HXDLIN( 655)							while((_g < copyKeys11->length)){
HXLINE( 655)								int key = copyKeys11->__get(_g);
HXDLIN( 655)								_g = (_g + 1);
HXDLIN( 655)								if ((key != -1)) {
HXLINE( 655)									action->addKey(key,state);
            								}
            							}
            						}
            						break;
            						case (int)11: {
HXLINE( 655)							 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 655)							int state = 2;
HXDLIN( 655)							int _g = 0;
HXDLIN( 655)							while((_g < copyKeys11->length)){
HXLINE( 655)								int key = copyKeys11->__get(_g);
HXDLIN( 655)								_g = (_g + 1);
HXDLIN( 655)								if ((key != -1)) {
HXLINE( 655)									action->addKey(key,state);
            								}
            							}
            						}
            						break;
            					}
            				}
            			}
            			break;
            			case (int)1: {
HXLINE( 669)				if (scheme->_hx_getBool(0)) {
HXLINE( 657)					{
HXLINE( 657)						::Array< int > copyKeys = ::Array_obj< int >::fromData( _hx_array_data_116e4296_1120,1)->copy();
HXDLIN( 657)						{
HXLINE( 657)							int _g = 0;
HXDLIN( 657)							int _g1 = copyKeys->length;
HXDLIN( 657)							while((_g < _g1)){
HXLINE( 657)								_g = (_g + 1);
HXDLIN( 657)								int i = (_g - 1);
HXDLIN( 657)								if ((i == -1)) {
HXLINE( 657)									copyKeys->remove(i);
            								}
            							}
            						}
HXDLIN( 657)						switch((int)(::Control_obj::UI_UP_dyn()->_hx_getIndex())){
            							case (int)0: {
HXLINE( 657)								{
HXLINE( 657)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_up;
HXDLIN( 657)									int state = 1;
HXDLIN( 657)									int _g = 0;
HXDLIN( 657)									while((_g < copyKeys->length)){
HXLINE( 657)										int key = copyKeys->__get(_g);
HXDLIN( 657)										_g = (_g + 1);
HXDLIN( 657)										if ((key != -1)) {
HXLINE( 657)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 657)								{
HXLINE( 657)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_upP;
HXDLIN( 657)									int state1 = 2;
HXDLIN( 657)									int _g1 = 0;
HXDLIN( 657)									while((_g1 < copyKeys->length)){
HXLINE( 657)										int key = copyKeys->__get(_g1);
HXDLIN( 657)										_g1 = (_g1 + 1);
HXDLIN( 657)										if ((key != -1)) {
HXLINE( 657)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 657)								{
HXLINE( 657)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_upR;
HXDLIN( 657)									int state2 = -1;
HXDLIN( 657)									int _g2 = 0;
HXDLIN( 657)									while((_g2 < copyKeys->length)){
HXLINE( 657)										int key = copyKeys->__get(_g2);
HXDLIN( 657)										_g2 = (_g2 + 1);
HXDLIN( 657)										if ((key != -1)) {
HXLINE( 657)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)1: {
HXLINE( 657)								{
HXLINE( 657)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_left;
HXDLIN( 657)									int state = 1;
HXDLIN( 657)									int _g = 0;
HXDLIN( 657)									while((_g < copyKeys->length)){
HXLINE( 657)										int key = copyKeys->__get(_g);
HXDLIN( 657)										_g = (_g + 1);
HXDLIN( 657)										if ((key != -1)) {
HXLINE( 657)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 657)								{
HXLINE( 657)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_leftP;
HXDLIN( 657)									int state1 = 2;
HXDLIN( 657)									int _g1 = 0;
HXDLIN( 657)									while((_g1 < copyKeys->length)){
HXLINE( 657)										int key = copyKeys->__get(_g1);
HXDLIN( 657)										_g1 = (_g1 + 1);
HXDLIN( 657)										if ((key != -1)) {
HXLINE( 657)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 657)								{
HXLINE( 657)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_leftR;
HXDLIN( 657)									int state2 = -1;
HXDLIN( 657)									int _g2 = 0;
HXDLIN( 657)									while((_g2 < copyKeys->length)){
HXLINE( 657)										int key = copyKeys->__get(_g2);
HXDLIN( 657)										_g2 = (_g2 + 1);
HXDLIN( 657)										if ((key != -1)) {
HXLINE( 657)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)2: {
HXLINE( 657)								{
HXLINE( 657)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_right;
HXDLIN( 657)									int state = 1;
HXDLIN( 657)									int _g = 0;
HXDLIN( 657)									while((_g < copyKeys->length)){
HXLINE( 657)										int key = copyKeys->__get(_g);
HXDLIN( 657)										_g = (_g + 1);
HXDLIN( 657)										if ((key != -1)) {
HXLINE( 657)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 657)								{
HXLINE( 657)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_rightP;
HXDLIN( 657)									int state1 = 2;
HXDLIN( 657)									int _g1 = 0;
HXDLIN( 657)									while((_g1 < copyKeys->length)){
HXLINE( 657)										int key = copyKeys->__get(_g1);
HXDLIN( 657)										_g1 = (_g1 + 1);
HXDLIN( 657)										if ((key != -1)) {
HXLINE( 657)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 657)								{
HXLINE( 657)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_rightR;
HXDLIN( 657)									int state2 = -1;
HXDLIN( 657)									int _g2 = 0;
HXDLIN( 657)									while((_g2 < copyKeys->length)){
HXLINE( 657)										int key = copyKeys->__get(_g2);
HXDLIN( 657)										_g2 = (_g2 + 1);
HXDLIN( 657)										if ((key != -1)) {
HXLINE( 657)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)3: {
HXLINE( 657)								{
HXLINE( 657)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_down;
HXDLIN( 657)									int state = 1;
HXDLIN( 657)									int _g = 0;
HXDLIN( 657)									while((_g < copyKeys->length)){
HXLINE( 657)										int key = copyKeys->__get(_g);
HXDLIN( 657)										_g = (_g + 1);
HXDLIN( 657)										if ((key != -1)) {
HXLINE( 657)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 657)								{
HXLINE( 657)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_downP;
HXDLIN( 657)									int state1 = 2;
HXDLIN( 657)									int _g1 = 0;
HXDLIN( 657)									while((_g1 < copyKeys->length)){
HXLINE( 657)										int key = copyKeys->__get(_g1);
HXDLIN( 657)										_g1 = (_g1 + 1);
HXDLIN( 657)										if ((key != -1)) {
HXLINE( 657)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 657)								{
HXLINE( 657)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_downR;
HXDLIN( 657)									int state2 = -1;
HXDLIN( 657)									int _g2 = 0;
HXDLIN( 657)									while((_g2 < copyKeys->length)){
HXLINE( 657)										int key = copyKeys->__get(_g2);
HXDLIN( 657)										_g2 = (_g2 + 1);
HXDLIN( 657)										if ((key != -1)) {
HXLINE( 657)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)4: {
HXLINE( 657)								{
HXLINE( 657)									 ::flixel::input::actions::FlxActionDigital action = this->_note_up;
HXDLIN( 657)									int state = 1;
HXDLIN( 657)									int _g = 0;
HXDLIN( 657)									while((_g < copyKeys->length)){
HXLINE( 657)										int key = copyKeys->__get(_g);
HXDLIN( 657)										_g = (_g + 1);
HXDLIN( 657)										if ((key != -1)) {
HXLINE( 657)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 657)								{
HXLINE( 657)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_upP;
HXDLIN( 657)									int state1 = 2;
HXDLIN( 657)									int _g1 = 0;
HXDLIN( 657)									while((_g1 < copyKeys->length)){
HXLINE( 657)										int key = copyKeys->__get(_g1);
HXDLIN( 657)										_g1 = (_g1 + 1);
HXDLIN( 657)										if ((key != -1)) {
HXLINE( 657)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 657)								{
HXLINE( 657)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_upR;
HXDLIN( 657)									int state2 = -1;
HXDLIN( 657)									int _g2 = 0;
HXDLIN( 657)									while((_g2 < copyKeys->length)){
HXLINE( 657)										int key = copyKeys->__get(_g2);
HXDLIN( 657)										_g2 = (_g2 + 1);
HXDLIN( 657)										if ((key != -1)) {
HXLINE( 657)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)5: {
HXLINE( 657)								{
HXLINE( 657)									 ::flixel::input::actions::FlxActionDigital action = this->_note_left;
HXDLIN( 657)									int state = 1;
HXDLIN( 657)									int _g = 0;
HXDLIN( 657)									while((_g < copyKeys->length)){
HXLINE( 657)										int key = copyKeys->__get(_g);
HXDLIN( 657)										_g = (_g + 1);
HXDLIN( 657)										if ((key != -1)) {
HXLINE( 657)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 657)								{
HXLINE( 657)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_leftP;
HXDLIN( 657)									int state1 = 2;
HXDLIN( 657)									int _g1 = 0;
HXDLIN( 657)									while((_g1 < copyKeys->length)){
HXLINE( 657)										int key = copyKeys->__get(_g1);
HXDLIN( 657)										_g1 = (_g1 + 1);
HXDLIN( 657)										if ((key != -1)) {
HXLINE( 657)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 657)								{
HXLINE( 657)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_leftR;
HXDLIN( 657)									int state2 = -1;
HXDLIN( 657)									int _g2 = 0;
HXDLIN( 657)									while((_g2 < copyKeys->length)){
HXLINE( 657)										int key = copyKeys->__get(_g2);
HXDLIN( 657)										_g2 = (_g2 + 1);
HXDLIN( 657)										if ((key != -1)) {
HXLINE( 657)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)6: {
HXLINE( 657)								{
HXLINE( 657)									 ::flixel::input::actions::FlxActionDigital action = this->_note_right;
HXDLIN( 657)									int state = 1;
HXDLIN( 657)									int _g = 0;
HXDLIN( 657)									while((_g < copyKeys->length)){
HXLINE( 657)										int key = copyKeys->__get(_g);
HXDLIN( 657)										_g = (_g + 1);
HXDLIN( 657)										if ((key != -1)) {
HXLINE( 657)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 657)								{
HXLINE( 657)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_rightP;
HXDLIN( 657)									int state1 = 2;
HXDLIN( 657)									int _g1 = 0;
HXDLIN( 657)									while((_g1 < copyKeys->length)){
HXLINE( 657)										int key = copyKeys->__get(_g1);
HXDLIN( 657)										_g1 = (_g1 + 1);
HXDLIN( 657)										if ((key != -1)) {
HXLINE( 657)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 657)								{
HXLINE( 657)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_rightR;
HXDLIN( 657)									int state2 = -1;
HXDLIN( 657)									int _g2 = 0;
HXDLIN( 657)									while((_g2 < copyKeys->length)){
HXLINE( 657)										int key = copyKeys->__get(_g2);
HXDLIN( 657)										_g2 = (_g2 + 1);
HXDLIN( 657)										if ((key != -1)) {
HXLINE( 657)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)7: {
HXLINE( 657)								{
HXLINE( 657)									 ::flixel::input::actions::FlxActionDigital action = this->_note_down;
HXDLIN( 657)									int state = 1;
HXDLIN( 657)									int _g = 0;
HXDLIN( 657)									while((_g < copyKeys->length)){
HXLINE( 657)										int key = copyKeys->__get(_g);
HXDLIN( 657)										_g = (_g + 1);
HXDLIN( 657)										if ((key != -1)) {
HXLINE( 657)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 657)								{
HXLINE( 657)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_downP;
HXDLIN( 657)									int state1 = 2;
HXDLIN( 657)									int _g1 = 0;
HXDLIN( 657)									while((_g1 < copyKeys->length)){
HXLINE( 657)										int key = copyKeys->__get(_g1);
HXDLIN( 657)										_g1 = (_g1 + 1);
HXDLIN( 657)										if ((key != -1)) {
HXLINE( 657)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 657)								{
HXLINE( 657)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_downR;
HXDLIN( 657)									int state2 = -1;
HXDLIN( 657)									int _g2 = 0;
HXDLIN( 657)									while((_g2 < copyKeys->length)){
HXLINE( 657)										int key = copyKeys->__get(_g2);
HXDLIN( 657)										_g2 = (_g2 + 1);
HXDLIN( 657)										if ((key != -1)) {
HXLINE( 657)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)8: {
HXLINE( 657)								 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 657)								int state = 2;
HXDLIN( 657)								int _g = 0;
HXDLIN( 657)								while((_g < copyKeys->length)){
HXLINE( 657)									int key = copyKeys->__get(_g);
HXDLIN( 657)									_g = (_g + 1);
HXDLIN( 657)									if ((key != -1)) {
HXLINE( 657)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)9: {
HXLINE( 657)								 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 657)								int state = 2;
HXDLIN( 657)								int _g = 0;
HXDLIN( 657)								while((_g < copyKeys->length)){
HXLINE( 657)									int key = copyKeys->__get(_g);
HXDLIN( 657)									_g = (_g + 1);
HXDLIN( 657)									if ((key != -1)) {
HXLINE( 657)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)10: {
HXLINE( 657)								 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 657)								int state = 2;
HXDLIN( 657)								int _g = 0;
HXDLIN( 657)								while((_g < copyKeys->length)){
HXLINE( 657)									int key = copyKeys->__get(_g);
HXDLIN( 657)									_g = (_g + 1);
HXDLIN( 657)									if ((key != -1)) {
HXLINE( 657)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)11: {
HXLINE( 657)								 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 657)								int state = 2;
HXDLIN( 657)								int _g = 0;
HXDLIN( 657)								while((_g < copyKeys->length)){
HXLINE( 657)									int key = copyKeys->__get(_g);
HXDLIN( 657)									_g = (_g + 1);
HXDLIN( 657)									if ((key != -1)) {
HXLINE( 657)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            						}
            					}
HXLINE( 658)					{
HXLINE( 658)						::Array< int > copyKeys1 = ::Array_obj< int >::fromData( _hx_array_data_116e4296_1121,1)->copy();
HXDLIN( 658)						{
HXLINE( 658)							int _g2 = 0;
HXDLIN( 658)							int _g3 = copyKeys1->length;
HXDLIN( 658)							while((_g2 < _g3)){
HXLINE( 658)								_g2 = (_g2 + 1);
HXDLIN( 658)								int i = (_g2 - 1);
HXDLIN( 658)								if ((i == -1)) {
HXLINE( 658)									copyKeys1->remove(i);
            								}
            							}
            						}
HXDLIN( 658)						switch((int)(::Control_obj::UI_DOWN_dyn()->_hx_getIndex())){
            							case (int)0: {
HXLINE( 658)								{
HXLINE( 658)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_up;
HXDLIN( 658)									int state = 1;
HXDLIN( 658)									int _g = 0;
HXDLIN( 658)									while((_g < copyKeys1->length)){
HXLINE( 658)										int key = copyKeys1->__get(_g);
HXDLIN( 658)										_g = (_g + 1);
HXDLIN( 658)										if ((key != -1)) {
HXLINE( 658)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 658)								{
HXLINE( 658)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_upP;
HXDLIN( 658)									int state1 = 2;
HXDLIN( 658)									int _g1 = 0;
HXDLIN( 658)									while((_g1 < copyKeys1->length)){
HXLINE( 658)										int key = copyKeys1->__get(_g1);
HXDLIN( 658)										_g1 = (_g1 + 1);
HXDLIN( 658)										if ((key != -1)) {
HXLINE( 658)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 658)								{
HXLINE( 658)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_upR;
HXDLIN( 658)									int state2 = -1;
HXDLIN( 658)									int _g2 = 0;
HXDLIN( 658)									while((_g2 < copyKeys1->length)){
HXLINE( 658)										int key = copyKeys1->__get(_g2);
HXDLIN( 658)										_g2 = (_g2 + 1);
HXDLIN( 658)										if ((key != -1)) {
HXLINE( 658)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)1: {
HXLINE( 658)								{
HXLINE( 658)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_left;
HXDLIN( 658)									int state = 1;
HXDLIN( 658)									int _g = 0;
HXDLIN( 658)									while((_g < copyKeys1->length)){
HXLINE( 658)										int key = copyKeys1->__get(_g);
HXDLIN( 658)										_g = (_g + 1);
HXDLIN( 658)										if ((key != -1)) {
HXLINE( 658)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 658)								{
HXLINE( 658)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_leftP;
HXDLIN( 658)									int state1 = 2;
HXDLIN( 658)									int _g1 = 0;
HXDLIN( 658)									while((_g1 < copyKeys1->length)){
HXLINE( 658)										int key = copyKeys1->__get(_g1);
HXDLIN( 658)										_g1 = (_g1 + 1);
HXDLIN( 658)										if ((key != -1)) {
HXLINE( 658)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 658)								{
HXLINE( 658)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_leftR;
HXDLIN( 658)									int state2 = -1;
HXDLIN( 658)									int _g2 = 0;
HXDLIN( 658)									while((_g2 < copyKeys1->length)){
HXLINE( 658)										int key = copyKeys1->__get(_g2);
HXDLIN( 658)										_g2 = (_g2 + 1);
HXDLIN( 658)										if ((key != -1)) {
HXLINE( 658)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)2: {
HXLINE( 658)								{
HXLINE( 658)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_right;
HXDLIN( 658)									int state = 1;
HXDLIN( 658)									int _g = 0;
HXDLIN( 658)									while((_g < copyKeys1->length)){
HXLINE( 658)										int key = copyKeys1->__get(_g);
HXDLIN( 658)										_g = (_g + 1);
HXDLIN( 658)										if ((key != -1)) {
HXLINE( 658)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 658)								{
HXLINE( 658)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_rightP;
HXDLIN( 658)									int state1 = 2;
HXDLIN( 658)									int _g1 = 0;
HXDLIN( 658)									while((_g1 < copyKeys1->length)){
HXLINE( 658)										int key = copyKeys1->__get(_g1);
HXDLIN( 658)										_g1 = (_g1 + 1);
HXDLIN( 658)										if ((key != -1)) {
HXLINE( 658)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 658)								{
HXLINE( 658)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_rightR;
HXDLIN( 658)									int state2 = -1;
HXDLIN( 658)									int _g2 = 0;
HXDLIN( 658)									while((_g2 < copyKeys1->length)){
HXLINE( 658)										int key = copyKeys1->__get(_g2);
HXDLIN( 658)										_g2 = (_g2 + 1);
HXDLIN( 658)										if ((key != -1)) {
HXLINE( 658)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)3: {
HXLINE( 658)								{
HXLINE( 658)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_down;
HXDLIN( 658)									int state = 1;
HXDLIN( 658)									int _g = 0;
HXDLIN( 658)									while((_g < copyKeys1->length)){
HXLINE( 658)										int key = copyKeys1->__get(_g);
HXDLIN( 658)										_g = (_g + 1);
HXDLIN( 658)										if ((key != -1)) {
HXLINE( 658)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 658)								{
HXLINE( 658)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_downP;
HXDLIN( 658)									int state1 = 2;
HXDLIN( 658)									int _g1 = 0;
HXDLIN( 658)									while((_g1 < copyKeys1->length)){
HXLINE( 658)										int key = copyKeys1->__get(_g1);
HXDLIN( 658)										_g1 = (_g1 + 1);
HXDLIN( 658)										if ((key != -1)) {
HXLINE( 658)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 658)								{
HXLINE( 658)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_downR;
HXDLIN( 658)									int state2 = -1;
HXDLIN( 658)									int _g2 = 0;
HXDLIN( 658)									while((_g2 < copyKeys1->length)){
HXLINE( 658)										int key = copyKeys1->__get(_g2);
HXDLIN( 658)										_g2 = (_g2 + 1);
HXDLIN( 658)										if ((key != -1)) {
HXLINE( 658)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)4: {
HXLINE( 658)								{
HXLINE( 658)									 ::flixel::input::actions::FlxActionDigital action = this->_note_up;
HXDLIN( 658)									int state = 1;
HXDLIN( 658)									int _g = 0;
HXDLIN( 658)									while((_g < copyKeys1->length)){
HXLINE( 658)										int key = copyKeys1->__get(_g);
HXDLIN( 658)										_g = (_g + 1);
HXDLIN( 658)										if ((key != -1)) {
HXLINE( 658)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 658)								{
HXLINE( 658)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_upP;
HXDLIN( 658)									int state1 = 2;
HXDLIN( 658)									int _g1 = 0;
HXDLIN( 658)									while((_g1 < copyKeys1->length)){
HXLINE( 658)										int key = copyKeys1->__get(_g1);
HXDLIN( 658)										_g1 = (_g1 + 1);
HXDLIN( 658)										if ((key != -1)) {
HXLINE( 658)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 658)								{
HXLINE( 658)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_upR;
HXDLIN( 658)									int state2 = -1;
HXDLIN( 658)									int _g2 = 0;
HXDLIN( 658)									while((_g2 < copyKeys1->length)){
HXLINE( 658)										int key = copyKeys1->__get(_g2);
HXDLIN( 658)										_g2 = (_g2 + 1);
HXDLIN( 658)										if ((key != -1)) {
HXLINE( 658)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)5: {
HXLINE( 658)								{
HXLINE( 658)									 ::flixel::input::actions::FlxActionDigital action = this->_note_left;
HXDLIN( 658)									int state = 1;
HXDLIN( 658)									int _g = 0;
HXDLIN( 658)									while((_g < copyKeys1->length)){
HXLINE( 658)										int key = copyKeys1->__get(_g);
HXDLIN( 658)										_g = (_g + 1);
HXDLIN( 658)										if ((key != -1)) {
HXLINE( 658)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 658)								{
HXLINE( 658)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_leftP;
HXDLIN( 658)									int state1 = 2;
HXDLIN( 658)									int _g1 = 0;
HXDLIN( 658)									while((_g1 < copyKeys1->length)){
HXLINE( 658)										int key = copyKeys1->__get(_g1);
HXDLIN( 658)										_g1 = (_g1 + 1);
HXDLIN( 658)										if ((key != -1)) {
HXLINE( 658)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 658)								{
HXLINE( 658)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_leftR;
HXDLIN( 658)									int state2 = -1;
HXDLIN( 658)									int _g2 = 0;
HXDLIN( 658)									while((_g2 < copyKeys1->length)){
HXLINE( 658)										int key = copyKeys1->__get(_g2);
HXDLIN( 658)										_g2 = (_g2 + 1);
HXDLIN( 658)										if ((key != -1)) {
HXLINE( 658)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)6: {
HXLINE( 658)								{
HXLINE( 658)									 ::flixel::input::actions::FlxActionDigital action = this->_note_right;
HXDLIN( 658)									int state = 1;
HXDLIN( 658)									int _g = 0;
HXDLIN( 658)									while((_g < copyKeys1->length)){
HXLINE( 658)										int key = copyKeys1->__get(_g);
HXDLIN( 658)										_g = (_g + 1);
HXDLIN( 658)										if ((key != -1)) {
HXLINE( 658)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 658)								{
HXLINE( 658)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_rightP;
HXDLIN( 658)									int state1 = 2;
HXDLIN( 658)									int _g1 = 0;
HXDLIN( 658)									while((_g1 < copyKeys1->length)){
HXLINE( 658)										int key = copyKeys1->__get(_g1);
HXDLIN( 658)										_g1 = (_g1 + 1);
HXDLIN( 658)										if ((key != -1)) {
HXLINE( 658)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 658)								{
HXLINE( 658)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_rightR;
HXDLIN( 658)									int state2 = -1;
HXDLIN( 658)									int _g2 = 0;
HXDLIN( 658)									while((_g2 < copyKeys1->length)){
HXLINE( 658)										int key = copyKeys1->__get(_g2);
HXDLIN( 658)										_g2 = (_g2 + 1);
HXDLIN( 658)										if ((key != -1)) {
HXLINE( 658)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)7: {
HXLINE( 658)								{
HXLINE( 658)									 ::flixel::input::actions::FlxActionDigital action = this->_note_down;
HXDLIN( 658)									int state = 1;
HXDLIN( 658)									int _g = 0;
HXDLIN( 658)									while((_g < copyKeys1->length)){
HXLINE( 658)										int key = copyKeys1->__get(_g);
HXDLIN( 658)										_g = (_g + 1);
HXDLIN( 658)										if ((key != -1)) {
HXLINE( 658)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 658)								{
HXLINE( 658)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_downP;
HXDLIN( 658)									int state1 = 2;
HXDLIN( 658)									int _g1 = 0;
HXDLIN( 658)									while((_g1 < copyKeys1->length)){
HXLINE( 658)										int key = copyKeys1->__get(_g1);
HXDLIN( 658)										_g1 = (_g1 + 1);
HXDLIN( 658)										if ((key != -1)) {
HXLINE( 658)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 658)								{
HXLINE( 658)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_downR;
HXDLIN( 658)									int state2 = -1;
HXDLIN( 658)									int _g2 = 0;
HXDLIN( 658)									while((_g2 < copyKeys1->length)){
HXLINE( 658)										int key = copyKeys1->__get(_g2);
HXDLIN( 658)										_g2 = (_g2 + 1);
HXDLIN( 658)										if ((key != -1)) {
HXLINE( 658)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)8: {
HXLINE( 658)								 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 658)								int state = 2;
HXDLIN( 658)								int _g = 0;
HXDLIN( 658)								while((_g < copyKeys1->length)){
HXLINE( 658)									int key = copyKeys1->__get(_g);
HXDLIN( 658)									_g = (_g + 1);
HXDLIN( 658)									if ((key != -1)) {
HXLINE( 658)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)9: {
HXLINE( 658)								 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 658)								int state = 2;
HXDLIN( 658)								int _g = 0;
HXDLIN( 658)								while((_g < copyKeys1->length)){
HXLINE( 658)									int key = copyKeys1->__get(_g);
HXDLIN( 658)									_g = (_g + 1);
HXDLIN( 658)									if ((key != -1)) {
HXLINE( 658)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)10: {
HXLINE( 658)								 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 658)								int state = 2;
HXDLIN( 658)								int _g = 0;
HXDLIN( 658)								while((_g < copyKeys1->length)){
HXLINE( 658)									int key = copyKeys1->__get(_g);
HXDLIN( 658)									_g = (_g + 1);
HXDLIN( 658)									if ((key != -1)) {
HXLINE( 658)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)11: {
HXLINE( 658)								 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 658)								int state = 2;
HXDLIN( 658)								int _g = 0;
HXDLIN( 658)								while((_g < copyKeys1->length)){
HXLINE( 658)									int key = copyKeys1->__get(_g);
HXDLIN( 658)									_g = (_g + 1);
HXDLIN( 658)									if ((key != -1)) {
HXLINE( 658)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            						}
            					}
HXLINE( 659)					{
HXLINE( 659)						::Array< int > copyKeys2 = ::Array_obj< int >::fromData( _hx_array_data_116e4296_1122,1)->copy();
HXDLIN( 659)						{
HXLINE( 659)							int _g4 = 0;
HXDLIN( 659)							int _g5 = copyKeys2->length;
HXDLIN( 659)							while((_g4 < _g5)){
HXLINE( 659)								_g4 = (_g4 + 1);
HXDLIN( 659)								int i = (_g4 - 1);
HXDLIN( 659)								if ((i == -1)) {
HXLINE( 659)									copyKeys2->remove(i);
            								}
            							}
            						}
HXDLIN( 659)						switch((int)(::Control_obj::UI_LEFT_dyn()->_hx_getIndex())){
            							case (int)0: {
HXLINE( 659)								{
HXLINE( 659)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_up;
HXDLIN( 659)									int state = 1;
HXDLIN( 659)									int _g = 0;
HXDLIN( 659)									while((_g < copyKeys2->length)){
HXLINE( 659)										int key = copyKeys2->__get(_g);
HXDLIN( 659)										_g = (_g + 1);
HXDLIN( 659)										if ((key != -1)) {
HXLINE( 659)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 659)								{
HXLINE( 659)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_upP;
HXDLIN( 659)									int state1 = 2;
HXDLIN( 659)									int _g1 = 0;
HXDLIN( 659)									while((_g1 < copyKeys2->length)){
HXLINE( 659)										int key = copyKeys2->__get(_g1);
HXDLIN( 659)										_g1 = (_g1 + 1);
HXDLIN( 659)										if ((key != -1)) {
HXLINE( 659)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 659)								{
HXLINE( 659)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_upR;
HXDLIN( 659)									int state2 = -1;
HXDLIN( 659)									int _g2 = 0;
HXDLIN( 659)									while((_g2 < copyKeys2->length)){
HXLINE( 659)										int key = copyKeys2->__get(_g2);
HXDLIN( 659)										_g2 = (_g2 + 1);
HXDLIN( 659)										if ((key != -1)) {
HXLINE( 659)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)1: {
HXLINE( 659)								{
HXLINE( 659)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_left;
HXDLIN( 659)									int state = 1;
HXDLIN( 659)									int _g = 0;
HXDLIN( 659)									while((_g < copyKeys2->length)){
HXLINE( 659)										int key = copyKeys2->__get(_g);
HXDLIN( 659)										_g = (_g + 1);
HXDLIN( 659)										if ((key != -1)) {
HXLINE( 659)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 659)								{
HXLINE( 659)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_leftP;
HXDLIN( 659)									int state1 = 2;
HXDLIN( 659)									int _g1 = 0;
HXDLIN( 659)									while((_g1 < copyKeys2->length)){
HXLINE( 659)										int key = copyKeys2->__get(_g1);
HXDLIN( 659)										_g1 = (_g1 + 1);
HXDLIN( 659)										if ((key != -1)) {
HXLINE( 659)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 659)								{
HXLINE( 659)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_leftR;
HXDLIN( 659)									int state2 = -1;
HXDLIN( 659)									int _g2 = 0;
HXDLIN( 659)									while((_g2 < copyKeys2->length)){
HXLINE( 659)										int key = copyKeys2->__get(_g2);
HXDLIN( 659)										_g2 = (_g2 + 1);
HXDLIN( 659)										if ((key != -1)) {
HXLINE( 659)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)2: {
HXLINE( 659)								{
HXLINE( 659)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_right;
HXDLIN( 659)									int state = 1;
HXDLIN( 659)									int _g = 0;
HXDLIN( 659)									while((_g < copyKeys2->length)){
HXLINE( 659)										int key = copyKeys2->__get(_g);
HXDLIN( 659)										_g = (_g + 1);
HXDLIN( 659)										if ((key != -1)) {
HXLINE( 659)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 659)								{
HXLINE( 659)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_rightP;
HXDLIN( 659)									int state1 = 2;
HXDLIN( 659)									int _g1 = 0;
HXDLIN( 659)									while((_g1 < copyKeys2->length)){
HXLINE( 659)										int key = copyKeys2->__get(_g1);
HXDLIN( 659)										_g1 = (_g1 + 1);
HXDLIN( 659)										if ((key != -1)) {
HXLINE( 659)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 659)								{
HXLINE( 659)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_rightR;
HXDLIN( 659)									int state2 = -1;
HXDLIN( 659)									int _g2 = 0;
HXDLIN( 659)									while((_g2 < copyKeys2->length)){
HXLINE( 659)										int key = copyKeys2->__get(_g2);
HXDLIN( 659)										_g2 = (_g2 + 1);
HXDLIN( 659)										if ((key != -1)) {
HXLINE( 659)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)3: {
HXLINE( 659)								{
HXLINE( 659)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_down;
HXDLIN( 659)									int state = 1;
HXDLIN( 659)									int _g = 0;
HXDLIN( 659)									while((_g < copyKeys2->length)){
HXLINE( 659)										int key = copyKeys2->__get(_g);
HXDLIN( 659)										_g = (_g + 1);
HXDLIN( 659)										if ((key != -1)) {
HXLINE( 659)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 659)								{
HXLINE( 659)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_downP;
HXDLIN( 659)									int state1 = 2;
HXDLIN( 659)									int _g1 = 0;
HXDLIN( 659)									while((_g1 < copyKeys2->length)){
HXLINE( 659)										int key = copyKeys2->__get(_g1);
HXDLIN( 659)										_g1 = (_g1 + 1);
HXDLIN( 659)										if ((key != -1)) {
HXLINE( 659)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 659)								{
HXLINE( 659)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_downR;
HXDLIN( 659)									int state2 = -1;
HXDLIN( 659)									int _g2 = 0;
HXDLIN( 659)									while((_g2 < copyKeys2->length)){
HXLINE( 659)										int key = copyKeys2->__get(_g2);
HXDLIN( 659)										_g2 = (_g2 + 1);
HXDLIN( 659)										if ((key != -1)) {
HXLINE( 659)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)4: {
HXLINE( 659)								{
HXLINE( 659)									 ::flixel::input::actions::FlxActionDigital action = this->_note_up;
HXDLIN( 659)									int state = 1;
HXDLIN( 659)									int _g = 0;
HXDLIN( 659)									while((_g < copyKeys2->length)){
HXLINE( 659)										int key = copyKeys2->__get(_g);
HXDLIN( 659)										_g = (_g + 1);
HXDLIN( 659)										if ((key != -1)) {
HXLINE( 659)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 659)								{
HXLINE( 659)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_upP;
HXDLIN( 659)									int state1 = 2;
HXDLIN( 659)									int _g1 = 0;
HXDLIN( 659)									while((_g1 < copyKeys2->length)){
HXLINE( 659)										int key = copyKeys2->__get(_g1);
HXDLIN( 659)										_g1 = (_g1 + 1);
HXDLIN( 659)										if ((key != -1)) {
HXLINE( 659)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 659)								{
HXLINE( 659)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_upR;
HXDLIN( 659)									int state2 = -1;
HXDLIN( 659)									int _g2 = 0;
HXDLIN( 659)									while((_g2 < copyKeys2->length)){
HXLINE( 659)										int key = copyKeys2->__get(_g2);
HXDLIN( 659)										_g2 = (_g2 + 1);
HXDLIN( 659)										if ((key != -1)) {
HXLINE( 659)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)5: {
HXLINE( 659)								{
HXLINE( 659)									 ::flixel::input::actions::FlxActionDigital action = this->_note_left;
HXDLIN( 659)									int state = 1;
HXDLIN( 659)									int _g = 0;
HXDLIN( 659)									while((_g < copyKeys2->length)){
HXLINE( 659)										int key = copyKeys2->__get(_g);
HXDLIN( 659)										_g = (_g + 1);
HXDLIN( 659)										if ((key != -1)) {
HXLINE( 659)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 659)								{
HXLINE( 659)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_leftP;
HXDLIN( 659)									int state1 = 2;
HXDLIN( 659)									int _g1 = 0;
HXDLIN( 659)									while((_g1 < copyKeys2->length)){
HXLINE( 659)										int key = copyKeys2->__get(_g1);
HXDLIN( 659)										_g1 = (_g1 + 1);
HXDLIN( 659)										if ((key != -1)) {
HXLINE( 659)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 659)								{
HXLINE( 659)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_leftR;
HXDLIN( 659)									int state2 = -1;
HXDLIN( 659)									int _g2 = 0;
HXDLIN( 659)									while((_g2 < copyKeys2->length)){
HXLINE( 659)										int key = copyKeys2->__get(_g2);
HXDLIN( 659)										_g2 = (_g2 + 1);
HXDLIN( 659)										if ((key != -1)) {
HXLINE( 659)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)6: {
HXLINE( 659)								{
HXLINE( 659)									 ::flixel::input::actions::FlxActionDigital action = this->_note_right;
HXDLIN( 659)									int state = 1;
HXDLIN( 659)									int _g = 0;
HXDLIN( 659)									while((_g < copyKeys2->length)){
HXLINE( 659)										int key = copyKeys2->__get(_g);
HXDLIN( 659)										_g = (_g + 1);
HXDLIN( 659)										if ((key != -1)) {
HXLINE( 659)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 659)								{
HXLINE( 659)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_rightP;
HXDLIN( 659)									int state1 = 2;
HXDLIN( 659)									int _g1 = 0;
HXDLIN( 659)									while((_g1 < copyKeys2->length)){
HXLINE( 659)										int key = copyKeys2->__get(_g1);
HXDLIN( 659)										_g1 = (_g1 + 1);
HXDLIN( 659)										if ((key != -1)) {
HXLINE( 659)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 659)								{
HXLINE( 659)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_rightR;
HXDLIN( 659)									int state2 = -1;
HXDLIN( 659)									int _g2 = 0;
HXDLIN( 659)									while((_g2 < copyKeys2->length)){
HXLINE( 659)										int key = copyKeys2->__get(_g2);
HXDLIN( 659)										_g2 = (_g2 + 1);
HXDLIN( 659)										if ((key != -1)) {
HXLINE( 659)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)7: {
HXLINE( 659)								{
HXLINE( 659)									 ::flixel::input::actions::FlxActionDigital action = this->_note_down;
HXDLIN( 659)									int state = 1;
HXDLIN( 659)									int _g = 0;
HXDLIN( 659)									while((_g < copyKeys2->length)){
HXLINE( 659)										int key = copyKeys2->__get(_g);
HXDLIN( 659)										_g = (_g + 1);
HXDLIN( 659)										if ((key != -1)) {
HXLINE( 659)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 659)								{
HXLINE( 659)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_downP;
HXDLIN( 659)									int state1 = 2;
HXDLIN( 659)									int _g1 = 0;
HXDLIN( 659)									while((_g1 < copyKeys2->length)){
HXLINE( 659)										int key = copyKeys2->__get(_g1);
HXDLIN( 659)										_g1 = (_g1 + 1);
HXDLIN( 659)										if ((key != -1)) {
HXLINE( 659)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 659)								{
HXLINE( 659)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_downR;
HXDLIN( 659)									int state2 = -1;
HXDLIN( 659)									int _g2 = 0;
HXDLIN( 659)									while((_g2 < copyKeys2->length)){
HXLINE( 659)										int key = copyKeys2->__get(_g2);
HXDLIN( 659)										_g2 = (_g2 + 1);
HXDLIN( 659)										if ((key != -1)) {
HXLINE( 659)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)8: {
HXLINE( 659)								 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 659)								int state = 2;
HXDLIN( 659)								int _g = 0;
HXDLIN( 659)								while((_g < copyKeys2->length)){
HXLINE( 659)									int key = copyKeys2->__get(_g);
HXDLIN( 659)									_g = (_g + 1);
HXDLIN( 659)									if ((key != -1)) {
HXLINE( 659)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)9: {
HXLINE( 659)								 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 659)								int state = 2;
HXDLIN( 659)								int _g = 0;
HXDLIN( 659)								while((_g < copyKeys2->length)){
HXLINE( 659)									int key = copyKeys2->__get(_g);
HXDLIN( 659)									_g = (_g + 1);
HXDLIN( 659)									if ((key != -1)) {
HXLINE( 659)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)10: {
HXLINE( 659)								 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 659)								int state = 2;
HXDLIN( 659)								int _g = 0;
HXDLIN( 659)								while((_g < copyKeys2->length)){
HXLINE( 659)									int key = copyKeys2->__get(_g);
HXDLIN( 659)									_g = (_g + 1);
HXDLIN( 659)									if ((key != -1)) {
HXLINE( 659)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)11: {
HXLINE( 659)								 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 659)								int state = 2;
HXDLIN( 659)								int _g = 0;
HXDLIN( 659)								while((_g < copyKeys2->length)){
HXLINE( 659)									int key = copyKeys2->__get(_g);
HXDLIN( 659)									_g = (_g + 1);
HXDLIN( 659)									if ((key != -1)) {
HXLINE( 659)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            						}
            					}
HXLINE( 660)					{
HXLINE( 660)						::Array< int > copyKeys3 = ::Array_obj< int >::fromData( _hx_array_data_116e4296_1123,1)->copy();
HXDLIN( 660)						{
HXLINE( 660)							int _g6 = 0;
HXDLIN( 660)							int _g7 = copyKeys3->length;
HXDLIN( 660)							while((_g6 < _g7)){
HXLINE( 660)								_g6 = (_g6 + 1);
HXDLIN( 660)								int i = (_g6 - 1);
HXDLIN( 660)								if ((i == -1)) {
HXLINE( 660)									copyKeys3->remove(i);
            								}
            							}
            						}
HXDLIN( 660)						switch((int)(::Control_obj::UI_RIGHT_dyn()->_hx_getIndex())){
            							case (int)0: {
HXLINE( 660)								{
HXLINE( 660)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_up;
HXDLIN( 660)									int state = 1;
HXDLIN( 660)									int _g = 0;
HXDLIN( 660)									while((_g < copyKeys3->length)){
HXLINE( 660)										int key = copyKeys3->__get(_g);
HXDLIN( 660)										_g = (_g + 1);
HXDLIN( 660)										if ((key != -1)) {
HXLINE( 660)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 660)								{
HXLINE( 660)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_upP;
HXDLIN( 660)									int state1 = 2;
HXDLIN( 660)									int _g1 = 0;
HXDLIN( 660)									while((_g1 < copyKeys3->length)){
HXLINE( 660)										int key = copyKeys3->__get(_g1);
HXDLIN( 660)										_g1 = (_g1 + 1);
HXDLIN( 660)										if ((key != -1)) {
HXLINE( 660)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 660)								{
HXLINE( 660)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_upR;
HXDLIN( 660)									int state2 = -1;
HXDLIN( 660)									int _g2 = 0;
HXDLIN( 660)									while((_g2 < copyKeys3->length)){
HXLINE( 660)										int key = copyKeys3->__get(_g2);
HXDLIN( 660)										_g2 = (_g2 + 1);
HXDLIN( 660)										if ((key != -1)) {
HXLINE( 660)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)1: {
HXLINE( 660)								{
HXLINE( 660)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_left;
HXDLIN( 660)									int state = 1;
HXDLIN( 660)									int _g = 0;
HXDLIN( 660)									while((_g < copyKeys3->length)){
HXLINE( 660)										int key = copyKeys3->__get(_g);
HXDLIN( 660)										_g = (_g + 1);
HXDLIN( 660)										if ((key != -1)) {
HXLINE( 660)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 660)								{
HXLINE( 660)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_leftP;
HXDLIN( 660)									int state1 = 2;
HXDLIN( 660)									int _g1 = 0;
HXDLIN( 660)									while((_g1 < copyKeys3->length)){
HXLINE( 660)										int key = copyKeys3->__get(_g1);
HXDLIN( 660)										_g1 = (_g1 + 1);
HXDLIN( 660)										if ((key != -1)) {
HXLINE( 660)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 660)								{
HXLINE( 660)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_leftR;
HXDLIN( 660)									int state2 = -1;
HXDLIN( 660)									int _g2 = 0;
HXDLIN( 660)									while((_g2 < copyKeys3->length)){
HXLINE( 660)										int key = copyKeys3->__get(_g2);
HXDLIN( 660)										_g2 = (_g2 + 1);
HXDLIN( 660)										if ((key != -1)) {
HXLINE( 660)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)2: {
HXLINE( 660)								{
HXLINE( 660)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_right;
HXDLIN( 660)									int state = 1;
HXDLIN( 660)									int _g = 0;
HXDLIN( 660)									while((_g < copyKeys3->length)){
HXLINE( 660)										int key = copyKeys3->__get(_g);
HXDLIN( 660)										_g = (_g + 1);
HXDLIN( 660)										if ((key != -1)) {
HXLINE( 660)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 660)								{
HXLINE( 660)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_rightP;
HXDLIN( 660)									int state1 = 2;
HXDLIN( 660)									int _g1 = 0;
HXDLIN( 660)									while((_g1 < copyKeys3->length)){
HXLINE( 660)										int key = copyKeys3->__get(_g1);
HXDLIN( 660)										_g1 = (_g1 + 1);
HXDLIN( 660)										if ((key != -1)) {
HXLINE( 660)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 660)								{
HXLINE( 660)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_rightR;
HXDLIN( 660)									int state2 = -1;
HXDLIN( 660)									int _g2 = 0;
HXDLIN( 660)									while((_g2 < copyKeys3->length)){
HXLINE( 660)										int key = copyKeys3->__get(_g2);
HXDLIN( 660)										_g2 = (_g2 + 1);
HXDLIN( 660)										if ((key != -1)) {
HXLINE( 660)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)3: {
HXLINE( 660)								{
HXLINE( 660)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_down;
HXDLIN( 660)									int state = 1;
HXDLIN( 660)									int _g = 0;
HXDLIN( 660)									while((_g < copyKeys3->length)){
HXLINE( 660)										int key = copyKeys3->__get(_g);
HXDLIN( 660)										_g = (_g + 1);
HXDLIN( 660)										if ((key != -1)) {
HXLINE( 660)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 660)								{
HXLINE( 660)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_downP;
HXDLIN( 660)									int state1 = 2;
HXDLIN( 660)									int _g1 = 0;
HXDLIN( 660)									while((_g1 < copyKeys3->length)){
HXLINE( 660)										int key = copyKeys3->__get(_g1);
HXDLIN( 660)										_g1 = (_g1 + 1);
HXDLIN( 660)										if ((key != -1)) {
HXLINE( 660)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 660)								{
HXLINE( 660)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_downR;
HXDLIN( 660)									int state2 = -1;
HXDLIN( 660)									int _g2 = 0;
HXDLIN( 660)									while((_g2 < copyKeys3->length)){
HXLINE( 660)										int key = copyKeys3->__get(_g2);
HXDLIN( 660)										_g2 = (_g2 + 1);
HXDLIN( 660)										if ((key != -1)) {
HXLINE( 660)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)4: {
HXLINE( 660)								{
HXLINE( 660)									 ::flixel::input::actions::FlxActionDigital action = this->_note_up;
HXDLIN( 660)									int state = 1;
HXDLIN( 660)									int _g = 0;
HXDLIN( 660)									while((_g < copyKeys3->length)){
HXLINE( 660)										int key = copyKeys3->__get(_g);
HXDLIN( 660)										_g = (_g + 1);
HXDLIN( 660)										if ((key != -1)) {
HXLINE( 660)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 660)								{
HXLINE( 660)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_upP;
HXDLIN( 660)									int state1 = 2;
HXDLIN( 660)									int _g1 = 0;
HXDLIN( 660)									while((_g1 < copyKeys3->length)){
HXLINE( 660)										int key = copyKeys3->__get(_g1);
HXDLIN( 660)										_g1 = (_g1 + 1);
HXDLIN( 660)										if ((key != -1)) {
HXLINE( 660)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 660)								{
HXLINE( 660)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_upR;
HXDLIN( 660)									int state2 = -1;
HXDLIN( 660)									int _g2 = 0;
HXDLIN( 660)									while((_g2 < copyKeys3->length)){
HXLINE( 660)										int key = copyKeys3->__get(_g2);
HXDLIN( 660)										_g2 = (_g2 + 1);
HXDLIN( 660)										if ((key != -1)) {
HXLINE( 660)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)5: {
HXLINE( 660)								{
HXLINE( 660)									 ::flixel::input::actions::FlxActionDigital action = this->_note_left;
HXDLIN( 660)									int state = 1;
HXDLIN( 660)									int _g = 0;
HXDLIN( 660)									while((_g < copyKeys3->length)){
HXLINE( 660)										int key = copyKeys3->__get(_g);
HXDLIN( 660)										_g = (_g + 1);
HXDLIN( 660)										if ((key != -1)) {
HXLINE( 660)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 660)								{
HXLINE( 660)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_leftP;
HXDLIN( 660)									int state1 = 2;
HXDLIN( 660)									int _g1 = 0;
HXDLIN( 660)									while((_g1 < copyKeys3->length)){
HXLINE( 660)										int key = copyKeys3->__get(_g1);
HXDLIN( 660)										_g1 = (_g1 + 1);
HXDLIN( 660)										if ((key != -1)) {
HXLINE( 660)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 660)								{
HXLINE( 660)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_leftR;
HXDLIN( 660)									int state2 = -1;
HXDLIN( 660)									int _g2 = 0;
HXDLIN( 660)									while((_g2 < copyKeys3->length)){
HXLINE( 660)										int key = copyKeys3->__get(_g2);
HXDLIN( 660)										_g2 = (_g2 + 1);
HXDLIN( 660)										if ((key != -1)) {
HXLINE( 660)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)6: {
HXLINE( 660)								{
HXLINE( 660)									 ::flixel::input::actions::FlxActionDigital action = this->_note_right;
HXDLIN( 660)									int state = 1;
HXDLIN( 660)									int _g = 0;
HXDLIN( 660)									while((_g < copyKeys3->length)){
HXLINE( 660)										int key = copyKeys3->__get(_g);
HXDLIN( 660)										_g = (_g + 1);
HXDLIN( 660)										if ((key != -1)) {
HXLINE( 660)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 660)								{
HXLINE( 660)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_rightP;
HXDLIN( 660)									int state1 = 2;
HXDLIN( 660)									int _g1 = 0;
HXDLIN( 660)									while((_g1 < copyKeys3->length)){
HXLINE( 660)										int key = copyKeys3->__get(_g1);
HXDLIN( 660)										_g1 = (_g1 + 1);
HXDLIN( 660)										if ((key != -1)) {
HXLINE( 660)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 660)								{
HXLINE( 660)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_rightR;
HXDLIN( 660)									int state2 = -1;
HXDLIN( 660)									int _g2 = 0;
HXDLIN( 660)									while((_g2 < copyKeys3->length)){
HXLINE( 660)										int key = copyKeys3->__get(_g2);
HXDLIN( 660)										_g2 = (_g2 + 1);
HXDLIN( 660)										if ((key != -1)) {
HXLINE( 660)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)7: {
HXLINE( 660)								{
HXLINE( 660)									 ::flixel::input::actions::FlxActionDigital action = this->_note_down;
HXDLIN( 660)									int state = 1;
HXDLIN( 660)									int _g = 0;
HXDLIN( 660)									while((_g < copyKeys3->length)){
HXLINE( 660)										int key = copyKeys3->__get(_g);
HXDLIN( 660)										_g = (_g + 1);
HXDLIN( 660)										if ((key != -1)) {
HXLINE( 660)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 660)								{
HXLINE( 660)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_downP;
HXDLIN( 660)									int state1 = 2;
HXDLIN( 660)									int _g1 = 0;
HXDLIN( 660)									while((_g1 < copyKeys3->length)){
HXLINE( 660)										int key = copyKeys3->__get(_g1);
HXDLIN( 660)										_g1 = (_g1 + 1);
HXDLIN( 660)										if ((key != -1)) {
HXLINE( 660)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 660)								{
HXLINE( 660)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_downR;
HXDLIN( 660)									int state2 = -1;
HXDLIN( 660)									int _g2 = 0;
HXDLIN( 660)									while((_g2 < copyKeys3->length)){
HXLINE( 660)										int key = copyKeys3->__get(_g2);
HXDLIN( 660)										_g2 = (_g2 + 1);
HXDLIN( 660)										if ((key != -1)) {
HXLINE( 660)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)8: {
HXLINE( 660)								 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 660)								int state = 2;
HXDLIN( 660)								int _g = 0;
HXDLIN( 660)								while((_g < copyKeys3->length)){
HXLINE( 660)									int key = copyKeys3->__get(_g);
HXDLIN( 660)									_g = (_g + 1);
HXDLIN( 660)									if ((key != -1)) {
HXLINE( 660)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)9: {
HXLINE( 660)								 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 660)								int state = 2;
HXDLIN( 660)								int _g = 0;
HXDLIN( 660)								while((_g < copyKeys3->length)){
HXLINE( 660)									int key = copyKeys3->__get(_g);
HXDLIN( 660)									_g = (_g + 1);
HXDLIN( 660)									if ((key != -1)) {
HXLINE( 660)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)10: {
HXLINE( 660)								 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 660)								int state = 2;
HXDLIN( 660)								int _g = 0;
HXDLIN( 660)								while((_g < copyKeys3->length)){
HXLINE( 660)									int key = copyKeys3->__get(_g);
HXDLIN( 660)									_g = (_g + 1);
HXDLIN( 660)									if ((key != -1)) {
HXLINE( 660)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)11: {
HXLINE( 660)								 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 660)								int state = 2;
HXDLIN( 660)								int _g = 0;
HXDLIN( 660)								while((_g < copyKeys3->length)){
HXLINE( 660)									int key = copyKeys3->__get(_g);
HXDLIN( 660)									_g = (_g + 1);
HXDLIN( 660)									if ((key != -1)) {
HXLINE( 660)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            						}
            					}
HXLINE( 661)					{
HXLINE( 661)						::Array< int > copyKeys4 = ::Array_obj< int >::fromData( _hx_array_data_116e4296_1124,1)->copy();
HXDLIN( 661)						{
HXLINE( 661)							int _g8 = 0;
HXDLIN( 661)							int _g9 = copyKeys4->length;
HXDLIN( 661)							while((_g8 < _g9)){
HXLINE( 661)								_g8 = (_g8 + 1);
HXDLIN( 661)								int i = (_g8 - 1);
HXDLIN( 661)								if ((i == -1)) {
HXLINE( 661)									copyKeys4->remove(i);
            								}
            							}
            						}
HXDLIN( 661)						switch((int)(::Control_obj::NOTE_UP_dyn()->_hx_getIndex())){
            							case (int)0: {
HXLINE( 661)								{
HXLINE( 661)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_up;
HXDLIN( 661)									int state = 1;
HXDLIN( 661)									int _g = 0;
HXDLIN( 661)									while((_g < copyKeys4->length)){
HXLINE( 661)										int key = copyKeys4->__get(_g);
HXDLIN( 661)										_g = (_g + 1);
HXDLIN( 661)										if ((key != -1)) {
HXLINE( 661)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 661)								{
HXLINE( 661)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_upP;
HXDLIN( 661)									int state1 = 2;
HXDLIN( 661)									int _g1 = 0;
HXDLIN( 661)									while((_g1 < copyKeys4->length)){
HXLINE( 661)										int key = copyKeys4->__get(_g1);
HXDLIN( 661)										_g1 = (_g1 + 1);
HXDLIN( 661)										if ((key != -1)) {
HXLINE( 661)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 661)								{
HXLINE( 661)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_upR;
HXDLIN( 661)									int state2 = -1;
HXDLIN( 661)									int _g2 = 0;
HXDLIN( 661)									while((_g2 < copyKeys4->length)){
HXLINE( 661)										int key = copyKeys4->__get(_g2);
HXDLIN( 661)										_g2 = (_g2 + 1);
HXDLIN( 661)										if ((key != -1)) {
HXLINE( 661)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)1: {
HXLINE( 661)								{
HXLINE( 661)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_left;
HXDLIN( 661)									int state = 1;
HXDLIN( 661)									int _g = 0;
HXDLIN( 661)									while((_g < copyKeys4->length)){
HXLINE( 661)										int key = copyKeys4->__get(_g);
HXDLIN( 661)										_g = (_g + 1);
HXDLIN( 661)										if ((key != -1)) {
HXLINE( 661)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 661)								{
HXLINE( 661)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_leftP;
HXDLIN( 661)									int state1 = 2;
HXDLIN( 661)									int _g1 = 0;
HXDLIN( 661)									while((_g1 < copyKeys4->length)){
HXLINE( 661)										int key = copyKeys4->__get(_g1);
HXDLIN( 661)										_g1 = (_g1 + 1);
HXDLIN( 661)										if ((key != -1)) {
HXLINE( 661)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 661)								{
HXLINE( 661)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_leftR;
HXDLIN( 661)									int state2 = -1;
HXDLIN( 661)									int _g2 = 0;
HXDLIN( 661)									while((_g2 < copyKeys4->length)){
HXLINE( 661)										int key = copyKeys4->__get(_g2);
HXDLIN( 661)										_g2 = (_g2 + 1);
HXDLIN( 661)										if ((key != -1)) {
HXLINE( 661)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)2: {
HXLINE( 661)								{
HXLINE( 661)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_right;
HXDLIN( 661)									int state = 1;
HXDLIN( 661)									int _g = 0;
HXDLIN( 661)									while((_g < copyKeys4->length)){
HXLINE( 661)										int key = copyKeys4->__get(_g);
HXDLIN( 661)										_g = (_g + 1);
HXDLIN( 661)										if ((key != -1)) {
HXLINE( 661)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 661)								{
HXLINE( 661)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_rightP;
HXDLIN( 661)									int state1 = 2;
HXDLIN( 661)									int _g1 = 0;
HXDLIN( 661)									while((_g1 < copyKeys4->length)){
HXLINE( 661)										int key = copyKeys4->__get(_g1);
HXDLIN( 661)										_g1 = (_g1 + 1);
HXDLIN( 661)										if ((key != -1)) {
HXLINE( 661)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 661)								{
HXLINE( 661)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_rightR;
HXDLIN( 661)									int state2 = -1;
HXDLIN( 661)									int _g2 = 0;
HXDLIN( 661)									while((_g2 < copyKeys4->length)){
HXLINE( 661)										int key = copyKeys4->__get(_g2);
HXDLIN( 661)										_g2 = (_g2 + 1);
HXDLIN( 661)										if ((key != -1)) {
HXLINE( 661)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)3: {
HXLINE( 661)								{
HXLINE( 661)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_down;
HXDLIN( 661)									int state = 1;
HXDLIN( 661)									int _g = 0;
HXDLIN( 661)									while((_g < copyKeys4->length)){
HXLINE( 661)										int key = copyKeys4->__get(_g);
HXDLIN( 661)										_g = (_g + 1);
HXDLIN( 661)										if ((key != -1)) {
HXLINE( 661)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 661)								{
HXLINE( 661)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_downP;
HXDLIN( 661)									int state1 = 2;
HXDLIN( 661)									int _g1 = 0;
HXDLIN( 661)									while((_g1 < copyKeys4->length)){
HXLINE( 661)										int key = copyKeys4->__get(_g1);
HXDLIN( 661)										_g1 = (_g1 + 1);
HXDLIN( 661)										if ((key != -1)) {
HXLINE( 661)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 661)								{
HXLINE( 661)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_downR;
HXDLIN( 661)									int state2 = -1;
HXDLIN( 661)									int _g2 = 0;
HXDLIN( 661)									while((_g2 < copyKeys4->length)){
HXLINE( 661)										int key = copyKeys4->__get(_g2);
HXDLIN( 661)										_g2 = (_g2 + 1);
HXDLIN( 661)										if ((key != -1)) {
HXLINE( 661)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)4: {
HXLINE( 661)								{
HXLINE( 661)									 ::flixel::input::actions::FlxActionDigital action = this->_note_up;
HXDLIN( 661)									int state = 1;
HXDLIN( 661)									int _g = 0;
HXDLIN( 661)									while((_g < copyKeys4->length)){
HXLINE( 661)										int key = copyKeys4->__get(_g);
HXDLIN( 661)										_g = (_g + 1);
HXDLIN( 661)										if ((key != -1)) {
HXLINE( 661)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 661)								{
HXLINE( 661)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_upP;
HXDLIN( 661)									int state1 = 2;
HXDLIN( 661)									int _g1 = 0;
HXDLIN( 661)									while((_g1 < copyKeys4->length)){
HXLINE( 661)										int key = copyKeys4->__get(_g1);
HXDLIN( 661)										_g1 = (_g1 + 1);
HXDLIN( 661)										if ((key != -1)) {
HXLINE( 661)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 661)								{
HXLINE( 661)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_upR;
HXDLIN( 661)									int state2 = -1;
HXDLIN( 661)									int _g2 = 0;
HXDLIN( 661)									while((_g2 < copyKeys4->length)){
HXLINE( 661)										int key = copyKeys4->__get(_g2);
HXDLIN( 661)										_g2 = (_g2 + 1);
HXDLIN( 661)										if ((key != -1)) {
HXLINE( 661)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)5: {
HXLINE( 661)								{
HXLINE( 661)									 ::flixel::input::actions::FlxActionDigital action = this->_note_left;
HXDLIN( 661)									int state = 1;
HXDLIN( 661)									int _g = 0;
HXDLIN( 661)									while((_g < copyKeys4->length)){
HXLINE( 661)										int key = copyKeys4->__get(_g);
HXDLIN( 661)										_g = (_g + 1);
HXDLIN( 661)										if ((key != -1)) {
HXLINE( 661)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 661)								{
HXLINE( 661)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_leftP;
HXDLIN( 661)									int state1 = 2;
HXDLIN( 661)									int _g1 = 0;
HXDLIN( 661)									while((_g1 < copyKeys4->length)){
HXLINE( 661)										int key = copyKeys4->__get(_g1);
HXDLIN( 661)										_g1 = (_g1 + 1);
HXDLIN( 661)										if ((key != -1)) {
HXLINE( 661)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 661)								{
HXLINE( 661)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_leftR;
HXDLIN( 661)									int state2 = -1;
HXDLIN( 661)									int _g2 = 0;
HXDLIN( 661)									while((_g2 < copyKeys4->length)){
HXLINE( 661)										int key = copyKeys4->__get(_g2);
HXDLIN( 661)										_g2 = (_g2 + 1);
HXDLIN( 661)										if ((key != -1)) {
HXLINE( 661)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)6: {
HXLINE( 661)								{
HXLINE( 661)									 ::flixel::input::actions::FlxActionDigital action = this->_note_right;
HXDLIN( 661)									int state = 1;
HXDLIN( 661)									int _g = 0;
HXDLIN( 661)									while((_g < copyKeys4->length)){
HXLINE( 661)										int key = copyKeys4->__get(_g);
HXDLIN( 661)										_g = (_g + 1);
HXDLIN( 661)										if ((key != -1)) {
HXLINE( 661)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 661)								{
HXLINE( 661)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_rightP;
HXDLIN( 661)									int state1 = 2;
HXDLIN( 661)									int _g1 = 0;
HXDLIN( 661)									while((_g1 < copyKeys4->length)){
HXLINE( 661)										int key = copyKeys4->__get(_g1);
HXDLIN( 661)										_g1 = (_g1 + 1);
HXDLIN( 661)										if ((key != -1)) {
HXLINE( 661)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 661)								{
HXLINE( 661)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_rightR;
HXDLIN( 661)									int state2 = -1;
HXDLIN( 661)									int _g2 = 0;
HXDLIN( 661)									while((_g2 < copyKeys4->length)){
HXLINE( 661)										int key = copyKeys4->__get(_g2);
HXDLIN( 661)										_g2 = (_g2 + 1);
HXDLIN( 661)										if ((key != -1)) {
HXLINE( 661)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)7: {
HXLINE( 661)								{
HXLINE( 661)									 ::flixel::input::actions::FlxActionDigital action = this->_note_down;
HXDLIN( 661)									int state = 1;
HXDLIN( 661)									int _g = 0;
HXDLIN( 661)									while((_g < copyKeys4->length)){
HXLINE( 661)										int key = copyKeys4->__get(_g);
HXDLIN( 661)										_g = (_g + 1);
HXDLIN( 661)										if ((key != -1)) {
HXLINE( 661)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 661)								{
HXLINE( 661)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_downP;
HXDLIN( 661)									int state1 = 2;
HXDLIN( 661)									int _g1 = 0;
HXDLIN( 661)									while((_g1 < copyKeys4->length)){
HXLINE( 661)										int key = copyKeys4->__get(_g1);
HXDLIN( 661)										_g1 = (_g1 + 1);
HXDLIN( 661)										if ((key != -1)) {
HXLINE( 661)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 661)								{
HXLINE( 661)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_downR;
HXDLIN( 661)									int state2 = -1;
HXDLIN( 661)									int _g2 = 0;
HXDLIN( 661)									while((_g2 < copyKeys4->length)){
HXLINE( 661)										int key = copyKeys4->__get(_g2);
HXDLIN( 661)										_g2 = (_g2 + 1);
HXDLIN( 661)										if ((key != -1)) {
HXLINE( 661)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)8: {
HXLINE( 661)								 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 661)								int state = 2;
HXDLIN( 661)								int _g = 0;
HXDLIN( 661)								while((_g < copyKeys4->length)){
HXLINE( 661)									int key = copyKeys4->__get(_g);
HXDLIN( 661)									_g = (_g + 1);
HXDLIN( 661)									if ((key != -1)) {
HXLINE( 661)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)9: {
HXLINE( 661)								 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 661)								int state = 2;
HXDLIN( 661)								int _g = 0;
HXDLIN( 661)								while((_g < copyKeys4->length)){
HXLINE( 661)									int key = copyKeys4->__get(_g);
HXDLIN( 661)									_g = (_g + 1);
HXDLIN( 661)									if ((key != -1)) {
HXLINE( 661)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)10: {
HXLINE( 661)								 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 661)								int state = 2;
HXDLIN( 661)								int _g = 0;
HXDLIN( 661)								while((_g < copyKeys4->length)){
HXLINE( 661)									int key = copyKeys4->__get(_g);
HXDLIN( 661)									_g = (_g + 1);
HXDLIN( 661)									if ((key != -1)) {
HXLINE( 661)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)11: {
HXLINE( 661)								 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 661)								int state = 2;
HXDLIN( 661)								int _g = 0;
HXDLIN( 661)								while((_g < copyKeys4->length)){
HXLINE( 661)									int key = copyKeys4->__get(_g);
HXDLIN( 661)									_g = (_g + 1);
HXDLIN( 661)									if ((key != -1)) {
HXLINE( 661)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            						}
            					}
HXLINE( 662)					{
HXLINE( 662)						::Array< int > copyKeys5 = ::Array_obj< int >::fromData( _hx_array_data_116e4296_1125,1)->copy();
HXDLIN( 662)						{
HXLINE( 662)							int _g10 = 0;
HXDLIN( 662)							int _g11 = copyKeys5->length;
HXDLIN( 662)							while((_g10 < _g11)){
HXLINE( 662)								_g10 = (_g10 + 1);
HXDLIN( 662)								int i = (_g10 - 1);
HXDLIN( 662)								if ((i == -1)) {
HXLINE( 662)									copyKeys5->remove(i);
            								}
            							}
            						}
HXDLIN( 662)						switch((int)(::Control_obj::NOTE_DOWN_dyn()->_hx_getIndex())){
            							case (int)0: {
HXLINE( 662)								{
HXLINE( 662)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_up;
HXDLIN( 662)									int state = 1;
HXDLIN( 662)									int _g = 0;
HXDLIN( 662)									while((_g < copyKeys5->length)){
HXLINE( 662)										int key = copyKeys5->__get(_g);
HXDLIN( 662)										_g = (_g + 1);
HXDLIN( 662)										if ((key != -1)) {
HXLINE( 662)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 662)								{
HXLINE( 662)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_upP;
HXDLIN( 662)									int state1 = 2;
HXDLIN( 662)									int _g1 = 0;
HXDLIN( 662)									while((_g1 < copyKeys5->length)){
HXLINE( 662)										int key = copyKeys5->__get(_g1);
HXDLIN( 662)										_g1 = (_g1 + 1);
HXDLIN( 662)										if ((key != -1)) {
HXLINE( 662)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 662)								{
HXLINE( 662)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_upR;
HXDLIN( 662)									int state2 = -1;
HXDLIN( 662)									int _g2 = 0;
HXDLIN( 662)									while((_g2 < copyKeys5->length)){
HXLINE( 662)										int key = copyKeys5->__get(_g2);
HXDLIN( 662)										_g2 = (_g2 + 1);
HXDLIN( 662)										if ((key != -1)) {
HXLINE( 662)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)1: {
HXLINE( 662)								{
HXLINE( 662)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_left;
HXDLIN( 662)									int state = 1;
HXDLIN( 662)									int _g = 0;
HXDLIN( 662)									while((_g < copyKeys5->length)){
HXLINE( 662)										int key = copyKeys5->__get(_g);
HXDLIN( 662)										_g = (_g + 1);
HXDLIN( 662)										if ((key != -1)) {
HXLINE( 662)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 662)								{
HXLINE( 662)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_leftP;
HXDLIN( 662)									int state1 = 2;
HXDLIN( 662)									int _g1 = 0;
HXDLIN( 662)									while((_g1 < copyKeys5->length)){
HXLINE( 662)										int key = copyKeys5->__get(_g1);
HXDLIN( 662)										_g1 = (_g1 + 1);
HXDLIN( 662)										if ((key != -1)) {
HXLINE( 662)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 662)								{
HXLINE( 662)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_leftR;
HXDLIN( 662)									int state2 = -1;
HXDLIN( 662)									int _g2 = 0;
HXDLIN( 662)									while((_g2 < copyKeys5->length)){
HXLINE( 662)										int key = copyKeys5->__get(_g2);
HXDLIN( 662)										_g2 = (_g2 + 1);
HXDLIN( 662)										if ((key != -1)) {
HXLINE( 662)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)2: {
HXLINE( 662)								{
HXLINE( 662)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_right;
HXDLIN( 662)									int state = 1;
HXDLIN( 662)									int _g = 0;
HXDLIN( 662)									while((_g < copyKeys5->length)){
HXLINE( 662)										int key = copyKeys5->__get(_g);
HXDLIN( 662)										_g = (_g + 1);
HXDLIN( 662)										if ((key != -1)) {
HXLINE( 662)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 662)								{
HXLINE( 662)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_rightP;
HXDLIN( 662)									int state1 = 2;
HXDLIN( 662)									int _g1 = 0;
HXDLIN( 662)									while((_g1 < copyKeys5->length)){
HXLINE( 662)										int key = copyKeys5->__get(_g1);
HXDLIN( 662)										_g1 = (_g1 + 1);
HXDLIN( 662)										if ((key != -1)) {
HXLINE( 662)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 662)								{
HXLINE( 662)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_rightR;
HXDLIN( 662)									int state2 = -1;
HXDLIN( 662)									int _g2 = 0;
HXDLIN( 662)									while((_g2 < copyKeys5->length)){
HXLINE( 662)										int key = copyKeys5->__get(_g2);
HXDLIN( 662)										_g2 = (_g2 + 1);
HXDLIN( 662)										if ((key != -1)) {
HXLINE( 662)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)3: {
HXLINE( 662)								{
HXLINE( 662)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_down;
HXDLIN( 662)									int state = 1;
HXDLIN( 662)									int _g = 0;
HXDLIN( 662)									while((_g < copyKeys5->length)){
HXLINE( 662)										int key = copyKeys5->__get(_g);
HXDLIN( 662)										_g = (_g + 1);
HXDLIN( 662)										if ((key != -1)) {
HXLINE( 662)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 662)								{
HXLINE( 662)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_downP;
HXDLIN( 662)									int state1 = 2;
HXDLIN( 662)									int _g1 = 0;
HXDLIN( 662)									while((_g1 < copyKeys5->length)){
HXLINE( 662)										int key = copyKeys5->__get(_g1);
HXDLIN( 662)										_g1 = (_g1 + 1);
HXDLIN( 662)										if ((key != -1)) {
HXLINE( 662)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 662)								{
HXLINE( 662)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_downR;
HXDLIN( 662)									int state2 = -1;
HXDLIN( 662)									int _g2 = 0;
HXDLIN( 662)									while((_g2 < copyKeys5->length)){
HXLINE( 662)										int key = copyKeys5->__get(_g2);
HXDLIN( 662)										_g2 = (_g2 + 1);
HXDLIN( 662)										if ((key != -1)) {
HXLINE( 662)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)4: {
HXLINE( 662)								{
HXLINE( 662)									 ::flixel::input::actions::FlxActionDigital action = this->_note_up;
HXDLIN( 662)									int state = 1;
HXDLIN( 662)									int _g = 0;
HXDLIN( 662)									while((_g < copyKeys5->length)){
HXLINE( 662)										int key = copyKeys5->__get(_g);
HXDLIN( 662)										_g = (_g + 1);
HXDLIN( 662)										if ((key != -1)) {
HXLINE( 662)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 662)								{
HXLINE( 662)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_upP;
HXDLIN( 662)									int state1 = 2;
HXDLIN( 662)									int _g1 = 0;
HXDLIN( 662)									while((_g1 < copyKeys5->length)){
HXLINE( 662)										int key = copyKeys5->__get(_g1);
HXDLIN( 662)										_g1 = (_g1 + 1);
HXDLIN( 662)										if ((key != -1)) {
HXLINE( 662)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 662)								{
HXLINE( 662)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_upR;
HXDLIN( 662)									int state2 = -1;
HXDLIN( 662)									int _g2 = 0;
HXDLIN( 662)									while((_g2 < copyKeys5->length)){
HXLINE( 662)										int key = copyKeys5->__get(_g2);
HXDLIN( 662)										_g2 = (_g2 + 1);
HXDLIN( 662)										if ((key != -1)) {
HXLINE( 662)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)5: {
HXLINE( 662)								{
HXLINE( 662)									 ::flixel::input::actions::FlxActionDigital action = this->_note_left;
HXDLIN( 662)									int state = 1;
HXDLIN( 662)									int _g = 0;
HXDLIN( 662)									while((_g < copyKeys5->length)){
HXLINE( 662)										int key = copyKeys5->__get(_g);
HXDLIN( 662)										_g = (_g + 1);
HXDLIN( 662)										if ((key != -1)) {
HXLINE( 662)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 662)								{
HXLINE( 662)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_leftP;
HXDLIN( 662)									int state1 = 2;
HXDLIN( 662)									int _g1 = 0;
HXDLIN( 662)									while((_g1 < copyKeys5->length)){
HXLINE( 662)										int key = copyKeys5->__get(_g1);
HXDLIN( 662)										_g1 = (_g1 + 1);
HXDLIN( 662)										if ((key != -1)) {
HXLINE( 662)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 662)								{
HXLINE( 662)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_leftR;
HXDLIN( 662)									int state2 = -1;
HXDLIN( 662)									int _g2 = 0;
HXDLIN( 662)									while((_g2 < copyKeys5->length)){
HXLINE( 662)										int key = copyKeys5->__get(_g2);
HXDLIN( 662)										_g2 = (_g2 + 1);
HXDLIN( 662)										if ((key != -1)) {
HXLINE( 662)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)6: {
HXLINE( 662)								{
HXLINE( 662)									 ::flixel::input::actions::FlxActionDigital action = this->_note_right;
HXDLIN( 662)									int state = 1;
HXDLIN( 662)									int _g = 0;
HXDLIN( 662)									while((_g < copyKeys5->length)){
HXLINE( 662)										int key = copyKeys5->__get(_g);
HXDLIN( 662)										_g = (_g + 1);
HXDLIN( 662)										if ((key != -1)) {
HXLINE( 662)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 662)								{
HXLINE( 662)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_rightP;
HXDLIN( 662)									int state1 = 2;
HXDLIN( 662)									int _g1 = 0;
HXDLIN( 662)									while((_g1 < copyKeys5->length)){
HXLINE( 662)										int key = copyKeys5->__get(_g1);
HXDLIN( 662)										_g1 = (_g1 + 1);
HXDLIN( 662)										if ((key != -1)) {
HXLINE( 662)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 662)								{
HXLINE( 662)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_rightR;
HXDLIN( 662)									int state2 = -1;
HXDLIN( 662)									int _g2 = 0;
HXDLIN( 662)									while((_g2 < copyKeys5->length)){
HXLINE( 662)										int key = copyKeys5->__get(_g2);
HXDLIN( 662)										_g2 = (_g2 + 1);
HXDLIN( 662)										if ((key != -1)) {
HXLINE( 662)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)7: {
HXLINE( 662)								{
HXLINE( 662)									 ::flixel::input::actions::FlxActionDigital action = this->_note_down;
HXDLIN( 662)									int state = 1;
HXDLIN( 662)									int _g = 0;
HXDLIN( 662)									while((_g < copyKeys5->length)){
HXLINE( 662)										int key = copyKeys5->__get(_g);
HXDLIN( 662)										_g = (_g + 1);
HXDLIN( 662)										if ((key != -1)) {
HXLINE( 662)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 662)								{
HXLINE( 662)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_downP;
HXDLIN( 662)									int state1 = 2;
HXDLIN( 662)									int _g1 = 0;
HXDLIN( 662)									while((_g1 < copyKeys5->length)){
HXLINE( 662)										int key = copyKeys5->__get(_g1);
HXDLIN( 662)										_g1 = (_g1 + 1);
HXDLIN( 662)										if ((key != -1)) {
HXLINE( 662)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 662)								{
HXLINE( 662)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_downR;
HXDLIN( 662)									int state2 = -1;
HXDLIN( 662)									int _g2 = 0;
HXDLIN( 662)									while((_g2 < copyKeys5->length)){
HXLINE( 662)										int key = copyKeys5->__get(_g2);
HXDLIN( 662)										_g2 = (_g2 + 1);
HXDLIN( 662)										if ((key != -1)) {
HXLINE( 662)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)8: {
HXLINE( 662)								 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 662)								int state = 2;
HXDLIN( 662)								int _g = 0;
HXDLIN( 662)								while((_g < copyKeys5->length)){
HXLINE( 662)									int key = copyKeys5->__get(_g);
HXDLIN( 662)									_g = (_g + 1);
HXDLIN( 662)									if ((key != -1)) {
HXLINE( 662)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)9: {
HXLINE( 662)								 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 662)								int state = 2;
HXDLIN( 662)								int _g = 0;
HXDLIN( 662)								while((_g < copyKeys5->length)){
HXLINE( 662)									int key = copyKeys5->__get(_g);
HXDLIN( 662)									_g = (_g + 1);
HXDLIN( 662)									if ((key != -1)) {
HXLINE( 662)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)10: {
HXLINE( 662)								 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 662)								int state = 2;
HXDLIN( 662)								int _g = 0;
HXDLIN( 662)								while((_g < copyKeys5->length)){
HXLINE( 662)									int key = copyKeys5->__get(_g);
HXDLIN( 662)									_g = (_g + 1);
HXDLIN( 662)									if ((key != -1)) {
HXLINE( 662)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)11: {
HXLINE( 662)								 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 662)								int state = 2;
HXDLIN( 662)								int _g = 0;
HXDLIN( 662)								while((_g < copyKeys5->length)){
HXLINE( 662)									int key = copyKeys5->__get(_g);
HXDLIN( 662)									_g = (_g + 1);
HXDLIN( 662)									if ((key != -1)) {
HXLINE( 662)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            						}
            					}
HXLINE( 663)					{
HXLINE( 663)						::Array< int > copyKeys6 = ::Array_obj< int >::fromData( _hx_array_data_116e4296_1126,1)->copy();
HXDLIN( 663)						{
HXLINE( 663)							int _g12 = 0;
HXDLIN( 663)							int _g13 = copyKeys6->length;
HXDLIN( 663)							while((_g12 < _g13)){
HXLINE( 663)								_g12 = (_g12 + 1);
HXDLIN( 663)								int i = (_g12 - 1);
HXDLIN( 663)								if ((i == -1)) {
HXLINE( 663)									copyKeys6->remove(i);
            								}
            							}
            						}
HXDLIN( 663)						switch((int)(::Control_obj::NOTE_LEFT_dyn()->_hx_getIndex())){
            							case (int)0: {
HXLINE( 663)								{
HXLINE( 663)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_up;
HXDLIN( 663)									int state = 1;
HXDLIN( 663)									int _g = 0;
HXDLIN( 663)									while((_g < copyKeys6->length)){
HXLINE( 663)										int key = copyKeys6->__get(_g);
HXDLIN( 663)										_g = (_g + 1);
HXDLIN( 663)										if ((key != -1)) {
HXLINE( 663)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 663)								{
HXLINE( 663)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_upP;
HXDLIN( 663)									int state1 = 2;
HXDLIN( 663)									int _g1 = 0;
HXDLIN( 663)									while((_g1 < copyKeys6->length)){
HXLINE( 663)										int key = copyKeys6->__get(_g1);
HXDLIN( 663)										_g1 = (_g1 + 1);
HXDLIN( 663)										if ((key != -1)) {
HXLINE( 663)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 663)								{
HXLINE( 663)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_upR;
HXDLIN( 663)									int state2 = -1;
HXDLIN( 663)									int _g2 = 0;
HXDLIN( 663)									while((_g2 < copyKeys6->length)){
HXLINE( 663)										int key = copyKeys6->__get(_g2);
HXDLIN( 663)										_g2 = (_g2 + 1);
HXDLIN( 663)										if ((key != -1)) {
HXLINE( 663)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)1: {
HXLINE( 663)								{
HXLINE( 663)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_left;
HXDLIN( 663)									int state = 1;
HXDLIN( 663)									int _g = 0;
HXDLIN( 663)									while((_g < copyKeys6->length)){
HXLINE( 663)										int key = copyKeys6->__get(_g);
HXDLIN( 663)										_g = (_g + 1);
HXDLIN( 663)										if ((key != -1)) {
HXLINE( 663)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 663)								{
HXLINE( 663)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_leftP;
HXDLIN( 663)									int state1 = 2;
HXDLIN( 663)									int _g1 = 0;
HXDLIN( 663)									while((_g1 < copyKeys6->length)){
HXLINE( 663)										int key = copyKeys6->__get(_g1);
HXDLIN( 663)										_g1 = (_g1 + 1);
HXDLIN( 663)										if ((key != -1)) {
HXLINE( 663)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 663)								{
HXLINE( 663)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_leftR;
HXDLIN( 663)									int state2 = -1;
HXDLIN( 663)									int _g2 = 0;
HXDLIN( 663)									while((_g2 < copyKeys6->length)){
HXLINE( 663)										int key = copyKeys6->__get(_g2);
HXDLIN( 663)										_g2 = (_g2 + 1);
HXDLIN( 663)										if ((key != -1)) {
HXLINE( 663)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)2: {
HXLINE( 663)								{
HXLINE( 663)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_right;
HXDLIN( 663)									int state = 1;
HXDLIN( 663)									int _g = 0;
HXDLIN( 663)									while((_g < copyKeys6->length)){
HXLINE( 663)										int key = copyKeys6->__get(_g);
HXDLIN( 663)										_g = (_g + 1);
HXDLIN( 663)										if ((key != -1)) {
HXLINE( 663)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 663)								{
HXLINE( 663)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_rightP;
HXDLIN( 663)									int state1 = 2;
HXDLIN( 663)									int _g1 = 0;
HXDLIN( 663)									while((_g1 < copyKeys6->length)){
HXLINE( 663)										int key = copyKeys6->__get(_g1);
HXDLIN( 663)										_g1 = (_g1 + 1);
HXDLIN( 663)										if ((key != -1)) {
HXLINE( 663)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 663)								{
HXLINE( 663)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_rightR;
HXDLIN( 663)									int state2 = -1;
HXDLIN( 663)									int _g2 = 0;
HXDLIN( 663)									while((_g2 < copyKeys6->length)){
HXLINE( 663)										int key = copyKeys6->__get(_g2);
HXDLIN( 663)										_g2 = (_g2 + 1);
HXDLIN( 663)										if ((key != -1)) {
HXLINE( 663)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)3: {
HXLINE( 663)								{
HXLINE( 663)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_down;
HXDLIN( 663)									int state = 1;
HXDLIN( 663)									int _g = 0;
HXDLIN( 663)									while((_g < copyKeys6->length)){
HXLINE( 663)										int key = copyKeys6->__get(_g);
HXDLIN( 663)										_g = (_g + 1);
HXDLIN( 663)										if ((key != -1)) {
HXLINE( 663)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 663)								{
HXLINE( 663)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_downP;
HXDLIN( 663)									int state1 = 2;
HXDLIN( 663)									int _g1 = 0;
HXDLIN( 663)									while((_g1 < copyKeys6->length)){
HXLINE( 663)										int key = copyKeys6->__get(_g1);
HXDLIN( 663)										_g1 = (_g1 + 1);
HXDLIN( 663)										if ((key != -1)) {
HXLINE( 663)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 663)								{
HXLINE( 663)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_downR;
HXDLIN( 663)									int state2 = -1;
HXDLIN( 663)									int _g2 = 0;
HXDLIN( 663)									while((_g2 < copyKeys6->length)){
HXLINE( 663)										int key = copyKeys6->__get(_g2);
HXDLIN( 663)										_g2 = (_g2 + 1);
HXDLIN( 663)										if ((key != -1)) {
HXLINE( 663)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)4: {
HXLINE( 663)								{
HXLINE( 663)									 ::flixel::input::actions::FlxActionDigital action = this->_note_up;
HXDLIN( 663)									int state = 1;
HXDLIN( 663)									int _g = 0;
HXDLIN( 663)									while((_g < copyKeys6->length)){
HXLINE( 663)										int key = copyKeys6->__get(_g);
HXDLIN( 663)										_g = (_g + 1);
HXDLIN( 663)										if ((key != -1)) {
HXLINE( 663)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 663)								{
HXLINE( 663)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_upP;
HXDLIN( 663)									int state1 = 2;
HXDLIN( 663)									int _g1 = 0;
HXDLIN( 663)									while((_g1 < copyKeys6->length)){
HXLINE( 663)										int key = copyKeys6->__get(_g1);
HXDLIN( 663)										_g1 = (_g1 + 1);
HXDLIN( 663)										if ((key != -1)) {
HXLINE( 663)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 663)								{
HXLINE( 663)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_upR;
HXDLIN( 663)									int state2 = -1;
HXDLIN( 663)									int _g2 = 0;
HXDLIN( 663)									while((_g2 < copyKeys6->length)){
HXLINE( 663)										int key = copyKeys6->__get(_g2);
HXDLIN( 663)										_g2 = (_g2 + 1);
HXDLIN( 663)										if ((key != -1)) {
HXLINE( 663)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)5: {
HXLINE( 663)								{
HXLINE( 663)									 ::flixel::input::actions::FlxActionDigital action = this->_note_left;
HXDLIN( 663)									int state = 1;
HXDLIN( 663)									int _g = 0;
HXDLIN( 663)									while((_g < copyKeys6->length)){
HXLINE( 663)										int key = copyKeys6->__get(_g);
HXDLIN( 663)										_g = (_g + 1);
HXDLIN( 663)										if ((key != -1)) {
HXLINE( 663)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 663)								{
HXLINE( 663)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_leftP;
HXDLIN( 663)									int state1 = 2;
HXDLIN( 663)									int _g1 = 0;
HXDLIN( 663)									while((_g1 < copyKeys6->length)){
HXLINE( 663)										int key = copyKeys6->__get(_g1);
HXDLIN( 663)										_g1 = (_g1 + 1);
HXDLIN( 663)										if ((key != -1)) {
HXLINE( 663)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 663)								{
HXLINE( 663)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_leftR;
HXDLIN( 663)									int state2 = -1;
HXDLIN( 663)									int _g2 = 0;
HXDLIN( 663)									while((_g2 < copyKeys6->length)){
HXLINE( 663)										int key = copyKeys6->__get(_g2);
HXDLIN( 663)										_g2 = (_g2 + 1);
HXDLIN( 663)										if ((key != -1)) {
HXLINE( 663)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)6: {
HXLINE( 663)								{
HXLINE( 663)									 ::flixel::input::actions::FlxActionDigital action = this->_note_right;
HXDLIN( 663)									int state = 1;
HXDLIN( 663)									int _g = 0;
HXDLIN( 663)									while((_g < copyKeys6->length)){
HXLINE( 663)										int key = copyKeys6->__get(_g);
HXDLIN( 663)										_g = (_g + 1);
HXDLIN( 663)										if ((key != -1)) {
HXLINE( 663)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 663)								{
HXLINE( 663)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_rightP;
HXDLIN( 663)									int state1 = 2;
HXDLIN( 663)									int _g1 = 0;
HXDLIN( 663)									while((_g1 < copyKeys6->length)){
HXLINE( 663)										int key = copyKeys6->__get(_g1);
HXDLIN( 663)										_g1 = (_g1 + 1);
HXDLIN( 663)										if ((key != -1)) {
HXLINE( 663)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 663)								{
HXLINE( 663)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_rightR;
HXDLIN( 663)									int state2 = -1;
HXDLIN( 663)									int _g2 = 0;
HXDLIN( 663)									while((_g2 < copyKeys6->length)){
HXLINE( 663)										int key = copyKeys6->__get(_g2);
HXDLIN( 663)										_g2 = (_g2 + 1);
HXDLIN( 663)										if ((key != -1)) {
HXLINE( 663)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)7: {
HXLINE( 663)								{
HXLINE( 663)									 ::flixel::input::actions::FlxActionDigital action = this->_note_down;
HXDLIN( 663)									int state = 1;
HXDLIN( 663)									int _g = 0;
HXDLIN( 663)									while((_g < copyKeys6->length)){
HXLINE( 663)										int key = copyKeys6->__get(_g);
HXDLIN( 663)										_g = (_g + 1);
HXDLIN( 663)										if ((key != -1)) {
HXLINE( 663)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 663)								{
HXLINE( 663)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_downP;
HXDLIN( 663)									int state1 = 2;
HXDLIN( 663)									int _g1 = 0;
HXDLIN( 663)									while((_g1 < copyKeys6->length)){
HXLINE( 663)										int key = copyKeys6->__get(_g1);
HXDLIN( 663)										_g1 = (_g1 + 1);
HXDLIN( 663)										if ((key != -1)) {
HXLINE( 663)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 663)								{
HXLINE( 663)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_downR;
HXDLIN( 663)									int state2 = -1;
HXDLIN( 663)									int _g2 = 0;
HXDLIN( 663)									while((_g2 < copyKeys6->length)){
HXLINE( 663)										int key = copyKeys6->__get(_g2);
HXDLIN( 663)										_g2 = (_g2 + 1);
HXDLIN( 663)										if ((key != -1)) {
HXLINE( 663)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)8: {
HXLINE( 663)								 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 663)								int state = 2;
HXDLIN( 663)								int _g = 0;
HXDLIN( 663)								while((_g < copyKeys6->length)){
HXLINE( 663)									int key = copyKeys6->__get(_g);
HXDLIN( 663)									_g = (_g + 1);
HXDLIN( 663)									if ((key != -1)) {
HXLINE( 663)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)9: {
HXLINE( 663)								 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 663)								int state = 2;
HXDLIN( 663)								int _g = 0;
HXDLIN( 663)								while((_g < copyKeys6->length)){
HXLINE( 663)									int key = copyKeys6->__get(_g);
HXDLIN( 663)									_g = (_g + 1);
HXDLIN( 663)									if ((key != -1)) {
HXLINE( 663)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)10: {
HXLINE( 663)								 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 663)								int state = 2;
HXDLIN( 663)								int _g = 0;
HXDLIN( 663)								while((_g < copyKeys6->length)){
HXLINE( 663)									int key = copyKeys6->__get(_g);
HXDLIN( 663)									_g = (_g + 1);
HXDLIN( 663)									if ((key != -1)) {
HXLINE( 663)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)11: {
HXLINE( 663)								 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 663)								int state = 2;
HXDLIN( 663)								int _g = 0;
HXDLIN( 663)								while((_g < copyKeys6->length)){
HXLINE( 663)									int key = copyKeys6->__get(_g);
HXDLIN( 663)									_g = (_g + 1);
HXDLIN( 663)									if ((key != -1)) {
HXLINE( 663)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            						}
            					}
HXLINE( 664)					{
HXLINE( 664)						::Array< int > copyKeys7 = ::Array_obj< int >::fromData( _hx_array_data_116e4296_1127,1)->copy();
HXDLIN( 664)						{
HXLINE( 664)							int _g14 = 0;
HXDLIN( 664)							int _g15 = copyKeys7->length;
HXDLIN( 664)							while((_g14 < _g15)){
HXLINE( 664)								_g14 = (_g14 + 1);
HXDLIN( 664)								int i = (_g14 - 1);
HXDLIN( 664)								if ((i == -1)) {
HXLINE( 664)									copyKeys7->remove(i);
            								}
            							}
            						}
HXDLIN( 664)						switch((int)(::Control_obj::NOTE_RIGHT_dyn()->_hx_getIndex())){
            							case (int)0: {
HXLINE( 664)								{
HXLINE( 664)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_up;
HXDLIN( 664)									int state = 1;
HXDLIN( 664)									int _g = 0;
HXDLIN( 664)									while((_g < copyKeys7->length)){
HXLINE( 664)										int key = copyKeys7->__get(_g);
HXDLIN( 664)										_g = (_g + 1);
HXDLIN( 664)										if ((key != -1)) {
HXLINE( 664)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 664)								{
HXLINE( 664)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_upP;
HXDLIN( 664)									int state1 = 2;
HXDLIN( 664)									int _g1 = 0;
HXDLIN( 664)									while((_g1 < copyKeys7->length)){
HXLINE( 664)										int key = copyKeys7->__get(_g1);
HXDLIN( 664)										_g1 = (_g1 + 1);
HXDLIN( 664)										if ((key != -1)) {
HXLINE( 664)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 664)								{
HXLINE( 664)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_upR;
HXDLIN( 664)									int state2 = -1;
HXDLIN( 664)									int _g2 = 0;
HXDLIN( 664)									while((_g2 < copyKeys7->length)){
HXLINE( 664)										int key = copyKeys7->__get(_g2);
HXDLIN( 664)										_g2 = (_g2 + 1);
HXDLIN( 664)										if ((key != -1)) {
HXLINE( 664)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)1: {
HXLINE( 664)								{
HXLINE( 664)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_left;
HXDLIN( 664)									int state = 1;
HXDLIN( 664)									int _g = 0;
HXDLIN( 664)									while((_g < copyKeys7->length)){
HXLINE( 664)										int key = copyKeys7->__get(_g);
HXDLIN( 664)										_g = (_g + 1);
HXDLIN( 664)										if ((key != -1)) {
HXLINE( 664)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 664)								{
HXLINE( 664)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_leftP;
HXDLIN( 664)									int state1 = 2;
HXDLIN( 664)									int _g1 = 0;
HXDLIN( 664)									while((_g1 < copyKeys7->length)){
HXLINE( 664)										int key = copyKeys7->__get(_g1);
HXDLIN( 664)										_g1 = (_g1 + 1);
HXDLIN( 664)										if ((key != -1)) {
HXLINE( 664)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 664)								{
HXLINE( 664)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_leftR;
HXDLIN( 664)									int state2 = -1;
HXDLIN( 664)									int _g2 = 0;
HXDLIN( 664)									while((_g2 < copyKeys7->length)){
HXLINE( 664)										int key = copyKeys7->__get(_g2);
HXDLIN( 664)										_g2 = (_g2 + 1);
HXDLIN( 664)										if ((key != -1)) {
HXLINE( 664)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)2: {
HXLINE( 664)								{
HXLINE( 664)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_right;
HXDLIN( 664)									int state = 1;
HXDLIN( 664)									int _g = 0;
HXDLIN( 664)									while((_g < copyKeys7->length)){
HXLINE( 664)										int key = copyKeys7->__get(_g);
HXDLIN( 664)										_g = (_g + 1);
HXDLIN( 664)										if ((key != -1)) {
HXLINE( 664)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 664)								{
HXLINE( 664)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_rightP;
HXDLIN( 664)									int state1 = 2;
HXDLIN( 664)									int _g1 = 0;
HXDLIN( 664)									while((_g1 < copyKeys7->length)){
HXLINE( 664)										int key = copyKeys7->__get(_g1);
HXDLIN( 664)										_g1 = (_g1 + 1);
HXDLIN( 664)										if ((key != -1)) {
HXLINE( 664)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 664)								{
HXLINE( 664)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_rightR;
HXDLIN( 664)									int state2 = -1;
HXDLIN( 664)									int _g2 = 0;
HXDLIN( 664)									while((_g2 < copyKeys7->length)){
HXLINE( 664)										int key = copyKeys7->__get(_g2);
HXDLIN( 664)										_g2 = (_g2 + 1);
HXDLIN( 664)										if ((key != -1)) {
HXLINE( 664)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)3: {
HXLINE( 664)								{
HXLINE( 664)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_down;
HXDLIN( 664)									int state = 1;
HXDLIN( 664)									int _g = 0;
HXDLIN( 664)									while((_g < copyKeys7->length)){
HXLINE( 664)										int key = copyKeys7->__get(_g);
HXDLIN( 664)										_g = (_g + 1);
HXDLIN( 664)										if ((key != -1)) {
HXLINE( 664)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 664)								{
HXLINE( 664)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_downP;
HXDLIN( 664)									int state1 = 2;
HXDLIN( 664)									int _g1 = 0;
HXDLIN( 664)									while((_g1 < copyKeys7->length)){
HXLINE( 664)										int key = copyKeys7->__get(_g1);
HXDLIN( 664)										_g1 = (_g1 + 1);
HXDLIN( 664)										if ((key != -1)) {
HXLINE( 664)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 664)								{
HXLINE( 664)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_downR;
HXDLIN( 664)									int state2 = -1;
HXDLIN( 664)									int _g2 = 0;
HXDLIN( 664)									while((_g2 < copyKeys7->length)){
HXLINE( 664)										int key = copyKeys7->__get(_g2);
HXDLIN( 664)										_g2 = (_g2 + 1);
HXDLIN( 664)										if ((key != -1)) {
HXLINE( 664)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)4: {
HXLINE( 664)								{
HXLINE( 664)									 ::flixel::input::actions::FlxActionDigital action = this->_note_up;
HXDLIN( 664)									int state = 1;
HXDLIN( 664)									int _g = 0;
HXDLIN( 664)									while((_g < copyKeys7->length)){
HXLINE( 664)										int key = copyKeys7->__get(_g);
HXDLIN( 664)										_g = (_g + 1);
HXDLIN( 664)										if ((key != -1)) {
HXLINE( 664)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 664)								{
HXLINE( 664)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_upP;
HXDLIN( 664)									int state1 = 2;
HXDLIN( 664)									int _g1 = 0;
HXDLIN( 664)									while((_g1 < copyKeys7->length)){
HXLINE( 664)										int key = copyKeys7->__get(_g1);
HXDLIN( 664)										_g1 = (_g1 + 1);
HXDLIN( 664)										if ((key != -1)) {
HXLINE( 664)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 664)								{
HXLINE( 664)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_upR;
HXDLIN( 664)									int state2 = -1;
HXDLIN( 664)									int _g2 = 0;
HXDLIN( 664)									while((_g2 < copyKeys7->length)){
HXLINE( 664)										int key = copyKeys7->__get(_g2);
HXDLIN( 664)										_g2 = (_g2 + 1);
HXDLIN( 664)										if ((key != -1)) {
HXLINE( 664)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)5: {
HXLINE( 664)								{
HXLINE( 664)									 ::flixel::input::actions::FlxActionDigital action = this->_note_left;
HXDLIN( 664)									int state = 1;
HXDLIN( 664)									int _g = 0;
HXDLIN( 664)									while((_g < copyKeys7->length)){
HXLINE( 664)										int key = copyKeys7->__get(_g);
HXDLIN( 664)										_g = (_g + 1);
HXDLIN( 664)										if ((key != -1)) {
HXLINE( 664)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 664)								{
HXLINE( 664)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_leftP;
HXDLIN( 664)									int state1 = 2;
HXDLIN( 664)									int _g1 = 0;
HXDLIN( 664)									while((_g1 < copyKeys7->length)){
HXLINE( 664)										int key = copyKeys7->__get(_g1);
HXDLIN( 664)										_g1 = (_g1 + 1);
HXDLIN( 664)										if ((key != -1)) {
HXLINE( 664)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 664)								{
HXLINE( 664)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_leftR;
HXDLIN( 664)									int state2 = -1;
HXDLIN( 664)									int _g2 = 0;
HXDLIN( 664)									while((_g2 < copyKeys7->length)){
HXLINE( 664)										int key = copyKeys7->__get(_g2);
HXDLIN( 664)										_g2 = (_g2 + 1);
HXDLIN( 664)										if ((key != -1)) {
HXLINE( 664)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)6: {
HXLINE( 664)								{
HXLINE( 664)									 ::flixel::input::actions::FlxActionDigital action = this->_note_right;
HXDLIN( 664)									int state = 1;
HXDLIN( 664)									int _g = 0;
HXDLIN( 664)									while((_g < copyKeys7->length)){
HXLINE( 664)										int key = copyKeys7->__get(_g);
HXDLIN( 664)										_g = (_g + 1);
HXDLIN( 664)										if ((key != -1)) {
HXLINE( 664)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 664)								{
HXLINE( 664)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_rightP;
HXDLIN( 664)									int state1 = 2;
HXDLIN( 664)									int _g1 = 0;
HXDLIN( 664)									while((_g1 < copyKeys7->length)){
HXLINE( 664)										int key = copyKeys7->__get(_g1);
HXDLIN( 664)										_g1 = (_g1 + 1);
HXDLIN( 664)										if ((key != -1)) {
HXLINE( 664)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 664)								{
HXLINE( 664)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_rightR;
HXDLIN( 664)									int state2 = -1;
HXDLIN( 664)									int _g2 = 0;
HXDLIN( 664)									while((_g2 < copyKeys7->length)){
HXLINE( 664)										int key = copyKeys7->__get(_g2);
HXDLIN( 664)										_g2 = (_g2 + 1);
HXDLIN( 664)										if ((key != -1)) {
HXLINE( 664)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)7: {
HXLINE( 664)								{
HXLINE( 664)									 ::flixel::input::actions::FlxActionDigital action = this->_note_down;
HXDLIN( 664)									int state = 1;
HXDLIN( 664)									int _g = 0;
HXDLIN( 664)									while((_g < copyKeys7->length)){
HXLINE( 664)										int key = copyKeys7->__get(_g);
HXDLIN( 664)										_g = (_g + 1);
HXDLIN( 664)										if ((key != -1)) {
HXLINE( 664)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 664)								{
HXLINE( 664)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_downP;
HXDLIN( 664)									int state1 = 2;
HXDLIN( 664)									int _g1 = 0;
HXDLIN( 664)									while((_g1 < copyKeys7->length)){
HXLINE( 664)										int key = copyKeys7->__get(_g1);
HXDLIN( 664)										_g1 = (_g1 + 1);
HXDLIN( 664)										if ((key != -1)) {
HXLINE( 664)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 664)								{
HXLINE( 664)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_downR;
HXDLIN( 664)									int state2 = -1;
HXDLIN( 664)									int _g2 = 0;
HXDLIN( 664)									while((_g2 < copyKeys7->length)){
HXLINE( 664)										int key = copyKeys7->__get(_g2);
HXDLIN( 664)										_g2 = (_g2 + 1);
HXDLIN( 664)										if ((key != -1)) {
HXLINE( 664)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)8: {
HXLINE( 664)								 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 664)								int state = 2;
HXDLIN( 664)								int _g = 0;
HXDLIN( 664)								while((_g < copyKeys7->length)){
HXLINE( 664)									int key = copyKeys7->__get(_g);
HXDLIN( 664)									_g = (_g + 1);
HXDLIN( 664)									if ((key != -1)) {
HXLINE( 664)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)9: {
HXLINE( 664)								 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 664)								int state = 2;
HXDLIN( 664)								int _g = 0;
HXDLIN( 664)								while((_g < copyKeys7->length)){
HXLINE( 664)									int key = copyKeys7->__get(_g);
HXDLIN( 664)									_g = (_g + 1);
HXDLIN( 664)									if ((key != -1)) {
HXLINE( 664)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)10: {
HXLINE( 664)								 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 664)								int state = 2;
HXDLIN( 664)								int _g = 0;
HXDLIN( 664)								while((_g < copyKeys7->length)){
HXLINE( 664)									int key = copyKeys7->__get(_g);
HXDLIN( 664)									_g = (_g + 1);
HXDLIN( 664)									if ((key != -1)) {
HXLINE( 664)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)11: {
HXLINE( 664)								 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 664)								int state = 2;
HXDLIN( 664)								int _g = 0;
HXDLIN( 664)								while((_g < copyKeys7->length)){
HXLINE( 664)									int key = copyKeys7->__get(_g);
HXDLIN( 664)									_g = (_g + 1);
HXDLIN( 664)									if ((key != -1)) {
HXLINE( 664)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            						}
            					}
HXLINE( 665)					{
HXLINE( 665)						::Array< int > copyKeys8 = ::Array_obj< int >::fromData( _hx_array_data_116e4296_1128,2)->copy();
HXDLIN( 665)						{
HXLINE( 665)							int _g16 = 0;
HXDLIN( 665)							int _g17 = copyKeys8->length;
HXDLIN( 665)							while((_g16 < _g17)){
HXLINE( 665)								_g16 = (_g16 + 1);
HXDLIN( 665)								int i = (_g16 - 1);
HXDLIN( 665)								if ((i == -1)) {
HXLINE( 665)									copyKeys8->remove(i);
            								}
            							}
            						}
HXDLIN( 665)						switch((int)(::Control_obj::ACCEPT_dyn()->_hx_getIndex())){
            							case (int)0: {
HXLINE( 665)								{
HXLINE( 665)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_up;
HXDLIN( 665)									int state = 1;
HXDLIN( 665)									int _g = 0;
HXDLIN( 665)									while((_g < copyKeys8->length)){
HXLINE( 665)										int key = copyKeys8->__get(_g);
HXDLIN( 665)										_g = (_g + 1);
HXDLIN( 665)										if ((key != -1)) {
HXLINE( 665)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 665)								{
HXLINE( 665)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_upP;
HXDLIN( 665)									int state1 = 2;
HXDLIN( 665)									int _g1 = 0;
HXDLIN( 665)									while((_g1 < copyKeys8->length)){
HXLINE( 665)										int key = copyKeys8->__get(_g1);
HXDLIN( 665)										_g1 = (_g1 + 1);
HXDLIN( 665)										if ((key != -1)) {
HXLINE( 665)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 665)								{
HXLINE( 665)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_upR;
HXDLIN( 665)									int state2 = -1;
HXDLIN( 665)									int _g2 = 0;
HXDLIN( 665)									while((_g2 < copyKeys8->length)){
HXLINE( 665)										int key = copyKeys8->__get(_g2);
HXDLIN( 665)										_g2 = (_g2 + 1);
HXDLIN( 665)										if ((key != -1)) {
HXLINE( 665)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)1: {
HXLINE( 665)								{
HXLINE( 665)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_left;
HXDLIN( 665)									int state = 1;
HXDLIN( 665)									int _g = 0;
HXDLIN( 665)									while((_g < copyKeys8->length)){
HXLINE( 665)										int key = copyKeys8->__get(_g);
HXDLIN( 665)										_g = (_g + 1);
HXDLIN( 665)										if ((key != -1)) {
HXLINE( 665)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 665)								{
HXLINE( 665)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_leftP;
HXDLIN( 665)									int state1 = 2;
HXDLIN( 665)									int _g1 = 0;
HXDLIN( 665)									while((_g1 < copyKeys8->length)){
HXLINE( 665)										int key = copyKeys8->__get(_g1);
HXDLIN( 665)										_g1 = (_g1 + 1);
HXDLIN( 665)										if ((key != -1)) {
HXLINE( 665)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 665)								{
HXLINE( 665)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_leftR;
HXDLIN( 665)									int state2 = -1;
HXDLIN( 665)									int _g2 = 0;
HXDLIN( 665)									while((_g2 < copyKeys8->length)){
HXLINE( 665)										int key = copyKeys8->__get(_g2);
HXDLIN( 665)										_g2 = (_g2 + 1);
HXDLIN( 665)										if ((key != -1)) {
HXLINE( 665)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)2: {
HXLINE( 665)								{
HXLINE( 665)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_right;
HXDLIN( 665)									int state = 1;
HXDLIN( 665)									int _g = 0;
HXDLIN( 665)									while((_g < copyKeys8->length)){
HXLINE( 665)										int key = copyKeys8->__get(_g);
HXDLIN( 665)										_g = (_g + 1);
HXDLIN( 665)										if ((key != -1)) {
HXLINE( 665)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 665)								{
HXLINE( 665)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_rightP;
HXDLIN( 665)									int state1 = 2;
HXDLIN( 665)									int _g1 = 0;
HXDLIN( 665)									while((_g1 < copyKeys8->length)){
HXLINE( 665)										int key = copyKeys8->__get(_g1);
HXDLIN( 665)										_g1 = (_g1 + 1);
HXDLIN( 665)										if ((key != -1)) {
HXLINE( 665)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 665)								{
HXLINE( 665)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_rightR;
HXDLIN( 665)									int state2 = -1;
HXDLIN( 665)									int _g2 = 0;
HXDLIN( 665)									while((_g2 < copyKeys8->length)){
HXLINE( 665)										int key = copyKeys8->__get(_g2);
HXDLIN( 665)										_g2 = (_g2 + 1);
HXDLIN( 665)										if ((key != -1)) {
HXLINE( 665)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)3: {
HXLINE( 665)								{
HXLINE( 665)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_down;
HXDLIN( 665)									int state = 1;
HXDLIN( 665)									int _g = 0;
HXDLIN( 665)									while((_g < copyKeys8->length)){
HXLINE( 665)										int key = copyKeys8->__get(_g);
HXDLIN( 665)										_g = (_g + 1);
HXDLIN( 665)										if ((key != -1)) {
HXLINE( 665)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 665)								{
HXLINE( 665)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_downP;
HXDLIN( 665)									int state1 = 2;
HXDLIN( 665)									int _g1 = 0;
HXDLIN( 665)									while((_g1 < copyKeys8->length)){
HXLINE( 665)										int key = copyKeys8->__get(_g1);
HXDLIN( 665)										_g1 = (_g1 + 1);
HXDLIN( 665)										if ((key != -1)) {
HXLINE( 665)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 665)								{
HXLINE( 665)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_downR;
HXDLIN( 665)									int state2 = -1;
HXDLIN( 665)									int _g2 = 0;
HXDLIN( 665)									while((_g2 < copyKeys8->length)){
HXLINE( 665)										int key = copyKeys8->__get(_g2);
HXDLIN( 665)										_g2 = (_g2 + 1);
HXDLIN( 665)										if ((key != -1)) {
HXLINE( 665)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)4: {
HXLINE( 665)								{
HXLINE( 665)									 ::flixel::input::actions::FlxActionDigital action = this->_note_up;
HXDLIN( 665)									int state = 1;
HXDLIN( 665)									int _g = 0;
HXDLIN( 665)									while((_g < copyKeys8->length)){
HXLINE( 665)										int key = copyKeys8->__get(_g);
HXDLIN( 665)										_g = (_g + 1);
HXDLIN( 665)										if ((key != -1)) {
HXLINE( 665)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 665)								{
HXLINE( 665)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_upP;
HXDLIN( 665)									int state1 = 2;
HXDLIN( 665)									int _g1 = 0;
HXDLIN( 665)									while((_g1 < copyKeys8->length)){
HXLINE( 665)										int key = copyKeys8->__get(_g1);
HXDLIN( 665)										_g1 = (_g1 + 1);
HXDLIN( 665)										if ((key != -1)) {
HXLINE( 665)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 665)								{
HXLINE( 665)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_upR;
HXDLIN( 665)									int state2 = -1;
HXDLIN( 665)									int _g2 = 0;
HXDLIN( 665)									while((_g2 < copyKeys8->length)){
HXLINE( 665)										int key = copyKeys8->__get(_g2);
HXDLIN( 665)										_g2 = (_g2 + 1);
HXDLIN( 665)										if ((key != -1)) {
HXLINE( 665)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)5: {
HXLINE( 665)								{
HXLINE( 665)									 ::flixel::input::actions::FlxActionDigital action = this->_note_left;
HXDLIN( 665)									int state = 1;
HXDLIN( 665)									int _g = 0;
HXDLIN( 665)									while((_g < copyKeys8->length)){
HXLINE( 665)										int key = copyKeys8->__get(_g);
HXDLIN( 665)										_g = (_g + 1);
HXDLIN( 665)										if ((key != -1)) {
HXLINE( 665)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 665)								{
HXLINE( 665)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_leftP;
HXDLIN( 665)									int state1 = 2;
HXDLIN( 665)									int _g1 = 0;
HXDLIN( 665)									while((_g1 < copyKeys8->length)){
HXLINE( 665)										int key = copyKeys8->__get(_g1);
HXDLIN( 665)										_g1 = (_g1 + 1);
HXDLIN( 665)										if ((key != -1)) {
HXLINE( 665)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 665)								{
HXLINE( 665)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_leftR;
HXDLIN( 665)									int state2 = -1;
HXDLIN( 665)									int _g2 = 0;
HXDLIN( 665)									while((_g2 < copyKeys8->length)){
HXLINE( 665)										int key = copyKeys8->__get(_g2);
HXDLIN( 665)										_g2 = (_g2 + 1);
HXDLIN( 665)										if ((key != -1)) {
HXLINE( 665)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)6: {
HXLINE( 665)								{
HXLINE( 665)									 ::flixel::input::actions::FlxActionDigital action = this->_note_right;
HXDLIN( 665)									int state = 1;
HXDLIN( 665)									int _g = 0;
HXDLIN( 665)									while((_g < copyKeys8->length)){
HXLINE( 665)										int key = copyKeys8->__get(_g);
HXDLIN( 665)										_g = (_g + 1);
HXDLIN( 665)										if ((key != -1)) {
HXLINE( 665)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 665)								{
HXLINE( 665)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_rightP;
HXDLIN( 665)									int state1 = 2;
HXDLIN( 665)									int _g1 = 0;
HXDLIN( 665)									while((_g1 < copyKeys8->length)){
HXLINE( 665)										int key = copyKeys8->__get(_g1);
HXDLIN( 665)										_g1 = (_g1 + 1);
HXDLIN( 665)										if ((key != -1)) {
HXLINE( 665)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 665)								{
HXLINE( 665)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_rightR;
HXDLIN( 665)									int state2 = -1;
HXDLIN( 665)									int _g2 = 0;
HXDLIN( 665)									while((_g2 < copyKeys8->length)){
HXLINE( 665)										int key = copyKeys8->__get(_g2);
HXDLIN( 665)										_g2 = (_g2 + 1);
HXDLIN( 665)										if ((key != -1)) {
HXLINE( 665)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)7: {
HXLINE( 665)								{
HXLINE( 665)									 ::flixel::input::actions::FlxActionDigital action = this->_note_down;
HXDLIN( 665)									int state = 1;
HXDLIN( 665)									int _g = 0;
HXDLIN( 665)									while((_g < copyKeys8->length)){
HXLINE( 665)										int key = copyKeys8->__get(_g);
HXDLIN( 665)										_g = (_g + 1);
HXDLIN( 665)										if ((key != -1)) {
HXLINE( 665)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 665)								{
HXLINE( 665)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_downP;
HXDLIN( 665)									int state1 = 2;
HXDLIN( 665)									int _g1 = 0;
HXDLIN( 665)									while((_g1 < copyKeys8->length)){
HXLINE( 665)										int key = copyKeys8->__get(_g1);
HXDLIN( 665)										_g1 = (_g1 + 1);
HXDLIN( 665)										if ((key != -1)) {
HXLINE( 665)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 665)								{
HXLINE( 665)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_downR;
HXDLIN( 665)									int state2 = -1;
HXDLIN( 665)									int _g2 = 0;
HXDLIN( 665)									while((_g2 < copyKeys8->length)){
HXLINE( 665)										int key = copyKeys8->__get(_g2);
HXDLIN( 665)										_g2 = (_g2 + 1);
HXDLIN( 665)										if ((key != -1)) {
HXLINE( 665)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)8: {
HXLINE( 665)								 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 665)								int state = 2;
HXDLIN( 665)								int _g = 0;
HXDLIN( 665)								while((_g < copyKeys8->length)){
HXLINE( 665)									int key = copyKeys8->__get(_g);
HXDLIN( 665)									_g = (_g + 1);
HXDLIN( 665)									if ((key != -1)) {
HXLINE( 665)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)9: {
HXLINE( 665)								 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 665)								int state = 2;
HXDLIN( 665)								int _g = 0;
HXDLIN( 665)								while((_g < copyKeys8->length)){
HXLINE( 665)									int key = copyKeys8->__get(_g);
HXDLIN( 665)									_g = (_g + 1);
HXDLIN( 665)									if ((key != -1)) {
HXLINE( 665)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)10: {
HXLINE( 665)								 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 665)								int state = 2;
HXDLIN( 665)								int _g = 0;
HXDLIN( 665)								while((_g < copyKeys8->length)){
HXLINE( 665)									int key = copyKeys8->__get(_g);
HXDLIN( 665)									_g = (_g + 1);
HXDLIN( 665)									if ((key != -1)) {
HXLINE( 665)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)11: {
HXLINE( 665)								 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 665)								int state = 2;
HXDLIN( 665)								int _g = 0;
HXDLIN( 665)								while((_g < copyKeys8->length)){
HXLINE( 665)									int key = copyKeys8->__get(_g);
HXDLIN( 665)									_g = (_g + 1);
HXDLIN( 665)									if ((key != -1)) {
HXLINE( 665)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            						}
            					}
HXLINE( 666)					{
HXLINE( 666)						::Array< int > copyKeys9 = ::Array_obj< int >::fromData( _hx_array_data_116e4296_1129,2)->copy();
HXDLIN( 666)						{
HXLINE( 666)							int _g18 = 0;
HXDLIN( 666)							int _g19 = copyKeys9->length;
HXDLIN( 666)							while((_g18 < _g19)){
HXLINE( 666)								_g18 = (_g18 + 1);
HXDLIN( 666)								int i = (_g18 - 1);
HXDLIN( 666)								if ((i == -1)) {
HXLINE( 666)									copyKeys9->remove(i);
            								}
            							}
            						}
HXDLIN( 666)						switch((int)(::Control_obj::BACK_dyn()->_hx_getIndex())){
            							case (int)0: {
HXLINE( 666)								{
HXLINE( 666)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_up;
HXDLIN( 666)									int state = 1;
HXDLIN( 666)									int _g = 0;
HXDLIN( 666)									while((_g < copyKeys9->length)){
HXLINE( 666)										int key = copyKeys9->__get(_g);
HXDLIN( 666)										_g = (_g + 1);
HXDLIN( 666)										if ((key != -1)) {
HXLINE( 666)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 666)								{
HXLINE( 666)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_upP;
HXDLIN( 666)									int state1 = 2;
HXDLIN( 666)									int _g1 = 0;
HXDLIN( 666)									while((_g1 < copyKeys9->length)){
HXLINE( 666)										int key = copyKeys9->__get(_g1);
HXDLIN( 666)										_g1 = (_g1 + 1);
HXDLIN( 666)										if ((key != -1)) {
HXLINE( 666)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 666)								{
HXLINE( 666)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_upR;
HXDLIN( 666)									int state2 = -1;
HXDLIN( 666)									int _g2 = 0;
HXDLIN( 666)									while((_g2 < copyKeys9->length)){
HXLINE( 666)										int key = copyKeys9->__get(_g2);
HXDLIN( 666)										_g2 = (_g2 + 1);
HXDLIN( 666)										if ((key != -1)) {
HXLINE( 666)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)1: {
HXLINE( 666)								{
HXLINE( 666)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_left;
HXDLIN( 666)									int state = 1;
HXDLIN( 666)									int _g = 0;
HXDLIN( 666)									while((_g < copyKeys9->length)){
HXLINE( 666)										int key = copyKeys9->__get(_g);
HXDLIN( 666)										_g = (_g + 1);
HXDLIN( 666)										if ((key != -1)) {
HXLINE( 666)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 666)								{
HXLINE( 666)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_leftP;
HXDLIN( 666)									int state1 = 2;
HXDLIN( 666)									int _g1 = 0;
HXDLIN( 666)									while((_g1 < copyKeys9->length)){
HXLINE( 666)										int key = copyKeys9->__get(_g1);
HXDLIN( 666)										_g1 = (_g1 + 1);
HXDLIN( 666)										if ((key != -1)) {
HXLINE( 666)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 666)								{
HXLINE( 666)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_leftR;
HXDLIN( 666)									int state2 = -1;
HXDLIN( 666)									int _g2 = 0;
HXDLIN( 666)									while((_g2 < copyKeys9->length)){
HXLINE( 666)										int key = copyKeys9->__get(_g2);
HXDLIN( 666)										_g2 = (_g2 + 1);
HXDLIN( 666)										if ((key != -1)) {
HXLINE( 666)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)2: {
HXLINE( 666)								{
HXLINE( 666)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_right;
HXDLIN( 666)									int state = 1;
HXDLIN( 666)									int _g = 0;
HXDLIN( 666)									while((_g < copyKeys9->length)){
HXLINE( 666)										int key = copyKeys9->__get(_g);
HXDLIN( 666)										_g = (_g + 1);
HXDLIN( 666)										if ((key != -1)) {
HXLINE( 666)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 666)								{
HXLINE( 666)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_rightP;
HXDLIN( 666)									int state1 = 2;
HXDLIN( 666)									int _g1 = 0;
HXDLIN( 666)									while((_g1 < copyKeys9->length)){
HXLINE( 666)										int key = copyKeys9->__get(_g1);
HXDLIN( 666)										_g1 = (_g1 + 1);
HXDLIN( 666)										if ((key != -1)) {
HXLINE( 666)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 666)								{
HXLINE( 666)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_rightR;
HXDLIN( 666)									int state2 = -1;
HXDLIN( 666)									int _g2 = 0;
HXDLIN( 666)									while((_g2 < copyKeys9->length)){
HXLINE( 666)										int key = copyKeys9->__get(_g2);
HXDLIN( 666)										_g2 = (_g2 + 1);
HXDLIN( 666)										if ((key != -1)) {
HXLINE( 666)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)3: {
HXLINE( 666)								{
HXLINE( 666)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_down;
HXDLIN( 666)									int state = 1;
HXDLIN( 666)									int _g = 0;
HXDLIN( 666)									while((_g < copyKeys9->length)){
HXLINE( 666)										int key = copyKeys9->__get(_g);
HXDLIN( 666)										_g = (_g + 1);
HXDLIN( 666)										if ((key != -1)) {
HXLINE( 666)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 666)								{
HXLINE( 666)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_downP;
HXDLIN( 666)									int state1 = 2;
HXDLIN( 666)									int _g1 = 0;
HXDLIN( 666)									while((_g1 < copyKeys9->length)){
HXLINE( 666)										int key = copyKeys9->__get(_g1);
HXDLIN( 666)										_g1 = (_g1 + 1);
HXDLIN( 666)										if ((key != -1)) {
HXLINE( 666)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 666)								{
HXLINE( 666)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_downR;
HXDLIN( 666)									int state2 = -1;
HXDLIN( 666)									int _g2 = 0;
HXDLIN( 666)									while((_g2 < copyKeys9->length)){
HXLINE( 666)										int key = copyKeys9->__get(_g2);
HXDLIN( 666)										_g2 = (_g2 + 1);
HXDLIN( 666)										if ((key != -1)) {
HXLINE( 666)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)4: {
HXLINE( 666)								{
HXLINE( 666)									 ::flixel::input::actions::FlxActionDigital action = this->_note_up;
HXDLIN( 666)									int state = 1;
HXDLIN( 666)									int _g = 0;
HXDLIN( 666)									while((_g < copyKeys9->length)){
HXLINE( 666)										int key = copyKeys9->__get(_g);
HXDLIN( 666)										_g = (_g + 1);
HXDLIN( 666)										if ((key != -1)) {
HXLINE( 666)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 666)								{
HXLINE( 666)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_upP;
HXDLIN( 666)									int state1 = 2;
HXDLIN( 666)									int _g1 = 0;
HXDLIN( 666)									while((_g1 < copyKeys9->length)){
HXLINE( 666)										int key = copyKeys9->__get(_g1);
HXDLIN( 666)										_g1 = (_g1 + 1);
HXDLIN( 666)										if ((key != -1)) {
HXLINE( 666)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 666)								{
HXLINE( 666)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_upR;
HXDLIN( 666)									int state2 = -1;
HXDLIN( 666)									int _g2 = 0;
HXDLIN( 666)									while((_g2 < copyKeys9->length)){
HXLINE( 666)										int key = copyKeys9->__get(_g2);
HXDLIN( 666)										_g2 = (_g2 + 1);
HXDLIN( 666)										if ((key != -1)) {
HXLINE( 666)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)5: {
HXLINE( 666)								{
HXLINE( 666)									 ::flixel::input::actions::FlxActionDigital action = this->_note_left;
HXDLIN( 666)									int state = 1;
HXDLIN( 666)									int _g = 0;
HXDLIN( 666)									while((_g < copyKeys9->length)){
HXLINE( 666)										int key = copyKeys9->__get(_g);
HXDLIN( 666)										_g = (_g + 1);
HXDLIN( 666)										if ((key != -1)) {
HXLINE( 666)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 666)								{
HXLINE( 666)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_leftP;
HXDLIN( 666)									int state1 = 2;
HXDLIN( 666)									int _g1 = 0;
HXDLIN( 666)									while((_g1 < copyKeys9->length)){
HXLINE( 666)										int key = copyKeys9->__get(_g1);
HXDLIN( 666)										_g1 = (_g1 + 1);
HXDLIN( 666)										if ((key != -1)) {
HXLINE( 666)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 666)								{
HXLINE( 666)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_leftR;
HXDLIN( 666)									int state2 = -1;
HXDLIN( 666)									int _g2 = 0;
HXDLIN( 666)									while((_g2 < copyKeys9->length)){
HXLINE( 666)										int key = copyKeys9->__get(_g2);
HXDLIN( 666)										_g2 = (_g2 + 1);
HXDLIN( 666)										if ((key != -1)) {
HXLINE( 666)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)6: {
HXLINE( 666)								{
HXLINE( 666)									 ::flixel::input::actions::FlxActionDigital action = this->_note_right;
HXDLIN( 666)									int state = 1;
HXDLIN( 666)									int _g = 0;
HXDLIN( 666)									while((_g < copyKeys9->length)){
HXLINE( 666)										int key = copyKeys9->__get(_g);
HXDLIN( 666)										_g = (_g + 1);
HXDLIN( 666)										if ((key != -1)) {
HXLINE( 666)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 666)								{
HXLINE( 666)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_rightP;
HXDLIN( 666)									int state1 = 2;
HXDLIN( 666)									int _g1 = 0;
HXDLIN( 666)									while((_g1 < copyKeys9->length)){
HXLINE( 666)										int key = copyKeys9->__get(_g1);
HXDLIN( 666)										_g1 = (_g1 + 1);
HXDLIN( 666)										if ((key != -1)) {
HXLINE( 666)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 666)								{
HXLINE( 666)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_rightR;
HXDLIN( 666)									int state2 = -1;
HXDLIN( 666)									int _g2 = 0;
HXDLIN( 666)									while((_g2 < copyKeys9->length)){
HXLINE( 666)										int key = copyKeys9->__get(_g2);
HXDLIN( 666)										_g2 = (_g2 + 1);
HXDLIN( 666)										if ((key != -1)) {
HXLINE( 666)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)7: {
HXLINE( 666)								{
HXLINE( 666)									 ::flixel::input::actions::FlxActionDigital action = this->_note_down;
HXDLIN( 666)									int state = 1;
HXDLIN( 666)									int _g = 0;
HXDLIN( 666)									while((_g < copyKeys9->length)){
HXLINE( 666)										int key = copyKeys9->__get(_g);
HXDLIN( 666)										_g = (_g + 1);
HXDLIN( 666)										if ((key != -1)) {
HXLINE( 666)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 666)								{
HXLINE( 666)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_downP;
HXDLIN( 666)									int state1 = 2;
HXDLIN( 666)									int _g1 = 0;
HXDLIN( 666)									while((_g1 < copyKeys9->length)){
HXLINE( 666)										int key = copyKeys9->__get(_g1);
HXDLIN( 666)										_g1 = (_g1 + 1);
HXDLIN( 666)										if ((key != -1)) {
HXLINE( 666)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 666)								{
HXLINE( 666)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_downR;
HXDLIN( 666)									int state2 = -1;
HXDLIN( 666)									int _g2 = 0;
HXDLIN( 666)									while((_g2 < copyKeys9->length)){
HXLINE( 666)										int key = copyKeys9->__get(_g2);
HXDLIN( 666)										_g2 = (_g2 + 1);
HXDLIN( 666)										if ((key != -1)) {
HXLINE( 666)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)8: {
HXLINE( 666)								 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 666)								int state = 2;
HXDLIN( 666)								int _g = 0;
HXDLIN( 666)								while((_g < copyKeys9->length)){
HXLINE( 666)									int key = copyKeys9->__get(_g);
HXDLIN( 666)									_g = (_g + 1);
HXDLIN( 666)									if ((key != -1)) {
HXLINE( 666)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)9: {
HXLINE( 666)								 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 666)								int state = 2;
HXDLIN( 666)								int _g = 0;
HXDLIN( 666)								while((_g < copyKeys9->length)){
HXLINE( 666)									int key = copyKeys9->__get(_g);
HXDLIN( 666)									_g = (_g + 1);
HXDLIN( 666)									if ((key != -1)) {
HXLINE( 666)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)10: {
HXLINE( 666)								 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 666)								int state = 2;
HXDLIN( 666)								int _g = 0;
HXDLIN( 666)								while((_g < copyKeys9->length)){
HXLINE( 666)									int key = copyKeys9->__get(_g);
HXDLIN( 666)									_g = (_g + 1);
HXDLIN( 666)									if ((key != -1)) {
HXLINE( 666)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)11: {
HXLINE( 666)								 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 666)								int state = 2;
HXDLIN( 666)								int _g = 0;
HXDLIN( 666)								while((_g < copyKeys9->length)){
HXLINE( 666)									int key = copyKeys9->__get(_g);
HXDLIN( 666)									_g = (_g + 1);
HXDLIN( 666)									if ((key != -1)) {
HXLINE( 666)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            						}
            					}
HXLINE( 667)					{
HXLINE( 667)						::Array< int > copyKeys10 = ::Array_obj< int >::fromData( _hx_array_data_116e4296_1130,1)->copy();
HXDLIN( 667)						{
HXLINE( 667)							int _g20 = 0;
HXDLIN( 667)							int _g21 = copyKeys10->length;
HXDLIN( 667)							while((_g20 < _g21)){
HXLINE( 667)								_g20 = (_g20 + 1);
HXDLIN( 667)								int i = (_g20 - 1);
HXDLIN( 667)								if ((i == -1)) {
HXLINE( 667)									copyKeys10->remove(i);
            								}
            							}
            						}
HXDLIN( 667)						switch((int)(::Control_obj::PAUSE_dyn()->_hx_getIndex())){
            							case (int)0: {
HXLINE( 667)								{
HXLINE( 667)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_up;
HXDLIN( 667)									int state = 1;
HXDLIN( 667)									int _g = 0;
HXDLIN( 667)									while((_g < copyKeys10->length)){
HXLINE( 667)										int key = copyKeys10->__get(_g);
HXDLIN( 667)										_g = (_g + 1);
HXDLIN( 667)										if ((key != -1)) {
HXLINE( 667)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 667)								{
HXLINE( 667)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_upP;
HXDLIN( 667)									int state1 = 2;
HXDLIN( 667)									int _g1 = 0;
HXDLIN( 667)									while((_g1 < copyKeys10->length)){
HXLINE( 667)										int key = copyKeys10->__get(_g1);
HXDLIN( 667)										_g1 = (_g1 + 1);
HXDLIN( 667)										if ((key != -1)) {
HXLINE( 667)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 667)								{
HXLINE( 667)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_upR;
HXDLIN( 667)									int state2 = -1;
HXDLIN( 667)									int _g2 = 0;
HXDLIN( 667)									while((_g2 < copyKeys10->length)){
HXLINE( 667)										int key = copyKeys10->__get(_g2);
HXDLIN( 667)										_g2 = (_g2 + 1);
HXDLIN( 667)										if ((key != -1)) {
HXLINE( 667)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)1: {
HXLINE( 667)								{
HXLINE( 667)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_left;
HXDLIN( 667)									int state = 1;
HXDLIN( 667)									int _g = 0;
HXDLIN( 667)									while((_g < copyKeys10->length)){
HXLINE( 667)										int key = copyKeys10->__get(_g);
HXDLIN( 667)										_g = (_g + 1);
HXDLIN( 667)										if ((key != -1)) {
HXLINE( 667)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 667)								{
HXLINE( 667)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_leftP;
HXDLIN( 667)									int state1 = 2;
HXDLIN( 667)									int _g1 = 0;
HXDLIN( 667)									while((_g1 < copyKeys10->length)){
HXLINE( 667)										int key = copyKeys10->__get(_g1);
HXDLIN( 667)										_g1 = (_g1 + 1);
HXDLIN( 667)										if ((key != -1)) {
HXLINE( 667)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 667)								{
HXLINE( 667)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_leftR;
HXDLIN( 667)									int state2 = -1;
HXDLIN( 667)									int _g2 = 0;
HXDLIN( 667)									while((_g2 < copyKeys10->length)){
HXLINE( 667)										int key = copyKeys10->__get(_g2);
HXDLIN( 667)										_g2 = (_g2 + 1);
HXDLIN( 667)										if ((key != -1)) {
HXLINE( 667)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)2: {
HXLINE( 667)								{
HXLINE( 667)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_right;
HXDLIN( 667)									int state = 1;
HXDLIN( 667)									int _g = 0;
HXDLIN( 667)									while((_g < copyKeys10->length)){
HXLINE( 667)										int key = copyKeys10->__get(_g);
HXDLIN( 667)										_g = (_g + 1);
HXDLIN( 667)										if ((key != -1)) {
HXLINE( 667)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 667)								{
HXLINE( 667)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_rightP;
HXDLIN( 667)									int state1 = 2;
HXDLIN( 667)									int _g1 = 0;
HXDLIN( 667)									while((_g1 < copyKeys10->length)){
HXLINE( 667)										int key = copyKeys10->__get(_g1);
HXDLIN( 667)										_g1 = (_g1 + 1);
HXDLIN( 667)										if ((key != -1)) {
HXLINE( 667)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 667)								{
HXLINE( 667)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_rightR;
HXDLIN( 667)									int state2 = -1;
HXDLIN( 667)									int _g2 = 0;
HXDLIN( 667)									while((_g2 < copyKeys10->length)){
HXLINE( 667)										int key = copyKeys10->__get(_g2);
HXDLIN( 667)										_g2 = (_g2 + 1);
HXDLIN( 667)										if ((key != -1)) {
HXLINE( 667)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)3: {
HXLINE( 667)								{
HXLINE( 667)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_down;
HXDLIN( 667)									int state = 1;
HXDLIN( 667)									int _g = 0;
HXDLIN( 667)									while((_g < copyKeys10->length)){
HXLINE( 667)										int key = copyKeys10->__get(_g);
HXDLIN( 667)										_g = (_g + 1);
HXDLIN( 667)										if ((key != -1)) {
HXLINE( 667)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 667)								{
HXLINE( 667)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_downP;
HXDLIN( 667)									int state1 = 2;
HXDLIN( 667)									int _g1 = 0;
HXDLIN( 667)									while((_g1 < copyKeys10->length)){
HXLINE( 667)										int key = copyKeys10->__get(_g1);
HXDLIN( 667)										_g1 = (_g1 + 1);
HXDLIN( 667)										if ((key != -1)) {
HXLINE( 667)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 667)								{
HXLINE( 667)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_downR;
HXDLIN( 667)									int state2 = -1;
HXDLIN( 667)									int _g2 = 0;
HXDLIN( 667)									while((_g2 < copyKeys10->length)){
HXLINE( 667)										int key = copyKeys10->__get(_g2);
HXDLIN( 667)										_g2 = (_g2 + 1);
HXDLIN( 667)										if ((key != -1)) {
HXLINE( 667)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)4: {
HXLINE( 667)								{
HXLINE( 667)									 ::flixel::input::actions::FlxActionDigital action = this->_note_up;
HXDLIN( 667)									int state = 1;
HXDLIN( 667)									int _g = 0;
HXDLIN( 667)									while((_g < copyKeys10->length)){
HXLINE( 667)										int key = copyKeys10->__get(_g);
HXDLIN( 667)										_g = (_g + 1);
HXDLIN( 667)										if ((key != -1)) {
HXLINE( 667)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 667)								{
HXLINE( 667)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_upP;
HXDLIN( 667)									int state1 = 2;
HXDLIN( 667)									int _g1 = 0;
HXDLIN( 667)									while((_g1 < copyKeys10->length)){
HXLINE( 667)										int key = copyKeys10->__get(_g1);
HXDLIN( 667)										_g1 = (_g1 + 1);
HXDLIN( 667)										if ((key != -1)) {
HXLINE( 667)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 667)								{
HXLINE( 667)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_upR;
HXDLIN( 667)									int state2 = -1;
HXDLIN( 667)									int _g2 = 0;
HXDLIN( 667)									while((_g2 < copyKeys10->length)){
HXLINE( 667)										int key = copyKeys10->__get(_g2);
HXDLIN( 667)										_g2 = (_g2 + 1);
HXDLIN( 667)										if ((key != -1)) {
HXLINE( 667)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)5: {
HXLINE( 667)								{
HXLINE( 667)									 ::flixel::input::actions::FlxActionDigital action = this->_note_left;
HXDLIN( 667)									int state = 1;
HXDLIN( 667)									int _g = 0;
HXDLIN( 667)									while((_g < copyKeys10->length)){
HXLINE( 667)										int key = copyKeys10->__get(_g);
HXDLIN( 667)										_g = (_g + 1);
HXDLIN( 667)										if ((key != -1)) {
HXLINE( 667)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 667)								{
HXLINE( 667)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_leftP;
HXDLIN( 667)									int state1 = 2;
HXDLIN( 667)									int _g1 = 0;
HXDLIN( 667)									while((_g1 < copyKeys10->length)){
HXLINE( 667)										int key = copyKeys10->__get(_g1);
HXDLIN( 667)										_g1 = (_g1 + 1);
HXDLIN( 667)										if ((key != -1)) {
HXLINE( 667)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 667)								{
HXLINE( 667)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_leftR;
HXDLIN( 667)									int state2 = -1;
HXDLIN( 667)									int _g2 = 0;
HXDLIN( 667)									while((_g2 < copyKeys10->length)){
HXLINE( 667)										int key = copyKeys10->__get(_g2);
HXDLIN( 667)										_g2 = (_g2 + 1);
HXDLIN( 667)										if ((key != -1)) {
HXLINE( 667)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)6: {
HXLINE( 667)								{
HXLINE( 667)									 ::flixel::input::actions::FlxActionDigital action = this->_note_right;
HXDLIN( 667)									int state = 1;
HXDLIN( 667)									int _g = 0;
HXDLIN( 667)									while((_g < copyKeys10->length)){
HXLINE( 667)										int key = copyKeys10->__get(_g);
HXDLIN( 667)										_g = (_g + 1);
HXDLIN( 667)										if ((key != -1)) {
HXLINE( 667)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 667)								{
HXLINE( 667)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_rightP;
HXDLIN( 667)									int state1 = 2;
HXDLIN( 667)									int _g1 = 0;
HXDLIN( 667)									while((_g1 < copyKeys10->length)){
HXLINE( 667)										int key = copyKeys10->__get(_g1);
HXDLIN( 667)										_g1 = (_g1 + 1);
HXDLIN( 667)										if ((key != -1)) {
HXLINE( 667)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 667)								{
HXLINE( 667)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_rightR;
HXDLIN( 667)									int state2 = -1;
HXDLIN( 667)									int _g2 = 0;
HXDLIN( 667)									while((_g2 < copyKeys10->length)){
HXLINE( 667)										int key = copyKeys10->__get(_g2);
HXDLIN( 667)										_g2 = (_g2 + 1);
HXDLIN( 667)										if ((key != -1)) {
HXLINE( 667)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)7: {
HXLINE( 667)								{
HXLINE( 667)									 ::flixel::input::actions::FlxActionDigital action = this->_note_down;
HXDLIN( 667)									int state = 1;
HXDLIN( 667)									int _g = 0;
HXDLIN( 667)									while((_g < copyKeys10->length)){
HXLINE( 667)										int key = copyKeys10->__get(_g);
HXDLIN( 667)										_g = (_g + 1);
HXDLIN( 667)										if ((key != -1)) {
HXLINE( 667)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 667)								{
HXLINE( 667)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_downP;
HXDLIN( 667)									int state1 = 2;
HXDLIN( 667)									int _g1 = 0;
HXDLIN( 667)									while((_g1 < copyKeys10->length)){
HXLINE( 667)										int key = copyKeys10->__get(_g1);
HXDLIN( 667)										_g1 = (_g1 + 1);
HXDLIN( 667)										if ((key != -1)) {
HXLINE( 667)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 667)								{
HXLINE( 667)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_downR;
HXDLIN( 667)									int state2 = -1;
HXDLIN( 667)									int _g2 = 0;
HXDLIN( 667)									while((_g2 < copyKeys10->length)){
HXLINE( 667)										int key = copyKeys10->__get(_g2);
HXDLIN( 667)										_g2 = (_g2 + 1);
HXDLIN( 667)										if ((key != -1)) {
HXLINE( 667)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)8: {
HXLINE( 667)								 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 667)								int state = 2;
HXDLIN( 667)								int _g = 0;
HXDLIN( 667)								while((_g < copyKeys10->length)){
HXLINE( 667)									int key = copyKeys10->__get(_g);
HXDLIN( 667)									_g = (_g + 1);
HXDLIN( 667)									if ((key != -1)) {
HXLINE( 667)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)9: {
HXLINE( 667)								 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 667)								int state = 2;
HXDLIN( 667)								int _g = 0;
HXDLIN( 667)								while((_g < copyKeys10->length)){
HXLINE( 667)									int key = copyKeys10->__get(_g);
HXDLIN( 667)									_g = (_g + 1);
HXDLIN( 667)									if ((key != -1)) {
HXLINE( 667)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)10: {
HXLINE( 667)								 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 667)								int state = 2;
HXDLIN( 667)								int _g = 0;
HXDLIN( 667)								while((_g < copyKeys10->length)){
HXLINE( 667)									int key = copyKeys10->__get(_g);
HXDLIN( 667)									_g = (_g + 1);
HXDLIN( 667)									if ((key != -1)) {
HXLINE( 667)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)11: {
HXLINE( 667)								 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 667)								int state = 2;
HXDLIN( 667)								int _g = 0;
HXDLIN( 667)								while((_g < copyKeys10->length)){
HXLINE( 667)									int key = copyKeys10->__get(_g);
HXDLIN( 667)									_g = (_g + 1);
HXDLIN( 667)									if ((key != -1)) {
HXLINE( 667)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            						}
            					}
HXLINE( 668)					{
HXLINE( 668)						::Array< int > copyKeys11 = ::Array_obj< int >::fromData( _hx_array_data_116e4296_1131,1)->copy();
HXDLIN( 668)						{
HXLINE( 668)							int _g22 = 0;
HXDLIN( 668)							int _g23 = copyKeys11->length;
HXDLIN( 668)							while((_g22 < _g23)){
HXLINE( 668)								_g22 = (_g22 + 1);
HXDLIN( 668)								int i = (_g22 - 1);
HXDLIN( 668)								if ((i == -1)) {
HXLINE( 668)									copyKeys11->remove(i);
            								}
            							}
            						}
HXDLIN( 668)						switch((int)(::Control_obj::RESET_dyn()->_hx_getIndex())){
            							case (int)0: {
HXLINE( 668)								{
HXLINE( 668)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_up;
HXDLIN( 668)									int state = 1;
HXDLIN( 668)									int _g = 0;
HXDLIN( 668)									while((_g < copyKeys11->length)){
HXLINE( 668)										int key = copyKeys11->__get(_g);
HXDLIN( 668)										_g = (_g + 1);
HXDLIN( 668)										if ((key != -1)) {
HXLINE( 668)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 668)								{
HXLINE( 668)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_upP;
HXDLIN( 668)									int state1 = 2;
HXDLIN( 668)									int _g1 = 0;
HXDLIN( 668)									while((_g1 < copyKeys11->length)){
HXLINE( 668)										int key = copyKeys11->__get(_g1);
HXDLIN( 668)										_g1 = (_g1 + 1);
HXDLIN( 668)										if ((key != -1)) {
HXLINE( 668)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 668)								{
HXLINE( 668)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_upR;
HXDLIN( 668)									int state2 = -1;
HXDLIN( 668)									int _g2 = 0;
HXDLIN( 668)									while((_g2 < copyKeys11->length)){
HXLINE( 668)										int key = copyKeys11->__get(_g2);
HXDLIN( 668)										_g2 = (_g2 + 1);
HXDLIN( 668)										if ((key != -1)) {
HXLINE( 668)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)1: {
HXLINE( 668)								{
HXLINE( 668)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_left;
HXDLIN( 668)									int state = 1;
HXDLIN( 668)									int _g = 0;
HXDLIN( 668)									while((_g < copyKeys11->length)){
HXLINE( 668)										int key = copyKeys11->__get(_g);
HXDLIN( 668)										_g = (_g + 1);
HXDLIN( 668)										if ((key != -1)) {
HXLINE( 668)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 668)								{
HXLINE( 668)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_leftP;
HXDLIN( 668)									int state1 = 2;
HXDLIN( 668)									int _g1 = 0;
HXDLIN( 668)									while((_g1 < copyKeys11->length)){
HXLINE( 668)										int key = copyKeys11->__get(_g1);
HXDLIN( 668)										_g1 = (_g1 + 1);
HXDLIN( 668)										if ((key != -1)) {
HXLINE( 668)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 668)								{
HXLINE( 668)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_leftR;
HXDLIN( 668)									int state2 = -1;
HXDLIN( 668)									int _g2 = 0;
HXDLIN( 668)									while((_g2 < copyKeys11->length)){
HXLINE( 668)										int key = copyKeys11->__get(_g2);
HXDLIN( 668)										_g2 = (_g2 + 1);
HXDLIN( 668)										if ((key != -1)) {
HXLINE( 668)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)2: {
HXLINE( 668)								{
HXLINE( 668)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_right;
HXDLIN( 668)									int state = 1;
HXDLIN( 668)									int _g = 0;
HXDLIN( 668)									while((_g < copyKeys11->length)){
HXLINE( 668)										int key = copyKeys11->__get(_g);
HXDLIN( 668)										_g = (_g + 1);
HXDLIN( 668)										if ((key != -1)) {
HXLINE( 668)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 668)								{
HXLINE( 668)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_rightP;
HXDLIN( 668)									int state1 = 2;
HXDLIN( 668)									int _g1 = 0;
HXDLIN( 668)									while((_g1 < copyKeys11->length)){
HXLINE( 668)										int key = copyKeys11->__get(_g1);
HXDLIN( 668)										_g1 = (_g1 + 1);
HXDLIN( 668)										if ((key != -1)) {
HXLINE( 668)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 668)								{
HXLINE( 668)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_rightR;
HXDLIN( 668)									int state2 = -1;
HXDLIN( 668)									int _g2 = 0;
HXDLIN( 668)									while((_g2 < copyKeys11->length)){
HXLINE( 668)										int key = copyKeys11->__get(_g2);
HXDLIN( 668)										_g2 = (_g2 + 1);
HXDLIN( 668)										if ((key != -1)) {
HXLINE( 668)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)3: {
HXLINE( 668)								{
HXLINE( 668)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_down;
HXDLIN( 668)									int state = 1;
HXDLIN( 668)									int _g = 0;
HXDLIN( 668)									while((_g < copyKeys11->length)){
HXLINE( 668)										int key = copyKeys11->__get(_g);
HXDLIN( 668)										_g = (_g + 1);
HXDLIN( 668)										if ((key != -1)) {
HXLINE( 668)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 668)								{
HXLINE( 668)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_downP;
HXDLIN( 668)									int state1 = 2;
HXDLIN( 668)									int _g1 = 0;
HXDLIN( 668)									while((_g1 < copyKeys11->length)){
HXLINE( 668)										int key = copyKeys11->__get(_g1);
HXDLIN( 668)										_g1 = (_g1 + 1);
HXDLIN( 668)										if ((key != -1)) {
HXLINE( 668)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 668)								{
HXLINE( 668)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_downR;
HXDLIN( 668)									int state2 = -1;
HXDLIN( 668)									int _g2 = 0;
HXDLIN( 668)									while((_g2 < copyKeys11->length)){
HXLINE( 668)										int key = copyKeys11->__get(_g2);
HXDLIN( 668)										_g2 = (_g2 + 1);
HXDLIN( 668)										if ((key != -1)) {
HXLINE( 668)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)4: {
HXLINE( 668)								{
HXLINE( 668)									 ::flixel::input::actions::FlxActionDigital action = this->_note_up;
HXDLIN( 668)									int state = 1;
HXDLIN( 668)									int _g = 0;
HXDLIN( 668)									while((_g < copyKeys11->length)){
HXLINE( 668)										int key = copyKeys11->__get(_g);
HXDLIN( 668)										_g = (_g + 1);
HXDLIN( 668)										if ((key != -1)) {
HXLINE( 668)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 668)								{
HXLINE( 668)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_upP;
HXDLIN( 668)									int state1 = 2;
HXDLIN( 668)									int _g1 = 0;
HXDLIN( 668)									while((_g1 < copyKeys11->length)){
HXLINE( 668)										int key = copyKeys11->__get(_g1);
HXDLIN( 668)										_g1 = (_g1 + 1);
HXDLIN( 668)										if ((key != -1)) {
HXLINE( 668)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 668)								{
HXLINE( 668)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_upR;
HXDLIN( 668)									int state2 = -1;
HXDLIN( 668)									int _g2 = 0;
HXDLIN( 668)									while((_g2 < copyKeys11->length)){
HXLINE( 668)										int key = copyKeys11->__get(_g2);
HXDLIN( 668)										_g2 = (_g2 + 1);
HXDLIN( 668)										if ((key != -1)) {
HXLINE( 668)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)5: {
HXLINE( 668)								{
HXLINE( 668)									 ::flixel::input::actions::FlxActionDigital action = this->_note_left;
HXDLIN( 668)									int state = 1;
HXDLIN( 668)									int _g = 0;
HXDLIN( 668)									while((_g < copyKeys11->length)){
HXLINE( 668)										int key = copyKeys11->__get(_g);
HXDLIN( 668)										_g = (_g + 1);
HXDLIN( 668)										if ((key != -1)) {
HXLINE( 668)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 668)								{
HXLINE( 668)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_leftP;
HXDLIN( 668)									int state1 = 2;
HXDLIN( 668)									int _g1 = 0;
HXDLIN( 668)									while((_g1 < copyKeys11->length)){
HXLINE( 668)										int key = copyKeys11->__get(_g1);
HXDLIN( 668)										_g1 = (_g1 + 1);
HXDLIN( 668)										if ((key != -1)) {
HXLINE( 668)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 668)								{
HXLINE( 668)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_leftR;
HXDLIN( 668)									int state2 = -1;
HXDLIN( 668)									int _g2 = 0;
HXDLIN( 668)									while((_g2 < copyKeys11->length)){
HXLINE( 668)										int key = copyKeys11->__get(_g2);
HXDLIN( 668)										_g2 = (_g2 + 1);
HXDLIN( 668)										if ((key != -1)) {
HXLINE( 668)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)6: {
HXLINE( 668)								{
HXLINE( 668)									 ::flixel::input::actions::FlxActionDigital action = this->_note_right;
HXDLIN( 668)									int state = 1;
HXDLIN( 668)									int _g = 0;
HXDLIN( 668)									while((_g < copyKeys11->length)){
HXLINE( 668)										int key = copyKeys11->__get(_g);
HXDLIN( 668)										_g = (_g + 1);
HXDLIN( 668)										if ((key != -1)) {
HXLINE( 668)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 668)								{
HXLINE( 668)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_rightP;
HXDLIN( 668)									int state1 = 2;
HXDLIN( 668)									int _g1 = 0;
HXDLIN( 668)									while((_g1 < copyKeys11->length)){
HXLINE( 668)										int key = copyKeys11->__get(_g1);
HXDLIN( 668)										_g1 = (_g1 + 1);
HXDLIN( 668)										if ((key != -1)) {
HXLINE( 668)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 668)								{
HXLINE( 668)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_rightR;
HXDLIN( 668)									int state2 = -1;
HXDLIN( 668)									int _g2 = 0;
HXDLIN( 668)									while((_g2 < copyKeys11->length)){
HXLINE( 668)										int key = copyKeys11->__get(_g2);
HXDLIN( 668)										_g2 = (_g2 + 1);
HXDLIN( 668)										if ((key != -1)) {
HXLINE( 668)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)7: {
HXLINE( 668)								{
HXLINE( 668)									 ::flixel::input::actions::FlxActionDigital action = this->_note_down;
HXDLIN( 668)									int state = 1;
HXDLIN( 668)									int _g = 0;
HXDLIN( 668)									while((_g < copyKeys11->length)){
HXLINE( 668)										int key = copyKeys11->__get(_g);
HXDLIN( 668)										_g = (_g + 1);
HXDLIN( 668)										if ((key != -1)) {
HXLINE( 668)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 668)								{
HXLINE( 668)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_downP;
HXDLIN( 668)									int state1 = 2;
HXDLIN( 668)									int _g1 = 0;
HXDLIN( 668)									while((_g1 < copyKeys11->length)){
HXLINE( 668)										int key = copyKeys11->__get(_g1);
HXDLIN( 668)										_g1 = (_g1 + 1);
HXDLIN( 668)										if ((key != -1)) {
HXLINE( 668)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 668)								{
HXLINE( 668)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_downR;
HXDLIN( 668)									int state2 = -1;
HXDLIN( 668)									int _g2 = 0;
HXDLIN( 668)									while((_g2 < copyKeys11->length)){
HXLINE( 668)										int key = copyKeys11->__get(_g2);
HXDLIN( 668)										_g2 = (_g2 + 1);
HXDLIN( 668)										if ((key != -1)) {
HXLINE( 668)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)8: {
HXLINE( 668)								 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 668)								int state = 2;
HXDLIN( 668)								int _g = 0;
HXDLIN( 668)								while((_g < copyKeys11->length)){
HXLINE( 668)									int key = copyKeys11->__get(_g);
HXDLIN( 668)									_g = (_g + 1);
HXDLIN( 668)									if ((key != -1)) {
HXLINE( 668)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)9: {
HXLINE( 668)								 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 668)								int state = 2;
HXDLIN( 668)								int _g = 0;
HXDLIN( 668)								while((_g < copyKeys11->length)){
HXLINE( 668)									int key = copyKeys11->__get(_g);
HXDLIN( 668)									_g = (_g + 1);
HXDLIN( 668)									if ((key != -1)) {
HXLINE( 668)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)10: {
HXLINE( 668)								 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 668)								int state = 2;
HXDLIN( 668)								int _g = 0;
HXDLIN( 668)								while((_g < copyKeys11->length)){
HXLINE( 668)									int key = copyKeys11->__get(_g);
HXDLIN( 668)									_g = (_g + 1);
HXDLIN( 668)									if ((key != -1)) {
HXLINE( 668)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)11: {
HXLINE( 668)								 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 668)								int state = 2;
HXDLIN( 668)								int _g = 0;
HXDLIN( 668)								while((_g < copyKeys11->length)){
HXLINE( 668)									int key = copyKeys11->__get(_g);
HXDLIN( 668)									_g = (_g + 1);
HXDLIN( 668)									if ((key != -1)) {
HXLINE( 668)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            						}
            					}
            				}
            				else {
HXLINE( 670)					{
HXLINE( 670)						::Array< int > copyKeys = ::Array_obj< int >::fromData( _hx_array_data_116e4296_1132,1)->copy();
HXDLIN( 670)						{
HXLINE( 670)							int _g = 0;
HXDLIN( 670)							int _g1 = copyKeys->length;
HXDLIN( 670)							while((_g < _g1)){
HXLINE( 670)								_g = (_g + 1);
HXDLIN( 670)								int i = (_g - 1);
HXDLIN( 670)								if ((i == -1)) {
HXLINE( 670)									copyKeys->remove(i);
            								}
            							}
            						}
HXDLIN( 670)						switch((int)(::Control_obj::UI_UP_dyn()->_hx_getIndex())){
            							case (int)0: {
HXLINE( 670)								{
HXLINE( 670)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_up;
HXDLIN( 670)									int state = 1;
HXDLIN( 670)									int _g = 0;
HXDLIN( 670)									while((_g < copyKeys->length)){
HXLINE( 670)										int key = copyKeys->__get(_g);
HXDLIN( 670)										_g = (_g + 1);
HXDLIN( 670)										if ((key != -1)) {
HXLINE( 670)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 670)								{
HXLINE( 670)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_upP;
HXDLIN( 670)									int state1 = 2;
HXDLIN( 670)									int _g1 = 0;
HXDLIN( 670)									while((_g1 < copyKeys->length)){
HXLINE( 670)										int key = copyKeys->__get(_g1);
HXDLIN( 670)										_g1 = (_g1 + 1);
HXDLIN( 670)										if ((key != -1)) {
HXLINE( 670)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 670)								{
HXLINE( 670)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_upR;
HXDLIN( 670)									int state2 = -1;
HXDLIN( 670)									int _g2 = 0;
HXDLIN( 670)									while((_g2 < copyKeys->length)){
HXLINE( 670)										int key = copyKeys->__get(_g2);
HXDLIN( 670)										_g2 = (_g2 + 1);
HXDLIN( 670)										if ((key != -1)) {
HXLINE( 670)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)1: {
HXLINE( 670)								{
HXLINE( 670)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_left;
HXDLIN( 670)									int state = 1;
HXDLIN( 670)									int _g = 0;
HXDLIN( 670)									while((_g < copyKeys->length)){
HXLINE( 670)										int key = copyKeys->__get(_g);
HXDLIN( 670)										_g = (_g + 1);
HXDLIN( 670)										if ((key != -1)) {
HXLINE( 670)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 670)								{
HXLINE( 670)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_leftP;
HXDLIN( 670)									int state1 = 2;
HXDLIN( 670)									int _g1 = 0;
HXDLIN( 670)									while((_g1 < copyKeys->length)){
HXLINE( 670)										int key = copyKeys->__get(_g1);
HXDLIN( 670)										_g1 = (_g1 + 1);
HXDLIN( 670)										if ((key != -1)) {
HXLINE( 670)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 670)								{
HXLINE( 670)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_leftR;
HXDLIN( 670)									int state2 = -1;
HXDLIN( 670)									int _g2 = 0;
HXDLIN( 670)									while((_g2 < copyKeys->length)){
HXLINE( 670)										int key = copyKeys->__get(_g2);
HXDLIN( 670)										_g2 = (_g2 + 1);
HXDLIN( 670)										if ((key != -1)) {
HXLINE( 670)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)2: {
HXLINE( 670)								{
HXLINE( 670)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_right;
HXDLIN( 670)									int state = 1;
HXDLIN( 670)									int _g = 0;
HXDLIN( 670)									while((_g < copyKeys->length)){
HXLINE( 670)										int key = copyKeys->__get(_g);
HXDLIN( 670)										_g = (_g + 1);
HXDLIN( 670)										if ((key != -1)) {
HXLINE( 670)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 670)								{
HXLINE( 670)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_rightP;
HXDLIN( 670)									int state1 = 2;
HXDLIN( 670)									int _g1 = 0;
HXDLIN( 670)									while((_g1 < copyKeys->length)){
HXLINE( 670)										int key = copyKeys->__get(_g1);
HXDLIN( 670)										_g1 = (_g1 + 1);
HXDLIN( 670)										if ((key != -1)) {
HXLINE( 670)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 670)								{
HXLINE( 670)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_rightR;
HXDLIN( 670)									int state2 = -1;
HXDLIN( 670)									int _g2 = 0;
HXDLIN( 670)									while((_g2 < copyKeys->length)){
HXLINE( 670)										int key = copyKeys->__get(_g2);
HXDLIN( 670)										_g2 = (_g2 + 1);
HXDLIN( 670)										if ((key != -1)) {
HXLINE( 670)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)3: {
HXLINE( 670)								{
HXLINE( 670)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_down;
HXDLIN( 670)									int state = 1;
HXDLIN( 670)									int _g = 0;
HXDLIN( 670)									while((_g < copyKeys->length)){
HXLINE( 670)										int key = copyKeys->__get(_g);
HXDLIN( 670)										_g = (_g + 1);
HXDLIN( 670)										if ((key != -1)) {
HXLINE( 670)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 670)								{
HXLINE( 670)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_downP;
HXDLIN( 670)									int state1 = 2;
HXDLIN( 670)									int _g1 = 0;
HXDLIN( 670)									while((_g1 < copyKeys->length)){
HXLINE( 670)										int key = copyKeys->__get(_g1);
HXDLIN( 670)										_g1 = (_g1 + 1);
HXDLIN( 670)										if ((key != -1)) {
HXLINE( 670)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 670)								{
HXLINE( 670)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_downR;
HXDLIN( 670)									int state2 = -1;
HXDLIN( 670)									int _g2 = 0;
HXDLIN( 670)									while((_g2 < copyKeys->length)){
HXLINE( 670)										int key = copyKeys->__get(_g2);
HXDLIN( 670)										_g2 = (_g2 + 1);
HXDLIN( 670)										if ((key != -1)) {
HXLINE( 670)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)4: {
HXLINE( 670)								{
HXLINE( 670)									 ::flixel::input::actions::FlxActionDigital action = this->_note_up;
HXDLIN( 670)									int state = 1;
HXDLIN( 670)									int _g = 0;
HXDLIN( 670)									while((_g < copyKeys->length)){
HXLINE( 670)										int key = copyKeys->__get(_g);
HXDLIN( 670)										_g = (_g + 1);
HXDLIN( 670)										if ((key != -1)) {
HXLINE( 670)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 670)								{
HXLINE( 670)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_upP;
HXDLIN( 670)									int state1 = 2;
HXDLIN( 670)									int _g1 = 0;
HXDLIN( 670)									while((_g1 < copyKeys->length)){
HXLINE( 670)										int key = copyKeys->__get(_g1);
HXDLIN( 670)										_g1 = (_g1 + 1);
HXDLIN( 670)										if ((key != -1)) {
HXLINE( 670)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 670)								{
HXLINE( 670)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_upR;
HXDLIN( 670)									int state2 = -1;
HXDLIN( 670)									int _g2 = 0;
HXDLIN( 670)									while((_g2 < copyKeys->length)){
HXLINE( 670)										int key = copyKeys->__get(_g2);
HXDLIN( 670)										_g2 = (_g2 + 1);
HXDLIN( 670)										if ((key != -1)) {
HXLINE( 670)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)5: {
HXLINE( 670)								{
HXLINE( 670)									 ::flixel::input::actions::FlxActionDigital action = this->_note_left;
HXDLIN( 670)									int state = 1;
HXDLIN( 670)									int _g = 0;
HXDLIN( 670)									while((_g < copyKeys->length)){
HXLINE( 670)										int key = copyKeys->__get(_g);
HXDLIN( 670)										_g = (_g + 1);
HXDLIN( 670)										if ((key != -1)) {
HXLINE( 670)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 670)								{
HXLINE( 670)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_leftP;
HXDLIN( 670)									int state1 = 2;
HXDLIN( 670)									int _g1 = 0;
HXDLIN( 670)									while((_g1 < copyKeys->length)){
HXLINE( 670)										int key = copyKeys->__get(_g1);
HXDLIN( 670)										_g1 = (_g1 + 1);
HXDLIN( 670)										if ((key != -1)) {
HXLINE( 670)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 670)								{
HXLINE( 670)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_leftR;
HXDLIN( 670)									int state2 = -1;
HXDLIN( 670)									int _g2 = 0;
HXDLIN( 670)									while((_g2 < copyKeys->length)){
HXLINE( 670)										int key = copyKeys->__get(_g2);
HXDLIN( 670)										_g2 = (_g2 + 1);
HXDLIN( 670)										if ((key != -1)) {
HXLINE( 670)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)6: {
HXLINE( 670)								{
HXLINE( 670)									 ::flixel::input::actions::FlxActionDigital action = this->_note_right;
HXDLIN( 670)									int state = 1;
HXDLIN( 670)									int _g = 0;
HXDLIN( 670)									while((_g < copyKeys->length)){
HXLINE( 670)										int key = copyKeys->__get(_g);
HXDLIN( 670)										_g = (_g + 1);
HXDLIN( 670)										if ((key != -1)) {
HXLINE( 670)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 670)								{
HXLINE( 670)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_rightP;
HXDLIN( 670)									int state1 = 2;
HXDLIN( 670)									int _g1 = 0;
HXDLIN( 670)									while((_g1 < copyKeys->length)){
HXLINE( 670)										int key = copyKeys->__get(_g1);
HXDLIN( 670)										_g1 = (_g1 + 1);
HXDLIN( 670)										if ((key != -1)) {
HXLINE( 670)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 670)								{
HXLINE( 670)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_rightR;
HXDLIN( 670)									int state2 = -1;
HXDLIN( 670)									int _g2 = 0;
HXDLIN( 670)									while((_g2 < copyKeys->length)){
HXLINE( 670)										int key = copyKeys->__get(_g2);
HXDLIN( 670)										_g2 = (_g2 + 1);
HXDLIN( 670)										if ((key != -1)) {
HXLINE( 670)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)7: {
HXLINE( 670)								{
HXLINE( 670)									 ::flixel::input::actions::FlxActionDigital action = this->_note_down;
HXDLIN( 670)									int state = 1;
HXDLIN( 670)									int _g = 0;
HXDLIN( 670)									while((_g < copyKeys->length)){
HXLINE( 670)										int key = copyKeys->__get(_g);
HXDLIN( 670)										_g = (_g + 1);
HXDLIN( 670)										if ((key != -1)) {
HXLINE( 670)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 670)								{
HXLINE( 670)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_downP;
HXDLIN( 670)									int state1 = 2;
HXDLIN( 670)									int _g1 = 0;
HXDLIN( 670)									while((_g1 < copyKeys->length)){
HXLINE( 670)										int key = copyKeys->__get(_g1);
HXDLIN( 670)										_g1 = (_g1 + 1);
HXDLIN( 670)										if ((key != -1)) {
HXLINE( 670)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 670)								{
HXLINE( 670)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_downR;
HXDLIN( 670)									int state2 = -1;
HXDLIN( 670)									int _g2 = 0;
HXDLIN( 670)									while((_g2 < copyKeys->length)){
HXLINE( 670)										int key = copyKeys->__get(_g2);
HXDLIN( 670)										_g2 = (_g2 + 1);
HXDLIN( 670)										if ((key != -1)) {
HXLINE( 670)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)8: {
HXLINE( 670)								 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 670)								int state = 2;
HXDLIN( 670)								int _g = 0;
HXDLIN( 670)								while((_g < copyKeys->length)){
HXLINE( 670)									int key = copyKeys->__get(_g);
HXDLIN( 670)									_g = (_g + 1);
HXDLIN( 670)									if ((key != -1)) {
HXLINE( 670)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)9: {
HXLINE( 670)								 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 670)								int state = 2;
HXDLIN( 670)								int _g = 0;
HXDLIN( 670)								while((_g < copyKeys->length)){
HXLINE( 670)									int key = copyKeys->__get(_g);
HXDLIN( 670)									_g = (_g + 1);
HXDLIN( 670)									if ((key != -1)) {
HXLINE( 670)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)10: {
HXLINE( 670)								 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 670)								int state = 2;
HXDLIN( 670)								int _g = 0;
HXDLIN( 670)								while((_g < copyKeys->length)){
HXLINE( 670)									int key = copyKeys->__get(_g);
HXDLIN( 670)									_g = (_g + 1);
HXDLIN( 670)									if ((key != -1)) {
HXLINE( 670)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)11: {
HXLINE( 670)								 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 670)								int state = 2;
HXDLIN( 670)								int _g = 0;
HXDLIN( 670)								while((_g < copyKeys->length)){
HXLINE( 670)									int key = copyKeys->__get(_g);
HXDLIN( 670)									_g = (_g + 1);
HXDLIN( 670)									if ((key != -1)) {
HXLINE( 670)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            						}
            					}
HXLINE( 671)					{
HXLINE( 671)						::Array< int > copyKeys1 = ::Array_obj< int >::fromData( _hx_array_data_116e4296_1133,1)->copy();
HXDLIN( 671)						{
HXLINE( 671)							int _g2 = 0;
HXDLIN( 671)							int _g3 = copyKeys1->length;
HXDLIN( 671)							while((_g2 < _g3)){
HXLINE( 671)								_g2 = (_g2 + 1);
HXDLIN( 671)								int i = (_g2 - 1);
HXDLIN( 671)								if ((i == -1)) {
HXLINE( 671)									copyKeys1->remove(i);
            								}
            							}
            						}
HXDLIN( 671)						switch((int)(::Control_obj::UI_DOWN_dyn()->_hx_getIndex())){
            							case (int)0: {
HXLINE( 671)								{
HXLINE( 671)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_up;
HXDLIN( 671)									int state = 1;
HXDLIN( 671)									int _g = 0;
HXDLIN( 671)									while((_g < copyKeys1->length)){
HXLINE( 671)										int key = copyKeys1->__get(_g);
HXDLIN( 671)										_g = (_g + 1);
HXDLIN( 671)										if ((key != -1)) {
HXLINE( 671)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 671)								{
HXLINE( 671)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_upP;
HXDLIN( 671)									int state1 = 2;
HXDLIN( 671)									int _g1 = 0;
HXDLIN( 671)									while((_g1 < copyKeys1->length)){
HXLINE( 671)										int key = copyKeys1->__get(_g1);
HXDLIN( 671)										_g1 = (_g1 + 1);
HXDLIN( 671)										if ((key != -1)) {
HXLINE( 671)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 671)								{
HXLINE( 671)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_upR;
HXDLIN( 671)									int state2 = -1;
HXDLIN( 671)									int _g2 = 0;
HXDLIN( 671)									while((_g2 < copyKeys1->length)){
HXLINE( 671)										int key = copyKeys1->__get(_g2);
HXDLIN( 671)										_g2 = (_g2 + 1);
HXDLIN( 671)										if ((key != -1)) {
HXLINE( 671)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)1: {
HXLINE( 671)								{
HXLINE( 671)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_left;
HXDLIN( 671)									int state = 1;
HXDLIN( 671)									int _g = 0;
HXDLIN( 671)									while((_g < copyKeys1->length)){
HXLINE( 671)										int key = copyKeys1->__get(_g);
HXDLIN( 671)										_g = (_g + 1);
HXDLIN( 671)										if ((key != -1)) {
HXLINE( 671)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 671)								{
HXLINE( 671)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_leftP;
HXDLIN( 671)									int state1 = 2;
HXDLIN( 671)									int _g1 = 0;
HXDLIN( 671)									while((_g1 < copyKeys1->length)){
HXLINE( 671)										int key = copyKeys1->__get(_g1);
HXDLIN( 671)										_g1 = (_g1 + 1);
HXDLIN( 671)										if ((key != -1)) {
HXLINE( 671)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 671)								{
HXLINE( 671)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_leftR;
HXDLIN( 671)									int state2 = -1;
HXDLIN( 671)									int _g2 = 0;
HXDLIN( 671)									while((_g2 < copyKeys1->length)){
HXLINE( 671)										int key = copyKeys1->__get(_g2);
HXDLIN( 671)										_g2 = (_g2 + 1);
HXDLIN( 671)										if ((key != -1)) {
HXLINE( 671)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)2: {
HXLINE( 671)								{
HXLINE( 671)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_right;
HXDLIN( 671)									int state = 1;
HXDLIN( 671)									int _g = 0;
HXDLIN( 671)									while((_g < copyKeys1->length)){
HXLINE( 671)										int key = copyKeys1->__get(_g);
HXDLIN( 671)										_g = (_g + 1);
HXDLIN( 671)										if ((key != -1)) {
HXLINE( 671)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 671)								{
HXLINE( 671)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_rightP;
HXDLIN( 671)									int state1 = 2;
HXDLIN( 671)									int _g1 = 0;
HXDLIN( 671)									while((_g1 < copyKeys1->length)){
HXLINE( 671)										int key = copyKeys1->__get(_g1);
HXDLIN( 671)										_g1 = (_g1 + 1);
HXDLIN( 671)										if ((key != -1)) {
HXLINE( 671)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 671)								{
HXLINE( 671)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_rightR;
HXDLIN( 671)									int state2 = -1;
HXDLIN( 671)									int _g2 = 0;
HXDLIN( 671)									while((_g2 < copyKeys1->length)){
HXLINE( 671)										int key = copyKeys1->__get(_g2);
HXDLIN( 671)										_g2 = (_g2 + 1);
HXDLIN( 671)										if ((key != -1)) {
HXLINE( 671)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)3: {
HXLINE( 671)								{
HXLINE( 671)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_down;
HXDLIN( 671)									int state = 1;
HXDLIN( 671)									int _g = 0;
HXDLIN( 671)									while((_g < copyKeys1->length)){
HXLINE( 671)										int key = copyKeys1->__get(_g);
HXDLIN( 671)										_g = (_g + 1);
HXDLIN( 671)										if ((key != -1)) {
HXLINE( 671)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 671)								{
HXLINE( 671)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_downP;
HXDLIN( 671)									int state1 = 2;
HXDLIN( 671)									int _g1 = 0;
HXDLIN( 671)									while((_g1 < copyKeys1->length)){
HXLINE( 671)										int key = copyKeys1->__get(_g1);
HXDLIN( 671)										_g1 = (_g1 + 1);
HXDLIN( 671)										if ((key != -1)) {
HXLINE( 671)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 671)								{
HXLINE( 671)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_downR;
HXDLIN( 671)									int state2 = -1;
HXDLIN( 671)									int _g2 = 0;
HXDLIN( 671)									while((_g2 < copyKeys1->length)){
HXLINE( 671)										int key = copyKeys1->__get(_g2);
HXDLIN( 671)										_g2 = (_g2 + 1);
HXDLIN( 671)										if ((key != -1)) {
HXLINE( 671)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)4: {
HXLINE( 671)								{
HXLINE( 671)									 ::flixel::input::actions::FlxActionDigital action = this->_note_up;
HXDLIN( 671)									int state = 1;
HXDLIN( 671)									int _g = 0;
HXDLIN( 671)									while((_g < copyKeys1->length)){
HXLINE( 671)										int key = copyKeys1->__get(_g);
HXDLIN( 671)										_g = (_g + 1);
HXDLIN( 671)										if ((key != -1)) {
HXLINE( 671)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 671)								{
HXLINE( 671)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_upP;
HXDLIN( 671)									int state1 = 2;
HXDLIN( 671)									int _g1 = 0;
HXDLIN( 671)									while((_g1 < copyKeys1->length)){
HXLINE( 671)										int key = copyKeys1->__get(_g1);
HXDLIN( 671)										_g1 = (_g1 + 1);
HXDLIN( 671)										if ((key != -1)) {
HXLINE( 671)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 671)								{
HXLINE( 671)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_upR;
HXDLIN( 671)									int state2 = -1;
HXDLIN( 671)									int _g2 = 0;
HXDLIN( 671)									while((_g2 < copyKeys1->length)){
HXLINE( 671)										int key = copyKeys1->__get(_g2);
HXDLIN( 671)										_g2 = (_g2 + 1);
HXDLIN( 671)										if ((key != -1)) {
HXLINE( 671)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)5: {
HXLINE( 671)								{
HXLINE( 671)									 ::flixel::input::actions::FlxActionDigital action = this->_note_left;
HXDLIN( 671)									int state = 1;
HXDLIN( 671)									int _g = 0;
HXDLIN( 671)									while((_g < copyKeys1->length)){
HXLINE( 671)										int key = copyKeys1->__get(_g);
HXDLIN( 671)										_g = (_g + 1);
HXDLIN( 671)										if ((key != -1)) {
HXLINE( 671)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 671)								{
HXLINE( 671)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_leftP;
HXDLIN( 671)									int state1 = 2;
HXDLIN( 671)									int _g1 = 0;
HXDLIN( 671)									while((_g1 < copyKeys1->length)){
HXLINE( 671)										int key = copyKeys1->__get(_g1);
HXDLIN( 671)										_g1 = (_g1 + 1);
HXDLIN( 671)										if ((key != -1)) {
HXLINE( 671)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 671)								{
HXLINE( 671)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_leftR;
HXDLIN( 671)									int state2 = -1;
HXDLIN( 671)									int _g2 = 0;
HXDLIN( 671)									while((_g2 < copyKeys1->length)){
HXLINE( 671)										int key = copyKeys1->__get(_g2);
HXDLIN( 671)										_g2 = (_g2 + 1);
HXDLIN( 671)										if ((key != -1)) {
HXLINE( 671)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)6: {
HXLINE( 671)								{
HXLINE( 671)									 ::flixel::input::actions::FlxActionDigital action = this->_note_right;
HXDLIN( 671)									int state = 1;
HXDLIN( 671)									int _g = 0;
HXDLIN( 671)									while((_g < copyKeys1->length)){
HXLINE( 671)										int key = copyKeys1->__get(_g);
HXDLIN( 671)										_g = (_g + 1);
HXDLIN( 671)										if ((key != -1)) {
HXLINE( 671)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 671)								{
HXLINE( 671)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_rightP;
HXDLIN( 671)									int state1 = 2;
HXDLIN( 671)									int _g1 = 0;
HXDLIN( 671)									while((_g1 < copyKeys1->length)){
HXLINE( 671)										int key = copyKeys1->__get(_g1);
HXDLIN( 671)										_g1 = (_g1 + 1);
HXDLIN( 671)										if ((key != -1)) {
HXLINE( 671)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 671)								{
HXLINE( 671)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_rightR;
HXDLIN( 671)									int state2 = -1;
HXDLIN( 671)									int _g2 = 0;
HXDLIN( 671)									while((_g2 < copyKeys1->length)){
HXLINE( 671)										int key = copyKeys1->__get(_g2);
HXDLIN( 671)										_g2 = (_g2 + 1);
HXDLIN( 671)										if ((key != -1)) {
HXLINE( 671)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)7: {
HXLINE( 671)								{
HXLINE( 671)									 ::flixel::input::actions::FlxActionDigital action = this->_note_down;
HXDLIN( 671)									int state = 1;
HXDLIN( 671)									int _g = 0;
HXDLIN( 671)									while((_g < copyKeys1->length)){
HXLINE( 671)										int key = copyKeys1->__get(_g);
HXDLIN( 671)										_g = (_g + 1);
HXDLIN( 671)										if ((key != -1)) {
HXLINE( 671)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 671)								{
HXLINE( 671)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_downP;
HXDLIN( 671)									int state1 = 2;
HXDLIN( 671)									int _g1 = 0;
HXDLIN( 671)									while((_g1 < copyKeys1->length)){
HXLINE( 671)										int key = copyKeys1->__get(_g1);
HXDLIN( 671)										_g1 = (_g1 + 1);
HXDLIN( 671)										if ((key != -1)) {
HXLINE( 671)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 671)								{
HXLINE( 671)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_downR;
HXDLIN( 671)									int state2 = -1;
HXDLIN( 671)									int _g2 = 0;
HXDLIN( 671)									while((_g2 < copyKeys1->length)){
HXLINE( 671)										int key = copyKeys1->__get(_g2);
HXDLIN( 671)										_g2 = (_g2 + 1);
HXDLIN( 671)										if ((key != -1)) {
HXLINE( 671)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)8: {
HXLINE( 671)								 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 671)								int state = 2;
HXDLIN( 671)								int _g = 0;
HXDLIN( 671)								while((_g < copyKeys1->length)){
HXLINE( 671)									int key = copyKeys1->__get(_g);
HXDLIN( 671)									_g = (_g + 1);
HXDLIN( 671)									if ((key != -1)) {
HXLINE( 671)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)9: {
HXLINE( 671)								 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 671)								int state = 2;
HXDLIN( 671)								int _g = 0;
HXDLIN( 671)								while((_g < copyKeys1->length)){
HXLINE( 671)									int key = copyKeys1->__get(_g);
HXDLIN( 671)									_g = (_g + 1);
HXDLIN( 671)									if ((key != -1)) {
HXLINE( 671)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)10: {
HXLINE( 671)								 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 671)								int state = 2;
HXDLIN( 671)								int _g = 0;
HXDLIN( 671)								while((_g < copyKeys1->length)){
HXLINE( 671)									int key = copyKeys1->__get(_g);
HXDLIN( 671)									_g = (_g + 1);
HXDLIN( 671)									if ((key != -1)) {
HXLINE( 671)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)11: {
HXLINE( 671)								 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 671)								int state = 2;
HXDLIN( 671)								int _g = 0;
HXDLIN( 671)								while((_g < copyKeys1->length)){
HXLINE( 671)									int key = copyKeys1->__get(_g);
HXDLIN( 671)									_g = (_g + 1);
HXDLIN( 671)									if ((key != -1)) {
HXLINE( 671)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            						}
            					}
HXLINE( 672)					{
HXLINE( 672)						::Array< int > copyKeys2 = ::Array_obj< int >::fromData( _hx_array_data_116e4296_1134,1)->copy();
HXDLIN( 672)						{
HXLINE( 672)							int _g4 = 0;
HXDLIN( 672)							int _g5 = copyKeys2->length;
HXDLIN( 672)							while((_g4 < _g5)){
HXLINE( 672)								_g4 = (_g4 + 1);
HXDLIN( 672)								int i = (_g4 - 1);
HXDLIN( 672)								if ((i == -1)) {
HXLINE( 672)									copyKeys2->remove(i);
            								}
            							}
            						}
HXDLIN( 672)						switch((int)(::Control_obj::UI_LEFT_dyn()->_hx_getIndex())){
            							case (int)0: {
HXLINE( 672)								{
HXLINE( 672)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_up;
HXDLIN( 672)									int state = 1;
HXDLIN( 672)									int _g = 0;
HXDLIN( 672)									while((_g < copyKeys2->length)){
HXLINE( 672)										int key = copyKeys2->__get(_g);
HXDLIN( 672)										_g = (_g + 1);
HXDLIN( 672)										if ((key != -1)) {
HXLINE( 672)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 672)								{
HXLINE( 672)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_upP;
HXDLIN( 672)									int state1 = 2;
HXDLIN( 672)									int _g1 = 0;
HXDLIN( 672)									while((_g1 < copyKeys2->length)){
HXLINE( 672)										int key = copyKeys2->__get(_g1);
HXDLIN( 672)										_g1 = (_g1 + 1);
HXDLIN( 672)										if ((key != -1)) {
HXLINE( 672)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 672)								{
HXLINE( 672)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_upR;
HXDLIN( 672)									int state2 = -1;
HXDLIN( 672)									int _g2 = 0;
HXDLIN( 672)									while((_g2 < copyKeys2->length)){
HXLINE( 672)										int key = copyKeys2->__get(_g2);
HXDLIN( 672)										_g2 = (_g2 + 1);
HXDLIN( 672)										if ((key != -1)) {
HXLINE( 672)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)1: {
HXLINE( 672)								{
HXLINE( 672)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_left;
HXDLIN( 672)									int state = 1;
HXDLIN( 672)									int _g = 0;
HXDLIN( 672)									while((_g < copyKeys2->length)){
HXLINE( 672)										int key = copyKeys2->__get(_g);
HXDLIN( 672)										_g = (_g + 1);
HXDLIN( 672)										if ((key != -1)) {
HXLINE( 672)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 672)								{
HXLINE( 672)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_leftP;
HXDLIN( 672)									int state1 = 2;
HXDLIN( 672)									int _g1 = 0;
HXDLIN( 672)									while((_g1 < copyKeys2->length)){
HXLINE( 672)										int key = copyKeys2->__get(_g1);
HXDLIN( 672)										_g1 = (_g1 + 1);
HXDLIN( 672)										if ((key != -1)) {
HXLINE( 672)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 672)								{
HXLINE( 672)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_leftR;
HXDLIN( 672)									int state2 = -1;
HXDLIN( 672)									int _g2 = 0;
HXDLIN( 672)									while((_g2 < copyKeys2->length)){
HXLINE( 672)										int key = copyKeys2->__get(_g2);
HXDLIN( 672)										_g2 = (_g2 + 1);
HXDLIN( 672)										if ((key != -1)) {
HXLINE( 672)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)2: {
HXLINE( 672)								{
HXLINE( 672)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_right;
HXDLIN( 672)									int state = 1;
HXDLIN( 672)									int _g = 0;
HXDLIN( 672)									while((_g < copyKeys2->length)){
HXLINE( 672)										int key = copyKeys2->__get(_g);
HXDLIN( 672)										_g = (_g + 1);
HXDLIN( 672)										if ((key != -1)) {
HXLINE( 672)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 672)								{
HXLINE( 672)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_rightP;
HXDLIN( 672)									int state1 = 2;
HXDLIN( 672)									int _g1 = 0;
HXDLIN( 672)									while((_g1 < copyKeys2->length)){
HXLINE( 672)										int key = copyKeys2->__get(_g1);
HXDLIN( 672)										_g1 = (_g1 + 1);
HXDLIN( 672)										if ((key != -1)) {
HXLINE( 672)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 672)								{
HXLINE( 672)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_rightR;
HXDLIN( 672)									int state2 = -1;
HXDLIN( 672)									int _g2 = 0;
HXDLIN( 672)									while((_g2 < copyKeys2->length)){
HXLINE( 672)										int key = copyKeys2->__get(_g2);
HXDLIN( 672)										_g2 = (_g2 + 1);
HXDLIN( 672)										if ((key != -1)) {
HXLINE( 672)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)3: {
HXLINE( 672)								{
HXLINE( 672)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_down;
HXDLIN( 672)									int state = 1;
HXDLIN( 672)									int _g = 0;
HXDLIN( 672)									while((_g < copyKeys2->length)){
HXLINE( 672)										int key = copyKeys2->__get(_g);
HXDLIN( 672)										_g = (_g + 1);
HXDLIN( 672)										if ((key != -1)) {
HXLINE( 672)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 672)								{
HXLINE( 672)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_downP;
HXDLIN( 672)									int state1 = 2;
HXDLIN( 672)									int _g1 = 0;
HXDLIN( 672)									while((_g1 < copyKeys2->length)){
HXLINE( 672)										int key = copyKeys2->__get(_g1);
HXDLIN( 672)										_g1 = (_g1 + 1);
HXDLIN( 672)										if ((key != -1)) {
HXLINE( 672)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 672)								{
HXLINE( 672)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_downR;
HXDLIN( 672)									int state2 = -1;
HXDLIN( 672)									int _g2 = 0;
HXDLIN( 672)									while((_g2 < copyKeys2->length)){
HXLINE( 672)										int key = copyKeys2->__get(_g2);
HXDLIN( 672)										_g2 = (_g2 + 1);
HXDLIN( 672)										if ((key != -1)) {
HXLINE( 672)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)4: {
HXLINE( 672)								{
HXLINE( 672)									 ::flixel::input::actions::FlxActionDigital action = this->_note_up;
HXDLIN( 672)									int state = 1;
HXDLIN( 672)									int _g = 0;
HXDLIN( 672)									while((_g < copyKeys2->length)){
HXLINE( 672)										int key = copyKeys2->__get(_g);
HXDLIN( 672)										_g = (_g + 1);
HXDLIN( 672)										if ((key != -1)) {
HXLINE( 672)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 672)								{
HXLINE( 672)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_upP;
HXDLIN( 672)									int state1 = 2;
HXDLIN( 672)									int _g1 = 0;
HXDLIN( 672)									while((_g1 < copyKeys2->length)){
HXLINE( 672)										int key = copyKeys2->__get(_g1);
HXDLIN( 672)										_g1 = (_g1 + 1);
HXDLIN( 672)										if ((key != -1)) {
HXLINE( 672)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 672)								{
HXLINE( 672)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_upR;
HXDLIN( 672)									int state2 = -1;
HXDLIN( 672)									int _g2 = 0;
HXDLIN( 672)									while((_g2 < copyKeys2->length)){
HXLINE( 672)										int key = copyKeys2->__get(_g2);
HXDLIN( 672)										_g2 = (_g2 + 1);
HXDLIN( 672)										if ((key != -1)) {
HXLINE( 672)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)5: {
HXLINE( 672)								{
HXLINE( 672)									 ::flixel::input::actions::FlxActionDigital action = this->_note_left;
HXDLIN( 672)									int state = 1;
HXDLIN( 672)									int _g = 0;
HXDLIN( 672)									while((_g < copyKeys2->length)){
HXLINE( 672)										int key = copyKeys2->__get(_g);
HXDLIN( 672)										_g = (_g + 1);
HXDLIN( 672)										if ((key != -1)) {
HXLINE( 672)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 672)								{
HXLINE( 672)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_leftP;
HXDLIN( 672)									int state1 = 2;
HXDLIN( 672)									int _g1 = 0;
HXDLIN( 672)									while((_g1 < copyKeys2->length)){
HXLINE( 672)										int key = copyKeys2->__get(_g1);
HXDLIN( 672)										_g1 = (_g1 + 1);
HXDLIN( 672)										if ((key != -1)) {
HXLINE( 672)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 672)								{
HXLINE( 672)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_leftR;
HXDLIN( 672)									int state2 = -1;
HXDLIN( 672)									int _g2 = 0;
HXDLIN( 672)									while((_g2 < copyKeys2->length)){
HXLINE( 672)										int key = copyKeys2->__get(_g2);
HXDLIN( 672)										_g2 = (_g2 + 1);
HXDLIN( 672)										if ((key != -1)) {
HXLINE( 672)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)6: {
HXLINE( 672)								{
HXLINE( 672)									 ::flixel::input::actions::FlxActionDigital action = this->_note_right;
HXDLIN( 672)									int state = 1;
HXDLIN( 672)									int _g = 0;
HXDLIN( 672)									while((_g < copyKeys2->length)){
HXLINE( 672)										int key = copyKeys2->__get(_g);
HXDLIN( 672)										_g = (_g + 1);
HXDLIN( 672)										if ((key != -1)) {
HXLINE( 672)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 672)								{
HXLINE( 672)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_rightP;
HXDLIN( 672)									int state1 = 2;
HXDLIN( 672)									int _g1 = 0;
HXDLIN( 672)									while((_g1 < copyKeys2->length)){
HXLINE( 672)										int key = copyKeys2->__get(_g1);
HXDLIN( 672)										_g1 = (_g1 + 1);
HXDLIN( 672)										if ((key != -1)) {
HXLINE( 672)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 672)								{
HXLINE( 672)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_rightR;
HXDLIN( 672)									int state2 = -1;
HXDLIN( 672)									int _g2 = 0;
HXDLIN( 672)									while((_g2 < copyKeys2->length)){
HXLINE( 672)										int key = copyKeys2->__get(_g2);
HXDLIN( 672)										_g2 = (_g2 + 1);
HXDLIN( 672)										if ((key != -1)) {
HXLINE( 672)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)7: {
HXLINE( 672)								{
HXLINE( 672)									 ::flixel::input::actions::FlxActionDigital action = this->_note_down;
HXDLIN( 672)									int state = 1;
HXDLIN( 672)									int _g = 0;
HXDLIN( 672)									while((_g < copyKeys2->length)){
HXLINE( 672)										int key = copyKeys2->__get(_g);
HXDLIN( 672)										_g = (_g + 1);
HXDLIN( 672)										if ((key != -1)) {
HXLINE( 672)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 672)								{
HXLINE( 672)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_downP;
HXDLIN( 672)									int state1 = 2;
HXDLIN( 672)									int _g1 = 0;
HXDLIN( 672)									while((_g1 < copyKeys2->length)){
HXLINE( 672)										int key = copyKeys2->__get(_g1);
HXDLIN( 672)										_g1 = (_g1 + 1);
HXDLIN( 672)										if ((key != -1)) {
HXLINE( 672)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 672)								{
HXLINE( 672)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_downR;
HXDLIN( 672)									int state2 = -1;
HXDLIN( 672)									int _g2 = 0;
HXDLIN( 672)									while((_g2 < copyKeys2->length)){
HXLINE( 672)										int key = copyKeys2->__get(_g2);
HXDLIN( 672)										_g2 = (_g2 + 1);
HXDLIN( 672)										if ((key != -1)) {
HXLINE( 672)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)8: {
HXLINE( 672)								 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 672)								int state = 2;
HXDLIN( 672)								int _g = 0;
HXDLIN( 672)								while((_g < copyKeys2->length)){
HXLINE( 672)									int key = copyKeys2->__get(_g);
HXDLIN( 672)									_g = (_g + 1);
HXDLIN( 672)									if ((key != -1)) {
HXLINE( 672)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)9: {
HXLINE( 672)								 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 672)								int state = 2;
HXDLIN( 672)								int _g = 0;
HXDLIN( 672)								while((_g < copyKeys2->length)){
HXLINE( 672)									int key = copyKeys2->__get(_g);
HXDLIN( 672)									_g = (_g + 1);
HXDLIN( 672)									if ((key != -1)) {
HXLINE( 672)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)10: {
HXLINE( 672)								 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 672)								int state = 2;
HXDLIN( 672)								int _g = 0;
HXDLIN( 672)								while((_g < copyKeys2->length)){
HXLINE( 672)									int key = copyKeys2->__get(_g);
HXDLIN( 672)									_g = (_g + 1);
HXDLIN( 672)									if ((key != -1)) {
HXLINE( 672)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)11: {
HXLINE( 672)								 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 672)								int state = 2;
HXDLIN( 672)								int _g = 0;
HXDLIN( 672)								while((_g < copyKeys2->length)){
HXLINE( 672)									int key = copyKeys2->__get(_g);
HXDLIN( 672)									_g = (_g + 1);
HXDLIN( 672)									if ((key != -1)) {
HXLINE( 672)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            						}
            					}
HXLINE( 673)					{
HXLINE( 673)						::Array< int > copyKeys3 = ::Array_obj< int >::fromData( _hx_array_data_116e4296_1135,1)->copy();
HXDLIN( 673)						{
HXLINE( 673)							int _g6 = 0;
HXDLIN( 673)							int _g7 = copyKeys3->length;
HXDLIN( 673)							while((_g6 < _g7)){
HXLINE( 673)								_g6 = (_g6 + 1);
HXDLIN( 673)								int i = (_g6 - 1);
HXDLIN( 673)								if ((i == -1)) {
HXLINE( 673)									copyKeys3->remove(i);
            								}
            							}
            						}
HXDLIN( 673)						switch((int)(::Control_obj::UI_RIGHT_dyn()->_hx_getIndex())){
            							case (int)0: {
HXLINE( 673)								{
HXLINE( 673)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_up;
HXDLIN( 673)									int state = 1;
HXDLIN( 673)									int _g = 0;
HXDLIN( 673)									while((_g < copyKeys3->length)){
HXLINE( 673)										int key = copyKeys3->__get(_g);
HXDLIN( 673)										_g = (_g + 1);
HXDLIN( 673)										if ((key != -1)) {
HXLINE( 673)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 673)								{
HXLINE( 673)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_upP;
HXDLIN( 673)									int state1 = 2;
HXDLIN( 673)									int _g1 = 0;
HXDLIN( 673)									while((_g1 < copyKeys3->length)){
HXLINE( 673)										int key = copyKeys3->__get(_g1);
HXDLIN( 673)										_g1 = (_g1 + 1);
HXDLIN( 673)										if ((key != -1)) {
HXLINE( 673)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 673)								{
HXLINE( 673)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_upR;
HXDLIN( 673)									int state2 = -1;
HXDLIN( 673)									int _g2 = 0;
HXDLIN( 673)									while((_g2 < copyKeys3->length)){
HXLINE( 673)										int key = copyKeys3->__get(_g2);
HXDLIN( 673)										_g2 = (_g2 + 1);
HXDLIN( 673)										if ((key != -1)) {
HXLINE( 673)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)1: {
HXLINE( 673)								{
HXLINE( 673)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_left;
HXDLIN( 673)									int state = 1;
HXDLIN( 673)									int _g = 0;
HXDLIN( 673)									while((_g < copyKeys3->length)){
HXLINE( 673)										int key = copyKeys3->__get(_g);
HXDLIN( 673)										_g = (_g + 1);
HXDLIN( 673)										if ((key != -1)) {
HXLINE( 673)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 673)								{
HXLINE( 673)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_leftP;
HXDLIN( 673)									int state1 = 2;
HXDLIN( 673)									int _g1 = 0;
HXDLIN( 673)									while((_g1 < copyKeys3->length)){
HXLINE( 673)										int key = copyKeys3->__get(_g1);
HXDLIN( 673)										_g1 = (_g1 + 1);
HXDLIN( 673)										if ((key != -1)) {
HXLINE( 673)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 673)								{
HXLINE( 673)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_leftR;
HXDLIN( 673)									int state2 = -1;
HXDLIN( 673)									int _g2 = 0;
HXDLIN( 673)									while((_g2 < copyKeys3->length)){
HXLINE( 673)										int key = copyKeys3->__get(_g2);
HXDLIN( 673)										_g2 = (_g2 + 1);
HXDLIN( 673)										if ((key != -1)) {
HXLINE( 673)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)2: {
HXLINE( 673)								{
HXLINE( 673)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_right;
HXDLIN( 673)									int state = 1;
HXDLIN( 673)									int _g = 0;
HXDLIN( 673)									while((_g < copyKeys3->length)){
HXLINE( 673)										int key = copyKeys3->__get(_g);
HXDLIN( 673)										_g = (_g + 1);
HXDLIN( 673)										if ((key != -1)) {
HXLINE( 673)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 673)								{
HXLINE( 673)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_rightP;
HXDLIN( 673)									int state1 = 2;
HXDLIN( 673)									int _g1 = 0;
HXDLIN( 673)									while((_g1 < copyKeys3->length)){
HXLINE( 673)										int key = copyKeys3->__get(_g1);
HXDLIN( 673)										_g1 = (_g1 + 1);
HXDLIN( 673)										if ((key != -1)) {
HXLINE( 673)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 673)								{
HXLINE( 673)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_rightR;
HXDLIN( 673)									int state2 = -1;
HXDLIN( 673)									int _g2 = 0;
HXDLIN( 673)									while((_g2 < copyKeys3->length)){
HXLINE( 673)										int key = copyKeys3->__get(_g2);
HXDLIN( 673)										_g2 = (_g2 + 1);
HXDLIN( 673)										if ((key != -1)) {
HXLINE( 673)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)3: {
HXLINE( 673)								{
HXLINE( 673)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_down;
HXDLIN( 673)									int state = 1;
HXDLIN( 673)									int _g = 0;
HXDLIN( 673)									while((_g < copyKeys3->length)){
HXLINE( 673)										int key = copyKeys3->__get(_g);
HXDLIN( 673)										_g = (_g + 1);
HXDLIN( 673)										if ((key != -1)) {
HXLINE( 673)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 673)								{
HXLINE( 673)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_downP;
HXDLIN( 673)									int state1 = 2;
HXDLIN( 673)									int _g1 = 0;
HXDLIN( 673)									while((_g1 < copyKeys3->length)){
HXLINE( 673)										int key = copyKeys3->__get(_g1);
HXDLIN( 673)										_g1 = (_g1 + 1);
HXDLIN( 673)										if ((key != -1)) {
HXLINE( 673)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 673)								{
HXLINE( 673)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_downR;
HXDLIN( 673)									int state2 = -1;
HXDLIN( 673)									int _g2 = 0;
HXDLIN( 673)									while((_g2 < copyKeys3->length)){
HXLINE( 673)										int key = copyKeys3->__get(_g2);
HXDLIN( 673)										_g2 = (_g2 + 1);
HXDLIN( 673)										if ((key != -1)) {
HXLINE( 673)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)4: {
HXLINE( 673)								{
HXLINE( 673)									 ::flixel::input::actions::FlxActionDigital action = this->_note_up;
HXDLIN( 673)									int state = 1;
HXDLIN( 673)									int _g = 0;
HXDLIN( 673)									while((_g < copyKeys3->length)){
HXLINE( 673)										int key = copyKeys3->__get(_g);
HXDLIN( 673)										_g = (_g + 1);
HXDLIN( 673)										if ((key != -1)) {
HXLINE( 673)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 673)								{
HXLINE( 673)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_upP;
HXDLIN( 673)									int state1 = 2;
HXDLIN( 673)									int _g1 = 0;
HXDLIN( 673)									while((_g1 < copyKeys3->length)){
HXLINE( 673)										int key = copyKeys3->__get(_g1);
HXDLIN( 673)										_g1 = (_g1 + 1);
HXDLIN( 673)										if ((key != -1)) {
HXLINE( 673)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 673)								{
HXLINE( 673)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_upR;
HXDLIN( 673)									int state2 = -1;
HXDLIN( 673)									int _g2 = 0;
HXDLIN( 673)									while((_g2 < copyKeys3->length)){
HXLINE( 673)										int key = copyKeys3->__get(_g2);
HXDLIN( 673)										_g2 = (_g2 + 1);
HXDLIN( 673)										if ((key != -1)) {
HXLINE( 673)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)5: {
HXLINE( 673)								{
HXLINE( 673)									 ::flixel::input::actions::FlxActionDigital action = this->_note_left;
HXDLIN( 673)									int state = 1;
HXDLIN( 673)									int _g = 0;
HXDLIN( 673)									while((_g < copyKeys3->length)){
HXLINE( 673)										int key = copyKeys3->__get(_g);
HXDLIN( 673)										_g = (_g + 1);
HXDLIN( 673)										if ((key != -1)) {
HXLINE( 673)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 673)								{
HXLINE( 673)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_leftP;
HXDLIN( 673)									int state1 = 2;
HXDLIN( 673)									int _g1 = 0;
HXDLIN( 673)									while((_g1 < copyKeys3->length)){
HXLINE( 673)										int key = copyKeys3->__get(_g1);
HXDLIN( 673)										_g1 = (_g1 + 1);
HXDLIN( 673)										if ((key != -1)) {
HXLINE( 673)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 673)								{
HXLINE( 673)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_leftR;
HXDLIN( 673)									int state2 = -1;
HXDLIN( 673)									int _g2 = 0;
HXDLIN( 673)									while((_g2 < copyKeys3->length)){
HXLINE( 673)										int key = copyKeys3->__get(_g2);
HXDLIN( 673)										_g2 = (_g2 + 1);
HXDLIN( 673)										if ((key != -1)) {
HXLINE( 673)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)6: {
HXLINE( 673)								{
HXLINE( 673)									 ::flixel::input::actions::FlxActionDigital action = this->_note_right;
HXDLIN( 673)									int state = 1;
HXDLIN( 673)									int _g = 0;
HXDLIN( 673)									while((_g < copyKeys3->length)){
HXLINE( 673)										int key = copyKeys3->__get(_g);
HXDLIN( 673)										_g = (_g + 1);
HXDLIN( 673)										if ((key != -1)) {
HXLINE( 673)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 673)								{
HXLINE( 673)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_rightP;
HXDLIN( 673)									int state1 = 2;
HXDLIN( 673)									int _g1 = 0;
HXDLIN( 673)									while((_g1 < copyKeys3->length)){
HXLINE( 673)										int key = copyKeys3->__get(_g1);
HXDLIN( 673)										_g1 = (_g1 + 1);
HXDLIN( 673)										if ((key != -1)) {
HXLINE( 673)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 673)								{
HXLINE( 673)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_rightR;
HXDLIN( 673)									int state2 = -1;
HXDLIN( 673)									int _g2 = 0;
HXDLIN( 673)									while((_g2 < copyKeys3->length)){
HXLINE( 673)										int key = copyKeys3->__get(_g2);
HXDLIN( 673)										_g2 = (_g2 + 1);
HXDLIN( 673)										if ((key != -1)) {
HXLINE( 673)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)7: {
HXLINE( 673)								{
HXLINE( 673)									 ::flixel::input::actions::FlxActionDigital action = this->_note_down;
HXDLIN( 673)									int state = 1;
HXDLIN( 673)									int _g = 0;
HXDLIN( 673)									while((_g < copyKeys3->length)){
HXLINE( 673)										int key = copyKeys3->__get(_g);
HXDLIN( 673)										_g = (_g + 1);
HXDLIN( 673)										if ((key != -1)) {
HXLINE( 673)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 673)								{
HXLINE( 673)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_downP;
HXDLIN( 673)									int state1 = 2;
HXDLIN( 673)									int _g1 = 0;
HXDLIN( 673)									while((_g1 < copyKeys3->length)){
HXLINE( 673)										int key = copyKeys3->__get(_g1);
HXDLIN( 673)										_g1 = (_g1 + 1);
HXDLIN( 673)										if ((key != -1)) {
HXLINE( 673)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 673)								{
HXLINE( 673)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_downR;
HXDLIN( 673)									int state2 = -1;
HXDLIN( 673)									int _g2 = 0;
HXDLIN( 673)									while((_g2 < copyKeys3->length)){
HXLINE( 673)										int key = copyKeys3->__get(_g2);
HXDLIN( 673)										_g2 = (_g2 + 1);
HXDLIN( 673)										if ((key != -1)) {
HXLINE( 673)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)8: {
HXLINE( 673)								 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 673)								int state = 2;
HXDLIN( 673)								int _g = 0;
HXDLIN( 673)								while((_g < copyKeys3->length)){
HXLINE( 673)									int key = copyKeys3->__get(_g);
HXDLIN( 673)									_g = (_g + 1);
HXDLIN( 673)									if ((key != -1)) {
HXLINE( 673)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)9: {
HXLINE( 673)								 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 673)								int state = 2;
HXDLIN( 673)								int _g = 0;
HXDLIN( 673)								while((_g < copyKeys3->length)){
HXLINE( 673)									int key = copyKeys3->__get(_g);
HXDLIN( 673)									_g = (_g + 1);
HXDLIN( 673)									if ((key != -1)) {
HXLINE( 673)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)10: {
HXLINE( 673)								 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 673)								int state = 2;
HXDLIN( 673)								int _g = 0;
HXDLIN( 673)								while((_g < copyKeys3->length)){
HXLINE( 673)									int key = copyKeys3->__get(_g);
HXDLIN( 673)									_g = (_g + 1);
HXDLIN( 673)									if ((key != -1)) {
HXLINE( 673)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)11: {
HXLINE( 673)								 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 673)								int state = 2;
HXDLIN( 673)								int _g = 0;
HXDLIN( 673)								while((_g < copyKeys3->length)){
HXLINE( 673)									int key = copyKeys3->__get(_g);
HXDLIN( 673)									_g = (_g + 1);
HXDLIN( 673)									if ((key != -1)) {
HXLINE( 673)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            						}
            					}
HXLINE( 674)					{
HXLINE( 674)						::Array< int > copyKeys4 = ::Array_obj< int >::fromData( _hx_array_data_116e4296_1136,1)->copy();
HXDLIN( 674)						{
HXLINE( 674)							int _g8 = 0;
HXDLIN( 674)							int _g9 = copyKeys4->length;
HXDLIN( 674)							while((_g8 < _g9)){
HXLINE( 674)								_g8 = (_g8 + 1);
HXDLIN( 674)								int i = (_g8 - 1);
HXDLIN( 674)								if ((i == -1)) {
HXLINE( 674)									copyKeys4->remove(i);
            								}
            							}
            						}
HXDLIN( 674)						switch((int)(::Control_obj::NOTE_UP_dyn()->_hx_getIndex())){
            							case (int)0: {
HXLINE( 674)								{
HXLINE( 674)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_up;
HXDLIN( 674)									int state = 1;
HXDLIN( 674)									int _g = 0;
HXDLIN( 674)									while((_g < copyKeys4->length)){
HXLINE( 674)										int key = copyKeys4->__get(_g);
HXDLIN( 674)										_g = (_g + 1);
HXDLIN( 674)										if ((key != -1)) {
HXLINE( 674)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 674)								{
HXLINE( 674)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_upP;
HXDLIN( 674)									int state1 = 2;
HXDLIN( 674)									int _g1 = 0;
HXDLIN( 674)									while((_g1 < copyKeys4->length)){
HXLINE( 674)										int key = copyKeys4->__get(_g1);
HXDLIN( 674)										_g1 = (_g1 + 1);
HXDLIN( 674)										if ((key != -1)) {
HXLINE( 674)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 674)								{
HXLINE( 674)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_upR;
HXDLIN( 674)									int state2 = -1;
HXDLIN( 674)									int _g2 = 0;
HXDLIN( 674)									while((_g2 < copyKeys4->length)){
HXLINE( 674)										int key = copyKeys4->__get(_g2);
HXDLIN( 674)										_g2 = (_g2 + 1);
HXDLIN( 674)										if ((key != -1)) {
HXLINE( 674)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)1: {
HXLINE( 674)								{
HXLINE( 674)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_left;
HXDLIN( 674)									int state = 1;
HXDLIN( 674)									int _g = 0;
HXDLIN( 674)									while((_g < copyKeys4->length)){
HXLINE( 674)										int key = copyKeys4->__get(_g);
HXDLIN( 674)										_g = (_g + 1);
HXDLIN( 674)										if ((key != -1)) {
HXLINE( 674)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 674)								{
HXLINE( 674)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_leftP;
HXDLIN( 674)									int state1 = 2;
HXDLIN( 674)									int _g1 = 0;
HXDLIN( 674)									while((_g1 < copyKeys4->length)){
HXLINE( 674)										int key = copyKeys4->__get(_g1);
HXDLIN( 674)										_g1 = (_g1 + 1);
HXDLIN( 674)										if ((key != -1)) {
HXLINE( 674)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 674)								{
HXLINE( 674)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_leftR;
HXDLIN( 674)									int state2 = -1;
HXDLIN( 674)									int _g2 = 0;
HXDLIN( 674)									while((_g2 < copyKeys4->length)){
HXLINE( 674)										int key = copyKeys4->__get(_g2);
HXDLIN( 674)										_g2 = (_g2 + 1);
HXDLIN( 674)										if ((key != -1)) {
HXLINE( 674)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)2: {
HXLINE( 674)								{
HXLINE( 674)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_right;
HXDLIN( 674)									int state = 1;
HXDLIN( 674)									int _g = 0;
HXDLIN( 674)									while((_g < copyKeys4->length)){
HXLINE( 674)										int key = copyKeys4->__get(_g);
HXDLIN( 674)										_g = (_g + 1);
HXDLIN( 674)										if ((key != -1)) {
HXLINE( 674)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 674)								{
HXLINE( 674)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_rightP;
HXDLIN( 674)									int state1 = 2;
HXDLIN( 674)									int _g1 = 0;
HXDLIN( 674)									while((_g1 < copyKeys4->length)){
HXLINE( 674)										int key = copyKeys4->__get(_g1);
HXDLIN( 674)										_g1 = (_g1 + 1);
HXDLIN( 674)										if ((key != -1)) {
HXLINE( 674)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 674)								{
HXLINE( 674)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_rightR;
HXDLIN( 674)									int state2 = -1;
HXDLIN( 674)									int _g2 = 0;
HXDLIN( 674)									while((_g2 < copyKeys4->length)){
HXLINE( 674)										int key = copyKeys4->__get(_g2);
HXDLIN( 674)										_g2 = (_g2 + 1);
HXDLIN( 674)										if ((key != -1)) {
HXLINE( 674)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)3: {
HXLINE( 674)								{
HXLINE( 674)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_down;
HXDLIN( 674)									int state = 1;
HXDLIN( 674)									int _g = 0;
HXDLIN( 674)									while((_g < copyKeys4->length)){
HXLINE( 674)										int key = copyKeys4->__get(_g);
HXDLIN( 674)										_g = (_g + 1);
HXDLIN( 674)										if ((key != -1)) {
HXLINE( 674)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 674)								{
HXLINE( 674)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_downP;
HXDLIN( 674)									int state1 = 2;
HXDLIN( 674)									int _g1 = 0;
HXDLIN( 674)									while((_g1 < copyKeys4->length)){
HXLINE( 674)										int key = copyKeys4->__get(_g1);
HXDLIN( 674)										_g1 = (_g1 + 1);
HXDLIN( 674)										if ((key != -1)) {
HXLINE( 674)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 674)								{
HXLINE( 674)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_downR;
HXDLIN( 674)									int state2 = -1;
HXDLIN( 674)									int _g2 = 0;
HXDLIN( 674)									while((_g2 < copyKeys4->length)){
HXLINE( 674)										int key = copyKeys4->__get(_g2);
HXDLIN( 674)										_g2 = (_g2 + 1);
HXDLIN( 674)										if ((key != -1)) {
HXLINE( 674)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)4: {
HXLINE( 674)								{
HXLINE( 674)									 ::flixel::input::actions::FlxActionDigital action = this->_note_up;
HXDLIN( 674)									int state = 1;
HXDLIN( 674)									int _g = 0;
HXDLIN( 674)									while((_g < copyKeys4->length)){
HXLINE( 674)										int key = copyKeys4->__get(_g);
HXDLIN( 674)										_g = (_g + 1);
HXDLIN( 674)										if ((key != -1)) {
HXLINE( 674)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 674)								{
HXLINE( 674)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_upP;
HXDLIN( 674)									int state1 = 2;
HXDLIN( 674)									int _g1 = 0;
HXDLIN( 674)									while((_g1 < copyKeys4->length)){
HXLINE( 674)										int key = copyKeys4->__get(_g1);
HXDLIN( 674)										_g1 = (_g1 + 1);
HXDLIN( 674)										if ((key != -1)) {
HXLINE( 674)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 674)								{
HXLINE( 674)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_upR;
HXDLIN( 674)									int state2 = -1;
HXDLIN( 674)									int _g2 = 0;
HXDLIN( 674)									while((_g2 < copyKeys4->length)){
HXLINE( 674)										int key = copyKeys4->__get(_g2);
HXDLIN( 674)										_g2 = (_g2 + 1);
HXDLIN( 674)										if ((key != -1)) {
HXLINE( 674)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)5: {
HXLINE( 674)								{
HXLINE( 674)									 ::flixel::input::actions::FlxActionDigital action = this->_note_left;
HXDLIN( 674)									int state = 1;
HXDLIN( 674)									int _g = 0;
HXDLIN( 674)									while((_g < copyKeys4->length)){
HXLINE( 674)										int key = copyKeys4->__get(_g);
HXDLIN( 674)										_g = (_g + 1);
HXDLIN( 674)										if ((key != -1)) {
HXLINE( 674)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 674)								{
HXLINE( 674)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_leftP;
HXDLIN( 674)									int state1 = 2;
HXDLIN( 674)									int _g1 = 0;
HXDLIN( 674)									while((_g1 < copyKeys4->length)){
HXLINE( 674)										int key = copyKeys4->__get(_g1);
HXDLIN( 674)										_g1 = (_g1 + 1);
HXDLIN( 674)										if ((key != -1)) {
HXLINE( 674)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 674)								{
HXLINE( 674)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_leftR;
HXDLIN( 674)									int state2 = -1;
HXDLIN( 674)									int _g2 = 0;
HXDLIN( 674)									while((_g2 < copyKeys4->length)){
HXLINE( 674)										int key = copyKeys4->__get(_g2);
HXDLIN( 674)										_g2 = (_g2 + 1);
HXDLIN( 674)										if ((key != -1)) {
HXLINE( 674)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)6: {
HXLINE( 674)								{
HXLINE( 674)									 ::flixel::input::actions::FlxActionDigital action = this->_note_right;
HXDLIN( 674)									int state = 1;
HXDLIN( 674)									int _g = 0;
HXDLIN( 674)									while((_g < copyKeys4->length)){
HXLINE( 674)										int key = copyKeys4->__get(_g);
HXDLIN( 674)										_g = (_g + 1);
HXDLIN( 674)										if ((key != -1)) {
HXLINE( 674)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 674)								{
HXLINE( 674)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_rightP;
HXDLIN( 674)									int state1 = 2;
HXDLIN( 674)									int _g1 = 0;
HXDLIN( 674)									while((_g1 < copyKeys4->length)){
HXLINE( 674)										int key = copyKeys4->__get(_g1);
HXDLIN( 674)										_g1 = (_g1 + 1);
HXDLIN( 674)										if ((key != -1)) {
HXLINE( 674)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 674)								{
HXLINE( 674)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_rightR;
HXDLIN( 674)									int state2 = -1;
HXDLIN( 674)									int _g2 = 0;
HXDLIN( 674)									while((_g2 < copyKeys4->length)){
HXLINE( 674)										int key = copyKeys4->__get(_g2);
HXDLIN( 674)										_g2 = (_g2 + 1);
HXDLIN( 674)										if ((key != -1)) {
HXLINE( 674)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)7: {
HXLINE( 674)								{
HXLINE( 674)									 ::flixel::input::actions::FlxActionDigital action = this->_note_down;
HXDLIN( 674)									int state = 1;
HXDLIN( 674)									int _g = 0;
HXDLIN( 674)									while((_g < copyKeys4->length)){
HXLINE( 674)										int key = copyKeys4->__get(_g);
HXDLIN( 674)										_g = (_g + 1);
HXDLIN( 674)										if ((key != -1)) {
HXLINE( 674)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 674)								{
HXLINE( 674)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_downP;
HXDLIN( 674)									int state1 = 2;
HXDLIN( 674)									int _g1 = 0;
HXDLIN( 674)									while((_g1 < copyKeys4->length)){
HXLINE( 674)										int key = copyKeys4->__get(_g1);
HXDLIN( 674)										_g1 = (_g1 + 1);
HXDLIN( 674)										if ((key != -1)) {
HXLINE( 674)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 674)								{
HXLINE( 674)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_downR;
HXDLIN( 674)									int state2 = -1;
HXDLIN( 674)									int _g2 = 0;
HXDLIN( 674)									while((_g2 < copyKeys4->length)){
HXLINE( 674)										int key = copyKeys4->__get(_g2);
HXDLIN( 674)										_g2 = (_g2 + 1);
HXDLIN( 674)										if ((key != -1)) {
HXLINE( 674)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)8: {
HXLINE( 674)								 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 674)								int state = 2;
HXDLIN( 674)								int _g = 0;
HXDLIN( 674)								while((_g < copyKeys4->length)){
HXLINE( 674)									int key = copyKeys4->__get(_g);
HXDLIN( 674)									_g = (_g + 1);
HXDLIN( 674)									if ((key != -1)) {
HXLINE( 674)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)9: {
HXLINE( 674)								 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 674)								int state = 2;
HXDLIN( 674)								int _g = 0;
HXDLIN( 674)								while((_g < copyKeys4->length)){
HXLINE( 674)									int key = copyKeys4->__get(_g);
HXDLIN( 674)									_g = (_g + 1);
HXDLIN( 674)									if ((key != -1)) {
HXLINE( 674)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)10: {
HXLINE( 674)								 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 674)								int state = 2;
HXDLIN( 674)								int _g = 0;
HXDLIN( 674)								while((_g < copyKeys4->length)){
HXLINE( 674)									int key = copyKeys4->__get(_g);
HXDLIN( 674)									_g = (_g + 1);
HXDLIN( 674)									if ((key != -1)) {
HXLINE( 674)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)11: {
HXLINE( 674)								 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 674)								int state = 2;
HXDLIN( 674)								int _g = 0;
HXDLIN( 674)								while((_g < copyKeys4->length)){
HXLINE( 674)									int key = copyKeys4->__get(_g);
HXDLIN( 674)									_g = (_g + 1);
HXDLIN( 674)									if ((key != -1)) {
HXLINE( 674)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            						}
            					}
HXLINE( 675)					{
HXLINE( 675)						::Array< int > copyKeys5 = ::Array_obj< int >::fromData( _hx_array_data_116e4296_1137,1)->copy();
HXDLIN( 675)						{
HXLINE( 675)							int _g10 = 0;
HXDLIN( 675)							int _g11 = copyKeys5->length;
HXDLIN( 675)							while((_g10 < _g11)){
HXLINE( 675)								_g10 = (_g10 + 1);
HXDLIN( 675)								int i = (_g10 - 1);
HXDLIN( 675)								if ((i == -1)) {
HXLINE( 675)									copyKeys5->remove(i);
            								}
            							}
            						}
HXDLIN( 675)						switch((int)(::Control_obj::NOTE_DOWN_dyn()->_hx_getIndex())){
            							case (int)0: {
HXLINE( 675)								{
HXLINE( 675)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_up;
HXDLIN( 675)									int state = 1;
HXDLIN( 675)									int _g = 0;
HXDLIN( 675)									while((_g < copyKeys5->length)){
HXLINE( 675)										int key = copyKeys5->__get(_g);
HXDLIN( 675)										_g = (_g + 1);
HXDLIN( 675)										if ((key != -1)) {
HXLINE( 675)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 675)								{
HXLINE( 675)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_upP;
HXDLIN( 675)									int state1 = 2;
HXDLIN( 675)									int _g1 = 0;
HXDLIN( 675)									while((_g1 < copyKeys5->length)){
HXLINE( 675)										int key = copyKeys5->__get(_g1);
HXDLIN( 675)										_g1 = (_g1 + 1);
HXDLIN( 675)										if ((key != -1)) {
HXLINE( 675)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 675)								{
HXLINE( 675)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_upR;
HXDLIN( 675)									int state2 = -1;
HXDLIN( 675)									int _g2 = 0;
HXDLIN( 675)									while((_g2 < copyKeys5->length)){
HXLINE( 675)										int key = copyKeys5->__get(_g2);
HXDLIN( 675)										_g2 = (_g2 + 1);
HXDLIN( 675)										if ((key != -1)) {
HXLINE( 675)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)1: {
HXLINE( 675)								{
HXLINE( 675)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_left;
HXDLIN( 675)									int state = 1;
HXDLIN( 675)									int _g = 0;
HXDLIN( 675)									while((_g < copyKeys5->length)){
HXLINE( 675)										int key = copyKeys5->__get(_g);
HXDLIN( 675)										_g = (_g + 1);
HXDLIN( 675)										if ((key != -1)) {
HXLINE( 675)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 675)								{
HXLINE( 675)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_leftP;
HXDLIN( 675)									int state1 = 2;
HXDLIN( 675)									int _g1 = 0;
HXDLIN( 675)									while((_g1 < copyKeys5->length)){
HXLINE( 675)										int key = copyKeys5->__get(_g1);
HXDLIN( 675)										_g1 = (_g1 + 1);
HXDLIN( 675)										if ((key != -1)) {
HXLINE( 675)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 675)								{
HXLINE( 675)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_leftR;
HXDLIN( 675)									int state2 = -1;
HXDLIN( 675)									int _g2 = 0;
HXDLIN( 675)									while((_g2 < copyKeys5->length)){
HXLINE( 675)										int key = copyKeys5->__get(_g2);
HXDLIN( 675)										_g2 = (_g2 + 1);
HXDLIN( 675)										if ((key != -1)) {
HXLINE( 675)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)2: {
HXLINE( 675)								{
HXLINE( 675)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_right;
HXDLIN( 675)									int state = 1;
HXDLIN( 675)									int _g = 0;
HXDLIN( 675)									while((_g < copyKeys5->length)){
HXLINE( 675)										int key = copyKeys5->__get(_g);
HXDLIN( 675)										_g = (_g + 1);
HXDLIN( 675)										if ((key != -1)) {
HXLINE( 675)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 675)								{
HXLINE( 675)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_rightP;
HXDLIN( 675)									int state1 = 2;
HXDLIN( 675)									int _g1 = 0;
HXDLIN( 675)									while((_g1 < copyKeys5->length)){
HXLINE( 675)										int key = copyKeys5->__get(_g1);
HXDLIN( 675)										_g1 = (_g1 + 1);
HXDLIN( 675)										if ((key != -1)) {
HXLINE( 675)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 675)								{
HXLINE( 675)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_rightR;
HXDLIN( 675)									int state2 = -1;
HXDLIN( 675)									int _g2 = 0;
HXDLIN( 675)									while((_g2 < copyKeys5->length)){
HXLINE( 675)										int key = copyKeys5->__get(_g2);
HXDLIN( 675)										_g2 = (_g2 + 1);
HXDLIN( 675)										if ((key != -1)) {
HXLINE( 675)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)3: {
HXLINE( 675)								{
HXLINE( 675)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_down;
HXDLIN( 675)									int state = 1;
HXDLIN( 675)									int _g = 0;
HXDLIN( 675)									while((_g < copyKeys5->length)){
HXLINE( 675)										int key = copyKeys5->__get(_g);
HXDLIN( 675)										_g = (_g + 1);
HXDLIN( 675)										if ((key != -1)) {
HXLINE( 675)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 675)								{
HXLINE( 675)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_downP;
HXDLIN( 675)									int state1 = 2;
HXDLIN( 675)									int _g1 = 0;
HXDLIN( 675)									while((_g1 < copyKeys5->length)){
HXLINE( 675)										int key = copyKeys5->__get(_g1);
HXDLIN( 675)										_g1 = (_g1 + 1);
HXDLIN( 675)										if ((key != -1)) {
HXLINE( 675)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 675)								{
HXLINE( 675)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_downR;
HXDLIN( 675)									int state2 = -1;
HXDLIN( 675)									int _g2 = 0;
HXDLIN( 675)									while((_g2 < copyKeys5->length)){
HXLINE( 675)										int key = copyKeys5->__get(_g2);
HXDLIN( 675)										_g2 = (_g2 + 1);
HXDLIN( 675)										if ((key != -1)) {
HXLINE( 675)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)4: {
HXLINE( 675)								{
HXLINE( 675)									 ::flixel::input::actions::FlxActionDigital action = this->_note_up;
HXDLIN( 675)									int state = 1;
HXDLIN( 675)									int _g = 0;
HXDLIN( 675)									while((_g < copyKeys5->length)){
HXLINE( 675)										int key = copyKeys5->__get(_g);
HXDLIN( 675)										_g = (_g + 1);
HXDLIN( 675)										if ((key != -1)) {
HXLINE( 675)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 675)								{
HXLINE( 675)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_upP;
HXDLIN( 675)									int state1 = 2;
HXDLIN( 675)									int _g1 = 0;
HXDLIN( 675)									while((_g1 < copyKeys5->length)){
HXLINE( 675)										int key = copyKeys5->__get(_g1);
HXDLIN( 675)										_g1 = (_g1 + 1);
HXDLIN( 675)										if ((key != -1)) {
HXLINE( 675)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 675)								{
HXLINE( 675)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_upR;
HXDLIN( 675)									int state2 = -1;
HXDLIN( 675)									int _g2 = 0;
HXDLIN( 675)									while((_g2 < copyKeys5->length)){
HXLINE( 675)										int key = copyKeys5->__get(_g2);
HXDLIN( 675)										_g2 = (_g2 + 1);
HXDLIN( 675)										if ((key != -1)) {
HXLINE( 675)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)5: {
HXLINE( 675)								{
HXLINE( 675)									 ::flixel::input::actions::FlxActionDigital action = this->_note_left;
HXDLIN( 675)									int state = 1;
HXDLIN( 675)									int _g = 0;
HXDLIN( 675)									while((_g < copyKeys5->length)){
HXLINE( 675)										int key = copyKeys5->__get(_g);
HXDLIN( 675)										_g = (_g + 1);
HXDLIN( 675)										if ((key != -1)) {
HXLINE( 675)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 675)								{
HXLINE( 675)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_leftP;
HXDLIN( 675)									int state1 = 2;
HXDLIN( 675)									int _g1 = 0;
HXDLIN( 675)									while((_g1 < copyKeys5->length)){
HXLINE( 675)										int key = copyKeys5->__get(_g1);
HXDLIN( 675)										_g1 = (_g1 + 1);
HXDLIN( 675)										if ((key != -1)) {
HXLINE( 675)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 675)								{
HXLINE( 675)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_leftR;
HXDLIN( 675)									int state2 = -1;
HXDLIN( 675)									int _g2 = 0;
HXDLIN( 675)									while((_g2 < copyKeys5->length)){
HXLINE( 675)										int key = copyKeys5->__get(_g2);
HXDLIN( 675)										_g2 = (_g2 + 1);
HXDLIN( 675)										if ((key != -1)) {
HXLINE( 675)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)6: {
HXLINE( 675)								{
HXLINE( 675)									 ::flixel::input::actions::FlxActionDigital action = this->_note_right;
HXDLIN( 675)									int state = 1;
HXDLIN( 675)									int _g = 0;
HXDLIN( 675)									while((_g < copyKeys5->length)){
HXLINE( 675)										int key = copyKeys5->__get(_g);
HXDLIN( 675)										_g = (_g + 1);
HXDLIN( 675)										if ((key != -1)) {
HXLINE( 675)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 675)								{
HXLINE( 675)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_rightP;
HXDLIN( 675)									int state1 = 2;
HXDLIN( 675)									int _g1 = 0;
HXDLIN( 675)									while((_g1 < copyKeys5->length)){
HXLINE( 675)										int key = copyKeys5->__get(_g1);
HXDLIN( 675)										_g1 = (_g1 + 1);
HXDLIN( 675)										if ((key != -1)) {
HXLINE( 675)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 675)								{
HXLINE( 675)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_rightR;
HXDLIN( 675)									int state2 = -1;
HXDLIN( 675)									int _g2 = 0;
HXDLIN( 675)									while((_g2 < copyKeys5->length)){
HXLINE( 675)										int key = copyKeys5->__get(_g2);
HXDLIN( 675)										_g2 = (_g2 + 1);
HXDLIN( 675)										if ((key != -1)) {
HXLINE( 675)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)7: {
HXLINE( 675)								{
HXLINE( 675)									 ::flixel::input::actions::FlxActionDigital action = this->_note_down;
HXDLIN( 675)									int state = 1;
HXDLIN( 675)									int _g = 0;
HXDLIN( 675)									while((_g < copyKeys5->length)){
HXLINE( 675)										int key = copyKeys5->__get(_g);
HXDLIN( 675)										_g = (_g + 1);
HXDLIN( 675)										if ((key != -1)) {
HXLINE( 675)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 675)								{
HXLINE( 675)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_downP;
HXDLIN( 675)									int state1 = 2;
HXDLIN( 675)									int _g1 = 0;
HXDLIN( 675)									while((_g1 < copyKeys5->length)){
HXLINE( 675)										int key = copyKeys5->__get(_g1);
HXDLIN( 675)										_g1 = (_g1 + 1);
HXDLIN( 675)										if ((key != -1)) {
HXLINE( 675)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 675)								{
HXLINE( 675)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_downR;
HXDLIN( 675)									int state2 = -1;
HXDLIN( 675)									int _g2 = 0;
HXDLIN( 675)									while((_g2 < copyKeys5->length)){
HXLINE( 675)										int key = copyKeys5->__get(_g2);
HXDLIN( 675)										_g2 = (_g2 + 1);
HXDLIN( 675)										if ((key != -1)) {
HXLINE( 675)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)8: {
HXLINE( 675)								 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 675)								int state = 2;
HXDLIN( 675)								int _g = 0;
HXDLIN( 675)								while((_g < copyKeys5->length)){
HXLINE( 675)									int key = copyKeys5->__get(_g);
HXDLIN( 675)									_g = (_g + 1);
HXDLIN( 675)									if ((key != -1)) {
HXLINE( 675)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)9: {
HXLINE( 675)								 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 675)								int state = 2;
HXDLIN( 675)								int _g = 0;
HXDLIN( 675)								while((_g < copyKeys5->length)){
HXLINE( 675)									int key = copyKeys5->__get(_g);
HXDLIN( 675)									_g = (_g + 1);
HXDLIN( 675)									if ((key != -1)) {
HXLINE( 675)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)10: {
HXLINE( 675)								 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 675)								int state = 2;
HXDLIN( 675)								int _g = 0;
HXDLIN( 675)								while((_g < copyKeys5->length)){
HXLINE( 675)									int key = copyKeys5->__get(_g);
HXDLIN( 675)									_g = (_g + 1);
HXDLIN( 675)									if ((key != -1)) {
HXLINE( 675)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)11: {
HXLINE( 675)								 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 675)								int state = 2;
HXDLIN( 675)								int _g = 0;
HXDLIN( 675)								while((_g < copyKeys5->length)){
HXLINE( 675)									int key = copyKeys5->__get(_g);
HXDLIN( 675)									_g = (_g + 1);
HXDLIN( 675)									if ((key != -1)) {
HXLINE( 675)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            						}
            					}
HXLINE( 676)					{
HXLINE( 676)						::Array< int > copyKeys6 = ::Array_obj< int >::fromData( _hx_array_data_116e4296_1138,1)->copy();
HXDLIN( 676)						{
HXLINE( 676)							int _g12 = 0;
HXDLIN( 676)							int _g13 = copyKeys6->length;
HXDLIN( 676)							while((_g12 < _g13)){
HXLINE( 676)								_g12 = (_g12 + 1);
HXDLIN( 676)								int i = (_g12 - 1);
HXDLIN( 676)								if ((i == -1)) {
HXLINE( 676)									copyKeys6->remove(i);
            								}
            							}
            						}
HXDLIN( 676)						switch((int)(::Control_obj::NOTE_LEFT_dyn()->_hx_getIndex())){
            							case (int)0: {
HXLINE( 676)								{
HXLINE( 676)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_up;
HXDLIN( 676)									int state = 1;
HXDLIN( 676)									int _g = 0;
HXDLIN( 676)									while((_g < copyKeys6->length)){
HXLINE( 676)										int key = copyKeys6->__get(_g);
HXDLIN( 676)										_g = (_g + 1);
HXDLIN( 676)										if ((key != -1)) {
HXLINE( 676)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 676)								{
HXLINE( 676)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_upP;
HXDLIN( 676)									int state1 = 2;
HXDLIN( 676)									int _g1 = 0;
HXDLIN( 676)									while((_g1 < copyKeys6->length)){
HXLINE( 676)										int key = copyKeys6->__get(_g1);
HXDLIN( 676)										_g1 = (_g1 + 1);
HXDLIN( 676)										if ((key != -1)) {
HXLINE( 676)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 676)								{
HXLINE( 676)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_upR;
HXDLIN( 676)									int state2 = -1;
HXDLIN( 676)									int _g2 = 0;
HXDLIN( 676)									while((_g2 < copyKeys6->length)){
HXLINE( 676)										int key = copyKeys6->__get(_g2);
HXDLIN( 676)										_g2 = (_g2 + 1);
HXDLIN( 676)										if ((key != -1)) {
HXLINE( 676)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)1: {
HXLINE( 676)								{
HXLINE( 676)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_left;
HXDLIN( 676)									int state = 1;
HXDLIN( 676)									int _g = 0;
HXDLIN( 676)									while((_g < copyKeys6->length)){
HXLINE( 676)										int key = copyKeys6->__get(_g);
HXDLIN( 676)										_g = (_g + 1);
HXDLIN( 676)										if ((key != -1)) {
HXLINE( 676)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 676)								{
HXLINE( 676)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_leftP;
HXDLIN( 676)									int state1 = 2;
HXDLIN( 676)									int _g1 = 0;
HXDLIN( 676)									while((_g1 < copyKeys6->length)){
HXLINE( 676)										int key = copyKeys6->__get(_g1);
HXDLIN( 676)										_g1 = (_g1 + 1);
HXDLIN( 676)										if ((key != -1)) {
HXLINE( 676)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 676)								{
HXLINE( 676)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_leftR;
HXDLIN( 676)									int state2 = -1;
HXDLIN( 676)									int _g2 = 0;
HXDLIN( 676)									while((_g2 < copyKeys6->length)){
HXLINE( 676)										int key = copyKeys6->__get(_g2);
HXDLIN( 676)										_g2 = (_g2 + 1);
HXDLIN( 676)										if ((key != -1)) {
HXLINE( 676)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)2: {
HXLINE( 676)								{
HXLINE( 676)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_right;
HXDLIN( 676)									int state = 1;
HXDLIN( 676)									int _g = 0;
HXDLIN( 676)									while((_g < copyKeys6->length)){
HXLINE( 676)										int key = copyKeys6->__get(_g);
HXDLIN( 676)										_g = (_g + 1);
HXDLIN( 676)										if ((key != -1)) {
HXLINE( 676)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 676)								{
HXLINE( 676)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_rightP;
HXDLIN( 676)									int state1 = 2;
HXDLIN( 676)									int _g1 = 0;
HXDLIN( 676)									while((_g1 < copyKeys6->length)){
HXLINE( 676)										int key = copyKeys6->__get(_g1);
HXDLIN( 676)										_g1 = (_g1 + 1);
HXDLIN( 676)										if ((key != -1)) {
HXLINE( 676)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 676)								{
HXLINE( 676)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_rightR;
HXDLIN( 676)									int state2 = -1;
HXDLIN( 676)									int _g2 = 0;
HXDLIN( 676)									while((_g2 < copyKeys6->length)){
HXLINE( 676)										int key = copyKeys6->__get(_g2);
HXDLIN( 676)										_g2 = (_g2 + 1);
HXDLIN( 676)										if ((key != -1)) {
HXLINE( 676)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)3: {
HXLINE( 676)								{
HXLINE( 676)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_down;
HXDLIN( 676)									int state = 1;
HXDLIN( 676)									int _g = 0;
HXDLIN( 676)									while((_g < copyKeys6->length)){
HXLINE( 676)										int key = copyKeys6->__get(_g);
HXDLIN( 676)										_g = (_g + 1);
HXDLIN( 676)										if ((key != -1)) {
HXLINE( 676)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 676)								{
HXLINE( 676)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_downP;
HXDLIN( 676)									int state1 = 2;
HXDLIN( 676)									int _g1 = 0;
HXDLIN( 676)									while((_g1 < copyKeys6->length)){
HXLINE( 676)										int key = copyKeys6->__get(_g1);
HXDLIN( 676)										_g1 = (_g1 + 1);
HXDLIN( 676)										if ((key != -1)) {
HXLINE( 676)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 676)								{
HXLINE( 676)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_downR;
HXDLIN( 676)									int state2 = -1;
HXDLIN( 676)									int _g2 = 0;
HXDLIN( 676)									while((_g2 < copyKeys6->length)){
HXLINE( 676)										int key = copyKeys6->__get(_g2);
HXDLIN( 676)										_g2 = (_g2 + 1);
HXDLIN( 676)										if ((key != -1)) {
HXLINE( 676)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)4: {
HXLINE( 676)								{
HXLINE( 676)									 ::flixel::input::actions::FlxActionDigital action = this->_note_up;
HXDLIN( 676)									int state = 1;
HXDLIN( 676)									int _g = 0;
HXDLIN( 676)									while((_g < copyKeys6->length)){
HXLINE( 676)										int key = copyKeys6->__get(_g);
HXDLIN( 676)										_g = (_g + 1);
HXDLIN( 676)										if ((key != -1)) {
HXLINE( 676)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 676)								{
HXLINE( 676)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_upP;
HXDLIN( 676)									int state1 = 2;
HXDLIN( 676)									int _g1 = 0;
HXDLIN( 676)									while((_g1 < copyKeys6->length)){
HXLINE( 676)										int key = copyKeys6->__get(_g1);
HXDLIN( 676)										_g1 = (_g1 + 1);
HXDLIN( 676)										if ((key != -1)) {
HXLINE( 676)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 676)								{
HXLINE( 676)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_upR;
HXDLIN( 676)									int state2 = -1;
HXDLIN( 676)									int _g2 = 0;
HXDLIN( 676)									while((_g2 < copyKeys6->length)){
HXLINE( 676)										int key = copyKeys6->__get(_g2);
HXDLIN( 676)										_g2 = (_g2 + 1);
HXDLIN( 676)										if ((key != -1)) {
HXLINE( 676)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)5: {
HXLINE( 676)								{
HXLINE( 676)									 ::flixel::input::actions::FlxActionDigital action = this->_note_left;
HXDLIN( 676)									int state = 1;
HXDLIN( 676)									int _g = 0;
HXDLIN( 676)									while((_g < copyKeys6->length)){
HXLINE( 676)										int key = copyKeys6->__get(_g);
HXDLIN( 676)										_g = (_g + 1);
HXDLIN( 676)										if ((key != -1)) {
HXLINE( 676)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 676)								{
HXLINE( 676)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_leftP;
HXDLIN( 676)									int state1 = 2;
HXDLIN( 676)									int _g1 = 0;
HXDLIN( 676)									while((_g1 < copyKeys6->length)){
HXLINE( 676)										int key = copyKeys6->__get(_g1);
HXDLIN( 676)										_g1 = (_g1 + 1);
HXDLIN( 676)										if ((key != -1)) {
HXLINE( 676)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 676)								{
HXLINE( 676)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_leftR;
HXDLIN( 676)									int state2 = -1;
HXDLIN( 676)									int _g2 = 0;
HXDLIN( 676)									while((_g2 < copyKeys6->length)){
HXLINE( 676)										int key = copyKeys6->__get(_g2);
HXDLIN( 676)										_g2 = (_g2 + 1);
HXDLIN( 676)										if ((key != -1)) {
HXLINE( 676)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)6: {
HXLINE( 676)								{
HXLINE( 676)									 ::flixel::input::actions::FlxActionDigital action = this->_note_right;
HXDLIN( 676)									int state = 1;
HXDLIN( 676)									int _g = 0;
HXDLIN( 676)									while((_g < copyKeys6->length)){
HXLINE( 676)										int key = copyKeys6->__get(_g);
HXDLIN( 676)										_g = (_g + 1);
HXDLIN( 676)										if ((key != -1)) {
HXLINE( 676)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 676)								{
HXLINE( 676)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_rightP;
HXDLIN( 676)									int state1 = 2;
HXDLIN( 676)									int _g1 = 0;
HXDLIN( 676)									while((_g1 < copyKeys6->length)){
HXLINE( 676)										int key = copyKeys6->__get(_g1);
HXDLIN( 676)										_g1 = (_g1 + 1);
HXDLIN( 676)										if ((key != -1)) {
HXLINE( 676)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 676)								{
HXLINE( 676)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_rightR;
HXDLIN( 676)									int state2 = -1;
HXDLIN( 676)									int _g2 = 0;
HXDLIN( 676)									while((_g2 < copyKeys6->length)){
HXLINE( 676)										int key = copyKeys6->__get(_g2);
HXDLIN( 676)										_g2 = (_g2 + 1);
HXDLIN( 676)										if ((key != -1)) {
HXLINE( 676)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)7: {
HXLINE( 676)								{
HXLINE( 676)									 ::flixel::input::actions::FlxActionDigital action = this->_note_down;
HXDLIN( 676)									int state = 1;
HXDLIN( 676)									int _g = 0;
HXDLIN( 676)									while((_g < copyKeys6->length)){
HXLINE( 676)										int key = copyKeys6->__get(_g);
HXDLIN( 676)										_g = (_g + 1);
HXDLIN( 676)										if ((key != -1)) {
HXLINE( 676)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 676)								{
HXLINE( 676)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_downP;
HXDLIN( 676)									int state1 = 2;
HXDLIN( 676)									int _g1 = 0;
HXDLIN( 676)									while((_g1 < copyKeys6->length)){
HXLINE( 676)										int key = copyKeys6->__get(_g1);
HXDLIN( 676)										_g1 = (_g1 + 1);
HXDLIN( 676)										if ((key != -1)) {
HXLINE( 676)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 676)								{
HXLINE( 676)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_downR;
HXDLIN( 676)									int state2 = -1;
HXDLIN( 676)									int _g2 = 0;
HXDLIN( 676)									while((_g2 < copyKeys6->length)){
HXLINE( 676)										int key = copyKeys6->__get(_g2);
HXDLIN( 676)										_g2 = (_g2 + 1);
HXDLIN( 676)										if ((key != -1)) {
HXLINE( 676)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)8: {
HXLINE( 676)								 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 676)								int state = 2;
HXDLIN( 676)								int _g = 0;
HXDLIN( 676)								while((_g < copyKeys6->length)){
HXLINE( 676)									int key = copyKeys6->__get(_g);
HXDLIN( 676)									_g = (_g + 1);
HXDLIN( 676)									if ((key != -1)) {
HXLINE( 676)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)9: {
HXLINE( 676)								 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 676)								int state = 2;
HXDLIN( 676)								int _g = 0;
HXDLIN( 676)								while((_g < copyKeys6->length)){
HXLINE( 676)									int key = copyKeys6->__get(_g);
HXDLIN( 676)									_g = (_g + 1);
HXDLIN( 676)									if ((key != -1)) {
HXLINE( 676)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)10: {
HXLINE( 676)								 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 676)								int state = 2;
HXDLIN( 676)								int _g = 0;
HXDLIN( 676)								while((_g < copyKeys6->length)){
HXLINE( 676)									int key = copyKeys6->__get(_g);
HXDLIN( 676)									_g = (_g + 1);
HXDLIN( 676)									if ((key != -1)) {
HXLINE( 676)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)11: {
HXLINE( 676)								 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 676)								int state = 2;
HXDLIN( 676)								int _g = 0;
HXDLIN( 676)								while((_g < copyKeys6->length)){
HXLINE( 676)									int key = copyKeys6->__get(_g);
HXDLIN( 676)									_g = (_g + 1);
HXDLIN( 676)									if ((key != -1)) {
HXLINE( 676)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            						}
            					}
HXLINE( 677)					{
HXLINE( 677)						::Array< int > copyKeys7 = ::Array_obj< int >::fromData( _hx_array_data_116e4296_1139,1)->copy();
HXDLIN( 677)						{
HXLINE( 677)							int _g14 = 0;
HXDLIN( 677)							int _g15 = copyKeys7->length;
HXDLIN( 677)							while((_g14 < _g15)){
HXLINE( 677)								_g14 = (_g14 + 1);
HXDLIN( 677)								int i = (_g14 - 1);
HXDLIN( 677)								if ((i == -1)) {
HXLINE( 677)									copyKeys7->remove(i);
            								}
            							}
            						}
HXDLIN( 677)						switch((int)(::Control_obj::NOTE_RIGHT_dyn()->_hx_getIndex())){
            							case (int)0: {
HXLINE( 677)								{
HXLINE( 677)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_up;
HXDLIN( 677)									int state = 1;
HXDLIN( 677)									int _g = 0;
HXDLIN( 677)									while((_g < copyKeys7->length)){
HXLINE( 677)										int key = copyKeys7->__get(_g);
HXDLIN( 677)										_g = (_g + 1);
HXDLIN( 677)										if ((key != -1)) {
HXLINE( 677)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 677)								{
HXLINE( 677)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_upP;
HXDLIN( 677)									int state1 = 2;
HXDLIN( 677)									int _g1 = 0;
HXDLIN( 677)									while((_g1 < copyKeys7->length)){
HXLINE( 677)										int key = copyKeys7->__get(_g1);
HXDLIN( 677)										_g1 = (_g1 + 1);
HXDLIN( 677)										if ((key != -1)) {
HXLINE( 677)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 677)								{
HXLINE( 677)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_upR;
HXDLIN( 677)									int state2 = -1;
HXDLIN( 677)									int _g2 = 0;
HXDLIN( 677)									while((_g2 < copyKeys7->length)){
HXLINE( 677)										int key = copyKeys7->__get(_g2);
HXDLIN( 677)										_g2 = (_g2 + 1);
HXDLIN( 677)										if ((key != -1)) {
HXLINE( 677)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)1: {
HXLINE( 677)								{
HXLINE( 677)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_left;
HXDLIN( 677)									int state = 1;
HXDLIN( 677)									int _g = 0;
HXDLIN( 677)									while((_g < copyKeys7->length)){
HXLINE( 677)										int key = copyKeys7->__get(_g);
HXDLIN( 677)										_g = (_g + 1);
HXDLIN( 677)										if ((key != -1)) {
HXLINE( 677)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 677)								{
HXLINE( 677)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_leftP;
HXDLIN( 677)									int state1 = 2;
HXDLIN( 677)									int _g1 = 0;
HXDLIN( 677)									while((_g1 < copyKeys7->length)){
HXLINE( 677)										int key = copyKeys7->__get(_g1);
HXDLIN( 677)										_g1 = (_g1 + 1);
HXDLIN( 677)										if ((key != -1)) {
HXLINE( 677)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 677)								{
HXLINE( 677)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_leftR;
HXDLIN( 677)									int state2 = -1;
HXDLIN( 677)									int _g2 = 0;
HXDLIN( 677)									while((_g2 < copyKeys7->length)){
HXLINE( 677)										int key = copyKeys7->__get(_g2);
HXDLIN( 677)										_g2 = (_g2 + 1);
HXDLIN( 677)										if ((key != -1)) {
HXLINE( 677)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)2: {
HXLINE( 677)								{
HXLINE( 677)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_right;
HXDLIN( 677)									int state = 1;
HXDLIN( 677)									int _g = 0;
HXDLIN( 677)									while((_g < copyKeys7->length)){
HXLINE( 677)										int key = copyKeys7->__get(_g);
HXDLIN( 677)										_g = (_g + 1);
HXDLIN( 677)										if ((key != -1)) {
HXLINE( 677)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 677)								{
HXLINE( 677)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_rightP;
HXDLIN( 677)									int state1 = 2;
HXDLIN( 677)									int _g1 = 0;
HXDLIN( 677)									while((_g1 < copyKeys7->length)){
HXLINE( 677)										int key = copyKeys7->__get(_g1);
HXDLIN( 677)										_g1 = (_g1 + 1);
HXDLIN( 677)										if ((key != -1)) {
HXLINE( 677)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 677)								{
HXLINE( 677)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_rightR;
HXDLIN( 677)									int state2 = -1;
HXDLIN( 677)									int _g2 = 0;
HXDLIN( 677)									while((_g2 < copyKeys7->length)){
HXLINE( 677)										int key = copyKeys7->__get(_g2);
HXDLIN( 677)										_g2 = (_g2 + 1);
HXDLIN( 677)										if ((key != -1)) {
HXLINE( 677)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)3: {
HXLINE( 677)								{
HXLINE( 677)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_down;
HXDLIN( 677)									int state = 1;
HXDLIN( 677)									int _g = 0;
HXDLIN( 677)									while((_g < copyKeys7->length)){
HXLINE( 677)										int key = copyKeys7->__get(_g);
HXDLIN( 677)										_g = (_g + 1);
HXDLIN( 677)										if ((key != -1)) {
HXLINE( 677)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 677)								{
HXLINE( 677)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_downP;
HXDLIN( 677)									int state1 = 2;
HXDLIN( 677)									int _g1 = 0;
HXDLIN( 677)									while((_g1 < copyKeys7->length)){
HXLINE( 677)										int key = copyKeys7->__get(_g1);
HXDLIN( 677)										_g1 = (_g1 + 1);
HXDLIN( 677)										if ((key != -1)) {
HXLINE( 677)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 677)								{
HXLINE( 677)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_downR;
HXDLIN( 677)									int state2 = -1;
HXDLIN( 677)									int _g2 = 0;
HXDLIN( 677)									while((_g2 < copyKeys7->length)){
HXLINE( 677)										int key = copyKeys7->__get(_g2);
HXDLIN( 677)										_g2 = (_g2 + 1);
HXDLIN( 677)										if ((key != -1)) {
HXLINE( 677)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)4: {
HXLINE( 677)								{
HXLINE( 677)									 ::flixel::input::actions::FlxActionDigital action = this->_note_up;
HXDLIN( 677)									int state = 1;
HXDLIN( 677)									int _g = 0;
HXDLIN( 677)									while((_g < copyKeys7->length)){
HXLINE( 677)										int key = copyKeys7->__get(_g);
HXDLIN( 677)										_g = (_g + 1);
HXDLIN( 677)										if ((key != -1)) {
HXLINE( 677)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 677)								{
HXLINE( 677)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_upP;
HXDLIN( 677)									int state1 = 2;
HXDLIN( 677)									int _g1 = 0;
HXDLIN( 677)									while((_g1 < copyKeys7->length)){
HXLINE( 677)										int key = copyKeys7->__get(_g1);
HXDLIN( 677)										_g1 = (_g1 + 1);
HXDLIN( 677)										if ((key != -1)) {
HXLINE( 677)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 677)								{
HXLINE( 677)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_upR;
HXDLIN( 677)									int state2 = -1;
HXDLIN( 677)									int _g2 = 0;
HXDLIN( 677)									while((_g2 < copyKeys7->length)){
HXLINE( 677)										int key = copyKeys7->__get(_g2);
HXDLIN( 677)										_g2 = (_g2 + 1);
HXDLIN( 677)										if ((key != -1)) {
HXLINE( 677)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)5: {
HXLINE( 677)								{
HXLINE( 677)									 ::flixel::input::actions::FlxActionDigital action = this->_note_left;
HXDLIN( 677)									int state = 1;
HXDLIN( 677)									int _g = 0;
HXDLIN( 677)									while((_g < copyKeys7->length)){
HXLINE( 677)										int key = copyKeys7->__get(_g);
HXDLIN( 677)										_g = (_g + 1);
HXDLIN( 677)										if ((key != -1)) {
HXLINE( 677)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 677)								{
HXLINE( 677)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_leftP;
HXDLIN( 677)									int state1 = 2;
HXDLIN( 677)									int _g1 = 0;
HXDLIN( 677)									while((_g1 < copyKeys7->length)){
HXLINE( 677)										int key = copyKeys7->__get(_g1);
HXDLIN( 677)										_g1 = (_g1 + 1);
HXDLIN( 677)										if ((key != -1)) {
HXLINE( 677)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 677)								{
HXLINE( 677)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_leftR;
HXDLIN( 677)									int state2 = -1;
HXDLIN( 677)									int _g2 = 0;
HXDLIN( 677)									while((_g2 < copyKeys7->length)){
HXLINE( 677)										int key = copyKeys7->__get(_g2);
HXDLIN( 677)										_g2 = (_g2 + 1);
HXDLIN( 677)										if ((key != -1)) {
HXLINE( 677)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)6: {
HXLINE( 677)								{
HXLINE( 677)									 ::flixel::input::actions::FlxActionDigital action = this->_note_right;
HXDLIN( 677)									int state = 1;
HXDLIN( 677)									int _g = 0;
HXDLIN( 677)									while((_g < copyKeys7->length)){
HXLINE( 677)										int key = copyKeys7->__get(_g);
HXDLIN( 677)										_g = (_g + 1);
HXDLIN( 677)										if ((key != -1)) {
HXLINE( 677)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 677)								{
HXLINE( 677)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_rightP;
HXDLIN( 677)									int state1 = 2;
HXDLIN( 677)									int _g1 = 0;
HXDLIN( 677)									while((_g1 < copyKeys7->length)){
HXLINE( 677)										int key = copyKeys7->__get(_g1);
HXDLIN( 677)										_g1 = (_g1 + 1);
HXDLIN( 677)										if ((key != -1)) {
HXLINE( 677)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 677)								{
HXLINE( 677)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_rightR;
HXDLIN( 677)									int state2 = -1;
HXDLIN( 677)									int _g2 = 0;
HXDLIN( 677)									while((_g2 < copyKeys7->length)){
HXLINE( 677)										int key = copyKeys7->__get(_g2);
HXDLIN( 677)										_g2 = (_g2 + 1);
HXDLIN( 677)										if ((key != -1)) {
HXLINE( 677)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)7: {
HXLINE( 677)								{
HXLINE( 677)									 ::flixel::input::actions::FlxActionDigital action = this->_note_down;
HXDLIN( 677)									int state = 1;
HXDLIN( 677)									int _g = 0;
HXDLIN( 677)									while((_g < copyKeys7->length)){
HXLINE( 677)										int key = copyKeys7->__get(_g);
HXDLIN( 677)										_g = (_g + 1);
HXDLIN( 677)										if ((key != -1)) {
HXLINE( 677)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 677)								{
HXLINE( 677)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_downP;
HXDLIN( 677)									int state1 = 2;
HXDLIN( 677)									int _g1 = 0;
HXDLIN( 677)									while((_g1 < copyKeys7->length)){
HXLINE( 677)										int key = copyKeys7->__get(_g1);
HXDLIN( 677)										_g1 = (_g1 + 1);
HXDLIN( 677)										if ((key != -1)) {
HXLINE( 677)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 677)								{
HXLINE( 677)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_downR;
HXDLIN( 677)									int state2 = -1;
HXDLIN( 677)									int _g2 = 0;
HXDLIN( 677)									while((_g2 < copyKeys7->length)){
HXLINE( 677)										int key = copyKeys7->__get(_g2);
HXDLIN( 677)										_g2 = (_g2 + 1);
HXDLIN( 677)										if ((key != -1)) {
HXLINE( 677)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)8: {
HXLINE( 677)								 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 677)								int state = 2;
HXDLIN( 677)								int _g = 0;
HXDLIN( 677)								while((_g < copyKeys7->length)){
HXLINE( 677)									int key = copyKeys7->__get(_g);
HXDLIN( 677)									_g = (_g + 1);
HXDLIN( 677)									if ((key != -1)) {
HXLINE( 677)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)9: {
HXLINE( 677)								 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 677)								int state = 2;
HXDLIN( 677)								int _g = 0;
HXDLIN( 677)								while((_g < copyKeys7->length)){
HXLINE( 677)									int key = copyKeys7->__get(_g);
HXDLIN( 677)									_g = (_g + 1);
HXDLIN( 677)									if ((key != -1)) {
HXLINE( 677)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)10: {
HXLINE( 677)								 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 677)								int state = 2;
HXDLIN( 677)								int _g = 0;
HXDLIN( 677)								while((_g < copyKeys7->length)){
HXLINE( 677)									int key = copyKeys7->__get(_g);
HXDLIN( 677)									_g = (_g + 1);
HXDLIN( 677)									if ((key != -1)) {
HXLINE( 677)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)11: {
HXLINE( 677)								 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 677)								int state = 2;
HXDLIN( 677)								int _g = 0;
HXDLIN( 677)								while((_g < copyKeys7->length)){
HXLINE( 677)									int key = copyKeys7->__get(_g);
HXDLIN( 677)									_g = (_g + 1);
HXDLIN( 677)									if ((key != -1)) {
HXLINE( 677)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            						}
            					}
HXLINE( 678)					{
HXLINE( 678)						::Array< int > copyKeys8 = ::Array_obj< int >::fromData( _hx_array_data_116e4296_1140,1)->copy();
HXDLIN( 678)						{
HXLINE( 678)							int _g16 = 0;
HXDLIN( 678)							int _g17 = copyKeys8->length;
HXDLIN( 678)							while((_g16 < _g17)){
HXLINE( 678)								_g16 = (_g16 + 1);
HXDLIN( 678)								int i = (_g16 - 1);
HXDLIN( 678)								if ((i == -1)) {
HXLINE( 678)									copyKeys8->remove(i);
            								}
            							}
            						}
HXDLIN( 678)						switch((int)(::Control_obj::ACCEPT_dyn()->_hx_getIndex())){
            							case (int)0: {
HXLINE( 678)								{
HXLINE( 678)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_up;
HXDLIN( 678)									int state = 1;
HXDLIN( 678)									int _g = 0;
HXDLIN( 678)									while((_g < copyKeys8->length)){
HXLINE( 678)										int key = copyKeys8->__get(_g);
HXDLIN( 678)										_g = (_g + 1);
HXDLIN( 678)										if ((key != -1)) {
HXLINE( 678)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 678)								{
HXLINE( 678)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_upP;
HXDLIN( 678)									int state1 = 2;
HXDLIN( 678)									int _g1 = 0;
HXDLIN( 678)									while((_g1 < copyKeys8->length)){
HXLINE( 678)										int key = copyKeys8->__get(_g1);
HXDLIN( 678)										_g1 = (_g1 + 1);
HXDLIN( 678)										if ((key != -1)) {
HXLINE( 678)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 678)								{
HXLINE( 678)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_upR;
HXDLIN( 678)									int state2 = -1;
HXDLIN( 678)									int _g2 = 0;
HXDLIN( 678)									while((_g2 < copyKeys8->length)){
HXLINE( 678)										int key = copyKeys8->__get(_g2);
HXDLIN( 678)										_g2 = (_g2 + 1);
HXDLIN( 678)										if ((key != -1)) {
HXLINE( 678)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)1: {
HXLINE( 678)								{
HXLINE( 678)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_left;
HXDLIN( 678)									int state = 1;
HXDLIN( 678)									int _g = 0;
HXDLIN( 678)									while((_g < copyKeys8->length)){
HXLINE( 678)										int key = copyKeys8->__get(_g);
HXDLIN( 678)										_g = (_g + 1);
HXDLIN( 678)										if ((key != -1)) {
HXLINE( 678)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 678)								{
HXLINE( 678)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_leftP;
HXDLIN( 678)									int state1 = 2;
HXDLIN( 678)									int _g1 = 0;
HXDLIN( 678)									while((_g1 < copyKeys8->length)){
HXLINE( 678)										int key = copyKeys8->__get(_g1);
HXDLIN( 678)										_g1 = (_g1 + 1);
HXDLIN( 678)										if ((key != -1)) {
HXLINE( 678)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 678)								{
HXLINE( 678)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_leftR;
HXDLIN( 678)									int state2 = -1;
HXDLIN( 678)									int _g2 = 0;
HXDLIN( 678)									while((_g2 < copyKeys8->length)){
HXLINE( 678)										int key = copyKeys8->__get(_g2);
HXDLIN( 678)										_g2 = (_g2 + 1);
HXDLIN( 678)										if ((key != -1)) {
HXLINE( 678)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)2: {
HXLINE( 678)								{
HXLINE( 678)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_right;
HXDLIN( 678)									int state = 1;
HXDLIN( 678)									int _g = 0;
HXDLIN( 678)									while((_g < copyKeys8->length)){
HXLINE( 678)										int key = copyKeys8->__get(_g);
HXDLIN( 678)										_g = (_g + 1);
HXDLIN( 678)										if ((key != -1)) {
HXLINE( 678)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 678)								{
HXLINE( 678)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_rightP;
HXDLIN( 678)									int state1 = 2;
HXDLIN( 678)									int _g1 = 0;
HXDLIN( 678)									while((_g1 < copyKeys8->length)){
HXLINE( 678)										int key = copyKeys8->__get(_g1);
HXDLIN( 678)										_g1 = (_g1 + 1);
HXDLIN( 678)										if ((key != -1)) {
HXLINE( 678)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 678)								{
HXLINE( 678)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_rightR;
HXDLIN( 678)									int state2 = -1;
HXDLIN( 678)									int _g2 = 0;
HXDLIN( 678)									while((_g2 < copyKeys8->length)){
HXLINE( 678)										int key = copyKeys8->__get(_g2);
HXDLIN( 678)										_g2 = (_g2 + 1);
HXDLIN( 678)										if ((key != -1)) {
HXLINE( 678)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)3: {
HXLINE( 678)								{
HXLINE( 678)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_down;
HXDLIN( 678)									int state = 1;
HXDLIN( 678)									int _g = 0;
HXDLIN( 678)									while((_g < copyKeys8->length)){
HXLINE( 678)										int key = copyKeys8->__get(_g);
HXDLIN( 678)										_g = (_g + 1);
HXDLIN( 678)										if ((key != -1)) {
HXLINE( 678)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 678)								{
HXLINE( 678)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_downP;
HXDLIN( 678)									int state1 = 2;
HXDLIN( 678)									int _g1 = 0;
HXDLIN( 678)									while((_g1 < copyKeys8->length)){
HXLINE( 678)										int key = copyKeys8->__get(_g1);
HXDLIN( 678)										_g1 = (_g1 + 1);
HXDLIN( 678)										if ((key != -1)) {
HXLINE( 678)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 678)								{
HXLINE( 678)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_downR;
HXDLIN( 678)									int state2 = -1;
HXDLIN( 678)									int _g2 = 0;
HXDLIN( 678)									while((_g2 < copyKeys8->length)){
HXLINE( 678)										int key = copyKeys8->__get(_g2);
HXDLIN( 678)										_g2 = (_g2 + 1);
HXDLIN( 678)										if ((key != -1)) {
HXLINE( 678)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)4: {
HXLINE( 678)								{
HXLINE( 678)									 ::flixel::input::actions::FlxActionDigital action = this->_note_up;
HXDLIN( 678)									int state = 1;
HXDLIN( 678)									int _g = 0;
HXDLIN( 678)									while((_g < copyKeys8->length)){
HXLINE( 678)										int key = copyKeys8->__get(_g);
HXDLIN( 678)										_g = (_g + 1);
HXDLIN( 678)										if ((key != -1)) {
HXLINE( 678)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 678)								{
HXLINE( 678)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_upP;
HXDLIN( 678)									int state1 = 2;
HXDLIN( 678)									int _g1 = 0;
HXDLIN( 678)									while((_g1 < copyKeys8->length)){
HXLINE( 678)										int key = copyKeys8->__get(_g1);
HXDLIN( 678)										_g1 = (_g1 + 1);
HXDLIN( 678)										if ((key != -1)) {
HXLINE( 678)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 678)								{
HXLINE( 678)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_upR;
HXDLIN( 678)									int state2 = -1;
HXDLIN( 678)									int _g2 = 0;
HXDLIN( 678)									while((_g2 < copyKeys8->length)){
HXLINE( 678)										int key = copyKeys8->__get(_g2);
HXDLIN( 678)										_g2 = (_g2 + 1);
HXDLIN( 678)										if ((key != -1)) {
HXLINE( 678)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)5: {
HXLINE( 678)								{
HXLINE( 678)									 ::flixel::input::actions::FlxActionDigital action = this->_note_left;
HXDLIN( 678)									int state = 1;
HXDLIN( 678)									int _g = 0;
HXDLIN( 678)									while((_g < copyKeys8->length)){
HXLINE( 678)										int key = copyKeys8->__get(_g);
HXDLIN( 678)										_g = (_g + 1);
HXDLIN( 678)										if ((key != -1)) {
HXLINE( 678)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 678)								{
HXLINE( 678)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_leftP;
HXDLIN( 678)									int state1 = 2;
HXDLIN( 678)									int _g1 = 0;
HXDLIN( 678)									while((_g1 < copyKeys8->length)){
HXLINE( 678)										int key = copyKeys8->__get(_g1);
HXDLIN( 678)										_g1 = (_g1 + 1);
HXDLIN( 678)										if ((key != -1)) {
HXLINE( 678)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 678)								{
HXLINE( 678)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_leftR;
HXDLIN( 678)									int state2 = -1;
HXDLIN( 678)									int _g2 = 0;
HXDLIN( 678)									while((_g2 < copyKeys8->length)){
HXLINE( 678)										int key = copyKeys8->__get(_g2);
HXDLIN( 678)										_g2 = (_g2 + 1);
HXDLIN( 678)										if ((key != -1)) {
HXLINE( 678)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)6: {
HXLINE( 678)								{
HXLINE( 678)									 ::flixel::input::actions::FlxActionDigital action = this->_note_right;
HXDLIN( 678)									int state = 1;
HXDLIN( 678)									int _g = 0;
HXDLIN( 678)									while((_g < copyKeys8->length)){
HXLINE( 678)										int key = copyKeys8->__get(_g);
HXDLIN( 678)										_g = (_g + 1);
HXDLIN( 678)										if ((key != -1)) {
HXLINE( 678)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 678)								{
HXLINE( 678)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_rightP;
HXDLIN( 678)									int state1 = 2;
HXDLIN( 678)									int _g1 = 0;
HXDLIN( 678)									while((_g1 < copyKeys8->length)){
HXLINE( 678)										int key = copyKeys8->__get(_g1);
HXDLIN( 678)										_g1 = (_g1 + 1);
HXDLIN( 678)										if ((key != -1)) {
HXLINE( 678)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 678)								{
HXLINE( 678)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_rightR;
HXDLIN( 678)									int state2 = -1;
HXDLIN( 678)									int _g2 = 0;
HXDLIN( 678)									while((_g2 < copyKeys8->length)){
HXLINE( 678)										int key = copyKeys8->__get(_g2);
HXDLIN( 678)										_g2 = (_g2 + 1);
HXDLIN( 678)										if ((key != -1)) {
HXLINE( 678)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)7: {
HXLINE( 678)								{
HXLINE( 678)									 ::flixel::input::actions::FlxActionDigital action = this->_note_down;
HXDLIN( 678)									int state = 1;
HXDLIN( 678)									int _g = 0;
HXDLIN( 678)									while((_g < copyKeys8->length)){
HXLINE( 678)										int key = copyKeys8->__get(_g);
HXDLIN( 678)										_g = (_g + 1);
HXDLIN( 678)										if ((key != -1)) {
HXLINE( 678)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 678)								{
HXLINE( 678)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_downP;
HXDLIN( 678)									int state1 = 2;
HXDLIN( 678)									int _g1 = 0;
HXDLIN( 678)									while((_g1 < copyKeys8->length)){
HXLINE( 678)										int key = copyKeys8->__get(_g1);
HXDLIN( 678)										_g1 = (_g1 + 1);
HXDLIN( 678)										if ((key != -1)) {
HXLINE( 678)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 678)								{
HXLINE( 678)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_downR;
HXDLIN( 678)									int state2 = -1;
HXDLIN( 678)									int _g2 = 0;
HXDLIN( 678)									while((_g2 < copyKeys8->length)){
HXLINE( 678)										int key = copyKeys8->__get(_g2);
HXDLIN( 678)										_g2 = (_g2 + 1);
HXDLIN( 678)										if ((key != -1)) {
HXLINE( 678)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)8: {
HXLINE( 678)								 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 678)								int state = 2;
HXDLIN( 678)								int _g = 0;
HXDLIN( 678)								while((_g < copyKeys8->length)){
HXLINE( 678)									int key = copyKeys8->__get(_g);
HXDLIN( 678)									_g = (_g + 1);
HXDLIN( 678)									if ((key != -1)) {
HXLINE( 678)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)9: {
HXLINE( 678)								 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 678)								int state = 2;
HXDLIN( 678)								int _g = 0;
HXDLIN( 678)								while((_g < copyKeys8->length)){
HXLINE( 678)									int key = copyKeys8->__get(_g);
HXDLIN( 678)									_g = (_g + 1);
HXDLIN( 678)									if ((key != -1)) {
HXLINE( 678)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)10: {
HXLINE( 678)								 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 678)								int state = 2;
HXDLIN( 678)								int _g = 0;
HXDLIN( 678)								while((_g < copyKeys8->length)){
HXLINE( 678)									int key = copyKeys8->__get(_g);
HXDLIN( 678)									_g = (_g + 1);
HXDLIN( 678)									if ((key != -1)) {
HXLINE( 678)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)11: {
HXLINE( 678)								 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 678)								int state = 2;
HXDLIN( 678)								int _g = 0;
HXDLIN( 678)								while((_g < copyKeys8->length)){
HXLINE( 678)									int key = copyKeys8->__get(_g);
HXDLIN( 678)									_g = (_g + 1);
HXDLIN( 678)									if ((key != -1)) {
HXLINE( 678)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            						}
            					}
HXLINE( 679)					{
HXLINE( 679)						::Array< int > copyKeys9 = ::Array_obj< int >::fromData( _hx_array_data_116e4296_1141,1)->copy();
HXDLIN( 679)						{
HXLINE( 679)							int _g18 = 0;
HXDLIN( 679)							int _g19 = copyKeys9->length;
HXDLIN( 679)							while((_g18 < _g19)){
HXLINE( 679)								_g18 = (_g18 + 1);
HXDLIN( 679)								int i = (_g18 - 1);
HXDLIN( 679)								if ((i == -1)) {
HXLINE( 679)									copyKeys9->remove(i);
            								}
            							}
            						}
HXDLIN( 679)						switch((int)(::Control_obj::BACK_dyn()->_hx_getIndex())){
            							case (int)0: {
HXLINE( 679)								{
HXLINE( 679)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_up;
HXDLIN( 679)									int state = 1;
HXDLIN( 679)									int _g = 0;
HXDLIN( 679)									while((_g < copyKeys9->length)){
HXLINE( 679)										int key = copyKeys9->__get(_g);
HXDLIN( 679)										_g = (_g + 1);
HXDLIN( 679)										if ((key != -1)) {
HXLINE( 679)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 679)								{
HXLINE( 679)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_upP;
HXDLIN( 679)									int state1 = 2;
HXDLIN( 679)									int _g1 = 0;
HXDLIN( 679)									while((_g1 < copyKeys9->length)){
HXLINE( 679)										int key = copyKeys9->__get(_g1);
HXDLIN( 679)										_g1 = (_g1 + 1);
HXDLIN( 679)										if ((key != -1)) {
HXLINE( 679)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 679)								{
HXLINE( 679)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_upR;
HXDLIN( 679)									int state2 = -1;
HXDLIN( 679)									int _g2 = 0;
HXDLIN( 679)									while((_g2 < copyKeys9->length)){
HXLINE( 679)										int key = copyKeys9->__get(_g2);
HXDLIN( 679)										_g2 = (_g2 + 1);
HXDLIN( 679)										if ((key != -1)) {
HXLINE( 679)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)1: {
HXLINE( 679)								{
HXLINE( 679)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_left;
HXDLIN( 679)									int state = 1;
HXDLIN( 679)									int _g = 0;
HXDLIN( 679)									while((_g < copyKeys9->length)){
HXLINE( 679)										int key = copyKeys9->__get(_g);
HXDLIN( 679)										_g = (_g + 1);
HXDLIN( 679)										if ((key != -1)) {
HXLINE( 679)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 679)								{
HXLINE( 679)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_leftP;
HXDLIN( 679)									int state1 = 2;
HXDLIN( 679)									int _g1 = 0;
HXDLIN( 679)									while((_g1 < copyKeys9->length)){
HXLINE( 679)										int key = copyKeys9->__get(_g1);
HXDLIN( 679)										_g1 = (_g1 + 1);
HXDLIN( 679)										if ((key != -1)) {
HXLINE( 679)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 679)								{
HXLINE( 679)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_leftR;
HXDLIN( 679)									int state2 = -1;
HXDLIN( 679)									int _g2 = 0;
HXDLIN( 679)									while((_g2 < copyKeys9->length)){
HXLINE( 679)										int key = copyKeys9->__get(_g2);
HXDLIN( 679)										_g2 = (_g2 + 1);
HXDLIN( 679)										if ((key != -1)) {
HXLINE( 679)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)2: {
HXLINE( 679)								{
HXLINE( 679)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_right;
HXDLIN( 679)									int state = 1;
HXDLIN( 679)									int _g = 0;
HXDLIN( 679)									while((_g < copyKeys9->length)){
HXLINE( 679)										int key = copyKeys9->__get(_g);
HXDLIN( 679)										_g = (_g + 1);
HXDLIN( 679)										if ((key != -1)) {
HXLINE( 679)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 679)								{
HXLINE( 679)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_rightP;
HXDLIN( 679)									int state1 = 2;
HXDLIN( 679)									int _g1 = 0;
HXDLIN( 679)									while((_g1 < copyKeys9->length)){
HXLINE( 679)										int key = copyKeys9->__get(_g1);
HXDLIN( 679)										_g1 = (_g1 + 1);
HXDLIN( 679)										if ((key != -1)) {
HXLINE( 679)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 679)								{
HXLINE( 679)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_rightR;
HXDLIN( 679)									int state2 = -1;
HXDLIN( 679)									int _g2 = 0;
HXDLIN( 679)									while((_g2 < copyKeys9->length)){
HXLINE( 679)										int key = copyKeys9->__get(_g2);
HXDLIN( 679)										_g2 = (_g2 + 1);
HXDLIN( 679)										if ((key != -1)) {
HXLINE( 679)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)3: {
HXLINE( 679)								{
HXLINE( 679)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_down;
HXDLIN( 679)									int state = 1;
HXDLIN( 679)									int _g = 0;
HXDLIN( 679)									while((_g < copyKeys9->length)){
HXLINE( 679)										int key = copyKeys9->__get(_g);
HXDLIN( 679)										_g = (_g + 1);
HXDLIN( 679)										if ((key != -1)) {
HXLINE( 679)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 679)								{
HXLINE( 679)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_downP;
HXDLIN( 679)									int state1 = 2;
HXDLIN( 679)									int _g1 = 0;
HXDLIN( 679)									while((_g1 < copyKeys9->length)){
HXLINE( 679)										int key = copyKeys9->__get(_g1);
HXDLIN( 679)										_g1 = (_g1 + 1);
HXDLIN( 679)										if ((key != -1)) {
HXLINE( 679)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 679)								{
HXLINE( 679)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_downR;
HXDLIN( 679)									int state2 = -1;
HXDLIN( 679)									int _g2 = 0;
HXDLIN( 679)									while((_g2 < copyKeys9->length)){
HXLINE( 679)										int key = copyKeys9->__get(_g2);
HXDLIN( 679)										_g2 = (_g2 + 1);
HXDLIN( 679)										if ((key != -1)) {
HXLINE( 679)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)4: {
HXLINE( 679)								{
HXLINE( 679)									 ::flixel::input::actions::FlxActionDigital action = this->_note_up;
HXDLIN( 679)									int state = 1;
HXDLIN( 679)									int _g = 0;
HXDLIN( 679)									while((_g < copyKeys9->length)){
HXLINE( 679)										int key = copyKeys9->__get(_g);
HXDLIN( 679)										_g = (_g + 1);
HXDLIN( 679)										if ((key != -1)) {
HXLINE( 679)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 679)								{
HXLINE( 679)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_upP;
HXDLIN( 679)									int state1 = 2;
HXDLIN( 679)									int _g1 = 0;
HXDLIN( 679)									while((_g1 < copyKeys9->length)){
HXLINE( 679)										int key = copyKeys9->__get(_g1);
HXDLIN( 679)										_g1 = (_g1 + 1);
HXDLIN( 679)										if ((key != -1)) {
HXLINE( 679)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 679)								{
HXLINE( 679)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_upR;
HXDLIN( 679)									int state2 = -1;
HXDLIN( 679)									int _g2 = 0;
HXDLIN( 679)									while((_g2 < copyKeys9->length)){
HXLINE( 679)										int key = copyKeys9->__get(_g2);
HXDLIN( 679)										_g2 = (_g2 + 1);
HXDLIN( 679)										if ((key != -1)) {
HXLINE( 679)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)5: {
HXLINE( 679)								{
HXLINE( 679)									 ::flixel::input::actions::FlxActionDigital action = this->_note_left;
HXDLIN( 679)									int state = 1;
HXDLIN( 679)									int _g = 0;
HXDLIN( 679)									while((_g < copyKeys9->length)){
HXLINE( 679)										int key = copyKeys9->__get(_g);
HXDLIN( 679)										_g = (_g + 1);
HXDLIN( 679)										if ((key != -1)) {
HXLINE( 679)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 679)								{
HXLINE( 679)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_leftP;
HXDLIN( 679)									int state1 = 2;
HXDLIN( 679)									int _g1 = 0;
HXDLIN( 679)									while((_g1 < copyKeys9->length)){
HXLINE( 679)										int key = copyKeys9->__get(_g1);
HXDLIN( 679)										_g1 = (_g1 + 1);
HXDLIN( 679)										if ((key != -1)) {
HXLINE( 679)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 679)								{
HXLINE( 679)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_leftR;
HXDLIN( 679)									int state2 = -1;
HXDLIN( 679)									int _g2 = 0;
HXDLIN( 679)									while((_g2 < copyKeys9->length)){
HXLINE( 679)										int key = copyKeys9->__get(_g2);
HXDLIN( 679)										_g2 = (_g2 + 1);
HXDLIN( 679)										if ((key != -1)) {
HXLINE( 679)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)6: {
HXLINE( 679)								{
HXLINE( 679)									 ::flixel::input::actions::FlxActionDigital action = this->_note_right;
HXDLIN( 679)									int state = 1;
HXDLIN( 679)									int _g = 0;
HXDLIN( 679)									while((_g < copyKeys9->length)){
HXLINE( 679)										int key = copyKeys9->__get(_g);
HXDLIN( 679)										_g = (_g + 1);
HXDLIN( 679)										if ((key != -1)) {
HXLINE( 679)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 679)								{
HXLINE( 679)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_rightP;
HXDLIN( 679)									int state1 = 2;
HXDLIN( 679)									int _g1 = 0;
HXDLIN( 679)									while((_g1 < copyKeys9->length)){
HXLINE( 679)										int key = copyKeys9->__get(_g1);
HXDLIN( 679)										_g1 = (_g1 + 1);
HXDLIN( 679)										if ((key != -1)) {
HXLINE( 679)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 679)								{
HXLINE( 679)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_rightR;
HXDLIN( 679)									int state2 = -1;
HXDLIN( 679)									int _g2 = 0;
HXDLIN( 679)									while((_g2 < copyKeys9->length)){
HXLINE( 679)										int key = copyKeys9->__get(_g2);
HXDLIN( 679)										_g2 = (_g2 + 1);
HXDLIN( 679)										if ((key != -1)) {
HXLINE( 679)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)7: {
HXLINE( 679)								{
HXLINE( 679)									 ::flixel::input::actions::FlxActionDigital action = this->_note_down;
HXDLIN( 679)									int state = 1;
HXDLIN( 679)									int _g = 0;
HXDLIN( 679)									while((_g < copyKeys9->length)){
HXLINE( 679)										int key = copyKeys9->__get(_g);
HXDLIN( 679)										_g = (_g + 1);
HXDLIN( 679)										if ((key != -1)) {
HXLINE( 679)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 679)								{
HXLINE( 679)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_downP;
HXDLIN( 679)									int state1 = 2;
HXDLIN( 679)									int _g1 = 0;
HXDLIN( 679)									while((_g1 < copyKeys9->length)){
HXLINE( 679)										int key = copyKeys9->__get(_g1);
HXDLIN( 679)										_g1 = (_g1 + 1);
HXDLIN( 679)										if ((key != -1)) {
HXLINE( 679)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 679)								{
HXLINE( 679)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_downR;
HXDLIN( 679)									int state2 = -1;
HXDLIN( 679)									int _g2 = 0;
HXDLIN( 679)									while((_g2 < copyKeys9->length)){
HXLINE( 679)										int key = copyKeys9->__get(_g2);
HXDLIN( 679)										_g2 = (_g2 + 1);
HXDLIN( 679)										if ((key != -1)) {
HXLINE( 679)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)8: {
HXLINE( 679)								 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 679)								int state = 2;
HXDLIN( 679)								int _g = 0;
HXDLIN( 679)								while((_g < copyKeys9->length)){
HXLINE( 679)									int key = copyKeys9->__get(_g);
HXDLIN( 679)									_g = (_g + 1);
HXDLIN( 679)									if ((key != -1)) {
HXLINE( 679)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)9: {
HXLINE( 679)								 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 679)								int state = 2;
HXDLIN( 679)								int _g = 0;
HXDLIN( 679)								while((_g < copyKeys9->length)){
HXLINE( 679)									int key = copyKeys9->__get(_g);
HXDLIN( 679)									_g = (_g + 1);
HXDLIN( 679)									if ((key != -1)) {
HXLINE( 679)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)10: {
HXLINE( 679)								 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 679)								int state = 2;
HXDLIN( 679)								int _g = 0;
HXDLIN( 679)								while((_g < copyKeys9->length)){
HXLINE( 679)									int key = copyKeys9->__get(_g);
HXDLIN( 679)									_g = (_g + 1);
HXDLIN( 679)									if ((key != -1)) {
HXLINE( 679)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)11: {
HXLINE( 679)								 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 679)								int state = 2;
HXDLIN( 679)								int _g = 0;
HXDLIN( 679)								while((_g < copyKeys9->length)){
HXLINE( 679)									int key = copyKeys9->__get(_g);
HXDLIN( 679)									_g = (_g + 1);
HXDLIN( 679)									if ((key != -1)) {
HXLINE( 679)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            						}
            					}
HXLINE( 680)					{
HXLINE( 680)						::Array< int > copyKeys10 = ::Array_obj< int >::fromData( _hx_array_data_116e4296_1142,1)->copy();
HXDLIN( 680)						{
HXLINE( 680)							int _g20 = 0;
HXDLIN( 680)							int _g21 = copyKeys10->length;
HXDLIN( 680)							while((_g20 < _g21)){
HXLINE( 680)								_g20 = (_g20 + 1);
HXDLIN( 680)								int i = (_g20 - 1);
HXDLIN( 680)								if ((i == -1)) {
HXLINE( 680)									copyKeys10->remove(i);
            								}
            							}
            						}
HXDLIN( 680)						switch((int)(::Control_obj::PAUSE_dyn()->_hx_getIndex())){
            							case (int)0: {
HXLINE( 680)								{
HXLINE( 680)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_up;
HXDLIN( 680)									int state = 1;
HXDLIN( 680)									int _g = 0;
HXDLIN( 680)									while((_g < copyKeys10->length)){
HXLINE( 680)										int key = copyKeys10->__get(_g);
HXDLIN( 680)										_g = (_g + 1);
HXDLIN( 680)										if ((key != -1)) {
HXLINE( 680)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 680)								{
HXLINE( 680)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_upP;
HXDLIN( 680)									int state1 = 2;
HXDLIN( 680)									int _g1 = 0;
HXDLIN( 680)									while((_g1 < copyKeys10->length)){
HXLINE( 680)										int key = copyKeys10->__get(_g1);
HXDLIN( 680)										_g1 = (_g1 + 1);
HXDLIN( 680)										if ((key != -1)) {
HXLINE( 680)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 680)								{
HXLINE( 680)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_upR;
HXDLIN( 680)									int state2 = -1;
HXDLIN( 680)									int _g2 = 0;
HXDLIN( 680)									while((_g2 < copyKeys10->length)){
HXLINE( 680)										int key = copyKeys10->__get(_g2);
HXDLIN( 680)										_g2 = (_g2 + 1);
HXDLIN( 680)										if ((key != -1)) {
HXLINE( 680)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)1: {
HXLINE( 680)								{
HXLINE( 680)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_left;
HXDLIN( 680)									int state = 1;
HXDLIN( 680)									int _g = 0;
HXDLIN( 680)									while((_g < copyKeys10->length)){
HXLINE( 680)										int key = copyKeys10->__get(_g);
HXDLIN( 680)										_g = (_g + 1);
HXDLIN( 680)										if ((key != -1)) {
HXLINE( 680)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 680)								{
HXLINE( 680)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_leftP;
HXDLIN( 680)									int state1 = 2;
HXDLIN( 680)									int _g1 = 0;
HXDLIN( 680)									while((_g1 < copyKeys10->length)){
HXLINE( 680)										int key = copyKeys10->__get(_g1);
HXDLIN( 680)										_g1 = (_g1 + 1);
HXDLIN( 680)										if ((key != -1)) {
HXLINE( 680)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 680)								{
HXLINE( 680)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_leftR;
HXDLIN( 680)									int state2 = -1;
HXDLIN( 680)									int _g2 = 0;
HXDLIN( 680)									while((_g2 < copyKeys10->length)){
HXLINE( 680)										int key = copyKeys10->__get(_g2);
HXDLIN( 680)										_g2 = (_g2 + 1);
HXDLIN( 680)										if ((key != -1)) {
HXLINE( 680)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)2: {
HXLINE( 680)								{
HXLINE( 680)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_right;
HXDLIN( 680)									int state = 1;
HXDLIN( 680)									int _g = 0;
HXDLIN( 680)									while((_g < copyKeys10->length)){
HXLINE( 680)										int key = copyKeys10->__get(_g);
HXDLIN( 680)										_g = (_g + 1);
HXDLIN( 680)										if ((key != -1)) {
HXLINE( 680)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 680)								{
HXLINE( 680)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_rightP;
HXDLIN( 680)									int state1 = 2;
HXDLIN( 680)									int _g1 = 0;
HXDLIN( 680)									while((_g1 < copyKeys10->length)){
HXLINE( 680)										int key = copyKeys10->__get(_g1);
HXDLIN( 680)										_g1 = (_g1 + 1);
HXDLIN( 680)										if ((key != -1)) {
HXLINE( 680)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 680)								{
HXLINE( 680)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_rightR;
HXDLIN( 680)									int state2 = -1;
HXDLIN( 680)									int _g2 = 0;
HXDLIN( 680)									while((_g2 < copyKeys10->length)){
HXLINE( 680)										int key = copyKeys10->__get(_g2);
HXDLIN( 680)										_g2 = (_g2 + 1);
HXDLIN( 680)										if ((key != -1)) {
HXLINE( 680)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)3: {
HXLINE( 680)								{
HXLINE( 680)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_down;
HXDLIN( 680)									int state = 1;
HXDLIN( 680)									int _g = 0;
HXDLIN( 680)									while((_g < copyKeys10->length)){
HXLINE( 680)										int key = copyKeys10->__get(_g);
HXDLIN( 680)										_g = (_g + 1);
HXDLIN( 680)										if ((key != -1)) {
HXLINE( 680)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 680)								{
HXLINE( 680)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_downP;
HXDLIN( 680)									int state1 = 2;
HXDLIN( 680)									int _g1 = 0;
HXDLIN( 680)									while((_g1 < copyKeys10->length)){
HXLINE( 680)										int key = copyKeys10->__get(_g1);
HXDLIN( 680)										_g1 = (_g1 + 1);
HXDLIN( 680)										if ((key != -1)) {
HXLINE( 680)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 680)								{
HXLINE( 680)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_downR;
HXDLIN( 680)									int state2 = -1;
HXDLIN( 680)									int _g2 = 0;
HXDLIN( 680)									while((_g2 < copyKeys10->length)){
HXLINE( 680)										int key = copyKeys10->__get(_g2);
HXDLIN( 680)										_g2 = (_g2 + 1);
HXDLIN( 680)										if ((key != -1)) {
HXLINE( 680)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)4: {
HXLINE( 680)								{
HXLINE( 680)									 ::flixel::input::actions::FlxActionDigital action = this->_note_up;
HXDLIN( 680)									int state = 1;
HXDLIN( 680)									int _g = 0;
HXDLIN( 680)									while((_g < copyKeys10->length)){
HXLINE( 680)										int key = copyKeys10->__get(_g);
HXDLIN( 680)										_g = (_g + 1);
HXDLIN( 680)										if ((key != -1)) {
HXLINE( 680)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 680)								{
HXLINE( 680)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_upP;
HXDLIN( 680)									int state1 = 2;
HXDLIN( 680)									int _g1 = 0;
HXDLIN( 680)									while((_g1 < copyKeys10->length)){
HXLINE( 680)										int key = copyKeys10->__get(_g1);
HXDLIN( 680)										_g1 = (_g1 + 1);
HXDLIN( 680)										if ((key != -1)) {
HXLINE( 680)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 680)								{
HXLINE( 680)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_upR;
HXDLIN( 680)									int state2 = -1;
HXDLIN( 680)									int _g2 = 0;
HXDLIN( 680)									while((_g2 < copyKeys10->length)){
HXLINE( 680)										int key = copyKeys10->__get(_g2);
HXDLIN( 680)										_g2 = (_g2 + 1);
HXDLIN( 680)										if ((key != -1)) {
HXLINE( 680)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)5: {
HXLINE( 680)								{
HXLINE( 680)									 ::flixel::input::actions::FlxActionDigital action = this->_note_left;
HXDLIN( 680)									int state = 1;
HXDLIN( 680)									int _g = 0;
HXDLIN( 680)									while((_g < copyKeys10->length)){
HXLINE( 680)										int key = copyKeys10->__get(_g);
HXDLIN( 680)										_g = (_g + 1);
HXDLIN( 680)										if ((key != -1)) {
HXLINE( 680)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 680)								{
HXLINE( 680)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_leftP;
HXDLIN( 680)									int state1 = 2;
HXDLIN( 680)									int _g1 = 0;
HXDLIN( 680)									while((_g1 < copyKeys10->length)){
HXLINE( 680)										int key = copyKeys10->__get(_g1);
HXDLIN( 680)										_g1 = (_g1 + 1);
HXDLIN( 680)										if ((key != -1)) {
HXLINE( 680)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 680)								{
HXLINE( 680)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_leftR;
HXDLIN( 680)									int state2 = -1;
HXDLIN( 680)									int _g2 = 0;
HXDLIN( 680)									while((_g2 < copyKeys10->length)){
HXLINE( 680)										int key = copyKeys10->__get(_g2);
HXDLIN( 680)										_g2 = (_g2 + 1);
HXDLIN( 680)										if ((key != -1)) {
HXLINE( 680)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)6: {
HXLINE( 680)								{
HXLINE( 680)									 ::flixel::input::actions::FlxActionDigital action = this->_note_right;
HXDLIN( 680)									int state = 1;
HXDLIN( 680)									int _g = 0;
HXDLIN( 680)									while((_g < copyKeys10->length)){
HXLINE( 680)										int key = copyKeys10->__get(_g);
HXDLIN( 680)										_g = (_g + 1);
HXDLIN( 680)										if ((key != -1)) {
HXLINE( 680)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 680)								{
HXLINE( 680)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_rightP;
HXDLIN( 680)									int state1 = 2;
HXDLIN( 680)									int _g1 = 0;
HXDLIN( 680)									while((_g1 < copyKeys10->length)){
HXLINE( 680)										int key = copyKeys10->__get(_g1);
HXDLIN( 680)										_g1 = (_g1 + 1);
HXDLIN( 680)										if ((key != -1)) {
HXLINE( 680)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 680)								{
HXLINE( 680)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_rightR;
HXDLIN( 680)									int state2 = -1;
HXDLIN( 680)									int _g2 = 0;
HXDLIN( 680)									while((_g2 < copyKeys10->length)){
HXLINE( 680)										int key = copyKeys10->__get(_g2);
HXDLIN( 680)										_g2 = (_g2 + 1);
HXDLIN( 680)										if ((key != -1)) {
HXLINE( 680)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)7: {
HXLINE( 680)								{
HXLINE( 680)									 ::flixel::input::actions::FlxActionDigital action = this->_note_down;
HXDLIN( 680)									int state = 1;
HXDLIN( 680)									int _g = 0;
HXDLIN( 680)									while((_g < copyKeys10->length)){
HXLINE( 680)										int key = copyKeys10->__get(_g);
HXDLIN( 680)										_g = (_g + 1);
HXDLIN( 680)										if ((key != -1)) {
HXLINE( 680)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 680)								{
HXLINE( 680)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_downP;
HXDLIN( 680)									int state1 = 2;
HXDLIN( 680)									int _g1 = 0;
HXDLIN( 680)									while((_g1 < copyKeys10->length)){
HXLINE( 680)										int key = copyKeys10->__get(_g1);
HXDLIN( 680)										_g1 = (_g1 + 1);
HXDLIN( 680)										if ((key != -1)) {
HXLINE( 680)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 680)								{
HXLINE( 680)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_downR;
HXDLIN( 680)									int state2 = -1;
HXDLIN( 680)									int _g2 = 0;
HXDLIN( 680)									while((_g2 < copyKeys10->length)){
HXLINE( 680)										int key = copyKeys10->__get(_g2);
HXDLIN( 680)										_g2 = (_g2 + 1);
HXDLIN( 680)										if ((key != -1)) {
HXLINE( 680)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)8: {
HXLINE( 680)								 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 680)								int state = 2;
HXDLIN( 680)								int _g = 0;
HXDLIN( 680)								while((_g < copyKeys10->length)){
HXLINE( 680)									int key = copyKeys10->__get(_g);
HXDLIN( 680)									_g = (_g + 1);
HXDLIN( 680)									if ((key != -1)) {
HXLINE( 680)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)9: {
HXLINE( 680)								 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 680)								int state = 2;
HXDLIN( 680)								int _g = 0;
HXDLIN( 680)								while((_g < copyKeys10->length)){
HXLINE( 680)									int key = copyKeys10->__get(_g);
HXDLIN( 680)									_g = (_g + 1);
HXDLIN( 680)									if ((key != -1)) {
HXLINE( 680)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)10: {
HXLINE( 680)								 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 680)								int state = 2;
HXDLIN( 680)								int _g = 0;
HXDLIN( 680)								while((_g < copyKeys10->length)){
HXLINE( 680)									int key = copyKeys10->__get(_g);
HXDLIN( 680)									_g = (_g + 1);
HXDLIN( 680)									if ((key != -1)) {
HXLINE( 680)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)11: {
HXLINE( 680)								 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 680)								int state = 2;
HXDLIN( 680)								int _g = 0;
HXDLIN( 680)								while((_g < copyKeys10->length)){
HXLINE( 680)									int key = copyKeys10->__get(_g);
HXDLIN( 680)									_g = (_g + 1);
HXDLIN( 680)									if ((key != -1)) {
HXLINE( 680)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            						}
            					}
HXLINE( 681)					{
HXLINE( 681)						::Array< int > copyKeys11 = ::Array_obj< int >::fromData( _hx_array_data_116e4296_1143,1)->copy();
HXDLIN( 681)						{
HXLINE( 681)							int _g22 = 0;
HXDLIN( 681)							int _g23 = copyKeys11->length;
HXDLIN( 681)							while((_g22 < _g23)){
HXLINE( 681)								_g22 = (_g22 + 1);
HXDLIN( 681)								int i = (_g22 - 1);
HXDLIN( 681)								if ((i == -1)) {
HXLINE( 681)									copyKeys11->remove(i);
            								}
            							}
            						}
HXDLIN( 681)						switch((int)(::Control_obj::RESET_dyn()->_hx_getIndex())){
            							case (int)0: {
HXLINE( 681)								{
HXLINE( 681)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_up;
HXDLIN( 681)									int state = 1;
HXDLIN( 681)									int _g = 0;
HXDLIN( 681)									while((_g < copyKeys11->length)){
HXLINE( 681)										int key = copyKeys11->__get(_g);
HXDLIN( 681)										_g = (_g + 1);
HXDLIN( 681)										if ((key != -1)) {
HXLINE( 681)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 681)								{
HXLINE( 681)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_upP;
HXDLIN( 681)									int state1 = 2;
HXDLIN( 681)									int _g1 = 0;
HXDLIN( 681)									while((_g1 < copyKeys11->length)){
HXLINE( 681)										int key = copyKeys11->__get(_g1);
HXDLIN( 681)										_g1 = (_g1 + 1);
HXDLIN( 681)										if ((key != -1)) {
HXLINE( 681)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 681)								{
HXLINE( 681)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_upR;
HXDLIN( 681)									int state2 = -1;
HXDLIN( 681)									int _g2 = 0;
HXDLIN( 681)									while((_g2 < copyKeys11->length)){
HXLINE( 681)										int key = copyKeys11->__get(_g2);
HXDLIN( 681)										_g2 = (_g2 + 1);
HXDLIN( 681)										if ((key != -1)) {
HXLINE( 681)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)1: {
HXLINE( 681)								{
HXLINE( 681)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_left;
HXDLIN( 681)									int state = 1;
HXDLIN( 681)									int _g = 0;
HXDLIN( 681)									while((_g < copyKeys11->length)){
HXLINE( 681)										int key = copyKeys11->__get(_g);
HXDLIN( 681)										_g = (_g + 1);
HXDLIN( 681)										if ((key != -1)) {
HXLINE( 681)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 681)								{
HXLINE( 681)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_leftP;
HXDLIN( 681)									int state1 = 2;
HXDLIN( 681)									int _g1 = 0;
HXDLIN( 681)									while((_g1 < copyKeys11->length)){
HXLINE( 681)										int key = copyKeys11->__get(_g1);
HXDLIN( 681)										_g1 = (_g1 + 1);
HXDLIN( 681)										if ((key != -1)) {
HXLINE( 681)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 681)								{
HXLINE( 681)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_leftR;
HXDLIN( 681)									int state2 = -1;
HXDLIN( 681)									int _g2 = 0;
HXDLIN( 681)									while((_g2 < copyKeys11->length)){
HXLINE( 681)										int key = copyKeys11->__get(_g2);
HXDLIN( 681)										_g2 = (_g2 + 1);
HXDLIN( 681)										if ((key != -1)) {
HXLINE( 681)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)2: {
HXLINE( 681)								{
HXLINE( 681)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_right;
HXDLIN( 681)									int state = 1;
HXDLIN( 681)									int _g = 0;
HXDLIN( 681)									while((_g < copyKeys11->length)){
HXLINE( 681)										int key = copyKeys11->__get(_g);
HXDLIN( 681)										_g = (_g + 1);
HXDLIN( 681)										if ((key != -1)) {
HXLINE( 681)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 681)								{
HXLINE( 681)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_rightP;
HXDLIN( 681)									int state1 = 2;
HXDLIN( 681)									int _g1 = 0;
HXDLIN( 681)									while((_g1 < copyKeys11->length)){
HXLINE( 681)										int key = copyKeys11->__get(_g1);
HXDLIN( 681)										_g1 = (_g1 + 1);
HXDLIN( 681)										if ((key != -1)) {
HXLINE( 681)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 681)								{
HXLINE( 681)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_rightR;
HXDLIN( 681)									int state2 = -1;
HXDLIN( 681)									int _g2 = 0;
HXDLIN( 681)									while((_g2 < copyKeys11->length)){
HXLINE( 681)										int key = copyKeys11->__get(_g2);
HXDLIN( 681)										_g2 = (_g2 + 1);
HXDLIN( 681)										if ((key != -1)) {
HXLINE( 681)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)3: {
HXLINE( 681)								{
HXLINE( 681)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_down;
HXDLIN( 681)									int state = 1;
HXDLIN( 681)									int _g = 0;
HXDLIN( 681)									while((_g < copyKeys11->length)){
HXLINE( 681)										int key = copyKeys11->__get(_g);
HXDLIN( 681)										_g = (_g + 1);
HXDLIN( 681)										if ((key != -1)) {
HXLINE( 681)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 681)								{
HXLINE( 681)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_downP;
HXDLIN( 681)									int state1 = 2;
HXDLIN( 681)									int _g1 = 0;
HXDLIN( 681)									while((_g1 < copyKeys11->length)){
HXLINE( 681)										int key = copyKeys11->__get(_g1);
HXDLIN( 681)										_g1 = (_g1 + 1);
HXDLIN( 681)										if ((key != -1)) {
HXLINE( 681)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 681)								{
HXLINE( 681)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_downR;
HXDLIN( 681)									int state2 = -1;
HXDLIN( 681)									int _g2 = 0;
HXDLIN( 681)									while((_g2 < copyKeys11->length)){
HXLINE( 681)										int key = copyKeys11->__get(_g2);
HXDLIN( 681)										_g2 = (_g2 + 1);
HXDLIN( 681)										if ((key != -1)) {
HXLINE( 681)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)4: {
HXLINE( 681)								{
HXLINE( 681)									 ::flixel::input::actions::FlxActionDigital action = this->_note_up;
HXDLIN( 681)									int state = 1;
HXDLIN( 681)									int _g = 0;
HXDLIN( 681)									while((_g < copyKeys11->length)){
HXLINE( 681)										int key = copyKeys11->__get(_g);
HXDLIN( 681)										_g = (_g + 1);
HXDLIN( 681)										if ((key != -1)) {
HXLINE( 681)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 681)								{
HXLINE( 681)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_upP;
HXDLIN( 681)									int state1 = 2;
HXDLIN( 681)									int _g1 = 0;
HXDLIN( 681)									while((_g1 < copyKeys11->length)){
HXLINE( 681)										int key = copyKeys11->__get(_g1);
HXDLIN( 681)										_g1 = (_g1 + 1);
HXDLIN( 681)										if ((key != -1)) {
HXLINE( 681)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 681)								{
HXLINE( 681)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_upR;
HXDLIN( 681)									int state2 = -1;
HXDLIN( 681)									int _g2 = 0;
HXDLIN( 681)									while((_g2 < copyKeys11->length)){
HXLINE( 681)										int key = copyKeys11->__get(_g2);
HXDLIN( 681)										_g2 = (_g2 + 1);
HXDLIN( 681)										if ((key != -1)) {
HXLINE( 681)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)5: {
HXLINE( 681)								{
HXLINE( 681)									 ::flixel::input::actions::FlxActionDigital action = this->_note_left;
HXDLIN( 681)									int state = 1;
HXDLIN( 681)									int _g = 0;
HXDLIN( 681)									while((_g < copyKeys11->length)){
HXLINE( 681)										int key = copyKeys11->__get(_g);
HXDLIN( 681)										_g = (_g + 1);
HXDLIN( 681)										if ((key != -1)) {
HXLINE( 681)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 681)								{
HXLINE( 681)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_leftP;
HXDLIN( 681)									int state1 = 2;
HXDLIN( 681)									int _g1 = 0;
HXDLIN( 681)									while((_g1 < copyKeys11->length)){
HXLINE( 681)										int key = copyKeys11->__get(_g1);
HXDLIN( 681)										_g1 = (_g1 + 1);
HXDLIN( 681)										if ((key != -1)) {
HXLINE( 681)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 681)								{
HXLINE( 681)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_leftR;
HXDLIN( 681)									int state2 = -1;
HXDLIN( 681)									int _g2 = 0;
HXDLIN( 681)									while((_g2 < copyKeys11->length)){
HXLINE( 681)										int key = copyKeys11->__get(_g2);
HXDLIN( 681)										_g2 = (_g2 + 1);
HXDLIN( 681)										if ((key != -1)) {
HXLINE( 681)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)6: {
HXLINE( 681)								{
HXLINE( 681)									 ::flixel::input::actions::FlxActionDigital action = this->_note_right;
HXDLIN( 681)									int state = 1;
HXDLIN( 681)									int _g = 0;
HXDLIN( 681)									while((_g < copyKeys11->length)){
HXLINE( 681)										int key = copyKeys11->__get(_g);
HXDLIN( 681)										_g = (_g + 1);
HXDLIN( 681)										if ((key != -1)) {
HXLINE( 681)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 681)								{
HXLINE( 681)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_rightP;
HXDLIN( 681)									int state1 = 2;
HXDLIN( 681)									int _g1 = 0;
HXDLIN( 681)									while((_g1 < copyKeys11->length)){
HXLINE( 681)										int key = copyKeys11->__get(_g1);
HXDLIN( 681)										_g1 = (_g1 + 1);
HXDLIN( 681)										if ((key != -1)) {
HXLINE( 681)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 681)								{
HXLINE( 681)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_rightR;
HXDLIN( 681)									int state2 = -1;
HXDLIN( 681)									int _g2 = 0;
HXDLIN( 681)									while((_g2 < copyKeys11->length)){
HXLINE( 681)										int key = copyKeys11->__get(_g2);
HXDLIN( 681)										_g2 = (_g2 + 1);
HXDLIN( 681)										if ((key != -1)) {
HXLINE( 681)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)7: {
HXLINE( 681)								{
HXLINE( 681)									 ::flixel::input::actions::FlxActionDigital action = this->_note_down;
HXDLIN( 681)									int state = 1;
HXDLIN( 681)									int _g = 0;
HXDLIN( 681)									while((_g < copyKeys11->length)){
HXLINE( 681)										int key = copyKeys11->__get(_g);
HXDLIN( 681)										_g = (_g + 1);
HXDLIN( 681)										if ((key != -1)) {
HXLINE( 681)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 681)								{
HXLINE( 681)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_downP;
HXDLIN( 681)									int state1 = 2;
HXDLIN( 681)									int _g1 = 0;
HXDLIN( 681)									while((_g1 < copyKeys11->length)){
HXLINE( 681)										int key = copyKeys11->__get(_g1);
HXDLIN( 681)										_g1 = (_g1 + 1);
HXDLIN( 681)										if ((key != -1)) {
HXLINE( 681)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 681)								{
HXLINE( 681)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_downR;
HXDLIN( 681)									int state2 = -1;
HXDLIN( 681)									int _g2 = 0;
HXDLIN( 681)									while((_g2 < copyKeys11->length)){
HXLINE( 681)										int key = copyKeys11->__get(_g2);
HXDLIN( 681)										_g2 = (_g2 + 1);
HXDLIN( 681)										if ((key != -1)) {
HXLINE( 681)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)8: {
HXLINE( 681)								 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 681)								int state = 2;
HXDLIN( 681)								int _g = 0;
HXDLIN( 681)								while((_g < copyKeys11->length)){
HXLINE( 681)									int key = copyKeys11->__get(_g);
HXDLIN( 681)									_g = (_g + 1);
HXDLIN( 681)									if ((key != -1)) {
HXLINE( 681)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)9: {
HXLINE( 681)								 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 681)								int state = 2;
HXDLIN( 681)								int _g = 0;
HXDLIN( 681)								while((_g < copyKeys11->length)){
HXLINE( 681)									int key = copyKeys11->__get(_g);
HXDLIN( 681)									_g = (_g + 1);
HXDLIN( 681)									if ((key != -1)) {
HXLINE( 681)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)10: {
HXLINE( 681)								 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 681)								int state = 2;
HXDLIN( 681)								int _g = 0;
HXDLIN( 681)								while((_g < copyKeys11->length)){
HXLINE( 681)									int key = copyKeys11->__get(_g);
HXDLIN( 681)									_g = (_g + 1);
HXDLIN( 681)									if ((key != -1)) {
HXLINE( 681)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)11: {
HXLINE( 681)								 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 681)								int state = 2;
HXDLIN( 681)								int _g = 0;
HXDLIN( 681)								while((_g < copyKeys11->length)){
HXLINE( 681)									int key = copyKeys11->__get(_g);
HXDLIN( 681)									_g = (_g + 1);
HXDLIN( 681)									if ((key != -1)) {
HXLINE( 681)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            						}
            					}
            				}
            			}
            			break;
            			case (int)2: {
            			}
            			break;
            			case (int)3: {
            			}
            			break;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Controls_obj,setKeyboardScheme,(void))

void Controls_obj::removeKeyboard(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_735_removeKeyboard)
HXDLIN( 735)		int _g = 0;
HXDLIN( 735)		::Array< ::Dynamic> _g1 = this->digitalActions;
HXDLIN( 735)		while((_g < _g1->length)){
HXDLIN( 735)			 ::flixel::input::actions::FlxActionDigital action = _g1->__get(_g).StaticCast<  ::flixel::input::actions::FlxActionDigital >();
HXDLIN( 735)			_g = (_g + 1);
HXLINE( 737)			int i = action->inputs->length;
HXLINE( 738)			while(true){
HXLINE( 738)				i = (i - 1);
HXDLIN( 738)				if (!(((i + 1) > 0))) {
HXLINE( 738)					goto _hx_goto_1145;
            				}
HXLINE( 740)				 ::flixel::input::actions::FlxActionInput input = action->inputs->__get(i).StaticCast<  ::flixel::input::actions::FlxActionInput >();
HXLINE( 741)				if (::hx::IsPointerEq( input->device,::flixel::input::actions::FlxInputDevice_obj::KEYBOARD_dyn() )) {
HXLINE( 742)					action->remove(input,null());
            				}
            			}
            			_hx_goto_1145:;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,removeKeyboard,(void))

void Controls_obj::addGamepad(int id, ::haxe::ds::EnumValueMap buttonMap){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_748_addGamepad)
HXLINE( 749)		this->gamepadsAdded->push(id);
HXLINE( 752)		{
HXLINE( 752)			::Dynamic map = buttonMap;
HXDLIN( 752)			::Dynamic _g_map = map;
HXDLIN( 752)			 ::Dynamic _g_keys = ::haxe::IMap_obj::keys(map);
HXDLIN( 752)			while(( (bool)(_g_keys->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 752)				 ::Control key = _g_keys->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)();
HXDLIN( 752)				::Array< int > _g1_value = ( (::Array< int >)(::haxe::IMap_obj::get(_g_map,key)) );
HXDLIN( 752)				 ::Control _g1_key = key;
HXDLIN( 752)				 ::Control control = _g1_key;
HXDLIN( 752)				::Array< int > buttons = _g1_value;
HXLINE( 753)				{
HXLINE( 753)					int id1 = id;
HXDLIN( 753)					::Array< int > buttons1 = buttons;
HXDLIN( 753)					switch((int)(control->_hx_getIndex())){
            						case (int)0: {
HXLINE( 753)							{
HXLINE( 753)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_up;
HXDLIN( 753)								int state = 1;
HXDLIN( 753)								int _g = 0;
HXDLIN( 753)								while((_g < buttons1->length)){
HXLINE( 753)									int button = buttons1->__get(_g);
HXDLIN( 753)									_g = (_g + 1);
HXDLIN( 753)									action->addGamepad(button,state,id1);
            								}
            							}
HXDLIN( 753)							{
HXLINE( 753)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_upP;
HXDLIN( 753)								int state1 = 2;
HXDLIN( 753)								int _g1 = 0;
HXDLIN( 753)								while((_g1 < buttons1->length)){
HXLINE( 753)									int button = buttons1->__get(_g1);
HXDLIN( 753)									_g1 = (_g1 + 1);
HXDLIN( 753)									action1->addGamepad(button,state1,id1);
            								}
            							}
HXDLIN( 753)							{
HXLINE( 753)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_upR;
HXDLIN( 753)								int state2 = -1;
HXDLIN( 753)								int _g2 = 0;
HXDLIN( 753)								while((_g2 < buttons1->length)){
HXLINE( 753)									int button = buttons1->__get(_g2);
HXDLIN( 753)									_g2 = (_g2 + 1);
HXDLIN( 753)									action2->addGamepad(button,state2,id1);
            								}
            							}
            						}
            						break;
            						case (int)1: {
HXLINE( 753)							{
HXLINE( 753)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_left;
HXDLIN( 753)								int state = 1;
HXDLIN( 753)								int _g = 0;
HXDLIN( 753)								while((_g < buttons1->length)){
HXLINE( 753)									int button = buttons1->__get(_g);
HXDLIN( 753)									_g = (_g + 1);
HXDLIN( 753)									action->addGamepad(button,state,id1);
            								}
            							}
HXDLIN( 753)							{
HXLINE( 753)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_leftP;
HXDLIN( 753)								int state1 = 2;
HXDLIN( 753)								int _g1 = 0;
HXDLIN( 753)								while((_g1 < buttons1->length)){
HXLINE( 753)									int button = buttons1->__get(_g1);
HXDLIN( 753)									_g1 = (_g1 + 1);
HXDLIN( 753)									action1->addGamepad(button,state1,id1);
            								}
            							}
HXDLIN( 753)							{
HXLINE( 753)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_leftR;
HXDLIN( 753)								int state2 = -1;
HXDLIN( 753)								int _g2 = 0;
HXDLIN( 753)								while((_g2 < buttons1->length)){
HXLINE( 753)									int button = buttons1->__get(_g2);
HXDLIN( 753)									_g2 = (_g2 + 1);
HXDLIN( 753)									action2->addGamepad(button,state2,id1);
            								}
            							}
            						}
            						break;
            						case (int)2: {
HXLINE( 753)							{
HXLINE( 753)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_right;
HXDLIN( 753)								int state = 1;
HXDLIN( 753)								int _g = 0;
HXDLIN( 753)								while((_g < buttons1->length)){
HXLINE( 753)									int button = buttons1->__get(_g);
HXDLIN( 753)									_g = (_g + 1);
HXDLIN( 753)									action->addGamepad(button,state,id1);
            								}
            							}
HXDLIN( 753)							{
HXLINE( 753)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_rightP;
HXDLIN( 753)								int state1 = 2;
HXDLIN( 753)								int _g1 = 0;
HXDLIN( 753)								while((_g1 < buttons1->length)){
HXLINE( 753)									int button = buttons1->__get(_g1);
HXDLIN( 753)									_g1 = (_g1 + 1);
HXDLIN( 753)									action1->addGamepad(button,state1,id1);
            								}
            							}
HXDLIN( 753)							{
HXLINE( 753)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_rightR;
HXDLIN( 753)								int state2 = -1;
HXDLIN( 753)								int _g2 = 0;
HXDLIN( 753)								while((_g2 < buttons1->length)){
HXLINE( 753)									int button = buttons1->__get(_g2);
HXDLIN( 753)									_g2 = (_g2 + 1);
HXDLIN( 753)									action2->addGamepad(button,state2,id1);
            								}
            							}
            						}
            						break;
            						case (int)3: {
HXLINE( 753)							{
HXLINE( 753)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_down;
HXDLIN( 753)								int state = 1;
HXDLIN( 753)								int _g = 0;
HXDLIN( 753)								while((_g < buttons1->length)){
HXLINE( 753)									int button = buttons1->__get(_g);
HXDLIN( 753)									_g = (_g + 1);
HXDLIN( 753)									action->addGamepad(button,state,id1);
            								}
            							}
HXDLIN( 753)							{
HXLINE( 753)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_downP;
HXDLIN( 753)								int state1 = 2;
HXDLIN( 753)								int _g1 = 0;
HXDLIN( 753)								while((_g1 < buttons1->length)){
HXLINE( 753)									int button = buttons1->__get(_g1);
HXDLIN( 753)									_g1 = (_g1 + 1);
HXDLIN( 753)									action1->addGamepad(button,state1,id1);
            								}
            							}
HXDLIN( 753)							{
HXLINE( 753)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_downR;
HXDLIN( 753)								int state2 = -1;
HXDLIN( 753)								int _g2 = 0;
HXDLIN( 753)								while((_g2 < buttons1->length)){
HXLINE( 753)									int button = buttons1->__get(_g2);
HXDLIN( 753)									_g2 = (_g2 + 1);
HXDLIN( 753)									action2->addGamepad(button,state2,id1);
            								}
            							}
            						}
            						break;
            						case (int)4: {
HXLINE( 753)							{
HXLINE( 753)								 ::flixel::input::actions::FlxActionDigital action = this->_note_up;
HXDLIN( 753)								int state = 1;
HXDLIN( 753)								int _g = 0;
HXDLIN( 753)								while((_g < buttons1->length)){
HXLINE( 753)									int button = buttons1->__get(_g);
HXDLIN( 753)									_g = (_g + 1);
HXDLIN( 753)									action->addGamepad(button,state,id1);
            								}
            							}
HXDLIN( 753)							{
HXLINE( 753)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_upP;
HXDLIN( 753)								int state1 = 2;
HXDLIN( 753)								int _g1 = 0;
HXDLIN( 753)								while((_g1 < buttons1->length)){
HXLINE( 753)									int button = buttons1->__get(_g1);
HXDLIN( 753)									_g1 = (_g1 + 1);
HXDLIN( 753)									action1->addGamepad(button,state1,id1);
            								}
            							}
HXDLIN( 753)							{
HXLINE( 753)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_upR;
HXDLIN( 753)								int state2 = -1;
HXDLIN( 753)								int _g2 = 0;
HXDLIN( 753)								while((_g2 < buttons1->length)){
HXLINE( 753)									int button = buttons1->__get(_g2);
HXDLIN( 753)									_g2 = (_g2 + 1);
HXDLIN( 753)									action2->addGamepad(button,state2,id1);
            								}
            							}
            						}
            						break;
            						case (int)5: {
HXLINE( 753)							{
HXLINE( 753)								 ::flixel::input::actions::FlxActionDigital action = this->_note_left;
HXDLIN( 753)								int state = 1;
HXDLIN( 753)								int _g = 0;
HXDLIN( 753)								while((_g < buttons1->length)){
HXLINE( 753)									int button = buttons1->__get(_g);
HXDLIN( 753)									_g = (_g + 1);
HXDLIN( 753)									action->addGamepad(button,state,id1);
            								}
            							}
HXDLIN( 753)							{
HXLINE( 753)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_leftP;
HXDLIN( 753)								int state1 = 2;
HXDLIN( 753)								int _g1 = 0;
HXDLIN( 753)								while((_g1 < buttons1->length)){
HXLINE( 753)									int button = buttons1->__get(_g1);
HXDLIN( 753)									_g1 = (_g1 + 1);
HXDLIN( 753)									action1->addGamepad(button,state1,id1);
            								}
            							}
HXDLIN( 753)							{
HXLINE( 753)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_leftR;
HXDLIN( 753)								int state2 = -1;
HXDLIN( 753)								int _g2 = 0;
HXDLIN( 753)								while((_g2 < buttons1->length)){
HXLINE( 753)									int button = buttons1->__get(_g2);
HXDLIN( 753)									_g2 = (_g2 + 1);
HXDLIN( 753)									action2->addGamepad(button,state2,id1);
            								}
            							}
            						}
            						break;
            						case (int)6: {
HXLINE( 753)							{
HXLINE( 753)								 ::flixel::input::actions::FlxActionDigital action = this->_note_right;
HXDLIN( 753)								int state = 1;
HXDLIN( 753)								int _g = 0;
HXDLIN( 753)								while((_g < buttons1->length)){
HXLINE( 753)									int button = buttons1->__get(_g);
HXDLIN( 753)									_g = (_g + 1);
HXDLIN( 753)									action->addGamepad(button,state,id1);
            								}
            							}
HXDLIN( 753)							{
HXLINE( 753)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_rightP;
HXDLIN( 753)								int state1 = 2;
HXDLIN( 753)								int _g1 = 0;
HXDLIN( 753)								while((_g1 < buttons1->length)){
HXLINE( 753)									int button = buttons1->__get(_g1);
HXDLIN( 753)									_g1 = (_g1 + 1);
HXDLIN( 753)									action1->addGamepad(button,state1,id1);
            								}
            							}
HXDLIN( 753)							{
HXLINE( 753)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_rightR;
HXDLIN( 753)								int state2 = -1;
HXDLIN( 753)								int _g2 = 0;
HXDLIN( 753)								while((_g2 < buttons1->length)){
HXLINE( 753)									int button = buttons1->__get(_g2);
HXDLIN( 753)									_g2 = (_g2 + 1);
HXDLIN( 753)									action2->addGamepad(button,state2,id1);
            								}
            							}
            						}
            						break;
            						case (int)7: {
HXLINE( 753)							{
HXLINE( 753)								 ::flixel::input::actions::FlxActionDigital action = this->_note_down;
HXDLIN( 753)								int state = 1;
HXDLIN( 753)								int _g = 0;
HXDLIN( 753)								while((_g < buttons1->length)){
HXLINE( 753)									int button = buttons1->__get(_g);
HXDLIN( 753)									_g = (_g + 1);
HXDLIN( 753)									action->addGamepad(button,state,id1);
            								}
            							}
HXDLIN( 753)							{
HXLINE( 753)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_downP;
HXDLIN( 753)								int state1 = 2;
HXDLIN( 753)								int _g1 = 0;
HXDLIN( 753)								while((_g1 < buttons1->length)){
HXLINE( 753)									int button = buttons1->__get(_g1);
HXDLIN( 753)									_g1 = (_g1 + 1);
HXDLIN( 753)									action1->addGamepad(button,state1,id1);
            								}
            							}
HXDLIN( 753)							{
HXLINE( 753)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_downR;
HXDLIN( 753)								int state2 = -1;
HXDLIN( 753)								int _g2 = 0;
HXDLIN( 753)								while((_g2 < buttons1->length)){
HXLINE( 753)									int button = buttons1->__get(_g2);
HXDLIN( 753)									_g2 = (_g2 + 1);
HXDLIN( 753)									action2->addGamepad(button,state2,id1);
            								}
            							}
            						}
            						break;
            						case (int)8: {
HXLINE( 753)							 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 753)							int state = 2;
HXDLIN( 753)							int _g = 0;
HXDLIN( 753)							while((_g < buttons1->length)){
HXLINE( 753)								int button = buttons1->__get(_g);
HXDLIN( 753)								_g = (_g + 1);
HXDLIN( 753)								action->addGamepad(button,state,id1);
            							}
            						}
            						break;
            						case (int)9: {
HXLINE( 753)							 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 753)							int state = 2;
HXDLIN( 753)							int _g = 0;
HXDLIN( 753)							while((_g < buttons1->length)){
HXLINE( 753)								int button = buttons1->__get(_g);
HXDLIN( 753)								_g = (_g + 1);
HXDLIN( 753)								action->addGamepad(button,state,id1);
            							}
            						}
            						break;
            						case (int)10: {
HXLINE( 753)							 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 753)							int state = 2;
HXDLIN( 753)							int _g = 0;
HXDLIN( 753)							while((_g < buttons1->length)){
HXLINE( 753)								int button = buttons1->__get(_g);
HXDLIN( 753)								_g = (_g + 1);
HXDLIN( 753)								action->addGamepad(button,state,id1);
            							}
            						}
            						break;
            						case (int)11: {
HXLINE( 753)							 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 753)							int state = 2;
HXDLIN( 753)							int _g = 0;
HXDLIN( 753)							while((_g < buttons1->length)){
HXLINE( 753)								int button = buttons1->__get(_g);
HXDLIN( 753)								_g = (_g + 1);
HXDLIN( 753)								action->addGamepad(button,state,id1);
            							}
            						}
            						break;
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Controls_obj,addGamepad,(void))

void Controls_obj::addGamepadLiteral(int id, ::haxe::ds::EnumValueMap buttonMap){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_761_addGamepadLiteral)
HXLINE( 762)		this->gamepadsAdded->push(id);
HXLINE( 765)		{
HXLINE( 765)			::Dynamic map = buttonMap;
HXDLIN( 765)			::Dynamic _g_map = map;
HXDLIN( 765)			 ::Dynamic _g_keys = ::haxe::IMap_obj::keys(map);
HXDLIN( 765)			while(( (bool)(_g_keys->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 765)				 ::Control key = _g_keys->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)();
HXDLIN( 765)				::Array< int > _g1_value = ( (::Array< int >)(::haxe::IMap_obj::get(_g_map,key)) );
HXDLIN( 765)				 ::Control _g1_key = key;
HXDLIN( 765)				 ::Control control = _g1_key;
HXDLIN( 765)				::Array< int > buttons = _g1_value;
HXLINE( 766)				{
HXLINE( 766)					int id1 = id;
HXDLIN( 766)					::Array< int > buttons1 = buttons;
HXDLIN( 766)					switch((int)(control->_hx_getIndex())){
            						case (int)0: {
HXLINE( 766)							{
HXLINE( 766)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_up;
HXDLIN( 766)								int state = 1;
HXDLIN( 766)								int _g = 0;
HXDLIN( 766)								while((_g < buttons1->length)){
HXLINE( 766)									int button = buttons1->__get(_g);
HXDLIN( 766)									_g = (_g + 1);
HXDLIN( 766)									action->addGamepad(button,state,id1);
            								}
            							}
HXDLIN( 766)							{
HXLINE( 766)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_upP;
HXDLIN( 766)								int state1 = 2;
HXDLIN( 766)								int _g1 = 0;
HXDLIN( 766)								while((_g1 < buttons1->length)){
HXLINE( 766)									int button = buttons1->__get(_g1);
HXDLIN( 766)									_g1 = (_g1 + 1);
HXDLIN( 766)									action1->addGamepad(button,state1,id1);
            								}
            							}
HXDLIN( 766)							{
HXLINE( 766)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_upR;
HXDLIN( 766)								int state2 = -1;
HXDLIN( 766)								int _g2 = 0;
HXDLIN( 766)								while((_g2 < buttons1->length)){
HXLINE( 766)									int button = buttons1->__get(_g2);
HXDLIN( 766)									_g2 = (_g2 + 1);
HXDLIN( 766)									action2->addGamepad(button,state2,id1);
            								}
            							}
            						}
            						break;
            						case (int)1: {
HXLINE( 766)							{
HXLINE( 766)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_left;
HXDLIN( 766)								int state = 1;
HXDLIN( 766)								int _g = 0;
HXDLIN( 766)								while((_g < buttons1->length)){
HXLINE( 766)									int button = buttons1->__get(_g);
HXDLIN( 766)									_g = (_g + 1);
HXDLIN( 766)									action->addGamepad(button,state,id1);
            								}
            							}
HXDLIN( 766)							{
HXLINE( 766)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_leftP;
HXDLIN( 766)								int state1 = 2;
HXDLIN( 766)								int _g1 = 0;
HXDLIN( 766)								while((_g1 < buttons1->length)){
HXLINE( 766)									int button = buttons1->__get(_g1);
HXDLIN( 766)									_g1 = (_g1 + 1);
HXDLIN( 766)									action1->addGamepad(button,state1,id1);
            								}
            							}
HXDLIN( 766)							{
HXLINE( 766)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_leftR;
HXDLIN( 766)								int state2 = -1;
HXDLIN( 766)								int _g2 = 0;
HXDLIN( 766)								while((_g2 < buttons1->length)){
HXLINE( 766)									int button = buttons1->__get(_g2);
HXDLIN( 766)									_g2 = (_g2 + 1);
HXDLIN( 766)									action2->addGamepad(button,state2,id1);
            								}
            							}
            						}
            						break;
            						case (int)2: {
HXLINE( 766)							{
HXLINE( 766)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_right;
HXDLIN( 766)								int state = 1;
HXDLIN( 766)								int _g = 0;
HXDLIN( 766)								while((_g < buttons1->length)){
HXLINE( 766)									int button = buttons1->__get(_g);
HXDLIN( 766)									_g = (_g + 1);
HXDLIN( 766)									action->addGamepad(button,state,id1);
            								}
            							}
HXDLIN( 766)							{
HXLINE( 766)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_rightP;
HXDLIN( 766)								int state1 = 2;
HXDLIN( 766)								int _g1 = 0;
HXDLIN( 766)								while((_g1 < buttons1->length)){
HXLINE( 766)									int button = buttons1->__get(_g1);
HXDLIN( 766)									_g1 = (_g1 + 1);
HXDLIN( 766)									action1->addGamepad(button,state1,id1);
            								}
            							}
HXDLIN( 766)							{
HXLINE( 766)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_rightR;
HXDLIN( 766)								int state2 = -1;
HXDLIN( 766)								int _g2 = 0;
HXDLIN( 766)								while((_g2 < buttons1->length)){
HXLINE( 766)									int button = buttons1->__get(_g2);
HXDLIN( 766)									_g2 = (_g2 + 1);
HXDLIN( 766)									action2->addGamepad(button,state2,id1);
            								}
            							}
            						}
            						break;
            						case (int)3: {
HXLINE( 766)							{
HXLINE( 766)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_down;
HXDLIN( 766)								int state = 1;
HXDLIN( 766)								int _g = 0;
HXDLIN( 766)								while((_g < buttons1->length)){
HXLINE( 766)									int button = buttons1->__get(_g);
HXDLIN( 766)									_g = (_g + 1);
HXDLIN( 766)									action->addGamepad(button,state,id1);
            								}
            							}
HXDLIN( 766)							{
HXLINE( 766)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_downP;
HXDLIN( 766)								int state1 = 2;
HXDLIN( 766)								int _g1 = 0;
HXDLIN( 766)								while((_g1 < buttons1->length)){
HXLINE( 766)									int button = buttons1->__get(_g1);
HXDLIN( 766)									_g1 = (_g1 + 1);
HXDLIN( 766)									action1->addGamepad(button,state1,id1);
            								}
            							}
HXDLIN( 766)							{
HXLINE( 766)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_downR;
HXDLIN( 766)								int state2 = -1;
HXDLIN( 766)								int _g2 = 0;
HXDLIN( 766)								while((_g2 < buttons1->length)){
HXLINE( 766)									int button = buttons1->__get(_g2);
HXDLIN( 766)									_g2 = (_g2 + 1);
HXDLIN( 766)									action2->addGamepad(button,state2,id1);
            								}
            							}
            						}
            						break;
            						case (int)4: {
HXLINE( 766)							{
HXLINE( 766)								 ::flixel::input::actions::FlxActionDigital action = this->_note_up;
HXDLIN( 766)								int state = 1;
HXDLIN( 766)								int _g = 0;
HXDLIN( 766)								while((_g < buttons1->length)){
HXLINE( 766)									int button = buttons1->__get(_g);
HXDLIN( 766)									_g = (_g + 1);
HXDLIN( 766)									action->addGamepad(button,state,id1);
            								}
            							}
HXDLIN( 766)							{
HXLINE( 766)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_upP;
HXDLIN( 766)								int state1 = 2;
HXDLIN( 766)								int _g1 = 0;
HXDLIN( 766)								while((_g1 < buttons1->length)){
HXLINE( 766)									int button = buttons1->__get(_g1);
HXDLIN( 766)									_g1 = (_g1 + 1);
HXDLIN( 766)									action1->addGamepad(button,state1,id1);
            								}
            							}
HXDLIN( 766)							{
HXLINE( 766)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_upR;
HXDLIN( 766)								int state2 = -1;
HXDLIN( 766)								int _g2 = 0;
HXDLIN( 766)								while((_g2 < buttons1->length)){
HXLINE( 766)									int button = buttons1->__get(_g2);
HXDLIN( 766)									_g2 = (_g2 + 1);
HXDLIN( 766)									action2->addGamepad(button,state2,id1);
            								}
            							}
            						}
            						break;
            						case (int)5: {
HXLINE( 766)							{
HXLINE( 766)								 ::flixel::input::actions::FlxActionDigital action = this->_note_left;
HXDLIN( 766)								int state = 1;
HXDLIN( 766)								int _g = 0;
HXDLIN( 766)								while((_g < buttons1->length)){
HXLINE( 766)									int button = buttons1->__get(_g);
HXDLIN( 766)									_g = (_g + 1);
HXDLIN( 766)									action->addGamepad(button,state,id1);
            								}
            							}
HXDLIN( 766)							{
HXLINE( 766)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_leftP;
HXDLIN( 766)								int state1 = 2;
HXDLIN( 766)								int _g1 = 0;
HXDLIN( 766)								while((_g1 < buttons1->length)){
HXLINE( 766)									int button = buttons1->__get(_g1);
HXDLIN( 766)									_g1 = (_g1 + 1);
HXDLIN( 766)									action1->addGamepad(button,state1,id1);
            								}
            							}
HXDLIN( 766)							{
HXLINE( 766)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_leftR;
HXDLIN( 766)								int state2 = -1;
HXDLIN( 766)								int _g2 = 0;
HXDLIN( 766)								while((_g2 < buttons1->length)){
HXLINE( 766)									int button = buttons1->__get(_g2);
HXDLIN( 766)									_g2 = (_g2 + 1);
HXDLIN( 766)									action2->addGamepad(button,state2,id1);
            								}
            							}
            						}
            						break;
            						case (int)6: {
HXLINE( 766)							{
HXLINE( 766)								 ::flixel::input::actions::FlxActionDigital action = this->_note_right;
HXDLIN( 766)								int state = 1;
HXDLIN( 766)								int _g = 0;
HXDLIN( 766)								while((_g < buttons1->length)){
HXLINE( 766)									int button = buttons1->__get(_g);
HXDLIN( 766)									_g = (_g + 1);
HXDLIN( 766)									action->addGamepad(button,state,id1);
            								}
            							}
HXDLIN( 766)							{
HXLINE( 766)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_rightP;
HXDLIN( 766)								int state1 = 2;
HXDLIN( 766)								int _g1 = 0;
HXDLIN( 766)								while((_g1 < buttons1->length)){
HXLINE( 766)									int button = buttons1->__get(_g1);
HXDLIN( 766)									_g1 = (_g1 + 1);
HXDLIN( 766)									action1->addGamepad(button,state1,id1);
            								}
            							}
HXDLIN( 766)							{
HXLINE( 766)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_rightR;
HXDLIN( 766)								int state2 = -1;
HXDLIN( 766)								int _g2 = 0;
HXDLIN( 766)								while((_g2 < buttons1->length)){
HXLINE( 766)									int button = buttons1->__get(_g2);
HXDLIN( 766)									_g2 = (_g2 + 1);
HXDLIN( 766)									action2->addGamepad(button,state2,id1);
            								}
            							}
            						}
            						break;
            						case (int)7: {
HXLINE( 766)							{
HXLINE( 766)								 ::flixel::input::actions::FlxActionDigital action = this->_note_down;
HXDLIN( 766)								int state = 1;
HXDLIN( 766)								int _g = 0;
HXDLIN( 766)								while((_g < buttons1->length)){
HXLINE( 766)									int button = buttons1->__get(_g);
HXDLIN( 766)									_g = (_g + 1);
HXDLIN( 766)									action->addGamepad(button,state,id1);
            								}
            							}
HXDLIN( 766)							{
HXLINE( 766)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_downP;
HXDLIN( 766)								int state1 = 2;
HXDLIN( 766)								int _g1 = 0;
HXDLIN( 766)								while((_g1 < buttons1->length)){
HXLINE( 766)									int button = buttons1->__get(_g1);
HXDLIN( 766)									_g1 = (_g1 + 1);
HXDLIN( 766)									action1->addGamepad(button,state1,id1);
            								}
            							}
HXDLIN( 766)							{
HXLINE( 766)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_downR;
HXDLIN( 766)								int state2 = -1;
HXDLIN( 766)								int _g2 = 0;
HXDLIN( 766)								while((_g2 < buttons1->length)){
HXLINE( 766)									int button = buttons1->__get(_g2);
HXDLIN( 766)									_g2 = (_g2 + 1);
HXDLIN( 766)									action2->addGamepad(button,state2,id1);
            								}
            							}
            						}
            						break;
            						case (int)8: {
HXLINE( 766)							 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 766)							int state = 2;
HXDLIN( 766)							int _g = 0;
HXDLIN( 766)							while((_g < buttons1->length)){
HXLINE( 766)								int button = buttons1->__get(_g);
HXDLIN( 766)								_g = (_g + 1);
HXDLIN( 766)								action->addGamepad(button,state,id1);
            							}
            						}
            						break;
            						case (int)9: {
HXLINE( 766)							 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 766)							int state = 2;
HXDLIN( 766)							int _g = 0;
HXDLIN( 766)							while((_g < buttons1->length)){
HXLINE( 766)								int button = buttons1->__get(_g);
HXDLIN( 766)								_g = (_g + 1);
HXDLIN( 766)								action->addGamepad(button,state,id1);
            							}
            						}
            						break;
            						case (int)10: {
HXLINE( 766)							 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 766)							int state = 2;
HXDLIN( 766)							int _g = 0;
HXDLIN( 766)							while((_g < buttons1->length)){
HXLINE( 766)								int button = buttons1->__get(_g);
HXDLIN( 766)								_g = (_g + 1);
HXDLIN( 766)								action->addGamepad(button,state,id1);
            							}
            						}
            						break;
            						case (int)11: {
HXLINE( 766)							 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 766)							int state = 2;
HXDLIN( 766)							int _g = 0;
HXDLIN( 766)							while((_g < buttons1->length)){
HXLINE( 766)								int button = buttons1->__get(_g);
HXDLIN( 766)								_g = (_g + 1);
HXDLIN( 766)								action->addGamepad(button,state,id1);
            							}
            						}
            						break;
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Controls_obj,addGamepadLiteral,(void))

void Controls_obj::removeGamepad(::hx::Null< int >  __o_deviceID){
            		int deviceID = __o_deviceID.Default(-1);
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_774_removeGamepad)
HXLINE( 775)		{
HXLINE( 775)			int _g = 0;
HXDLIN( 775)			::Array< ::Dynamic> _g1 = this->digitalActions;
HXDLIN( 775)			while((_g < _g1->length)){
HXLINE( 775)				 ::flixel::input::actions::FlxActionDigital action = _g1->__get(_g).StaticCast<  ::flixel::input::actions::FlxActionDigital >();
HXDLIN( 775)				_g = (_g + 1);
HXLINE( 777)				int i = action->inputs->length;
HXLINE( 778)				while(true){
HXLINE( 778)					i = (i - 1);
HXDLIN( 778)					if (!(((i + 1) > 0))) {
HXLINE( 778)						goto _hx_goto_1208;
            					}
HXLINE( 780)					 ::flixel::input::actions::FlxActionInput input = action->inputs->__get(i).StaticCast<  ::flixel::input::actions::FlxActionInput >();
HXLINE( 781)					bool _hx_tmp;
HXDLIN( 781)					if (::hx::IsPointerEq( input->device,::flixel::input::actions::FlxInputDevice_obj::GAMEPAD_dyn() )) {
HXLINE( 781)						if ((deviceID != -1)) {
HXLINE( 781)							_hx_tmp = (input->deviceID == deviceID);
            						}
            						else {
HXLINE( 781)							_hx_tmp = true;
            						}
            					}
            					else {
HXLINE( 781)						_hx_tmp = false;
            					}
HXDLIN( 781)					if (_hx_tmp) {
HXLINE( 782)						action->remove(input,null());
            					}
            				}
            				_hx_goto_1208:;
            			}
            		}
HXLINE( 786)		this->gamepadsAdded->remove(deviceID);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Controls_obj,removeGamepad,(void))

void Controls_obj::addDefaultGamepad(int id){
            	HX_GC_STACKFRAME(&_hx_pos_948b5caa279cd923_790_addDefaultGamepad)
HXLINE( 791)		 ::haxe::ds::StringMap bindMap = ::ClientPrefs_obj::controllerBinds;
HXLINE( 792)		{
HXLINE( 792)			 ::haxe::ds::EnumValueMap _g =  ::haxe::ds::EnumValueMap_obj::__alloc( HX_CTX );
HXDLIN( 792)			_g->set(::Control_obj::ACCEPT_dyn(),( (::Array< int >)(bindMap->get(HX_("accept",08,93,06,0b))) ));
HXDLIN( 792)			_g->set(::Control_obj::BACK_dyn(),( (::Array< int >)(bindMap->get(HX_("back",27,da,10,41))) ));
HXDLIN( 792)			_g->set(::Control_obj::UI_UP_dyn(),( (::Array< int >)(bindMap->get(HX_("ui_up",a6,c2,91,a3))) ));
HXDLIN( 792)			_g->set(::Control_obj::UI_DOWN_dyn(),( (::Array< int >)(bindMap->get(HX_("ui_down",6d,3d,47,f2))) ));
HXDLIN( 792)			_g->set(::Control_obj::UI_LEFT_dyn(),( (::Array< int >)(bindMap->get(HX_("ui_left",12,4d,89,f7))) ));
HXDLIN( 792)			_g->set(::Control_obj::UI_RIGHT_dyn(),( (::Array< int >)(bindMap->get(HX_("ui_right",71,30,a7,17))) ));
HXDLIN( 792)			_g->set(::Control_obj::NOTE_UP_dyn(),( (::Array< int >)(bindMap->get(HX_("note_up",c8,67,5c,4d))) ));
HXDLIN( 792)			_g->set(::Control_obj::NOTE_DOWN_dyn(),( (::Array< int >)(bindMap->get(HX_("note_down",0f,ef,de,9f))) ));
HXDLIN( 792)			_g->set(::Control_obj::NOTE_LEFT_dyn(),( (::Array< int >)(bindMap->get(HX_("note_left",b4,fe,20,a5))) ));
HXDLIN( 792)			_g->set(::Control_obj::NOTE_RIGHT_dyn(),( (::Array< int >)(bindMap->get(HX_("note_right",8f,ec,ca,4e))) ));
HXDLIN( 792)			_g->set(::Control_obj::PAUSE_dyn(),( (::Array< int >)(bindMap->get(HX_("pause",f6,d6,57,bd))) ));
HXDLIN( 792)			_g->set(::Control_obj::RESET_dyn(),( (::Array< int >)(bindMap->get(HX_("reset",cf,49,c8,e6))) ));
HXDLIN( 792)			this->gamepadsAdded->push(id);
HXDLIN( 792)			{
HXLINE( 792)				::Dynamic map = _g;
HXDLIN( 792)				::Dynamic _g_map = map;
HXDLIN( 792)				 ::Dynamic _g_keys = ::haxe::IMap_obj::keys(map);
HXDLIN( 792)				while(( (bool)(_g_keys->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 792)					 ::Control key = _g_keys->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)();
HXDLIN( 792)					::Array< int > _g1_value = ( (::Array< int >)(::haxe::IMap_obj::get(_g_map,key)) );
HXDLIN( 792)					 ::Control _g1_key = key;
HXDLIN( 792)					 ::Control control = _g1_key;
HXDLIN( 792)					::Array< int > buttons = _g1_value;
HXDLIN( 792)					{
HXLINE( 792)						int id1 = id;
HXDLIN( 792)						::Array< int > buttons1 = buttons;
HXDLIN( 792)						switch((int)(control->_hx_getIndex())){
            							case (int)0: {
HXLINE( 792)								{
HXLINE( 792)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_up;
HXDLIN( 792)									int state = 1;
HXDLIN( 792)									int _g = 0;
HXDLIN( 792)									while((_g < buttons1->length)){
HXLINE( 792)										int button = buttons1->__get(_g);
HXDLIN( 792)										_g = (_g + 1);
HXDLIN( 792)										action->addGamepad(button,state,id1);
            									}
            								}
HXDLIN( 792)								{
HXLINE( 792)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_upP;
HXDLIN( 792)									int state1 = 2;
HXDLIN( 792)									int _g1 = 0;
HXDLIN( 792)									while((_g1 < buttons1->length)){
HXLINE( 792)										int button = buttons1->__get(_g1);
HXDLIN( 792)										_g1 = (_g1 + 1);
HXDLIN( 792)										action1->addGamepad(button,state1,id1);
            									}
            								}
HXDLIN( 792)								{
HXLINE( 792)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_upR;
HXDLIN( 792)									int state2 = -1;
HXDLIN( 792)									int _g2 = 0;
HXDLIN( 792)									while((_g2 < buttons1->length)){
HXLINE( 792)										int button = buttons1->__get(_g2);
HXDLIN( 792)										_g2 = (_g2 + 1);
HXDLIN( 792)										action2->addGamepad(button,state2,id1);
            									}
            								}
            							}
            							break;
            							case (int)1: {
HXLINE( 792)								{
HXLINE( 792)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_left;
HXDLIN( 792)									int state = 1;
HXDLIN( 792)									int _g = 0;
HXDLIN( 792)									while((_g < buttons1->length)){
HXLINE( 792)										int button = buttons1->__get(_g);
HXDLIN( 792)										_g = (_g + 1);
HXDLIN( 792)										action->addGamepad(button,state,id1);
            									}
            								}
HXDLIN( 792)								{
HXLINE( 792)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_leftP;
HXDLIN( 792)									int state1 = 2;
HXDLIN( 792)									int _g1 = 0;
HXDLIN( 792)									while((_g1 < buttons1->length)){
HXLINE( 792)										int button = buttons1->__get(_g1);
HXDLIN( 792)										_g1 = (_g1 + 1);
HXDLIN( 792)										action1->addGamepad(button,state1,id1);
            									}
            								}
HXDLIN( 792)								{
HXLINE( 792)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_leftR;
HXDLIN( 792)									int state2 = -1;
HXDLIN( 792)									int _g2 = 0;
HXDLIN( 792)									while((_g2 < buttons1->length)){
HXLINE( 792)										int button = buttons1->__get(_g2);
HXDLIN( 792)										_g2 = (_g2 + 1);
HXDLIN( 792)										action2->addGamepad(button,state2,id1);
            									}
            								}
            							}
            							break;
            							case (int)2: {
HXLINE( 792)								{
HXLINE( 792)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_right;
HXDLIN( 792)									int state = 1;
HXDLIN( 792)									int _g = 0;
HXDLIN( 792)									while((_g < buttons1->length)){
HXLINE( 792)										int button = buttons1->__get(_g);
HXDLIN( 792)										_g = (_g + 1);
HXDLIN( 792)										action->addGamepad(button,state,id1);
            									}
            								}
HXDLIN( 792)								{
HXLINE( 792)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_rightP;
HXDLIN( 792)									int state1 = 2;
HXDLIN( 792)									int _g1 = 0;
HXDLIN( 792)									while((_g1 < buttons1->length)){
HXLINE( 792)										int button = buttons1->__get(_g1);
HXDLIN( 792)										_g1 = (_g1 + 1);
HXDLIN( 792)										action1->addGamepad(button,state1,id1);
            									}
            								}
HXDLIN( 792)								{
HXLINE( 792)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_rightR;
HXDLIN( 792)									int state2 = -1;
HXDLIN( 792)									int _g2 = 0;
HXDLIN( 792)									while((_g2 < buttons1->length)){
HXLINE( 792)										int button = buttons1->__get(_g2);
HXDLIN( 792)										_g2 = (_g2 + 1);
HXDLIN( 792)										action2->addGamepad(button,state2,id1);
            									}
            								}
            							}
            							break;
            							case (int)3: {
HXLINE( 792)								{
HXLINE( 792)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_down;
HXDLIN( 792)									int state = 1;
HXDLIN( 792)									int _g = 0;
HXDLIN( 792)									while((_g < buttons1->length)){
HXLINE( 792)										int button = buttons1->__get(_g);
HXDLIN( 792)										_g = (_g + 1);
HXDLIN( 792)										action->addGamepad(button,state,id1);
            									}
            								}
HXDLIN( 792)								{
HXLINE( 792)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_downP;
HXDLIN( 792)									int state1 = 2;
HXDLIN( 792)									int _g1 = 0;
HXDLIN( 792)									while((_g1 < buttons1->length)){
HXLINE( 792)										int button = buttons1->__get(_g1);
HXDLIN( 792)										_g1 = (_g1 + 1);
HXDLIN( 792)										action1->addGamepad(button,state1,id1);
            									}
            								}
HXDLIN( 792)								{
HXLINE( 792)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_downR;
HXDLIN( 792)									int state2 = -1;
HXDLIN( 792)									int _g2 = 0;
HXDLIN( 792)									while((_g2 < buttons1->length)){
HXLINE( 792)										int button = buttons1->__get(_g2);
HXDLIN( 792)										_g2 = (_g2 + 1);
HXDLIN( 792)										action2->addGamepad(button,state2,id1);
            									}
            								}
            							}
            							break;
            							case (int)4: {
HXLINE( 792)								{
HXLINE( 792)									 ::flixel::input::actions::FlxActionDigital action = this->_note_up;
HXDLIN( 792)									int state = 1;
HXDLIN( 792)									int _g = 0;
HXDLIN( 792)									while((_g < buttons1->length)){
HXLINE( 792)										int button = buttons1->__get(_g);
HXDLIN( 792)										_g = (_g + 1);
HXDLIN( 792)										action->addGamepad(button,state,id1);
            									}
            								}
HXDLIN( 792)								{
HXLINE( 792)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_upP;
HXDLIN( 792)									int state1 = 2;
HXDLIN( 792)									int _g1 = 0;
HXDLIN( 792)									while((_g1 < buttons1->length)){
HXLINE( 792)										int button = buttons1->__get(_g1);
HXDLIN( 792)										_g1 = (_g1 + 1);
HXDLIN( 792)										action1->addGamepad(button,state1,id1);
            									}
            								}
HXDLIN( 792)								{
HXLINE( 792)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_upR;
HXDLIN( 792)									int state2 = -1;
HXDLIN( 792)									int _g2 = 0;
HXDLIN( 792)									while((_g2 < buttons1->length)){
HXLINE( 792)										int button = buttons1->__get(_g2);
HXDLIN( 792)										_g2 = (_g2 + 1);
HXDLIN( 792)										action2->addGamepad(button,state2,id1);
            									}
            								}
            							}
            							break;
            							case (int)5: {
HXLINE( 792)								{
HXLINE( 792)									 ::flixel::input::actions::FlxActionDigital action = this->_note_left;
HXDLIN( 792)									int state = 1;
HXDLIN( 792)									int _g = 0;
HXDLIN( 792)									while((_g < buttons1->length)){
HXLINE( 792)										int button = buttons1->__get(_g);
HXDLIN( 792)										_g = (_g + 1);
HXDLIN( 792)										action->addGamepad(button,state,id1);
            									}
            								}
HXDLIN( 792)								{
HXLINE( 792)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_leftP;
HXDLIN( 792)									int state1 = 2;
HXDLIN( 792)									int _g1 = 0;
HXDLIN( 792)									while((_g1 < buttons1->length)){
HXLINE( 792)										int button = buttons1->__get(_g1);
HXDLIN( 792)										_g1 = (_g1 + 1);
HXDLIN( 792)										action1->addGamepad(button,state1,id1);
            									}
            								}
HXDLIN( 792)								{
HXLINE( 792)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_leftR;
HXDLIN( 792)									int state2 = -1;
HXDLIN( 792)									int _g2 = 0;
HXDLIN( 792)									while((_g2 < buttons1->length)){
HXLINE( 792)										int button = buttons1->__get(_g2);
HXDLIN( 792)										_g2 = (_g2 + 1);
HXDLIN( 792)										action2->addGamepad(button,state2,id1);
            									}
            								}
            							}
            							break;
            							case (int)6: {
HXLINE( 792)								{
HXLINE( 792)									 ::flixel::input::actions::FlxActionDigital action = this->_note_right;
HXDLIN( 792)									int state = 1;
HXDLIN( 792)									int _g = 0;
HXDLIN( 792)									while((_g < buttons1->length)){
HXLINE( 792)										int button = buttons1->__get(_g);
HXDLIN( 792)										_g = (_g + 1);
HXDLIN( 792)										action->addGamepad(button,state,id1);
            									}
            								}
HXDLIN( 792)								{
HXLINE( 792)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_rightP;
HXDLIN( 792)									int state1 = 2;
HXDLIN( 792)									int _g1 = 0;
HXDLIN( 792)									while((_g1 < buttons1->length)){
HXLINE( 792)										int button = buttons1->__get(_g1);
HXDLIN( 792)										_g1 = (_g1 + 1);
HXDLIN( 792)										action1->addGamepad(button,state1,id1);
            									}
            								}
HXDLIN( 792)								{
HXLINE( 792)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_rightR;
HXDLIN( 792)									int state2 = -1;
HXDLIN( 792)									int _g2 = 0;
HXDLIN( 792)									while((_g2 < buttons1->length)){
HXLINE( 792)										int button = buttons1->__get(_g2);
HXDLIN( 792)										_g2 = (_g2 + 1);
HXDLIN( 792)										action2->addGamepad(button,state2,id1);
            									}
            								}
            							}
            							break;
            							case (int)7: {
HXLINE( 792)								{
HXLINE( 792)									 ::flixel::input::actions::FlxActionDigital action = this->_note_down;
HXDLIN( 792)									int state = 1;
HXDLIN( 792)									int _g = 0;
HXDLIN( 792)									while((_g < buttons1->length)){
HXLINE( 792)										int button = buttons1->__get(_g);
HXDLIN( 792)										_g = (_g + 1);
HXDLIN( 792)										action->addGamepad(button,state,id1);
            									}
            								}
HXDLIN( 792)								{
HXLINE( 792)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_downP;
HXDLIN( 792)									int state1 = 2;
HXDLIN( 792)									int _g1 = 0;
HXDLIN( 792)									while((_g1 < buttons1->length)){
HXLINE( 792)										int button = buttons1->__get(_g1);
HXDLIN( 792)										_g1 = (_g1 + 1);
HXDLIN( 792)										action1->addGamepad(button,state1,id1);
            									}
            								}
HXDLIN( 792)								{
HXLINE( 792)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_downR;
HXDLIN( 792)									int state2 = -1;
HXDLIN( 792)									int _g2 = 0;
HXDLIN( 792)									while((_g2 < buttons1->length)){
HXLINE( 792)										int button = buttons1->__get(_g2);
HXDLIN( 792)										_g2 = (_g2 + 1);
HXDLIN( 792)										action2->addGamepad(button,state2,id1);
            									}
            								}
            							}
            							break;
            							case (int)8: {
HXLINE( 792)								 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 792)								int state = 2;
HXDLIN( 792)								int _g = 0;
HXDLIN( 792)								while((_g < buttons1->length)){
HXLINE( 792)									int button = buttons1->__get(_g);
HXDLIN( 792)									_g = (_g + 1);
HXDLIN( 792)									action->addGamepad(button,state,id1);
            								}
            							}
            							break;
            							case (int)9: {
HXLINE( 792)								 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 792)								int state = 2;
HXDLIN( 792)								int _g = 0;
HXDLIN( 792)								while((_g < buttons1->length)){
HXLINE( 792)									int button = buttons1->__get(_g);
HXDLIN( 792)									_g = (_g + 1);
HXDLIN( 792)									action->addGamepad(button,state,id1);
            								}
            							}
            							break;
            							case (int)10: {
HXLINE( 792)								 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 792)								int state = 2;
HXDLIN( 792)								int _g = 0;
HXDLIN( 792)								while((_g < buttons1->length)){
HXLINE( 792)									int button = buttons1->__get(_g);
HXDLIN( 792)									_g = (_g + 1);
HXDLIN( 792)									action->addGamepad(button,state,id1);
            								}
            							}
            							break;
            							case (int)11: {
HXLINE( 792)								 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 792)								int state = 2;
HXDLIN( 792)								int _g = 0;
HXDLIN( 792)								while((_g < buttons1->length)){
HXLINE( 792)									int button = buttons1->__get(_g);
HXDLIN( 792)									_g = (_g + 1);
HXDLIN( 792)									action->addGamepad(button,state,id1);
            								}
            							}
            							break;
            						}
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Controls_obj,addDefaultGamepad,(void))

void Controls_obj::bindButtons( ::Control control,int id,::Array< int > buttons){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_815_bindButtons)
HXDLIN( 815)		switch((int)(control->_hx_getIndex())){
            			case (int)0: {
HXDLIN( 815)				{
HXDLIN( 815)					 ::flixel::input::actions::FlxActionDigital action = this->_ui_up;
HXDLIN( 815)					int state = 1;
HXDLIN( 815)					int _g = 0;
HXDLIN( 815)					while((_g < buttons->length)){
HXDLIN( 815)						int button = buttons->__get(_g);
HXDLIN( 815)						_g = (_g + 1);
HXDLIN( 815)						action->addGamepad(button,state,id);
            					}
            				}
HXDLIN( 815)				{
HXDLIN( 815)					 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_upP;
HXDLIN( 815)					int state1 = 2;
HXDLIN( 815)					int _g1 = 0;
HXDLIN( 815)					while((_g1 < buttons->length)){
HXDLIN( 815)						int button = buttons->__get(_g1);
HXDLIN( 815)						_g1 = (_g1 + 1);
HXDLIN( 815)						action1->addGamepad(button,state1,id);
            					}
            				}
HXDLIN( 815)				{
HXDLIN( 815)					 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_upR;
HXDLIN( 815)					int state2 = -1;
HXDLIN( 815)					int _g2 = 0;
HXDLIN( 815)					while((_g2 < buttons->length)){
HXDLIN( 815)						int button = buttons->__get(_g2);
HXDLIN( 815)						_g2 = (_g2 + 1);
HXDLIN( 815)						action2->addGamepad(button,state2,id);
            					}
            				}
            			}
            			break;
            			case (int)1: {
HXDLIN( 815)				{
HXDLIN( 815)					 ::flixel::input::actions::FlxActionDigital action = this->_ui_left;
HXDLIN( 815)					int state = 1;
HXDLIN( 815)					int _g = 0;
HXDLIN( 815)					while((_g < buttons->length)){
HXDLIN( 815)						int button = buttons->__get(_g);
HXDLIN( 815)						_g = (_g + 1);
HXDLIN( 815)						action->addGamepad(button,state,id);
            					}
            				}
HXDLIN( 815)				{
HXDLIN( 815)					 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_leftP;
HXDLIN( 815)					int state1 = 2;
HXDLIN( 815)					int _g1 = 0;
HXDLIN( 815)					while((_g1 < buttons->length)){
HXDLIN( 815)						int button = buttons->__get(_g1);
HXDLIN( 815)						_g1 = (_g1 + 1);
HXDLIN( 815)						action1->addGamepad(button,state1,id);
            					}
            				}
HXDLIN( 815)				{
HXDLIN( 815)					 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_leftR;
HXDLIN( 815)					int state2 = -1;
HXDLIN( 815)					int _g2 = 0;
HXDLIN( 815)					while((_g2 < buttons->length)){
HXDLIN( 815)						int button = buttons->__get(_g2);
HXDLIN( 815)						_g2 = (_g2 + 1);
HXDLIN( 815)						action2->addGamepad(button,state2,id);
            					}
            				}
            			}
            			break;
            			case (int)2: {
HXDLIN( 815)				{
HXDLIN( 815)					 ::flixel::input::actions::FlxActionDigital action = this->_ui_right;
HXDLIN( 815)					int state = 1;
HXDLIN( 815)					int _g = 0;
HXDLIN( 815)					while((_g < buttons->length)){
HXDLIN( 815)						int button = buttons->__get(_g);
HXDLIN( 815)						_g = (_g + 1);
HXDLIN( 815)						action->addGamepad(button,state,id);
            					}
            				}
HXDLIN( 815)				{
HXDLIN( 815)					 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_rightP;
HXDLIN( 815)					int state1 = 2;
HXDLIN( 815)					int _g1 = 0;
HXDLIN( 815)					while((_g1 < buttons->length)){
HXDLIN( 815)						int button = buttons->__get(_g1);
HXDLIN( 815)						_g1 = (_g1 + 1);
HXDLIN( 815)						action1->addGamepad(button,state1,id);
            					}
            				}
HXDLIN( 815)				{
HXDLIN( 815)					 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_rightR;
HXDLIN( 815)					int state2 = -1;
HXDLIN( 815)					int _g2 = 0;
HXDLIN( 815)					while((_g2 < buttons->length)){
HXDLIN( 815)						int button = buttons->__get(_g2);
HXDLIN( 815)						_g2 = (_g2 + 1);
HXDLIN( 815)						action2->addGamepad(button,state2,id);
            					}
            				}
            			}
            			break;
            			case (int)3: {
HXDLIN( 815)				{
HXDLIN( 815)					 ::flixel::input::actions::FlxActionDigital action = this->_ui_down;
HXDLIN( 815)					int state = 1;
HXDLIN( 815)					int _g = 0;
HXDLIN( 815)					while((_g < buttons->length)){
HXDLIN( 815)						int button = buttons->__get(_g);
HXDLIN( 815)						_g = (_g + 1);
HXDLIN( 815)						action->addGamepad(button,state,id);
            					}
            				}
HXDLIN( 815)				{
HXDLIN( 815)					 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_downP;
HXDLIN( 815)					int state1 = 2;
HXDLIN( 815)					int _g1 = 0;
HXDLIN( 815)					while((_g1 < buttons->length)){
HXDLIN( 815)						int button = buttons->__get(_g1);
HXDLIN( 815)						_g1 = (_g1 + 1);
HXDLIN( 815)						action1->addGamepad(button,state1,id);
            					}
            				}
HXDLIN( 815)				{
HXDLIN( 815)					 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_downR;
HXDLIN( 815)					int state2 = -1;
HXDLIN( 815)					int _g2 = 0;
HXDLIN( 815)					while((_g2 < buttons->length)){
HXDLIN( 815)						int button = buttons->__get(_g2);
HXDLIN( 815)						_g2 = (_g2 + 1);
HXDLIN( 815)						action2->addGamepad(button,state2,id);
            					}
            				}
            			}
            			break;
            			case (int)4: {
HXDLIN( 815)				{
HXDLIN( 815)					 ::flixel::input::actions::FlxActionDigital action = this->_note_up;
HXDLIN( 815)					int state = 1;
HXDLIN( 815)					int _g = 0;
HXDLIN( 815)					while((_g < buttons->length)){
HXDLIN( 815)						int button = buttons->__get(_g);
HXDLIN( 815)						_g = (_g + 1);
HXDLIN( 815)						action->addGamepad(button,state,id);
            					}
            				}
HXDLIN( 815)				{
HXDLIN( 815)					 ::flixel::input::actions::FlxActionDigital action1 = this->_note_upP;
HXDLIN( 815)					int state1 = 2;
HXDLIN( 815)					int _g1 = 0;
HXDLIN( 815)					while((_g1 < buttons->length)){
HXDLIN( 815)						int button = buttons->__get(_g1);
HXDLIN( 815)						_g1 = (_g1 + 1);
HXDLIN( 815)						action1->addGamepad(button,state1,id);
            					}
            				}
HXDLIN( 815)				{
HXDLIN( 815)					 ::flixel::input::actions::FlxActionDigital action2 = this->_note_upR;
HXDLIN( 815)					int state2 = -1;
HXDLIN( 815)					int _g2 = 0;
HXDLIN( 815)					while((_g2 < buttons->length)){
HXDLIN( 815)						int button = buttons->__get(_g2);
HXDLIN( 815)						_g2 = (_g2 + 1);
HXDLIN( 815)						action2->addGamepad(button,state2,id);
            					}
            				}
            			}
            			break;
            			case (int)5: {
HXDLIN( 815)				{
HXDLIN( 815)					 ::flixel::input::actions::FlxActionDigital action = this->_note_left;
HXDLIN( 815)					int state = 1;
HXDLIN( 815)					int _g = 0;
HXDLIN( 815)					while((_g < buttons->length)){
HXDLIN( 815)						int button = buttons->__get(_g);
HXDLIN( 815)						_g = (_g + 1);
HXDLIN( 815)						action->addGamepad(button,state,id);
            					}
            				}
HXDLIN( 815)				{
HXDLIN( 815)					 ::flixel::input::actions::FlxActionDigital action1 = this->_note_leftP;
HXDLIN( 815)					int state1 = 2;
HXDLIN( 815)					int _g1 = 0;
HXDLIN( 815)					while((_g1 < buttons->length)){
HXDLIN( 815)						int button = buttons->__get(_g1);
HXDLIN( 815)						_g1 = (_g1 + 1);
HXDLIN( 815)						action1->addGamepad(button,state1,id);
            					}
            				}
HXDLIN( 815)				{
HXDLIN( 815)					 ::flixel::input::actions::FlxActionDigital action2 = this->_note_leftR;
HXDLIN( 815)					int state2 = -1;
HXDLIN( 815)					int _g2 = 0;
HXDLIN( 815)					while((_g2 < buttons->length)){
HXDLIN( 815)						int button = buttons->__get(_g2);
HXDLIN( 815)						_g2 = (_g2 + 1);
HXDLIN( 815)						action2->addGamepad(button,state2,id);
            					}
            				}
            			}
            			break;
            			case (int)6: {
HXDLIN( 815)				{
HXDLIN( 815)					 ::flixel::input::actions::FlxActionDigital action = this->_note_right;
HXDLIN( 815)					int state = 1;
HXDLIN( 815)					int _g = 0;
HXDLIN( 815)					while((_g < buttons->length)){
HXDLIN( 815)						int button = buttons->__get(_g);
HXDLIN( 815)						_g = (_g + 1);
HXDLIN( 815)						action->addGamepad(button,state,id);
            					}
            				}
HXDLIN( 815)				{
HXDLIN( 815)					 ::flixel::input::actions::FlxActionDigital action1 = this->_note_rightP;
HXDLIN( 815)					int state1 = 2;
HXDLIN( 815)					int _g1 = 0;
HXDLIN( 815)					while((_g1 < buttons->length)){
HXDLIN( 815)						int button = buttons->__get(_g1);
HXDLIN( 815)						_g1 = (_g1 + 1);
HXDLIN( 815)						action1->addGamepad(button,state1,id);
            					}
            				}
HXDLIN( 815)				{
HXDLIN( 815)					 ::flixel::input::actions::FlxActionDigital action2 = this->_note_rightR;
HXDLIN( 815)					int state2 = -1;
HXDLIN( 815)					int _g2 = 0;
HXDLIN( 815)					while((_g2 < buttons->length)){
HXDLIN( 815)						int button = buttons->__get(_g2);
HXDLIN( 815)						_g2 = (_g2 + 1);
HXDLIN( 815)						action2->addGamepad(button,state2,id);
            					}
            				}
            			}
            			break;
            			case (int)7: {
HXDLIN( 815)				{
HXDLIN( 815)					 ::flixel::input::actions::FlxActionDigital action = this->_note_down;
HXDLIN( 815)					int state = 1;
HXDLIN( 815)					int _g = 0;
HXDLIN( 815)					while((_g < buttons->length)){
HXDLIN( 815)						int button = buttons->__get(_g);
HXDLIN( 815)						_g = (_g + 1);
HXDLIN( 815)						action->addGamepad(button,state,id);
            					}
            				}
HXDLIN( 815)				{
HXDLIN( 815)					 ::flixel::input::actions::FlxActionDigital action1 = this->_note_downP;
HXDLIN( 815)					int state1 = 2;
HXDLIN( 815)					int _g1 = 0;
HXDLIN( 815)					while((_g1 < buttons->length)){
HXDLIN( 815)						int button = buttons->__get(_g1);
HXDLIN( 815)						_g1 = (_g1 + 1);
HXDLIN( 815)						action1->addGamepad(button,state1,id);
            					}
            				}
HXDLIN( 815)				{
HXDLIN( 815)					 ::flixel::input::actions::FlxActionDigital action2 = this->_note_downR;
HXDLIN( 815)					int state2 = -1;
HXDLIN( 815)					int _g2 = 0;
HXDLIN( 815)					while((_g2 < buttons->length)){
HXDLIN( 815)						int button = buttons->__get(_g2);
HXDLIN( 815)						_g2 = (_g2 + 1);
HXDLIN( 815)						action2->addGamepad(button,state2,id);
            					}
            				}
            			}
            			break;
            			case (int)8: {
HXDLIN( 815)				 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 815)				int state = 2;
HXDLIN( 815)				int _g = 0;
HXDLIN( 815)				while((_g < buttons->length)){
HXDLIN( 815)					int button = buttons->__get(_g);
HXDLIN( 815)					_g = (_g + 1);
HXDLIN( 815)					action->addGamepad(button,state,id);
            				}
            			}
            			break;
            			case (int)9: {
HXDLIN( 815)				 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 815)				int state = 2;
HXDLIN( 815)				int _g = 0;
HXDLIN( 815)				while((_g < buttons->length)){
HXDLIN( 815)					int button = buttons->__get(_g);
HXDLIN( 815)					_g = (_g + 1);
HXDLIN( 815)					action->addGamepad(button,state,id);
            				}
            			}
            			break;
            			case (int)10: {
HXDLIN( 815)				 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 815)				int state = 2;
HXDLIN( 815)				int _g = 0;
HXDLIN( 815)				while((_g < buttons->length)){
HXDLIN( 815)					int button = buttons->__get(_g);
HXDLIN( 815)					_g = (_g + 1);
HXDLIN( 815)					action->addGamepad(button,state,id);
            				}
            			}
            			break;
            			case (int)11: {
HXDLIN( 815)				 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 815)				int state = 2;
HXDLIN( 815)				int _g = 0;
HXDLIN( 815)				while((_g < buttons->length)){
HXDLIN( 815)					int button = buttons->__get(_g);
HXDLIN( 815)					_g = (_g + 1);
HXDLIN( 815)					action->addGamepad(button,state,id);
            				}
            			}
            			break;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(Controls_obj,bindButtons,(void))

void Controls_obj::unbindButtons( ::Control control,int gamepadID,::Array< int > buttons){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_828_unbindButtons)
HXDLIN( 828)		switch((int)(control->_hx_getIndex())){
            			case (int)0: {
HXDLIN( 828)				::Controls_obj::removeButtons(this->_ui_up,gamepadID,buttons);
HXDLIN( 828)				::Controls_obj::removeButtons(this->_ui_upP,gamepadID,buttons);
HXDLIN( 828)				::Controls_obj::removeButtons(this->_ui_upR,gamepadID,buttons);
            			}
            			break;
            			case (int)1: {
HXDLIN( 828)				::Controls_obj::removeButtons(this->_ui_left,gamepadID,buttons);
HXDLIN( 828)				::Controls_obj::removeButtons(this->_ui_leftP,gamepadID,buttons);
HXDLIN( 828)				::Controls_obj::removeButtons(this->_ui_leftR,gamepadID,buttons);
            			}
            			break;
            			case (int)2: {
HXDLIN( 828)				::Controls_obj::removeButtons(this->_ui_right,gamepadID,buttons);
HXDLIN( 828)				::Controls_obj::removeButtons(this->_ui_rightP,gamepadID,buttons);
HXDLIN( 828)				::Controls_obj::removeButtons(this->_ui_rightR,gamepadID,buttons);
            			}
            			break;
            			case (int)3: {
HXDLIN( 828)				::Controls_obj::removeButtons(this->_ui_down,gamepadID,buttons);
HXDLIN( 828)				::Controls_obj::removeButtons(this->_ui_downP,gamepadID,buttons);
HXDLIN( 828)				::Controls_obj::removeButtons(this->_ui_downR,gamepadID,buttons);
            			}
            			break;
            			case (int)4: {
HXDLIN( 828)				::Controls_obj::removeButtons(this->_note_up,gamepadID,buttons);
HXDLIN( 828)				::Controls_obj::removeButtons(this->_note_upP,gamepadID,buttons);
HXDLIN( 828)				::Controls_obj::removeButtons(this->_note_upR,gamepadID,buttons);
            			}
            			break;
            			case (int)5: {
HXDLIN( 828)				::Controls_obj::removeButtons(this->_note_left,gamepadID,buttons);
HXDLIN( 828)				::Controls_obj::removeButtons(this->_note_leftP,gamepadID,buttons);
HXDLIN( 828)				::Controls_obj::removeButtons(this->_note_leftR,gamepadID,buttons);
            			}
            			break;
            			case (int)6: {
HXDLIN( 828)				::Controls_obj::removeButtons(this->_note_right,gamepadID,buttons);
HXDLIN( 828)				::Controls_obj::removeButtons(this->_note_rightP,gamepadID,buttons);
HXDLIN( 828)				::Controls_obj::removeButtons(this->_note_rightR,gamepadID,buttons);
            			}
            			break;
            			case (int)7: {
HXDLIN( 828)				::Controls_obj::removeButtons(this->_note_down,gamepadID,buttons);
HXDLIN( 828)				::Controls_obj::removeButtons(this->_note_downP,gamepadID,buttons);
HXDLIN( 828)				::Controls_obj::removeButtons(this->_note_downR,gamepadID,buttons);
            			}
            			break;
            			case (int)8: {
HXDLIN( 828)				::Controls_obj::removeButtons(this->_reset,gamepadID,buttons);
            			}
            			break;
            			case (int)9: {
HXDLIN( 828)				::Controls_obj::removeButtons(this->_accept,gamepadID,buttons);
            			}
            			break;
            			case (int)10: {
HXDLIN( 828)				::Controls_obj::removeButtons(this->_back,gamepadID,buttons);
            			}
            			break;
            			case (int)11: {
HXDLIN( 828)				::Controls_obj::removeButtons(this->_pause,gamepadID,buttons);
            			}
            			break;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(Controls_obj,unbindButtons,(void))

::Array< int > Controls_obj::getInputsFor( ::Control control, ::Device device,::Array< int > list){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_852_getInputsFor)
HXLINE( 853)		if (::hx::IsNull( list )) {
HXLINE( 854)			list = ::Array_obj< int >::__new(0);
            		}
HXLINE( 856)		switch((int)(device->_hx_getIndex())){
            			case (int)0: {
HXLINE( 859)				int _g = 0;
HXDLIN( 859)				::Array< ::Dynamic> _g1 = this->getActionFromControl(control)->inputs;
HXDLIN( 859)				while((_g < _g1->length)){
HXLINE( 859)					 ::flixel::input::actions::FlxActionInput input = _g1->__get(_g).StaticCast<  ::flixel::input::actions::FlxActionInput >();
HXDLIN( 859)					_g = (_g + 1);
HXLINE( 861)					if (::hx::IsPointerEq( input->device,::flixel::input::actions::FlxInputDevice_obj::KEYBOARD_dyn() )) {
HXLINE( 862)						list->push(input->inputID);
            					}
            				}
            			}
            			break;
            			case (int)1: {
HXLINE( 864)				int id = device->_hx_getInt(0);
HXLINE( 865)				{
HXLINE( 865)					int _g = 0;
HXDLIN( 865)					::Array< ::Dynamic> _g1 = this->getActionFromControl(control)->inputs;
HXDLIN( 865)					while((_g < _g1->length)){
HXLINE( 865)						 ::flixel::input::actions::FlxActionInput input = _g1->__get(_g).StaticCast<  ::flixel::input::actions::FlxActionInput >();
HXDLIN( 865)						_g = (_g + 1);
HXLINE( 867)						if ((input->deviceID == id)) {
HXLINE( 868)							list->push(input->inputID);
            						}
            					}
            				}
            			}
            			break;
            		}
HXLINE( 871)		return list;
            	}


HX_DEFINE_DYNAMIC_FUNC3(Controls_obj,getInputsFor,return )

void Controls_obj::removeDevice( ::Device device){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_876_removeDevice)
HXDLIN( 876)		switch((int)(device->_hx_getIndex())){
            			case (int)0: {
HXLINE( 879)				this->setKeyboardScheme(::KeyboardScheme_obj::None_dyn(),null());
            			}
            			break;
            			case (int)1: {
HXLINE( 880)				int id = device->_hx_getInt(0);
HXLINE( 881)				this->removeGamepad(id);
            			}
            			break;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Controls_obj,removeDevice,(void))

void Controls_obj::init(){
            	HX_GC_STACKFRAME(&_hx_pos_948b5caa279cd923_433_init)
HXLINE( 434)		 ::flixel::input::actions::FlxActionManager actions =  ::flixel::input::actions::FlxActionManager_obj::__alloc( HX_CTX );
HXLINE( 435)		::flixel::FlxG_obj::inputs->add_flixel_input_actions_FlxActionManager(actions);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,init,(void))

void Controls_obj::addKeys( ::flixel::input::actions::FlxActionDigital action,::Array< int > keys,int state){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_615_addKeys)
HXDLIN( 615)		int _g = 0;
HXDLIN( 615)		while((_g < keys->length)){
HXDLIN( 615)			int key = keys->__get(_g);
HXDLIN( 615)			_g = (_g + 1);
HXLINE( 616)			if ((key != -1)) {
HXLINE( 617)				action->addKey(key,state);
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Controls_obj,addKeys,(void))

void Controls_obj::removeKeys( ::flixel::input::actions::FlxActionDigital action,::Array< int > keys){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_621_removeKeys)
HXLINE( 622)		int i = action->inputs->length;
HXLINE( 623)		while(true){
HXLINE( 623)			i = (i - 1);
HXDLIN( 623)			if (!(((i + 1) > 0))) {
HXLINE( 623)				goto _hx_goto_1277;
            			}
HXLINE( 625)			 ::flixel::input::actions::FlxActionInput input = action->inputs->__get(i).StaticCast<  ::flixel::input::actions::FlxActionInput >();
HXLINE( 626)			bool _hx_tmp;
HXDLIN( 626)			if (::hx::IsPointerEq( input->device,::flixel::input::actions::FlxInputDevice_obj::KEYBOARD_dyn() )) {
HXLINE( 626)				_hx_tmp = (keys->indexOf(input->inputID,null()) != -1);
            			}
            			else {
HXLINE( 626)				_hx_tmp = false;
            			}
HXDLIN( 626)			if (_hx_tmp) {
HXLINE( 627)				action->remove(input,null());
            			}
            		}
            		_hx_goto_1277:;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Controls_obj,removeKeys,(void))

void Controls_obj::addButtons( ::flixel::input::actions::FlxActionDigital action,::Array< int > buttons,int state,int id){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_836_addButtons)
HXDLIN( 836)		int _g = 0;
HXDLIN( 836)		while((_g < buttons->length)){
HXDLIN( 836)			int button = buttons->__get(_g);
HXDLIN( 836)			_g = (_g + 1);
HXLINE( 837)			action->addGamepad(button,state,id);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Controls_obj,addButtons,(void))

void Controls_obj::removeButtons( ::flixel::input::actions::FlxActionDigital action,int gamepadID,::Array< int > buttons){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_841_removeButtons)
HXLINE( 842)		int i = action->inputs->length;
HXLINE( 843)		while(true){
HXLINE( 843)			i = (i - 1);
HXDLIN( 843)			if (!(((i + 1) > 0))) {
HXLINE( 843)				goto _hx_goto_1281;
            			}
HXLINE( 845)			 ::flixel::input::actions::FlxActionInput input = action->inputs->__get(i).StaticCast<  ::flixel::input::actions::FlxActionInput >();
HXLINE( 846)			bool _hx_tmp;
HXDLIN( 846)			bool _hx_tmp1;
HXDLIN( 846)			if (::hx::IsPointerEq( input->device,::flixel::input::actions::FlxInputDevice_obj::GAMEPAD_dyn() )) {
HXLINE( 846)				if ((gamepadID != -1)) {
HXLINE( 846)					_hx_tmp1 = (input->deviceID == gamepadID);
            				}
            				else {
HXLINE( 846)					_hx_tmp1 = true;
            				}
            			}
            			else {
HXLINE( 846)				_hx_tmp1 = false;
            			}
HXDLIN( 846)			if (_hx_tmp1) {
HXLINE( 846)				_hx_tmp = (buttons->indexOf(input->inputID,null()) != -1);
            			}
            			else {
HXLINE( 846)				_hx_tmp = false;
            			}
HXDLIN( 846)			if (_hx_tmp) {
HXLINE( 847)				action->remove(input,null());
            			}
            		}
            		_hx_goto_1281:;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Controls_obj,removeButtons,(void))

bool Controls_obj::isDevice( ::flixel::input::actions::FlxActionInput input, ::Device device){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_887_isDevice)
HXDLIN( 887)		switch((int)(device->_hx_getIndex())){
            			case (int)0: {
HXLINE( 889)				return ::hx::IsPointerEq( input->device,::flixel::input::actions::FlxInputDevice_obj::KEYBOARD_dyn() );
            			}
            			break;
            			case (int)1: {
HXLINE( 890)				int id = device->_hx_getInt(0);
HXDLIN( 890)				if (::hx::IsPointerEq( input->device,::flixel::input::actions::FlxInputDevice_obj::GAMEPAD_dyn() )) {
HXLINE( 890)					if ((id != -1)) {
HXLINE( 890)						return (input->deviceID == id);
            					}
            					else {
HXLINE( 890)						return true;
            					}
            				}
            				else {
HXLINE( 890)					return false;
            				}
            			}
            			break;
            		}
HXLINE( 887)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Controls_obj,isDevice,return )

bool Controls_obj::isGamepad( ::flixel::input::actions::FlxActionInput input,int deviceID){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_896_isGamepad)
HXDLIN( 896)		if (::hx::IsPointerEq( input->device,::flixel::input::actions::FlxInputDevice_obj::GAMEPAD_dyn() )) {
HXDLIN( 896)			if ((deviceID != -1)) {
HXDLIN( 896)				return (input->deviceID == deviceID);
            			}
            			else {
HXDLIN( 896)				return true;
            			}
            		}
            		else {
HXDLIN( 896)			return false;
            		}
HXDLIN( 896)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Controls_obj,isGamepad,return )


::hx::ObjectPtr< Controls_obj > Controls_obj::__new(::String name, ::KeyboardScheme __o_scheme) {
	::hx::ObjectPtr< Controls_obj > __this = new Controls_obj();
	__this->__construct(name,__o_scheme);
	return __this;
}

::hx::ObjectPtr< Controls_obj > Controls_obj::__alloc(::hx::Ctx *_hx_ctx,::String name, ::KeyboardScheme __o_scheme) {
	Controls_obj *__this = (Controls_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Controls_obj), true, "Controls"));
	*(void **)__this = Controls_obj::_hx_vtable;
	__this->__construct(name,__o_scheme);
	return __this;
}

Controls_obj::Controls_obj()
{
}

void Controls_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Controls);
	HX_MARK_MEMBER_NAME(_ui_up,"_ui_up");
	HX_MARK_MEMBER_NAME(_ui_left,"_ui_left");
	HX_MARK_MEMBER_NAME(_ui_right,"_ui_right");
	HX_MARK_MEMBER_NAME(_ui_down,"_ui_down");
	HX_MARK_MEMBER_NAME(_ui_upP,"_ui_upP");
	HX_MARK_MEMBER_NAME(_ui_leftP,"_ui_leftP");
	HX_MARK_MEMBER_NAME(_ui_rightP,"_ui_rightP");
	HX_MARK_MEMBER_NAME(_ui_downP,"_ui_downP");
	HX_MARK_MEMBER_NAME(_ui_upR,"_ui_upR");
	HX_MARK_MEMBER_NAME(_ui_leftR,"_ui_leftR");
	HX_MARK_MEMBER_NAME(_ui_rightR,"_ui_rightR");
	HX_MARK_MEMBER_NAME(_ui_downR,"_ui_downR");
	HX_MARK_MEMBER_NAME(_note_up,"_note_up");
	HX_MARK_MEMBER_NAME(_note_left,"_note_left");
	HX_MARK_MEMBER_NAME(_note_right,"_note_right");
	HX_MARK_MEMBER_NAME(_note_down,"_note_down");
	HX_MARK_MEMBER_NAME(_note_upP,"_note_upP");
	HX_MARK_MEMBER_NAME(_note_leftP,"_note_leftP");
	HX_MARK_MEMBER_NAME(_note_rightP,"_note_rightP");
	HX_MARK_MEMBER_NAME(_note_downP,"_note_downP");
	HX_MARK_MEMBER_NAME(_note_upR,"_note_upR");
	HX_MARK_MEMBER_NAME(_note_leftR,"_note_leftR");
	HX_MARK_MEMBER_NAME(_note_rightR,"_note_rightR");
	HX_MARK_MEMBER_NAME(_note_downR,"_note_downR");
	HX_MARK_MEMBER_NAME(_accept,"_accept");
	HX_MARK_MEMBER_NAME(_back,"_back");
	HX_MARK_MEMBER_NAME(_pause,"_pause");
	HX_MARK_MEMBER_NAME(_reset,"_reset");
	HX_MARK_MEMBER_NAME(byName,"byName");
	HX_MARK_MEMBER_NAME(gamepadsAdded,"gamepadsAdded");
	HX_MARK_MEMBER_NAME(keyboardScheme,"keyboardScheme");
	 ::flixel::input::actions::FlxActionSet_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Controls_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_ui_up,"_ui_up");
	HX_VISIT_MEMBER_NAME(_ui_left,"_ui_left");
	HX_VISIT_MEMBER_NAME(_ui_right,"_ui_right");
	HX_VISIT_MEMBER_NAME(_ui_down,"_ui_down");
	HX_VISIT_MEMBER_NAME(_ui_upP,"_ui_upP");
	HX_VISIT_MEMBER_NAME(_ui_leftP,"_ui_leftP");
	HX_VISIT_MEMBER_NAME(_ui_rightP,"_ui_rightP");
	HX_VISIT_MEMBER_NAME(_ui_downP,"_ui_downP");
	HX_VISIT_MEMBER_NAME(_ui_upR,"_ui_upR");
	HX_VISIT_MEMBER_NAME(_ui_leftR,"_ui_leftR");
	HX_VISIT_MEMBER_NAME(_ui_rightR,"_ui_rightR");
	HX_VISIT_MEMBER_NAME(_ui_downR,"_ui_downR");
	HX_VISIT_MEMBER_NAME(_note_up,"_note_up");
	HX_VISIT_MEMBER_NAME(_note_left,"_note_left");
	HX_VISIT_MEMBER_NAME(_note_right,"_note_right");
	HX_VISIT_MEMBER_NAME(_note_down,"_note_down");
	HX_VISIT_MEMBER_NAME(_note_upP,"_note_upP");
	HX_VISIT_MEMBER_NAME(_note_leftP,"_note_leftP");
	HX_VISIT_MEMBER_NAME(_note_rightP,"_note_rightP");
	HX_VISIT_MEMBER_NAME(_note_downP,"_note_downP");
	HX_VISIT_MEMBER_NAME(_note_upR,"_note_upR");
	HX_VISIT_MEMBER_NAME(_note_leftR,"_note_leftR");
	HX_VISIT_MEMBER_NAME(_note_rightR,"_note_rightR");
	HX_VISIT_MEMBER_NAME(_note_downR,"_note_downR");
	HX_VISIT_MEMBER_NAME(_accept,"_accept");
	HX_VISIT_MEMBER_NAME(_back,"_back");
	HX_VISIT_MEMBER_NAME(_pause,"_pause");
	HX_VISIT_MEMBER_NAME(_reset,"_reset");
	HX_VISIT_MEMBER_NAME(byName,"byName");
	HX_VISIT_MEMBER_NAME(gamepadsAdded,"gamepadsAdded");
	HX_VISIT_MEMBER_NAME(keyboardScheme,"keyboardScheme");
	 ::flixel::input::actions::FlxActionSet_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Controls_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"BACK") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_BACK() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_back") ) { return ::hx::Val( _back ); }
		if (HX_FIELD_EQ(inName,"UI_UP") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_UI_UP() ); }
		if (HX_FIELD_EQ(inName,"PAUSE") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_PAUSE() ); }
		if (HX_FIELD_EQ(inName,"RESET") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_RESET() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_ui_up") ) { return ::hx::Val( _ui_up ); }
		if (HX_FIELD_EQ(inName,"_pause") ) { return ::hx::Val( _pause ); }
		if (HX_FIELD_EQ(inName,"_reset") ) { return ::hx::Val( _reset ); }
		if (HX_FIELD_EQ(inName,"byName") ) { return ::hx::Val( byName ); }
		if (HX_FIELD_EQ(inName,"ACCEPT") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_ACCEPT() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		if (HX_FIELD_EQ(inName,"copyTo") ) { return ::hx::Val( copyTo_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_ui_upP") ) { return ::hx::Val( _ui_upP ); }
		if (HX_FIELD_EQ(inName,"_ui_upR") ) { return ::hx::Val( _ui_upR ); }
		if (HX_FIELD_EQ(inName,"_accept") ) { return ::hx::Val( _accept ); }
		if (HX_FIELD_EQ(inName,"UI_LEFT") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_UI_LEFT() ); }
		if (HX_FIELD_EQ(inName,"UI_DOWN") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_UI_DOWN() ); }
		if (HX_FIELD_EQ(inName,"UI_UP_P") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_UI_UP_P() ); }
		if (HX_FIELD_EQ(inName,"UI_UP_R") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_UI_UP_R() ); }
		if (HX_FIELD_EQ(inName,"NOTE_UP") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_NOTE_UP() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_ui_left") ) { return ::hx::Val( _ui_left ); }
		if (HX_FIELD_EQ(inName,"_ui_down") ) { return ::hx::Val( _ui_down ); }
		if (HX_FIELD_EQ(inName,"_note_up") ) { return ::hx::Val( _note_up ); }
		if (HX_FIELD_EQ(inName,"UI_RIGHT") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_UI_RIGHT() ); }
		if (HX_FIELD_EQ(inName,"get_BACK") ) { return ::hx::Val( get_BACK_dyn() ); }
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return ::hx::Val( copyFrom_dyn() ); }
		if (HX_FIELD_EQ(inName,"bindKeys") ) { return ::hx::Val( bindKeys_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_ui_right") ) { return ::hx::Val( _ui_right ); }
		if (HX_FIELD_EQ(inName,"_ui_leftP") ) { return ::hx::Val( _ui_leftP ); }
		if (HX_FIELD_EQ(inName,"_ui_downP") ) { return ::hx::Val( _ui_downP ); }
		if (HX_FIELD_EQ(inName,"_ui_leftR") ) { return ::hx::Val( _ui_leftR ); }
		if (HX_FIELD_EQ(inName,"_ui_downR") ) { return ::hx::Val( _ui_downR ); }
		if (HX_FIELD_EQ(inName,"_note_upP") ) { return ::hx::Val( _note_upP ); }
		if (HX_FIELD_EQ(inName,"_note_upR") ) { return ::hx::Val( _note_upR ); }
		if (HX_FIELD_EQ(inName,"get_UI_UP") ) { return ::hx::Val( get_UI_UP_dyn() ); }
		if (HX_FIELD_EQ(inName,"UI_LEFT_P") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_UI_LEFT_P() ); }
		if (HX_FIELD_EQ(inName,"UI_DOWN_P") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_UI_DOWN_P() ); }
		if (HX_FIELD_EQ(inName,"UI_LEFT_R") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_UI_LEFT_R() ); }
		if (HX_FIELD_EQ(inName,"UI_DOWN_R") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_UI_DOWN_R() ); }
		if (HX_FIELD_EQ(inName,"NOTE_LEFT") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_NOTE_LEFT() ); }
		if (HX_FIELD_EQ(inName,"NOTE_DOWN") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_NOTE_DOWN() ); }
		if (HX_FIELD_EQ(inName,"NOTE_UP_P") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_NOTE_UP_P() ); }
		if (HX_FIELD_EQ(inName,"NOTE_UP_R") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_NOTE_UP_R() ); }
		if (HX_FIELD_EQ(inName,"get_PAUSE") ) { return ::hx::Val( get_PAUSE_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_RESET") ) { return ::hx::Val( get_RESET_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_ui_rightP") ) { return ::hx::Val( _ui_rightP ); }
		if (HX_FIELD_EQ(inName,"_ui_rightR") ) { return ::hx::Val( _ui_rightR ); }
		if (HX_FIELD_EQ(inName,"_note_left") ) { return ::hx::Val( _note_left ); }
		if (HX_FIELD_EQ(inName,"_note_down") ) { return ::hx::Val( _note_down ); }
		if (HX_FIELD_EQ(inName,"UI_RIGHT_P") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_UI_RIGHT_P() ); }
		if (HX_FIELD_EQ(inName,"UI_RIGHT_R") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_UI_RIGHT_R() ); }
		if (HX_FIELD_EQ(inName,"NOTE_RIGHT") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_NOTE_RIGHT() ); }
		if (HX_FIELD_EQ(inName,"get_ACCEPT") ) { return ::hx::Val( get_ACCEPT_dyn() ); }
		if (HX_FIELD_EQ(inName,"unbindKeys") ) { return ::hx::Val( unbindKeys_dyn() ); }
		if (HX_FIELD_EQ(inName,"addGamepad") ) { return ::hx::Val( addGamepad_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_note_right") ) { return ::hx::Val( _note_right ); }
		if (HX_FIELD_EQ(inName,"_note_leftP") ) { return ::hx::Val( _note_leftP ); }
		if (HX_FIELD_EQ(inName,"_note_downP") ) { return ::hx::Val( _note_downP ); }
		if (HX_FIELD_EQ(inName,"_note_leftR") ) { return ::hx::Val( _note_leftR ); }
		if (HX_FIELD_EQ(inName,"_note_downR") ) { return ::hx::Val( _note_downR ); }
		if (HX_FIELD_EQ(inName,"get_UI_LEFT") ) { return ::hx::Val( get_UI_LEFT_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_UI_DOWN") ) { return ::hx::Val( get_UI_DOWN_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_UI_UP_P") ) { return ::hx::Val( get_UI_UP_P_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_UI_UP_R") ) { return ::hx::Val( get_UI_UP_R_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_NOTE_UP") ) { return ::hx::Val( get_NOTE_UP_dyn() ); }
		if (HX_FIELD_EQ(inName,"NOTE_LEFT_P") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_NOTE_LEFT_P() ); }
		if (HX_FIELD_EQ(inName,"NOTE_DOWN_P") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_NOTE_DOWN_P() ); }
		if (HX_FIELD_EQ(inName,"NOTE_LEFT_R") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_NOTE_LEFT_R() ); }
		if (HX_FIELD_EQ(inName,"NOTE_DOWN_R") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_NOTE_DOWN_R() ); }
		if (HX_FIELD_EQ(inName,"checkByName") ) { return ::hx::Val( checkByName_dyn() ); }
		if (HX_FIELD_EQ(inName,"bindButtons") ) { return ::hx::Val( bindButtons_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_note_rightP") ) { return ::hx::Val( _note_rightP ); }
		if (HX_FIELD_EQ(inName,"_note_rightR") ) { return ::hx::Val( _note_rightR ); }
		if (HX_FIELD_EQ(inName,"get_UI_RIGHT") ) { return ::hx::Val( get_UI_RIGHT_dyn() ); }
		if (HX_FIELD_EQ(inName,"NOTE_RIGHT_P") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_NOTE_RIGHT_P() ); }
		if (HX_FIELD_EQ(inName,"NOTE_RIGHT_R") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_NOTE_RIGHT_R() ); }
		if (HX_FIELD_EQ(inName,"forEachBound") ) { return ::hx::Val( forEachBound_dyn() ); }
		if (HX_FIELD_EQ(inName,"getInputsFor") ) { return ::hx::Val( getInputsFor_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeDevice") ) { return ::hx::Val( removeDevice_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"gamepadsAdded") ) { return ::hx::Val( gamepadsAdded ); }
		if (HX_FIELD_EQ(inName,"get_UI_LEFT_P") ) { return ::hx::Val( get_UI_LEFT_P_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_UI_DOWN_P") ) { return ::hx::Val( get_UI_DOWN_P_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_UI_LEFT_R") ) { return ::hx::Val( get_UI_LEFT_R_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_UI_DOWN_R") ) { return ::hx::Val( get_UI_DOWN_R_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_NOTE_LEFT") ) { return ::hx::Val( get_NOTE_LEFT_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_NOTE_DOWN") ) { return ::hx::Val( get_NOTE_DOWN_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_NOTE_UP_P") ) { return ::hx::Val( get_NOTE_UP_P_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_NOTE_UP_R") ) { return ::hx::Val( get_NOTE_UP_R_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeGamepad") ) { return ::hx::Val( removeGamepad_dyn() ); }
		if (HX_FIELD_EQ(inName,"unbindButtons") ) { return ::hx::Val( unbindButtons_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"keyboardScheme") ) { return ::hx::Val( keyboardScheme ); }
		if (HX_FIELD_EQ(inName,"get_UI_RIGHT_P") ) { return ::hx::Val( get_UI_RIGHT_P_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_UI_RIGHT_R") ) { return ::hx::Val( get_UI_RIGHT_R_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_NOTE_RIGHT") ) { return ::hx::Val( get_NOTE_RIGHT_dyn() ); }
		if (HX_FIELD_EQ(inName,"replaceBinding") ) { return ::hx::Val( replaceBinding_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeKeyboard") ) { return ::hx::Val( removeKeyboard_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_NOTE_LEFT_P") ) { return ::hx::Val( get_NOTE_LEFT_P_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_NOTE_DOWN_P") ) { return ::hx::Val( get_NOTE_DOWN_P_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_NOTE_LEFT_R") ) { return ::hx::Val( get_NOTE_LEFT_R_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_NOTE_DOWN_R") ) { return ::hx::Val( get_NOTE_DOWN_R_dyn() ); }
		if (HX_FIELD_EQ(inName,"getDialogueName") ) { return ::hx::Val( getDialogueName_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_NOTE_RIGHT_P") ) { return ::hx::Val( get_NOTE_RIGHT_P_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_NOTE_RIGHT_R") ) { return ::hx::Val( get_NOTE_RIGHT_R_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"setKeyboardScheme") ) { return ::hx::Val( setKeyboardScheme_dyn() ); }
		if (HX_FIELD_EQ(inName,"addGamepadLiteral") ) { return ::hx::Val( addGamepadLiteral_dyn() ); }
		if (HX_FIELD_EQ(inName,"addDefaultGamepad") ) { return ::hx::Val( addDefaultGamepad_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"mergeKeyboardScheme") ) { return ::hx::Val( mergeKeyboardScheme_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getActionFromControl") ) { return ::hx::Val( getActionFromControl_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"getDialogueNameFromToken") ) { return ::hx::Val( getDialogueNameFromToken_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Controls_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { outValue = init_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"addKeys") ) { outValue = addKeys_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isDevice") ) { outValue = isDevice_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isGamepad") ) { outValue = isGamepad_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"removeKeys") ) { outValue = removeKeys_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"addButtons") ) { outValue = addButtons_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"removeButtons") ) { outValue = removeButtons_dyn(); return true; }
	}
	return false;
}

::hx::Val Controls_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_back") ) { _back=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_ui_up") ) { _ui_up=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_pause") ) { _pause=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_reset") ) { _reset=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"byName") ) { byName=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_ui_upP") ) { _ui_upP=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ui_upR") ) { _ui_upR=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_accept") ) { _accept=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_ui_left") ) { _ui_left=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ui_down") ) { _ui_down=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_note_up") ) { _note_up=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_ui_right") ) { _ui_right=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ui_leftP") ) { _ui_leftP=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ui_downP") ) { _ui_downP=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ui_leftR") ) { _ui_leftR=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ui_downR") ) { _ui_downR=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_note_upP") ) { _note_upP=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_note_upR") ) { _note_upR=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_ui_rightP") ) { _ui_rightP=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ui_rightR") ) { _ui_rightR=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_note_left") ) { _note_left=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_note_down") ) { _note_down=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_note_right") ) { _note_right=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_note_leftP") ) { _note_leftP=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_note_downP") ) { _note_downP=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_note_leftR") ) { _note_leftR=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_note_downR") ) { _note_downR=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_note_rightP") ) { _note_rightP=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_note_rightR") ) { _note_rightR=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"gamepadsAdded") ) { gamepadsAdded=inValue.Cast< ::Array< int > >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"keyboardScheme") ) { keyboardScheme=inValue.Cast<  ::KeyboardScheme >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Controls_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_ui_up",e7,09,79,9f));
	outFields->push(HX_("_ui_left",93,a6,41,31));
	outFields->push(HX_("_ui_right",d0,27,3d,5f));
	outFields->push(HX_("_ui_down",ee,96,ff,2b));
	outFields->push(HX_("_ui_upP",89,a0,6f,ea));
	outFields->push(HX_("_ui_leftP",5d,1a,30,e8));
	outFields->push(HX_("_ui_rightP",80,ae,45,f6));
	outFields->push(HX_("_ui_downP",a2,79,a4,53));
	outFields->push(HX_("_ui_upR",8b,a0,6f,ea));
	outFields->push(HX_("_ui_leftR",5f,1a,30,e8));
	outFields->push(HX_("_ui_rightR",82,ae,45,f6));
	outFields->push(HX_("_ui_downR",a4,79,a4,53));
	outFields->push(HX_("_note_up",49,c1,14,87));
	outFields->push(HX_("_note_left",75,7a,c3,00));
	outFields->push(HX_("_note_right",ae,b9,54,21));
	outFields->push(HX_("_note_down",d0,6a,81,fb));
	outFields->push(HX_("_note_upP",e7,5e,14,ab));
	outFields->push(HX_("_note_leftP",3b,ac,47,aa));
	outFields->push(HX_("_note_rightP",e2,be,cd,08));
	outFields->push(HX_("_note_downP",80,0b,bc,15));
	outFields->push(HX_("_note_upR",e9,5e,14,ab));
	outFields->push(HX_("_note_leftR",3d,ac,47,aa));
	outFields->push(HX_("_note_rightR",e4,be,cd,08));
	outFields->push(HX_("_note_downR",82,0b,bc,15));
	outFields->push(HX_("_accept",a7,a4,7d,79));
	outFields->push(HX_("_back",06,f6,21,f4));
	outFields->push(HX_("_pause",37,1e,3f,b9));
	outFields->push(HX_("_reset",10,91,af,e2));
	outFields->push(HX_("byName",c2,2b,4e,0e));
	outFields->push(HX_("gamepadsAdded",ae,52,a9,94));
	outFields->push(HX_("keyboardScheme",2c,c8,f4,c5));
	outFields->push(HX_("UI_UP",a6,42,98,21));
	outFields->push(HX_("UI_LEFT",12,b1,2f,e4));
	outFields->push(HX_("UI_RIGHT",51,4c,98,3c));
	outFields->push(HX_("UI_DOWN",6d,a1,ed,de));
	outFields->push(HX_("UI_UP_P",37,0b,2b,ea));
	outFields->push(HX_("UI_LEFT_P",a3,ec,4b,14));
	outFields->push(HX_("UI_RIGHT_P",a2,15,81,cc));
	outFields->push(HX_("UI_DOWN_P",be,e9,aa,ae));
	outFields->push(HX_("UI_UP_R",39,0b,2b,ea));
	outFields->push(HX_("UI_LEFT_R",a5,ec,4b,14));
	outFields->push(HX_("UI_RIGHT_R",a4,15,81,cc));
	outFields->push(HX_("UI_DOWN_R",c0,e9,aa,ae));
	outFields->push(HX_("NOTE_UP",c8,83,48,cd));
	outFields->push(HX_("NOTE_LEFT",b4,fe,4b,0d));
	outFields->push(HX_("NOTE_RIGHT",6f,ec,3f,0c));
	outFields->push(HX_("NOTE_DOWN",0f,ef,09,08));
	outFields->push(HX_("NOTE_UP_P",d9,58,47,13));
	outFields->push(HX_("NOTE_LEFT_P",c5,66,50,f7));
	outFields->push(HX_("NOTE_RIGHT_P",40,79,67,8d));
	outFields->push(HX_("NOTE_DOWN_P",e0,63,af,91));
	outFields->push(HX_("NOTE_UP_R",db,58,47,13));
	outFields->push(HX_("NOTE_LEFT_R",c7,66,50,f7));
	outFields->push(HX_("NOTE_RIGHT_R",42,79,67,8d));
	outFields->push(HX_("NOTE_DOWN_R",e2,63,af,91));
	outFields->push(HX_("ACCEPT",08,3f,89,bd));
	outFields->push(HX_("BACK",27,a2,d1,2b));
	outFields->push(HX_("PAUSE",d6,0e,46,3b));
	outFields->push(HX_("RESET",af,81,b6,64));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Controls_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_ui_up),HX_("_ui_up",e7,09,79,9f)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_ui_left),HX_("_ui_left",93,a6,41,31)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_ui_right),HX_("_ui_right",d0,27,3d,5f)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_ui_down),HX_("_ui_down",ee,96,ff,2b)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_ui_upP),HX_("_ui_upP",89,a0,6f,ea)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_ui_leftP),HX_("_ui_leftP",5d,1a,30,e8)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_ui_rightP),HX_("_ui_rightP",80,ae,45,f6)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_ui_downP),HX_("_ui_downP",a2,79,a4,53)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_ui_upR),HX_("_ui_upR",8b,a0,6f,ea)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_ui_leftR),HX_("_ui_leftR",5f,1a,30,e8)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_ui_rightR),HX_("_ui_rightR",82,ae,45,f6)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_ui_downR),HX_("_ui_downR",a4,79,a4,53)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_note_up),HX_("_note_up",49,c1,14,87)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_note_left),HX_("_note_left",75,7a,c3,00)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_note_right),HX_("_note_right",ae,b9,54,21)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_note_down),HX_("_note_down",d0,6a,81,fb)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_note_upP),HX_("_note_upP",e7,5e,14,ab)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_note_leftP),HX_("_note_leftP",3b,ac,47,aa)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_note_rightP),HX_("_note_rightP",e2,be,cd,08)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_note_downP),HX_("_note_downP",80,0b,bc,15)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_note_upR),HX_("_note_upR",e9,5e,14,ab)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_note_leftR),HX_("_note_leftR",3d,ac,47,aa)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_note_rightR),HX_("_note_rightR",e4,be,cd,08)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_note_downR),HX_("_note_downR",82,0b,bc,15)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_accept),HX_("_accept",a7,a4,7d,79)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_back),HX_("_back",06,f6,21,f4)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_pause),HX_("_pause",37,1e,3f,b9)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_reset),HX_("_reset",10,91,af,e2)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(Controls_obj,byName),HX_("byName",c2,2b,4e,0e)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(Controls_obj,gamepadsAdded),HX_("gamepadsAdded",ae,52,a9,94)},
	{::hx::fsObject /*  ::KeyboardScheme */ ,(int)offsetof(Controls_obj,keyboardScheme),HX_("keyboardScheme",2c,c8,f4,c5)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Controls_obj_sStaticStorageInfo = 0;
#endif

static ::String Controls_obj_sMemberFields[] = {
	HX_("_ui_up",e7,09,79,9f),
	HX_("_ui_left",93,a6,41,31),
	HX_("_ui_right",d0,27,3d,5f),
	HX_("_ui_down",ee,96,ff,2b),
	HX_("_ui_upP",89,a0,6f,ea),
	HX_("_ui_leftP",5d,1a,30,e8),
	HX_("_ui_rightP",80,ae,45,f6),
	HX_("_ui_downP",a2,79,a4,53),
	HX_("_ui_upR",8b,a0,6f,ea),
	HX_("_ui_leftR",5f,1a,30,e8),
	HX_("_ui_rightR",82,ae,45,f6),
	HX_("_ui_downR",a4,79,a4,53),
	HX_("_note_up",49,c1,14,87),
	HX_("_note_left",75,7a,c3,00),
	HX_("_note_right",ae,b9,54,21),
	HX_("_note_down",d0,6a,81,fb),
	HX_("_note_upP",e7,5e,14,ab),
	HX_("_note_leftP",3b,ac,47,aa),
	HX_("_note_rightP",e2,be,cd,08),
	HX_("_note_downP",80,0b,bc,15),
	HX_("_note_upR",e9,5e,14,ab),
	HX_("_note_leftR",3d,ac,47,aa),
	HX_("_note_rightR",e4,be,cd,08),
	HX_("_note_downR",82,0b,bc,15),
	HX_("_accept",a7,a4,7d,79),
	HX_("_back",06,f6,21,f4),
	HX_("_pause",37,1e,3f,b9),
	HX_("_reset",10,91,af,e2),
	HX_("byName",c2,2b,4e,0e),
	HX_("gamepadsAdded",ae,52,a9,94),
	HX_("keyboardScheme",2c,c8,f4,c5),
	HX_("get_UI_UP",fd,9e,41,65),
	HX_("get_UI_LEFT",29,11,2a,6a),
	HX_("get_UI_RIGHT",5a,00,b2,f1),
	HX_("get_UI_DOWN",84,01,e8,64),
	HX_("get_UI_UP_P",4e,6b,25,70),
	HX_("get_UI_LEFT_P",7a,c0,af,d5),
	HX_("get_UI_RIGHT_P",eb,9d,76,42),
	HX_("get_UI_DOWN_P",95,bd,0e,70),
	HX_("get_UI_UP_R",50,6b,25,70),
	HX_("get_UI_LEFT_R",7c,c0,af,d5),
	HX_("get_UI_RIGHT_R",ed,9d,76,42),
	HX_("get_UI_DOWN_R",97,bd,0e,70),
	HX_("get_NOTE_UP",df,e3,42,53),
	HX_("get_NOTE_LEFT",8b,d2,af,ce),
	HX_("get_NOTE_RIGHT",b8,74,35,82),
	HX_("get_NOTE_DOWN",e6,c2,6d,c9),
	HX_("get_NOTE_UP_P",b0,2c,ab,d4),
	HX_("get_NOTE_LEFT_P",5c,1e,32,b8),
	HX_("get_NOTE_RIGHT_P",c9,65,06,92),
	HX_("get_NOTE_DOWN_P",77,1b,91,52),
	HX_("get_NOTE_UP_R",b2,2c,ab,d4),
	HX_("get_NOTE_LEFT_R",5e,1e,32,b8),
	HX_("get_NOTE_RIGHT_R",cb,65,06,92),
	HX_("get_NOTE_DOWN_R",79,1b,91,52),
	HX_("get_ACCEPT",d1,ae,10,ae),
	HX_("get_BACK",b0,5d,8c,ab),
	HX_("get_PAUSE",2d,6b,ef,7e),
	HX_("get_RESET",06,de,5f,a8),
	HX_("update",09,86,05,87),
	HX_("checkByName",aa,fe,5f,f0),
	HX_("getDialogueName",39,8d,0f,32),
	HX_("getDialogueNameFromToken",b6,d0,32,d3),
	HX_("getActionFromControl",87,31,3f,3d),
	HX_("forEachBound",34,ae,22,2f),
	HX_("replaceBinding",71,99,ae,a4),
	HX_("copyFrom",bf,0b,61,c8),
	HX_("copyTo",90,1c,33,c9),
	HX_("mergeKeyboardScheme",04,51,83,14),
	HX_("bindKeys",51,26,d1,b4),
	HX_("unbindKeys",aa,0d,95,3a),
	HX_("setKeyboardScheme",6e,4f,d6,5b),
	HX_("removeKeyboard",0b,f9,7f,32),
	HX_("addGamepad",80,0c,10,f1),
	HX_("addGamepadLiteral",cf,54,ef,a8),
	HX_("removeGamepad",bd,3c,40,62),
	HX_("addDefaultGamepad",e1,d7,98,02),
	HX_("bindButtons",04,66,e6,c6),
	HX_("unbindButtons",4b,dc,20,e8),
	HX_("getInputsFor",ea,35,e1,37),
	HX_("removeDevice",fa,77,a5,e0),
	::String(null()) };

::hx::Class Controls_obj::__mClass;

static ::String Controls_obj_sStaticFields[] = {
	HX_("init",10,3b,bb,45),
	HX_("addKeys",b5,24,44,83),
	HX_("removeKeys",58,1c,26,c4),
	HX_("addButtons",20,7e,ff,31),
	HX_("removeButtons",5d,ae,2f,a3),
	HX_("isDevice",20,78,e1,c9),
	HX_("isGamepad",d7,5d,84,8d),
	::String(null())
};

void Controls_obj::__register()
{
	Controls_obj _hx_dummy;
	Controls_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Controls",96,42,6e,11);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Controls_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Controls_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Controls_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Controls_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Controls_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Controls_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

