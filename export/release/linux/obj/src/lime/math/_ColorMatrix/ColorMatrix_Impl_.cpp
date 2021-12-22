#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_math__ColorMatrix_ColorMatrix_Impl_
#include <lime/math/_ColorMatrix/ColorMatrix_Impl_.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_TAError
#include <lime/utils/TAError.h>
#endif
#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IntVector
#include <openfl/_Vector/IntVector.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_855a2747f55db411_78__new,"lime.math._ColorMatrix.ColorMatrix_Impl_","_new",0x66bc06c7,"lime.math._ColorMatrix.ColorMatrix_Impl_._new","lime/math/ColorMatrix.hx",78,0x337975c7)
HX_LOCAL_STACK_FRAME(_hx_pos_855a2747f55db411_96_clone,"lime.math._ColorMatrix.ColorMatrix_Impl_","clone",0xca195b37,"lime.math._ColorMatrix.ColorMatrix_Impl_.clone","lime/math/ColorMatrix.hx",96,0x337975c7)
HX_LOCAL_STACK_FRAME(_hx_pos_855a2747f55db411_104_concat,"lime.math._ColorMatrix.ColorMatrix_Impl_","concat",0xc5989ffa,"lime.math._ColorMatrix.ColorMatrix_Impl_.concat","lime/math/ColorMatrix.hx",104,0x337975c7)
HX_LOCAL_STACK_FRAME(_hx_pos_855a2747f55db411_117_copyFrom,"lime.math._ColorMatrix.ColorMatrix_Impl_","copyFrom",0x3aa9a825,"lime.math._ColorMatrix.ColorMatrix_Impl_.copyFrom","lime/math/ColorMatrix.hx",117,0x337975c7)
HX_LOCAL_STACK_FRAME(_hx_pos_855a2747f55db411_124_identity,"lime.math._ColorMatrix.ColorMatrix_Impl_","identity",0x2b77e1a4,"lime.math._ColorMatrix.ColorMatrix_Impl_.identity","lime/math/ColorMatrix.hx",124,0x337975c7)
HX_LOCAL_STACK_FRAME(_hx_pos_855a2747f55db411_168_getAlphaTable,"lime.math._ColorMatrix.ColorMatrix_Impl_","getAlphaTable",0x456419e0,"lime.math._ColorMatrix.ColorMatrix_Impl_.getAlphaTable","lime/math/ColorMatrix.hx",168,0x337975c7)
HX_LOCAL_STACK_FRAME(_hx_pos_855a2747f55db411_209_getBlueTable,"lime.math._ColorMatrix.ColorMatrix_Impl_","getBlueTable",0x661a9b04,"lime.math._ColorMatrix.ColorMatrix_Impl_.getBlueTable","lime/math/ColorMatrix.hx",209,0x337975c7)
HX_LOCAL_STACK_FRAME(_hx_pos_855a2747f55db411_249_getGreenTable,"lime.math._ColorMatrix.ColorMatrix_Impl_","getGreenTable",0xf983c45b,"lime.math._ColorMatrix.ColorMatrix_Impl_.getGreenTable","lime/math/ColorMatrix.hx",249,0x337975c7)
HX_LOCAL_STACK_FRAME(_hx_pos_855a2747f55db411_289_getRedTable,"lime.math._ColorMatrix.ColorMatrix_Impl_","getRedTable",0x2b90530d,"lime.math._ColorMatrix.ColorMatrix_Impl_.getRedTable","lime/math/ColorMatrix.hx",289,0x337975c7)
HX_LOCAL_STACK_FRAME(_hx_pos_855a2747f55db411_313___toFlashColorTransform,"lime.math._ColorMatrix.ColorMatrix_Impl_","__toFlashColorTransform",0x02badfd8,"lime.math._ColorMatrix.ColorMatrix_Impl_.__toFlashColorTransform","lime/math/ColorMatrix.hx",313,0x337975c7)
HX_LOCAL_STACK_FRAME(_hx_pos_855a2747f55db411_320_get_alphaMultiplier,"lime.math._ColorMatrix.ColorMatrix_Impl_","get_alphaMultiplier",0xa15814f0,"lime.math._ColorMatrix.ColorMatrix_Impl_.get_alphaMultiplier","lime/math/ColorMatrix.hx",320,0x337975c7)
HX_LOCAL_STACK_FRAME(_hx_pos_855a2747f55db411_325_set_alphaMultiplier,"lime.math._ColorMatrix.ColorMatrix_Impl_","set_alphaMultiplier",0xddf507fc,"lime.math._ColorMatrix.ColorMatrix_Impl_.set_alphaMultiplier","lime/math/ColorMatrix.hx",325,0x337975c7)
HX_LOCAL_STACK_FRAME(_hx_pos_855a2747f55db411_330_get_alphaOffset,"lime.math._ColorMatrix.ColorMatrix_Impl_","get_alphaOffset",0xff81a182,"lime.math._ColorMatrix.ColorMatrix_Impl_.get_alphaOffset","lime/math/ColorMatrix.hx",330,0x337975c7)
HX_LOCAL_STACK_FRAME(_hx_pos_855a2747f55db411_335_set_alphaOffset,"lime.math._ColorMatrix.ColorMatrix_Impl_","set_alphaOffset",0xfb4d1e8e,"lime.math._ColorMatrix.ColorMatrix_Impl_.set_alphaOffset","lime/math/ColorMatrix.hx",335,0x337975c7)
HX_LOCAL_STACK_FRAME(_hx_pos_855a2747f55db411_340_get_blueMultiplier,"lime.math._ColorMatrix.ColorMatrix_Impl_","get_blueMultiplier",0x69726b6a,"lime.math._ColorMatrix.ColorMatrix_Impl_.get_blueMultiplier","lime/math/ColorMatrix.hx",340,0x337975c7)
HX_LOCAL_STACK_FRAME(_hx_pos_855a2747f55db411_345_set_blueMultiplier,"lime.math._ColorMatrix.ColorMatrix_Impl_","set_blueMultiplier",0x46219dde,"lime.math._ColorMatrix.ColorMatrix_Impl_.set_blueMultiplier","lime/math/ColorMatrix.hx",345,0x337975c7)
HX_LOCAL_STACK_FRAME(_hx_pos_855a2747f55db411_350_get_blueOffset,"lime.math._ColorMatrix.ColorMatrix_Impl_","get_blueOffset",0x2f5cb2fc,"lime.math._ColorMatrix.ColorMatrix_Impl_.get_blueOffset","lime/math/ColorMatrix.hx",350,0x337975c7)
HX_LOCAL_STACK_FRAME(_hx_pos_855a2747f55db411_355_set_blueOffset,"lime.math._ColorMatrix.ColorMatrix_Impl_","set_blueOffset",0x4f7c9b70,"lime.math._ColorMatrix.ColorMatrix_Impl_.set_blueOffset","lime/math/ColorMatrix.hx",355,0x337975c7)
HX_LOCAL_STACK_FRAME(_hx_pos_855a2747f55db411_360_get_color,"lime.math._ColorMatrix.ColorMatrix_Impl_","get_color",0x1b460a94,"lime.math._ColorMatrix.ColorMatrix_Impl_.get_color","lime/math/ColorMatrix.hx",360,0x337975c7)
HX_LOCAL_STACK_FRAME(_hx_pos_855a2747f55db411_364_set_color,"lime.math._ColorMatrix.ColorMatrix_Impl_","set_color",0xfe96f6a0,"lime.math._ColorMatrix.ColorMatrix_Impl_.set_color","lime/math/ColorMatrix.hx",364,0x337975c7)
HX_LOCAL_STACK_FRAME(_hx_pos_855a2747f55db411_378_get_greenMultiplier,"lime.math._ColorMatrix.ColorMatrix_Impl_","get_greenMultiplier",0x76158c95,"lime.math._ColorMatrix.ColorMatrix_Impl_.get_greenMultiplier","lime/math/ColorMatrix.hx",378,0x337975c7)
HX_LOCAL_STACK_FRAME(_hx_pos_855a2747f55db411_383_set_greenMultiplier,"lime.math._ColorMatrix.ColorMatrix_Impl_","set_greenMultiplier",0xb2b27fa1,"lime.math._ColorMatrix.ColorMatrix_Impl_.set_greenMultiplier","lime/math/ColorMatrix.hx",383,0x337975c7)
HX_LOCAL_STACK_FRAME(_hx_pos_855a2747f55db411_388_get_greenOffset,"lime.math._ColorMatrix.ColorMatrix_Impl_","get_greenOffset",0xe71722a7,"lime.math._ColorMatrix.ColorMatrix_Impl_.get_greenOffset","lime/math/ColorMatrix.hx",388,0x337975c7)
HX_LOCAL_STACK_FRAME(_hx_pos_855a2747f55db411_393_set_greenOffset,"lime.math._ColorMatrix.ColorMatrix_Impl_","set_greenOffset",0xe2e29fb3,"lime.math._ColorMatrix.ColorMatrix_Impl_.set_greenOffset","lime/math/ColorMatrix.hx",393,0x337975c7)
HX_LOCAL_STACK_FRAME(_hx_pos_855a2747f55db411_398_get_redMultiplier,"lime.math._ColorMatrix.ColorMatrix_Impl_","get_redMultiplier",0x58c9a663,"lime.math._ColorMatrix.ColorMatrix_Impl_.get_redMultiplier","lime/math/ColorMatrix.hx",398,0x337975c7)
HX_LOCAL_STACK_FRAME(_hx_pos_855a2747f55db411_403_set_redMultiplier,"lime.math._ColorMatrix.ColorMatrix_Impl_","set_redMultiplier",0x7c377e6f,"lime.math._ColorMatrix.ColorMatrix_Impl_.set_redMultiplier","lime/math/ColorMatrix.hx",403,0x337975c7)
HX_LOCAL_STACK_FRAME(_hx_pos_855a2747f55db411_408_get_redOffset,"lime.math._ColorMatrix.ColorMatrix_Impl_","get_redOffset",0xd26abd75,"lime.math._ColorMatrix.ColorMatrix_Impl_.get_redOffset","lime/math/ColorMatrix.hx",408,0x337975c7)
HX_LOCAL_STACK_FRAME(_hx_pos_855a2747f55db411_413_set_redOffset,"lime.math._ColorMatrix.ColorMatrix_Impl_","set_redOffset",0x17709f81,"lime.math._ColorMatrix.ColorMatrix_Impl_.set_redOffset","lime/math/ColorMatrix.hx",413,0x337975c7)
HX_LOCAL_STACK_FRAME(_hx_pos_855a2747f55db411_418_get,"lime.math._ColorMatrix.ColorMatrix_Impl_","get",0xe0573df0,"lime.math._ColorMatrix.ColorMatrix_Impl_.get","lime/math/ColorMatrix.hx",418,0x337975c7)
HX_LOCAL_STACK_FRAME(_hx_pos_855a2747f55db411_423_set,"lime.math._ColorMatrix.ColorMatrix_Impl_","set",0xe06058fc,"lime.math._ColorMatrix.ColorMatrix_Impl_.set","lime/math/ColorMatrix.hx",423,0x337975c7)
HX_LOCAL_STACK_FRAME(_hx_pos_855a2747f55db411_20_boot,"lime.math._ColorMatrix.ColorMatrix_Impl_","boot",0x68b87598,"lime.math._ColorMatrix.ColorMatrix_Impl_.boot","lime/math/ColorMatrix.hx",20,0x337975c7)
static const Float _hx_array_data_0ee8e8c8_35[] = {
	1.0,0.0,0.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,0.0,0.0,1.0,0.0,
};
namespace lime{
namespace math{
namespace _ColorMatrix{

void ColorMatrix_Impl__obj::__construct() { }

Dynamic ColorMatrix_Impl__obj::__CreateEmpty() { return new ColorMatrix_Impl__obj; }

void *ColorMatrix_Impl__obj::_hx_vtable = 0;

Dynamic ColorMatrix_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ColorMatrix_Impl__obj > _hx_result = new ColorMatrix_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ColorMatrix_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x42e0099e;
}

