#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_math_FlxVelocity
#include <flixel/math/FlxVelocity.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxBaseTilemap
#include <flixel/tile/FlxBaseTilemap.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPath
#include <flixel/util/FlxPath.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxRect
#include <flixel/util/FlxPool_flixel_math_FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_LabelValuePair
#include <flixel/util/FlxPool_flixel_util_LabelValuePair.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_LabelValuePair
#include <flixel/util/LabelValuePair.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c625bfaa5b4263df_22_new,"flixel.FlxObject","new",0x2aa4ec91,"flixel.FlxObject.new","flixel/FlxObject.hx",22,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_674_initVars,"flixel.FlxObject","initVars",0xb8a66d0b,"flixel.FlxObject.initVars","flixel/FlxObject.hx",674,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_688_initMotionVars,"flixel.FlxObject","initMotionVars",0xb01943a1,"flixel.FlxObject.initMotionVars","flixel/FlxObject.hx",688,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_706_destroy,"flixel.FlxObject","destroy",0xba37b5ab,"flixel.FlxObject.destroy","flixel/FlxObject.hx",706,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_724_update,"flixel.FlxObject","update",0x87b15e78,"flixel.FlxObject.update","flixel/FlxObject.hx",724,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_749_updateMotion,"flixel.FlxObject","updateMotion",0x420d82ce,"flixel.FlxObject.updateMotion","flixel/FlxObject.hx",749,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_772_draw,"flixel.FlxObject","draw",0x1f17bab3,"flixel.FlxObject.draw","flixel/FlxObject.hx",772,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_794_overlaps,"flixel.FlxObject","overlaps",0xaad0e53b,"flixel.FlxObject.overlaps","flixel/FlxObject.hx",794,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_830_overlapsCallback,"flixel.FlxObject","overlapsCallback",0xe4196e20,"flixel.FlxObject.overlapsCallback","flixel/FlxObject.hx",830,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_853_overlapsAt,"flixel.FlxObject","overlapsAt",0xacc1230e,"flixel.FlxObject.overlapsAt","flixel/FlxObject.hx",853,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_891_overlapsAtCallback,"flixel.FlxObject","overlapsAtCallback",0xb90836f3,"flixel.FlxObject.overlapsAtCallback","flixel/FlxObject.hx",891,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_904_overlapsPoint,"flixel.FlxObject","overlapsPoint",0xcd9c6915,"flixel.FlxObject.overlapsPoint","flixel/FlxObject.hx",904,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_929_inWorldBounds,"flixel.FlxObject","inWorldBounds",0x89d0e9f3,"flixel.FlxObject.inWorldBounds","flixel/FlxObject.hx",929,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_942_getScreenPosition,"flixel.FlxObject","getScreenPosition",0x643c435c,"flixel.FlxObject.getScreenPosition","flixel/FlxObject.hx",942,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_957_getPosition,"flixel.FlxObject","getPosition",0x1bf09890,"flixel.FlxObject.getPosition","flixel/FlxObject.hx",957,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_971_getMidpoint,"flixel.FlxObject","getMidpoint",0x7bfe0daf,"flixel.FlxObject.getMidpoint","flixel/FlxObject.hx",971,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_978_getHitbox,"flixel.FlxObject","getHitbox",0x5f284dbf,"flixel.FlxObject.getHitbox","flixel/FlxObject.hx",978,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_992_reset,"flixel.FlxObject","reset",0x1cbd9440,"flixel.FlxObject.reset","flixel/FlxObject.hx",992,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1009_isOnScreen,"flixel.FlxObject","isOnScreen",0x4aab7fe4,"flixel.FlxObject.isOnScreen","flixel/FlxObject.hx",1009,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1021_isPixelPerfectRender,"flixel.FlxObject","isPixelPerfectRender",0xc4c93916,"flixel.FlxObject.isPixelPerfectRender","flixel/FlxObject.hx",1021,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1036_isTouching,"flixel.FlxObject","isTouching",0x23c6647c,"flixel.FlxObject.isTouching","flixel/FlxObject.hx",1036,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1048_justTouched,"flixel.FlxObject","justTouched",0xbcba8e43,"flixel.FlxObject.justTouched","flixel/FlxObject.hx",1048,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1058_hurt,"flixel.FlxObject","hurt",0x21beeabe,"flixel.FlxObject.hurt","flixel/FlxObject.hx",1058,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1071_screenCenter,"flixel.FlxObject","screenCenter",0x59e58410,"flixel.FlxObject.screenCenter","flixel/FlxObject.hx",1071,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1091_setPosition,"flixel.FlxObject","setPosition",0x265d9f9c,"flixel.FlxObject.setPosition","flixel/FlxObject.hx",1091,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1103_setSize,"flixel.FlxObject","setSize",0xa7896a34,"flixel.FlxObject.setSize","flixel/FlxObject.hx",1103,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1183_getBoundingBox,"flixel.FlxObject","getBoundingBox",0x58364780,"flixel.FlxObject.getBoundingBox","flixel/FlxObject.hx",1183,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1202_toString,"flixel.FlxObject","toString",0x9e14e2db,"flixel.FlxObject.toString","flixel/FlxObject.hx",1202,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1215_set_x,"flixel.FlxObject","set_x",0xb024e5cc,"flixel.FlxObject.set_x","flixel/FlxObject.hx",1215,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1221_set_y,"flixel.FlxObject","set_y",0xb024e5cd,"flixel.FlxObject.set_y","flixel/FlxObject.hx",1221,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1235_set_width,"flixel.FlxObject","set_width",0x7d06d55a,"flixel.FlxObject.set_width","flixel/FlxObject.hx",1235,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1249_set_height,"flixel.FlxObject","set_height",0x9f435213,"flixel.FlxObject.set_height","flixel/FlxObject.hx",1249,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1255_get_width,"flixel.FlxObject","get_width",0x99b5e94e,"flixel.FlxObject.get_width","flixel/FlxObject.hx",1255,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1261_get_height,"flixel.FlxObject","get_height",0x9bc5b39f,"flixel.FlxObject.get_height","flixel/FlxObject.hx",1261,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1267_get_solid,"flixel.FlxObject","get_solid",0x5018e773,"flixel.FlxObject.get_solid","flixel/FlxObject.hx",1267,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1272_set_solid,"flixel.FlxObject","set_solid",0x3369d37f,"flixel.FlxObject.set_solid","flixel/FlxObject.hx",1272,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1280_set_angle,"flixel.FlxObject","set_angle",0xd5866327,"flixel.FlxObject.set_angle","flixel/FlxObject.hx",1280,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1286_set_moves,"flixel.FlxObject","set_moves",0xbf09eb96,"flixel.FlxObject.set_moves","flixel/FlxObject.hx",1286,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1292_set_immovable,"flixel.FlxObject","set_immovable",0xc5b8805e,"flixel.FlxObject.set_immovable","flixel/FlxObject.hx",1292,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1298_set_pixelPerfectRender,"flixel.FlxObject","set_pixelPerfectRender",0x84233609,"flixel.FlxObject.set_pixelPerfectRender","flixel/FlxObject.hx",1298,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1304_set_allowCollisions,"flixel.FlxObject","set_allowCollisions",0x7975d9fe,"flixel.FlxObject.set_allowCollisions","flixel/FlxObject.hx",1304,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1329_set_path,"flixel.FlxObject","set_path",0xde100cd1,"flixel.FlxObject.set_path","flixel/FlxObject.hx",1329,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_103_separate,"flixel.FlxObject","separate",0x6cc23192,"flixel.FlxObject.separate","flixel/FlxObject.hx",103,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_118_updateTouchingFlags,"flixel.FlxObject","updateTouchingFlags",0x15a0502c,"flixel.FlxObject.updateTouchingFlags","flixel/FlxObject.hx",118,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_131_computeOverlapX,"flixel.FlxObject","computeOverlapX",0x240ec739,"flixel.FlxObject.computeOverlapX","flixel/FlxObject.hx",131,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_199_separateX,"flixel.FlxObject","separateX",0xbd292e86,"flixel.FlxObject.separateX","flixel/FlxObject.hx",199,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_265_updateTouchingFlagsX,"flixel.FlxObject","updateTouchingFlagsX",0xd6a5d6ac,"flixel.FlxObject.updateTouchingFlagsX","flixel/FlxObject.hx",265,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_288_computeOverlapY,"flixel.FlxObject","computeOverlapY",0x240ec73a,"flixel.FlxObject.computeOverlapY","flixel/FlxObject.hx",288,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_356_separateY,"flixel.FlxObject","separateY",0xbd292e87,"flixel.FlxObject.separateY","flixel/FlxObject.hx",356,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_434_updateTouchingFlagsY,"flixel.FlxObject","updateTouchingFlagsY",0xd6a5d6ad,"flixel.FlxObject.updateTouchingFlagsY","flixel/FlxObject.hx",434,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_27_boot,"flixel.FlxObject","boot",0x1dc312e1,"flixel.FlxObject.boot","flixel/FlxObject.hx",27,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_34_boot,"flixel.FlxObject","boot",0x1dc312e1,"flixel.FlxObject.boot","flixel/FlxObject.hx",34,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_40_boot,"flixel.FlxObject","boot",0x1dc312e1,"flixel.FlxObject.boot","flixel/FlxObject.hx",40,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_46_boot,"flixel.FlxObject","boot",0x1dc312e1,"flixel.FlxObject.boot","flixel/FlxObject.hx",46,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_52_boot,"flixel.FlxObject","boot",0x1dc312e1,"flixel.FlxObject.boot","flixel/FlxObject.hx",52,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_58_boot,"flixel.FlxObject","boot",0x1dc312e1,"flixel.FlxObject.boot","flixel/FlxObject.hx",58,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_64_boot,"flixel.FlxObject","boot",0x1dc312e1,"flixel.FlxObject.boot","flixel/FlxObject.hx",64,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_70_boot,"flixel.FlxObject","boot",0x1dc312e1,"flixel.FlxObject.boot","flixel/FlxObject.hx",70,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_76_boot,"flixel.FlxObject","boot",0x1dc312e1,"flixel.FlxObject.boot","flixel/FlxObject.hx",76,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_82_boot,"flixel.FlxObject","boot",0x1dc312e1,"flixel.FlxObject.boot","flixel/FlxObject.hx",82,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_88_boot,"flixel.FlxObject","boot",0x1dc312e1,"flixel.FlxObject.boot","flixel/FlxObject.hx",88,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_91_boot,"flixel.FlxObject","boot",0x1dc312e1,"flixel.FlxObject.boot","flixel/FlxObject.hx",91,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_93_boot,"flixel.FlxObject","boot",0x1dc312e1,"flixel.FlxObject.boot","flixel/FlxObject.hx",93,0xf0fe0d80)
namespace flixel{

void FlxObject_obj::__construct(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::hx::Null< Float >  __o_Width,::hx::Null< Float >  __o_Height){
            		Float X = __o_X.Default(0);
            		Float Y = __o_Y.Default(0);
            		Float Width = __o_Width.Default(0);
            		Float Height = __o_Height.Default(0);
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_22_new)
HXLINE( 649)		 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN( 649)		_this->x = ( (Float)(0) );
HXDLIN( 649)		_this->y = ( (Float)(0) );
HXDLIN( 649)		_this->width = ( (Float)(0) );
HXDLIN( 649)		_this->height = ( (Float)(0) );
HXDLIN( 649)		 ::flixel::math::FlxRect rect = _this;
HXDLIN( 649)		rect->_inPool = false;
HXDLIN( 649)		this->_rect = rect;
HXLINE( 647)		 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 647)		point->_inPool = false;
HXDLIN( 647)		this->_point = point;
HXLINE( 644)		this->path = null();
HXLINE( 602)		this->collisonXDrag = true;
HXLINE( 596)		this->allowCollisions = 4369;
HXLINE( 590)		this->wasTouching = 0;
HXLINE( 584)		this->touching = 0;
HXLINE( 578)		this->health = ((Float)1);
HXLINE( 573)		this->maxAngular = ((Float)10000);
HXLINE( 568)		this->angularDrag = ((Float)0);
HXLINE( 563)		this->angularAcceleration = ((Float)0);
HXLINE( 558)		this->angularVelocity = ((Float)0);
HXLINE( 553)		this->elasticity = ((Float)0);
HXLINE( 548)		this->mass = ((Float)1);
HXLINE( 500)		this->immovable = false;
HXLINE( 495)		this->moves = true;
HXLINE( 489)		this->angle = ((Float)0);
HXLINE( 483)		this->pixelPerfectPosition = true;
HXLINE( 458)		this->y = ((Float)0);
HXLINE( 453)		this->x = ((Float)0);
HXLINE( 659)		super::__construct();
HXLINE( 661)		this->set_x(X);
HXLINE( 662)		this->set_y(Y);
HXLINE( 663)		this->set_width(Width);
HXLINE( 664)		this->set_height(Height);
HXLINE( 666)		this->initVars();
            	}

Dynamic FlxObject_obj::__CreateEmpty() { return new FlxObject_obj; }

void *FlxObject_obj::_hx_vtable = 0;

Dynamic FlxObject_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxObject_obj > _hx_result = new FlxObject_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool FlxObject_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x7ccf8994) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x7ccf8994;
	} else {
		return inClassId==(int)0x7dab0655;
	}
}

