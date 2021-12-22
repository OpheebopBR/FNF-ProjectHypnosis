#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED__UnicodeString_UnicodeString_Impl_
#include <_UnicodeString/UnicodeString_Impl_.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
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
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_atlas_FlxAtlas
#include <flixel/graphics/atlas/FlxAtlas.h>
#endif
#ifndef INCLUDED_flixel_graphics_atlas_FlxNode
#include <flixel/graphics/atlas/FlxNode.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrame
#include <flixel/graphics/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxImageFrame
#include <flixel/graphics/frames/FlxImageFrame.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMatrix
#include <flixel/math/FlxMatrix.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_system_FlxAssets
#include <flixel/system/FlxAssets.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextFormat
#include <flixel/text/FlxTextFormat.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextFormatMarkerPair
#include <flixel/text/FlxTextFormatMarkerPair.h>
#endif
#ifndef INCLUDED_flixel_text__FlxText_FlxTextAlign_Impl_
#include <flixel/text/_FlxText/FlxTextAlign_Impl_.h>
#endif
#ifndef INCLUDED_flixel_text__FlxText_FlxTextFormatRange
#include <flixel/text/_FlxText/FlxTextFormatRange.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_helpers_FlxRange
#include <flixel/util/helpers/FlxRange.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_text_Font
#include <openfl/text/Font.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7d9cf70d988be490_40_new,"flixel.text.FlxText","new",0x8fca03a2,"flixel.text.FlxText.new","flixel/text/FlxText.hx",40,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_219_destroy,"flixel.text.FlxText","destroy",0x1704293c,"flixel.text.FlxText.destroy","flixel/text/FlxText.hx",219,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_229_drawFrame,"flixel.text.FlxText","drawFrame",0xd9b5be4b,"flixel.text.FlxText.drawFrame","flixel/text/FlxText.hx",229,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_243_stampOnAtlas,"flixel.text.FlxText","stampOnAtlas",0x66244e67,"flixel.text.FlxText.stampOnAtlas","flixel/text/FlxText.hx",243,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_282_applyMarkup,"flixel.text.FlxText","applyMarkup",0x660988f8,"flixel.text.FlxText.applyMarkup","flixel/text/FlxText.hx",282,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_396_addFormat,"flixel.text.FlxText","addFormat",0xc0d9d4fa,"flixel.text.FlxText.addFormat","flixel/text/FlxText.hx",396,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_391_addFormat,"flixel.text.FlxText","addFormat",0xc0d9d4fa,"flixel.text.FlxText.addFormat","flixel/text/FlxText.hx",391,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_408_removeFormat,"flixel.text.FlxText","removeFormat",0xa79a7f19,"flixel.text.FlxText.removeFormat","flixel/text/FlxText.hx",408,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_454_clearFormats,"flixel.text.FlxText","clearFormats",0xf58bc7cd,"flixel.text.FlxText.clearFormats","flixel/text/FlxText.hx",454,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_475_setFormat,"flixel.text.FlxText","setFormat",0x685d153b,"flixel.text.FlxText.setFormat","flixel/text/FlxText.hx",475,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_507_setBorderStyle,"flixel.text.FlxText","setBorderStyle",0x26cf9c21,"flixel.text.FlxText.setBorderStyle","flixel/text/FlxText.hx",507,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_517_updateHitbox,"flixel.text.FlxText","updateHitbox",0x91c9e8ff,"flixel.text.FlxText.updateHitbox","flixel/text/FlxText.hx",517,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_523_set_fieldWidth,"flixel.text.FlxText","set_fieldWidth",0x9c758fa7,"flixel.text.FlxText.set_fieldWidth","flixel/text/FlxText.hx",523,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_545_get_fieldWidth,"flixel.text.FlxText","get_fieldWidth",0x7c55a733,"flixel.text.FlxText.get_fieldWidth","flixel/text/FlxText.hx",545,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_549_set_autoSize,"flixel.text.FlxText","set_autoSize",0x346abbcb,"flixel.text.FlxText.set_autoSize","flixel/text/FlxText.hx",549,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_561_get_autoSize,"flixel.text.FlxText","get_autoSize",0x1f719857,"flixel.text.FlxText.get_autoSize","flixel/text/FlxText.hx",561,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_565_set_text,"flixel.text.FlxText","set_text",0xb6d09f28,"flixel.text.FlxText.set_text","flixel/text/FlxText.hx",565,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_578_get_size,"flixel.text.FlxText","get_size",0x07cd19c8,"flixel.text.FlxText.get_size","flixel/text/FlxText.hx",578,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_582_set_size,"flixel.text.FlxText","set_size",0xb62a733c,"flixel.text.FlxText.set_size","flixel/text/FlxText.hx",582,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_589_set_color,"flixel.text.FlxText","set_color",0x7c7dca88,"flixel.text.FlxText.set_color","flixel/text/FlxText.hx",589,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_602_get_font,"flixel.text.FlxText","get_font",0xff39d6d6,"flixel.text.FlxText.get_font","flixel/text/FlxText.hx",602,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_606_set_font,"flixel.text.FlxText","set_font",0xad97304a,"flixel.text.FlxText.set_font","flixel/text/FlxText.hx",606,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_630_get_embedded,"flixel.text.FlxText","get_embedded",0xce5a2211,"flixel.text.FlxText.get_embedded","flixel/text/FlxText.hx",630,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_635_get_systemFont,"flixel.text.FlxText","get_systemFont",0xd6b43ca5,"flixel.text.FlxText.get_systemFont","flixel/text/FlxText.hx",635,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_639_set_systemFont,"flixel.text.FlxText","set_systemFont",0xf6d42519,"flixel.text.FlxText.set_systemFont","flixel/text/FlxText.hx",639,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_648_get_bold,"flixel.text.FlxText","get_bold",0xfc94fa8c,"flixel.text.FlxText.get_bold","flixel/text/FlxText.hx",648,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_652_set_bold,"flixel.text.FlxText","set_bold",0xaaf25400,"flixel.text.FlxText.set_bold","flixel/text/FlxText.hx",652,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_663_get_italic,"flixel.text.FlxText","get_italic",0xadf337b7,"flixel.text.FlxText.get_italic","flixel/text/FlxText.hx",663,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_667_set_italic,"flixel.text.FlxText","set_italic",0xb170d62b,"flixel.text.FlxText.set_italic","flixel/text/FlxText.hx",667,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_678_get_wordWrap,"flixel.text.FlxText","get_wordWrap",0xf0d31d3b,"flixel.text.FlxText.get_wordWrap","flixel/text/FlxText.hx",678,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_682_set_wordWrap,"flixel.text.FlxText","set_wordWrap",0x05cc40af,"flixel.text.FlxText.set_wordWrap","flixel/text/FlxText.hx",682,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_693_get_alignment,"flixel.text.FlxText","get_alignment",0xf34d507c,"flixel.text.FlxText.get_alignment","flixel/text/FlxText.hx",693,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_697_set_alignment,"flixel.text.FlxText","set_alignment",0x38533288,"flixel.text.FlxText.set_alignment","flixel/text/FlxText.hx",697,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_704_set_borderStyle,"flixel.text.FlxText","set_borderStyle",0x0a5ab38a,"flixel.text.FlxText.set_borderStyle","flixel/text/FlxText.hx",704,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_712_set_borderColor,"flixel.text.FlxText","set_borderColor",0xd0997fbc,"flixel.text.FlxText.set_borderColor","flixel/text/FlxText.hx",712,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_720_set_borderSize,"flixel.text.FlxText","set_borderSize",0x0b7e6088,"flixel.text.FlxText.set_borderSize","flixel/text/FlxText.hx",720,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_728_set_borderQuality,"flixel.text.FlxText","set_borderQuality",0x9eac1b58,"flixel.text.FlxText.set_borderQuality","flixel/text/FlxText.hx",728,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_737_set_graphic,"flixel.text.FlxText","set_graphic",0x740d070d,"flixel.text.FlxText.set_graphic","flixel/text/FlxText.hx",737,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_745_get_width,"flixel.text.FlxText","get_width",0x1933231f,"flixel.text.FlxText.get_width","flixel/text/FlxText.hx",745,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_751_get_height,"flixel.text.FlxText","get_height",0xa9db10ae,"flixel.text.FlxText.get_height","flixel/text/FlxText.hx",751,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_757_updateColorTransform,"flixel.text.FlxText","updateColorTransform",0x81f611f0,"flixel.text.FlxText.updateColorTransform","flixel/text/FlxText.hx",757,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_776_regenGraphic,"flixel.text.FlxText","regenGraphic",0xc617a9e9,"flixel.text.FlxText.regenGraphic","flixel/text/FlxText.hx",776,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_877_drawTextFieldTo,"flixel.text.FlxText","drawTextFieldTo",0xda5cac46,"flixel.text.FlxText.drawTextFieldTo","flixel/text/FlxText.hx",877,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_899_draw,"flixel.text.FlxText","draw",0x3a66d282,"flixel.text.FlxText.draw","flixel/text/FlxText.hx",899,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_910_calcFrame,"flixel.text.FlxText","calcFrame",0x04b3a41a,"flixel.text.FlxText.calcFrame","flixel/text/FlxText.hx",910,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_922_applyBorderStyle,"flixel.text.FlxText","applyBorderStyle",0x7fb82955,"flixel.text.FlxText.applyBorderStyle","flixel/text/FlxText.hx",922,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_988_applyBorderTransparency,"flixel.text.FlxText","applyBorderTransparency",0x59c1b674,"flixel.text.FlxText.applyBorderTransparency","flixel/text/FlxText.hx",988,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_1004_copyTextWithOffset,"flixel.text.FlxText","copyTextWithOffset",0x8b535ed9,"flixel.text.FlxText.copyTextWithOffset","flixel/text/FlxText.hx",1004,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_1011_applyFormats,"flixel.text.FlxText","applyFormats",0x597a620c,"flixel.text.FlxText.applyFormats","flixel/text/FlxText.hx",1011,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_1037_copyTextFormat,"flixel.text.FlxText","copyTextFormat",0xce0953d7,"flixel.text.FlxText.copyTextFormat","flixel/text/FlxText.hx",1037,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_1054_dtfCopy,"flixel.text.FlxText","dtfCopy",0x79c34ded,"flixel.text.FlxText.dtfCopy","flixel/text/FlxText.hx",1054,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_1060_updateDefaultFormat,"flixel.text.FlxText","updateDefaultFormat",0x3cb6b251,"flixel.text.FlxText.updateDefaultFormat","flixel/text/FlxText.hx",1060,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_1067_set_frames,"flixel.text.FlxText","set_frames",0x579256e1,"flixel.text.FlxText.set_frames","flixel/text/FlxText.hx",1067,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_45_boot,"flixel.text.FlxText","boot",0x39122ab0,"flixel.text.FlxText.boot","flixel/text/FlxText.hx",45,0xdf165a6e)
namespace flixel{
namespace text{

void FlxText_obj::__construct(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::hx::Null< Float >  __o_FieldWidth,::String Text,::hx::Null< int >  __o_Size,::hx::Null< bool >  __o_EmbeddedFont){
            		Float X = __o_X.Default(0);
            		Float Y = __o_Y.Default(0);
            		Float FieldWidth = __o_FieldWidth.Default(0);
            		int Size = __o_Size.Default(8);
            		bool EmbeddedFont = __o_EmbeddedFont.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_7d9cf70d988be490_40_new)
HXLINE( 157)		this->_hasBorderAlpha = false;
HXLINE( 148)		this->_regen = true;
HXLINE( 142)		this->_formatRanges = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 115)		this->borderQuality = ((Float)1);
HXLINE( 108)		this->borderSize = ((Float)1);
HXLINE( 103)		this->borderColor = 0;
HXLINE(  98)		this->borderStyle = ::flixel::text::FlxTextBorderStyle_obj::NONE_dyn();
HXLINE(  50)		this->text = HX_("",00,00,00,00);
HXLINE( 179)		super::__construct(X,Y,null());
HXLINE( 181)		bool _hx_tmp;
HXDLIN( 181)		if (::hx::IsNotNull( Text )) {
HXLINE( 181)			_hx_tmp = (Text == HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 181)			_hx_tmp = true;
            		}
HXDLIN( 181)		if (_hx_tmp) {
HXLINE( 185)			this->set_text(HX_("",00,00,00,00));
HXLINE( 186)			Text = HX_(" ",20,00,00,00);
            		}
            		else {
HXLINE( 190)			this->set_text(Text);
            		}
HXLINE( 193)		this->textField =  ::openfl::text::TextField_obj::__alloc( HX_CTX );
HXLINE( 194)		this->textField->set_selectable(false);
HXLINE( 195)		this->textField->set_multiline(true);
HXLINE( 196)		this->textField->set_wordWrap(true);
HXLINE( 197)		this->_defaultFormat =  ::openfl::text::TextFormat_obj::__alloc( HX_CTX ,null(),Size,16777215,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
HXLINE( 198)		this->set_font(::flixel::_hx_system::FlxAssets_obj::FONT_DEFAULT);
HXLINE( 199)		this->_formatAdjusted =  ::openfl::text::TextFormat_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
HXLINE( 200)		this->textField->set_defaultTextFormat(this->_defaultFormat);
HXLINE( 201)		this->textField->set_text(Text);
HXLINE( 202)		this->set_fieldWidth(FieldWidth);
HXLINE( 203)		this->textField->set_embedFonts(EmbeddedFont);
HXLINE( 204)		this->textField->set_sharpness(( (Float)(100) ));
HXLINE( 205)		Float _hx_tmp1;
HXDLIN( 205)		if ((Text.length <= 0)) {
HXLINE( 205)			_hx_tmp1 = ( (Float)(1) );
            		}
            		else {
HXLINE( 205)			_hx_tmp1 = ( (Float)(10) );
            		}
HXDLIN( 205)		this->textField->set_height(_hx_tmp1);
HXLINE( 207)		this->set_allowCollisions(0);
HXLINE( 208)		this->set_moves(false);
HXLINE( 210)		this->drawFrame(null());
HXLINE( 212)		 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(1,1);
HXDLIN( 212)		point->_inPool = false;
HXDLIN( 212)		this->shadowOffset = point;
            	}

Dynamic FlxText_obj::__CreateEmpty() { return new FlxText_obj; }

void *FlxText_obj::_hx_vtable = 0;

Dynamic FlxText_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxText_obj > _hx_result = new FlxText_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _hx_result;
}

