#include <hxcpp.h>

#ifndef INCLUDED_FlxUIDropDownHeader
#include <FlxUIDropDownHeader.h>
#endif
#ifndef INCLUDED_FlxUIDropDownMenuCustom
#include <FlxUIDropDownMenuCustom.h>
#endif
#ifndef INCLUDED_FlxUIDropDownMenuDropDirection
#include <FlxUIDropDownMenuDropDirection.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_IFlxBasic
#include <flixel/IFlxBasic.h>
#endif
#ifndef INCLUDED_flixel_IFlxSprite
#include <flixel/IFlxSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUI
#include <flixel/addons/ui/FlxUI.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUI9SliceSprite
#include <flixel/addons/ui/FlxUI9SliceSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIButton
#include <flixel/addons/ui/FlxUIButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIGroup
#include <flixel/addons/ui/FlxUIGroup.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUISprite
#include <flixel/addons/ui/FlxUISprite.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUISpriteButton
#include <flixel/addons/ui/FlxUISpriteButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIText
#include <flixel/addons/ui/FlxUIText.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUITypedButton
#include <flixel/addons/ui/FlxUITypedButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_StrNameLabel
#include <flixel/addons/ui/StrNameLabel.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_ICursorPointable
#include <flixel/addons/ui/interfaces/ICursorPointable.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIButton
#include <flixel/addons/ui/interfaces/IFlxUIButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIClickable
#include <flixel/addons/ui/interfaces/IFlxUIClickable.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIWidget
#include <flixel/addons/ui/interfaces/IFlxUIWidget.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IHasParams
#include <flixel/addons/ui/interfaces/IHasParams.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_ILabeled
#include <flixel/addons/ui/interfaces/ILabeled.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IResizable
#include <flixel/addons/ui/interfaces/IResizable.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouseButton
#include <flixel/input/mouse/FlxMouseButton.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton
#include <flixel/ui/FlxTypedButton.h>
#endif
#ifndef INCLUDED_flixel_ui__FlxButton_FlxButtonEvent
#include <flixel/ui/_FlxButton/FlxButtonEvent.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5585202bf1be20f8_40_new,"FlxUIDropDownMenuCustom","new",0x40440379,"FlxUIDropDownMenuCustom.new","FlxUIDropDownMenuCustom.hx",40,0xf5f4ce17)
static const int _hx_array_data_5354d307_4[] = {
	(int)1,(int)1,(int)14,(int)14,
};
HX_LOCAL_STACK_FRAME(_hx_pos_5585202bf1be20f8_45_set_skipButtonUpdate,"FlxUIDropDownMenuCustom","set_skipButtonUpdate",0x857cdffe,"FlxUIDropDownMenuCustom.set_skipButtonUpdate","FlxUIDropDownMenuCustom.hx",45,0xf5f4ce17)
HX_LOCAL_STACK_FRAME(_hx_pos_5585202bf1be20f8_62_get_selectedId,"FlxUIDropDownMenuCustom","get_selectedId",0xb15ee0e6,"FlxUIDropDownMenuCustom.get_selectedId","FlxUIDropDownMenuCustom.hx",62,0xf5f4ce17)
HX_LOCAL_STACK_FRAME(_hx_pos_5585202bf1be20f8_66_set_selectedId,"FlxUIDropDownMenuCustom","set_selectedId",0xd17ec95a,"FlxUIDropDownMenuCustom.set_selectedId","FlxUIDropDownMenuCustom.hx",66,0xf5f4ce17)
HX_LOCAL_STACK_FRAME(_hx_pos_5585202bf1be20f8_96_get_selectedLabel,"FlxUIDropDownMenuCustom","get_selectedLabel",0x5db701c9,"FlxUIDropDownMenuCustom.get_selectedLabel","FlxUIDropDownMenuCustom.hx",96,0xf5f4ce17)
HX_LOCAL_STACK_FRAME(_hx_pos_5585202bf1be20f8_100_set_selectedLabel,"FlxUIDropDownMenuCustom","set_selectedLabel",0x8124d9d5,"FlxUIDropDownMenuCustom.set_selectedLabel","FlxUIDropDownMenuCustom.hx",100,0xf5f4ce17)
HX_LOCAL_STACK_FRAME(_hx_pos_5585202bf1be20f8_139_set_params,"FlxUIDropDownMenuCustom","set_params",0x22395b8a,"FlxUIDropDownMenuCustom.set_params","FlxUIDropDownMenuCustom.hx",139,0xf5f4ce17)
HX_LOCAL_STACK_FRAME(_hx_pos_5585202bf1be20f8_145_set_dropDirection,"FlxUIDropDownMenuCustom","set_dropDirection",0x54bbfc4c,"FlxUIDropDownMenuCustom.set_dropDirection","FlxUIDropDownMenuCustom.hx",145,0xf5f4ce17)
HX_LOCAL_STACK_FRAME(_hx_pos_5585202bf1be20f8_222_updateButtonPositions,"FlxUIDropDownMenuCustom","updateButtonPositions",0x2cb444a8,"FlxUIDropDownMenuCustom.updateButtonPositions","FlxUIDropDownMenuCustom.hx",222,0xf5f4ce17)
HX_LOCAL_STACK_FRAME(_hx_pos_5585202bf1be20f8_248_set_visible,"FlxUIDropDownMenuCustom","set_visible",0x94fa53ae,"FlxUIDropDownMenuCustom.set_visible","FlxUIDropDownMenuCustom.hx",248,0xf5f4ce17)
HX_LOCAL_STACK_FRAME(_hx_pos_5585202bf1be20f8_276_dropsUp,"FlxUIDropDownMenuCustom","dropsUp",0xd3759078,"FlxUIDropDownMenuCustom.dropsUp","FlxUIDropDownMenuCustom.hx",276,0xf5f4ce17)
HX_LOCAL_STACK_FRAME(_hx_pos_5585202bf1be20f8_281_exceedsHeight,"FlxUIDropDownMenuCustom","exceedsHeight",0xf10fee1f,"FlxUIDropDownMenuCustom.exceedsHeight","FlxUIDropDownMenuCustom.hx",281,0xf5f4ce17)
HX_LOCAL_STACK_FRAME(_hx_pos_5585202bf1be20f8_286_getPanelHeight,"FlxUIDropDownMenuCustom","getPanelHeight",0x304dc69c,"FlxUIDropDownMenuCustom.getPanelHeight","FlxUIDropDownMenuCustom.hx",286,0xf5f4ce17)
HX_LOCAL_STACK_FRAME(_hx_pos_5585202bf1be20f8_294_setData,"FlxUIDropDownMenuCustom","setData",0xd471ca85,"FlxUIDropDownMenuCustom.setData","FlxUIDropDownMenuCustom.hx",294,0xf5f4ce17)
HX_LOCAL_STACK_FRAME(_hx_pos_5585202bf1be20f8_351_selectSomething,"FlxUIDropDownMenuCustom","selectSomething",0xf901aa77,"FlxUIDropDownMenuCustom.selectSomething","FlxUIDropDownMenuCustom.hx",351,0xf5f4ce17)
HX_LOCAL_STACK_FRAME(_hx_pos_5585202bf1be20f8_361_makeListButton,"FlxUIDropDownMenuCustom","makeListButton",0x4c0f2205,"FlxUIDropDownMenuCustom.makeListButton","FlxUIDropDownMenuCustom.hx",361,0xf5f4ce17)
HX_LOCAL_STACK_FRAME(_hx_pos_5585202bf1be20f8_358_makeListButton,"FlxUIDropDownMenuCustom","makeListButton",0x4c0f2205,"FlxUIDropDownMenuCustom.makeListButton","FlxUIDropDownMenuCustom.hx",358,0xf5f4ce17)
static const int _hx_array_data_5354d307_30[] = {
	(int)1,(int)1,(int)3,(int)3,
};
static const int _hx_array_data_5354d307_31[] = {
	(int)1,(int)1,(int)3,(int)3,
};
static const int _hx_array_data_5354d307_32[] = {
	(int)1,(int)1,(int)3,(int)3,
};
HX_LOCAL_STACK_FRAME(_hx_pos_5585202bf1be20f8_391_changeLabelByIndex,"FlxUIDropDownMenuCustom","changeLabelByIndex",0x9ad120be,"FlxUIDropDownMenuCustom.changeLabelByIndex","FlxUIDropDownMenuCustom.hx",391,0xf5f4ce17)
HX_LOCAL_STACK_FRAME(_hx_pos_5585202bf1be20f8_400_changeLabelById,"FlxUIDropDownMenuCustom","changeLabelById",0x9dd2d2af,"FlxUIDropDownMenuCustom.changeLabelById","FlxUIDropDownMenuCustom.hx",400,0xf5f4ce17)
HX_LOCAL_STACK_FRAME(_hx_pos_5585202bf1be20f8_409_getBtnByIndex,"FlxUIDropDownMenuCustom","getBtnByIndex",0xfe049b4e,"FlxUIDropDownMenuCustom.getBtnByIndex","FlxUIDropDownMenuCustom.hx",409,0xf5f4ce17)
HX_LOCAL_STACK_FRAME(_hx_pos_5585202bf1be20f8_418_getBtnById,"FlxUIDropDownMenuCustom","getBtnById",0x5ec81e1f,"FlxUIDropDownMenuCustom.getBtnById","FlxUIDropDownMenuCustom.hx",418,0xf5f4ce17)
HX_LOCAL_STACK_FRAME(_hx_pos_5585202bf1be20f8_430_update,"FlxUIDropDownMenuCustom","update",0xa37d8890,"FlxUIDropDownMenuCustom.update","FlxUIDropDownMenuCustom.hx",430,0xf5f4ce17)
HX_LOCAL_STACK_FRAME(_hx_pos_5585202bf1be20f8_460_destroy,"FlxUIDropDownMenuCustom","destroy",0xf1106093,"FlxUIDropDownMenuCustom.destroy","FlxUIDropDownMenuCustom.hx",460,0xf5f4ce17)
HX_LOCAL_STACK_FRAME(_hx_pos_5585202bf1be20f8_471_showList,"FlxUIDropDownMenuCustom","showList",0xdb9cd242,"FlxUIDropDownMenuCustom.showList","FlxUIDropDownMenuCustom.hx",471,0xf5f4ce17)
HX_LOCAL_STACK_FRAME(_hx_pos_5585202bf1be20f8_489_onDropdown,"FlxUIDropDownMenuCustom","onDropdown",0x1b9f9a57,"FlxUIDropDownMenuCustom.onDropdown","FlxUIDropDownMenuCustom.hx",489,0xf5f4ce17)
HX_LOCAL_STACK_FRAME(_hx_pos_5585202bf1be20f8_493_onClickItem,"FlxUIDropDownMenuCustom","onClickItem",0xa8708875,"FlxUIDropDownMenuCustom.onClickItem","FlxUIDropDownMenuCustom.hx",493,0xf5f4ce17)
HX_LOCAL_STACK_FRAME(_hx_pos_5585202bf1be20f8_517_makeStrIdLabelArray,"FlxUIDropDownMenuCustom","makeStrIdLabelArray",0xcf6033dc,"FlxUIDropDownMenuCustom.makeStrIdLabelArray","FlxUIDropDownMenuCustom.hx",517,0xf5f4ce17)
HX_LOCAL_STACK_FRAME(_hx_pos_5585202bf1be20f8_151_boot,"FlxUIDropDownMenuCustom","boot",0xf35806f9,"FlxUIDropDownMenuCustom.boot","FlxUIDropDownMenuCustom.hx",151,0xf5f4ce17)

