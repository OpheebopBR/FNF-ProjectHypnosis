#include <hxcpp.h>

#ifndef INCLUDED_ClientPrefs
#include <ClientPrefs.h>
#endif
#ifndef INCLUDED_MenuCharacter
#include <MenuCharacter.h>
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
#ifndef INCLUDED_haxe_format_JsonParser
#include <haxe/format/JsonParser.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ab0efa272e315d84_27_new,"MenuCharacter","new",0x6b6b77dc,"MenuCharacter.new","MenuCharacter.hx",27,0x28a93714)
HX_LOCAL_STACK_FRAME(_hx_pos_ab0efa272e315d84_33_changeCharacter,"MenuCharacter","changeCharacter",0x891f6d95,"MenuCharacter.changeCharacter","MenuCharacter.hx",33,0x28a93714)
HX_LOCAL_STACK_FRAME(_hx_pos_ab0efa272e315d84_24_boot,"MenuCharacter","boot",0x8ab66936,"MenuCharacter.boot","MenuCharacter.hx",24,0x28a93714)

void MenuCharacter_obj::__construct(Float x,::String __o_character){
            		::String character = __o_character;
            		if (::hx::IsNull(__o_character)) character = HX_("bf",c4,55,00,00);
            	HX_STACKFRAME(&_hx_pos_ab0efa272e315d84_27_new)
HXLINE(  28)		super::__construct(x,null(),null());
HXLINE(  30)		this->changeCharacter(character);
            	}

Dynamic MenuCharacter_obj::__CreateEmpty() { return new MenuCharacter_obj; }

void *MenuCharacter_obj::_hx_vtable = 0;

Dynamic MenuCharacter_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MenuCharacter_obj > _hx_result = new MenuCharacter_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool MenuCharacter_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x5962df7e) {
		if (inClassId<=(int)0x2c01639b) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2c01639b;
		} else {
			return inClassId==(int)0x5962df7e;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void MenuCharacter_obj::changeCharacter(::String __o_character){
            		::String character = __o_character;
            		if (::hx::IsNull(__o_character)) character = HX_("bf",c4,55,00,00);
            	HX_GC_STACKFRAME(&_hx_pos_ab0efa272e315d84_33_changeCharacter)
HXLINE(  34)		if (::hx::IsNull( character )) {
HXLINE(  34)			character = HX_("",00,00,00,00);
            		}
HXLINE(  35)		if ((character == this->character)) {
HXLINE(  35)			return;
            		}
HXLINE(  37)		this->character = character;
HXLINE(  38)		this->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE(  39)		this->set_visible(true);
HXLINE(  41)		bool dontPlayAnim = false;
HXLINE(  42)		this->scale->set(1,1);
HXLINE(  43)		this->updateHitbox();
HXLINE(  45)		if (::hx::IsNull( character )) {
HXLINE(  50)			::String characterPath = ((HX_("images/menucharacters/",6f,fa,bf,a6) + character) + HX_(".json",56,f1,d6,c2));
HXLINE(  51)			::String rawJson = null();
HXLINE(  54)			::String path = ::Paths_obj::modFolders(characterPath);
HXLINE(  55)			if (!(::sys::FileSystem_obj::exists(path))) {
HXLINE(  56)				::String file = characterPath;
HXDLIN(  56)				if (::hx::IsNull( file )) {
HXLINE(  56)					file = HX_("",00,00,00,00);
            				}
HXDLIN(  56)				path = (HX_("assets/",4c,2a,dc,36) + file);
            			}
HXLINE(  59)			if (!(::sys::FileSystem_obj::exists(path))) {
HXLINE(  60)				::String file = ((HX_("images/menucharacters/",6f,fa,bf,a6) + ::MenuCharacter_obj::DEFAULT_CHARACTER) + HX_(".json",56,f1,d6,c2));
HXDLIN(  60)				if (::hx::IsNull( file )) {
HXLINE(  60)					file = HX_("",00,00,00,00);
            				}
HXDLIN(  60)				path = (HX_("assets/",4c,2a,dc,36) + file);
            			}
HXLINE(  62)			rawJson = ::sys::io::File_obj::getContent(path);
HXLINE(  72)			 ::Dynamic charFile =  ::haxe::format::JsonParser_obj::__alloc( HX_CTX ,rawJson)->doParse();
HXLINE(  73)			::String key = ( (::String)((HX_("menucharacters/",06,2d,77,01) + charFile->__Field(HX_("image",5b,1f,69,bd),::hx::paccDynamic))) );
HXDLIN(  73)			::String library = null();
HXDLIN(  73)			 ::flixel::graphics::FlxGraphic imageLoaded = ::Paths_obj::addCustomGraphic(key);
HXDLIN(  73)			bool xmlExists = false;
HXDLIN(  73)			if (::sys::FileSystem_obj::exists(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + key) + HX_(".xml",69,3e,c3,1e))))) {
HXLINE(  73)				xmlExists = true;
            			}
HXDLIN(  73)			 ::Dynamic _hx_tmp;
HXDLIN(  73)			if (::hx::IsNotNull( imageLoaded )) {
HXLINE(  73)				_hx_tmp = imageLoaded;
            			}
            			else {
HXLINE(  73)				 ::flixel::graphics::FlxGraphic imageToReturn = ::Paths_obj::addCustomGraphic(key);
HXDLIN(  73)				if (::hx::IsNotNull( imageToReturn )) {
HXLINE(  73)					_hx_tmp = imageToReturn;
            				}
            				else {
HXLINE(  73)					_hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + key) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
            				}
            			}
HXDLIN(  73)			::String _hx_tmp1;
HXDLIN(  73)			if (xmlExists) {
HXLINE(  73)				_hx_tmp1 = ::sys::io::File_obj::getContent(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + key) + HX_(".xml",69,3e,c3,1e))));
            			}
            			else {
HXLINE(  73)				_hx_tmp1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + key) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library);
            			}
HXDLIN(  73)			this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,_hx_tmp1));
HXLINE(  74)			this->animation->addByPrefix(HX_("idle",14,a7,b3,45),( (::String)(charFile->__Field(HX_("idle_anim",5c,d2,54,bd),::hx::paccDynamic)) ),24,null(),null(),null());
HXLINE(  75)			this->animation->addByPrefix(HX_("confirm",00,9d,39,10),( (::String)(charFile->__Field(HX_("confirm_anim",f0,e4,4f,7c),::hx::paccDynamic)) ),24,false,null(),null());
HXLINE(  77)			if (::hx::IsNotEq( charFile->__Field(HX_("scale",8a,ce,ce,78),::hx::paccDynamic),1 )) {
HXLINE(  78)				this->scale->set(charFile->__Field(HX_("scale",8a,ce,ce,78),::hx::paccDynamic),charFile->__Field(HX_("scale",8a,ce,ce,78),::hx::paccDynamic));
HXLINE(  79)				this->updateHitbox();
            			}
HXLINE(  81)			this->offset->set( ::Dynamic(charFile->__Field(HX_("position",a9,a0,fa,ca),::hx::paccDynamic))->__GetItem(0), ::Dynamic(charFile->__Field(HX_("position",a9,a0,fa,ca),::hx::paccDynamic))->__GetItem(1));
HXLINE(  82)			this->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
            		}
            		else {
HXLINE(  45)			if ((character == HX_("",00,00,00,00))) {
HXLINE(  47)				this->set_visible(false);
HXLINE(  48)				dontPlayAnim = true;
            			}
            			else {
HXLINE(  50)				::String characterPath = ((HX_("images/menucharacters/",6f,fa,bf,a6) + character) + HX_(".json",56,f1,d6,c2));
HXLINE(  51)				::String rawJson = null();
HXLINE(  54)				::String path = ::Paths_obj::modFolders(characterPath);
HXLINE(  55)				if (!(::sys::FileSystem_obj::exists(path))) {
HXLINE(  56)					::String file = characterPath;
HXDLIN(  56)					if (::hx::IsNull( file )) {
HXLINE(  56)						file = HX_("",00,00,00,00);
            					}
HXDLIN(  56)					path = (HX_("assets/",4c,2a,dc,36) + file);
            				}
HXLINE(  59)				if (!(::sys::FileSystem_obj::exists(path))) {
HXLINE(  60)					::String file = ((HX_("images/menucharacters/",6f,fa,bf,a6) + ::MenuCharacter_obj::DEFAULT_CHARACTER) + HX_(".json",56,f1,d6,c2));
HXDLIN(  60)					if (::hx::IsNull( file )) {
HXLINE(  60)						file = HX_("",00,00,00,00);
            					}
HXDLIN(  60)					path = (HX_("assets/",4c,2a,dc,36) + file);
            				}
HXLINE(  62)				rawJson = ::sys::io::File_obj::getContent(path);
HXLINE(  72)				 ::Dynamic charFile =  ::haxe::format::JsonParser_obj::__alloc( HX_CTX ,rawJson)->doParse();
HXLINE(  73)				::String key = ( (::String)((HX_("menucharacters/",06,2d,77,01) + charFile->__Field(HX_("image",5b,1f,69,bd),::hx::paccDynamic))) );
HXDLIN(  73)				::String library = null();
HXDLIN(  73)				 ::flixel::graphics::FlxGraphic imageLoaded = ::Paths_obj::addCustomGraphic(key);
HXDLIN(  73)				bool xmlExists = false;
HXDLIN(  73)				if (::sys::FileSystem_obj::exists(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + key) + HX_(".xml",69,3e,c3,1e))))) {
HXLINE(  73)					xmlExists = true;
            				}
HXDLIN(  73)				 ::Dynamic _hx_tmp;
HXDLIN(  73)				if (::hx::IsNotNull( imageLoaded )) {
HXLINE(  73)					_hx_tmp = imageLoaded;
            				}
            				else {
HXLINE(  73)					 ::flixel::graphics::FlxGraphic imageToReturn = ::Paths_obj::addCustomGraphic(key);
HXDLIN(  73)					if (::hx::IsNotNull( imageToReturn )) {
HXLINE(  73)						_hx_tmp = imageToReturn;
            					}
            					else {
HXLINE(  73)						_hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + key) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
            					}
            				}
HXDLIN(  73)				::String _hx_tmp1;
HXDLIN(  73)				if (xmlExists) {
HXLINE(  73)					_hx_tmp1 = ::sys::io::File_obj::getContent(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + key) + HX_(".xml",69,3e,c3,1e))));
            				}
            				else {
HXLINE(  73)					_hx_tmp1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + key) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library);
            				}
HXDLIN(  73)				this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,_hx_tmp1));
HXLINE(  74)				this->animation->addByPrefix(HX_("idle",14,a7,b3,45),( (::String)(charFile->__Field(HX_("idle_anim",5c,d2,54,bd),::hx::paccDynamic)) ),24,null(),null(),null());
HXLINE(  75)				this->animation->addByPrefix(HX_("confirm",00,9d,39,10),( (::String)(charFile->__Field(HX_("confirm_anim",f0,e4,4f,7c),::hx::paccDynamic)) ),24,false,null(),null());
HXLINE(  77)				if (::hx::IsNotEq( charFile->__Field(HX_("scale",8a,ce,ce,78),::hx::paccDynamic),1 )) {
HXLINE(  78)					this->scale->set(charFile->__Field(HX_("scale",8a,ce,ce,78),::hx::paccDynamic),charFile->__Field(HX_("scale",8a,ce,ce,78),::hx::paccDynamic));
HXLINE(  79)					this->updateHitbox();
            				}
HXLINE(  81)				this->offset->set( ::Dynamic(charFile->__Field(HX_("position",a9,a0,fa,ca),::hx::paccDynamic))->__GetItem(0), ::Dynamic(charFile->__Field(HX_("position",a9,a0,fa,ca),::hx::paccDynamic))->__GetItem(1));
HXLINE(  82)				this->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(MenuCharacter_obj,changeCharacter,(void))

::String MenuCharacter_obj::DEFAULT_CHARACTER;


::hx::ObjectPtr< MenuCharacter_obj > MenuCharacter_obj::__new(Float x,::String __o_character) {
	::hx::ObjectPtr< MenuCharacter_obj > __this = new MenuCharacter_obj();
	__this->__construct(x,__o_character);
	return __this;
}

::hx::ObjectPtr< MenuCharacter_obj > MenuCharacter_obj::__alloc(::hx::Ctx *_hx_ctx,Float x,::String __o_character) {
	MenuCharacter_obj *__this = (MenuCharacter_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MenuCharacter_obj), true, "MenuCharacter"));
	*(void **)__this = MenuCharacter_obj::_hx_vtable;
	__this->__construct(x,__o_character);
	return __this;
}

MenuCharacter_obj::MenuCharacter_obj()
{
}

void MenuCharacter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MenuCharacter);
	HX_MARK_MEMBER_NAME(character,"character");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MenuCharacter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(character,"character");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val MenuCharacter_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"character") ) { return ::hx::Val( character ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"changeCharacter") ) { return ::hx::Val( changeCharacter_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool MenuCharacter_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"DEFAULT_CHARACTER") ) { outValue = ( DEFAULT_CHARACTER ); return true; }
	}
	return false;
}

::hx::Val MenuCharacter_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"character") ) { character=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool MenuCharacter_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"DEFAULT_CHARACTER") ) { DEFAULT_CHARACTER=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

void MenuCharacter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("character",a9,db,d1,41));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MenuCharacter_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(MenuCharacter_obj,character),HX_("character",a9,db,d1,41)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo MenuCharacter_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &MenuCharacter_obj::DEFAULT_CHARACTER,HX_("DEFAULT_CHARACTER",2b,e7,14,33)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String MenuCharacter_obj_sMemberFields[] = {
	HX_("character",a9,db,d1,41),
	HX_("changeCharacter",19,7c,6c,fc),
	::String(null()) };

static void MenuCharacter_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MenuCharacter_obj::DEFAULT_CHARACTER,"DEFAULT_CHARACTER");
};

#ifdef HXCPP_VISIT_ALLOCS
static void MenuCharacter_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MenuCharacter_obj::DEFAULT_CHARACTER,"DEFAULT_CHARACTER");
};

#endif

::hx::Class MenuCharacter_obj::__mClass;

static ::String MenuCharacter_obj_sStaticFields[] = {
	HX_("DEFAULT_CHARACTER",2b,e7,14,33),
	::String(null())
};

void MenuCharacter_obj::__register()
{
	MenuCharacter_obj _hx_dummy;
	MenuCharacter_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("MenuCharacter",ea,99,ab,10);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &MenuCharacter_obj::__GetStatic;
	__mClass->mSetStaticField = &MenuCharacter_obj::__SetStatic;
	__mClass->mMarkFunc = MenuCharacter_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(MenuCharacter_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MenuCharacter_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MenuCharacter_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = MenuCharacter_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MenuCharacter_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MenuCharacter_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void MenuCharacter_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_ab0efa272e315d84_24_boot)
HXDLIN(  24)		DEFAULT_CHARACTER = HX_("bf",c4,55,00,00);
            	}
}

