#include <hxcpp.h>

#ifndef INCLUDED_ClientPrefs
#include <ClientPrefs.h>
#endif
#ifndef INCLUDED_ColorSwap
#include <ColorSwap.h>
#endif
#ifndef INCLUDED_ColorSwapShader
#include <ColorSwapShader.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_Note
#include <Note.h>
#endif
#ifndef INCLUDED_NoteSplash
#include <NoteSplash.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
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
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIState
#include <flixel/addons/ui/FlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#include <flixel/addons/ui/interfaces/IFlxUIState.h>
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
#ifndef INCLUDED_flixel_graphics_tile_FlxGraphicsShader
#include <flixel/graphics/tile/FlxGraphicsShader.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsShader
#include <openfl/display/GraphicsShader.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_fc43ca8ee61f3046_7_new,"NoteSplash","new",0xb1e3348b,"NoteSplash.new","NoteSplash.hx",7,0x3ec9e545)
HX_LOCAL_STACK_FRAME(_hx_pos_fc43ca8ee61f3046_28_setupNoteSplash,"NoteSplash","setupNoteSplash",0x4d379881,"NoteSplash.setupNoteSplash","NoteSplash.hx",28,0x3ec9e545)
HX_LOCAL_STACK_FRAME(_hx_pos_fc43ca8ee61f3046_54_loadAnims,"NoteSplash","loadAnims",0x63686ba7,"NoteSplash.loadAnims","NoteSplash.hx",54,0x3ec9e545)
HX_LOCAL_STACK_FRAME(_hx_pos_fc43ca8ee61f3046_64_update,"NoteSplash","update",0x2e98cebe,"NoteSplash.update","NoteSplash.hx",64,0x3ec9e545)

void NoteSplash_obj::__construct(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y, ::Dynamic __o_note){
            		Float x = __o_x.Default(0);
            		Float y = __o_y.Default(0);
            		 ::Dynamic note = __o_note;
            		if (::hx::IsNull(__o_note)) note = 0;
            	HX_GC_STACKFRAME(&_hx_pos_fc43ca8ee61f3046_7_new)
HXLINE(  11)		this->textureLoaded = null();
HXLINE(   9)		this->colorSwap = null();
HXLINE(  14)		super::__construct(x,y,null());
HXLINE(  16)		::String skin = HX_("noteSplashes",a7,57,29,8d);
HXLINE(  17)		bool _hx_tmp;
HXDLIN(  17)		if (::hx::IsNotNull( ::PlayState_obj::SONG->__Field(HX_("splashSkin",84,03,e1,a1),::hx::paccDynamic) )) {
HXLINE(  17)			_hx_tmp = (( (::String)(::PlayState_obj::SONG->__Field(HX_("splashSkin",84,03,e1,a1),::hx::paccDynamic)) ).length > 0);
            		}
            		else {
HXLINE(  17)			_hx_tmp = false;
            		}
HXDLIN(  17)		if (_hx_tmp) {
HXLINE(  17)			skin = ( (::String)(::PlayState_obj::SONG->__Field(HX_("splashSkin",84,03,e1,a1),::hx::paccDynamic)) );
            		}
HXLINE(  19)		this->loadAnims(skin);
HXLINE(  21)		this->colorSwap =  ::ColorSwap_obj::__alloc( HX_CTX );
HXLINE(  22)		this->shader = this->colorSwap->shader;
HXLINE(  24)		this->setupNoteSplash(x,y,note,null(),null(),null(),null());
HXLINE(  25)		this->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
            	}

Dynamic NoteSplash_obj::__CreateEmpty() { return new NoteSplash_obj; }

void *NoteSplash_obj::_hx_vtable = 0;

