#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
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
#ifndef INCLUDED_flixel_addons_display_FlxExtendedSprite
#include <flixel/addons/display/FlxExtendedSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_display_FlxMouseSpring
#include <flixel/addons/display/FlxMouseSpring.h>
#endif
#ifndef INCLUDED_flixel_addons_plugin_FlxMouseControl
#include <flixel/addons/plugin/FlxMouseControl.h>
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
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouseButton
#include <flixel/input/mouse/FlxMouseButton.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMath
#include <flixel/math/FlxMath.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_PluginFrontEnd
#include <flixel/system/frontEnds/PluginFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxCollision
#include <flixel/util/FlxCollision.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1ea0f14a8839592c_19_new,"flixel.addons.display.FlxExtendedSprite","new",0x1ee235ed,"flixel.addons.display.FlxExtendedSprite.new","flixel/addons/display/FlxExtendedSprite.hx",19,0xe2826ec4)
HX_LOCAL_STACK_FRAME(_hx_pos_1ea0f14a8839592c_230_enableMouseClicks,"flixel.addons.display.FlxExtendedSprite","enableMouseClicks",0x0c055bba,"flixel.addons.display.FlxExtendedSprite.enableMouseClicks","flixel/addons/display/FlxExtendedSprite.hx",230,0xe2826ec4)
HX_LOCAL_STACK_FRAME(_hx_pos_1ea0f14a8839592c_248_disableMouseClicks,"flixel.addons.display.FlxExtendedSprite","disableMouseClicks",0xc2147f3b,"flixel.addons.display.FlxExtendedSprite.disableMouseClicks","flixel/addons/display/FlxExtendedSprite.hx",248,0xe2826ec4)
HX_LOCAL_STACK_FRAME(_hx_pos_1ea0f14a8839592c_265_enableMouseDrag,"flixel.addons.display.FlxExtendedSprite","enableMouseDrag",0xeadcb2c3,"flixel.addons.display.FlxExtendedSprite.enableMouseDrag","flixel/addons/display/FlxExtendedSprite.hx",265,0xe2826ec4)
HX_LOCAL_STACK_FRAME(_hx_pos_1ea0f14a8839592c_293_disableMouseDrag,"flixel.addons.display.FlxExtendedSprite","disableMouseDrag",0xbef44404,"flixel.addons.display.FlxExtendedSprite.disableMouseDrag","flixel/addons/display/FlxExtendedSprite.hx",293,0xe2826ec4)
HX_LOCAL_STACK_FRAME(_hx_pos_1ea0f14a8839592c_314_enableMouseThrow,"flixel.addons.display.FlxExtendedSprite","enableMouseThrow",0xc619cb77,"flixel.addons.display.FlxExtendedSprite.enableMouseThrow","flixel/addons/display/FlxExtendedSprite.hx",314,0xe2826ec4)
HX_LOCAL_STACK_FRAME(_hx_pos_1ea0f14a8839592c_335_disableMouseThrow,"flixel.addons.display.FlxExtendedSprite","disableMouseThrow",0x86a15316,"flixel.addons.display.FlxExtendedSprite.disableMouseThrow","flixel/addons/display/FlxExtendedSprite.hx",335,0xe2826ec4)
HX_LOCAL_STACK_FRAME(_hx_pos_1ea0f14a8839592c_348_enableMouseSnap,"flixel.addons.display.FlxExtendedSprite","enableMouseSnap",0xf4c3dd19,"flixel.addons.display.FlxExtendedSprite.enableMouseSnap","flixel/addons/display/FlxExtendedSprite.hx",348,0xe2826ec4)
HX_LOCAL_STACK_FRAME(_hx_pos_1ea0f14a8839592c_359_disableMouseSnap,"flixel.addons.display.FlxExtendedSprite","disableMouseSnap",0xc8db6e5a,"flixel.addons.display.FlxExtendedSprite.disableMouseSnap","flixel/addons/display/FlxExtendedSprite.hx",359,0xe2826ec4)
HX_LOCAL_STACK_FRAME(_hx_pos_1ea0f14a8839592c_377_enableMouseSpring,"flixel.addons.display.FlxExtendedSprite","enableMouseSpring",0xc54cef5c,"flixel.addons.display.FlxExtendedSprite.enableMouseSpring","flixel/addons/display/FlxExtendedSprite.hx",377,0xe2826ec4)
HX_LOCAL_STACK_FRAME(_hx_pos_1ea0f14a8839592c_409_disableMouseSpring,"flixel.addons.display.FlxExtendedSprite","disableMouseSpring",0x7b5c12dd,"flixel.addons.display.FlxExtendedSprite.disableMouseSpring","flixel/addons/display/FlxExtendedSprite.hx",409,0xe2826ec4)
HX_LOCAL_STACK_FRAME(_hx_pos_1ea0f14a8839592c_422_setDragLock,"flixel.addons.display.FlxExtendedSprite","setDragLock",0x200b024e,"flixel.addons.display.FlxExtendedSprite.setDragLock","flixel/addons/display/FlxExtendedSprite.hx",422,0xe2826ec4)
HX_LOCAL_STACK_FRAME(_hx_pos_1ea0f14a8839592c_431_update,"flixel.addons.display.FlxExtendedSprite","update",0x94f7569c,"flixel.addons.display.FlxExtendedSprite.update","flixel/addons/display/FlxExtendedSprite.hx",431,0xe2826ec4)
HX_LOCAL_STACK_FRAME(_hx_pos_1ea0f14a8839592c_475_updateGravity,"flixel.addons.display.FlxExtendedSprite","updateGravity",0x1a4d8b12,"flixel.addons.display.FlxExtendedSprite.updateGravity","flixel/addons/display/FlxExtendedSprite.hx",475,0xe2826ec4)
HX_LOCAL_STACK_FRAME(_hx_pos_1ea0f14a8839592c_575_updateDrag,"flixel.addons.display.FlxExtendedSprite","updateDrag",0x52262cb0,"flixel.addons.display.FlxExtendedSprite.updateDrag","flixel/addons/display/FlxExtendedSprite.hx",575,0xe2826ec4)
HX_LOCAL_STACK_FRAME(_hx_pos_1ea0f14a8839592c_615_checkForClick,"flixel.addons.display.FlxExtendedSprite","checkForClick",0x015d1934,"flixel.addons.display.FlxExtendedSprite.checkForClick","flixel/addons/display/FlxExtendedSprite.hx",615,0xe2826ec4)
HX_LOCAL_STACK_FRAME(_hx_pos_1ea0f14a8839592c_646_mousePressedHandler,"flixel.addons.display.FlxExtendedSprite","mousePressedHandler",0xe7d0cdda,"flixel.addons.display.FlxExtendedSprite.mousePressedHandler","flixel/addons/display/FlxExtendedSprite.hx",646,0xe2826ec4)
HX_LOCAL_STACK_FRAME(_hx_pos_1ea0f14a8839592c_664_mouseReleasedHandler,"flixel.addons.display.FlxExtendedSprite","mouseReleasedHandler",0x893ebfbb,"flixel.addons.display.FlxExtendedSprite.mouseReleasedHandler","flixel/addons/display/FlxExtendedSprite.hx",664,0xe2826ec4)
HX_LOCAL_STACK_FRAME(_hx_pos_1ea0f14a8839592c_694_startDrag,"flixel.addons.display.FlxExtendedSprite","startDrag",0x579e32c3,"flixel.addons.display.FlxExtendedSprite.startDrag","flixel/addons/display/FlxExtendedSprite.hx",694,0xe2826ec4)
HX_LOCAL_STACK_FRAME(_hx_pos_1ea0f14a8839592c_721_checkBoundsRect,"flixel.addons.display.FlxExtendedSprite","checkBoundsRect",0x102b4a2e,"flixel.addons.display.FlxExtendedSprite.checkBoundsRect","flixel/addons/display/FlxExtendedSprite.hx",721,0xe2826ec4)
HX_LOCAL_STACK_FRAME(_hx_pos_1ea0f14a8839592c_745_checkBoundsSprite,"flixel.addons.display.FlxExtendedSprite","checkBoundsSprite",0xaedaaf8f,"flixel.addons.display.FlxExtendedSprite.checkBoundsSprite","flixel/addons/display/FlxExtendedSprite.hx",745,0xe2826ec4)
HX_LOCAL_STACK_FRAME(_hx_pos_1ea0f14a8839592c_769_stopDrag,"flixel.addons.display.FlxExtendedSprite","stopDrag",0x5f9fcc69,"flixel.addons.display.FlxExtendedSprite.stopDrag","flixel/addons/display/FlxExtendedSprite.hx",769,0xe2826ec4)
HX_LOCAL_STACK_FRAME(_hx_pos_1ea0f14a8839592c_798_setGravity,"flixel.addons.display.FlxExtendedSprite","setGravity",0x21dfa8df,"flixel.addons.display.FlxExtendedSprite.setGravity","flixel/addons/display/FlxExtendedSprite.hx",798,0xe2826ec4)
HX_LOCAL_STACK_FRAME(_hx_pos_1ea0f14a8839592c_824_flipGravity,"flixel.addons.display.FlxExtendedSprite","flipGravity",0x12621dae,"flixel.addons.display.FlxExtendedSprite.flipGravity","flixel/addons/display/FlxExtendedSprite.hx",824,0xe2826ec4)
HX_LOCAL_STACK_FRAME(_hx_pos_1ea0f14a8839592c_840_get_clicks,"flixel.addons.display.FlxExtendedSprite","get_clicks",0x51d6c907,"flixel.addons.display.FlxExtendedSprite.get_clicks","flixel/addons/display/FlxExtendedSprite.hx",840,0xe2826ec4)
HX_LOCAL_STACK_FRAME(_hx_pos_1ea0f14a8839592c_845_set_clicks,"flixel.addons.display.FlxExtendedSprite","set_clicks",0x5554677b,"flixel.addons.display.FlxExtendedSprite.set_clicks","flixel/addons/display/FlxExtendedSprite.hx",845,0xe2826ec4)
HX_LOCAL_STACK_FRAME(_hx_pos_1ea0f14a8839592c_850_get_springX,"flixel.addons.display.FlxExtendedSprite","get_springX",0xaf72b78f,"flixel.addons.display.FlxExtendedSprite.get_springX","flixel/addons/display/FlxExtendedSprite.hx",850,0xe2826ec4)
HX_LOCAL_STACK_FRAME(_hx_pos_1ea0f14a8839592c_855_get_springY,"flixel.addons.display.FlxExtendedSprite","get_springY",0xaf72b790,"flixel.addons.display.FlxExtendedSprite.get_springY","flixel/addons/display/FlxExtendedSprite.hx",855,0xe2826ec4)
HX_LOCAL_STACK_FRAME(_hx_pos_1ea0f14a8839592c_860_get_point,"flixel.addons.display.FlxExtendedSprite","get_point",0x66739df4,"flixel.addons.display.FlxExtendedSprite.get_point","flixel/addons/display/FlxExtendedSprite.hx",860,0xe2826ec4)
HX_LOCAL_STACK_FRAME(_hx_pos_1ea0f14a8839592c_865_set_point,"flixel.addons.display.FlxExtendedSprite","set_point",0x49c48a00,"flixel.addons.display.FlxExtendedSprite.set_point","flixel/addons/display/FlxExtendedSprite.hx",865,0xe2826ec4)
HX_LOCAL_STACK_FRAME(_hx_pos_1ea0f14a8839592c_871_get_mouseOver,"flixel.addons.display.FlxExtendedSprite","get_mouseOver",0x8e50d5bd,"flixel.addons.display.FlxExtendedSprite.get_mouseOver","flixel/addons/display/FlxExtendedSprite.hx",871,0xe2826ec4)
HX_LOCAL_STACK_FRAME(_hx_pos_1ea0f14a8839592c_877_get_mouseX,"flixel.addons.display.FlxExtendedSprite","get_mouseX",0x1396d06f,"flixel.addons.display.FlxExtendedSprite.get_mouseX","flixel/addons/display/FlxExtendedSprite.hx",877,0xe2826ec4)
HX_LOCAL_STACK_FRAME(_hx_pos_1ea0f14a8839592c_887_get_mouseY,"flixel.addons.display.FlxExtendedSprite","get_mouseY",0x1396d070,"flixel.addons.display.FlxExtendedSprite.get_mouseY","flixel/addons/display/FlxExtendedSprite.hx",887,0xe2826ec4)
HX_LOCAL_STACK_FRAME(_hx_pos_1ea0f14a8839592c_898_get_rect,"flixel.addons.display.FlxExtendedSprite","get_rect",0x95d76400,"flixel.addons.display.FlxExtendedSprite.get_rect","flixel/addons/display/FlxExtendedSprite.hx",898,0xe2826ec4)
namespace flixel{
namespace addons{
namespace display{

void FlxExtendedSprite_obj::__construct(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y, ::Dynamic SimpleGraphic){
            		Float X = __o_X.Default(0);
            		Float Y = __o_Y.Default(0);
            	HX_STACKFRAME(&_hx_pos_1ea0f14a8839592c_19_new)
HXLINE( 205)		this->_allowVerticalDrag = true;
HXLINE( 204)		this->_allowHorizontalDrag = true;
HXLINE( 199)		this->_dragPixelPerfect = false;
HXLINE( 194)		this->_clickCounter = 0;
HXLINE( 192)		this->_clickPixelPerfect = false;
HXLINE( 191)		this->_clickOnRelease = false;
HXLINE( 187)		this->_snapOnRelease = false;
HXLINE( 186)		this->_snapOnDrag = false;
HXLINE( 140)		this->hasMouseSpring = false;
HXLINE(  99)		this->springOnPressed = true;
HXLINE(  94)		this->draggable = false;
HXLINE(  89)		this->isDragged = false;
HXLINE(  54)		this->hasGravity = false;
HXLINE(  39)		this->throwable = false;
HXLINE(  34)		this->clickable = false;
HXLINE(  29)		this->isPressed = false;
HXLINE( 217)		super::__construct(X,Y,SimpleGraphic);
            	}

Dynamic FlxExtendedSprite_obj::__CreateEmpty() { return new FlxExtendedSprite_obj; }

void *FlxExtendedSprite_obj::_hx_vtable = 0;

Dynamic FlxExtendedSprite_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxExtendedSprite_obj > _hx_result = new FlxExtendedSprite_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool FlxExtendedSprite_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4c508fdd) {
		if (inClassId<=(int)0x2c01639b) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2c01639b;
		} else {
			return inClassId==(int)0x4c508fdd;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void FlxExtendedSprite_obj::enableMouseClicks(bool OnRelease,::hx::Null< bool >  __o_PixelPerfect,::hx::Null< int >  __o_AlphaThreshold){
            		bool PixelPerfect = __o_PixelPerfect.Default(false);
            		int AlphaThreshold = __o_AlphaThreshold.Default(255);
            	HX_STACKFRAME(&_hx_pos_1ea0f14a8839592c_230_enableMouseClicks)
HXLINE( 231)		if (::hx::IsNull( ::flixel::FlxG_obj::plugins->get(::hx::ClassOf< ::flixel::addons::plugin::FlxMouseControl >()).StaticCast<  ::flixel::addons::plugin::FlxMouseControl >() )) {
HXLINE( 233)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("FlxExtendedSprite.enableMouseClicks called but FlxMouseControl plugin not activated",be,48,74,ba)));
            		}
HXLINE( 236)		this->clickable = true;
HXLINE( 238)		this->_clickOnRelease = OnRelease;
HXLINE( 239)		this->_clickPixelPerfect = PixelPerfect;
HXLINE( 240)		this->_clickPixelPerfectAlpha = AlphaThreshold;
HXLINE( 241)		this->_clickCounter = 0;
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxExtendedSprite_obj,enableMouseClicks,(void))

void FlxExtendedSprite_obj::disableMouseClicks(){
            	HX_STACKFRAME(&_hx_pos_1ea0f14a8839592c_248_disableMouseClicks)
HXLINE( 249)		this->clickable = false;
HXLINE( 250)		this->mousePressedCallback = null();
HXLINE( 251)		this->mouseReleasedCallback = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxExtendedSprite_obj,disableMouseClicks,(void))

void FlxExtendedSprite_obj::enableMouseDrag(::hx::Null< bool >  __o_LockCenter,::hx::Null< bool >  __o_PixelPerfect,::hx::Null< int >  __o_AlphaThreshold, ::flixel::math::FlxRect BoundsRect, ::flixel::FlxSprite BoundsSprite){
            		bool LockCenter = __o_LockCenter.Default(false);
            		bool PixelPerfect = __o_PixelPerfect.Default(false);
            		int AlphaThreshold = __o_AlphaThreshold.Default(255);
            	HX_STACKFRAME(&_hx_pos_1ea0f14a8839592c_265_enableMouseDrag)
HXLINE( 266)		if (::hx::IsNull( ::flixel::FlxG_obj::plugins->get(::hx::ClassOf< ::flixel::addons::plugin::FlxMouseControl >()).StaticCast<  ::flixel::addons::plugin::FlxMouseControl >() )) {
HXLINE( 268)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("FlxExtendedSprite.enableMouseDrag called but FlxMouseControl plugin not activated",87,56,a5,38)));
            		}
