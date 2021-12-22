#ifndef INCLUDED_flixel_addons_ui_StrNameLabel
#define INCLUDED_flixel_addons_ui_StrNameLabel

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,addons,ui,StrNameLabel)

namespace flixel{
namespace addons{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES StrNameLabel_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef StrNameLabel_obj OBJ_;
		StrNameLabel_obj();

	public:
		enum { _hx_ClassId = 0x2f209f9f };

		void __construct(::String __o_Name,::String __o_Label);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.addons.ui.StrNameLabel")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.addons.ui.StrNameLabel"); }
		static ::hx::ObjectPtr< StrNameLabel_obj > __new(::String __o_Name,::String __o_Label);
		static ::hx::ObjectPtr< StrNameLabel_obj > __alloc(::hx::Ctx *_hx_ctx,::String __o_Name,::String __o_Label);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~StrNameLabel_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("StrNameLabel",d8,40,39,62); }

		static int sortByLabel( ::flixel::addons::ui::StrNameLabel a, ::flixel::addons::ui::StrNameLabel b);
		static ::Dynamic sortByLabel_dyn();

		static int sortByName( ::flixel::addons::ui::StrNameLabel a, ::flixel::addons::ui::StrNameLabel b);
		static ::Dynamic sortByName_dyn();

		::String name;
		::String label;
		 ::flixel::addons::ui::StrNameLabel copy();
		::Dynamic copy_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace ui

#endif /* INCLUDED_flixel_addons_ui_StrNameLabel */ 
