#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_CoolUtil
#include <CoolUtil.h>
#endif
#ifndef INCLUDED_Highscore
#include <Highscore.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_59d01746e3baf250_21_resetSong,"Highscore","resetSong",0x458023e6,"Highscore.resetSong","Highscore.hx",21,0x77c0e42e)
HX_LOCAL_STACK_FRAME(_hx_pos_59d01746e3baf250_28_resetWeek,"Highscore","resetWeek",0x481d6005,"Highscore.resetWeek","Highscore.hx",28,0x77c0e42e)
HX_LOCAL_STACK_FRAME(_hx_pos_59d01746e3baf250_34_floorDecimal,"Highscore","floorDecimal",0x5ce376c3,"Highscore.floorDecimal","Highscore.hx",34,0x77c0e42e)
HX_LOCAL_STACK_FRAME(_hx_pos_59d01746e3baf250_50_saveScore,"Highscore","saveScore",0xbac27177,"Highscore.saveScore","Highscore.hx",50,0x77c0e42e)
HX_LOCAL_STACK_FRAME(_hx_pos_59d01746e3baf250_66_saveWeekScore,"Highscore","saveWeekScore",0x4660a363,"Highscore.saveWeekScore","Highscore.hx",66,0x77c0e42e)
HX_LOCAL_STACK_FRAME(_hx_pos_59d01746e3baf250_82_setScore,"Highscore","setScore",0x2adf0fee,"Highscore.setScore","Highscore.hx",82,0x77c0e42e)
HX_LOCAL_STACK_FRAME(_hx_pos_59d01746e3baf250_89_setWeekScore,"Highscore","setWeekScore",0xc8d3495a,"Highscore.setWeekScore","Highscore.hx",89,0x77c0e42e)
HX_LOCAL_STACK_FRAME(_hx_pos_59d01746e3baf250_97_setRating,"Highscore","setRating",0xce6da001,"Highscore.setRating","Highscore.hx",97,0x77c0e42e)
HX_LOCAL_STACK_FRAME(_hx_pos_59d01746e3baf250_106_formatSong,"Highscore","formatSong",0x2cf91dca,"Highscore.formatSong","Highscore.hx",106,0x77c0e42e)
HX_LOCAL_STACK_FRAME(_hx_pos_59d01746e3baf250_110_getScore,"Highscore","getScore",0x7c81b67a,"Highscore.getScore","Highscore.hx",110,0x77c0e42e)
HX_LOCAL_STACK_FRAME(_hx_pos_59d01746e3baf250_119_getRating,"Highscore","getRating",0xeb1cb3f5,"Highscore.getRating","Highscore.hx",119,0x77c0e42e)
HX_LOCAL_STACK_FRAME(_hx_pos_59d01746e3baf250_128_getWeekScore,"Highscore","getWeekScore",0xb3da25e6,"Highscore.getWeekScore","Highscore.hx",128,0x77c0e42e)
HX_LOCAL_STACK_FRAME(_hx_pos_59d01746e3baf250_137_load,"Highscore","load",0x978326c4,"Highscore.load","Highscore.hx",137,0x77c0e42e)
HX_LOCAL_STACK_FRAME(_hx_pos_59d01746e3baf250_10_boot,"Highscore","boot",0x90e710d0,"Highscore.boot","Highscore.hx",10,0x77c0e42e)
HX_LOCAL_STACK_FRAME(_hx_pos_59d01746e3baf250_11_boot,"Highscore","boot",0x90e710d0,"Highscore.boot","Highscore.hx",11,0x77c0e42e)
HX_LOCAL_STACK_FRAME(_hx_pos_59d01746e3baf250_12_boot,"Highscore","boot",0x90e710d0,"Highscore.boot","Highscore.hx",12,0x77c0e42e)

void Highscore_obj::__construct() { }

Dynamic Highscore_obj::__CreateEmpty() { return new Highscore_obj; }

void *Highscore_obj::_hx_vtable = 0;

Dynamic Highscore_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Highscore_obj > _hx_result = new Highscore_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Highscore_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x55f38dd0;
}

 ::haxe::ds::StringMap Highscore_obj::weekScores;

 ::haxe::ds::StringMap Highscore_obj::songScores;

 ::haxe::ds::StringMap Highscore_obj::songRating;

