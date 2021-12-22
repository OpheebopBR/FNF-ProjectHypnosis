#include <hxcpp.h>

#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_Song
#include <Song.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_4e288e2989890fc6_35_new,"Song","new",0xfb6c8f67,"Song.new","Song.hx",35,0x775e99e9)
HX_LOCAL_STACK_FRAME(_hx_pos_4e288e2989890fc6_53_onLoadJson,"Song","onLoadJson",0xe02d2786,"Song.onLoadJson","Song.hx",53,0x775e99e9)
HX_LOCAL_STACK_FRAME(_hx_pos_4e288e2989890fc6_93_loadFromJson,"Song","loadFromJson",0x10fda511,"Song.loadFromJson","Song.hx",93,0x775e99e9)
HX_LOCAL_STACK_FRAME(_hx_pos_4e288e2989890fc6_142_parseJSONshit,"Song","parseJSONshit",0x7c7ff6e2,"Song.parseJSONshit","Song.hx",142,0x775e99e9)

void Song_obj::__construct(::String song,::Array< ::Dynamic> notes,Float bpm){
            	HX_STACKFRAME(&_hx_pos_4e288e2989890fc6_35_new)
HXLINE(  50)		this->gfVersion = HX_("gf",1f,5a,00,00);
HXLINE(  49)		this->player3 = HX_("gf",1f,5a,00,00);
HXLINE(  48)		this->player2 = HX_("dad",47,36,4c,00);
HXLINE(  47)		this->player1 = HX_("bf",c4,55,00,00);
HXLINE(  44)		this->speed = ((Float)1);
HXLINE(  41)		this->needsVoices = true;
HXLINE(  87)		this->song = song;
HXLINE(  88)		this->notes = notes;
HXLINE(  89)		this->bpm = bpm;
            	}

Dynamic Song_obj::__CreateEmpty() { return new Song_obj; }

void *Song_obj::_hx_vtable = 0;

Dynamic Song_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Song_obj > _hx_result = new Song_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool Song_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0b844619;
}

