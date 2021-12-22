#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_ClientPrefs
#include <ClientPrefs.h>
#endif
#ifndef INCLUDED_HealthIcon
#include <HealthIcon.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_eb8a54c9c53eb75f_9_new,"HealthIcon","new",0x9b7badc7,"HealthIcon.new","HealthIcon.hx",9,0xf7836789)
static const Float _hx_array_data_f8f9be55_1[] = {
	(Float)0,(Float)0,(Float)0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_eb8a54c9c53eb75f_27_update,"HealthIcon","update",0x767ac302,"HealthIcon.update","HealthIcon.hx",27,0xf7836789)
HX_LOCAL_STACK_FRAME(_hx_pos_eb8a54c9c53eb75f_41_swapOldIcon,"HealthIcon","swapOldIcon",0xe3496dd4,"HealthIcon.swapOldIcon","HealthIcon.hx",41,0xf7836789)
HX_LOCAL_STACK_FRAME(_hx_pos_eb8a54c9c53eb75f_47_changeIcon,"HealthIcon","changeIcon",0xd785ca82,"HealthIcon.changeIcon","HealthIcon.hx",47,0xf7836789)
static const int _hx_array_data_f8f9be55_5[] = {
	(int)0,(int)1,(int)2,
};
HX_LOCAL_STACK_FRAME(_hx_pos_eb8a54c9c53eb75f_72_updateHitbox,"HealthIcon","updateHitbox",0x4656523a,"HealthIcon.updateHitbox","HealthIcon.hx",72,0xf7836789)
HX_LOCAL_STACK_FRAME(_hx_pos_eb8a54c9c53eb75f_79_bounce,"HealthIcon","bounce",0x5592c281,"HealthIcon.bounce","HealthIcon.hx",79,0xf7836789)
HX_LOCAL_STACK_FRAME(_hx_pos_eb8a54c9c53eb75f_87_getCharacter,"HealthIcon","getCharacter",0x409335ec,"HealthIcon.getCharacter","HealthIcon.hx",87,0xf7836789)

void HealthIcon_obj::__construct(::String __o__hx_char,::hx::Null< bool >  __o_isPlayer){
            		::String _hx_char = __o__hx_char;
            		if (::hx::IsNull(__o__hx_char)) _hx_char = HX_("bf",c4,55,00,00);
            		bool isPlayer = __o_isPlayer.Default(false);
            	HX_STACKFRAME(&_hx_pos_eb8a54c9c53eb75f_9_new)
HXLINE(  45)		this->iconOffsets = ::Array_obj< Float >::fromData( _hx_array_data_f8f9be55_1,3);
HXLINE(  15)		this->_hx_char = HX_("",00,00,00,00);
HXLINE(  14)		this->isPlayer = false;
HXLINE(  13)		this->isOldIcon = false;
HXLINE(  12)		this->canBounce = false;
HXLINE(  19)		super::__construct(null(),null(),null());
HXLINE(  20)		this->isOldIcon = (_hx_char == HX_("bf-old",5e,ba,eb,07));
HXLINE(  21)		this->isPlayer = isPlayer;
HXLINE(  22)		this->changeIcon(_hx_char);
HXLINE(  23)		this->scrollFactor->set(null(),null());
            	}

Dynamic HealthIcon_obj::__CreateEmpty() { return new HealthIcon_obj; }

void *HealthIcon_obj::_hx_vtable = 0;

Dynamic HealthIcon_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< HealthIcon_obj > _hx_result = new HealthIcon_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool HealthIcon_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2c01639b) {
		if (inClassId<=(int)0x10bce115) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x10bce115;
		} else {
			return inClassId==(int)0x2c01639b;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void HealthIcon_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_eb8a54c9c53eb75f_27_update)
HXLINE(  28)		this->super::update(elapsed);
HXLINE(  30)		if (::hx::IsNotNull( this->sprTracker )) {
HXLINE(  31)			Float _hx_tmp = this->sprTracker->x;
HXDLIN(  31)			Float _hx_tmp1 = ((_hx_tmp + this->sprTracker->get_width()) + 10);
HXDLIN(  31)			this->setPosition(_hx_tmp1,(this->sprTracker->y - ( (Float)(30) )));
            		}
