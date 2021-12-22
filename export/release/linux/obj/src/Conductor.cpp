#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_ClientPrefs
#include <ClientPrefs.h>
#endif
#ifndef INCLUDED_Conductor
#include <Conductor.h>
#endif
#ifndef INCLUDED_Note
#include <Note.h>
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
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_9bd24c9adde08dff_32_new,"Conductor","new",0xc2a20839,"Conductor.new","Conductor.hx",32,0xeb0fa157)
HX_LOCAL_STACK_FRAME(_hx_pos_9bd24c9adde08dff_36_judgeNote,"Conductor","judgeNote",0x11872bc2,"Conductor.judgeNote","Conductor.hx",36,0xeb0fa157)
static const ::String _hx_array_data_7ba177c7_3[] = {
	HX_("sick",be,8c,53,4c),HX_("good",3d,95,69,44),HX_("bad",c5,b1,4a,00),
};
HX_LOCAL_STACK_FRAME(_hx_pos_9bd24c9adde08dff_52_mapBPMChanges,"Conductor","mapBPMChanges",0x401caab9,"Conductor.mapBPMChanges","Conductor.hx",52,0xeb0fa157)
HX_LOCAL_STACK_FRAME(_hx_pos_9bd24c9adde08dff_79_changeBPM,"Conductor","changeBPM",0xeafb6fe8,"Conductor.changeBPM","Conductor.hx",79,0xeb0fa157)
HX_LOCAL_STACK_FRAME(_hx_pos_9bd24c9adde08dff_19_boot,"Conductor","boot",0x833e2a39,"Conductor.boot","Conductor.hx",19,0xeb0fa157)
HX_LOCAL_STACK_FRAME(_hx_pos_9bd24c9adde08dff_20_boot,"Conductor","boot",0x833e2a39,"Conductor.boot","Conductor.hx",20,0xeb0fa157)
HX_LOCAL_STACK_FRAME(_hx_pos_9bd24c9adde08dff_21_boot,"Conductor","boot",0x833e2a39,"Conductor.boot","Conductor.hx",21,0xeb0fa157)
HX_LOCAL_STACK_FRAME(_hx_pos_9bd24c9adde08dff_24_boot,"Conductor","boot",0x833e2a39,"Conductor.boot","Conductor.hx",24,0xeb0fa157)
HX_LOCAL_STACK_FRAME(_hx_pos_9bd24c9adde08dff_27_boot,"Conductor","boot",0x833e2a39,"Conductor.boot","Conductor.hx",27,0xeb0fa157)
HX_LOCAL_STACK_FRAME(_hx_pos_9bd24c9adde08dff_29_boot,"Conductor","boot",0x833e2a39,"Conductor.boot","Conductor.hx",29,0xeb0fa157)

void Conductor_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_9bd24c9adde08dff_32_new)
            	}

Dynamic Conductor_obj::__CreateEmpty() { return new Conductor_obj; }

void *Conductor_obj::_hx_vtable = 0;

Dynamic Conductor_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Conductor_obj > _hx_result = new Conductor_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Conductor_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3ee4ed07;
}

Float Conductor_obj::bpm;

Float Conductor_obj::crochet;

Float Conductor_obj::stepCrochet;

Float Conductor_obj::songPosition;

Float Conductor_obj::lastSongPos;

Float Conductor_obj::offset;

Float Conductor_obj::safeZoneOffset;

::Array< ::Dynamic> Conductor_obj::bpmChangeMap;