bool FlxText_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x752f90b6) {
		if (inClassId<=(int)0x2c01639b) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2c01639b;
		} else {
			return inClassId==(int)0x752f90b6;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void FlxText_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_219_destroy)
HXLINE( 220)		this->textField = null();
HXLINE( 221)		this->_font = null();
HXLINE( 222)		this->_defaultFormat = null();
HXLINE( 223)		this->_formatAdjusted = null();
HXLINE( 224)		this->shadowOffset = ( ( ::flixel::math::FlxPoint)(::flixel::util::FlxDestroyUtil_obj::put(this->shadowOffset)) );
HXLINE( 225)		this->super::destroy();
            	}


void FlxText_obj::drawFrame(::hx::Null< bool >  __o_Force){
            		bool Force = __o_Force.Default(false);
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_229_drawFrame)
HXLINE( 230)		bool _hx_tmp;
HXDLIN( 230)		if (!(this->_regen)) {
HXLINE( 230)			_hx_tmp = Force;
            		}
            		else {
HXLINE( 230)			_hx_tmp = true;
            		}
HXDLIN( 230)		this->_regen = _hx_tmp;
HXLINE( 231)		this->super::drawFrame(this->_regen);
            	}


bool FlxText_obj::stampOnAtlas( ::flixel::graphics::atlas::FlxAtlas atlas){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_243_stampOnAtlas)
HXLINE( 244)		this->regenGraphic();
HXLINE( 246)		 ::flixel::graphics::atlas::FlxNode node = atlas->addNode(this->graphic->bitmap,this->graphic->key);
HXLINE( 247)		bool result = ::hx::IsNotNull( node );
HXLINE( 249)		if (::hx::IsNotNull( node )) {
HXLINE( 251)			this->set_frames(node->getImageFrame());
            		}
HXLINE( 254)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,stampOnAtlas,return )

 ::flixel::text::FlxText FlxText_obj::applyMarkup(::String input,::Array< ::Dynamic> rules){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_282_applyMarkup)
HXLINE( 283)		bool _hx_tmp;
HXDLIN( 283)		if (::hx::IsNotNull( rules )) {
HXLINE( 283)			_hx_tmp = (rules->length == 0);
            		}
            		else {
HXLINE( 283)			_hx_tmp = true;
            		}
HXDLIN( 283)		if (_hx_tmp) {
HXLINE( 284)			return ::hx::ObjectPtr<OBJ_>(this);
            		}
HXLINE( 286)		this->clearFormats();
HXLINE( 288)		::Array< int > rangeStarts = ::Array_obj< int >::__new(0);
HXLINE( 289)		::Array< int > rangeEnds = ::Array_obj< int >::__new(0);
HXLINE( 290)		::Array< ::Dynamic> rulesToApply = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 292)		int i = 0;
HXLINE( 293)		{
HXLINE( 293)			int _g = 0;
HXDLIN( 293)			while((_g < rules->length)){
HXLINE( 293)				 ::flixel::text::FlxTextFormatMarkerPair rule = rules->__get(_g).StaticCast<  ::flixel::text::FlxTextFormatMarkerPair >();
HXDLIN( 293)				_g = (_g + 1);
HXLINE( 295)				bool _hx_tmp;
HXDLIN( 295)				if (::hx::IsNotNull( rule->marker )) {
HXLINE( 295)					_hx_tmp = ::hx::IsNull( rule->format );
            				}
            				else {
HXLINE( 295)					_hx_tmp = true;
            				}
HXDLIN( 295)				if (_hx_tmp) {
HXLINE( 296)					continue;
            				}
HXLINE( 298)				bool start = false;
HXLINE( 299)				int markerLength = ::_UnicodeString::UnicodeString_Impl__obj::get_length(rule->marker);
HXLINE( 301)				if ((input.indexOf(rule->marker,null()) == -1)) {
HXLINE( 302)					continue;
            				}
HXLINE( 305)				{
HXLINE( 305)					int _g1 = 0;
HXDLIN( 305)					int _g2 = ::_UnicodeString::UnicodeString_Impl__obj::get_length(input);
HXDLIN( 305)					while((_g1 < _g2)){
HXLINE( 305)						_g1 = (_g1 + 1);
HXDLIN( 305)						int charIndex = (_g1 - 1);
HXLINE( 307)						::String a = ::_UnicodeString::UnicodeString_Impl__obj::substr(input,charIndex,markerLength);
HXDLIN( 307)						if ((a != rule->marker)) {
HXLINE( 308)							continue;
            						}
HXLINE( 310)						if (start) {
HXLINE( 312)							start = false;
HXLINE( 313)							rangeEnds->push(charIndex);
            						}
            						else {
HXLINE( 317)							start = true;
HXLINE( 318)							rangeStarts->push(charIndex);
HXLINE( 319)							rulesToApply->push(rule);
            						}
            					}
            				}
HXLINE( 323)				if (start) {
HXLINE( 326)					rangeEnds->push(-1);
            				}
HXLINE( 329)				i = (i + 1);
            			}
            		}
HXLINE( 333)		{
HXLINE( 333)			int _g1 = 0;
HXDLIN( 333)			while((_g1 < rules->length)){
HXLINE( 333)				 ::flixel::text::FlxTextFormatMarkerPair rule = rules->__get(_g1).StaticCast<  ::flixel::text::FlxTextFormatMarkerPair >();
HXDLIN( 333)				_g1 = (_g1 + 1);
HXLINE( 334)				input = ::StringTools_obj::replace(input,rule->marker,HX_("",00,00,00,00));
            			}
            		}
HXLINE( 337)		{
HXLINE( 337)			int _g2 = 0;
HXDLIN( 337)			int _g3 = rangeStarts->length;
HXDLIN( 337)			while((_g2 < _g3)){
HXLINE( 337)				_g2 = (_g2 + 1);
HXDLIN( 337)				int i = (_g2 - 1);
HXLINE( 340)				int delIndex = rangeStarts->__get(i);
HXLINE( 341)				int markerLength = ::_UnicodeString::UnicodeString_Impl__obj::get_length(rulesToApply->__get(i).StaticCast<  ::flixel::text::FlxTextFormatMarkerPair >()->marker);
HXLINE( 344)				{
HXLINE( 344)					int _g = 0;
HXDLIN( 344)					int _g1 = rangeStarts->length;
HXDLIN( 344)					while((_g < _g1)){
HXLINE( 344)						_g = (_g + 1);
HXDLIN( 344)						int j = (_g - 1);
HXLINE( 346)						if ((rangeStarts->__get(j) > delIndex)) {
HXLINE( 348)							::Array< int > rangeStarts1 = rangeStarts;
HXDLIN( 348)							int j1 = j;
HXDLIN( 348)							rangeStarts1[j1] = (rangeStarts1->__get(j1) - markerLength);
            						}
HXLINE( 350)						if ((rangeEnds->__get(j) > delIndex)) {
HXLINE( 352)							::Array< int > rangeEnds1 = rangeEnds;
HXDLIN( 352)							int j1 = j;
HXDLIN( 352)							rangeEnds1[j1] = (rangeEnds1->__get(j1) - markerLength);
            						}
            					}
            				}
HXLINE( 357)				delIndex = rangeEnds->__get(i);
HXLINE( 360)				{
HXLINE( 360)					int _g3 = 0;
HXDLIN( 360)					int _g4 = rangeStarts->length;
HXDLIN( 360)					while((_g3 < _g4)){
HXLINE( 360)						_g3 = (_g3 + 1);
HXDLIN( 360)						int j = (_g3 - 1);
HXLINE( 362)						if ((rangeStarts->__get(j) > delIndex)) {
HXLINE( 364)							::Array< int > rangeStarts1 = rangeStarts;
HXDLIN( 364)							int j1 = j;
HXDLIN( 364)							rangeStarts1[j1] = (rangeStarts1->__get(j1) - markerLength);
            						}
HXLINE( 366)						if ((rangeEnds->__get(j) > delIndex)) {
HXLINE( 368)							::Array< int > rangeEnds1 = rangeEnds;
HXDLIN( 368)							int j1 = j;
HXDLIN( 368)							rangeEnds1[j1] = (rangeEnds1->__get(j1) - markerLength);
            						}
            					}
            				}
            			}
            		}
