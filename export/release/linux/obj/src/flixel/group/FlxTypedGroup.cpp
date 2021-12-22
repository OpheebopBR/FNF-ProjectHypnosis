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
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroupIterator
#include <flixel/group/FlxTypedGroupIterator.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_util_FlxArrayUtil
#include <flixel/util/FlxArrayUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxSignal
#include <flixel/util/IFlxSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxBaseSignal
#include <flixel/util/_FlxSignal/FlxBaseSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal1
#include <flixel/util/_FlxSignal/FlxSignal1.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_23_new,"flixel.group.FlxTypedGroup","new",0x9772c4d8,"flixel.group.FlxTypedGroup.new","flixel/group/FlxGroup.hx",23,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_138_destroy,"flixel.group.FlxTypedGroup","destroy",0x8044bd72,"flixel.group.FlxTypedGroup.destroy","flixel/group/FlxGroup.hx",138,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_165_update,"flixel.group.FlxTypedGroup","update",0x4e08ac91,"flixel.group.FlxTypedGroup.update","flixel/group/FlxGroup.hx",165,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_184_draw,"flixel.group.FlxTypedGroup","draw",0xe667208c,"flixel.group.FlxTypedGroup.draw","flixel/group/FlxGroup.hx",184,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_218_add,"flixel.group.FlxTypedGroup","add",0x9768e699,"flixel.group.FlxTypedGroup.add","flixel/group/FlxGroup.hx",218,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_273_insert,"flixel.group.FlxTypedGroup","insert",0x64e069c1,"flixel.group.FlxTypedGroup.insert","flixel/group/FlxGroup.hx",273,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_335_recycle,"flixel.group.FlxTypedGroup","recycle",0x934aa08b,"flixel.group.FlxTypedGroup.recycle","flixel/group/FlxGroup.hx",335,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_378_recycleCreateObject,"flixel.group.FlxTypedGroup","recycleCreateObject",0x87e5d006,"flixel.group.FlxTypedGroup.recycleCreateObject","flixel/group/FlxGroup.hx",378,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_397_remove,"flixel.group.FlxTypedGroup","remove",0xcb8bc2cc,"flixel.group.FlxTypedGroup.remove","flixel/group/FlxGroup.hx",397,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_429_replace,"flixel.group.FlxTypedGroup","replace",0x06e6d8ac,"flixel.group.FlxTypedGroup.replace","flixel/group/FlxGroup.hx",429,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_457_sort,"flixel.group.FlxTypedGroup","sort",0xf04f1be6,"flixel.group.FlxTypedGroup.sort","flixel/group/FlxGroup.hx",457,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_470_getFirstAvailable,"flixel.group.FlxTypedGroup","getFirstAvailable",0x3f88c127,"flixel.group.FlxTypedGroup.getFirstAvailable","flixel/group/FlxGroup.hx",470,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_498_getFirstNull,"flixel.group.FlxTypedGroup","getFirstNull",0xc17e73e9,"flixel.group.FlxTypedGroup.getFirstNull","flixel/group/FlxGroup.hx",498,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_518_getFirstExisting,"flixel.group.FlxTypedGroup","getFirstExisting",0x314444ed,"flixel.group.FlxTypedGroup.getFirstExisting","flixel/group/FlxGroup.hx",518,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_540_getFirstAlive,"flixel.group.FlxTypedGroup","getFirstAlive",0x0afc442b,"flixel.group.FlxTypedGroup.getFirstAlive","flixel/group/FlxGroup.hx",540,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_562_getFirstDead,"flixel.group.FlxTypedGroup","getFirstDead",0xbad62406,"flixel.group.FlxTypedGroup.getFirstDead","flixel/group/FlxGroup.hx",562,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_583_countLiving,"flixel.group.FlxTypedGroup","countLiving",0x0ee705d0,"flixel.group.FlxTypedGroup.countLiving","flixel/group/FlxGroup.hx",583,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_610_countDead,"flixel.group.FlxTypedGroup","countDead",0x0964718b,"flixel.group.FlxTypedGroup.countDead","flixel/group/FlxGroup.hx",610,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_640_getRandom,"flixel.group.FlxTypedGroup","getRandom",0xe8c349b1,"flixel.group.FlxTypedGroup.getRandom","flixel/group/FlxGroup.hx",640,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_654_clear,"flixel.group.FlxTypedGroup","clear",0x1c7a7405,"flixel.group.FlxTypedGroup.clear","flixel/group/FlxGroup.hx",654,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_674_kill,"flixel.group.FlxTypedGroup","kill",0xeb00d426,"flixel.group.FlxTypedGroup.kill","flixel/group/FlxGroup.hx",674,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_693_revive,"flixel.group.FlxTypedGroup","revive",0xd17a20dd,"flixel.group.FlxTypedGroup.revive","flixel/group/FlxGroup.hx",693,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_713_iterator,"flixel.group.FlxTypedGroup","iterator",0x7e9a2276,"flixel.group.FlxTypedGroup.iterator","flixel/group/FlxGroup.hx",713,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_723_forEach,"flixel.group.FlxTypedGroup","forEach",0x207cba22,"flixel.group.FlxTypedGroup.forEach","flixel/group/FlxGroup.hx",723,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_752_forEachAlive,"flixel.group.FlxTypedGroup","forEachAlive",0x4c021e4b,"flixel.group.FlxTypedGroup.forEachAlive","flixel/group/FlxGroup.hx",752,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_781_forEachDead,"flixel.group.FlxTypedGroup","forEachDead",0x5740ede6,"flixel.group.FlxTypedGroup.forEachDead","flixel/group/FlxGroup.hx",781,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_810_forEachExists,"flixel.group.FlxTypedGroup","forEachExists",0xb812919e,"flixel.group.FlxTypedGroup.forEachExists","flixel/group/FlxGroup.hx",810,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_840_forEachOfType,"flixel.group.FlxTypedGroup","forEachOfType",0x4c90cb33,"flixel.group.FlxTypedGroup.forEachOfType","flixel/group/FlxGroup.hx",840,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_865_set_maxSize,"flixel.group.FlxTypedGroup","set_maxSize",0x3b478d20,"flixel.group.FlxTypedGroup.set_maxSize","flixel/group/FlxGroup.hx",865,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_900_get_memberAdded,"flixel.group.FlxTypedGroup","get_memberAdded",0xd5201c15,"flixel.group.FlxTypedGroup.get_memberAdded","flixel/group/FlxGroup.hx",900,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_909_get_memberRemoved,"flixel.group.FlxTypedGroup","get_memberRemoved",0xd0fca635,"flixel.group.FlxTypedGroup.get_memberRemoved","flixel/group/FlxGroup.hx",909,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_31_overlaps,"flixel.group.FlxTypedGroup","overlaps",0x302aab94,"flixel.group.FlxTypedGroup.overlaps","flixel/group/FlxGroup.hx",31,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_55_resolveGroup,"flixel.group.FlxTypedGroup","resolveGroup",0x84c4b53b,"flixel.group.FlxTypedGroup.resolveGroup","flixel/group/FlxGroup.hx",55,0x1e89d58e)
namespace flixel{
namespace group{

void FlxTypedGroup_obj::__construct(::hx::Null< int >  __o_MaxSize){
            		int MaxSize = __o_MaxSize.Default(0);
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_23_new)
HXLINE( 113)		this->_marker = 0;
HXLINE(  86)		this->length = 0;
HXLINE( 120)		super::__construct();
HXLINE( 122)		this->members = ::cpp::VirtualArray_obj::__new(0);
HXLINE( 123)		this->set_maxSize(::Std_obj::_hx_int(::Math_obj::abs(( (Float)(MaxSize) ))));
HXLINE( 124)		this->flixelType = 2;
            	}

Dynamic FlxTypedGroup_obj::__CreateEmpty() { return new FlxTypedGroup_obj; }

void *FlxTypedGroup_obj::_hx_vtable = 0;

Dynamic FlxTypedGroup_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxTypedGroup_obj > _hx_result = new FlxTypedGroup_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool FlxTypedGroup_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x62817b24;
	} else {
		return inClassId==(int)0x7ccf8994;
	}
}

