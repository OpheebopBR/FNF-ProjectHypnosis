#include <hxcpp.h>

#ifndef INCLUDED_Alphabet
#include <Alphabet.h>
#endif
#ifndef INCLUDED_AttachedText
#include <AttachedText.h>
#endif
#ifndef INCLUDED_ClientPrefs
#include <ClientPrefs.h>
#endif
#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_InputFormatter
#include <InputFormatter.h>
#endif
#ifndef INCLUDED_MusicBeatSubstate
#include <MusicBeatSubstate.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_PlayerSettings
#include <PlayerSettings.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_FlxSubState
#include <flixel/FlxSubState.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxAction
#include <flixel/input/actions/FlxAction.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionDigital
#include <flixel/input/actions/FlxActionDigital.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionSet
#include <flixel/input/actions/FlxActionSet.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepad
#include <flixel/input/gamepad/FlxGamepad.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadManager
#include <flixel/input/gamepad/FlxGamepadManager.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadModel
#include <flixel/input/gamepad/FlxGamepadModel.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSoundGroup
#include <flixel/system/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimerManager
#include <flixel/util/FlxTimerManager.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_options_ControllerSubState
#include <options/ControllerSubState.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2d4c6e8d62a7a518_32_new,"options.ControllerSubState","new",0xbf3e97cf,"options.ControllerSubState.new","options/ControllerSubState.hx",32,0x0977e0e0)
HX_LOCAL_STACK_FRAME(_hx_pos_2d4c6e8d62a7a518_120_update,"options.ControllerSubState","update",0x492fcdfa,"options.ControllerSubState.update","options/ControllerSubState.hx",120,0x0977e0e0)
HX_LOCAL_STACK_FRAME(_hx_pos_2d4c6e8d62a7a518_146_update,"options.ControllerSubState","update",0x492fcdfa,"options.ControllerSubState.update","options/ControllerSubState.hx",146,0x0977e0e0)
HX_LOCAL_STACK_FRAME(_hx_pos_2d4c6e8d62a7a518_198_getInputTextNum,"options.ControllerSubState","getInputTextNum",0xafc99454,"options.ControllerSubState.getInputTextNum","options/ControllerSubState.hx",198,0x0977e0e0)
HX_LOCAL_STACK_FRAME(_hx_pos_2d4c6e8d62a7a518_208_changeSelection,"options.ControllerSubState","changeSelection",0x9ea54aab,"options.ControllerSubState.changeSelection","options/ControllerSubState.hx",208,0x0977e0e0)
HX_LOCAL_STACK_FRAME(_hx_pos_2d4c6e8d62a7a518_255_changeAlt,"options.ControllerSubState","changeAlt",0x1f802a48,"options.ControllerSubState.changeAlt","options/ControllerSubState.hx",255,0x0977e0e0)
HX_LOCAL_STACK_FRAME(_hx_pos_2d4c6e8d62a7a518_278_unselectableCheck,"options.ControllerSubState","unselectableCheck",0x9081a3c8,"options.ControllerSubState.unselectableCheck","options/ControllerSubState.hx",278,0x0977e0e0)
HX_LOCAL_STACK_FRAME(_hx_pos_2d4c6e8d62a7a518_285_addBindTexts,"options.ControllerSubState","addBindTexts",0x076d4c79,"options.ControllerSubState.addBindTexts","options/ControllerSubState.hx",285,0x0977e0e0)
HX_LOCAL_STACK_FRAME(_hx_pos_2d4c6e8d62a7a518_301_reloadBinds,"options.ControllerSubState","reloadBinds",0xe6dab86c,"options.ControllerSubState.reloadBinds","options/ControllerSubState.hx",301,0x0977e0e0)
HX_LOCAL_STACK_FRAME(_hx_pos_2d4c6e8d62a7a518_33_boot,"options.ControllerSubState","boot",0x8f9f3de3,"options.ControllerSubState.boot","options/ControllerSubState.hx",33,0x0977e0e0)
HX_LOCAL_STACK_FRAME(_hx_pos_2d4c6e8d62a7a518_34_boot,"options.ControllerSubState","boot",0x8f9f3de3,"options.ControllerSubState.boot","options/ControllerSubState.hx",34,0x0977e0e0)
HX_LOCAL_STACK_FRAME(_hx_pos_2d4c6e8d62a7a518_36_boot,"options.ControllerSubState","boot",0x8f9f3de3,"options.ControllerSubState.boot","options/ControllerSubState.hx",36,0x0977e0e0)
namespace options{

void ControllerSubState_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_2d4c6e8d62a7a518_32_new)
HXLINE( 119)		this->bindingTime = ((Float)0);
HXLINE( 118)		this->leaving = false;
HXLINE(  66)		this->canBind = false;
HXLINE(  62)		this->nextAccept = 5;
HXLINE(  61)		this->rebindingButton = false;
HXLINE(  60)		this->grpInputsAlt = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  59)		this->grpInputs = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  39)		this->optionShit = ::cpp::VirtualArray_obj::__new(16)->init(0,::cpp::VirtualArray_obj::__new(1)->init(0,HX_("NOTES",21,14,b9,1d)))->init(1,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Left",27,34,89,32))->init(1,HX_("note_left",b4,fe,20,a5)))->init(2,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Down",82,24,47,2d))->init(1,HX_("note_down",0f,ef,de,9f)))->init(3,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Up",7b,4a,00,00))->init(1,HX_("note_up",c8,67,5c,4d)))->init(4,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Right",bc,7b,91,7c))->init(1,HX_("note_right",8f,ec,ca,4e)))->init(5,::cpp::VirtualArray_obj::__new(1)->init(0,HX_("",00,00,00,00)))->init(6,::cpp::VirtualArray_obj::__new(1)->init(0,HX_("UI",54,4a,00,00)))->init(7,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Left",27,34,89,32))->init(1,HX_("ui_left",12,4d,89,f7)))->init(8,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Down",82,24,47,2d))->init(1,HX_("ui_down",6d,3d,47,f2)))->init(9,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Up",7b,4a,00,00))->init(1,HX_("ui_up",a6,c2,91,a3)))->init(10,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Right",bc,7b,91,7c))->init(1,HX_("ui_right",71,30,a7,17)))->init(11,::cpp::VirtualArray_obj::__new(1)->init(0,HX_("",00,00,00,00)))->init(12,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Reset",af,b9,f5,79))->init(1,HX_("reset",cf,49,c8,e6)))->init(13,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Accept",28,07,9b,3f))->init(1,HX_("accept",08,93,06,0b)))->init(14,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Back",47,06,ea,2b))->init(1,HX_("back",27,da,10,41)))->init(15,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Pause",d6,46,85,50))->init(1,HX_("pause",f6,d6,57,bd)));
HXLINE(  37)		this->bindLength = 0;
HXLINE(  69)		super::__construct();
HXLINE(  71)		 ::flixel::FlxSprite bg =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN(  71)		::String library = null();
HXDLIN(  71)		 ::flixel::graphics::FlxGraphic imageToReturn = ::Paths_obj::addCustomGraphic(HX_("menuDesat",26,91,04,72));
HXDLIN(  71)		 ::Dynamic bg1;
HXDLIN(  71)		if (::hx::IsNotNull( imageToReturn )) {
HXLINE(  71)			bg1 = imageToReturn;
            		}
            		else {
HXLINE(  71)			bg1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("menuDesat",26,91,04,72)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
            		}