::String Conductor_obj::judgeNote( ::Note note,::hx::Null< Float >  __o_diff){
            		Float diff = __o_diff.Default(0);
            	HX_STACKFRAME(&_hx_pos_9bd24c9adde08dff_36_judgeNote)
HXLINE(  38)		::Array< int > timingWindows = ::Array_obj< int >::__new(3)->init(0,::ClientPrefs_obj::sickWindow)->init(1,::ClientPrefs_obj::goodWindow)->init(2,::ClientPrefs_obj::badWindow);
HXLINE(  39)		::Array< ::String > windowNames = ::Array_obj< ::String >::fromData( _hx_array_data_7ba177c7_3,3);
HXLINE(  42)		{
HXLINE(  42)			int _g = 0;
HXDLIN(  42)			int _g1 = timingWindows->length;
HXDLIN(  42)			while((_g < _g1)){
HXLINE(  42)				_g = (_g + 1);
HXDLIN(  42)				int i = (_g - 1);
HXLINE(  44)				if ((diff <= timingWindows->__get(::Math_obj::round(::Math_obj::min(( (Float)(i) ),( (Float)((timingWindows->length - 1)) )))))) {
HXLINE(  46)					return windowNames->__get(i);
            				}
            			}
            		}
HXLINE(  49)		return HX_("shit",c0,cf,52,4c);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Conductor_obj,judgeNote,return )

void Conductor_obj::mapBPMChanges( ::Dynamic song){
            	HX_STACKFRAME(&_hx_pos_9bd24c9adde08dff_52_mapBPMChanges)
HXLINE(  53)		::Conductor_obj::bpmChangeMap = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  55)		Float curBPM = ( (Float)(song->__Field(HX_("bpm",df,be,4a,00),::hx::paccDynamic)) );
HXLINE(  56)		int totalSteps = 0;
HXLINE(  57)		Float totalPos = ( (Float)(0) );
HXLINE(  58)		{
HXLINE(  58)			int _g = 0;
HXDLIN(  58)			int _g1 = ( (::Array< ::Dynamic>)(song->__Field(HX_("notes",41,dc,ca,9f),::hx::paccDynamic)) )->length;
HXDLIN(  58)			while((_g < _g1)){
HXLINE(  58)				_g = (_g + 1);
HXDLIN(  58)				int i = (_g - 1);
HXLINE(  60)				bool _hx_tmp;
HXDLIN(  60)				if (( (bool)( ::Dynamic(song->__Field(HX_("notes",41,dc,ca,9f),::hx::paccDynamic))->__GetItem(i)->__Field(HX_("changeBPM",4f,4f,f8,1d),::hx::paccDynamic)) )) {
HXLINE(  60)					_hx_tmp = ::hx::IsNotEq(  ::Dynamic(song->__Field(HX_("notes",41,dc,ca,9f),::hx::paccDynamic))->__GetItem(i)->__Field(HX_("bpm",df,be,4a,00),::hx::paccDynamic),curBPM );
            				}
            				else {
HXLINE(  60)					_hx_tmp = false;
            				}
HXDLIN(  60)				if (_hx_tmp) {
HXLINE(  62)					curBPM = ( (Float)( ::Dynamic(song->__Field(HX_("notes",41,dc,ca,9f),::hx::paccDynamic))->__GetItem(i)->__Field(HX_("bpm",df,be,4a,00),::hx::paccDynamic)) );
HXLINE(  63)					 ::Dynamic event =  ::Dynamic(::hx::Anon_obj::Create(3)
            						->setFixed(0,HX_("stepTime",79,75,25,a0),totalSteps)
            						->setFixed(1,HX_("bpm",df,be,4a,00),curBPM)
            						->setFixed(2,HX_("songTime",82,2a,d5,3a),totalPos));
HXLINE(  68)					::Conductor_obj::bpmChangeMap->push(event);
            				}
HXLINE(  71)				int deltaSteps = ( (int)( ::Dynamic(song->__Field(HX_("notes",41,dc,ca,9f),::hx::paccDynamic))->__GetItem(i)->__Field(HX_("lengthInSteps",3c,ed,41,db),::hx::paccDynamic)) );
HXLINE(  72)				totalSteps = (totalSteps + deltaSteps);
HXLINE(  73)				totalPos = (totalPos + ((((( (Float)(60) ) / curBPM) * ( (Float)(1000) )) / ( (Float)(4) )) * ( (Float)(deltaSteps) )));
            			}
            		}
