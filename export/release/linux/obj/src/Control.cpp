#include <hxcpp.h>

#ifndef INCLUDED_Control
#include <Control.h>
#endif

::Control Control_obj::ACCEPT;

::Control Control_obj::BACK;

::Control Control_obj::NOTE_DOWN;

::Control Control_obj::NOTE_LEFT;

::Control Control_obj::NOTE_RIGHT;

::Control Control_obj::NOTE_UP;

::Control Control_obj::PAUSE;

::Control Control_obj::RESET;

::Control Control_obj::UI_DOWN;

::Control Control_obj::UI_LEFT;

::Control Control_obj::UI_RIGHT;

::Control Control_obj::UI_UP;

bool Control_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("ACCEPT",08,3f,89,bd)) { outValue = Control_obj::ACCEPT; return true; }
	if (inName==HX_("BACK",27,a2,d1,2b)) { outValue = Control_obj::BACK; return true; }
	if (inName==HX_("NOTE_DOWN",0f,ef,09,08)) { outValue = Control_obj::NOTE_DOWN; return true; }
	if (inName==HX_("NOTE_LEFT",b4,fe,4b,0d)) { outValue = Control_obj::NOTE_LEFT; return true; }
	if (inName==HX_("NOTE_RIGHT",6f,ec,3f,0c)) { outValue = Control_obj::NOTE_RIGHT; return true; }
	if (inName==HX_("NOTE_UP",c8,83,48,cd)) { outValue = Control_obj::NOTE_UP; return true; }
	if (inName==HX_("PAUSE",d6,0e,46,3b)) { outValue = Control_obj::PAUSE; return true; }
	if (inName==HX_("RESET",af,81,b6,64)) { outValue = Control_obj::RESET; return true; }
	if (inName==HX_("UI_DOWN",6d,a1,ed,de)) { outValue = Control_obj::UI_DOWN; return true; }
	if (inName==HX_("UI_LEFT",12,b1,2f,e4)) { outValue = Control_obj::UI_LEFT; return true; }
	if (inName==HX_("UI_RIGHT",51,4c,98,3c)) { outValue = Control_obj::UI_RIGHT; return true; }
	if (inName==HX_("UI_UP",a6,42,98,21)) { outValue = Control_obj::UI_UP; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(Control_obj)

int Control_obj::__FindIndex(::String inName)
{
	if (inName==HX_("ACCEPT",08,3f,89,bd)) return 9;
	if (inName==HX_("BACK",27,a2,d1,2b)) return 10;
	if (inName==HX_("NOTE_DOWN",0f,ef,09,08)) return 7;
	if (inName==HX_("NOTE_LEFT",b4,fe,4b,0d)) return 5;
	if (inName==HX_("NOTE_RIGHT",6f,ec,3f,0c)) return 6;
	if (inName==HX_("NOTE_UP",c8,83,48,cd)) return 4;
	if (inName==HX_("PAUSE",d6,0e,46,3b)) return 11;
	if (inName==HX_("RESET",af,81,b6,64)) return 8;
	if (inName==HX_("UI_DOWN",6d,a1,ed,de)) return 3;
	if (inName==HX_("UI_LEFT",12,b1,2f,e4)) return 1;
	if (inName==HX_("UI_RIGHT",51,4c,98,3c)) return 2;
	if (inName==HX_("UI_UP",a6,42,98,21)) return 0;
	return super::__FindIndex(inName);
}

int Control_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("ACCEPT",08,3f,89,bd)) return 0;
	if (inName==HX_("BACK",27,a2,d1,2b)) return 0;
	if (inName==HX_("NOTE_DOWN",0f,ef,09,08)) return 0;
	if (inName==HX_("NOTE_LEFT",b4,fe,4b,0d)) return 0;
	if (inName==HX_("NOTE_RIGHT",6f,ec,3f,0c)) return 0;
	if (inName==HX_("NOTE_UP",c8,83,48,cd)) return 0;
	if (inName==HX_("PAUSE",d6,0e,46,3b)) return 0;
	if (inName==HX_("RESET",af,81,b6,64)) return 0;
	if (inName==HX_("UI_DOWN",6d,a1,ed,de)) return 0;
	if (inName==HX_("UI_LEFT",12,b1,2f,e4)) return 0;
	if (inName==HX_("UI_RIGHT",51,4c,98,3c)) return 0;
	if (inName==HX_("UI_UP",a6,42,98,21)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val Control_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("ACCEPT",08,3f,89,bd)) return ACCEPT;
	if (inName==HX_("BACK",27,a2,d1,2b)) return BACK;
	if (inName==HX_("NOTE_DOWN",0f,ef,09,08)) return NOTE_DOWN;
	if (inName==HX_("NOTE_LEFT",b4,fe,4b,0d)) return NOTE_LEFT;
	if (inName==HX_("NOTE_RIGHT",6f,ec,3f,0c)) return NOTE_RIGHT;
	if (inName==HX_("NOTE_UP",c8,83,48,cd)) return NOTE_UP;
	if (inName==HX_("PAUSE",d6,0e,46,3b)) return PAUSE;
	if (inName==HX_("RESET",af,81,b6,64)) return RESET;
	if (inName==HX_("UI_DOWN",6d,a1,ed,de)) return UI_DOWN;
	if (inName==HX_("UI_LEFT",12,b1,2f,e4)) return UI_LEFT;
	if (inName==HX_("UI_RIGHT",51,4c,98,3c)) return UI_RIGHT;
	if (inName==HX_("UI_UP",a6,42,98,21)) return UI_UP;
	return super::__Field(inName,inCallProp);
}