HXLINE( 374)		this->set_text(input);
HXLINE( 377)		{
HXLINE( 377)			int _g4 = 0;
HXDLIN( 377)			int _g5 = rangeStarts->length;
HXDLIN( 377)			while((_g4 < _g5)){
HXLINE( 377)				_g4 = (_g4 + 1);
HXDLIN( 377)				int i = (_g4 - 1);
HXLINE( 378)				this->addFormat(rulesToApply->__get(i).StaticCast<  ::flixel::text::FlxTextFormatMarkerPair >()->format,rangeStarts->__get(i),rangeEnds->__get(i));
            			}
            		}
HXLINE( 380)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxText_obj,applyMarkup,return )

 ::flixel::text::FlxText FlxText_obj::addFormat( ::flixel::text::FlxTextFormat Format,::hx::Null< int >  __o_Start,::hx::Null< int >  __o_End){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(2)
            		int _hx_run( ::flixel::text::_FlxText::FlxTextFormatRange left, ::flixel::text::_FlxText::FlxTextFormatRange right){
            			HX_GC_STACKFRAME(&_hx_pos_7d9cf70d988be490_396_addFormat)
HXLINE( 396)			if (::hx::IsLess( left->range->start,right->range->start )) {
HXLINE( 396)				return -1;
            			}
            			else {
HXLINE( 396)				return 1;
            			}
HXDLIN( 396)			return 0;
            		}
            		HX_END_LOCAL_FUNC2(return)

            		int Start = __o_Start.Default(-1);
            		int End = __o_End.Default(-1);
            	HX_GC_STACKFRAME(&_hx_pos_7d9cf70d988be490_391_addFormat)
HXLINE( 392)		::Array< ::Dynamic> _hx_tmp = this->_formatRanges;
HXDLIN( 392)		_hx_tmp->push( ::flixel::text::_FlxText::FlxTextFormatRange_obj::__alloc( HX_CTX ,Format,Start,End));
HXLINE( 394)		this->_formatRanges->sort( ::Dynamic(new _hx_Closure_0()));
HXLINE( 398)		this->_regen = true;
HXLINE( 400)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxText_obj,addFormat,return )

 ::flixel::text::FlxText FlxText_obj::removeFormat( ::flixel::text::FlxTextFormat Format, ::Dynamic Start, ::Dynamic End){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_408_removeFormat)
HXLINE( 409)		int i = this->_formatRanges->length;
HXLINE( 410)		while(true){
HXLINE( 410)			i = (i - 1);
HXDLIN( 410)			if (!(((i + 1) > 0))) {
HXLINE( 410)				goto _hx_goto_14;
            			}
HXLINE( 412)			 ::flixel::text::_FlxText::FlxTextFormatRange formatRange = this->_formatRanges->__get(i).StaticCast<  ::flixel::text::_FlxText::FlxTextFormatRange >();
HXLINE( 413)			if (::hx::IsInstanceNotEq( formatRange->format,Format )) {
HXLINE( 414)				continue;
            			}
HXLINE( 416)			bool _hx_tmp;
HXDLIN( 416)			if (::hx::IsNotNull( Start )) {
HXLINE( 416)				_hx_tmp = ::hx::IsNotNull( End );
            			}
            			else {
HXLINE( 416)				_hx_tmp = false;
            			}
HXDLIN( 416)			if (_hx_tmp) {
HXLINE( 418)				 ::flixel::util::helpers::FlxRange range = formatRange->range;
HXLINE( 419)				bool _hx_tmp;
HXDLIN( 419)				if (::hx::IsLess( Start,range->end )) {
HXLINE( 419)					_hx_tmp = ::hx::IsLessEq( End,range->start );
            				}
            				else {
HXLINE( 419)					_hx_tmp = true;
            				}
HXDLIN( 419)				if (_hx_tmp) {
HXLINE( 420)					continue;
            				}
HXLINE( 422)				bool _hx_tmp1;
HXDLIN( 422)				if (::hx::IsGreater( Start,range->start )) {
HXLINE( 422)					_hx_tmp1 = ::hx::IsLess( End,range->end );
            				}
            				else {
HXLINE( 422)					_hx_tmp1 = false;
            				}
HXDLIN( 422)				if (_hx_tmp1) {
HXLINE( 424)					this->addFormat(formatRange->format,(End + 1),range->end);
HXLINE( 425)					range->end = Start;
HXLINE( 426)					continue;
            				}
HXLINE( 429)				bool _hx_tmp2;
HXDLIN( 429)				if (::hx::IsLessEq( Start,range->start )) {
HXLINE( 429)					_hx_tmp2 = ::hx::IsLess( End,range->end );
            				}
            				else {
HXLINE( 429)					_hx_tmp2 = false;
            				}
HXDLIN( 429)				if (_hx_tmp2) {
HXLINE( 431)					range->start = End;
HXLINE( 432)					continue;
            				}
HXLINE( 435)				bool _hx_tmp3;
HXDLIN( 435)				if (::hx::IsGreater( Start,range->start )) {
HXLINE( 435)					_hx_tmp3 = ::hx::IsGreaterEq( End,range->end );
            				}
            				else {
HXLINE( 435)					_hx_tmp3 = false;
            				}
HXDLIN( 435)				if (_hx_tmp3) {
HXLINE( 437)					range->end = Start;
HXLINE( 438)					continue;
            				}
            			}
HXLINE( 442)			this->_formatRanges->remove(formatRange);
            		}
            		_hx_goto_14:;
HXLINE( 445)		this->_regen = true;
HXLINE( 447)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxText_obj,removeFormat,return )

 ::flixel::text::FlxText FlxText_obj::clearFormats(){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_454_clearFormats)
HXLINE( 455)		this->_formatRanges = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 456)		{
HXLINE( 456)			this->textField->set_defaultTextFormat(this->_defaultFormat);
HXDLIN( 456)			this->textField->setTextFormat(this->_defaultFormat,null(),null());
HXDLIN( 456)			this->_regen = true;
            		}
HXLINE( 458)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,clearFormats,return )

 ::flixel::text::FlxText FlxText_obj::setFormat(::String Font,::hx::Null< int >  __o_Size,::hx::Null< int >  __o_Color,::String Alignment, ::flixel::text::FlxTextBorderStyle BorderStyle,::hx::Null< int >  __o_BorderColor,::hx::Null< bool >  __o_EmbeddedFont){
            		int Size = __o_Size.Default(8);
            		int Color = __o_Color.Default(-1);
            		int BorderColor = __o_BorderColor.Default(0);
            		bool EmbeddedFont = __o_EmbeddedFont.Default(true);
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_475_setFormat)
HXLINE( 476)		if (::hx::IsNull( BorderStyle )) {
HXLINE( 476)			BorderStyle = ::flixel::text::FlxTextBorderStyle_obj::NONE_dyn();
            		}
HXLINE( 478)		if (EmbeddedFont) {
HXLINE( 480)			this->set_font(Font);
            		}
            		else {
HXLINE( 482)			if (::hx::IsNotNull( Font )) {
HXLINE( 484)				this->set_systemFont(Font);
            			}
            		}
HXLINE( 487)		this->set_size(Size);
HXLINE( 488)		this->set_color(Color);
HXLINE( 489)		if (::hx::IsNotNull( Alignment )) {
HXLINE( 490)			this->set_alignment(Alignment);
            		}
HXLINE( 491)		{
HXLINE( 491)			this->set_borderStyle(BorderStyle);
HXDLIN( 491)			this->set_borderColor(BorderColor);
HXDLIN( 491)			this->set_borderSize(( (Float)(1) ));
HXDLIN( 491)			this->set_borderQuality(( (Float)(1) ));
            		}
HXLINE( 493)		{
HXLINE( 493)			this->textField->set_defaultTextFormat(this->_defaultFormat);
HXDLIN( 493)			this->textField->setTextFormat(this->_defaultFormat,null(),null());
HXDLIN( 493)			this->_regen = true;
            		}
HXLINE( 495)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC7(FlxText_obj,setFormat,return )

 ::flixel::text::FlxText FlxText_obj::setBorderStyle( ::flixel::text::FlxTextBorderStyle Style,::hx::Null< int >  __o_Color,::hx::Null< Float >  __o_Size,::hx::Null< Float >  __o_Quality){
            		int Color = __o_Color.Default(0);
            		Float Size = __o_Size.Default(1);
            		Float Quality = __o_Quality.Default(1);
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_507_setBorderStyle)
HXLINE( 508)		this->set_borderStyle(Style);
HXLINE( 509)		this->set_borderColor(Color);
HXLINE( 510)		this->set_borderSize(Size);
HXLINE( 511)		this->set_borderQuality(Quality);
HXLINE( 513)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxText_obj,setBorderStyle,return )

void FlxText_obj::updateHitbox(){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_517_updateHitbox)
HXLINE( 518)		this->regenGraphic();
HXLINE( 519)		this->super::updateHitbox();
            	}


Float FlxText_obj::set_fieldWidth(Float value){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_523_set_fieldWidth)
HXLINE( 524)		if (::hx::IsNull( this->textField )) {
HXLINE( 525)			return value;
            		}
HXLINE( 527)		if ((value <= 0)) {
HXLINE( 529)			this->set_wordWrap(false);
HXLINE( 530)			this->set_autoSize(true);
            		}
            		else {
HXLINE( 534)			this->set_autoSize(false);
HXLINE( 535)			this->set_wordWrap(true);
HXLINE( 536)			this->textField->set_width(value);
            		}
HXLINE( 539)		this->_regen = true;
HXLINE( 540)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_fieldWidth,return )

Float FlxText_obj::get_fieldWidth(){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_545_get_fieldWidth)
HXDLIN( 545)		if (::hx::IsNotNull( this->textField )) {
HXDLIN( 545)			return this->textField->get_width();
            		}
            		else {
HXDLIN( 545)			return ( (Float)(0) );
            		}
HXDLIN( 545)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_fieldWidth,return )