void FlxObject_obj::initVars(){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_674_initVars)
HXLINE( 675)		this->flixelType = 1;
HXLINE( 676)		Float X = this->x;
HXDLIN( 676)		Float Y = this->y;
HXDLIN( 676)		 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y);
HXDLIN( 676)		point->_inPool = false;
HXDLIN( 676)		this->last = point;
HXLINE( 677)		 ::flixel::math::FlxPoint point1 = ::flixel::math::FlxPoint_obj::_pool->get()->set(1,1);
HXDLIN( 677)		point1->_inPool = false;
HXDLIN( 677)		this->scrollFactor = point1;
HXLINE( 678)		this->pixelPerfectPosition = ::flixel::FlxObject_obj::defaultPixelPerfectPosition;
HXLINE( 680)		{
HXLINE( 680)			 ::flixel::math::FlxPoint point2 = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 680)			point2->_inPool = false;
HXDLIN( 680)			this->velocity = point2;
HXDLIN( 680)			 ::flixel::math::FlxPoint point3 = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 680)			point3->_inPool = false;
HXDLIN( 680)			this->acceleration = point3;
HXDLIN( 680)			 ::flixel::math::FlxPoint point4 = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 680)			point4->_inPool = false;
HXDLIN( 680)			this->drag = point4;
HXDLIN( 680)			 ::flixel::math::FlxPoint point5 = ::flixel::math::FlxPoint_obj::_pool->get()->set(10000,10000);
HXDLIN( 680)			point5->_inPool = false;
HXDLIN( 680)			this->maxVelocity = point5;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxObject_obj,initVars,(void))

void FlxObject_obj::initMotionVars(){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_688_initMotionVars)
HXLINE( 689)		 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 689)		point->_inPool = false;
HXDLIN( 689)		this->velocity = point;
HXLINE( 690)		 ::flixel::math::FlxPoint point1 = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 690)		point1->_inPool = false;
HXDLIN( 690)		this->acceleration = point1;
HXLINE( 691)		 ::flixel::math::FlxPoint point2 = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 691)		point2->_inPool = false;
HXDLIN( 691)		this->drag = point2;
HXLINE( 692)		 ::flixel::math::FlxPoint point3 = ::flixel::math::FlxPoint_obj::_pool->get()->set(10000,10000);
HXDLIN( 692)		point3->_inPool = false;
HXDLIN( 692)		this->maxVelocity = point3;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxObject_obj,initMotionVars,(void))

void FlxObject_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_706_destroy)
HXLINE( 707)		this->super::destroy();
HXLINE( 709)		this->velocity = ( ( ::flixel::math::FlxPoint)(::flixel::util::FlxDestroyUtil_obj::put(this->velocity)) );
HXLINE( 710)		this->acceleration = ( ( ::flixel::math::FlxPoint)(::flixel::util::FlxDestroyUtil_obj::put(this->acceleration)) );
HXLINE( 711)		this->drag = ( ( ::flixel::math::FlxPoint)(::flixel::util::FlxDestroyUtil_obj::put(this->drag)) );
HXLINE( 712)		this->maxVelocity = ( ( ::flixel::math::FlxPoint)(::flixel::util::FlxDestroyUtil_obj::put(this->maxVelocity)) );
HXLINE( 713)		this->scrollFactor = ( ( ::flixel::math::FlxPoint)(::flixel::util::FlxDestroyUtil_obj::put(this->scrollFactor)) );
HXLINE( 714)		this->last = ( ( ::flixel::math::FlxPoint)(::flixel::util::FlxDestroyUtil_obj::put(this->last)) );
HXLINE( 715)		this->_point = ( ( ::flixel::math::FlxPoint)(::flixel::util::FlxDestroyUtil_obj::put(this->_point)) );
HXLINE( 716)		this->_rect = ( ( ::flixel::math::FlxRect)(::flixel::util::FlxDestroyUtil_obj::put(this->_rect)) );
            	}


void FlxObject_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_724_update)
HXLINE( 730)		this->last->set(this->x,this->y);
HXLINE( 732)		bool _hx_tmp;
HXDLIN( 732)		if (::hx::IsNotNull( this->path )) {
HXLINE( 732)			_hx_tmp = this->path->active;
            		}
            		else {
HXLINE( 732)			_hx_tmp = false;
            		}
HXDLIN( 732)		if (_hx_tmp) {
HXLINE( 733)			this->path->update(elapsed);
            		}
HXLINE( 735)		if (this->moves) {
HXLINE( 736)			this->updateMotion(elapsed);
            		}
HXLINE( 738)		this->wasTouching = this->touching;
HXLINE( 739)		this->touching = 0;
            	}


void FlxObject_obj::updateMotion(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_749_updateMotion)
HXLINE( 750)		Float velocityDelta = ::flixel::math::FlxVelocity_obj::computeVelocity(this->angularVelocity,this->angularAcceleration,this->angularDrag,this->maxAngular,elapsed);
HXDLIN( 750)		Float velocityDelta1 = (((Float)0.5) * (velocityDelta - this->angularVelocity));
HXLINE( 751)		 ::flixel::FlxObject _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 751)		_hx_tmp->angularVelocity = (_hx_tmp->angularVelocity + velocityDelta1);
HXLINE( 752)		this->set_angle((this->angle + (this->angularVelocity * elapsed)));
HXLINE( 753)		 ::flixel::FlxObject _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 753)		_hx_tmp1->angularVelocity = (_hx_tmp1->angularVelocity + velocityDelta1);
HXLINE( 755)		Float velocityDelta2 = ::flixel::math::FlxVelocity_obj::computeVelocity(this->velocity->x,this->acceleration->x,this->drag->x,this->maxVelocity->x,elapsed);
HXDLIN( 755)		velocityDelta1 = (((Float)0.5) * (velocityDelta2 - this->velocity->x));
HXLINE( 756)		 ::flixel::math::FlxPoint fh = this->velocity;
HXDLIN( 756)		fh->set_x((fh->x + velocityDelta1));
HXLINE( 757)		Float delta = (this->velocity->x * elapsed);
HXLINE( 758)		 ::flixel::math::FlxPoint fh1 = this->velocity;
HXDLIN( 758)		fh1->set_x((fh1->x + velocityDelta1));
HXLINE( 759)		this->set_x((this->x + delta));
HXLINE( 761)		Float velocityDelta3 = ::flixel::math::FlxVelocity_obj::computeVelocity(this->velocity->y,this->acceleration->y,this->drag->y,this->maxVelocity->y,elapsed);
HXDLIN( 761)		velocityDelta1 = (((Float)0.5) * (velocityDelta3 - this->velocity->y));
HXLINE( 762)		 ::flixel::math::FlxPoint fh2 = this->velocity;
HXDLIN( 762)		fh2->set_y((fh2->y + velocityDelta1));
HXLINE( 763)		delta = (this->velocity->y * elapsed);
HXLINE( 764)		 ::flixel::math::FlxPoint fh3 = this->velocity;
HXDLIN( 764)		fh3->set_y((fh3->y + velocityDelta1));
HXLINE( 765)		this->set_y((this->y + delta));
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,updateMotion,(void))

void FlxObject_obj::draw(){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_772_draw)
            	}


bool FlxObject_obj::overlaps( ::flixel::FlxBasic ObjectOrGroup,::hx::Null< bool >  __o_InScreenSpace, ::flixel::FlxCamera Camera){
            		bool InScreenSpace = __o_InScreenSpace.Default(false);
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_794_overlaps)
HXLINE( 795)		 ::flixel::group::FlxTypedGroup group = ::flixel::group::FlxTypedGroup_obj::resolveGroup(ObjectOrGroup);
HXLINE( 796)		if (::hx::IsNotNull( group )) {
HXLINE( 798)			return ::flixel::group::FlxTypedGroup_obj::overlaps(this->overlapsCallback_dyn(),group,( (Float)(0) ),( (Float)(0) ),InScreenSpace,Camera);
            		}
HXLINE( 801)		if ((ObjectOrGroup->flixelType == 3)) {
HXLINE( 805)			 ::flixel::tile::FlxBaseTilemap tilemap = ( ( ::flixel::tile::FlxBaseTilemap)(ObjectOrGroup) );
HXLINE( 806)			return tilemap->overlaps(::hx::ObjectPtr<OBJ_>(this),InScreenSpace,Camera);
            		}
HXLINE( 809)		 ::flixel::FlxObject object = ( ( ::flixel::FlxObject)(ObjectOrGroup) );
HXLINE( 810)		if (!(InScreenSpace)) {
HXLINE( 812)			bool _hx_tmp;
HXDLIN( 812)			bool _hx_tmp1;
HXDLIN( 812)			Float object1 = object->x;
HXDLIN( 812)			Float _hx_tmp2 = (object1 + object->get_width());
HXDLIN( 812)			if ((_hx_tmp2 > this->x)) {
HXLINE( 812)				Float object1 = object->x;
HXDLIN( 812)				Float _hx_tmp = this->x;
HXDLIN( 812)				_hx_tmp1 = (object1 < (_hx_tmp + this->get_width()));
            			}
            			else {
HXLINE( 812)				_hx_tmp1 = false;
            			}
HXDLIN( 812)			if (_hx_tmp1) {
HXLINE( 812)				Float object1 = object->y;
HXDLIN( 812)				Float _hx_tmp1 = (object1 + object->get_height());
HXDLIN( 812)				_hx_tmp = (_hx_tmp1 > this->y);
            			}
            			else {
HXLINE( 812)				_hx_tmp = false;
            			}
HXDLIN( 812)			if (_hx_tmp) {
HXLINE( 812)				Float object1 = object->y;
HXDLIN( 812)				Float _hx_tmp = this->y;
HXDLIN( 812)				return (object1 < (_hx_tmp + this->get_height()));
            			}
            			else {
HXLINE( 812)				return false;
            			}
            		}
HXLINE( 815)		if (::hx::IsNull( Camera )) {
HXLINE( 817)			Camera = ::flixel::FlxG_obj::camera;
            		}
HXLINE( 819)		 ::flixel::math::FlxPoint objectScreenPos = object->getScreenPosition(null(),Camera);
HXLINE( 820)		this->getScreenPosition(this->_point,Camera);
HXLINE( 821)		bool _hx_tmp;
HXDLIN( 821)		bool _hx_tmp1;
HXDLIN( 821)		Float objectScreenPos1 = objectScreenPos->x;
HXDLIN( 821)		Float _hx_tmp2 = (objectScreenPos1 + object->get_width());
HXDLIN( 821)		if ((_hx_tmp2 > this->_point->x)) {
HXLINE( 822)			Float objectScreenPos1 = objectScreenPos->x;
HXDLIN( 822)			Float _hx_tmp = this->_point->x;
HXLINE( 821)			_hx_tmp1 = (objectScreenPos1 < (_hx_tmp + this->get_width()));
            		}
            		else {
HXLINE( 821)			_hx_tmp1 = false;
            		}
HXDLIN( 821)		if (_hx_tmp1) {
HXLINE( 823)			Float objectScreenPos1 = objectScreenPos->y;
HXDLIN( 823)			Float _hx_tmp1 = (objectScreenPos1 + object->get_height());
HXLINE( 821)			_hx_tmp = (_hx_tmp1 > this->_point->y);
            		}
            		else {
HXLINE( 821)			_hx_tmp = false;
            		}
HXDLIN( 821)		if (_hx_tmp) {
HXLINE( 824)			Float objectScreenPos1 = objectScreenPos->y;
HXDLIN( 824)			Float _hx_tmp = this->_point->y;
HXDLIN( 824)			return (objectScreenPos1 < (_hx_tmp + this->get_height()));
            		}
            		else {
HXLINE( 821)			return false;
            		}
HXDLIN( 821)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxObject_obj,overlaps,return )

bool FlxObject_obj::overlapsCallback( ::flixel::FlxBasic ObjectOrGroup,Float X,Float Y,bool InScreenSpace, ::flixel::FlxCamera Camera){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_830_overlapsCallback)
HXDLIN( 830)		return this->overlaps(ObjectOrGroup,InScreenSpace,Camera);
            	}


HX_DEFINE_DYNAMIC_FUNC5(FlxObject_obj,overlapsCallback,return )

bool FlxObject_obj::overlapsAt(Float X,Float Y, ::flixel::FlxBasic ObjectOrGroup,::hx::Null< bool >  __o_InScreenSpace, ::flixel::FlxCamera Camera){
            		bool InScreenSpace = __o_InScreenSpace.Default(false);
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_853_overlapsAt)
HXLINE( 854)		 ::flixel::group::FlxTypedGroup group = ::flixel::group::FlxTypedGroup_obj::resolveGroup(ObjectOrGroup);
HXLINE( 855)		if (::hx::IsNotNull( group )) {
HXLINE( 857)			return ::flixel::group::FlxTypedGroup_obj::overlaps(this->overlapsAtCallback_dyn(),group,X,Y,InScreenSpace,Camera);
            		}
HXLINE( 860)		if ((ObjectOrGroup->flixelType == 3)) {
HXLINE( 866)			 ::flixel::tile::FlxBaseTilemap tilemap = ( ( ::flixel::tile::FlxBaseTilemap)(ObjectOrGroup) );
HXLINE( 867)			return tilemap->overlapsAt((tilemap->x - (X - this->x)),(tilemap->y - (Y - this->y)),::hx::ObjectPtr<OBJ_>(this),InScreenSpace,Camera);
            		}
HXLINE( 870)		 ::flixel::FlxObject object = ( ( ::flixel::FlxObject)(ObjectOrGroup) );
HXLINE( 871)		if (!(InScreenSpace)) {
HXLINE( 873)			bool _hx_tmp;
HXDLIN( 873)			bool _hx_tmp1;
HXDLIN( 873)			Float object1 = object->x;
HXDLIN( 873)			if (((object1 + object->get_width()) > X)) {
HXLINE( 873)				Float object1 = object->x;
HXDLIN( 873)				_hx_tmp1 = (object1 < (X + this->get_width()));
            			}
            			else {
HXLINE( 873)				_hx_tmp1 = false;
            			}
HXDLIN( 873)			if (_hx_tmp1) {
HXLINE( 873)				Float object1 = object->y;
HXDLIN( 873)				_hx_tmp = ((object1 + object->get_height()) > Y);
            			}
            			else {
HXLINE( 873)				_hx_tmp = false;
            			}
HXDLIN( 873)			if (_hx_tmp) {
HXLINE( 873)				Float object1 = object->y;
HXDLIN( 873)				return (object1 < (Y + this->get_height()));
            			}
            			else {
HXLINE( 873)				return false;
            			}
            		}
