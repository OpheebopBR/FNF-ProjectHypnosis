#ifndef INCLUDED_lime_graphics_opengl_ext_NV_read_depth
#define INCLUDED_lime_graphics_opengl_ext_NV_read_depth

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_94059d33c32043c1_5_new)
HX_DECLARE_CLASS4(lime,graphics,opengl,ext,NV_read_depth)

namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES NV_read_depth_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef NV_read_depth_obj OBJ_;
		NV_read_depth_obj();

	public:
		enum { _hx_ClassId = 0x20289f23 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.NV_read_depth")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl.ext.NV_read_depth"); }

		inline static ::hx::ObjectPtr< NV_read_depth_obj > __new() {
			::hx::ObjectPtr< NV_read_depth_obj > __this = new NV_read_depth_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< NV_read_depth_obj > __alloc(::hx::Ctx *_hx_ctx) {
			NV_read_depth_obj *__this = (NV_read_depth_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(NV_read_depth_obj), false, "lime.graphics.opengl.ext.NV_read_depth"));
			*(void **)__this = NV_read_depth_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_94059d33c32043c1_5_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~NV_read_depth_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("NV_read_depth",f1,85,77,c1); }

};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_NV_read_depth */ 
