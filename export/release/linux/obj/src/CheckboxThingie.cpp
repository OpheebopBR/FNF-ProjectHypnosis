#include <hxcpp.h>

#ifndef INCLUDED_CheckboxThingie
#include <CheckboxThingie.h>
#endif
#ifndef INCLUDED_ClientPrefs
#include <ClientPrefs.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
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
#ifndef INCLUDED_flixel_animation_FlxAnimation
#include <flixel/animation/FlxAnimation.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxBaseAnimation
#include <flixel/animation/FlxBaseAnimation.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
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
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1a771b91f5674cb2_6_new,"CheckboxThingie","new",0xd54b7799,"CheckboxThingie.new","CheckboxThingie.hx",6,0x380f3df7)
HX_LOCAL_STACK_FRAME(_hx_pos_1a771b91f5674cb2_31_update,"CheckboxThingie","update",0x6ebd6870,"CheckboxThingie.update","CheckboxThingie.hx",31,0x380f3df7)
HX_LOCAL_STACK_FRAME(_hx_pos_1a771b91f5674cb2_41_set_daValue,"CheckboxThingie","set_daValue",0xf384c210,"CheckboxThingie.set_daValue","CheckboxThingie.hx",41,0x380f3df7)
HX_LOCAL_STACK_FRAME(_hx_pos_1a771b91f5674cb2_56_animationFinished,"CheckboxThingie","animationFinished",0x03365b8f,"CheckboxThingie.animationFinished","CheckboxThingie.hx",56,0x380f3df7)

void CheckboxThingie_obj::__construct(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y, ::Dynamic __o_checked){
            		Float x = __o_x.Default(0);
            		Float y = __o_y.Default(0);
            		 ::Dynamic checked = __o_checked;
            		if (::hx::IsNull(__o_checked)) checked = false;
            	HX_STACKFRAME(&_hx_pos_1a771b91f5674cb2_6_new)
HXLINE(  12)		this->offsetY = ((Float)0);
HXLINE(  11)		this->offsetX = ((Float)0);
HXLINE(  10)		this->copyAlpha = true;
HXLINE(  14)		super::__construct(x,y,null());
HXLINE(  16)		::String library = null();
HXDLIN(  16)		 ::flixel::graphics::FlxGraphic imageLoaded = ::Paths_obj::addCustomGraphic(HX_("checkboxanim",d4,35,91,c5));
HXDLIN(  16)		bool xmlExists = false;
HXDLIN(  16)		if (::sys::FileSystem_obj::exists(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("checkboxanim",d4,35,91,c5)) + HX_(".xml",69,3e,c3,1e))))) {
HXLINE(  16)			xmlExists = true;
            		}
HXDLIN(  16)		 ::Dynamic _hx_tmp;
HXDLIN(  16)		if (::hx::IsNotNull( imageLoaded )) {
HXLINE(  16)			_hx_tmp = imageLoaded;
            		}
            		else {
HXLINE(  16)			 ::flixel::graphics::FlxGraphic imageToReturn = ::Paths_obj::addCustomGraphic(HX_("checkboxanim",d4,35,91,c5));
HXDLIN(  16)			if (::hx::IsNotNull( imageToReturn )) {
HXLINE(  16)				_hx_tmp = imageToReturn;
            			}
            			else {
HXLINE(  16)				_hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("checkboxanim",d4,35,91,c5)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
            			}
            		}
HXDLIN(  16)		::String _hx_tmp1;
HXDLIN(  16)		if (xmlExists) {
HXLINE(  16)			_hx_tmp1 = ::sys::io::File_obj::getContent(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("checkboxanim",d4,35,91,c5)) + HX_(".xml",69,3e,c3,1e))));
            		}
            		else {
HXLINE(  16)			_hx_tmp1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("checkboxanim",d4,35,91,c5)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library);
            		}
HXDLIN(  16)		this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,_hx_tmp1));
HXLINE(  17)		this->animation->addByPrefix(HX_("unchecked",ee,b9,26,0f),HX_("checkbox0",8d,28,22,aa),24,false,null(),null());
HXLINE(  18)		this->animation->addByPrefix(HX_("unchecking",73,08,bf,32),HX_("checkbox anim reverse",10,6c,75,b1),24,false,null(),null());
HXLINE(  19)		this->animation->addByPrefix(HX_("checking",1a,21,fb,ac),HX_("checkbox anim0",62,bb,8c,be),24,false,null(),null());
HXLINE(  20)		this->animation->addByPrefix(HX_("checked",27,b3,24,13),HX_("checkbox finish",90,64,aa,1e),24,false,null(),null());
HXLINE(  22)		this->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE(  23)		this->setGraphicSize(::Std_obj::_hx_int((((Float)0.9) * this->get_width())),null());
HXLINE(  24)		this->updateHitbox();
HXLINE(  26)		::String _hx_tmp2;
HXDLIN(  26)		if (( (bool)(checked) )) {
HXLINE(  26)			_hx_tmp2 = HX_("checking",1a,21,fb,ac);
            		}
            		else {
HXLINE(  26)			_hx_tmp2 = HX_("unchecking",73,08,bf,32);
            		}
