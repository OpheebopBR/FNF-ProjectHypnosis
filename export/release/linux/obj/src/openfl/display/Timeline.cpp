#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
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
#ifndef INCLUDED_openfl_display_FrameScript
#include <openfl/display/FrameScript.h>
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
#ifndef INCLUDED_openfl_display_Timeline
#include <openfl/display/Timeline.h>
#endif
#ifndef INCLUDED_openfl_errors_ArgumentError
#include <openfl/errors/ArgumentError.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d8cb40cd2da03698_31_new,"openfl.display.Timeline","new",0x7cf7cf5d,"openfl.display.Timeline.new","openfl/display/Timeline.hx",31,0xb67a1cf1)
HX_LOCAL_STACK_FRAME(_hx_pos_d8cb40cd2da03698_42_attachMovieClip,"openfl.display.Timeline","attachMovieClip",0x2db9cc98,"openfl.display.Timeline.attachMovieClip","openfl/display/Timeline.hx",42,0xb67a1cf1)
HX_LOCAL_STACK_FRAME(_hx_pos_d8cb40cd2da03698_44_enterFrame,"openfl.display.Timeline","enterFrame",0x44228e98,"openfl.display.Timeline.enterFrame","openfl/display/Timeline.hx",44,0xb67a1cf1)
HX_LOCAL_STACK_FRAME(_hx_pos_d8cb40cd2da03698_47___addFrameScript,"openfl.display.Timeline","__addFrameScript",0x673f537a,"openfl.display.Timeline.__addFrameScript","openfl/display/Timeline.hx",47,0xb67a1cf1)
HX_LOCAL_STACK_FRAME(_hx_pos_d8cb40cd2da03698_61___addFrameScript,"openfl.display.Timeline","__addFrameScript",0x673f537a,"openfl.display.Timeline.__addFrameScript","openfl/display/Timeline.hx",61,0xb67a1cf1)
HX_LOCAL_STACK_FRAME(_hx_pos_d8cb40cd2da03698_71___attachMovieClip,"openfl.display.Timeline","__attachMovieClip",0x794056b8,"openfl.display.Timeline.__attachMovieClip","openfl/display/Timeline.hx",71,0xb67a1cf1)
HX_LOCAL_STACK_FRAME(_hx_pos_d8cb40cd2da03698_107___enterFrame,"openfl.display.Timeline","__enterFrame",0x7e683878,"openfl.display.Timeline.__enterFrame","openfl/display/Timeline.hx",107,0xb67a1cf1)
HX_LOCAL_STACK_FRAME(_hx_pos_d8cb40cd2da03698_144___evaluateFrameScripts,"openfl.display.Timeline","__evaluateFrameScripts",0x677f1f97,"openfl.display.Timeline.__evaluateFrameScripts","openfl/display/Timeline.hx",144,0xb67a1cf1)
HX_LOCAL_STACK_FRAME(_hx_pos_d8cb40cd2da03698_176___getNextFrame,"openfl.display.Timeline","__getNextFrame",0x970fca07,"openfl.display.Timeline.__getNextFrame","openfl/display/Timeline.hx",176,0xb67a1cf1)
HX_LOCAL_STACK_FRAME(_hx_pos_d8cb40cd2da03698_197___goto,"openfl.display.Timeline","__goto",0x4a0bb9e6,"openfl.display.Timeline.__goto","openfl/display/Timeline.hx",197,0xb67a1cf1)
HX_LOCAL_STACK_FRAME(_hx_pos_d8cb40cd2da03698_209___gotoAndPlay,"openfl.display.Timeline","__gotoAndPlay",0x089a2325,"openfl.display.Timeline.__gotoAndPlay","openfl/display/Timeline.hx",209,0xb67a1cf1)
HX_LOCAL_STACK_FRAME(_hx_pos_d8cb40cd2da03698_215___gotoAndStop,"openfl.display.Timeline","__gotoAndStop",0x0a9be533,"openfl.display.Timeline.__gotoAndStop","openfl/display/Timeline.hx",215,0xb67a1cf1)
HX_LOCAL_STACK_FRAME(_hx_pos_d8cb40cd2da03698_221___nextFrame,"openfl.display.Timeline","__nextFrame",0x325b9f17,"openfl.display.Timeline.__nextFrame","openfl/display/Timeline.hx",221,0xb67a1cf1)
HX_LOCAL_STACK_FRAME(_hx_pos_d8cb40cd2da03698_227___nextScene,"openfl.display.Timeline","__nextScene",0xa4aa0036,"openfl.display.Timeline.__nextScene","openfl/display/Timeline.hx",227,0xb67a1cf1)
HX_LOCAL_STACK_FRAME(_hx_pos_d8cb40cd2da03698_232___play,"openfl.display.Timeline","__play",0x4ffc4e37,"openfl.display.Timeline.__play","openfl/display/Timeline.hx",232,0xb67a1cf1)
HX_LOCAL_STACK_FRAME(_hx_pos_d8cb40cd2da03698_245___prevFrame,"openfl.display.Timeline","__prevFrame",0x766d2517,"openfl.display.Timeline.__prevFrame","openfl/display/Timeline.hx",245,0xb67a1cf1)
HX_LOCAL_STACK_FRAME(_hx_pos_d8cb40cd2da03698_251___prevScene,"openfl.display.Timeline","__prevScene",0xe8bb8636,"openfl.display.Timeline.__prevScene","openfl/display/Timeline.hx",251,0xb67a1cf1)
HX_LOCAL_STACK_FRAME(_hx_pos_d8cb40cd2da03698_257___stop,"openfl.display.Timeline","__stop",0x51fe1045,"openfl.display.Timeline.__stop","openfl/display/Timeline.hx",257,0xb67a1cf1)
HX_LOCAL_STACK_FRAME(_hx_pos_d8cb40cd2da03698_262___resolveFrameReference,"openfl.display.Timeline","__resolveFrameReference",0x58065247,"openfl.display.Timeline.__resolveFrameReference","openfl/display/Timeline.hx",262,0xb67a1cf1)
HX_LOCAL_STACK_FRAME(_hx_pos_d8cb40cd2da03698_287___updateFrameLabel,"openfl.display.Timeline","__updateFrameLabel",0xde740ab3,"openfl.display.Timeline.__updateFrameLabel","openfl/display/Timeline.hx",287,0xb67a1cf1)
HX_LOCAL_STACK_FRAME(_hx_pos_d8cb40cd2da03698_313___updateSymbol,"openfl.display.Timeline","__updateSymbol",0xc891f184,"openfl.display.Timeline.__updateSymbol","openfl/display/Timeline.hx",313,0xb67a1cf1)
namespace openfl{
namespace display{

void Timeline_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_d8cb40cd2da03698_31_new)
HXLINE(  32)		this->_hx___framesLoaded = 1;
HXLINE(  33)		this->_hx___totalFrames = 1;
HXLINE(  34)		this->_hx___currentLabels = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  36)		this->_hx___currentFrame = 1;
HXLINE(  38)		this->_hx___lastFrameScriptEval = -1;
HXLINE(  39)		this->_hx___lastFrameUpdate = -1;
            	}

Dynamic Timeline_obj::__CreateEmpty() { return new Timeline_obj; }

void *Timeline_obj::_hx_vtable = 0;

Dynamic Timeline_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Timeline_obj > _hx_result = new Timeline_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Timeline_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x38ecf92f;
}

void Timeline_obj::attachMovieClip( ::openfl::display::MovieClip movieClip){
            	HX_STACKFRAME(&_hx_pos_d8cb40cd2da03698_42_attachMovieClip)
            	}


HX_DEFINE_DYNAMIC_FUNC1(Timeline_obj,attachMovieClip,(void))

void Timeline_obj::enterFrame(int frame){
            	HX_STACKFRAME(&_hx_pos_d8cb40cd2da03698_44_enterFrame)
            	}


HX_DEFINE_DYNAMIC_FUNC1(Timeline_obj,enterFrame,(void))

void Timeline_obj::_hx___addFrameScript(int index, ::Dynamic method){
            	HX_GC_STACKFRAME(&_hx_pos_d8cb40cd2da03698_47___addFrameScript)
HXLINE(  48)		if ((index < 0)) {
HXLINE(  48)			return;
            		}
HXLINE(  50)		int frame = (index + 1);
HXLINE(  52)		if (::hx::IsNotNull( method )) {
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,method) HXARGC(1)
            			void _hx_run( ::openfl::display::MovieClip scope){
            				HX_GC_STACKFRAME(&_hx_pos_d8cb40cd2da03698_61___addFrameScript)
HXLINE(  61)				method();
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE(  54)			if (::hx::IsNull( this->_hx___frameScripts )) {
HXLINE(  56)				this->_hx___frameScripts =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
            			}
HXLINE(  59)			this->_hx___frameScripts->set(frame, ::Dynamic(new _hx_Closure_0(method)));
            		}
            		else {
HXLINE(  64)			if (::hx::IsNotNull( this->_hx___frameScripts )) {
HXLINE(  66)				this->_hx___frameScripts->remove(frame);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Timeline_obj,_hx___addFrameScript,(void))

void Timeline_obj::_hx___attachMovieClip( ::openfl::display::MovieClip movieClip){
            	HX_GC_STACKFRAME(&_hx_pos_d8cb40cd2da03698_71___attachMovieClip)
HXLINE(  72)		this->_hx___scope = movieClip;
HXLINE(  74)		this->_hx___totalFrames = 0;
HXLINE(  75)		this->_hx___framesLoaded = 0;
HXLINE(  77)		bool _hx_tmp;
HXDLIN(  77)		if (::hx::IsNotNull( this->scenes )) {
HXLINE(  77)			_hx_tmp = (this->scenes->length > 0);
            		}
            		else {
HXLINE(  77)			_hx_tmp = false;
            		}
HXDLIN(  77)		if (_hx_tmp) {
HXLINE(  79)			{
HXLINE(  79)				int _g = 0;
HXDLIN(  79)				::Array< ::Dynamic> _g1 = this->scenes;
HXDLIN(  79)				while((_g < _g1->length)){
HXLINE(  79)					 ::openfl::display::Scene scene = _g1->__get(_g).StaticCast<  ::openfl::display::Scene >();
HXDLIN(  79)					_g = (_g + 1);
HXLINE(  81)					 ::openfl::display::Timeline _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  81)					_hx_tmp->_hx___totalFrames = (_hx_tmp->_hx___totalFrames + scene->numFrames);
HXLINE(  82)					 ::openfl::display::Timeline _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  82)					_hx_tmp1->_hx___framesLoaded = (_hx_tmp1->_hx___framesLoaded + scene->numFrames);
HXLINE(  83)					if (::hx::IsNotNull( scene->labels )) {
HXLINE(  86)						this->_hx___currentLabels = this->_hx___currentLabels->concat(scene->labels);
            					}
            				}
            			}
HXLINE(  90)			this->_hx___currentScene = this->scenes->__get(0).StaticCast<  ::openfl::display::Scene >();
            		}
HXLINE(  93)		bool _hx_tmp1;
HXDLIN(  93)		if (::hx::IsNotNull( this->scripts )) {
HXLINE(  93)			_hx_tmp1 = (this->scripts->length > 0);
            		}
            		else {
HXLINE(  93)			_hx_tmp1 = false;
            		}
HXDLIN(  93)		if (_hx_tmp1) {
HXLINE(  95)			this->_hx___frameScripts =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE(  96)			{
HXLINE(  96)				int _g = 0;
HXDLIN(  96)				::Array< ::Dynamic> _g1 = this->scripts;
HXDLIN(  96)				while((_g < _g1->length)){
HXLINE(  96)					 ::openfl::display::FrameScript script = _g1->__get(_g).StaticCast<  ::openfl::display::FrameScript >();
HXDLIN(  96)					_g = (_g + 1);
HXLINE(  99)					this->_hx___frameScripts->set(script->frame,script->script);
            				}
            			}
            		}
HXLINE( 103)		this->attachMovieClip(movieClip);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Timeline_obj,_hx___attachMovieClip,(void))

