#ifndef INCLUDED_options_BaseOptionsMenu
#define INCLUDED_options_BaseOptionsMenu

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_MusicBeatSubstate
#include <MusicBeatSubstate.h>
#endif
HX_DECLARE_CLASS0(Character)
HX_DECLARE_CLASS0(MusicBeatSubstate)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS1(flixel,FlxSubState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(options,BaseOptionsMenu)
HX_DECLARE_CLASS1(options,Option)

namespace options{


class HXCPP_CLASS_ATTRIBUTES BaseOptionsMenu_obj : public  ::MusicBeatSubstate_obj
{
	public:
		typedef  ::MusicBeatSubstate_obj super;
		typedef BaseOptionsMenu_obj OBJ_;
		BaseOptionsMenu_obj();

	public:
		enum { _hx_ClassId = 0x0cc50116 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="options.BaseOptionsMenu")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"options.BaseOptionsMenu"); }
		static ::hx::ObjectPtr< BaseOptionsMenu_obj > __new();
		static ::hx::ObjectPtr< BaseOptionsMenu_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BaseOptionsMenu_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("BaseOptionsMenu",6c,ab,2d,d0); }

		 ::options::Option curOption;
		int curSelected;
		::Array< ::Dynamic> optionsArray;
		 ::flixel::group::FlxTypedGroup grpOptions;
		 ::flixel::group::FlxTypedGroup checkboxGroup;
		 ::flixel::group::FlxTypedGroup grpTexts;
		 ::Character boyfriend;
		 ::flixel::FlxSprite descBox;
		 ::flixel::text::FlxText descText;
		::String title;
		::String rpcTitle;
		void addOption( ::options::Option option);
		::Dynamic addOption_dyn();

		int nextAccept;
		Float holdTime;
		Float holdValue;
		void update(Float elapsed);

		void updateTextFrom( ::options::Option option);
		::Dynamic updateTextFrom_dyn();

		void clearHold();
		::Dynamic clearHold_dyn();

		void changeSelection(::hx::Null< int >  change);
		::Dynamic changeSelection_dyn();

		void reloadBoyfriend();
		::Dynamic reloadBoyfriend_dyn();

		void reloadCheckboxes();
		::Dynamic reloadCheckboxes_dyn();

};

} // end namespace options

#endif /* INCLUDED_options_BaseOptionsMenu */ 