void Highscore_obj::resetSong(::String song,::hx::Null< int >  __o_diff){
            		int diff = __o_diff.Default(0);
            	HX_STACKFRAME(&_hx_pos_59d01746e3baf250_21_resetSong)
HXLINE(  22)		::String daSong = ::Highscore_obj::formatSong(song,diff);
HXLINE(  23)		::Highscore_obj::setScore(daSong,0);
HXLINE(  24)		::Highscore_obj::setRating(daSong,( (Float)(0) ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Highscore_obj,resetSong,(void))

void Highscore_obj::resetWeek(::String week,::hx::Null< int >  __o_diff){
            		int diff = __o_diff.Default(0);
            	HX_STACKFRAME(&_hx_pos_59d01746e3baf250_28_resetWeek)
HXLINE(  29)		::String daWeek = ::Highscore_obj::formatSong(week,diff);
HXLINE(  30)		::Highscore_obj::setWeekScore(daWeek,0);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Highscore_obj,resetWeek,(void))

Float Highscore_obj::floorDecimal(Float value,int decimals){
            	HX_STACKFRAME(&_hx_pos_59d01746e3baf250_34_floorDecimal)
HXLINE(  35)		if ((decimals < 1)) {
HXLINE(  37)			return ( (Float)(::Math_obj::floor(value)) );
            		}
HXLINE(  40)		Float tempMult = ( (Float)(1) );
HXLINE(  41)		{
HXLINE(  41)			int _g = 0;
HXDLIN(  41)			int _g1 = decimals;
HXDLIN(  41)			while((_g < _g1)){
HXLINE(  41)				_g = (_g + 1);
HXDLIN(  41)				int i = (_g - 1);
HXLINE(  43)				tempMult = (tempMult * ( (Float)(10) ));
            			}
            		}
HXLINE(  45)		Float newValue = ( (Float)(::Math_obj::floor((value * tempMult))) );
HXLINE(  46)		return (newValue / tempMult);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Highscore_obj,floorDecimal,return )

void Highscore_obj::saveScore(::String song,::hx::Null< int >  __o_score, ::Dynamic __o_diff, ::Dynamic __o_rating){
            		int score = __o_score.Default(0);
            		 ::Dynamic diff = __o_diff;
            		if (::hx::IsNull(__o_diff)) diff = 0;
            		 ::Dynamic rating = __o_rating;
            		if (::hx::IsNull(__o_rating)) rating = -1;
            	HX_STACKFRAME(&_hx_pos_59d01746e3baf250_50_saveScore)
HXLINE(  51)		::String daSong = ::Highscore_obj::formatSong(song,( (int)(diff) ));
HXLINE(  53)		if (::Highscore_obj::songScores->exists(daSong)) {
HXLINE(  54)			if (::hx::IsLess( ::Highscore_obj::songScores->get(daSong),score )) {
HXLINE(  55)				::Highscore_obj::setScore(daSong,score);
HXLINE(  56)				if (::hx::IsGreaterEq( rating,0 )) {
HXLINE(  56)					::Highscore_obj::setRating(daSong,( (Float)(rating) ));
            				}
            			}
            		}
            		else {
HXLINE(  60)			::Highscore_obj::setScore(daSong,score);
HXLINE(  61)			if (::hx::IsGreaterEq( rating,0 )) {
HXLINE(  61)				::Highscore_obj::setRating(daSong,( (Float)(rating) ));
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Highscore_obj,saveScore,(void))

void Highscore_obj::saveWeekScore(::String week,::hx::Null< int >  __o_score, ::Dynamic __o_diff){
            		int score = __o_score.Default(0);
            		 ::Dynamic diff = __o_diff;
            		if (::hx::IsNull(__o_diff)) diff = 0;
            	HX_STACKFRAME(&_hx_pos_59d01746e3baf250_66_saveWeekScore)
HXLINE(  67)		::String daWeek = ::Highscore_obj::formatSong(week,( (int)(diff) ));
HXLINE(  69)		if (::Highscore_obj::weekScores->exists(daWeek)) {
HXLINE(  71)			if (::hx::IsLess( ::Highscore_obj::weekScores->get(daWeek),score )) {
HXLINE(  72)				::Highscore_obj::setWeekScore(daWeek,score);
            			}
            		}
            		else {
HXLINE(  75)			::Highscore_obj::setWeekScore(daWeek,score);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Highscore_obj,saveWeekScore,(void))

void Highscore_obj::setScore(::String song,int score){
            	HX_STACKFRAME(&_hx_pos_59d01746e3baf250_82_setScore)
HXLINE(  84)		::Highscore_obj::songScores->set(song,score);
HXLINE(  85)		::flixel::FlxG_obj::save->data->__SetField(HX_("songScores",96,1a,f0,a0),::Highscore_obj::songScores,::hx::paccDynamic);
HXLINE(  86)		::flixel::FlxG_obj::save->flush(null(),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Highscore_obj,setScore,(void))

void Highscore_obj::setWeekScore(::String week,int score){
            	HX_STACKFRAME(&_hx_pos_59d01746e3baf250_89_setWeekScore)
HXLINE(  91)		::Highscore_obj::weekScores->set(week,score);
HXLINE(  92)		::flixel::FlxG_obj::save->data->__SetField(HX_("weekScores",f5,b7,3b,08),::Highscore_obj::weekScores,::hx::paccDynamic);
HXLINE(  93)		::flixel::FlxG_obj::save->flush(null(),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Highscore_obj,setWeekScore,(void))

void Highscore_obj::setRating(::String song,Float rating){
            	HX_STACKFRAME(&_hx_pos_59d01746e3baf250_97_setRating)
HXLINE(  99)		::Highscore_obj::songRating->set(song,rating);
HXLINE( 100)		::flixel::FlxG_obj::save->data->__SetField(HX_("songRating",d2,d9,0e,17),::Highscore_obj::songRating,::hx::paccDynamic);
HXLINE( 101)		::flixel::FlxG_obj::save->flush(null(),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Highscore_obj,setRating,(void))

::String Highscore_obj::formatSong(::String song,int diff){
            	HX_STACKFRAME(&_hx_pos_59d01746e3baf250_106_formatSong)
HXDLIN( 106)		::String _hx_tmp = ::StringTools_obj::replace(song.toLowerCase(),HX_(" ",20,00,00,00),HX_("-",2d,00,00,00));
HXDLIN( 106)		return (_hx_tmp + ::CoolUtil_obj::getDifficultyFilePath(diff));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Highscore_obj,formatSong,return )

int Highscore_obj::getScore(::String song,int diff){
            	HX_STACKFRAME(&_hx_pos_59d01746e3baf250_110_getScore)
HXLINE( 111)		::String daSong = ::Highscore_obj::formatSong(song,diff);
HXLINE( 112)		if (!(::Highscore_obj::songScores->exists(daSong))) {
HXLINE( 113)			::Highscore_obj::setScore(daSong,0);
            		}
HXLINE( 115)		return ::Highscore_obj::songScores->get_int(daSong);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Highscore_obj,getScore,return )

Float Highscore_obj::getRating(::String song,int diff){
            	HX_STACKFRAME(&_hx_pos_59d01746e3baf250_119_getRating)
HXLINE( 120)		::String daSong = ::Highscore_obj::formatSong(song,diff);
HXLINE( 121)		if (!(::Highscore_obj::songRating->exists(daSong))) {
HXLINE( 122)			::Highscore_obj::setRating(daSong,( (Float)(0) ));
            		}
HXLINE( 124)		return ::Highscore_obj::songRating->get_float(daSong);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Highscore_obj,getRating,return )

int Highscore_obj::getWeekScore(::String week,int diff){
            	HX_STACKFRAME(&_hx_pos_59d01746e3baf250_128_getWeekScore)
HXLINE( 129)		::String daWeek = ::Highscore_obj::formatSong(week,diff);
HXLINE( 130)		if (!(::Highscore_obj::weekScores->exists(daWeek))) {
HXLINE( 131)			::Highscore_obj::setWeekScore(daWeek,0);
            		}
HXLINE( 133)		return ::Highscore_obj::weekScores->get_int(daWeek);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Highscore_obj,getWeekScore,return )

void Highscore_obj::load(){
            	HX_STACKFRAME(&_hx_pos_59d01746e3baf250_137_load)
HXLINE( 138)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("weekScores",f5,b7,3b,08),::hx::paccDynamic) )) {
HXLINE( 140)			::Highscore_obj::weekScores = ( ( ::haxe::ds::StringMap)(::flixel::FlxG_obj::save->data->__Field(HX_("weekScores",f5,b7,3b,08),::hx::paccDynamic)) );
            		}
HXLINE( 142)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("songScores",96,1a,f0,a0),::hx::paccDynamic) )) {
HXLINE( 144)			::Highscore_obj::songScores = ( ( ::haxe::ds::StringMap)(::flixel::FlxG_obj::save->data->__Field(HX_("songScores",96,1a,f0,a0),::hx::paccDynamic)) );
            		}
HXLINE( 146)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("songRating",d2,d9,0e,17),::hx::paccDynamic) )) {
HXLINE( 148)			::Highscore_obj::songRating = ( ( ::haxe::ds::StringMap)(::flixel::FlxG_obj::save->data->__Field(HX_("songRating",d2,d9,0e,17),::hx::paccDynamic)) );
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Highscore_obj,load,(void))