void Song_obj::onLoadJson( ::Dynamic songJson){
            	HX_STACKFRAME(&_hx_pos_4e288e2989890fc6_53_onLoadJson)
HXLINE(  54)		if (::hx::IsNull( songJson->__Field(HX_("gfVersion",b9,c6,7d,f3),::hx::paccDynamic) )) {
HXLINE(  56)			songJson->__SetField(HX_("gfVersion",b9,c6,7d,f3),songJson->__Field(HX_("player3",b2,09,15,8a),::hx::paccDynamic),::hx::paccDynamic);
HXLINE(  57)			songJson->__SetField(HX_("player3",b2,09,15,8a),null(),::hx::paccDynamic);
            		}
HXLINE(  60)		if (::hx::IsNull( songJson->__Field(HX_("events",19,4f,6a,96),::hx::paccDynamic) )) {
HXLINE(  62)			songJson->__SetField(HX_("events",19,4f,6a,96),::Array_obj< ::Dynamic>::__new(0),::hx::paccDynamic);
HXLINE(  63)			{
HXLINE(  63)				int _g = 0;
HXDLIN(  63)				int _g1 = ( (::Array< ::Dynamic>)(songJson->__Field(HX_("notes",41,dc,ca,9f),::hx::paccDynamic)) )->length;
HXDLIN(  63)				while((_g < _g1)){
HXLINE(  63)					_g = (_g + 1);
HXDLIN(  63)					int secNum = (_g - 1);
HXLINE(  65)					 ::Dynamic sec =  ::Dynamic(songJson->__Field(HX_("notes",41,dc,ca,9f),::hx::paccDynamic))->__GetItem(secNum);
HXLINE(  67)					int i = 0;
HXLINE(  68)					::cpp::VirtualArray notes = ( (::cpp::VirtualArray)(sec->__Field(HX_("sectionNotes",1c,c8,a7,fe),::hx::paccDynamic)) );
HXLINE(  69)					int len = notes->get_length();
HXLINE(  70)					while((i < len)){
HXLINE(  72)						::cpp::VirtualArray note = ( (::cpp::VirtualArray)(notes->__get(i)) );
HXLINE(  73)						if (::hx::IsLess( note->__get(1),0 )) {
HXLINE(  75)							( (::Array< ::Dynamic>)(songJson->__Field(HX_("events",19,4f,6a,96),::hx::paccDynamic)) )->push(::Array_obj< ::Dynamic>::__new(2)->init(0,note->__get(0))->init(1,::Array_obj< ::Dynamic>::__new(1)->init(0,::cpp::VirtualArray_obj::__new(3)->init(0,note->__get(2))->init(1,note->__get(3))->init(2,note->__get(4)))));
HXLINE(  76)							notes->remove(note);
HXLINE(  77)							len = notes->get_length();
            						}
            						else {
HXLINE(  79)							i = (i + 1);
            						}
            					}
            				}
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Song_obj,onLoadJson,(void))

 ::Dynamic Song_obj::loadFromJson(::String jsonInput,::String folder){
            	HX_STACKFRAME(&_hx_pos_4e288e2989890fc6_93_loadFromJson)
HXLINE(  94)		::String rawJson = null();
HXLINE(  96)		::String formattedFolder = ::StringTools_obj::replace(folder.toLowerCase(),HX_(" ",20,00,00,00),HX_("-",2d,00,00,00));
HXLINE(  97)		::String formattedSong = ::StringTools_obj::replace(jsonInput.toLowerCase(),HX_(" ",20,00,00,00),HX_("-",2d,00,00,00));
HXLINE(  99)		::String moddyFile = ::Paths_obj::modFolders(((HX_("data/",c5,0e,88,d4) + ((formattedFolder + HX_("/",2f,00,00,00)) + formattedSong)) + HX_(".json",56,f1,d6,c2)));
HXLINE( 100)		if (::sys::FileSystem_obj::exists(moddyFile)) {
HXLINE( 101)			rawJson = ::StringTools_obj::trim(::sys::io::File_obj::getContent(moddyFile));
            		}
HXLINE( 105)		if (::hx::IsNull( rawJson )) {
HXLINE( 107)			::String library = null();
HXDLIN( 107)			rawJson = ::StringTools_obj::trim(::sys::io::File_obj::getContent(::Paths_obj::getPath(((HX_("data/",c5,0e,88,d4) + ((formattedFolder + HX_("/",2f,00,00,00)) + formattedSong)) + HX_(".json",56,f1,d6,c2)),HX_("TEXT",ad,94,ba,37),library)));
            		}
HXLINE( 113)		while(!(::StringTools_obj::endsWith(rawJson,HX_("}",7d,00,00,00)))){
HXLINE( 115)			rawJson = rawJson.substr(0,(rawJson.length - 1));
            		}
HXLINE( 135)		 ::Dynamic songJson = ::Song_obj::parseJSONshit(rawJson);
HXLINE( 136)		if ((jsonInput != HX_("events",19,4f,6a,96))) {
HXLINE( 136)			::StageData_obj::loadDirectory(songJson);
            		}
HXLINE( 137)		::Song_obj::onLoadJson(songJson);
HXLINE( 138)		return songJson;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Song_obj,loadFromJson,return )

 ::Dynamic Song_obj::parseJSONshit(::String rawJson){
            	HX_GC_STACKFRAME(&_hx_pos_4e288e2989890fc6_142_parseJSONshit)
HXLINE( 143)		 ::Dynamic swagShit =  ::haxe::format::JsonParser_obj::__alloc( HX_CTX ,rawJson)->doParse()->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic);
HXLINE( 144)		swagShit->__SetField(HX_("validScore",b6,dc,18,c7),true,::hx::paccDynamic);
HXLINE( 145)		return swagShit;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Song_obj,parseJSONshit,return )


Song_obj::Song_obj()
{
}

void Song_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Song);
	HX_MARK_MEMBER_NAME(song,"song");
	HX_MARK_MEMBER_NAME(notes,"notes");
	HX_MARK_MEMBER_NAME(events,"events");
	HX_MARK_MEMBER_NAME(bpm,"bpm");
	HX_MARK_MEMBER_NAME(needsVoices,"needsVoices");
	HX_MARK_MEMBER_NAME(arrowSkin,"arrowSkin");
	HX_MARK_MEMBER_NAME(splashSkin,"splashSkin");
	HX_MARK_MEMBER_NAME(speed,"speed");
	HX_MARK_MEMBER_NAME(stage,"stage");
	HX_MARK_MEMBER_NAME(player1,"player1");
	HX_MARK_MEMBER_NAME(player2,"player2");
	HX_MARK_MEMBER_NAME(player3,"player3");
	HX_MARK_MEMBER_NAME(gfVersion,"gfVersion");
	HX_MARK_END_CLASS();
}

void Song_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(song,"song");
	HX_VISIT_MEMBER_NAME(notes,"notes");
	HX_VISIT_MEMBER_NAME(events,"events");
	HX_VISIT_MEMBER_NAME(bpm,"bpm");
	HX_VISIT_MEMBER_NAME(needsVoices,"needsVoices");
	HX_VISIT_MEMBER_NAME(arrowSkin,"arrowSkin");
	HX_VISIT_MEMBER_NAME(splashSkin,"splashSkin");
	HX_VISIT_MEMBER_NAME(speed,"speed");
	HX_VISIT_MEMBER_NAME(stage,"stage");
	HX_VISIT_MEMBER_NAME(player1,"player1");
	HX_VISIT_MEMBER_NAME(player2,"player2");
	HX_VISIT_MEMBER_NAME(player3,"player3");
	HX_VISIT_MEMBER_NAME(gfVersion,"gfVersion");
}

