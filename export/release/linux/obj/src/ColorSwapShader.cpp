#include <hxcpp.h>

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

HX_DEFINE_STACK_FRAME(_hx_pos_ffb46a49cbb76713_214_new,"ColorSwapShader","new",0x2f3c9fad,"ColorSwapShader.new","ColorSwap.hx",214,0x580efb08)

void ColorSwapShader_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_ffb46a49cbb76713_214_new)
HXLINE( 182)		if (::hx::IsNull( this->_hx___glFragmentSource )) {
HXLINE( 184)			this->_hx___glFragmentSource = HX_("\n\t\tvarying float openfl_Alphav;\n\t\tvarying vec4 openfl_ColorMultiplierv;\n\t\tvarying vec4 openfl_ColorOffsetv;\n\t\tvarying vec2 openfl_TextureCoordv;\n\n\t\tuniform bool openfl_HasColorTransform;\n\t\tuniform vec2 openfl_TextureSize;\n\t\tuniform sampler2D bitmap;\n\n\t\tuniform bool hasTransform;\n\t\tuniform bool hasColorTransform;\n\n\t\tvec4 flixel_texture2D(sampler2D bitmap, vec2 coord)\n\t\t{\n\t\t\tvec4 color = texture2D(bitmap, coord);\n\t\t\tif (!hasTransform)\n\t\t\t{\n\t\t\t\treturn color;\n\t\t\t}\n\n\t\t\tif (color.a == 0.0)\n\t\t\t{\n\t\t\t\treturn vec4(0.0, 0.0, 0.0, 0.0);\n\t\t\t}\n\n\t\t\tif (!hasColorTransform)\n\t\t\t{\n\t\t\t\treturn color * openfl_Alphav;\n\t\t\t}\n\n\t\t\tcolor = vec4(color.rgb / color.a, color.a);\n\n\t\t\tmat4 colorMultiplier = mat4(0);\n\t\t\tcolorMultiplier[0][0] = openfl_ColorMultiplierv.x;\n\t\t\tcolorMultiplier[1][1] = openfl_ColorMultiplierv.y;\n\t\t\tcolorMultiplier[2][2] = openfl_ColorMultiplierv.z;\n\t\t\tcolorMultiplier[3][3] = openfl_ColorMultiplierv.w;\n\n\t\t\tcolor = clamp(openfl_ColorOffsetv + (color * colorMultiplier), 0.0, 1.0);\n\n\t\t\tif (color.a > 0.0)\n\t\t\t{\n\t\t\t\treturn vec4(color.rgb * color.a * openfl_Alphav, color.a * openfl_Alphav);\n\t\t\t}\n\t\t\treturn vec4(0.0, 0.0, 0.0, 0.0);\n\t\t}\n\n\t\tuniform vec3 uTime;\n\t\tuniform bool awesomeOutline;\n\n\t\tconst float offset = 1.0 / 128.0;\n\t\tvec3 normalizeColor(vec3 color)\n\t\t{\n\t\t\treturn vec3(\n\t\t\t\tcolor[0] / 255.0,\n\t\t\t\tcolor[1] / 255.0,\n\t\t\t\tcolor[2] / 255.0\n\t\t\t);\n\t\t}\n\n\t\tvec3 rgb2hsv(vec3 c)\n\t\t{\n\t\t\tvec4 K = vec4(0.0, -1.0 / 3.0, 2.0 / 3.0, -1.0);\n\t\t\tvec4 p = mix(vec4(c.bg, K.wz), vec4(c.gb, K.xy), step(c.b, c.g));\n\t\t\tvec4 q = mix(vec4(p.xyw, c.r), vec4(c.r, p.yzx), step(p.x, c.r));\n\n\t\t\tfloat d = q.x - min(q.w, q.y);\n\t\t\tfloat e = 1.0e-10;\n\t\t\treturn vec3(abs(q.z + (q.w - q.y) / (6.0 * d + e)), d / (q.x + e), q.x);\n\t\t}\n\n\t\tvec3 hsv2rgb(vec3 c)\n\t\t{\n\t\t\tvec4 K = vec4(1.0, 2.0 / 3.0, 1.0 / 3.0, 3.0);\n\t\t\tvec3 p = abs(fract(c.xxx + K.xyz) * 6.0 - K.www);\n\t\t\treturn c.z * mix(K.xxx, clamp(p - K.xxx, 0.0, 1.0), c.y);\n\t\t}\n\n\t\tvoid main()\n\t\t{\n\t\t\tvec4 color = flixel_texture2D(bitmap, openfl_TextureCoordv);\n\n\t\t\tvec4 swagColor = vec4(rgb2hsv(vec3(color[0], color[1], color[2])), color[3]);\n\n\t\t\t// [0] is the hue???\n\t\t\tswagColor[0] = swagColor[0] + uTime[0];\n\t\t\tswagColor[1] = swagColor[1] + uTime[1];\n\t\t\tswagColor[2] = swagColor[2] * (1.0 + uTime[2]);\n\t\t\t\n\t\t\tif(swagColor[1] < 0.0)\n\t\t\t{\n\t\t\t\tswagColor[1] = 0.0;\n\t\t\t}\n\t\t\telse if(swagColor[1] > 1.0)\n\t\t\t{\n\t\t\t\tswagColor[1] = 1.0;\n\t\t\t}\n\n\t\t\tcolor = vec4(hsv2rgb(vec3(swagColor[0], swagColor[1], swagColor[2])), swagColor[3]);\n\n\t\t\tif (awesomeOutline)\n\t\t\t{\n\t\t\t\t // Outline bullshit?\n\t\t\t\tvec2 size = vec2(3, 3);\n\n\t\t\t\tif (color.a <= 0.5) {\n\t\t\t\t\tfloat w = size.x / openfl_TextureSize.x;\n\t\t\t\t\tfloat h = size.y / openfl_TextureSize.y;\n\t\t\t\t\t\n\t\t\t\t\tif (flixel_texture2D(bitmap, vec2(openfl_TextureCoordv.x + w, openfl_TextureCoordv.y)).a != 0.\n\t\t\t\t\t|| flixel_texture2D(bitmap, vec2(openfl_TextureCoordv.x - w, openfl_TextureCoordv.y)).a != 0.\n\t\t\t\t\t|| flixel_texture2D(bitmap, vec2(openfl_TextureCoordv.x, openfl_TextureCoordv.y + h)).a != 0.\n\t\t\t\t\t|| flixel_texture2D(bitmap, vec2(openfl_TextureCoordv.x, openfl_TextureCoordv.y - h)).a != 0.)\n\t\t\t\t\t\tcolor = vec4(1.0, 1.0, 1.0, 1.0);\n\t\t\t\t}\n\t\t\t}\n\t\t\tgl_FragColor = color;\n\n\t\t\t/* \n\t\t\tif (color.a > 0.5)\n\t\t\t\tgl_FragColor = color;\n\t\t\telse\n\t\t\t{\n\t\t\t\tfloat a = flixel_texture2D(bitmap, vec2(openfl_TextureCoordv + offset, openfl_TextureCoordv.y)).a +\n\t\t\t\t\t\t  flixel_texture2D(bitmap, vec2(openfl_TextureCoordv, openfl_TextureCoordv.y - offset)).a +\n\t\t\t\t\t\t  flixel_texture2D(bitmap, vec2(openfl_TextureCoordv - offset, openfl_TextureCoordv.y)).a +\n\t\t\t\t\t\t  flixel_texture2D(bitmap, vec2(openfl_TextureCoordv, openfl_TextureCoordv.y + offset)).a;\n\t\t\t\tif (color.a < 1.0 && a > 0.0)\n\t\t\t\t\tgl_FragColor = vec4(0.0, 0.0, 0.0, 0.8);\n\t\t\t\telse\n\t\t\t\t\tgl_FragColor = color;\n\t\t\t} */\n\t\t}",2b,cf,de,00);
            		}
