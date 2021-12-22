#include <hxcpp.h>

#ifndef INCLUDED_editors_AttachedFlxText
#include <editors/AttachedFlxText.h>
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
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d4db2ac25d8e506a_2751_new,"editors.AttachedFlxText","new",0x7b9cbf45,"editors.AttachedFlxText.new","editors/ChartingState.hx",2751,0x5a24859a)
HX_LOCAL_STACK_FRAME(_hx_pos_d4db2ac25d8e506a_2762_update,"editors.AttachedFlxText","update",0x30e33444,"editors.AttachedFlxText.update","editors/ChartingState.hx",2762,0x5a24859a)
namespace editors{

void AttachedFlxText_obj::__construct(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::hx::Null< Float >  __o_FieldWidth,::String Text,::hx::Null< int >  __o_Size,::hx::Null< bool >  __o_EmbeddedFont){
            		Float X = __o_X.Default(0);
            		Float Y = __o_Y.Default(0);
            		Float FieldWidth = __o_FieldWidth.Default(0);
            		int Size = __o_Size.Default(8);
            		bool EmbeddedFont = __o_EmbeddedFont.Default(true);
            	HX_STACKFRAME(&_hx_pos_d4db2ac25d8e506a_2751_new)
HXLINE(2755)		this->yAdd = ((Float)0);
HXLINE(2754)		this->xAdd = ((Float)0);
HXLINE(2758)		super::__construct(X,Y,FieldWidth,Text,Size,EmbeddedFont);
            	}

Dynamic AttachedFlxText_obj::__CreateEmpty() { return new AttachedFlxText_obj; }

void *AttachedFlxText_obj::_hx_vtable = 0;

Dynamic AttachedFlxText_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AttachedFlxText_obj > _hx_result = new AttachedFlxText_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _hx_result;
}

bool AttachedFlxText_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x752f90b6) {
		if (inClassId<=(int)0x62cdca35) {
			if (inClassId<=(int)0x2c01639b) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x2c01639b;
			} else {
				return inClassId==(int)0x62cdca35;
			}
		} else {
			return inClassId==(int)0x752f90b6;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void AttachedFlxText_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_d4db2ac25d8e506a_2762_update)
HXLINE(2763)		this->super::update(elapsed);
HXLINE(2765)		if (::hx::IsNotNull( this->sprTracker )) {
HXLINE(2766)			this->setPosition((this->sprTracker->x + this->xAdd),(this->sprTracker->y + this->yAdd));
HXLINE(2767)			this->set_angle(this->sprTracker->angle);
HXLINE(2768)			this->set_alpha(this->sprTracker->alpha);
            		}
            	}



::hx::ObjectPtr< AttachedFlxText_obj > AttachedFlxText_obj::__new(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::hx::Null< Float >  __o_FieldWidth,::String Text,::hx::Null< int >  __o_Size,::hx::Null< bool >  __o_EmbeddedFont) {
	::hx::ObjectPtr< AttachedFlxText_obj > __this = new AttachedFlxText_obj();
	__this->__construct(__o_X,__o_Y,__o_FieldWidth,Text,__o_Size,__o_EmbeddedFont);
	return __this;
}

::hx::ObjectPtr< AttachedFlxText_obj > AttachedFlxText_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::hx::Null< Float >  __o_FieldWidth,::String Text,::hx::Null< int >  __o_Size,::hx::Null< bool >  __o_EmbeddedFont) {
	AttachedFlxText_obj *__this = (AttachedFlxText_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AttachedFlxText_obj), true, "editors.AttachedFlxText"));
	*(void **)__this = AttachedFlxText_obj::_hx_vtable;
	__this->__construct(__o_X,__o_Y,__o_FieldWidth,Text,__o_Size,__o_EmbeddedFont);
	return __this;
}

AttachedFlxText_obj::AttachedFlxText_obj()
{
}

void AttachedFlxText_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AttachedFlxText);
	HX_MARK_MEMBER_NAME(sprTracker,"sprTracker");
	HX_MARK_MEMBER_NAME(xAdd,"xAdd");
	HX_MARK_MEMBER_NAME(yAdd,"yAdd");
	 ::flixel::text::FlxText_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void AttachedFlxText_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(sprTracker,"sprTracker");
	HX_VISIT_MEMBER_NAME(xAdd,"xAdd");
	HX_VISIT_MEMBER_NAME(yAdd,"yAdd");
	 ::flixel::text::FlxText_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val AttachedFlxText_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"xAdd") ) { return ::hx::Val( xAdd ); }
		if (HX_FIELD_EQ(inName,"yAdd") ) { return ::hx::Val( yAdd ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sprTracker") ) { return ::hx::Val( sprTracker ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val AttachedFlxText_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"xAdd") ) { xAdd=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"yAdd") ) { yAdd=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sprTracker") ) { sprTracker=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AttachedFlxText_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("sprTracker",03,a3,e2,78));
	outFields->push(HX_("xAdd",89,44,83,4f));
	outFields->push(HX_("yAdd",28,7b,2c,50));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo AttachedFlxText_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(AttachedFlxText_obj,sprTracker),HX_("sprTracker",03,a3,e2,78)},
	{::hx::fsFloat,(int)offsetof(AttachedFlxText_obj,xAdd),HX_("xAdd",89,44,83,4f)},
	{::hx::fsFloat,(int)offsetof(AttachedFlxText_obj,yAdd),HX_("yAdd",28,7b,2c,50)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *AttachedFlxText_obj_sStaticStorageInfo = 0;
#endif

static ::String AttachedFlxText_obj_sMemberFields[] = {
	HX_("sprTracker",03,a3,e2,78),
	HX_("xAdd",89,44,83,4f),
	HX_("yAdd",28,7b,2c,50),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class AttachedFlxText_obj::__mClass;

void AttachedFlxText_obj::__register()
{
	AttachedFlxText_obj _hx_dummy;
	AttachedFlxText_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("editors.AttachedFlxText",d3,b8,98,f8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(AttachedFlxText_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< AttachedFlxText_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AttachedFlxText_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AttachedFlxText_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace editors