HXDLIN(  71)		 ::flixel::FlxSprite bg2 = bg->loadGraphic(bg1,null(),null(),null(),null(),null());
HXLINE(  72)		bg2->set_color(-1412611);
HXLINE(  73)		bg2->setGraphicSize(::Std_obj::_hx_int((bg2->get_width() * ((Float)1.1))),null());
HXLINE(  74)		bg2->updateHitbox();
HXLINE(  75)		bg2->screenCenter(null());
HXLINE(  76)		bg2->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE(  77)		this->add(bg2);
HXLINE(  79)		this->grpOptions =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  80)		this->add(this->grpOptions);
HXLINE(  82)		this->optionShit->push(::cpp::VirtualArray_obj::__new(1)->init(0,HX_("",00,00,00,00)));
HXLINE(  83)		this->optionShit->push(::cpp::VirtualArray_obj::__new(1)->init(0,::options::ControllerSubState_obj::defaultStr));
HXLINE(  85)		{
HXLINE(  85)			int _g = 0;
HXDLIN(  85)			int _g1 = this->optionShit->get_length();
HXDLIN(  85)			while((_g < _g1)){
HXLINE(  85)				_g = (_g + 1);
HXDLIN(  85)				int i = (_g - 1);
HXLINE(  86)				bool isCentered = false;
HXLINE(  87)				bool isDefaultKey = ::hx::IsEq( this->optionShit->__get(i)->__GetItem(0),::options::ControllerSubState_obj::defaultStr );
HXLINE(  88)				if (this->unselectableCheck(i,true)) {
HXLINE(  89)					isCentered = true;
            				}
HXLINE(  92)				bool optionText;
HXDLIN(  92)				if (isCentered) {
HXLINE(  92)					optionText = isDefaultKey;
            				}
            				else {
HXLINE(  92)					optionText = true;
            				}
HXDLIN(  92)				 ::Alphabet optionText1 =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)((10 * i)) ),( (::String)(this->optionShit->__get(i)->__GetItem(0)) ),optionText,false,null(),null());
HXLINE(  93)				optionText1->isMenuItem = true;
HXLINE(  94)				if (isCentered) {
HXLINE(  95)					optionText1->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
HXLINE(  96)					optionText1->forceX = optionText1->x;
HXLINE(  97)					optionText1->yAdd = ( (Float)(-55) );
            				}
            				else {
HXLINE(  99)					optionText1->forceX = ( (Float)(20) );
            				}
HXLINE( 101)				optionText1->yMult = ( (Float)(60) );
HXLINE( 102)				optionText1->targetY = ( (Float)(i) );
HXLINE( 103)				this->grpOptions->add(optionText1).StaticCast<  ::Alphabet >();
HXLINE( 105)				if (!(isCentered)) {
HXLINE( 106)					this->addBindTexts(optionText1,i);
HXLINE( 107)					this->bindLength++;
HXLINE( 108)					if ((::options::ControllerSubState_obj::curSelected < 0)) {
HXLINE( 108)						::options::ControllerSubState_obj::curSelected = i;
            					}
            				}
            			}
            		}
HXLINE( 111)		this->changeSelection(null());
HXLINE( 113)		::String _hx_tmp = ((HX_("Controller info\nName: ",49,71,e0,e9) + ::flixel::FlxG_obj::gamepads->firstActive->get_name()) + HX_("\nModel: ",a5,ef,b0,f6));
HXDLIN( 113)		this->gamepadDetails =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,12,0,0,(_hx_tmp + ::Std_obj::string(::flixel::FlxG_obj::gamepads->firstActive->detectedModel)),12,null());
HXLINE( 114)		this->gamepadDetails->setFormat(HX_("VCR OSD Mono",be,44,e4,b8),16,-1,HX_("left",07,08,b0,47),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE( 115)		this->add(this->gamepadDetails);
            	}

Dynamic ControllerSubState_obj::__CreateEmpty() { return new ControllerSubState_obj; }

void *ControllerSubState_obj::_hx_vtable = 0;

