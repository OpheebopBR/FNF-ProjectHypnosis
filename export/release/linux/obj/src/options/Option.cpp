#include <hxcpp.h>

#ifndef INCLUDED_Alphabet
#include <Alphabet.h>
#endif
#ifndef INCLUDED_ClientPrefs
#include <ClientPrefs.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_options_Option
#include <options/Option.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_416f94ddec2d073a_26_new,"options.Option","new",0x24090a17,"options.Option.new","options/Option.hx",26,0x1c4a7d18)
HX_LOCAL_STACK_FRAME(_hx_pos_416f94ddec2d073a_105_change,"options.Option","change",0x38fd0419,"options.Option.change","options/Option.hx",105,0x1c4a7d18)
HX_LOCAL_STACK_FRAME(_hx_pos_416f94ddec2d073a_112_getValue,"options.Option","getValue",0x609abde4,"options.Option.getValue","options/Option.hx",112,0x1c4a7d18)
HX_LOCAL_STACK_FRAME(_hx_pos_416f94ddec2d073a_116_setValue,"options.Option","setValue",0x0ef81758,"options.Option.setValue","options/Option.hx",116,0x1c4a7d18)
HX_LOCAL_STACK_FRAME(_hx_pos_416f94ddec2d073a_121_setChild,"options.Option","setChild",0x22f94183,"options.Option.setChild","options/Option.hx",121,0x1c4a7d18)
HX_LOCAL_STACK_FRAME(_hx_pos_416f94ddec2d073a_125_get_text,"options.Option","get_text",0x9bbfb71f,"options.Option.get_text","options/Option.hx",125,0x1c4a7d18)
HX_LOCAL_STACK_FRAME(_hx_pos_416f94ddec2d073a_132_set_text,"options.Option","set_text",0x4a1d1093,"options.Option.set_text","options/Option.hx",132,0x1c4a7d18)
HX_LOCAL_STACK_FRAME(_hx_pos_416f94ddec2d073a_140_get_type,"options.Option","get_type",0x9bcedd2c,"options.Option.get_type","options/Option.hx",140,0x1c4a7d18)
namespace options{

void Option_obj::__construct(::String name,::String __o_description,::String variable,::String __o_type, ::Dynamic __o_defaultValue,::Array< ::String > options){
            		::String description = __o_description;
            		if (::hx::IsNull(__o_description)) description = HX_("",00,00,00,00);
            		::String type = __o_type;
            		if (::hx::IsNull(__o_type)) type = HX_("bool",2a,84,1b,41);
            		 ::Dynamic defaultValue = __o_defaultValue;
            		if (::hx::IsNull(__o_defaultValue)) defaultValue = HX_("null variable value",06,3c,3f,e9);
            	HX_STACKFRAME(&_hx_pos_416f94ddec2d073a_26_new)
HXLINE(  51)		this->name = HX_("Unknown",6a,4b,cc,ae);
HXLINE(  50)		this->description = HX_("",00,00,00,00);
HXLINE(  49)		this->displayFormat = HX_("%v",b1,20,00,00);
HXLINE(  47)		this->decimals = 1;
HXLINE(  46)		this->maxValue = null();
HXLINE(  45)		this->minValue = null();
HXLINE(  44)		this->changeValue = 1;
HXLINE(  43)		this->options = null();
HXLINE(  42)		this->curOption = 0;
HXLINE(  40)		this->defaultValue = null();
HXLINE(  39)		this->variable = null();
HXLINE(  37)		this->scrollSpeed = ((Float)50);
HXLINE(  36)		this->showBoyfriend = false;
HXLINE(  32)		this->type = HX_("bool",2a,84,1b,41);
HXLINE(  30)		this->onChange = null();
HXLINE(  55)		this->name = name;
HXLINE(  56)		this->description = description;
HXLINE(  57)		this->variable = variable;
HXLINE(  58)		this->type = type;
HXLINE(  59)		this->defaultValue = defaultValue;
HXLINE(  60)		this->options = options;
HXLINE(  62)		if (::hx::IsEq( defaultValue,HX_("null variable value",06,3c,3f,e9) )) {
HXLINE(  64)			::String _hx_switch_0 = type;
            			if (  (_hx_switch_0==HX_("bool",2a,84,1b,41)) ){
HXLINE(  67)				defaultValue = false;
HXDLIN(  67)				goto _hx_goto_0;
            			}
            			if (  (_hx_switch_0==HX_("float",9c,c5,96,02)) ||  (_hx_switch_0==HX_("int",ef,0c,50,00)) ){
HXLINE(  69)				defaultValue = 0;
HXDLIN(  69)				goto _hx_goto_0;
            			}
            			if (  (_hx_switch_0==HX_("percent",c5,aa,da,78)) ){
HXLINE(  71)				defaultValue = 1;
HXDLIN(  71)				goto _hx_goto_0;
            			}
            			if (  (_hx_switch_0==HX_("string",d1,28,30,11)) ){
HXLINE(  73)				defaultValue = HX_("",00,00,00,00);
HXLINE(  74)				if ((options->length > 0)) {
HXLINE(  75)					defaultValue = options->__get(0);
            				}
HXLINE(  72)				goto _hx_goto_0;
            			}
            			_hx_goto_0:;
            		}
HXLINE(  80)		if (::hx::IsNull( this->getValue() )) {
HXLINE(  81)			this->setValue(defaultValue);
            		}
HXLINE(  84)		::String _hx_switch_1 = type;
            		if (  (_hx_switch_1==HX_("percent",c5,aa,da,78)) ){
HXLINE(  93)			this->displayFormat = HX_("%v%",54,7a,1c,00);
HXLINE(  94)			this->changeValue = ((Float)0.01);
HXLINE(  95)			this->minValue = 0;
HXLINE(  96)			this->maxValue = 1;
HXLINE(  97)			this->scrollSpeed = ((Float)0.5);
HXLINE(  98)			this->decimals = 2;
HXLINE(  92)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_1==HX_("string",d1,28,30,11)) ){
HXLINE(  87)			int num = options->indexOf(this->getValue(),null());
HXLINE(  88)			if ((num > -1)) {
HXLINE(  89)				this->curOption = num;
            			}
HXLINE(  86)			goto _hx_goto_1;
            		}
            		_hx_goto_1:;
            	}

