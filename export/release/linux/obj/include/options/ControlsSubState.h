#ifndef INCLUDED_options_ControlsSubState
#define INCLUDED_options_ControlsSubState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_MusicBeatSubstate
#include <MusicBeatSubstate.h>
#endif
HX_DECLARE_CLASS0(Alphabet)
HX_DECLARE_CLASS0(AttachedText)
HX_DECLARE_CLASS0(MusicBeatSubstate)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS1(flixel,FlxSubState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(options,ControlsSubState)

namespace options{


class HXCPP_CLASS_ATTRIBUTES ControlsSubState_obj : public  ::MusicBeatSubstate_obj
{
	public:
		typedef  ::MusicBeatSubstate_obj super;
		typedef ControlsSubState_obj OBJ_;
		ControlsSubState_obj();

	public:
		enum { _hx_ClassId = 0x30ee2621 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="options.ControlsSubState")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"options.ControlsSubState"); }
		static ::hx::ObjectPtr< ControlsSubState_obj > __new();
		static ::hx::ObjectPtr< ControlsSubState_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ControlsSubState_obj();

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
		::String __ToString() const { return HX_("ControlsSubState",27,51,d0,d8); }

		static void __boot();
		static int curSelected;
		static bool curAlt;
		static ::String defaultKey;
		int bindLength;
		::cpp::VirtualArray optionShit;
		 ::flixel::group::FlxTypedGroup grpOptions;
		::Array< ::Dynamic> grpInputs;
		::Array< ::Dynamic> grpInputsAlt;
		bool rebindingKey;
		int nextAccept;
		bool leaving;
		Float bindingTime;
		void update(Float elapsed);

		int getInputTextNum();
		::Dynamic getInputTextNum_dyn();

		void changeSelection(::hx::Null< int >  change);
		::Dynamic changeSelection_dyn();

		void changeAlt();
		::Dynamic changeAlt_dyn();

		bool unselectableCheck(int num, ::Dynamic checkDefaultKey);
		::Dynamic unselectableCheck_dyn();

		void addBindTexts( ::Alphabet optionText,int num);
		::Dynamic addBindTexts_dyn();

		void reloadKeys();
		::Dynamic reloadKeys_dyn();

};

} // end namespace options

#endif /* INCLUDED_options_ControlsSubState */ 