HXLINE( 271)		this->draggable = true;
HXLINE( 273)		this->_dragFromPoint = LockCenter;
HXLINE( 274)		this->_dragPixelPerfect = PixelPerfect;
HXLINE( 275)		this->_dragPixelPerfectAlpha = AlphaThreshold;
HXLINE( 277)		if (::hx::IsNotNull( BoundsRect )) {
HXLINE( 279)			this->boundsRect = BoundsRect;
            		}
HXLINE( 282)		if (::hx::IsNotNull( BoundsSprite )) {
HXLINE( 284)			this->boundsSprite = BoundsSprite;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC5(FlxExtendedSprite_obj,enableMouseDrag,(void))

void FlxExtendedSprite_obj::disableMouseDrag(){
            	HX_STACKFRAME(&_hx_pos_1ea0f14a8839592c_293_disableMouseDrag)
HXLINE( 294)		if (this->isDragged) {
HXLINE( 296)			::flixel::addons::plugin::FlxMouseControl_obj::dragTarget = null();
HXLINE( 297)			::flixel::addons::plugin::FlxMouseControl_obj::isDragging = false;
            		}
HXLINE( 300)		this->isDragged = false;
HXLINE( 301)		this->draggable = false;
HXLINE( 303)		this->mouseStartDragCallback = null();
HXLINE( 304)		this->mouseStopDragCallback = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxExtendedSprite_obj,disableMouseDrag,(void))

void FlxExtendedSprite_obj::enableMouseThrow(int FactorX,int FactorY){
            	HX_STACKFRAME(&_hx_pos_1ea0f14a8839592c_314_enableMouseThrow)
HXLINE( 315)		if (::hx::IsNull( ::flixel::FlxG_obj::plugins->get(::hx::ClassOf< ::flixel::addons::plugin::FlxMouseControl >()).StaticCast<  ::flixel::addons::plugin::FlxMouseControl >() )) {
HXLINE( 317)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("FlxExtendedSprite.enableMouseThrow called but FlxMouseControl plugin not activated",71,fd,98,01)));
            		}
HXLINE( 320)		this->throwable = true;
HXLINE( 321)		this->_throwXFactor = FactorX;
HXLINE( 322)		this->_throwYFactor = FactorY;
HXLINE( 324)		bool _hx_tmp;
HXDLIN( 324)		if ((this->clickable == false)) {
HXLINE( 324)			_hx_tmp = (this->draggable == false);
            		}
            		else {
HXLINE( 324)			_hx_tmp = false;
            		}
HXDLIN( 324)		if (_hx_tmp) {
HXLINE( 326)			this->clickable = true;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxExtendedSprite_obj,enableMouseThrow,(void))

void FlxExtendedSprite_obj::disableMouseThrow(){
            	HX_STACKFRAME(&_hx_pos_1ea0f14a8839592c_335_disableMouseThrow)
HXDLIN( 335)		this->throwable = false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxExtendedSprite_obj,disableMouseThrow,(void))

void FlxExtendedSprite_obj::enableMouseSnap(int SnapX,int SnapY,::hx::Null< bool >  __o_OnDrag,::hx::Null< bool >  __o_OnRelease){
            		bool OnDrag = __o_OnDrag.Default(true);
            		bool OnRelease = __o_OnRelease.Default(false);
            	HX_STACKFRAME(&_hx_pos_1ea0f14a8839592c_348_enableMouseSnap)
HXLINE( 349)		this->_snapOnDrag = OnDrag;
HXLINE( 350)		this->_snapOnRelease = OnRelease;
HXLINE( 351)		this->_snapX = SnapX;
HXLINE( 352)		this->_snapY = SnapY;
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxExtendedSprite_obj,enableMouseSnap,(void))

