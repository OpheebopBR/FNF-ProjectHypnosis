#ifndef INCLUDED_flixel_tweens_FlxTweenManager
#define INCLUDED_flixel_tweens_FlxTweenManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,tweens,FlxTween)
HX_DECLARE_CLASS2(flixel,tweens,FlxTweenManager)
HX_DECLARE_CLASS3(flixel,tweens,misc,AngleTween)
HX_DECLARE_CLASS3(flixel,tweens,misc,ColorTween)
HX_DECLARE_CLASS3(flixel,tweens,misc,NumTween)
HX_DECLARE_CLASS3(flixel,tweens,misc,VarTween)
HX_DECLARE_CLASS3(flixel,tweens,motion,CircularMotion)
HX_DECLARE_CLASS3(flixel,tweens,motion,CubicMotion)
HX_DECLARE_CLASS3(flixel,tweens,motion,LinearMotion)
HX_DECLARE_CLASS3(flixel,tweens,motion,LinearPath)
HX_DECLARE_CLASS3(flixel,tweens,motion,Motion)
HX_DECLARE_CLASS3(flixel,tweens,motion,QuadMotion)
HX_DECLARE_CLASS3(flixel,tweens,motion,QuadPath)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)

namespace flixel{
namespace tweens{


class HXCPP_CLASS_ATTRIBUTES FlxTweenManager_obj : public  ::flixel::FlxBasic_obj
{
	public:
		typedef  ::flixel::FlxBasic_obj super;
		typedef FlxTweenManager_obj OBJ_;
		FlxTweenManager_obj();

	public:
		enum { _hx_ClassId = 0x75cc77f0 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.tweens.FlxTweenManager")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.tweens.FlxTweenManager"); }
		static ::hx::ObjectPtr< FlxTweenManager_obj > __new();
		static ::hx::ObjectPtr< FlxTweenManager_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxTweenManager_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxTweenManager",b4,fe,ba,95); }

		 ::flixel::tweens::motion::QuadPath add_flixel_tweens_motion_QuadPath( ::flixel::tweens::motion::QuadPath Tween,::hx::Null< bool >  Start);
		::Dynamic add_flixel_tweens_motion_QuadPath_dyn();

		 ::flixel::tweens::motion::LinearPath add_flixel_tweens_motion_LinearPath( ::flixel::tweens::motion::LinearPath Tween,::hx::Null< bool >  Start);
		::Dynamic add_flixel_tweens_motion_LinearPath_dyn();

		 ::flixel::tweens::motion::CircularMotion add_flixel_tweens_motion_CircularMotion( ::flixel::tweens::motion::CircularMotion Tween,::hx::Null< bool >  Start);
		::Dynamic add_flixel_tweens_motion_CircularMotion_dyn();

		 ::flixel::tweens::motion::CubicMotion add_flixel_tweens_motion_CubicMotion( ::flixel::tweens::motion::CubicMotion Tween,::hx::Null< bool >  Start);
		::Dynamic add_flixel_tweens_motion_CubicMotion_dyn();

		 ::flixel::tweens::motion::QuadMotion add_flixel_tweens_motion_QuadMotion( ::flixel::tweens::motion::QuadMotion Tween,::hx::Null< bool >  Start);
		::Dynamic add_flixel_tweens_motion_QuadMotion_dyn();

		 ::flixel::tweens::motion::LinearMotion add_flixel_tweens_motion_LinearMotion( ::flixel::tweens::motion::LinearMotion Tween,::hx::Null< bool >  Start);
		::Dynamic add_flixel_tweens_motion_LinearMotion_dyn();

		 ::flixel::tweens::misc::AngleTween add_flixel_tweens_misc_AngleTween( ::flixel::tweens::misc::AngleTween Tween,::hx::Null< bool >  Start);
		::Dynamic add_flixel_tweens_misc_AngleTween_dyn();

		 ::flixel::tweens::misc::ColorTween add_flixel_tweens_misc_ColorTween( ::flixel::tweens::misc::ColorTween Tween,::hx::Null< bool >  Start);
		::Dynamic add_flixel_tweens_misc_ColorTween_dyn();

		 ::flixel::tweens::misc::NumTween add_flixel_tweens_misc_NumTween( ::flixel::tweens::misc::NumTween Tween,::hx::Null< bool >  Start);
		::Dynamic add_flixel_tweens_misc_NumTween_dyn();

