#include <hxcpp.h>

#ifndef INCLUDED_ModchartText
#include <ModchartText.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
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
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIState
#include <flixel/addons/ui/FlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#include <flixel/addons/ui/interfaces/IFlxUIState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_552a6f94cb341f6a_1827_new,"ModchartText","new",0x58e3633b,"ModchartText.new","FunkinLua.hx",1827,0x00117937)

void ModchartText_obj::__construct(Float x,Float y,::String text,Float width){
            	HX_STACKFRAME(&_hx_pos_552a6f94cb341f6a_1827_new)
HXLINE(1829)		this->wasAdded = false;
HXLINE(1832)		super::__construct(x,y,width,text,16,null());
HXLINE(1833)		::String file = ::Paths_obj::modFolders((HX_("fonts/",eb,13,ef,fa) + HX_("vcr.ttf",9d,d2,a7,82)));
HXDLIN(1833)		::String _hx_tmp;
HXDLIN(1833)		if (::sys::FileSystem_obj::exists(file)) {
HXLINE(1833)			_hx_tmp = file;
            		}
            		else {
HXLINE(1833)			_hx_tmp = (HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82));
            		}
HXDLIN(1833)		this->setFormat(_hx_tmp,16,-1,HX_("center",d5,25,db,05),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE(1834)		this->set_cameras(::Array_obj< ::Dynamic>::__new(1)->init(0,::PlayState_obj::instance->camHUD));
HXLINE(1835)		this->scrollFactor->set(null(),null());
HXLINE(1836)		this->set_borderSize(( (Float)(2) ));
            	}

Dynamic ModchartText_obj::__CreateEmpty() { return new ModchartText_obj; }

void *ModchartText_obj::_hx_vtable = 0;

Dynamic ModchartText_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ModchartText_obj > _hx_result = new ModchartText_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool ModchartText_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x752f90b6) {
		if (inClassId<=(int)0x2c01639b) {
			if (inClassId<=(int)0x07c063ed) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x07c063ed;
			} else {
				return inClassId==(int)0x2c01639b;
			}
		} else {
			return inClassId==(int)0x752f90b6;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}


::hx::ObjectPtr< ModchartText_obj > ModchartText_obj::__new(Float x,Float y,::String text,Float width) {
	::hx::ObjectPtr< ModchartText_obj > __this = new ModchartText_obj();
	__this->__construct(x,y,text,width);
	return __this;
}

::hx::ObjectPtr< ModchartText_obj > ModchartText_obj::__alloc(::hx::Ctx *_hx_ctx,Float x,Float y,::String text,Float width) {
	ModchartText_obj *__this = (ModchartText_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ModchartText_obj), true, "ModchartText"));
	*(void **)__this = ModchartText_obj::_hx_vtable;
	__this->__construct(x,y,text,width);
	return __this;
}

ModchartText_obj::ModchartText_obj()
{
}

::hx::Val ModchartText_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"wasAdded") ) { return ::hx::Val( wasAdded ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ModchartText_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"wasAdded") ) { wasAdded=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ModchartText_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("wasAdded",d7,ce,90,02));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ModchartText_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(ModchartText_obj,wasAdded),HX_("wasAdded",d7,ce,90,02)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ModchartText_obj_sStaticStorageInfo = 0;
#endif

static ::String ModchartText_obj_sMemberFields[] = {
	HX_("wasAdded",d7,ce,90,02),
	::String(null()) };

::hx::Class ModchartText_obj::__mClass;

void ModchartText_obj::__register()
{
	ModchartText_obj _hx_dummy;
	ModchartText_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("ModchartText",c9,a9,94,ec);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ModchartText_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ModchartText_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ModchartText_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ModchartText_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