HXLINE(  75)		 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN(  75)		::String _hx_tmp1 = (HX_("new BPM map BUDDY ",ff,cc,e3,2e) + ::Std_obj::string(::Conductor_obj::bpmChangeMap));
HXDLIN(  75)		_hx_tmp(_hx_tmp1,::hx::SourceInfo(HX_("source/Conductor.hx",4b,4e,2d,f0),75,HX_("Conductor",c7,77,a1,7b),HX_("mapBPMChanges",a0,c9,ba,4a)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Conductor_obj,mapBPMChanges,(void))

void Conductor_obj::changeBPM(Float newBpm){
            	HX_STACKFRAME(&_hx_pos_9bd24c9adde08dff_79_changeBPM)
HXLINE(  80)		::Conductor_obj::bpm = newBpm;
HXLINE(  82)		::Conductor_obj::crochet = ((( (Float)(60) ) / ::Conductor_obj::bpm) * ( (Float)(1000) ));
HXLINE(  83)		::Conductor_obj::stepCrochet = (::Conductor_obj::crochet / ( (Float)(4) ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Conductor_obj,changeBPM,(void))


Conductor_obj::Conductor_obj()
{
}

bool Conductor_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"bpm") ) { outValue = ( bpm ); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"offset") ) { outValue = ( offset ); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"crochet") ) { outValue = ( crochet ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"judgeNote") ) { outValue = judgeNote_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"changeBPM") ) { outValue = changeBPM_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"stepCrochet") ) { outValue = ( stepCrochet ); return true; }
		if (HX_FIELD_EQ(inName,"lastSongPos") ) { outValue = ( lastSongPos ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"songPosition") ) { outValue = ( songPosition ); return true; }
		if (HX_FIELD_EQ(inName,"bpmChangeMap") ) { outValue = ( bpmChangeMap ); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"mapBPMChanges") ) { outValue = mapBPMChanges_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"safeZoneOffset") ) { outValue = ( safeZoneOffset ); return true; }
	}
	return false;
}

bool Conductor_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"bpm") ) { bpm=ioValue.Cast< Float >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"offset") ) { offset=ioValue.Cast< Float >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"crochet") ) { crochet=ioValue.Cast< Float >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"stepCrochet") ) { stepCrochet=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"lastSongPos") ) { lastSongPos=ioValue.Cast< Float >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"songPosition") ) { songPosition=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"bpmChangeMap") ) { bpmChangeMap=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"safeZoneOffset") ) { safeZoneOffset=ioValue.Cast< Float >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Conductor_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Conductor_obj_sStaticStorageInfo[] = {
	{::hx::fsFloat,(void *) &Conductor_obj::bpm,HX_("bpm",df,be,4a,00)},
	{::hx::fsFloat,(void *) &Conductor_obj::crochet,HX_("crochet",34,d5,b5,d4)},
	{::hx::fsFloat,(void *) &Conductor_obj::stepCrochet,HX_("stepCrochet",48,d7,ff,e6)},
	{::hx::fsFloat,(void *) &Conductor_obj::songPosition,HX_("songPosition",9e,dd,3b,8d)},
	{::hx::fsFloat,(void *) &Conductor_obj::lastSongPos,HX_("lastSongPos",09,f9,d2,5e)},
	{::hx::fsFloat,(void *) &Conductor_obj::offset,HX_("offset",93,97,3f,60)},
	{::hx::fsFloat,(void *) &Conductor_obj::safeZoneOffset,HX_("safeZoneOffset",8c,9a,25,8d)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(void *) &Conductor_obj::bpmChangeMap,HX_("bpmChangeMap",2d,84,1f,2c)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Conductor_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Conductor_obj::bpm,"bpm");
	HX_MARK_MEMBER_NAME(Conductor_obj::crochet,"crochet");
	HX_MARK_MEMBER_NAME(Conductor_obj::stepCrochet,"stepCrochet");
	HX_MARK_MEMBER_NAME(Conductor_obj::songPosition,"songPosition");
	HX_MARK_MEMBER_NAME(Conductor_obj::lastSongPos,"lastSongPos");
	HX_MARK_MEMBER_NAME(Conductor_obj::offset,"offset");
	HX_MARK_MEMBER_NAME(Conductor_obj::safeZoneOffset,"safeZoneOffset");
	HX_MARK_MEMBER_NAME(Conductor_obj::bpmChangeMap,"bpmChangeMap");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Conductor_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Conductor_obj::bpm,"bpm");
	HX_VISIT_MEMBER_NAME(Conductor_obj::crochet,"crochet");
	HX_VISIT_MEMBER_NAME(Conductor_obj::stepCrochet,"stepCrochet");
	HX_VISIT_MEMBER_NAME(Conductor_obj::songPosition,"songPosition");
	HX_VISIT_MEMBER_NAME(Conductor_obj::lastSongPos,"lastSongPos");
	HX_VISIT_MEMBER_NAME(Conductor_obj::offset,"offset");
	HX_VISIT_MEMBER_NAME(Conductor_obj::safeZoneOffset,"safeZoneOffset");
	HX_VISIT_MEMBER_NAME(Conductor_obj::bpmChangeMap,"bpmChangeMap");
};

