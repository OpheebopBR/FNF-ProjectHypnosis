#include <hxcpp.h>

#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectRenderer
#include <openfl/display/DisplayObjectRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_filters_BitmapFilter
#include <openfl/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_openfl_filters_ShaderFilter
#include <openfl/filters/ShaderFilter.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2e74c672ca03138f_140_new,"openfl.filters.ShaderFilter","new",0xe9b87900,"openfl.filters.ShaderFilter.new","openfl/filters/ShaderFilter.hx",140,0x3faaafae)
HX_LOCAL_STACK_FRAME(_hx_pos_2e74c672ca03138f_149_clone,"openfl.filters.ShaderFilter","clone",0xd2bb23fd,"openfl.filters.ShaderFilter.clone","openfl/filters/ShaderFilter.hx",149,0x3faaafae)
HX_LOCAL_STACK_FRAME(_hx_pos_2e74c672ca03138f_160_invalidate,"openfl.filters.ShaderFilter","invalidate",0x2cb1c4db,"openfl.filters.ShaderFilter.invalidate","openfl/filters/ShaderFilter.hx",160,0x3faaafae)
HX_LOCAL_STACK_FRAME(_hx_pos_2e74c672ca03138f_164___initShader,"openfl.filters.ShaderFilter","__initShader",0x314ad8d5,"openfl.filters.ShaderFilter.__initShader","openfl/filters/ShaderFilter.hx",164,0x3faaafae)
HX_LOCAL_STACK_FRAME(_hx_pos_2e74c672ca03138f_56_boot,"openfl.filters.ShaderFilter","boot",0x8fca6792,"openfl.filters.ShaderFilter.boot","openfl/filters/ShaderFilter.hx",56,0x3faaafae)
namespace openfl{
namespace filters{

void ShaderFilter_obj::__construct( ::openfl::display::Shader shader){
            	HX_STACKFRAME(&_hx_pos_2e74c672ca03138f_140_new)
HXLINE( 141)		super::__construct();
HXLINE( 143)		this->shader = shader;
HXLINE( 145)		this->_hx___numShaderPasses = 1;
            	}

Dynamic ShaderFilter_obj::__CreateEmpty() { return new ShaderFilter_obj; }

void *ShaderFilter_obj::_hx_vtable = 0;

Dynamic ShaderFilter_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ShaderFilter_obj > _hx_result = new ShaderFilter_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ShaderFilter_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x26de6bd2) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x26de6bd2;
	} else {
		return inClassId==(int)0x7f1ab084;
	}
}

 ::openfl::filters::BitmapFilter ShaderFilter_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_2e74c672ca03138f_149_clone)
HXLINE( 150)		 ::openfl::filters::ShaderFilter filter =  ::openfl::filters::ShaderFilter_obj::__alloc( HX_CTX ,this->shader);
HXLINE( 151)		filter->bottomExtension = this->bottomExtension;
HXLINE( 152)		filter->leftExtension = this->leftExtension;
HXLINE( 153)		filter->rightExtension = this->rightExtension;
HXLINE( 154)		filter->topExtension = this->topExtension;
HXLINE( 155)		return filter;
            	}


void ShaderFilter_obj::invalidate(){
            	HX_STACKFRAME(&_hx_pos_2e74c672ca03138f_160_invalidate)
HXDLIN( 160)		this->_hx___renderDirty = true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderFilter_obj,invalidate,(void))

 ::openfl::display::Shader ShaderFilter_obj::_hx___initShader( ::openfl::display::DisplayObjectRenderer renderer,int pass, ::openfl::display::BitmapData sourceBitmapData){
            	HX_STACKFRAME(&_hx_pos_2e74c672ca03138f_164___initShader)
HXLINE( 165)		this->_hx___shaderBlendMode = this->blendMode;
HXLINE( 166)		return this->shader;
            	}



::hx::ObjectPtr< ShaderFilter_obj > ShaderFilter_obj::__new( ::openfl::display::Shader shader) {
	::hx::ObjectPtr< ShaderFilter_obj > __this = new ShaderFilter_obj();
	__this->__construct(shader);
	return __this;
}

::hx::ObjectPtr< ShaderFilter_obj > ShaderFilter_obj::__alloc(::hx::Ctx *_hx_ctx, ::openfl::display::Shader shader) {
	ShaderFilter_obj *__this = (ShaderFilter_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ShaderFilter_obj), true, "openfl.filters.ShaderFilter"));
	*(void **)__this = ShaderFilter_obj::_hx_vtable;
	__this->__construct(shader);
	return __this;
}