Dynamic ControllerSubState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ControllerSubState_obj > _hx_result = new ControllerSubState_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ControllerSubState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x5661ffbf) {
			if (inClassId<=(int)0x35383fab) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x35383fab;
			} else {
				return inClassId==(int)0x5661ffbf;
			}
		} else {
			return inClassId==(int)0x62817b24;
		}
	} else {
		if (inClassId<=(int)0x7ccf8994) {
			return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
		} else {
			return inClassId==(int)0x7fce3ab0;
		}
	}
}

void ControllerSubState_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_2d4c6e8d62a7a518_120_update)
HXDLIN( 120)		 ::options::ControllerSubState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 121)		if (!(this->rebindingButton)) {
HXLINE( 122)			if (::PlayerSettings_obj::player1->controls->_ui_upP->check()) {
HXLINE( 123)				this->changeSelection(-1);
            			}
HXLINE( 125)			if (::PlayerSettings_obj::player1->controls->_ui_downP->check()) {
HXLINE( 126)				this->changeSelection(1);
            			}
HXLINE( 128)			bool _hx_tmp;
HXDLIN( 128)			if (!(::PlayerSettings_obj::player1->controls->_ui_leftP->check())) {
HXLINE( 128)				_hx_tmp = ::PlayerSettings_obj::player1->controls->_ui_rightP->check();
            			}
            			else {
HXLINE( 128)				_hx_tmp = true;
            			}
HXDLIN( 128)			if (_hx_tmp) {
HXLINE( 129)				this->changeAlt();
            			}
HXLINE( 132)			if (::PlayerSettings_obj::player1->controls->_back->check()) {
HXLINE( 133)				::PlayerSettings_obj::updateGamepads();
HXLINE( 134)				this->close();
HXLINE( 135)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 135)				_hx_tmp->play(::Paths_obj::sound(HX_("cancelMenu",39,a4,43,b7),null()),null(),null(),null(),null(),null());
            			}
HXLINE( 138)			bool _hx_tmp1;
HXDLIN( 138)			if (::PlayerSettings_obj::player1->controls->_accept->check()) {
HXLINE( 138)				_hx_tmp1 = (this->nextAccept <= 0);
            			}
            			else {
HXLINE( 138)				_hx_tmp1 = false;
            			}
HXDLIN( 138)			if (_hx_tmp1) {
HXLINE( 139)				if (::hx::IsEq( this->optionShit->__get(::options::ControllerSubState_obj::curSelected)->__GetItem(0),::options::ControllerSubState_obj::defaultStr )) {
HXLINE( 140)					::ClientPrefs_obj::controllerBinds = ::ClientPrefs_obj::controllerDefaultBinds->copy();
HXLINE( 141)					this->reloadBinds();
HXLINE( 142)					this->changeSelection(null());
HXLINE( 143)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 143)					_hx_tmp->play(::Paths_obj::sound(HX_("confirmMenu",bf,8e,fe,3c),null()),null(),null(),null(),null(),null());
            				}
            				else {
HXLINE( 144)					if (!(this->unselectableCheck(::options::ControllerSubState_obj::curSelected,null()))) {
            						HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::options::ControllerSubState,_gthis) HXARGC(1)
            						void _hx_run( ::flixel::util::FlxTimer timer){
            							HX_GC_STACKFRAME(&_hx_pos_2d4c6e8d62a7a518_146_update)
HXLINE( 146)							_gthis->canBind = true;
            						}
            						HX_END_LOCAL_FUNC1((void))

HXLINE( 145)						 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(((Float)0.5), ::Dynamic(new _hx_Closure_0(_gthis)),null());
HXLINE( 148)						this->bindingTime = ( (Float)(0) );
HXLINE( 149)						this->rebindingButton = true;
HXLINE( 150)						if (::options::ControllerSubState_obj::curAlt) {
HXLINE( 151)							this->grpInputsAlt->__get(this->getInputTextNum()).StaticCast<  ::AttachedText >()->set_alpha(( (Float)(0) ));
            						}
            						else {
HXLINE( 153)							this->grpInputs->__get(this->getInputTextNum()).StaticCast<  ::AttachedText >()->set_alpha(( (Float)(0) ));
            						}
HXLINE( 155)						 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 155)						_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            					}
            				}
            			}
            		}
            		else {
HXLINE( 159)			if (this->canBind) {
HXLINE( 160)				int pressedBind = ::flixel::FlxG_obj::gamepads->firstActive->firstJustPressedRawID();
HXLINE( 161)				if ((pressedBind > -1)) {
HXLINE( 162)					::Array< int > keysArray = ( (::Array< int >)(::ClientPrefs_obj::controllerBinds->get(this->optionShit->__get(::options::ControllerSubState_obj::curSelected)->__GetItem(1))) );
HXLINE( 163)					int _hx_tmp;
HXDLIN( 163)					if (::options::ControllerSubState_obj::curAlt) {
HXLINE( 163)						_hx_tmp = 1;
            					}
            					else {
HXLINE( 163)						_hx_tmp = 0;
            					}
HXDLIN( 163)					keysArray[_hx_tmp] = pressedBind;
HXLINE( 165)					int opposite;
HXDLIN( 165)					if (::options::ControllerSubState_obj::curAlt) {
HXLINE( 165)						opposite = 0;
            					}
            					else {
HXLINE( 165)						opposite = 1;
            					}
HXLINE( 166)					if ((keysArray->__get(opposite) == keysArray->__get((1 - opposite)))) {
HXLINE( 167)						keysArray[opposite] = -1;
            					}
HXLINE( 169)					::ClientPrefs_obj::controllerBinds->set(( (::String)(this->optionShit->__get(::options::ControllerSubState_obj::curSelected)->__GetItem(1)) ),keysArray);
HXLINE( 171)					this->reloadBinds();
HXLINE( 172)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp1 = ::flixel::FlxG_obj::sound;
HXDLIN( 172)					_hx_tmp1->play(::Paths_obj::sound(HX_("confirmMenu",bf,8e,fe,3c),null()),null(),null(),null(),null(),null());
HXLINE( 173)					this->rebindingButton = false;
HXLINE( 174)					this->canBind = false;
            				}
            			}
HXLINE( 178)			 ::options::ControllerSubState _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 178)			_hx_tmp->bindingTime = (_hx_tmp->bindingTime + elapsed);
HXLINE( 179)			if ((this->bindingTime > 5)) {
HXLINE( 180)				if (::options::ControllerSubState_obj::curAlt) {
HXLINE( 181)					this->grpInputsAlt->__get(::options::ControllerSubState_obj::curSelected).StaticCast<  ::AttachedText >()->set_alpha(( (Float)(1) ));
            				}
            				else {
HXLINE( 183)					this->grpInputs->__get(::options::ControllerSubState_obj::curSelected).StaticCast<  ::AttachedText >()->set_alpha(( (Float)(1) ));
            				}
HXLINE( 185)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 185)				_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
HXLINE( 186)				this->rebindingButton = false;
HXLINE( 187)				this->bindingTime = ( (Float)(0) );
HXLINE( 188)				this->canBind = false;
            			}
            		}
