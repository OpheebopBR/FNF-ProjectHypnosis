#include <hxcpp.h>

#ifndef INCLUDED_flixel_addons_ui_StrNameLabel
#include <flixel/addons/ui/StrNameLabel.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_LabelValuePair
#include <flixel/util/FlxPool_flixel_util_LabelValuePair.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_LabelValuePair
#include <flixel/util/LabelValuePair.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a7149303f8aeff86_12_new,"flixel.addons.ui.StrNameLabel","new",0xe89be4fb,"flixel.addons.ui.StrNameLabel.new","flixel/addons/ui/StrNameLabel.hx",12,0x6ee2b614)
HX_LOCAL_STACK_FRAME(_hx_pos_a7149303f8aeff86_19_copy,"flixel.addons.ui.StrNameLabel","copy",0x988eaeba,"flixel.addons.ui.StrNameLabel.copy","flixel/addons/ui/StrNameLabel.hx",19,0x6ee2b614)
HX_LOCAL_STACK_FRAME(_hx_pos_a7149303f8aeff86_50_toString,"flixel.addons.ui.StrNameLabel","toString",0x67af2a31,"flixel.addons.ui.StrNameLabel.toString","flixel/addons/ui/StrNameLabel.hx",50,0x6ee2b614)
HX_LOCAL_STACK_FRAME(_hx_pos_a7149303f8aeff86_23_sortByLabel,"flixel.addons.ui.StrNameLabel","sortByLabel",0x3fcb0c7a,"flixel.addons.ui.StrNameLabel.sortByLabel","flixel/addons/ui/StrNameLabel.hx",23,0x6ee2b614)
HX_LOCAL_STACK_FRAME(_hx_pos_a7149303f8aeff86_36_sortByName,"flixel.addons.ui.StrNameLabel","sortByName",0x2e612685,"flixel.addons.ui.StrNameLabel.sortByName","flixel/addons/ui/StrNameLabel.hx",36,0x6ee2b614)
namespace flixel{
namespace addons{
namespace ui{

void StrNameLabel_obj::__construct(::String __o_Name,::String __o_Label){
            		::String Name = __o_Name;
            		if (::hx::IsNull(__o_Name)) Name = HX_("",00,00,00,00);
            		::String Label = __o_Label;
            		if (::hx::IsNull(__o_Label)) Label = HX_("",00,00,00,00);
            	HX_STACKFRAME(&_hx_pos_a7149303f8aeff86_12_new)
HXLINE(  13)		this->name = Name;
HXLINE(  14)		this->label = Label;
            	}

Dynamic StrNameLabel_obj::__CreateEmpty() { return new StrNameLabel_obj; }

void *StrNameLabel_obj::_hx_vtable = 0;

Dynamic StrNameLabel_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< StrNameLabel_obj > _hx_result = new StrNameLabel_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool StrNameLabel_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2f209f9f;
}

 ::flixel::addons::ui::StrNameLabel StrNameLabel_obj::copy(){
            	HX_GC_STACKFRAME(&_hx_pos_a7149303f8aeff86_19_copy)
HXDLIN(  19)		return  ::flixel::addons::ui::StrNameLabel_obj::__alloc( HX_CTX ,this->name,this->label);
            	}


HX_DEFINE_DYNAMIC_FUNC0(StrNameLabel_obj,copy,return )

::String StrNameLabel_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_a7149303f8aeff86_50_toString)
HXDLIN(  50)		 ::Dynamic value = this->name;
HXDLIN(  50)		 ::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN(  50)		_this->label = HX_("name",4b,72,ff,48);
HXDLIN(  50)		_this->value = value;
HXDLIN(  50)		 ::Dynamic value1 = this->label;
HXDLIN(  50)		 ::flixel::util::LabelValuePair _this1 = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN(  50)		_this1->label = HX_("label",f4,0d,af,6f);
HXDLIN(  50)		_this1->value = value1;
HXDLIN(  50)		return ::flixel::util::FlxStringUtil_obj::getDebugString(::Array_obj< ::Dynamic>::__new(2)->init(0,_this)->init(1,_this1));
            	}