void Timeline_obj::_hx___enterFrame(int deltaTime){
            	HX_STACKFRAME(&_hx_pos_d8cb40cd2da03698_107___enterFrame)
HXLINE( 108)		if (this->_hx___isPlaying) {
HXLINE( 110)			int nextFrame = this->_hx___getNextFrame(deltaTime);
HXLINE( 112)			if ((this->_hx___lastFrameScriptEval == nextFrame)) {
HXLINE( 114)				return;
            			}
HXLINE( 117)			if (::hx::IsNotNull( this->_hx___frameScripts )) {
HXLINE( 119)				if ((nextFrame < this->_hx___currentFrame)) {
HXLINE( 121)					if (!(this->_hx___evaluateFrameScripts(this->_hx___totalFrames))) {
HXLINE( 123)						return;
            					}
HXLINE( 126)					this->_hx___currentFrame = 1;
            				}
HXLINE( 129)				if (!(this->_hx___evaluateFrameScripts(nextFrame))) {
HXLINE( 131)					return;
            				}
            			}
            			else {
HXLINE( 136)				this->_hx___currentFrame = nextFrame;
            			}
            		}
HXLINE( 140)		this->_hx___updateSymbol(this->_hx___currentFrame);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Timeline_obj,_hx___enterFrame,(void))

bool Timeline_obj::_hx___evaluateFrameScripts(int advanceToFrame){
            	HX_STACKFRAME(&_hx_pos_d8cb40cd2da03698_144___evaluateFrameScripts)
HXLINE( 145)		if (::hx::IsNull( this->_hx___frameScripts )) {
HXLINE( 145)			return true;
            		}
HXLINE( 147)		{
HXLINE( 147)			int _g = this->_hx___currentFrame;
HXDLIN( 147)			int _g1 = (advanceToFrame + 1);
HXDLIN( 147)			while((_g < _g1)){
HXLINE( 147)				_g = (_g + 1);
HXDLIN( 147)				int frame = (_g - 1);
HXLINE( 149)				if ((frame == this->_hx___lastFrameScriptEval)) {
HXLINE( 149)					continue;
            				}
HXLINE( 151)				this->_hx___lastFrameScriptEval = frame;
HXLINE( 152)				this->_hx___currentFrame = frame;
HXLINE( 154)				if (this->_hx___frameScripts->exists(frame)) {
HXLINE( 156)					this->_hx___updateSymbol(frame);
HXLINE( 157)					 ::Dynamic script = this->_hx___frameScripts->get(frame);
HXLINE( 158)					script(this->_hx___scope);
HXLINE( 160)					if ((this->_hx___currentFrame != frame)) {
HXLINE( 162)						return false;
            					}
            				}
HXLINE( 166)				if (!(this->_hx___isPlaying)) {
HXLINE( 168)					return false;
            				}
            			}
            		}
HXLINE( 172)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Timeline_obj,_hx___evaluateFrameScripts,return )

