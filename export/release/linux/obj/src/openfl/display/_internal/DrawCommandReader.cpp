#include <hxcpp.h>

#ifndef INCLUDED_openfl_display__internal_DrawCommandBuffer
#include <openfl/display/_internal/DrawCommandBuffer.h>
#endif
#ifndef INCLUDED_openfl_display__internal_DrawCommandReader
#include <openfl/display/_internal/DrawCommandReader.h>
#endif
#ifndef INCLUDED_openfl_display__internal_DrawCommandType
#include <openfl/display/_internal/DrawCommandType.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b557290fba582da0_36_new,"openfl.display._internal.DrawCommandReader","new",0x2371abc0,"openfl.display._internal.DrawCommandReader.new","openfl/display/_internal/DrawCommandReader.hx",36,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b557290fba582da0_45_advance,"openfl.display._internal.DrawCommandReader","advance",0x6c2b13e2,"openfl.display._internal.DrawCommandReader.advance","openfl/display/_internal/DrawCommandReader.hx",45,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b557290fba582da0_131_bool,"openfl.display._internal.DrawCommandReader","bool",0xd81d9cca,"openfl.display._internal.DrawCommandReader.bool","openfl/display/_internal/DrawCommandReader.hx",131,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b557290fba582da0_135_destroy,"openfl.display._internal.DrawCommandReader","destroy",0xa1a5385a,"openfl.display._internal.DrawCommandReader.destroy","openfl/display/_internal/DrawCommandReader.hx",135,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b557290fba582da0_142_fArr,"openfl.display._internal.DrawCommandReader","fArr",0xda9f923b,"openfl.display._internal.DrawCommandReader.fArr","openfl/display/_internal/DrawCommandReader.hx",142,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b557290fba582da0_147_float,"openfl.display._internal.DrawCommandReader","float",0x8d6a38fc,"openfl.display._internal.DrawCommandReader.float","openfl/display/_internal/DrawCommandReader.hx",147,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b557290fba582da0_152_iArr,"openfl.display._internal.DrawCommandReader","iArr",0xdc9b3618,"openfl.display._internal.DrawCommandReader.iArr","openfl/display/_internal/DrawCommandReader.hx",152,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b557290fba582da0_157_int,"openfl.display._internal.DrawCommandReader","int",0x236de84f,"openfl.display._internal.DrawCommandReader.int","openfl/display/_internal/DrawCommandReader.hx",157,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b557290fba582da0_164_obj,"openfl.display._internal.DrawCommandReader","obj",0x23726b57,"openfl.display._internal.DrawCommandReader.obj","openfl/display/_internal/DrawCommandReader.hx",164,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b557290fba582da0_168_readBeginBitmapFill,"openfl.display._internal.DrawCommandReader","readBeginBitmapFill",0x56395245,"openfl.display._internal.DrawCommandReader.readBeginBitmapFill","openfl/display/_internal/DrawCommandReader.hx",168,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b557290fba582da0_175_readBeginFill,"openfl.display._internal.DrawCommandReader","readBeginFill",0xc289fa76,"openfl.display._internal.DrawCommandReader.readBeginFill","openfl/display/_internal/DrawCommandReader.hx",175,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b557290fba582da0_182_readBeginGradientFill,"openfl.display._internal.DrawCommandReader","readBeginGradientFill",0xb027c386,"openfl.display._internal.DrawCommandReader.readBeginGradientFill","openfl/display/_internal/DrawCommandReader.hx",182,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b557290fba582da0_189_readBeginShaderFill,"openfl.display._internal.DrawCommandReader","readBeginShaderFill",0x5374d47b,"openfl.display._internal.DrawCommandReader.readBeginShaderFill","openfl/display/_internal/DrawCommandReader.hx",189,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b557290fba582da0_196_readCubicCurveTo,"openfl.display._internal.DrawCommandReader","readCubicCurveTo",0x2a4cd0f6,"openfl.display._internal.DrawCommandReader.readCubicCurveTo","openfl/display/_internal/DrawCommandReader.hx",196,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b557290fba582da0_203_readCurveTo,"openfl.display._internal.DrawCommandReader","readCurveTo",0xc8ec2eb4,"openfl.display._internal.DrawCommandReader.readCurveTo","openfl/display/_internal/DrawCommandReader.hx",203,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b557290fba582da0_210_readDrawCircle,"openfl.display._internal.DrawCommandReader","readDrawCircle",0x97a024ca,"openfl.display._internal.DrawCommandReader.readDrawCircle","openfl/display/_internal/DrawCommandReader.hx",210,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b557290fba582da0_217_readDrawEllipse,"openfl.display._internal.DrawCommandReader","readDrawEllipse",0x2a4ff0e4,"openfl.display._internal.DrawCommandReader.readDrawEllipse","openfl/display/_internal/DrawCommandReader.hx",217,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b557290fba582da0_224_readDrawQuads,"openfl.display._internal.DrawCommandReader","readDrawQuads",0x5be6f852,"openfl.display._internal.DrawCommandReader.readDrawQuads","openfl/display/_internal/DrawCommandReader.hx",224,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b557290fba582da0_231_readDrawRect,"openfl.display._internal.DrawCommandReader","readDrawRect",0x7d01fd5e,"openfl.display._internal.DrawCommandReader.readDrawRect","openfl/display/_internal/DrawCommandReader.hx",231,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b557290fba582da0_238_readDrawRoundRect,"openfl.display._internal.DrawCommandReader","readDrawRoundRect",0x2c1dee18,"openfl.display._internal.DrawCommandReader.readDrawRoundRect","openfl/display/_internal/DrawCommandReader.hx",238,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b557290fba582da0_245_readDrawTriangles,"openfl.display._internal.DrawCommandReader","readDrawTriangles",0x27db6e31,"openfl.display._internal.DrawCommandReader.readDrawTriangles","openfl/display/_internal/DrawCommandReader.hx",245,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b557290fba582da0_252_readEndFill,"openfl.display._internal.DrawCommandReader","readEndFill",0x204456a8,"openfl.display._internal.DrawCommandReader.readEndFill","openfl/display/_internal/DrawCommandReader.hx",252,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b557290fba582da0_259_readLineBitmapStyle,"openfl.display._internal.DrawCommandReader","readLineBitmapStyle",0x3152c7d8,"openfl.display._internal.DrawCommandReader.readLineBitmapStyle","openfl/display/_internal/DrawCommandReader.hx",259,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b557290fba582da0_266_readLineGradientStyle,"openfl.display._internal.DrawCommandReader","readLineGradientStyle",0x4416abb7,"openfl.display._internal.DrawCommandReader.readLineGradientStyle","openfl/display/_internal/DrawCommandReader.hx",266,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b557290fba582da0_273_readLineStyle,"openfl.display._internal.DrawCommandReader","readLineStyle",0x010cf5c7,"openfl.display._internal.DrawCommandReader.readLineStyle","openfl/display/_internal/DrawCommandReader.hx",273,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b557290fba582da0_280_readLineTo,"openfl.display._internal.DrawCommandReader","readLineTo",0xab2a7b25,"openfl.display._internal.DrawCommandReader.readLineTo","openfl/display/_internal/DrawCommandReader.hx",280,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b557290fba582da0_287_readMoveTo,"openfl.display._internal.DrawCommandReader","readMoveTo",0x8b370782,"openfl.display._internal.DrawCommandReader.readMoveTo","openfl/display/_internal/DrawCommandReader.hx",287,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b557290fba582da0_294_readOverrideBlendMode,"openfl.display._internal.DrawCommandReader","readOverrideBlendMode",0x7c0e7f92,"openfl.display._internal.DrawCommandReader.readOverrideBlendMode","openfl/display/_internal/DrawCommandReader.hx",294,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b557290fba582da0_301_readOverrideMatrix,"openfl.display._internal.DrawCommandReader","readOverrideMatrix",0xb4fb4843,"openfl.display._internal.DrawCommandReader.readOverrideMatrix","openfl/display/_internal/DrawCommandReader.hx",301,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b557290fba582da0_308_readWindingEvenOdd,"openfl.display._internal.DrawCommandReader","readWindingEvenOdd",0x065c1751,"openfl.display._internal.DrawCommandReader.readWindingEvenOdd","openfl/display/_internal/DrawCommandReader.hx",308,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b557290fba582da0_315_readWindingNonZero,"openfl.display._internal.DrawCommandReader","readWindingNonZero",0xd1916f71,"openfl.display._internal.DrawCommandReader.readWindingNonZero","openfl/display/_internal/DrawCommandReader.hx",315,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b557290fba582da0_323_reset,"openfl.display._internal.DrawCommandReader","reset",0x719bbd2f,"openfl.display._internal.DrawCommandReader.reset","openfl/display/_internal/DrawCommandReader.hx",323,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b557290fba582da0_327_skip,"openfl.display._internal.DrawCommandReader","skip",0xe3572f1f,"openfl.display._internal.DrawCommandReader.skip","openfl/display/_internal/DrawCommandReader.hx",327,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b557290fba582da0_22_boot,"openfl.display._internal.DrawCommandReader","boot",0xd81d9cd2,"openfl.display._internal.DrawCommandReader.boot","openfl/display/_internal/DrawCommandReader.hx",22,0x29f77eb3)
namespace openfl{
namespace display{
namespace _internal{

void DrawCommandReader_obj::__construct( ::openfl::display::_internal::DrawCommandBuffer buffer){
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_36_new)
HXLINE(  37)		this->buffer = buffer;
HXLINE(  39)		this->bPos = (this->iPos = (this->fPos = (this->oPos = (this->ffPos = (this->iiPos = (this->tsPos = 0))))));
HXLINE(  40)		this->prev = ::openfl::display::_internal::DrawCommandType_obj::UNKNOWN_dyn();
            	}

Dynamic DrawCommandReader_obj::__CreateEmpty() { return new DrawCommandReader_obj; }

void *DrawCommandReader_obj::_hx_vtable = 0;

Dynamic DrawCommandReader_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DrawCommandReader_obj > _hx_result = new DrawCommandReader_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool DrawCommandReader_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x30a4d7c0;
}

void DrawCommandReader_obj::advance(){
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_45_advance)
HXDLIN(  45)		switch((int)(this->prev->_hx_getIndex())){
            			case (int)0: {
HXLINE(  48)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  48)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXLINE(  49)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  49)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)1: {
HXLINE(  52)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  52)				_hx_tmp->iPos = (_hx_tmp->iPos + 1);
HXLINE(  53)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  53)				_hx_tmp1->fPos = (_hx_tmp1->fPos + 1);
            			}
            			break;
            			case (int)2: {
HXLINE(  56)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  56)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXLINE(  57)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  57)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXLINE(  58)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  58)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXLINE(  59)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  59)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)3: {
HXLINE(  62)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  62)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)4: {
HXLINE(  65)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  65)				_hx_tmp->fPos = (_hx_tmp->fPos + 6);
            			}
            			break;
            			case (int)5: {
HXLINE(  68)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  68)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)6: {
HXLINE(  71)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  71)				_hx_tmp->fPos = (_hx_tmp->fPos + 3);
            			}
            			break;
            			case (int)7: {
HXLINE(  74)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  74)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)8: {
HXLINE(  77)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  77)				_hx_tmp->oPos = (_hx_tmp->oPos + 3);
            			}
            			break;
            			case (int)9: {
HXLINE(  80)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  80)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)10: {
HXLINE(  83)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  83)				_hx_tmp->fPos = (_hx_tmp->fPos + 5);
HXLINE(  84)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  84)				_hx_tmp1->oPos = (_hx_tmp1->oPos + 1);
            			}
            			break;
            			case (int)12: {
HXLINE(  87)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  87)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
            			}
            			break;
            			case (int)13: {
            			}
            			break;
            			case (int)14: {
HXLINE(  94)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  94)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXLINE(  95)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  95)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)15: {
HXLINE(  98)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  98)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXLINE(  99)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  99)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXLINE( 100)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 100)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXLINE( 101)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 101)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)16: {
HXLINE( 104)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 104)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXLINE( 105)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 105)				_hx_tmp1->iPos = (_hx_tmp1->iPos + 1);
HXLINE( 106)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 106)				_hx_tmp2->fPos = (_hx_tmp2->fPos + 2);
HXLINE( 107)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 107)				_hx_tmp3->bPos = (_hx_tmp3->bPos + 1);
            			}
            			break;
            			case (int)17: {
HXLINE( 110)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 110)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)18: {
HXLINE( 113)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 113)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)19: {
HXLINE( 116)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 116)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)20: {
HXLINE( 119)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 119)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)21: case (int)22: {
            			}
            			break;
            			default:{
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,advance,(void))