 ::lime::utils::ArrayBufferView ColorMatrix_Impl__obj::_hx___alphaTable;

 ::lime::utils::ArrayBufferView ColorMatrix_Impl__obj::_hx___blueTable;

 ::lime::utils::ArrayBufferView ColorMatrix_Impl__obj::_hx___greenTable;

::Array< Float > ColorMatrix_Impl__obj::_hx___identity;

 ::lime::utils::ArrayBufferView ColorMatrix_Impl__obj::_hx___redTable;

 ::lime::utils::ArrayBufferView ColorMatrix_Impl__obj::_new( ::lime::utils::ArrayBufferView data){
            	HX_GC_STACKFRAME(&_hx_pos_855a2747f55db411_78__new)
HXDLIN(  78)		 ::lime::utils::ArrayBufferView this1;
HXLINE(  80)		bool _hx_tmp;
HXDLIN(  80)		if (::hx::IsNotNull( data )) {
HXLINE(  80)			_hx_tmp = (data->length == 20);
            		}
            		else {
HXLINE(  80)			_hx_tmp = false;
            		}
HXDLIN(  80)		if (_hx_tmp) {
HXLINE(  82)			this1 = data;
            		}
            		else {
HXLINE(  86)			 ::Dynamic elements = null();
HXDLIN(  86)			 ::haxe::io::Bytes buffer = null();
HXDLIN(  86)			::cpp::VirtualArray array = ::lime::math::_ColorMatrix::ColorMatrix_Impl__obj::_hx___identity;
HXDLIN(  86)			 ::openfl::_Vector::FloatVector vector = null();
HXDLIN(  86)			 ::lime::utils::ArrayBufferView view = null();
HXDLIN(  86)			 ::Dynamic len = null();
HXDLIN(  86)			 ::lime::utils::ArrayBufferView this2;
HXDLIN(  86)			if (::hx::IsNotNull( elements )) {
HXLINE(  86)				this2 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,8);
            			}
            			else {
HXLINE(  86)				if (::hx::IsNotNull( array )) {
HXLINE(  86)					 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN(  86)					_this->byteOffset = 0;
HXDLIN(  86)					_this->length = array->get_length();
HXDLIN(  86)					_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN(  86)					 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN(  86)					_this->buffer = this1;
HXDLIN(  86)					_this->copyFromArray(array,null());
HXDLIN(  86)					this2 = _this;
            				}
            				else {
HXLINE(  86)					if (::hx::IsNotNull( vector )) {
HXLINE(  86)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN(  86)						::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN(  86)						_this->byteOffset = 0;
HXDLIN(  86)						_this->length = array->get_length();
HXDLIN(  86)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN(  86)						 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN(  86)						_this->buffer = this1;
HXDLIN(  86)						_this->copyFromArray(array,null());
HXDLIN(  86)						this2 = _this;
            					}
            					else {
HXLINE(  86)						if (::hx::IsNotNull( view )) {
HXLINE(  86)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN(  86)							 ::haxe::io::Bytes srcData = view->buffer;
HXDLIN(  86)							int srcLength = view->length;
HXDLIN(  86)							int srcByteOffset = view->byteOffset;
HXDLIN(  86)							int srcElementSize = view->bytesPerElement;
HXDLIN(  86)							int elementSize = _this->bytesPerElement;
HXDLIN(  86)							if ((view->type == _this->type)) {
HXLINE(  86)								int srcLength = srcData->length;
HXDLIN(  86)								int cloneLength = (srcLength - srcByteOffset);
HXDLIN(  86)								 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN(  86)								_this->buffer = this1;
HXDLIN(  86)								_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            							}
            							else {
HXLINE(  86)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            							}
HXDLIN(  86)							_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN(  86)							_this->byteOffset = 0;
HXDLIN(  86)							_this->length = srcLength;
HXDLIN(  86)							this2 = _this;
            						}
            						else {
HXLINE(  86)							if (::hx::IsNotNull( buffer )) {
HXLINE(  86)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN(  86)								int in_byteOffset = 0;
HXDLIN(  86)								if ((in_byteOffset < 0)) {
HXLINE(  86)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
HXDLIN(  86)								if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE(  86)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
HXDLIN(  86)								int bufferByteLength = buffer->length;
HXDLIN(  86)								int elementSize = _this->bytesPerElement;
HXDLIN(  86)								int newByteLength = bufferByteLength;
HXDLIN(  86)								if (::hx::IsNull( len )) {
HXLINE(  86)									newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN(  86)									if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE(  86)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN(  86)									if ((newByteLength < 0)) {
HXLINE(  86)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
            								}
            								else {
HXLINE(  86)									newByteLength = (( (int)(len) ) * _this->bytesPerElement);
HXDLIN(  86)									int newRange = (in_byteOffset + newByteLength);
HXDLIN(  86)									if ((newRange > bufferByteLength)) {
HXLINE(  86)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
            								}
HXDLIN(  86)								_this->buffer = buffer;
HXDLIN(  86)								_this->byteOffset = in_byteOffset;
HXDLIN(  86)								_this->byteLength = newByteLength;
HXDLIN(  86)								_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN(  86)								this2 = _this;
            							}
            							else {
HXLINE(  86)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Float32Array",8e,c1,f4,d4)));
            							}
            						}
            					}
            				}
            			}
HXDLIN(  86)			this1 = this2;
            		}
HXLINE(  78)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorMatrix_Impl__obj,_new,return )

 ::lime::utils::ArrayBufferView ColorMatrix_Impl__obj::clone( ::lime::utils::ArrayBufferView this1){
            	HX_GC_STACKFRAME(&_hx_pos_855a2747f55db411_96_clone)
HXDLIN(  96)		 ::Dynamic elements = null();
HXDLIN(  96)		 ::haxe::io::Bytes buffer = null();
HXDLIN(  96)		::cpp::VirtualArray array = null();
HXDLIN(  96)		 ::openfl::_Vector::FloatVector vector = null();
HXDLIN(  96)		 ::Dynamic len = null();
HXDLIN(  96)		 ::lime::utils::ArrayBufferView this2;
HXDLIN(  96)		if (::hx::IsNotNull( elements )) {
HXDLIN(  96)			this2 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,8);
            		}
            		else {
HXDLIN(  96)			if (::hx::IsNotNull( array )) {
HXDLIN(  96)				 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN(  96)				_this->byteOffset = 0;
HXDLIN(  96)				_this->length = array->get_length();
HXDLIN(  96)				_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN(  96)				 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN(  96)				_this->buffer = this1;
HXDLIN(  96)				_this->copyFromArray(array,null());
HXDLIN(  96)				this2 = _this;
            			}
            			else {
HXDLIN(  96)				if (::hx::IsNotNull( vector )) {
HXDLIN(  96)					 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN(  96)					::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN(  96)					_this->byteOffset = 0;
HXDLIN(  96)					_this->length = array->get_length();
HXDLIN(  96)					_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN(  96)					 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN(  96)					_this->buffer = this1;
HXDLIN(  96)					_this->copyFromArray(array,null());
HXDLIN(  96)					this2 = _this;
            				}
            				else {
HXDLIN(  96)					if (::hx::IsNotNull( this1 )) {
HXDLIN(  96)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN(  96)						 ::haxe::io::Bytes srcData = this1->buffer;
HXDLIN(  96)						int srcLength = this1->length;
HXDLIN(  96)						int srcByteOffset = this1->byteOffset;
HXDLIN(  96)						int srcElementSize = this1->bytesPerElement;
HXDLIN(  96)						int elementSize = _this->bytesPerElement;
HXDLIN(  96)						if ((this1->type == _this->type)) {
HXDLIN(  96)							int srcLength = srcData->length;
HXDLIN(  96)							int cloneLength = (srcLength - srcByteOffset);
HXDLIN(  96)							 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN(  96)							_this->buffer = this1;
HXDLIN(  96)							_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            						}
            						else {
HXDLIN(  96)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            						}
HXDLIN(  96)						_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN(  96)						_this->byteOffset = 0;
HXDLIN(  96)						_this->length = srcLength;
HXDLIN(  96)						this2 = _this;
            					}
            					else {
HXDLIN(  96)						if (::hx::IsNotNull( buffer )) {
HXDLIN(  96)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN(  96)							int in_byteOffset = 0;
HXDLIN(  96)							if ((in_byteOffset < 0)) {
HXDLIN(  96)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            							}
HXDLIN(  96)							if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXDLIN(  96)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            							}
HXDLIN(  96)							int bufferByteLength = buffer->length;
HXDLIN(  96)							int elementSize = _this->bytesPerElement;
HXDLIN(  96)							int newByteLength = bufferByteLength;
HXDLIN(  96)							if (::hx::IsNull( len )) {
HXDLIN(  96)								newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN(  96)								if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXDLIN(  96)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
HXDLIN(  96)								if ((newByteLength < 0)) {
HXDLIN(  96)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
            							}
            							else {
HXDLIN(  96)								newByteLength = (( (int)(len) ) * _this->bytesPerElement);
HXDLIN(  96)								int newRange = (in_byteOffset + newByteLength);
HXDLIN(  96)								if ((newRange > bufferByteLength)) {
HXDLIN(  96)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
            							}
HXDLIN(  96)							_this->buffer = buffer;
HXDLIN(  96)							_this->byteOffset = in_byteOffset;
HXDLIN(  96)							_this->byteLength = newByteLength;
HXDLIN(  96)							_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN(  96)							this2 = _this;
            						}
            						else {
HXDLIN(  96)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Float32Array",8e,c1,f4,d4)));
            						}
            					}
            				}
            			}
            		}
HXDLIN(  96)		return ::lime::math::_ColorMatrix::ColorMatrix_Impl__obj::_new(this2);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorMatrix_Impl__obj,clone,return )

void ColorMatrix_Impl__obj::concat( ::lime::utils::ArrayBufferView this1, ::lime::utils::ArrayBufferView second){
            	HX_STACKFRAME(&_hx_pos_855a2747f55db411_104_concat)
HXLINE( 105)		{
HXLINE( 105)			Float value =  ::__hxcpp_memory_get_float(this1->buffer->b,this1->byteOffset);
HXDLIN( 105)			Float value1 = (value +  ::__hxcpp_memory_get_float(second->buffer->b,second->byteOffset));
HXDLIN( 105)			 ::__hxcpp_memory_set_float(this1->buffer->b,this1->byteOffset,value1);
            		}
HXLINE( 106)		{
HXLINE( 106)			Float value2 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 24));
HXDLIN( 106)			Float value3 = (value2 +  ::__hxcpp_memory_get_float(second->buffer->b,(second->byteOffset + 24)));
HXDLIN( 106)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 24),value3);
            		}
HXLINE( 107)		{
HXLINE( 107)			Float value4 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 48));
HXDLIN( 107)			Float value5 = (value4 +  ::__hxcpp_memory_get_float(second->buffer->b,(second->byteOffset + 48)));
HXDLIN( 107)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 48),value5);
            		}
HXLINE( 108)		{
HXLINE( 108)			Float value6 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 72));
HXDLIN( 108)			Float value7 = (value6 +  ::__hxcpp_memory_get_float(second->buffer->b,(second->byteOffset + 72)));
HXDLIN( 108)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 72),value7);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ColorMatrix_Impl__obj,concat,(void))

void ColorMatrix_Impl__obj::copyFrom( ::lime::utils::ArrayBufferView this1, ::lime::utils::ArrayBufferView other){
            	HX_STACKFRAME(&_hx_pos_855a2747f55db411_117_copyFrom)
HXDLIN( 117)		 ::lime::utils::ArrayBufferView view = other;
HXDLIN( 117)		::cpp::VirtualArray array = null();
HXDLIN( 117)		int offset = 0;
HXDLIN( 117)		bool _hx_tmp;
HXDLIN( 117)		if (::hx::IsNotNull( view )) {
HXDLIN( 117)			_hx_tmp = ::hx::IsNull( array );
            		}
            		else {
HXDLIN( 117)			_hx_tmp = false;
            		}
HXDLIN( 117)		if (_hx_tmp) {
HXDLIN( 117)			this1->buffer->blit((offset * this1->bytesPerElement),view->buffer,view->byteOffset,view->byteLength);
            		}
            		else {
HXDLIN( 117)			bool _hx_tmp;
HXDLIN( 117)			if (::hx::IsNotNull( array )) {
HXDLIN( 117)				_hx_tmp = ::hx::IsNull( view );
            			}
            			else {
HXDLIN( 117)				_hx_tmp = false;
            			}
HXDLIN( 117)			if (_hx_tmp) {
HXDLIN( 117)				this1->copyFromArray(array,offset);
            			}
            			else {
HXDLIN( 117)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid .set call. either view, or array must be not-null.",64,ba,b7,6c)));
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ColorMatrix_Impl__obj,copyFrom,(void))

void ColorMatrix_Impl__obj::identity( ::lime::utils::ArrayBufferView this1){
            	HX_STACKFRAME(&_hx_pos_855a2747f55db411_124_identity)
HXLINE( 125)		 ::__hxcpp_memory_set_float(this1->buffer->b,this1->byteOffset,1);
HXLINE( 126)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 4),0);
HXLINE( 127)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 8),0);
HXLINE( 128)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 12),0);
HXLINE( 129)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 16),0);
HXLINE( 130)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 20),0);
HXLINE( 131)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 24),1);
HXLINE( 132)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 28),0);
HXLINE( 133)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 32),0);
HXLINE( 134)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 36),0);
HXLINE( 135)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 40),0);
HXLINE( 136)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 44),0);
HXLINE( 137)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 48),1);
HXLINE( 138)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 52),0);
HXLINE( 139)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 56),0);
HXLINE( 140)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 60),0);
HXLINE( 141)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 64),0);
HXLINE( 142)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 68),0);
HXLINE( 143)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 72),1);
HXLINE( 144)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 76),0);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorMatrix_Impl__obj,identity,(void))

 ::lime::utils::ArrayBufferView ColorMatrix_Impl__obj::getAlphaTable( ::lime::utils::ArrayBufferView this1){
            	HX_GC_STACKFRAME(&_hx_pos_855a2747f55db411_168_getAlphaTable)
HXLINE( 169)		if (::hx::IsNull( ::lime::math::_ColorMatrix::ColorMatrix_Impl__obj::_hx___alphaTable )) {
HXLINE( 171)			 ::haxe::io::Bytes buffer = null();
HXDLIN( 171)			::cpp::VirtualArray array = null();
HXDLIN( 171)			 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 171)			 ::lime::utils::ArrayBufferView view = null();
HXDLIN( 171)			 ::Dynamic len = null();
HXDLIN( 171)			 ::lime::utils::ArrayBufferView this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,256,4);
HXDLIN( 171)			::lime::math::_ColorMatrix::ColorMatrix_Impl__obj::_hx___alphaTable = this1;
            		}