int Timeline_obj::_hx___getNextFrame(int deltaTime){
            	HX_STACKFRAME(&_hx_pos_d8cb40cd2da03698_176___getNextFrame)
HXLINE( 177)		int nextFrame = 0;
HXLINE( 179)		if (::hx::IsNotNull( this->frameRate )) {
HXLINE( 181)			 ::openfl::display::Timeline _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 181)			_hx_tmp->_hx___timeElapsed = (_hx_tmp->_hx___timeElapsed + deltaTime);
HXLINE( 182)			nextFrame = (this->_hx___currentFrame + ::Math_obj::floor((( (Float)(this->_hx___timeElapsed) ) / ( (Float)(this->_hx___frameTime) ))));
HXLINE( 183)			if ((nextFrame < 1)) {
HXLINE( 183)				nextFrame = 1;
            			}
HXLINE( 184)			if ((nextFrame > this->_hx___totalFrames)) {
HXLINE( 184)				nextFrame = (::Math_obj::floor(( (Float)(::hx::Mod((nextFrame - 1),this->_hx___totalFrames)) )) + 1);
            			}
HXLINE( 185)			this->_hx___timeElapsed = ::hx::Mod(this->_hx___timeElapsed,this->_hx___frameTime);
            		}
            		else {
HXLINE( 189)			nextFrame = (this->_hx___currentFrame + 1);
HXLINE( 190)			if ((nextFrame > this->_hx___totalFrames)) {
HXLINE( 190)				nextFrame = 1;
            			}
            		}
HXLINE( 193)		return nextFrame;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Timeline_obj,_hx___getNextFrame,return )

void Timeline_obj::_hx___goto(int frame){
            	HX_STACKFRAME(&_hx_pos_d8cb40cd2da03698_197___goto)
HXLINE( 198)		if ((frame < 1)) {
HXLINE( 198)			frame = 1;
            		}
            		else {
HXLINE( 199)			if ((frame > this->_hx___totalFrames)) {
HXLINE( 199)				frame = this->_hx___totalFrames;
            			}
            		}
HXLINE( 201)		this->_hx___lastFrameScriptEval = -1;
HXLINE( 202)		this->_hx___currentFrame = frame;
HXLINE( 204)		this->_hx___updateSymbol(this->_hx___currentFrame);
HXLINE( 205)		this->_hx___evaluateFrameScripts(this->_hx___currentFrame);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Timeline_obj,_hx___goto,(void))

void Timeline_obj::_hx___gotoAndPlay( ::Dynamic frame,::String scene){
            	HX_STACKFRAME(&_hx_pos_d8cb40cd2da03698_209___gotoAndPlay)
HXLINE( 210)		this->_hx___play();
HXLINE( 211)		this->_hx___goto(this->_hx___resolveFrameReference(frame));
            	}


HX_DEFINE_DYNAMIC_FUNC2(Timeline_obj,_hx___gotoAndPlay,(void))

void Timeline_obj::_hx___gotoAndStop( ::Dynamic frame,::String scene){
            	HX_STACKFRAME(&_hx_pos_d8cb40cd2da03698_215___gotoAndStop)
HXLINE( 216)		this->_hx___stop();
HXLINE( 217)		this->_hx___goto(this->_hx___resolveFrameReference(frame));
            	}


HX_DEFINE_DYNAMIC_FUNC2(Timeline_obj,_hx___gotoAndStop,(void))

void Timeline_obj::_hx___nextFrame(){
            	HX_STACKFRAME(&_hx_pos_d8cb40cd2da03698_221___nextFrame)
HXLINE( 222)		this->_hx___stop();
HXLINE( 223)		this->_hx___goto((this->_hx___currentFrame + 1));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Timeline_obj,_hx___nextFrame,(void))

void Timeline_obj::_hx___nextScene(){
            	HX_STACKFRAME(&_hx_pos_d8cb40cd2da03698_227___nextScene)
            	}


HX_DEFINE_DYNAMIC_FUNC0(Timeline_obj,_hx___nextScene,(void))