Dynamic NoteSplash_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< NoteSplash_obj > _hx_result = new NoteSplash_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool NoteSplash_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x6c20b5d9) {
		if (inClassId<=(int)0x2c01639b) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2c01639b;
		} else {
			return inClassId==(int)0x6c20b5d9;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void NoteSplash_obj::setupNoteSplash(Float x,Float y,::hx::Null< int >  __o_note,::String texture,::hx::Null< Float >  __o_hueColor,::hx::Null< Float >  __o_satColor,::hx::Null< Float >  __o_brtColor){
            		int note = __o_note.Default(0);
            		Float hueColor = __o_hueColor.Default(0);
            		Float satColor = __o_satColor.Default(0);
            		Float brtColor = __o_brtColor.Default(0);
            	HX_STACKFRAME(&_hx_pos_fc43ca8ee61f3046_28_setupNoteSplash)
HXLINE(  29)		this->setPosition((x - (::Note_obj::swagWidth * ((Float)0.95))),(y - ::Note_obj::swagWidth));
HXLINE(  30)		this->set_alpha(((Float)0.6));
HXLINE(  32)		if (::hx::IsNull( texture )) {
HXLINE(  33)			texture = HX_("noteSplashes",a7,57,29,8d);
HXLINE(  34)			bool _hx_tmp;
HXDLIN(  34)			if (::hx::IsNotNull( ::PlayState_obj::SONG->__Field(HX_("splashSkin",84,03,e1,a1),::hx::paccDynamic) )) {
HXLINE(  34)				_hx_tmp = (( (::String)(::PlayState_obj::SONG->__Field(HX_("splashSkin",84,03,e1,a1),::hx::paccDynamic)) ).length > 0);
            			}
            			else {
HXLINE(  34)				_hx_tmp = false;
            			}
HXDLIN(  34)			if (_hx_tmp) {
HXLINE(  34)				texture = ( (::String)(::PlayState_obj::SONG->__Field(HX_("splashSkin",84,03,e1,a1),::hx::paccDynamic)) );
            			}
HXLINE(  36)			if (::PlayState_obj::isPixelStage) {
HXLINE(  37)				texture = HX_("pixelUI/noteSplashes",bc,b3,39,86);
            			}
            		}
HXLINE(  41)		if ((this->textureLoaded != texture)) {
HXLINE(  42)			this->loadAnims(texture);
            		}
HXLINE(  44)		this->colorSwap->set_hue(hueColor);
HXLINE(  45)		this->colorSwap->set_saturation(satColor);
HXLINE(  46)		this->colorSwap->set_brightness(brtColor);
HXLINE(  47)		this->offset->set(10,10);
HXLINE(  49)		int animNum = ::flixel::FlxG_obj::random->_hx_int(1,2,null());
HXLINE(  50)		this->animation->play((((HX_("note",f2,17,0a,49) + note) + HX_("-",2d,00,00,00)) + animNum),true,null(),null());
HXLINE(  51)		if (::hx::IsNotNull( this->animation->_curAnim )) {
HXLINE(  51)			 ::flixel::animation::FlxAnimation _hx_tmp = this->animation->_curAnim;
HXDLIN(  51)			_hx_tmp->set_frameRate(( (Float)((24 + ::flixel::FlxG_obj::random->_hx_int(-2,2,null()))) ));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC7(NoteSplash_obj,setupNoteSplash,(void))

void NoteSplash_obj::loadAnims(::String skin){
            	HX_STACKFRAME(&_hx_pos_fc43ca8ee61f3046_54_loadAnims)
HXLINE(  55)		::String library = null();
HXDLIN(  55)		 ::flixel::graphics::FlxGraphic imageLoaded = ::Paths_obj::addCustomGraphic(skin);
HXDLIN(  55)		bool xmlExists = false;
HXDLIN(  55)		if (::sys::FileSystem_obj::exists(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + skin) + HX_(".xml",69,3e,c3,1e))))) {
HXLINE(  55)			xmlExists = true;
            		}
HXDLIN(  55)		 ::Dynamic _hx_tmp;
HXDLIN(  55)		if (::hx::IsNotNull( imageLoaded )) {
HXLINE(  55)			_hx_tmp = imageLoaded;
            		}
            		else {
HXLINE(  55)			 ::flixel::graphics::FlxGraphic imageToReturn = ::Paths_obj::addCustomGraphic(skin);
HXDLIN(  55)			if (::hx::IsNotNull( imageToReturn )) {
HXLINE(  55)				_hx_tmp = imageToReturn;
            			}
            			else {
HXLINE(  55)				_hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + skin) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
            			}
            		}
HXDLIN(  55)		::String _hx_tmp1;
HXDLIN(  55)		if (xmlExists) {
HXLINE(  55)			_hx_tmp1 = ::sys::io::File_obj::getContent(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + skin) + HX_(".xml",69,3e,c3,1e))));
            		}
            		else {
HXLINE(  55)			_hx_tmp1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + skin) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library);
            		}