void FlxUIDropDownMenuCustom_obj::__construct(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::Array< ::Dynamic> DataList, ::Dynamic Callback, ::FlxUIDropDownHeader Header, ::flixel::addons::ui::FlxUI9SliceSprite DropPanel,::Array< ::Dynamic> ButtonList, ::Dynamic UIControlCallback){
            		Float X = __o_X.Default(0);
            		Float Y = __o_Y.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_5585202bf1be20f8_40_new)
HXLINE( 142)		this->dropDirection = ::FlxUIDropDownMenuDropDirection_obj::Down_dyn();
HXLINE( 128)		this->list = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  58)		this->canScroll = true;
HXLINE(  57)		this->currentScroll = 0;
HXLINE( 172)		super::__construct(X,Y);
HXLINE( 173)		this->callback = Callback;
HXLINE( 174)		this->header = Header;
HXLINE( 175)		this->dropPanel = DropPanel;
HXLINE( 177)		if (::hx::IsNull( this->header )) {
HXLINE( 178)			this->header =  ::FlxUIDropDownHeader_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            		}
HXLINE( 180)		if (::hx::IsNull( this->dropPanel )) {
HXLINE( 182)			Float rect = this->header->background->get_width();
HXDLIN( 182)			 ::openfl::geom::Rectangle rect1 =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,0,0,rect,this->header->background->get_height());
HXLINE( 183)			this->dropPanel =  ::flixel::addons::ui::FlxUI9SliceSprite_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(0) ),HX_("flixel/flixel-ui/img/box.png",dd,a4,cf,5b),rect1,::Array_obj< int >::fromData( _hx_array_data_5354d307_4,4),null(),null(),null(),null(),null(),null(),null(),null());
            		}
HXLINE( 186)		if (::hx::IsNotNull( DataList )) {
HXLINE( 188)			{
HXLINE( 188)				int _g = 0;
HXDLIN( 188)				int _g1 = DataList->length;
HXDLIN( 188)				while((_g < _g1)){
HXLINE( 188)					_g = (_g + 1);
HXDLIN( 188)					int i = (_g - 1);
HXLINE( 190)					 ::flixel::addons::ui::StrNameLabel data = DataList->__get(i).StaticCast<  ::flixel::addons::ui::StrNameLabel >();
HXLINE( 191)					::Array< ::Dynamic> _hx_tmp = this->list;
HXDLIN( 191)					_hx_tmp->push(this->makeListButton(i,data->label,data->name));
            				}
            			}
HXLINE( 193)			this->selectSomething(DataList->__get(0).StaticCast<  ::flixel::addons::ui::StrNameLabel >()->name,DataList->__get(0).StaticCast<  ::flixel::addons::ui::StrNameLabel >()->label);
            		}
            		else {
HXLINE( 195)			if (::hx::IsNotNull( ButtonList )) {
HXLINE( 197)				int _g = 0;
HXDLIN( 197)				while((_g < ButtonList->length)){
HXLINE( 197)					 ::flixel::addons::ui::FlxUIButton btn = ButtonList->__get(_g).StaticCast<  ::flixel::addons::ui::FlxUIButton >();
HXDLIN( 197)					_g = (_g + 1);
HXLINE( 199)					this->list->push(btn);
HXLINE( 200)					Float _hx_tmp = this->header->background->get_width();
HXDLIN( 200)					btn->resize(_hx_tmp,this->header->background->get_height());
HXLINE( 201)					btn->set_x(( (Float)(1) ));
            				}
            			}
            		}
HXLINE( 204)		this->updateButtonPositions();
HXLINE( 206)		 ::flixel::addons::ui::FlxUI9SliceSprite _hx_tmp = this->dropPanel;
HXDLIN( 206)		Float _hx_tmp1 = this->header->background->get_width();
HXDLIN( 206)		_hx_tmp->resize(_hx_tmp1,this->getPanelHeight());
HXLINE( 207)		this->dropPanel->set_visible(false);
HXLINE( 208)		this->add(this->dropPanel);
HXLINE( 210)		{
HXLINE( 210)			int _g = 0;
HXDLIN( 210)			::Array< ::Dynamic> _g1 = this->list;
HXDLIN( 210)			while((_g < _g1->length)){
HXLINE( 210)				 ::flixel::addons::ui::FlxUIButton btn = _g1->__get(_g).StaticCast<  ::flixel::addons::ui::FlxUIButton >();
HXDLIN( 210)				_g = (_g + 1);
HXLINE( 212)				this->add(btn);
HXLINE( 213)				btn->set_visible(false);
            			}
            		}
HXLINE( 217)		this->header->button->onUp->callback = this->onDropdown_dyn();
HXLINE( 218)		this->add(this->header);
            	}

Dynamic FlxUIDropDownMenuCustom_obj::__CreateEmpty() { return new FlxUIDropDownMenuCustom_obj; }

void *FlxUIDropDownMenuCustom_obj::_hx_vtable = 0;

Dynamic FlxUIDropDownMenuCustom_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxUIDropDownMenuCustom_obj > _hx_result = new FlxUIDropDownMenuCustom_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7]);
	return _hx_result;
}

bool FlxUIDropDownMenuCustom_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x398eb8dc) {
		if (inClassId<=(int)0x2c01639b) {
			if (inClassId<=(int)0x288ce903) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x288ce903;
			} else {
				return inClassId==(int)0x2c01639b;
			}
		} else {
			return inClassId==(int)0x398eb8dc;
		}
	} else {
		if (inClassId<=(int)0x7ccf8994) {
			return inClassId==(int)0x64c2f847 || inClassId==(int)0x7ccf8994;
		} else {
			return inClassId==(int)0x7dab0655;
		}
	}
}

