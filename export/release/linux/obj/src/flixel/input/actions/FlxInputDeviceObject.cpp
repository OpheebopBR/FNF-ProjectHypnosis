#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxInputDevice
#include <flixel/input/actions/FlxInputDevice.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxInputDeviceObject
#include <flixel/input/actions/FlxInputDeviceObject.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a21ba484ed9e1312_142_new,"flixel.input.actions.FlxInputDeviceObject","new",0x8f2e1726,"flixel.input.actions.FlxInputDeviceObject.new","flixel/input/actions/FlxActionInput.hx",142,0x5d496a72)
HX_LOCAL_STACK_FRAME(_hx_pos_a21ba484ed9e1312_150_toString,"flixel.input.actions.FlxInputDeviceObject","toString",0xb9403c26,"flixel.input.actions.FlxInputDeviceObject.toString","flixel/input/actions/FlxActionInput.hx",150,0x5d496a72)
namespace flixel{
namespace input{
namespace actions{

void FlxInputDeviceObject_obj::__construct( ::flixel::input::actions::FlxInputDevice Device,int ID,::String __o_Model){
            		::String Model = __o_Model;
            		if (::hx::IsNull(__o_Model)) Model = HX_("",00,00,00,00);
            	HX_STACKFRAME(&_hx_pos_a21ba484ed9e1312_142_new)
HXLINE( 143)		this->device = Device;
HXLINE( 144)		this->id = ID;
HXLINE( 145)		this->model = Model;
            	}

Dynamic FlxInputDeviceObject_obj::__CreateEmpty() { return new FlxInputDeviceObject_obj; }

void *FlxInputDeviceObject_obj::_hx_vtable = 0;

Dynamic FlxInputDeviceObject_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxInputDeviceObject_obj > _hx_result = new FlxInputDeviceObject_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool FlxInputDeviceObject_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1cb2dc3c;
}

::String FlxInputDeviceObject_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_a21ba484ed9e1312_150_toString)
HXDLIN( 150)		::String _hx_tmp = ((HX_("{device:",c9,fb,a5,52) + ::Std_obj::string(this->device)) + HX_(",id:",53,67,65,1d));
HXDLIN( 150)		return ((((_hx_tmp + this->id) + HX_(",model:",9d,79,77,e6)) + this->model) + HX_("}",7d,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxInputDeviceObject_obj,toString,return )


::hx::ObjectPtr< FlxInputDeviceObject_obj > FlxInputDeviceObject_obj::__new( ::flixel::input::actions::FlxInputDevice Device,int ID,::String __o_Model) {
	::hx::ObjectPtr< FlxInputDeviceObject_obj > __this = new FlxInputDeviceObject_obj();
	__this->__construct(Device,ID,__o_Model);
	return __this;
}

::hx::ObjectPtr< FlxInputDeviceObject_obj > FlxInputDeviceObject_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::input::actions::FlxInputDevice Device,int ID,::String __o_Model) {
	FlxInputDeviceObject_obj *__this = (FlxInputDeviceObject_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxInputDeviceObject_obj), true, "flixel.input.actions.FlxInputDeviceObject"));
	*(void **)__this = FlxInputDeviceObject_obj::_hx_vtable;
	__this->__construct(Device,ID,__o_Model);
	return __this;
}

FlxInputDeviceObject_obj::FlxInputDeviceObject_obj()
{
}

void FlxInputDeviceObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxInputDeviceObject);
	HX_MARK_MEMBER_NAME(device,"device");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(model,"model");
	HX_MARK_END_CLASS();
}

void FlxInputDeviceObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(device,"device");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(model,"model");
}

::hx::Val FlxInputDeviceObject_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return ::hx::Val( id ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"model") ) { return ::hx::Val( model ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"device") ) { return ::hx::Val( device ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxInputDeviceObject_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"model") ) { model=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"device") ) { device=inValue.Cast<  ::flixel::input::actions::FlxInputDevice >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxInputDeviceObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("device",96,dc,77,71));
	outFields->push(HX_("id",db,5b,00,00));
	outFields->push(HX_("model",a9,23,58,0c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxInputDeviceObject_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::input::actions::FlxInputDevice */ ,(int)offsetof(FlxInputDeviceObject_obj,device),HX_("device",96,dc,77,71)},
	{::hx::fsInt,(int)offsetof(FlxInputDeviceObject_obj,id),HX_("id",db,5b,00,00)},
	{::hx::fsString,(int)offsetof(FlxInputDeviceObject_obj,model),HX_("model",a9,23,58,0c)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxInputDeviceObject_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxInputDeviceObject_obj_sMemberFields[] = {
	HX_("device",96,dc,77,71),
	HX_("id",db,5b,00,00),
	HX_("model",a9,23,58,0c),
	HX_("toString",ac,d0,6e,38),
	::String(null()) };

::hx::Class FlxInputDeviceObject_obj::__mClass;

void FlxInputDeviceObject_obj::__register()
{
	FlxInputDeviceObject_obj _hx_dummy;
	FlxInputDeviceObject_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.input.actions.FlxInputDeviceObject",34,4c,86,50);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxInputDeviceObject_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxInputDeviceObject_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxInputDeviceObject_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxInputDeviceObject_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace input
} // end namespace actions
