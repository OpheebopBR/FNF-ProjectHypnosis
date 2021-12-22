#ifndef INCLUDED_AttachedAchievement
#define INCLUDED_AttachedAchievement

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS0(AttachedAchievement)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES AttachedAchievement_obj : public  ::flixel::FlxSprite_obj
{
	public:
		typedef  ::flixel::FlxSprite_obj super;
		typedef AttachedAchievement_obj OBJ_;
		AttachedAchievement_obj();

	public:
		enum { _hx_ClassId = 0x0b57f88b };

		void __construct(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::String name);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="AttachedAchievement")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"AttachedAchievement"); }
		static ::hx::ObjectPtr< AttachedAchievement_obj > __new(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::String name);
		static ::hx::ObjectPtr< AttachedAchievement_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::String name);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AttachedAchievement_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AttachedAchievement",4b,73,b5,97); }

		 ::flixel::FlxSprite sprTracker;
		::String tag;
		void changeAchievement(::String tag);
		::Dynamic changeAchievement_dyn();

		void reloadAchievementImage();
		::Dynamic reloadAchievementImage_dyn();

		void update(Float elapsed);

};


#endif /* INCLUDED_AttachedAchievement */ 