		 ::flixel::tweens::FlxTween add_flixel_tweens_FlxTween( ::flixel::tweens::FlxTween Tween,::hx::Null< bool >  Start);
		::Dynamic add_flixel_tweens_FlxTween_dyn();

		 ::flixel::tweens::misc::VarTween add_flixel_tweens_misc_VarTween( ::flixel::tweens::misc::VarTween Tween,::hx::Null< bool >  Start);
		::Dynamic add_flixel_tweens_misc_VarTween_dyn();

		::Array< ::Dynamic> _tweens;
		 ::flixel::tweens::misc::VarTween tween( ::Dynamic Object, ::Dynamic Values,::hx::Null< Float >  Duration, ::Dynamic Options);
		::Dynamic tween_dyn();

		 ::flixel::tweens::misc::NumTween num(Float FromValue,Float ToValue,::hx::Null< Float >  Duration, ::Dynamic Options, ::Dynamic TweenFunction);
		::Dynamic num_dyn();

		 ::flixel::tweens::misc::AngleTween angle( ::flixel::FlxSprite Sprite,Float FromAngle,Float ToAngle,::hx::Null< Float >  Duration, ::Dynamic Options);
		::Dynamic angle_dyn();

		 ::flixel::tweens::misc::ColorTween color( ::flixel::FlxSprite Sprite,::hx::Null< Float >  Duration,int FromColor,int ToColor, ::Dynamic Options);
		::Dynamic color_dyn();

		 ::flixel::tweens::motion::LinearMotion linearMotion( ::flixel::FlxObject Object,Float FromX,Float FromY,Float ToX,Float ToY,::hx::Null< Float >  DurationOrSpeed,::hx::Null< bool >  UseDuration, ::Dynamic Options);
		::Dynamic linearMotion_dyn();

		 ::flixel::tweens::motion::QuadMotion quadMotion( ::flixel::FlxObject Object,Float FromX,Float FromY,Float ControlX,Float ControlY,Float ToX,Float ToY,::hx::Null< Float >  DurationOrSpeed,::hx::Null< bool >  UseDuration, ::Dynamic Options);
		::Dynamic quadMotion_dyn();

		 ::flixel::tweens::motion::CubicMotion cubicMotion( ::flixel::FlxObject Object,Float FromX,Float FromY,Float aX,Float aY,Float bX,Float bY,Float ToX,Float ToY,::hx::Null< Float >  Duration, ::Dynamic Options);
		::Dynamic cubicMotion_dyn();

		 ::flixel::tweens::motion::CircularMotion circularMotion( ::flixel::FlxObject Object,Float CenterX,Float CenterY,Float Radius,Float Angle,bool Clockwise,::hx::Null< Float >  DurationOrSpeed,::hx::Null< bool >  UseDuration, ::Dynamic Options);
		::Dynamic circularMotion_dyn();

		 ::flixel::tweens::motion::LinearPath linearPath( ::flixel::FlxObject Object,::Array< ::Dynamic> Points,::hx::Null< Float >  DurationOrSpeed,::hx::Null< bool >  UseDuration, ::Dynamic Options);
		::Dynamic linearPath_dyn();

		 ::flixel::tweens::motion::QuadPath quadPath( ::flixel::FlxObject Object,::Array< ::Dynamic> Points,::hx::Null< Float >  DurationOrSpeed,::hx::Null< bool >  UseDuration, ::Dynamic Options);
		::Dynamic quadPath_dyn();

		void destroy();

		void update(Float elapsed);

		 ::flixel::tweens::FlxTween remove( ::flixel::tweens::FlxTween Tween,::hx::Null< bool >  Destroy);
		::Dynamic remove_dyn();

		void clear();
		::Dynamic clear_dyn();

		void cancelTweensOf( ::Dynamic Object,::Array< ::String > FieldPaths);
		::Dynamic cancelTweensOf_dyn();

		void completeTweensOf( ::Dynamic Object,::Array< ::String > FieldPaths);
		::Dynamic completeTweensOf_dyn();

		void forEachTweensOf( ::Dynamic Object,::Array< ::String > FieldPaths, ::Dynamic Function);
		::Dynamic forEachTweensOf_dyn();

		void completeAll();
		::Dynamic completeAll_dyn();

		void forEach( ::Dynamic Function);
		::Dynamic forEach_dyn();

};

} // end namespace flixel
} // end namespace tweens

#endif /* INCLUDED_flixel_tweens_FlxTweenManager */ 
