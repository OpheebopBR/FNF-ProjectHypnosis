#ifndef INCLUDED_GameplayChangersSubstate
#define INCLUDED_GameplayChangersSubstate

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_MusicBeatSubstate
#include <MusicBeatSubstate.h>
#endif
HX_DECLARE_CLASS0(GameplayChangersSubstate)
HX_DECLARE_CLASS0(GameplayOption)
HX_DECLARE_CLASS0(MusicBeatSubstate)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS1(flixel,FlxSubState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES GameplayChangersSubstate_obj : public  ::MusicBeatSubstate_obj
{
	public:
		typedef  ::MusicBeatSubstate_obj super;
		typedef GameplayChangersSubstate_obj OBJ_;
		GameplayChangersSubstate_obj();

	public:
		enum { _hx_ClassId = 0x52f65cc8 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="GameplayChangersSubstate")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"GameplayChangersSubstate"); }
		static ::hx::ObjectPtr< GameplayChangersSubstate_obj > __new();
		static ::hx::ObjectPtr< GameplayChangersSubstate_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~GameplayChangersSubstate_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("GameplayChangersSubstate",08,ea,03,24); }

		 ::GameplayOption curOption;
		int curSelected;
		::cpp::VirtualArray optionsArray;
		 ::flixel::group::FlxTypedGroup grpOptions;
		 ::flixel::group::FlxTypedGroup checkboxGroup;
		 ::flixel::group::FlxTypedGroup grpTexts;
		void getOptions();
		::Dynamic getOptions_dyn();

		int nextAccept;
		Float holdTime;
		Float holdValue;
		void update(Float elapsed);

		void updateTextFrom( ::GameplayOption option);
		::Dynamic updateTextFrom_dyn();

		void clearHold();
		::Dynamic clearHold_dyn();

		void changeSelection(::hx::Null< int >  change);
		::Dynamic changeSelection_dyn();

		void reloadCheckboxes();
		::Dynamic reloadCheckboxes_dyn();

};


#endif /* INCLUDED_GameplayChangersSubstate */ 