bool FlxText_obj::set_autoSize(bool value){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_549_set_autoSize)
HXLINE( 550)		if (::hx::IsNotNull( this->textField )) {
HXLINE( 552)			 ::Dynamic _hx_tmp;
HXDLIN( 552)			if (value) {
HXLINE( 552)				_hx_tmp = 1;
            			}
            			else {
HXLINE( 552)				_hx_tmp = 2;
            			}
HXDLIN( 552)			this->textField->set_autoSize(_hx_tmp);
HXLINE( 553)			this->_regen = true;
            		}
HXLINE( 556)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_autoSize,return )

bool FlxText_obj::get_autoSize(){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_561_get_autoSize)
HXDLIN( 561)		if (::hx::IsNotNull( this->textField )) {
HXDLIN( 561)			return ::hx::IsNotEq( this->textField->get_autoSize(),2 );
            		}
            		else {
HXDLIN( 561)			return false;
            		}
HXDLIN( 561)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_autoSize,return )

::String FlxText_obj::set_text(::String Text){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_565_set_text)
HXLINE( 566)		this->text = Text;
HXLINE( 567)		if (::hx::IsNotNull( this->textField )) {
HXLINE( 569)			::String ot = this->textField->get_text();
HXLINE( 570)			this->textField->set_text(Text);
HXLINE( 571)			bool _hx_tmp;
HXDLIN( 571)			if ((this->textField->get_text() == ot)) {
HXLINE( 571)				_hx_tmp = this->_regen;
            			}
            			else {
HXLINE( 571)				_hx_tmp = true;
            			}
HXDLIN( 571)			this->_regen = _hx_tmp;
            		}
HXLINE( 573)		return Text;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_text,return )

int FlxText_obj::get_size(){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_578_get_size)
HXDLIN( 578)		return ::Std_obj::_hx_int(( (Float)(this->_defaultFormat->size) ));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_size,return )

int FlxText_obj::set_size(int Size){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_582_set_size)
HXLINE( 583)		this->_defaultFormat->size = Size;
HXLINE( 584)		{
HXLINE( 584)			this->textField->set_defaultTextFormat(this->_defaultFormat);
HXDLIN( 584)			this->textField->setTextFormat(this->_defaultFormat,null(),null());
HXDLIN( 584)			this->_regen = true;
            		}
HXLINE( 585)		return Size;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_size,return )

int FlxText_obj::set_color(int Color){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_589_set_color)
HXLINE( 590)		if (::hx::IsEq( this->_defaultFormat->color,(Color & 16777215) )) {
HXLINE( 592)			return Color;
            		}
HXLINE( 594)		this->_defaultFormat->color = (Color & 16777215);
HXLINE( 595)		this->color = Color;
HXLINE( 596)		{
HXLINE( 596)			this->textField->set_defaultTextFormat(this->_defaultFormat);
HXDLIN( 596)			this->textField->setTextFormat(this->_defaultFormat,null(),null());
HXDLIN( 596)			this->_regen = true;
            		}
HXLINE( 597)		return Color;
            	}


::String FlxText_obj::get_font(){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_602_get_font)
HXDLIN( 602)		return this->_font;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_font,return )

::String FlxText_obj::set_font(::String Font){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_606_set_font)
HXLINE( 607)		this->textField->set_embedFonts(true);
HXLINE( 609)		if (::hx::IsNotNull( Font )) {
HXLINE( 611)			::String newFontName = Font;
HXLINE( 612)			if (::openfl::utils::Assets_obj::exists(Font,HX_("FONT",cf,25,81,2e))) {
HXLINE( 614)				newFontName = ::openfl::utils::Assets_obj::getFont(Font,null())->name;
            			}
HXLINE( 617)			this->_defaultFormat->font = newFontName;
            		}
            		else {
HXLINE( 621)			this->_defaultFormat->font = ::flixel::_hx_system::FlxAssets_obj::FONT_DEFAULT;
            		}
HXLINE( 624)		{
HXLINE( 624)			this->textField->set_defaultTextFormat(this->_defaultFormat);
HXDLIN( 624)			this->textField->setTextFormat(this->_defaultFormat,null(),null());
HXDLIN( 624)			this->_regen = true;
            		}
HXLINE( 625)		return (this->_font = this->_defaultFormat->font);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_font,return )

bool FlxText_obj::get_embedded(){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_630_get_embedded)
HXDLIN( 630)		return this->textField->set_embedFonts(true);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_embedded,return )

::String FlxText_obj::get_systemFont(){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_635_get_systemFont)
HXDLIN( 635)		return this->_defaultFormat->font;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_systemFont,return )

::String FlxText_obj::set_systemFont(::String Font){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_639_set_systemFont)
HXLINE( 640)		this->textField->set_embedFonts(false);
HXLINE( 641)		this->_defaultFormat->font = Font;
HXLINE( 642)		{
HXLINE( 642)			this->textField->set_defaultTextFormat(this->_defaultFormat);
HXDLIN( 642)			this->textField->setTextFormat(this->_defaultFormat,null(),null());
HXDLIN( 642)			this->_regen = true;
            		}
HXLINE( 643)		return Font;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_systemFont,return )

bool FlxText_obj::get_bold(){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_648_get_bold)
HXDLIN( 648)		return ( (bool)(this->_defaultFormat->bold) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_bold,return )

bool FlxText_obj::set_bold(bool value){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_652_set_bold)
HXLINE( 653)		if (::hx::IsNotEq( this->_defaultFormat->bold,value )) {
HXLINE( 655)			this->_defaultFormat->bold = value;
HXLINE( 656)			{
HXLINE( 656)				this->textField->set_defaultTextFormat(this->_defaultFormat);
HXDLIN( 656)				this->textField->setTextFormat(this->_defaultFormat,null(),null());
HXDLIN( 656)				this->_regen = true;
            			}
            		}
HXLINE( 658)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_bold,return )

bool FlxText_obj::get_italic(){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_663_get_italic)
HXDLIN( 663)		return ( (bool)(this->_defaultFormat->italic) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_italic,return )

bool FlxText_obj::set_italic(bool value){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_667_set_italic)
HXLINE( 668)		if (::hx::IsNotEq( this->_defaultFormat->italic,value )) {
HXLINE( 670)			this->_defaultFormat->italic = value;
HXLINE( 671)			{
HXLINE( 671)				this->textField->set_defaultTextFormat(this->_defaultFormat);
HXDLIN( 671)				this->textField->setTextFormat(this->_defaultFormat,null(),null());
HXDLIN( 671)				this->_regen = true;
            			}
            		}
HXLINE( 673)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_italic,return )

bool FlxText_obj::get_wordWrap(){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_678_get_wordWrap)
HXDLIN( 678)		return this->textField->get_wordWrap();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_wordWrap,return )

bool FlxText_obj::set_wordWrap(bool value){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_682_set_wordWrap)
HXLINE( 683)		if ((this->textField->get_wordWrap() != value)) {
HXLINE( 685)			this->textField->set_wordWrap(value);
HXLINE( 686)			this->_regen = true;
            		}
HXLINE( 688)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_wordWrap,return )

::String FlxText_obj::get_alignment(){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_693_get_alignment)
HXDLIN( 693)		return ::flixel::text::_FlxText::FlxTextAlign_Impl__obj::fromOpenFL(this->_defaultFormat->align);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_alignment,return )

::String FlxText_obj::set_alignment(::String Alignment){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_697_set_alignment)
HXLINE( 698)		this->_defaultFormat->align = ::flixel::text::_FlxText::FlxTextAlign_Impl__obj::toOpenFL(Alignment);
HXLINE( 699)		{
HXLINE( 699)			this->textField->set_defaultTextFormat(this->_defaultFormat);
HXDLIN( 699)			this->textField->setTextFormat(this->_defaultFormat,null(),null());
HXDLIN( 699)			this->_regen = true;
            		}
HXLINE( 700)		return Alignment;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_alignment,return )

 ::flixel::text::FlxTextBorderStyle FlxText_obj::set_borderStyle( ::flixel::text::FlxTextBorderStyle style){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_704_set_borderStyle)
HXLINE( 705)		if (::hx::IsPointerNotEq( style,this->borderStyle )) {
HXLINE( 706)			this->_regen = true;
            		}
HXLINE( 708)		return (this->borderStyle = style);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_borderStyle,return )

int FlxText_obj::set_borderColor(int Color){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_712_set_borderColor)
HXLINE( 713)		bool _hx_tmp;
HXDLIN( 713)		if ((this->borderColor != Color)) {
HXLINE( 713)			_hx_tmp = ::hx::IsPointerNotEq( this->borderStyle,::flixel::text::FlxTextBorderStyle_obj::NONE_dyn() );
            		}
            		else {
HXLINE( 713)			_hx_tmp = false;
            		}
HXDLIN( 713)		if (_hx_tmp) {
HXLINE( 714)			this->_regen = true;
            		}
HXLINE( 715)		this->_hasBorderAlpha = ((( (Float)(((Color >> 24) & 255)) ) / ( (Float)(255) )) < 1);
HXLINE( 716)		return (this->borderColor = Color);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_borderColor,return )

Float FlxText_obj::set_borderSize(Float Value){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_720_set_borderSize)
HXLINE( 721)		bool _hx_tmp;
HXDLIN( 721)		if ((Value != this->borderSize)) {
HXLINE( 721)			_hx_tmp = ::hx::IsPointerNotEq( this->borderStyle,::flixel::text::FlxTextBorderStyle_obj::NONE_dyn() );
            		}
            		else {
HXLINE( 721)			_hx_tmp = false;
            		}
HXDLIN( 721)		if (_hx_tmp) {
HXLINE( 722)			this->_regen = true;
            		}
HXLINE( 724)		return (this->borderSize = Value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_borderSize,return )

Float FlxText_obj::set_borderQuality(Float Value){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_728_set_borderQuality)
HXLINE( 729)		Float lowerBound;
HXDLIN( 729)		if ((Value < 0)) {
HXLINE( 729)			lowerBound = ( (Float)(0) );
            		}
            		else {
HXLINE( 729)			lowerBound = Value;
            		}
HXDLIN( 729)		if ((lowerBound > 1)) {
HXLINE( 729)			Value = ( (Float)(1) );
            		}
            		else {
HXLINE( 729)			Value = lowerBound;
            		}
HXLINE( 730)		bool _hx_tmp;
HXDLIN( 730)		if ((Value != this->borderQuality)) {
HXLINE( 730)			_hx_tmp = ::hx::IsPointerNotEq( this->borderStyle,::flixel::text::FlxTextBorderStyle_obj::NONE_dyn() );
            		}
            		else {
HXLINE( 730)			_hx_tmp = false;
            		}
HXDLIN( 730)		if (_hx_tmp) {
HXLINE( 731)			this->_regen = true;
            		}