void FlxTypedGroup_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_138_destroy)
HXLINE( 139)		this->super::destroy();
HXLINE( 141)		::flixel::util::FlxDestroyUtil_obj::destroy(this->_memberAdded);
HXLINE( 142)		::flixel::util::FlxDestroyUtil_obj::destroy(this->_memberRemoved);
HXLINE( 144)		if (::hx::IsNotNull( this->members )) {
HXLINE( 146)			int i = 0;
HXLINE( 147)			 ::flixel::FlxBasic basic = null();
HXLINE( 149)			while((i < this->length)){
HXLINE( 151)				i = (i + 1);
HXDLIN( 151)				basic = ( ( ::flixel::FlxBasic)(this->members->__get((i - 1))) );
HXLINE( 153)				if (::hx::IsNotNull( basic )) {
HXLINE( 154)					basic->destroy();
            				}
            			}
HXLINE( 157)			this->members = null();
            		}
            	}


void FlxTypedGroup_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_165_update)
HXLINE( 166)		int i = 0;
HXLINE( 167)		 ::flixel::FlxBasic basic = null();
HXLINE( 169)		while((i < this->length)){
HXLINE( 171)			i = (i + 1);
HXDLIN( 171)			basic = ( ( ::flixel::FlxBasic)(this->members->__get((i - 1))) );
HXLINE( 173)			bool _hx_tmp;
HXDLIN( 173)			bool _hx_tmp1;
HXDLIN( 173)			if (::hx::IsNotNull( basic )) {
HXLINE( 173)				_hx_tmp1 = basic->exists;
            			}
            			else {
HXLINE( 173)				_hx_tmp1 = false;
            			}
HXDLIN( 173)			if (_hx_tmp1) {
HXLINE( 173)				_hx_tmp = basic->active;
            			}
            			else {
HXLINE( 173)				_hx_tmp = false;
            			}
HXDLIN( 173)			if (_hx_tmp) {
HXLINE( 175)				basic->update(elapsed);
            			}
            		}
            	}


void FlxTypedGroup_obj::draw(){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_184_draw)
HXLINE( 185)		int i = 0;
HXLINE( 186)		 ::flixel::FlxBasic basic = null();
HXLINE( 188)		::Array< ::Dynamic> oldDefaultCameras = ::flixel::FlxCamera_obj::_defaultCameras;
HXLINE( 189)		if (::hx::IsNotNull( this->get_cameras() )) {
HXLINE( 191)			::flixel::FlxCamera_obj::_defaultCameras = this->get_cameras();
            		}
HXLINE( 194)		while((i < this->length)){
HXLINE( 196)			i = (i + 1);
HXDLIN( 196)			basic = ( ( ::flixel::FlxBasic)(this->members->__get((i - 1))) );
HXLINE( 198)			bool _hx_tmp;
HXDLIN( 198)			bool _hx_tmp1;
HXDLIN( 198)			if (::hx::IsNotNull( basic )) {
HXLINE( 198)				_hx_tmp1 = basic->exists;
            			}
            			else {
HXLINE( 198)				_hx_tmp1 = false;
            			}
HXDLIN( 198)			if (_hx_tmp1) {
HXLINE( 198)				_hx_tmp = basic->visible;
            			}
            			else {
HXLINE( 198)				_hx_tmp = false;
            			}
HXDLIN( 198)			if (_hx_tmp) {
HXLINE( 200)				basic->draw();
            			}
            		}
HXLINE( 204)		::flixel::FlxCamera_obj::_defaultCameras = oldDefaultCameras;
            	}


 ::Dynamic FlxTypedGroup_obj::add( ::Dynamic Object){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_218_add)
HXLINE( 219)		if (::hx::IsNull( Object )) {
HXLINE( 222)			return null();
            		}
HXLINE( 226)		if ((this->members->indexOf(Object,null()) >= 0)) {
HXLINE( 227)			return Object;
            		}
HXLINE( 230)		int index = this->getFirstNull();
HXLINE( 231)		if ((index != -1)) {
HXLINE( 233)			this->members->set(index,Object);
HXLINE( 235)			if ((index >= this->length)) {
HXLINE( 237)				this->length = (index + 1);
            			}
HXLINE( 240)			if (::hx::IsNotNull( this->_memberAdded )) {
HXLINE( 241)				this->_memberAdded->dispatch(Object);
            			}
HXLINE( 243)			return Object;
            		}
HXLINE( 247)		bool _hx_tmp;
HXDLIN( 247)		if ((this->maxSize > 0)) {
HXLINE( 247)			_hx_tmp = (this->length >= this->maxSize);
            		}
            		else {
HXLINE( 247)			_hx_tmp = false;
            		}
HXDLIN( 247)		if (_hx_tmp) {
HXLINE( 248)			return Object;
            		}
HXLINE( 251)		this->members->push(Object);
HXLINE( 252)		this->length++;
HXLINE( 254)		if (::hx::IsNotNull( this->_memberAdded )) {
HXLINE( 255)			this->_memberAdded->dispatch(Object);
            		}
HXLINE( 257)		return Object;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedGroup_obj,add,return )

 ::Dynamic FlxTypedGroup_obj::insert(int position, ::Dynamic object){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_273_insert)