static ::flixel::IFlxSprite_obj _hx_FlxUIDropDownMenuCustom__hx_flixel_IFlxSprite= {
	( bool (::hx::Object::*)(bool))&::FlxUIDropDownMenuCustom_obj::set_active,
	( bool (::hx::Object::*)(bool))&::FlxUIDropDownMenuCustom_obj::set_visible,
	( bool (::hx::Object::*)(bool))&::FlxUIDropDownMenuCustom_obj::set_alive,
	( bool (::hx::Object::*)(bool))&::FlxUIDropDownMenuCustom_obj::set_exists,
	( void (::hx::Object::*)())&::FlxUIDropDownMenuCustom_obj::draw,
	( void (::hx::Object::*)(Float))&::FlxUIDropDownMenuCustom_obj::update,
	( void (::hx::Object::*)())&::FlxUIDropDownMenuCustom_obj::destroy,
	( void (::hx::Object::*)())&::FlxUIDropDownMenuCustom_obj::kill,
	( void (::hx::Object::*)())&::FlxUIDropDownMenuCustom_obj::revive,
	( ::String (::hx::Object::*)())&::FlxUIDropDownMenuCustom_obj::toString,
	( Float (::hx::Object::*)(Float))&::FlxUIDropDownMenuCustom_obj::set_x,
	( Float (::hx::Object::*)(Float))&::FlxUIDropDownMenuCustom_obj::set_y,
	( Float (::hx::Object::*)(Float))&::FlxUIDropDownMenuCustom_obj::set_alpha,
	( Float (::hx::Object::*)(Float))&::FlxUIDropDownMenuCustom_obj::set_angle,
	( int (::hx::Object::*)(int))&::FlxUIDropDownMenuCustom_obj::set_facing,
	( bool (::hx::Object::*)(bool))&::FlxUIDropDownMenuCustom_obj::set_moves,
	( bool (::hx::Object::*)(bool))&::FlxUIDropDownMenuCustom_obj::set_immovable,
	( void (::hx::Object::*)(Float,Float))&::FlxUIDropDownMenuCustom_obj::reset,
	( void (::hx::Object::*)(::hx::Null< Float > ,::hx::Null< Float > ))&::FlxUIDropDownMenuCustom_obj::setPosition,
};

static ::flixel::IFlxBasic_obj _hx_FlxUIDropDownMenuCustom__hx_flixel_IFlxBasic= {
	( bool (::hx::Object::*)(bool))&::FlxUIDropDownMenuCustom_obj::set_active,
	( bool (::hx::Object::*)(bool))&::FlxUIDropDownMenuCustom_obj::set_visible,
	( bool (::hx::Object::*)(bool))&::FlxUIDropDownMenuCustom_obj::set_alive,
	( bool (::hx::Object::*)(bool))&::FlxUIDropDownMenuCustom_obj::set_exists,
	( void (::hx::Object::*)())&::FlxUIDropDownMenuCustom_obj::draw,
	( void (::hx::Object::*)(Float))&::FlxUIDropDownMenuCustom_obj::update,
	( void (::hx::Object::*)())&::FlxUIDropDownMenuCustom_obj::destroy,
	( void (::hx::Object::*)())&::FlxUIDropDownMenuCustom_obj::kill,
	( void (::hx::Object::*)())&::FlxUIDropDownMenuCustom_obj::revive,
	( ::String (::hx::Object::*)())&::FlxUIDropDownMenuCustom_obj::toString,
};

static ::flixel::addons::ui::interfaces::IFlxUIWidget_obj _hx_FlxUIDropDownMenuCustom__hx_flixel_addons_ui_interfaces_IFlxUIWidget= {
	( bool (::hx::Object::*)(bool))&::FlxUIDropDownMenuCustom_obj::set_active,
	( bool (::hx::Object::*)(bool))&::FlxUIDropDownMenuCustom_obj::set_visible,
	( bool (::hx::Object::*)(bool))&::FlxUIDropDownMenuCustom_obj::set_alive,
	( bool (::hx::Object::*)(bool))&::FlxUIDropDownMenuCustom_obj::set_exists,
	( void (::hx::Object::*)())&::FlxUIDropDownMenuCustom_obj::draw,
	( void (::hx::Object::*)(Float))&::FlxUIDropDownMenuCustom_obj::update,
	( void (::hx::Object::*)())&::FlxUIDropDownMenuCustom_obj::destroy,
	( void (::hx::Object::*)())&::FlxUIDropDownMenuCustom_obj::kill,
	( void (::hx::Object::*)())&::FlxUIDropDownMenuCustom_obj::revive,
	( ::String (::hx::Object::*)())&::FlxUIDropDownMenuCustom_obj::toString,
	( Float (::hx::Object::*)(Float))&::FlxUIDropDownMenuCustom_obj::set_x,
	( Float (::hx::Object::*)(Float))&::FlxUIDropDownMenuCustom_obj::set_y,
	( Float (::hx::Object::*)(Float))&::FlxUIDropDownMenuCustom_obj::set_alpha,
	( Float (::hx::Object::*)(Float))&::FlxUIDropDownMenuCustom_obj::set_angle,
	( int (::hx::Object::*)(int))&::FlxUIDropDownMenuCustom_obj::set_facing,
	( bool (::hx::Object::*)(bool))&::FlxUIDropDownMenuCustom_obj::set_moves,
	( bool (::hx::Object::*)(bool))&::FlxUIDropDownMenuCustom_obj::set_immovable,
	( void (::hx::Object::*)(Float,Float))&::FlxUIDropDownMenuCustom_obj::reset,
	( void (::hx::Object::*)(::hx::Null< Float > ,::hx::Null< Float > ))&::FlxUIDropDownMenuCustom_obj::setPosition,
	( Float (::hx::Object::*)())&::FlxUIDropDownMenuCustom_obj::get_width,
	( Float (::hx::Object::*)(Float))&::FlxUIDropDownMenuCustom_obj::set_width,
	( Float (::hx::Object::*)())&::FlxUIDropDownMenuCustom_obj::get_height,
	( Float (::hx::Object::*)(Float))&::FlxUIDropDownMenuCustom_obj::set_height,
};

static ::flixel::addons::ui::interfaces::IHasParams_obj _hx_FlxUIDropDownMenuCustom__hx_flixel_addons_ui_interfaces_IHasParams= {
	( ::cpp::VirtualArray (::hx::Object::*)(::cpp::VirtualArray))&::FlxUIDropDownMenuCustom_obj::set_params,
};

static ::flixel::addons::ui::interfaces::IFlxUIClickable_obj _hx_FlxUIDropDownMenuCustom__hx_flixel_addons_ui_interfaces_IFlxUIClickable= {
	( bool (::hx::Object::*)(bool))&::FlxUIDropDownMenuCustom_obj::set_skipButtonUpdate,
};

void *FlxUIDropDownMenuCustom_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x897c83aa: return &_hx_FlxUIDropDownMenuCustom__hx_flixel_IFlxSprite;
		case (int)0x284cfea9: return &_hx_FlxUIDropDownMenuCustom__hx_flixel_IFlxBasic;
		case (int)0x998525de: return &_hx_FlxUIDropDownMenuCustom__hx_flixel_addons_ui_interfaces_IFlxUIWidget;
		case (int)0x9e5db374: return &_hx_FlxUIDropDownMenuCustom__hx_flixel_addons_ui_interfaces_IHasParams;
		case (int)0x3e998408: return &_hx_FlxUIDropDownMenuCustom__hx_flixel_addons_ui_interfaces_IFlxUIClickable;
	}
	return super::_hx_getInterface(inHash);
}

bool FlxUIDropDownMenuCustom_obj::set_skipButtonUpdate(bool b){
            	HX_STACKFRAME(&_hx_pos_5585202bf1be20f8_45_set_skipButtonUpdate)
HXLINE(  46)		this->skipButtonUpdate = b;
HXLINE(  47)		this->header->button->set_skipButtonUpdate(b);
HXLINE(  48)		return b;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIDropDownMenuCustom_obj,set_skipButtonUpdate,return )

::String FlxUIDropDownMenuCustom_obj::get_selectedId(){
            	HX_STACKFRAME(&_hx_pos_5585202bf1be20f8_62_get_selectedId)
HXDLIN(  62)		return this->_selectedId;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxUIDropDownMenuCustom_obj,get_selectedId,return )