HXDLIN(  26)		this->animationFinished(_hx_tmp2);
HXLINE(  27)		this->animation->finishCallback = this->animationFinished_dyn();
HXLINE(  28)		this->set_daValue(( (bool)(checked) ));
            	}

Dynamic CheckboxThingie_obj::__CreateEmpty() { return new CheckboxThingie_obj; }

void *CheckboxThingie_obj::_hx_vtable = 0;

Dynamic CheckboxThingie_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CheckboxThingie_obj > _hx_result = new CheckboxThingie_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool CheckboxThingie_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2c01639b) {
		if (inClassId<=(int)0x178a89bb) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x178a89bb;
		} else {
			return inClassId==(int)0x2c01639b;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void CheckboxThingie_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_1a771b91f5674cb2_31_update)
HXLINE(  32)		if (::hx::IsNotNull( this->sprTracker )) {
HXLINE(  33)			this->setPosition(((this->sprTracker->x - ( (Float)(130) )) + this->offsetX),((this->sprTracker->y + 30) + this->offsetY));
HXLINE(  34)			if (this->copyAlpha) {
HXLINE(  35)				this->set_alpha(this->sprTracker->alpha);
            			}
            		}
HXLINE(  38)		this->super::update(elapsed);
            	}


bool CheckboxThingie_obj::set_daValue(bool check){
            	HX_STACKFRAME(&_hx_pos_1a771b91f5674cb2_41_set_daValue)
HXLINE(  42)		if (check) {
HXLINE(  43)			bool _hx_tmp;
HXDLIN(  43)			if ((this->animation->_curAnim->name != HX_("checked",27,b3,24,13))) {
HXLINE(  43)				_hx_tmp = (this->animation->_curAnim->name != HX_("checking",1a,21,fb,ac));
            			}
            			else {
HXLINE(  43)				_hx_tmp = false;
            			}
HXDLIN(  43)			if (_hx_tmp) {
HXLINE(  44)				this->animation->play(HX_("checking",1a,21,fb,ac),true,null(),null());
HXLINE(  45)				this->offset->set(34,25);
            			}
            		}
            		else {
HXLINE(  47)			bool _hx_tmp;
HXDLIN(  47)			if ((this->animation->_curAnim->name != HX_("unchecked",ee,b9,26,0f))) {
HXLINE(  47)				_hx_tmp = (this->animation->_curAnim->name != HX_("unchecking",73,08,bf,32));
            			}
            			else {
HXLINE(  47)				_hx_tmp = false;
            			}
HXDLIN(  47)			if (_hx_tmp) {
HXLINE(  48)				this->animation->play(HX_("unchecking",73,08,bf,32),true,null(),null());
HXLINE(  49)				this->offset->set(25,28);
            			}
            		}
HXLINE(  51)		return check;
            	}


HX_DEFINE_DYNAMIC_FUNC1(CheckboxThingie_obj,set_daValue,return )

void CheckboxThingie_obj::animationFinished(::String name){
            	HX_STACKFRAME(&_hx_pos_1a771b91f5674cb2_56_animationFinished)
HXDLIN(  56)		::String _hx_switch_0 = name;
            		if (  (_hx_switch_0==HX_("checking",1a,21,fb,ac)) ){
HXLINE(  59)			this->animation->play(HX_("checked",27,b3,24,13),true,null(),null());
HXLINE(  60)			this->offset->set(3,12);
HXLINE(  58)			goto _hx_goto_3;
            		}
            		if (  (_hx_switch_0==HX_("unchecking",73,08,bf,32)) ){
HXLINE(  63)			this->animation->play(HX_("unchecked",ee,b9,26,0f),true,null(),null());
HXLINE(  64)			this->offset->set(0,2);
HXLINE(  62)			goto _hx_goto_3;
            		}
            		_hx_goto_3:;
            	}


HX_DEFINE_DYNAMIC_FUNC1(CheckboxThingie_obj,animationFinished,(void))