void Timeline_obj::_hx___play(){
            	HX_STACKFRAME(&_hx_pos_d8cb40cd2da03698_232___play)
HXLINE( 233)		bool _hx_tmp;
HXDLIN( 233)		if (!(this->_hx___isPlaying)) {
HXLINE( 233)			_hx_tmp = (this->_hx___totalFrames < 2);
            		}
            		else {
HXLINE( 233)			_hx_tmp = true;
            		}
HXDLIN( 233)		if (_hx_tmp) {
HXLINE( 233)			return;
            		}
HXLINE( 235)		this->_hx___isPlaying = true;
HXLINE( 237)		if (::hx::IsNotNull( this->frameRate )) {
HXLINE( 239)			this->_hx___frameTime = ::Std_obj::_hx_int((( (Float)(1000) ) / ( (Float)(this->frameRate) )));
HXLINE( 240)			this->_hx___timeElapsed = 0;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Timeline_obj,_hx___play,(void))

void Timeline_obj::_hx___prevFrame(){
            	HX_STACKFRAME(&_hx_pos_d8cb40cd2da03698_245___prevFrame)
HXLINE( 246)		this->_hx___stop();
HXLINE( 247)		this->_hx___goto((this->_hx___currentFrame - 1));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Timeline_obj,_hx___prevFrame,(void))

void Timeline_obj::_hx___prevScene(){
            	HX_STACKFRAME(&_hx_pos_d8cb40cd2da03698_251___prevScene)
            	}


HX_DEFINE_DYNAMIC_FUNC0(Timeline_obj,_hx___prevScene,(void))

void Timeline_obj::_hx___stop(){
            	HX_STACKFRAME(&_hx_pos_d8cb40cd2da03698_257___stop)
HXDLIN( 257)		this->_hx___isPlaying = false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Timeline_obj,_hx___stop,(void))

int Timeline_obj::_hx___resolveFrameReference( ::Dynamic frame){
            	HX_GC_STACKFRAME(&_hx_pos_d8cb40cd2da03698_262___resolveFrameReference)
HXDLIN( 262)		if (::Std_obj::isOfType(frame,::hx::ClassOf< int >())) {
HXLINE( 264)			return ( (int)(frame) );
            		}
            		else {
HXLINE( 266)			if (::Std_obj::isOfType(frame,::hx::ClassOf< ::String >())) {
HXLINE( 268)				::String label = ( (::String)(frame) );
HXLINE( 270)				{
HXLINE( 270)					int _g = 0;
HXDLIN( 270)					::Array< ::Dynamic> _g1 = this->_hx___currentLabels;
HXDLIN( 270)					while((_g < _g1->length)){
HXLINE( 270)						 ::openfl::display::FrameLabel frameLabel = _g1->__get(_g).StaticCast<  ::openfl::display::FrameLabel >();
HXDLIN( 270)						_g = (_g + 1);
HXLINE( 272)						if ((frameLabel->name == label)) {
HXLINE( 274)							return frameLabel->frame;
            						}
            					}
            				}
HXLINE( 278)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::openfl::errors::ArgumentError_obj::__alloc( HX_CTX ,((HX_("Error #2109: Frame label ",f8,f0,5a,8a) + label) + HX_(" not found in scene.",b2,87,08,ff)))));
            			}
            			else {
HXLINE( 282)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Invalid type for frame ",e7,83,86,d5) + ::Type_obj::getClassName(frame))));
            			}
            		}
HXLINE( 262)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Timeline_obj,_hx___resolveFrameReference,return )

void Timeline_obj::_hx___updateFrameLabel(){
            	HX_STACKFRAME(&_hx_pos_d8cb40cd2da03698_287___updateFrameLabel)
HXLINE( 288)		this->_hx___currentLabel = null();
HXLINE( 289)		this->_hx___currentFrameLabel = null();
HXLINE( 293)		{
HXLINE( 293)			int _g = 0;
HXDLIN( 293)			::Array< ::Dynamic> _g1 = this->_hx___currentLabels;
HXDLIN( 293)			while((_g < _g1->length)){
HXLINE( 293)				 ::openfl::display::FrameLabel label = _g1->__get(_g).StaticCast<  ::openfl::display::FrameLabel >();
HXDLIN( 293)				_g = (_g + 1);
HXLINE( 295)				if ((label->frame < this->_hx___currentFrame)) {
HXLINE( 297)					this->_hx___currentLabel = label->name;
            				}
            				else {
HXLINE( 299)					if ((label->frame == this->_hx___currentFrame)) {
HXLINE( 301)						this->_hx___currentLabel = label->name;
HXLINE( 302)						this->_hx___currentFrameLabel = label->name;
            					}
            					else {
HXLINE( 306)						goto _hx_goto_23;
            					}
            				}
            			}
            			_hx_goto_23:;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Timeline_obj,_hx___updateFrameLabel,(void))

void Timeline_obj::_hx___updateSymbol(int targetFrame){
            	HX_STACKFRAME(&_hx_pos_d8cb40cd2da03698_313___updateSymbol)
HXDLIN( 313)		if ((this->_hx___currentFrame != this->_hx___lastFrameUpdate)) {
HXLINE( 315)			this->_hx___updateFrameLabel();
HXLINE( 316)			this->enterFrame(targetFrame);
HXLINE( 317)			this->_hx___lastFrameUpdate = this->_hx___currentFrame;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Timeline_obj,_hx___updateSymbol,(void))


::hx::ObjectPtr< Timeline_obj > Timeline_obj::__new() {
	::hx::ObjectPtr< Timeline_obj > __this = new Timeline_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Timeline_obj > Timeline_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Timeline_obj *__this = (Timeline_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Timeline_obj), true, "openfl.display.Timeline"));
	*(void **)__this = Timeline_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Timeline_obj::Timeline_obj()
{
}

void Timeline_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Timeline);
	HX_MARK_MEMBER_NAME(frameRate,"frameRate");
	HX_MARK_MEMBER_NAME(scenes,"scenes");
	HX_MARK_MEMBER_NAME(scripts,"scripts");
	HX_MARK_MEMBER_NAME(_hx___currentFrame,"__currentFrame");
	HX_MARK_MEMBER_NAME(_hx___currentFrameLabel,"__currentFrameLabel");
	HX_MARK_MEMBER_NAME(_hx___currentLabel,"__currentLabel");
	HX_MARK_MEMBER_NAME(_hx___currentLabels,"__currentLabels");
	HX_MARK_MEMBER_NAME(_hx___currentScene,"__currentScene");
	HX_MARK_MEMBER_NAME(_hx___frameScripts,"__frameScripts");
	HX_MARK_MEMBER_NAME(_hx___framesLoaded,"__framesLoaded");
	HX_MARK_MEMBER_NAME(_hx___frameTime,"__frameTime");
	HX_MARK_MEMBER_NAME(_hx___isPlaying,"__isPlaying");
	HX_MARK_MEMBER_NAME(_hx___lastFrameScriptEval,"__lastFrameScriptEval");
	HX_MARK_MEMBER_NAME(_hx___lastFrameUpdate,"__lastFrameUpdate");
	HX_MARK_MEMBER_NAME(_hx___scope,"__scope");
	HX_MARK_MEMBER_NAME(_hx___timeElapsed,"__timeElapsed");
	HX_MARK_MEMBER_NAME(_hx___totalFrames,"__totalFrames");
	HX_MARK_END_CLASS();
}