::String FlxUIDropDownMenuCustom_obj::set_selectedId(::String str){
            	HX_STACKFRAME(&_hx_pos_5585202bf1be20f8_66_set_selectedId)
HXLINE(  67)		if ((this->_selectedId == str)) {
HXLINE(  68)			return str;
            		}
HXLINE(  70)		int i = 0;
HXLINE(  71)		{
HXLINE(  71)			int _g = 0;
HXDLIN(  71)			::Array< ::Dynamic> _g1 = this->list;
HXDLIN(  71)			while((_g < _g1->length)){
HXLINE(  71)				 ::flixel::addons::ui::FlxUIButton btn = _g1->__get(_g).StaticCast<  ::flixel::addons::ui::FlxUIButton >();
HXDLIN(  71)				_g = (_g + 1);
HXLINE(  73)				bool _hx_tmp;
HXDLIN(  73)				if (::hx::IsNotNull( btn )) {
HXLINE(  73)					_hx_tmp = (btn->name == str);
            				}
            				else {
HXLINE(  73)					_hx_tmp = false;
            				}
HXDLIN(  73)				if (_hx_tmp) {
HXLINE(  75)					 ::flixel::addons::ui::FlxUIButton item = this->list->__get(i).StaticCast<  ::flixel::addons::ui::FlxUIButton >();
HXLINE(  76)					this->_selectedId = str;
HXLINE(  77)					if (::hx::IsNotNull( item->label )) {
HXLINE(  79)						this->_selectedLabel = ( ( ::flixel::text::FlxText)(item->label) )->text;
HXLINE(  80)						this->header->text->set_text(( ( ::flixel::text::FlxText)(item->label) )->text);
            					}
            					else {
HXLINE(  84)						this->_selectedLabel = HX_("",00,00,00,00);
HXLINE(  85)						this->header->text->set_text(HX_("",00,00,00,00));
            					}
HXLINE(  87)					return str;
            				}
HXLINE(  89)				i = (i + 1);
            			}
            		}
HXLINE(  91)		return str;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIDropDownMenuCustom_obj,set_selectedId,return )

::String FlxUIDropDownMenuCustom_obj::get_selectedLabel(){
            	HX_STACKFRAME(&_hx_pos_5585202bf1be20f8_96_get_selectedLabel)
HXDLIN(  96)		return this->_selectedLabel;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxUIDropDownMenuCustom_obj,get_selectedLabel,return )

::String FlxUIDropDownMenuCustom_obj::set_selectedLabel(::String str){
            	HX_STACKFRAME(&_hx_pos_5585202bf1be20f8_100_set_selectedLabel)
HXLINE( 101)		if ((this->_selectedLabel == str)) {
HXLINE( 102)			return str;
            		}
HXLINE( 104)		int i = 0;
HXLINE( 105)		{
HXLINE( 105)			int _g = 0;
HXDLIN( 105)			::Array< ::Dynamic> _g1 = this->list;
HXDLIN( 105)			while((_g < _g1->length)){
HXLINE( 105)				 ::flixel::addons::ui::FlxUIButton btn = _g1->__get(_g).StaticCast<  ::flixel::addons::ui::FlxUIButton >();
HXDLIN( 105)				_g = (_g + 1);
HXLINE( 107)				if ((( ( ::flixel::text::FlxText)(btn->label) )->text == str)) {
HXLINE( 109)					 ::flixel::addons::ui::FlxUIButton item = this->list->__get(i).StaticCast<  ::flixel::addons::ui::FlxUIButton >();
HXLINE( 110)					this->_selectedId = item->name;
HXLINE( 111)					this->_selectedLabel = str;
HXLINE( 112)					this->header->text->set_text(str);
HXLINE( 113)					return str;
            				}
HXLINE( 115)				i = (i + 1);
            			}
            		}
HXLINE( 117)		return str;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIDropDownMenuCustom_obj,set_selectedLabel,return )

::cpp::VirtualArray FlxUIDropDownMenuCustom_obj::set_params(::cpp::VirtualArray p){
            	HX_STACKFRAME(&_hx_pos_5585202bf1be20f8_139_set_params)
HXDLIN( 139)		return (this->params = p);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIDropDownMenuCustom_obj,set_params,return )

 ::FlxUIDropDownMenuDropDirection FlxUIDropDownMenuCustom_obj::set_dropDirection( ::FlxUIDropDownMenuDropDirection dropDirection){
            	HX_STACKFRAME(&_hx_pos_5585202bf1be20f8_145_set_dropDirection)
HXLINE( 146)		this->dropDirection = dropDirection;
HXLINE( 147)		this->updateButtonPositions();
HXLINE( 148)		return dropDirection;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIDropDownMenuCustom_obj,set_dropDirection,return )