HXLINE( 876)		if (::hx::IsNull( Camera )) {
HXLINE( 878)			Camera = ::flixel::FlxG_obj::camera;
            		}
HXLINE( 880)		 ::flixel::math::FlxPoint objectScreenPos = object->getScreenPosition(null(),Camera);
HXLINE( 881)		this->getScreenPosition(this->_point,Camera);
HXLINE( 882)		bool _hx_tmp;
HXDLIN( 882)		bool _hx_tmp1;
HXDLIN( 882)		Float objectScreenPos1 = objectScreenPos->x;
HXDLIN( 882)		Float _hx_tmp2 = (objectScreenPos1 + object->get_width());
HXDLIN( 882)		if ((_hx_tmp2 > this->_point->x)) {
HXLINE( 883)			Float objectScreenPos1 = objectScreenPos->x;
HXDLIN( 883)			Float _hx_tmp = this->_point->x;
HXLINE( 882)			_hx_tmp1 = (objectScreenPos1 < (_hx_tmp + this->get_width()));
            		}
            		else {
HXLINE( 882)			_hx_tmp1 = false;
            		}
HXDLIN( 882)		if (_hx_tmp1) {
HXLINE( 884)			Float objectScreenPos1 = objectScreenPos->y;
HXDLIN( 884)			Float _hx_tmp1 = (objectScreenPos1 + object->get_height());
HXLINE( 882)			_hx_tmp = (_hx_tmp1 > this->_point->y);
            		}
            		else {
HXLINE( 882)			_hx_tmp = false;
            		}
HXDLIN( 882)		if (_hx_tmp) {
HXLINE( 885)			Float objectScreenPos1 = objectScreenPos->y;
HXDLIN( 885)			Float _hx_tmp = this->_point->y;
HXDLIN( 885)			return (objectScreenPos1 < (_hx_tmp + this->get_height()));
            		}
            		else {
HXLINE( 882)			return false;
            		}
HXDLIN( 882)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC5(FlxObject_obj,overlapsAt,return )

bool FlxObject_obj::overlapsAtCallback( ::flixel::FlxBasic ObjectOrGroup,Float X,Float Y,bool InScreenSpace, ::flixel::FlxCamera Camera){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_891_overlapsAtCallback)
HXDLIN( 891)		return this->overlapsAt(X,Y,ObjectOrGroup,InScreenSpace,Camera);
            	}


HX_DEFINE_DYNAMIC_FUNC5(FlxObject_obj,overlapsAtCallback,return )

bool FlxObject_obj::overlapsPoint( ::flixel::math::FlxPoint point,::hx::Null< bool >  __o_InScreenSpace, ::flixel::FlxCamera Camera){
            		bool InScreenSpace = __o_InScreenSpace.Default(false);
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_904_overlapsPoint)
HXLINE( 905)		if (!(InScreenSpace)) {
HXLINE( 907)			bool _hx_tmp;
HXDLIN( 907)			bool _hx_tmp1;
HXDLIN( 907)			if ((point->x >= this->x)) {
HXLINE( 907)				Float point1 = point->x;
HXDLIN( 907)				Float _hx_tmp = this->x;
HXDLIN( 907)				_hx_tmp1 = (point1 < (_hx_tmp + this->get_width()));
            			}
            			else {
HXLINE( 907)				_hx_tmp1 = false;
            			}
HXDLIN( 907)			if (_hx_tmp1) {
HXLINE( 907)				_hx_tmp = (point->y >= this->y);
            			}
            			else {
HXLINE( 907)				_hx_tmp = false;
            			}
HXDLIN( 907)			if (_hx_tmp) {
HXLINE( 907)				Float point1 = point->y;
HXDLIN( 907)				Float _hx_tmp = this->y;
HXDLIN( 907)				return (point1 < (_hx_tmp + this->get_height()));
            			}
            			else {
HXLINE( 907)				return false;
            			}
            		}
HXLINE( 910)		if (::hx::IsNull( Camera )) {
HXLINE( 912)			Camera = ::flixel::FlxG_obj::camera;
            		}
HXLINE( 914)		Float xPos = (point->x - Camera->scroll->x);
HXLINE( 915)		Float yPos = (point->y - Camera->scroll->y);
HXLINE( 916)		this->getScreenPosition(this->_point,Camera);
HXLINE( 917)		if (point->_weak) {
HXLINE( 917)			point->put();
            		}
HXLINE( 918)		bool _hx_tmp;
HXDLIN( 918)		bool _hx_tmp1;
HXDLIN( 918)		if ((xPos >= this->_point->x)) {
HXLINE( 918)			Float _hx_tmp = this->_point->x;
HXDLIN( 918)			_hx_tmp1 = (xPos < (_hx_tmp + this->get_width()));
            		}
            		else {
HXLINE( 918)			_hx_tmp1 = false;
            		}
HXDLIN( 918)		if (_hx_tmp1) {
HXLINE( 918)			_hx_tmp = (yPos >= this->_point->y);
            		}
            		else {
HXLINE( 918)			_hx_tmp = false;
            		}
HXDLIN( 918)		if (_hx_tmp) {
HXLINE( 918)			Float _hx_tmp = this->_point->y;
HXDLIN( 918)			return (yPos < (_hx_tmp + this->get_height()));
            		}
            		else {
HXLINE( 918)			return false;
            		}
HXDLIN( 918)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxObject_obj,overlapsPoint,return )

bool FlxObject_obj::inWorldBounds(){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_929_inWorldBounds)
HXDLIN( 929)		bool _hx_tmp;
HXDLIN( 929)		bool _hx_tmp1;
HXDLIN( 929)		Float _hx_tmp2 = this->x;
HXDLIN( 929)		Float _hx_tmp3 = (_hx_tmp2 + this->get_width());
HXDLIN( 929)		if ((_hx_tmp3 > ::flixel::FlxG_obj::worldBounds->x)) {
HXDLIN( 929)			 ::flixel::math::FlxRect _this = ::flixel::FlxG_obj::worldBounds;
HXDLIN( 929)			_hx_tmp1 = (this->x < (_this->x + _this->width));
            		}
            		else {
HXDLIN( 929)			_hx_tmp1 = false;
            		}
HXDLIN( 929)		if (_hx_tmp1) {
HXDLIN( 929)			Float _hx_tmp1 = this->y;
HXDLIN( 929)			Float _hx_tmp2 = (_hx_tmp1 + this->get_height());
HXDLIN( 929)			_hx_tmp = (_hx_tmp2 > ::flixel::FlxG_obj::worldBounds->y);
            		}
            		else {
HXDLIN( 929)			_hx_tmp = false;
            		}
HXDLIN( 929)		if (_hx_tmp) {
HXDLIN( 929)			 ::flixel::math::FlxRect _this = ::flixel::FlxG_obj::worldBounds;
HXDLIN( 929)			return (this->y < (_this->y + _this->height));
            		}
            		else {
HXDLIN( 929)			return false;
            		}
HXDLIN( 929)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxObject_obj,inWorldBounds,return )

 ::flixel::math::FlxPoint FlxObject_obj::getScreenPosition( ::flixel::math::FlxPoint point, ::flixel::FlxCamera Camera){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_942_getScreenPosition)
HXLINE( 943)		if (::hx::IsNull( point )) {
HXLINE( 944)			 ::flixel::math::FlxPoint point1 = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 944)			point1->_inPool = false;
HXDLIN( 944)			point = point1;
            		}
HXLINE( 946)		if (::hx::IsNull( Camera )) {
HXLINE( 947)			Camera = ::flixel::FlxG_obj::camera;
            		}
HXLINE( 949)		point->set(this->x,this->y);
HXLINE( 950)		if (this->pixelPerfectPosition) {
HXLINE( 951)			point->set_x(( (Float)(::Math_obj::floor(point->x)) ));
HXDLIN( 951)			point->set_y(( (Float)(::Math_obj::floor(point->y)) ));
            		}
HXLINE( 953)		Float Y = (Camera->scroll->y * this->scrollFactor->y);
HXDLIN( 953)		point->set_x((point->x - (Camera->scroll->x * this->scrollFactor->x)));
HXDLIN( 953)		point->set_y((point->y - Y));
HXDLIN( 953)		return point;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,getScreenPosition,return )

 ::flixel::math::FlxPoint FlxObject_obj::getPosition( ::flixel::math::FlxPoint point){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_957_getPosition)
HXLINE( 958)		if (::hx::IsNull( point )) {
HXLINE( 959)			 ::flixel::math::FlxPoint point1 = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 959)			point1->_inPool = false;
HXDLIN( 959)			point = point1;
            		}
HXLINE( 960)		return point->set(this->x,this->y);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,getPosition,return )

 ::flixel::math::FlxPoint FlxObject_obj::getMidpoint( ::flixel::math::FlxPoint point){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_971_getMidpoint)
HXLINE( 972)		if (::hx::IsNull( point )) {
HXLINE( 973)			 ::flixel::math::FlxPoint point1 = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 973)			point1->_inPool = false;
HXDLIN( 973)			point = point1;
            		}
HXLINE( 974)		Float _hx_tmp = this->x;
HXDLIN( 974)		Float _hx_tmp1 = (_hx_tmp + (this->get_width() * ((Float)0.5)));
HXDLIN( 974)		Float _hx_tmp2 = this->y;
HXDLIN( 974)		return point->set(_hx_tmp1,(_hx_tmp2 + (this->get_height() * ((Float)0.5))));
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,getMidpoint,return )

 ::flixel::math::FlxRect FlxObject_obj::getHitbox( ::flixel::math::FlxRect rect){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_978_getHitbox)
HXLINE( 979)		if (::hx::IsNull( rect )) {
HXLINE( 980)			 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN( 980)			_this->x = ( (Float)(0) );
HXDLIN( 980)			_this->y = ( (Float)(0) );
HXDLIN( 980)			_this->width = ( (Float)(0) );
HXDLIN( 980)			_this->height = ( (Float)(0) );
HXDLIN( 980)			 ::flixel::math::FlxRect rect1 = _this;
HXDLIN( 980)			rect1->_inPool = false;
HXDLIN( 980)			rect = rect1;
            		}
HXLINE( 981)		Float X = this->x;
HXDLIN( 981)		Float Y = this->y;
HXDLIN( 981)		Float Width = this->get_width();
HXDLIN( 981)		Float Height = this->get_height();
HXDLIN( 981)		rect->x = X;
HXDLIN( 981)		rect->y = Y;
HXDLIN( 981)		rect->width = Width;
HXDLIN( 981)		rect->height = Height;
HXDLIN( 981)		return rect;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,getHitbox,return )

void FlxObject_obj::reset(Float X,Float Y){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_992_reset)
HXLINE( 993)		this->touching = 0;
HXLINE( 994)		this->wasTouching = 0;
HXLINE( 995)		this->setPosition(X,Y);
HXLINE( 996)		this->last->set(this->x,this->y);
HXLINE( 997)		this->velocity->set(null(),null());
HXLINE( 998)		this->revive();
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,reset,(void))

bool FlxObject_obj::isOnScreen( ::flixel::FlxCamera Camera){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1009_isOnScreen)
HXLINE(1010)		if (::hx::IsNull( Camera )) {
HXLINE(1011)			Camera = ::flixel::FlxG_obj::camera;
            		}
HXLINE(1013)		this->getScreenPosition(this->_point,Camera);
HXLINE(1014)		 ::flixel::math::FlxPoint point = this->_point;
HXDLIN(1014)		Float width = this->get_width();
HXDLIN(1014)		Float height = this->get_height();
HXDLIN(1014)		bool _hx_tmp;
HXDLIN(1014)		bool _hx_tmp1;
HXDLIN(1014)		if (((point->x + width) > Camera->viewOffsetX)) {
HXLINE(1014)			_hx_tmp1 = (point->x < Camera->viewOffsetWidth);
            		}
            		else {
HXLINE(1014)			_hx_tmp1 = false;
            		}
HXDLIN(1014)		if (_hx_tmp1) {
HXLINE(1014)			_hx_tmp = ((point->y + height) > Camera->viewOffsetY);
            		}
            		else {
HXLINE(1014)			_hx_tmp = false;
            		}
HXDLIN(1014)		if (_hx_tmp) {
HXLINE(1014)			return (point->y < Camera->viewOffsetHeight);
            		}
            		else {
HXLINE(1014)			return false;
            		}
HXDLIN(1014)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,isOnScreen,return )

bool FlxObject_obj::isPixelPerfectRender( ::flixel::FlxCamera Camera){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1021_isPixelPerfectRender)
HXLINE(1022)		if (::hx::IsNull( Camera )) {
HXLINE(1023)			Camera = ::flixel::FlxG_obj::camera;
            		}
HXLINE(1024)		if (::hx::IsNull( this->pixelPerfectRender )) {
HXLINE(1024)			return Camera->pixelPerfectRender;
            		}
            		else {
HXLINE(1024)			return ( (bool)(this->pixelPerfectRender) );
            		}
HXDLIN(1024)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,isPixelPerfectRender,return )

bool FlxObject_obj::isTouching(int Direction){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1036_isTouching)
HXDLIN(1036)		return ((this->touching & Direction) > 0);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,isTouching,return )

bool FlxObject_obj::justTouched(int Direction){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1048_justTouched)
HXDLIN(1048)		if (((this->touching & Direction) > 0)) {
HXDLIN(1048)			return ((this->wasTouching & Direction) <= 0);
            		}
            		else {
HXDLIN(1048)			return false;
            		}
HXDLIN(1048)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,justTouched,return )

void FlxObject_obj::hurt(Float Damage){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1058_hurt)
HXLINE(1059)		this->health = (this->health - Damage);
HXLINE(1060)		if ((this->health <= 0)) {
HXLINE(1061)			this->kill();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,hurt,(void))

 ::flixel::FlxObject FlxObject_obj::screenCenter( ::flixel::util::FlxAxes axes){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1071_screenCenter)
HXLINE(1072)		if (::hx::IsNull( axes )) {
HXLINE(1073)			axes = ::flixel::util::FlxAxes_obj::XY_dyn();
            		}