HXLINE( 192)		if ((this->nextAccept > 0)) {
HXLINE( 193)			 ::options::ControllerSubState _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 193)			_hx_tmp->nextAccept = (_hx_tmp->nextAccept - 1);
            		}
HXLINE( 195)		this->super::update(elapsed);
            	}


int ControllerSubState_obj::getInputTextNum(){
            	HX_STACKFRAME(&_hx_pos_2d4c6e8d62a7a518_198_getInputTextNum)
HXLINE( 199)		int num = 0;
HXLINE( 200)		{
HXLINE( 200)			int _g = 0;
HXDLIN( 200)			int _g1 = ::options::ControllerSubState_obj::curSelected;
HXDLIN( 200)			while((_g < _g1)){
HXLINE( 200)				_g = (_g + 1);
HXDLIN( 200)				int i = (_g - 1);
HXLINE( 201)				if (::hx::IsGreater( this->optionShit->__get(i)->__Field(HX_("length",e6,94,07,9f),::hx::paccDynamic),1 )) {
HXLINE( 202)					num = (num + 1);
            				}
            			}
            		}
HXLINE( 205)		return num;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ControllerSubState_obj,getInputTextNum,return )

void ControllerSubState_obj::changeSelection(::hx::Null< int >  __o_change){
            		int change = __o_change.Default(0);
            	HX_STACKFRAME(&_hx_pos_2d4c6e8d62a7a518_208_changeSelection)
HXLINE( 209)		while(true){
HXLINE( 210)			 ::Dynamic _hx_tmp = ::hx::ClassOf< ::options::ControllerSubState >();
HXDLIN( 210)			::options::ControllerSubState_obj::curSelected = (::options::ControllerSubState_obj::curSelected + change);
HXLINE( 211)			if ((::options::ControllerSubState_obj::curSelected < 0)) {
HXLINE( 212)				::options::ControllerSubState_obj::curSelected = (this->optionShit->get_length() - 1);
            			}
HXLINE( 213)			if ((::options::ControllerSubState_obj::curSelected >= this->optionShit->get_length())) {
HXLINE( 214)				::options::ControllerSubState_obj::curSelected = 0;
            			}
HXLINE( 209)			if (!(this->unselectableCheck(::options::ControllerSubState_obj::curSelected,null()))) {
HXLINE( 209)				goto _hx_goto_6;
            			}
            		}
            		_hx_goto_6:;
HXLINE( 217)		int bullShit = 0;
HXLINE( 219)		{
HXLINE( 219)			int _g = 0;
HXDLIN( 219)			int _g1 = this->grpInputs->length;
HXDLIN( 219)			while((_g < _g1)){
HXLINE( 219)				_g = (_g + 1);
HXDLIN( 219)				int i = (_g - 1);
HXLINE( 220)				this->grpInputs->__get(i).StaticCast<  ::AttachedText >()->set_alpha(((Float)0.6));
            			}
            		}
HXLINE( 222)		{
HXLINE( 222)			int _g2 = 0;
HXDLIN( 222)			int _g3 = this->grpInputsAlt->length;
HXDLIN( 222)			while((_g2 < _g3)){
HXLINE( 222)				_g2 = (_g2 + 1);
HXDLIN( 222)				int i = (_g2 - 1);
HXLINE( 223)				this->grpInputsAlt->__get(i).StaticCast<  ::AttachedText >()->set_alpha(((Float)0.6));
            			}
            		}
HXLINE( 226)		{
HXLINE( 226)			int _g4 = 0;
HXDLIN( 226)			::Array< ::Dynamic> _g5 = this->grpOptions->members;
HXDLIN( 226)			while((_g4 < _g5->length)){
HXLINE( 226)				 ::Alphabet item = _g5->__get(_g4).StaticCast<  ::Alphabet >();
HXDLIN( 226)				_g4 = (_g4 + 1);
HXLINE( 227)				item->targetY = ( (Float)((bullShit - ::options::ControllerSubState_obj::curSelected)) );
HXLINE( 228)				bullShit = (bullShit + 1);
HXLINE( 230)				if (!(this->unselectableCheck((bullShit - 1),null()))) {
HXLINE( 231)					item->set_alpha(((Float)0.6));
HXLINE( 232)					if ((item->targetY == 0)) {
HXLINE( 233)						item->set_alpha(( (Float)(1) ));
HXLINE( 234)						if (::options::ControllerSubState_obj::curAlt) {
HXLINE( 235)							int _g = 0;
HXDLIN( 235)							int _g1 = this->grpInputsAlt->length;
HXDLIN( 235)							while((_g < _g1)){
HXLINE( 235)								_g = (_g + 1);
HXDLIN( 235)								int i = (_g - 1);
HXLINE( 236)								if (::hx::IsInstanceEq( this->grpInputsAlt->__get(i).StaticCast<  ::AttachedText >()->sprTracker,item )) {
HXLINE( 237)									this->grpInputsAlt->__get(i).StaticCast<  ::AttachedText >()->set_alpha(( (Float)(1) ));
HXLINE( 238)									goto _hx_goto_10;
            								}
            							}
            							_hx_goto_10:;
            						}
            						else {
HXLINE( 242)							int _g = 0;
HXDLIN( 242)							int _g1 = this->grpInputs->length;
HXDLIN( 242)							while((_g < _g1)){
HXLINE( 242)								_g = (_g + 1);
HXDLIN( 242)								int i = (_g - 1);
HXLINE( 243)								if (::hx::IsInstanceEq( this->grpInputs->__get(i).StaticCast<  ::AttachedText >()->sprTracker,item )) {
HXLINE( 244)									this->grpInputs->__get(i).StaticCast<  ::AttachedText >()->set_alpha(( (Float)(1) ));
HXLINE( 245)									goto _hx_goto_11;
            								}
            							}
            							_hx_goto_11:;
            						}
            					}
            				}
            			}
            		}
HXLINE( 252)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 252)		_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(ControllerSubState_obj,changeSelection,(void))