Dynamic Option_obj::__CreateEmpty() { return new Option_obj; }

void *Option_obj::_hx_vtable = 0;

Dynamic Option_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Option_obj > _hx_result = new Option_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _hx_result;
}

bool Option_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x280eb0f3;
}

void Option_obj::change(){
            	HX_STACKFRAME(&_hx_pos_416f94ddec2d073a_105_change)
HXDLIN( 105)		if (::hx::IsNotNull( this->onChange )) {
HXLINE( 106)			this->onChange();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Option_obj,change,(void))

 ::Dynamic Option_obj::getValue(){
            	HX_STACKFRAME(&_hx_pos_416f94ddec2d073a_112_getValue)
HXDLIN( 112)		return ::Reflect_obj::getProperty(::hx::ClassOf< ::ClientPrefs >(),this->variable);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Option_obj,getValue,return )

void Option_obj::setValue( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_416f94ddec2d073a_116_setValue)
HXDLIN( 116)		::Reflect_obj::setProperty(::hx::ClassOf< ::ClientPrefs >(),this->variable,value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Option_obj,setValue,(void))

void Option_obj::setChild( ::Alphabet child){
            	HX_STACKFRAME(&_hx_pos_416f94ddec2d073a_121_setChild)
HXDLIN( 121)		this->child = child;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Option_obj,setChild,(void))

::String Option_obj::get_text(){
            	HX_STACKFRAME(&_hx_pos_416f94ddec2d073a_125_get_text)
HXLINE( 126)		if (::hx::IsNotNull( this->child )) {
HXLINE( 127)			return this->child->text;
            		}
HXLINE( 129)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Option_obj,get_text,return )

::String Option_obj::set_text(::String __o_newValue){
            		::String newValue = __o_newValue;
            		if (::hx::IsNull(__o_newValue)) newValue = HX_("",00,00,00,00);
            	HX_STACKFRAME(&_hx_pos_416f94ddec2d073a_132_set_text)
HXLINE( 133)		if (::hx::IsNotNull( this->child )) {
HXLINE( 134)			this->child->changeText(newValue,null());
            		}
HXLINE( 136)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Option_obj,set_text,return )

::String Option_obj::get_type(){
            	HX_STACKFRAME(&_hx_pos_416f94ddec2d073a_140_get_type)
HXLINE( 141)		::String newValue = HX_("bool",2a,84,1b,41);
HXLINE( 142)		::String _hx_switch_0 = ::StringTools_obj::trim(this->type.toLowerCase());
            		if (  (_hx_switch_0==HX_("fl",46,59,00,00)) ){
HXLINE( 147)			newValue = HX_("float",9c,c5,96,02);
HXDLIN( 147)			goto _hx_goto_9;
            		}
            		if (  (_hx_switch_0==HX_("integer",be,bd,1b,17)) ){
HXLINE( 145)			newValue = HX_("int",ef,0c,50,00);
HXDLIN( 145)			goto _hx_goto_9;
            		}
            		if (  (_hx_switch_0==HX_("float",9c,c5,96,02)) ||  (_hx_switch_0==HX_("int",ef,0c,50,00)) ||  (_hx_switch_0==HX_("percent",c5,aa,da,78)) ||  (_hx_switch_0==HX_("string",d1,28,30,11)) ){
HXLINE( 144)			newValue = this->type;
HXDLIN( 144)			goto _hx_goto_9;
            		}
            		if (  (_hx_switch_0==HX_("str",b1,a8,57,00)) ){
HXLINE( 146)			newValue = HX_("string",d1,28,30,11);
HXDLIN( 146)			goto _hx_goto_9;
            		}
            		_hx_goto_9:;
HXLINE( 149)		this->type = newValue;
HXLINE( 150)		return this->type;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Option_obj,get_type,return )


::hx::ObjectPtr< Option_obj > Option_obj::__new(::String name,::String __o_description,::String variable,::String __o_type, ::Dynamic __o_defaultValue,::Array< ::String > options) {
	::hx::ObjectPtr< Option_obj > __this = new Option_obj();
	__this->__construct(name,__o_description,variable,__o_type,__o_defaultValue,options);
	return __this;
}

::hx::ObjectPtr< Option_obj > Option_obj::__alloc(::hx::Ctx *_hx_ctx,::String name,::String __o_description,::String variable,::String __o_type, ::Dynamic __o_defaultValue,::Array< ::String > options) {
	Option_obj *__this = (Option_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Option_obj), true, "options.Option"));
	*(void **)__this = Option_obj::_hx_vtable;
	__this->__construct(name,__o_description,variable,__o_type,__o_defaultValue,options);
	return __this;
}

Option_obj::Option_obj()
{
}

void Option_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Option);
	HX_MARK_MEMBER_NAME(child,"child");
	HX_MARK_MEMBER_NAME(onChange,"onChange");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(showBoyfriend,"showBoyfriend");
	HX_MARK_MEMBER_NAME(scrollSpeed,"scrollSpeed");
	HX_MARK_MEMBER_NAME(variable,"variable");
	HX_MARK_MEMBER_NAME(defaultValue,"defaultValue");
	HX_MARK_MEMBER_NAME(curOption,"curOption");
	HX_MARK_MEMBER_NAME(options,"options");
	HX_MARK_MEMBER_NAME(changeValue,"changeValue");
	HX_MARK_MEMBER_NAME(minValue,"minValue");
	HX_MARK_MEMBER_NAME(maxValue,"maxValue");
	HX_MARK_MEMBER_NAME(decimals,"decimals");
	HX_MARK_MEMBER_NAME(displayFormat,"displayFormat");
	HX_MARK_MEMBER_NAME(description,"description");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_END_CLASS();
}

void Option_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(child,"child");
	HX_VISIT_MEMBER_NAME(onChange,"onChange");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(showBoyfriend,"showBoyfriend");
	HX_VISIT_MEMBER_NAME(scrollSpeed,"scrollSpeed");
	HX_VISIT_MEMBER_NAME(variable,"variable");
	HX_VISIT_MEMBER_NAME(defaultValue,"defaultValue");
	HX_VISIT_MEMBER_NAME(curOption,"curOption");
	HX_VISIT_MEMBER_NAME(options,"options");
	HX_VISIT_MEMBER_NAME(changeValue,"changeValue");
	HX_VISIT_MEMBER_NAME(minValue,"minValue");
	HX_VISIT_MEMBER_NAME(maxValue,"maxValue");
	HX_VISIT_MEMBER_NAME(decimals,"decimals");
	HX_VISIT_MEMBER_NAME(displayFormat,"displayFormat");
	HX_VISIT_MEMBER_NAME(description,"description");
	HX_VISIT_MEMBER_NAME(name,"name");
}

