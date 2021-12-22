#ifndef INCLUDED_flixel_addons_ui_FlxInputText
#define INCLUDED_flixel_addons_ui_FlxInputText

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
HX_DECLARE_CLASS0(EReg)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxInputText)
HX_DECLARE_CLASS2(flixel,math,FlxRect)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,util,FlxTimer)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,KeyboardEvent)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)

namespace flixel{
namespace addons{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES FlxInputText_obj : public  ::flixel::text::FlxText_obj
{
	public:
		typedef  ::flixel::text::FlxText_obj super;
		typedef FlxInputText_obj OBJ_;
		FlxInputText_obj();

	public:
		enum { _hx_ClassId = 0x2e702350 };

		void __construct(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::hx::Null< int >  __o_Width,::String Text,::hx::Null< int >  __o_size,::hx::Null< int >  __o_TextColor,::hx::Null< int >  __o_BackgroundColor,::hx::Null< bool >  __o_EmbeddedFont);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.addons.ui.FlxInputText")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.addons.ui.FlxInputText"); }
		static ::hx::ObjectPtr< FlxInputText_obj > __new(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::hx::Null< int >  __o_Width,::String Text,::hx::Null< int >  __o_size,::hx::Null< int >  __o_TextColor,::hx::Null< int >  __o_BackgroundColor,::hx::Null< bool >  __o_EmbeddedFont);
		static ::hx::ObjectPtr< FlxInputText_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::hx::Null< int >  __o_Width,::String Text,::hx::Null< int >  __o_size,::hx::Null< int >  __o_TextColor,::hx::Null< int >  __o_BackgroundColor,::hx::Null< bool >  __o_EmbeddedFont);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxInputText_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxInputText",25,d3,0c,31); }

		static void __boot();
		static int NO_FILTER;
		static int ONLY_ALPHA;
		static int ONLY_NUMERIC;
		static int ONLY_ALPHANUMERIC;
		static int CUSTOM_FILTER;
		static int ALL_CASES;
		static int UPPER_CASE;
		static int LOWER_CASE;
		static ::String BACKSPACE_ACTION;
		static ::String DELETE_ACTION;
		static ::String ENTER_ACTION;
		static ::String INPUT_ACTION;
		 ::EReg customFilterPattern;
		 ::EReg set_customFilterPattern( ::EReg cfp);
		::Dynamic set_customFilterPattern_dyn();

		 ::Dynamic callback;
		Dynamic callback_dyn() { return callback;}
		bool background;
		int caretColor;
		int set_caretColor(int i);
		::Dynamic set_caretColor_dyn();

		int caretWidth;
		int set_caretWidth(int i);
		::Dynamic set_caretWidth_dyn();

		::cpp::VirtualArray params;
		bool hasFocus;
		int caretIndex;
		 ::Dynamic focusGained;
		Dynamic focusGained_dyn() { return focusGained;}
		 ::Dynamic focusLost;
		Dynamic focusLost_dyn() { return focusLost;}
		int forceCase;
		int maxLength;
		int lines;
		int filterMode;
		int fieldBorderColor;
		int fieldBorderThickness;
		int backgroundColor;
		 ::flixel::FlxSprite backgroundSprite;
		 ::flixel::util::FlxTimer _caretTimer;
		 ::flixel::FlxSprite caret;
		 ::flixel::FlxSprite fieldBorderSprite;
		 ::Dynamic _scrollBoundIndeces;
		::Array< ::Dynamic> _charBoundaries;
		int lastScroll;
		void destroy();

		void draw();

		void drawSprite( ::flixel::FlxSprite Sprite);
		::Dynamic drawSprite_dyn();

		void update(Float elapsed);

		void onKeyDown( ::openfl::events::KeyboardEvent e);
		::Dynamic onKeyDown_dyn();

		virtual void onChange(::String action);
		::Dynamic onChange_dyn();

		::String insertSubstring(::String Original,::String Insert,int Index);
		::Dynamic insertSubstring_dyn();

		int getCaretIndex();
		::Dynamic getCaretIndex_dyn();

		 ::openfl::geom::Rectangle getCharBoundaries(int charIndex);
		::Dynamic getCharBoundaries_dyn();

		::String set_text(::String Text);

		int getCharIndexAtPoint(Float X,Float Y);
		::Dynamic getCharIndexAtPoint_dyn();

		void prepareCharBoundaries(int numChars);
		::Dynamic prepareCharBoundaries_dyn();

		void onSetTextCheck();
		::Dynamic onSetTextCheck_dyn();

		void calcFrame(::hx::Null< bool >  RunOnCpp);

		void toggleCaret( ::flixel::util::FlxTimer timer);
		::Dynamic toggleCaret_dyn();

		::String filter(::String text);
		::Dynamic filter_dyn();

		::cpp::VirtualArray set_params(::cpp::VirtualArray p);
		::Dynamic set_params_dyn();

		Float set_x(Float X);

		Float set_y(Float Y);

		bool set_hasFocus(bool newFocus);
		::Dynamic set_hasFocus_dyn();

		::String getAlignStr();
		::Dynamic getAlignStr_dyn();

		int set_caretIndex(int newCaretIndex);
		::Dynamic set_caretIndex_dyn();

		int set_forceCase(int Value);
		::Dynamic set_forceCase_dyn();

		int set_size(int Value);

		int set_maxLength(int Value);
		::Dynamic set_maxLength_dyn();

		int set_lines(int Value);
		::Dynamic set_lines_dyn();

		bool get_passwordMode();
		::Dynamic get_passwordMode_dyn();

		bool set_passwordMode(bool value);
		::Dynamic set_passwordMode_dyn();

		int set_filterMode(int Value);
		::Dynamic set_filterMode_dyn();

		int set_fieldBorderColor(int Value);
		::Dynamic set_fieldBorderColor_dyn();

		int set_fieldBorderThickness(int Value);
		::Dynamic set_fieldBorderThickness_dyn();

		int set_backgroundColor(int Value);
		::Dynamic set_backgroundColor_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace ui

#endif /* INCLUDED_flixel_addons_ui_FlxInputText */ 