HXLINE( 733)		return (this->borderQuality = Value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_borderQuality,return )

 ::flixel::graphics::FlxGraphic FlxText_obj::set_graphic( ::flixel::graphics::FlxGraphic Value){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_737_set_graphic)
HXLINE( 738)		 ::flixel::graphics::FlxGraphic oldGraphic = this->graphic;
HXLINE( 739)		 ::flixel::graphics::FlxGraphic graph = this->super::set_graphic(Value);
HXLINE( 740)		::flixel::FlxG_obj::bitmap->removeIfNoUse(oldGraphic);
HXLINE( 741)		return graph;
            	}


Float FlxText_obj::get_width(){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_745_get_width)
HXLINE( 746)		this->regenGraphic();
HXLINE( 747)		return this->super::get_width();
            	}


Float FlxText_obj::get_height(){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_751_get_height)
HXLINE( 752)		this->regenGraphic();
HXLINE( 753)		return this->super::get_height();
            	}


void FlxText_obj::updateColorTransform(){
            	HX_GC_STACKFRAME(&_hx_pos_7d9cf70d988be490_757_updateColorTransform)
HXLINE( 758)		if (::hx::IsNull( this->colorTransform )) {
HXLINE( 759)			this->colorTransform =  ::openfl::geom::ColorTransform_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null());
            		}
HXLINE( 761)		if ((this->alpha != 1)) {
HXLINE( 763)			this->colorTransform->alphaMultiplier = this->alpha;
HXLINE( 764)			this->useColorTransform = true;
            		}
            		else {
HXLINE( 768)			this->colorTransform->alphaMultiplier = ( (Float)(1) );
HXLINE( 769)			this->useColorTransform = false;
            		}
HXLINE( 772)		this->dirty = true;
            	}


void FlxText_obj::regenGraphic(){
            	HX_GC_STACKFRAME(&_hx_pos_7d9cf70d988be490_776_regenGraphic)
HXLINE( 777)		bool _hx_tmp;
HXDLIN( 777)		if (::hx::IsNotNull( this->textField )) {
HXLINE( 777)			_hx_tmp = !(this->_regen);
            		}
            		else {
HXLINE( 777)			_hx_tmp = true;
            		}
HXDLIN( 777)		if (_hx_tmp) {
HXLINE( 778)			return;
            		}
HXLINE( 780)		int oldWidth = 0;
HXLINE( 781)		int oldHeight = 4;
HXLINE( 783)		if (::hx::IsNotNull( this->graphic )) {
HXLINE( 785)			oldWidth = this->graphic->width;
HXLINE( 786)			oldHeight = this->graphic->height;
            		}
HXLINE( 789)		Float newWidth = this->textField->get_width();
HXLINE( 791)		Float newHeight = (this->textField->get_textHeight() + 4);
HXLINE( 794)		if ((this->textField->get_textHeight() == 0)) {
HXLINE( 796)			newHeight = ( (Float)(oldHeight) );
            		}
HXLINE( 799)		bool _hx_tmp1;
HXDLIN( 799)		if ((oldWidth == newWidth)) {
HXLINE( 799)			_hx_tmp1 = (oldHeight != newHeight);
            		}
            		else {
HXLINE( 799)			_hx_tmp1 = true;
            		}
HXDLIN( 799)		if (_hx_tmp1) {
HXLINE( 802)			this->set_height(newHeight);
HXLINE( 803)			::String key = ::flixel::FlxG_obj::bitmap->getUniqueKey(HX_("text",ad,cc,f9,4c));
HXLINE( 804)			int _hx_tmp = ::Std_obj::_hx_int(newWidth);
HXDLIN( 804)			this->makeGraphic(_hx_tmp,::Std_obj::_hx_int(newHeight),0,false,key);
HXLINE( 806)			if (this->_hasBorderAlpha) {
HXLINE( 807)				this->_borderPixels = this->graphic->bitmap->clone();
            			}
HXLINE( 808)			this->frameHeight = ::Std_obj::_hx_int(this->get_height());
HXLINE( 809)			 ::openfl::text::TextField _hx_tmp1 = this->textField;
HXDLIN( 809)			_hx_tmp1->set_height((this->get_height() * ((Float)1.2)));
HXLINE( 810)			this->_flashRect->x = ( (Float)(0) );
HXLINE( 811)			this->_flashRect->y = ( (Float)(0) );
HXLINE( 812)			this->_flashRect->width = newWidth;
HXLINE( 813)			this->_flashRect->height = newHeight;
            		}
            		else {
HXLINE( 817)			this->graphic->bitmap->fillRect(this->_flashRect,0);
HXLINE( 818)			if (this->_hasBorderAlpha) {
HXLINE( 820)				if (::hx::IsNull( this->_borderPixels )) {
HXLINE( 821)					this->_borderPixels =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,this->frameWidth,this->frameHeight,true,null());
            				}
            				else {
HXLINE( 823)					this->_borderPixels->fillRect(this->_flashRect,0);
            				}
            			}
            		}
HXLINE( 827)		bool _hx_tmp2;
HXDLIN( 827)		bool _hx_tmp3;
HXDLIN( 827)		if (::hx::IsNotNull( this->textField )) {
HXLINE( 827)			_hx_tmp3 = ::hx::IsNotNull( this->textField->get_text() );
            		}
            		else {
HXLINE( 827)			_hx_tmp3 = false;
            		}
HXDLIN( 827)		if (_hx_tmp3) {
HXLINE( 827)			_hx_tmp2 = (this->textField->get_text().length > 0);
            		}
            		else {
HXLINE( 827)			_hx_tmp2 = false;
            		}
HXDLIN( 827)		if (_hx_tmp2) {
HXLINE( 830)			this->copyTextFormat(this->_defaultFormat,this->_formatAdjusted,null());
HXLINE( 832)			this->_matrix->identity();
HXLINE( 834)			this->applyBorderStyle();
HXLINE( 835)			if (this->_hasBorderAlpha) {
HXLINE( 835)				if (::hx::IsNull( this->_borderColorTransform )) {
HXLINE( 835)					this->_borderColorTransform =  ::openfl::geom::ColorTransform_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null());
            				}
HXDLIN( 835)				this->_borderColorTransform->alphaMultiplier = (( (Float)(((this->borderColor >> 24) & 255)) ) / ( (Float)(255) ));
HXDLIN( 835)				this->_borderPixels->colorTransform(this->_borderPixels->rect,this->_borderColorTransform);
HXDLIN( 835)				this->graphic->bitmap->draw(this->_borderPixels,null(),null(),null(),null(),null());
            			}
HXLINE( 836)			this->applyFormats(this->_formatAdjusted,false);
HXLINE( 838)			this->drawTextFieldTo(this->graphic->bitmap);
            		}
HXLINE( 841)		this->_regen = false;
HXLINE( 842)		this->set_frame(this->frame);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,regenGraphic,(void))

void FlxText_obj::drawTextFieldTo( ::openfl::display::BitmapData graphic){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_877_drawTextFieldTo)
HXDLIN( 877)		graphic->draw(this->textField,this->_matrix,null(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,drawTextFieldTo,(void))

void FlxText_obj::draw(){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_899_draw)
HXLINE( 900)		this->regenGraphic();
HXLINE( 901)		this->super::draw();
            	}


void FlxText_obj::calcFrame(::hx::Null< bool >  __o_RunOnCpp){
            		bool RunOnCpp = __o_RunOnCpp.Default(false);
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_910_calcFrame)
HXLINE( 911)		if (::hx::IsNull( this->textField )) {
HXLINE( 912)			return;
            		}
HXLINE( 914)		bool _hx_tmp;
HXDLIN( 914)		if (::flixel::FlxG_obj::renderTile) {
HXLINE( 914)			_hx_tmp = !(RunOnCpp);
            		}
            		else {
HXLINE( 914)			_hx_tmp = false;
            		}
HXDLIN( 914)		if (_hx_tmp) {
HXLINE( 915)			return;
            		}
HXLINE( 917)		this->regenGraphic();
HXLINE( 918)		this->super::calcFrame(RunOnCpp);
            	}


void FlxText_obj::applyBorderStyle(){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_922_applyBorderStyle)
HXLINE( 923)		int iterations = ::Std_obj::_hx_int((this->borderSize * this->borderQuality));
HXLINE( 924)		if ((iterations <= 0)) {
HXLINE( 926)			iterations = 1;
            		}