HXLINE(1075)		if (::hx::IsPointerNotEq( axes,::flixel::util::FlxAxes_obj::Y_dyn() )) {
HXLINE(1076)			Float _hx_tmp = (( (Float)(::flixel::FlxG_obj::width) ) / ( (Float)(2) ));
HXDLIN(1076)			this->set_x((_hx_tmp - (this->get_width() / ( (Float)(2) ))));
            		}
HXLINE(1077)		if (::hx::IsPointerNotEq( axes,::flixel::util::FlxAxes_obj::X_dyn() )) {
HXLINE(1078)			Float _hx_tmp = (( (Float)(::flixel::FlxG_obj::height) ) / ( (Float)(2) ));
HXDLIN(1078)			this->set_y((_hx_tmp - (this->get_height() / ( (Float)(2) ))));
            		}
HXLINE(1080)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,screenCenter,return )

void FlxObject_obj::setPosition(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y){
            		Float X = __o_X.Default(0);
            		Float Y = __o_Y.Default(0);
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1091_setPosition)
HXLINE(1092)		this->set_x(X);
HXLINE(1093)		this->set_y(Y);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,setPosition,(void))

void FlxObject_obj::setSize(Float Width,Float Height){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1103_setSize)
HXLINE(1104)		this->set_width(Width);
HXLINE(1105)		this->set_height(Height);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,setSize,(void))

 ::flixel::math::FlxRect FlxObject_obj::getBoundingBox( ::flixel::FlxCamera camera){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1183_getBoundingBox)
HXLINE(1184)		this->getScreenPosition(this->_point,camera);
HXLINE(1186)		{
HXLINE(1186)			 ::flixel::math::FlxRect _this = this->_rect;
HXDLIN(1186)			Float X = this->_point->x;
HXDLIN(1186)			Float Y = this->_point->y;
HXDLIN(1186)			Float Width = this->get_width();
HXDLIN(1186)			Float Height = this->get_height();
HXDLIN(1186)			_this->x = X;
HXDLIN(1186)			_this->y = Y;
HXDLIN(1186)			_this->width = Width;
HXDLIN(1186)			_this->height = Height;
            		}
HXLINE(1187)		this->_rect = camera->transformRect(this->_rect);
HXLINE(1189)		if (this->isPixelPerfectRender(camera)) {
HXLINE(1191)			 ::flixel::math::FlxRect _this = this->_rect;
HXDLIN(1191)			_this->x = ( (Float)(::Math_obj::floor(_this->x)) );
HXDLIN(1191)			_this->y = ( (Float)(::Math_obj::floor(_this->y)) );
HXDLIN(1191)			_this->width = ( (Float)(::Math_obj::floor(_this->width)) );
HXDLIN(1191)			_this->height = ( (Float)(::Math_obj::floor(_this->height)) );
            		}
HXLINE(1194)		return this->_rect;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,getBoundingBox,return )

::String FlxObject_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1202_toString)
HXLINE(1203)		 ::Dynamic value = this->x;
HXDLIN(1203)		 ::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN(1203)		_this->label = HX_("x",78,00,00,00);
HXDLIN(1203)		_this->value = value;
HXLINE(1204)		 ::Dynamic value1 = this->y;
HXDLIN(1204)		 ::flixel::util::LabelValuePair _this1 = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN(1204)		_this1->label = HX_("y",79,00,00,00);
HXDLIN(1204)		_this1->value = value1;
HXLINE(1205)		 ::Dynamic value2 = this->get_width();
HXDLIN(1205)		 ::flixel::util::LabelValuePair _this2 = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN(1205)		_this2->label = HX_("w",77,00,00,00);
HXDLIN(1205)		_this2->value = value2;
HXLINE(1206)		 ::Dynamic value3 = this->get_height();
HXDLIN(1206)		 ::flixel::util::LabelValuePair _this3 = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN(1206)		_this3->label = HX_("h",68,00,00,00);
HXDLIN(1206)		_this3->value = value3;
HXLINE(1207)		 ::Dynamic value4 = this->visible;
HXDLIN(1207)		 ::flixel::util::LabelValuePair _this4 = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN(1207)		_this4->label = HX_("visible",72,78,24,a3);
HXDLIN(1207)		_this4->value = value4;
HXLINE(1208)		 ::Dynamic value5 = this->velocity;
HXDLIN(1208)		 ::flixel::util::LabelValuePair _this5 = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN(1208)		_this5->label = HX_("velocity",1d,02,fe,1e);
HXDLIN(1208)		_this5->value = value5;
HXLINE(1202)		return ::flixel::util::FlxStringUtil_obj::getDebugString(::Array_obj< ::Dynamic>::__new(6)->init(0,_this)->init(1,_this1)->init(2,_this2)->init(3,_this3)->init(4,_this4)->init(5,_this5));
            	}


Float FlxObject_obj::set_x(Float NewX){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1215_set_x)
HXDLIN(1215)		return (this->x = NewX);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_x,return )

Float FlxObject_obj::set_y(Float NewY){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1221_set_y)
HXDLIN(1221)		return (this->y = NewY);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_y,return )

Float FlxObject_obj::set_width(Float Width){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1235_set_width)
HXDLIN(1235)		return (this->width = Width);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_width,return )

Float FlxObject_obj::set_height(Float Height){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1249_set_height)
HXDLIN(1249)		return (this->height = Height);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_height,return )

Float FlxObject_obj::get_width(){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1255_get_width)
HXDLIN(1255)		return this->width;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxObject_obj,get_width,return )

Float FlxObject_obj::get_height(){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1261_get_height)
HXDLIN(1261)		return this->height;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxObject_obj,get_height,return )

bool FlxObject_obj::get_solid(){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1267_get_solid)
HXDLIN(1267)		return ((this->allowCollisions & 4369) > 0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxObject_obj,get_solid,return )

bool FlxObject_obj::set_solid(bool Solid){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1272_set_solid)
HXLINE(1273)		int _hx_tmp;
HXDLIN(1273)		if (Solid) {
HXLINE(1273)			_hx_tmp = 4369;
            		}
            		else {
HXLINE(1273)			_hx_tmp = 0;
            		}
HXDLIN(1273)		this->set_allowCollisions(_hx_tmp);
HXLINE(1274)		return Solid;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_solid,return )

Float FlxObject_obj::set_angle(Float Value){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1280_set_angle)
HXDLIN(1280)		return (this->angle = Value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_angle,return )

bool FlxObject_obj::set_moves(bool Value){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1286_set_moves)
HXDLIN(1286)		return (this->moves = Value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_moves,return )

bool FlxObject_obj::set_immovable(bool Value){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1292_set_immovable)
HXDLIN(1292)		return (this->immovable = Value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_immovable,return )

bool FlxObject_obj::set_pixelPerfectRender(bool Value){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1298_set_pixelPerfectRender)
HXDLIN(1298)		return ( (bool)((this->pixelPerfectRender = Value)) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_pixelPerfectRender,return )

int FlxObject_obj::set_allowCollisions(int Value){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1304_set_allowCollisions)
HXDLIN(1304)		return (this->allowCollisions = Value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_allowCollisions,return )

 ::flixel::util::FlxPath FlxObject_obj::set_path( ::flixel::util::FlxPath path){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1329_set_path)
HXLINE(1330)		if (::hx::IsInstanceEq( this->path,path )) {
HXLINE(1331)			return path;
            		}
HXLINE(1333)		if (::hx::IsNotNull( this->path )) {
HXLINE(1334)			this->path->object = null();
            		}
HXLINE(1336)		if (::hx::IsNotNull( path )) {
HXLINE(1337)			path->object = ::hx::ObjectPtr<OBJ_>(this);
            		}
HXLINE(1338)		return (this->path = path);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_path,return )

bool FlxObject_obj::defaultPixelPerfectPosition;

Float FlxObject_obj::SEPARATE_BIAS;

int FlxObject_obj::LEFT;

int FlxObject_obj::RIGHT;

int FlxObject_obj::UP;

int FlxObject_obj::DOWN;

int FlxObject_obj::NONE;

int FlxObject_obj::CEILING;

int FlxObject_obj::FLOOR;

int FlxObject_obj::WALL;

int FlxObject_obj::ANY;

 ::flixel::math::FlxRect FlxObject_obj::_firstSeparateFlxRect;

 ::flixel::math::FlxRect FlxObject_obj::_secondSeparateFlxRect;

bool FlxObject_obj::separate( ::flixel::FlxObject Object1, ::flixel::FlxObject Object2){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_103_separate)
HXLINE( 104)		bool separatedX = ::flixel::FlxObject_obj::separateX(Object1,Object2);
HXLINE( 105)		bool separatedY = ::flixel::FlxObject_obj::separateY(Object1,Object2);
HXLINE( 106)		if (!(separatedX)) {
HXLINE( 106)			return separatedY;
            		}
            		else {
HXLINE( 106)			return true;
            		}
HXDLIN( 106)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,separate,return )

bool FlxObject_obj::updateTouchingFlags( ::flixel::FlxObject Object1, ::flixel::FlxObject Object2){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_118_updateTouchingFlags)
HXLINE( 119)		bool touchingX = ::flixel::FlxObject_obj::updateTouchingFlagsX(Object1,Object2);
HXLINE( 120)		bool touchingY = ::flixel::FlxObject_obj::updateTouchingFlagsY(Object1,Object2);
HXLINE( 121)		if (!(touchingX)) {
HXLINE( 121)			return touchingY;
            		}
            		else {
HXLINE( 121)			return true;
            		}
HXDLIN( 121)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,updateTouchingFlags,return )

Float FlxObject_obj::computeOverlapX( ::flixel::FlxObject Object1, ::flixel::FlxObject Object2,::hx::Null< bool >  __o_checkMaxOverlap){
            		bool checkMaxOverlap = __o_checkMaxOverlap.Default(true);
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_131_computeOverlapX)
HXLINE( 132)		Float overlap = ( (Float)(0) );
HXLINE( 134)		Float obj1delta = (Object1->x - Object1->last->x);
HXLINE( 135)		Float obj2delta = (Object2->x - Object2->last->x);
HXLINE( 137)		if ((obj1delta != obj2delta)) {
HXLINE( 140)			Float obj1deltaAbs;
HXDLIN( 140)			if ((obj1delta > 0)) {
HXLINE( 140)				obj1deltaAbs = obj1delta;
            			}
            			else {
HXLINE( 140)				obj1deltaAbs = -(obj1delta);
            			}
HXLINE( 141)			Float obj2deltaAbs;
HXDLIN( 141)			if ((obj2delta > 0)) {
HXLINE( 141)				obj2deltaAbs = obj2delta;
            			}
            			else {
HXLINE( 141)				obj2deltaAbs = -(obj2delta);
            			}
HXLINE( 143)			 ::flixel::math::FlxRect _this = ::flixel::FlxObject_obj::_firstSeparateFlxRect;
HXDLIN( 143)			Float X;
HXDLIN( 143)			if ((obj1delta > 0)) {
HXLINE( 143)				X = obj1delta;
            			}
            			else {
HXLINE( 143)				X = ( (Float)(0) );
            			}
HXDLIN( 143)			Float X1 = (Object1->x - X);
HXDLIN( 143)			Float Y = Object1->last->y;
HXDLIN( 143)			Float Width = (Object1->get_width() + obj1deltaAbs);
HXDLIN( 143)			Float Height = Object1->get_height();
HXDLIN( 143)			_this->x = X1;
HXDLIN( 143)			_this->y = Y;
HXDLIN( 143)			_this->width = Width;
HXDLIN( 143)			_this->height = Height;
HXDLIN( 143)			 ::flixel::math::FlxRect obj1rect = _this;
HXLINE( 145)			 ::flixel::math::FlxRect _this1 = ::flixel::FlxObject_obj::_secondSeparateFlxRect;
HXDLIN( 145)			Float X2;
HXDLIN( 145)			if ((obj2delta > 0)) {
HXLINE( 145)				X2 = obj2delta;
            			}
            			else {
HXLINE( 145)				X2 = ( (Float)(0) );
            			}
HXDLIN( 145)			Float X3 = (Object2->x - X2);
HXDLIN( 145)			Float Y1 = Object2->last->y;
HXDLIN( 145)			Float Width1 = (Object2->get_width() + obj2deltaAbs);
HXDLIN( 145)			Float Height1 = Object2->get_height();
HXDLIN( 145)			_this1->x = X3;
HXDLIN( 145)			_this1->y = Y1;
HXDLIN( 145)			_this1->width = Width1;
HXDLIN( 145)			_this1->height = Height1;
HXDLIN( 145)			 ::flixel::math::FlxRect obj2rect = _this1;
HXLINE( 148)			bool _hx_tmp;
HXDLIN( 148)			bool _hx_tmp1;
HXDLIN( 148)			bool _hx_tmp2;
HXDLIN( 148)			if (((obj1rect->x + obj1rect->width) > obj2rect->x)) {
HXLINE( 148)				_hx_tmp2 = (obj1rect->x < (obj2rect->x + obj2rect->width));
            			}
            			else {
HXLINE( 148)				_hx_tmp2 = false;
            			}
HXDLIN( 148)			if (_hx_tmp2) {
HXLINE( 148)				_hx_tmp1 = ((obj1rect->y + obj1rect->height) > obj2rect->y);
            			}
            			else {
HXLINE( 148)				_hx_tmp1 = false;
            			}
HXDLIN( 148)			if (_hx_tmp1) {
HXLINE( 148)				_hx_tmp = (obj1rect->y < (obj2rect->y + obj2rect->height));
            			}
            			else {
HXLINE( 148)				_hx_tmp = false;
            			}
HXDLIN( 148)			if (_hx_tmp) {
HXLINE( 153)				Float maxOverlap;
HXDLIN( 153)				if (checkMaxOverlap) {
HXLINE( 153)					maxOverlap = ((obj1deltaAbs + obj2deltaAbs) + ::flixel::FlxObject_obj::SEPARATE_BIAS);
            				}
            				else {
HXLINE( 153)					maxOverlap = ( (Float)(0) );
            				}
HXLINE( 156)				if ((obj1delta > obj2delta)) {
HXLINE( 158)					Float Object11 = Object1->x;
HXDLIN( 158)					Float overlap1 = (Object11 + Object1->get_width());
HXDLIN( 158)					overlap = (overlap1 - Object2->x);
HXLINE( 159)					bool _hx_tmp;
HXDLIN( 159)					bool _hx_tmp1;
HXDLIN( 159)					bool _hx_tmp2;
HXDLIN( 159)					if (checkMaxOverlap) {
HXLINE( 159)						_hx_tmp2 = (overlap > maxOverlap);
            					}
            					else {
HXLINE( 159)						_hx_tmp2 = false;
            					}
HXDLIN( 159)					if (!(_hx_tmp2)) {
HXLINE( 159)						_hx_tmp1 = ((Object1->allowCollisions & 16) == 0);
            					}
            					else {
HXLINE( 159)						_hx_tmp1 = true;
            					}
HXDLIN( 159)					if (!(_hx_tmp1)) {
HXLINE( 159)						_hx_tmp = ((Object2->allowCollisions & 1) == 0);
            					}
            					else {
HXLINE( 159)						_hx_tmp = true;
            					}
HXDLIN( 159)					if (_hx_tmp) {
HXLINE( 163)						overlap = ( (Float)(0) );
            					}
            					else {
HXLINE( 167)						 ::flixel::FlxObject Object11 = Object1;
HXDLIN( 167)						Object11->touching = (Object11->touching | 16);
HXLINE( 168)						 ::flixel::FlxObject Object21 = Object2;
HXDLIN( 168)						Object21->touching = (Object21->touching | 1);
            					}
            				}
            				else {
HXLINE( 171)					if ((obj1delta < obj2delta)) {
HXLINE( 173)						Float Object11 = Object1->x;
HXDLIN( 173)						Float overlap1 = (Object11 - Object2->get_width());
HXDLIN( 173)						overlap = (overlap1 - Object2->x);
HXLINE( 174)						bool _hx_tmp;
HXDLIN( 174)						bool _hx_tmp1;
HXDLIN( 174)						bool _hx_tmp2;
HXDLIN( 174)						if (checkMaxOverlap) {
HXLINE( 174)							_hx_tmp2 = (-(overlap) > maxOverlap);
            						}
            						else {
HXLINE( 174)							_hx_tmp2 = false;
            						}
HXDLIN( 174)						if (!(_hx_tmp2)) {
HXLINE( 174)							_hx_tmp1 = ((Object1->allowCollisions & 1) == 0);
            						}
            						else {
HXLINE( 174)							_hx_tmp1 = true;
            						}
HXDLIN( 174)						if (!(_hx_tmp1)) {
HXLINE( 174)							_hx_tmp = ((Object2->allowCollisions & 16) == 0);
            						}
            						else {
HXLINE( 174)							_hx_tmp = true;
            						}
HXDLIN( 174)						if (_hx_tmp) {
HXLINE( 178)							overlap = ( (Float)(0) );
            						}
            						else {
HXLINE( 182)							 ::flixel::FlxObject Object11 = Object1;
HXDLIN( 182)							Object11->touching = (Object11->touching | 1);
HXLINE( 183)							 ::flixel::FlxObject Object21 = Object2;
HXDLIN( 183)							Object21->touching = (Object21->touching | 16);
            						}
            					}
            				}
            			}
            		}
