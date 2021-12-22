#ifndef INCLUDED_StageData
#define INCLUDED_StageData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(StageData)



class HXCPP_CLASS_ATTRIBUTES StageData_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef StageData_obj OBJ_;
		StageData_obj();

	public:
		enum { _hx_ClassId = 0x577d7928 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="StageData")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"StageData"); }

		inline static ::hx::ObjectPtr< StageData_obj > __new() {
			::hx::ObjectPtr< StageData_obj > __this = new StageData_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< StageData_obj > __alloc(::hx::Ctx *_hx_ctx) {
			StageData_obj *__this = (StageData_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(StageData_obj), false, "StageData"));
			*(void **)__this = StageData_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~StageData_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("StageData",e8,03,3a,94); }

		static void __boot();
		static ::String forceNextDirectory;
		static void loadDirectory( ::Dynamic SONG);
		static ::Dynamic loadDirectory_dyn();

		static  ::Dynamic getStageFile(::String stage);
		static ::Dynamic getStageFile_dyn();

};


#endif /* INCLUDED_StageData */ 
