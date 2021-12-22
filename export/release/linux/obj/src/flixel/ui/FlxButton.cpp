#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
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
#ifndef INCLUDED_flixel_ui_FlxButton
#include <flixel/ui/FlxButton.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton_flixel_text_FlxText
#include <flixel/ui/FlxTypedButton_flixel_text_FlxText.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_65bbf1ac0e61e703_56_new,"flixel.ui.FlxButton","new",0x776c1d8e,"flixel.ui.FlxButton.new","flixel/ui/FlxButton.hx",56,0xc64cf442)
HX_LOCAL_STACK_FRAME(_hx_pos_65bbf1ac0e61e703_69_resetHelpers,"flixel.ui.FlxButton","resetHelpers",0x0b952648,"flixel.ui.FlxButton.resetHelpers","flixel/ui/FlxButton.hx",69,0xc64cf442)
HX_LOCAL_STACK_FRAME(_hx_pos_65bbf1ac0e61e703_81_initLabel,"flixel.ui.FlxButton","initLabel",0xd1ec8c72,"flixel.ui.FlxButton.initLabel","flixel/ui/FlxButton.hx",81,0xc64cf442)
HX_LOCAL_STACK_FRAME(_hx_pos_65bbf1ac0e61e703_92_get_text,"flixel.ui.FlxButton","get_text",0x7dcfb448,"flixel.ui.FlxButton.get_text","flixel/ui/FlxButton.hx",92,0xc64cf442)
HX_LOCAL_STACK_FRAME(_hx_pos_65bbf1ac0e61e703_96_set_text,"flixel.ui.FlxButton","set_text",0x2c2d0dbc,"flixel.ui.FlxButton.set_text","flixel/ui/FlxButton.hx",96,0xc64cf442)
HX_LOCAL_STACK_FRAME(_hx_pos_65bbf1ac0e61e703_29_boot,"flixel.ui.FlxButton","boot",0xff46bf44,"flixel.ui.FlxButton.boot","flixel/ui/FlxButton.hx",29,0xc64cf442)
HX_LOCAL_STACK_FRAME(_hx_pos_65bbf1ac0e61e703_34_boot,"flixel.ui.FlxButton","boot",0xff46bf44,"flixel.ui.FlxButton.boot","flixel/ui/FlxButton.hx",34,0xc64cf442)
HX_LOCAL_STACK_FRAME(_hx_pos_65bbf1ac0e61e703_39_boot,"flixel.ui.FlxButton","boot",0xff46bf44,"flixel.ui.FlxButton.boot","flixel/ui/FlxButton.hx",39,0xc64cf442)
namespace flixel{
namespace ui{

void FlxButton_obj::__construct(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::String Text, ::Dynamic OnClick){
            		Float X = __o_X.Default(0);
            		Float Y = __o_Y.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_65bbf1ac0e61e703_56_new)
HXLINE(  57)		super::__construct(X,Y,OnClick);
HXLINE(  59)		{
HXLINE(  59)			int _g = 0;
HXDLIN(  59)			::Array< ::Dynamic> _g1 = this->labelOffsets;
HXDLIN(  59)			while((_g < _g1->length)){
HXLINE(  59)				 ::flixel::math::FlxPoint point = _g1->__get(_g).StaticCast<  ::flixel::math::FlxPoint >();
HXDLIN(  59)				_g = (_g + 1);
HXLINE(  60)				point->set((point->x - ( (Float)(1) )),(point->y + 3));
            			}
            		}
HXLINE(  62)		if (::hx::IsNotNull( Text )) {
HXLINE(  62)			this->set_label( ::flixel::text::FlxText_obj::__alloc( HX_CTX ,(this->x + this->labelOffsets->__get(0).StaticCast<  ::flixel::math::FlxPoint >()->x),(this->y + this->labelOffsets->__get(0).StaticCast<  ::flixel::math::FlxPoint >()->y),80,Text,null(),null()));
HXDLIN(  62)			this->label->setFormat(null(),8,3355443,HX_("center",d5,25,db,05),null(),null(),null());
HXDLIN(  62)			this->label->set_alpha(this->labelAlphas->__get(this->status));
HXDLIN(  62)			this->label->drawFrame(true);
            		}
            	}

Dynamic FlxButton_obj::__CreateEmpty() { return new FlxButton_obj; }

void *FlxButton_obj::_hx_vtable = 0;

Dynamic FlxButton_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxButton_obj > _hx_result = new FlxButton_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool FlxButton_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2c01639b) {
		if (inClassId<=(int)0x26f5d20b) {
			if (inClassId<=(int)0x0155df10) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0155df10;
			} else {
				return inClassId==(int)0x26f5d20b;
			}
		} else {
			return inClassId==(int)0x2c01639b;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void FlxButton_obj::resetHelpers(){
            	HX_STACKFRAME(&_hx_pos_65bbf1ac0e61e703_69_resetHelpers)
HXLINE(  70)		this->super::resetHelpers();
HXLINE(  72)		if (::hx::IsNotNull( this->label )) {
HXLINE(  74)			 ::flixel::text::FlxText _hx_tmp = this->label;
HXDLIN(  74)			Float _hx_tmp1 = this->get_width();
HXDLIN(  74)			_hx_tmp->set_fieldWidth(( (Float)((this->label->frameWidth = ::Std_obj::_hx_int(_hx_tmp1))) ));
HXLINE(  75)			 ::flixel::text::FlxText _hx_tmp2 = this->label;
HXDLIN(  75)			_hx_tmp2->set_size(::Std_obj::_hx_int(( (Float)(this->label->_defaultFormat->size) )));
            		}
            	}


void FlxButton_obj::initLabel(::String Text){
            	HX_GC_STACKFRAME(&_hx_pos_65bbf1ac0e61e703_81_initLabel)
HXDLIN(  81)		if (::hx::IsNotNull( Text )) {
HXLINE(  83)			this->set_label( ::flixel::text::FlxText_obj::__alloc( HX_CTX ,(this->x + this->labelOffsets->__get(0).StaticCast<  ::flixel::math::FlxPoint >()->x),(this->y + this->labelOffsets->__get(0).StaticCast<  ::flixel::math::FlxPoint >()->y),80,Text,null(),null()));
HXLINE(  84)			this->label->setFormat(null(),8,3355443,HX_("center",d5,25,db,05),null(),null(),null());
HXLINE(  85)			this->label->set_alpha(this->labelAlphas->__get(this->status));
HXLINE(  86)			this->label->drawFrame(true);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxButton_obj,initLabel,(void))

::String FlxButton_obj::get_text(){
            	HX_STACKFRAME(&_hx_pos_65bbf1ac0e61e703_92_get_text)
HXDLIN(  92)		if (::hx::IsNotNull( this->label )) {
HXDLIN(  92)			return this->label->text;
            		}
            		else {
HXDLIN(  92)			return null();
            		}
HXDLIN(  92)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxButton_obj,get_text,return )

::String FlxButton_obj::set_text(::String Text){
            	HX_GC_STACKFRAME(&_hx_pos_65bbf1ac0e61e703_96_set_text)
HXLINE(  97)		if (::hx::IsNull( this->label )) {
HXLINE(  99)			if (::hx::IsNotNull( Text )) {
HXLINE(  99)				this->set_label( ::flixel::text::FlxText_obj::__alloc( HX_CTX ,(this->x + this->labelOffsets->__get(0).StaticCast<  ::flixel::math::FlxPoint >()->x),(this->y + this->labelOffsets->__get(0).StaticCast<  ::flixel::math::FlxPoint >()->y),80,Text,null(),null()));
HXDLIN(  99)				this->label->setFormat(null(),8,3355443,HX_("center",d5,25,db,05),null(),null(),null());
HXDLIN(  99)				this->label->set_alpha(this->labelAlphas->__get(this->status));
HXDLIN(  99)				this->label->drawFrame(true);
            			}
            		}
            		else {
HXLINE( 103)			this->label->set_text(Text);
            		}
HXLINE( 105)		return Text;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxButton_obj,set_text,return )

int FlxButton_obj::NORMAL;

int FlxButton_obj::HIGHLIGHT;

int FlxButton_obj::PRESSED;


::hx::ObjectPtr< FlxButton_obj > FlxButton_obj::__new(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::String Text, ::Dynamic OnClick) {
	::hx::ObjectPtr< FlxButton_obj > __this = new FlxButton_obj();
	__this->__construct(__o_X,__o_Y,Text,OnClick);
	return __this;
}

::hx::ObjectPtr< FlxButton_obj > FlxButton_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::String Text, ::Dynamic OnClick) {
	FlxButton_obj *__this = (FlxButton_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxButton_obj), true, "flixel.ui.FlxButton"));
	*(void **)__this = FlxButton_obj::_hx_vtable;
	__this->__construct(__o_X,__o_Y,Text,OnClick);
	return __this;
}