HXLINE( 188)		return overlap;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxObject_obj,computeOverlapX,return )

bool FlxObject_obj::separateX( ::flixel::FlxObject Object1, ::flixel::FlxObject Object2){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_199_separateX)
HXLINE( 201)		bool obj1immovable = Object1->immovable;
HXLINE( 202)		bool obj2immovable = Object2->immovable;
HXLINE( 203)		bool _hx_tmp;
HXDLIN( 203)		if (obj1immovable) {
HXLINE( 203)			_hx_tmp = obj2immovable;
            		}
            		else {
HXLINE( 203)			_hx_tmp = false;
            		}
HXDLIN( 203)		if (_hx_tmp) {
HXLINE( 205)			return false;
            		}
HXLINE( 209)		if ((Object1->flixelType == 3)) {
HXLINE( 211)			 ::flixel::tile::FlxBaseTilemap tilemap = ( ( ::flixel::tile::FlxBaseTilemap)(Object1) );
HXLINE( 212)			return tilemap->overlapsWithCallback(Object2,::flixel::FlxObject_obj::separateX_dyn(),null(),null());
            		}
HXLINE( 214)		if ((Object2->flixelType == 3)) {
HXLINE( 216)			 ::flixel::tile::FlxBaseTilemap tilemap = ( ( ::flixel::tile::FlxBaseTilemap)(Object2) );
HXLINE( 217)			return tilemap->overlapsWithCallback(Object1,::flixel::FlxObject_obj::separateX_dyn(),true,null());
            		}
HXLINE( 220)		Float overlap = ::flixel::FlxObject_obj::computeOverlapX(Object1,Object2,null());
HXLINE( 222)		if ((overlap != 0)) {
HXLINE( 224)			Float obj1v = Object1->velocity->x;
HXLINE( 225)			Float obj2v = Object2->velocity->x;
HXLINE( 227)			bool _hx_tmp;
HXDLIN( 227)			if (!(obj1immovable)) {
HXLINE( 227)				_hx_tmp = !(obj2immovable);
            			}
            			else {
HXLINE( 227)				_hx_tmp = false;
            			}
HXDLIN( 227)			if (_hx_tmp) {
HXLINE( 229)				overlap = (overlap * ((Float)0.5));
HXLINE( 230)				Object1->set_x((Object1->x - overlap));
HXLINE( 231)				Object2->set_x((Object2->x + overlap));
HXLINE( 233)				int obj1velocity;
HXDLIN( 233)				if ((obj2v > 0)) {
HXLINE( 233)					obj1velocity = 1;
            				}
            				else {
HXLINE( 233)					obj1velocity = -1;
            				}
HXDLIN( 233)				Float obj1velocity1 = (::Math_obj::sqrt((((obj2v * obj2v) * Object2->mass) / Object1->mass)) * ( (Float)(obj1velocity) ));
HXLINE( 234)				int obj2velocity;
HXDLIN( 234)				if ((obj1v > 0)) {
HXLINE( 234)					obj2velocity = 1;
            				}
            				else {
HXLINE( 234)					obj2velocity = -1;
            				}
HXDLIN( 234)				Float obj2velocity1 = (::Math_obj::sqrt((((obj1v * obj1v) * Object1->mass) / Object2->mass)) * ( (Float)(obj2velocity) ));
HXLINE( 235)				Float average = ((obj1velocity1 + obj2velocity1) * ((Float)0.5));
HXLINE( 236)				obj1velocity1 = (obj1velocity1 - average);
HXLINE( 237)				obj2velocity1 = (obj2velocity1 - average);
HXLINE( 238)				Object1->velocity->set_x((average + (obj1velocity1 * Object1->elasticity)));
HXLINE( 239)				Object2->velocity->set_x((average + (obj2velocity1 * Object2->elasticity)));
            			}
            			else {
HXLINE( 241)				if (!(obj1immovable)) {
HXLINE( 243)					Object1->set_x((Object1->x - overlap));
HXLINE( 244)					Object1->velocity->set_x((obj2v - (obj1v * Object1->elasticity)));
            				}
            				else {
HXLINE( 246)					if (!(obj2immovable)) {
HXLINE( 248)						Object2->set_x((Object2->x + overlap));
HXLINE( 249)						Object2->velocity->set_x((obj1v - (obj2v * Object2->elasticity)));
            					}
            				}
            			}
HXLINE( 251)			return true;
            		}
HXLINE( 254)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,separateX,return )

bool FlxObject_obj::updateTouchingFlagsX( ::flixel::FlxObject Object1, ::flixel::FlxObject Object2){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_265_updateTouchingFlagsX)
HXLINE( 267)		if ((Object1->flixelType == 3)) {
HXLINE( 269)			 ::flixel::tile::FlxBaseTilemap tilemap = ( ( ::flixel::tile::FlxBaseTilemap)(Object1) );
HXLINE( 270)			return tilemap->overlapsWithCallback(Object2,::flixel::FlxObject_obj::updateTouchingFlagsX_dyn(),null(),null());
            		}
HXLINE( 272)		if ((Object2->flixelType == 3)) {
HXLINE( 274)			 ::flixel::tile::FlxBaseTilemap tilemap = ( ( ::flixel::tile::FlxBaseTilemap)(Object2) );
HXLINE( 275)			return tilemap->overlapsWithCallback(Object1,::flixel::FlxObject_obj::updateTouchingFlagsX_dyn(),true,null());
            		}
HXLINE( 278)		return (::flixel::FlxObject_obj::computeOverlapX(Object1,Object2,false) != 0);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,updateTouchingFlagsX,return )

Float FlxObject_obj::computeOverlapY( ::flixel::FlxObject Object1, ::flixel::FlxObject Object2,::hx::Null< bool >  __o_checkMaxOverlap){
            		bool checkMaxOverlap = __o_checkMaxOverlap.Default(true);
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_288_computeOverlapY)
HXLINE( 289)		Float overlap = ( (Float)(0) );
HXLINE( 291)		Float obj1delta = (Object1->y - Object1->last->y);
HXLINE( 292)		Float obj2delta = (Object2->y - Object2->last->y);
HXLINE( 294)		if ((obj1delta != obj2delta)) {
HXLINE( 297)			Float obj1deltaAbs;
HXDLIN( 297)			if ((obj1delta > 0)) {
HXLINE( 297)				obj1deltaAbs = obj1delta;
            			}
            			else {
HXLINE( 297)				obj1deltaAbs = -(obj1delta);
            			}
HXLINE( 298)			Float obj2deltaAbs;
HXDLIN( 298)			if ((obj2delta > 0)) {
HXLINE( 298)				obj2deltaAbs = obj2delta;
            			}
            			else {
HXLINE( 298)				obj2deltaAbs = -(obj2delta);
            			}
HXLINE( 300)			 ::flixel::math::FlxRect _this = ::flixel::FlxObject_obj::_firstSeparateFlxRect;
HXDLIN( 300)			Float X = Object1->x;
HXDLIN( 300)			Float Y;
HXDLIN( 300)			if ((obj1delta > 0)) {
HXLINE( 300)				Y = obj1delta;
            			}
            			else {
HXLINE( 300)				Y = ( (Float)(0) );
            			}
HXDLIN( 300)			Float Y1 = (Object1->y - Y);
HXDLIN( 300)			Float Width = Object1->get_width();
HXDLIN( 300)			Float Height = (Object1->get_height() + obj1deltaAbs);
HXDLIN( 300)			_this->x = X;
HXDLIN( 300)			_this->y = Y1;
HXDLIN( 300)			_this->width = Width;
HXDLIN( 300)			_this->height = Height;
HXDLIN( 300)			 ::flixel::math::FlxRect obj1rect = _this;
HXLINE( 302)			 ::flixel::math::FlxRect _this1 = ::flixel::FlxObject_obj::_secondSeparateFlxRect;
HXDLIN( 302)			Float X1 = Object2->x;
HXDLIN( 302)			Float Y2;
HXDLIN( 302)			if ((obj2delta > 0)) {
HXLINE( 302)				Y2 = obj2delta;
            			}
            			else {
HXLINE( 302)				Y2 = ( (Float)(0) );
            			}
HXDLIN( 302)			Float Y3 = (Object2->y - Y2);
HXDLIN( 302)			Float Width1 = Object2->get_width();
HXDLIN( 302)			Float Height1 = (Object2->get_height() + obj2deltaAbs);
HXDLIN( 302)			_this1->x = X1;
HXDLIN( 302)			_this1->y = Y3;
HXDLIN( 302)			_this1->width = Width1;
HXDLIN( 302)			_this1->height = Height1;
HXDLIN( 302)			 ::flixel::math::FlxRect obj2rect = _this1;
HXLINE( 305)			bool _hx_tmp;
HXDLIN( 305)			bool _hx_tmp1;
HXDLIN( 305)			bool _hx_tmp2;
HXDLIN( 305)			if (((obj1rect->x + obj1rect->width) > obj2rect->x)) {
HXLINE( 305)				_hx_tmp2 = (obj1rect->x < (obj2rect->x + obj2rect->width));
            			}
            			else {
HXLINE( 305)				_hx_tmp2 = false;
            			}
HXDLIN( 305)			if (_hx_tmp2) {
HXLINE( 305)				_hx_tmp1 = ((obj1rect->y + obj1rect->height) > obj2rect->y);
            			}
            			else {
HXLINE( 305)				_hx_tmp1 = false;
            			}
HXDLIN( 305)			if (_hx_tmp1) {
HXLINE( 305)				_hx_tmp = (obj1rect->y < (obj2rect->y + obj2rect->height));
            			}
            			else {
HXLINE( 305)				_hx_tmp = false;
            			}
HXDLIN( 305)			if (_hx_tmp) {
HXLINE( 310)				Float maxOverlap;
HXDLIN( 310)				if (checkMaxOverlap) {
HXLINE( 310)					maxOverlap = ((obj1deltaAbs + obj2deltaAbs) + ::flixel::FlxObject_obj::SEPARATE_BIAS);
            				}
            				else {
HXLINE( 310)					maxOverlap = ( (Float)(0) );
            				}
HXLINE( 313)				if ((obj1delta > obj2delta)) {
HXLINE( 315)					Float Object11 = Object1->y;
HXDLIN( 315)					Float overlap1 = (Object11 + Object1->get_height());
HXDLIN( 315)					overlap = (overlap1 - Object2->y);
HXLINE( 316)					bool _hx_tmp;
HXDLIN( 316)					bool _hx_tmp1;
HXDLIN( 316)					bool _hx_tmp2;
HXDLIN( 316)					if (checkMaxOverlap) {
HXLINE( 316)						_hx_tmp2 = (overlap > maxOverlap);
            					}
            					else {
HXLINE( 316)						_hx_tmp2 = false;
            					}
HXDLIN( 316)					if (!(_hx_tmp2)) {
HXLINE( 316)						_hx_tmp1 = ((Object1->allowCollisions & 4096) == 0);
            					}
            					else {
HXLINE( 316)						_hx_tmp1 = true;
            					}
HXDLIN( 316)					if (!(_hx_tmp1)) {
HXLINE( 316)						_hx_tmp = ((Object2->allowCollisions & 256) == 0);
            					}
            					else {
HXLINE( 316)						_hx_tmp = true;
            					}
HXDLIN( 316)					if (_hx_tmp) {
HXLINE( 320)						overlap = ( (Float)(0) );
            					}
            					else {
HXLINE( 324)						 ::flixel::FlxObject Object11 = Object1;
HXDLIN( 324)						Object11->touching = (Object11->touching | 4096);
HXLINE( 325)						 ::flixel::FlxObject Object21 = Object2;
HXDLIN( 325)						Object21->touching = (Object21->touching | 256);
            					}
            				}
            				else {
HXLINE( 328)					if ((obj1delta < obj2delta)) {
HXLINE( 330)						Float Object11 = Object1->y;
HXDLIN( 330)						Float overlap1 = (Object11 - Object2->get_height());
HXDLIN( 330)						overlap = (overlap1 - Object2->y);
HXLINE( 331)						bool _hx_tmp;
HXDLIN( 331)						bool _hx_tmp1;
HXDLIN( 331)						bool _hx_tmp2;
HXDLIN( 331)						if (checkMaxOverlap) {
HXLINE( 331)							_hx_tmp2 = (-(overlap) > maxOverlap);
            						}
            						else {
HXLINE( 331)							_hx_tmp2 = false;
            						}
HXDLIN( 331)						if (!(_hx_tmp2)) {
HXLINE( 331)							_hx_tmp1 = ((Object1->allowCollisions & 256) == 0);
            						}
            						else {
HXLINE( 331)							_hx_tmp1 = true;
            						}
HXDLIN( 331)						if (!(_hx_tmp1)) {
HXLINE( 331)							_hx_tmp = ((Object2->allowCollisions & 4096) == 0);
            						}
            						else {
HXLINE( 331)							_hx_tmp = true;
            						}
HXDLIN( 331)						if (_hx_tmp) {
HXLINE( 335)							overlap = ( (Float)(0) );
            						}
            						else {
HXLINE( 339)							 ::flixel::FlxObject Object11 = Object1;
HXDLIN( 339)							Object11->touching = (Object11->touching | 256);
HXLINE( 340)							 ::flixel::FlxObject Object21 = Object2;
HXDLIN( 340)							Object21->touching = (Object21->touching | 4096);
            						}
            					}
            				}
            			}
            		}