void FlxUIDropDownMenuCustom_obj::updateButtonPositions(){
            	HX_STACKFRAME(&_hx_pos_5585202bf1be20f8_222_updateButtonPositions)
HXLINE( 223)		Float buttonHeight = this->header->background->get_height();
HXLINE( 224)		this->dropPanel->set_y(this->header->background->y);
HXLINE( 225)		if (this->dropsUp()) {
HXLINE( 226)			 ::flixel::addons::ui::FlxUI9SliceSprite fh = this->dropPanel;
HXDLIN( 226)			Float fh1 = fh->y;
HXDLIN( 226)			fh->set_y((fh1 - this->getPanelHeight()));
            		}
            		else {
HXLINE( 228)			 ::flixel::addons::ui::FlxUI9SliceSprite fh = this->dropPanel;
HXDLIN( 228)			fh->set_y((fh->y + buttonHeight));
            		}
HXLINE( 230)		Float offset = this->dropPanel->y;
HXLINE( 231)		{
HXLINE( 231)			int _g = 0;
HXDLIN( 231)			int _g1 = this->currentScroll;
HXDLIN( 231)			while((_g < _g1)){
HXLINE( 231)				_g = (_g + 1);
HXDLIN( 231)				int i = (_g - 1);
HXLINE( 232)				 ::flixel::addons::ui::FlxUIButton button = this->list->__get(i).StaticCast<  ::flixel::addons::ui::FlxUIButton >();
HXLINE( 233)				if (::hx::IsNotNull( button )) {
HXLINE( 234)					button->set_y(( (Float)(-99999) ));
            				}
            			}
            		}
HXLINE( 237)		{
HXLINE( 237)			int _g2 = this->currentScroll;
HXDLIN( 237)			int _g3 = this->list->length;
HXDLIN( 237)			while((_g2 < _g3)){
HXLINE( 237)				_g2 = (_g2 + 1);
HXDLIN( 237)				int i = (_g2 - 1);
HXLINE( 239)				 ::flixel::addons::ui::FlxUIButton button = this->list->__get(i).StaticCast<  ::flixel::addons::ui::FlxUIButton >();
HXLINE( 240)				if (::hx::IsNotNull( button )) {
HXLINE( 241)					button->set_y(offset);
HXLINE( 242)					offset = (offset + buttonHeight);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxUIDropDownMenuCustom_obj,updateButtonPositions,(void))

bool FlxUIDropDownMenuCustom_obj::set_visible(bool Value){
            	HX_STACKFRAME(&_hx_pos_5585202bf1be20f8_248_set_visible)
HXLINE( 249)		bool vDropPanel = this->dropPanel->visible;
HXLINE( 250)		::Array< bool > vButtons = ::Array_obj< bool >::__new(0);
HXLINE( 251)		{
HXLINE( 251)			int _g = 0;
HXDLIN( 251)			int _g1 = this->list->length;
HXDLIN( 251)			while((_g < _g1)){
HXLINE( 251)				_g = (_g + 1);
HXDLIN( 251)				int i = (_g - 1);
HXLINE( 253)				if (::hx::IsNotNull( this->list->__get(i).StaticCast<  ::flixel::addons::ui::FlxUIButton >() )) {
HXLINE( 255)					vButtons->push(this->list->__get(i).StaticCast<  ::flixel::addons::ui::FlxUIButton >()->visible);
            				}
            				else {
HXLINE( 259)					vButtons->push(false);
            				}
            			}
            		}
HXLINE( 262)		this->super::set_visible(Value);
HXLINE( 263)		this->dropPanel->set_visible(vDropPanel);
HXLINE( 264)		{
HXLINE( 264)			int _g2 = 0;
HXDLIN( 264)			int _g3 = this->list->length;
HXDLIN( 264)			while((_g2 < _g3)){
HXLINE( 264)				_g2 = (_g2 + 1);
HXDLIN( 264)				int i = (_g2 - 1);
HXLINE( 266)				if (::hx::IsNotNull( this->list->__get(i).StaticCast<  ::flixel::addons::ui::FlxUIButton >() )) {
HXLINE( 268)					this->list->__get(i).StaticCast<  ::flixel::addons::ui::FlxUIButton >()->set_visible(vButtons->__get(i));
            				}
            			}
            		}
HXLINE( 271)		return Value;
            	}


bool FlxUIDropDownMenuCustom_obj::dropsUp(){
            	HX_STACKFRAME(&_hx_pos_5585202bf1be20f8_276_dropsUp)
HXDLIN( 276)		if (::hx::IsPointerNotEq( this->dropDirection,::FlxUIDropDownMenuDropDirection_obj::Up_dyn() )) {
HXDLIN( 276)			if (::hx::IsPointerEq( this->dropDirection,::FlxUIDropDownMenuDropDirection_obj::Automatic_dyn() )) {
HXDLIN( 276)				return this->exceedsHeight();
            			}
            			else {
HXDLIN( 276)				return false;
            			}
            		}
            		else {
HXDLIN( 276)			return true;
            		}
HXDLIN( 276)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxUIDropDownMenuCustom_obj,dropsUp,return )

bool FlxUIDropDownMenuCustom_obj::exceedsHeight(){
            	HX_STACKFRAME(&_hx_pos_5585202bf1be20f8_281_exceedsHeight)
HXDLIN( 281)		Float _hx_tmp = this->y;
HXDLIN( 281)		Float _hx_tmp1 = (_hx_tmp + this->getPanelHeight());
HXDLIN( 281)		Float _hx_tmp2 = (_hx_tmp1 + this->header->background->get_height());
HXDLIN( 281)		return (_hx_tmp2 > ::flixel::FlxG_obj::height);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxUIDropDownMenuCustom_obj,exceedsHeight,return )

Float FlxUIDropDownMenuCustom_obj::getPanelHeight(){
            	HX_STACKFRAME(&_hx_pos_5585202bf1be20f8_286_getPanelHeight)
HXDLIN( 286)		int _hx_tmp = this->list->length;
HXDLIN( 286)		return (( (Float)(_hx_tmp) ) * this->header->background->get_height());
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxUIDropDownMenuCustom_obj,getPanelHeight,return )

void FlxUIDropDownMenuCustom_obj::setData(::Array< ::Dynamic> DataList){
            	HX_STACKFRAME(&_hx_pos_5585202bf1be20f8_294_setData)
HXLINE( 295)		int i = 0;
HXLINE( 297)		if (::hx::IsNotNull( DataList )) {
HXLINE( 299)			{
HXLINE( 299)				int _g = 0;
HXDLIN( 299)				while((_g < DataList->length)){
HXLINE( 299)					 ::flixel::addons::ui::StrNameLabel data = DataList->__get(_g).StaticCast<  ::flixel::addons::ui::StrNameLabel >();
HXDLIN( 299)					_g = (_g + 1);
HXLINE( 301)					bool recycled = false;
HXLINE( 302)					if (::hx::IsNotNull( this->list )) {
HXLINE( 304)						if ((i <= (this->list->length - 1))) {
HXLINE( 306)							 ::flixel::addons::ui::FlxUIButton btn = this->list->__get(i).StaticCast<  ::flixel::addons::ui::FlxUIButton >();
HXLINE( 307)							if (::hx::IsNotNull( btn )) {
HXLINE( 309)								( ( ::flixel::text::FlxText)(btn->label) )->set_text(data->label);
HXLINE( 310)								this->list->__get(i).StaticCast<  ::flixel::addons::ui::FlxUIButton >()->name = data->name;
HXLINE( 311)								recycled = true;
            							}
            						}
            					}
            					else {
HXLINE( 317)						this->list = ::Array_obj< ::Dynamic>::__new(0);
            					}
HXLINE( 319)					if (!(recycled)) {
HXLINE( 321)						 ::flixel::addons::ui::FlxUIButton t = this->makeListButton(i,data->label,data->name);
HXLINE( 322)						this->list->push(t);
HXLINE( 323)						this->add(t);
HXLINE( 324)						t->set_visible(false);
            					}
HXLINE( 326)					i = (i + 1);
            				}
            			}
HXLINE( 330)			if ((this->list->length > DataList->length)) {
HXLINE( 332)				int _g = DataList->length;
HXDLIN( 332)				int _g1 = this->list->length;
HXDLIN( 332)				while((_g < _g1)){
HXLINE( 332)					_g = (_g + 1);
HXDLIN( 332)					int j = (_g - 1);
HXLINE( 334)					 ::flixel::addons::ui::FlxUIButton b = this->list->pop().StaticCast<  ::flixel::addons::ui::FlxUIButton >();
HXLINE( 335)					b->set_visible(false);
HXLINE( 336)					b->set_active(false);
HXLINE( 337)					this->remove(b,true);
HXLINE( 338)					b->destroy();
HXLINE( 339)					b = null();
            				}
            			}
HXLINE( 343)			this->selectSomething(DataList->__get(0).StaticCast<  ::flixel::addons::ui::StrNameLabel >()->name,DataList->__get(0).StaticCast<  ::flixel::addons::ui::StrNameLabel >()->label);
            		}
HXLINE( 346)		 ::flixel::addons::ui::FlxUI9SliceSprite _hx_tmp = this->dropPanel;
HXDLIN( 346)		Float _hx_tmp1 = this->header->background->get_width();
HXDLIN( 346)		_hx_tmp->resize(_hx_tmp1,this->getPanelHeight());
HXLINE( 347)		this->updateButtonPositions();
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIDropDownMenuCustom_obj,setData,(void))

void FlxUIDropDownMenuCustom_obj::selectSomething(::String name,::String label){
            	HX_STACKFRAME(&_hx_pos_5585202bf1be20f8_351_selectSomething)
HXLINE( 352)		this->header->text->set_text(label);
HXLINE( 353)		this->set_selectedId(name);
HXLINE( 354)		this->set_selectedLabel(label);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxUIDropDownMenuCustom_obj,selectSomething,(void))

 ::flixel::addons::ui::FlxUIButton FlxUIDropDownMenuCustom_obj::makeListButton(int i,::String Label,::String Name){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,_g,int,i1) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_5585202bf1be20f8_361_makeListButton)
HXLINE( 361)			_g(i1);
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_GC_STACKFRAME(&_hx_pos_5585202bf1be20f8_358_makeListButton)
HXLINE( 359)		 ::flixel::addons::ui::FlxUIButton t =  ::flixel::addons::ui::FlxUIButton_obj::__alloc( HX_CTX ,0,0,Label,null(),null(),null(),null());
HXLINE( 360)		t->broadcastToFlxUI = false;
HXLINE( 361)		 ::Dynamic _g = this->onClickItem_dyn();
HXDLIN( 361)		int i1 = i;
HXDLIN( 361)		 ::Dynamic _hx_tmp =  ::Dynamic(new _hx_Closure_0(_g,i1));
HXDLIN( 361)		t->onUp->callback = _hx_tmp;
HXLINE( 363)		t->name = Name;
HXLINE( 365)		int _hx_tmp1 = ::Std_obj::_hx_int(this->header->background->get_width());
HXDLIN( 365)		t->loadGraphicSlice9(::cpp::VirtualArray_obj::__new(3)->init(0,HX_("flixel/flixel-ui/img/invis.png",ad,69,e0,09))->init(1,HX_("flixel/flixel-ui/img/hilight.png",87,4d,54,73))->init(2,HX_("flixel/flixel-ui/img/hilight.png",87,4d,54,73)),_hx_tmp1,::Std_obj::_hx_int(this->header->background->get_height()),::Array_obj< ::Dynamic>::__new(3)->init(0,::Array_obj< int >::fromData( _hx_array_data_5354d307_30,4))->init(1,::Array_obj< int >::fromData( _hx_array_data_5354d307_31,4))->init(2,::Array_obj< int >::fromData( _hx_array_data_5354d307_32,4)),0,null(),null(),null(),null(),null());
HXLINE( 367)		 ::flixel::math::FlxPoint fh = t->labelOffsets->__get(2).StaticCast<  ::flixel::math::FlxPoint >();
HXDLIN( 367)		fh->set_y((fh->y - ( (Float)(1) )));
HXLINE( 369)		t->up_color = -16777216;
HXLINE( 370)		t->over_color = -1;
HXLINE( 371)		t->down_color = -1;
HXLINE( 373)		Float _hx_tmp2 = (this->header->background->get_width() - ( (Float)(2) ));
HXDLIN( 373)		t->resize(_hx_tmp2,(this->header->background->get_height() - ( (Float)(1) )));
HXLINE( 375)		( ( ::flixel::text::FlxText)(t->label) )->set_alignment(HX_("left",07,08,b0,47));
HXLINE( 376)		t->autoCenterLabel();
HXLINE( 377)		t->set_x(( (Float)(1) ));
HXLINE( 379)		{
HXLINE( 379)			int _g1 = 0;
HXDLIN( 379)			::Array< ::Dynamic> _g2 = t->labelOffsets;
HXDLIN( 379)			while((_g1 < _g2->length)){
HXLINE( 379)				 ::flixel::math::FlxPoint offset = _g2->__get(_g1).StaticCast<  ::flixel::math::FlxPoint >();
HXDLIN( 379)				_g1 = (_g1 + 1);
HXLINE( 381)				offset->set_x((offset->x + 2));
            			}
            		}
HXLINE( 384)		return t;
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxUIDropDownMenuCustom_obj,makeListButton,return )

void FlxUIDropDownMenuCustom_obj::changeLabelByIndex(int i,::String NewLabel){
            	HX_STACKFRAME(&_hx_pos_5585202bf1be20f8_391_changeLabelByIndex)
HXLINE( 392)		 ::flixel::addons::ui::FlxUIButton btn = this->getBtnByIndex(i);
HXLINE( 393)		bool _hx_tmp;
HXDLIN( 393)		if (::hx::IsNotNull( btn )) {
HXLINE( 393)			_hx_tmp = ::hx::IsNotNull( btn->label );
            		}
            		else {
HXLINE( 393)			_hx_tmp = false;
            		}
HXDLIN( 393)		if (_hx_tmp) {
HXLINE( 395)			( ( ::flixel::text::FlxText)(btn->label) )->set_text(NewLabel);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxUIDropDownMenuCustom_obj,changeLabelByIndex,(void))

void FlxUIDropDownMenuCustom_obj::changeLabelById(::String name,::String NewLabel){
            	HX_STACKFRAME(&_hx_pos_5585202bf1be20f8_400_changeLabelById)
HXLINE( 401)		 ::flixel::addons::ui::FlxUIButton btn = this->getBtnById(name);
HXLINE( 402)		bool _hx_tmp;
HXDLIN( 402)		if (::hx::IsNotNull( btn )) {
HXLINE( 402)			_hx_tmp = ::hx::IsNotNull( btn->label );
            		}
            		else {
HXLINE( 402)			_hx_tmp = false;
            		}
HXDLIN( 402)		if (_hx_tmp) {
HXLINE( 404)			( ( ::flixel::text::FlxText)(btn->label) )->set_text(NewLabel);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxUIDropDownMenuCustom_obj,changeLabelById,(void))

 ::flixel::addons::ui::FlxUIButton FlxUIDropDownMenuCustom_obj::getBtnByIndex(int i){
            	HX_STACKFRAME(&_hx_pos_5585202bf1be20f8_409_getBtnByIndex)
HXLINE( 410)		bool _hx_tmp;
HXDLIN( 410)		if ((i >= 0)) {
HXLINE( 410)			_hx_tmp = (i < this->list->length);
            		}
            		else {
HXLINE( 410)			_hx_tmp = false;
            		}
HXDLIN( 410)		if (_hx_tmp) {
HXLINE( 412)			return this->list->__get(i).StaticCast<  ::flixel::addons::ui::FlxUIButton >();
            		}
HXLINE( 414)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIDropDownMenuCustom_obj,getBtnByIndex,return )

 ::flixel::addons::ui::FlxUIButton FlxUIDropDownMenuCustom_obj::getBtnById(::String name){
            	HX_STACKFRAME(&_hx_pos_5585202bf1be20f8_418_getBtnById)
HXLINE( 419)		{
HXLINE( 419)			int _g = 0;
HXDLIN( 419)			::Array< ::Dynamic> _g1 = this->list;
HXDLIN( 419)			while((_g < _g1->length)){
HXLINE( 419)				 ::flixel::addons::ui::FlxUIButton btn = _g1->__get(_g).StaticCast<  ::flixel::addons::ui::FlxUIButton >();
HXDLIN( 419)				_g = (_g + 1);
HXLINE( 421)				if ((btn->name == name)) {
HXLINE( 423)					return btn;
            				}
            			}
            		}
HXLINE( 426)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIDropDownMenuCustom_obj,getBtnById,return )

void FlxUIDropDownMenuCustom_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_5585202bf1be20f8_430_update)
HXLINE( 431)		this->super::update(elapsed);
HXLINE( 434)		if (this->dropPanel->visible) {
HXLINE( 436)			bool _hx_tmp;
HXDLIN( 436)			if ((this->list->length > 1)) {
HXLINE( 436)				_hx_tmp = this->canScroll;
            			}
            			else {
HXLINE( 436)				_hx_tmp = false;
            			}
HXDLIN( 436)			if (_hx_tmp) {
HXLINE( 437)				bool _hx_tmp;
HXDLIN( 437)				if ((::flixel::FlxG_obj::mouse->wheel <= 0)) {
HXLINE( 437)					 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 437)					_hx_tmp = _this->keyManager->checkStatus(38,_this->status);
            				}
            				else {
HXLINE( 437)					_hx_tmp = true;
            				}
HXDLIN( 437)				if (_hx_tmp) {
HXLINE( 439)					--this->currentScroll;
HXLINE( 440)					if ((this->currentScroll < 0)) {
HXLINE( 440)						this->currentScroll = 0;
            					}
HXLINE( 441)					this->updateButtonPositions();
            				}
            				else {
HXLINE( 443)					bool _hx_tmp;
HXDLIN( 443)					if ((::flixel::FlxG_obj::mouse->wheel >= 0)) {
HXLINE( 443)						 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 443)						_hx_tmp = _this->keyManager->checkStatus(40,_this->status);
            					}
            					else {
HXLINE( 443)						_hx_tmp = true;
            					}
HXDLIN( 443)					if (_hx_tmp) {
HXLINE( 445)						this->currentScroll++;
HXLINE( 446)						if ((this->currentScroll >= this->list->length)) {
HXLINE( 446)							this->currentScroll = (this->list->length - 1);
            						}
HXLINE( 447)						this->updateButtonPositions();
            					}
            				}
            			}
HXLINE( 451)			bool _hx_tmp1;
HXDLIN( 451)			if ((::flixel::FlxG_obj::mouse->_leftButton->current == 2)) {
HXLINE( 451)				_hx_tmp1 = !(::flixel::FlxG_obj::mouse->overlaps(::hx::ObjectPtr<OBJ_>(this),null()));
            			}
            			else {
HXLINE( 451)				_hx_tmp1 = false;
            			}
HXDLIN( 451)			if (_hx_tmp1) {
HXLINE( 453)				this->showList(false);
            			}
            		}
            	}