bool DrawCommandReader_obj::_hx_bool(int index){
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_131_bool)
HXDLIN( 131)		return this->buffer->b->__get((this->bPos + index));
            	}


HX_DEFINE_DYNAMIC_FUNC1(DrawCommandReader_obj,_hx_bool,return )

void DrawCommandReader_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_135_destroy)
HXLINE( 136)		this->buffer = null();
HXLINE( 137)		this->reset();
            	}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,destroy,(void))

::Array< Float > DrawCommandReader_obj::fArr(int index){
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_142_fArr)
HXDLIN( 142)		return this->buffer->ff->__get((this->ffPos + index)).StaticCast< ::Array< Float > >();
            	}


HX_DEFINE_DYNAMIC_FUNC1(DrawCommandReader_obj,fArr,return )

Float DrawCommandReader_obj::_hx_float(int index){
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_147_float)
HXDLIN( 147)		return this->buffer->f->__get((this->fPos + index));
            	}


HX_DEFINE_DYNAMIC_FUNC1(DrawCommandReader_obj,_hx_float,return )

::Array< int > DrawCommandReader_obj::iArr(int index){
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_152_iArr)
HXDLIN( 152)		return this->buffer->ii->__get((this->iiPos + index)).StaticCast< ::Array< int > >();
            	}


HX_DEFINE_DYNAMIC_FUNC1(DrawCommandReader_obj,iArr,return )

int DrawCommandReader_obj::_hx_int(int index){
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_157_int)
HXDLIN( 157)		return this->buffer->i->__get((this->iPos + index));
            	}


HX_DEFINE_DYNAMIC_FUNC1(DrawCommandReader_obj,_hx_int,return )

 ::Dynamic DrawCommandReader_obj::obj(int index){
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_164_obj)
HXDLIN( 164)		return this->buffer->o->__get((this->oPos + index));
            	}


