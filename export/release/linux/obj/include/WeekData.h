#ifndef INCLUDED_WeekData
#define INCLUDED_WeekData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_1b9a64f7c24482df_30_new)
HX_DECLARE_CLASS0(WeekData)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)



class HXCPP_CLASS_ATTRIBUTES WeekData_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef WeekData_obj OBJ_;
		WeekData_obj();

	public:
		enum { _hx_ClassId = 0x5ed59b1e };

		void __construct( ::Dynamic weekFile);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="WeekData")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"WeekData"); }

		inline static ::hx::ObjectPtr< WeekData_obj > __new( ::Dynamic weekFile) {
			::hx::ObjectPtr< WeekData_obj > __this = new WeekData_obj();
			__this->__construct(weekFile);
			return __this;
		}

		inline static ::hx::ObjectPtr< WeekData_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic weekFile) {
			WeekData_obj *__this = (WeekData_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(WeekData_obj), true, "WeekData"));
			*(void **)__this = WeekData_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_1b9a64f7c24482df_30_new)
HXLINE(  33)		( ( ::WeekData)(__this) )->folder = HX_("",00,00,00,00);
HXLINE(  67)		( ( ::WeekData)(__this) )->songs = ( (::cpp::VirtualArray)(weekFile->__Field(HX_("songs",fe,36,c7,80),::hx::paccDynamic)) );
HXLINE(  68)		( ( ::WeekData)(__this) )->weekCharacters = ( (::Array< ::String >)(weekFile->__Field(HX_("weekCharacters",be,b5,7f,1d),::hx::paccDynamic)) );
HXLINE(  69)		( ( ::WeekData)(__this) )->weekBackground = ( (::String)(weekFile->__Field(HX_("weekBackground",02,f1,ce,ed),::hx::paccDynamic)) );
HXLINE(  70)		( ( ::WeekData)(__this) )->weekBefore = ( (::String)(weekFile->__Field(HX_("weekBefore",93,97,02,5d),::hx::paccDynamic)) );
HXLINE(  71)		( ( ::WeekData)(__this) )->storyName = ( (::String)(weekFile->__Field(HX_("storyName",e0,50,20,29),::hx::paccDynamic)) );
HXLINE(  72)		( ( ::WeekData)(__this) )->weekName = ( (::String)(weekFile->__Field(HX_("weekName",5f,08,2f,30),::hx::paccDynamic)) );
HXLINE(  73)		( ( ::WeekData)(__this) )->freeplayColor = ( (::Array< int >)(weekFile->__Field(HX_("freeplayColor",a3,0c,53,32),::hx::paccDynamic)) );
HXLINE(  74)		( ( ::WeekData)(__this) )->startUnlocked = ( (bool)(weekFile->__Field(HX_("startUnlocked",a5,96,c9,60),::hx::paccDynamic)) );
HXLINE(  75)		( ( ::WeekData)(__this) )->hideStoryMode = ( (bool)(weekFile->__Field(HX_("hideStoryMode",d6,b4,4e,4c),::hx::paccDynamic)) );
HXLINE(  76)		( ( ::WeekData)(__this) )->hideFreeplay = ( (bool)(weekFile->__Field(HX_("hideFreeplay",82,13,8c,e3),::hx::paccDynamic)) );
HXLINE(  77)		( ( ::WeekData)(__this) )->difficulties = ( (::String)(weekFile->__Field(HX_("difficulties",59,c7,5e,02),::hx::paccDynamic)) );
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~WeekData_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("WeekData",5e,a8,44,03); }

		static void __boot();
		static  ::haxe::ds::StringMap weeksLoaded;
		static ::Array< ::String > weeksList;
		static  ::Dynamic createWeekFile();
		static ::Dynamic createWeekFile_dyn();

		static void reloadWeekFiles( ::Dynamic isStoryMode);
		static ::Dynamic reloadWeekFiles_dyn();

		static void addWeek(::String weekToCheck,::String path,::String directory,int i,int originalLength);
		static ::Dynamic addWeek_dyn();

		static  ::Dynamic getWeekFile(::String path);
		static ::Dynamic getWeekFile_dyn();

		static ::String getWeekFileName();
		static ::Dynamic getWeekFileName_dyn();

		static  ::WeekData getCurrentWeek();
		static ::Dynamic getCurrentWeek_dyn();

		static void setDirectoryFromWeek( ::WeekData data);
		static ::Dynamic setDirectoryFromWeek_dyn();

		::String folder;
		::cpp::VirtualArray songs;
		::Array< ::String > weekCharacters;
		::String weekBackground;
		::String weekBefore;
		::String storyName;
		::String weekName;
		::Array< int > freeplayColor;
		bool startUnlocked;
		bool hideStoryMode;
		bool hideFreeplay;
		::String difficulties;
};


#endif /* INCLUDED_WeekData */ 
