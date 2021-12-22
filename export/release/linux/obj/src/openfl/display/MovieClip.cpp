#include <hxcpp.h>

#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_FrameLabel
#include <openfl/display/FrameLabel.h>
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
#ifndef INCLUDED_openfl_display_Scene
#include <openfl/display/Scene.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_display_Timeline
#include <openfl/display/Timeline.h>
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
#ifndef INCLUDED_openfl_events_MouseEvent
#include <openfl/events/MouseEvent.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_9f7ac0293b858dd4_160_new,"openfl.display.MovieClip","new",0xe16984e8,"openfl.display.MovieClip.new","openfl/display/MovieClip.hx",160,0x2b84738a)
HX_LOCAL_STACK_FRAME(_hx_pos_9f7ac0293b858dd4_177_addFrameScript,"openfl.display.MovieClip","addFrameScript",0xff5029ef,"openfl.display.MovieClip.addFrameScript","openfl/display/MovieClip.hx",177,0x2b84738a)
HX_LOCAL_STACK_FRAME(_hx_pos_9f7ac0293b858dd4_184_attachTimeline,"openfl.display.MovieClip","attachTimeline",0x2786fbde,"openfl.display.MovieClip.attachTimeline","openfl/display/MovieClip.hx",184,0x2b84738a)
HX_LOCAL_STACK_FRAME(_hx_pos_9f7ac0293b858dd4_216_gotoAndPlay,"openfl.display.MovieClip","gotoAndPlay",0x3bade190,"openfl.display.MovieClip.gotoAndPlay","openfl/display/MovieClip.hx",216,0x2b84738a)
HX_LOCAL_STACK_FRAME(_hx_pos_9f7ac0293b858dd4_241_gotoAndStop,"openfl.display.MovieClip","gotoAndStop",0x3dafa39e,"openfl.display.MovieClip.gotoAndStop","openfl/display/MovieClip.hx",241,0x2b84738a)
HX_LOCAL_STACK_FRAME(_hx_pos_9f7ac0293b858dd4_254_nextFrame,"openfl.display.MovieClip","nextFrame",0x3b845cc2,"openfl.display.MovieClip.nextFrame","openfl/display/MovieClip.hx",254,0x2b84738a)
HX_LOCAL_STACK_FRAME(_hx_pos_9f7ac0293b858dd4_262_nextScene,"openfl.display.MovieClip","nextScene",0xadd2bde1,"openfl.display.MovieClip.nextScene","openfl/display/MovieClip.hx",262,0x2b84738a)
HX_LOCAL_STACK_FRAME(_hx_pos_9f7ac0293b858dd4_273_play,"openfl.display.MovieClip","play",0x5c42706c,"openfl.display.MovieClip.play","openfl/display/MovieClip.hx",273,0x2b84738a)
HX_LOCAL_STACK_FRAME(_hx_pos_9f7ac0293b858dd4_286_prevFrame,"openfl.display.MovieClip","prevFrame",0x7f95e2c2,"openfl.display.MovieClip.prevFrame","openfl/display/MovieClip.hx",286,0x2b84738a)
HX_LOCAL_STACK_FRAME(_hx_pos_9f7ac0293b858dd4_294_prevScene,"openfl.display.MovieClip","prevScene",0xf1e443e1,"openfl.display.MovieClip.prevScene","openfl/display/MovieClip.hx",294,0x2b84738a)
HX_LOCAL_STACK_FRAME(_hx_pos_9f7ac0293b858dd4_306_stop,"openfl.display.MovieClip","stop",0x5e44327a,"openfl.display.MovieClip.stop","openfl/display/MovieClip.hx",306,0x2b84738a)
HX_LOCAL_STACK_FRAME(_hx_pos_9f7ac0293b858dd4_313___enterFrame,"openfl.display.MovieClip","__enterFrame",0x9306f98d,"openfl.display.MovieClip.__enterFrame","openfl/display/MovieClip.hx",313,0x2b84738a)
HX_LOCAL_STACK_FRAME(_hx_pos_9f7ac0293b858dd4_326___stopAllMovieClips,"openfl.display.MovieClip","__stopAllMovieClips",0x702dce5a,"openfl.display.MovieClip.__stopAllMovieClips","openfl/display/MovieClip.hx",326,0x2b84738a)
HX_LOCAL_STACK_FRAME(_hx_pos_9f7ac0293b858dd4_332___tabTest,"openfl.display.MovieClip","__tabTest",0x5479b8af,"openfl.display.MovieClip.__tabTest","openfl/display/MovieClip.hx",332,0x2b84738a)
HX_LOCAL_STACK_FRAME(_hx_pos_9f7ac0293b858dd4_339___onMouseDown,"openfl.display.MovieClip","__onMouseDown",0x20658370,"openfl.display.MovieClip.__onMouseDown","openfl/display/MovieClip.hx",339,0x2b84738a)
HX_LOCAL_STACK_FRAME(_hx_pos_9f7ac0293b858dd4_354___onMouseUp,"openfl.display.MovieClip","__onMouseUp",0x127371e9,"openfl.display.MovieClip.__onMouseUp","openfl/display/MovieClip.hx",354,0x2b84738a)
HX_LOCAL_STACK_FRAME(_hx_pos_9f7ac0293b858dd4_378___onRollOut,"openfl.display.MovieClip","__onRollOut",0xaf12771a,"openfl.display.MovieClip.__onRollOut","openfl/display/MovieClip.hx",378,0x2b84738a)
HX_LOCAL_STACK_FRAME(_hx_pos_9f7ac0293b858dd4_393___onRollOver,"openfl.display.MovieClip","__onRollOver",0x81167548,"openfl.display.MovieClip.__onRollOver","openfl/display/MovieClip.hx",393,0x2b84738a)
HX_LOCAL_STACK_FRAME(_hx_pos_9f7ac0293b858dd4_401_set_buttonMode,"openfl.display.MovieClip","set_buttonMode",0x8c3dbbaa,"openfl.display.MovieClip.set_buttonMode","openfl/display/MovieClip.hx",401,0x2b84738a)
HX_LOCAL_STACK_FRAME(_hx_pos_9f7ac0293b858dd4_446_get_currentFrame,"openfl.display.MovieClip","get_currentFrame",0xf2ac6035,"openfl.display.MovieClip.get_currentFrame","openfl/display/MovieClip.hx",446,0x2b84738a)
HX_LOCAL_STACK_FRAME(_hx_pos_9f7ac0293b858dd4_458_get_currentFrameLabel,"openfl.display.MovieClip","get_currentFrameLabel",0x543e3d7f,"openfl.display.MovieClip.get_currentFrameLabel","openfl/display/MovieClip.hx",458,0x2b84738a)
HX_LOCAL_STACK_FRAME(_hx_pos_9f7ac0293b858dd4_470_get_currentLabel,"openfl.display.MovieClip","get_currentLabel",0x5bd7f5fc,"openfl.display.MovieClip.get_currentLabel","openfl/display/MovieClip.hx",470,0x2b84738a)
HX_LOCAL_STACK_FRAME(_hx_pos_9f7ac0293b858dd4_482_get_currentLabels,"openfl.display.MovieClip","get_currentLabels",0x011f46f7,"openfl.display.MovieClip.get_currentLabels","openfl/display/MovieClip.hx",482,0x2b84738a)
HX_LOCAL_STACK_FRAME(_hx_pos_9f7ac0293b858dd4_494_get_currentScene,"openfl.display.MovieClip","get_currentScene",0x64fac154,"openfl.display.MovieClip.get_currentScene","openfl/display/MovieClip.hx",494,0x2b84738a)
HX_LOCAL_STACK_FRAME(_hx_pos_9f7ac0293b858dd4_510_get_enabled,"openfl.display.MovieClip","get_enabled",0x5054e120,"openfl.display.MovieClip.get_enabled","openfl/display/MovieClip.hx",510,0x2b84738a)
HX_LOCAL_STACK_FRAME(_hx_pos_9f7ac0293b858dd4_515_set_enabled,"openfl.display.MovieClip","set_enabled",0x5ac1e82c,"openfl.display.MovieClip.set_enabled","openfl/display/MovieClip.hx",515,0x2b84738a)
HX_LOCAL_STACK_FRAME(_hx_pos_9f7ac0293b858dd4_520_get_framesLoaded,"openfl.display.MovieClip","get_framesLoaded",0xb37eaf4c,"openfl.display.MovieClip.get_framesLoaded","openfl/display/MovieClip.hx",520,0x2b84738a)
HX_LOCAL_STACK_FRAME(_hx_pos_9f7ac0293b858dd4_532_get_isPlaying,"openfl.display.MovieClip","get_isPlaying",0x16620f03,"openfl.display.MovieClip.get_isPlaying","openfl/display/MovieClip.hx",532,0x2b84738a)
HX_LOCAL_STACK_FRAME(_hx_pos_9f7ac0293b858dd4_544_get_scenes,"openfl.display.MovieClip","get_scenes",0xa5e925e8,"openfl.display.MovieClip.get_scenes","openfl/display/MovieClip.hx",544,0x2b84738a)
HX_LOCAL_STACK_FRAME(_hx_pos_9f7ac0293b858dd4_556_get_totalFrames,"openfl.display.MovieClip","get_totalFrames",0x46b3baa9,"openfl.display.MovieClip.get_totalFrames","openfl/display/MovieClip.hx",556,0x2b84738a)
HX_LOCAL_STACK_FRAME(_hx_pos_9f7ac0293b858dd4_194_fromTimeline,"openfl.display.MovieClip","fromTimeline",0xf575c483,"openfl.display.MovieClip.fromTimeline","openfl/display/MovieClip.hx",194,0x2b84738a)
namespace openfl{
namespace display{

void MovieClip_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_9f7ac0293b858dd4_160_new)
HXLINE( 161)		super::__construct();
HXLINE( 163)		this->_hx___enabled = true;
HXLINE( 166)		if (::hx::IsNotNull( ::openfl::display::MovieClip_obj::_hx___constructor )) {
HXLINE( 168)			 ::Dynamic method = ::openfl::display::MovieClip_obj::_hx___constructor;
HXLINE( 169)			::openfl::display::MovieClip_obj::_hx___constructor = null();
HXLINE( 171)			method(::hx::ObjectPtr<OBJ_>(this));
            		}
            	}