void Timeline_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(frameRate,"frameRate");
	HX_VISIT_MEMBER_NAME(scenes,"scenes");
	HX_VISIT_MEMBER_NAME(scripts,"scripts");
	HX_VISIT_MEMBER_NAME(_hx___currentFrame,"__currentFrame");
	HX_VISIT_MEMBER_NAME(_hx___currentFrameLabel,"__currentFrameLabel");
	HX_VISIT_MEMBER_NAME(_hx___currentLabel,"__currentLabel");
	HX_VISIT_MEMBER_NAME(_hx___currentLabels,"__currentLabels");
	HX_VISIT_MEMBER_NAME(_hx___currentScene,"__currentScene");
	HX_VISIT_MEMBER_NAME(_hx___frameScripts,"__frameScripts");
	HX_VISIT_MEMBER_NAME(_hx___framesLoaded,"__framesLoaded");
	HX_VISIT_MEMBER_NAME(_hx___frameTime,"__frameTime");
	HX_VISIT_MEMBER_NAME(_hx___isPlaying,"__isPlaying");
	HX_VISIT_MEMBER_NAME(_hx___lastFrameScriptEval,"__lastFrameScriptEval");
	HX_VISIT_MEMBER_NAME(_hx___lastFrameUpdate,"__lastFrameUpdate");
	HX_VISIT_MEMBER_NAME(_hx___scope,"__scope");
	HX_VISIT_MEMBER_NAME(_hx___timeElapsed,"__timeElapsed");
	HX_VISIT_MEMBER_NAME(_hx___totalFrames,"__totalFrames");
}