HXLINE( 174)		if (::hx::IsNull( this->_hx___glVertexSource )) {
HXLINE( 176)			this->_hx___glVertexSource = HX_("\n\t\tattribute float openfl_Alpha;\n\t\tattribute vec4 openfl_ColorMultiplier;\n\t\tattribute vec4 openfl_ColorOffset;\n\t\tattribute vec4 openfl_Position;\n\t\tattribute vec2 openfl_TextureCoord;\n\n\t\tvarying float openfl_Alphav;\n\t\tvarying vec4 openfl_ColorMultiplierv;\n\t\tvarying vec4 openfl_ColorOffsetv;\n\t\tvarying vec2 openfl_TextureCoordv;\n\n\t\tuniform mat4 openfl_Matrix;\n\t\tuniform bool openfl_HasColorTransform;\n\t\tuniform vec2 openfl_TextureSize;\n\n\t\tattribute float alpha;\n\t\tattribute vec4 colorMultiplier;\n\t\tattribute vec4 colorOffset;\n\t\tuniform bool hasColorTransform;\n\t\t\n\t\tvoid main(void)\n\t\t{\n\t\t\topenfl_Alphav = openfl_Alpha;\n\t\t\topenfl_TextureCoordv = openfl_TextureCoord;\n\n\t\t\tif (openfl_HasColorTransform) {\n\t\t\t\topenfl_ColorMultiplierv = openfl_ColorMultiplier;\n\t\t\t\topenfl_ColorOffsetv = openfl_ColorOffset / 255.0;\n\t\t\t}\n\n\t\t\tgl_Position = openfl_Matrix * openfl_Position;\n\n\t\t\topenfl_Alphav = openfl_Alpha * alpha;\n\t\t\tif (hasColorTransform)\n\t\t\t{\n\t\t\t\topenfl_ColorOffsetv = colorOffset / 255.0;\n\t\t\t\topenfl_ColorMultiplierv = colorMultiplier;\n\t\t\t}\n\t\t}",bf,01,06,61);
            		}