HXLINE( 928)		Float delta = (this->borderSize / ( (Float)(iterations) ));
HXLINE( 930)		switch((int)(this->borderStyle->_hx_getIndex())){
            			case (int)0: {
            			}
            			break;
            			case (int)1: {
HXLINE( 935)				this->applyFormats(this->_formatAdjusted,true);
HXLINE( 937)				{
HXLINE( 937)					int _g = 0;
HXDLIN( 937)					int _g1 = iterations;
HXDLIN( 937)					while((_g < _g1)){
HXLINE( 937)						_g = (_g + 1);
HXDLIN( 937)						int i = (_g - 1);
HXLINE( 939)						{
HXLINE( 939)							 ::openfl::display::BitmapData graphic;
HXDLIN( 939)							if (this->_hasBorderAlpha) {
HXLINE( 939)								graphic = this->_borderPixels;
            							}
            							else {
HXLINE( 939)								graphic = this->graphic->bitmap;
            							}
HXDLIN( 939)							this->_matrix->translate(delta,delta);
HXDLIN( 939)							this->drawTextFieldTo(graphic);
            						}
            					}
            				}
HXLINE( 942)				this->_matrix->translate((-(this->shadowOffset->x) * this->borderSize),(-(this->shadowOffset->y) * this->borderSize));
            			}
            			break;
            			case (int)2: {
HXLINE( 947)				this->applyFormats(this->_formatAdjusted,true);
HXLINE( 949)				Float curDelta = delta;
HXLINE( 950)				{
HXLINE( 950)					int _g = 0;
HXDLIN( 950)					int _g1 = iterations;
HXDLIN( 950)					while((_g < _g1)){
HXLINE( 950)						_g = (_g + 1);
HXDLIN( 950)						int i = (_g - 1);
HXLINE( 952)						{
HXLINE( 952)							 ::openfl::display::BitmapData graphic;
HXDLIN( 952)							if (this->_hasBorderAlpha) {
HXLINE( 952)								graphic = this->_borderPixels;
            							}
            							else {
HXLINE( 952)								graphic = this->graphic->bitmap;
            							}
HXDLIN( 952)							this->_matrix->translate(-(curDelta),-(curDelta));
HXDLIN( 952)							this->drawTextFieldTo(graphic);
            						}
HXLINE( 953)						{
HXLINE( 953)							 ::openfl::display::BitmapData graphic1;
HXDLIN( 953)							if (this->_hasBorderAlpha) {
HXLINE( 953)								graphic1 = this->_borderPixels;
            							}
            							else {
HXLINE( 953)								graphic1 = this->graphic->bitmap;
            							}
HXDLIN( 953)							this->_matrix->translate(curDelta,( (Float)(0) ));
HXDLIN( 953)							this->drawTextFieldTo(graphic1);
            						}
HXLINE( 954)						{
HXLINE( 954)							 ::openfl::display::BitmapData graphic2;
HXDLIN( 954)							if (this->_hasBorderAlpha) {
HXLINE( 954)								graphic2 = this->_borderPixels;
            							}
            							else {
HXLINE( 954)								graphic2 = this->graphic->bitmap;
            							}
HXDLIN( 954)							this->_matrix->translate(curDelta,( (Float)(0) ));
HXDLIN( 954)							this->drawTextFieldTo(graphic2);
            						}
HXLINE( 955)						{
HXLINE( 955)							 ::openfl::display::BitmapData graphic3;
HXDLIN( 955)							if (this->_hasBorderAlpha) {
HXLINE( 955)								graphic3 = this->_borderPixels;
            							}
            							else {
HXLINE( 955)								graphic3 = this->graphic->bitmap;
            							}
HXDLIN( 955)							this->_matrix->translate(( (Float)(0) ),curDelta);
HXDLIN( 955)							this->drawTextFieldTo(graphic3);
            						}
HXLINE( 956)						{
HXLINE( 956)							 ::openfl::display::BitmapData graphic4;
HXDLIN( 956)							if (this->_hasBorderAlpha) {
HXLINE( 956)								graphic4 = this->_borderPixels;
            							}
            							else {
HXLINE( 956)								graphic4 = this->graphic->bitmap;
            							}
HXDLIN( 956)							this->_matrix->translate(( (Float)(0) ),curDelta);
HXDLIN( 956)							this->drawTextFieldTo(graphic4);
            						}
HXLINE( 957)						{
HXLINE( 957)							 ::openfl::display::BitmapData graphic5;
HXDLIN( 957)							if (this->_hasBorderAlpha) {
HXLINE( 957)								graphic5 = this->_borderPixels;
            							}
            							else {
HXLINE( 957)								graphic5 = this->graphic->bitmap;
            							}
HXDLIN( 957)							this->_matrix->translate(-(curDelta),( (Float)(0) ));
HXDLIN( 957)							this->drawTextFieldTo(graphic5);
            						}
HXLINE( 958)						{
HXLINE( 958)							 ::openfl::display::BitmapData graphic6;
HXDLIN( 958)							if (this->_hasBorderAlpha) {
HXLINE( 958)								graphic6 = this->_borderPixels;
            							}
            							else {
HXLINE( 958)								graphic6 = this->graphic->bitmap;
            							}
HXDLIN( 958)							this->_matrix->translate(-(curDelta),( (Float)(0) ));
HXDLIN( 958)							this->drawTextFieldTo(graphic6);
            						}
HXLINE( 959)						{
HXLINE( 959)							 ::openfl::display::BitmapData graphic7;
HXDLIN( 959)							if (this->_hasBorderAlpha) {
HXLINE( 959)								graphic7 = this->_borderPixels;
            							}
            							else {
HXLINE( 959)								graphic7 = this->graphic->bitmap;
            							}
HXDLIN( 959)							this->_matrix->translate(( (Float)(0) ),-(curDelta));
HXDLIN( 959)							this->drawTextFieldTo(graphic7);
            						}
HXLINE( 961)						this->_matrix->translate(curDelta,( (Float)(0) ));
HXLINE( 962)						curDelta = (curDelta + delta);
            					}
            				}
            			}
            			break;
            			case (int)3: {
HXLINE( 969)				this->applyFormats(this->_formatAdjusted,true);
HXLINE( 971)				Float curDelta = delta;
HXLINE( 972)				{
HXLINE( 972)					int _g = 0;
HXDLIN( 972)					int _g1 = iterations;
HXDLIN( 972)					while((_g < _g1)){
HXLINE( 972)						_g = (_g + 1);
HXDLIN( 972)						int i = (_g - 1);
HXLINE( 974)						{
HXLINE( 974)							 ::openfl::display::BitmapData graphic;
HXDLIN( 974)							if (this->_hasBorderAlpha) {
HXLINE( 974)								graphic = this->_borderPixels;
            							}
            							else {
HXLINE( 974)								graphic = this->graphic->bitmap;
            							}
HXDLIN( 974)							this->_matrix->translate(-(curDelta),-(curDelta));
HXDLIN( 974)							this->drawTextFieldTo(graphic);
            						}
HXLINE( 975)						{
HXLINE( 975)							 ::openfl::display::BitmapData graphic1;
HXDLIN( 975)							if (this->_hasBorderAlpha) {
HXLINE( 975)								graphic1 = this->_borderPixels;
            							}
            							else {
HXLINE( 975)								graphic1 = this->graphic->bitmap;
            							}
HXDLIN( 975)							this->_matrix->translate((curDelta * ( (Float)(2) )),( (Float)(0) ));
HXDLIN( 975)							this->drawTextFieldTo(graphic1);
            						}
HXLINE( 976)						{
HXLINE( 976)							 ::openfl::display::BitmapData graphic2;
HXDLIN( 976)							if (this->_hasBorderAlpha) {
HXLINE( 976)								graphic2 = this->_borderPixels;
            							}
            							else {
HXLINE( 976)								graphic2 = this->graphic->bitmap;
            							}
HXDLIN( 976)							this->_matrix->translate(( (Float)(0) ),(curDelta * ( (Float)(2) )));
HXDLIN( 976)							this->drawTextFieldTo(graphic2);
            						}
HXLINE( 977)						{
HXLINE( 977)							 ::openfl::display::BitmapData graphic3;
HXDLIN( 977)							if (this->_hasBorderAlpha) {
HXLINE( 977)								graphic3 = this->_borderPixels;
            							}
            							else {
HXLINE( 977)								graphic3 = this->graphic->bitmap;
            							}
HXDLIN( 977)							this->_matrix->translate((-(curDelta) * ( (Float)(2) )),( (Float)(0) ));
HXDLIN( 977)							this->drawTextFieldTo(graphic3);
            						}
HXLINE( 979)						this->_matrix->translate(curDelta,-(curDelta));
HXLINE( 980)						curDelta = (curDelta + delta);
            					}
            				}
            			}
            			break;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,applyBorderStyle,(void))

void FlxText_obj::applyBorderTransparency(){
            	HX_GC_STACKFRAME(&_hx_pos_7d9cf70d988be490_988_applyBorderTransparency)
HXLINE( 989)		if (!(this->_hasBorderAlpha)) {
HXLINE( 990)			return;
            		}
HXLINE( 992)		if (::hx::IsNull( this->_borderColorTransform )) {
HXLINE( 993)			this->_borderColorTransform =  ::openfl::geom::ColorTransform_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null());
            		}
HXLINE( 995)		this->_borderColorTransform->alphaMultiplier = (( (Float)(((this->borderColor >> 24) & 255)) ) / ( (Float)(255) ));
HXLINE( 996)		this->_borderPixels->colorTransform(this->_borderPixels->rect,this->_borderColorTransform);
HXLINE( 997)		this->graphic->bitmap->draw(this->_borderPixels,null(),null(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,applyBorderTransparency,(void))

void FlxText_obj::copyTextWithOffset(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_1004_copyTextWithOffset)
HXLINE(1005)		 ::openfl::display::BitmapData graphic;
HXDLIN(1005)		if (this->_hasBorderAlpha) {
HXLINE(1005)			graphic = this->_borderPixels;
            		}
            		else {
HXLINE(1005)			graphic = this->graphic->bitmap;
            		}
HXLINE(1006)		this->_matrix->translate(x,y);
HXLINE(1007)		this->drawTextFieldTo(graphic);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxText_obj,copyTextWithOffset,(void))

void FlxText_obj::applyFormats( ::openfl::text::TextFormat FormatAdjusted,::hx::Null< bool >  __o_UseBorderColor){
            		bool UseBorderColor = __o_UseBorderColor.Default(false);
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_1011_applyFormats)
HXLINE(1013)		this->copyTextFormat(this->_defaultFormat,FormatAdjusted,false);
HXLINE(1014)		 ::Dynamic _hx_tmp;
HXDLIN(1014)		if (UseBorderColor) {
HXLINE(1014)			_hx_tmp = (this->borderColor & 16777215);
            		}
            		else {
HXLINE(1014)			_hx_tmp = this->_defaultFormat->color;
            		}
HXDLIN(1014)		FormatAdjusted->color = _hx_tmp;
HXLINE(1015)		this->textField->setTextFormat(FormatAdjusted,null(),null());
HXLINE(1018)		{
HXLINE(1018)			int _g = 0;
HXDLIN(1018)			::Array< ::Dynamic> _g1 = this->_formatRanges;
HXDLIN(1018)			while((_g < _g1->length)){
HXLINE(1018)				 ::flixel::text::_FlxText::FlxTextFormatRange formatRange = _g1->__get(_g).StaticCast<  ::flixel::text::_FlxText::FlxTextFormatRange >();
HXDLIN(1018)				_g = (_g + 1);
HXLINE(1020)				int _hx_tmp = (this->textField->get_text().length - 1);
HXDLIN(1020)				if (::hx::IsLess( _hx_tmp,formatRange->range->start )) {
HXLINE(1023)					goto _hx_goto_59;
            				}
            				else {
HXLINE(1027)					 ::openfl::text::TextFormat textFormat = formatRange->format->format;
HXLINE(1028)					this->copyTextFormat(textFormat,FormatAdjusted,false);
HXLINE(1029)					 ::Dynamic _hx_tmp;
HXDLIN(1029)					if (UseBorderColor) {
HXLINE(1029)						_hx_tmp = (formatRange->format->borderColor & 16777215);
            					}
            					else {
HXLINE(1029)						_hx_tmp = textFormat->color;
            					}
HXDLIN(1029)					FormatAdjusted->color = _hx_tmp;
            				}
HXLINE(1032)				 ::openfl::text::TextField _hx_tmp1 = this->textField;
HXDLIN(1032)				int formatRange1 = ( (int)(formatRange->range->start) );
HXDLIN(1032)				int formatRange2 = ( (int)(formatRange->range->end) );
HXDLIN(1032)				_hx_tmp1->setTextFormat(FormatAdjusted,formatRange1,::Std_obj::_hx_int(::Math_obj::min(( (Float)(formatRange2) ),( (Float)(this->textField->get_text().length) ))));
            			}
            			_hx_goto_59:;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxText_obj,applyFormats,(void))