::hx::ObjectPtr< CheckboxThingie_obj > CheckboxThingie_obj::__new(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y, ::Dynamic __o_checked) {
	::hx::ObjectPtr< CheckboxThingie_obj > __this = new CheckboxThingie_obj();
	__this->__construct(__o_x,__o_y,__o_checked);
	return __this;
}

::hx::ObjectPtr< CheckboxThingie_obj > CheckboxThingie_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y, ::Dynamic __o_checked) {
	CheckboxThingie_obj *__this = (CheckboxThingie_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CheckboxThingie_obj), true, "CheckboxThingie"));
	*(void **)__this = CheckboxThingie_obj::_hx_vtable;
	__this->__construct(__o_x,__o_y,__o_checked);
	return __this;
}

CheckboxThingie_obj::CheckboxThingie_obj()
{
}

void CheckboxThingie_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CheckboxThingie);
	HX_MARK_MEMBER_NAME(sprTracker,"sprTracker");
	HX_MARK_MEMBER_NAME(daValue,"daValue");
	HX_MARK_MEMBER_NAME(copyAlpha,"copyAlpha");
	HX_MARK_MEMBER_NAME(offsetX,"offsetX");
	HX_MARK_MEMBER_NAME(offsetY,"offsetY");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CheckboxThingie_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(sprTracker,"sprTracker");
	HX_VISIT_MEMBER_NAME(daValue,"daValue");
	HX_VISIT_MEMBER_NAME(copyAlpha,"copyAlpha");
	HX_VISIT_MEMBER_NAME(offsetX,"offsetX");
	HX_VISIT_MEMBER_NAME(offsetY,"offsetY");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val CheckboxThingie_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"daValue") ) { return ::hx::Val( daValue ); }
		if (HX_FIELD_EQ(inName,"offsetX") ) { return ::hx::Val( offsetX ); }
		if (HX_FIELD_EQ(inName,"offsetY") ) { return ::hx::Val( offsetY ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"copyAlpha") ) { return ::hx::Val( copyAlpha ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sprTracker") ) { return ::hx::Val( sprTracker ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"set_daValue") ) { return ::hx::Val( set_daValue_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"animationFinished") ) { return ::hx::Val( animationFinished_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val CheckboxThingie_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"daValue") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_daValue(inValue.Cast< bool >()) );daValue=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offsetX") ) { offsetX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offsetY") ) { offsetY=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"copyAlpha") ) { copyAlpha=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sprTracker") ) { sprTracker=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CheckboxThingie_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("sprTracker",03,a3,e2,78));
	outFields->push(HX_("daValue",b4,52,e6,cb));
	outFields->push(HX_("copyAlpha",69,cb,91,a7));
	outFields->push(HX_("offsetX",65,09,65,d7));
	outFields->push(HX_("offsetY",66,09,65,d7));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo CheckboxThingie_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(CheckboxThingie_obj,sprTracker),HX_("sprTracker",03,a3,e2,78)},
	{::hx::fsBool,(int)offsetof(CheckboxThingie_obj,daValue),HX_("daValue",b4,52,e6,cb)},
	{::hx::fsBool,(int)offsetof(CheckboxThingie_obj,copyAlpha),HX_("copyAlpha",69,cb,91,a7)},
	{::hx::fsFloat,(int)offsetof(CheckboxThingie_obj,offsetX),HX_("offsetX",65,09,65,d7)},
	{::hx::fsFloat,(int)offsetof(CheckboxThingie_obj,offsetY),HX_("offsetY",66,09,65,d7)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *CheckboxThingie_obj_sStaticStorageInfo = 0;
#endif

static ::String CheckboxThingie_obj_sMemberFields[] = {
	HX_("sprTracker",03,a3,e2,78),
	HX_("daValue",b4,52,e6,cb),
	HX_("copyAlpha",69,cb,91,a7),
	HX_("offsetX",65,09,65,d7),
	HX_("offsetY",66,09,65,d7),
	HX_("update",09,86,05,87),
	HX_("set_daValue",d7,b9,4d,5c),
	HX_("animationFinished",96,e2,c1,ba),
	::String(null()) };

::hx::Class CheckboxThingie_obj::__mClass;

void CheckboxThingie_obj::__register()
{
	CheckboxThingie_obj _hx_dummy;
	CheckboxThingie_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("CheckboxThingie",27,b7,47,be);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CheckboxThingie_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CheckboxThingie_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CheckboxThingie_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CheckboxThingie_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

