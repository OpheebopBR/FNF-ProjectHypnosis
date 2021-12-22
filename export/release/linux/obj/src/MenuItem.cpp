#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_ClientPrefs
#include <ClientPrefs.h>
#endif
#ifndef INCLUDED_MenuItem
#include <MenuItem.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
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
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a2a86a23843e0eb5_9_new,"MenuItem","new",0x11397064,"MenuItem.new","MenuItem.hx",9,0x14bda78c)
HX_LOCAL_STACK_FRAME(_hx_pos_a2a86a23843e0eb5_26_startFlashing,"MenuItem","startFlashing",0xa64b34b8,"MenuItem.startFlashing","MenuItem.hx",26,0x14bda78c)
HX_LOCAL_STACK_FRAME(_hx_pos_a2a86a23843e0eb5_36_update,"MenuItem","update",0x1808c085,"MenuItem.update","MenuItem.hx",36,0x14bda78c)

void MenuItem_obj::__construct(Float x,Float y,::String __o_weekName){
            		::String weekName = __o_weekName;
            		if (::hx::IsNull(__o_weekName)) weekName = HX_("",00,00,00,00);
            	HX_STACKFRAME(&_hx_pos_a2a86a23843e0eb5_9_new)
HXLINE(  33)		this->fakeFramerate = ::Math_obj::round(((( (Float)(1) ) / ::flixel::FlxG_obj::elapsed) / ( (Float)(10) )));
HXLINE(  22)		this->isFlashing = false;
HXLINE(  12)		this->flashingInt = 0;
HXLINE(  11)		this->targetY = ((Float)0);
HXLINE(  16)		super::__construct(x,y,null());
HXLINE(  17)		::String key = (HX_("storymenu/",9b,19,38,af) + weekName);
HXDLIN(  17)		::String library = null();
HXDLIN(  17)		 ::flixel::graphics::FlxGraphic imageToReturn = ::Paths_obj::addCustomGraphic(key);
HXDLIN(  17)		 ::Dynamic _hx_tmp;
HXDLIN(  17)		if (::hx::IsNotNull( imageToReturn )) {
HXLINE(  17)			_hx_tmp = imageToReturn;
            		}
            		else {
HXLINE(  17)			_hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + key) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
            		}
HXDLIN(  17)		this->loadGraphic(_hx_tmp,null(),null(),null(),null(),null());
HXLINE(  19)		this->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
            	}

Dynamic MenuItem_obj::__CreateEmpty() { return new MenuItem_obj; }

void *MenuItem_obj::_hx_vtable = 0;

Dynamic MenuItem_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MenuItem_obj > _hx_result = new MenuItem_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool MenuItem_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2f356bfa) {
		if (inClassId<=(int)0x2c01639b) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2c01639b;
		} else {
			return inClassId==(int)0x2f356bfa;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void MenuItem_obj::startFlashing(){
            	HX_STACKFRAME(&_hx_pos_a2a86a23843e0eb5_26_startFlashing)
HXDLIN(  26)		this->isFlashing = true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MenuItem_obj,startFlashing,(void))

void MenuItem_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_a2a86a23843e0eb5_36_update)
HXLINE(  37)		this->super::update(elapsed);
HXLINE(  38)		Float a = this->y;
HXDLIN(  38)		this->set_y((a + (::Math_obj::max(( (Float)(0) ),::Math_obj::min(( (Float)(1) ),(elapsed * ((Float)10.2)))) * (((this->targetY * ( (Float)(120) )) + 480) - a))));
HXLINE(  40)		if (this->isFlashing) {
HXLINE(  41)			 ::MenuItem _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  41)			_hx_tmp->flashingInt = (_hx_tmp->flashingInt + 1);
            		}
HXLINE(  43)		if ((::hx::Mod(this->flashingInt,this->fakeFramerate) >= ::Math_obj::floor((( (Float)(this->fakeFramerate) ) / ( (Float)(2) ))))) {
HXLINE(  44)			this->set_color(-13369345);
            		}
            		else {
HXLINE(  46)			this->set_color(-1);
            		}
            	}



::hx::ObjectPtr< MenuItem_obj > MenuItem_obj::__new(Float x,Float y,::String __o_weekName) {
	::hx::ObjectPtr< MenuItem_obj > __this = new MenuItem_obj();
	__this->__construct(x,y,__o_weekName);
	return __this;
}

::hx::ObjectPtr< MenuItem_obj > MenuItem_obj::__alloc(::hx::Ctx *_hx_ctx,Float x,Float y,::String __o_weekName) {
	MenuItem_obj *__this = (MenuItem_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MenuItem_obj), true, "MenuItem"));
	*(void **)__this = MenuItem_obj::_hx_vtable;
	__this->__construct(x,y,__o_weekName);
	return __this;
}

MenuItem_obj::MenuItem_obj()
{
}

::hx::Val MenuItem_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"targetY") ) { return ::hx::Val( targetY ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isFlashing") ) { return ::hx::Val( isFlashing ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"flashingInt") ) { return ::hx::Val( flashingInt ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"startFlashing") ) { return ::hx::Val( startFlashing_dyn() ); }
		if (HX_FIELD_EQ(inName,"fakeFramerate") ) { return ::hx::Val( fakeFramerate ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val MenuItem_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"targetY") ) { targetY=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isFlashing") ) { isFlashing=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"flashingInt") ) { flashingInt=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"fakeFramerate") ) { fakeFramerate=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MenuItem_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("targetY",e8,f3,67,88));
	outFields->push(HX_("flashingInt",dd,0a,bd,91));
	outFields->push(HX_("isFlashing",3c,97,97,14));
	outFields->push(HX_("fakeFramerate",38,6f,b1,5e));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MenuItem_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(MenuItem_obj,targetY),HX_("targetY",e8,f3,67,88)},
	{::hx::fsInt,(int)offsetof(MenuItem_obj,flashingInt),HX_("flashingInt",dd,0a,bd,91)},
	{::hx::fsBool,(int)offsetof(MenuItem_obj,isFlashing),HX_("isFlashing",3c,97,97,14)},
	{::hx::fsInt,(int)offsetof(MenuItem_obj,fakeFramerate),HX_("fakeFramerate",38,6f,b1,5e)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *MenuItem_obj_sStaticStorageInfo = 0;
#endif

static ::String MenuItem_obj_sMemberFields[] = {
	HX_("targetY",e8,f3,67,88),
	HX_("flashingInt",dd,0a,bd,91),
	HX_("isFlashing",3c,97,97,14),
	HX_("startFlashing",b4,e7,a3,9e),
	HX_("fakeFramerate",38,6f,b1,5e),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class MenuItem_obj::__mClass;

void MenuItem_obj::__register()
{
	MenuItem_obj _hx_dummy;
	MenuItem_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("MenuItem",72,ae,e0,25);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MenuItem_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MenuItem_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MenuItem_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MenuItem_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