HXLINE( 274)		if (::hx::IsNull( object )) {
HXLINE( 277)			return null();
            		}
HXLINE( 281)		if ((this->members->indexOf(object,null()) >= 0)) {
HXLINE( 282)			return object;
            		}
HXLINE( 285)		bool _hx_tmp;
HXDLIN( 285)		if ((position < this->length)) {
HXLINE( 285)			_hx_tmp = ::hx::IsNull( this->members->__get(position) );
            		}
            		else {
HXLINE( 285)			_hx_tmp = false;
            		}
HXDLIN( 285)		if (_hx_tmp) {
HXLINE( 287)			this->members->set(position,object);
HXLINE( 289)			if (::hx::IsNotNull( this->_memberAdded )) {
HXLINE( 290)				this->_memberAdded->dispatch(object);
            			}
HXLINE( 292)			return object;
            		}
HXLINE( 296)		bool _hx_tmp1;
HXDLIN( 296)		if ((this->maxSize > 0)) {
HXLINE( 296)			_hx_tmp1 = (this->length >= this->maxSize);
            		}
            		else {
HXLINE( 296)			_hx_tmp1 = false;
            		}
HXDLIN( 296)		if (_hx_tmp1) {
HXLINE( 297)			return object;
            		}
HXLINE( 300)		this->members->insert(position,object);
HXLINE( 301)		this->length++;
HXLINE( 303)		if (::hx::IsNotNull( this->_memberAdded )) {
HXLINE( 304)			this->_memberAdded->dispatch(object);
            		}
HXLINE( 306)		return object;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,insert,return )

 ::Dynamic FlxTypedGroup_obj::recycle(::hx::Class ObjectClass, ::Dynamic ObjectFactory,::hx::Null< bool >  __o_Force,::hx::Null< bool >  __o_Revive){
            		bool Force = __o_Force.Default(false);
            		bool Revive = __o_Revive.Default(true);
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_335_recycle)
HXLINE( 336)		 ::flixel::FlxBasic basic = null();
HXLINE( 339)		if ((this->maxSize > 0)) {
HXLINE( 342)			if ((this->length < this->maxSize)) {
HXLINE( 344)				 ::Dynamic object = null();
HXDLIN( 344)				if (::hx::IsNotNull( ObjectFactory )) {
HXLINE( 344)					object = ObjectFactory();
HXDLIN( 344)					this->add(object);
            				}
            				else {
HXLINE( 344)					if (::hx::IsNotNull( ObjectClass )) {
HXLINE( 344)						object = ::Type_obj::createInstance(ObjectClass,::cpp::VirtualArray_obj::__new(0));
HXDLIN( 344)						this->add(object);
            					}
            				}
HXDLIN( 344)				return object;
            			}
            			else {
HXLINE( 349)				basic = ( ( ::flixel::FlxBasic)(this->members->__get(this->_marker++)) );
HXLINE( 351)				if ((this->_marker >= this->maxSize)) {
HXLINE( 352)					this->_marker = 0;
            				}
HXLINE( 354)				if (Revive) {
HXLINE( 355)					basic->revive();
            				}
HXLINE( 357)				return basic;
            			}
            		}
            		else {
HXLINE( 363)			basic = ( ( ::flixel::FlxBasic)(this->getFirstAvailable(ObjectClass,Force)) );
HXLINE( 365)			if (::hx::IsNotNull( basic )) {
HXLINE( 367)				if (Revive) {
HXLINE( 368)					basic->revive();
            				}
HXLINE( 369)				return basic;
            			}
HXLINE( 372)			 ::Dynamic object = null();
HXDLIN( 372)			if (::hx::IsNotNull( ObjectFactory )) {
HXLINE( 372)				object = ObjectFactory();
HXDLIN( 372)				this->add(object);
            			}
            			else {
HXLINE( 372)				if (::hx::IsNotNull( ObjectClass )) {
HXLINE( 372)					object = ::Type_obj::createInstance(ObjectClass,::cpp::VirtualArray_obj::__new(0));
HXDLIN( 372)					this->add(object);
            				}
            			}
HXDLIN( 372)			return object;
            		}
HXLINE( 339)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxTypedGroup_obj,recycle,return )

 ::Dynamic FlxTypedGroup_obj::recycleCreateObject(::hx::Class ObjectClass, ::Dynamic ObjectFactory){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_378_recycleCreateObject)
HXLINE( 379)		 ::Dynamic object = null();
HXLINE( 381)		if (::hx::IsNotNull( ObjectFactory )) {
HXLINE( 382)			object = ObjectFactory();
HXDLIN( 382)			this->add(object);
            		}
            		else {
HXLINE( 383)			if (::hx::IsNotNull( ObjectClass )) {
HXLINE( 384)				object = ::Type_obj::createInstance(ObjectClass,::cpp::VirtualArray_obj::__new(0));
HXDLIN( 384)				this->add(object);
            			}
            		}
HXLINE( 386)		return object;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,recycleCreateObject,return )

 ::Dynamic FlxTypedGroup_obj::remove( ::Dynamic Object,::hx::Null< bool >  __o_Splice){
            		bool Splice = __o_Splice.Default(false);
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_397_remove)
HXLINE( 398)		if (::hx::IsNull( this->members )) {
HXLINE( 399)			return null();
            		}
HXLINE( 401)		int index = this->members->indexOf(Object,null());
HXLINE( 403)		if ((index < 0)) {
HXLINE( 404)			return null();
            		}
HXLINE( 406)		if (Splice) {
HXLINE( 408)			this->members->splice(index,1);
HXLINE( 409)			this->length--;
            		}
            		else {
HXLINE( 412)			this->members->set(index,null());
            		}
HXLINE( 414)		if (::hx::IsNotNull( this->_memberRemoved )) {
HXLINE( 415)			this->_memberRemoved->dispatch(Object);
            		}
HXLINE( 417)		return Object;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,remove,return )

 ::Dynamic FlxTypedGroup_obj::replace( ::Dynamic OldObject, ::Dynamic NewObject){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_429_replace)
HXLINE( 430)		int index = this->members->indexOf(OldObject,null());
HXLINE( 432)		if ((index < 0)) {
HXLINE( 433)			return null();
            		}
HXLINE( 435)		this->members->set(index,NewObject);
HXLINE( 437)		if (::hx::IsNotNull( this->_memberRemoved )) {
HXLINE( 438)			this->_memberRemoved->dispatch(OldObject);
            		}
HXLINE( 439)		if (::hx::IsNotNull( this->_memberAdded )) {
HXLINE( 440)			this->_memberAdded->dispatch(NewObject);
            		}