#endif

::hx::Class Conductor_obj::__mClass;

static ::String Conductor_obj_sStaticFields[] = {
	HX_("bpm",df,be,4a,00),
	HX_("crochet",34,d5,b5,d4),
	HX_("stepCrochet",48,d7,ff,e6),
	HX_("songPosition",9e,dd,3b,8d),
	HX_("lastSongPos",09,f9,d2,5e),
	HX_("offset",93,97,3f,60),
	HX_("safeZoneOffset",8c,9a,25,8d),
	HX_("bpmChangeMap",2d,84,1f,2c),
	HX_("judgeNote",29,0b,84,44),
	HX_("mapBPMChanges",a0,c9,ba,4a),
	HX_("changeBPM",4f,4f,f8,1d),
	::String(null())
};

void Conductor_obj::__register()
{
	Conductor_obj _hx_dummy;
	Conductor_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Conductor",c7,77,a1,7b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Conductor_obj::__GetStatic;
	__mClass->mSetStaticField = &Conductor_obj::__SetStatic;
	__mClass->mMarkFunc = Conductor_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Conductor_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Conductor_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Conductor_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Conductor_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Conductor_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Conductor_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_9bd24c9adde08dff_19_boot)
HXDLIN(  19)		bpm = ((Float)100);
            	}
{
            	HX_STACKFRAME(&_hx_pos_9bd24c9adde08dff_20_boot)
HXDLIN(  20)		crochet = ((( (Float)(60) ) / ::Conductor_obj::bpm) * ( (Float)(1000) ));
            	}
{
            	HX_STACKFRAME(&_hx_pos_9bd24c9adde08dff_21_boot)
HXDLIN(  21)		stepCrochet = (::Conductor_obj::crochet / ( (Float)(4) ));
            	}
{
            	HX_STACKFRAME(&_hx_pos_9bd24c9adde08dff_24_boot)
HXDLIN(  24)		offset = ((Float)0);
            	}
{
            	HX_STACKFRAME(&_hx_pos_9bd24c9adde08dff_27_boot)
HXDLIN(  27)		safeZoneOffset = ((::ClientPrefs_obj::safeFrames / ( (Float)(60) )) * ( (Float)(1000) ));
            	}
{
            	HX_STACKFRAME(&_hx_pos_9bd24c9adde08dff_29_boot)
HXDLIN(  29)		bpmChangeMap = ::Array_obj< ::Dynamic>::__new(0);
            	}
}

