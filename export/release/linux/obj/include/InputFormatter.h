#ifndef INCLUDED_InputFormatter
#define INCLUDED_InputFormatter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(InputFormatter)



class HXCPP_CLASS_ATTRIBUTES InputFormatter_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef InputFormatter_obj OBJ_;
		InputFormatter_obj();

	public:
		enum { _hx_ClassId = 0x0bac54e4 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="InputFormatter")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"InputFormatter"); }

		inline static ::hx::ObjectPtr< InputFormatter_obj > __new() {
			::hx::ObjectPtr< InputFormatter_obj > __this = new InputFormatter_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< InputFormatter_obj > __alloc(::hx::Ctx *_hx_ctx) {
			InputFormatter_obj *__this = (InputFormatter_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(InputFormatter_obj), false, "InputFormatter"));
			*(void **)__this = InputFormatter_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~InputFormatter_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("InputFormatter",c0,c9,82,02); }

		static ::String getKeyName(int key);
		static ::Dynamic getKeyName_dyn();

		static ::String getGamepadButton(int button);
		static ::Dynamic getGamepadButton_dyn();

};


#endif /* INCLUDED_InputFormatter */ 
