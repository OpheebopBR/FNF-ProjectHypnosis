#ifndef INCLUDED_flixel_addons_ui_FlxUIRadioGroup
#define INCLUDED_flixel_addons_ui_FlxUIRadioGroup

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_addons_ui_FlxUIGroup
#include <flixel/addons/ui/FlxUIGroup.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IHasParams
#include <flixel/addons/ui/interfaces/IHasParams.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIClickable
#include <flixel/addons/ui/interfaces/IFlxUIClickable.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,IFlxBasic)
HX_DECLARE_CLASS1(flixel,IFlxSprite)
HX_DECLARE_CLASS3(flixel,addons,ui,ButtonLabelStyle)
HX_DECLARE_CLASS3(flixel,addons,ui,CheckStyle)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUICheckBox)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIGroup)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIList)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIRadioGroup)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,ICursorPointable)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIButton)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIClickable)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIWidget)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IHasParams)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,ILabeled)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)

namespace flixel{
namespace addons{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES FlxUIRadioGroup_obj : public  ::flixel::addons::ui::FlxUIGroup_obj
{
	public:
		typedef  ::flixel::addons::ui::FlxUIGroup_obj super;
		typedef FlxUIRadioGroup_obj OBJ_;
		FlxUIRadioGroup_obj();

	public:
		enum { _hx_ClassId = 0x41492aa3 };

		void __construct(Float X,Float Y,::Array< ::String > ids_,::Array< ::String > labels_, ::Dynamic callback_,::hx::Null< Float >  __o_y_space_,::hx::Null< int >  __o_width_,::hx::Null< int >  __o_height_,::hx::Null< int >  __o_label_width_,::String __o_MoreString, ::flixel::math::FlxPoint PrevButtonOffset, ::flixel::math::FlxPoint NextButtonOffset,::Dynamic PrevButton,::Dynamic NextButton);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.addons.ui.FlxUIRadioGroup")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.addons.ui.FlxUIRadioGroup"); }
		static ::hx::ObjectPtr< FlxUIRadioGroup_obj > __new(Float X,Float Y,::Array< ::String > ids_,::Array< ::String > labels_, ::Dynamic callback_,::hx::Null< Float >  __o_y_space_,::hx::Null< int >  __o_width_,::hx::Null< int >  __o_height_,::hx::Null< int >  __o_label_width_,::String __o_MoreString, ::flixel::math::FlxPoint PrevButtonOffset, ::flixel::math::FlxPoint NextButtonOffset,::Dynamic PrevButton,::Dynamic NextButton);
		static ::hx::ObjectPtr< FlxUIRadioGroup_obj > __alloc(::hx::Ctx *_hx_ctx,Float X,Float Y,::Array< ::String > ids_,::Array< ::String > labels_, ::Dynamic callback_,::hx::Null< Float >  __o_y_space_,::hx::Null< int >  __o_width_,::hx::Null< int >  __o_height_,::hx::Null< int >  __o_label_width_,::String __o_MoreString, ::flixel::math::FlxPoint PrevButtonOffset, ::flixel::math::FlxPoint NextButtonOffset,::Dynamic PrevButton,::Dynamic NextButton);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxUIRadioGroup_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("FlxUIRadioGroup",0a,53,38,9e); }

		static void __boot();
		static ::String CLICK_EVENT;
		 ::flixel::addons::ui::CheckStyle activeStyle;
		 ::flixel::addons::ui::CheckStyle set_activeStyle( ::flixel::addons::ui::CheckStyle b);
		::Dynamic set_activeStyle_dyn();

		 ::flixel::addons::ui::CheckStyle inactiveStyle;
		 ::flixel::addons::ui::CheckStyle set_inactiveStyle( ::flixel::addons::ui::CheckStyle b);
		::Dynamic set_inactiveStyle_dyn();

		int get_numRadios();
		::Dynamic get_numRadios_dyn();

		bool skipButtonUpdate;
		bool set_skipButtonUpdate(bool b);
		::Dynamic set_skipButtonUpdate_dyn();

		 ::Dynamic callback;
		Dynamic callback_dyn() { return callback;}
		::cpp::VirtualArray params;
		::cpp::VirtualArray set_params(::cpp::VirtualArray p);
		::Dynamic set_params_dyn();

		bool fixedSize;
		Float set_width(Float Value);

		Float set_height(Float Value);

		void loadGraphics( ::Dynamic Box, ::Dynamic Dot);
		::Dynamic loadGraphics_dyn();

		void destroy();

		bool updateLabel(int i,::String label_);
		::Dynamic updateLabel_dyn();

		bool updateId(int i,::String id_);
		::Dynamic updateId_dyn();

		void show(bool b);
		::Dynamic show_dyn();

		void updateRadios(::Array< ::String > ids_,::Array< ::String > labels_);
		::Dynamic updateRadios_dyn();

		::Array< ::Dynamic> getRadios();
		::Dynamic getRadios_dyn();

		::String getLabel(int i);
		::Dynamic getLabel_dyn();

		::String getId(int i);
		::Dynamic getId_dyn();

		bool getIsVisible(int i);
		::Dynamic getIsVisible_dyn();

		bool get_clickable();
		::Dynamic get_clickable_dyn();

		bool set_clickable(bool b);
		::Dynamic set_clickable_dyn();

		int get_selectedIndex();
		::Dynamic get_selectedIndex_dyn();

		int set_selectedIndex(int i);
		::Dynamic set_selectedIndex_dyn();

		::String get_selectedLabel();
		::Dynamic get_selectedLabel_dyn();

		::String set_selectedLabel(::String str);
		::Dynamic set_selectedLabel_dyn();

		::String get_selectedId();
		::Dynamic get_selectedId_dyn();

		::String set_selectedId(::String str);
		::Dynamic set_selectedId_dyn();

		 ::flixel::math::FlxPoint setLineScroll(int scroll, ::Dynamic max_items);
		::Dynamic setLineScroll_dyn();

		void setRadioActive(int i,bool b);
		::Dynamic setRadioActive_dyn();

		::Array< bool > _list_active;
		 ::flixel::addons::ui::FlxUIList _list;
		 ::Dynamic _box_asset;
		 ::Dynamic _dot_asset;
		::Array< ::String > _labels;
		::Array< ::String > _ids;
		int _label_width;
		int _width;
		int _height;
		Float _y_space;
		int _selected;
		bool _clickable;
		::Array< ::Dynamic> _list_radios;
		void _refreshRadios();
		::Dynamic _refreshRadios_dyn();

		void updateActives();
		::Dynamic updateActives_dyn();

		 ::flixel::addons::ui::CheckStyle makeActiveStyle();
		::Dynamic makeActiveStyle_dyn();

		void _onCheckBoxEvent( ::flixel::addons::ui::FlxUICheckBox checkBox);
		::Dynamic _onCheckBoxEvent_dyn();

		bool _onClick( ::flixel::addons::ui::FlxUICheckBox checkBox,bool doCallback);
		::Dynamic _onClick_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace ui

#endif /* INCLUDED_flixel_addons_ui_FlxUIRadioGroup */ 
