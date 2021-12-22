#include <hxcpp.h>

#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_StageData
#include <StageData.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
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

HX_LOCAL_STACK_FRAME(_hx_pos_60a8bb2029d84628_27_loadDirectory,"StageData","loadDirectory",0x4a71c861,"StageData.loadDirectory","StageData.hx",27,0xe1269fd6)
HX_LOCAL_STACK_FRAME(_hx_pos_60a8bb2029d84628_63_getStageFile,"StageData","getStageFile",0xd040712a,"StageData.getStageFile","StageData.hx",63,0xe1269fd6)
HX_LOCAL_STACK_FRAME(_hx_pos_60a8bb2029d84628_26_boot,"StageData","boot",0x6bf10678,"StageData.boot","StageData.hx",26,0xe1269fd6)

void StageData_obj::__construct() { }

Dynamic StageData_obj::__CreateEmpty() { return new StageData_obj; }

void *StageData_obj::_hx_vtable = 0;

Dynamic StageData_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< StageData_obj > _hx_result = new StageData_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool StageData_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x577d7928;
}

::String StageData_obj::forceNextDirectory;

void StageData_obj::loadDirectory( ::Dynamic SONG){
            	HX_STACKFRAME(&_hx_pos_60a8bb2029d84628_27_loadDirectory)
HXLINE(  28)		::String stage = HX_("",00,00,00,00);
HXLINE(  29)		if (::hx::IsNotNull( SONG->__Field(HX_("stage",be,6a,0b,84),::hx::paccDynamic) )) {
HXLINE(  30)			stage = ( (::String)(SONG->__Field(HX_("stage",be,6a,0b,84),::hx::paccDynamic)) );
            		}
            		else {
HXLINE(  31)			if (::hx::IsNotNull( SONG->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic) )) {
HXLINE(  32)				::String _hx_switch_0 = ::StringTools_obj::replace(( (::String)(SONG->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic)) ).toLowerCase(),HX_(" ",20,00,00,00),HX_("-",2d,00,00,00));
            				if (  (_hx_switch_0==HX_("cocoa",09,9d,55,4a)) ||  (_hx_switch_0==HX_("eggnog",61,04,ba,f4)) ){
HXLINE(  41)					stage = HX_("mall",d4,3a,56,48);
HXDLIN(  41)					goto _hx_goto_0;
            				}
            				if (  (_hx_switch_0==HX_("monster",1a,54,b0,b8)) ||  (_hx_switch_0==HX_("south",0d,92,cc,80)) ||  (_hx_switch_0==HX_("spookeez",0c,7a,2b,75)) ){
HXLINE(  35)					stage = HX_("spooky",eb,bd,9e,c1);
HXDLIN(  35)					goto _hx_goto_0;
            				}
            				if (  (_hx_switch_0==HX_("blammed",96,02,00,3c)) ||  (_hx_switch_0==HX_("philly",28,77,5e,ef)) ||  (_hx_switch_0==HX_("philly-nice",22,2e,26,44)) ||  (_hx_switch_0==HX_("pico",e5,e8,57,4a)) ){
HXLINE(  37)					stage = HX_("philly",28,77,5e,ef);
HXDLIN(  37)					goto _hx_goto_0;
            				}
            				if (  (_hx_switch_0==HX_("high",62,37,0e,45)) ||  (_hx_switch_0==HX_("milf",d6,4c,5c,48)) ||  (_hx_switch_0==HX_("satin-panties",fe,64,00,d1)) ){
HXLINE(  39)					stage = HX_("limo",1f,17,b3,47);
HXDLIN(  39)					goto _hx_goto_0;
            				}
            				if (  (_hx_switch_0==HX_("roses",04,6c,64,ed)) ||  (_hx_switch_0==HX_("senpai",3c,df,8d,6b)) ){
HXLINE(  45)					stage = HX_("school",74,b8,c8,40);
HXDLIN(  45)					goto _hx_goto_0;
            				}
            				if (  (_hx_switch_0==HX_("thorns",9c,bf,c7,8c)) ){
HXLINE(  47)					stage = HX_("schoolEvil",28,a1,f5,f7);
HXDLIN(  47)					goto _hx_goto_0;
            				}
            				if (  (_hx_switch_0==HX_("winter-horrorland",9d,39,f4,1e)) ){
HXLINE(  43)					stage = HX_("mallEvil",88,d3,e3,a7);
HXDLIN(  43)					goto _hx_goto_0;
            				}
            				/* default */{
HXLINE(  49)					stage = HX_("stage",be,6a,0b,84);
            				}
            				_hx_goto_0:;
            			}
            			else {
HXLINE(  52)				stage = HX_("stage",be,6a,0b,84);
            			}
            		}
HXLINE(  55)		 ::Dynamic stageFile = ::StageData_obj::getStageFile(stage);
HXLINE(  56)		if (::hx::IsNull( stageFile )) {
HXLINE(  57)			::StageData_obj::forceNextDirectory = HX_("",00,00,00,00);
            		}
            		else {
HXLINE(  59)			::StageData_obj::forceNextDirectory = ( (::String)(stageFile->__Field(HX_("directory",6d,f2,44,10),::hx::paccDynamic)) );
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StageData_obj,loadDirectory,(void))

 ::Dynamic StageData_obj::getStageFile(::String stage){
            	HX_GC_STACKFRAME(&_hx_pos_60a8bb2029d84628_63_getStageFile)
HXLINE(  64)		::String rawJson = null();
HXLINE(  65)		::String file = ((HX_("stages/",9a,7a,ca,2d) + stage) + HX_(".json",56,f1,d6,c2));
HXDLIN(  65)		if (::hx::IsNull( file )) {
HXLINE(  65)			file = HX_("",00,00,00,00);
            		}
HXDLIN(  65)		::String path = (HX_("assets/",4c,2a,dc,36) + file);
HXLINE(  68)		::String modPath = ::Paths_obj::modFolders(((HX_("stages/",9a,7a,ca,2d) + stage) + HX_(".json",56,f1,d6,c2)));
HXLINE(  69)		if (::sys::FileSystem_obj::exists(modPath)) {
HXLINE(  70)			rawJson = ::sys::io::File_obj::getContent(modPath);
            		}
            		else {
HXLINE(  71)			if (::sys::FileSystem_obj::exists(path)) {
HXLINE(  72)				rawJson = ::sys::io::File_obj::getContent(path);
            			}
            			else {
HXLINE(  81)				return null();
            			}
            		}
HXLINE(  83)		return  ::haxe::format::JsonParser_obj::__alloc( HX_CTX ,rawJson)->doParse();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StageData_obj,getStageFile,return )


StageData_obj::StageData_obj()
{
}

bool StageData_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"getStageFile") ) { outValue = getStageFile_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"loadDirectory") ) { outValue = loadDirectory_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"forceNextDirectory") ) { outValue = ( forceNextDirectory ); return true; }
	}
	return false;
}

bool StageData_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 18:
		if (HX_FIELD_EQ(inName,"forceNextDirectory") ) { forceNextDirectory=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *StageData_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo StageData_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &StageData_obj::forceNextDirectory,HX_("forceNextDirectory",0f,1e,f1,a7)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void StageData_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StageData_obj::forceNextDirectory,"forceNextDirectory");
};

#ifdef HXCPP_VISIT_ALLOCS
static void StageData_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StageData_obj::forceNextDirectory,"forceNextDirectory");
};

#endif

::hx::Class StageData_obj::__mClass;

static ::String StageData_obj_sStaticFields[] = {
	HX_("forceNextDirectory",0f,1e,f1,a7),
	HX_("loadDirectory",67,c3,aa,92),
	HX_("getStageFile",e4,38,16,03),
	::String(null())
};

void StageData_obj::__register()
{
	StageData_obj _hx_dummy;
	StageData_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("StageData",e8,03,3a,94);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &StageData_obj::__GetStatic;
	__mClass->mSetStaticField = &StageData_obj::__SetStatic;
	__mClass->mMarkFunc = StageData_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(StageData_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< StageData_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = StageData_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StageData_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StageData_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void StageData_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_60a8bb2029d84628_26_boot)
HXDLIN(  26)		forceNextDirectory = null();
            	}
}

