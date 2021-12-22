#ifndef INCLUDED_AchievementObject
#define INCLUDED_AchievementObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
HX_DECLARE_CLASS0(AchievementObject)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxCamera)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,tweens,FlxTween)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES AchievementObject_obj : public  ::flixel::group::FlxTypedSpriteGroup_obj
{
	public:
		typedef  ::flixel::group::FlxTypedSpriteGroup_obj super;
		typedef AchievementObject_obj OBJ_;
		AchievementObject_obj();

	public:
		enum { _hx_ClassId = 0x6f8fa5ae };

		void __construct(::String name, ::flixel::FlxCamera camera);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="AchievementObject")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"AchievementObject"); }
		static ::hx::ObjectPtr< AchievementObject_obj > __new(::String name, ::flixel::FlxCamera camera);
		static ::hx::ObjectPtr< AchievementObject_obj > __alloc(::hx::Ctx *_hx_ctx,::String name, ::flixel::FlxCamera camera);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AchievementObject_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AchievementObject",6e,f0,f4,1f); }

		 ::Dynamic onFinish;
		Dynamic onFinish_dyn() { return onFinish;}
		 ::flixel::tweens::FlxTween alphaTween;
		void destroy();

};


#endif /* INCLUDED_AchievementObject */ 
