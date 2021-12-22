#include <hxcpp.h>

#ifndef INCLUDED_BGSprite
#include <BGSprite.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_b489b25548c50b34_9_new,"BGSprite","new",0x812b699c,"BGSprite.new","BGSprite.hx",9,0x85bebd54)
HX_LOCAL_STACK_FRAME(_hx_pos_b489b25548c50b34_35_dance,"BGSprite","dance",0xed60e36f,"BGSprite.dance","BGSprite.hx",35,0x85bebd54)

void BGSprite_obj::__construct(::String image,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y, ::Dynamic __o_scrollX, ::Dynamic __o_scrollY,::Array< ::String > animArray, ::Dynamic __o_loop){
            		Float x = __o_x.Default(0);
            		Float y = __o_y.Default(0);
            		 ::Dynamic scrollX = __o_scrollX;
            		if (::hx::IsNull(__o_scrollX)) scrollX = 1;
            		 ::Dynamic scrollY = __o_scrollY;
            		if (::hx::IsNull(__o_scrollY)) scrollY = 1;
            		 ::Dynamic loop = __o_loop;
            		if (::hx::IsNull(__o_loop)) loop = false;
            	HX_STACKFRAME(&_hx_pos_b489b25548c50b34_9_new)
HXLINE(  10)		super::__construct(x,y,null());
HXLINE(  12)		if (::ClientPrefs_obj::maxOptimization) {
HXLINE(  12)			this->kill();
            		}
HXLINE(  14)		if (::hx::IsNotNull( animArray )) {
HXLINE(  15)			::String library = null();
HXDLIN(  15)			 ::flixel::graphics::FlxGraphic imageLoaded = ::Paths_obj::addCustomGraphic(image);
HXDLIN(  15)			bool xmlExists = false;
HXDLIN(  15)			if (::sys::FileSystem_obj::exists(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + image) + HX_(".xml",69,3e,c3,1e))))) {
HXLINE(  15)				xmlExists = true;
            			}
HXDLIN(  15)			 ::Dynamic _hx_tmp;
HXDLIN(  15)			if (::hx::IsNotNull( imageLoaded )) {
HXLINE(  15)				_hx_tmp = imageLoaded;
            			}
            			else {
HXLINE(  15)				 ::flixel::graphics::FlxGraphic imageToReturn = ::Paths_obj::addCustomGraphic(image);
HXDLIN(  15)				if (::hx::IsNotNull( imageToReturn )) {
HXLINE(  15)					_hx_tmp = imageToReturn;
            				}
            				else {
HXLINE(  15)					_hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + image) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
            				}
            			}
HXDLIN(  15)			::String _hx_tmp1;
HXDLIN(  15)			if (xmlExists) {
HXLINE(  15)				_hx_tmp1 = ::sys::io::File_obj::getContent(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + image) + HX_(".xml",69,3e,c3,1e))));
            			}
            			else {
HXLINE(  15)				_hx_tmp1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + image) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library);
            			}
HXDLIN(  15)			this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,_hx_tmp1));
HXLINE(  16)			{
HXLINE(  16)				int _g = 0;
HXDLIN(  16)				int _g1 = animArray->length;
HXDLIN(  16)				while((_g < _g1)){
HXLINE(  16)					_g = (_g + 1);
HXDLIN(  16)					int i = (_g - 1);
HXLINE(  17)					::String anim = animArray->__get(i);
HXLINE(  18)					this->animation->addByPrefix(anim,anim,24,loop,null(),null());
HXLINE(  19)					if (::hx::IsNull( this->idleAnim )) {
HXLINE(  20)						this->idleAnim = anim;
HXLINE(  21)						this->animation->play(anim,null(),null(),null());
            					}
            				}
            			}
            		}
            		else {
HXLINE(  25)			if (::hx::IsNotNull( image )) {
HXLINE(  26)				::String library = null();
HXDLIN(  26)				 ::flixel::graphics::FlxGraphic imageToReturn = ::Paths_obj::addCustomGraphic(image);
HXDLIN(  26)				 ::Dynamic _hx_tmp;
HXDLIN(  26)				if (::hx::IsNotNull( imageToReturn )) {
HXLINE(  26)					_hx_tmp = imageToReturn;
            				}
            				else {
HXLINE(  26)					_hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + image) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
            				}
HXDLIN(  26)				this->loadGraphic(_hx_tmp,null(),null(),null(),null(),null());
            			}