HXLINE( 345)		return overlap;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxObject_obj,computeOverlapY,return )

bool FlxObject_obj::separateY( ::flixel::FlxObject Object1, ::flixel::FlxObject Object2){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_356_separateY)
HXLINE( 358)		bool obj1immovable = Object1->immovable;
HXLINE( 359)		bool obj2immovable = Object2->immovable;
HXLINE( 360)		bool _hx_tmp;
HXDLIN( 360)		if (obj1immovable) {
HXLINE( 360)			_hx_tmp = obj2immovable;
            		}
            		else {
HXLINE( 360)			_hx_tmp = false;
            		}
HXDLIN( 360)		if (_hx_tmp) {
HXLINE( 362)			return false;
            		}
HXLINE( 366)		if ((Object1->flixelType == 3)) {
HXLINE( 368)			 ::flixel::tile::FlxBaseTilemap tilemap = ( ( ::flixel::tile::FlxBaseTilemap)(Object1) );
HXLINE( 369)			return tilemap->overlapsWithCallback(Object2,::flixel::FlxObject_obj::separateY_dyn(),null(),null());
            		}
HXLINE( 371)		if ((Object2->flixelType == 3)) {
HXLINE( 373)			 ::flixel::tile::FlxBaseTilemap tilemap = ( ( ::flixel::tile::FlxBaseTilemap)(Object2) );
HXLINE( 374)			return tilemap->overlapsWithCallback(Object1,::flixel::FlxObject_obj::separateY_dyn(),true,null());
            		}
HXLINE( 377)		Float overlap = ::flixel::FlxObject_obj::computeOverlapY(Object1,Object2,null());
HXLINE( 379)		if ((overlap != 0)) {
HXLINE( 381)			Float obj1delta = (Object1->y - Object1->last->y);
HXLINE( 382)			Float obj2delta = (Object2->y - Object2->last->y);
HXLINE( 383)			Float obj1v = Object1->velocity->y;
HXLINE( 384)			Float obj2v = Object2->velocity->y;
HXLINE( 386)			bool _hx_tmp;
HXDLIN( 386)			if (!(obj1immovable)) {
HXLINE( 386)				_hx_tmp = !(obj2immovable);
            			}
            			else {
HXLINE( 386)				_hx_tmp = false;
            			}
HXDLIN( 386)			if (_hx_tmp) {
HXLINE( 388)				overlap = (overlap * ((Float)0.5));
HXLINE( 389)				Object1->set_y((Object1->y - overlap));
HXLINE( 390)				Object2->set_y((Object2->y + overlap));
HXLINE( 392)				int obj1velocity;
HXDLIN( 392)				if ((obj2v > 0)) {
HXLINE( 392)					obj1velocity = 1;
            				}
            				else {
HXLINE( 392)					obj1velocity = -1;
            				}
HXDLIN( 392)				Float obj1velocity1 = (::Math_obj::sqrt((((obj2v * obj2v) * Object2->mass) / Object1->mass)) * ( (Float)(obj1velocity) ));
HXLINE( 393)				int obj2velocity;
HXDLIN( 393)				if ((obj1v > 0)) {
HXLINE( 393)					obj2velocity = 1;
            				}
            				else {
HXLINE( 393)					obj2velocity = -1;
            				}
HXDLIN( 393)				Float obj2velocity1 = (::Math_obj::sqrt((((obj1v * obj1v) * Object1->mass) / Object2->mass)) * ( (Float)(obj2velocity) ));
HXLINE( 394)				Float average = ((obj1velocity1 + obj2velocity1) * ((Float)0.5));
HXLINE( 395)				obj1velocity1 = (obj1velocity1 - average);
HXLINE( 396)				obj2velocity1 = (obj2velocity1 - average);
HXLINE( 397)				Object1->velocity->set_y((average + (obj1velocity1 * Object1->elasticity)));
HXLINE( 398)				Object2->velocity->set_y((average + (obj2velocity1 * Object2->elasticity)));
            			}
            			else {
HXLINE( 400)				if (!(obj1immovable)) {
HXLINE( 402)					Object1->set_y((Object1->y - overlap));
HXLINE( 403)					Object1->velocity->set_y((obj2v - (obj1v * Object1->elasticity)));
HXLINE( 405)					bool _hx_tmp;
HXDLIN( 405)					bool _hx_tmp1;
HXDLIN( 405)					bool _hx_tmp2;
HXDLIN( 405)					if (Object1->collisonXDrag) {
HXLINE( 405)						_hx_tmp2 = Object2->active;
            					}
            					else {
HXLINE( 405)						_hx_tmp2 = false;
            					}
HXDLIN( 405)					if (_hx_tmp2) {
HXLINE( 405)						_hx_tmp1 = Object2->moves;
            					}
            					else {
HXLINE( 405)						_hx_tmp1 = false;
            					}
HXDLIN( 405)					if (_hx_tmp1) {
HXLINE( 405)						_hx_tmp = (obj1delta > obj2delta);
            					}
            					else {
HXLINE( 405)						_hx_tmp = false;
            					}
HXDLIN( 405)					if (_hx_tmp) {
HXLINE( 407)						Object1->set_x((Object1->x + (Object2->x - Object2->last->x)));
            					}
            				}
            				else {
HXLINE( 410)					if (!(obj2immovable)) {
HXLINE( 412)						Object2->set_y((Object2->y + overlap));
HXLINE( 413)						Object2->velocity->set_y((obj1v - (obj2v * Object2->elasticity)));
HXLINE( 415)						bool _hx_tmp;
HXDLIN( 415)						bool _hx_tmp1;
HXDLIN( 415)						bool _hx_tmp2;
HXDLIN( 415)						if (Object2->collisonXDrag) {
HXLINE( 415)							_hx_tmp2 = Object1->active;
            						}
            						else {
HXLINE( 415)							_hx_tmp2 = false;
            						}
HXDLIN( 415)						if (_hx_tmp2) {
HXLINE( 415)							_hx_tmp1 = Object1->moves;
            						}
            						else {
HXLINE( 415)							_hx_tmp1 = false;
            						}
HXDLIN( 415)						if (_hx_tmp1) {
HXLINE( 415)							_hx_tmp = (obj1delta < obj2delta);
            						}
            						else {
HXLINE( 415)							_hx_tmp = false;
            						}
HXDLIN( 415)						if (_hx_tmp) {
HXLINE( 417)							Object2->set_x((Object2->x + (Object1->x - Object1->last->x)));
            						}
            					}
            				}
            			}
HXLINE( 420)			return true;
            		}
HXLINE( 423)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,separateY,return )

bool FlxObject_obj::updateTouchingFlagsY( ::flixel::FlxObject Object1, ::flixel::FlxObject Object2){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_434_updateTouchingFlagsY)
HXLINE( 436)		if ((Object1->flixelType == 3)) {
HXLINE( 438)			 ::flixel::tile::FlxBaseTilemap tilemap = ( ( ::flixel::tile::FlxBaseTilemap)(Object1) );
HXLINE( 439)			return tilemap->overlapsWithCallback(Object2,::flixel::FlxObject_obj::updateTouchingFlagsY_dyn(),null(),null());
            		}
HXLINE( 441)		if ((Object2->flixelType == 3)) {
HXLINE( 443)			 ::flixel::tile::FlxBaseTilemap tilemap = ( ( ::flixel::tile::FlxBaseTilemap)(Object2) );
HXLINE( 444)			return tilemap->overlapsWithCallback(Object1,::flixel::FlxObject_obj::updateTouchingFlagsY_dyn(),true,null());
            		}
HXLINE( 447)		return (::flixel::FlxObject_obj::computeOverlapY(Object1,Object2,false) != 0);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,updateTouchingFlagsY,return )


::hx::ObjectPtr< FlxObject_obj > FlxObject_obj::__new(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::hx::Null< Float >  __o_Width,::hx::Null< Float >  __o_Height) {
	::hx::ObjectPtr< FlxObject_obj > __this = new FlxObject_obj();
	__this->__construct(__o_X,__o_Y,__o_Width,__o_Height);
	return __this;
}

::hx::ObjectPtr< FlxObject_obj > FlxObject_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::hx::Null< Float >  __o_Width,::hx::Null< Float >  __o_Height) {
	FlxObject_obj *__this = (FlxObject_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxObject_obj), true, "flixel.FlxObject"));
	*(void **)__this = FlxObject_obj::_hx_vtable;
	__this->__construct(__o_X,__o_Y,__o_Width,__o_Height);
	return __this;
}

FlxObject_obj::FlxObject_obj()
{
}

void FlxObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxObject);
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(pixelPerfectRender,"pixelPerfectRender");
	HX_MARK_MEMBER_NAME(pixelPerfectPosition,"pixelPerfectPosition");
	HX_MARK_MEMBER_NAME(angle,"angle");
	HX_MARK_MEMBER_NAME(moves,"moves");
	HX_MARK_MEMBER_NAME(immovable,"immovable");
	HX_MARK_MEMBER_NAME(scrollFactor,"scrollFactor");
	HX_MARK_MEMBER_NAME(velocity,"velocity");
	HX_MARK_MEMBER_NAME(acceleration,"acceleration");
	HX_MARK_MEMBER_NAME(drag,"drag");
	HX_MARK_MEMBER_NAME(maxVelocity,"maxVelocity");
	HX_MARK_MEMBER_NAME(last,"last");
	HX_MARK_MEMBER_NAME(mass,"mass");
	HX_MARK_MEMBER_NAME(elasticity,"elasticity");
	HX_MARK_MEMBER_NAME(angularVelocity,"angularVelocity");
	HX_MARK_MEMBER_NAME(angularAcceleration,"angularAcceleration");
	HX_MARK_MEMBER_NAME(angularDrag,"angularDrag");
	HX_MARK_MEMBER_NAME(maxAngular,"maxAngular");
	HX_MARK_MEMBER_NAME(health,"health");
	HX_MARK_MEMBER_NAME(touching,"touching");
	HX_MARK_MEMBER_NAME(wasTouching,"wasTouching");
	HX_MARK_MEMBER_NAME(allowCollisions,"allowCollisions");
	HX_MARK_MEMBER_NAME(collisonXDrag,"collisonXDrag");
	HX_MARK_MEMBER_NAME(path,"path");
	HX_MARK_MEMBER_NAME(_point,"_point");
	HX_MARK_MEMBER_NAME(_rect,"_rect");
	 ::flixel::FlxBasic_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(pixelPerfectRender,"pixelPerfectRender");
	HX_VISIT_MEMBER_NAME(pixelPerfectPosition,"pixelPerfectPosition");
	HX_VISIT_MEMBER_NAME(angle,"angle");
	HX_VISIT_MEMBER_NAME(moves,"moves");
	HX_VISIT_MEMBER_NAME(immovable,"immovable");
	HX_VISIT_MEMBER_NAME(scrollFactor,"scrollFactor");
	HX_VISIT_MEMBER_NAME(velocity,"velocity");
	HX_VISIT_MEMBER_NAME(acceleration,"acceleration");
	HX_VISIT_MEMBER_NAME(drag,"drag");
	HX_VISIT_MEMBER_NAME(maxVelocity,"maxVelocity");
	HX_VISIT_MEMBER_NAME(last,"last");
	HX_VISIT_MEMBER_NAME(mass,"mass");
	HX_VISIT_MEMBER_NAME(elasticity,"elasticity");
	HX_VISIT_MEMBER_NAME(angularVelocity,"angularVelocity");
	HX_VISIT_MEMBER_NAME(angularAcceleration,"angularAcceleration");
	HX_VISIT_MEMBER_NAME(angularDrag,"angularDrag");
	HX_VISIT_MEMBER_NAME(maxAngular,"maxAngular");
	HX_VISIT_MEMBER_NAME(health,"health");
	HX_VISIT_MEMBER_NAME(touching,"touching");
	HX_VISIT_MEMBER_NAME(wasTouching,"wasTouching");
	HX_VISIT_MEMBER_NAME(allowCollisions,"allowCollisions");
	HX_VISIT_MEMBER_NAME(collisonXDrag,"collisonXDrag");
	HX_VISIT_MEMBER_NAME(path,"path");
	HX_VISIT_MEMBER_NAME(_point,"_point");
	HX_VISIT_MEMBER_NAME(_rect,"_rect");
	 ::flixel::FlxBasic_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxObject_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return ::hx::Val( x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return ::hx::Val( y ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"drag") ) { return ::hx::Val( drag ); }
		if (HX_FIELD_EQ(inName,"last") ) { return ::hx::Val( last ); }
		if (HX_FIELD_EQ(inName,"mass") ) { return ::hx::Val( mass ); }
		if (HX_FIELD_EQ(inName,"path") ) { return ::hx::Val( path ); }
		if (HX_FIELD_EQ(inName,"draw") ) { return ::hx::Val( draw_dyn() ); }
		if (HX_FIELD_EQ(inName,"hurt") ) { return ::hx::Val( hurt_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_width() : width ); }
		if (HX_FIELD_EQ(inName,"angle") ) { return ::hx::Val( angle ); }
		if (HX_FIELD_EQ(inName,"moves") ) { return ::hx::Val( moves ); }
		if (HX_FIELD_EQ(inName,"solid") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_solid() ); }
		if (HX_FIELD_EQ(inName,"_rect") ) { return ::hx::Val( _rect ); }
		if (HX_FIELD_EQ(inName,"reset") ) { return ::hx::Val( reset_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return ::hx::Val( set_x_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return ::hx::Val( set_y_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_height() : height ); }
		if (HX_FIELD_EQ(inName,"health") ) { return ::hx::Val( health ); }
		if (HX_FIELD_EQ(inName,"_point") ) { return ::hx::Val( _point ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		if (HX_FIELD_EQ(inName,"setSize") ) { return ::hx::Val( setSize_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"velocity") ) { return ::hx::Val( velocity ); }
		if (HX_FIELD_EQ(inName,"touching") ) { return ::hx::Val( touching ); }
		if (HX_FIELD_EQ(inName,"initVars") ) { return ::hx::Val( initVars_dyn() ); }
		if (HX_FIELD_EQ(inName,"overlaps") ) { return ::hx::Val( overlaps_dyn() ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_path") ) { return ::hx::Val( set_path_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"immovable") ) { return ::hx::Val( immovable ); }
		if (HX_FIELD_EQ(inName,"getHitbox") ) { return ::hx::Val( getHitbox_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return ::hx::Val( set_width_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return ::hx::Val( get_width_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_solid") ) { return ::hx::Val( get_solid_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_solid") ) { return ::hx::Val( set_solid_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_angle") ) { return ::hx::Val( set_angle_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_moves") ) { return ::hx::Val( set_moves_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"elasticity") ) { return ::hx::Val( elasticity ); }
		if (HX_FIELD_EQ(inName,"maxAngular") ) { return ::hx::Val( maxAngular ); }
		if (HX_FIELD_EQ(inName,"overlapsAt") ) { return ::hx::Val( overlapsAt_dyn() ); }
		if (HX_FIELD_EQ(inName,"isOnScreen") ) { return ::hx::Val( isOnScreen_dyn() ); }
		if (HX_FIELD_EQ(inName,"isTouching") ) { return ::hx::Val( isTouching_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return ::hx::Val( set_height_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return ::hx::Val( get_height_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"maxVelocity") ) { return ::hx::Val( maxVelocity ); }
		if (HX_FIELD_EQ(inName,"angularDrag") ) { return ::hx::Val( angularDrag ); }
		if (HX_FIELD_EQ(inName,"wasTouching") ) { return ::hx::Val( wasTouching ); }
		if (HX_FIELD_EQ(inName,"getPosition") ) { return ::hx::Val( getPosition_dyn() ); }
		if (HX_FIELD_EQ(inName,"getMidpoint") ) { return ::hx::Val( getMidpoint_dyn() ); }
		if (HX_FIELD_EQ(inName,"justTouched") ) { return ::hx::Val( justTouched_dyn() ); }
		if (HX_FIELD_EQ(inName,"setPosition") ) { return ::hx::Val( setPosition_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"scrollFactor") ) { return ::hx::Val( scrollFactor ); }
		if (HX_FIELD_EQ(inName,"acceleration") ) { return ::hx::Val( acceleration ); }
		if (HX_FIELD_EQ(inName,"updateMotion") ) { return ::hx::Val( updateMotion_dyn() ); }
		if (HX_FIELD_EQ(inName,"screenCenter") ) { return ::hx::Val( screenCenter_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"collisonXDrag") ) { return ::hx::Val( collisonXDrag ); }
		if (HX_FIELD_EQ(inName,"overlapsPoint") ) { return ::hx::Val( overlapsPoint_dyn() ); }
		if (HX_FIELD_EQ(inName,"inWorldBounds") ) { return ::hx::Val( inWorldBounds_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_immovable") ) { return ::hx::Val( set_immovable_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"initMotionVars") ) { return ::hx::Val( initMotionVars_dyn() ); }
		if (HX_FIELD_EQ(inName,"getBoundingBox") ) { return ::hx::Val( getBoundingBox_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"angularVelocity") ) { return ::hx::Val( angularVelocity ); }
		if (HX_FIELD_EQ(inName,"allowCollisions") ) { return ::hx::Val( allowCollisions ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"overlapsCallback") ) { return ::hx::Val( overlapsCallback_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getScreenPosition") ) { return ::hx::Val( getScreenPosition_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"pixelPerfectRender") ) { return ::hx::Val( pixelPerfectRender ); }
		if (HX_FIELD_EQ(inName,"overlapsAtCallback") ) { return ::hx::Val( overlapsAtCallback_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"angularAcceleration") ) { return ::hx::Val( angularAcceleration ); }
		if (HX_FIELD_EQ(inName,"set_allowCollisions") ) { return ::hx::Val( set_allowCollisions_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"pixelPerfectPosition") ) { return ::hx::Val( pixelPerfectPosition ); }
		if (HX_FIELD_EQ(inName,"isPixelPerfectRender") ) { return ::hx::Val( isPixelPerfectRender_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"set_pixelPerfectRender") ) { return ::hx::Val( set_pixelPerfectRender_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxObject_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"separate") ) { outValue = separate_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"separateX") ) { outValue = separateX_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"separateY") ) { outValue = separateY_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"SEPARATE_BIAS") ) { outValue = ( SEPARATE_BIAS ); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"computeOverlapX") ) { outValue = computeOverlapX_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"computeOverlapY") ) { outValue = computeOverlapY_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"updateTouchingFlags") ) { outValue = updateTouchingFlags_dyn(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"updateTouchingFlagsX") ) { outValue = updateTouchingFlagsX_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"updateTouchingFlagsY") ) { outValue = updateTouchingFlagsY_dyn(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_firstSeparateFlxRect") ) { outValue = ( _firstSeparateFlxRect ); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_secondSeparateFlxRect") ) { outValue = ( _secondSeparateFlxRect ); return true; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"defaultPixelPerfectPosition") ) { outValue = ( defaultPixelPerfectPosition ); return true; }
	}
	return false;
}

::hx::Val FlxObject_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_x(inValue.Cast< Float >()) );x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_y(inValue.Cast< Float >()) );y=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"drag") ) { drag=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"last") ) { last=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mass") ) { mass=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"path") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_path(inValue.Cast<  ::flixel::util::FlxPath >()) );path=inValue.Cast<  ::flixel::util::FlxPath >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_width(inValue.Cast< Float >()) );width=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angle") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_angle(inValue.Cast< Float >()) );angle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"moves") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_moves(inValue.Cast< bool >()) );moves=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"solid") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_solid(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"_rect") ) { _rect=inValue.Cast<  ::flixel::math::FlxRect >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_height(inValue.Cast< Float >()) );height=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"health") ) { health=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_point") ) { _point=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"velocity") ) { velocity=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"touching") ) { touching=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"immovable") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_immovable(inValue.Cast< bool >()) );immovable=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"elasticity") ) { elasticity=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxAngular") ) { maxAngular=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"maxVelocity") ) { maxVelocity=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angularDrag") ) { angularDrag=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wasTouching") ) { wasTouching=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"scrollFactor") ) { scrollFactor=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"acceleration") ) { acceleration=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"collisonXDrag") ) { collisonXDrag=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"angularVelocity") ) { angularVelocity=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"allowCollisions") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_allowCollisions(inValue.Cast< int >()) );allowCollisions=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"pixelPerfectRender") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_pixelPerfectRender(inValue.Cast<  ::Dynamic >()) );pixelPerfectRender=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"angularAcceleration") ) { angularAcceleration=inValue.Cast< Float >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"pixelPerfectPosition") ) { pixelPerfectPosition=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxObject_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"SEPARATE_BIAS") ) { SEPARATE_BIAS=ioValue.Cast< Float >(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_firstSeparateFlxRect") ) { _firstSeparateFlxRect=ioValue.Cast<  ::flixel::math::FlxRect >(); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_secondSeparateFlxRect") ) { _secondSeparateFlxRect=ioValue.Cast<  ::flixel::math::FlxRect >(); return true; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"defaultPixelPerfectPosition") ) { defaultPixelPerfectPosition=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

void FlxObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	outFields->push(HX_("width",06,b6,62,ca));
	outFields->push(HX_("height",e7,07,4c,02));
	outFields->push(HX_("pixelPerfectRender",dd,59,4f,2f));
	outFields->push(HX_("pixelPerfectPosition",f0,7e,5e,3d));
	outFields->push(HX_("angle",d3,43,e2,22));
	outFields->push(HX_("moves",42,cc,65,0c));
	outFields->push(HX_("immovable",0a,27,70,27));
	outFields->push(HX_("solid",2b,b4,c5,80));
	outFields->push(HX_("scrollFactor",bc,ec,cf,3b));
	outFields->push(HX_("velocity",1d,02,fe,1e));
	outFields->push(HX_("acceleration",40,00,61,9a));
	outFields->push(HX_("drag",f4,2b,70,42));
	outFields->push(HX_("maxVelocity",e1,0c,c4,94));
	outFields->push(HX_("last",56,0a,ad,47));
	outFields->push(HX_("mass",f4,40,56,48));
	outFields->push(HX_("elasticity",79,23,b4,4d));
	outFields->push(HX_("angularVelocity",1f,1f,fe,58));
	outFields->push(HX_("angularAcceleration",42,c6,00,9a));
	outFields->push(HX_("angularDrag",f6,1f,19,9c));
	outFields->push(HX_("maxAngular",9e,28,f6,c2));
	outFields->push(HX_("health",9c,28,06,fd));
	outFields->push(HX_("touching",83,16,25,00));
	outFields->push(HX_("wasTouching",cc,44,e4,5f));
	outFields->push(HX_("allowCollisions",aa,c9,d9,59));
	outFields->push(HX_("collisonXDrag",97,ca,fa,0a));
	outFields->push(HX_("path",a5,e5,51,4a));
	outFields->push(HX_("_point",91,fb,76,c2));
	outFields->push(HX_("_rect",03,69,b8,fe));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxObject_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(FlxObject_obj,x),HX_("x",78,00,00,00)},
	{::hx::fsFloat,(int)offsetof(FlxObject_obj,y),HX_("y",79,00,00,00)},
	{::hx::fsFloat,(int)offsetof(FlxObject_obj,width),HX_("width",06,b6,62,ca)},
	{::hx::fsFloat,(int)offsetof(FlxObject_obj,height),HX_("height",e7,07,4c,02)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxObject_obj,pixelPerfectRender),HX_("pixelPerfectRender",dd,59,4f,2f)},
	{::hx::fsBool,(int)offsetof(FlxObject_obj,pixelPerfectPosition),HX_("pixelPerfectPosition",f0,7e,5e,3d)},
	{::hx::fsFloat,(int)offsetof(FlxObject_obj,angle),HX_("angle",d3,43,e2,22)},
	{::hx::fsBool,(int)offsetof(FlxObject_obj,moves),HX_("moves",42,cc,65,0c)},
	{::hx::fsBool,(int)offsetof(FlxObject_obj,immovable),HX_("immovable",0a,27,70,27)},
	{::hx::fsObject /*  ::flixel::math::FlxPoint */ ,(int)offsetof(FlxObject_obj,scrollFactor),HX_("scrollFactor",bc,ec,cf,3b)},
	{::hx::fsObject /*  ::flixel::math::FlxPoint */ ,(int)offsetof(FlxObject_obj,velocity),HX_("velocity",1d,02,fe,1e)},
	{::hx::fsObject /*  ::flixel::math::FlxPoint */ ,(int)offsetof(FlxObject_obj,acceleration),HX_("acceleration",40,00,61,9a)},
	{::hx::fsObject /*  ::flixel::math::FlxPoint */ ,(int)offsetof(FlxObject_obj,drag),HX_("drag",f4,2b,70,42)},
	{::hx::fsObject /*  ::flixel::math::FlxPoint */ ,(int)offsetof(FlxObject_obj,maxVelocity),HX_("maxVelocity",e1,0c,c4,94)},
	{::hx::fsObject /*  ::flixel::math::FlxPoint */ ,(int)offsetof(FlxObject_obj,last),HX_("last",56,0a,ad,47)},
	{::hx::fsFloat,(int)offsetof(FlxObject_obj,mass),HX_("mass",f4,40,56,48)},
	{::hx::fsFloat,(int)offsetof(FlxObject_obj,elasticity),HX_("elasticity",79,23,b4,4d)},
	{::hx::fsFloat,(int)offsetof(FlxObject_obj,angularVelocity),HX_("angularVelocity",1f,1f,fe,58)},
	{::hx::fsFloat,(int)offsetof(FlxObject_obj,angularAcceleration),HX_("angularAcceleration",42,c6,00,9a)},
	{::hx::fsFloat,(int)offsetof(FlxObject_obj,angularDrag),HX_("angularDrag",f6,1f,19,9c)},
	{::hx::fsFloat,(int)offsetof(FlxObject_obj,maxAngular),HX_("maxAngular",9e,28,f6,c2)},
	{::hx::fsFloat,(int)offsetof(FlxObject_obj,health),HX_("health",9c,28,06,fd)},
	{::hx::fsInt,(int)offsetof(FlxObject_obj,touching),HX_("touching",83,16,25,00)},
	{::hx::fsInt,(int)offsetof(FlxObject_obj,wasTouching),HX_("wasTouching",cc,44,e4,5f)},
	{::hx::fsInt,(int)offsetof(FlxObject_obj,allowCollisions),HX_("allowCollisions",aa,c9,d9,59)},
	{::hx::fsBool,(int)offsetof(FlxObject_obj,collisonXDrag),HX_("collisonXDrag",97,ca,fa,0a)},
	{::hx::fsObject /*  ::flixel::util::FlxPath */ ,(int)offsetof(FlxObject_obj,path),HX_("path",a5,e5,51,4a)},
	{::hx::fsObject /*  ::flixel::math::FlxPoint */ ,(int)offsetof(FlxObject_obj,_point),HX_("_point",91,fb,76,c2)},
	{::hx::fsObject /*  ::flixel::math::FlxRect */ ,(int)offsetof(FlxObject_obj,_rect),HX_("_rect",03,69,b8,fe)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo FlxObject_obj_sStaticStorageInfo[] = {
	{::hx::fsBool,(void *) &FlxObject_obj::defaultPixelPerfectPosition,HX_("defaultPixelPerfectPosition",51,0a,c2,b0)},
	{::hx::fsFloat,(void *) &FlxObject_obj::SEPARATE_BIAS,HX_("SEPARATE_BIAS",15,78,21,a0)},
	{::hx::fsInt,(void *) &FlxObject_obj::LEFT,HX_("LEFT",07,d0,70,32)},
	{::hx::fsInt,(void *) &FlxObject_obj::RIGHT,HX_("RIGHT",bc,43,52,67)},
	{::hx::fsInt,(void *) &FlxObject_obj::UP,HX_("UP",5b,4a,00,00)},
	{::hx::fsInt,(void *) &FlxObject_obj::DOWN,HX_("DOWN",62,c0,2e,2d)},
	{::hx::fsInt,(void *) &FlxObject_obj::NONE,HX_("NONE",b8,da,ca,33)},
	{::hx::fsInt,(void *) &FlxObject_obj::CEILING,HX_("CEILING",dd,32,72,b3)},
	{::hx::fsInt,(void *) &FlxObject_obj::FLOOR,HX_("FLOOR",ac,09,85,80)},
	{::hx::fsInt,(void *) &FlxObject_obj::WALL,HX_("WALL",0a,25,b3,39)},
	{::hx::fsInt,(void *) &FlxObject_obj::ANY,HX_("ANY",cc,96,31,00)},
	{::hx::fsObject /*  ::flixel::math::FlxRect */ ,(void *) &FlxObject_obj::_firstSeparateFlxRect,HX_("_firstSeparateFlxRect",22,b9,2f,5e)},
	{::hx::fsObject /*  ::flixel::math::FlxRect */ ,(void *) &FlxObject_obj::_secondSeparateFlxRect,HX_("_secondSeparateFlxRect",c0,bd,fc,da)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String FlxObject_obj_sMemberFields[] = {
	HX_("x",78,00,00,00),
	HX_("y",79,00,00,00),
	HX_("width",06,b6,62,ca),
	HX_("height",e7,07,4c,02),
	HX_("pixelPerfectRender",dd,59,4f,2f),
	HX_("pixelPerfectPosition",f0,7e,5e,3d),
	HX_("angle",d3,43,e2,22),
	HX_("moves",42,cc,65,0c),
	HX_("immovable",0a,27,70,27),
	HX_("scrollFactor",bc,ec,cf,3b),
	HX_("velocity",1d,02,fe,1e),
	HX_("acceleration",40,00,61,9a),
	HX_("drag",f4,2b,70,42),
	HX_("maxVelocity",e1,0c,c4,94),
	HX_("last",56,0a,ad,47),
	HX_("mass",f4,40,56,48),
	HX_("elasticity",79,23,b4,4d),
	HX_("angularVelocity",1f,1f,fe,58),
	HX_("angularAcceleration",42,c6,00,9a),
	HX_("angularDrag",f6,1f,19,9c),
	HX_("maxAngular",9e,28,f6,c2),
	HX_("health",9c,28,06,fd),
	HX_("touching",83,16,25,00),
	HX_("wasTouching",cc,44,e4,5f),
	HX_("allowCollisions",aa,c9,d9,59),
	HX_("collisonXDrag",97,ca,fa,0a),
	HX_("path",a5,e5,51,4a),
	HX_("_point",91,fb,76,c2),
	HX_("_rect",03,69,b8,fe),
	HX_("initVars",dc,5a,00,53),
	HX_("initMotionVars",32,e4,28,65),
	HX_("destroy",fa,2c,86,24),
	HX_("update",09,86,05,87),
	HX_("updateMotion",1f,2d,21,cb),
	HX_("draw",04,2c,70,42),
	HX_("overlaps",0c,d3,2a,45),
	HX_("overlapsCallback",f1,14,bf,b4),
	HX_("overlapsAt",1f,e7,ce,03),
	HX_("overlapsAtCallback",04,f4,81,3b),
	HX_("overlapsPoint",a4,c5,bd,35),
	HX_("inWorldBounds",82,46,f2,f1),
	HX_("getScreenPosition",6b,93,88,24),
	HX_("getPosition",5f,63,ee,f0),
	HX_("getMidpoint",7e,d8,fb,50),
	HX_("getHitbox",ce,76,7e,d3),
	HX_("reset",cf,49,c8,e6),
	HX_("isOnScreen",f5,43,b9,a1),
	HX_("isPixelPerfectRender",67,1c,f9,26),
	HX_("isTouching",8d,28,d4,7a),
	HX_("justTouched",12,59,b8,91),
	HX_("hurt",0f,5c,17,45),
	HX_("screenCenter",61,2e,f9,e2),
	HX_("setPosition",6b,6a,5b,fb),
	HX_("setSize",83,e1,d7,11),
	HX_("getBoundingBox",11,e8,45,0d),
	HX_("toString",ac,d0,6e,38),
	HX_("set_x",5b,9b,2f,7a),
	HX_("set_y",5c,9b,2f,7a),
	HX_("set_width",69,fe,5c,f1),
	HX_("set_height",24,16,51,f6),
	HX_("get_width",5d,12,0c,0e),
	HX_("get_height",b0,77,d3,f2),
	HX_("get_solid",82,10,6f,c4),
	HX_("set_solid",8e,fc,bf,a7),
	HX_("set_angle",36,8c,dc,49),
	HX_("set_moves",a5,14,60,33),
	HX_("set_immovable",ed,dc,d9,2d),
	HX_("set_pixelPerfectRender",9a,4f,8f,bc),
	HX_("set_allowCollisions",cd,8b,81,21),
	HX_("set_path",a2,fa,69,78),
	::String(null()) };

static void FlxObject_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxObject_obj::defaultPixelPerfectPosition,"defaultPixelPerfectPosition");
	HX_MARK_MEMBER_NAME(FlxObject_obj::SEPARATE_BIAS,"SEPARATE_BIAS");
	HX_MARK_MEMBER_NAME(FlxObject_obj::LEFT,"LEFT");
	HX_MARK_MEMBER_NAME(FlxObject_obj::RIGHT,"RIGHT");
	HX_MARK_MEMBER_NAME(FlxObject_obj::UP,"UP");
	HX_MARK_MEMBER_NAME(FlxObject_obj::DOWN,"DOWN");
	HX_MARK_MEMBER_NAME(FlxObject_obj::NONE,"NONE");
	HX_MARK_MEMBER_NAME(FlxObject_obj::CEILING,"CEILING");
	HX_MARK_MEMBER_NAME(FlxObject_obj::FLOOR,"FLOOR");
	HX_MARK_MEMBER_NAME(FlxObject_obj::WALL,"WALL");
	HX_MARK_MEMBER_NAME(FlxObject_obj::ANY,"ANY");
	HX_MARK_MEMBER_NAME(FlxObject_obj::_firstSeparateFlxRect,"_firstSeparateFlxRect");
	HX_MARK_MEMBER_NAME(FlxObject_obj::_secondSeparateFlxRect,"_secondSeparateFlxRect");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxObject_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxObject_obj::defaultPixelPerfectPosition,"defaultPixelPerfectPosition");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::SEPARATE_BIAS,"SEPARATE_BIAS");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::LEFT,"LEFT");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::RIGHT,"RIGHT");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::UP,"UP");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::DOWN,"DOWN");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::NONE,"NONE");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::CEILING,"CEILING");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::FLOOR,"FLOOR");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::WALL,"WALL");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::ANY,"ANY");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::_firstSeparateFlxRect,"_firstSeparateFlxRect");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::_secondSeparateFlxRect,"_secondSeparateFlxRect");
};