void FlxUIDropDownMenuCustom_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_5585202bf1be20f8_460_destroy)
HXLINE( 461)		this->super::destroy();
HXLINE( 463)		this->dropPanel = ( ( ::flixel::addons::ui::FlxUI9SliceSprite)(::flixel::util::FlxDestroyUtil_obj::destroy(this->dropPanel)) );
HXLINE( 465)		this->list = ::flixel::util::FlxDestroyUtil_obj::destroyArray(this->list);
HXLINE( 467)		this->callback = null();
            	}


void FlxUIDropDownMenuCustom_obj::showList(bool b){
            	HX_STACKFRAME(&_hx_pos_5585202bf1be20f8_471_showList)
HXLINE( 472)		{
HXLINE( 472)			int _g = 0;
HXDLIN( 472)			::Array< ::Dynamic> _g1 = this->list;
HXDLIN( 472)			while((_g < _g1->length)){
HXLINE( 472)				 ::flixel::addons::ui::FlxUIButton button = _g1->__get(_g).StaticCast<  ::flixel::addons::ui::FlxUIButton >();
HXDLIN( 472)				_g = (_g + 1);
HXLINE( 474)				button->set_visible(b);
HXLINE( 475)				button->set_active(b);
            			}
            		}
HXLINE( 478)		this->dropPanel->set_visible(b);
HXLINE( 479)		if ((this->currentScroll != 0)) {
HXLINE( 480)			this->currentScroll = 0;
HXLINE( 481)			this->updateButtonPositions();
            		}
HXLINE( 484)		::flixel::addons::ui::FlxUI_obj::forceFocus(b,::hx::ObjectPtr<OBJ_>(this));
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIDropDownMenuCustom_obj,showList,(void))