HX_DEFINE_DYNAMIC_FUNC1(DrawCommandReader_obj,obj,return )

 ::openfl::display::_internal::DrawCommandReader DrawCommandReader_obj::readBeginBitmapFill(){
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_168_readBeginBitmapFill)
HXLINE( 169)		switch((int)(this->prev->_hx_getIndex())){
            			case (int)0: {
HXLINE( 169)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 169)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 169)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 169)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)1: {
HXLINE( 169)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 169)				_hx_tmp->iPos = (_hx_tmp->iPos + 1);
HXDLIN( 169)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 169)				_hx_tmp1->fPos = (_hx_tmp1->fPos + 1);
            			}
            			break;
            			case (int)2: {
HXLINE( 169)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 169)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 169)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 169)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 169)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 169)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 169)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 169)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)3: {
HXLINE( 169)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 169)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)4: {
HXLINE( 169)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 169)				_hx_tmp->fPos = (_hx_tmp->fPos + 6);
            			}
            			break;
            			case (int)5: {
HXLINE( 169)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 169)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)6: {
HXLINE( 169)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 169)				_hx_tmp->fPos = (_hx_tmp->fPos + 3);
            			}
            			break;
            			case (int)7: {
HXLINE( 169)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 169)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)8: {
HXLINE( 169)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 169)				_hx_tmp->oPos = (_hx_tmp->oPos + 3);
            			}
            			break;
            			case (int)9: {
HXLINE( 169)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 169)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)10: {
HXLINE( 169)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 169)				_hx_tmp->fPos = (_hx_tmp->fPos + 5);
HXDLIN( 169)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 169)				_hx_tmp1->oPos = (_hx_tmp1->oPos + 1);
            			}
            			break;
            			case (int)12: {
HXLINE( 169)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 169)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
            			}
            			break;
            			case (int)13: {
            			}
            			break;
            			case (int)14: {
HXLINE( 169)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 169)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 169)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 169)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)15: {
HXLINE( 169)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 169)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 169)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 169)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 169)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 169)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 169)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 169)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)16: {
HXLINE( 169)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 169)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 169)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 169)				_hx_tmp1->iPos = (_hx_tmp1->iPos + 1);
HXDLIN( 169)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 169)				_hx_tmp2->fPos = (_hx_tmp2->fPos + 2);
HXDLIN( 169)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 169)				_hx_tmp3->bPos = (_hx_tmp3->bPos + 1);
            			}
            			break;
            			case (int)17: {
HXLINE( 169)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 169)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)18: {
HXLINE( 169)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 169)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)19: {
HXLINE( 169)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 169)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)20: {
HXLINE( 169)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 169)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)21: case (int)22: {
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 170)		this->prev = ::openfl::display::_internal::DrawCommandType_obj::BEGIN_BITMAP_FILL_dyn();
HXLINE( 171)		 ::openfl::display::_internal::DrawCommandReader this1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 171)		return this1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readBeginBitmapFill,return )

 ::openfl::display::_internal::DrawCommandReader DrawCommandReader_obj::readBeginFill(){
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_175_readBeginFill)
HXLINE( 176)		switch((int)(this->prev->_hx_getIndex())){
            			case (int)0: {
HXLINE( 176)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 176)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 176)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 176)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)1: {
HXLINE( 176)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 176)				_hx_tmp->iPos = (_hx_tmp->iPos + 1);
HXDLIN( 176)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 176)				_hx_tmp1->fPos = (_hx_tmp1->fPos + 1);
            			}
            			break;
            			case (int)2: {
HXLINE( 176)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 176)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 176)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 176)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 176)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 176)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 176)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 176)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)3: {
HXLINE( 176)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 176)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)4: {
HXLINE( 176)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 176)				_hx_tmp->fPos = (_hx_tmp->fPos + 6);
            			}
            			break;
            			case (int)5: {
HXLINE( 176)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 176)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)6: {
HXLINE( 176)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 176)				_hx_tmp->fPos = (_hx_tmp->fPos + 3);
            			}
            			break;
            			case (int)7: {
HXLINE( 176)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 176)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)8: {
HXLINE( 176)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 176)				_hx_tmp->oPos = (_hx_tmp->oPos + 3);
            			}
            			break;
            			case (int)9: {
HXLINE( 176)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 176)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)10: {
HXLINE( 176)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 176)				_hx_tmp->fPos = (_hx_tmp->fPos + 5);
HXDLIN( 176)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 176)				_hx_tmp1->oPos = (_hx_tmp1->oPos + 1);
            			}
            			break;
            			case (int)12: {
HXLINE( 176)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 176)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
            			}
            			break;
            			case (int)13: {
            			}
            			break;
            			case (int)14: {
HXLINE( 176)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 176)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 176)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 176)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)15: {
HXLINE( 176)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 176)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 176)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 176)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 176)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 176)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 176)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 176)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)16: {
HXLINE( 176)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 176)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 176)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 176)				_hx_tmp1->iPos = (_hx_tmp1->iPos + 1);
HXDLIN( 176)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 176)				_hx_tmp2->fPos = (_hx_tmp2->fPos + 2);
HXDLIN( 176)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 176)				_hx_tmp3->bPos = (_hx_tmp3->bPos + 1);
            			}
            			break;
            			case (int)17: {
HXLINE( 176)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 176)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)18: {
HXLINE( 176)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 176)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)19: {
HXLINE( 176)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 176)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)20: {
HXLINE( 176)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 176)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)21: case (int)22: {
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 177)		this->prev = ::openfl::display::_internal::DrawCommandType_obj::BEGIN_FILL_dyn();
HXLINE( 178)		 ::openfl::display::_internal::DrawCommandReader this1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 178)		return this1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readBeginFill,return )

 ::openfl::display::_internal::DrawCommandReader DrawCommandReader_obj::readBeginGradientFill(){
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_182_readBeginGradientFill)
HXLINE( 183)		switch((int)(this->prev->_hx_getIndex())){
            			case (int)0: {
HXLINE( 183)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 183)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 183)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 183)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)1: {
HXLINE( 183)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 183)				_hx_tmp->iPos = (_hx_tmp->iPos + 1);
HXDLIN( 183)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 183)				_hx_tmp1->fPos = (_hx_tmp1->fPos + 1);
            			}
            			break;
            			case (int)2: {
HXLINE( 183)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 183)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 183)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 183)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 183)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 183)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 183)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 183)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)3: {
HXLINE( 183)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 183)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)4: {
HXLINE( 183)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 183)				_hx_tmp->fPos = (_hx_tmp->fPos + 6);
            			}
            			break;
            			case (int)5: {
HXLINE( 183)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 183)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)6: {
HXLINE( 183)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 183)				_hx_tmp->fPos = (_hx_tmp->fPos + 3);
            			}
            			break;
            			case (int)7: {
HXLINE( 183)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 183)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)8: {
HXLINE( 183)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 183)				_hx_tmp->oPos = (_hx_tmp->oPos + 3);
            			}
            			break;
            			case (int)9: {
HXLINE( 183)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 183)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)10: {
HXLINE( 183)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 183)				_hx_tmp->fPos = (_hx_tmp->fPos + 5);
HXDLIN( 183)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 183)				_hx_tmp1->oPos = (_hx_tmp1->oPos + 1);
            			}
            			break;
            			case (int)12: {
HXLINE( 183)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 183)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
            			}
            			break;
            			case (int)13: {
            			}
            			break;
            			case (int)14: {
HXLINE( 183)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 183)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 183)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 183)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)15: {
HXLINE( 183)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 183)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 183)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 183)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 183)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 183)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 183)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 183)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)16: {
HXLINE( 183)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 183)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 183)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 183)				_hx_tmp1->iPos = (_hx_tmp1->iPos + 1);
HXDLIN( 183)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 183)				_hx_tmp2->fPos = (_hx_tmp2->fPos + 2);
HXDLIN( 183)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 183)				_hx_tmp3->bPos = (_hx_tmp3->bPos + 1);
            			}
            			break;
            			case (int)17: {
HXLINE( 183)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 183)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)18: {
HXLINE( 183)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 183)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)19: {
HXLINE( 183)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 183)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)20: {
HXLINE( 183)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 183)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)21: case (int)22: {
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 184)		this->prev = ::openfl::display::_internal::DrawCommandType_obj::BEGIN_GRADIENT_FILL_dyn();
HXLINE( 185)		 ::openfl::display::_internal::DrawCommandReader this1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 185)		return this1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readBeginGradientFill,return )

 ::openfl::display::_internal::DrawCommandReader DrawCommandReader_obj::readBeginShaderFill(){
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_189_readBeginShaderFill)
HXLINE( 190)		switch((int)(this->prev->_hx_getIndex())){
            			case (int)0: {
HXLINE( 190)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 190)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 190)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 190)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)1: {
HXLINE( 190)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 190)				_hx_tmp->iPos = (_hx_tmp->iPos + 1);
HXDLIN( 190)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 190)				_hx_tmp1->fPos = (_hx_tmp1->fPos + 1);
            			}
            			break;
            			case (int)2: {
HXLINE( 190)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 190)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 190)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 190)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 190)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 190)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 190)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 190)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)3: {
HXLINE( 190)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 190)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)4: {
HXLINE( 190)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 190)				_hx_tmp->fPos = (_hx_tmp->fPos + 6);
            			}
            			break;
            			case (int)5: {
HXLINE( 190)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 190)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)6: {
HXLINE( 190)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 190)				_hx_tmp->fPos = (_hx_tmp->fPos + 3);
            			}
            			break;
            			case (int)7: {
HXLINE( 190)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 190)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)8: {
HXLINE( 190)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 190)				_hx_tmp->oPos = (_hx_tmp->oPos + 3);
            			}
            			break;
            			case (int)9: {
HXLINE( 190)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 190)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)10: {
HXLINE( 190)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 190)				_hx_tmp->fPos = (_hx_tmp->fPos + 5);
HXDLIN( 190)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 190)				_hx_tmp1->oPos = (_hx_tmp1->oPos + 1);
            			}
            			break;
            			case (int)12: {
HXLINE( 190)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 190)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
            			}
            			break;
            			case (int)13: {
            			}
            			break;
            			case (int)14: {
HXLINE( 190)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 190)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 190)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 190)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)15: {
HXLINE( 190)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 190)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 190)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 190)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 190)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 190)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 190)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 190)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)16: {
HXLINE( 190)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 190)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 190)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 190)				_hx_tmp1->iPos = (_hx_tmp1->iPos + 1);
HXDLIN( 190)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 190)				_hx_tmp2->fPos = (_hx_tmp2->fPos + 2);
HXDLIN( 190)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 190)				_hx_tmp3->bPos = (_hx_tmp3->bPos + 1);
            			}
            			break;
            			case (int)17: {
HXLINE( 190)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 190)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)18: {
HXLINE( 190)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 190)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)19: {
HXLINE( 190)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 190)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)20: {
HXLINE( 190)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 190)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)21: case (int)22: {
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 191)		this->prev = ::openfl::display::_internal::DrawCommandType_obj::BEGIN_SHADER_FILL_dyn();
HXLINE( 192)		 ::openfl::display::_internal::DrawCommandReader this1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 192)		return this1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readBeginShaderFill,return )

 ::openfl::display::_internal::DrawCommandReader DrawCommandReader_obj::readCubicCurveTo(){
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_196_readCubicCurveTo)
HXLINE( 197)		switch((int)(this->prev->_hx_getIndex())){
            			case (int)0: {
HXLINE( 197)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 197)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 197)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 197)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)1: {
HXLINE( 197)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 197)				_hx_tmp->iPos = (_hx_tmp->iPos + 1);
HXDLIN( 197)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 197)				_hx_tmp1->fPos = (_hx_tmp1->fPos + 1);
            			}
            			break;
            			case (int)2: {
HXLINE( 197)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 197)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 197)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 197)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 197)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 197)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 197)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 197)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)3: {
HXLINE( 197)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 197)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)4: {
HXLINE( 197)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 197)				_hx_tmp->fPos = (_hx_tmp->fPos + 6);
            			}
            			break;
            			case (int)5: {
HXLINE( 197)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 197)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)6: {
HXLINE( 197)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 197)				_hx_tmp->fPos = (_hx_tmp->fPos + 3);
            			}
            			break;
            			case (int)7: {
HXLINE( 197)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 197)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)8: {
HXLINE( 197)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 197)				_hx_tmp->oPos = (_hx_tmp->oPos + 3);
            			}
            			break;
            			case (int)9: {
HXLINE( 197)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 197)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)10: {
HXLINE( 197)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 197)				_hx_tmp->fPos = (_hx_tmp->fPos + 5);
HXDLIN( 197)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 197)				_hx_tmp1->oPos = (_hx_tmp1->oPos + 1);
            			}
            			break;
            			case (int)12: {
HXLINE( 197)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 197)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
            			}
            			break;
            			case (int)13: {
            			}
            			break;
            			case (int)14: {
HXLINE( 197)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 197)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 197)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 197)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)15: {
HXLINE( 197)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 197)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 197)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 197)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 197)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 197)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 197)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 197)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)16: {
HXLINE( 197)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 197)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 197)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 197)				_hx_tmp1->iPos = (_hx_tmp1->iPos + 1);
HXDLIN( 197)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 197)				_hx_tmp2->fPos = (_hx_tmp2->fPos + 2);
HXDLIN( 197)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 197)				_hx_tmp3->bPos = (_hx_tmp3->bPos + 1);
            			}
            			break;
            			case (int)17: {
HXLINE( 197)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 197)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)18: {
HXLINE( 197)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 197)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)19: {
HXLINE( 197)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 197)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)20: {
HXLINE( 197)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 197)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)21: case (int)22: {
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 198)		this->prev = ::openfl::display::_internal::DrawCommandType_obj::CUBIC_CURVE_TO_dyn();
HXLINE( 199)		 ::openfl::display::_internal::DrawCommandReader this1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 199)		return this1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readCubicCurveTo,return )

 ::openfl::display::_internal::DrawCommandReader DrawCommandReader_obj::readCurveTo(){
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_203_readCurveTo)
HXLINE( 204)		switch((int)(this->prev->_hx_getIndex())){
            			case (int)0: {
HXLINE( 204)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 204)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 204)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 204)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)1: {
HXLINE( 204)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 204)				_hx_tmp->iPos = (_hx_tmp->iPos + 1);
HXDLIN( 204)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 204)				_hx_tmp1->fPos = (_hx_tmp1->fPos + 1);
            			}
            			break;
            			case (int)2: {
HXLINE( 204)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 204)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 204)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 204)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 204)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 204)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 204)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 204)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)3: {
HXLINE( 204)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 204)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)4: {
HXLINE( 204)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 204)				_hx_tmp->fPos = (_hx_tmp->fPos + 6);
            			}
            			break;
            			case (int)5: {
HXLINE( 204)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 204)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)6: {
HXLINE( 204)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 204)				_hx_tmp->fPos = (_hx_tmp->fPos + 3);
            			}
            			break;
            			case (int)7: {
HXLINE( 204)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 204)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)8: {
HXLINE( 204)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 204)				_hx_tmp->oPos = (_hx_tmp->oPos + 3);
            			}
            			break;
            			case (int)9: {
HXLINE( 204)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 204)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)10: {
HXLINE( 204)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 204)				_hx_tmp->fPos = (_hx_tmp->fPos + 5);
HXDLIN( 204)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 204)				_hx_tmp1->oPos = (_hx_tmp1->oPos + 1);
            			}
            			break;
            			case (int)12: {
HXLINE( 204)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 204)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
            			}
            			break;
            			case (int)13: {
            			}
            			break;
            			case (int)14: {
HXLINE( 204)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 204)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 204)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 204)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)15: {
HXLINE( 204)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 204)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 204)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 204)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 204)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 204)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 204)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 204)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)16: {
HXLINE( 204)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 204)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 204)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 204)				_hx_tmp1->iPos = (_hx_tmp1->iPos + 1);
HXDLIN( 204)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 204)				_hx_tmp2->fPos = (_hx_tmp2->fPos + 2);
HXDLIN( 204)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 204)				_hx_tmp3->bPos = (_hx_tmp3->bPos + 1);
            			}
            			break;
            			case (int)17: {
HXLINE( 204)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 204)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)18: {
HXLINE( 204)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 204)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)19: {
HXLINE( 204)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 204)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)20: {
HXLINE( 204)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 204)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)21: case (int)22: {
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 205)		this->prev = ::openfl::display::_internal::DrawCommandType_obj::CURVE_TO_dyn();
HXLINE( 206)		 ::openfl::display::_internal::DrawCommandReader this1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 206)		return this1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readCurveTo,return )

 ::openfl::display::_internal::DrawCommandReader DrawCommandReader_obj::readDrawCircle(){
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_210_readDrawCircle)
HXLINE( 211)		switch((int)(this->prev->_hx_getIndex())){
            			case (int)0: {
HXLINE( 211)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 211)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 211)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 211)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)1: {
HXLINE( 211)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 211)				_hx_tmp->iPos = (_hx_tmp->iPos + 1);
HXDLIN( 211)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 211)				_hx_tmp1->fPos = (_hx_tmp1->fPos + 1);
            			}
            			break;
            			case (int)2: {
HXLINE( 211)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 211)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 211)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 211)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 211)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 211)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 211)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 211)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)3: {
HXLINE( 211)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 211)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)4: {
HXLINE( 211)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 211)				_hx_tmp->fPos = (_hx_tmp->fPos + 6);
            			}
            			break;
            			case (int)5: {
HXLINE( 211)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 211)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)6: {
HXLINE( 211)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 211)				_hx_tmp->fPos = (_hx_tmp->fPos + 3);
            			}
            			break;
            			case (int)7: {
HXLINE( 211)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 211)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)8: {
HXLINE( 211)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 211)				_hx_tmp->oPos = (_hx_tmp->oPos + 3);
            			}
            			break;
            			case (int)9: {
HXLINE( 211)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 211)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)10: {
HXLINE( 211)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 211)				_hx_tmp->fPos = (_hx_tmp->fPos + 5);
HXDLIN( 211)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 211)				_hx_tmp1->oPos = (_hx_tmp1->oPos + 1);
            			}
            			break;
            			case (int)12: {
HXLINE( 211)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 211)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
            			}
            			break;
            			case (int)13: {
            			}
            			break;
            			case (int)14: {
HXLINE( 211)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 211)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 211)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 211)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)15: {
HXLINE( 211)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 211)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 211)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 211)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 211)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 211)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 211)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 211)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)16: {
HXLINE( 211)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 211)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 211)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 211)				_hx_tmp1->iPos = (_hx_tmp1->iPos + 1);
HXDLIN( 211)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 211)				_hx_tmp2->fPos = (_hx_tmp2->fPos + 2);
HXDLIN( 211)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 211)				_hx_tmp3->bPos = (_hx_tmp3->bPos + 1);
            			}
            			break;
            			case (int)17: {
HXLINE( 211)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 211)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)18: {
HXLINE( 211)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 211)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)19: {
HXLINE( 211)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 211)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)20: {
HXLINE( 211)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 211)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)21: case (int)22: {
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 212)		this->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_CIRCLE_dyn();
HXLINE( 213)		 ::openfl::display::_internal::DrawCommandReader this1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 213)		return this1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readDrawCircle,return )

 ::openfl::display::_internal::DrawCommandReader DrawCommandReader_obj::readDrawEllipse(){
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_217_readDrawEllipse)
HXLINE( 218)		switch((int)(this->prev->_hx_getIndex())){
            			case (int)0: {
HXLINE( 218)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 218)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 218)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 218)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)1: {
HXLINE( 218)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 218)				_hx_tmp->iPos = (_hx_tmp->iPos + 1);
HXDLIN( 218)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 218)				_hx_tmp1->fPos = (_hx_tmp1->fPos + 1);
            			}
            			break;
            			case (int)2: {
HXLINE( 218)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 218)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 218)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 218)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 218)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 218)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 218)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 218)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)3: {
HXLINE( 218)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 218)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)4: {
HXLINE( 218)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 218)				_hx_tmp->fPos = (_hx_tmp->fPos + 6);
            			}
            			break;
            			case (int)5: {
HXLINE( 218)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 218)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)6: {
HXLINE( 218)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 218)				_hx_tmp->fPos = (_hx_tmp->fPos + 3);
            			}
            			break;
            			case (int)7: {
HXLINE( 218)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 218)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)8: {
HXLINE( 218)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 218)				_hx_tmp->oPos = (_hx_tmp->oPos + 3);
            			}
            			break;
            			case (int)9: {
HXLINE( 218)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 218)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)10: {
HXLINE( 218)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 218)				_hx_tmp->fPos = (_hx_tmp->fPos + 5);
HXDLIN( 218)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 218)				_hx_tmp1->oPos = (_hx_tmp1->oPos + 1);
            			}
            			break;
            			case (int)12: {
HXLINE( 218)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 218)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
            			}
            			break;
            			case (int)13: {
            			}
            			break;
            			case (int)14: {
HXLINE( 218)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 218)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 218)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 218)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)15: {
HXLINE( 218)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 218)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 218)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 218)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 218)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 218)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 218)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 218)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)16: {
HXLINE( 218)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 218)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 218)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 218)				_hx_tmp1->iPos = (_hx_tmp1->iPos + 1);
HXDLIN( 218)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 218)				_hx_tmp2->fPos = (_hx_tmp2->fPos + 2);
HXDLIN( 218)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 218)				_hx_tmp3->bPos = (_hx_tmp3->bPos + 1);
            			}
            			break;
            			case (int)17: {
HXLINE( 218)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 218)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)18: {
HXLINE( 218)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 218)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)19: {
HXLINE( 218)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 218)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)20: {
HXLINE( 218)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 218)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)21: case (int)22: {
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 219)		this->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_ELLIPSE_dyn();
HXLINE( 220)		 ::openfl::display::_internal::DrawCommandReader this1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 220)		return this1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readDrawEllipse,return )

 ::openfl::display::_internal::DrawCommandReader DrawCommandReader_obj::readDrawQuads(){
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_224_readDrawQuads)
HXLINE( 225)		switch((int)(this->prev->_hx_getIndex())){
            			case (int)0: {
HXLINE( 225)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 225)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 225)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 225)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)1: {
HXLINE( 225)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 225)				_hx_tmp->iPos = (_hx_tmp->iPos + 1);
HXDLIN( 225)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 225)				_hx_tmp1->fPos = (_hx_tmp1->fPos + 1);
            			}
            			break;
            			case (int)2: {
HXLINE( 225)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 225)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 225)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 225)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 225)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 225)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 225)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 225)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)3: {
HXLINE( 225)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 225)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)4: {
HXLINE( 225)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 225)				_hx_tmp->fPos = (_hx_tmp->fPos + 6);
            			}
            			break;
            			case (int)5: {
HXLINE( 225)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 225)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)6: {
HXLINE( 225)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 225)				_hx_tmp->fPos = (_hx_tmp->fPos + 3);
            			}
            			break;
            			case (int)7: {
HXLINE( 225)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 225)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)8: {
HXLINE( 225)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 225)				_hx_tmp->oPos = (_hx_tmp->oPos + 3);
            			}
            			break;
            			case (int)9: {
HXLINE( 225)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 225)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)10: {
HXLINE( 225)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 225)				_hx_tmp->fPos = (_hx_tmp->fPos + 5);
HXDLIN( 225)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 225)				_hx_tmp1->oPos = (_hx_tmp1->oPos + 1);
            			}
            			break;
            			case (int)12: {
HXLINE( 225)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 225)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
            			}
            			break;
            			case (int)13: {
            			}
            			break;
            			case (int)14: {
HXLINE( 225)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 225)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 225)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 225)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)15: {
HXLINE( 225)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 225)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 225)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 225)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 225)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 225)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 225)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 225)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)16: {
HXLINE( 225)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 225)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 225)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 225)				_hx_tmp1->iPos = (_hx_tmp1->iPos + 1);
HXDLIN( 225)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 225)				_hx_tmp2->fPos = (_hx_tmp2->fPos + 2);
HXDLIN( 225)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 225)				_hx_tmp3->bPos = (_hx_tmp3->bPos + 1);
            			}
            			break;
            			case (int)17: {
HXLINE( 225)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 225)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)18: {
HXLINE( 225)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 225)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)19: {
HXLINE( 225)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 225)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)20: {
HXLINE( 225)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 225)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)21: case (int)22: {
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 226)		this->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_QUADS_dyn();
HXLINE( 227)		 ::openfl::display::_internal::DrawCommandReader this1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 227)		return this1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readDrawQuads,return )

 ::openfl::display::_internal::DrawCommandReader DrawCommandReader_obj::readDrawRect(){
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_231_readDrawRect)
HXLINE( 232)		switch((int)(this->prev->_hx_getIndex())){
            			case (int)0: {
HXLINE( 232)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 232)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 232)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 232)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)1: {
HXLINE( 232)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 232)				_hx_tmp->iPos = (_hx_tmp->iPos + 1);
HXDLIN( 232)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 232)				_hx_tmp1->fPos = (_hx_tmp1->fPos + 1);
            			}
            			break;
            			case (int)2: {
HXLINE( 232)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 232)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 232)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 232)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 232)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 232)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 232)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 232)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)3: {
HXLINE( 232)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 232)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)4: {
HXLINE( 232)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 232)				_hx_tmp->fPos = (_hx_tmp->fPos + 6);
            			}
            			break;
            			case (int)5: {
HXLINE( 232)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 232)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)6: {
HXLINE( 232)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 232)				_hx_tmp->fPos = (_hx_tmp->fPos + 3);
            			}
            			break;
            			case (int)7: {
HXLINE( 232)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 232)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)8: {
HXLINE( 232)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 232)				_hx_tmp->oPos = (_hx_tmp->oPos + 3);
            			}
            			break;
            			case (int)9: {
HXLINE( 232)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 232)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)10: {
HXLINE( 232)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 232)				_hx_tmp->fPos = (_hx_tmp->fPos + 5);
HXDLIN( 232)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 232)				_hx_tmp1->oPos = (_hx_tmp1->oPos + 1);
            			}
            			break;
            			case (int)12: {
HXLINE( 232)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 232)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
            			}
            			break;
            			case (int)13: {
            			}
            			break;
            			case (int)14: {
HXLINE( 232)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 232)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 232)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 232)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)15: {
HXLINE( 232)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 232)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 232)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 232)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 232)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 232)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 232)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 232)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)16: {
HXLINE( 232)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 232)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 232)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 232)				_hx_tmp1->iPos = (_hx_tmp1->iPos + 1);
HXDLIN( 232)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 232)				_hx_tmp2->fPos = (_hx_tmp2->fPos + 2);
HXDLIN( 232)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 232)				_hx_tmp3->bPos = (_hx_tmp3->bPos + 1);
            			}
            			break;
            			case (int)17: {
HXLINE( 232)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 232)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)18: {
HXLINE( 232)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 232)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)19: {
HXLINE( 232)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 232)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)20: {
HXLINE( 232)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 232)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)21: case (int)22: {
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 233)		this->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_RECT_dyn();
HXLINE( 234)		 ::openfl::display::_internal::DrawCommandReader this1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 234)		return this1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readDrawRect,return )

 ::openfl::display::_internal::DrawCommandReader DrawCommandReader_obj::readDrawRoundRect(){
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_238_readDrawRoundRect)
HXLINE( 239)		switch((int)(this->prev->_hx_getIndex())){
            			case (int)0: {
HXLINE( 239)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 239)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 239)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 239)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)1: {
HXLINE( 239)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 239)				_hx_tmp->iPos = (_hx_tmp->iPos + 1);
HXDLIN( 239)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 239)				_hx_tmp1->fPos = (_hx_tmp1->fPos + 1);
            			}
            			break;
            			case (int)2: {
HXLINE( 239)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 239)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 239)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 239)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 239)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 239)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 239)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 239)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)3: {
HXLINE( 239)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 239)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)4: {
HXLINE( 239)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 239)				_hx_tmp->fPos = (_hx_tmp->fPos + 6);
            			}
            			break;
            			case (int)5: {
HXLINE( 239)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 239)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)6: {
HXLINE( 239)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 239)				_hx_tmp->fPos = (_hx_tmp->fPos + 3);
            			}
            			break;
            			case (int)7: {
HXLINE( 239)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 239)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)8: {
HXLINE( 239)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 239)				_hx_tmp->oPos = (_hx_tmp->oPos + 3);
            			}
            			break;
            			case (int)9: {
HXLINE( 239)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 239)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)10: {
HXLINE( 239)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 239)				_hx_tmp->fPos = (_hx_tmp->fPos + 5);
HXDLIN( 239)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 239)				_hx_tmp1->oPos = (_hx_tmp1->oPos + 1);
            			}
            			break;
            			case (int)12: {
HXLINE( 239)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 239)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
            			}
            			break;
            			case (int)13: {
            			}
            			break;
            			case (int)14: {
HXLINE( 239)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 239)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 239)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 239)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)15: {
HXLINE( 239)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 239)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 239)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 239)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 239)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 239)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 239)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 239)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)16: {
HXLINE( 239)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 239)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 239)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 239)				_hx_tmp1->iPos = (_hx_tmp1->iPos + 1);
HXDLIN( 239)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 239)				_hx_tmp2->fPos = (_hx_tmp2->fPos + 2);
HXDLIN( 239)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 239)				_hx_tmp3->bPos = (_hx_tmp3->bPos + 1);
            			}
            			break;
            			case (int)17: {
HXLINE( 239)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 239)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)18: {
HXLINE( 239)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 239)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)19: {
HXLINE( 239)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 239)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)20: {
HXLINE( 239)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 239)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)21: case (int)22: {
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 240)		this->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_ROUND_RECT_dyn();
HXLINE( 241)		 ::openfl::display::_internal::DrawCommandReader this1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 241)		return this1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readDrawRoundRect,return )

 ::openfl::display::_internal::DrawCommandReader DrawCommandReader_obj::readDrawTriangles(){
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_245_readDrawTriangles)
HXLINE( 246)		switch((int)(this->prev->_hx_getIndex())){
            			case (int)0: {
HXLINE( 246)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 246)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 246)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 246)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)1: {
HXLINE( 246)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 246)				_hx_tmp->iPos = (_hx_tmp->iPos + 1);
HXDLIN( 246)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 246)				_hx_tmp1->fPos = (_hx_tmp1->fPos + 1);
            			}
            			break;
            			case (int)2: {
HXLINE( 246)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 246)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 246)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 246)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 246)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 246)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 246)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 246)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)3: {
HXLINE( 246)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 246)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)4: {
HXLINE( 246)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 246)				_hx_tmp->fPos = (_hx_tmp->fPos + 6);
            			}
            			break;
            			case (int)5: {
HXLINE( 246)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 246)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)6: {
HXLINE( 246)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 246)				_hx_tmp->fPos = (_hx_tmp->fPos + 3);
            			}
            			break;
            			case (int)7: {
HXLINE( 246)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 246)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)8: {
HXLINE( 246)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 246)				_hx_tmp->oPos = (_hx_tmp->oPos + 3);
            			}
            			break;
            			case (int)9: {
HXLINE( 246)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 246)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)10: {
HXLINE( 246)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 246)				_hx_tmp->fPos = (_hx_tmp->fPos + 5);
HXDLIN( 246)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 246)				_hx_tmp1->oPos = (_hx_tmp1->oPos + 1);
            			}
            			break;
            			case (int)12: {
HXLINE( 246)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 246)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
            			}
            			break;
            			case (int)13: {
            			}
            			break;
            			case (int)14: {
HXLINE( 246)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 246)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 246)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 246)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)15: {
HXLINE( 246)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 246)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 246)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 246)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 246)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 246)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 246)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 246)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)16: {
HXLINE( 246)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 246)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 246)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 246)				_hx_tmp1->iPos = (_hx_tmp1->iPos + 1);
HXDLIN( 246)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 246)				_hx_tmp2->fPos = (_hx_tmp2->fPos + 2);
HXDLIN( 246)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 246)				_hx_tmp3->bPos = (_hx_tmp3->bPos + 1);
            			}
            			break;
            			case (int)17: {
HXLINE( 246)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 246)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)18: {
HXLINE( 246)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 246)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)19: {
HXLINE( 246)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 246)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)20: {
HXLINE( 246)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 246)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)21: case (int)22: {
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 247)		this->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_TRIANGLES_dyn();
HXLINE( 248)		 ::openfl::display::_internal::DrawCommandReader this1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 248)		return this1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readDrawTriangles,return )

 ::openfl::display::_internal::DrawCommandReader DrawCommandReader_obj::readEndFill(){
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_252_readEndFill)
HXLINE( 253)		switch((int)(this->prev->_hx_getIndex())){
            			case (int)0: {
HXLINE( 253)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 253)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 253)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 253)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)1: {
HXLINE( 253)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 253)				_hx_tmp->iPos = (_hx_tmp->iPos + 1);
HXDLIN( 253)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 253)				_hx_tmp1->fPos = (_hx_tmp1->fPos + 1);
            			}
            			break;
            			case (int)2: {
HXLINE( 253)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 253)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 253)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 253)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 253)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 253)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 253)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 253)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)3: {
HXLINE( 253)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 253)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)4: {
HXLINE( 253)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 253)				_hx_tmp->fPos = (_hx_tmp->fPos + 6);
            			}
            			break;
            			case (int)5: {
HXLINE( 253)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 253)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)6: {
HXLINE( 253)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 253)				_hx_tmp->fPos = (_hx_tmp->fPos + 3);
            			}
            			break;
            			case (int)7: {
HXLINE( 253)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 253)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)8: {
HXLINE( 253)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 253)				_hx_tmp->oPos = (_hx_tmp->oPos + 3);
            			}
            			break;
            			case (int)9: {
HXLINE( 253)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 253)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)10: {
HXLINE( 253)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 253)				_hx_tmp->fPos = (_hx_tmp->fPos + 5);
HXDLIN( 253)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 253)				_hx_tmp1->oPos = (_hx_tmp1->oPos + 1);
            			}
            			break;
            			case (int)12: {
HXLINE( 253)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 253)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
            			}
            			break;
            			case (int)13: {
            			}
            			break;
            			case (int)14: {
HXLINE( 253)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 253)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 253)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 253)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)15: {
HXLINE( 253)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 253)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 253)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 253)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 253)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 253)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 253)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 253)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)16: {
HXLINE( 253)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 253)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 253)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 253)				_hx_tmp1->iPos = (_hx_tmp1->iPos + 1);
HXDLIN( 253)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 253)				_hx_tmp2->fPos = (_hx_tmp2->fPos + 2);
HXDLIN( 253)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 253)				_hx_tmp3->bPos = (_hx_tmp3->bPos + 1);
            			}
            			break;
            			case (int)17: {
HXLINE( 253)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 253)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)18: {
HXLINE( 253)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 253)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)19: {
HXLINE( 253)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 253)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)20: {
HXLINE( 253)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 253)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)21: case (int)22: {
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 254)		this->prev = ::openfl::display::_internal::DrawCommandType_obj::END_FILL_dyn();
HXLINE( 255)		 ::openfl::display::_internal::DrawCommandReader this1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 255)		return this1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readEndFill,return )

 ::openfl::display::_internal::DrawCommandReader DrawCommandReader_obj::readLineBitmapStyle(){
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_259_readLineBitmapStyle)
HXLINE( 260)		switch((int)(this->prev->_hx_getIndex())){
            			case (int)0: {
HXLINE( 260)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 260)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 260)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 260)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)1: {
HXLINE( 260)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 260)				_hx_tmp->iPos = (_hx_tmp->iPos + 1);
HXDLIN( 260)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 260)				_hx_tmp1->fPos = (_hx_tmp1->fPos + 1);
            			}
            			break;
            			case (int)2: {
HXLINE( 260)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 260)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 260)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 260)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 260)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 260)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 260)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 260)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)3: {
HXLINE( 260)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 260)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)4: {
HXLINE( 260)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 260)				_hx_tmp->fPos = (_hx_tmp->fPos + 6);
            			}
            			break;
            			case (int)5: {
HXLINE( 260)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 260)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)6: {
HXLINE( 260)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 260)				_hx_tmp->fPos = (_hx_tmp->fPos + 3);
            			}
            			break;
            			case (int)7: {
HXLINE( 260)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 260)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)8: {
HXLINE( 260)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 260)				_hx_tmp->oPos = (_hx_tmp->oPos + 3);
            			}
            			break;
            			case (int)9: {
HXLINE( 260)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 260)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)10: {
HXLINE( 260)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 260)				_hx_tmp->fPos = (_hx_tmp->fPos + 5);
HXDLIN( 260)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 260)				_hx_tmp1->oPos = (_hx_tmp1->oPos + 1);
            			}
            			break;
            			case (int)12: {
HXLINE( 260)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 260)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
            			}
            			break;
            			case (int)13: {
            			}
            			break;
            			case (int)14: {
HXLINE( 260)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 260)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 260)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 260)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)15: {
HXLINE( 260)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 260)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 260)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 260)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 260)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 260)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 260)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 260)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)16: {
HXLINE( 260)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 260)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 260)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 260)				_hx_tmp1->iPos = (_hx_tmp1->iPos + 1);
HXDLIN( 260)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 260)				_hx_tmp2->fPos = (_hx_tmp2->fPos + 2);
HXDLIN( 260)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 260)				_hx_tmp3->bPos = (_hx_tmp3->bPos + 1);
            			}
            			break;
            			case (int)17: {
HXLINE( 260)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 260)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)18: {
HXLINE( 260)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 260)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)19: {
HXLINE( 260)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 260)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)20: {
HXLINE( 260)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 260)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)21: case (int)22: {
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 261)		this->prev = ::openfl::display::_internal::DrawCommandType_obj::LINE_BITMAP_STYLE_dyn();
HXLINE( 262)		 ::openfl::display::_internal::DrawCommandReader this1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 262)		return this1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readLineBitmapStyle,return )

 ::openfl::display::_internal::DrawCommandReader DrawCommandReader_obj::readLineGradientStyle(){
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_266_readLineGradientStyle)
HXLINE( 267)		switch((int)(this->prev->_hx_getIndex())){
            			case (int)0: {
HXLINE( 267)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 267)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 267)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 267)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)1: {
HXLINE( 267)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 267)				_hx_tmp->iPos = (_hx_tmp->iPos + 1);
HXDLIN( 267)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 267)				_hx_tmp1->fPos = (_hx_tmp1->fPos + 1);
            			}
            			break;
            			case (int)2: {
HXLINE( 267)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 267)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 267)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 267)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 267)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 267)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 267)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 267)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)3: {
HXLINE( 267)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 267)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)4: {
HXLINE( 267)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 267)				_hx_tmp->fPos = (_hx_tmp->fPos + 6);
            			}
            			break;
            			case (int)5: {
HXLINE( 267)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 267)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)6: {
HXLINE( 267)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 267)				_hx_tmp->fPos = (_hx_tmp->fPos + 3);
            			}
            			break;
            			case (int)7: {
HXLINE( 267)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 267)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)8: {
HXLINE( 267)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 267)				_hx_tmp->oPos = (_hx_tmp->oPos + 3);
            			}
            			break;
            			case (int)9: {
HXLINE( 267)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 267)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)10: {
HXLINE( 267)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 267)				_hx_tmp->fPos = (_hx_tmp->fPos + 5);
HXDLIN( 267)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 267)				_hx_tmp1->oPos = (_hx_tmp1->oPos + 1);
            			}
            			break;
            			case (int)12: {
HXLINE( 267)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 267)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
            			}
            			break;
            			case (int)13: {
            			}
            			break;
            			case (int)14: {
HXLINE( 267)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 267)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 267)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 267)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)15: {
HXLINE( 267)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 267)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 267)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 267)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 267)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 267)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 267)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 267)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)16: {
HXLINE( 267)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 267)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 267)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 267)				_hx_tmp1->iPos = (_hx_tmp1->iPos + 1);
HXDLIN( 267)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 267)				_hx_tmp2->fPos = (_hx_tmp2->fPos + 2);
HXDLIN( 267)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 267)				_hx_tmp3->bPos = (_hx_tmp3->bPos + 1);
            			}
            			break;
            			case (int)17: {
HXLINE( 267)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 267)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)18: {
HXLINE( 267)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 267)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)19: {
HXLINE( 267)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 267)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)20: {
HXLINE( 267)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 267)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)21: case (int)22: {
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 268)		this->prev = ::openfl::display::_internal::DrawCommandType_obj::LINE_GRADIENT_STYLE_dyn();
HXLINE( 269)		 ::openfl::display::_internal::DrawCommandReader this1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 269)		return this1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readLineGradientStyle,return )

 ::openfl::display::_internal::DrawCommandReader DrawCommandReader_obj::readLineStyle(){
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_273_readLineStyle)
HXLINE( 274)		switch((int)(this->prev->_hx_getIndex())){
            			case (int)0: {
HXLINE( 274)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 274)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 274)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 274)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)1: {
HXLINE( 274)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 274)				_hx_tmp->iPos = (_hx_tmp->iPos + 1);
HXDLIN( 274)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 274)				_hx_tmp1->fPos = (_hx_tmp1->fPos + 1);
            			}
            			break;
            			case (int)2: {
HXLINE( 274)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 274)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 274)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 274)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 274)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 274)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 274)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 274)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)3: {
HXLINE( 274)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 274)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)4: {
HXLINE( 274)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 274)				_hx_tmp->fPos = (_hx_tmp->fPos + 6);
            			}
            			break;
            			case (int)5: {
HXLINE( 274)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 274)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)6: {
HXLINE( 274)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 274)				_hx_tmp->fPos = (_hx_tmp->fPos + 3);
            			}
            			break;
            			case (int)7: {
HXLINE( 274)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 274)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)8: {
HXLINE( 274)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 274)				_hx_tmp->oPos = (_hx_tmp->oPos + 3);
            			}
            			break;
            			case (int)9: {
HXLINE( 274)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 274)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)10: {
HXLINE( 274)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 274)				_hx_tmp->fPos = (_hx_tmp->fPos + 5);
HXDLIN( 274)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 274)				_hx_tmp1->oPos = (_hx_tmp1->oPos + 1);
            			}
            			break;
            			case (int)12: {
HXLINE( 274)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 274)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
            			}
            			break;
            			case (int)13: {
            			}
            			break;
            			case (int)14: {
HXLINE( 274)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 274)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 274)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 274)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)15: {
HXLINE( 274)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 274)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 274)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 274)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 274)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 274)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 274)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 274)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)16: {
HXLINE( 274)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 274)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 274)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 274)				_hx_tmp1->iPos = (_hx_tmp1->iPos + 1);
HXDLIN( 274)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 274)				_hx_tmp2->fPos = (_hx_tmp2->fPos + 2);
HXDLIN( 274)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 274)				_hx_tmp3->bPos = (_hx_tmp3->bPos + 1);
            			}
            			break;
            			case (int)17: {
HXLINE( 274)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 274)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)18: {
HXLINE( 274)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 274)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)19: {
HXLINE( 274)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 274)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)20: {
HXLINE( 274)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 274)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)21: case (int)22: {
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 275)		this->prev = ::openfl::display::_internal::DrawCommandType_obj::LINE_STYLE_dyn();
HXLINE( 276)		 ::openfl::display::_internal::DrawCommandReader this1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 276)		return this1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readLineStyle,return )

 ::openfl::display::_internal::DrawCommandReader DrawCommandReader_obj::readLineTo(){
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_280_readLineTo)
HXLINE( 281)		switch((int)(this->prev->_hx_getIndex())){
            			case (int)0: {
HXLINE( 281)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 281)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 281)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 281)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)1: {
HXLINE( 281)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 281)				_hx_tmp->iPos = (_hx_tmp->iPos + 1);
HXDLIN( 281)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 281)				_hx_tmp1->fPos = (_hx_tmp1->fPos + 1);
            			}
            			break;
            			case (int)2: {
HXLINE( 281)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 281)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 281)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 281)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 281)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 281)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 281)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 281)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)3: {
HXLINE( 281)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 281)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)4: {
HXLINE( 281)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 281)				_hx_tmp->fPos = (_hx_tmp->fPos + 6);
            			}
            			break;
            			case (int)5: {
HXLINE( 281)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 281)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)6: {
HXLINE( 281)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 281)				_hx_tmp->fPos = (_hx_tmp->fPos + 3);
            			}
            			break;
            			case (int)7: {
HXLINE( 281)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 281)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)8: {
HXLINE( 281)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 281)				_hx_tmp->oPos = (_hx_tmp->oPos + 3);
            			}
            			break;
            			case (int)9: {
HXLINE( 281)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 281)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)10: {
HXLINE( 281)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 281)				_hx_tmp->fPos = (_hx_tmp->fPos + 5);
HXDLIN( 281)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 281)				_hx_tmp1->oPos = (_hx_tmp1->oPos + 1);
            			}
            			break;
            			case (int)12: {
HXLINE( 281)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 281)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
            			}
            			break;
            			case (int)13: {
            			}
            			break;
            			case (int)14: {
HXLINE( 281)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 281)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 281)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 281)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)15: {
HXLINE( 281)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 281)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 281)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 281)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 281)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 281)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 281)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 281)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)16: {
HXLINE( 281)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 281)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 281)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 281)				_hx_tmp1->iPos = (_hx_tmp1->iPos + 1);
HXDLIN( 281)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 281)				_hx_tmp2->fPos = (_hx_tmp2->fPos + 2);
HXDLIN( 281)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 281)				_hx_tmp3->bPos = (_hx_tmp3->bPos + 1);
            			}
            			break;
            			case (int)17: {
HXLINE( 281)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 281)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)18: {
HXLINE( 281)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 281)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)19: {
HXLINE( 281)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 281)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)20: {
HXLINE( 281)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 281)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)21: case (int)22: {
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 282)		this->prev = ::openfl::display::_internal::DrawCommandType_obj::LINE_TO_dyn();
HXLINE( 283)		 ::openfl::display::_internal::DrawCommandReader this1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 283)		return this1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readLineTo,return )

 ::openfl::display::_internal::DrawCommandReader DrawCommandReader_obj::readMoveTo(){
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_287_readMoveTo)
HXLINE( 288)		switch((int)(this->prev->_hx_getIndex())){
            			case (int)0: {
HXLINE( 288)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 288)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 288)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 288)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)1: {
HXLINE( 288)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 288)				_hx_tmp->iPos = (_hx_tmp->iPos + 1);
HXDLIN( 288)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 288)				_hx_tmp1->fPos = (_hx_tmp1->fPos + 1);
            			}
            			break;
            			case (int)2: {
HXLINE( 288)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 288)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 288)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 288)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 288)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 288)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 288)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 288)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)3: {
HXLINE( 288)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 288)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)4: {
HXLINE( 288)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 288)				_hx_tmp->fPos = (_hx_tmp->fPos + 6);
            			}
            			break;
            			case (int)5: {
HXLINE( 288)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 288)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)6: {
HXLINE( 288)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 288)				_hx_tmp->fPos = (_hx_tmp->fPos + 3);
            			}
            			break;
            			case (int)7: {
HXLINE( 288)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 288)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)8: {
HXLINE( 288)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 288)				_hx_tmp->oPos = (_hx_tmp->oPos + 3);
            			}
            			break;
            			case (int)9: {
HXLINE( 288)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 288)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)10: {
HXLINE( 288)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 288)				_hx_tmp->fPos = (_hx_tmp->fPos + 5);
HXDLIN( 288)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 288)				_hx_tmp1->oPos = (_hx_tmp1->oPos + 1);
            			}
            			break;
            			case (int)12: {
HXLINE( 288)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 288)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
            			}
            			break;
            			case (int)13: {
            			}
            			break;
            			case (int)14: {
HXLINE( 288)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 288)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 288)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 288)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)15: {
HXLINE( 288)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 288)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 288)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 288)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 288)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 288)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 288)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 288)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)16: {
HXLINE( 288)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 288)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 288)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 288)				_hx_tmp1->iPos = (_hx_tmp1->iPos + 1);
HXDLIN( 288)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 288)				_hx_tmp2->fPos = (_hx_tmp2->fPos + 2);
HXDLIN( 288)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 288)				_hx_tmp3->bPos = (_hx_tmp3->bPos + 1);
            			}
            			break;
            			case (int)17: {
HXLINE( 288)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 288)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)18: {
HXLINE( 288)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 288)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)19: {
HXLINE( 288)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 288)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)20: {
HXLINE( 288)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 288)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)21: case (int)22: {
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 289)		this->prev = ::openfl::display::_internal::DrawCommandType_obj::MOVE_TO_dyn();
HXLINE( 290)		 ::openfl::display::_internal::DrawCommandReader this1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 290)		return this1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readMoveTo,return )

 ::openfl::display::_internal::DrawCommandReader DrawCommandReader_obj::readOverrideBlendMode(){
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_294_readOverrideBlendMode)
HXLINE( 295)		switch((int)(this->prev->_hx_getIndex())){
            			case (int)0: {
HXLINE( 295)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 295)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 295)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 295)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)1: {
HXLINE( 295)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 295)				_hx_tmp->iPos = (_hx_tmp->iPos + 1);
HXDLIN( 295)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 295)				_hx_tmp1->fPos = (_hx_tmp1->fPos + 1);
            			}
            			break;
            			case (int)2: {
HXLINE( 295)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 295)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 295)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 295)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 295)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 295)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 295)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 295)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)3: {
HXLINE( 295)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 295)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)4: {
HXLINE( 295)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 295)				_hx_tmp->fPos = (_hx_tmp->fPos + 6);
            			}
            			break;
            			case (int)5: {
HXLINE( 295)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 295)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)6: {
HXLINE( 295)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 295)				_hx_tmp->fPos = (_hx_tmp->fPos + 3);
            			}
            			break;
            			case (int)7: {
HXLINE( 295)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 295)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)8: {
HXLINE( 295)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 295)				_hx_tmp->oPos = (_hx_tmp->oPos + 3);
            			}
            			break;
            			case (int)9: {
HXLINE( 295)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 295)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)10: {
HXLINE( 295)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 295)				_hx_tmp->fPos = (_hx_tmp->fPos + 5);
HXDLIN( 295)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 295)				_hx_tmp1->oPos = (_hx_tmp1->oPos + 1);
            			}
            			break;
            			case (int)12: {
HXLINE( 295)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 295)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
            			}
            			break;
            			case (int)13: {
            			}
            			break;
            			case (int)14: {
HXLINE( 295)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 295)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 295)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 295)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)15: {
HXLINE( 295)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 295)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 295)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 295)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 295)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 295)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 295)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 295)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)16: {
HXLINE( 295)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 295)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 295)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 295)				_hx_tmp1->iPos = (_hx_tmp1->iPos + 1);
HXDLIN( 295)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 295)				_hx_tmp2->fPos = (_hx_tmp2->fPos + 2);
HXDLIN( 295)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 295)				_hx_tmp3->bPos = (_hx_tmp3->bPos + 1);
            			}
            			break;
            			case (int)17: {
HXLINE( 295)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 295)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)18: {
HXLINE( 295)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 295)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)19: {
HXLINE( 295)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 295)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)20: {
HXLINE( 295)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 295)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)21: case (int)22: {
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 296)		this->prev = ::openfl::display::_internal::DrawCommandType_obj::OVERRIDE_BLEND_MODE_dyn();
HXLINE( 297)		 ::openfl::display::_internal::DrawCommandReader this1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 297)		return this1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readOverrideBlendMode,return )

 ::openfl::display::_internal::DrawCommandReader DrawCommandReader_obj::readOverrideMatrix(){
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_301_readOverrideMatrix)
HXLINE( 302)		switch((int)(this->prev->_hx_getIndex())){
            			case (int)0: {
HXLINE( 302)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 302)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 302)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 302)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)1: {
HXLINE( 302)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 302)				_hx_tmp->iPos = (_hx_tmp->iPos + 1);
HXDLIN( 302)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 302)				_hx_tmp1->fPos = (_hx_tmp1->fPos + 1);
            			}
            			break;
            			case (int)2: {
HXLINE( 302)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 302)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 302)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 302)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 302)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 302)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 302)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 302)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)3: {
HXLINE( 302)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 302)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)4: {
HXLINE( 302)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 302)				_hx_tmp->fPos = (_hx_tmp->fPos + 6);
            			}
            			break;
            			case (int)5: {
HXLINE( 302)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 302)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)6: {
HXLINE( 302)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 302)				_hx_tmp->fPos = (_hx_tmp->fPos + 3);
            			}
            			break;
            			case (int)7: {
HXLINE( 302)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 302)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)8: {
HXLINE( 302)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 302)				_hx_tmp->oPos = (_hx_tmp->oPos + 3);
            			}
            			break;
            			case (int)9: {
HXLINE( 302)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 302)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)10: {
HXLINE( 302)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 302)				_hx_tmp->fPos = (_hx_tmp->fPos + 5);
HXDLIN( 302)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 302)				_hx_tmp1->oPos = (_hx_tmp1->oPos + 1);
            			}
            			break;
            			case (int)12: {
HXLINE( 302)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 302)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
            			}
            			break;
            			case (int)13: {
            			}
            			break;
            			case (int)14: {
HXLINE( 302)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 302)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 302)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 302)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)15: {
HXLINE( 302)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 302)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 302)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 302)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 302)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 302)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 302)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 302)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)16: {
HXLINE( 302)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 302)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 302)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 302)				_hx_tmp1->iPos = (_hx_tmp1->iPos + 1);
HXDLIN( 302)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 302)				_hx_tmp2->fPos = (_hx_tmp2->fPos + 2);
HXDLIN( 302)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 302)				_hx_tmp3->bPos = (_hx_tmp3->bPos + 1);
            			}
            			break;
            			case (int)17: {
HXLINE( 302)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 302)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)18: {
HXLINE( 302)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 302)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)19: {
HXLINE( 302)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 302)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)20: {
HXLINE( 302)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 302)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)21: case (int)22: {
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 303)		this->prev = ::openfl::display::_internal::DrawCommandType_obj::OVERRIDE_MATRIX_dyn();
HXLINE( 304)		 ::openfl::display::_internal::DrawCommandReader this1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 304)		return this1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readOverrideMatrix,return )

 ::openfl::display::_internal::DrawCommandReader DrawCommandReader_obj::readWindingEvenOdd(){
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_308_readWindingEvenOdd)
HXLINE( 309)		switch((int)(this->prev->_hx_getIndex())){
            			case (int)0: {
HXLINE( 309)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 309)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 309)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 309)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)1: {
HXLINE( 309)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 309)				_hx_tmp->iPos = (_hx_tmp->iPos + 1);
HXDLIN( 309)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 309)				_hx_tmp1->fPos = (_hx_tmp1->fPos + 1);
            			}
            			break;
            			case (int)2: {
HXLINE( 309)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 309)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 309)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 309)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 309)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 309)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 309)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 309)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)3: {
HXLINE( 309)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 309)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)4: {
HXLINE( 309)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 309)				_hx_tmp->fPos = (_hx_tmp->fPos + 6);
            			}
            			break;
            			case (int)5: {
HXLINE( 309)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 309)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)6: {
HXLINE( 309)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 309)				_hx_tmp->fPos = (_hx_tmp->fPos + 3);
            			}
            			break;
            			case (int)7: {
HXLINE( 309)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 309)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)8: {
HXLINE( 309)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 309)				_hx_tmp->oPos = (_hx_tmp->oPos + 3);
            			}
            			break;
            			case (int)9: {
HXLINE( 309)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 309)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)10: {
HXLINE( 309)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 309)				_hx_tmp->fPos = (_hx_tmp->fPos + 5);
HXDLIN( 309)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 309)				_hx_tmp1->oPos = (_hx_tmp1->oPos + 1);
            			}
            			break;
            			case (int)12: {
HXLINE( 309)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 309)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
            			}
            			break;
            			case (int)13: {
            			}
            			break;
            			case (int)14: {
HXLINE( 309)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 309)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 309)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 309)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)15: {
HXLINE( 309)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 309)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 309)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 309)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 309)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 309)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 309)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 309)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)16: {
HXLINE( 309)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 309)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 309)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 309)				_hx_tmp1->iPos = (_hx_tmp1->iPos + 1);
HXDLIN( 309)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 309)				_hx_tmp2->fPos = (_hx_tmp2->fPos + 2);
HXDLIN( 309)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 309)				_hx_tmp3->bPos = (_hx_tmp3->bPos + 1);
            			}
            			break;
            			case (int)17: {
HXLINE( 309)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 309)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)18: {
HXLINE( 309)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 309)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)19: {
HXLINE( 309)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 309)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)20: {
HXLINE( 309)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 309)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)21: case (int)22: {
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 310)		this->prev = ::openfl::display::_internal::DrawCommandType_obj::WINDING_EVEN_ODD_dyn();
HXLINE( 311)		 ::openfl::display::_internal::DrawCommandReader this1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 311)		return this1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readWindingEvenOdd,return )

 ::openfl::display::_internal::DrawCommandReader DrawCommandReader_obj::readWindingNonZero(){
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_315_readWindingNonZero)
HXLINE( 316)		switch((int)(this->prev->_hx_getIndex())){
            			case (int)0: {
HXLINE( 316)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 316)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 316)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 316)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)1: {
HXLINE( 316)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 316)				_hx_tmp->iPos = (_hx_tmp->iPos + 1);
HXDLIN( 316)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 316)				_hx_tmp1->fPos = (_hx_tmp1->fPos + 1);
            			}
            			break;
            			case (int)2: {
HXLINE( 316)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 316)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 316)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 316)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 316)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 316)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 316)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 316)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)3: {
HXLINE( 316)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 316)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)4: {
HXLINE( 316)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 316)				_hx_tmp->fPos = (_hx_tmp->fPos + 6);
            			}
            			break;
            			case (int)5: {
HXLINE( 316)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 316)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)6: {
HXLINE( 316)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 316)				_hx_tmp->fPos = (_hx_tmp->fPos + 3);
            			}
            			break;
            			case (int)7: {
HXLINE( 316)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 316)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)8: {
HXLINE( 316)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 316)				_hx_tmp->oPos = (_hx_tmp->oPos + 3);
            			}
            			break;
            			case (int)9: {
HXLINE( 316)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 316)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)10: {
HXLINE( 316)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 316)				_hx_tmp->fPos = (_hx_tmp->fPos + 5);
HXDLIN( 316)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 316)				_hx_tmp1->oPos = (_hx_tmp1->oPos + 1);
            			}
            			break;
            			case (int)12: {
HXLINE( 316)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 316)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
            			}
            			break;
            			case (int)13: {
            			}
            			break;
            			case (int)14: {
HXLINE( 316)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 316)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 316)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 316)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)15: {
HXLINE( 316)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 316)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 316)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 316)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 316)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 316)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 316)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 316)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)16: {
HXLINE( 316)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 316)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 316)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 316)				_hx_tmp1->iPos = (_hx_tmp1->iPos + 1);
HXDLIN( 316)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 316)				_hx_tmp2->fPos = (_hx_tmp2->fPos + 2);
HXDLIN( 316)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 316)				_hx_tmp3->bPos = (_hx_tmp3->bPos + 1);
            			}
            			break;
            			case (int)17: {
HXLINE( 316)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 316)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)18: {
HXLINE( 316)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 316)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)19: {
HXLINE( 316)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 316)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)20: {
HXLINE( 316)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 316)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)21: case (int)22: {
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 317)		this->prev = ::openfl::display::_internal::DrawCommandType_obj::WINDING_NON_ZERO_dyn();
HXLINE( 318)		 ::openfl::display::_internal::DrawCommandReader this1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 318)		return this1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readWindingNonZero,return )