HXLINE( 442)		return NewObject;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,replace,return )

void FlxTypedGroup_obj::sort( ::Dynamic Function,::hx::Null< int >  __o_Order){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0,int,a1, ::Dynamic,_g) HXARGC(2)
            		int _hx_run( ::Dynamic a2, ::Dynamic a3){
            			HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_457_sort)
HXDLIN( 457)			return ( (int)(_g(a1,a2,a3)) );
            		}
            		HX_END_LOCAL_FUNC2(return)

            		int Order = __o_Order.Default(-1);
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_457_sort)
HXDLIN( 457)		 ::Dynamic _g = Function;
HXDLIN( 457)		int a1 = Order;
HXDLIN( 457)		 ::Dynamic _hx_tmp =  ::Dynamic(new _hx_Closure_0(a1,_g));
HXDLIN( 457)		this->members->sort(_hx_tmp);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,sort,(void))

 ::Dynamic FlxTypedGroup_obj::getFirstAvailable(::hx::Class ObjectClass,::hx::Null< bool >  __o_Force){
            		bool Force = __o_Force.Default(false);
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_470_getFirstAvailable)
HXLINE( 471)		int i = 0;
HXLINE( 472)		 ::flixel::FlxBasic basic = null();
HXLINE( 474)		while((i < this->length)){
HXLINE( 476)			i = (i + 1);
HXDLIN( 476)			basic = ( ( ::flixel::FlxBasic)(this->members->__get((i - 1))) );
HXLINE( 478)			bool _hx_tmp;
HXDLIN( 478)			bool _hx_tmp1;
HXDLIN( 478)			if (::hx::IsNotNull( basic )) {
HXLINE( 478)				_hx_tmp1 = !(basic->exists);
            			}
            			else {
HXLINE( 478)				_hx_tmp1 = false;
            			}
HXDLIN( 478)			if (_hx_tmp1) {
HXLINE( 478)				if (::hx::IsNotNull( ObjectClass )) {
HXLINE( 478)					_hx_tmp = ::Std_obj::isOfType(basic,ObjectClass);
            				}
            				else {
HXLINE( 478)					_hx_tmp = true;
            				}
            			}
            			else {
HXLINE( 478)				_hx_tmp = false;
            			}
HXDLIN( 478)			if (_hx_tmp) {
HXLINE( 480)				bool _hx_tmp;
HXDLIN( 480)				if (Force) {
HXLINE( 480)					::String _hx_tmp1 = ::Type_obj::getClassName(::Type_obj::getClass(basic));
HXDLIN( 480)					_hx_tmp = (_hx_tmp1 != ::Type_obj::getClassName(ObjectClass));
            				}
            				else {
HXLINE( 480)					_hx_tmp = false;
            				}
HXDLIN( 480)				if (_hx_tmp) {
HXLINE( 482)					continue;
            				}
HXLINE( 484)				return this->members->__get((i - 1));
            			}
            		}
HXLINE( 488)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,getFirstAvailable,return )

int FlxTypedGroup_obj::getFirstNull(){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_498_getFirstNull)
HXLINE( 499)		int i = 0;
HXLINE( 501)		while((i < this->length)){
HXLINE( 503)			if (::hx::IsNull( this->members->__get(i) )) {
HXLINE( 504)				return i;
            			}
HXLINE( 505)			i = (i + 1);
            		}
HXLINE( 508)		return -1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,getFirstNull,return )

 ::Dynamic FlxTypedGroup_obj::getFirstExisting(){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_518_getFirstExisting)
HXLINE( 519)		int i = 0;
HXLINE( 520)		 ::flixel::FlxBasic basic = null();
HXLINE( 522)		while((i < this->length)){
HXLINE( 524)			i = (i + 1);
HXDLIN( 524)			basic = ( ( ::flixel::FlxBasic)(this->members->__get((i - 1))) );
HXLINE( 526)			bool _hx_tmp;
HXDLIN( 526)			if (::hx::IsNotNull( basic )) {
HXLINE( 526)				_hx_tmp = basic->exists;
            			}
            			else {
HXLINE( 526)				_hx_tmp = false;
            			}
HXDLIN( 526)			if (_hx_tmp) {
HXLINE( 527)				return basic;
            			}
            		}
HXLINE( 530)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,getFirstExisting,return )

 ::Dynamic FlxTypedGroup_obj::getFirstAlive(){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_540_getFirstAlive)
HXLINE( 541)		int i = 0;
HXLINE( 542)		 ::flixel::FlxBasic basic = null();
HXLINE( 544)		while((i < this->length)){
HXLINE( 546)			i = (i + 1);
HXDLIN( 546)			basic = ( ( ::flixel::FlxBasic)(this->members->__get((i - 1))) );
HXLINE( 548)			bool _hx_tmp;
HXDLIN( 548)			bool _hx_tmp1;
HXDLIN( 548)			if (::hx::IsNotNull( basic )) {
HXLINE( 548)				_hx_tmp1 = basic->exists;
            			}
            			else {
HXLINE( 548)				_hx_tmp1 = false;
            			}
HXDLIN( 548)			if (_hx_tmp1) {
HXLINE( 548)				_hx_tmp = basic->alive;
            			}
            			else {
HXLINE( 548)				_hx_tmp = false;
            			}
HXDLIN( 548)			if (_hx_tmp) {
HXLINE( 549)				return basic;
            			}
            		}
HXLINE( 552)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,getFirstAlive,return )

 ::Dynamic FlxTypedGroup_obj::getFirstDead(){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_562_getFirstDead)
HXLINE( 563)		int i = 0;
HXLINE( 564)		 ::flixel::FlxBasic basic = null();
HXLINE( 566)		while((i < this->length)){
HXLINE( 568)			i = (i + 1);
HXDLIN( 568)			basic = ( ( ::flixel::FlxBasic)(this->members->__get((i - 1))) );
HXLINE( 570)			bool _hx_tmp;
HXDLIN( 570)			if (::hx::IsNotNull( basic )) {
HXLINE( 570)				_hx_tmp = !(basic->alive);
            			}
            			else {
HXLINE( 570)				_hx_tmp = false;
            			}
HXDLIN( 570)			if (_hx_tmp) {
HXLINE( 571)				return basic;
            			}
            		}
HXLINE( 574)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,getFirstDead,return )