static ::String Control_obj_sStaticFields[] = {
	HX_("UI_UP",a6,42,98,21),
	HX_("UI_LEFT",12,b1,2f,e4),
	HX_("UI_RIGHT",51,4c,98,3c),
	HX_("UI_DOWN",6d,a1,ed,de),
	HX_("NOTE_UP",c8,83,48,cd),
	HX_("NOTE_LEFT",b4,fe,4b,0d),
	HX_("NOTE_RIGHT",6f,ec,3f,0c),
	HX_("NOTE_DOWN",0f,ef,09,08),
	HX_("RESET",af,81,b6,64),
	HX_("ACCEPT",08,3f,89,bd),
	HX_("BACK",27,a2,d1,2b),
	HX_("PAUSE",d6,0e,46,3b),
	::String(null())
};

::hx::Class Control_obj::__mClass;

Dynamic __Create_Control_obj() { return new Control_obj; }

void Control_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("Control",3d,93,d2,e6), ::hx::TCanCast< Control_obj >,Control_obj_sStaticFields,0,
	&__Create_Control_obj, &__Create,
	&super::__SGetClass(), &CreateControl_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &Control_obj::__GetStatic;
}

void Control_obj::__boot()
{
ACCEPT = ::hx::CreateConstEnum< Control_obj >(HX_("ACCEPT",08,3f,89,bd),9);
BACK = ::hx::CreateConstEnum< Control_obj >(HX_("BACK",27,a2,d1,2b),10);
NOTE_DOWN = ::hx::CreateConstEnum< Control_obj >(HX_("NOTE_DOWN",0f,ef,09,08),7);
NOTE_LEFT = ::hx::CreateConstEnum< Control_obj >(HX_("NOTE_LEFT",b4,fe,4b,0d),5);
NOTE_RIGHT = ::hx::CreateConstEnum< Control_obj >(HX_("NOTE_RIGHT",6f,ec,3f,0c),6);
NOTE_UP = ::hx::CreateConstEnum< Control_obj >(HX_("NOTE_UP",c8,83,48,cd),4);
PAUSE = ::hx::CreateConstEnum< Control_obj >(HX_("PAUSE",d6,0e,46,3b),11);
RESET = ::hx::CreateConstEnum< Control_obj >(HX_("RESET",af,81,b6,64),8);
UI_DOWN = ::hx::CreateConstEnum< Control_obj >(HX_("UI_DOWN",6d,a1,ed,de),3);
UI_LEFT = ::hx::CreateConstEnum< Control_obj >(HX_("UI_LEFT",12,b1,2f,e4),1);
UI_RIGHT = ::hx::CreateConstEnum< Control_obj >(HX_("UI_RIGHT",51,4c,98,3c),2);
UI_UP = ::hx::CreateConstEnum< Control_obj >(HX_("UI_UP",a6,42,98,21),0);
}