::hx::Val Option_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_text() ); }
		if (HX_FIELD_EQ(inName,"type") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_type() : type ); }
		if (HX_FIELD_EQ(inName,"name") ) { return ::hx::Val( name ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"child") ) { return ::hx::Val( child ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"change") ) { return ::hx::Val( change_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { return ::hx::Val( options ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onChange") ) { return ::hx::Val( onChange ); }
		if (HX_FIELD_EQ(inName,"variable") ) { return ::hx::Val( variable ); }
		if (HX_FIELD_EQ(inName,"minValue") ) { return ::hx::Val( minValue ); }
		if (HX_FIELD_EQ(inName,"maxValue") ) { return ::hx::Val( maxValue ); }
		if (HX_FIELD_EQ(inName,"decimals") ) { return ::hx::Val( decimals ); }
		if (HX_FIELD_EQ(inName,"getValue") ) { return ::hx::Val( getValue_dyn() ); }
		if (HX_FIELD_EQ(inName,"setValue") ) { return ::hx::Val( setValue_dyn() ); }
		if (HX_FIELD_EQ(inName,"setChild") ) { return ::hx::Val( setChild_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_text") ) { return ::hx::Val( get_text_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return ::hx::Val( set_text_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_type") ) { return ::hx::Val( get_type_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"curOption") ) { return ::hx::Val( curOption ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"scrollSpeed") ) { return ::hx::Val( scrollSpeed ); }
		if (HX_FIELD_EQ(inName,"changeValue") ) { return ::hx::Val( changeValue ); }
		if (HX_FIELD_EQ(inName,"description") ) { return ::hx::Val( description ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"defaultValue") ) { return ::hx::Val( defaultValue ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"showBoyfriend") ) { return ::hx::Val( showBoyfriend ); }
		if (HX_FIELD_EQ(inName,"displayFormat") ) { return ::hx::Val( displayFormat ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Option_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_text(inValue.Cast< ::String >()) ); }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"child") ) { child=inValue.Cast<  ::Alphabet >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { options=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onChange") ) { onChange=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"variable") ) { variable=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"minValue") ) { minValue=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxValue") ) { maxValue=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"decimals") ) { decimals=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"curOption") ) { curOption=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"scrollSpeed") ) { scrollSpeed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"changeValue") ) { changeValue=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"description") ) { description=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"defaultValue") ) { defaultValue=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"showBoyfriend") ) { showBoyfriend=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"displayFormat") ) { displayFormat=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Option_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("child",9c,a9,b9,45));
	outFields->push(HX_("text",ad,cc,f9,4c));
	outFields->push(HX_("type",ba,f2,08,4d));
	outFields->push(HX_("showBoyfriend",ad,2c,d6,d6));
	outFields->push(HX_("scrollSpeed",3a,e0,46,cb));
	outFields->push(HX_("variable",3c,12,0d,69));
	outFields->push(HX_("defaultValue",f0,ba,13,e7));
	outFields->push(HX_("curOption",15,ed,07,9c));
	outFields->push(HX_("options",5e,33,fe,df));
	outFields->push(HX_("changeValue",e1,27,7e,57));
	outFields->push(HX_("minValue",7f,ec,ef,28));
	outFields->push(HX_("maxValue",2d,d2,d5,db));
	outFields->push(HX_("decimals",c2,4a,6a,12));
	outFields->push(HX_("displayFormat",19,4b,f1,be));
	outFields->push(HX_("description",fc,08,1d,5f));
	outFields->push(HX_("name",4b,72,ff,48));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Option_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Alphabet */ ,(int)offsetof(Option_obj,child),HX_("child",9c,a9,b9,45)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Option_obj,onChange),HX_("onChange",ef,87,1f,97)},
	{::hx::fsString,(int)offsetof(Option_obj,type),HX_("type",ba,f2,08,4d)},
	{::hx::fsBool,(int)offsetof(Option_obj,showBoyfriend),HX_("showBoyfriend",ad,2c,d6,d6)},
	{::hx::fsFloat,(int)offsetof(Option_obj,scrollSpeed),HX_("scrollSpeed",3a,e0,46,cb)},
	{::hx::fsString,(int)offsetof(Option_obj,variable),HX_("variable",3c,12,0d,69)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Option_obj,defaultValue),HX_("defaultValue",f0,ba,13,e7)},
	{::hx::fsInt,(int)offsetof(Option_obj,curOption),HX_("curOption",15,ed,07,9c)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(Option_obj,options),HX_("options",5e,33,fe,df)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Option_obj,changeValue),HX_("changeValue",e1,27,7e,57)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Option_obj,minValue),HX_("minValue",7f,ec,ef,28)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Option_obj,maxValue),HX_("maxValue",2d,d2,d5,db)},
	{::hx::fsInt,(int)offsetof(Option_obj,decimals),HX_("decimals",c2,4a,6a,12)},
	{::hx::fsString,(int)offsetof(Option_obj,displayFormat),HX_("displayFormat",19,4b,f1,be)},
	{::hx::fsString,(int)offsetof(Option_obj,description),HX_("description",fc,08,1d,5f)},
	{::hx::fsString,(int)offsetof(Option_obj,name),HX_("name",4b,72,ff,48)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Option_obj_sStaticStorageInfo = 0;
#endif

static ::String Option_obj_sMemberFields[] = {
	HX_("child",9c,a9,b9,45),
	HX_("onChange",ef,87,1f,97),
	HX_("type",ba,f2,08,4d),
	HX_("showBoyfriend",ad,2c,d6,d6),
	HX_("scrollSpeed",3a,e0,46,cb),
	HX_("variable",3c,12,0d,69),
	HX_("defaultValue",f0,ba,13,e7),
	HX_("curOption",15,ed,07,9c),
	HX_("options",5e,33,fe,df),
	HX_("changeValue",e1,27,7e,57),
	HX_("minValue",7f,ec,ef,28),
	HX_("maxValue",2d,d2,d5,db),
	HX_("decimals",c2,4a,6a,12),
	HX_("displayFormat",19,4b,f1,be),
	HX_("description",fc,08,1d,5f),
	HX_("name",4b,72,ff,48),
	HX_("change",70,91,72,b7),
	HX_("getValue",fb,8e,8f,91),
	HX_("setValue",6f,e8,ec,3f),
	HX_("setChild",9a,12,ee,53),
	HX_("get_text",36,88,b4,cc),
	HX_("set_text",aa,e1,11,7b),
	HX_("get_type",43,ae,c3,cc),
	::String(null()) };

::hx::Class Option_obj::__mClass;

void Option_obj::__register()
{
	Option_obj _hx_dummy;
	Option_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("options.Option",a5,b2,ee,21);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Option_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Option_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Option_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Option_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace options