void FlxExtendedSprite_obj::disableMouseSnap(){
            	HX_STACKFRAME(&_hx_pos_1ea0f14a8839592c_359_disableMouseSnap)
HXLINE( 360)		this->_snapOnDrag = false;
HXLINE( 361)		this->_snapOnRelease = false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxExtendedSprite_obj,disableMouseSnap,(void))

 ::flixel::addons::display::FlxMouseSpring FlxExtendedSprite_obj::enableMouseSpring(::hx::Null< bool >  __o_OnPressed,::hx::Null< bool >  __o_RetainVelocity,::hx::Null< Float >  __o_Tension,::hx::Null< Float >  __o_Friction,::hx::Null< Float >  __o_Gravity){
            		bool OnPressed = __o_OnPressed.Default(true);
            		bool RetainVelocity = __o_RetainVelocity.Default(false);
            		Float Tension = __o_Tension.Default(((Float)0.1));
            		Float Friction = __o_Friction.Default(((Float)0.95));
            		Float Gravity = __o_Gravity.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_1ea0f14a8839592c_377_enableMouseSpring)
HXLINE( 378)		if (::hx::IsNull( ::flixel::FlxG_obj::plugins->get(::hx::ClassOf< ::flixel::addons::plugin::FlxMouseControl >()).StaticCast<  ::flixel::addons::plugin::FlxMouseControl >() )) {
HXLINE( 380)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("FlxExtendedSprite.enableMouseSpring called but FlxMouseControl plugin not activated",60,88,76,12)));
            		}
HXLINE( 383)		this->hasMouseSpring = true;
HXLINE( 384)		this->springOnPressed = OnPressed;
HXLINE( 386)		if (::hx::IsNull( this->mouseSpring )) {
HXLINE( 388)			this->mouseSpring =  ::flixel::addons::display::FlxMouseSpring_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this),RetainVelocity,Tension,Friction,Gravity);
            		}
            		else {
HXLINE( 392)			this->mouseSpring->tension = Tension;
HXLINE( 393)			this->mouseSpring->friction = Friction;
HXLINE( 394)			this->mouseSpring->gravity = Gravity;
            		}
HXLINE( 397)		bool _hx_tmp;
HXDLIN( 397)		if ((this->clickable == false)) {
HXLINE( 397)			_hx_tmp = (this->draggable == false);
            		}
            		else {
HXLINE( 397)			_hx_tmp = false;
            		}
HXDLIN( 397)		if (_hx_tmp) {
HXLINE( 399)			this->clickable = true;
            		}
HXLINE( 402)		return this->mouseSpring;
            	}


HX_DEFINE_DYNAMIC_FUNC5(FlxExtendedSprite_obj,enableMouseSpring,return )

void FlxExtendedSprite_obj::disableMouseSpring(){
            	HX_STACKFRAME(&_hx_pos_1ea0f14a8839592c_409_disableMouseSpring)
HXLINE( 410)		this->hasMouseSpring = false;
HXLINE( 411)		this->mouseSpring = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxExtendedSprite_obj,disableMouseSpring,(void))

void FlxExtendedSprite_obj::setDragLock(::hx::Null< bool >  __o_AllowHorizontalDrag,::hx::Null< bool >  __o_AllowVerticalDrag){
            		bool AllowHorizontalDrag = __o_AllowHorizontalDrag.Default(true);
            		bool AllowVerticalDrag = __o_AllowVerticalDrag.Default(true);
            	HX_STACKFRAME(&_hx_pos_1ea0f14a8839592c_422_setDragLock)
HXLINE( 423)		this->_allowHorizontalDrag = AllowHorizontalDrag;
HXLINE( 424)		this->_allowVerticalDrag = AllowVerticalDrag;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxExtendedSprite_obj,setDragLock,(void))

void FlxExtendedSprite_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_1ea0f14a8839592c_431_update)
HXLINE( 433)		bool _hx_tmp;
HXDLIN( 433)		if ((this->draggable == true)) {
HXLINE( 433)			_hx_tmp = (this->isDragged == true);
            		}
            		else {
HXLINE( 433)			_hx_tmp = false;
            		}
HXDLIN( 433)		if (_hx_tmp) {
HXLINE( 435)			this->updateDrag();
            		}
HXLINE( 438)		bool _hx_tmp1;
HXDLIN( 438)		if ((this->isPressed == false)) {
HXLINE( 438)			_hx_tmp1 = (::flixel::FlxG_obj::mouse->_leftButton->current == 2);
            		}
            		else {
HXLINE( 438)			_hx_tmp1 = false;
            		}
HXDLIN( 438)		if (_hx_tmp1) {
HXLINE( 440)			this->checkForClick();
            		}
HXLINE( 443)		if ((this->hasGravity == true)) {
HXLINE( 445)			this->updateGravity();
            		}
HXLINE( 448)		if ((this->hasMouseSpring == true)) {
HXLINE( 450)			if ((this->springOnPressed == false)) {
HXLINE( 452)				this->mouseSpring->update(elapsed);
            			}
            			else {
HXLINE( 456)				if ((this->isPressed == true)) {
HXLINE( 458)					this->mouseSpring->update(elapsed);
            				}
            				else {
HXLINE( 462)					this->mouseSpring->reset();
            				}
            			}
            		}
HXLINE( 468)		this->super::update(elapsed);
            	}