int FlxTypedGroup_obj::countLiving(){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_583_countLiving)
HXLINE( 584)		int i = 0;
HXLINE( 585)		int count = -1;
HXLINE( 586)		 ::flixel::FlxBasic basic = null();
HXLINE( 588)		while((i < this->length)){
HXLINE( 590)			i = (i + 1);
HXDLIN( 590)			basic = ( ( ::flixel::FlxBasic)(this->members->__get((i - 1))) );
HXLINE( 592)			if (::hx::IsNotNull( basic )) {
HXLINE( 594)				if ((count < 0)) {
HXLINE( 595)					count = 0;
            				}
HXLINE( 596)				bool _hx_tmp;
HXDLIN( 596)				if (basic->exists) {
HXLINE( 596)					_hx_tmp = basic->alive;
            				}
            				else {
HXLINE( 596)					_hx_tmp = false;
            				}
HXDLIN( 596)				if (_hx_tmp) {
HXLINE( 597)					count = (count + 1);
            				}
            			}
            		}
HXLINE( 601)		return count;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,countLiving,return )

int FlxTypedGroup_obj::countDead(){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_610_countDead)
HXLINE( 611)		int i = 0;
HXLINE( 612)		int count = -1;
HXLINE( 613)		 ::flixel::FlxBasic basic = null();
HXLINE( 615)		while((i < this->length)){
HXLINE( 617)			i = (i + 1);
HXDLIN( 617)			basic = ( ( ::flixel::FlxBasic)(this->members->__get((i - 1))) );
HXLINE( 619)			if (::hx::IsNotNull( basic )) {
HXLINE( 621)				if ((count < 0)) {
HXLINE( 622)					count = 0;
            				}
HXLINE( 623)				if (!(basic->alive)) {
HXLINE( 624)					count = (count + 1);
            				}
            			}
            		}
HXLINE( 628)		return count;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,countDead,return )

 ::Dynamic FlxTypedGroup_obj::getRandom(::hx::Null< int >  __o_StartIndex,::hx::Null< int >  __o_Length){
            		int StartIndex = __o_StartIndex.Default(0);
            		int Length = __o_Length.Default(0);
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_640_getRandom)
HXLINE( 641)		if ((StartIndex < 0)) {
HXLINE( 642)			StartIndex = 0;
            		}
HXLINE( 643)		if ((Length <= 0)) {
HXLINE( 644)			Length = this->length;
            		}
HXLINE( 646)		return ::flixel::FlxG_obj::random->getObject_flixel_group_FlxTypedGroup_T(this->members,null(),StartIndex,Length);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,getRandom,return )

void FlxTypedGroup_obj::clear(){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_654_clear)
HXLINE( 655)		this->length = 0;
HXLINE( 657)		if (::hx::IsNotNull( this->_memberRemoved )) {
HXLINE( 659)			int _g = 0;
HXDLIN( 659)			::cpp::VirtualArray _g1 = this->members;
HXDLIN( 659)			while((_g < _g1->get_length())){
HXLINE( 659)				 ::Dynamic member = _g1->__get(_g);
HXDLIN( 659)				_g = (_g + 1);
HXLINE( 661)				if (::hx::IsNotNull( member )) {
HXLINE( 662)					this->_memberRemoved->dispatch(member);
            				}
            			}
            		}
HXLINE( 666)		::flixel::util::FlxArrayUtil_obj::clearArray(this->members,null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,clear,(void))

void FlxTypedGroup_obj::kill(){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_674_kill)
HXLINE( 675)		int i = 0;
HXLINE( 676)		 ::flixel::FlxBasic basic = null();
HXLINE( 678)		while((i < this->length)){
HXLINE( 680)			i = (i + 1);
HXDLIN( 680)			basic = ( ( ::flixel::FlxBasic)(this->members->__get((i - 1))) );
HXLINE( 682)			bool _hx_tmp;
HXDLIN( 682)			if (::hx::IsNotNull( basic )) {
HXLINE( 682)				_hx_tmp = basic->exists;
            			}
            			else {
HXLINE( 682)				_hx_tmp = false;
            			}
HXDLIN( 682)			if (_hx_tmp) {
HXLINE( 683)				basic->kill();
            			}
            		}
HXLINE( 686)		this->super::kill();
            	}


void FlxTypedGroup_obj::revive(){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_693_revive)
HXLINE( 694)		int i = 0;
HXLINE( 695)		 ::flixel::FlxBasic basic = null();
HXLINE( 697)		while((i < this->length)){
HXLINE( 699)			i = (i + 1);
HXDLIN( 699)			basic = ( ( ::flixel::FlxBasic)(this->members->__get((i - 1))) );
HXLINE( 701)			bool _hx_tmp;
HXDLIN( 701)			if (::hx::IsNotNull( basic )) {
HXLINE( 701)				_hx_tmp = !(basic->exists);
            			}
            			else {
HXLINE( 701)				_hx_tmp = false;
            			}
HXDLIN( 701)			if (_hx_tmp) {
HXLINE( 702)				basic->revive();
            			}
            		}
HXLINE( 705)		this->super::revive();
            	}


 ::flixel::group::FlxTypedGroupIterator FlxTypedGroup_obj::iterator( ::Dynamic filter){
            	HX_GC_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_713_iterator)
HXDLIN( 713)		return  ::flixel::group::FlxTypedGroupIterator_obj::__alloc( HX_CTX ,this->members,filter);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedGroup_obj,iterator,return )