Highscore_obj::Highscore_obj()
{
}

bool Highscore_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { outValue = load_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"setScore") ) { outValue = setScore_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getScore") ) { outValue = getScore_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"resetSong") ) { outValue = resetSong_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"resetWeek") ) { outValue = resetWeek_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"saveScore") ) { outValue = saveScore_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"setRating") ) { outValue = setRating_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getRating") ) { outValue = getRating_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"weekScores") ) { outValue = ( weekScores ); return true; }
		if (HX_FIELD_EQ(inName,"songScores") ) { outValue = ( songScores ); return true; }
		if (HX_FIELD_EQ(inName,"songRating") ) { outValue = ( songRating ); return true; }
		if (HX_FIELD_EQ(inName,"formatSong") ) { outValue = formatSong_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"floorDecimal") ) { outValue = floorDecimal_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"setWeekScore") ) { outValue = setWeekScore_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getWeekScore") ) { outValue = getWeekScore_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"saveWeekScore") ) { outValue = saveWeekScore_dyn(); return true; }
	}
	return false;
}

bool Highscore_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"weekScores") ) { weekScores=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
		if (HX_FIELD_EQ(inName,"songScores") ) { songScores=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
		if (HX_FIELD_EQ(inName,"songRating") ) { songRating=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Highscore_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Highscore_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &Highscore_obj::weekScores,HX_("weekScores",f5,b7,3b,08)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &Highscore_obj::songScores,HX_("songScores",96,1a,f0,a0)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &Highscore_obj::songRating,HX_("songRating",d2,d9,0e,17)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Highscore_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Highscore_obj::weekScores,"weekScores");
	HX_MARK_MEMBER_NAME(Highscore_obj::songScores,"songScores");
	HX_MARK_MEMBER_NAME(Highscore_obj::songRating,"songRating");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Highscore_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Highscore_obj::weekScores,"weekScores");
	HX_VISIT_MEMBER_NAME(Highscore_obj::songScores,"songScores");
	HX_VISIT_MEMBER_NAME(Highscore_obj::songRating,"songRating");
};