void FlxText_obj::copyTextFormat( ::openfl::text::TextFormat from, ::openfl::text::TextFormat to,::hx::Null< bool >  __o_withAlign){
            		bool withAlign = __o_withAlign.Default(true);
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_1037_copyTextFormat)
HXLINE(1038)		to->font = from->font;
HXLINE(1039)		to->bold = from->bold;
HXLINE(1040)		to->italic = from->italic;
HXLINE(1041)		to->size = from->size;
HXLINE(1042)		to->color = from->color;
HXLINE(1043)		to->leading = from->leading;
HXLINE(1044)		if (withAlign) {
HXLINE(1045)			to->align = from->align;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxText_obj,copyTextFormat,(void))

 ::openfl::text::TextFormat FlxText_obj::dtfCopy(){
            	HX_GC_STACKFRAME(&_hx_pos_7d9cf70d988be490_1054_dtfCopy)
HXLINE(1055)		 ::openfl::text::TextFormat dtf = this->textField->get_defaultTextFormat();
HXLINE(1056)		return  ::openfl::text::TextFormat_obj::__alloc( HX_CTX ,dtf->font,dtf->size,dtf->color,dtf->bold,dtf->italic,dtf->underline,dtf->url,dtf->target,dtf->align,null(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,dtfCopy,return )

void FlxText_obj::updateDefaultFormat(){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_1060_updateDefaultFormat)
HXLINE(1061)		this->textField->set_defaultTextFormat(this->_defaultFormat);
HXLINE(1062)		this->textField->setTextFormat(this->_defaultFormat,null(),null());
HXLINE(1063)		this->_regen = true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,updateDefaultFormat,(void))

 ::flixel::graphics::frames::FlxFramesCollection FlxText_obj::set_frames( ::flixel::graphics::frames::FlxFramesCollection Frames){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_1067_set_frames)
HXLINE(1068)		this->super::set_frames(Frames);
HXLINE(1069)		this->_regen = false;
HXLINE(1070)		return Frames;
            	}


int FlxText_obj::VERTICAL_GUTTER;


::hx::ObjectPtr< FlxText_obj > FlxText_obj::__new(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::hx::Null< Float >  __o_FieldWidth,::String Text,::hx::Null< int >  __o_Size,::hx::Null< bool >  __o_EmbeddedFont) {
	::hx::ObjectPtr< FlxText_obj > __this = new FlxText_obj();
	__this->__construct(__o_X,__o_Y,__o_FieldWidth,Text,__o_Size,__o_EmbeddedFont);
	return __this;
}

::hx::ObjectPtr< FlxText_obj > FlxText_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::hx::Null< Float >  __o_FieldWidth,::String Text,::hx::Null< int >  __o_Size,::hx::Null< bool >  __o_EmbeddedFont) {
	FlxText_obj *__this = (FlxText_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxText_obj), true, "flixel.text.FlxText"));
	*(void **)__this = FlxText_obj::_hx_vtable;
	__this->__construct(__o_X,__o_Y,__o_FieldWidth,Text,__o_Size,__o_EmbeddedFont);
	return __this;
}

FlxText_obj::FlxText_obj()
{
}

