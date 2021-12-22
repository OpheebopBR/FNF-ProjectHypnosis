#ifndef INCLUDED_Achievements
#define INCLUDED_Achievements

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Achievements)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)



class HXCPP_CLASS_ATTRIBUTES Achievements_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Achievements_obj OBJ_;
		Achievements_obj();

	public:
		enum { _hx_ClassId = 0x375f4004 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="Achievements")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"Achievements"); }

		inline static ::hx::ObjectPtr< Achievements_obj > __new() {
			::hx::ObjectPtr< Achievements_obj > __this = new Achievements_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Achievements_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Achievements_obj *__this = (Achievements_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Achievements_obj), false, "Achievements"));
			*(void **)__this = Achievements_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Achievements_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Achievements",44,ed,7d,4e); }

		static void __boot();
		static ::cpp::VirtualArray achievementsStuff;
		static  ::haxe::ds::StringMap achievementsMap;
		static int henchmenDeath;
		static void unlockAchievement(::String name);
		static ::Dynamic unlockAchievement_dyn();

		static bool isAchievementUnlocked(::String name);
		static ::Dynamic isAchievementUnlocked_dyn();

		static int getAchievementIndex(::String name);
		static ::Dynamic getAchievementIndex_dyn();

		static void loadAchievements();
		static ::Dynamic loadAchievements_dyn();

};


#endif /* INCLUDED_Achievements */ 