#endif

::hx::Class Highscore_obj::__mClass;

static ::String Highscore_obj_sStaticFields[] = {
	HX_("weekScores",f5,b7,3b,08),
	HX_("songScores",96,1a,f0,a0),
	HX_("songRating",d2,d9,0e,17),
	HX_("resetSong",44,2d,44,92),
	HX_("resetWeek",63,69,e1,94),
	HX_("floorDecimal",25,1c,ad,93),
	HX_("saveScore",d5,7a,86,07),
	HX_("saveWeekScore",c1,b3,07,00),
	HX_("setScore",50,dc,0d,87),
	HX_("setWeekScore",bc,ee,9c,ff),
	HX_("setRating",5f,a9,31,1b),
	HX_("formatSong",ac,46,bd,0b),
	HX_("getScore",dc,82,b0,d8),
	HX_("getRating",53,bd,e0,37),
	HX_("getWeekScore",48,cb,a3,ea),
	HX_("load",26,9a,b7,47),
	::String(null())
};

void Highscore_obj::__register()
{
	Highscore_obj _hx_dummy;
	Highscore_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Highscore",90,18,b0,92);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Highscore_obj::__GetStatic;
	__mClass->mSetStaticField = &Highscore_obj::__SetStatic;
	__mClass->mMarkFunc = Highscore_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Highscore_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Highscore_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Highscore_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Highscore_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Highscore_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Highscore_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_59d01746e3baf250_10_boot)
HXDLIN(  10)		weekScores =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_59d01746e3baf250_11_boot)
HXDLIN(  11)		songScores =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_59d01746e3baf250_12_boot)
HXDLIN(  12)		songRating =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}
}