void FlxText_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxText);
	HX_MARK_MEMBER_NAME(text,"text");
	HX_MARK_MEMBER_NAME(borderStyle,"borderStyle");
	HX_MARK_MEMBER_NAME(borderColor,"borderColor");
	HX_MARK_MEMBER_NAME(borderSize,"borderSize");
	HX_MARK_MEMBER_NAME(borderQuality,"borderQuality");
	HX_MARK_MEMBER_NAME(textField,"textField");
	HX_MARK_MEMBER_NAME(shadowOffset,"shadowOffset");
	HX_MARK_MEMBER_NAME(_defaultFormat,"_defaultFormat");
	HX_MARK_MEMBER_NAME(_formatAdjusted,"_formatAdjusted");
	HX_MARK_MEMBER_NAME(_formatRanges,"_formatRanges");
	HX_MARK_MEMBER_NAME(_font,"_font");
	HX_MARK_MEMBER_NAME(_regen,"_regen");
	HX_MARK_MEMBER_NAME(_borderPixels,"_borderPixels");
	HX_MARK_MEMBER_NAME(_borderColorTransform,"_borderColorTransform");
	HX_MARK_MEMBER_NAME(_hasBorderAlpha,"_hasBorderAlpha");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxText_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(text,"text");
	HX_VISIT_MEMBER_NAME(borderStyle,"borderStyle");
	HX_VISIT_MEMBER_NAME(borderColor,"borderColor");
	HX_VISIT_MEMBER_NAME(borderSize,"borderSize");
	HX_VISIT_MEMBER_NAME(borderQuality,"borderQuality");
	HX_VISIT_MEMBER_NAME(textField,"textField");
	HX_VISIT_MEMBER_NAME(shadowOffset,"shadowOffset");
	HX_VISIT_MEMBER_NAME(_defaultFormat,"_defaultFormat");
	HX_VISIT_MEMBER_NAME(_formatAdjusted,"_formatAdjusted");
	HX_VISIT_MEMBER_NAME(_formatRanges,"_formatRanges");
	HX_VISIT_MEMBER_NAME(_font,"_font");
	HX_VISIT_MEMBER_NAME(_regen,"_regen");
	HX_VISIT_MEMBER_NAME(_borderPixels,"_borderPixels");
	HX_VISIT_MEMBER_NAME(_borderColorTransform,"_borderColorTransform");
	HX_VISIT_MEMBER_NAME(_hasBorderAlpha,"_hasBorderAlpha");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxText_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { return ::hx::Val( text ); }
		if (HX_FIELD_EQ(inName,"size") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_size() ); }
		if (HX_FIELD_EQ(inName,"font") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_font() ); }
		if (HX_FIELD_EQ(inName,"bold") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_bold() ); }
		if (HX_FIELD_EQ(inName,"draw") ) { return ::hx::Val( draw_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_font") ) { return ::hx::Val( _font ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"italic") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_italic() ); }
		if (HX_FIELD_EQ(inName,"_regen") ) { return ::hx::Val( _regen ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		if (HX_FIELD_EQ(inName,"dtfCopy") ) { return ::hx::Val( dtfCopy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"embedded") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_embedded() ); }
		if (HX_FIELD_EQ(inName,"wordWrap") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_wordWrap() ); }
		if (HX_FIELD_EQ(inName,"autoSize") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_autoSize() ); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return ::hx::Val( set_text_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_size") ) { return ::hx::Val( get_size_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_size") ) { return ::hx::Val( set_size_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_font") ) { return ::hx::Val( get_font_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_font") ) { return ::hx::Val( set_font_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_bold") ) { return ::hx::Val( get_bold_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_bold") ) { return ::hx::Val( set_bold_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"alignment") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_alignment() ); }
		if (HX_FIELD_EQ(inName,"textField") ) { return ::hx::Val( textField ); }
		if (HX_FIELD_EQ(inName,"drawFrame") ) { return ::hx::Val( drawFrame_dyn() ); }
		if (HX_FIELD_EQ(inName,"addFormat") ) { return ::hx::Val( addFormat_dyn() ); }
		if (HX_FIELD_EQ(inName,"setFormat") ) { return ::hx::Val( setFormat_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return ::hx::Val( set_color_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return ::hx::Val( get_width_dyn() ); }
		if (HX_FIELD_EQ(inName,"calcFrame") ) { return ::hx::Val( calcFrame_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"systemFont") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_systemFont() ); }
		if (HX_FIELD_EQ(inName,"borderSize") ) { return ::hx::Val( borderSize ); }
		if (HX_FIELD_EQ(inName,"fieldWidth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_fieldWidth() ); }
		if (HX_FIELD_EQ(inName,"get_italic") ) { return ::hx::Val( get_italic_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_italic") ) { return ::hx::Val( set_italic_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return ::hx::Val( get_height_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_frames") ) { return ::hx::Val( set_frames_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"borderStyle") ) { return ::hx::Val( borderStyle ); }
		if (HX_FIELD_EQ(inName,"borderColor") ) { return ::hx::Val( borderColor ); }
		if (HX_FIELD_EQ(inName,"applyMarkup") ) { return ::hx::Val( applyMarkup_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_graphic") ) { return ::hx::Val( set_graphic_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"shadowOffset") ) { return ::hx::Val( shadowOffset ); }
		if (HX_FIELD_EQ(inName,"stampOnAtlas") ) { return ::hx::Val( stampOnAtlas_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeFormat") ) { return ::hx::Val( removeFormat_dyn() ); }
		if (HX_FIELD_EQ(inName,"clearFormats") ) { return ::hx::Val( clearFormats_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateHitbox") ) { return ::hx::Val( updateHitbox_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_autoSize") ) { return ::hx::Val( set_autoSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_autoSize") ) { return ::hx::Val( get_autoSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_embedded") ) { return ::hx::Val( get_embedded_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_wordWrap") ) { return ::hx::Val( get_wordWrap_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_wordWrap") ) { return ::hx::Val( set_wordWrap_dyn() ); }
		if (HX_FIELD_EQ(inName,"regenGraphic") ) { return ::hx::Val( regenGraphic_dyn() ); }
		if (HX_FIELD_EQ(inName,"applyFormats") ) { return ::hx::Val( applyFormats_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"borderQuality") ) { return ::hx::Val( borderQuality ); }
		if (HX_FIELD_EQ(inName,"_formatRanges") ) { return ::hx::Val( _formatRanges ); }
		if (HX_FIELD_EQ(inName,"_borderPixels") ) { return ::hx::Val( _borderPixels ); }
		if (HX_FIELD_EQ(inName,"get_alignment") ) { return ::hx::Val( get_alignment_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_alignment") ) { return ::hx::Val( set_alignment_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_defaultFormat") ) { return ::hx::Val( _defaultFormat ); }
		if (HX_FIELD_EQ(inName,"setBorderStyle") ) { return ::hx::Val( setBorderStyle_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_fieldWidth") ) { return ::hx::Val( set_fieldWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_fieldWidth") ) { return ::hx::Val( get_fieldWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_systemFont") ) { return ::hx::Val( get_systemFont_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_systemFont") ) { return ::hx::Val( set_systemFont_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_borderSize") ) { return ::hx::Val( set_borderSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"copyTextFormat") ) { return ::hx::Val( copyTextFormat_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_formatAdjusted") ) { return ::hx::Val( _formatAdjusted ); }
		if (HX_FIELD_EQ(inName,"_hasBorderAlpha") ) { return ::hx::Val( _hasBorderAlpha ); }
		if (HX_FIELD_EQ(inName,"set_borderStyle") ) { return ::hx::Val( set_borderStyle_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_borderColor") ) { return ::hx::Val( set_borderColor_dyn() ); }
		if (HX_FIELD_EQ(inName,"drawTextFieldTo") ) { return ::hx::Val( drawTextFieldTo_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"applyBorderStyle") ) { return ::hx::Val( applyBorderStyle_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"set_borderQuality") ) { return ::hx::Val( set_borderQuality_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"copyTextWithOffset") ) { return ::hx::Val( copyTextWithOffset_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"updateDefaultFormat") ) { return ::hx::Val( updateDefaultFormat_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"updateColorTransform") ) { return ::hx::Val( updateColorTransform_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_borderColorTransform") ) { return ::hx::Val( _borderColorTransform ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"applyBorderTransparency") ) { return ::hx::Val( applyBorderTransparency_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxText_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_text(inValue.Cast< ::String >()) );text=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"size") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_size(inValue.Cast< int >()) ); }
		if (HX_FIELD_EQ(inName,"font") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_font(inValue.Cast< ::String >()) ); }
		if (HX_FIELD_EQ(inName,"bold") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_bold(inValue.Cast< bool >()) ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_font") ) { _font=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"italic") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_italic(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"_regen") ) { _regen=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"wordWrap") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_wordWrap(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"autoSize") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_autoSize(inValue.Cast< bool >()) ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"alignment") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_alignment(inValue.Cast< ::String >()) ); }
		if (HX_FIELD_EQ(inName,"textField") ) { textField=inValue.Cast<  ::openfl::text::TextField >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"systemFont") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_systemFont(inValue.Cast< ::String >()) ); }
		if (HX_FIELD_EQ(inName,"borderSize") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_borderSize(inValue.Cast< Float >()) );borderSize=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fieldWidth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_fieldWidth(inValue.Cast< Float >()) ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"borderStyle") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_borderStyle(inValue.Cast<  ::flixel::text::FlxTextBorderStyle >()) );borderStyle=inValue.Cast<  ::flixel::text::FlxTextBorderStyle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"borderColor") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_borderColor(inValue.Cast< int >()) );borderColor=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"shadowOffset") ) { shadowOffset=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"borderQuality") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_borderQuality(inValue.Cast< Float >()) );borderQuality=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_formatRanges") ) { _formatRanges=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_borderPixels") ) { _borderPixels=inValue.Cast<  ::openfl::display::BitmapData >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_defaultFormat") ) { _defaultFormat=inValue.Cast<  ::openfl::text::TextFormat >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_formatAdjusted") ) { _formatAdjusted=inValue.Cast<  ::openfl::text::TextFormat >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_hasBorderAlpha") ) { _hasBorderAlpha=inValue.Cast< bool >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_borderColorTransform") ) { _borderColorTransform=inValue.Cast<  ::openfl::geom::ColorTransform >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxText_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("text",ad,cc,f9,4c));
	outFields->push(HX_("size",c1,a0,53,4c));
	outFields->push(HX_("font",cf,5d,c0,43));
	outFields->push(HX_("embedded",8a,19,62,de));
	outFields->push(HX_("systemFont",5e,c4,43,f2));
	outFields->push(HX_("bold",85,81,1b,41));
	outFields->push(HX_("italic",f0,2e,64,06));
	outFields->push(HX_("wordWrap",b4,14,db,00));
	outFields->push(HX_("alignment",e3,e2,3d,ea));
	outFields->push(HX_("borderStyle",a5,70,96,10));
	outFields->push(HX_("borderColor",d7,3c,d5,d6));
	outFields->push(HX_("borderSize",cd,ff,ed,06));
	outFields->push(HX_("borderQuality",33,95,25,79));
	outFields->push(HX_("textField",cd,24,81,99));
	outFields->push(HX_("fieldWidth",ec,2e,e5,97));
	outFields->push(HX_("autoSize",d0,8f,79,2f));
	outFields->push(HX_("shadowOffset",93,fb,0b,dc));
	outFields->push(HX_("_defaultFormat",19,53,59,36));
	outFields->push(HX_("_formatAdjusted",a4,c9,b6,80));
	outFields->push(HX_("_formatRanges",8c,b9,14,d7));
	outFields->push(HX_("_font",ae,79,d1,f6));
	outFields->push(HX_("_regen",fe,75,a6,e2));
	outFields->push(HX_("_borderPixels",18,bc,51,cc));
	outFields->push(HX_("_borderColorTransform",74,07,2f,6f));
	outFields->push(HX_("_hasBorderAlpha",37,fe,f9,e8));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxText_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(FlxText_obj,text),HX_("text",ad,cc,f9,4c)},
	{::hx::fsObject /*  ::flixel::text::FlxTextBorderStyle */ ,(int)offsetof(FlxText_obj,borderStyle),HX_("borderStyle",a5,70,96,10)},
	{::hx::fsInt,(int)offsetof(FlxText_obj,borderColor),HX_("borderColor",d7,3c,d5,d6)},
	{::hx::fsFloat,(int)offsetof(FlxText_obj,borderSize),HX_("borderSize",cd,ff,ed,06)},
	{::hx::fsFloat,(int)offsetof(FlxText_obj,borderQuality),HX_("borderQuality",33,95,25,79)},
	{::hx::fsObject /*  ::openfl::text::TextField */ ,(int)offsetof(FlxText_obj,textField),HX_("textField",cd,24,81,99)},
	{::hx::fsObject /*  ::flixel::math::FlxPoint */ ,(int)offsetof(FlxText_obj,shadowOffset),HX_("shadowOffset",93,fb,0b,dc)},
	{::hx::fsObject /*  ::openfl::text::TextFormat */ ,(int)offsetof(FlxText_obj,_defaultFormat),HX_("_defaultFormat",19,53,59,36)},
	{::hx::fsObject /*  ::openfl::text::TextFormat */ ,(int)offsetof(FlxText_obj,_formatAdjusted),HX_("_formatAdjusted",a4,c9,b6,80)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(FlxText_obj,_formatRanges),HX_("_formatRanges",8c,b9,14,d7)},
	{::hx::fsString,(int)offsetof(FlxText_obj,_font),HX_("_font",ae,79,d1,f6)},
	{::hx::fsBool,(int)offsetof(FlxText_obj,_regen),HX_("_regen",fe,75,a6,e2)},
	{::hx::fsObject /*  ::openfl::display::BitmapData */ ,(int)offsetof(FlxText_obj,_borderPixels),HX_("_borderPixels",18,bc,51,cc)},
	{::hx::fsObject /*  ::openfl::geom::ColorTransform */ ,(int)offsetof(FlxText_obj,_borderColorTransform),HX_("_borderColorTransform",74,07,2f,6f)},
	{::hx::fsBool,(int)offsetof(FlxText_obj,_hasBorderAlpha),HX_("_hasBorderAlpha",37,fe,f9,e8)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo FlxText_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &FlxText_obj::VERTICAL_GUTTER,HX_("VERTICAL_GUTTER",04,b3,89,07)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String FlxText_obj_sMemberFields[] = {
	HX_("text",ad,cc,f9,4c),
	HX_("borderStyle",a5,70,96,10),
	HX_("borderColor",d7,3c,d5,d6),
	HX_("borderSize",cd,ff,ed,06),
	HX_("borderQuality",33,95,25,79),
	HX_("textField",cd,24,81,99),
	HX_("shadowOffset",93,fb,0b,dc),
	HX_("_defaultFormat",19,53,59,36),
	HX_("_formatAdjusted",a4,c9,b6,80),
	HX_("_formatRanges",8c,b9,14,d7),
	HX_("_font",ae,79,d1,f6),
	HX_("_regen",fe,75,a6,e2),
	HX_("_borderPixels",18,bc,51,cc),
	HX_("_borderColorTransform",74,07,2f,6f),
	HX_("_hasBorderAlpha",37,fe,f9,e8),
	HX_("destroy",fa,2c,86,24),
	HX_("drawFrame",89,ad,8e,ce),
	HX_("stampOnAtlas",e9,f9,45,2b),
	HX_("applyMarkup",b6,43,6b,f6),
	HX_("addFormat",38,c4,b2,b5),
	HX_("removeFormat",9b,2a,bc,6c),
	HX_("clearFormats",4f,73,ad,ba),
	HX_("setFormat",79,04,36,5d),
	HX_("setBorderStyle",23,ac,54,b8),
	HX_("updateHitbox",81,94,eb,56),
	HX_("set_fieldWidth",a9,9f,fa,2d),
	HX_("get_fieldWidth",35,b7,da,0d),
	HX_("set_autoSize",4d,67,8c,f9),
	HX_("get_autoSize",d9,43,93,e4),
	HX_("set_text",aa,e1,11,7b),
	HX_("get_size",4a,5c,0e,cc),
	HX_("set_size",be,b5,6b,7a),
	HX_("set_color",c6,b9,56,71),
	HX_("get_font",58,19,7b,c3),
	HX_("set_font",cc,72,d8,71),
	HX_("get_embedded",93,cd,7b,93),
	HX_("get_systemFont",a7,4c,39,68),
	HX_("set_systemFont",1b,35,59,88),
	HX_("get_bold",0e,3d,d6,c0),
	HX_("set_bold",82,96,33,6f),
	HX_("get_italic",b9,9e,eb,f6),
	HX_("set_italic",2d,3d,69,fa),
	HX_("get_wordWrap",bd,c8,f4,b5),
	HX_("set_wordWrap",31,ec,ed,ca),
	HX_("get_alignment",ba,b6,a1,ab),
	HX_("set_alignment",c6,98,a7,f0),
	HX_("set_borderStyle",48,a5,43,cd),
	HX_("set_borderColor",7a,71,82,93),
	HX_("set_borderSize",8a,70,03,9d),
	HX_("set_borderQuality",96,78,03,a3),
	HX_("set_graphic",cb,c1,6e,04),
	HX_("get_width",5d,12,0c,0e),
	HX_("get_height",b0,77,d3,f2),
	HX_("updateColorTransform",72,0f,d2,2f),
	HX_("regenGraphic",6b,55,39,8b),
	HX_("drawTextFieldTo",04,9e,45,9d),
	HX_("draw",04,2c,70,42),
	HX_("calcFrame",58,93,8c,f9),
	HX_("applyBorderStyle",d7,bd,a2,48),
	HX_("applyBorderTransparency",32,96,af,17),
	HX_("copyTextWithOffset",db,97,6d,53),
	HX_("applyFormats",8e,0d,9c,1e),
	HX_("copyTextFormat",d9,63,8e,5f),
	HX_("dtfCopy",ab,51,45,87),
	HX_("updateDefaultFormat",0f,5b,8e,8b),
	HX_("set_frames",e3,bd,8a,a0),
	::String(null()) };

static void FlxText_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxText_obj::VERTICAL_GUTTER,"VERTICAL_GUTTER");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxText_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxText_obj::VERTICAL_GUTTER,"VERTICAL_GUTTER");
};

#endif

::hx::Class FlxText_obj::__mClass;

static ::String FlxText_obj_sStaticFields[] = {
	HX_("VERTICAL_GUTTER",04,b3,89,07),
	::String(null())
};

void FlxText_obj::__register()
{
	FlxText_obj _hx_dummy;
	FlxText_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.text.FlxText",b0,4a,1b,ca);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxText_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxText_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxText_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxText_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxText_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxText_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxText_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxText_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_45_boot)
HXDLIN(  45)		VERTICAL_GUTTER = 4;
            	}
}

} // end namespace flixel
} // end namespace text