HXLINE( 174)		int value;
HXLINE( 175)		{
HXLINE( 175)			 ::lime::utils::ArrayBufferView this2 = ::lime::math::_ColorMatrix::ColorMatrix_Impl__obj::_hx___alphaTable;
HXDLIN( 175)			 ::__hxcpp_memory_set_byte(this2->buffer->b,this2->byteOffset,0);
            		}
HXLINE( 177)		{
HXLINE( 177)			int _g = 1;
HXDLIN( 177)			while((_g < 256)){
HXLINE( 177)				_g = (_g + 1);
HXDLIN( 177)				int i = (_g - 1);
HXLINE( 179)				Float value1 = (( (Float)(i) ) *  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 72)));
HXDLIN( 179)				value = ::Math_obj::floor((value1 + ( ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 76)) * ( (Float)(255) ))));
HXLINE( 180)				if ((value > 255)) {
HXLINE( 180)					value = 255;
            				}
HXLINE( 181)				if ((value < 0)) {
HXLINE( 181)					value = 0;
            				}
HXLINE( 182)				{
HXLINE( 182)					 ::lime::utils::ArrayBufferView this2 = ::lime::math::_ColorMatrix::ColorMatrix_Impl__obj::_hx___alphaTable;
HXDLIN( 182)					 ::__hxcpp_memory_set_byte(this2->buffer->b,(this2->byteOffset + i),value);
            				}
            			}
            		}
