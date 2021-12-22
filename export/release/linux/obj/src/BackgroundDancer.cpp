#include <hxcpp.h>

#ifndef INCLUDED_BackgroundDancer
#include <BackgroundDancer.h>
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
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d86c65e08c62e087_6_new,"BackgroundDancer","new",0x54563fff,"BackgroundDancer.new","BackgroundDancer.hx",6,0x2f720451)
static const int _hx_array_data_0320d48d_1[] = {
	(int)0,(int)1,(int)2,(int)3,(int)4,(int)5,(int)6,(int)7,(int)8,(int)9,(int)10,(int)11,(int)12,(int)13,(int)14,
};
static const int _hx_array_data_0320d48d_2[] = {
	(int)15,(int)16,(int)17,(int)18,(int)19,(int)20,(int)21,(int)22,(int)23,(int)24,(int)25,(int)26,(int)27,(int)28,(int)29,
};
HX_LOCAL_STACK_FRAME(_hx_pos_d86c65e08c62e087_24_dance,"BackgroundDancer","dance",0x01b85892,"BackgroundDancer.dance","BackgroundDancer.hx",24,0x2f720451)

void BackgroundDancer_obj::__construct(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_d86c65e08c62e087_6_new)
HXLINE(  21)		this->danceDir = false;
HXLINE(  10)		super::__construct(x,y,null());
HXLINE(  12)		if (::ClientPrefs_obj::maxOptimization) {
HXLINE(  12)			this->kill();
            		}
HXLINE(  14)		::String library = null();
HXDLIN(  14)		 ::flixel::graphics::FlxGraphic imageLoaded = ::Paths_obj::addCustomGraphic(HX_("limo/limoDancer",8e,b6,e5,ea));
HXDLIN(  14)		bool xmlExists = false;
HXDLIN(  14)		if (::sys::FileSystem_obj::exists(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("limo/limoDancer",8e,b6,e5,ea)) + HX_(".xml",69,3e,c3,1e))))) {
HXLINE(  14)			xmlExists = true;
            		}
HXDLIN(  14)		 ::Dynamic _hx_tmp;
HXDLIN(  14)		if (::hx::IsNotNull( imageLoaded )) {
HXLINE(  14)			_hx_tmp = imageLoaded;
            		}
            		else {
HXLINE(  14)			 ::flixel::graphics::FlxGraphic imageToReturn = ::Paths_obj::addCustomGraphic(HX_("limo/limoDancer",8e,b6,e5,ea));
HXDLIN(  14)			if (::hx::IsNotNull( imageToReturn )) {
HXLINE(  14)				_hx_tmp = imageToReturn;
            			}
            			else {
HXLINE(  14)				_hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("limo/limoDancer",8e,b6,e5,ea)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
            			}
            		}
HXDLIN(  14)		::String _hx_tmp1;
HXDLIN(  14)		if (xmlExists) {
HXLINE(  14)			_hx_tmp1 = ::sys::io::File_obj::getContent(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("limo/limoDancer",8e,b6,e5,ea)) + HX_(".xml",69,3e,c3,1e))));
            		}
            		else {
HXLINE(  14)			_hx_tmp1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("limo/limoDancer",8e,b6,e5,ea)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library);
            		}
HXDLIN(  14)		this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,_hx_tmp1));
HXLINE(  15)		this->animation->addByIndices(HX_("danceLeft",da,cc,f9,df),HX_("bg dancer sketch PINK",64,fb,2b,a2),::Array_obj< int >::fromData( _hx_array_data_0320d48d_1,15),HX_("",00,00,00,00),24,false,null(),null());
HXLINE(  16)		this->animation->addByIndices(HX_("danceRight",a9,7f,a6,91),HX_("bg dancer sketch PINK",64,fb,2b,a2),::Array_obj< int >::fromData( _hx_array_data_0320d48d_2,15),HX_("",00,00,00,00),24,false,null(),null());
HXLINE(  17)		this->animation->play(HX_("danceLeft",da,cc,f9,df),null(),null(),null());
HXLINE(  18)		this->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
            	}

Dynamic BackgroundDancer_obj::__CreateEmpty() { return new BackgroundDancer_obj; }

void *BackgroundDancer_obj::_hx_vtable = 0;

Dynamic BackgroundDancer_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BackgroundDancer_obj > _hx_result = new BackgroundDancer_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool BackgroundDancer_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x7ccf8994) {
		if (inClassId<=(int)0x2c01639b) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2c01639b;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	} else {
		return inClassId==(int)0x7dab0655 || inClassId==(int)0x7f6d6161;
	}
}

void BackgroundDancer_obj::dance(){
            	HX_STACKFRAME(&_hx_pos_d86c65e08c62e087_24_dance)
HXLINE(  25)		this->danceDir = !(this->danceDir);
HXLINE(  27)		if (this->danceDir) {
HXLINE(  28)			this->animation->play(HX_("danceRight",a9,7f,a6,91),true,null(),null());
            		}
            		else {
HXLINE(  30)			this->animation->play(HX_("danceLeft",da,cc,f9,df),true,null(),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(BackgroundDancer_obj,dance,(void))


::hx::ObjectPtr< BackgroundDancer_obj > BackgroundDancer_obj::__new(Float x,Float y) {
	::hx::ObjectPtr< BackgroundDancer_obj > __this = new BackgroundDancer_obj();
	__this->__construct(x,y);
	return __this;
}

::hx::ObjectPtr< BackgroundDancer_obj > BackgroundDancer_obj::__alloc(::hx::Ctx *_hx_ctx,Float x,Float y) {
	BackgroundDancer_obj *__this = (BackgroundDancer_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BackgroundDancer_obj), true, "BackgroundDancer"));
	*(void **)__this = BackgroundDancer_obj::_hx_vtable;
	__this->__construct(x,y);
	return __this;
}

BackgroundDancer_obj::BackgroundDancer_obj()
{
}

::hx::Val BackgroundDancer_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"dance") ) { return ::hx::Val( dance_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"danceDir") ) { return ::hx::Val( danceDir ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val BackgroundDancer_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"danceDir") ) { danceDir=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BackgroundDancer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("danceDir",da,33,3a,58));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BackgroundDancer_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(BackgroundDancer_obj,danceDir),HX_("danceDir",da,33,3a,58)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *BackgroundDancer_obj_sStaticStorageInfo = 0;
#endif

static ::String BackgroundDancer_obj_sMemberFields[] = {
	HX_("danceDir",da,33,3a,58),
	HX_("dance",33,83,83,d4),
	::String(null()) };

::hx::Class BackgroundDancer_obj::__mClass;

void BackgroundDancer_obj::__register()
{
	BackgroundDancer_obj _hx_dummy;
	BackgroundDancer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("BackgroundDancer",8d,d4,20,03);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BackgroundDancer_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BackgroundDancer_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BackgroundDancer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BackgroundDancer_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