HXLINE(  33)		if (this->canBounce) {
HXLINE(  34)			Float mult = (1 + (::Math_obj::max(( (Float)(0) ),::Math_obj::min(( (Float)(1) ),(( (Float)(1) ) - (elapsed * ( (Float)(9) ))))) * (this->scale->x - ( (Float)(1) ))));
HXLINE(  35)			this->scale->set(mult,mult);
HXLINE(  36)			this->updateHitbox();
            		}
            	}


void HealthIcon_obj::swapOldIcon(){
            	HX_STACKFRAME(&_hx_pos_eb8a54c9c53eb75f_41_swapOldIcon)
HXDLIN(  41)		if ((this->isOldIcon = !(this->isOldIcon))) {
HXDLIN(  41)			this->changeIcon(HX_("bf-old",5e,ba,eb,07));
            		}
            		else {
HXLINE(  42)			this->changeIcon(HX_("bf",c4,55,00,00));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(HealthIcon_obj,swapOldIcon,(void))

void HealthIcon_obj::changeIcon(::String _hx_char){
            	HX_STACKFRAME(&_hx_pos_eb8a54c9c53eb75f_47_changeIcon)
HXDLIN(  47)		if ((this->_hx_char != _hx_char)) {
HXLINE(  48)			::String name = (HX_("icons/",15,dc,d6,45) + _hx_char);
HXLINE(  49)			::String key = ((HX_("images/",77,50,74,c1) + name) + HX_(".png",3b,2d,bd,1e));
HXDLIN(  49)			bool _hx_tmp;
HXDLIN(  49)			bool _hx_tmp1;
HXDLIN(  49)			::String key1 = ((::Paths_obj::currentModDirectory + HX_("/",2f,00,00,00)) + key);
HXDLIN(  49)			if (::hx::IsNull( key1 )) {
HXLINE(  49)				key1 = HX_("",00,00,00,00);
            			}
HXDLIN(  49)			if (!(::sys::FileSystem_obj::exists((HX_("mods/",9e,2f,58,0c) + key1)))) {
HXLINE(  49)				::String key1 = key;
HXDLIN(  49)				if (::hx::IsNull( key1 )) {
HXLINE(  49)					key1 = HX_("",00,00,00,00);
            				}
HXDLIN(  49)				_hx_tmp1 = ::sys::FileSystem_obj::exists((HX_("mods/",9e,2f,58,0c) + key1));
            			}
            			else {
HXLINE(  49)				_hx_tmp1 = true;
            			}
HXDLIN(  49)			if (_hx_tmp1) {
HXLINE(  49)				_hx_tmp = true;
            			}
            			else {
HXLINE(  49)				if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(key,HX_("IMAGE",3b,57,57,3b),null()),null())) {
HXLINE(  49)					_hx_tmp = true;
            				}
            				else {
HXLINE(  49)					_hx_tmp = false;
            				}
            			}
HXDLIN(  49)			if (!(_hx_tmp)) {
HXLINE(  49)				name = (HX_("icons/icon-",5f,da,21,72) + _hx_char);
            			}
HXLINE(  50)			::String key2 = ((HX_("images/",77,50,74,c1) + name) + HX_(".png",3b,2d,bd,1e));
HXDLIN(  50)			bool _hx_tmp2;
HXDLIN(  50)			bool _hx_tmp3;
HXDLIN(  50)			::String key3 = ((::Paths_obj::currentModDirectory + HX_("/",2f,00,00,00)) + key2);
HXDLIN(  50)			if (::hx::IsNull( key3 )) {
HXLINE(  50)				key3 = HX_("",00,00,00,00);
            			}
HXDLIN(  50)			if (!(::sys::FileSystem_obj::exists((HX_("mods/",9e,2f,58,0c) + key3)))) {
HXLINE(  50)				::String key = key2;
HXDLIN(  50)				if (::hx::IsNull( key )) {
HXLINE(  50)					key = HX_("",00,00,00,00);
            				}
HXDLIN(  50)				_hx_tmp3 = ::sys::FileSystem_obj::exists((HX_("mods/",9e,2f,58,0c) + key));
            			}
            			else {
HXLINE(  50)				_hx_tmp3 = true;
            			}
HXDLIN(  50)			if (_hx_tmp3) {
HXLINE(  50)				_hx_tmp2 = true;
            			}
            			else {
HXLINE(  50)				if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(key2,HX_("IMAGE",3b,57,57,3b),null()),null())) {
HXLINE(  50)					_hx_tmp2 = true;
            				}
            				else {
HXLINE(  50)					_hx_tmp2 = false;
            				}
            			}
