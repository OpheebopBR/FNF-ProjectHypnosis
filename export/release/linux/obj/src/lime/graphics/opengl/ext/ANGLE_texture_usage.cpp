#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_ANGLE_texture_usage
#include <lime/graphics/opengl/ext/ANGLE_texture_usage.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f21a6c5ad88a2e71_4_new,"lime.graphics.opengl.ext.ANGLE_texture_usage","new",0xed342dc1,"lime.graphics.opengl.ext.ANGLE_texture_usage.new","lime/graphics/opengl/ext/ANGLE_texture_usage.hx",4,0x2c06f6f1)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void ANGLE_texture_usage_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_f21a6c5ad88a2e71_4_new)
HXLINE(   7)		this->FRAMEBUFFER_ATTACHMENT_ANGLE = 37795;
HXLINE(   6)		this->TEXTURE_USAGE_ANGLE = 37794;
            	}

Dynamic ANGLE_texture_usage_obj::__CreateEmpty() { return new ANGLE_texture_usage_obj; }

void *ANGLE_texture_usage_obj::_hx_vtable = 0;

Dynamic ANGLE_texture_usage_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ANGLE_texture_usage_obj > _hx_result = new ANGLE_texture_usage_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ANGLE_texture_usage_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x72a96d63;
}


ANGLE_texture_usage_obj::ANGLE_texture_usage_obj()
{
}

::hx::Val ANGLE_texture_usage_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 19:
		if (HX_FIELD_EQ(inName,"TEXTURE_USAGE_ANGLE") ) { return ::hx::Val( TEXTURE_USAGE_ANGLE ); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_ATTACHMENT_ANGLE") ) { return ::hx::Val( FRAMEBUFFER_ATTACHMENT_ANGLE ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ANGLE_texture_usage_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 19:
		if (HX_FIELD_EQ(inName,"TEXTURE_USAGE_ANGLE") ) { TEXTURE_USAGE_ANGLE=inValue.Cast< int >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_ATTACHMENT_ANGLE") ) { FRAMEBUFFER_ATTACHMENT_ANGLE=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ANGLE_texture_usage_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("TEXTURE_USAGE_ANGLE",f1,85,1c,63));
	outFields->push(HX_("FRAMEBUFFER_ATTACHMENT_ANGLE",09,e2,23,8c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ANGLE_texture_usage_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(ANGLE_texture_usage_obj,TEXTURE_USAGE_ANGLE),HX_("TEXTURE_USAGE_ANGLE",f1,85,1c,63)},
	{::hx::fsInt,(int)offsetof(ANGLE_texture_usage_obj,FRAMEBUFFER_ATTACHMENT_ANGLE),HX_("FRAMEBUFFER_ATTACHMENT_ANGLE",09,e2,23,8c)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ANGLE_texture_usage_obj_sStaticStorageInfo = 0;
#endif

static ::String ANGLE_texture_usage_obj_sMemberFields[] = {
	HX_("TEXTURE_USAGE_ANGLE",f1,85,1c,63),
	HX_("FRAMEBUFFER_ATTACHMENT_ANGLE",09,e2,23,8c),
	::String(null()) };

::hx::Class ANGLE_texture_usage_obj::__mClass;

void ANGLE_texture_usage_obj::__register()
{
	ANGLE_texture_usage_obj _hx_dummy;
	ANGLE_texture_usage_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.graphics.opengl.ext.ANGLE_texture_usage",4f,39,c0,1a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ANGLE_texture_usage_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ANGLE_texture_usage_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ANGLE_texture_usage_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ANGLE_texture_usage_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext
