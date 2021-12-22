#include <hxcpp.h>

#ifndef INCLUDED_Achievements
#include <Achievements.h>
#endif
#ifndef INCLUDED_AttachedAchievement
#include <AttachedAchievement.h>
#endif
#ifndef INCLUDED_ClientPrefs
#include <ClientPrefs.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_ec6539926560d3c0_92_new,"AttachedAchievement","new",0x78b415bd,"AttachedAchievement.new","Achievements.hx",92,0xf249f7fa)
HX_LOCAL_STACK_FRAME(_hx_pos_ec6539926560d3c0_99_changeAchievement,"AttachedAchievement","changeAchievement",0x3f6c6afc,"AttachedAchievement.changeAchievement","Achievements.hx",99,0xf249f7fa)
HX_LOCAL_STACK_FRAME(_hx_pos_ec6539926560d3c0_104_reloadAchievementImage,"AttachedAchievement","reloadAchievementImage",0x2581b6a8,"AttachedAchievement.reloadAchievementImage","Achievements.hx",104,0xf249f7fa)
HX_LOCAL_STACK_FRAME(_hx_pos_ec6539926560d3c0_116_update,"AttachedAchievement","update",0x63d738cc,"AttachedAchievement.update","Achievements.hx",116,0xf249f7fa)

void AttachedAchievement_obj::__construct(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::String name){
            		Float x = __o_x.Default(0);
            		Float y = __o_y.Default(0);
            	HX_STACKFRAME(&_hx_pos_ec6539926560d3c0_92_new)
HXLINE(  93)		super::__construct(x,y,null());
HXLINE(  95)		this->changeAchievement(name);
HXLINE(  96)		this->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
            	}

Dynamic AttachedAchievement_obj::__CreateEmpty() { return new AttachedAchievement_obj; }

void *AttachedAchievement_obj::_hx_vtable = 0;

Dynamic AttachedAchievement_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AttachedAchievement_obj > _hx_result = new AttachedAchievement_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool AttachedAchievement_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2c01639b) {
		if (inClassId<=(int)0x0b57f88b) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0b57f88b;
		} else {
			return inClassId==(int)0x2c01639b;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void AttachedAchievement_obj::changeAchievement(::String tag){
            	HX_STACKFRAME(&_hx_pos_ec6539926560d3c0_99_changeAchievement)
HXLINE( 100)		this->tag = tag;
HXLINE( 101)		this->reloadAchievementImage();
            	}


HX_DEFINE_DYNAMIC_FUNC1(AttachedAchievement_obj,changeAchievement,(void))

void AttachedAchievement_obj::reloadAchievementImage(){
            	HX_STACKFRAME(&_hx_pos_ec6539926560d3c0_104_reloadAchievementImage)
HXLINE( 105)		if (::Achievements_obj::isAchievementUnlocked(this->tag)) {
HXLINE( 106)			::String library = null();
HXDLIN( 106)			 ::flixel::graphics::FlxGraphic imageToReturn = ::Paths_obj::addCustomGraphic(HX_("achievementgrid",b5,fa,02,8a));
HXDLIN( 106)			 ::Dynamic _hx_tmp;
HXDLIN( 106)			if (::hx::IsNotNull( imageToReturn )) {
HXLINE( 106)				_hx_tmp = imageToReturn;
            			}
            			else {
HXLINE( 106)				_hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("achievementgrid",b5,fa,02,8a)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
            			}
HXDLIN( 106)			this->loadGraphic(_hx_tmp,true,150,150,null(),null());
HXLINE( 107)			 ::flixel::animation::FlxAnimationController _hx_tmp1 = this->animation;
HXDLIN( 107)			_hx_tmp1->add(HX_("icon",79,e7,b2,45),::Array_obj< int >::__new(1)->init(0,::Achievements_obj::getAchievementIndex(this->tag)),0,false,false,null());
HXLINE( 108)			this->animation->play(HX_("icon",79,e7,b2,45),null(),null(),null());
            		}
            		else {
HXLINE( 110)			::String library = null();
HXDLIN( 110)			 ::flixel::graphics::FlxGraphic imageToReturn = ::Paths_obj::addCustomGraphic(HX_("lockedachievement",a5,23,f4,2a));
HXDLIN( 110)			 ::Dynamic _hx_tmp;
HXDLIN( 110)			if (::hx::IsNotNull( imageToReturn )) {
HXLINE( 110)				_hx_tmp = imageToReturn;
            			}
            			else {
HXLINE( 110)				_hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("lockedachievement",a5,23,f4,2a)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
            			}
HXDLIN( 110)			this->loadGraphic(_hx_tmp,null(),null(),null(),null(),null());
            		}
HXLINE( 112)		this->scale->set(((Float)0.7),((Float)0.7));
HXLINE( 113)		this->updateHitbox();
            	}


HX_DEFINE_DYNAMIC_FUNC0(AttachedAchievement_obj,reloadAchievementImage,(void))

void AttachedAchievement_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_ec6539926560d3c0_116_update)
HXLINE( 117)		if (::hx::IsNotNull( this->sprTracker )) {
HXLINE( 118)			this->setPosition((this->sprTracker->x - ( (Float)(130) )),(this->sprTracker->y + 25));
            		}