void FlxTypedGroup_obj::forEach( ::Dynamic Function,::hx::Null< bool >  __o_Recurse){
            		bool Recurse = __o_Recurse.Default(false);
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_723_forEach)
HXLINE( 724)		int i = 0;
HXLINE( 725)		 ::flixel::FlxBasic basic = null();
HXLINE( 727)		while((i < this->length)){
HXLINE( 729)			i = (i + 1);
HXDLIN( 729)			basic = ( ( ::flixel::FlxBasic)(this->members->__get((i - 1))) );
HXLINE( 731)			if (::hx::IsNotNull( basic )) {
HXLINE( 733)				if (Recurse) {
HXLINE( 735)					 ::flixel::group::FlxTypedGroup group = ::flixel::group::FlxTypedGroup_obj::resolveGroup(basic);
HXLINE( 736)					if (::hx::IsNotNull( group )) {
HXLINE( 737)						group->forEach(Function,Recurse);
            					}
            				}
HXLINE( 740)				Function(basic);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,forEach,(void))

void FlxTypedGroup_obj::forEachAlive( ::Dynamic Function,::hx::Null< bool >  __o_Recurse){
            		bool Recurse = __o_Recurse.Default(false);
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_752_forEachAlive)
HXLINE( 753)		int i = 0;
HXLINE( 754)		 ::flixel::FlxBasic basic = null();
HXLINE( 756)		while((i < this->length)){
HXLINE( 758)			i = (i + 1);
HXDLIN( 758)			basic = ( ( ::flixel::FlxBasic)(this->members->__get((i - 1))) );
HXLINE( 760)			bool _hx_tmp;
HXDLIN( 760)			bool _hx_tmp1;
HXDLIN( 760)			if (::hx::IsNotNull( basic )) {
HXLINE( 760)				_hx_tmp1 = basic->exists;
            			}
            			else {
HXLINE( 760)				_hx_tmp1 = false;
            			}
HXDLIN( 760)			if (_hx_tmp1) {
HXLINE( 760)				_hx_tmp = basic->alive;
            			}
            			else {
HXLINE( 760)				_hx_tmp = false;
            			}
HXDLIN( 760)			if (_hx_tmp) {
HXLINE( 762)				if (Recurse) {
HXLINE( 764)					 ::flixel::group::FlxTypedGroup group = ::flixel::group::FlxTypedGroup_obj::resolveGroup(basic);
HXLINE( 765)					if (::hx::IsNotNull( group )) {
HXLINE( 766)						group->forEachAlive(Function,Recurse);
            					}
            				}
HXLINE( 769)				Function(basic);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,forEachAlive,(void))

void FlxTypedGroup_obj::forEachDead( ::Dynamic Function,::hx::Null< bool >  __o_Recurse){
            		bool Recurse = __o_Recurse.Default(false);
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_781_forEachDead)
HXLINE( 782)		int i = 0;
HXLINE( 783)		 ::flixel::FlxBasic basic = null();
HXLINE( 785)		while((i < this->length)){
HXLINE( 787)			i = (i + 1);
HXDLIN( 787)			basic = ( ( ::flixel::FlxBasic)(this->members->__get((i - 1))) );
HXLINE( 789)			bool _hx_tmp;
HXDLIN( 789)			if (::hx::IsNotNull( basic )) {
HXLINE( 789)				_hx_tmp = !(basic->alive);
            			}
            			else {
HXLINE( 789)				_hx_tmp = false;
            			}
HXDLIN( 789)			if (_hx_tmp) {
HXLINE( 791)				if (Recurse) {
HXLINE( 793)					 ::flixel::group::FlxTypedGroup group = ::flixel::group::FlxTypedGroup_obj::resolveGroup(basic);
HXLINE( 794)					if (::hx::IsNotNull( group )) {
HXLINE( 795)						group->forEachDead(Function,Recurse);
            					}
            				}
HXLINE( 798)				Function(basic);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,forEachDead,(void))

void FlxTypedGroup_obj::forEachExists( ::Dynamic Function,::hx::Null< bool >  __o_Recurse){
            		bool Recurse = __o_Recurse.Default(false);
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_810_forEachExists)
HXLINE( 811)		int i = 0;
HXLINE( 812)		 ::flixel::FlxBasic basic = null();
HXLINE( 814)		while((i < this->length)){
HXLINE( 816)			i = (i + 1);
HXDLIN( 816)			basic = ( ( ::flixel::FlxBasic)(this->members->__get((i - 1))) );
HXLINE( 818)			bool _hx_tmp;
HXDLIN( 818)			if (::hx::IsNotNull( basic )) {
HXLINE( 818)				_hx_tmp = basic->exists;
            			}
            			else {
HXLINE( 818)				_hx_tmp = false;
            			}
HXDLIN( 818)			if (_hx_tmp) {
HXLINE( 820)				if (Recurse) {
HXLINE( 822)					 ::flixel::group::FlxTypedGroup group = ::flixel::group::FlxTypedGroup_obj::resolveGroup(basic);
HXLINE( 823)					if (::hx::IsNotNull( group )) {
HXLINE( 824)						group->forEachExists(Function,Recurse);
            					}
            				}
HXLINE( 827)				Function(basic);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,forEachExists,(void))

void FlxTypedGroup_obj::forEachOfType(::hx::Class ObjectClass, ::Dynamic Function,::hx::Null< bool >  __o_Recurse){
            		bool Recurse = __o_Recurse.Default(false);
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_840_forEachOfType)
HXLINE( 841)		int i = 0;
HXLINE( 842)		 ::flixel::FlxBasic basic = null();
HXLINE( 844)		while((i < this->length)){
HXLINE( 846)			i = (i + 1);
HXDLIN( 846)			basic = ( ( ::flixel::FlxBasic)(this->members->__get((i - 1))) );
HXLINE( 848)			if (::hx::IsNotNull( basic )) {
HXLINE( 850)				if (Recurse) {
HXLINE( 852)					 ::flixel::group::FlxTypedGroup group = ::flixel::group::FlxTypedGroup_obj::resolveGroup(basic);
HXLINE( 853)					if (::hx::IsNotNull( group )) {
HXLINE( 854)						group->forEachOfType(ObjectClass,Function,Recurse);
            					}
            				}
HXLINE( 857)				if (::Std_obj::isOfType(basic,ObjectClass)) {
HXLINE( 858)					Function(basic);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxTypedGroup_obj,forEachOfType,(void))

int FlxTypedGroup_obj::set_maxSize(int Size){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_865_set_maxSize)
HXLINE( 866)		this->maxSize = ::Std_obj::_hx_int(::Math_obj::abs(( (Float)(Size) )));
HXLINE( 868)		if ((this->_marker >= this->maxSize)) {
HXLINE( 869)			this->_marker = 0;
            		}
HXLINE( 871)		bool _hx_tmp;
HXDLIN( 871)		bool _hx_tmp1;
HXDLIN( 871)		if ((this->maxSize != 0)) {
HXLINE( 871)			_hx_tmp1 = ::hx::IsNull( this->members );
            		}
            		else {
HXLINE( 871)			_hx_tmp1 = true;
            		}
HXDLIN( 871)		if (!(_hx_tmp1)) {
HXLINE( 871)			_hx_tmp = (this->maxSize >= this->length);
            		}
            		else {
HXLINE( 871)			_hx_tmp = true;
            		}
HXDLIN( 871)		if (_hx_tmp) {
HXLINE( 872)			return this->maxSize;
            		}
HXLINE( 875)		int i = this->maxSize;
HXLINE( 876)		int l = this->length;
HXLINE( 877)		 ::flixel::FlxBasic basic = null();
HXLINE( 879)		while((i < l)){
HXLINE( 881)			i = (i + 1);
HXDLIN( 881)			basic = ( ( ::flixel::FlxBasic)(this->members->__get((i - 1))) );
HXLINE( 883)			if (::hx::IsNotNull( basic )) {
HXLINE( 885)				if (::hx::IsNotNull( this->_memberRemoved )) {
HXLINE( 886)					this->_memberRemoved->dispatch(basic);
            				}
HXLINE( 888)				basic->destroy();
            			}
            		}
HXLINE( 892)		::flixel::util::FlxArrayUtil_obj::setLength_flixel_group_FlxTypedGroup_T(this->members,this->maxSize);
HXLINE( 893)		this->length = this->members->get_length();
HXLINE( 895)		return this->maxSize;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedGroup_obj,set_maxSize,return )

 ::flixel::util::_FlxSignal::FlxSignal1 FlxTypedGroup_obj::get_memberAdded(){
            	HX_GC_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_900_get_memberAdded)
HXLINE( 901)		if (::hx::IsNull( this->_memberAdded )) {
HXLINE( 902)			this->_memberAdded =  ::flixel::util::_FlxSignal::FlxSignal1_obj::__alloc( HX_CTX );
            		}
HXLINE( 904)		return this->_memberAdded;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,get_memberAdded,return )

 ::flixel::util::_FlxSignal::FlxSignal1 FlxTypedGroup_obj::get_memberRemoved(){
            	HX_GC_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_909_get_memberRemoved)
HXLINE( 910)		if (::hx::IsNull( this->_memberRemoved )) {
HXLINE( 911)			this->_memberRemoved =  ::flixel::util::_FlxSignal::FlxSignal1_obj::__alloc( HX_CTX );
            		}
HXLINE( 913)		return this->_memberRemoved;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,get_memberRemoved,return )

bool FlxTypedGroup_obj::overlaps( ::Dynamic Callback, ::flixel::group::FlxTypedGroup Group,Float X,Float Y,bool InScreenSpace, ::flixel::FlxCamera Camera){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_31_overlaps)
HXLINE(  32)		bool result = false;
HXLINE(  33)		if (::hx::IsNotNull( Group )) {
HXLINE(  35)			int i = 0;
HXLINE(  36)			int l = Group->length;
HXLINE(  37)			 ::flixel::FlxBasic basic;
HXLINE(  39)			while((i < l)){
HXLINE(  41)				i = (i + 1);
HXDLIN(  41)				basic = Dynamic( Group->members->__get((i - 1))).StaticCast<  ::flixel::FlxBasic >();
HXLINE(  43)				bool _hx_tmp;
HXDLIN(  43)				if (::hx::IsNotNull( basic )) {
HXLINE(  43)					_hx_tmp = ( (bool)(Callback(basic,X,Y,InScreenSpace,Camera)) );
            				}
            				else {
HXLINE(  43)					_hx_tmp = false;
            				}
HXDLIN(  43)				if (_hx_tmp) {
HXLINE(  45)					result = true;
HXLINE(  46)					goto _hx_goto_51;
            				}
            			}
            			_hx_goto_51:;
            		}
HXLINE(  50)		return result;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(FlxTypedGroup_obj,overlaps,return )

 ::flixel::group::FlxTypedGroup FlxTypedGroup_obj::resolveGroup( ::flixel::FlxBasic ObjectOrGroup){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_55_resolveGroup)
HXLINE(  56)		 ::flixel::group::FlxTypedGroup group = null();
HXLINE(  57)		if (::hx::IsNotNull( ObjectOrGroup )) {
HXLINE(  59)			if ((ObjectOrGroup->flixelType == 2)) {
HXLINE(  61)				group = ( ( ::flixel::group::FlxTypedGroup)(ObjectOrGroup) );
            			}
            			else {
HXLINE(  63)				if ((ObjectOrGroup->flixelType == 4)) {
HXLINE(  65)					 ::flixel::group::FlxTypedSpriteGroup spriteGroup = ( ( ::flixel::group::FlxTypedSpriteGroup)(ObjectOrGroup) );
HXLINE(  66)					group = spriteGroup->group;
            				}
            			}
            		}
HXLINE(  69)		return group;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxTypedGroup_obj,resolveGroup,return )


::hx::ObjectPtr< FlxTypedGroup_obj > FlxTypedGroup_obj::__new(::hx::Null< int >  __o_MaxSize) {
	::hx::ObjectPtr< FlxTypedGroup_obj > __this = new FlxTypedGroup_obj();
	__this->__construct(__o_MaxSize);
	return __this;
}

::hx::ObjectPtr< FlxTypedGroup_obj > FlxTypedGroup_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< int >  __o_MaxSize) {
	FlxTypedGroup_obj *__this = (FlxTypedGroup_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxTypedGroup_obj), true, "flixel.group.FlxTypedGroup"));
	*(void **)__this = FlxTypedGroup_obj::_hx_vtable;
	__this->__construct(__o_MaxSize);
	return __this;
}