void DrawCommandReader_obj::reset(){
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_323_reset)
HXDLIN( 323)		this->bPos = (this->iPos = (this->fPos = (this->oPos = (this->ffPos = (this->iiPos = (this->tsPos = 0))))));
            	}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,reset,(void))

void DrawCommandReader_obj::skip( ::openfl::display::_internal::DrawCommandType type){
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_327_skip)
HXLINE( 328)		switch((int)(this->prev->_hx_getIndex())){
            			case (int)0: {
HXLINE( 328)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 328)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 328)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 328)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)1: {
HXLINE( 328)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 328)				_hx_tmp->iPos = (_hx_tmp->iPos + 1);
HXDLIN( 328)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 328)				_hx_tmp1->fPos = (_hx_tmp1->fPos + 1);
            			}
            			break;
            			case (int)2: {
HXLINE( 328)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 328)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 328)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 328)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 328)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 328)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 328)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 328)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)3: {
HXLINE( 328)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 328)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)4: {
HXLINE( 328)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 328)				_hx_tmp->fPos = (_hx_tmp->fPos + 6);
            			}
            			break;
            			case (int)5: {
HXLINE( 328)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 328)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)6: {
HXLINE( 328)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 328)				_hx_tmp->fPos = (_hx_tmp->fPos + 3);
            			}
            			break;
            			case (int)7: {
HXLINE( 328)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 328)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)8: {
HXLINE( 328)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 328)				_hx_tmp->oPos = (_hx_tmp->oPos + 3);
            			}
            			break;
            			case (int)9: {
HXLINE( 328)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 328)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)10: {
HXLINE( 328)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 328)				_hx_tmp->fPos = (_hx_tmp->fPos + 5);
HXDLIN( 328)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 328)				_hx_tmp1->oPos = (_hx_tmp1->oPos + 1);
            			}
            			break;
            			case (int)12: {
HXLINE( 328)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 328)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
            			}
            			break;
            			case (int)13: {
            			}
            			break;
            			case (int)14: {
HXLINE( 328)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 328)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 328)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 328)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)15: {
HXLINE( 328)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 328)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 328)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 328)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 328)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 328)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 328)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 328)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)16: {
HXLINE( 328)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 328)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 328)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 328)				_hx_tmp1->iPos = (_hx_tmp1->iPos + 1);
HXDLIN( 328)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 328)				_hx_tmp2->fPos = (_hx_tmp2->fPos + 2);
HXDLIN( 328)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 328)				_hx_tmp3->bPos = (_hx_tmp3->bPos + 1);
            			}
            			break;
            			case (int)17: {
HXLINE( 328)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 328)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)18: {
HXLINE( 328)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 328)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)19: {
HXLINE( 328)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 328)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)20: {
HXLINE( 328)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 328)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)21: case (int)22: {
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 329)		this->prev = type;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DrawCommandReader_obj,skip,(void))