HXLINE( 215)		super::__construct();
HXLINE(  37)		this->_hx___isGenerated = true;
HXDLIN(  37)		this->_hx___initGL();
            	}

Dynamic ColorSwapShader_obj::__CreateEmpty() { return new ColorSwapShader_obj; }

void *ColorSwapShader_obj::_hx_vtable = 0;

Dynamic ColorSwapShader_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ColorSwapShader_obj > _hx_result = new ColorSwapShader_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ColorSwapShader_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1afd2a7b) {
		if (inClassId<=(int)0x04f93fcd) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x04f93fcd;
		} else {
			return inClassId==(int)0x1afd2a7b;
		}
	} else {
		return inClassId==(int)0x1efca5b6 || inClassId==(int)0x78d8d737;
	}
}


::hx::ObjectPtr< ColorSwapShader_obj > ColorSwapShader_obj::__new() {
	::hx::ObjectPtr< ColorSwapShader_obj > __this = new ColorSwapShader_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ColorSwapShader_obj > ColorSwapShader_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ColorSwapShader_obj *__this = (ColorSwapShader_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ColorSwapShader_obj), true, "ColorSwapShader"));
	*(void **)__this = ColorSwapShader_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ColorSwapShader_obj::ColorSwapShader_obj()
{
}

void ColorSwapShader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ColorSwapShader);
	HX_MARK_MEMBER_NAME(uTime,"uTime");
	HX_MARK_MEMBER_NAME(awesomeOutline,"awesomeOutline");
	 ::flixel::graphics::tile::FlxGraphicsShader_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ColorSwapShader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(uTime,"uTime");
	HX_VISIT_MEMBER_NAME(awesomeOutline,"awesomeOutline");
	 ::flixel::graphics::tile::FlxGraphicsShader_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ColorSwapShader_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"uTime") ) { return ::hx::Val( uTime ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"awesomeOutline") ) { return ::hx::Val( awesomeOutline ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ColorSwapShader_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"uTime") ) { uTime=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"awesomeOutline") ) { awesomeOutline=inValue.Cast<  ::openfl::display::ShaderParameter_Bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ColorSwapShader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("uTime",22,d7,b7,95));
	outFields->push(HX_("awesomeOutline",9f,50,a1,75));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ColorSwapShader_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(ColorSwapShader_obj,uTime),HX_("uTime",22,d7,b7,95)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Bool */ ,(int)offsetof(ColorSwapShader_obj,awesomeOutline),HX_("awesomeOutline",9f,50,a1,75)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ColorSwapShader_obj_sStaticStorageInfo = 0;
#endif

static ::String ColorSwapShader_obj_sMemberFields[] = {
	HX_("uTime",22,d7,b7,95),
	HX_("awesomeOutline",9f,50,a1,75),
	::String(null()) };

::hx::Class ColorSwapShader_obj::__mClass;

void ColorSwapShader_obj::__register()
{
	ColorSwapShader_obj _hx_dummy;
	ColorSwapShader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("ColorSwapShader",3b,45,d6,4e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ColorSwapShader_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ColorSwapShader_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ColorSwapShader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ColorSwapShader_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