HXLINE( 120)		this->super::update(elapsed);
            	}



::hx::ObjectPtr< AttachedAchievement_obj > AttachedAchievement_obj::__new(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::String name) {
	::hx::ObjectPtr< AttachedAchievement_obj > __this = new AttachedAchievement_obj();
	__this->__construct(__o_x,__o_y,name);
	return __this;
}

::hx::ObjectPtr< AttachedAchievement_obj > AttachedAchievement_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::String name) {
	AttachedAchievement_obj *__this = (AttachedAchievement_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AttachedAchievement_obj), true, "AttachedAchievement"));
	*(void **)__this = AttachedAchievement_obj::_hx_vtable;
	__this->__construct(__o_x,__o_y,name);
	return __this;
}

AttachedAchievement_obj::AttachedAchievement_obj()
{
}

void AttachedAchievement_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AttachedAchievement);
	HX_MARK_MEMBER_NAME(sprTracker,"sprTracker");
	HX_MARK_MEMBER_NAME(tag,"tag");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void AttachedAchievement_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(sprTracker,"sprTracker");
	HX_VISIT_MEMBER_NAME(tag,"tag");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val AttachedAchievement_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"tag") ) { return ::hx::Val( tag ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sprTracker") ) { return ::hx::Val( sprTracker ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"changeAchievement") ) { return ::hx::Val( changeAchievement_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"reloadAchievementImage") ) { return ::hx::Val( reloadAchievementImage_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val AttachedAchievement_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"tag") ) { tag=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sprTracker") ) { sprTracker=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AttachedAchievement_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("sprTracker",03,a3,e2,78));
	outFields->push(HX_("tag",5a,5a,58,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo AttachedAchievement_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(AttachedAchievement_obj,sprTracker),HX_("sprTracker",03,a3,e2,78)},
	{::hx::fsString,(int)offsetof(AttachedAchievement_obj,tag),HX_("tag",5a,5a,58,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *AttachedAchievement_obj_sStaticStorageInfo = 0;
#endif

static ::String AttachedAchievement_obj_sMemberFields[] = {
	HX_("sprTracker",03,a3,e2,78),
	HX_("tag",5a,5a,58,00),
	HX_("changeAchievement",df,5c,94,ed),
	HX_("reloadAchievementImage",e5,0d,f3,8e),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class AttachedAchievement_obj::__mClass;

void AttachedAchievement_obj::__register()
{
	AttachedAchievement_obj _hx_dummy;
	AttachedAchievement_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("AttachedAchievement",4b,73,b5,97);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(AttachedAchievement_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< AttachedAchievement_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AttachedAchievement_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AttachedAchievement_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