FlxButton_obj::FlxButton_obj()
{
}

::hx::Val FlxButton_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_text() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_text") ) { return ::hx::Val( get_text_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return ::hx::Val( set_text_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"initLabel") ) { return ::hx::Val( initLabel_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"resetHelpers") ) { return ::hx::Val( resetHelpers_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxButton_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_text(inValue.Cast< ::String >()) ); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxButton_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("text",ad,cc,f9,4c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FlxButton_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo FlxButton_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &FlxButton_obj::NORMAL,HX_("NORMAL",27,1e,ec,e2)},
	{::hx::fsInt,(void *) &FlxButton_obj::HIGHLIGHT,HX_("HIGHLIGHT",14,c6,58,e8)},
	{::hx::fsInt,(void *) &FlxButton_obj::PRESSED,HX_("PRESSED",82,a6,ba,b9)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String FlxButton_obj_sMemberFields[] = {
	HX_("resetHelpers",36,89,3d,32),
	HX_("initLabel",c4,28,41,8b),
	HX_("get_text",36,88,b4,cc),
	HX_("set_text",aa,e1,11,7b),
	::String(null()) };

static void FlxButton_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxButton_obj::NORMAL,"NORMAL");
	HX_MARK_MEMBER_NAME(FlxButton_obj::HIGHLIGHT,"HIGHLIGHT");
	HX_MARK_MEMBER_NAME(FlxButton_obj::PRESSED,"PRESSED");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxButton_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxButton_obj::NORMAL,"NORMAL");
	HX_VISIT_MEMBER_NAME(FlxButton_obj::HIGHLIGHT,"HIGHLIGHT");
	HX_VISIT_MEMBER_NAME(FlxButton_obj::PRESSED,"PRESSED");
};

#endif

::hx::Class FlxButton_obj::__mClass;

static ::String FlxButton_obj_sStaticFields[] = {
	HX_("NORMAL",27,1e,ec,e2),
	HX_("HIGHLIGHT",14,c6,58,e8),
	HX_("PRESSED",82,a6,ba,b9),
	::String(null())
};

void FlxButton_obj::__register()
{
	FlxButton_obj _hx_dummy;
	FlxButton_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.ui.FlxButton",9c,fe,d6,1b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxButton_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxButton_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxButton_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxButton_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxButton_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxButton_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxButton_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxButton_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_65bbf1ac0e61e703_29_boot)
HXDLIN(  29)		NORMAL = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_65bbf1ac0e61e703_34_boot)
HXDLIN(  34)		HIGHLIGHT = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_65bbf1ac0e61e703_39_boot)
HXDLIN(  39)		PRESSED = 2;
            	}
}

} // end namespace flixel
} // end namespace ui