void FlxUIDropDownMenuCustom_obj::onDropdown(){
            	HX_STACKFRAME(&_hx_pos_5585202bf1be20f8_489_onDropdown)
HXDLIN( 489)		if (this->dropPanel->visible) {
HXDLIN( 489)			this->showList(false);
            		}
            		else {
HXDLIN( 489)			this->showList(true);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxUIDropDownMenuCustom_obj,onDropdown,(void))

void FlxUIDropDownMenuCustom_obj::onClickItem(int i){
            	HX_STACKFRAME(&_hx_pos_5585202bf1be20f8_493_onClickItem)
HXLINE( 494)		 ::flixel::addons::ui::FlxUIButton item = this->list->__get(i).StaticCast<  ::flixel::addons::ui::FlxUIButton >();
HXLINE( 495)		this->selectSomething(item->name,( ( ::flixel::text::FlxText)(item->label) )->text);
HXLINE( 496)		this->showList(false);
HXLINE( 498)		if (::hx::IsNotNull( this->callback )) {
HXLINE( 500)			this->callback(item->name);
            		}
HXLINE( 503)		if (this->broadcastToFlxUI) {
HXLINE( 505)			::flixel::addons::ui::FlxUI_obj::event(HX_("click_dropdown",28,26,a9,27),::hx::ObjectPtr<OBJ_>(this),item->name,this->params);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIDropDownMenuCustom_obj,onClickItem,(void))

::String FlxUIDropDownMenuCustom_obj::CLICK_EVENT;

::Array< ::Dynamic> FlxUIDropDownMenuCustom_obj::makeStrIdLabelArray(::Array< ::String > StringArray,::hx::Null< bool >  __o_UseIndexID){
            		bool UseIndexID = __o_UseIndexID.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_5585202bf1be20f8_517_makeStrIdLabelArray)
HXLINE( 518)		::Array< ::Dynamic> strIdArray = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 519)		{
HXLINE( 519)			int _g = 0;
HXDLIN( 519)			int _g1 = StringArray->length;
HXDLIN( 519)			while((_g < _g1)){
HXLINE( 519)				_g = (_g + 1);
HXDLIN( 519)				int i = (_g - 1);
HXLINE( 521)				::String ID = StringArray->__get(i);
HXLINE( 522)				if (UseIndexID) {
HXLINE( 524)					ID = ::Std_obj::string(i);
            				}
HXLINE( 526)				strIdArray[i] =  ::flixel::addons::ui::StrNameLabel_obj::__alloc( HX_CTX ,ID,StringArray->__get(i));
            			}
            		}
HXLINE( 528)		return strIdArray;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxUIDropDownMenuCustom_obj,makeStrIdLabelArray,return )


::hx::ObjectPtr< FlxUIDropDownMenuCustom_obj > FlxUIDropDownMenuCustom_obj::__new(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::Array< ::Dynamic> DataList, ::Dynamic Callback, ::FlxUIDropDownHeader Header, ::flixel::addons::ui::FlxUI9SliceSprite DropPanel,::Array< ::Dynamic> ButtonList, ::Dynamic UIControlCallback) {
	::hx::ObjectPtr< FlxUIDropDownMenuCustom_obj > __this = new FlxUIDropDownMenuCustom_obj();
	__this->__construct(__o_X,__o_Y,DataList,Callback,Header,DropPanel,ButtonList,UIControlCallback);
	return __this;
}

::hx::ObjectPtr< FlxUIDropDownMenuCustom_obj > FlxUIDropDownMenuCustom_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::Array< ::Dynamic> DataList, ::Dynamic Callback, ::FlxUIDropDownHeader Header, ::flixel::addons::ui::FlxUI9SliceSprite DropPanel,::Array< ::Dynamic> ButtonList, ::Dynamic UIControlCallback) {
	FlxUIDropDownMenuCustom_obj *__this = (FlxUIDropDownMenuCustom_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxUIDropDownMenuCustom_obj), true, "FlxUIDropDownMenuCustom"));
	*(void **)__this = FlxUIDropDownMenuCustom_obj::_hx_vtable;
	__this->__construct(__o_X,__o_Y,DataList,Callback,Header,DropPanel,ButtonList,UIControlCallback);
	return __this;
}

FlxUIDropDownMenuCustom_obj::FlxUIDropDownMenuCustom_obj()
{
}