HXLINE( 185)		return ::lime::math::_ColorMatrix::ColorMatrix_Impl__obj::_hx___alphaTable;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorMatrix_Impl__obj,getAlphaTable,return )

 ::lime::utils::ArrayBufferView ColorMatrix_Impl__obj::getBlueTable( ::lime::utils::ArrayBufferView this1){
            	HX_GC_STACKFRAME(&_hx_pos_855a2747f55db411_209_getBlueTable)
HXLINE( 210)		if (::hx::IsNull( ::lime::math::_ColorMatrix::ColorMatrix_Impl__obj::_hx___blueTable )) {
HXLINE( 212)			 ::haxe::io::Bytes buffer = null();
HXDLIN( 212)			::cpp::VirtualArray array = null();
HXDLIN( 212)			 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 212)			 ::lime::utils::ArrayBufferView view = null();
HXDLIN( 212)			 ::Dynamic len = null();
HXDLIN( 212)			 ::lime::utils::ArrayBufferView this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,256,4);
HXDLIN( 212)			::lime::math::_ColorMatrix::ColorMatrix_Impl__obj::_hx___blueTable = this1;
            		}
HXLINE( 215)		int value;
HXLINE( 217)		{
HXLINE( 217)			int _g = 0;
HXDLIN( 217)			while((_g < 256)){
HXLINE( 217)				_g = (_g + 1);
HXDLIN( 217)				int i = (_g - 1);
HXLINE( 219)				Float value1 = (( (Float)(i) ) *  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 48)));
HXDLIN( 219)				value = ::Math_obj::floor((value1 + ( ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 56)) * ( (Float)(255) ))));
HXLINE( 220)				if ((value > 255)) {
HXLINE( 220)					value = 255;
            				}
HXLINE( 221)				if ((value < 0)) {
HXLINE( 221)					value = 0;
            				}
HXLINE( 222)				{
HXLINE( 222)					 ::lime::utils::ArrayBufferView this2 = ::lime::math::_ColorMatrix::ColorMatrix_Impl__obj::_hx___blueTable;
HXDLIN( 222)					 ::__hxcpp_memory_set_byte(this2->buffer->b,(this2->byteOffset + i),value);
            				}
            			}
            		}
HXLINE( 225)		return ::lime::math::_ColorMatrix::ColorMatrix_Impl__obj::_hx___blueTable;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorMatrix_Impl__obj,getBlueTable,return )

 ::lime::utils::ArrayBufferView ColorMatrix_Impl__obj::getGreenTable( ::lime::utils::ArrayBufferView this1){
            	HX_GC_STACKFRAME(&_hx_pos_855a2747f55db411_249_getGreenTable)
HXLINE( 250)		if (::hx::IsNull( ::lime::math::_ColorMatrix::ColorMatrix_Impl__obj::_hx___greenTable )) {
HXLINE( 252)			 ::haxe::io::Bytes buffer = null();
HXDLIN( 252)			::cpp::VirtualArray array = null();
HXDLIN( 252)			 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 252)			 ::lime::utils::ArrayBufferView view = null();
HXDLIN( 252)			 ::Dynamic len = null();
HXDLIN( 252)			 ::lime::utils::ArrayBufferView this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,256,4);
HXDLIN( 252)			::lime::math::_ColorMatrix::ColorMatrix_Impl__obj::_hx___greenTable = this1;
            		}