void ControllerSubState_obj::changeAlt(){
            	HX_STACKFRAME(&_hx_pos_2d4c6e8d62a7a518_255_changeAlt)
HXLINE( 256)		::options::ControllerSubState_obj::curAlt = !(::options::ControllerSubState_obj::curAlt);
HXLINE( 257)		{
HXLINE( 257)			int _g = 0;
HXDLIN( 257)			int _g1 = this->grpInputs->length;
HXDLIN( 257)			while((_g < _g1)){
HXLINE( 257)				_g = (_g + 1);
HXDLIN( 257)				int i = (_g - 1);
HXLINE( 258)				if (::hx::IsInstanceEq( this->grpInputs->__get(i).StaticCast<  ::AttachedText >()->sprTracker,Dynamic( this->grpOptions->members->__get(::options::ControllerSubState_obj::curSelected)).StaticCast<  ::Alphabet >() )) {
HXLINE( 259)					this->grpInputs->__get(i).StaticCast<  ::AttachedText >()->set_alpha(((Float)0.6));
HXLINE( 260)					if (!(::options::ControllerSubState_obj::curAlt)) {
HXLINE( 261)						this->grpInputs->__get(i).StaticCast<  ::AttachedText >()->set_alpha(( (Float)(1) ));
            					}
HXLINE( 263)					goto _hx_goto_13;
            				}
            			}
            			_hx_goto_13:;
            		}
HXLINE( 266)		{
HXLINE( 266)			int _g2 = 0;
HXDLIN( 266)			int _g3 = this->grpInputsAlt->length;
HXDLIN( 266)			while((_g2 < _g3)){
HXLINE( 266)				_g2 = (_g2 + 1);
HXDLIN( 266)				int i = (_g2 - 1);
HXLINE( 267)				if (::hx::IsInstanceEq( this->grpInputsAlt->__get(i).StaticCast<  ::AttachedText >()->sprTracker,Dynamic( this->grpOptions->members->__get(::options::ControllerSubState_obj::curSelected)).StaticCast<  ::Alphabet >() )) {
HXLINE( 268)					this->grpInputsAlt->__get(i).StaticCast<  ::AttachedText >()->set_alpha(((Float)0.6));
HXLINE( 269)					if (::options::ControllerSubState_obj::curAlt) {
HXLINE( 270)						this->grpInputsAlt->__get(i).StaticCast<  ::AttachedText >()->set_alpha(( (Float)(1) ));
            					}
HXLINE( 272)					goto _hx_goto_14;
            				}
            			}
            			_hx_goto_14:;
            		}
HXLINE( 275)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 275)		_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(ControllerSubState_obj,changeAlt,(void))

