#include <hxcpp.h>

#ifndef INCLUDED_ColorSwap
#include <ColorSwap.h>
#endif
#ifndef INCLUDED_ColorSwapShader
#include <ColorSwapShader.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxGraphicsShader
#include <flixel/graphics/tile/FlxGraphicsShader.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsShader
#include <openfl/display/GraphicsShader.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderParameter_Bool
#include <openfl/display/ShaderParameter_Bool.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderParameter_Float
#include <openfl/display/ShaderParameter_Float.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_dc09256b953193f2_6_new,"ColorSwap","new",0xb5112968,"ColorSwap.new","ColorSwap.hx",6,0x580efb08)
static const Float _hx_array_data_c99e9576_1[] = {
	(Float)0,(Float)0,(Float)0,
};
static const bool _hx_array_data_c99e9576_2[] = {
	0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_dc09256b953193f2_12_set_hue,"ColorSwap","set_hue",0xb5d82763,"ColorSwap.set_hue","ColorSwap.hx",12,0x580efb08)
HX_LOCAL_STACK_FRAME(_hx_pos_dc09256b953193f2_18_set_saturation,"ColorSwap","set_saturation",0xe231f887,"ColorSwap.set_saturation","ColorSwap.hx",18,0x580efb08)
HX_LOCAL_STACK_FRAME(_hx_pos_dc09256b953193f2_24_set_brightness,"ColorSwap","set_brightness",0x5101b286,"ColorSwap.set_brightness","ColorSwap.hx",24,0x580efb08)

void ColorSwap_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_dc09256b953193f2_6_new)
HXLINE(  10)		this->brightness = ((Float)0);
HXLINE(   9)		this->saturation = ((Float)0);
HXLINE(   8)		this->hue = ((Float)0);
HXLINE(   7)		this->shader =  ::ColorSwapShader_obj::__alloc( HX_CTX );
HXLINE(  32)		this->shader->uTime->value = ::Array_obj< Float >::fromData( _hx_array_data_c99e9576_1,3);
HXLINE(  33)		this->shader->awesomeOutline->value = ::Array_obj< bool >::fromData( _hx_array_data_c99e9576_2,1);
            	}

Dynamic ColorSwap_obj::__CreateEmpty() { return new ColorSwap_obj; }

void *ColorSwap_obj::_hx_vtable = 0;

Dynamic ColorSwap_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ColorSwap_obj > _hx_result = new ColorSwap_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ColorSwap_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3ba8dcd2;
}

Float ColorSwap_obj::set_hue(Float value){
            	HX_STACKFRAME(&_hx_pos_dc09256b953193f2_12_set_hue)
HXLINE(  13)		this->hue = value;
HXLINE(  14)		this->shader->uTime->value[0] = this->hue;
HXLINE(  15)		return this->hue;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ColorSwap_obj,set_hue,return )

Float ColorSwap_obj::set_saturation(Float value){
            	HX_STACKFRAME(&_hx_pos_dc09256b953193f2_18_set_saturation)
HXLINE(  19)		this->saturation = value;
HXLINE(  20)		this->shader->uTime->value[1] = this->saturation;
HXLINE(  21)		return this->saturation;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ColorSwap_obj,set_saturation,return )

Float ColorSwap_obj::set_brightness(Float value){
            	HX_STACKFRAME(&_hx_pos_dc09256b953193f2_24_set_brightness)
HXLINE(  25)		this->brightness = value;
HXLINE(  26)		this->shader->uTime->value[2] = this->brightness;
HXLINE(  27)		return this->brightness;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ColorSwap_obj,set_brightness,return )


::hx::ObjectPtr< ColorSwap_obj > ColorSwap_obj::__new() {
	::hx::ObjectPtr< ColorSwap_obj > __this = new ColorSwap_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ColorSwap_obj > ColorSwap_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ColorSwap_obj *__this = (ColorSwap_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ColorSwap_obj), true, "ColorSwap"));
	*(void **)__this = ColorSwap_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ColorSwap_obj::ColorSwap_obj()
{
}

void ColorSwap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ColorSwap);
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_MEMBER_NAME(hue,"hue");
	HX_MARK_MEMBER_NAME(saturation,"saturation");
	HX_MARK_MEMBER_NAME(brightness,"brightness");
	HX_MARK_END_CLASS();
}

void ColorSwap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(shader,"shader");
	HX_VISIT_MEMBER_NAME(hue,"hue");
	HX_VISIT_MEMBER_NAME(saturation,"saturation");
	HX_VISIT_MEMBER_NAME(brightness,"brightness");
}

::hx::Val ColorSwap_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"hue") ) { return ::hx::Val( hue ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { return ::hx::Val( shader ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"set_hue") ) { return ::hx::Val( set_hue_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"saturation") ) { return ::hx::Val( saturation ); }
		if (HX_FIELD_EQ(inName,"brightness") ) { return ::hx::Val( brightness ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"set_saturation") ) { return ::hx::Val( set_saturation_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_brightness") ) { return ::hx::Val( set_brightness_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ColorSwap_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"hue") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_hue(inValue.Cast< Float >()) );hue=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast<  ::ColorSwapShader >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"saturation") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_saturation(inValue.Cast< Float >()) );saturation=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"brightness") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_brightness(inValue.Cast< Float >()) );brightness=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ColorSwap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("shader",25,bf,20,1d));
	outFields->push(HX_("hue",b8,50,4f,00));
	outFields->push(HX_("saturation",d2,d3,a1,f6));
	outFields->push(HX_("brightness",d1,8d,71,65));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ColorSwap_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::ColorSwapShader */ ,(int)offsetof(ColorSwap_obj,shader),HX_("shader",25,bf,20,1d)},
	{::hx::fsFloat,(int)offsetof(ColorSwap_obj,hue),HX_("hue",b8,50,4f,00)},
	{::hx::fsFloat,(int)offsetof(ColorSwap_obj,saturation),HX_("saturation",d2,d3,a1,f6)},
	{::hx::fsFloat,(int)offsetof(ColorSwap_obj,brightness),HX_("brightness",d1,8d,71,65)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ColorSwap_obj_sStaticStorageInfo = 0;
#endif

static ::String ColorSwap_obj_sMemberFields[] = {
	HX_("shader",25,bf,20,1d),
	HX_("hue",b8,50,4f,00),
	HX_("saturation",d2,d3,a1,f6),
	HX_("brightness",d1,8d,71,65),
	HX_("set_hue",5b,aa,c5,19),
	HX_("set_saturation",8f,44,b7,8c),
	HX_("set_brightness",8e,fe,86,fb),
	::String(null()) };

::hx::Class ColorSwap_obj::__mClass;

void ColorSwap_obj::__register()
{
	ColorSwap_obj _hx_dummy;
	ColorSwap_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("ColorSwap",76,95,9e,c9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ColorSwap_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ColorSwap_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ColorSwap_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ColorSwap_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