HXLINE( 255)		int value;
HXLINE( 257)		{
HXLINE( 257)			int _g = 0;
HXDLIN( 257)			while((_g < 256)){
HXLINE( 257)				_g = (_g + 1);
HXDLIN( 257)				int i = (_g - 1);
HXLINE( 259)				Float value1 = (( (Float)(i) ) *  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 24)));
HXDLIN( 259)				value = ::Math_obj::floor((value1 + ( ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 36)) * ( (Float)(255) ))));
HXLINE( 260)				if ((value > 255)) {
HXLINE( 260)					value = 255;
            				}
HXLINE( 261)				if ((value < 0)) {
HXLINE( 261)					value = 0;
            				}
HXLINE( 262)				{
HXLINE( 262)					 ::lime::utils::ArrayBufferView this2 = ::lime::math::_ColorMatrix::ColorMatrix_Impl__obj::_hx___greenTable;
HXDLIN( 262)					 ::__hxcpp_memory_set_byte(this2->buffer->b,(this2->byteOffset + i),value);
            				}
            			}
            		}
HXLINE( 265)		return ::lime::math::_ColorMatrix::ColorMatrix_Impl__obj::_hx___greenTable;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorMatrix_Impl__obj,getGreenTable,return )

 ::lime::utils::ArrayBufferView ColorMatrix_Impl__obj::getRedTable( ::lime::utils::ArrayBufferView this1){
            	HX_GC_STACKFRAME(&_hx_pos_855a2747f55db411_289_getRedTable)
HXLINE( 290)		if (::hx::IsNull( ::lime::math::_ColorMatrix::ColorMatrix_Impl__obj::_hx___redTable )) {
HXLINE( 292)			 ::haxe::io::Bytes buffer = null();
HXDLIN( 292)			::cpp::VirtualArray array = null();
HXDLIN( 292)			 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 292)			 ::lime::utils::ArrayBufferView view = null();
HXDLIN( 292)			 ::Dynamic len = null();
HXDLIN( 292)			 ::lime::utils::ArrayBufferView this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,256,4);
HXDLIN( 292)			::lime::math::_ColorMatrix::ColorMatrix_Impl__obj::_hx___redTable = this1;
            		}
HXLINE( 295)		int value;
HXLINE( 297)		{
HXLINE( 297)			int _g = 0;
HXDLIN( 297)			while((_g < 256)){
HXLINE( 297)				_g = (_g + 1);
HXDLIN( 297)				int i = (_g - 1);
HXLINE( 299)				Float value1 = (( (Float)(i) ) *  ::__hxcpp_memory_get_float(this1->buffer->b,this1->byteOffset));
HXDLIN( 299)				value = ::Math_obj::floor((value1 + ( ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 16)) * ( (Float)(255) ))));
HXLINE( 300)				if ((value > 255)) {
HXLINE( 300)					value = 255;
            				}
HXLINE( 301)				if ((value < 0)) {
HXLINE( 301)					value = 0;
            				}
HXLINE( 302)				{
HXLINE( 302)					 ::lime::utils::ArrayBufferView this2 = ::lime::math::_ColorMatrix::ColorMatrix_Impl__obj::_hx___redTable;
HXDLIN( 302)					 ::__hxcpp_memory_set_byte(this2->buffer->b,(this2->byteOffset + i),value);
            				}
            			}
            		}
HXLINE( 305)		return ::lime::math::_ColorMatrix::ColorMatrix_Impl__obj::_hx___redTable;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorMatrix_Impl__obj,getRedTable,return )

 ::Dynamic ColorMatrix_Impl__obj::_hx___toFlashColorTransform( ::lime::utils::ArrayBufferView this1){
            	HX_STACKFRAME(&_hx_pos_855a2747f55db411_313___toFlashColorTransform)
HXDLIN( 313)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorMatrix_Impl__obj,_hx___toFlashColorTransform,return )

Float ColorMatrix_Impl__obj::get_alphaMultiplier( ::lime::utils::ArrayBufferView this1){
            	HX_STACKFRAME(&_hx_pos_855a2747f55db411_320_get_alphaMultiplier)
HXDLIN( 320)		return  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 72));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorMatrix_Impl__obj,get_alphaMultiplier,return )

Float ColorMatrix_Impl__obj::set_alphaMultiplier( ::lime::utils::ArrayBufferView this1,Float value){
            	HX_STACKFRAME(&_hx_pos_855a2747f55db411_325_set_alphaMultiplier)
HXDLIN( 325)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 72),value);
HXDLIN( 325)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ColorMatrix_Impl__obj,set_alphaMultiplier,return )

Float ColorMatrix_Impl__obj::get_alphaOffset( ::lime::utils::ArrayBufferView this1){
            	HX_STACKFRAME(&_hx_pos_855a2747f55db411_330_get_alphaOffset)
HXDLIN( 330)		return ( ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 76)) * ( (Float)(255) ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorMatrix_Impl__obj,get_alphaOffset,return )

Float ColorMatrix_Impl__obj::set_alphaOffset( ::lime::utils::ArrayBufferView this1,Float value){
            	HX_STACKFRAME(&_hx_pos_855a2747f55db411_335_set_alphaOffset)
HXDLIN( 335)		Float val = (value / ( (Float)(255) ));
HXDLIN( 335)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 76),val);
HXDLIN( 335)		return val;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ColorMatrix_Impl__obj,set_alphaOffset,return )

Float ColorMatrix_Impl__obj::get_blueMultiplier( ::lime::utils::ArrayBufferView this1){
            	HX_STACKFRAME(&_hx_pos_855a2747f55db411_340_get_blueMultiplier)
HXDLIN( 340)		return  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 48));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorMatrix_Impl__obj,get_blueMultiplier,return )

Float ColorMatrix_Impl__obj::set_blueMultiplier( ::lime::utils::ArrayBufferView this1,Float value){
            	HX_STACKFRAME(&_hx_pos_855a2747f55db411_345_set_blueMultiplier)
HXDLIN( 345)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 48),value);
HXDLIN( 345)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ColorMatrix_Impl__obj,set_blueMultiplier,return )

Float ColorMatrix_Impl__obj::get_blueOffset( ::lime::utils::ArrayBufferView this1){
            	HX_STACKFRAME(&_hx_pos_855a2747f55db411_350_get_blueOffset)
HXDLIN( 350)		return ( ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 56)) * ( (Float)(255) ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorMatrix_Impl__obj,get_blueOffset,return )