::hx::Val Song_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"bpm") ) { return ::hx::Val( bpm ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"song") ) { return ::hx::Val( song ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"notes") ) { return ::hx::Val( notes ); }
		if (HX_FIELD_EQ(inName,"speed") ) { return ::hx::Val( speed ); }
		if (HX_FIELD_EQ(inName,"stage") ) { return ::hx::Val( stage ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"events") ) { return ::hx::Val( events ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"player1") ) { return ::hx::Val( player1 ); }
		if (HX_FIELD_EQ(inName,"player2") ) { return ::hx::Val( player2 ); }
		if (HX_FIELD_EQ(inName,"player3") ) { return ::hx::Val( player3 ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"arrowSkin") ) { return ::hx::Val( arrowSkin ); }
		if (HX_FIELD_EQ(inName,"gfVersion") ) { return ::hx::Val( gfVersion ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"splashSkin") ) { return ::hx::Val( splashSkin ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"needsVoices") ) { return ::hx::Val( needsVoices ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Song_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"onLoadJson") ) { outValue = onLoadJson_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"loadFromJson") ) { outValue = loadFromJson_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"parseJSONshit") ) { outValue = parseJSONshit_dyn(); return true; }
	}
	return false;
}

::hx::Val Song_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"bpm") ) { bpm=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"song") ) { song=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"notes") ) { notes=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"speed") ) { speed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stage") ) { stage=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"events") ) { events=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"player1") ) { player1=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"player2") ) { player2=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"player3") ) { player3=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"arrowSkin") ) { arrowSkin=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gfVersion") ) { gfVersion=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"splashSkin") ) { splashSkin=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"needsVoices") ) { needsVoices=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Song_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("song",d5,23,58,4c));
	outFields->push(HX_("notes",41,dc,ca,9f));
	outFields->push(HX_("events",19,4f,6a,96));
	outFields->push(HX_("bpm",df,be,4a,00));
	outFields->push(HX_("needsVoices",be,05,e9,0d));
	outFields->push(HX_("arrowSkin",e6,d4,f8,07));
	outFields->push(HX_("splashSkin",84,03,e1,a1));
	outFields->push(HX_("speed",87,97,69,81));
	outFields->push(HX_("stage",be,6a,0b,84));
	outFields->push(HX_("player1",b0,09,15,8a));
	outFields->push(HX_("player2",b1,09,15,8a));
	outFields->push(HX_("player3",b2,09,15,8a));
	outFields->push(HX_("gfVersion",b9,c6,7d,f3));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Song_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(Song_obj,song),HX_("song",d5,23,58,4c)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Song_obj,notes),HX_("notes",41,dc,ca,9f)},
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(int)offsetof(Song_obj,events),HX_("events",19,4f,6a,96)},
	{::hx::fsFloat,(int)offsetof(Song_obj,bpm),HX_("bpm",df,be,4a,00)},
	{::hx::fsBool,(int)offsetof(Song_obj,needsVoices),HX_("needsVoices",be,05,e9,0d)},
	{::hx::fsString,(int)offsetof(Song_obj,arrowSkin),HX_("arrowSkin",e6,d4,f8,07)},
	{::hx::fsString,(int)offsetof(Song_obj,splashSkin),HX_("splashSkin",84,03,e1,a1)},
	{::hx::fsFloat,(int)offsetof(Song_obj,speed),HX_("speed",87,97,69,81)},
	{::hx::fsString,(int)offsetof(Song_obj,stage),HX_("stage",be,6a,0b,84)},
	{::hx::fsString,(int)offsetof(Song_obj,player1),HX_("player1",b0,09,15,8a)},
	{::hx::fsString,(int)offsetof(Song_obj,player2),HX_("player2",b1,09,15,8a)},
	{::hx::fsString,(int)offsetof(Song_obj,player3),HX_("player3",b2,09,15,8a)},
	{::hx::fsString,(int)offsetof(Song_obj,gfVersion),HX_("gfVersion",b9,c6,7d,f3)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Song_obj_sStaticStorageInfo = 0;
#endif

static ::String Song_obj_sMemberFields[] = {
	HX_("song",d5,23,58,4c),
	HX_("notes",41,dc,ca,9f),
	HX_("events",19,4f,6a,96),
	HX_("bpm",df,be,4a,00),
	HX_("needsVoices",be,05,e9,0d),
	HX_("arrowSkin",e6,d4,f8,07),
	HX_("splashSkin",84,03,e1,a1),
	HX_("speed",87,97,69,81),
	HX_("stage",be,6a,0b,84),
	HX_("player1",b0,09,15,8a),
	HX_("player2",b1,09,15,8a),
	HX_("player3",b2,09,15,8a),
	HX_("gfVersion",b9,c6,7d,f3),
	::String(null()) };

::hx::Class Song_obj::__mClass;

static ::String Song_obj_sStaticFields[] = {
	HX_("onLoadJson",ad,e7,be,94),
	HX_("loadFromJson",f8,fc,9c,5d),
	HX_("parseJSONshit",1b,89,4d,3b),
	::String(null())
};

void Song_obj::__register()
{
	Song_obj _hx_dummy;
	Song_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Song",f5,4f,31,37);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Song_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Song_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Song_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Song_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Song_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Song_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