HXLINE(  28)			this->set_active(false);
            		}
HXLINE(  30)		this->scrollFactor->set(scrollX,scrollY);
HXLINE(  31)		this->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
            	}

Dynamic BGSprite_obj::__CreateEmpty() { return new BGSprite_obj; }

void *BGSprite_obj::_hx_vtable = 0;

Dynamic BGSprite_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BGSprite_obj > _hx_result = new BGSprite_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return _hx_result;
}

bool BGSprite_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x48f46932) {
		if (inClassId<=(int)0x2c01639b) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2c01639b;
		} else {
			return inClassId==(int)0x48f46932;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void BGSprite_obj::dance( ::Dynamic __o_forceplay){
            		 ::Dynamic forceplay = __o_forceplay;
            		if (::hx::IsNull(__o_forceplay)) forceplay = false;
            	HX_STACKFRAME(&_hx_pos_b489b25548c50b34_35_dance)
HXDLIN(  35)		if (::hx::IsNotNull( this->idleAnim )) {
HXLINE(  36)			this->animation->play(this->idleAnim,forceplay,null(),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(BGSprite_obj,dance,(void))


::hx::ObjectPtr< BGSprite_obj > BGSprite_obj::__new(::String image,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y, ::Dynamic __o_scrollX, ::Dynamic __o_scrollY,::Array< ::String > animArray, ::Dynamic __o_loop) {
	::hx::ObjectPtr< BGSprite_obj > __this = new BGSprite_obj();
	__this->__construct(image,__o_x,__o_y,__o_scrollX,__o_scrollY,animArray,__o_loop);
	return __this;
}

::hx::ObjectPtr< BGSprite_obj > BGSprite_obj::__alloc(::hx::Ctx *_hx_ctx,::String image,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y, ::Dynamic __o_scrollX, ::Dynamic __o_scrollY,::Array< ::String > animArray, ::Dynamic __o_loop) {
	BGSprite_obj *__this = (BGSprite_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BGSprite_obj), true, "BGSprite"));
	*(void **)__this = BGSprite_obj::_hx_vtable;
	__this->__construct(image,__o_x,__o_y,__o_scrollX,__o_scrollY,animArray,__o_loop);
	return __this;
}

BGSprite_obj::BGSprite_obj()
{
}

void BGSprite_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BGSprite);
	HX_MARK_MEMBER_NAME(idleAnim,"idleAnim");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BGSprite_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(idleAnim,"idleAnim");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val BGSprite_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"dance") ) { return ::hx::Val( dance_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"idleAnim") ) { return ::hx::Val( idleAnim ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val BGSprite_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"idleAnim") ) { idleAnim=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BGSprite_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("idleAnim",45,73,61,35));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BGSprite_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(BGSprite_obj,idleAnim),HX_("idleAnim",45,73,61,35)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *BGSprite_obj_sStaticStorageInfo = 0;
#endif

static ::String BGSprite_obj_sMemberFields[] = {
	HX_("idleAnim",45,73,61,35),
	HX_("dance",33,83,83,d4),
	::String(null()) };

::hx::Class BGSprite_obj::__mClass;

void BGSprite_obj::__register()
{
	BGSprite_obj _hx_dummy;
	BGSprite_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("BGSprite",aa,ab,9f,3f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BGSprite_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BGSprite_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BGSprite_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BGSprite_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