Float ColorMatrix_Impl__obj::set_blueOffset( ::lime::utils::ArrayBufferView this1,Float value){
            	HX_STACKFRAME(&_hx_pos_855a2747f55db411_355_set_blueOffset)
HXDLIN( 355)		Float val = (value / ( (Float)(255) ));
HXDLIN( 355)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 56),val);
HXDLIN( 355)		return val;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ColorMatrix_Impl__obj,set_blueOffset,return )

int ColorMatrix_Impl__obj::get_color( ::lime::utils::ArrayBufferView this1){
            	HX_STACKFRAME(&_hx_pos_855a2747f55db411_360_get_color)
HXDLIN( 360)		int _hx_tmp = (::Std_obj::_hx_int(( ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 16)) * ( (Float)(255) ))) << 16);
HXDLIN( 360)		int _hx_tmp1 = (_hx_tmp | (::Std_obj::_hx_int(( ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 36)) * ( (Float)(255) ))) << 8));
HXDLIN( 360)		return (_hx_tmp1 | ::Std_obj::_hx_int(( ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 56)) * ( (Float)(255) ))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorMatrix_Impl__obj,get_color,return )

int ColorMatrix_Impl__obj::set_color( ::lime::utils::ArrayBufferView this1,int value){
            	HX_STACKFRAME(&_hx_pos_855a2747f55db411_364_set_color)
HXLINE( 365)		{
HXLINE( 365)			Float val = (( (Float)(((value >> 16) & 255)) ) / ( (Float)(255) ));
HXDLIN( 365)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 16),val);
            		}
HXLINE( 366)		{
HXLINE( 366)			Float val1 = (( (Float)(((value >> 8) & 255)) ) / ( (Float)(255) ));
HXDLIN( 366)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 36),val1);
            		}
HXLINE( 367)		{
HXLINE( 367)			Float val2 = (( (Float)((value & 255)) ) / ( (Float)(255) ));
HXDLIN( 367)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 56),val2);
            		}
HXLINE( 369)		 ::__hxcpp_memory_set_float(this1->buffer->b,this1->byteOffset,0);
HXLINE( 370)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 24),0);
HXLINE( 371)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 48),0);
HXLINE( 373)		return ::lime::math::_ColorMatrix::ColorMatrix_Impl__obj::get_color(this1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ColorMatrix_Impl__obj,set_color,return )

Float ColorMatrix_Impl__obj::get_greenMultiplier( ::lime::utils::ArrayBufferView this1){
            	HX_STACKFRAME(&_hx_pos_855a2747f55db411_378_get_greenMultiplier)
HXDLIN( 378)		return  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 24));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorMatrix_Impl__obj,get_greenMultiplier,return )

Float ColorMatrix_Impl__obj::set_greenMultiplier( ::lime::utils::ArrayBufferView this1,Float value){
            	HX_STACKFRAME(&_hx_pos_855a2747f55db411_383_set_greenMultiplier)
HXDLIN( 383)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 24),value);
HXDLIN( 383)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ColorMatrix_Impl__obj,set_greenMultiplier,return )

Float ColorMatrix_Impl__obj::get_greenOffset( ::lime::utils::ArrayBufferView this1){
            	HX_STACKFRAME(&_hx_pos_855a2747f55db411_388_get_greenOffset)
HXDLIN( 388)		return ( ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 36)) * ( (Float)(255) ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorMatrix_Impl__obj,get_greenOffset,return )

Float ColorMatrix_Impl__obj::set_greenOffset( ::lime::utils::ArrayBufferView this1,Float value){
            	HX_STACKFRAME(&_hx_pos_855a2747f55db411_393_set_greenOffset)
HXDLIN( 393)		Float val = (value / ( (Float)(255) ));
HXDLIN( 393)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 36),val);
HXDLIN( 393)		return val;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ColorMatrix_Impl__obj,set_greenOffset,return )

Float ColorMatrix_Impl__obj::get_redMultiplier( ::lime::utils::ArrayBufferView this1){
            	HX_STACKFRAME(&_hx_pos_855a2747f55db411_398_get_redMultiplier)
HXDLIN( 398)		return  ::__hxcpp_memory_get_float(this1->buffer->b,this1->byteOffset);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorMatrix_Impl__obj,get_redMultiplier,return )

Float ColorMatrix_Impl__obj::set_redMultiplier( ::lime::utils::ArrayBufferView this1,Float value){
            	HX_STACKFRAME(&_hx_pos_855a2747f55db411_403_set_redMultiplier)
HXDLIN( 403)		 ::__hxcpp_memory_set_float(this1->buffer->b,this1->byteOffset,value);
HXDLIN( 403)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ColorMatrix_Impl__obj,set_redMultiplier,return )

Float ColorMatrix_Impl__obj::get_redOffset( ::lime::utils::ArrayBufferView this1){
            	HX_STACKFRAME(&_hx_pos_855a2747f55db411_408_get_redOffset)
HXDLIN( 408)		return ( ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 16)) * ( (Float)(255) ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorMatrix_Impl__obj,get_redOffset,return )

Float ColorMatrix_Impl__obj::set_redOffset( ::lime::utils::ArrayBufferView this1,Float value){
            	HX_STACKFRAME(&_hx_pos_855a2747f55db411_413_set_redOffset)
HXDLIN( 413)		Float val = (value / ( (Float)(255) ));
HXDLIN( 413)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 16),val);
HXDLIN( 413)		return val;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ColorMatrix_Impl__obj,set_redOffset,return )

Float ColorMatrix_Impl__obj::get( ::lime::utils::ArrayBufferView this1,int index){
            	HX_STACKFRAME(&_hx_pos_855a2747f55db411_418_get)
HXDLIN( 418)		return  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (index * 4)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ColorMatrix_Impl__obj,get,return )

Float ColorMatrix_Impl__obj::set( ::lime::utils::ArrayBufferView this1,int index,Float value){
            	HX_STACKFRAME(&_hx_pos_855a2747f55db411_423_set)
HXDLIN( 423)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (index * 4)),value);
HXDLIN( 423)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ColorMatrix_Impl__obj,set,return )


ColorMatrix_Impl__obj::ColorMatrix_Impl__obj()
{
}