HXDLIN(  55)		this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,_hx_tmp1));
HXLINE(  56)		{
HXLINE(  56)			{
HXLINE(  57)				this->animation->addByPrefix((HX_("note1-",4e,a3,b5,31) + 1),(HX_("note splash blue ",bb,a1,1a,b9) + 1),24,false,null(),null());
HXLINE(  58)				this->animation->addByPrefix((HX_("note2-",2d,a4,b5,31) + 1),(HX_("note splash green ",e8,04,d0,a7) + 1),24,false,null(),null());
HXLINE(  59)				this->animation->addByPrefix((HX_("note0-",6f,a2,b5,31) + 1),(HX_("note splash purple ",19,23,01,5b) + 1),24,false,null(),null());
HXLINE(  60)				this->animation->addByPrefix((HX_("note3-",0c,a5,b5,31) + 1),(HX_("note splash red ",da,d5,64,cd) + 1),24,false,null(),null());
            			}
HXLINE(  56)			{
HXLINE(  57)				this->animation->addByPrefix((HX_("note1-",4e,a3,b5,31) + 2),(HX_("note splash blue ",bb,a1,1a,b9) + 2),24,false,null(),null());
HXLINE(  58)				this->animation->addByPrefix((HX_("note2-",2d,a4,b5,31) + 2),(HX_("note splash green ",e8,04,d0,a7) + 2),24,false,null(),null());
HXLINE(  59)				this->animation->addByPrefix((HX_("note0-",6f,a2,b5,31) + 2),(HX_("note splash purple ",19,23,01,5b) + 2),24,false,null(),null());
HXLINE(  60)				this->animation->addByPrefix((HX_("note3-",0c,a5,b5,31) + 2),(HX_("note splash red ",da,d5,64,cd) + 2),24,false,null(),null());
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(NoteSplash_obj,loadAnims,(void))

void NoteSplash_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_fc43ca8ee61f3046_64_update)
HXLINE(  65)		if (::hx::IsNotNull( this->animation->_curAnim )) {
HXLINE(  65)			if (this->animation->_curAnim->finished) {
HXLINE(  65)				this->kill();
            			}
            		}
HXLINE(  67)		this->super::update(elapsed);
            	}



::hx::ObjectPtr< NoteSplash_obj > NoteSplash_obj::__new(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y, ::Dynamic __o_note) {
	::hx::ObjectPtr< NoteSplash_obj > __this = new NoteSplash_obj();
	__this->__construct(__o_x,__o_y,__o_note);
	return __this;
}

::hx::ObjectPtr< NoteSplash_obj > NoteSplash_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y, ::Dynamic __o_note) {
	NoteSplash_obj *__this = (NoteSplash_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(NoteSplash_obj), true, "NoteSplash"));
	*(void **)__this = NoteSplash_obj::_hx_vtable;
	__this->__construct(__o_x,__o_y,__o_note);
	return __this;
}

NoteSplash_obj::NoteSplash_obj()
{
}

void NoteSplash_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NoteSplash);
	HX_MARK_MEMBER_NAME(colorSwap,"colorSwap");
	HX_MARK_MEMBER_NAME(idleAnim,"idleAnim");
	HX_MARK_MEMBER_NAME(textureLoaded,"textureLoaded");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void NoteSplash_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(colorSwap,"colorSwap");
	HX_VISIT_MEMBER_NAME(idleAnim,"idleAnim");
	HX_VISIT_MEMBER_NAME(textureLoaded,"textureLoaded");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val NoteSplash_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"idleAnim") ) { return ::hx::Val( idleAnim ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"colorSwap") ) { return ::hx::Val( colorSwap ); }
		if (HX_FIELD_EQ(inName,"loadAnims") ) { return ::hx::Val( loadAnims_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"textureLoaded") ) { return ::hx::Val( textureLoaded ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"setupNoteSplash") ) { return ::hx::Val( setupNoteSplash_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val NoteSplash_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"idleAnim") ) { idleAnim=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"colorSwap") ) { colorSwap=inValue.Cast<  ::ColorSwap >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"textureLoaded") ) { textureLoaded=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void NoteSplash_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("colorSwap",96,b5,cb,27));
	outFields->push(HX_("idleAnim",45,73,61,35));
	outFields->push(HX_("textureLoaded",40,1b,87,eb));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo NoteSplash_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::ColorSwap */ ,(int)offsetof(NoteSplash_obj,colorSwap),HX_("colorSwap",96,b5,cb,27)},
	{::hx::fsString,(int)offsetof(NoteSplash_obj,idleAnim),HX_("idleAnim",45,73,61,35)},
	{::hx::fsString,(int)offsetof(NoteSplash_obj,textureLoaded),HX_("textureLoaded",40,1b,87,eb)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *NoteSplash_obj_sStaticStorageInfo = 0;
#endif

static ::String NoteSplash_obj_sMemberFields[] = {
	HX_("colorSwap",96,b5,cb,27),
	HX_("idleAnim",45,73,61,35),
	HX_("textureLoaded",40,1b,87,eb),
	HX_("setupNoteSplash",d6,1f,cd,18),
	HX_("loadAnims",3c,15,1b,3e),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class NoteSplash_obj::__mClass;

void NoteSplash_obj::__register()
{
	NoteSplash_obj _hx_dummy;
	NoteSplash_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("NoteSplash",19,93,5d,54);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(NoteSplash_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< NoteSplash_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NoteSplash_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NoteSplash_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

