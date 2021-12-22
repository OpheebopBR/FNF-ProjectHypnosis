#ifndef INCLUDED_flixel_addons_display_FlxExtendedSprite
#define INCLUDED_flixel_addons_display_FlxExtendedSprite

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,addons,display,FlxExtendedSprite)
HX_DECLARE_CLASS3(flixel,addons,display,FlxMouseSpring)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,math,FlxRect)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)

namespace flixel{
namespace addons{
namespace display{


class HXCPP_CLASS_ATTRIBUTES FlxExtendedSprite_obj : public  ::flixel::FlxSprite_obj
{
	public:
		typedef  ::flixel::FlxSprite_obj super;
		typedef FlxExtendedSprite_obj OBJ_;
		FlxExtendedSprite_obj();

	public:
		enum { _hx_ClassId = 0x4c508fdd };

		void __construct(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y, ::Dynamic SimpleGraphic);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.addons.display.FlxExtendedSprite")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.addons.display.FlxExtendedSprite"); }
		static ::hx::ObjectPtr< FlxExtendedSprite_obj > __new(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y, ::Dynamic SimpleGraphic);
		static ::hx::ObjectPtr< FlxExtendedSprite_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y, ::Dynamic SimpleGraphic);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxExtendedSprite_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxExtendedSprite",90,31,20,48); }

		int priorityID;
		bool isPressed;
		bool clickable;
		bool throwable;
		 ::flixel::math::FlxRect boundsRect;
		 ::flixel::FlxSprite boundsSprite;
		bool hasGravity;
		int gravityX;
		int gravityY;
		Float frictionX;
		Float frictionY;
		Float toleranceX;
		Float toleranceY;
		bool isDragged;
		bool draggable;
		bool springOnPressed;
		int springOffsetX;
		int springOffsetY;
		 ::Dynamic mousePressedCallback;
		Dynamic mousePressedCallback_dyn() { return mousePressedCallback;}
		 ::Dynamic mouseReleasedCallback;
		Dynamic mouseReleasedCallback_dyn() { return mouseReleasedCallback;}
		 ::flixel::addons::display::FlxMouseSpring mouseSpring;
		 ::Dynamic mouseStartDragCallback;
		Dynamic mouseStartDragCallback_dyn() { return mouseStartDragCallback;}
		 ::Dynamic mouseStopDragCallback;
		Dynamic mouseStopDragCallback_dyn() { return mouseStopDragCallback;}
		bool hasMouseSpring;
		bool _snapOnDrag;
		bool _snapOnRelease;
		int _snapX;
		int _snapY;
		bool _clickOnRelease;
		bool _clickPixelPerfect;
		int _clickPixelPerfectAlpha;
		int _clickCounter;
		int _throwXFactor;
		int _throwYFactor;
		bool _dragPixelPerfect;
		int _dragPixelPerfectAlpha;
		int _dragOffsetX;
		int _dragOffsetY;
		bool _dragFromPoint;
		bool _allowHorizontalDrag;
		bool _allowVerticalDrag;
		void enableMouseClicks(bool OnRelease,::hx::Null< bool >  PixelPerfect,::hx::Null< int >  AlphaThreshold);
		::Dynamic enableMouseClicks_dyn();

		void disableMouseClicks();
		::Dynamic disableMouseClicks_dyn();

		void enableMouseDrag(::hx::Null< bool >  LockCenter,::hx::Null< bool >  PixelPerfect,::hx::Null< int >  AlphaThreshold, ::flixel::math::FlxRect BoundsRect, ::flixel::FlxSprite BoundsSprite);
		::Dynamic enableMouseDrag_dyn();

		void disableMouseDrag();
		::Dynamic disableMouseDrag_dyn();

		void enableMouseThrow(int FactorX,int FactorY);
		::Dynamic enableMouseThrow_dyn();

		void disableMouseThrow();
		::Dynamic disableMouseThrow_dyn();

		void enableMouseSnap(int SnapX,int SnapY,::hx::Null< bool >  OnDrag,::hx::Null< bool >  OnRelease);
		::Dynamic enableMouseSnap_dyn();

		void disableMouseSnap();
		::Dynamic disableMouseSnap_dyn();

		 ::flixel::addons::display::FlxMouseSpring enableMouseSpring(::hx::Null< bool >  OnPressed,::hx::Null< bool >  RetainVelocity,::hx::Null< Float >  Tension,::hx::Null< Float >  Friction,::hx::Null< Float >  Gravity);
		::Dynamic enableMouseSpring_dyn();

		void disableMouseSpring();
		::Dynamic disableMouseSpring_dyn();

		void setDragLock(::hx::Null< bool >  AllowHorizontalDrag,::hx::Null< bool >  AllowVerticalDrag);
		::Dynamic setDragLock_dyn();

		void update(Float elapsed);

		void updateGravity();
		::Dynamic updateGravity_dyn();

		void updateDrag();
		::Dynamic updateDrag_dyn();

		void checkForClick();
		::Dynamic checkForClick_dyn();

		void mousePressedHandler();
		::Dynamic mousePressedHandler_dyn();

		void mouseReleasedHandler();
		::Dynamic mouseReleasedHandler_dyn();

		void startDrag();
		::Dynamic startDrag_dyn();

		void checkBoundsRect();
		::Dynamic checkBoundsRect_dyn();

		void checkBoundsSprite();
		::Dynamic checkBoundsSprite_dyn();

		void stopDrag();
		::Dynamic stopDrag_dyn();

		void setGravity(int GravityX,int GravityY,::hx::Null< Float >  FrictionX,::hx::Null< Float >  FrictionY,::hx::Null< Float >  ToleranceX,::hx::Null< Float >  ToleranceY);
		::Dynamic setGravity_dyn();

		void flipGravity();
		::Dynamic flipGravity_dyn();

		int get_clicks();
		::Dynamic get_clicks_dyn();

		int set_clicks(int NewValue);
		::Dynamic set_clicks_dyn();

		int get_springX();
		::Dynamic get_springX_dyn();

		int get_springY();
		::Dynamic get_springY_dyn();

		 ::flixel::math::FlxPoint get_point();
		::Dynamic get_point_dyn();

		 ::flixel::math::FlxPoint set_point( ::flixel::math::FlxPoint NewPoint);
		::Dynamic set_point_dyn();

		bool get_mouseOver();
		::Dynamic get_mouseOver_dyn();

		int get_mouseX();
		::Dynamic get_mouseX_dyn();

		int get_mouseY();
		::Dynamic get_mouseY_dyn();

		 ::flixel::math::FlxRect get_rect();
		::Dynamic get_rect_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace display

#endif /* INCLUDED_flixel_addons_display_FlxExtendedSprite */ 