#endif

::hx::Class FlxObject_obj::__mClass;

static ::String FlxObject_obj_sStaticFields[] = {
	HX_("defaultPixelPerfectPosition",51,0a,c2,b0),
	HX_("SEPARATE_BIAS",15,78,21,a0),
	HX_("LEFT",07,d0,70,32),
	HX_("RIGHT",bc,43,52,67),
	HX_("UP",5b,4a,00,00),
	HX_("DOWN",62,c0,2e,2d),
	HX_("NONE",b8,da,ca,33),
	HX_("CEILING",dd,32,72,b3),
	HX_("FLOOR",ac,09,85,80),
	HX_("WALL",0a,25,b3,39),
	HX_("ANY",cc,96,31,00),
	HX_("_firstSeparateFlxRect",22,b9,2f,5e),
	HX_("_secondSeparateFlxRect",c0,bd,fc,da),
	HX_("separate",63,1f,1c,07),
	HX_("updateTouchingFlags",fb,01,ac,bd),
	HX_("computeOverlapX",88,a5,ab,dc),
	HX_("separateX",95,57,7f,31),
	HX_("updateTouchingFlagsX",fd,b9,d5,38),
	HX_("computeOverlapY",89,a5,ab,dc),
	HX_("separateY",96,57,7f,31),
	HX_("updateTouchingFlagsY",fe,b9,d5,38),
	::String(null())
};

void FlxObject_obj::__register()
{
	FlxObject_obj _hx_dummy;
	FlxObject_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.FlxObject",1f,50,95,35);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxObject_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxObject_obj::__SetStatic;
	__mClass->mMarkFunc = FlxObject_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxObject_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxObject_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxObject_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxObject_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxObject_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxObject_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxObject_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_27_boot)
HXDLIN(  27)		defaultPixelPerfectPosition = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_34_boot)
HXDLIN(  34)		SEPARATE_BIAS = ((Float)4);
            	}
{
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_40_boot)
HXDLIN(  40)		LEFT = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_46_boot)
HXDLIN(  46)		RIGHT = 16;
            	}
{
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_52_boot)
HXDLIN(  52)		UP = 256;
            	}
{
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_58_boot)
HXDLIN(  58)		DOWN = 4096;
            	}
{
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_64_boot)
HXDLIN(  64)		NONE = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_70_boot)
HXDLIN(  70)		CEILING = 256;
            	}
{
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_76_boot)
HXDLIN(  76)		FLOOR = 4096;
            	}
{
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_82_boot)
HXDLIN(  82)		WALL = 17;
            	}
{
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_88_boot)
HXDLIN(  88)		ANY = 4369;
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::flixel::math::FlxRect _hx_run(){
            			HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_91_boot)
HXDLIN(  91)			 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN(  91)			_this->x = ( (Float)(0) );
HXDLIN(  91)			_this->y = ( (Float)(0) );
HXDLIN(  91)			_this->width = ( (Float)(0) );
HXDLIN(  91)			_this->height = ( (Float)(0) );
HXDLIN(  91)			 ::flixel::math::FlxRect rect = _this;
HXDLIN(  91)			rect->_inPool = false;
HXDLIN(  91)			return rect;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_91_boot)
HXDLIN(  91)		_firstSeparateFlxRect = ( ( ::flixel::math::FlxRect)( ::Dynamic(new _hx_Closure_0())()) );
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::flixel::math::FlxRect _hx_run(){
            			HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_93_boot)
HXDLIN(  93)			 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN(  93)			_this->x = ( (Float)(0) );
HXDLIN(  93)			_this->y = ( (Float)(0) );
HXDLIN(  93)			_this->width = ( (Float)(0) );
HXDLIN(  93)			_this->height = ( (Float)(0) );
HXDLIN(  93)			 ::flixel::math::FlxRect rect = _this;
HXDLIN(  93)			rect->_inPool = false;
HXDLIN(  93)			return rect;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_93_boot)
HXDLIN(  93)		_secondSeparateFlxRect = ( ( ::flixel::math::FlxRect)( ::Dynamic(new _hx_Closure_0())()) );
            	}
}

} // end namespace flixel