HXDLIN(  50)			if (!(_hx_tmp2)) {
HXLINE(  50)				name = HX_("icons/icon-face",7c,aa,dd,e7);
            			}
HXLINE(  51)			::String library = null();
HXDLIN(  51)			 ::flixel::graphics::FlxGraphic imageToReturn = ::Paths_obj::addCustomGraphic(name);
HXDLIN(  51)			 ::Dynamic file;
HXDLIN(  51)			if (::hx::IsNotNull( imageToReturn )) {
HXLINE(  51)				file = imageToReturn;
            			}
            			else {
HXLINE(  51)				file = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + name) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
            			}
HXLINE(  53)			this->loadGraphic(file,null(),null(),null(),null(),null());
HXLINE(  54)			int _hx_tmp4 = ::Math_obj::floor((this->get_width() / ( (Float)(3) )));
HXDLIN(  54)			this->loadGraphic(file,true,_hx_tmp4,::Math_obj::floor(this->get_height()),null(),null());
HXLINE(  55)			this->iconOffsets[0] = ((this->get_width() - ( (Float)(150) )) / ( (Float)(2) ));
HXLINE(  56)			this->iconOffsets[1] = ((this->get_width() - ( (Float)(150) )) / ( (Float)(2) ));
HXLINE(  57)			this->iconOffsets[2] = ((this->get_width() - ( (Float)(150) )) / ( (Float)(2) ));
HXLINE(  58)			this->updateHitbox();
HXLINE(  60)			this->animation->add(_hx_char,::Array_obj< int >::fromData( _hx_array_data_f8f9be55_5,3),0,false,this->isPlayer,null());
HXLINE(  61)			this->animation->play(_hx_char,null(),null(),null());
HXLINE(  62)			this->_hx_char = _hx_char;
HXLINE(  64)			this->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE(  65)			if (::StringTools_obj::endsWith(_hx_char,HX_("-pixel",39,03,b3,c0))) {
HXLINE(  66)				this->set_antialiasing(false);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(HealthIcon_obj,changeIcon,(void))

void HealthIcon_obj::updateHitbox(){
            	HX_STACKFRAME(&_hx_pos_eb8a54c9c53eb75f_72_updateHitbox)
HXLINE(  73)		this->super::updateHitbox();
HXLINE(  74)		this->offset->set_x(this->iconOffsets->__get(0));
HXLINE(  75)		this->offset->set_y(this->iconOffsets->__get(1));
            	}


void HealthIcon_obj::bounce(){
            	HX_STACKFRAME(&_hx_pos_eb8a54c9c53eb75f_79_bounce)
HXDLIN(  79)		if (this->canBounce) {
HXLINE(  80)			Float mult = ((Float)1.2);
HXLINE(  81)			this->scale->set(mult,mult);
HXLINE(  82)			this->updateHitbox();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(HealthIcon_obj,bounce,(void))

::String HealthIcon_obj::getCharacter(){
            	HX_STACKFRAME(&_hx_pos_eb8a54c9c53eb75f_87_getCharacter)
HXDLIN(  87)		return this->_hx_char;
            	}


HX_DEFINE_DYNAMIC_FUNC0(HealthIcon_obj,getCharacter,return )


::hx::ObjectPtr< HealthIcon_obj > HealthIcon_obj::__new(::String __o__hx_char,::hx::Null< bool >  __o_isPlayer) {
	::hx::ObjectPtr< HealthIcon_obj > __this = new HealthIcon_obj();
	__this->__construct(__o__hx_char,__o_isPlayer);
	return __this;
}

::hx::ObjectPtr< HealthIcon_obj > HealthIcon_obj::__alloc(::hx::Ctx *_hx_ctx,::String __o__hx_char,::hx::Null< bool >  __o_isPlayer) {
	HealthIcon_obj *__this = (HealthIcon_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(HealthIcon_obj), true, "HealthIcon"));
	*(void **)__this = HealthIcon_obj::_hx_vtable;
	__this->__construct(__o__hx_char,__o_isPlayer);
	return __this;
}

HealthIcon_obj::HealthIcon_obj()
{
}

void HealthIcon_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HealthIcon);
	HX_MARK_MEMBER_NAME(sprTracker,"sprTracker");
	HX_MARK_MEMBER_NAME(canBounce,"canBounce");
	HX_MARK_MEMBER_NAME(isOldIcon,"isOldIcon");
	HX_MARK_MEMBER_NAME(isPlayer,"isPlayer");
	HX_MARK_MEMBER_NAME(_hx_char,"char");
	HX_MARK_MEMBER_NAME(iconOffsets,"iconOffsets");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void HealthIcon_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(sprTracker,"sprTracker");
	HX_VISIT_MEMBER_NAME(canBounce,"canBounce");
	HX_VISIT_MEMBER_NAME(isOldIcon,"isOldIcon");
	HX_VISIT_MEMBER_NAME(isPlayer,"isPlayer");
	HX_VISIT_MEMBER_NAME(_hx_char,"char");
	HX_VISIT_MEMBER_NAME(iconOffsets,"iconOffsets");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val HealthIcon_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"char") ) { return ::hx::Val( _hx_char ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		if (HX_FIELD_EQ(inName,"bounce") ) { return ::hx::Val( bounce_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isPlayer") ) { return ::hx::Val( isPlayer ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"canBounce") ) { return ::hx::Val( canBounce ); }
		if (HX_FIELD_EQ(inName,"isOldIcon") ) { return ::hx::Val( isOldIcon ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sprTracker") ) { return ::hx::Val( sprTracker ); }
		if (HX_FIELD_EQ(inName,"changeIcon") ) { return ::hx::Val( changeIcon_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"swapOldIcon") ) { return ::hx::Val( swapOldIcon_dyn() ); }
		if (HX_FIELD_EQ(inName,"iconOffsets") ) { return ::hx::Val( iconOffsets ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"updateHitbox") ) { return ::hx::Val( updateHitbox_dyn() ); }
		if (HX_FIELD_EQ(inName,"getCharacter") ) { return ::hx::Val( getCharacter_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val HealthIcon_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"char") ) { _hx_char=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isPlayer") ) { isPlayer=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"canBounce") ) { canBounce=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isOldIcon") ) { isOldIcon=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sprTracker") ) { sprTracker=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"iconOffsets") ) { iconOffsets=inValue.Cast< ::Array< Float > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HealthIcon_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("sprTracker",03,a3,e2,78));
	outFields->push(HX_("canBounce",b8,d9,63,b8));
	outFields->push(HX_("isOldIcon",f6,08,f6,fe));
	outFields->push(HX_("isPlayer",eb,86,22,90));
	outFields->push(HX_("char",d6,5e,bf,41));
	outFields->push(HX_("iconOffsets",07,1b,16,e7));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo HealthIcon_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(HealthIcon_obj,sprTracker),HX_("sprTracker",03,a3,e2,78)},
	{::hx::fsBool,(int)offsetof(HealthIcon_obj,canBounce),HX_("canBounce",b8,d9,63,b8)},
	{::hx::fsBool,(int)offsetof(HealthIcon_obj,isOldIcon),HX_("isOldIcon",f6,08,f6,fe)},
	{::hx::fsBool,(int)offsetof(HealthIcon_obj,isPlayer),HX_("isPlayer",eb,86,22,90)},
	{::hx::fsString,(int)offsetof(HealthIcon_obj,_hx_char),HX_("char",d6,5e,bf,41)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(HealthIcon_obj,iconOffsets),HX_("iconOffsets",07,1b,16,e7)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *HealthIcon_obj_sStaticStorageInfo = 0;
#endif

static ::String HealthIcon_obj_sMemberFields[] = {
	HX_("sprTracker",03,a3,e2,78),
	HX_("canBounce",b8,d9,63,b8),
	HX_("isOldIcon",f6,08,f6,fe),
	HX_("isPlayer",eb,86,22,90),
	HX_("char",d6,5e,bf,41),
	HX_("update",09,86,05,87),
	HX_("swapOldIcon",6d,51,5b,02),
	HX_("iconOffsets",07,1b,16,e7),
	HX_("changeIcon",09,1d,fc,1f),
	HX_("updateHitbox",81,94,eb,56),
	HX_("bounce",88,85,1d,66),
	HX_("getCharacter",33,78,28,51),
	::String(null()) };

::hx::Class HealthIcon_obj::__mClass;

void HealthIcon_obj::__register()
{
	HealthIcon_obj _hx_dummy;
	HealthIcon_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("HealthIcon",55,be,f9,f8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(HealthIcon_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< HealthIcon_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HealthIcon_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HealthIcon_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