ShaderFilter_obj::ShaderFilter_obj()
{
}

void ShaderFilter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ShaderFilter);
	HX_MARK_MEMBER_NAME(blendMode,"blendMode");
	HX_MARK_MEMBER_NAME(bottomExtension,"bottomExtension");
	HX_MARK_MEMBER_NAME(leftExtension,"leftExtension");
	HX_MARK_MEMBER_NAME(rightExtension,"rightExtension");
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_MEMBER_NAME(topExtension,"topExtension");
	 ::openfl::filters::BitmapFilter_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ShaderFilter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(blendMode,"blendMode");
	HX_VISIT_MEMBER_NAME(bottomExtension,"bottomExtension");
	HX_VISIT_MEMBER_NAME(leftExtension,"leftExtension");
	HX_VISIT_MEMBER_NAME(rightExtension,"rightExtension");
	HX_VISIT_MEMBER_NAME(shader,"shader");
	HX_VISIT_MEMBER_NAME(topExtension,"topExtension");
	 ::openfl::filters::BitmapFilter_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ShaderFilter_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { return ::hx::Val( shader ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"blendMode") ) { return ::hx::Val( blendMode ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"invalidate") ) { return ::hx::Val( invalidate_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"topExtension") ) { return ::hx::Val( topExtension ); }
		if (HX_FIELD_EQ(inName,"__initShader") ) { return ::hx::Val( _hx___initShader_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"leftExtension") ) { return ::hx::Val( leftExtension ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"rightExtension") ) { return ::hx::Val( rightExtension ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"bottomExtension") ) { return ::hx::Val( bottomExtension ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ShaderFilter_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast<  ::openfl::display::Shader >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"blendMode") ) { blendMode=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"topExtension") ) { topExtension=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"leftExtension") ) { leftExtension=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"rightExtension") ) { rightExtension=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"bottomExtension") ) { bottomExtension=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ShaderFilter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("blendMode",54,e4,37,0c));
	outFields->push(HX_("bottomExtension",14,d7,79,1e));
	outFields->push(HX_("leftExtension",78,b2,fb,5e));
	outFields->push(HX_("rightExtension",03,0c,25,c4));
	outFields->push(HX_("shader",25,bf,20,1d));
	outFields->push(HX_("topExtension",2a,12,a6,52));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ShaderFilter_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ShaderFilter_obj,blendMode),HX_("blendMode",54,e4,37,0c)},
	{::hx::fsInt,(int)offsetof(ShaderFilter_obj,bottomExtension),HX_("bottomExtension",14,d7,79,1e)},
	{::hx::fsInt,(int)offsetof(ShaderFilter_obj,leftExtension),HX_("leftExtension",78,b2,fb,5e)},
	{::hx::fsInt,(int)offsetof(ShaderFilter_obj,rightExtension),HX_("rightExtension",03,0c,25,c4)},
	{::hx::fsObject /*  ::openfl::display::Shader */ ,(int)offsetof(ShaderFilter_obj,shader),HX_("shader",25,bf,20,1d)},
	{::hx::fsInt,(int)offsetof(ShaderFilter_obj,topExtension),HX_("topExtension",2a,12,a6,52)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ShaderFilter_obj_sStaticStorageInfo = 0;
#endif

static ::String ShaderFilter_obj_sMemberFields[] = {
	HX_("blendMode",54,e4,37,0c),
	HX_("bottomExtension",14,d7,79,1e),
	HX_("leftExtension",78,b2,fb,5e),
	HX_("rightExtension",03,0c,25,c4),
	HX_("shader",25,bf,20,1d),
	HX_("topExtension",2a,12,a6,52),
	HX_("clone",5d,13,63,48),
	HX_("invalidate",7b,19,2a,87),
	HX_("__initShader",75,95,f9,59),
	::String(null()) };

::hx::Class ShaderFilter_obj::__mClass;

void ShaderFilter_obj::__register()
{
	ShaderFilter_obj _hx_dummy;
	ShaderFilter_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.filters.ShaderFilter",0e,39,50,7c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ShaderFilter_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ShaderFilter_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ShaderFilter_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ShaderFilter_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ShaderFilter_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_2e74c672ca03138f_56_boot)
HXDLIN(  56)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("fields",79,8e,8e,80), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("blendMode",54,e4,37,0c), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))))));
            	}
}

} // end namespace openfl
} // end namespace filters