HX_DEFINE_DYNAMIC_FUNC0(StrNameLabel_obj,toString,return )

int StrNameLabel_obj::sortByLabel( ::flixel::addons::ui::StrNameLabel a, ::flixel::addons::ui::StrNameLabel b){
            	HX_STACKFRAME(&_hx_pos_a7149303f8aeff86_23_sortByLabel)
HXLINE(  24)		if ((a->label < b->label)) {
HXLINE(  26)			return -1;
            		}
HXLINE(  28)		if ((a->label > b->label)) {
HXLINE(  30)			return 1;
            		}
HXLINE(  32)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StrNameLabel_obj,sortByLabel,return )

int StrNameLabel_obj::sortByName( ::flixel::addons::ui::StrNameLabel a, ::flixel::addons::ui::StrNameLabel b){
            	HX_STACKFRAME(&_hx_pos_a7149303f8aeff86_36_sortByName)
HXLINE(  37)		if ((a->name < b->name)) {
HXLINE(  39)			return -1;
            		}
HXLINE(  41)		if ((a->name > b->name)) {
HXLINE(  43)			return 1;
            		}
HXLINE(  45)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StrNameLabel_obj,sortByName,return )


::hx::ObjectPtr< StrNameLabel_obj > StrNameLabel_obj::__new(::String __o_Name,::String __o_Label) {
	::hx::ObjectPtr< StrNameLabel_obj > __this = new StrNameLabel_obj();
	__this->__construct(__o_Name,__o_Label);
	return __this;
}

::hx::ObjectPtr< StrNameLabel_obj > StrNameLabel_obj::__alloc(::hx::Ctx *_hx_ctx,::String __o_Name,::String __o_Label) {
	StrNameLabel_obj *__this = (StrNameLabel_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(StrNameLabel_obj), true, "flixel.addons.ui.StrNameLabel"));
	*(void **)__this = StrNameLabel_obj::_hx_vtable;
	__this->__construct(__o_Name,__o_Label);
	return __this;
}

StrNameLabel_obj::StrNameLabel_obj()
{
}

void StrNameLabel_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StrNameLabel);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(label,"label");
	HX_MARK_END_CLASS();
}

void StrNameLabel_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(label,"label");
}

::hx::Val StrNameLabel_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return ::hx::Val( name ); }
		if (HX_FIELD_EQ(inName,"copy") ) { return ::hx::Val( copy_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"label") ) { return ::hx::Val( label ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool StrNameLabel_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"sortByName") ) { outValue = sortByName_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"sortByLabel") ) { outValue = sortByLabel_dyn(); return true; }
	}
	return false;
}

::hx::Val StrNameLabel_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"label") ) { label=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void StrNameLabel_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("label",f4,0d,af,6f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo StrNameLabel_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(StrNameLabel_obj,name),HX_("name",4b,72,ff,48)},
	{::hx::fsString,(int)offsetof(StrNameLabel_obj,label),HX_("label",f4,0d,af,6f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *StrNameLabel_obj_sStaticStorageInfo = 0;
#endif

static ::String StrNameLabel_obj_sMemberFields[] = {
	HX_("name",4b,72,ff,48),
	HX_("label",f4,0d,af,6f),
	HX_("copy",b5,bb,c4,41),
	HX_("toString",ac,d0,6e,38),
	::String(null()) };

::hx::Class StrNameLabel_obj::__mClass;

static ::String StrNameLabel_obj_sStaticFields[] = {
	HX_("sortByLabel",df,64,24,3b),
	HX_("sortByName",c0,a1,33,6b),
	::String(null())
};

void StrNameLabel_obj::__register()
{
	StrNameLabel_obj _hx_dummy;
	StrNameLabel_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.ui.StrNameLabel",89,4b,f9,e9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &StrNameLabel_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(StrNameLabel_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(StrNameLabel_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< StrNameLabel_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StrNameLabel_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StrNameLabel_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui
