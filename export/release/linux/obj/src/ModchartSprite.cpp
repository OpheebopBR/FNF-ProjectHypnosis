#include <hxcpp.h>

#ifndef INCLUDED_ModchartSprite
#include <ModchartSprite.h>
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
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2b7f7cc83b4d0792_1821_new,"ModchartSprite","new",0xbc67fd93,"ModchartSprite.new","FunkinLua.hx",1821,0x00117937)

void ModchartSprite_obj::__construct( ::Dynamic X, ::Dynamic Y, ::Dynamic SimpleGraphic){
            	HX_STACKFRAME(&_hx_pos_2b7f7cc83b4d0792_1821_new)
HXLINE(1823)		this->wasAdded = false;
HXLINE(1821)		super::__construct(X,Y,SimpleGraphic);
            	}

Dynamic ModchartSprite_obj::__CreateEmpty() { return new ModchartSprite_obj; }

void *ModchartSprite_obj::_hx_vtable = 0;

Dynamic ModchartSprite_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ModchartSprite_obj > _hx_result = new ModchartSprite_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool ModchartSprite_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2c01639b) {
		if (inClassId<=(int)0x245adc71) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x245adc71;
		} else {
			return inClassId==(int)0x2c01639b;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}


::hx::ObjectPtr< ModchartSprite_obj > ModchartSprite_obj::__new( ::Dynamic X, ::Dynamic Y, ::Dynamic SimpleGraphic) {
	::hx::ObjectPtr< ModchartSprite_obj > __this = new ModchartSprite_obj();
	__this->__construct(X,Y,SimpleGraphic);
	return __this;
}

::hx::ObjectPtr< ModchartSprite_obj > ModchartSprite_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic X, ::Dynamic Y, ::Dynamic SimpleGraphic) {
	ModchartSprite_obj *__this = (ModchartSprite_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ModchartSprite_obj), true, "ModchartSprite"));
	*(void **)__this = ModchartSprite_obj::_hx_vtable;
	__this->__construct(X,Y,SimpleGraphic);
	return __this;
}

ModchartSprite_obj::ModchartSprite_obj()
{
}

::hx::Val ModchartSprite_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"wasAdded") ) { return ::hx::Val( wasAdded ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ModchartSprite_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"wasAdded") ) { wasAdded=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ModchartSprite_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("wasAdded",d7,ce,90,02));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ModchartSprite_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(ModchartSprite_obj,wasAdded),HX_("wasAdded",d7,ce,90,02)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ModchartSprite_obj_sStaticStorageInfo = 0;
#endif

static ::String ModchartSprite_obj_sMemberFields[] = {
	HX_("wasAdded",d7,ce,90,02),
	::String(null()) };

::hx::Class ModchartSprite_obj::__mClass;

void ModchartSprite_obj::__register()
{
	ModchartSprite_obj _hx_dummy;
	ModchartSprite_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("ModchartSprite",21,38,77,a5);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ModchartSprite_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ModchartSprite_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ModchartSprite_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ModchartSprite_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