Dynamic MovieClip_obj::__CreateEmpty() { return new MovieClip_obj; }

void *MovieClip_obj::_hx_vtable = 0;

Dynamic MovieClip_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MovieClip_obj > _hx_result = new MovieClip_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool MovieClip_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x17c2d032) {
		if (inClassId<=(int)0x0c89e854) {
			if (inClassId<=(int)0x0330636f) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
			} else {
				return inClassId==(int)0x0c89e854;
			}
		} else {
			return inClassId==(int)0x17c2d032;
		}
	} else {
		if (inClassId<=(int)0x4af7dd8e) {
			return inClassId==(int)0x1f4df417 || inClassId==(int)0x4af7dd8e;
		} else {
			return inClassId==(int)0x6b353933;
		}
	}
}

void MovieClip_obj::addFrameScript(int index, ::Dynamic method){
            	HX_STACKFRAME(&_hx_pos_9f7ac0293b858dd4_177_addFrameScript)
HXDLIN( 177)		if (::hx::IsNotNull( this->_hx___timeline )) {
HXLINE( 179)			this->_hx___timeline->_hx___addFrameScript(index,method);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(MovieClip_obj,addFrameScript,(void))

void MovieClip_obj::attachTimeline( ::openfl::display::Timeline timeline){
            	HX_STACKFRAME(&_hx_pos_9f7ac0293b858dd4_184_attachTimeline)
HXLINE( 185)		this->_hx___timeline = timeline;
HXLINE( 186)		if (::hx::IsNotNull( timeline )) {
HXLINE( 188)			timeline->_hx___attachMovieClip(::hx::ObjectPtr<OBJ_>(this));
HXLINE( 189)			this->play();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(MovieClip_obj,attachTimeline,(void))

void MovieClip_obj::gotoAndPlay( ::Dynamic frame,::String scene){
            	HX_STACKFRAME(&_hx_pos_9f7ac0293b858dd4_216_gotoAndPlay)
HXDLIN( 216)		if (::hx::IsNotNull( this->_hx___timeline )) {
HXLINE( 218)			this->_hx___timeline->_hx___gotoAndPlay(frame,scene);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(MovieClip_obj,gotoAndPlay,(void))

void MovieClip_obj::gotoAndStop( ::Dynamic frame,::String scene){
            	HX_STACKFRAME(&_hx_pos_9f7ac0293b858dd4_241_gotoAndStop)
HXDLIN( 241)		if (::hx::IsNotNull( this->_hx___timeline )) {
HXLINE( 243)			this->_hx___timeline->_hx___gotoAndStop(frame,scene);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(MovieClip_obj,gotoAndStop,(void))

void MovieClip_obj::nextFrame(){
            	HX_STACKFRAME(&_hx_pos_9f7ac0293b858dd4_254_nextFrame)
HXDLIN( 254)		if (::hx::IsNotNull( this->_hx___timeline )) {
HXLINE( 256)			this->_hx___timeline->_hx___nextFrame();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(MovieClip_obj,nextFrame,(void))

void MovieClip_obj::nextScene(){
            	HX_STACKFRAME(&_hx_pos_9f7ac0293b858dd4_262_nextScene)
HXDLIN( 262)		if (::hx::IsNotNull( this->_hx___timeline )) {
HXLINE( 264)			this->_hx___timeline->_hx___nextScene();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(MovieClip_obj,nextScene,(void))

void MovieClip_obj::play(){
            	HX_STACKFRAME(&_hx_pos_9f7ac0293b858dd4_273_play)
HXDLIN( 273)		if (::hx::IsNotNull( this->_hx___timeline )) {
HXLINE( 275)			this->_hx___timeline->_hx___play();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(MovieClip_obj,play,(void))

void MovieClip_obj::prevFrame(){
            	HX_STACKFRAME(&_hx_pos_9f7ac0293b858dd4_286_prevFrame)
HXDLIN( 286)		if (::hx::IsNotNull( this->_hx___timeline )) {
HXLINE( 288)			this->_hx___timeline->_hx___prevFrame();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(MovieClip_obj,prevFrame,(void))

void MovieClip_obj::prevScene(){
            	HX_STACKFRAME(&_hx_pos_9f7ac0293b858dd4_294_prevScene)
HXDLIN( 294)		if (::hx::IsNotNull( this->_hx___timeline )) {
HXLINE( 296)			this->_hx___timeline->_hx___prevScene();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(MovieClip_obj,prevScene,(void))

void MovieClip_obj::stop(){
            	HX_STACKFRAME(&_hx_pos_9f7ac0293b858dd4_306_stop)
HXDLIN( 306)		if (::hx::IsNotNull( this->_hx___timeline )) {
HXLINE( 308)			this->_hx___timeline->_hx___stop();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(MovieClip_obj,stop,(void))

void MovieClip_obj::_hx___enterFrame(int deltaTime){
            	HX_STACKFRAME(&_hx_pos_9f7ac0293b858dd4_313___enterFrame)
HXLINE( 314)		if (::hx::IsNotNull( this->_hx___timeline )) {
HXLINE( 316)			this->_hx___timeline->_hx___enterFrame(deltaTime);
            		}
HXLINE( 319)		{
HXLINE( 319)			int _g = 0;
HXDLIN( 319)			::Array< ::Dynamic> _g1 = this->_hx___children;
HXDLIN( 319)			while((_g < _g1->length)){
HXLINE( 319)				 ::openfl::display::DisplayObject child = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 319)				_g = (_g + 1);
HXLINE( 321)				child->_hx___enterFrame(deltaTime);
            			}
            		}
            	}


void MovieClip_obj::_hx___stopAllMovieClips(){
            	HX_STACKFRAME(&_hx_pos_9f7ac0293b858dd4_326___stopAllMovieClips)
HXLINE( 327)		this->super::_hx___stopAllMovieClips();
HXLINE( 328)		this->stop();
            	}


void MovieClip_obj::_hx___tabTest(::Array< ::Dynamic> stack){
            	HX_STACKFRAME(&_hx_pos_9f7ac0293b858dd4_332___tabTest)
HXLINE( 333)		if (!(this->_hx___enabled)) {
HXLINE( 333)			return;
            		}
HXLINE( 334)		this->super::_hx___tabTest(stack);
            	}


void MovieClip_obj::_hx___onMouseDown( ::openfl::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_9f7ac0293b858dd4_339___onMouseDown)
HXLINE( 340)		bool _hx_tmp;
HXDLIN( 340)		if (this->_hx___enabled) {
HXLINE( 340)			_hx_tmp = this->_hx___hasDown;
            		}
            		else {
HXLINE( 340)			_hx_tmp = false;
            		}
HXDLIN( 340)		if (_hx_tmp) {
HXLINE( 342)			this->gotoAndStop(HX_("_down",41,14,7f,f5),null());
            		}
HXLINE( 345)		this->_hx___mouseIsDown = true;
HXLINE( 347)		if (::hx::IsNotNull( this->stage )) {
HXLINE( 349)			this->stage->addEventListener(HX_("mouseUp",e0,f3,72,c0),this->_hx___onMouseUp_dyn(),true,null(),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(MovieClip_obj,_hx___onMouseDown,(void))

void MovieClip_obj::_hx___onMouseUp( ::openfl::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_9f7ac0293b858dd4_354___onMouseUp)
HXLINE( 355)		this->_hx___mouseIsDown = false;
HXLINE( 357)		if (::hx::IsNotNull( this->stage )) {
HXLINE( 359)			this->stage->removeEventListener(HX_("mouseUp",e0,f3,72,c0),this->_hx___onMouseUp_dyn(),null());
            		}
HXLINE( 362)		if (!(this->_hx___buttonMode)) {
HXLINE( 364)			return;
            		}
HXLINE( 367)		bool _hx_tmp;
HXDLIN( 367)		bool _hx_tmp1;
HXDLIN( 367)		if (::hx::IsInstanceEq( ( ( ::openfl::display::MovieClip)(event->target) ),::hx::ObjectPtr<OBJ_>(this) )) {
HXLINE( 367)			_hx_tmp1 = this->_hx___enabled;
            		}
            		else {
HXLINE( 367)			_hx_tmp1 = false;
            		}
HXDLIN( 367)		if (_hx_tmp1) {
HXLINE( 367)			_hx_tmp = this->_hx___hasOver;
            		}
            		else {
HXLINE( 367)			_hx_tmp = false;
            		}
HXDLIN( 367)		if (_hx_tmp) {
HXLINE( 369)			this->gotoAndStop(HX_("_over",33,ad,c9,fc),null());
            		}
            		else {
HXLINE( 371)			bool _hx_tmp;
HXDLIN( 371)			if (this->_hx___enabled) {
HXLINE( 371)				_hx_tmp = this->_hx___hasUp;
            			}
            			else {
HXLINE( 371)				_hx_tmp = false;
            			}
HXDLIN( 371)			if (_hx_tmp) {
HXLINE( 373)				this->gotoAndStop(HX_("_up",7a,7c,48,00),null());
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(MovieClip_obj,_hx___onMouseUp,(void))

void MovieClip_obj::_hx___onRollOut( ::openfl::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_9f7ac0293b858dd4_378___onRollOut)
HXLINE( 379)		if (!(this->_hx___enabled)) {
HXLINE( 379)			return;
            		}
HXLINE( 381)		bool _hx_tmp;
HXDLIN( 381)		if (this->_hx___mouseIsDown) {
HXLINE( 381)			_hx_tmp = this->_hx___hasOver;
            		}
            		else {
HXLINE( 381)			_hx_tmp = false;
            		}
HXDLIN( 381)		if (_hx_tmp) {
HXLINE( 383)			this->gotoAndStop(HX_("_over",33,ad,c9,fc),null());
            		}
            		else {
HXLINE( 385)			if (this->_hx___hasUp) {
HXLINE( 387)				this->gotoAndStop(HX_("_up",7a,7c,48,00),null());
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(MovieClip_obj,_hx___onRollOut,(void))

void MovieClip_obj::_hx___onRollOver( ::openfl::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_9f7ac0293b858dd4_393___onRollOver)
HXDLIN( 393)		bool _hx_tmp;
HXDLIN( 393)		if (this->_hx___enabled) {
HXDLIN( 393)			_hx_tmp = this->_hx___hasOver;
            		}
            		else {
HXDLIN( 393)			_hx_tmp = false;
            		}
HXDLIN( 393)		if (_hx_tmp) {
HXLINE( 395)			this->gotoAndStop(HX_("_over",33,ad,c9,fc),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(MovieClip_obj,_hx___onRollOver,(void))

bool MovieClip_obj::set_buttonMode(bool value){
            	HX_STACKFRAME(&_hx_pos_9f7ac0293b858dd4_401_set_buttonMode)
HXLINE( 402)		if ((this->_hx___buttonMode != value)) {
HXLINE( 404)			if (value) {
HXLINE( 406)				this->_hx___hasDown = false;
HXLINE( 407)				this->_hx___hasOver = false;
HXLINE( 408)				this->_hx___hasUp = false;
HXLINE( 410)				{
HXLINE( 410)					int _g = 0;
HXDLIN( 410)					::Array< ::Dynamic> _g1 = this->get_currentLabels();
HXDLIN( 410)					while((_g < _g1->length)){
HXLINE( 410)						 ::openfl::display::FrameLabel frameLabel = _g1->__get(_g).StaticCast<  ::openfl::display::FrameLabel >();
HXDLIN( 410)						_g = (_g + 1);
HXLINE( 412)						::String _hx_switch_0 = frameLabel->name;
            						if (  (_hx_switch_0==HX_("_down",41,14,7f,f5)) ){
HXLINE( 419)							this->_hx___hasDown = true;
HXDLIN( 419)							goto _hx_goto_20;
            						}
            						if (  (_hx_switch_0==HX_("_over",33,ad,c9,fc)) ){
HXLINE( 417)							this->_hx___hasOver = true;
HXDLIN( 417)							goto _hx_goto_20;
            						}
            						if (  (_hx_switch_0==HX_("_up",7a,7c,48,00)) ){
HXLINE( 415)							this->_hx___hasUp = true;
HXDLIN( 415)							goto _hx_goto_20;
            						}
            						/* default */{
            						}
            						_hx_goto_20:;
            					}
            				}
HXLINE( 424)				bool _hx_tmp;
HXDLIN( 424)				bool _hx_tmp1;
HXDLIN( 424)				if (!(this->_hx___hasDown)) {
HXLINE( 424)					_hx_tmp1 = this->_hx___hasOver;
            				}
            				else {
HXLINE( 424)					_hx_tmp1 = true;
            				}
HXDLIN( 424)				if (!(_hx_tmp1)) {
HXLINE( 424)					_hx_tmp = this->_hx___hasUp;
            				}
            				else {
HXLINE( 424)					_hx_tmp = true;
            				}
HXDLIN( 424)				if (_hx_tmp) {
HXLINE( 426)					this->addEventListener(HX_("rollOver",71,ab,a8,12),this->_hx___onRollOver_dyn(),null(),null(),null());
HXLINE( 427)					this->addEventListener(HX_("rollOut",11,f9,11,5d),this->_hx___onRollOut_dyn(),null(),null(),null());
HXLINE( 428)					this->addEventListener(HX_("mouseDown",27,b1,c2,ee),this->_hx___onMouseDown_dyn(),null(),null(),null());
            				}
            			}
            			else {
HXLINE( 433)				this->removeEventListener(HX_("rollOver",71,ab,a8,12),this->_hx___onRollOver_dyn(),null());
HXLINE( 434)				this->removeEventListener(HX_("rollOut",11,f9,11,5d),this->_hx___onRollOut_dyn(),null());
HXLINE( 435)				this->removeEventListener(HX_("mouseDown",27,b1,c2,ee),this->_hx___onMouseDown_dyn(),null());
            			}
HXLINE( 438)			this->_hx___buttonMode = value;
            		}
HXLINE( 441)		return value;
            	}


int MovieClip_obj::get_currentFrame(){
            	HX_STACKFRAME(&_hx_pos_9f7ac0293b858dd4_446_get_currentFrame)
HXDLIN( 446)		if (::hx::IsNotNull( this->_hx___timeline )) {
HXLINE( 448)			return this->_hx___timeline->_hx___currentFrame;
            		}
            		else {
HXLINE( 452)			return 1;
            		}
HXLINE( 446)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MovieClip_obj,get_currentFrame,return )

::String MovieClip_obj::get_currentFrameLabel(){
            	HX_STACKFRAME(&_hx_pos_9f7ac0293b858dd4_458_get_currentFrameLabel)
HXDLIN( 458)		if (::hx::IsNotNull( this->_hx___timeline )) {
HXLINE( 460)			return this->_hx___timeline->_hx___currentFrameLabel;
            		}
            		else {
HXLINE( 464)			return null();
            		}
HXLINE( 458)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(MovieClip_obj,get_currentFrameLabel,return )

::String MovieClip_obj::get_currentLabel(){
            	HX_STACKFRAME(&_hx_pos_9f7ac0293b858dd4_470_get_currentLabel)
HXDLIN( 470)		if (::hx::IsNotNull( this->_hx___timeline )) {
HXLINE( 472)			return this->_hx___timeline->_hx___currentLabel;
            		}
            		else {
HXLINE( 476)			return null();
            		}
HXLINE( 470)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(MovieClip_obj,get_currentLabel,return )

::Array< ::Dynamic> MovieClip_obj::get_currentLabels(){
            	HX_STACKFRAME(&_hx_pos_9f7ac0293b858dd4_482_get_currentLabels)
HXDLIN( 482)		if (::hx::IsNotNull( this->_hx___timeline )) {
HXLINE( 484)			return this->_hx___timeline->_hx___currentLabels->copy();
            		}
            		else {
HXLINE( 488)			return ::Array_obj< ::Dynamic>::__new(0);
            		}
HXLINE( 482)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(MovieClip_obj,get_currentLabels,return )

 ::openfl::display::Scene MovieClip_obj::get_currentScene(){
            	HX_GC_STACKFRAME(&_hx_pos_9f7ac0293b858dd4_494_get_currentScene)
HXDLIN( 494)		if (::hx::IsNotNull( this->_hx___timeline )) {
HXLINE( 496)			return this->_hx___timeline->_hx___currentScene;
            		}
            		else {
HXLINE( 500)			if (::hx::IsNull( this->_hx___scene )) {
HXLINE( 502)				this->_hx___scene =  ::openfl::display::Scene_obj::__alloc( HX_CTX ,HX_("",00,00,00,00),::Array_obj< ::Dynamic>::__new(0),1);
            			}
HXLINE( 504)			return this->_hx___scene;
            		}
HXLINE( 494)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(MovieClip_obj,get_currentScene,return )

bool MovieClip_obj::get_enabled(){
            	HX_STACKFRAME(&_hx_pos_9f7ac0293b858dd4_510_get_enabled)
HXDLIN( 510)		return this->_hx___enabled;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MovieClip_obj,get_enabled,return )

bool MovieClip_obj::set_enabled(bool value){
            	HX_STACKFRAME(&_hx_pos_9f7ac0293b858dd4_515_set_enabled)
HXDLIN( 515)		return (this->_hx___enabled = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(MovieClip_obj,set_enabled,return )

int MovieClip_obj::get_framesLoaded(){
            	HX_STACKFRAME(&_hx_pos_9f7ac0293b858dd4_520_get_framesLoaded)
HXDLIN( 520)		if (::hx::IsNotNull( this->_hx___timeline )) {
HXLINE( 522)			return this->_hx___timeline->_hx___framesLoaded;
            		}
            		else {
HXLINE( 526)			return 1;
            		}
HXLINE( 520)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MovieClip_obj,get_framesLoaded,return )

bool MovieClip_obj::get_isPlaying(){
            	HX_STACKFRAME(&_hx_pos_9f7ac0293b858dd4_532_get_isPlaying)
HXDLIN( 532)		if (::hx::IsNotNull( this->_hx___timeline )) {
HXLINE( 534)			return this->_hx___timeline->_hx___isPlaying;
            		}
            		else {
HXLINE( 538)			return false;
            		}
HXLINE( 532)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MovieClip_obj,get_isPlaying,return )

::Array< ::Dynamic> MovieClip_obj::get_scenes(){
            	HX_STACKFRAME(&_hx_pos_9f7ac0293b858dd4_544_get_scenes)
HXDLIN( 544)		if (::hx::IsNotNull( this->_hx___timeline )) {
HXLINE( 546)			return this->_hx___timeline->scenes->copy();
            		}
            		else {
HXLINE( 550)			return ::Array_obj< ::Dynamic>::__new(1)->init(0,this->get_currentScene());
            		}
HXLINE( 544)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(MovieClip_obj,get_scenes,return )

int MovieClip_obj::get_totalFrames(){
            	HX_STACKFRAME(&_hx_pos_9f7ac0293b858dd4_556_get_totalFrames)
HXDLIN( 556)		if (::hx::IsNotNull( this->_hx___timeline )) {
HXLINE( 558)			return this->_hx___timeline->_hx___totalFrames;
            		}
            		else {
HXLINE( 562)			return 1;
            		}
HXLINE( 556)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MovieClip_obj,get_totalFrames,return )

 ::Dynamic MovieClip_obj::_hx___constructor;

 ::openfl::display::MovieClip MovieClip_obj::fromTimeline( ::openfl::display::Timeline timeline){
            	HX_GC_STACKFRAME(&_hx_pos_9f7ac0293b858dd4_194_fromTimeline)
HXLINE( 195)		 ::openfl::display::MovieClip movieClip =  ::openfl::display::MovieClip_obj::__alloc( HX_CTX );
HXLINE( 196)		movieClip->attachTimeline(timeline);
HXLINE( 197)		return movieClip;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MovieClip_obj,fromTimeline,return )


::hx::ObjectPtr< MovieClip_obj > MovieClip_obj::__new() {
	::hx::ObjectPtr< MovieClip_obj > __this = new MovieClip_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< MovieClip_obj > MovieClip_obj::__alloc(::hx::Ctx *_hx_ctx) {
	MovieClip_obj *__this = (MovieClip_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MovieClip_obj), true, "openfl.display.MovieClip"));
	*(void **)__this = MovieClip_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

MovieClip_obj::MovieClip_obj()
{
}

void MovieClip_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MovieClip);
	HX_MARK_MEMBER_NAME(_hx___enabled,"__enabled");
	HX_MARK_MEMBER_NAME(_hx___hasDown,"__hasDown");
	HX_MARK_MEMBER_NAME(_hx___hasOver,"__hasOver");
	HX_MARK_MEMBER_NAME(_hx___hasUp,"__hasUp");
	HX_MARK_MEMBER_NAME(_hx___mouseIsDown,"__mouseIsDown");
	HX_MARK_MEMBER_NAME(_hx___scene,"__scene");
	HX_MARK_MEMBER_NAME(_hx___timeline,"__timeline");
	 ::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MovieClip_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_hx___enabled,"__enabled");
	HX_VISIT_MEMBER_NAME(_hx___hasDown,"__hasDown");
	HX_VISIT_MEMBER_NAME(_hx___hasOver,"__hasOver");
	HX_VISIT_MEMBER_NAME(_hx___hasUp,"__hasUp");
	HX_VISIT_MEMBER_NAME(_hx___mouseIsDown,"__mouseIsDown");
	HX_VISIT_MEMBER_NAME(_hx___scene,"__scene");
	HX_VISIT_MEMBER_NAME(_hx___timeline,"__timeline");
	 ::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val MovieClip_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"play") ) { return ::hx::Val( play_dyn() ); }
		if (HX_FIELD_EQ(inName,"stop") ) { return ::hx::Val( stop_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"scenes") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_scenes() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_enabled() ); }
		if (HX_FIELD_EQ(inName,"__hasUp") ) { return ::hx::Val( _hx___hasUp ); }
		if (HX_FIELD_EQ(inName,"__scene") ) { return ::hx::Val( _hx___scene ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isPlaying") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_isPlaying() ); }
		if (HX_FIELD_EQ(inName,"__enabled") ) { return ::hx::Val( _hx___enabled ); }
		if (HX_FIELD_EQ(inName,"__hasDown") ) { return ::hx::Val( _hx___hasDown ); }
		if (HX_FIELD_EQ(inName,"__hasOver") ) { return ::hx::Val( _hx___hasOver ); }
		if (HX_FIELD_EQ(inName,"nextFrame") ) { return ::hx::Val( nextFrame_dyn() ); }
		if (HX_FIELD_EQ(inName,"nextScene") ) { return ::hx::Val( nextScene_dyn() ); }
		if (HX_FIELD_EQ(inName,"prevFrame") ) { return ::hx::Val( prevFrame_dyn() ); }
		if (HX_FIELD_EQ(inName,"prevScene") ) { return ::hx::Val( prevScene_dyn() ); }
		if (HX_FIELD_EQ(inName,"__tabTest") ) { return ::hx::Val( _hx___tabTest_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__timeline") ) { return ::hx::Val( _hx___timeline ); }
		if (HX_FIELD_EQ(inName,"get_scenes") ) { return ::hx::Val( get_scenes_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"totalFrames") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_totalFrames() ); }
		if (HX_FIELD_EQ(inName,"gotoAndPlay") ) { return ::hx::Val( gotoAndPlay_dyn() ); }
		if (HX_FIELD_EQ(inName,"gotoAndStop") ) { return ::hx::Val( gotoAndStop_dyn() ); }
		if (HX_FIELD_EQ(inName,"__onMouseUp") ) { return ::hx::Val( _hx___onMouseUp_dyn() ); }
		if (HX_FIELD_EQ(inName,"__onRollOut") ) { return ::hx::Val( _hx___onRollOut_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_enabled") ) { return ::hx::Val( get_enabled_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_enabled") ) { return ::hx::Val( set_enabled_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"currentFrame") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_currentFrame() ); }
		if (HX_FIELD_EQ(inName,"currentLabel") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_currentLabel() ); }
		if (HX_FIELD_EQ(inName,"currentScene") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_currentScene() ); }
		if (HX_FIELD_EQ(inName,"framesLoaded") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_framesLoaded() ); }
		if (HX_FIELD_EQ(inName,"__enterFrame") ) { return ::hx::Val( _hx___enterFrame_dyn() ); }
		if (HX_FIELD_EQ(inName,"__onRollOver") ) { return ::hx::Val( _hx___onRollOver_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"currentLabels") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_currentLabels() ); }
		if (HX_FIELD_EQ(inName,"__mouseIsDown") ) { return ::hx::Val( _hx___mouseIsDown ); }
		if (HX_FIELD_EQ(inName,"__onMouseDown") ) { return ::hx::Val( _hx___onMouseDown_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_isPlaying") ) { return ::hx::Val( get_isPlaying_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"addFrameScript") ) { return ::hx::Val( addFrameScript_dyn() ); }
		if (HX_FIELD_EQ(inName,"attachTimeline") ) { return ::hx::Val( attachTimeline_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_buttonMode") ) { return ::hx::Val( set_buttonMode_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_totalFrames") ) { return ::hx::Val( get_totalFrames_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_currentFrame") ) { return ::hx::Val( get_currentFrame_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_currentLabel") ) { return ::hx::Val( get_currentLabel_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_currentScene") ) { return ::hx::Val( get_currentScene_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_framesLoaded") ) { return ::hx::Val( get_framesLoaded_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"currentFrameLabel") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_currentFrameLabel() ); }
		if (HX_FIELD_EQ(inName,"get_currentLabels") ) { return ::hx::Val( get_currentLabels_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__stopAllMovieClips") ) { return ::hx::Val( _hx___stopAllMovieClips_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_currentFrameLabel") ) { return ::hx::Val( get_currentFrameLabel_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool MovieClip_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"fromTimeline") ) { outValue = fromTimeline_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__constructor") ) { outValue = ( _hx___constructor ); return true; }
	}
	return false;
}

::hx::Val MovieClip_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_enabled(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"__hasUp") ) { _hx___hasUp=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__scene") ) { _hx___scene=inValue.Cast<  ::openfl::display::Scene >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__enabled") ) { _hx___enabled=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__hasDown") ) { _hx___hasDown=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__hasOver") ) { _hx___hasOver=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__timeline") ) { _hx___timeline=inValue.Cast<  ::openfl::display::Timeline >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__mouseIsDown") ) { _hx___mouseIsDown=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool MovieClip_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"__constructor") ) { _hx___constructor=ioValue.Cast<  ::Dynamic >(); return true; }
	}
	return false;
}

void MovieClip_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("currentFrame",34,5d,8f,4d));
	outFields->push(HX_("currentFrameLabel",20,c4,0a,2a));
	outFields->push(HX_("currentLabel",fb,f2,ba,b6));
	outFields->push(HX_("currentLabels",18,a9,d9,2c));
	outFields->push(HX_("currentScene",53,be,dd,bf));
	outFields->push(HX_("enabled",81,04,31,7e));
	outFields->push(HX_("framesLoaded",4b,ac,61,0e));
	outFields->push(HX_("isPlaying",a4,8c,16,8e));
	outFields->push(HX_("scenes",a7,49,cc,3e));
	outFields->push(HX_("totalFrames",8a,a2,bb,72));
	outFields->push(HX_("__enabled",61,55,7f,ff));
	outFields->push(HX_("__hasDown",bc,69,00,93));
	outFields->push(HX_("__hasOver",ae,02,4b,9a));
	outFields->push(HX_("__hasUp",35,ed,7f,8c));
	outFields->push(HX_("__mouseIsDown",51,32,d5,9d));
	outFields->push(HX_("__scene",2c,32,30,e3));
	outFields->push(HX_("__timeline",a1,e1,73,a0));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MovieClip_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(MovieClip_obj,_hx___enabled),HX_("__enabled",61,55,7f,ff)},
	{::hx::fsBool,(int)offsetof(MovieClip_obj,_hx___hasDown),HX_("__hasDown",bc,69,00,93)},
	{::hx::fsBool,(int)offsetof(MovieClip_obj,_hx___hasOver),HX_("__hasOver",ae,02,4b,9a)},
	{::hx::fsBool,(int)offsetof(MovieClip_obj,_hx___hasUp),HX_("__hasUp",35,ed,7f,8c)},
	{::hx::fsBool,(int)offsetof(MovieClip_obj,_hx___mouseIsDown),HX_("__mouseIsDown",51,32,d5,9d)},
	{::hx::fsObject /*  ::openfl::display::Scene */ ,(int)offsetof(MovieClip_obj,_hx___scene),HX_("__scene",2c,32,30,e3)},
	{::hx::fsObject /*  ::openfl::display::Timeline */ ,(int)offsetof(MovieClip_obj,_hx___timeline),HX_("__timeline",a1,e1,73,a0)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo MovieClip_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &MovieClip_obj::_hx___constructor,HX_("__constructor",da,6d,3d,e0)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String MovieClip_obj_sMemberFields[] = {
	HX_("__enabled",61,55,7f,ff),
	HX_("__hasDown",bc,69,00,93),
	HX_("__hasOver",ae,02,4b,9a),
	HX_("__hasUp",35,ed,7f,8c),
	HX_("__mouseIsDown",51,32,d5,9d),
	HX_("__scene",2c,32,30,e3),
	HX_("__timeline",a1,e1,73,a0),
	HX_("addFrameScript",77,21,7f,bb),
	HX_("attachTimeline",66,f3,b5,e3),
	HX_("gotoAndPlay",08,65,84,ef),
	HX_("gotoAndStop",16,27,86,f1),
	HX_("nextFrame",3a,92,c8,ad),
	HX_("nextScene",59,f3,16,20),
	HX_("play",f4,2d,5a,4a),
	HX_("prevFrame",3a,18,da,f1),
	HX_("prevScene",59,79,28,64),
	HX_("stop",02,f0,5b,4c),
	HX_("__enterFrame",15,7f,e3,3a),
	HX_("__stopAllMovieClips",d2,89,e8,53),
	HX_("__tabTest",27,ee,bd,c6),
	HX_("__onMouseDown",e8,d4,7d,59),
	HX_("__onMouseUp",61,f5,49,c6),
	HX_("__onRollOut",92,fa,e8,62),
	HX_("__onRollOver",d0,fa,f2,28),
	HX_("set_buttonMode",32,b3,6c,48),
	HX_("get_currentFrame",bd,49,2e,52),
	HX_("get_currentFrameLabel",f7,c6,b8,a8),
	HX_("get_currentLabel",84,df,59,bb),
	HX_("get_currentLabels",6f,b4,49,33),
	HX_("get_currentScene",dc,aa,7c,c4),
	HX_("get_enabled",98,64,2b,04),
	HX_("set_enabled",a4,6b,98,0e),
	HX_("get_framesLoaded",d4,98,00,13),
	HX_("get_isPlaying",7b,60,7a,4f),
	HX_("get_scenes",70,b9,53,2f),
	HX_("get_totalFrames",21,5a,9d,33),
	::String(null()) };

static void MovieClip_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MovieClip_obj::_hx___constructor,"__constructor");
};

#ifdef HXCPP_VISIT_ALLOCS
static void MovieClip_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MovieClip_obj::_hx___constructor,"__constructor");
};

#endif

::hx::Class MovieClip_obj::__mClass;

static ::String MovieClip_obj_sStaticFields[] = {
	HX_("__constructor",da,6d,3d,e0),
	HX_("fromTimeline",0b,4a,52,9d),
	::String(null())
};

void MovieClip_obj::__register()
{
	MovieClip_obj _hx_dummy;
	MovieClip_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display.MovieClip",f6,30,c3,c4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &MovieClip_obj::__GetStatic;
	__mClass->mSetStaticField = &MovieClip_obj::__SetStatic;
	__mClass->mMarkFunc = MovieClip_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(MovieClip_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MovieClip_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MovieClip_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = MovieClip_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MovieClip_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MovieClip_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display