::hx::Val Timeline_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"scenes") ) { return ::hx::Val( scenes ); }
		if (HX_FIELD_EQ(inName,"__goto") ) { return ::hx::Val( _hx___goto_dyn() ); }
		if (HX_FIELD_EQ(inName,"__play") ) { return ::hx::Val( _hx___play_dyn() ); }
		if (HX_FIELD_EQ(inName,"__stop") ) { return ::hx::Val( _hx___stop_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"scripts") ) { return ::hx::Val( scripts ); }
		if (HX_FIELD_EQ(inName,"__scope") ) { return ::hx::Val( _hx___scope ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameRate") ) { return ::hx::Val( frameRate ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"enterFrame") ) { return ::hx::Val( enterFrame_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__frameTime") ) { return ::hx::Val( _hx___frameTime ); }
		if (HX_FIELD_EQ(inName,"__isPlaying") ) { return ::hx::Val( _hx___isPlaying ); }
		if (HX_FIELD_EQ(inName,"__nextFrame") ) { return ::hx::Val( _hx___nextFrame_dyn() ); }
		if (HX_FIELD_EQ(inName,"__nextScene") ) { return ::hx::Val( _hx___nextScene_dyn() ); }
		if (HX_FIELD_EQ(inName,"__prevFrame") ) { return ::hx::Val( _hx___prevFrame_dyn() ); }
		if (HX_FIELD_EQ(inName,"__prevScene") ) { return ::hx::Val( _hx___prevScene_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__enterFrame") ) { return ::hx::Val( _hx___enterFrame_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__timeElapsed") ) { return ::hx::Val( _hx___timeElapsed ); }
		if (HX_FIELD_EQ(inName,"__totalFrames") ) { return ::hx::Val( _hx___totalFrames ); }
		if (HX_FIELD_EQ(inName,"__gotoAndPlay") ) { return ::hx::Val( _hx___gotoAndPlay_dyn() ); }
		if (HX_FIELD_EQ(inName,"__gotoAndStop") ) { return ::hx::Val( _hx___gotoAndStop_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__currentFrame") ) { return ::hx::Val( _hx___currentFrame ); }
		if (HX_FIELD_EQ(inName,"__currentLabel") ) { return ::hx::Val( _hx___currentLabel ); }
		if (HX_FIELD_EQ(inName,"__currentScene") ) { return ::hx::Val( _hx___currentScene ); }
		if (HX_FIELD_EQ(inName,"__frameScripts") ) { return ::hx::Val( _hx___frameScripts ); }
		if (HX_FIELD_EQ(inName,"__framesLoaded") ) { return ::hx::Val( _hx___framesLoaded ); }
		if (HX_FIELD_EQ(inName,"__getNextFrame") ) { return ::hx::Val( _hx___getNextFrame_dyn() ); }
		if (HX_FIELD_EQ(inName,"__updateSymbol") ) { return ::hx::Val( _hx___updateSymbol_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__currentLabels") ) { return ::hx::Val( _hx___currentLabels ); }
		if (HX_FIELD_EQ(inName,"attachMovieClip") ) { return ::hx::Val( attachMovieClip_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__addFrameScript") ) { return ::hx::Val( _hx___addFrameScript_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__lastFrameUpdate") ) { return ::hx::Val( _hx___lastFrameUpdate ); }
		if (HX_FIELD_EQ(inName,"__attachMovieClip") ) { return ::hx::Val( _hx___attachMovieClip_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__updateFrameLabel") ) { return ::hx::Val( _hx___updateFrameLabel_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__currentFrameLabel") ) { return ::hx::Val( _hx___currentFrameLabel ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__lastFrameScriptEval") ) { return ::hx::Val( _hx___lastFrameScriptEval ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"__evaluateFrameScripts") ) { return ::hx::Val( _hx___evaluateFrameScripts_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"__resolveFrameReference") ) { return ::hx::Val( _hx___resolveFrameReference_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Timeline_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"scenes") ) { scenes=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"scripts") ) { scripts=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__scope") ) { _hx___scope=inValue.Cast<  ::openfl::display::MovieClip >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameRate") ) { frameRate=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__frameTime") ) { _hx___frameTime=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__isPlaying") ) { _hx___isPlaying=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__timeElapsed") ) { _hx___timeElapsed=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__totalFrames") ) { _hx___totalFrames=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__currentFrame") ) { _hx___currentFrame=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__currentLabel") ) { _hx___currentLabel=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__currentScene") ) { _hx___currentScene=inValue.Cast<  ::openfl::display::Scene >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__frameScripts") ) { _hx___frameScripts=inValue.Cast<  ::haxe::ds::IntMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__framesLoaded") ) { _hx___framesLoaded=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__currentLabels") ) { _hx___currentLabels=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__lastFrameUpdate") ) { _hx___lastFrameUpdate=inValue.Cast< int >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__currentFrameLabel") ) { _hx___currentFrameLabel=inValue.Cast< ::String >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__lastFrameScriptEval") ) { _hx___lastFrameScriptEval=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Timeline_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("frameRate",ad,11,25,39));
	outFields->push(HX_("scenes",a7,49,cc,3e));
	outFields->push(HX_("scripts",08,fc,e3,2c));
	outFields->push(HX_("__currentFrame",54,e0,4f,6e));
	outFields->push(HX_("__currentFrameLabel",00,ed,fa,dc));
	outFields->push(HX_("__currentLabel",1b,76,7b,d7));
	outFields->push(HX_("__currentLabels",f8,e1,8b,b4));
	outFields->push(HX_("__currentScene",73,41,9e,e0));
	outFields->push(HX_("__frameScripts",7b,3e,2f,ee));
	outFields->push(HX_("__framesLoaded",6b,2f,22,2f));
	outFields->push(HX_("__frameTime",ba,d3,a9,68));
	outFields->push(HX_("__isPlaying",84,d5,42,bc));
	outFields->push(HX_("__lastFrameScriptEval",fe,cc,8c,81));
	outFields->push(HX_("__lastFrameUpdate",40,24,e4,8a));
	outFields->push(HX_("__scope",74,ca,37,e3));
	outFields->push(HX_("__timeElapsed",8f,80,8e,75));
	outFields->push(HX_("__totalFrames",6a,e3,33,bb));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Timeline_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Timeline_obj,frameRate),HX_("frameRate",ad,11,25,39)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Timeline_obj,scenes),HX_("scenes",a7,49,cc,3e)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Timeline_obj,scripts),HX_("scripts",08,fc,e3,2c)},
	{::hx::fsInt,(int)offsetof(Timeline_obj,_hx___currentFrame),HX_("__currentFrame",54,e0,4f,6e)},
	{::hx::fsString,(int)offsetof(Timeline_obj,_hx___currentFrameLabel),HX_("__currentFrameLabel",00,ed,fa,dc)},
	{::hx::fsString,(int)offsetof(Timeline_obj,_hx___currentLabel),HX_("__currentLabel",1b,76,7b,d7)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Timeline_obj,_hx___currentLabels),HX_("__currentLabels",f8,e1,8b,b4)},
	{::hx::fsObject /*  ::openfl::display::Scene */ ,(int)offsetof(Timeline_obj,_hx___currentScene),HX_("__currentScene",73,41,9e,e0)},
	{::hx::fsObject /*  ::haxe::ds::IntMap */ ,(int)offsetof(Timeline_obj,_hx___frameScripts),HX_("__frameScripts",7b,3e,2f,ee)},
	{::hx::fsInt,(int)offsetof(Timeline_obj,_hx___framesLoaded),HX_("__framesLoaded",6b,2f,22,2f)},
	{::hx::fsInt,(int)offsetof(Timeline_obj,_hx___frameTime),HX_("__frameTime",ba,d3,a9,68)},
	{::hx::fsBool,(int)offsetof(Timeline_obj,_hx___isPlaying),HX_("__isPlaying",84,d5,42,bc)},
	{::hx::fsInt,(int)offsetof(Timeline_obj,_hx___lastFrameScriptEval),HX_("__lastFrameScriptEval",fe,cc,8c,81)},
	{::hx::fsInt,(int)offsetof(Timeline_obj,_hx___lastFrameUpdate),HX_("__lastFrameUpdate",40,24,e4,8a)},
	{::hx::fsObject /*  ::openfl::display::MovieClip */ ,(int)offsetof(Timeline_obj,_hx___scope),HX_("__scope",74,ca,37,e3)},
	{::hx::fsInt,(int)offsetof(Timeline_obj,_hx___timeElapsed),HX_("__timeElapsed",8f,80,8e,75)},
	{::hx::fsInt,(int)offsetof(Timeline_obj,_hx___totalFrames),HX_("__totalFrames",6a,e3,33,bb)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Timeline_obj_sStaticStorageInfo = 0;
#endif

static ::String Timeline_obj_sMemberFields[] = {
	HX_("frameRate",ad,11,25,39),
	HX_("scenes",a7,49,cc,3e),
	HX_("scripts",08,fc,e3,2c),
	HX_("__currentFrame",54,e0,4f,6e),
	HX_("__currentFrameLabel",00,ed,fa,dc),
	HX_("__currentLabel",1b,76,7b,d7),
	HX_("__currentLabels",f8,e1,8b,b4),
	HX_("__currentScene",73,41,9e,e0),
	HX_("__frameScripts",7b,3e,2f,ee),
	HX_("__framesLoaded",6b,2f,22,2f),
	HX_("__frameTime",ba,d3,a9,68),
	HX_("__isPlaying",84,d5,42,bc),
	HX_("__lastFrameScriptEval",fe,cc,8c,81),
	HX_("__lastFrameUpdate",40,24,e4,8a),
	HX_("__scope",74,ca,37,e3),
	HX_("__timeElapsed",8f,80,8e,75),
	HX_("__totalFrames",6a,e3,33,bb),
	HX_("attachMovieClip",1b,c6,d4,dc),
	HX_("enterFrame",f5,03,50,02),
	HX_("__addFrameScript",97,ac,be,ef),
	HX_("__attachMovieClip",fb,f6,2e,60),
	HX_("__enterFrame",15,7f,e3,3a),
	HX_("__evaluateFrameScripts",74,ac,75,85),
	HX_("__getNextFrame",e4,b1,df,dd),
	HX_("__goto",c3,fc,61,f3),
	HX_("__gotoAndPlay",e8,a5,fc,37),
	HX_("__gotoAndStop",f6,67,fe,39),
	HX_("__nextFrame",1a,db,f4,db),
	HX_("__nextScene",39,3c,43,4e),
	HX_("__play",14,91,52,f9),
	HX_("__prevFrame",1a,61,06,20),
	HX_("__prevScene",39,c2,54,92),
	HX_("__stop",22,53,54,fb),
	HX_("__resolveFrameReference",ca,06,cb,71),
	HX_("__updateFrameLabel",10,a5,51,08),
	HX_("__updateSymbol",61,d9,61,0f),
	::String(null()) };

::hx::Class Timeline_obj::__mClass;

void Timeline_obj::__register()
{
	Timeline_obj _hx_dummy;
	Timeline_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display.Timeline",eb,dc,f3,71);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Timeline_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Timeline_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Timeline_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Timeline_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display