bool ControllerSubState_obj::unselectableCheck(int num, ::Dynamic __o_checkDefaultKey){
            		 ::Dynamic checkDefaultKey = __o_checkDefaultKey;
            		if (::hx::IsNull(__o_checkDefaultKey)) checkDefaultKey = false;
            	HX_STACKFRAME(&_hx_pos_2d4c6e8d62a7a518_278_unselectableCheck)
HXLINE( 279)		if (::hx::IsEq( this->optionShit->__get(num)->__GetItem(0),::options::ControllerSubState_obj::defaultStr )) {
HXLINE( 280)			return ( (bool)(checkDefaultKey) );
            		}
HXLINE( 282)		if (::hx::IsLess( this->optionShit->__get(num)->__Field(HX_("length",e6,94,07,9f),::hx::paccDynamic),2 )) {
HXLINE( 282)			return ::hx::IsNotEq( this->optionShit->__get(num)->__GetItem(0),::options::ControllerSubState_obj::defaultStr );
            		}
            		else {
HXLINE( 282)			return false;
            		}
HXDLIN( 282)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC2(ControllerSubState_obj,unselectableCheck,return )

void ControllerSubState_obj::addBindTexts( ::Alphabet optionText,int num){
            	HX_GC_STACKFRAME(&_hx_pos_2d4c6e8d62a7a518_285_addBindTexts)
HXLINE( 286)		::cpp::VirtualArray binds = ( (::cpp::VirtualArray)(::ClientPrefs_obj::controllerBinds->get(this->optionShit->__get(num)->__GetItem(1))) );
HXLINE( 288)		 ::AttachedText text1 =  ::AttachedText_obj::__alloc( HX_CTX ,::InputFormatter_obj::getGamepadButton(( (int)(binds->__get(0)) )),400,-55,null(),null());
HXLINE( 289)		text1->setPosition((optionText->x + 300),(optionText->y - ( (Float)(55) )));
HXLINE( 290)		text1->sprTracker = optionText;
HXLINE( 291)		this->grpInputs->push(text1);
HXLINE( 292)		this->add(text1);
HXLINE( 294)		 ::AttachedText text2 =  ::AttachedText_obj::__alloc( HX_CTX ,::InputFormatter_obj::getGamepadButton(( (int)(binds->__get(1)) )),650,-55,null(),null());
HXLINE( 295)		text2->setPosition((optionText->x + 900),(optionText->y - ( (Float)(55) )));
HXLINE( 296)		text2->sprTracker = optionText;
HXLINE( 297)		this->grpInputsAlt->push(text2);
HXLINE( 298)		this->add(text2);
            	}


HX_DEFINE_DYNAMIC_FUNC2(ControllerSubState_obj,addBindTexts,(void))

void ControllerSubState_obj::reloadBinds(){
            	HX_STACKFRAME(&_hx_pos_2d4c6e8d62a7a518_301_reloadBinds)
HXLINE( 302)		while((this->grpInputs->length > 0)){
HXLINE( 303)			 ::AttachedText item = this->grpInputs->__get(0).StaticCast<  ::AttachedText >();
HXLINE( 304)			item->kill();
HXLINE( 305)			this->grpInputs->remove(item);
HXLINE( 306)			item->destroy();
            		}
HXLINE( 308)		while((this->grpInputsAlt->length > 0)){
HXLINE( 309)			 ::AttachedText item = this->grpInputsAlt->__get(0).StaticCast<  ::AttachedText >();
HXLINE( 310)			item->kill();
HXLINE( 311)			this->grpInputsAlt->remove(item);
HXLINE( 312)			item->destroy();
            		}
HXLINE( 315)		 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN( 315)		::String _hx_tmp1;
HXDLIN( 315)		if (::hx::IsNull( ::ClientPrefs_obj::controllerBinds )) {
HXLINE( 315)			_hx_tmp1 = HX_("null",87,9e,0e,49);
            		}
            		else {
HXLINE( 315)			_hx_tmp1 = ::ClientPrefs_obj::controllerBinds->toString();
            		}
HXDLIN( 315)		_hx_tmp((HX_("Reloaded all buttons: ",60,75,da,fb) + _hx_tmp1),::hx::SourceInfo(HX_("source/options/ControllerSubState.hx",6c,61,78,1f),315,HX_("options.ControllerSubState",5d,04,6d,bf),HX_("reloadBinds",fd,69,a4,0e)));
HXLINE( 317)		{
HXLINE( 317)			int _g = 0;
HXDLIN( 317)			int _g1 = this->grpOptions->length;
HXDLIN( 317)			while((_g < _g1)){
HXLINE( 317)				_g = (_g + 1);
HXDLIN( 317)				int i = (_g - 1);
HXLINE( 318)				if (!(this->unselectableCheck(i,true))) {
HXLINE( 319)					this->addBindTexts(Dynamic( this->grpOptions->members->__get(i)).StaticCast<  ::Alphabet >(),i);
            				}
            			}
            		}
HXLINE( 324)		int bullShit = 0;
HXLINE( 325)		{
HXLINE( 325)			int _g2 = 0;
HXDLIN( 325)			int _g3 = this->grpInputs->length;
HXDLIN( 325)			while((_g2 < _g3)){
HXLINE( 325)				_g2 = (_g2 + 1);
HXDLIN( 325)				int i = (_g2 - 1);
HXLINE( 326)				this->grpInputs->__get(i).StaticCast<  ::AttachedText >()->set_alpha(((Float)0.6));
            			}
            		}
HXLINE( 328)		{
HXLINE( 328)			int _g4 = 0;
HXDLIN( 328)			int _g5 = this->grpInputsAlt->length;
HXDLIN( 328)			while((_g4 < _g5)){
HXLINE( 328)				_g4 = (_g4 + 1);
HXDLIN( 328)				int i = (_g4 - 1);
HXLINE( 329)				this->grpInputsAlt->__get(i).StaticCast<  ::AttachedText >()->set_alpha(((Float)0.6));
            			}
            		}
HXLINE( 332)		{
HXLINE( 332)			int _g6 = 0;
HXDLIN( 332)			::Array< ::Dynamic> _g7 = this->grpOptions->members;
HXDLIN( 332)			while((_g6 < _g7->length)){
HXLINE( 332)				 ::Alphabet item = _g7->__get(_g6).StaticCast<  ::Alphabet >();
HXDLIN( 332)				_g6 = (_g6 + 1);
HXLINE( 333)				item->targetY = ( (Float)((bullShit - ::options::ControllerSubState_obj::curSelected)) );
HXLINE( 334)				bullShit = (bullShit + 1);
HXLINE( 336)				if (!(this->unselectableCheck((bullShit - 1),null()))) {
HXLINE( 337)					item->set_alpha(((Float)0.6));
HXLINE( 338)					if ((item->targetY == 0)) {
HXLINE( 339)						item->set_alpha(( (Float)(1) ));
HXLINE( 340)						if (::options::ControllerSubState_obj::curAlt) {
HXLINE( 341)							int _g = 0;
HXDLIN( 341)							int _g1 = this->grpInputsAlt->length;
HXDLIN( 341)							while((_g < _g1)){
HXLINE( 341)								_g = (_g + 1);
HXDLIN( 341)								int i = (_g - 1);
HXLINE( 342)								if (::hx::IsInstanceEq( this->grpInputsAlt->__get(i).StaticCast<  ::AttachedText >()->sprTracker,item )) {
HXLINE( 343)									this->grpInputsAlt->__get(i).StaticCast<  ::AttachedText >()->set_alpha(( (Float)(1) ));
            								}
            							}
            						}
            						else {
HXLINE( 347)							int _g = 0;
HXDLIN( 347)							int _g1 = this->grpInputs->length;
HXDLIN( 347)							while((_g < _g1)){
HXLINE( 347)								_g = (_g + 1);
HXDLIN( 347)								int i = (_g - 1);
HXLINE( 348)								if (::hx::IsInstanceEq( this->grpInputs->__get(i).StaticCast<  ::AttachedText >()->sprTracker,item )) {
HXLINE( 349)									this->grpInputs->__get(i).StaticCast<  ::AttachedText >()->set_alpha(( (Float)(1) ));
            								}
            							}
            						}
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ControllerSubState_obj,reloadBinds,(void))

int ControllerSubState_obj::curSelected;

bool ControllerSubState_obj::curAlt;

::String ControllerSubState_obj::defaultStr;


::hx::ObjectPtr< ControllerSubState_obj > ControllerSubState_obj::__new() {
	::hx::ObjectPtr< ControllerSubState_obj > __this = new ControllerSubState_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ControllerSubState_obj > ControllerSubState_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ControllerSubState_obj *__this = (ControllerSubState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ControllerSubState_obj), true, "options.ControllerSubState"));
	*(void **)__this = ControllerSubState_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ControllerSubState_obj::ControllerSubState_obj()
{
}

void ControllerSubState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ControllerSubState);
	HX_MARK_MEMBER_NAME(bindLength,"bindLength");
	HX_MARK_MEMBER_NAME(optionShit,"optionShit");
	HX_MARK_MEMBER_NAME(grpOptions,"grpOptions");
	HX_MARK_MEMBER_NAME(grpInputs,"grpInputs");
	HX_MARK_MEMBER_NAME(grpInputsAlt,"grpInputsAlt");
	HX_MARK_MEMBER_NAME(rebindingButton,"rebindingButton");
	HX_MARK_MEMBER_NAME(nextAccept,"nextAccept");
	HX_MARK_MEMBER_NAME(gamepadDetails,"gamepadDetails");
	HX_MARK_MEMBER_NAME(canBind,"canBind");
	HX_MARK_MEMBER_NAME(leaving,"leaving");
	HX_MARK_MEMBER_NAME(bindingTime,"bindingTime");
	 ::flixel::FlxSubState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ControllerSubState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bindLength,"bindLength");
	HX_VISIT_MEMBER_NAME(optionShit,"optionShit");
	HX_VISIT_MEMBER_NAME(grpOptions,"grpOptions");
	HX_VISIT_MEMBER_NAME(grpInputs,"grpInputs");
	HX_VISIT_MEMBER_NAME(grpInputsAlt,"grpInputsAlt");
	HX_VISIT_MEMBER_NAME(rebindingButton,"rebindingButton");
	HX_VISIT_MEMBER_NAME(nextAccept,"nextAccept");
	HX_VISIT_MEMBER_NAME(gamepadDetails,"gamepadDetails");
	HX_VISIT_MEMBER_NAME(canBind,"canBind");
	HX_VISIT_MEMBER_NAME(leaving,"leaving");
	HX_VISIT_MEMBER_NAME(bindingTime,"bindingTime");
	 ::flixel::FlxSubState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ControllerSubState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"canBind") ) { return ::hx::Val( canBind ); }
		if (HX_FIELD_EQ(inName,"leaving") ) { return ::hx::Val( leaving ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"grpInputs") ) { return ::hx::Val( grpInputs ); }
		if (HX_FIELD_EQ(inName,"changeAlt") ) { return ::hx::Val( changeAlt_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bindLength") ) { return ::hx::Val( bindLength ); }
		if (HX_FIELD_EQ(inName,"optionShit") ) { return ::hx::Val( optionShit ); }
		if (HX_FIELD_EQ(inName,"grpOptions") ) { return ::hx::Val( grpOptions ); }
		if (HX_FIELD_EQ(inName,"nextAccept") ) { return ::hx::Val( nextAccept ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bindingTime") ) { return ::hx::Val( bindingTime ); }
		if (HX_FIELD_EQ(inName,"reloadBinds") ) { return ::hx::Val( reloadBinds_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"grpInputsAlt") ) { return ::hx::Val( grpInputsAlt ); }
		if (HX_FIELD_EQ(inName,"addBindTexts") ) { return ::hx::Val( addBindTexts_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"gamepadDetails") ) { return ::hx::Val( gamepadDetails ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"rebindingButton") ) { return ::hx::Val( rebindingButton ); }
		if (HX_FIELD_EQ(inName,"getInputTextNum") ) { return ::hx::Val( getInputTextNum_dyn() ); }
		if (HX_FIELD_EQ(inName,"changeSelection") ) { return ::hx::Val( changeSelection_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"unselectableCheck") ) { return ::hx::Val( unselectableCheck_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ControllerSubState_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"curAlt") ) { outValue = ( curAlt ); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"defaultStr") ) { outValue = ( defaultStr ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { outValue = ( curSelected ); return true; }
	}
	return false;
}

::hx::Val ControllerSubState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"canBind") ) { canBind=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"leaving") ) { leaving=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"grpInputs") ) { grpInputs=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bindLength") ) { bindLength=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"optionShit") ) { optionShit=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
		if (HX_FIELD_EQ(inName,"grpOptions") ) { grpOptions=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nextAccept") ) { nextAccept=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bindingTime") ) { bindingTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"grpInputsAlt") ) { grpInputsAlt=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"gamepadDetails") ) { gamepadDetails=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"rebindingButton") ) { rebindingButton=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ControllerSubState_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"curAlt") ) { curAlt=ioValue.Cast< bool >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"defaultStr") ) { defaultStr=ioValue.Cast< ::String >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { curSelected=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void ControllerSubState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("bindLength",83,6a,31,c7));
	outFields->push(HX_("optionShit",d5,2d,ee,91));
	outFields->push(HX_("grpOptions",f9,45,d8,00));
	outFields->push(HX_("grpInputs",ee,3e,7e,59));
	outFields->push(HX_("grpInputsAlt",db,fa,fe,c1));
	outFields->push(HX_("rebindingButton",84,ab,94,30));
	outFields->push(HX_("nextAccept",5b,44,38,c0));
	outFields->push(HX_("gamepadDetails",21,ea,57,76));
	outFields->push(HX_("canBind",ed,dd,6e,5f));
	outFields->push(HX_("leaving",f4,09,47,15));
	outFields->push(HX_("bindingTime",f2,09,cb,be));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ControllerSubState_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(ControllerSubState_obj,bindLength),HX_("bindLength",83,6a,31,c7)},
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(int)offsetof(ControllerSubState_obj,optionShit),HX_("optionShit",d5,2d,ee,91)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(ControllerSubState_obj,grpOptions),HX_("grpOptions",f9,45,d8,00)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(ControllerSubState_obj,grpInputs),HX_("grpInputs",ee,3e,7e,59)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(ControllerSubState_obj,grpInputsAlt),HX_("grpInputsAlt",db,fa,fe,c1)},
	{::hx::fsBool,(int)offsetof(ControllerSubState_obj,rebindingButton),HX_("rebindingButton",84,ab,94,30)},
	{::hx::fsInt,(int)offsetof(ControllerSubState_obj,nextAccept),HX_("nextAccept",5b,44,38,c0)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(ControllerSubState_obj,gamepadDetails),HX_("gamepadDetails",21,ea,57,76)},
	{::hx::fsBool,(int)offsetof(ControllerSubState_obj,canBind),HX_("canBind",ed,dd,6e,5f)},
	{::hx::fsBool,(int)offsetof(ControllerSubState_obj,leaving),HX_("leaving",f4,09,47,15)},
	{::hx::fsFloat,(int)offsetof(ControllerSubState_obj,bindingTime),HX_("bindingTime",f2,09,cb,be)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo ControllerSubState_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &ControllerSubState_obj::curSelected,HX_("curSelected",fb,eb,ab,32)},
	{::hx::fsBool,(void *) &ControllerSubState_obj::curAlt,HX_("curAlt",89,9b,c2,3e)},
	{::hx::fsString,(void *) &ControllerSubState_obj::defaultStr,HX_("defaultStr",70,b6,04,26)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String ControllerSubState_obj_sMemberFields[] = {
	HX_("bindLength",83,6a,31,c7),
	HX_("optionShit",d5,2d,ee,91),
	HX_("grpOptions",f9,45,d8,00),
	HX_("grpInputs",ee,3e,7e,59),
	HX_("grpInputsAlt",db,fa,fe,c1),
	HX_("rebindingButton",84,ab,94,30),
	HX_("nextAccept",5b,44,38,c0),
	HX_("gamepadDetails",21,ea,57,76),
	HX_("canBind",ed,dd,6e,5f),
	HX_("leaving",f4,09,47,15),
	HX_("bindingTime",f2,09,cb,be),
	HX_("update",09,86,05,87),
	HX_("getInputTextNum",65,e2,d9,59),
	HX_("changeSelection",bc,98,b5,48),
	HX_("changeAlt",99,a5,f7,1d),
	HX_("unselectableCheck",19,58,ce,19),
	HX_("addBindTexts",c8,f9,1e,b0),
	HX_("reloadBinds",fd,69,a4,0e),
	::String(null()) };

static void ControllerSubState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ControllerSubState_obj::curSelected,"curSelected");
	HX_MARK_MEMBER_NAME(ControllerSubState_obj::curAlt,"curAlt");
	HX_MARK_MEMBER_NAME(ControllerSubState_obj::defaultStr,"defaultStr");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ControllerSubState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ControllerSubState_obj::curSelected,"curSelected");
	HX_VISIT_MEMBER_NAME(ControllerSubState_obj::curAlt,"curAlt");
	HX_VISIT_MEMBER_NAME(ControllerSubState_obj::defaultStr,"defaultStr");
};

#endif

::hx::Class ControllerSubState_obj::__mClass;

static ::String ControllerSubState_obj_sStaticFields[] = {
	HX_("curSelected",fb,eb,ab,32),
	HX_("curAlt",89,9b,c2,3e),
	HX_("defaultStr",70,b6,04,26),
	::String(null())
};

void ControllerSubState_obj::__register()
{
	ControllerSubState_obj _hx_dummy;
	ControllerSubState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("options.ControllerSubState",5d,04,6d,bf);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ControllerSubState_obj::__GetStatic;
	__mClass->mSetStaticField = &ControllerSubState_obj::__SetStatic;
	__mClass->mMarkFunc = ControllerSubState_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ControllerSubState_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ControllerSubState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ControllerSubState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ControllerSubState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ControllerSubState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ControllerSubState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ControllerSubState_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_2d4c6e8d62a7a518_33_boot)
HXDLIN(  33)		curSelected = -1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_2d4c6e8d62a7a518_34_boot)
HXDLIN(  34)		curAlt = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_2d4c6e8d62a7a518_36_boot)
HXDLIN(  36)		defaultStr = HX_("Reset to Default Buttons",ce,2e,93,7f);
            	}
}

} // end namespace options
