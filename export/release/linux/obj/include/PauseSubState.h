#ifndef INCLUDED_PauseSubState
#define INCLUDED_PauseSubState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_MusicBeatSubstate
#include <MusicBeatSubstate.h>
#endif
HX_DECLARE_CLASS0(MusicBeatSubstate)
HX_DECLARE_CLASS0(PauseSubState)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxCamera)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS1(flixel,FlxSubState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,_hx_system,FlxSound)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES PauseSubState_obj : public  ::MusicBeatSubstate_obj
{
	public:
		typedef  ::MusicBeatSubstate_obj super;
		typedef PauseSubState_obj OBJ_;
		PauseSubState_obj();

	public:
		enum { _hx_ClassId = 0x519cdafb };

		void __construct(Float x,Float y);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="PauseSubState")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"PauseSubState"); }
		static ::hx::ObjectPtr< PauseSubState_obj > __new(Float x,Float y);
		static ::hx::ObjectPtr< PauseSubState_obj > __alloc(::hx::Ctx *_hx_ctx,Float x,Float y);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PauseSubState_obj();

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
		::String __ToString() const { return HX_("PauseSubState",67,95,e5,08); }

		static  ::flixel::FlxCamera transCamera;
		static void restartSong(::hx::Null< bool >  noTrans);
		static ::Dynamic restartSong_dyn();

		 ::flixel::group::FlxTypedGroup grpMenuShit;
		::Array< ::String > menuItems;
		::Array< ::String > menuItemsOG;
		::Array< ::String > difficultyChoices;
		int curSelected;
		 ::flixel::_hx_system::FlxSound pauseMusic;
		 ::flixel::text::FlxText practiceText;
		void update(Float elapsed);

		void destroy();

		void changeSelection(::hx::Null< int >  change);
		::Dynamic changeSelection_dyn();

		void regenMenu();
		::Dynamic regenMenu_dyn();

};


#endif /* INCLUDED_PauseSubState */ 