::hx::ObjectPtr< DrawCommandReader_obj > DrawCommandReader_obj::__new( ::openfl::display::_internal::DrawCommandBuffer buffer) {
	::hx::ObjectPtr< DrawCommandReader_obj > __this = new DrawCommandReader_obj();
	__this->__construct(buffer);
	return __this;
}

::hx::ObjectPtr< DrawCommandReader_obj > DrawCommandReader_obj::__alloc(::hx::Ctx *_hx_ctx, ::openfl::display::_internal::DrawCommandBuffer buffer) {
	DrawCommandReader_obj *__this = (DrawCommandReader_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DrawCommandReader_obj), true, "openfl.display._internal.DrawCommandReader"));
	*(void **)__this = DrawCommandReader_obj::_hx_vtable;
	__this->__construct(buffer);
	return __this;
}

DrawCommandReader_obj::DrawCommandReader_obj()
{
}

void DrawCommandReader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DrawCommandReader);
	HX_MARK_MEMBER_NAME(buffer,"buffer");
	HX_MARK_MEMBER_NAME(bPos,"bPos");
	HX_MARK_MEMBER_NAME(iiPos,"iiPos");
	HX_MARK_MEMBER_NAME(iPos,"iPos");
	HX_MARK_MEMBER_NAME(ffPos,"ffPos");
	HX_MARK_MEMBER_NAME(fPos,"fPos");
	HX_MARK_MEMBER_NAME(oPos,"oPos");
	HX_MARK_MEMBER_NAME(prev,"prev");
	HX_MARK_MEMBER_NAME(tsPos,"tsPos");
	HX_MARK_END_CLASS();
}

void DrawCommandReader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(buffer,"buffer");
	HX_VISIT_MEMBER_NAME(bPos,"bPos");
	HX_VISIT_MEMBER_NAME(iiPos,"iiPos");
	HX_VISIT_MEMBER_NAME(iPos,"iPos");
	HX_VISIT_MEMBER_NAME(ffPos,"ffPos");
	HX_VISIT_MEMBER_NAME(fPos,"fPos");
	HX_VISIT_MEMBER_NAME(oPos,"oPos");
	HX_VISIT_MEMBER_NAME(prev,"prev");
	HX_VISIT_MEMBER_NAME(tsPos,"tsPos");
}

::hx::Val DrawCommandReader_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"int") ) { return ::hx::Val( _hx_int_dyn() ); }
		if (HX_FIELD_EQ(inName,"obj") ) { return ::hx::Val( obj_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"bPos") ) { return ::hx::Val( bPos ); }
		if (HX_FIELD_EQ(inName,"iPos") ) { return ::hx::Val( iPos ); }
		if (HX_FIELD_EQ(inName,"fPos") ) { return ::hx::Val( fPos ); }
		if (HX_FIELD_EQ(inName,"oPos") ) { return ::hx::Val( oPos ); }
		if (HX_FIELD_EQ(inName,"prev") ) { return ::hx::Val( prev ); }
		if (HX_FIELD_EQ(inName,"bool") ) { return ::hx::Val( _hx_bool_dyn() ); }
		if (HX_FIELD_EQ(inName,"fArr") ) { return ::hx::Val( fArr_dyn() ); }
		if (HX_FIELD_EQ(inName,"iArr") ) { return ::hx::Val( iArr_dyn() ); }
		if (HX_FIELD_EQ(inName,"skip") ) { return ::hx::Val( skip_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"iiPos") ) { return ::hx::Val( iiPos ); }
		if (HX_FIELD_EQ(inName,"ffPos") ) { return ::hx::Val( ffPos ); }
		if (HX_FIELD_EQ(inName,"tsPos") ) { return ::hx::Val( tsPos ); }
		if (HX_FIELD_EQ(inName,"float") ) { return ::hx::Val( _hx_float_dyn() ); }
		if (HX_FIELD_EQ(inName,"reset") ) { return ::hx::Val( reset_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { return ::hx::Val( buffer ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"advance") ) { return ::hx::Val( advance_dyn() ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"readLineTo") ) { return ::hx::Val( readLineTo_dyn() ); }
		if (HX_FIELD_EQ(inName,"readMoveTo") ) { return ::hx::Val( readMoveTo_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"readCurveTo") ) { return ::hx::Val( readCurveTo_dyn() ); }
		if (HX_FIELD_EQ(inName,"readEndFill") ) { return ::hx::Val( readEndFill_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"readDrawRect") ) { return ::hx::Val( readDrawRect_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"readBeginFill") ) { return ::hx::Val( readBeginFill_dyn() ); }
		if (HX_FIELD_EQ(inName,"readDrawQuads") ) { return ::hx::Val( readDrawQuads_dyn() ); }
		if (HX_FIELD_EQ(inName,"readLineStyle") ) { return ::hx::Val( readLineStyle_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"readDrawCircle") ) { return ::hx::Val( readDrawCircle_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"readDrawEllipse") ) { return ::hx::Val( readDrawEllipse_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"readCubicCurveTo") ) { return ::hx::Val( readCubicCurveTo_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"readDrawRoundRect") ) { return ::hx::Val( readDrawRoundRect_dyn() ); }
		if (HX_FIELD_EQ(inName,"readDrawTriangles") ) { return ::hx::Val( readDrawTriangles_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"readOverrideMatrix") ) { return ::hx::Val( readOverrideMatrix_dyn() ); }
		if (HX_FIELD_EQ(inName,"readWindingEvenOdd") ) { return ::hx::Val( readWindingEvenOdd_dyn() ); }
		if (HX_FIELD_EQ(inName,"readWindingNonZero") ) { return ::hx::Val( readWindingNonZero_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"readBeginBitmapFill") ) { return ::hx::Val( readBeginBitmapFill_dyn() ); }
		if (HX_FIELD_EQ(inName,"readBeginShaderFill") ) { return ::hx::Val( readBeginShaderFill_dyn() ); }
		if (HX_FIELD_EQ(inName,"readLineBitmapStyle") ) { return ::hx::Val( readLineBitmapStyle_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"readBeginGradientFill") ) { return ::hx::Val( readBeginGradientFill_dyn() ); }
		if (HX_FIELD_EQ(inName,"readLineGradientStyle") ) { return ::hx::Val( readLineGradientStyle_dyn() ); }
		if (HX_FIELD_EQ(inName,"readOverrideBlendMode") ) { return ::hx::Val( readOverrideBlendMode_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val DrawCommandReader_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"bPos") ) { bPos=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"iPos") ) { iPos=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fPos") ) { fPos=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"oPos") ) { oPos=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"prev") ) { prev=inValue.Cast<  ::openfl::display::_internal::DrawCommandType >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"iiPos") ) { iiPos=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ffPos") ) { ffPos=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tsPos") ) { tsPos=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { buffer=inValue.Cast<  ::openfl::display::_internal::DrawCommandBuffer >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DrawCommandReader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("buffer",00,bd,94,d0));
	outFields->push(HX_("bPos",52,fe,03,41));
	outFields->push(HX_("iiPos",94,65,b7,ba));
	outFields->push(HX_("iPos",ab,7c,a4,45));
	outFields->push(HX_("ffPos",34,04,88,fe));
	outFields->push(HX_("fPos",ce,d8,a8,43));
	outFields->push(HX_("oPos",65,c4,9b,49));
	outFields->push(HX_("prev",f3,be,5e,4a));
	outFields->push(HX_("tsPos",55,e9,bb,16));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DrawCommandReader_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::_internal::DrawCommandBuffer */ ,(int)offsetof(DrawCommandReader_obj,buffer),HX_("buffer",00,bd,94,d0)},
	{::hx::fsInt,(int)offsetof(DrawCommandReader_obj,bPos),HX_("bPos",52,fe,03,41)},
	{::hx::fsInt,(int)offsetof(DrawCommandReader_obj,iiPos),HX_("iiPos",94,65,b7,ba)},
	{::hx::fsInt,(int)offsetof(DrawCommandReader_obj,iPos),HX_("iPos",ab,7c,a4,45)},
	{::hx::fsInt,(int)offsetof(DrawCommandReader_obj,ffPos),HX_("ffPos",34,04,88,fe)},
	{::hx::fsInt,(int)offsetof(DrawCommandReader_obj,fPos),HX_("fPos",ce,d8,a8,43)},
	{::hx::fsInt,(int)offsetof(DrawCommandReader_obj,oPos),HX_("oPos",65,c4,9b,49)},
	{::hx::fsObject /*  ::openfl::display::_internal::DrawCommandType */ ,(int)offsetof(DrawCommandReader_obj,prev),HX_("prev",f3,be,5e,4a)},
	{::hx::fsInt,(int)offsetof(DrawCommandReader_obj,tsPos),HX_("tsPos",55,e9,bb,16)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *DrawCommandReader_obj_sStaticStorageInfo = 0;
#endif

static ::String DrawCommandReader_obj_sMemberFields[] = {
	HX_("buffer",00,bd,94,d0),
	HX_("bPos",52,fe,03,41),
	HX_("iiPos",94,65,b7,ba),
	HX_("iPos",ab,7c,a4,45),
	HX_("ffPos",34,04,88,fe),
	HX_("fPos",ce,d8,a8,43),
	HX_("oPos",65,c4,9b,49),
	HX_("prev",f3,be,5e,4a),
	HX_("tsPos",55,e9,bb,16),
	HX_("advance",82,08,0c,ef),
	HX_("bool",2a,84,1b,41),
	HX_("destroy",fa,2c,86,24),
	HX_("fArr",9b,79,9d,43),
	HX_("float",9c,c5,96,02),
	HX_("iArr",78,1d,99,45),
	HX_("int",ef,0c,50,00),
	HX_("obj",f7,8f,54,00),
	HX_("readBeginBitmapFill",e5,b6,06,b9),
	HX_("readBeginFill",16,27,04,20),
	HX_("readBeginGradientFill",26,90,8f,6c),
	HX_("readBeginShaderFill",1b,39,42,b6),
	HX_("readCubicCurveTo",56,48,38,74),
	HX_("readCurveTo",54,f3,73,21),
	HX_("readDrawCircle",2a,04,0d,05),
	HX_("readDrawEllipse",84,85,26,7c),
	HX_("readDrawQuads",f2,24,61,b9),
	HX_("readDrawRect",be,44,46,9b),
	HX_("readDrawRoundRect",b8,ea,3a,90),
	HX_("readDrawTriangles",d1,6a,f8,8b),
	HX_("readEndFill",48,1b,cc,78),
	HX_("readLineBitmapStyle",78,2c,20,94),
	HX_("readLineGradientStyle",57,78,7e,00),
	HX_("readLineStyle",67,22,87,5e),
	HX_("readLineTo",85,2a,1c,e6),
	HX_("readMoveTo",e2,b6,28,c6),
	HX_("readOverrideBlendMode",32,4c,76,38),
	HX_("readOverrideMatrix",a3,57,3b,ea),
	HX_("readWindingEvenOdd",b1,26,9c,3b),
	HX_("readWindingNonZero",d1,7e,d1,06),
	HX_("reset",cf,49,c8,e6),
	HX_("skip",7f,16,55,4c),
	::String(null()) };

::hx::Class DrawCommandReader_obj::__mClass;

void DrawCommandReader_obj::__register()
{
	DrawCommandReader_obj _hx_dummy;
	DrawCommandReader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display._internal.DrawCommandReader",ce,0b,49,27);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DrawCommandReader_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DrawCommandReader_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DrawCommandReader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DrawCommandReader_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void DrawCommandReader_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_22_boot)
HXDLIN(  22)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("fields",79,8e,8e,80), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:Dynamic",ce,ea,47,3c)))))))
            			->setFixed(1,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
}

} // end namespace openfl
} // end namespace display
} // end namespace _internal
