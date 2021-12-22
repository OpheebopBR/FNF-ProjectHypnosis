#include <hxcpp.h>

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
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxImageFrame
#include <flixel/graphics/frames/FlxImageFrame.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxSpriteButton
#include <flixel/ui/FlxSpriteButton.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton_flixel_FlxSprite
#include <flixel/ui/FlxTypedButton_flixel_FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_222d410d6e05a421_26_new,"flixel.ui.FlxSpriteButton","new",0xdb67b173,"flixel.ui.FlxSpriteButton.new","flixel/ui/FlxSpriteButton.hx",26,0x7f25dbfd)
HX_LOCAL_STACK_FRAME(_hx_pos_222d410d6e05a421_46_createTextLabel,"flixel.ui.FlxSpriteButton","createTextLabel",0xb0bc08fe,"flixel.ui.FlxSpriteButton.createTextLabel","flixel/ui/FlxSpriteButton.hx",46,0x7f25dbfd)
namespace flixel{
namespace ui{

void FlxSpriteButton_obj::__construct(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y, ::flixel::FlxSprite Label, ::Dynamic OnClick){
            		Float X = __o_X.Default(0);
            		Float Y = __o_Y.Default(0);
            	HX_STACKFRAME(&_hx_pos_222d410d6e05a421_26_new)
HXLINE(  27)		super::__construct(X,Y,OnClick);
HXLINE(  29)		{
HXLINE(  29)			int _g = 0;
HXDLIN(  29)			::Array< ::Dynamic> _g1 = this->labelOffsets;
HXDLIN(  29)			while((_g < _g1->length)){
HXLINE(  29)				 ::flixel::math::FlxPoint point = _g1->__get(_g).StaticCast<  ::flixel::math::FlxPoint >();
HXDLIN(  29)				_g = (_g + 1);
HXLINE(  30)				point->set((point->x - ( (Float)(1) )),(point->y + 4));
            			}
            		}
HXLINE(  32)		this->set_label(Label);
            	}

Dynamic FlxSpriteButton_obj::__CreateEmpty() { return new FlxSpriteButton_obj; }

void *FlxSpriteButton_obj::_hx_vtable = 0;

Dynamic FlxSpriteButton_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxSpriteButton_obj > _hx_result = new FlxSpriteButton_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool FlxSpriteButton_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x596ee395) {
		if (inClassId<=(int)0x2c01639b) {
			if (inClassId<=(int)0x19c9b491) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x19c9b491;
			} else {
				return inClassId==(int)0x2c01639b;
			}
		} else {
			return inClassId==(int)0x596ee395;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

static ::flixel::input::IFlxInput_obj _hx_flixel_ui_FlxSpriteButton__hx_flixel_input_IFlxInput= {
	( bool (::hx::Object::*)())&::flixel::ui::FlxSpriteButton_obj::get_justReleased,
	( bool (::hx::Object::*)())&::flixel::ui::FlxSpriteButton_obj::get_released,
	( bool (::hx::Object::*)())&::flixel::ui::FlxSpriteButton_obj::get_pressed,
	( bool (::hx::Object::*)())&::flixel::ui::FlxSpriteButton_obj::get_justPressed,
};

void *FlxSpriteButton_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x52baf533: return &_hx_flixel_ui_FlxSpriteButton__hx_flixel_input_IFlxInput;
	}
	return super::_hx_getInterface(inHash);
}

 ::flixel::ui::FlxSpriteButton FlxSpriteButton_obj::createTextLabel(::String Text,::String font,::hx::Null< int >  __o_size,::hx::Null< int >  __o_color,::String __o_align){
            		int size = __o_size.Default(8);
            		int color = __o_color.Default(3355443);
            		::String align = __o_align;
            		if (::hx::IsNull(__o_align)) align = HX_("center",d5,25,db,05);
            	HX_GC_STACKFRAME(&_hx_pos_222d410d6e05a421_46_createTextLabel)
HXLINE(  47)		if (::hx::IsNotNull( Text )) {
HXLINE(  49)			 ::flixel::text::FlxText text =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,0,0,this->frameWidth,Text,null(),null());
HXLINE(  50)			text->setFormat(font,size,color,align,null(),null(),null());
HXLINE(  51)			text->set_alpha(this->labelAlphas->__get(this->status));
HXLINE(  52)			text->drawFrame(true);
HXLINE(  53)			 ::openfl::display::BitmapData labelBitmap = text->graphic->bitmap->clone();
HXLINE(  54)			::String labelKey = text->graphic->key;
HXLINE(  55)			text->destroy();
HXLINE(  57)			if (::hx::IsNull( this->label )) {
HXLINE(  58)				this->set_label( ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null()));
            			}
HXLINE(  60)			 ::flixel::graphics::FlxGraphic labelGraphic = ::flixel::FlxG_obj::bitmap->add(labelBitmap,false,labelKey);
HXLINE(  61)			 ::flixel::FlxSprite _hx_tmp = this->label;
HXDLIN(  61)			_hx_tmp->set_frames(::flixel::graphics::frames::FlxImageFrame_obj::fromGraphic(labelGraphic,null()));
            		}
HXLINE(  64)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC5(FlxSpriteButton_obj,createTextLabel,return )


::hx::ObjectPtr< FlxSpriteButton_obj > FlxSpriteButton_obj::__new(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y, ::flixel::FlxSprite Label, ::Dynamic OnClick) {
	::hx::ObjectPtr< FlxSpriteButton_obj > __this = new FlxSpriteButton_obj();
	__this->__construct(__o_X,__o_Y,Label,OnClick);
	return __this;
}

::hx::ObjectPtr< FlxSpriteButton_obj > FlxSpriteButton_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y, ::flixel::FlxSprite Label, ::Dynamic OnClick) {
	FlxSpriteButton_obj *__this = (FlxSpriteButton_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxSpriteButton_obj), true, "flixel.ui.FlxSpriteButton"));
	*(void **)__this = FlxSpriteButton_obj::_hx_vtable;
	__this->__construct(__o_X,__o_Y,Label,OnClick);
	return __this;
}

FlxSpriteButton_obj::FlxSpriteButton_obj()
{
}

::hx::Val FlxSpriteButton_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"createTextLabel") ) { return ::hx::Val( createTextLabel_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FlxSpriteButton_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *FlxSpriteButton_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxSpriteButton_obj_sMemberFields[] = {
	HX_("createTextLabel",6b,57,91,a9),
	::String(null()) };

::hx::Class FlxSpriteButton_obj::__mClass;

void FlxSpriteButton_obj::__register()
{
	FlxSpriteButton_obj _hx_dummy;
	FlxSpriteButton_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.ui.FlxSpriteButton",01,7c,d7,41);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxSpriteButton_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxSpriteButton_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxSpriteButton_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxSpriteButton_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace ui