void FlxExtendedSprite_obj::updateGravity(){
            	HX_STACKFRAME(&_hx_pos_1ea0f14a8839592c_475_updateGravity)
HXLINE( 479)		if ((this->velocity->x != 0)) {
HXLINE( 481)			if ((this->acceleration->x < 0)) {
HXLINE( 484)				if (((this->touching & 17) != 0)) {
HXLINE( 486)					this->drag->set_y(this->frictionY);
HXLINE( 488)					if (((this->wasTouching & 17) == 0)) {
HXLINE( 490)						if ((this->velocity->x < this->toleranceX)) {
HXLINE( 492)							this->velocity->set_x(( (Float)(0) ));
            						}
            					}
            				}
            				else {
HXLINE( 498)					this->drag->set_y(( (Float)(0) ));
            				}
            			}
            			else {
HXLINE( 501)				if ((this->acceleration->x > 0)) {
HXLINE( 504)					if (((this->touching & 17) != 0)) {
HXLINE( 507)						this->drag->set_y(this->frictionY);
HXLINE( 509)						if (((this->wasTouching & 17) == 0)) {
HXLINE( 511)							if ((this->velocity->x > -(this->toleranceX))) {
HXLINE( 513)								this->velocity->set_x(( (Float)(0) ));
            							}
            						}
            					}
            					else {
HXLINE( 519)						this->drag->set_y(( (Float)(0) ));
            					}
            				}
            			}
            		}
HXLINE( 525)		if ((this->velocity->y != 0)) {
HXLINE( 527)			if ((this->acceleration->y < 0)) {
HXLINE( 530)				if (((this->touching & 256) != 0)) {
HXLINE( 532)					this->drag->set_x(this->frictionX);
HXLINE( 534)					if (((this->wasTouching & 256) == 0)) {
HXLINE( 536)						if ((this->velocity->y < this->toleranceY)) {
HXLINE( 538)							this->velocity->set_y(( (Float)(0) ));
            						}
            					}
            				}
            				else {
HXLINE( 544)					this->drag->set_x(( (Float)(0) ));
            				}
            			}
            			else {
HXLINE( 547)				if ((this->acceleration->y > 0)) {
HXLINE( 550)					if (((this->touching & 4096) != 0)) {
HXLINE( 553)						this->drag->set_x(this->frictionX);
HXLINE( 555)						if (((this->wasTouching & 4096) == 0)) {
HXLINE( 557)							if ((this->velocity->y > -(this->toleranceY))) {
HXLINE( 559)								this->velocity->set_y(( (Float)(0) ));
            							}
            						}
            					}
            					else {
HXLINE( 565)						this->drag->set_x(( (Float)(0) ));
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxExtendedSprite_obj,updateGravity,(void))

void FlxExtendedSprite_obj::updateDrag(){
            	HX_STACKFRAME(&_hx_pos_1ea0f14a8839592c_575_updateDrag)
HXLINE( 577)		if ((this->_allowHorizontalDrag == true)) {
HXLINE( 580)			this->set_x(( (Float)((::Math_obj::floor((::flixel::FlxG_obj::mouse->screenX + (this->scrollFactor->x * ( (Float)((::flixel::FlxG_obj::mouse->x - ::flixel::FlxG_obj::mouse->screenX)) )))) - this->_dragOffsetX)) ));
            		}
HXLINE( 584)		if ((this->_allowVerticalDrag == true)) {
HXLINE( 587)			this->set_y(( (Float)((::Math_obj::floor((::flixel::FlxG_obj::mouse->screenY + (this->scrollFactor->y * ( (Float)((::flixel::FlxG_obj::mouse->y - ::flixel::FlxG_obj::mouse->screenY)) )))) - this->_dragOffsetY)) ));
            		}
HXLINE( 591)		if (::hx::IsNotNull( this->boundsRect )) {
HXLINE( 593)			this->checkBoundsRect();
            		}
HXLINE( 596)		if (::hx::IsNotNull( this->boundsSprite )) {
HXLINE( 598)			this->checkBoundsSprite();
            		}
HXLINE( 601)		if (this->_snapOnDrag) {
HXLINE( 603)			this->set_x(( (Float)((::Math_obj::floor((this->x / ( (Float)(this->_snapX) ))) * this->_snapX)) ));
HXLINE( 604)			this->set_y(( (Float)((::Math_obj::floor((this->y / ( (Float)(this->_snapY) ))) * this->_snapY)) ));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxExtendedSprite_obj,updateDrag,(void))

void FlxExtendedSprite_obj::checkForClick(){
            	HX_STACKFRAME(&_hx_pos_1ea0f14a8839592c_615_checkForClick)
HXDLIN( 615)		bool _hx_tmp;
HXDLIN( 615)		if (this->get_mouseOver()) {
HXDLIN( 615)			_hx_tmp = (::flixel::FlxG_obj::mouse->_leftButton->current == 2);
            		}
            		else {
HXDLIN( 615)			_hx_tmp = false;
            		}
HXDLIN( 615)		if (_hx_tmp) {
HXLINE( 618)			bool _hx_tmp;
HXDLIN( 618)			if ((this->_clickPixelPerfect == false)) {
HXLINE( 618)				_hx_tmp = (this->_dragPixelPerfect == false);
            			}
            			else {
HXLINE( 618)				_hx_tmp = false;
            			}
HXDLIN( 618)			if (_hx_tmp) {
HXLINE( 620)				::flixel::addons::plugin::FlxMouseControl_obj::addToStack(::hx::ObjectPtr<OBJ_>(this));
HXLINE( 621)				return;
            			}
HXLINE( 624)			bool _hx_tmp1;
HXDLIN( 624)			if (this->_clickPixelPerfect) {
HXLINE( 624)				_hx_tmp1 = ::flixel::util::FlxCollision_obj::pixelPerfectPointCheck(::Math_obj::floor(( (Float)(::flixel::FlxG_obj::mouse->x) )),::Math_obj::floor(( (Float)(::flixel::FlxG_obj::mouse->y) )),::hx::ObjectPtr<OBJ_>(this),this->_clickPixelPerfectAlpha);
            			}
            			else {
HXLINE( 624)				_hx_tmp1 = false;
            			}
HXDLIN( 624)			if (_hx_tmp1) {
HXLINE( 627)				::flixel::addons::plugin::FlxMouseControl_obj::addToStack(::hx::ObjectPtr<OBJ_>(this));
HXLINE( 628)				return;
            			}
HXLINE( 631)			bool _hx_tmp2;
HXDLIN( 631)			if (this->_dragPixelPerfect) {
HXLINE( 631)				_hx_tmp2 = ::flixel::util::FlxCollision_obj::pixelPerfectPointCheck(::Math_obj::floor(( (Float)(::flixel::FlxG_obj::mouse->x) )),::Math_obj::floor(( (Float)(::flixel::FlxG_obj::mouse->y) )),::hx::ObjectPtr<OBJ_>(this),this->_dragPixelPerfectAlpha);
            			}
            			else {
HXLINE( 631)				_hx_tmp2 = false;
            			}
HXDLIN( 631)			if (_hx_tmp2) {
HXLINE( 634)				::flixel::addons::plugin::FlxMouseControl_obj::addToStack(::hx::ObjectPtr<OBJ_>(this));
HXLINE( 635)				return;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxExtendedSprite_obj,checkForClick,(void))

void FlxExtendedSprite_obj::mousePressedHandler(){
            	HX_STACKFRAME(&_hx_pos_1ea0f14a8839592c_646_mousePressedHandler)
HXLINE( 647)		this->isPressed = true;
HXLINE( 649)		bool _hx_tmp;
HXDLIN( 649)		if ((this->clickable == true)) {
HXLINE( 649)			_hx_tmp = (this->_clickOnRelease == false);
            		}
            		else {
HXLINE( 649)			_hx_tmp = false;
            		}
HXDLIN( 649)		if (_hx_tmp) {
HXLINE( 651)			this->_clickCounter++;
            		}
HXLINE( 654)		if (::hx::IsNotNull( this->mousePressedCallback )) {
HXLINE( 656)			 ::Dynamic _hx_tmp = this->mousePressedCallback;
HXDLIN( 656)			int _hx_tmp1 = this->get_mouseX();
HXDLIN( 656)			_hx_tmp(::hx::ObjectPtr<OBJ_>(this),_hx_tmp1,this->get_mouseY());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxExtendedSprite_obj,mousePressedHandler,(void))

void FlxExtendedSprite_obj::mouseReleasedHandler(){
            	HX_STACKFRAME(&_hx_pos_1ea0f14a8839592c_664_mouseReleasedHandler)
HXLINE( 665)		this->isPressed = false;
HXLINE( 667)		if ((this->isDragged == true)) {
HXLINE( 669)			this->stopDrag();
            		}
HXLINE( 672)		bool _hx_tmp;
HXDLIN( 672)		if ((this->clickable == true)) {
HXLINE( 672)			_hx_tmp = (this->_clickOnRelease == true);
            		}
            		else {
HXLINE( 672)			_hx_tmp = false;
            		}
HXDLIN( 672)		if (_hx_tmp) {
HXLINE( 674)			this->_clickCounter++;
            		}
HXLINE( 677)		if ((this->throwable == true)) {
HXLINE( 679)			this->velocity->set_x(( (Float)((::flixel::addons::plugin::FlxMouseControl_obj::speedX * this->_throwXFactor)) ));
HXLINE( 680)			this->velocity->set_y(( (Float)((::flixel::addons::plugin::FlxMouseControl_obj::speedY * this->_throwYFactor)) ));
            		}
HXLINE( 683)		if (::hx::IsNotNull( this->mouseReleasedCallback )) {
HXLINE( 685)			 ::Dynamic _hx_tmp = this->mouseReleasedCallback;
HXDLIN( 685)			int _hx_tmp1 = this->get_mouseX();
HXDLIN( 685)			_hx_tmp(::hx::ObjectPtr<OBJ_>(this),_hx_tmp1,this->get_mouseY());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxExtendedSprite_obj,mouseReleasedHandler,(void))

void FlxExtendedSprite_obj::startDrag(){
            	HX_STACKFRAME(&_hx_pos_1ea0f14a8839592c_694_startDrag)
HXLINE( 695)		this->isDragged = true;
HXLINE( 698)		if ((this->_dragFromPoint == false)) {
HXLINE( 700)			this->_dragOffsetX = ::Math_obj::floor(((::flixel::FlxG_obj::mouse->screenX + (this->scrollFactor->x * ( (Float)((::flixel::FlxG_obj::mouse->x - ::flixel::FlxG_obj::mouse->screenX)) ))) - this->x));
HXLINE( 701)			this->_dragOffsetY = ::Math_obj::floor(((::flixel::FlxG_obj::mouse->screenY + (this->scrollFactor->y * ( (Float)((::flixel::FlxG_obj::mouse->y - ::flixel::FlxG_obj::mouse->screenY)) ))) - this->y));
            		}
            		else {
HXLINE( 706)			this->_dragOffsetX = ::Std_obj::_hx_int((( (Float)(this->frameWidth) ) / ( (Float)(2) )));
HXLINE( 707)			this->_dragOffsetY = ::Std_obj::_hx_int((( (Float)(this->frameHeight) ) / ( (Float)(2) )));
            		}
HXLINE( 710)		if (::hx::IsNotNull( this->mouseStartDragCallback )) {
HXLINE( 712)			 ::Dynamic _hx_tmp = this->mouseStartDragCallback;
HXDLIN( 712)			int _hx_tmp1 = this->get_mouseX();
HXDLIN( 712)			_hx_tmp(::hx::ObjectPtr<OBJ_>(this),_hx_tmp1,this->get_mouseY());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxExtendedSprite_obj,startDrag,(void))

void FlxExtendedSprite_obj::checkBoundsRect(){
            	HX_STACKFRAME(&_hx_pos_1ea0f14a8839592c_721_checkBoundsRect)
HXLINE( 722)		if ((this->x < this->boundsRect->x)) {
HXLINE( 724)			this->set_x(this->boundsRect->x);
            		}
            		else {
HXLINE( 726)			Float _hx_tmp = this->x;
HXDLIN( 726)			Float _hx_tmp1 = (_hx_tmp + this->get_width());
HXDLIN( 726)			 ::flixel::math::FlxRect _this = this->boundsRect;
HXDLIN( 726)			if ((_hx_tmp1 > (_this->x + _this->width))) {
HXLINE( 728)				 ::flixel::math::FlxRect _this = this->boundsRect;
HXDLIN( 728)				Float _hx_tmp = (_this->x + _this->width);
HXDLIN( 728)				this->set_x((_hx_tmp - this->get_width()));
            			}
            		}
HXLINE( 731)		if ((this->y < this->boundsRect->y)) {
HXLINE( 733)			this->set_y(this->boundsRect->y);
            		}
            		else {
HXLINE( 735)			Float _hx_tmp = this->y;
HXDLIN( 735)			Float _hx_tmp1 = (_hx_tmp + this->get_height());
HXDLIN( 735)			 ::flixel::math::FlxRect _this = this->boundsRect;
HXDLIN( 735)			if ((_hx_tmp1 > (_this->y + _this->height))) {
HXLINE( 737)				 ::flixel::math::FlxRect _this = this->boundsRect;
HXDLIN( 737)				Float _hx_tmp = (_this->y + _this->height);
HXDLIN( 737)				this->set_y((_hx_tmp - this->get_height()));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxExtendedSprite_obj,checkBoundsRect,(void))

void FlxExtendedSprite_obj::checkBoundsSprite(){
            	HX_STACKFRAME(&_hx_pos_1ea0f14a8839592c_745_checkBoundsSprite)
HXLINE( 746)		if ((this->x < this->boundsSprite->x)) {
HXLINE( 748)			this->set_x(this->boundsSprite->x);
            		}
            		else {
HXLINE( 750)			Float _hx_tmp = this->x;
HXDLIN( 750)			Float _hx_tmp1 = (_hx_tmp + this->get_width());
HXDLIN( 750)			Float _hx_tmp2 = this->boundsSprite->x;
HXDLIN( 750)			if ((_hx_tmp1 > (_hx_tmp2 + this->boundsSprite->get_width()))) {
HXLINE( 752)				Float _hx_tmp = this->boundsSprite->x;
HXDLIN( 752)				Float _hx_tmp1 = (_hx_tmp + this->boundsSprite->get_width());
HXDLIN( 752)				this->set_x((_hx_tmp1 - this->get_width()));
            			}
            		}
HXLINE( 755)		if ((this->y < this->boundsSprite->y)) {
HXLINE( 757)			this->set_y(this->boundsSprite->y);
            		}
            		else {
HXLINE( 759)			Float _hx_tmp = this->y;
HXDLIN( 759)			Float _hx_tmp1 = (_hx_tmp + this->get_height());
HXDLIN( 759)			Float _hx_tmp2 = this->boundsSprite->y;
HXDLIN( 759)			if ((_hx_tmp1 > (_hx_tmp2 + this->boundsSprite->get_height()))) {
HXLINE( 761)				Float _hx_tmp = this->boundsSprite->y;
HXDLIN( 761)				Float _hx_tmp1 = (_hx_tmp + this->boundsSprite->get_height());
HXDLIN( 761)				this->set_y((_hx_tmp1 - this->get_height()));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxExtendedSprite_obj,checkBoundsSprite,(void))

void FlxExtendedSprite_obj::stopDrag(){
            	HX_STACKFRAME(&_hx_pos_1ea0f14a8839592c_769_stopDrag)
HXLINE( 770)		this->isDragged = false;
HXLINE( 772)		if (this->_snapOnRelease) {
HXLINE( 774)			this->set_x(( (Float)((::Math_obj::floor((this->x / ( (Float)(this->_snapX) ))) * this->_snapX)) ));
HXLINE( 775)			this->set_y(( (Float)((::Math_obj::floor((this->y / ( (Float)(this->_snapY) ))) * this->_snapY)) ));
            		}
HXLINE( 779)		if (::hx::IsNotNull( this->mouseStopDragCallback )) {
HXLINE( 781)			 ::Dynamic _hx_tmp = this->mouseStopDragCallback;
HXDLIN( 781)			int _hx_tmp1 = this->get_mouseX();
HXDLIN( 781)			_hx_tmp(::hx::ObjectPtr<OBJ_>(this),_hx_tmp1,this->get_mouseY());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxExtendedSprite_obj,stopDrag,(void))

void FlxExtendedSprite_obj::setGravity(int GravityX,int GravityY,::hx::Null< Float >  __o_FrictionX,::hx::Null< Float >  __o_FrictionY,::hx::Null< Float >  __o_ToleranceX,::hx::Null< Float >  __o_ToleranceY){
            		Float FrictionX = __o_FrictionX.Default(500);
            		Float FrictionY = __o_FrictionY.Default(500);
            		Float ToleranceX = __o_ToleranceX.Default(10);
            		Float ToleranceY = __o_ToleranceY.Default(10);
            	HX_STACKFRAME(&_hx_pos_1ea0f14a8839592c_798_setGravity)
HXLINE( 799)		this->hasGravity = true;
HXLINE( 801)		this->gravityX = GravityX;
HXLINE( 802)		this->gravityY = GravityY;
HXLINE( 804)		this->frictionX = FrictionX;
HXLINE( 805)		this->frictionY = FrictionY;
HXLINE( 807)		this->toleranceX = ToleranceX;
HXLINE( 808)		this->toleranceY = ToleranceY;
HXLINE( 810)		bool _hx_tmp;
HXDLIN( 810)		if ((GravityX == 0)) {
HXLINE( 810)			_hx_tmp = (GravityY == 0);
            		}
            		else {
HXLINE( 810)			_hx_tmp = false;
            		}
HXDLIN( 810)		if (_hx_tmp) {
HXLINE( 812)			this->hasGravity = false;
            		}
HXLINE( 815)		this->acceleration->set_x(( (Float)(GravityX) ));
HXLINE( 816)		this->acceleration->set_y(( (Float)(GravityY) ));
            	}


HX_DEFINE_DYNAMIC_FUNC6(FlxExtendedSprite_obj,setGravity,(void))

void FlxExtendedSprite_obj::flipGravity(){
            	HX_STACKFRAME(&_hx_pos_1ea0f14a8839592c_824_flipGravity)
HXLINE( 825)		bool _hx_tmp;
HXDLIN( 825)		if (!(::Math_obj::isNaN(( (Float)(this->gravityX) )))) {
HXLINE( 825)			_hx_tmp = (this->gravityX != 0);
            		}
            		else {
HXLINE( 825)			_hx_tmp = false;
            		}
HXDLIN( 825)		if (_hx_tmp) {
HXLINE( 827)			this->gravityX = -(this->gravityX);
HXLINE( 828)			this->acceleration->set_x(( (Float)(this->gravityX) ));
            		}
HXLINE( 831)		bool _hx_tmp1;
HXDLIN( 831)		if (!(::Math_obj::isNaN(( (Float)(this->gravityY) )))) {
HXLINE( 831)			_hx_tmp1 = (this->gravityY != 0);
            		}
            		else {
HXLINE( 831)			_hx_tmp1 = false;
            		}
HXDLIN( 831)		if (_hx_tmp1) {
HXLINE( 833)			this->gravityY = -(this->gravityY);
HXLINE( 834)			this->acceleration->set_y(( (Float)(this->gravityY) ));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxExtendedSprite_obj,flipGravity,(void))

int FlxExtendedSprite_obj::get_clicks(){
            	HX_STACKFRAME(&_hx_pos_1ea0f14a8839592c_840_get_clicks)
HXDLIN( 840)		return this->_clickCounter;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxExtendedSprite_obj,get_clicks,return )

int FlxExtendedSprite_obj::set_clicks(int NewValue){
            	HX_STACKFRAME(&_hx_pos_1ea0f14a8839592c_845_set_clicks)
HXDLIN( 845)		return (this->_clickCounter = NewValue);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxExtendedSprite_obj,set_clicks,return )

int FlxExtendedSprite_obj::get_springX(){
            	HX_STACKFRAME(&_hx_pos_1ea0f14a8839592c_850_get_springX)
HXDLIN( 850)		return ::Math_obj::floor((this->x + this->springOffsetX));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxExtendedSprite_obj,get_springX,return )

int FlxExtendedSprite_obj::get_springY(){
            	HX_STACKFRAME(&_hx_pos_1ea0f14a8839592c_855_get_springY)
HXDLIN( 855)		return ::Math_obj::floor((this->y + this->springOffsetY));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxExtendedSprite_obj,get_springY,return )

 ::flixel::math::FlxPoint FlxExtendedSprite_obj::get_point(){
            	HX_STACKFRAME(&_hx_pos_1ea0f14a8839592c_860_get_point)
HXDLIN( 860)		return this->_point;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxExtendedSprite_obj,get_point,return )

 ::flixel::math::FlxPoint FlxExtendedSprite_obj::set_point( ::flixel::math::FlxPoint NewPoint){
            	HX_STACKFRAME(&_hx_pos_1ea0f14a8839592c_865_set_point)
HXDLIN( 865)		return (this->_point = NewPoint);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxExtendedSprite_obj,set_point,return )

bool FlxExtendedSprite_obj::get_mouseOver(){
            	HX_STACKFRAME(&_hx_pos_1ea0f14a8839592c_871_get_mouseOver)
HXDLIN( 871)		int _hx_tmp = ::Math_obj::floor((::flixel::FlxG_obj::mouse->screenX + (this->scrollFactor->x * ( (Float)((::flixel::FlxG_obj::mouse->x - ::flixel::FlxG_obj::mouse->screenX)) ))));
HXLINE( 872)		int _hx_tmp1 = ::Math_obj::floor((::flixel::FlxG_obj::mouse->screenY + (this->scrollFactor->y * ( (Float)((::flixel::FlxG_obj::mouse->y - ::flixel::FlxG_obj::mouse->screenY)) ))));
HXDLIN( 872)		int _hx_tmp2 = ::Math_obj::floor(this->x);
HXDLIN( 872)		int _hx_tmp3 = ::Math_obj::floor(this->y);
HXDLIN( 872)		int _hx_tmp4 = ::Math_obj::floor(this->get_width());
HXLINE( 871)		return ::flixel::math::FlxMath_obj::pointInCoordinates(( (Float)(_hx_tmp) ),( (Float)(_hx_tmp1) ),( (Float)(_hx_tmp2) ),( (Float)(_hx_tmp3) ),( (Float)(_hx_tmp4) ),( (Float)(::Math_obj::floor(this->get_height())) ));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxExtendedSprite_obj,get_mouseOver,return )

int FlxExtendedSprite_obj::get_mouseX(){
            	HX_STACKFRAME(&_hx_pos_1ea0f14a8839592c_877_get_mouseX)
HXLINE( 878)		if (this->get_mouseOver()) {
HXLINE( 880)			return ::Math_obj::floor((( (Float)(::flixel::FlxG_obj::mouse->x) ) - this->x));
            		}
HXLINE( 883)		return -1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxExtendedSprite_obj,get_mouseX,return )

int FlxExtendedSprite_obj::get_mouseY(){
            	HX_STACKFRAME(&_hx_pos_1ea0f14a8839592c_887_get_mouseY)
HXLINE( 888)		if (this->get_mouseOver()) {
HXLINE( 890)			return ::Math_obj::floor((( (Float)(::flixel::FlxG_obj::mouse->y) ) - this->y));
            		}
HXLINE( 893)		return -1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxExtendedSprite_obj,get_mouseY,return )

 ::flixel::math::FlxRect FlxExtendedSprite_obj::get_rect(){
            	HX_STACKFRAME(&_hx_pos_1ea0f14a8839592c_898_get_rect)
HXLINE( 899)		this->_rect->x = this->x;
HXLINE( 900)		this->_rect->y = this->y;
HXLINE( 901)		this->_rect->width = this->get_width();
HXLINE( 902)		this->_rect->height = this->get_height();
HXLINE( 904)		return this->_rect;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxExtendedSprite_obj,get_rect,return )


::hx::ObjectPtr< FlxExtendedSprite_obj > FlxExtendedSprite_obj::__new(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y, ::Dynamic SimpleGraphic) {
	::hx::ObjectPtr< FlxExtendedSprite_obj > __this = new FlxExtendedSprite_obj();
	__this->__construct(__o_X,__o_Y,SimpleGraphic);
	return __this;
}

::hx::ObjectPtr< FlxExtendedSprite_obj > FlxExtendedSprite_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y, ::Dynamic SimpleGraphic) {
	FlxExtendedSprite_obj *__this = (FlxExtendedSprite_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxExtendedSprite_obj), true, "flixel.addons.display.FlxExtendedSprite"));
	*(void **)__this = FlxExtendedSprite_obj::_hx_vtable;
	__this->__construct(__o_X,__o_Y,SimpleGraphic);
	return __this;
}

FlxExtendedSprite_obj::FlxExtendedSprite_obj()
{
}

void FlxExtendedSprite_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxExtendedSprite);
	HX_MARK_MEMBER_NAME(priorityID,"priorityID");
	HX_MARK_MEMBER_NAME(isPressed,"isPressed");
	HX_MARK_MEMBER_NAME(clickable,"clickable");
	HX_MARK_MEMBER_NAME(throwable,"throwable");
	HX_MARK_MEMBER_NAME(boundsRect,"boundsRect");
	HX_MARK_MEMBER_NAME(boundsSprite,"boundsSprite");
	HX_MARK_MEMBER_NAME(hasGravity,"hasGravity");
	HX_MARK_MEMBER_NAME(gravityX,"gravityX");
	HX_MARK_MEMBER_NAME(gravityY,"gravityY");
	HX_MARK_MEMBER_NAME(frictionX,"frictionX");
	HX_MARK_MEMBER_NAME(frictionY,"frictionY");
	HX_MARK_MEMBER_NAME(toleranceX,"toleranceX");
	HX_MARK_MEMBER_NAME(toleranceY,"toleranceY");
	HX_MARK_MEMBER_NAME(isDragged,"isDragged");
	HX_MARK_MEMBER_NAME(draggable,"draggable");
	HX_MARK_MEMBER_NAME(springOnPressed,"springOnPressed");
	HX_MARK_MEMBER_NAME(springOffsetX,"springOffsetX");
	HX_MARK_MEMBER_NAME(springOffsetY,"springOffsetY");
	HX_MARK_MEMBER_NAME(mousePressedCallback,"mousePressedCallback");
	HX_MARK_MEMBER_NAME(mouseReleasedCallback,"mouseReleasedCallback");
	HX_MARK_MEMBER_NAME(mouseSpring,"mouseSpring");
	HX_MARK_MEMBER_NAME(mouseStartDragCallback,"mouseStartDragCallback");
	HX_MARK_MEMBER_NAME(mouseStopDragCallback,"mouseStopDragCallback");
	HX_MARK_MEMBER_NAME(hasMouseSpring,"hasMouseSpring");
	HX_MARK_MEMBER_NAME(_snapOnDrag,"_snapOnDrag");
	HX_MARK_MEMBER_NAME(_snapOnRelease,"_snapOnRelease");
	HX_MARK_MEMBER_NAME(_snapX,"_snapX");
	HX_MARK_MEMBER_NAME(_snapY,"_snapY");
	HX_MARK_MEMBER_NAME(_clickOnRelease,"_clickOnRelease");
	HX_MARK_MEMBER_NAME(_clickPixelPerfect,"_clickPixelPerfect");
	HX_MARK_MEMBER_NAME(_clickPixelPerfectAlpha,"_clickPixelPerfectAlpha");
	HX_MARK_MEMBER_NAME(_clickCounter,"_clickCounter");
	HX_MARK_MEMBER_NAME(_throwXFactor,"_throwXFactor");
	HX_MARK_MEMBER_NAME(_throwYFactor,"_throwYFactor");
	HX_MARK_MEMBER_NAME(_dragPixelPerfect,"_dragPixelPerfect");
	HX_MARK_MEMBER_NAME(_dragPixelPerfectAlpha,"_dragPixelPerfectAlpha");
	HX_MARK_MEMBER_NAME(_dragOffsetX,"_dragOffsetX");
	HX_MARK_MEMBER_NAME(_dragOffsetY,"_dragOffsetY");
	HX_MARK_MEMBER_NAME(_dragFromPoint,"_dragFromPoint");
	HX_MARK_MEMBER_NAME(_allowHorizontalDrag,"_allowHorizontalDrag");
	HX_MARK_MEMBER_NAME(_allowVerticalDrag,"_allowVerticalDrag");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxExtendedSprite_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(priorityID,"priorityID");
	HX_VISIT_MEMBER_NAME(isPressed,"isPressed");
	HX_VISIT_MEMBER_NAME(clickable,"clickable");
	HX_VISIT_MEMBER_NAME(throwable,"throwable");
	HX_VISIT_MEMBER_NAME(boundsRect,"boundsRect");
	HX_VISIT_MEMBER_NAME(boundsSprite,"boundsSprite");
	HX_VISIT_MEMBER_NAME(hasGravity,"hasGravity");
	HX_VISIT_MEMBER_NAME(gravityX,"gravityX");
	HX_VISIT_MEMBER_NAME(gravityY,"gravityY");
	HX_VISIT_MEMBER_NAME(frictionX,"frictionX");
	HX_VISIT_MEMBER_NAME(frictionY,"frictionY");
	HX_VISIT_MEMBER_NAME(toleranceX,"toleranceX");
	HX_VISIT_MEMBER_NAME(toleranceY,"toleranceY");
	HX_VISIT_MEMBER_NAME(isDragged,"isDragged");
	HX_VISIT_MEMBER_NAME(draggable,"draggable");
	HX_VISIT_MEMBER_NAME(springOnPressed,"springOnPressed");
	HX_VISIT_MEMBER_NAME(springOffsetX,"springOffsetX");
	HX_VISIT_MEMBER_NAME(springOffsetY,"springOffsetY");
	HX_VISIT_MEMBER_NAME(mousePressedCallback,"mousePressedCallback");
	HX_VISIT_MEMBER_NAME(mouseReleasedCallback,"mouseReleasedCallback");
	HX_VISIT_MEMBER_NAME(mouseSpring,"mouseSpring");
	HX_VISIT_MEMBER_NAME(mouseStartDragCallback,"mouseStartDragCallback");
	HX_VISIT_MEMBER_NAME(mouseStopDragCallback,"mouseStopDragCallback");
	HX_VISIT_MEMBER_NAME(hasMouseSpring,"hasMouseSpring");
	HX_VISIT_MEMBER_NAME(_snapOnDrag,"_snapOnDrag");
	HX_VISIT_MEMBER_NAME(_snapOnRelease,"_snapOnRelease");
	HX_VISIT_MEMBER_NAME(_snapX,"_snapX");
	HX_VISIT_MEMBER_NAME(_snapY,"_snapY");
	HX_VISIT_MEMBER_NAME(_clickOnRelease,"_clickOnRelease");
	HX_VISIT_MEMBER_NAME(_clickPixelPerfect,"_clickPixelPerfect");
	HX_VISIT_MEMBER_NAME(_clickPixelPerfectAlpha,"_clickPixelPerfectAlpha");
	HX_VISIT_MEMBER_NAME(_clickCounter,"_clickCounter");
	HX_VISIT_MEMBER_NAME(_throwXFactor,"_throwXFactor");
	HX_VISIT_MEMBER_NAME(_throwYFactor,"_throwYFactor");
	HX_VISIT_MEMBER_NAME(_dragPixelPerfect,"_dragPixelPerfect");
	HX_VISIT_MEMBER_NAME(_dragPixelPerfectAlpha,"_dragPixelPerfectAlpha");
	HX_VISIT_MEMBER_NAME(_dragOffsetX,"_dragOffsetX");
	HX_VISIT_MEMBER_NAME(_dragOffsetY,"_dragOffsetY");
	HX_VISIT_MEMBER_NAME(_dragFromPoint,"_dragFromPoint");
	HX_VISIT_MEMBER_NAME(_allowHorizontalDrag,"_allowHorizontalDrag");
	HX_VISIT_MEMBER_NAME(_allowVerticalDrag,"_allowVerticalDrag");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxExtendedSprite_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rect") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_rect() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"point") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_point() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"clicks") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_clicks() ); }
		if (HX_FIELD_EQ(inName,"mouseX") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_mouseX() ); }
		if (HX_FIELD_EQ(inName,"mouseY") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_mouseY() ); }
		if (HX_FIELD_EQ(inName,"_snapX") ) { return ::hx::Val( _snapX ); }
		if (HX_FIELD_EQ(inName,"_snapY") ) { return ::hx::Val( _snapY ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"springX") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_springX() ); }
		if (HX_FIELD_EQ(inName,"springY") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_springY() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"gravityX") ) { return ::hx::Val( gravityX ); }
		if (HX_FIELD_EQ(inName,"gravityY") ) { return ::hx::Val( gravityY ); }
		if (HX_FIELD_EQ(inName,"stopDrag") ) { return ::hx::Val( stopDrag_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_rect") ) { return ::hx::Val( get_rect_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isPressed") ) { return ::hx::Val( isPressed ); }
		if (HX_FIELD_EQ(inName,"clickable") ) { return ::hx::Val( clickable ); }
		if (HX_FIELD_EQ(inName,"throwable") ) { return ::hx::Val( throwable ); }
		if (HX_FIELD_EQ(inName,"frictionX") ) { return ::hx::Val( frictionX ); }
		if (HX_FIELD_EQ(inName,"frictionY") ) { return ::hx::Val( frictionY ); }
		if (HX_FIELD_EQ(inName,"isDragged") ) { return ::hx::Val( isDragged ); }
		if (HX_FIELD_EQ(inName,"draggable") ) { return ::hx::Val( draggable ); }
		if (HX_FIELD_EQ(inName,"mouseOver") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_mouseOver() ); }
		if (HX_FIELD_EQ(inName,"startDrag") ) { return ::hx::Val( startDrag_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_point") ) { return ::hx::Val( get_point_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_point") ) { return ::hx::Val( set_point_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"priorityID") ) { return ::hx::Val( priorityID ); }
		if (HX_FIELD_EQ(inName,"boundsRect") ) { return ::hx::Val( boundsRect ); }
		if (HX_FIELD_EQ(inName,"hasGravity") ) { return ::hx::Val( hasGravity ); }
		if (HX_FIELD_EQ(inName,"toleranceX") ) { return ::hx::Val( toleranceX ); }
		if (HX_FIELD_EQ(inName,"toleranceY") ) { return ::hx::Val( toleranceY ); }
		if (HX_FIELD_EQ(inName,"updateDrag") ) { return ::hx::Val( updateDrag_dyn() ); }
		if (HX_FIELD_EQ(inName,"setGravity") ) { return ::hx::Val( setGravity_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_clicks") ) { return ::hx::Val( get_clicks_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_clicks") ) { return ::hx::Val( set_clicks_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_mouseX") ) { return ::hx::Val( get_mouseX_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_mouseY") ) { return ::hx::Val( get_mouseY_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"mouseSpring") ) { return ::hx::Val( mouseSpring ); }
		if (HX_FIELD_EQ(inName,"_snapOnDrag") ) { return ::hx::Val( _snapOnDrag ); }
		if (HX_FIELD_EQ(inName,"setDragLock") ) { return ::hx::Val( setDragLock_dyn() ); }
		if (HX_FIELD_EQ(inName,"flipGravity") ) { return ::hx::Val( flipGravity_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_springX") ) { return ::hx::Val( get_springX_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_springY") ) { return ::hx::Val( get_springY_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"boundsSprite") ) { return ::hx::Val( boundsSprite ); }
		if (HX_FIELD_EQ(inName,"_dragOffsetX") ) { return ::hx::Val( _dragOffsetX ); }
		if (HX_FIELD_EQ(inName,"_dragOffsetY") ) { return ::hx::Val( _dragOffsetY ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"springOffsetX") ) { return ::hx::Val( springOffsetX ); }
		if (HX_FIELD_EQ(inName,"springOffsetY") ) { return ::hx::Val( springOffsetY ); }
		if (HX_FIELD_EQ(inName,"_clickCounter") ) { return ::hx::Val( _clickCounter ); }
		if (HX_FIELD_EQ(inName,"_throwXFactor") ) { return ::hx::Val( _throwXFactor ); }
		if (HX_FIELD_EQ(inName,"_throwYFactor") ) { return ::hx::Val( _throwYFactor ); }
		if (HX_FIELD_EQ(inName,"updateGravity") ) { return ::hx::Val( updateGravity_dyn() ); }
		if (HX_FIELD_EQ(inName,"checkForClick") ) { return ::hx::Val( checkForClick_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_mouseOver") ) { return ::hx::Val( get_mouseOver_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"hasMouseSpring") ) { return ::hx::Val( hasMouseSpring ); }
		if (HX_FIELD_EQ(inName,"_snapOnRelease") ) { return ::hx::Val( _snapOnRelease ); }
		if (HX_FIELD_EQ(inName,"_dragFromPoint") ) { return ::hx::Val( _dragFromPoint ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"springOnPressed") ) { return ::hx::Val( springOnPressed ); }
		if (HX_FIELD_EQ(inName,"_clickOnRelease") ) { return ::hx::Val( _clickOnRelease ); }
		if (HX_FIELD_EQ(inName,"enableMouseDrag") ) { return ::hx::Val( enableMouseDrag_dyn() ); }
		if (HX_FIELD_EQ(inName,"enableMouseSnap") ) { return ::hx::Val( enableMouseSnap_dyn() ); }
		if (HX_FIELD_EQ(inName,"checkBoundsRect") ) { return ::hx::Val( checkBoundsRect_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"disableMouseDrag") ) { return ::hx::Val( disableMouseDrag_dyn() ); }
		if (HX_FIELD_EQ(inName,"enableMouseThrow") ) { return ::hx::Val( enableMouseThrow_dyn() ); }
		if (HX_FIELD_EQ(inName,"disableMouseSnap") ) { return ::hx::Val( disableMouseSnap_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_dragPixelPerfect") ) { return ::hx::Val( _dragPixelPerfect ); }
		if (HX_FIELD_EQ(inName,"enableMouseClicks") ) { return ::hx::Val( enableMouseClicks_dyn() ); }
		if (HX_FIELD_EQ(inName,"disableMouseThrow") ) { return ::hx::Val( disableMouseThrow_dyn() ); }
		if (HX_FIELD_EQ(inName,"enableMouseSpring") ) { return ::hx::Val( enableMouseSpring_dyn() ); }
		if (HX_FIELD_EQ(inName,"checkBoundsSprite") ) { return ::hx::Val( checkBoundsSprite_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_clickPixelPerfect") ) { return ::hx::Val( _clickPixelPerfect ); }
		if (HX_FIELD_EQ(inName,"_allowVerticalDrag") ) { return ::hx::Val( _allowVerticalDrag ); }
		if (HX_FIELD_EQ(inName,"disableMouseClicks") ) { return ::hx::Val( disableMouseClicks_dyn() ); }
		if (HX_FIELD_EQ(inName,"disableMouseSpring") ) { return ::hx::Val( disableMouseSpring_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"mousePressedHandler") ) { return ::hx::Val( mousePressedHandler_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"mousePressedCallback") ) { return ::hx::Val( mousePressedCallback ); }
		if (HX_FIELD_EQ(inName,"_allowHorizontalDrag") ) { return ::hx::Val( _allowHorizontalDrag ); }
		if (HX_FIELD_EQ(inName,"mouseReleasedHandler") ) { return ::hx::Val( mouseReleasedHandler_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"mouseReleasedCallback") ) { return ::hx::Val( mouseReleasedCallback ); }
		if (HX_FIELD_EQ(inName,"mouseStopDragCallback") ) { return ::hx::Val( mouseStopDragCallback ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"mouseStartDragCallback") ) { return ::hx::Val( mouseStartDragCallback ); }
		if (HX_FIELD_EQ(inName,"_dragPixelPerfectAlpha") ) { return ::hx::Val( _dragPixelPerfectAlpha ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_clickPixelPerfectAlpha") ) { return ::hx::Val( _clickPixelPerfectAlpha ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxExtendedSprite_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"point") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_point(inValue.Cast<  ::flixel::math::FlxPoint >()) ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"clicks") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_clicks(inValue.Cast< int >()) ); }
		if (HX_FIELD_EQ(inName,"_snapX") ) { _snapX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_snapY") ) { _snapY=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"gravityX") ) { gravityX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gravityY") ) { gravityY=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isPressed") ) { isPressed=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"clickable") ) { clickable=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"throwable") ) { throwable=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frictionX") ) { frictionX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frictionY") ) { frictionY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isDragged") ) { isDragged=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"draggable") ) { draggable=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"priorityID") ) { priorityID=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"boundsRect") ) { boundsRect=inValue.Cast<  ::flixel::math::FlxRect >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hasGravity") ) { hasGravity=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"toleranceX") ) { toleranceX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"toleranceY") ) { toleranceY=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"mouseSpring") ) { mouseSpring=inValue.Cast<  ::flixel::addons::display::FlxMouseSpring >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_snapOnDrag") ) { _snapOnDrag=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"boundsSprite") ) { boundsSprite=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_dragOffsetX") ) { _dragOffsetX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_dragOffsetY") ) { _dragOffsetY=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"springOffsetX") ) { springOffsetX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"springOffsetY") ) { springOffsetY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_clickCounter") ) { _clickCounter=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_throwXFactor") ) { _throwXFactor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_throwYFactor") ) { _throwYFactor=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"hasMouseSpring") ) { hasMouseSpring=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_snapOnRelease") ) { _snapOnRelease=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_dragFromPoint") ) { _dragFromPoint=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"springOnPressed") ) { springOnPressed=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_clickOnRelease") ) { _clickOnRelease=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_dragPixelPerfect") ) { _dragPixelPerfect=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_clickPixelPerfect") ) { _clickPixelPerfect=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_allowVerticalDrag") ) { _allowVerticalDrag=inValue.Cast< bool >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"mousePressedCallback") ) { mousePressedCallback=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_allowHorizontalDrag") ) { _allowHorizontalDrag=inValue.Cast< bool >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"mouseReleasedCallback") ) { mouseReleasedCallback=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouseStopDragCallback") ) { mouseStopDragCallback=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"mouseStartDragCallback") ) { mouseStartDragCallback=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_dragPixelPerfectAlpha") ) { _dragPixelPerfectAlpha=inValue.Cast< int >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_clickPixelPerfectAlpha") ) { _clickPixelPerfectAlpha=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxExtendedSprite_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("priorityID",3f,5c,5f,e4));
	outFields->push(HX_("isPressed",d8,4f,e5,3d));
	outFields->push(HX_("clickable",e2,ad,8e,34));
	outFields->push(HX_("throwable",c0,55,25,7d));
	outFields->push(HX_("boundsRect",39,de,ba,7e));
	outFields->push(HX_("boundsSprite",5a,9c,7f,8f));
	outFields->push(HX_("hasGravity",14,56,b3,02));
	outFields->push(HX_("gravityX",4a,16,81,87));
	outFields->push(HX_("gravityY",4b,16,81,87));
	outFields->push(HX_("frictionX",1e,62,80,38));
	outFields->push(HX_("frictionY",1f,62,80,38));
	outFields->push(HX_("toleranceX",ab,2e,39,d9));
	outFields->push(HX_("toleranceY",ac,2e,39,d9));
	outFields->push(HX_("isDragged",48,c2,51,f5));
	outFields->push(HX_("draggable",0d,2d,d6,5d));
	outFields->push(HX_("springOnPressed",b6,d2,05,91));
	outFields->push(HX_("springOffsetX",18,7e,8c,a6));
	outFields->push(HX_("springOffsetY",19,7e,8c,a6));
	outFields->push(HX_("mouseSpring",d2,0a,1e,b9));
	outFields->push(HX_("hasMouseSpring",98,4d,a8,aa));
	outFields->push(HX_("clicks",2b,43,4e,0a));
	outFields->push(HX_("springX",eb,1c,86,5f));
	outFields->push(HX_("springY",ec,1c,86,5f));
	outFields->push(HX_("point",50,b4,8f,c6));
	outFields->push(HX_("rect",24,4d,a7,4b));
	outFields->push(HX_("mouseOver",19,4a,0d,f6));
	outFields->push(HX_("mouseX",93,4a,0e,cc));
	outFields->push(HX_("mouseY",94,4a,0e,cc));
	outFields->push(HX_("_snapOnDrag",bc,9f,c8,ce));
	outFields->push(HX_("_snapOnRelease",ff,9e,51,9b));
	outFields->push(HX_("_snapX",0f,72,fb,7b));
	outFields->push(HX_("_snapY",10,72,fb,7b));
	outFields->push(HX_("_clickOnRelease",9f,21,af,fe));
	outFields->push(HX_("_clickPixelPerfect",50,dc,03,38));
	outFields->push(HX_("_clickPixelPerfectAlpha",ee,98,cf,11));
	outFields->push(HX_("_clickCounter",73,86,f2,f1));
	outFields->push(HX_("_throwXFactor",c0,a5,d3,19));
	outFields->push(HX_("_throwYFactor",81,1c,69,43));
	outFields->push(HX_("_dragPixelPerfect",9a,a7,19,c0));
	outFields->push(HX_("_dragPixelPerfectAlpha",64,a1,42,26));
	outFields->push(HX_("_dragOffsetX",d2,d9,8f,f3));
	outFields->push(HX_("_dragOffsetY",d3,d9,8f,f3));
	outFields->push(HX_("_dragFromPoint",33,24,ea,13));
	outFields->push(HX_("_allowHorizontalDrag",62,64,99,55));
	outFields->push(HX_("_allowVerticalDrag",74,46,da,fd));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxExtendedSprite_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(FlxExtendedSprite_obj,priorityID),HX_("priorityID",3f,5c,5f,e4)},
	{::hx::fsBool,(int)offsetof(FlxExtendedSprite_obj,isPressed),HX_("isPressed",d8,4f,e5,3d)},
	{::hx::fsBool,(int)offsetof(FlxExtendedSprite_obj,clickable),HX_("clickable",e2,ad,8e,34)},
	{::hx::fsBool,(int)offsetof(FlxExtendedSprite_obj,throwable),HX_("throwable",c0,55,25,7d)},
	{::hx::fsObject /*  ::flixel::math::FlxRect */ ,(int)offsetof(FlxExtendedSprite_obj,boundsRect),HX_("boundsRect",39,de,ba,7e)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(FlxExtendedSprite_obj,boundsSprite),HX_("boundsSprite",5a,9c,7f,8f)},
	{::hx::fsBool,(int)offsetof(FlxExtendedSprite_obj,hasGravity),HX_("hasGravity",14,56,b3,02)},
	{::hx::fsInt,(int)offsetof(FlxExtendedSprite_obj,gravityX),HX_("gravityX",4a,16,81,87)},
	{::hx::fsInt,(int)offsetof(FlxExtendedSprite_obj,gravityY),HX_("gravityY",4b,16,81,87)},
	{::hx::fsFloat,(int)offsetof(FlxExtendedSprite_obj,frictionX),HX_("frictionX",1e,62,80,38)},
	{::hx::fsFloat,(int)offsetof(FlxExtendedSprite_obj,frictionY),HX_("frictionY",1f,62,80,38)},
	{::hx::fsFloat,(int)offsetof(FlxExtendedSprite_obj,toleranceX),HX_("toleranceX",ab,2e,39,d9)},
	{::hx::fsFloat,(int)offsetof(FlxExtendedSprite_obj,toleranceY),HX_("toleranceY",ac,2e,39,d9)},
	{::hx::fsBool,(int)offsetof(FlxExtendedSprite_obj,isDragged),HX_("isDragged",48,c2,51,f5)},
	{::hx::fsBool,(int)offsetof(FlxExtendedSprite_obj,draggable),HX_("draggable",0d,2d,d6,5d)},
	{::hx::fsBool,(int)offsetof(FlxExtendedSprite_obj,springOnPressed),HX_("springOnPressed",b6,d2,05,91)},
	{::hx::fsInt,(int)offsetof(FlxExtendedSprite_obj,springOffsetX),HX_("springOffsetX",18,7e,8c,a6)},
	{::hx::fsInt,(int)offsetof(FlxExtendedSprite_obj,springOffsetY),HX_("springOffsetY",19,7e,8c,a6)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxExtendedSprite_obj,mousePressedCallback),HX_("mousePressedCallback",e2,3d,cb,68)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxExtendedSprite_obj,mouseReleasedCallback),HX_("mouseReleasedCallback",e7,af,4b,6c)},
	{::hx::fsObject /*  ::flixel::addons::display::FlxMouseSpring */ ,(int)offsetof(FlxExtendedSprite_obj,mouseSpring),HX_("mouseSpring",d2,0a,1e,b9)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxExtendedSprite_obj,mouseStartDragCallback),HX_("mouseStartDragCallback",76,d1,88,55)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxExtendedSprite_obj,mouseStopDragCallback),HX_("mouseStopDragCallback",40,19,a4,b9)},
	{::hx::fsBool,(int)offsetof(FlxExtendedSprite_obj,hasMouseSpring),HX_("hasMouseSpring",98,4d,a8,aa)},
	{::hx::fsBool,(int)offsetof(FlxExtendedSprite_obj,_snapOnDrag),HX_("_snapOnDrag",bc,9f,c8,ce)},
	{::hx::fsBool,(int)offsetof(FlxExtendedSprite_obj,_snapOnRelease),HX_("_snapOnRelease",ff,9e,51,9b)},
	{::hx::fsInt,(int)offsetof(FlxExtendedSprite_obj,_snapX),HX_("_snapX",0f,72,fb,7b)},
	{::hx::fsInt,(int)offsetof(FlxExtendedSprite_obj,_snapY),HX_("_snapY",10,72,fb,7b)},
	{::hx::fsBool,(int)offsetof(FlxExtendedSprite_obj,_clickOnRelease),HX_("_clickOnRelease",9f,21,af,fe)},
	{::hx::fsBool,(int)offsetof(FlxExtendedSprite_obj,_clickPixelPerfect),HX_("_clickPixelPerfect",50,dc,03,38)},
	{::hx::fsInt,(int)offsetof(FlxExtendedSprite_obj,_clickPixelPerfectAlpha),HX_("_clickPixelPerfectAlpha",ee,98,cf,11)},
	{::hx::fsInt,(int)offsetof(FlxExtendedSprite_obj,_clickCounter),HX_("_clickCounter",73,86,f2,f1)},
	{::hx::fsInt,(int)offsetof(FlxExtendedSprite_obj,_throwXFactor),HX_("_throwXFactor",c0,a5,d3,19)},
	{::hx::fsInt,(int)offsetof(FlxExtendedSprite_obj,_throwYFactor),HX_("_throwYFactor",81,1c,69,43)},
	{::hx::fsBool,(int)offsetof(FlxExtendedSprite_obj,_dragPixelPerfect),HX_("_dragPixelPerfect",9a,a7,19,c0)},
	{::hx::fsInt,(int)offsetof(FlxExtendedSprite_obj,_dragPixelPerfectAlpha),HX_("_dragPixelPerfectAlpha",64,a1,42,26)},
	{::hx::fsInt,(int)offsetof(FlxExtendedSprite_obj,_dragOffsetX),HX_("_dragOffsetX",d2,d9,8f,f3)},
	{::hx::fsInt,(int)offsetof(FlxExtendedSprite_obj,_dragOffsetY),HX_("_dragOffsetY",d3,d9,8f,f3)},
	{::hx::fsBool,(int)offsetof(FlxExtendedSprite_obj,_dragFromPoint),HX_("_dragFromPoint",33,24,ea,13)},
	{::hx::fsBool,(int)offsetof(FlxExtendedSprite_obj,_allowHorizontalDrag),HX_("_allowHorizontalDrag",62,64,99,55)},
	{::hx::fsBool,(int)offsetof(FlxExtendedSprite_obj,_allowVerticalDrag),HX_("_allowVerticalDrag",74,46,da,fd)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxExtendedSprite_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxExtendedSprite_obj_sMemberFields[] = {
	HX_("priorityID",3f,5c,5f,e4),
	HX_("isPressed",d8,4f,e5,3d),
	HX_("clickable",e2,ad,8e,34),
	HX_("throwable",c0,55,25,7d),
	HX_("boundsRect",39,de,ba,7e),
	HX_("boundsSprite",5a,9c,7f,8f),
	HX_("hasGravity",14,56,b3,02),
	HX_("gravityX",4a,16,81,87),
	HX_("gravityY",4b,16,81,87),
	HX_("frictionX",1e,62,80,38),
	HX_("frictionY",1f,62,80,38),
	HX_("toleranceX",ab,2e,39,d9),
	HX_("toleranceY",ac,2e,39,d9),
	HX_("isDragged",48,c2,51,f5),
	HX_("draggable",0d,2d,d6,5d),
	HX_("springOnPressed",b6,d2,05,91),
	HX_("springOffsetX",18,7e,8c,a6),
	HX_("springOffsetY",19,7e,8c,a6),
	HX_("mousePressedCallback",e2,3d,cb,68),
	HX_("mouseReleasedCallback",e7,af,4b,6c),
	HX_("mouseSpring",d2,0a,1e,b9),
	HX_("mouseStartDragCallback",76,d1,88,55),
	HX_("mouseStopDragCallback",40,19,a4,b9),
	HX_("hasMouseSpring",98,4d,a8,aa),
	HX_("_snapOnDrag",bc,9f,c8,ce),
	HX_("_snapOnRelease",ff,9e,51,9b),
	HX_("_snapX",0f,72,fb,7b),
	HX_("_snapY",10,72,fb,7b),
	HX_("_clickOnRelease",9f,21,af,fe),
	HX_("_clickPixelPerfect",50,dc,03,38),
	HX_("_clickPixelPerfectAlpha",ee,98,cf,11),
	HX_("_clickCounter",73,86,f2,f1),
	HX_("_throwXFactor",c0,a5,d3,19),
	HX_("_throwYFactor",81,1c,69,43),
	HX_("_dragPixelPerfect",9a,a7,19,c0),
	HX_("_dragPixelPerfectAlpha",64,a1,42,26),
	HX_("_dragOffsetX",d2,d9,8f,f3),
	HX_("_dragOffsetY",d3,d9,8f,f3),
	HX_("_dragFromPoint",33,24,ea,13),
	HX_("_allowHorizontalDrag",62,64,99,55),
	HX_("_allowVerticalDrag",74,46,da,fd),
	HX_("enableMouseClicks",6d,39,59,7c),
	HX_("disableMouseClicks",28,9e,22,9b),
	HX_("enableMouseDrag",b6,ad,c5,d2),
	HX_("disableMouseDrag",b1,dd,e6,c2),
	HX_("enableMouseThrow",24,65,0c,ca),
	HX_("disableMouseThrow",c9,30,f5,f6),
	HX_("enableMouseSnap",0c,d8,ac,dc),
	HX_("disableMouseSnap",07,08,ce,cc),
	HX_("enableMouseSpring",0f,cd,a0,35),
	HX_("disableMouseSpring",ca,31,6a,54),
	HX_("setDragLock",c1,c7,18,56),
	HX_("update",09,86,05,87),
	HX_("updateGravity",45,d3,6d,43),
	HX_("updateDrag",9d,16,25,fb),
	HX_("checkForClick",67,61,7d,2a),
	HX_("mousePressedHandler",4d,be,1d,fb),
	HX_("mouseReleasedHandler",e8,33,44,59),
	HX_("startDrag",76,a5,63,fb),
	HX_("checkBoundsRect",21,45,14,f8),
	HX_("checkBoundsSprite",42,8d,2e,1f),
	HX_("stopDrag",16,71,2a,95),
	HX_("setGravity",cc,92,de,ca),
	HX_("flipGravity",21,e3,6f,48),
	HX_("get_clicks",f4,b2,d5,fa),
	HX_("set_clicks",68,51,53,fe),
	HX_("get_springX",02,7d,80,e5),
	HX_("get_springY",03,7d,80,e5),
	HX_("get_point",a7,10,39,0a),
	HX_("set_point",b3,fc,89,ed),
	HX_("get_mouseOver",f0,1d,71,b7),
	HX_("get_mouseX",5c,ba,95,bc),
	HX_("get_mouseY",5d,ba,95,bc),
	HX_("get_rect",ad,08,62,cb),
	::String(null()) };

::hx::Class FlxExtendedSprite_obj::__mClass;

void FlxExtendedSprite_obj::__register()
{
	FlxExtendedSprite_obj _hx_dummy;
	FlxExtendedSprite_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.display.FlxExtendedSprite",7b,bb,e3,11);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxExtendedSprite_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxExtendedSprite_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxExtendedSprite_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxExtendedSprite_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace display