void FlxUIDropDownMenuCustom_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxUIDropDownMenuCustom);
	HX_MARK_MEMBER_NAME(skipButtonUpdate,"skipButtonUpdate");
	HX_MARK_MEMBER_NAME(_selectedId,"_selectedId");
	HX_MARK_MEMBER_NAME(_selectedLabel,"_selectedLabel");
	HX_MARK_MEMBER_NAME(currentScroll,"currentScroll");
	HX_MARK_MEMBER_NAME(canScroll,"canScroll");
	HX_MARK_MEMBER_NAME(header,"header");
	HX_MARK_MEMBER_NAME(list,"list");
	HX_MARK_MEMBER_NAME(dropPanel,"dropPanel");
	HX_MARK_MEMBER_NAME(params,"params");
	HX_MARK_MEMBER_NAME(dropDirection,"dropDirection");
	HX_MARK_MEMBER_NAME(callback,"callback");
	 ::flixel::addons::ui::FlxUIGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxUIDropDownMenuCustom_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(skipButtonUpdate,"skipButtonUpdate");
	HX_VISIT_MEMBER_NAME(_selectedId,"_selectedId");
	HX_VISIT_MEMBER_NAME(_selectedLabel,"_selectedLabel");
	HX_VISIT_MEMBER_NAME(currentScroll,"currentScroll");
	HX_VISIT_MEMBER_NAME(canScroll,"canScroll");
	HX_VISIT_MEMBER_NAME(header,"header");
	HX_VISIT_MEMBER_NAME(list,"list");
	HX_VISIT_MEMBER_NAME(dropPanel,"dropPanel");
	HX_VISIT_MEMBER_NAME(params,"params");
	HX_VISIT_MEMBER_NAME(dropDirection,"dropDirection");
	HX_VISIT_MEMBER_NAME(callback,"callback");
	 ::flixel::addons::ui::FlxUIGroup_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxUIDropDownMenuCustom_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { return ::hx::Val( list ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"header") ) { return ::hx::Val( header ); }
		if (HX_FIELD_EQ(inName,"params") ) { return ::hx::Val( params ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dropsUp") ) { return ::hx::Val( dropsUp_dyn() ); }
		if (HX_FIELD_EQ(inName,"setData") ) { return ::hx::Val( setData_dyn() ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"callback") ) { return ::hx::Val( callback ); }
		if (HX_FIELD_EQ(inName,"showList") ) { return ::hx::Val( showList_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"canScroll") ) { return ::hx::Val( canScroll ); }
		if (HX_FIELD_EQ(inName,"dropPanel") ) { return ::hx::Val( dropPanel ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"selectedId") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_selectedId() ); }
		if (HX_FIELD_EQ(inName,"set_params") ) { return ::hx::Val( set_params_dyn() ); }
		if (HX_FIELD_EQ(inName,"getBtnById") ) { return ::hx::Val( getBtnById_dyn() ); }
		if (HX_FIELD_EQ(inName,"onDropdown") ) { return ::hx::Val( onDropdown_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_selectedId") ) { return ::hx::Val( _selectedId ); }
		if (HX_FIELD_EQ(inName,"set_visible") ) { return ::hx::Val( set_visible_dyn() ); }
		if (HX_FIELD_EQ(inName,"onClickItem") ) { return ::hx::Val( onClickItem_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"selectedLabel") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_selectedLabel() ); }
		if (HX_FIELD_EQ(inName,"currentScroll") ) { return ::hx::Val( currentScroll ); }
		if (HX_FIELD_EQ(inName,"dropDirection") ) { return ::hx::Val( dropDirection ); }
		if (HX_FIELD_EQ(inName,"exceedsHeight") ) { return ::hx::Val( exceedsHeight_dyn() ); }
		if (HX_FIELD_EQ(inName,"getBtnByIndex") ) { return ::hx::Val( getBtnByIndex_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_selectedLabel") ) { return ::hx::Val( _selectedLabel ); }
		if (HX_FIELD_EQ(inName,"get_selectedId") ) { return ::hx::Val( get_selectedId_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_selectedId") ) { return ::hx::Val( set_selectedId_dyn() ); }
		if (HX_FIELD_EQ(inName,"getPanelHeight") ) { return ::hx::Val( getPanelHeight_dyn() ); }
		if (HX_FIELD_EQ(inName,"makeListButton") ) { return ::hx::Val( makeListButton_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"selectSomething") ) { return ::hx::Val( selectSomething_dyn() ); }
		if (HX_FIELD_EQ(inName,"changeLabelById") ) { return ::hx::Val( changeLabelById_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"skipButtonUpdate") ) { return ::hx::Val( skipButtonUpdate ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_selectedLabel") ) { return ::hx::Val( get_selectedLabel_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_selectedLabel") ) { return ::hx::Val( set_selectedLabel_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_dropDirection") ) { return ::hx::Val( set_dropDirection_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"changeLabelByIndex") ) { return ::hx::Val( changeLabelByIndex_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"set_skipButtonUpdate") ) { return ::hx::Val( set_skipButtonUpdate_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"updateButtonPositions") ) { return ::hx::Val( updateButtonPositions_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxUIDropDownMenuCustom_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 19:
		if (HX_FIELD_EQ(inName,"makeStrIdLabelArray") ) { outValue = makeStrIdLabelArray_dyn(); return true; }
	}
	return false;
}

::hx::Val FlxUIDropDownMenuCustom_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { list=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"header") ) { header=inValue.Cast<  ::FlxUIDropDownHeader >(); return inValue; }
		if (HX_FIELD_EQ(inName,"params") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_params(inValue.Cast< ::cpp::VirtualArray >()) );params=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"callback") ) { callback=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"canScroll") ) { canScroll=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dropPanel") ) { dropPanel=inValue.Cast<  ::flixel::addons::ui::FlxUI9SliceSprite >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"selectedId") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_selectedId(inValue.Cast< ::String >()) ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_selectedId") ) { _selectedId=inValue.Cast< ::String >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"selectedLabel") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_selectedLabel(inValue.Cast< ::String >()) ); }
		if (HX_FIELD_EQ(inName,"currentScroll") ) { currentScroll=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dropDirection") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_dropDirection(inValue.Cast<  ::FlxUIDropDownMenuDropDirection >()) );dropDirection=inValue.Cast<  ::FlxUIDropDownMenuDropDirection >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_selectedLabel") ) { _selectedLabel=inValue.Cast< ::String >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"skipButtonUpdate") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_skipButtonUpdate(inValue.Cast< bool >()) );skipButtonUpdate=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxUIDropDownMenuCustom_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("skipButtonUpdate",ba,02,f2,13));
	outFields->push(HX_("selectedId",16,f7,d0,c6));
	outFields->push(HX_("selectedLabel",99,e9,f0,65));
	outFields->push(HX_("_selectedId",35,c4,5a,99));
	outFields->push(HX_("_selectedLabel",da,d9,42,a4));
	outFields->push(HX_("currentScroll",26,59,c1,2a));
	outFields->push(HX_("canScroll",3d,2c,ab,99));
	outFields->push(HX_("header",8d,09,00,fd));
	outFields->push(HX_("list",5e,1c,b3,47));
	outFields->push(HX_("dropPanel",55,a8,0a,ff));
	outFields->push(HX_("params",46,fb,7a,ed));
	outFields->push(HX_("dropDirection",10,0c,88,39));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxUIDropDownMenuCustom_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(FlxUIDropDownMenuCustom_obj,skipButtonUpdate),HX_("skipButtonUpdate",ba,02,f2,13)},
	{::hx::fsString,(int)offsetof(FlxUIDropDownMenuCustom_obj,_selectedId),HX_("_selectedId",35,c4,5a,99)},
	{::hx::fsString,(int)offsetof(FlxUIDropDownMenuCustom_obj,_selectedLabel),HX_("_selectedLabel",da,d9,42,a4)},
	{::hx::fsInt,(int)offsetof(FlxUIDropDownMenuCustom_obj,currentScroll),HX_("currentScroll",26,59,c1,2a)},
	{::hx::fsBool,(int)offsetof(FlxUIDropDownMenuCustom_obj,canScroll),HX_("canScroll",3d,2c,ab,99)},
	{::hx::fsObject /*  ::FlxUIDropDownHeader */ ,(int)offsetof(FlxUIDropDownMenuCustom_obj,header),HX_("header",8d,09,00,fd)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(FlxUIDropDownMenuCustom_obj,list),HX_("list",5e,1c,b3,47)},
	{::hx::fsObject /*  ::flixel::addons::ui::FlxUI9SliceSprite */ ,(int)offsetof(FlxUIDropDownMenuCustom_obj,dropPanel),HX_("dropPanel",55,a8,0a,ff)},
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(int)offsetof(FlxUIDropDownMenuCustom_obj,params),HX_("params",46,fb,7a,ed)},
	{::hx::fsObject /*  ::FlxUIDropDownMenuDropDirection */ ,(int)offsetof(FlxUIDropDownMenuCustom_obj,dropDirection),HX_("dropDirection",10,0c,88,39)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxUIDropDownMenuCustom_obj,callback),HX_("callback",c5,99,06,7f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo FlxUIDropDownMenuCustom_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &FlxUIDropDownMenuCustom_obj::CLICK_EVENT,HX_("CLICK_EVENT",63,89,c0,0d)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String FlxUIDropDownMenuCustom_obj_sMemberFields[] = {
	HX_("skipButtonUpdate",ba,02,f2,13),
	HX_("set_skipButtonUpdate",37,1f,14,ff),
	HX_("_selectedId",35,c4,5a,99),
	HX_("_selectedLabel",da,d9,42,a4),
	HX_("currentScroll",26,59,c1,2a),
	HX_("canScroll",3d,2c,ab,99),
	HX_("get_selectedId",5f,7f,c6,3c),
	HX_("set_selectedId",d3,67,e6,5c),
	HX_("get_selectedLabel",f0,f4,60,6c),
	HX_("set_selectedLabel",fc,cc,ce,8f),
	HX_("header",8d,09,00,fd),
	HX_("list",5e,1c,b3,47),
	HX_("dropPanel",55,a8,0a,ff),
	HX_("params",46,fb,7a,ed),
	HX_("set_params",83,09,80,e1),
	HX_("dropDirection",10,0c,88,39),
	HX_("set_dropDirection",73,ef,65,63),
	HX_("callback",c5,99,06,7f),
	HX_("updateButtonPositions",4f,57,74,17),
	HX_("set_visible",95,df,8b,33),
	HX_("dropsUp",df,5c,eb,06),
	HX_("exceedsHeight",c6,81,09,80),
	HX_("getPanelHeight",15,65,b5,bb),
	HX_("setData",ec,96,e7,07),
	HX_("selectSomething",de,b5,44,68),
	HX_("makeListButton",7e,c0,76,d7),
	HX_("changeLabelByIndex",b7,ef,db,60),
	HX_("changeLabelById",16,de,15,0d),
	HX_("getBtnByIndex",f5,2e,fe,8c),
	HX_("getBtnById",18,cc,0e,1e),
	HX_("update",09,86,05,87),
	HX_("destroy",fa,2c,86,24),
	HX_("showList",fb,df,39,af),
	HX_("onDropdown",50,48,e6,da),
	HX_("onClickItem",5c,14,02,47),
	::String(null()) };

static void FlxUIDropDownMenuCustom_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxUIDropDownMenuCustom_obj::CLICK_EVENT,"CLICK_EVENT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxUIDropDownMenuCustom_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxUIDropDownMenuCustom_obj::CLICK_EVENT,"CLICK_EVENT");
};

#endif

::hx::Class FlxUIDropDownMenuCustom_obj::__mClass;

static ::String FlxUIDropDownMenuCustom_obj_sStaticFields[] = {
	HX_("CLICK_EVENT",63,89,c0,0d),
	HX_("makeStrIdLabelArray",c3,7e,ca,52),
	::String(null())
};

void FlxUIDropDownMenuCustom_obj::__register()
{
	FlxUIDropDownMenuCustom_obj _hx_dummy;
	FlxUIDropDownMenuCustom_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("FlxUIDropDownMenuCustom",07,d3,54,53);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxUIDropDownMenuCustom_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxUIDropDownMenuCustom_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxUIDropDownMenuCustom_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxUIDropDownMenuCustom_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxUIDropDownMenuCustom_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxUIDropDownMenuCustom_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxUIDropDownMenuCustom_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxUIDropDownMenuCustom_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxUIDropDownMenuCustom_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_5585202bf1be20f8_151_boot)
HXDLIN( 151)		CLICK_EVENT = HX_("click_dropdown",28,26,a9,27);
            	}
}