FlxTypedGroup_obj::FlxTypedGroup_obj()
{
}

void FlxTypedGroup_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTypedGroup);
	HX_MARK_MEMBER_NAME(members,"members");
	HX_MARK_MEMBER_NAME(maxSize,"maxSize");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(_memberAdded,"_memberAdded");
	HX_MARK_MEMBER_NAME(_memberRemoved,"_memberRemoved");
	HX_MARK_MEMBER_NAME(_marker,"_marker");
	 ::flixel::FlxBasic_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxTypedGroup_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(members,"members");
	HX_VISIT_MEMBER_NAME(maxSize,"maxSize");
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(_memberAdded,"_memberAdded");
	HX_VISIT_MEMBER_NAME(_memberRemoved,"_memberRemoved");
	HX_VISIT_MEMBER_NAME(_marker,"_marker");
	 ::flixel::FlxBasic_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxTypedGroup_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return ::hx::Val( draw_dyn() ); }
		if (HX_FIELD_EQ(inName,"sort") ) { return ::hx::Val( sort_dyn() ); }
		if (HX_FIELD_EQ(inName,"kill") ) { return ::hx::Val( kill_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return ::hx::Val( clear_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return ::hx::Val( length ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		if (HX_FIELD_EQ(inName,"insert") ) { return ::hx::Val( insert_dyn() ); }
		if (HX_FIELD_EQ(inName,"remove") ) { return ::hx::Val( remove_dyn() ); }
		if (HX_FIELD_EQ(inName,"revive") ) { return ::hx::Val( revive_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"members") ) { return ::hx::Val( members ); }
		if (HX_FIELD_EQ(inName,"maxSize") ) { return ::hx::Val( maxSize ); }
		if (HX_FIELD_EQ(inName,"_marker") ) { return ::hx::Val( _marker ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		if (HX_FIELD_EQ(inName,"recycle") ) { return ::hx::Val( recycle_dyn() ); }
		if (HX_FIELD_EQ(inName,"replace") ) { return ::hx::Val( replace_dyn() ); }
		if (HX_FIELD_EQ(inName,"forEach") ) { return ::hx::Val( forEach_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"iterator") ) { return ::hx::Val( iterator_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"countDead") ) { return ::hx::Val( countDead_dyn() ); }
		if (HX_FIELD_EQ(inName,"getRandom") ) { return ::hx::Val( getRandom_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"memberAdded") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_memberAdded() ); }
		if (HX_FIELD_EQ(inName,"countLiving") ) { return ::hx::Val( countLiving_dyn() ); }
		if (HX_FIELD_EQ(inName,"forEachDead") ) { return ::hx::Val( forEachDead_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_maxSize") ) { return ::hx::Val( set_maxSize_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_memberAdded") ) { return ::hx::Val( _memberAdded ); }
		if (HX_FIELD_EQ(inName,"getFirstNull") ) { return ::hx::Val( getFirstNull_dyn() ); }
		if (HX_FIELD_EQ(inName,"getFirstDead") ) { return ::hx::Val( getFirstDead_dyn() ); }
		if (HX_FIELD_EQ(inName,"forEachAlive") ) { return ::hx::Val( forEachAlive_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"memberRemoved") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_memberRemoved() ); }
		if (HX_FIELD_EQ(inName,"getFirstAlive") ) { return ::hx::Val( getFirstAlive_dyn() ); }
		if (HX_FIELD_EQ(inName,"forEachExists") ) { return ::hx::Val( forEachExists_dyn() ); }
		if (HX_FIELD_EQ(inName,"forEachOfType") ) { return ::hx::Val( forEachOfType_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_memberRemoved") ) { return ::hx::Val( _memberRemoved ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_memberAdded") ) { return ::hx::Val( get_memberAdded_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getFirstExisting") ) { return ::hx::Val( getFirstExisting_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getFirstAvailable") ) { return ::hx::Val( getFirstAvailable_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_memberRemoved") ) { return ::hx::Val( get_memberRemoved_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"recycleCreateObject") ) { return ::hx::Val( recycleCreateObject_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxTypedGroup_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"overlaps") ) { outValue = overlaps_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"resolveGroup") ) { outValue = resolveGroup_dyn(); return true; }
	}
	return false;
}

::hx::Val FlxTypedGroup_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"members") ) { members=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxSize") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_maxSize(inValue.Cast< int >()) );maxSize=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_marker") ) { _marker=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_memberAdded") ) { _memberAdded=inValue.Cast<  ::flixel::util::_FlxSignal::FlxSignal1 >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_memberRemoved") ) { _memberRemoved=inValue.Cast<  ::flixel::util::_FlxSignal::FlxSignal1 >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTypedGroup_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("members",d9,2c,70,1a));
	outFields->push(HX_("maxSize",85,f9,83,cc));
	outFields->push(HX_("length",e6,94,07,9f));
	outFields->push(HX_("memberAdded",06,9c,46,1e));
	outFields->push(HX_("memberRemoved",66,c4,b7,90));
	outFields->push(HX_("_memberAdded",07,4a,50,84));
	outFields->push(HX_("_memberRemoved",a7,b4,09,cf));
	outFields->push(HX_("_marker",59,87,e7,28));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxTypedGroup_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(int)offsetof(FlxTypedGroup_obj,members),HX_("members",d9,2c,70,1a)},
	{::hx::fsInt,(int)offsetof(FlxTypedGroup_obj,maxSize),HX_("maxSize",85,f9,83,cc)},
	{::hx::fsInt,(int)offsetof(FlxTypedGroup_obj,length),HX_("length",e6,94,07,9f)},
	{::hx::fsObject /*  ::flixel::util::_FlxSignal::FlxSignal1 */ ,(int)offsetof(FlxTypedGroup_obj,_memberAdded),HX_("_memberAdded",07,4a,50,84)},
	{::hx::fsObject /*  ::flixel::util::_FlxSignal::FlxSignal1 */ ,(int)offsetof(FlxTypedGroup_obj,_memberRemoved),HX_("_memberRemoved",a7,b4,09,cf)},
	{::hx::fsInt,(int)offsetof(FlxTypedGroup_obj,_marker),HX_("_marker",59,87,e7,28)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxTypedGroup_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxTypedGroup_obj_sMemberFields[] = {
	HX_("members",d9,2c,70,1a),
	HX_("maxSize",85,f9,83,cc),
	HX_("length",e6,94,07,9f),
	HX_("_memberAdded",07,4a,50,84),
	HX_("_memberRemoved",a7,b4,09,cf),
	HX_("_marker",59,87,e7,28),
	HX_("destroy",fa,2c,86,24),
	HX_("update",09,86,05,87),
	HX_("draw",04,2c,70,42),
	HX_("add",21,f2,49,00),
	HX_("insert",39,43,dd,9d),
	HX_("recycle",13,10,8c,37),
	HX_("recycleCreateObject",8e,6b,54,8e),
	HX_("remove",44,9c,88,04),
	HX_("replace",34,48,28,ab),
	HX_("sort",5e,27,58,4c),
	HX_("getFirstAvailable",af,ea,b3,05),
	HX_("getFirstNull",61,b7,33,0f),
	HX_("getFirstExisting",65,a4,6c,ee),
	HX_("getFirstAlive",b3,09,e2,bb),
	HX_("getFirstDead",7e,67,8b,08),
	HX_("countLiving",58,d9,8a,30),
	HX_("countDead",13,d3,86,54),
	HX_("getRandom",39,ab,e5,33),
	HX_("clear",8d,71,5b,48),
	HX_("kill",9e,df,09,47),
	HX_("revive",55,fa,76,0a),
	HX_("iterator",ee,49,9a,93),
	HX_("forEach",aa,29,be,c4),
	HX_("forEachAlive",c3,61,b7,99),
	HX_("forEachDead",6e,c1,e4,78),
	HX_("forEachExists",26,57,f8,68),
	HX_("forEachOfType",bb,90,76,fd),
	HX_("set_maxSize",a8,60,eb,5c),
	HX_("get_memberAdded",9d,53,28,df),
	HX_("get_memberRemoved",bd,cf,27,97),
	::String(null()) };

::hx::Class FlxTypedGroup_obj::__mClass;

static ::String FlxTypedGroup_obj_sStaticFields[] = {
	HX_("overlaps",0c,d3,2a,45),
	HX_("resolveGroup",b3,f8,79,d2),
	::String(null())
};

void FlxTypedGroup_obj::__register()
{
	FlxTypedGroup_obj _hx_dummy;
	FlxTypedGroup_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.group.FlxTypedGroup",e6,b8,51,d3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxTypedGroup_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxTypedGroup_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxTypedGroup_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxTypedGroup_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxTypedGroup_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxTypedGroup_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace group