bool ColorMatrix_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set") ) { outValue = set_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { outValue = clone_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"concat") ) { outValue = concat_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"copyFrom") ) { outValue = copyFrom_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"identity") ) { outValue = identity_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_color") ) { outValue = get_color_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_color") ) { outValue = set_color_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getRedTable") ) { outValue = getRedTable_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getBlueTable") ) { outValue = getBlueTable_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getAlphaTable") ) { outValue = getAlphaTable_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getGreenTable") ) { outValue = getGreenTable_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_redOffset") ) { outValue = get_redOffset_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_redOffset") ) { outValue = set_redOffset_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_blueOffset") ) { outValue = get_blueOffset_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_blueOffset") ) { outValue = set_blueOffset_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_alphaOffset") ) { outValue = get_alphaOffset_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_alphaOffset") ) { outValue = set_alphaOffset_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_greenOffset") ) { outValue = get_greenOffset_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_greenOffset") ) { outValue = set_greenOffset_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_redMultiplier") ) { outValue = get_redMultiplier_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_redMultiplier") ) { outValue = set_redMultiplier_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_blueMultiplier") ) { outValue = get_blueMultiplier_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_blueMultiplier") ) { outValue = set_blueMultiplier_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_alphaMultiplier") ) { outValue = get_alphaMultiplier_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_alphaMultiplier") ) { outValue = set_alphaMultiplier_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_greenMultiplier") ) { outValue = get_greenMultiplier_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_greenMultiplier") ) { outValue = set_greenMultiplier_dyn(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"__toFlashColorTransform") ) { outValue = _hx___toFlashColorTransform_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ColorMatrix_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo ColorMatrix_Impl__obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::lime::utils::ArrayBufferView */ ,(void *) &ColorMatrix_Impl__obj::_hx___alphaTable,HX_("__alphaTable",f0,86,1c,64)},
	{::hx::fsObject /*  ::lime::utils::ArrayBufferView */ ,(void *) &ColorMatrix_Impl__obj::_hx___blueTable,HX_("__blueTable",f4,7f,4a,11)},
	{::hx::fsObject /*  ::lime::utils::ArrayBufferView */ ,(void *) &ColorMatrix_Impl__obj::_hx___greenTable,HX_("__greenTable",6b,31,3c,18)},
	{::hx::fsObject /* ::Array< Float > */ ,(void *) &ColorMatrix_Impl__obj::_hx___identity,HX_("__identity",5e,b8,67,5c)},
	{::hx::fsObject /*  ::lime::utils::ArrayBufferView */ ,(void *) &ColorMatrix_Impl__obj::_hx___redTable,HX_("__redTable",1d,5c,68,1d)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void ColorMatrix_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ColorMatrix_Impl__obj::_hx___alphaTable,"__alphaTable");
	HX_MARK_MEMBER_NAME(ColorMatrix_Impl__obj::_hx___blueTable,"__blueTable");
	HX_MARK_MEMBER_NAME(ColorMatrix_Impl__obj::_hx___greenTable,"__greenTable");
	HX_MARK_MEMBER_NAME(ColorMatrix_Impl__obj::_hx___identity,"__identity");
	HX_MARK_MEMBER_NAME(ColorMatrix_Impl__obj::_hx___redTable,"__redTable");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ColorMatrix_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ColorMatrix_Impl__obj::_hx___alphaTable,"__alphaTable");
	HX_VISIT_MEMBER_NAME(ColorMatrix_Impl__obj::_hx___blueTable,"__blueTable");
	HX_VISIT_MEMBER_NAME(ColorMatrix_Impl__obj::_hx___greenTable,"__greenTable");
	HX_VISIT_MEMBER_NAME(ColorMatrix_Impl__obj::_hx___identity,"__identity");
	HX_VISIT_MEMBER_NAME(ColorMatrix_Impl__obj::_hx___redTable,"__redTable");
};

#endif

::hx::Class ColorMatrix_Impl__obj::__mClass;

static ::String ColorMatrix_Impl__obj_sStaticFields[] = {
	HX_("__alphaTable",f0,86,1c,64),
	HX_("__blueTable",f4,7f,4a,11),
	HX_("__greenTable",6b,31,3c,18),
	HX_("__identity",5e,b8,67,5c),
	HX_("__redTable",1d,5c,68,1d),
	HX_("_new",61,15,1f,3f),
	HX_("clone",5d,13,63,48),
	HX_("concat",14,09,d0,c7),
	HX_("copyFrom",bf,0b,61,c8),
	HX_("identity",3e,45,2f,b9),
	HX_("getAlphaTable",06,68,fb,87),
	HX_("getBlueTable",9e,d3,74,f2),
	HX_("getGreenTable",81,12,1b,3c),
	HX_("getRedTable",b3,ab,23,a0),
	HX_("__toFlashColorTransform",7e,99,c3,ed),
	HX_("get_alphaMultiplier",96,83,8d,25),
	HX_("set_alphaMultiplier",a2,76,2a,62),
	HX_("get_alphaOffset",28,45,25,91),
	HX_("set_alphaOffset",34,c2,f0,8c),
	HX_("get_blueMultiplier",84,13,30,6b),
	HX_("set_blueMultiplier",f8,45,df,47),
	HX_("get_blueOffset",16,c6,29,31),
	HX_("set_blueOffset",8a,ae,49,51),
	HX_("get_color",ba,cd,05,8e),
	HX_("set_color",c6,b9,56,71),
	HX_("get_greenMultiplier",3b,fb,4a,fa),
	HX_("set_greenMultiplier",47,ee,e7,36),
	HX_("get_greenOffset",4d,c6,ba,78),
	HX_("set_greenOffset",59,43,86,74),
	HX_("get_redMultiplier",89,ff,59,55),
	HX_("set_redMultiplier",95,d7,c7,78),
	HX_("get_redOffset",9b,0b,02,15),
	HX_("set_redOffset",a7,ed,07,5a),
	HX_("get",96,80,4e,00),
	HX_("set",a2,9b,57,00),
	::String(null())
};

void ColorMatrix_Impl__obj::__register()
{
	ColorMatrix_Impl__obj _hx_dummy;
	ColorMatrix_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.math._ColorMatrix.ColorMatrix_Impl_",c8,e8,e8,0e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ColorMatrix_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ColorMatrix_Impl__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ColorMatrix_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< ColorMatrix_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ColorMatrix_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ColorMatrix_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ColorMatrix_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ColorMatrix_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_855a2747f55db411_20_boot)
HXDLIN(  20)		_hx___identity = ::Array_obj< Float >::fromData( _hx_array_data_0ee8e8c8_35,20);
            	}
}

} // end namespace lime
} // end namespace math
} // end namespace _ColorMatrix
