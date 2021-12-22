#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferIO
#include <lime/utils/ArrayBufferIO.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_244a612994c6bd06_7_new,"lime.utils.ArrayBufferView","new",0xa2471efa,"lime.utils.ArrayBufferView.new","lime/utils/ArrayBufferView.hx",7,0xb543acf8)
HX_LOCAL_STACK_FRAME(_hx_pos_244a612994c6bd06_166_subarray_lime_utils_Float64Array,"lime.utils.ArrayBufferView","subarray_lime_utils_Float64Array",0x2bc0d377,"lime.utils.ArrayBufferView.subarray_lime_utils_Float64Array","lime/utils/ArrayBufferView.hx",166,0xb543acf8)
HX_LOCAL_STACK_FRAME(_hx_pos_244a612994c6bd06_166_subarray_lime_utils_Int16Array,"lime.utils.ArrayBufferView","subarray_lime_utils_Int16Array",0xca4c1d7d,"lime.utils.ArrayBufferView.subarray_lime_utils_Int16Array","lime/utils/ArrayBufferView.hx",166,0xb543acf8)
HX_LOCAL_STACK_FRAME(_hx_pos_244a612994c6bd06_166_subarray_lime_utils_Int8Array,"lime.utils.ArrayBufferView","subarray_lime_utils_Int8Array",0x5ec0bd58,"lime.utils.ArrayBufferView.subarray_lime_utils_Int8Array","lime/utils/ArrayBufferView.hx",166,0xb543acf8)
HX_LOCAL_STACK_FRAME(_hx_pos_244a612994c6bd06_166_subarray_lime_utils_UInt8ClampedArray,"lime.utils.ArrayBufferView","subarray_lime_utils_UInt8ClampedArray",0x0c7948a5,"lime.utils.ArrayBufferView.subarray_lime_utils_UInt8ClampedArray","lime/utils/ArrayBufferView.hx",166,0xb543acf8)
HX_LOCAL_STACK_FRAME(_hx_pos_244a612994c6bd06_166_subarray_lime_utils_UInt16Array,"lime.utils.ArrayBufferView","subarray_lime_utils_UInt16Array",0x1214e722,"lime.utils.ArrayBufferView.subarray_lime_utils_UInt16Array","lime/utils/ArrayBufferView.hx",166,0xb543acf8)
HX_LOCAL_STACK_FRAME(_hx_pos_244a612994c6bd06_166_subarray_lime_utils_Int32Array,"lime.utils.ArrayBufferView","subarray_lime_utils_Int32Array",0x84099983,"lime.utils.ArrayBufferView.subarray_lime_utils_Int32Array","lime/utils/ArrayBufferView.hx",166,0xb543acf8)
HX_LOCAL_STACK_FRAME(_hx_pos_244a612994c6bd06_166_subarray_lime_utils_UInt32Array,"lime.utils.ArrayBufferView","subarray_lime_utils_UInt32Array",0xcbd26328,"lime.utils.ArrayBufferView.subarray_lime_utils_UInt32Array","lime/utils/ArrayBufferView.hx",166,0xb543acf8)
HX_LOCAL_STACK_FRAME(_hx_pos_244a612994c6bd06_166_subarray_lime_utils_Float32Array,"lime.utils.ArrayBufferView","subarray_lime_utils_Float32Array",0xe249b676,"lime.utils.ArrayBufferView.subarray_lime_utils_Float32Array","lime/utils/ArrayBufferView.hx",166,0xb543acf8)
HX_LOCAL_STACK_FRAME(_hx_pos_244a612994c6bd06_166_subarray_lime_utils_UInt8Array,"lime.utils.ArrayBufferView","subarray_lime_utils_UInt8Array",0xa88baf53,"lime.utils.ArrayBufferView.subarray_lime_utils_UInt8Array","lime/utils/ArrayBufferView.hx",166,0xb543acf8)
HX_LOCAL_STACK_FRAME(_hx_pos_244a612994c6bd06_48_initTypedArray,"lime.utils.ArrayBufferView","initTypedArray",0x0a95c3a5,"lime.utils.ArrayBufferView.initTypedArray","lime/utils/ArrayBufferView.hx",48,0xb543acf8)
HX_LOCAL_STACK_FRAME(_hx_pos_244a612994c6bd06_79_initBuffer,"lime.utils.ArrayBufferView","initBuffer",0x6e6530d6,"lime.utils.ArrayBufferView.initBuffer","lime/utils/ArrayBufferView.hx",79,0xb543acf8)
HX_LOCAL_STACK_FRAME(_hx_pos_244a612994c6bd06_115_initArray,"lime.utils.ArrayBufferView","initArray",0xe96cc683,"lime.utils.ArrayBufferView.initArray","lime/utils/ArrayBufferView.hx",115,0xb543acf8)
HX_LOCAL_STACK_FRAME(_hx_pos_244a612994c6bd06_133_set,"lime.utils.ArrayBufferView","set",0xa24aea3c,"lime.utils.ArrayBufferView.set","lime/utils/ArrayBufferView.hx",133,0xb543acf8)
HX_LOCAL_STACK_FRAME(_hx_pos_244a612994c6bd06_152_cloneBuffer,"lime.utils.ArrayBufferView","cloneBuffer",0x2d1320d7,"lime.utils.ArrayBufferView.cloneBuffer","lime/utils/ArrayBufferView.hx",152,0xb543acf8)
HX_LOCAL_STACK_FRAME(_hx_pos_244a612994c6bd06_212_bytesForType,"lime.utils.ArrayBufferView","bytesForType",0x22197f5e,"lime.utils.ArrayBufferView.bytesForType","lime/utils/ArrayBufferView.hx",212,0xb543acf8)
HX_LOCAL_STACK_FRAME(_hx_pos_244a612994c6bd06_249_toString,"lime.utils.ArrayBufferView","toString",0x0eb653d2,"lime.utils.ArrayBufferView.toString","lime/utils/ArrayBufferView.hx",249,0xb543acf8)
HX_LOCAL_STACK_FRAME(_hx_pos_244a612994c6bd06_272_toByteLength,"lime.utils.ArrayBufferView","toByteLength",0x7dea5d8f,"lime.utils.ArrayBufferView.toByteLength","lime/utils/ArrayBufferView.hx",272,0xb543acf8)
HX_LOCAL_STACK_FRAME(_hx_pos_244a612994c6bd06_279_copyFromArray,"lime.utils.ArrayBufferView","copyFromArray",0x360b3074,"lime.utils.ArrayBufferView.copyFromArray","lime/utils/ArrayBufferView.hx",279,0xb543acf8)
namespace lime{
namespace utils{

void ArrayBufferView_obj::__construct( ::Dynamic elements,int in_type){
            	HX_STACKFRAME(&_hx_pos_244a612994c6bd06_7_new)
HXLINE(  16)		this->bytesPerElement = 0;
HXLINE(   9)		this->type = 0;
HXLINE(  24)		this->type = in_type;
HXLINE(  25)		int _hx_tmp;
HXDLIN(  25)		switch((int)(this->type)){
            			case (int)1: {
HXLINE(  25)				_hx_tmp = 1;
            			}
            			break;
            			case (int)2: {
HXLINE(  25)				_hx_tmp = 2;
            			}
            			break;
            			case (int)3: {
HXLINE(  25)				_hx_tmp = 4;
            			}
            			break;
            			case (int)4: {
HXLINE(  25)				_hx_tmp = 1;
            			}
            			break;
            			case (int)5: {
HXLINE(  25)				_hx_tmp = 1;
            			}
            			break;
            			case (int)6: {
HXLINE(  25)				_hx_tmp = 2;
            			}
            			break;
            			case (int)7: {
HXLINE(  25)				_hx_tmp = 4;
            			}
            			break;
            			case (int)8: {
HXLINE(  25)				_hx_tmp = 4;
            			}
            			break;
            			case (int)9: {
HXLINE(  25)				_hx_tmp = 8;
            			}
            			break;
            			default:{
HXLINE(  25)				_hx_tmp = 1;
            			}
            		}
HXDLIN(  25)		this->bytesPerElement = _hx_tmp;
HXLINE(  29)		bool _hx_tmp1;
HXDLIN(  29)		if (::hx::IsNotNull( elements )) {
HXLINE(  29)			_hx_tmp1 = ::hx::IsNotEq( elements,0 );
            		}
            		else {
HXLINE(  29)			_hx_tmp1 = false;
            		}
HXDLIN(  29)		if (_hx_tmp1) {
HXLINE(  31)			if (::hx::IsLess( elements,0 )) {
HXLINE(  31)				elements = 0;
            			}
HXLINE(  35)			this->byteOffset = 0;
HXLINE(  36)			this->byteLength = (( (int)(elements) ) * this->bytesPerElement);
HXLINE(  37)			 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(this->byteLength);
HXDLIN(  37)			this->buffer = this1;
HXLINE(  38)			this->length = ( (int)(elements) );
            		}
            	}

Dynamic ArrayBufferView_obj::__CreateEmpty() { return new ArrayBufferView_obj; }

void *ArrayBufferView_obj::_hx_vtable = 0;

Dynamic ArrayBufferView_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ArrayBufferView_obj > _hx_result = new ArrayBufferView_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool ArrayBufferView_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x24c8740e;
}

 ::lime::utils::ArrayBufferView ArrayBufferView_obj::subarray_lime_utils_Float64Array(int begin, ::Dynamic end){
            	HX_GC_STACKFRAME(&_hx_pos_244a612994c6bd06_166_subarray_lime_utils_Float64Array)
HXLINE( 167)		if (::hx::IsNull( end )) {
HXLINE( 167)			end = this->length;
            		}
HXLINE( 168)		int len = (( (int)(end) ) - begin);
HXLINE( 169)		int byte_offset = ((begin * this->bytesPerElement) + this->byteOffset);
HXLINE( 171)		 ::lime::utils::ArrayBufferView view;
HXDLIN( 171)		switch((int)(this->type)){
            			case (int)0: {
HXLINE( 201)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("subarray on a blank ArrayBufferView",39,87,fd,19)));
            			}
            			break;
            			case (int)1: {
HXLINE( 174)				 ::Dynamic elements = null();
HXDLIN( 174)				 ::haxe::io::Bytes buffer = this->buffer;
HXDLIN( 174)				::cpp::VirtualArray array = null();
HXDLIN( 174)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 174)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 174)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 174)				if (::hx::IsNull( byteoffset )) {
HXLINE( 174)					byteoffset = 0;
            				}
HXDLIN( 174)				 ::lime::utils::ArrayBufferView this1;
HXDLIN( 174)				if (::hx::IsNotNull( elements )) {
HXLINE( 174)					this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,1);
            				}
            				else {
HXLINE( 174)					if (::hx::IsNotNull( array )) {
HXLINE( 174)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,1);
HXDLIN( 174)						_this->byteOffset = 0;
HXDLIN( 174)						_this->length = array->get_length();
HXDLIN( 174)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 174)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 174)						_this->buffer = this2;
HXDLIN( 174)						_this->copyFromArray(array,null());
HXDLIN( 174)						this1 = _this;
            					}
            					else {
HXLINE( 174)						if (::hx::IsNotNull( vector )) {
HXLINE( 174)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,1);
HXDLIN( 174)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 174)							_this->byteOffset = 0;
HXDLIN( 174)							_this->length = array->get_length();
HXDLIN( 174)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 174)							 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 174)							_this->buffer = this2;
HXDLIN( 174)							_this->copyFromArray(array,null());
HXDLIN( 174)							this1 = _this;
            						}
            						else {
HXLINE( 174)							if (::hx::IsNotNull( view1 )) {
HXLINE( 174)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,1);
HXDLIN( 174)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 174)								int srcLength = view1->length;
HXDLIN( 174)								int srcByteOffset = view1->byteOffset;
HXDLIN( 174)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 174)								int elementSize = _this->bytesPerElement;
HXDLIN( 174)								if ((view1->type == _this->type)) {
HXLINE( 174)									int srcLength = srcData->length;
HXDLIN( 174)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 174)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 174)									_this->buffer = this1;
HXDLIN( 174)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 174)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 174)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 174)								_this->byteOffset = 0;
HXDLIN( 174)								_this->length = srcLength;
HXDLIN( 174)								this1 = _this;
            							}
            							else {
HXLINE( 174)								if (::hx::IsNotNull( buffer )) {
HXLINE( 174)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,1);
HXDLIN( 174)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 174)									if ((in_byteOffset < 0)) {
HXLINE( 174)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 174)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 174)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 174)									int bufferByteLength = buffer->length;
HXDLIN( 174)									int elementSize = _this->bytesPerElement;
HXDLIN( 174)									int newByteLength = bufferByteLength;
HXDLIN( 174)									if (::hx::IsNull( len )) {
HXLINE( 174)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 174)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 174)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 174)										if ((newByteLength < 0)) {
HXLINE( 174)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 174)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 174)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 174)										if ((newRange > bufferByteLength)) {
HXLINE( 174)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 174)									_this->buffer = buffer;
HXDLIN( 174)									_this->byteOffset = in_byteOffset;
HXDLIN( 174)									_this->byteLength = newByteLength;
HXDLIN( 174)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 174)									this1 = _this;
            								}
            								else {
HXLINE( 174)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Int8Array",40,53,da,77)));
            								}
            							}
            						}
            					}
            				}
HXLINE( 171)				view = this1;
            			}
            			break;
            			case (int)2: {
HXLINE( 177)				 ::Dynamic elements = null();
HXDLIN( 177)				 ::haxe::io::Bytes buffer = this->buffer;
HXDLIN( 177)				::cpp::VirtualArray array = null();
HXDLIN( 177)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 177)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 177)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 177)				if (::hx::IsNull( byteoffset )) {
HXLINE( 177)					byteoffset = 0;
            				}
HXDLIN( 177)				 ::lime::utils::ArrayBufferView this1;
HXDLIN( 177)				if (::hx::IsNotNull( elements )) {
HXLINE( 177)					this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,2);
            				}
            				else {
HXLINE( 177)					if (::hx::IsNotNull( array )) {
HXLINE( 177)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,2);
HXDLIN( 177)						_this->byteOffset = 0;
HXDLIN( 177)						_this->length = array->get_length();
HXDLIN( 177)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 177)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 177)						_this->buffer = this2;
HXDLIN( 177)						_this->copyFromArray(array,null());
HXDLIN( 177)						this1 = _this;
            					}
            					else {
HXLINE( 177)						if (::hx::IsNotNull( vector )) {
HXLINE( 177)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,2);
HXDLIN( 177)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 177)							_this->byteOffset = 0;
HXDLIN( 177)							_this->length = array->get_length();
HXDLIN( 177)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 177)							 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 177)							_this->buffer = this2;
HXDLIN( 177)							_this->copyFromArray(array,null());
HXDLIN( 177)							this1 = _this;
            						}
            						else {
HXLINE( 177)							if (::hx::IsNotNull( view1 )) {
HXLINE( 177)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,2);
HXDLIN( 177)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 177)								int srcLength = view1->length;
HXDLIN( 177)								int srcByteOffset = view1->byteOffset;
HXDLIN( 177)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 177)								int elementSize = _this->bytesPerElement;
HXDLIN( 177)								if ((view1->type == _this->type)) {
HXLINE( 177)									int srcLength = srcData->length;
HXDLIN( 177)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 177)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 177)									_this->buffer = this1;
HXDLIN( 177)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 177)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 177)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 177)								_this->byteOffset = 0;
HXDLIN( 177)								_this->length = srcLength;
HXDLIN( 177)								this1 = _this;
            							}
            							else {
HXLINE( 177)								if (::hx::IsNotNull( buffer )) {
HXLINE( 177)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,2);
HXDLIN( 177)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 177)									if ((in_byteOffset < 0)) {
HXLINE( 177)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 177)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 177)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 177)									int bufferByteLength = buffer->length;
HXDLIN( 177)									int elementSize = _this->bytesPerElement;
HXDLIN( 177)									int newByteLength = bufferByteLength;
HXDLIN( 177)									if (::hx::IsNull( len )) {
HXLINE( 177)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 177)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 177)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 177)										if ((newByteLength < 0)) {
HXLINE( 177)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 177)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 177)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 177)										if ((newRange > bufferByteLength)) {
HXLINE( 177)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 177)									_this->buffer = buffer;
HXDLIN( 177)									_this->byteOffset = in_byteOffset;
HXDLIN( 177)									_this->byteLength = newByteLength;
HXDLIN( 177)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 177)									this1 = _this;
            								}
            								else {
HXLINE( 177)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Int16Array",95,b2,95,a7)));
            								}
            							}
            						}
            					}
            				}
HXLINE( 171)				view = this1;
            			}
            			break;
            			case (int)3: {
HXLINE( 180)				 ::Dynamic elements = null();
HXDLIN( 180)				 ::haxe::io::Bytes buffer = this->buffer;
HXDLIN( 180)				::cpp::VirtualArray array = null();
HXDLIN( 180)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 180)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 180)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 180)				if (::hx::IsNull( byteoffset )) {
HXLINE( 180)					byteoffset = 0;
            				}
HXDLIN( 180)				 ::lime::utils::ArrayBufferView this1;
HXDLIN( 180)				if (::hx::IsNotNull( elements )) {
HXLINE( 180)					this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,3);
            				}
            				else {
HXLINE( 180)					if (::hx::IsNotNull( array )) {
HXLINE( 180)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,3);
HXDLIN( 180)						_this->byteOffset = 0;
HXDLIN( 180)						_this->length = array->get_length();
HXDLIN( 180)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 180)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 180)						_this->buffer = this2;
HXDLIN( 180)						_this->copyFromArray(array,null());
HXDLIN( 180)						this1 = _this;
            					}
            					else {
HXLINE( 180)						if (::hx::IsNotNull( vector )) {
HXLINE( 180)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,3);
HXDLIN( 180)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 180)							_this->byteOffset = 0;
HXDLIN( 180)							_this->length = array->get_length();
HXDLIN( 180)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 180)							 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 180)							_this->buffer = this2;
HXDLIN( 180)							_this->copyFromArray(array,null());
HXDLIN( 180)							this1 = _this;
            						}
            						else {
HXLINE( 180)							if (::hx::IsNotNull( view1 )) {
HXLINE( 180)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,3);
HXDLIN( 180)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 180)								int srcLength = view1->length;
HXDLIN( 180)								int srcByteOffset = view1->byteOffset;
HXDLIN( 180)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 180)								int elementSize = _this->bytesPerElement;
HXDLIN( 180)								if ((view1->type == _this->type)) {
HXLINE( 180)									int srcLength = srcData->length;
HXDLIN( 180)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 180)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 180)									_this->buffer = this1;
HXDLIN( 180)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 180)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 180)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 180)								_this->byteOffset = 0;
HXDLIN( 180)								_this->length = srcLength;
HXDLIN( 180)								this1 = _this;
            							}
            							else {
HXLINE( 180)								if (::hx::IsNotNull( buffer )) {
HXLINE( 180)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,3);
HXDLIN( 180)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 180)									if ((in_byteOffset < 0)) {
HXLINE( 180)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 180)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 180)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 180)									int bufferByteLength = buffer->length;
HXDLIN( 180)									int elementSize = _this->bytesPerElement;
HXDLIN( 180)									int newByteLength = bufferByteLength;
HXDLIN( 180)									if (::hx::IsNull( len )) {
HXLINE( 180)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 180)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 180)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 180)										if ((newByteLength < 0)) {
HXLINE( 180)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 180)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 180)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 180)										if ((newRange > bufferByteLength)) {
HXLINE( 180)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 180)									_this->buffer = buffer;
HXDLIN( 180)									_this->byteOffset = in_byteOffset;
HXDLIN( 180)									_this->byteLength = newByteLength;
HXDLIN( 180)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 180)									this1 = _this;
            								}
            								else {
HXLINE( 180)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Int32Array",9b,2e,53,61)));
            								}
            							}
            						}
            					}
            				}
HXLINE( 171)				view = this1;
            			}
            			break;
            			case (int)4: {
HXLINE( 183)				 ::Dynamic elements = null();
HXDLIN( 183)				 ::haxe::io::Bytes buffer = this->buffer;
HXDLIN( 183)				::cpp::VirtualArray array = null();
HXDLIN( 183)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 183)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 183)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 183)				if (::hx::IsNull( byteoffset )) {
HXLINE( 183)					byteoffset = 0;
            				}
HXDLIN( 183)				 ::lime::utils::ArrayBufferView this1;
HXDLIN( 183)				if (::hx::IsNotNull( elements )) {
HXLINE( 183)					this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,4);
            				}
            				else {
HXLINE( 183)					if (::hx::IsNotNull( array )) {
HXLINE( 183)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 183)						_this->byteOffset = 0;
HXDLIN( 183)						_this->length = array->get_length();
HXDLIN( 183)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 183)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 183)						_this->buffer = this2;
HXDLIN( 183)						_this->copyFromArray(array,null());
HXDLIN( 183)						this1 = _this;
            					}
            					else {
HXLINE( 183)						if (::hx::IsNotNull( vector )) {
HXLINE( 183)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 183)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 183)							_this->byteOffset = 0;
HXDLIN( 183)							_this->length = array->get_length();
HXDLIN( 183)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 183)							 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 183)							_this->buffer = this2;
HXDLIN( 183)							_this->copyFromArray(array,null());
HXDLIN( 183)							this1 = _this;
            						}
            						else {
HXLINE( 183)							if (::hx::IsNotNull( view1 )) {
HXLINE( 183)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 183)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 183)								int srcLength = view1->length;
HXDLIN( 183)								int srcByteOffset = view1->byteOffset;
HXDLIN( 183)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 183)								int elementSize = _this->bytesPerElement;
HXDLIN( 183)								if ((view1->type == _this->type)) {
HXLINE( 183)									int srcLength = srcData->length;
HXDLIN( 183)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 183)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 183)									_this->buffer = this1;
HXDLIN( 183)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 183)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 183)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 183)								_this->byteOffset = 0;
HXDLIN( 183)								_this->length = srcLength;
HXDLIN( 183)								this1 = _this;
            							}
            							else {
HXLINE( 183)								if (::hx::IsNotNull( buffer )) {
HXLINE( 183)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 183)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 183)									if ((in_byteOffset < 0)) {
HXLINE( 183)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 183)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 183)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 183)									int bufferByteLength = buffer->length;
HXDLIN( 183)									int elementSize = _this->bytesPerElement;
HXDLIN( 183)									int newByteLength = bufferByteLength;
HXDLIN( 183)									if (::hx::IsNull( len )) {
HXLINE( 183)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 183)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 183)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 183)										if ((newByteLength < 0)) {
HXLINE( 183)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 183)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 183)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 183)										if ((newRange > bufferByteLength)) {
HXLINE( 183)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 183)									_this->buffer = buffer;
HXDLIN( 183)									_this->byteOffset = in_byteOffset;
HXDLIN( 183)									_this->byteLength = newByteLength;
HXDLIN( 183)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 183)									this1 = _this;
            								}
            								else {
HXLINE( 183)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt8Array",6b,44,d5,85)));
            								}
            							}
            						}
            					}
            				}
HXLINE( 171)				view = this1;
            			}
            			break;
            			case (int)5: {
HXLINE( 186)				 ::Dynamic elements = null();
HXDLIN( 186)				 ::haxe::io::Bytes buffer = this->buffer;
HXDLIN( 186)				::cpp::VirtualArray array = null();
HXDLIN( 186)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 186)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 186)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 186)				if (::hx::IsNull( byteoffset )) {
HXLINE( 186)					byteoffset = 0;
            				}
HXDLIN( 186)				 ::lime::utils::ArrayBufferView this1;
HXDLIN( 186)				if (::hx::IsNotNull( elements )) {
HXLINE( 186)					this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,5);
            				}
            				else {
HXLINE( 186)					if (::hx::IsNotNull( array )) {
HXLINE( 186)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,5);
HXDLIN( 186)						_this->byteOffset = 0;
HXDLIN( 186)						_this->length = array->get_length();
HXDLIN( 186)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 186)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 186)						_this->buffer = this2;
HXDLIN( 186)						_this->copyFromArray(array,null());
HXDLIN( 186)						this1 = _this;
            					}
            					else {
HXLINE( 186)						if (::hx::IsNotNull( vector )) {
HXLINE( 186)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,5);
HXDLIN( 186)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 186)							_this->byteOffset = 0;
HXDLIN( 186)							_this->length = array->get_length();
HXDLIN( 186)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 186)							 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 186)							_this->buffer = this2;
HXDLIN( 186)							_this->copyFromArray(array,null());
HXDLIN( 186)							this1 = _this;
            						}
            						else {
HXLINE( 186)							if (::hx::IsNotNull( view1 )) {
HXLINE( 186)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,5);
HXDLIN( 186)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 186)								int srcLength = view1->length;
HXDLIN( 186)								int srcByteOffset = view1->byteOffset;
HXDLIN( 186)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 186)								int elementSize = _this->bytesPerElement;
HXDLIN( 186)								if ((view1->type == _this->type)) {
HXLINE( 186)									int srcLength = srcData->length;
HXDLIN( 186)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 186)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 186)									_this->buffer = this1;
HXDLIN( 186)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 186)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 186)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 186)								_this->byteOffset = 0;
HXDLIN( 186)								_this->length = srcLength;
HXDLIN( 186)								this1 = _this;
            							}
            							else {
HXLINE( 186)								if (::hx::IsNotNull( buffer )) {
HXLINE( 186)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,5);
HXDLIN( 186)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 186)									if ((in_byteOffset < 0)) {
HXLINE( 186)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 186)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 186)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 186)									int bufferByteLength = buffer->length;
HXDLIN( 186)									int elementSize = _this->bytesPerElement;
HXDLIN( 186)									int newByteLength = bufferByteLength;
HXDLIN( 186)									if (::hx::IsNull( len )) {
HXLINE( 186)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 186)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 186)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 186)										if ((newByteLength < 0)) {
HXLINE( 186)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 186)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 186)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 186)										if ((newRange > bufferByteLength)) {
HXLINE( 186)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 186)									_this->buffer = buffer;
HXDLIN( 186)									_this->byteOffset = in_byteOffset;
HXDLIN( 186)									_this->byteLength = newByteLength;
HXDLIN( 186)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 186)									this1 = _this;
            								}
            								else {
HXLINE( 186)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt8ClampedArray",8d,06,77,13)));
            								}
            							}
            						}
            					}
            				}
HXLINE( 171)				view = this1;
            			}
            			break;
            			case (int)6: {
HXLINE( 189)				 ::Dynamic elements = null();
HXDLIN( 189)				 ::haxe::io::Bytes buffer = this->buffer;
HXDLIN( 189)				::cpp::VirtualArray array = null();
HXDLIN( 189)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 189)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 189)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 189)				if (::hx::IsNull( byteoffset )) {
HXLINE( 189)					byteoffset = 0;
            				}
HXDLIN( 189)				 ::lime::utils::ArrayBufferView this1;
HXDLIN( 189)				if (::hx::IsNotNull( elements )) {
HXLINE( 189)					this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,6);
            				}
            				else {
HXLINE( 189)					if (::hx::IsNotNull( array )) {
HXLINE( 189)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 189)						_this->byteOffset = 0;
HXDLIN( 189)						_this->length = array->get_length();
HXDLIN( 189)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 189)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 189)						_this->buffer = this2;
HXDLIN( 189)						_this->copyFromArray(array,null());
HXDLIN( 189)						this1 = _this;
            					}
            					else {
HXLINE( 189)						if (::hx::IsNotNull( vector )) {
HXLINE( 189)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 189)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 189)							_this->byteOffset = 0;
HXDLIN( 189)							_this->length = array->get_length();
HXDLIN( 189)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 189)							 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 189)							_this->buffer = this2;
HXDLIN( 189)							_this->copyFromArray(array,null());
HXDLIN( 189)							this1 = _this;
            						}
            						else {
HXLINE( 189)							if (::hx::IsNotNull( view1 )) {
HXLINE( 189)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 189)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 189)								int srcLength = view1->length;
HXDLIN( 189)								int srcByteOffset = view1->byteOffset;
HXDLIN( 189)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 189)								int elementSize = _this->bytesPerElement;
HXDLIN( 189)								if ((view1->type == _this->type)) {
HXLINE( 189)									int srcLength = srcData->length;
HXDLIN( 189)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 189)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 189)									_this->buffer = this1;
HXDLIN( 189)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 189)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 189)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 189)								_this->byteOffset = 0;
HXDLIN( 189)								_this->length = srcLength;
HXDLIN( 189)								this1 = _this;
            							}
            							else {
HXLINE( 189)								if (::hx::IsNotNull( buffer )) {
HXLINE( 189)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 189)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 189)									if ((in_byteOffset < 0)) {
HXLINE( 189)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 189)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 189)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 189)									int bufferByteLength = buffer->length;
HXDLIN( 189)									int elementSize = _this->bytesPerElement;
HXDLIN( 189)									int newByteLength = bufferByteLength;
HXDLIN( 189)									if (::hx::IsNull( len )) {
HXLINE( 189)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 189)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 189)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 189)										if ((newByteLength < 0)) {
HXLINE( 189)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 189)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 189)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 189)										if ((newRange > bufferByteLength)) {
HXLINE( 189)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 189)									_this->buffer = buffer;
HXDLIN( 189)									_this->byteOffset = in_byteOffset;
HXDLIN( 189)									_this->byteLength = newByteLength;
HXDLIN( 189)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 189)									this1 = _this;
            								}
            								else {
HXLINE( 189)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt16Array",0a,c7,2d,d5)));
            								}
            							}
            						}
            					}
            				}
HXLINE( 171)				view = this1;
            			}
            			break;
            			case (int)7: {
HXLINE( 192)				 ::Dynamic elements = null();
HXDLIN( 192)				 ::haxe::io::Bytes buffer = this->buffer;
HXDLIN( 192)				::cpp::VirtualArray array = null();
HXDLIN( 192)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 192)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 192)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 192)				if (::hx::IsNull( byteoffset )) {
HXLINE( 192)					byteoffset = 0;
            				}
HXDLIN( 192)				 ::lime::utils::ArrayBufferView this1;
HXDLIN( 192)				if (::hx::IsNotNull( elements )) {
HXLINE( 192)					this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,7);
            				}
            				else {
HXLINE( 192)					if (::hx::IsNotNull( array )) {
HXLINE( 192)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,7);
HXDLIN( 192)						_this->byteOffset = 0;
HXDLIN( 192)						_this->length = array->get_length();
HXDLIN( 192)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 192)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 192)						_this->buffer = this2;
HXDLIN( 192)						_this->copyFromArray(array,null());
HXDLIN( 192)						this1 = _this;
            					}
            					else {
HXLINE( 192)						if (::hx::IsNotNull( vector )) {
HXLINE( 192)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,7);
HXDLIN( 192)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 192)							_this->byteOffset = 0;
HXDLIN( 192)							_this->length = array->get_length();
HXDLIN( 192)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 192)							 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 192)							_this->buffer = this2;
HXDLIN( 192)							_this->copyFromArray(array,null());
HXDLIN( 192)							this1 = _this;
            						}
            						else {
HXLINE( 192)							if (::hx::IsNotNull( view1 )) {
HXLINE( 192)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,7);
HXDLIN( 192)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 192)								int srcLength = view1->length;
HXDLIN( 192)								int srcByteOffset = view1->byteOffset;
HXDLIN( 192)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 192)								int elementSize = _this->bytesPerElement;
HXDLIN( 192)								if ((view1->type == _this->type)) {
HXLINE( 192)									int srcLength = srcData->length;
HXDLIN( 192)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 192)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 192)									_this->buffer = this1;
HXDLIN( 192)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 192)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 192)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 192)								_this->byteOffset = 0;
HXDLIN( 192)								_this->length = srcLength;
HXDLIN( 192)								this1 = _this;
            							}
            							else {
HXLINE( 192)								if (::hx::IsNotNull( buffer )) {
HXLINE( 192)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,7);
HXDLIN( 192)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 192)									if ((in_byteOffset < 0)) {
HXLINE( 192)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 192)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 192)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 192)									int bufferByteLength = buffer->length;
HXDLIN( 192)									int elementSize = _this->bytesPerElement;
HXDLIN( 192)									int newByteLength = bufferByteLength;
HXDLIN( 192)									if (::hx::IsNull( len )) {
HXLINE( 192)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 192)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 192)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 192)										if ((newByteLength < 0)) {
HXLINE( 192)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 192)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 192)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 192)										if ((newRange > bufferByteLength)) {
HXLINE( 192)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 192)									_this->buffer = buffer;
HXDLIN( 192)									_this->byteOffset = in_byteOffset;
HXDLIN( 192)									_this->byteLength = newByteLength;
HXDLIN( 192)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 192)									this1 = _this;
            								}
            								else {
HXLINE( 192)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt32Array",10,43,eb,8e)));
            								}
            							}
            						}
            					}
            				}
HXLINE( 171)				view = this1;
            			}
            			break;
            			case (int)8: {
HXLINE( 195)				 ::Dynamic elements = null();
HXDLIN( 195)				 ::haxe::io::Bytes buffer = this->buffer;
HXDLIN( 195)				::cpp::VirtualArray array = null();
HXDLIN( 195)				 ::openfl::_Vector::FloatVector vector = null();
HXDLIN( 195)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 195)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 195)				if (::hx::IsNull( byteoffset )) {
HXLINE( 195)					byteoffset = 0;
            				}
HXDLIN( 195)				 ::lime::utils::ArrayBufferView this1;
HXDLIN( 195)				if (::hx::IsNotNull( elements )) {
HXLINE( 195)					this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,8);
            				}
            				else {
HXLINE( 195)					if (::hx::IsNotNull( array )) {
HXLINE( 195)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 195)						_this->byteOffset = 0;
HXDLIN( 195)						_this->length = array->get_length();
HXDLIN( 195)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 195)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 195)						_this->buffer = this2;
HXDLIN( 195)						_this->copyFromArray(array,null());
HXDLIN( 195)						this1 = _this;
            					}
            					else {
HXLINE( 195)						if (::hx::IsNotNull( vector )) {
HXLINE( 195)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 195)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 195)							_this->byteOffset = 0;
HXDLIN( 195)							_this->length = array->get_length();
HXDLIN( 195)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 195)							 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 195)							_this->buffer = this2;
HXDLIN( 195)							_this->copyFromArray(array,null());
HXDLIN( 195)							this1 = _this;
            						}
            						else {
HXLINE( 195)							if (::hx::IsNotNull( view1 )) {
HXLINE( 195)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 195)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 195)								int srcLength = view1->length;
HXDLIN( 195)								int srcByteOffset = view1->byteOffset;
HXDLIN( 195)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 195)								int elementSize = _this->bytesPerElement;
HXDLIN( 195)								if ((view1->type == _this->type)) {
HXLINE( 195)									int srcLength = srcData->length;
HXDLIN( 195)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 195)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 195)									_this->buffer = this1;
HXDLIN( 195)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 195)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 195)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 195)								_this->byteOffset = 0;
HXDLIN( 195)								_this->length = srcLength;
HXDLIN( 195)								this1 = _this;
            							}
            							else {
HXLINE( 195)								if (::hx::IsNotNull( buffer )) {
HXLINE( 195)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 195)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 195)									if ((in_byteOffset < 0)) {
HXLINE( 195)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 195)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 195)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 195)									int bufferByteLength = buffer->length;
HXDLIN( 195)									int elementSize = _this->bytesPerElement;
HXDLIN( 195)									int newByteLength = bufferByteLength;
HXDLIN( 195)									if (::hx::IsNull( len )) {
HXLINE( 195)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 195)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 195)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 195)										if ((newByteLength < 0)) {
HXLINE( 195)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 195)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 195)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 195)										if ((newRange > bufferByteLength)) {
HXLINE( 195)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 195)									_this->buffer = buffer;
HXDLIN( 195)									_this->byteOffset = in_byteOffset;
HXDLIN( 195)									_this->byteLength = newByteLength;
HXDLIN( 195)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 195)									this1 = _this;
            								}
            								else {
HXLINE( 195)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Float32Array",8e,c1,f4,d4)));
            								}
            							}
            						}
            					}
            				}
HXLINE( 171)				view = this1;
            			}
            			break;
            			case (int)9: {
HXLINE( 198)				 ::Dynamic elements = null();
HXDLIN( 198)				 ::haxe::io::Bytes buffer = this->buffer;
HXDLIN( 198)				::cpp::VirtualArray array = null();
HXDLIN( 198)				 ::openfl::_Vector::FloatVector vector = null();
HXDLIN( 198)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 198)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 198)				if (::hx::IsNull( byteoffset )) {
HXLINE( 198)					byteoffset = 0;
            				}
HXDLIN( 198)				 ::lime::utils::ArrayBufferView this1;
HXDLIN( 198)				if (::hx::IsNotNull( elements )) {
HXLINE( 198)					this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,9);
            				}
            				else {
HXLINE( 198)					if (::hx::IsNotNull( array )) {
HXLINE( 198)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,9);
HXDLIN( 198)						_this->byteOffset = 0;
HXDLIN( 198)						_this->length = array->get_length();
HXDLIN( 198)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 198)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 198)						_this->buffer = this2;
HXDLIN( 198)						_this->copyFromArray(array,null());
HXDLIN( 198)						this1 = _this;
            					}
            					else {
HXLINE( 198)						if (::hx::IsNotNull( vector )) {
HXLINE( 198)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,9);
HXDLIN( 198)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 198)							_this->byteOffset = 0;
HXDLIN( 198)							_this->length = array->get_length();
HXDLIN( 198)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 198)							 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 198)							_this->buffer = this2;
HXDLIN( 198)							_this->copyFromArray(array,null());
HXDLIN( 198)							this1 = _this;
            						}
            						else {
HXLINE( 198)							if (::hx::IsNotNull( view1 )) {
HXLINE( 198)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,9);
HXDLIN( 198)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 198)								int srcLength = view1->length;
HXDLIN( 198)								int srcByteOffset = view1->byteOffset;
HXDLIN( 198)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 198)								int elementSize = _this->bytesPerElement;
HXDLIN( 198)								if ((view1->type == _this->type)) {
HXLINE( 198)									int srcLength = srcData->length;
HXDLIN( 198)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 198)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 198)									_this->buffer = this1;
HXDLIN( 198)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 198)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 198)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 198)								_this->byteOffset = 0;
HXDLIN( 198)								_this->length = srcLength;
HXDLIN( 198)								this1 = _this;
            							}
            							else {
HXLINE( 198)								if (::hx::IsNotNull( buffer )) {
HXLINE( 198)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,9);
HXDLIN( 198)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 198)									if ((in_byteOffset < 0)) {
HXLINE( 198)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 198)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 198)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 198)									int bufferByteLength = buffer->length;
HXDLIN( 198)									int elementSize = _this->bytesPerElement;
HXDLIN( 198)									int newByteLength = bufferByteLength;
HXDLIN( 198)									if (::hx::IsNull( len )) {
HXLINE( 198)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 198)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 198)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 198)										if ((newByteLength < 0)) {
HXLINE( 198)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 198)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 198)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 198)										if ((newRange > bufferByteLength)) {
HXLINE( 198)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 198)									_this->buffer = buffer;
HXDLIN( 198)									_this->byteOffset = in_byteOffset;
HXDLIN( 198)									_this->byteLength = newByteLength;
HXDLIN( 198)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 198)									this1 = _this;
            								}
            								else {
HXLINE( 198)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Float64Array",8f,de,6b,1e)));
            								}
            							}
            						}
            					}
            				}
HXLINE( 171)				view = this1;
            			}
            			break;
            		}
HXLINE( 204)		return view;
            	}


HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferView_obj,subarray_lime_utils_Float64Array,return )

 ::lime::utils::ArrayBufferView ArrayBufferView_obj::subarray_lime_utils_Int16Array(int begin, ::Dynamic end){
            	HX_GC_STACKFRAME(&_hx_pos_244a612994c6bd06_166_subarray_lime_utils_Int16Array)
HXLINE( 167)		if (::hx::IsNull( end )) {
HXLINE( 167)			end = this->length;
            		}
HXLINE( 168)		int len = (( (int)(end) ) - begin);
HXLINE( 169)		int byte_offset = ((begin * this->bytesPerElement) + this->byteOffset);
HXLINE( 171)		 ::lime::utils::ArrayBufferView view;
HXDLIN( 171)		switch((int)(this->type)){
            			case (int)0: {
HXLINE( 201)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("subarray on a blank ArrayBufferView",39,87,fd,19)));
            			}
            			break;
            			case (int)1: {
HXLINE( 174)				 ::Dynamic elements = null();
HXDLIN( 174)				 ::haxe::io::Bytes buffer = this->buffer;
HXDLIN( 174)				::cpp::VirtualArray array = null();
HXDLIN( 174)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 174)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 174)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 174)				if (::hx::IsNull( byteoffset )) {
HXLINE( 174)					byteoffset = 0;
            				}
HXDLIN( 174)				 ::lime::utils::ArrayBufferView this1;
HXDLIN( 174)				if (::hx::IsNotNull( elements )) {
HXLINE( 174)					this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,1);
            				}
            				else {
HXLINE( 174)					if (::hx::IsNotNull( array )) {
HXLINE( 174)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,1);
HXDLIN( 174)						_this->byteOffset = 0;
HXDLIN( 174)						_this->length = array->get_length();
HXDLIN( 174)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 174)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 174)						_this->buffer = this2;
HXDLIN( 174)						_this->copyFromArray(array,null());
HXDLIN( 174)						this1 = _this;
            					}
            					else {
HXLINE( 174)						if (::hx::IsNotNull( vector )) {
HXLINE( 174)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,1);
HXDLIN( 174)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 174)							_this->byteOffset = 0;
HXDLIN( 174)							_this->length = array->get_length();
HXDLIN( 174)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 174)							 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 174)							_this->buffer = this2;
HXDLIN( 174)							_this->copyFromArray(array,null());
HXDLIN( 174)							this1 = _this;
            						}
            						else {
HXLINE( 174)							if (::hx::IsNotNull( view1 )) {
HXLINE( 174)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,1);
HXDLIN( 174)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 174)								int srcLength = view1->length;
HXDLIN( 174)								int srcByteOffset = view1->byteOffset;
HXDLIN( 174)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 174)								int elementSize = _this->bytesPerElement;
HXDLIN( 174)								if ((view1->type == _this->type)) {
HXLINE( 174)									int srcLength = srcData->length;
HXDLIN( 174)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 174)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 174)									_this->buffer = this1;
HXDLIN( 174)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 174)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 174)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 174)								_this->byteOffset = 0;
HXDLIN( 174)								_this->length = srcLength;
HXDLIN( 174)								this1 = _this;
            							}
            							else {
HXLINE( 174)								if (::hx::IsNotNull( buffer )) {
HXLINE( 174)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,1);
HXDLIN( 174)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 174)									if ((in_byteOffset < 0)) {
HXLINE( 174)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 174)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 174)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 174)									int bufferByteLength = buffer->length;
HXDLIN( 174)									int elementSize = _this->bytesPerElement;
HXDLIN( 174)									int newByteLength = bufferByteLength;
HXDLIN( 174)									if (::hx::IsNull( len )) {
HXLINE( 174)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 174)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 174)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 174)										if ((newByteLength < 0)) {
HXLINE( 174)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 174)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 174)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 174)										if ((newRange > bufferByteLength)) {
HXLINE( 174)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 174)									_this->buffer = buffer;
HXDLIN( 174)									_this->byteOffset = in_byteOffset;
HXDLIN( 174)									_this->byteLength = newByteLength;
HXDLIN( 174)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 174)									this1 = _this;
            								}
            								else {
HXLINE( 174)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Int8Array",40,53,da,77)));
            								}
            							}
            						}
            					}
            				}
HXLINE( 171)				view = this1;
            			}
            			break;
            			case (int)2: {
HXLINE( 177)				 ::Dynamic elements = null();
HXDLIN( 177)				 ::haxe::io::Bytes buffer = this->buffer;
HXDLIN( 177)				::cpp::VirtualArray array = null();
HXDLIN( 177)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 177)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 177)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 177)				if (::hx::IsNull( byteoffset )) {
HXLINE( 177)					byteoffset = 0;
            				}
HXDLIN( 177)				 ::lime::utils::ArrayBufferView this1;
HXDLIN( 177)				if (::hx::IsNotNull( elements )) {
HXLINE( 177)					this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,2);
            				}
            				else {
HXLINE( 177)					if (::hx::IsNotNull( array )) {
HXLINE( 177)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,2);
HXDLIN( 177)						_this->byteOffset = 0;
HXDLIN( 177)						_this->length = array->get_length();
HXDLIN( 177)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 177)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 177)						_this->buffer = this2;
HXDLIN( 177)						_this->copyFromArray(array,null());
HXDLIN( 177)						this1 = _this;
            					}
            					else {
HXLINE( 177)						if (::hx::IsNotNull( vector )) {
HXLINE( 177)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,2);
HXDLIN( 177)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 177)							_this->byteOffset = 0;
HXDLIN( 177)							_this->length = array->get_length();
HXDLIN( 177)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 177)							 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 177)							_this->buffer = this2;
HXDLIN( 177)							_this->copyFromArray(array,null());
HXDLIN( 177)							this1 = _this;
            						}
            						else {
HXLINE( 177)							if (::hx::IsNotNull( view1 )) {
HXLINE( 177)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,2);
HXDLIN( 177)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 177)								int srcLength = view1->length;
HXDLIN( 177)								int srcByteOffset = view1->byteOffset;
HXDLIN( 177)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 177)								int elementSize = _this->bytesPerElement;
HXDLIN( 177)								if ((view1->type == _this->type)) {
HXLINE( 177)									int srcLength = srcData->length;
HXDLIN( 177)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 177)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 177)									_this->buffer = this1;
HXDLIN( 177)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 177)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 177)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 177)								_this->byteOffset = 0;
HXDLIN( 177)								_this->length = srcLength;
HXDLIN( 177)								this1 = _this;
            							}
            							else {
HXLINE( 177)								if (::hx::IsNotNull( buffer )) {
HXLINE( 177)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,2);
HXDLIN( 177)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 177)									if ((in_byteOffset < 0)) {
HXLINE( 177)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 177)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 177)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 177)									int bufferByteLength = buffer->length;
HXDLIN( 177)									int elementSize = _this->bytesPerElement;
HXDLIN( 177)									int newByteLength = bufferByteLength;
HXDLIN( 177)									if (::hx::IsNull( len )) {
HXLINE( 177)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 177)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 177)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 177)										if ((newByteLength < 0)) {
HXLINE( 177)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 177)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 177)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 177)										if ((newRange > bufferByteLength)) {
HXLINE( 177)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 177)									_this->buffer = buffer;
HXDLIN( 177)									_this->byteOffset = in_byteOffset;
HXDLIN( 177)									_this->byteLength = newByteLength;
HXDLIN( 177)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 177)									this1 = _this;
            								}
            								else {
HXLINE( 177)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Int16Array",95,b2,95,a7)));
            								}
            							}
            						}
            					}
            				}
HXLINE( 171)				view = this1;
            			}
            			break;
            			case (int)3: {
HXLINE( 180)				 ::Dynamic elements = null();
HXDLIN( 180)				 ::haxe::io::Bytes buffer = this->buffer;
HXDLIN( 180)				::cpp::VirtualArray array = null();
HXDLIN( 180)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 180)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 180)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 180)				if (::hx::IsNull( byteoffset )) {
HXLINE( 180)					byteoffset = 0;
            				}
HXDLIN( 180)				 ::lime::utils::ArrayBufferView this1;
HXDLIN( 180)				if (::hx::IsNotNull( elements )) {
HXLINE( 180)					this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,3);
            				}
            				else {
HXLINE( 180)					if (::hx::IsNotNull( array )) {
HXLINE( 180)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,3);
HXDLIN( 180)						_this->byteOffset = 0;
HXDLIN( 180)						_this->length = array->get_length();
HXDLIN( 180)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 180)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 180)						_this->buffer = this2;
HXDLIN( 180)						_this->copyFromArray(array,null());
HXDLIN( 180)						this1 = _this;
            					}
            					else {
HXLINE( 180)						if (::hx::IsNotNull( vector )) {
HXLINE( 180)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,3);
HXDLIN( 180)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 180)							_this->byteOffset = 0;
HXDLIN( 180)							_this->length = array->get_length();
HXDLIN( 180)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 180)							 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 180)							_this->buffer = this2;
HXDLIN( 180)							_this->copyFromArray(array,null());
HXDLIN( 180)							this1 = _this;
            						}
            						else {
HXLINE( 180)							if (::hx::IsNotNull( view1 )) {
HXLINE( 180)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,3);
HXDLIN( 180)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 180)								int srcLength = view1->length;
HXDLIN( 180)								int srcByteOffset = view1->byteOffset;
HXDLIN( 180)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 180)								int elementSize = _this->bytesPerElement;
HXDLIN( 180)								if ((view1->type == _this->type)) {
HXLINE( 180)									int srcLength = srcData->length;
HXDLIN( 180)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 180)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 180)									_this->buffer = this1;
HXDLIN( 180)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 180)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 180)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 180)								_this->byteOffset = 0;
HXDLIN( 180)								_this->length = srcLength;
HXDLIN( 180)								this1 = _this;
            							}
            							else {
HXLINE( 180)								if (::hx::IsNotNull( buffer )) {
HXLINE( 180)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,3);
HXDLIN( 180)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 180)									if ((in_byteOffset < 0)) {
HXLINE( 180)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 180)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 180)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 180)									int bufferByteLength = buffer->length;
HXDLIN( 180)									int elementSize = _this->bytesPerElement;
HXDLIN( 180)									int newByteLength = bufferByteLength;
HXDLIN( 180)									if (::hx::IsNull( len )) {
HXLINE( 180)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 180)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 180)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 180)										if ((newByteLength < 0)) {
HXLINE( 180)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 180)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 180)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 180)										if ((newRange > bufferByteLength)) {
HXLINE( 180)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 180)									_this->buffer = buffer;
HXDLIN( 180)									_this->byteOffset = in_byteOffset;
HXDLIN( 180)									_this->byteLength = newByteLength;
HXDLIN( 180)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 180)									this1 = _this;
            								}
            								else {
HXLINE( 180)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Int32Array",9b,2e,53,61)));
            								}
            							}
            						}
            					}
            				}
HXLINE( 171)				view = this1;
            			}
            			break;
            			case (int)4: {
HXLINE( 183)				 ::Dynamic elements = null();
HXDLIN( 183)				 ::haxe::io::Bytes buffer = this->buffer;
HXDLIN( 183)				::cpp::VirtualArray array = null();
HXDLIN( 183)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 183)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 183)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 183)				if (::hx::IsNull( byteoffset )) {
HXLINE( 183)					byteoffset = 0;
            				}
HXDLIN( 183)				 ::lime::utils::ArrayBufferView this1;
HXDLIN( 183)				if (::hx::IsNotNull( elements )) {
HXLINE( 183)					this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,4);
            				}
            				else {
HXLINE( 183)					if (::hx::IsNotNull( array )) {
HXLINE( 183)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 183)						_this->byteOffset = 0;
HXDLIN( 183)						_this->length = array->get_length();
HXDLIN( 183)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 183)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 183)						_this->buffer = this2;
HXDLIN( 183)						_this->copyFromArray(array,null());
HXDLIN( 183)						this1 = _this;
            					}
            					else {
HXLINE( 183)						if (::hx::IsNotNull( vector )) {
HXLINE( 183)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 183)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 183)							_this->byteOffset = 0;
HXDLIN( 183)							_this->length = array->get_length();
HXDLIN( 183)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 183)							 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 183)							_this->buffer = this2;
HXDLIN( 183)							_this->copyFromArray(array,null());
HXDLIN( 183)							this1 = _this;
            						}
            						else {
HXLINE( 183)							if (::hx::IsNotNull( view1 )) {
HXLINE( 183)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 183)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 183)								int srcLength = view1->length;
HXDLIN( 183)								int srcByteOffset = view1->byteOffset;
HXDLIN( 183)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 183)								int elementSize = _this->bytesPerElement;
HXDLIN( 183)								if ((view1->type == _this->type)) {
HXLINE( 183)									int srcLength = srcData->length;
HXDLIN( 183)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 183)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 183)									_this->buffer = this1;
HXDLIN( 183)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 183)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 183)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 183)								_this->byteOffset = 0;
HXDLIN( 183)								_this->length = srcLength;
HXDLIN( 183)								this1 = _this;
            							}
            							else {
HXLINE( 183)								if (::hx::IsNotNull( buffer )) {
HXLINE( 183)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 183)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 183)									if ((in_byteOffset < 0)) {
HXLINE( 183)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 183)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 183)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 183)									int bufferByteLength = buffer->length;
HXDLIN( 183)									int elementSize = _this->bytesPerElement;
HXDLIN( 183)									int newByteLength = bufferByteLength;
HXDLIN( 183)									if (::hx::IsNull( len )) {
HXLINE( 183)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 183)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 183)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 183)										if ((newByteLength < 0)) {
HXLINE( 183)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 183)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 183)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 183)										if ((newRange > bufferByteLength)) {
HXLINE( 183)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 183)									_this->buffer = buffer;
HXDLIN( 183)									_this->byteOffset = in_byteOffset;
HXDLIN( 183)									_this->byteLength = newByteLength;
HXDLIN( 183)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 183)									this1 = _this;
            								}
            								else {
HXLINE( 183)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt8Array",6b,44,d5,85)));
            								}
            							}
            						}
            					}
            				}
HXLINE( 171)				view = this1;
            			}
            			break;
            			case (int)5: {
HXLINE( 186)				 ::Dynamic elements = null();
HXDLIN( 186)				 ::haxe::io::Bytes buffer = this->buffer;
HXDLIN( 186)				::cpp::VirtualArray array = null();
HXDLIN( 186)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 186)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 186)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 186)				if (::hx::IsNull( byteoffset )) {
HXLINE( 186)					byteoffset = 0;
            				}
HXDLIN( 186)				 ::lime::utils::ArrayBufferView this1;
HXDLIN( 186)				if (::hx::IsNotNull( elements )) {
HXLINE( 186)					this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,5);
            				}
            				else {
HXLINE( 186)					if (::hx::IsNotNull( array )) {
HXLINE( 186)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,5);
HXDLIN( 186)						_this->byteOffset = 0;
HXDLIN( 186)						_this->length = array->get_length();
HXDLIN( 186)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 186)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 186)						_this->buffer = this2;
HXDLIN( 186)						_this->copyFromArray(array,null());
HXDLIN( 186)						this1 = _this;
            					}
            					else {
HXLINE( 186)						if (::hx::IsNotNull( vector )) {
HXLINE( 186)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,5);
HXDLIN( 186)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 186)							_this->byteOffset = 0;
HXDLIN( 186)							_this->length = array->get_length();
HXDLIN( 186)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 186)							 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 186)							_this->buffer = this2;
HXDLIN( 186)							_this->copyFromArray(array,null());
HXDLIN( 186)							this1 = _this;
            						}
            						else {
HXLINE( 186)							if (::hx::IsNotNull( view1 )) {
HXLINE( 186)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,5);
HXDLIN( 186)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 186)								int srcLength = view1->length;
HXDLIN( 186)								int srcByteOffset = view1->byteOffset;
HXDLIN( 186)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 186)								int elementSize = _this->bytesPerElement;
HXDLIN( 186)								if ((view1->type == _this->type)) {
HXLINE( 186)									int srcLength = srcData->length;
HXDLIN( 186)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 186)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 186)									_this->buffer = this1;
HXDLIN( 186)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 186)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 186)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 186)								_this->byteOffset = 0;
HXDLIN( 186)								_this->length = srcLength;
HXDLIN( 186)								this1 = _this;
            							}
            							else {
HXLINE( 186)								if (::hx::IsNotNull( buffer )) {
HXLINE( 186)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,5);
HXDLIN( 186)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 186)									if ((in_byteOffset < 0)) {
HXLINE( 186)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 186)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 186)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 186)									int bufferByteLength = buffer->length;
HXDLIN( 186)									int elementSize = _this->bytesPerElement;
HXDLIN( 186)									int newByteLength = bufferByteLength;
HXDLIN( 186)									if (::hx::IsNull( len )) {
HXLINE( 186)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 186)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 186)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 186)										if ((newByteLength < 0)) {
HXLINE( 186)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 186)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 186)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 186)										if ((newRange > bufferByteLength)) {
HXLINE( 186)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 186)									_this->buffer = buffer;
HXDLIN( 186)									_this->byteOffset = in_byteOffset;
HXDLIN( 186)									_this->byteLength = newByteLength;
HXDLIN( 186)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 186)									this1 = _this;
            								}
            								else {
HXLINE( 186)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt8ClampedArray",8d,06,77,13)));
            								}
            							}
            						}
            					}
            				}
HXLINE( 171)				view = this1;
            			}
            			break;
            			case (int)6: {
HXLINE( 189)				 ::Dynamic elements = null();
HXDLIN( 189)				 ::haxe::io::Bytes buffer = this->buffer;
HXDLIN( 189)				::cpp::VirtualArray array = null();
HXDLIN( 189)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 189)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 189)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 189)				if (::hx::IsNull( byteoffset )) {
HXLINE( 189)					byteoffset = 0;
            				}
HXDLIN( 189)				 ::lime::utils::ArrayBufferView this1;
HXDLIN( 189)				if (::hx::IsNotNull( elements )) {
HXLINE( 189)					this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,6);
            				}
            				else {
HXLINE( 189)					if (::hx::IsNotNull( array )) {
HXLINE( 189)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 189)						_this->byteOffset = 0;
HXDLIN( 189)						_this->length = array->get_length();
HXDLIN( 189)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 189)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 189)						_this->buffer = this2;
HXDLIN( 189)						_this->copyFromArray(array,null());
HXDLIN( 189)						this1 = _this;
            					}
            					else {
HXLINE( 189)						if (::hx::IsNotNull( vector )) {
HXLINE( 189)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 189)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 189)							_this->byteOffset = 0;
HXDLIN( 189)							_this->length = array->get_length();
HXDLIN( 189)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 189)							 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 189)							_this->buffer = this2;
HXDLIN( 189)							_this->copyFromArray(array,null());
HXDLIN( 189)							this1 = _this;
            						}
            						else {
HXLINE( 189)							if (::hx::IsNotNull( view1 )) {
HXLINE( 189)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 189)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 189)								int srcLength = view1->length;
HXDLIN( 189)								int srcByteOffset = view1->byteOffset;
HXDLIN( 189)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 189)								int elementSize = _this->bytesPerElement;
HXDLIN( 189)								if ((view1->type == _this->type)) {
HXLINE( 189)									int srcLength = srcData->length;
HXDLIN( 189)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 189)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 189)									_this->buffer = this1;
HXDLIN( 189)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 189)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 189)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 189)								_this->byteOffset = 0;
HXDLIN( 189)								_this->length = srcLength;
HXDLIN( 189)								this1 = _this;
            							}
            							else {
HXLINE( 189)								if (::hx::IsNotNull( buffer )) {
HXLINE( 189)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 189)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 189)									if ((in_byteOffset < 0)) {
HXLINE( 189)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 189)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 189)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 189)									int bufferByteLength = buffer->length;
HXDLIN( 189)									int elementSize = _this->bytesPerElement;
HXDLIN( 189)									int newByteLength = bufferByteLength;
HXDLIN( 189)									if (::hx::IsNull( len )) {
HXLINE( 189)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 189)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 189)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 189)										if ((newByteLength < 0)) {
HXLINE( 189)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 189)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 189)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 189)										if ((newRange > bufferByteLength)) {
HXLINE( 189)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 189)									_this->buffer = buffer;
HXDLIN( 189)									_this->byteOffset = in_byteOffset;
HXDLIN( 189)									_this->byteLength = newByteLength;
HXDLIN( 189)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 189)									this1 = _this;
            								}
            								else {
HXLINE( 189)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt16Array",0a,c7,2d,d5)));
            								}
            							}
            						}
            					}
            				}
HXLINE( 171)				view = this1;
            			}
            			break;
            			case (int)7: {
HXLINE( 192)				 ::Dynamic elements = null();
HXDLIN( 192)				 ::haxe::io::Bytes buffer = this->buffer;
HXDLIN( 192)				::cpp::VirtualArray array = null();
HXDLIN( 192)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 192)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 192)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 192)				if (::hx::IsNull( byteoffset )) {
HXLINE( 192)					byteoffset = 0;
            				}
HXDLIN( 192)				 ::lime::utils::ArrayBufferView this1;
HXDLIN( 192)				if (::hx::IsNotNull( elements )) {
HXLINE( 192)					this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,7);
            				}
            				else {
HXLINE( 192)					if (::hx::IsNotNull( array )) {
HXLINE( 192)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,7);
HXDLIN( 192)						_this->byteOffset = 0;
HXDLIN( 192)						_this->length = array->get_length();
HXDLIN( 192)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 192)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 192)						_this->buffer = this2;
HXDLIN( 192)						_this->copyFromArray(array,null());
HXDLIN( 192)						this1 = _this;
            					}
            					else {
HXLINE( 192)						if (::hx::IsNotNull( vector )) {
HXLINE( 192)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,7);
HXDLIN( 192)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 192)							_this->byteOffset = 0;
HXDLIN( 192)							_this->length = array->get_length();
HXDLIN( 192)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 192)							 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 192)							_this->buffer = this2;
HXDLIN( 192)							_this->copyFromArray(array,null());
HXDLIN( 192)							this1 = _this;
            						}
            						else {
HXLINE( 192)							if (::hx::IsNotNull( view1 )) {
HXLINE( 192)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,7);
HXDLIN( 192)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 192)								int srcLength = view1->length;
HXDLIN( 192)								int srcByteOffset = view1->byteOffset;
HXDLIN( 192)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 192)								int elementSize = _this->bytesPerElement;
HXDLIN( 192)								if ((view1->type == _this->type)) {
HXLINE( 192)									int srcLength = srcData->length;
HXDLIN( 192)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 192)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 192)									_this->buffer = this1;
HXDLIN( 192)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 192)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 192)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 192)								_this->byteOffset = 0;
HXDLIN( 192)								_this->length = srcLength;
HXDLIN( 192)								this1 = _this;
            							}
            							else {
HXLINE( 192)								if (::hx::IsNotNull( buffer )) {
HXLINE( 192)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,7);
HXDLIN( 192)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 192)									if ((in_byteOffset < 0)) {
HXLINE( 192)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 192)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 192)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 192)									int bufferByteLength = buffer->length;
HXDLIN( 192)									int elementSize = _this->bytesPerElement;
HXDLIN( 192)									int newByteLength = bufferByteLength;
HXDLIN( 192)									if (::hx::IsNull( len )) {
HXLINE( 192)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 192)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 192)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 192)										if ((newByteLength < 0)) {
HXLINE( 192)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 192)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 192)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 192)										if ((newRange > bufferByteLength)) {
HXLINE( 192)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 192)									_this->buffer = buffer;
HXDLIN( 192)									_this->byteOffset = in_byteOffset;
HXDLIN( 192)									_this->byteLength = newByteLength;
HXDLIN( 192)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 192)									this1 = _this;
            								}
            								else {
HXLINE( 192)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt32Array",10,43,eb,8e)));
            								}
            							}
            						}
            					}
            				}
HXLINE( 171)				view = this1;
            			}
            			break;
            			case (int)8: {
HXLINE( 195)				 ::Dynamic elements = null();
HXDLIN( 195)				 ::haxe::io::Bytes buffer = this->buffer;
HXDLIN( 195)				::cpp::VirtualArray array = null();
HXDLIN( 195)				 ::openfl::_Vector::FloatVector vector = null();
HXDLIN( 195)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 195)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 195)				if (::hx::IsNull( byteoffset )) {
HXLINE( 195)					byteoffset = 0;
            				}
HXDLIN( 195)				 ::lime::utils::ArrayBufferView this1;
HXDLIN( 195)				if (::hx::IsNotNull( elements )) {
HXLINE( 195)					this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,8);
            				}
            				else {
HXLINE( 195)					if (::hx::IsNotNull( array )) {
HXLINE( 195)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 195)						_this->byteOffset = 0;
HXDLIN( 195)						_this->length = array->get_length();
HXDLIN( 195)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 195)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 195)						_this->buffer = this2;
HXDLIN( 195)						_this->copyFromArray(array,null());
HXDLIN( 195)						this1 = _this;
            					}
            					else {
HXLINE( 195)						if (::hx::IsNotNull( vector )) {
HXLINE( 195)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 195)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 195)							_this->byteOffset = 0;
HXDLIN( 195)							_this->length = array->get_length();
HXDLIN( 195)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 195)							 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 195)							_this->buffer = this2;
HXDLIN( 195)							_this->copyFromArray(array,null());
HXDLIN( 195)							this1 = _this;
            						}
            						else {
HXLINE( 195)							if (::hx::IsNotNull( view1 )) {
HXLINE( 195)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 195)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 195)								int srcLength = view1->length;
HXDLIN( 195)								int srcByteOffset = view1->byteOffset;
HXDLIN( 195)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 195)								int elementSize = _this->bytesPerElement;
HXDLIN( 195)								if ((view1->type == _this->type)) {
HXLINE( 195)									int srcLength = srcData->length;
HXDLIN( 195)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 195)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 195)									_this->buffer = this1;
HXDLIN( 195)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 195)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 195)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 195)								_this->byteOffset = 0;
HXDLIN( 195)								_this->length = srcLength;
HXDLIN( 195)								this1 = _this;
            							}
            							else {
HXLINE( 195)								if (::hx::IsNotNull( buffer )) {
HXLINE( 195)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 195)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 195)									if ((in_byteOffset < 0)) {
HXLINE( 195)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 195)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 195)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 195)									int bufferByteLength = buffer->length;
HXDLIN( 195)									int elementSize = _this->bytesPerElement;
HXDLIN( 195)									int newByteLength = bufferByteLength;
HXDLIN( 195)									if (::hx::IsNull( len )) {
HXLINE( 195)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 195)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 195)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 195)										if ((newByteLength < 0)) {
HXLINE( 195)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 195)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 195)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 195)										if ((newRange > bufferByteLength)) {
HXLINE( 195)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 195)									_this->buffer = buffer;
HXDLIN( 195)									_this->byteOffset = in_byteOffset;
HXDLIN( 195)									_this->byteLength = newByteLength;
HXDLIN( 195)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 195)									this1 = _this;
            								}
            								else {
HXLINE( 195)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Float32Array",8e,c1,f4,d4)));
            								}
            							}
            						}
            					}
            				}
HXLINE( 171)				view = this1;
            			}
            			break;
            			case (int)9: {
HXLINE( 198)				 ::Dynamic elements = null();
HXDLIN( 198)				 ::haxe::io::Bytes buffer = this->buffer;
HXDLIN( 198)				::cpp::VirtualArray array = null();
HXDLIN( 198)				 ::openfl::_Vector::FloatVector vector = null();
HXDLIN( 198)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 198)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 198)				if (::hx::IsNull( byteoffset )) {
HXLINE( 198)					byteoffset = 0;
            				}
HXDLIN( 198)				 ::lime::utils::ArrayBufferView this1;
HXDLIN( 198)				if (::hx::IsNotNull( elements )) {
HXLINE( 198)					this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,9);
            				}
            				else {
HXLINE( 198)					if (::hx::IsNotNull( array )) {
HXLINE( 198)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,9);
HXDLIN( 198)						_this->byteOffset = 0;
HXDLIN( 198)						_this->length = array->get_length();
HXDLIN( 198)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 198)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 198)						_this->buffer = this2;
HXDLIN( 198)						_this->copyFromArray(array,null());
HXDLIN( 198)						this1 = _this;
            					}
            					else {
HXLINE( 198)						if (::hx::IsNotNull( vector )) {
HXLINE( 198)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,9);
HXDLIN( 198)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 198)							_this->byteOffset = 0;
HXDLIN( 198)							_this->length = array->get_length();
HXDLIN( 198)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 198)							 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 198)							_this->buffer = this2;
HXDLIN( 198)							_this->copyFromArray(array,null());
HXDLIN( 198)							this1 = _this;
            						}
            						else {
HXLINE( 198)							if (::hx::IsNotNull( view1 )) {
HXLINE( 198)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,9);
HXDLIN( 198)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 198)								int srcLength = view1->length;
HXDLIN( 198)								int srcByteOffset = view1->byteOffset;
HXDLIN( 198)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 198)								int elementSize = _this->bytesPerElement;
HXDLIN( 198)								if ((view1->type == _this->type)) {
HXLINE( 198)									int srcLength = srcData->length;
HXDLIN( 198)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 198)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 198)									_this->buffer = this1;
HXDLIN( 198)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 198)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 198)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 198)								_this->byteOffset = 0;
HXDLIN( 198)								_this->length = srcLength;
HXDLIN( 198)								this1 = _this;
            							}
            							else {
HXLINE( 198)								if (::hx::IsNotNull( buffer )) {
HXLINE( 198)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,9);
HXDLIN( 198)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 198)									if ((in_byteOffset < 0)) {
HXLINE( 198)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 198)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 198)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 198)									int bufferByteLength = buffer->length;
HXDLIN( 198)									int elementSize = _this->bytesPerElement;
HXDLIN( 198)									int newByteLength = bufferByteLength;
HXDLIN( 198)									if (::hx::IsNull( len )) {
HXLINE( 198)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 198)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 198)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 198)										if ((newByteLength < 0)) {
HXLINE( 198)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 198)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 198)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 198)										if ((newRange > bufferByteLength)) {
HXLINE( 198)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 198)									_this->buffer = buffer;
HXDLIN( 198)									_this->byteOffset = in_byteOffset;
HXDLIN( 198)									_this->byteLength = newByteLength;
HXDLIN( 198)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 198)									this1 = _this;
            								}
            								else {
HXLINE( 198)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Float64Array",8f,de,6b,1e)));
            								}
            							}
            						}
            					}
            				}
HXLINE( 171)				view = this1;
            			}
            			break;
            		}
HXLINE( 204)		return view;
            	}


HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferView_obj,subarray_lime_utils_Int16Array,return )

 ::lime::utils::ArrayBufferView ArrayBufferView_obj::subarray_lime_utils_Int8Array(int begin, ::Dynamic end){
            	HX_GC_STACKFRAME(&_hx_pos_244a612994c6bd06_166_subarray_lime_utils_Int8Array)
HXLINE( 167)		if (::hx::IsNull( end )) {
HXLINE( 167)			end = this->length;
            		}
HXLINE( 168)		int len = (( (int)(end) ) - begin);
HXLINE( 169)		int byte_offset = ((begin * this->bytesPerElement) + this->byteOffset);
HXLINE( 171)		 ::lime::utils::ArrayBufferView view;
HXDLIN( 171)		switch((int)(this->type)){
            			case (int)0: {
HXLINE( 201)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("subarray on a blank ArrayBufferView",39,87,fd,19)));
            			}
            			break;
            			case (int)1: {
HXLINE( 174)				 ::Dynamic elements = null();
HXDLIN( 174)				 ::haxe::io::Bytes buffer = this->buffer;
HXDLIN( 174)				::cpp::VirtualArray array = null();
HXDLIN( 174)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 174)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 174)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 174)				if (::hx::IsNull( byteoffset )) {
HXLINE( 174)					byteoffset = 0;
            				}
HXDLIN( 174)				 ::lime::utils::ArrayBufferView this1;
HXDLIN( 174)				if (::hx::IsNotNull( elements )) {
HXLINE( 174)					this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,1);
            				}
            				else {
HXLINE( 174)					if (::hx::IsNotNull( array )) {
HXLINE( 174)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,1);
HXDLIN( 174)						_this->byteOffset = 0;
HXDLIN( 174)						_this->length = array->get_length();
HXDLIN( 174)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 174)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 174)						_this->buffer = this2;
HXDLIN( 174)						_this->copyFromArray(array,null());
HXDLIN( 174)						this1 = _this;
            					}
            					else {
HXLINE( 174)						if (::hx::IsNotNull( vector )) {
HXLINE( 174)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,1);
HXDLIN( 174)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 174)							_this->byteOffset = 0;
HXDLIN( 174)							_this->length = array->get_length();
HXDLIN( 174)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 174)							 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 174)							_this->buffer = this2;
HXDLIN( 174)							_this->copyFromArray(array,null());
HXDLIN( 174)							this1 = _this;
            						}
            						else {
HXLINE( 174)							if (::hx::IsNotNull( view1 )) {
HXLINE( 174)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,1);
HXDLIN( 174)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 174)								int srcLength = view1->length;
HXDLIN( 174)								int srcByteOffset = view1->byteOffset;
HXDLIN( 174)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 174)								int elementSize = _this->bytesPerElement;
HXDLIN( 174)								if ((view1->type == _this->type)) {
HXLINE( 174)									int srcLength = srcData->length;
HXDLIN( 174)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 174)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 174)									_this->buffer = this1;
HXDLIN( 174)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 174)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 174)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 174)								_this->byteOffset = 0;
HXDLIN( 174)								_this->length = srcLength;
HXDLIN( 174)								this1 = _this;
            							}
            							else {
HXLINE( 174)								if (::hx::IsNotNull( buffer )) {
HXLINE( 174)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,1);
HXDLIN( 174)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 174)									if ((in_byteOffset < 0)) {
HXLINE( 174)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 174)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 174)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 174)									int bufferByteLength = buffer->length;
HXDLIN( 174)									int elementSize = _this->bytesPerElement;
HXDLIN( 174)									int newByteLength = bufferByteLength;
HXDLIN( 174)									if (::hx::IsNull( len )) {
HXLINE( 174)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 174)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 174)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 174)										if ((newByteLength < 0)) {
HXLINE( 174)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 174)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 174)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 174)										if ((newRange > bufferByteLength)) {
HXLINE( 174)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 174)									_this->buffer = buffer;
HXDLIN( 174)									_this->byteOffset = in_byteOffset;
HXDLIN( 174)									_this->byteLength = newByteLength;
HXDLIN( 174)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 174)									this1 = _this;
            								}
            								else {
HXLINE( 174)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Int8Array",40,53,da,77)));
            								}
            							}
            						}
            					}
            				}
HXLINE( 171)				view = this1;
            			}
            			break;
            			case (int)2: {
HXLINE( 177)				 ::Dynamic elements = null();
HXDLIN( 177)				 ::haxe::io::Bytes buffer = this->buffer;
HXDLIN( 177)				::cpp::VirtualArray array = null();
HXDLIN( 177)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 177)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 177)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 177)				if (::hx::IsNull( byteoffset )) {
HXLINE( 177)					byteoffset = 0;
            				}
HXDLIN( 177)				 ::lime::utils::ArrayBufferView this1;
HXDLIN( 177)				if (::hx::IsNotNull( elements )) {
HXLINE( 177)					this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,2);
            				}
            				else {
HXLINE( 177)					if (::hx::IsNotNull( array )) {
HXLINE( 177)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,2);
HXDLIN( 177)						_this->byteOffset = 0;
HXDLIN( 177)						_this->length = array->get_length();
HXDLIN( 177)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 177)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 177)						_this->buffer = this2;
HXDLIN( 177)						_this->copyFromArray(array,null());
HXDLIN( 177)						this1 = _this;
            					}
            					else {
HXLINE( 177)						if (::hx::IsNotNull( vector )) {
HXLINE( 177)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,2);
HXDLIN( 177)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 177)							_this->byteOffset = 0;
HXDLIN( 177)							_this->length = array->get_length();
HXDLIN( 177)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 177)							 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 177)							_this->buffer = this2;
HXDLIN( 177)							_this->copyFromArray(array,null());
HXDLIN( 177)							this1 = _this;
            						}
            						else {
HXLINE( 177)							if (::hx::IsNotNull( view1 )) {
HXLINE( 177)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,2);
HXDLIN( 177)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 177)								int srcLength = view1->length;
HXDLIN( 177)								int srcByteOffset = view1->byteOffset;
HXDLIN( 177)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 177)								int elementSize = _this->bytesPerElement;
HXDLIN( 177)								if ((view1->type == _this->type)) {
HXLINE( 177)									int srcLength = srcData->length;
HXDLIN( 177)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 177)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 177)									_this->buffer = this1;
HXDLIN( 177)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 177)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 177)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 177)								_this->byteOffset = 0;
HXDLIN( 177)								_this->length = srcLength;
HXDLIN( 177)								this1 = _this;
            							}
            							else {
HXLINE( 177)								if (::hx::IsNotNull( buffer )) {
HXLINE( 177)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,2);
HXDLIN( 177)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 177)									if ((in_byteOffset < 0)) {
HXLINE( 177)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 177)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 177)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 177)									int bufferByteLength = buffer->length;
HXDLIN( 177)									int elementSize = _this->bytesPerElement;
HXDLIN( 177)									int newByteLength = bufferByteLength;
HXDLIN( 177)									if (::hx::IsNull( len )) {
HXLINE( 177)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 177)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 177)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 177)										if ((newByteLength < 0)) {
HXLINE( 177)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 177)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 177)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 177)										if ((newRange > bufferByteLength)) {
HXLINE( 177)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 177)									_this->buffer = buffer;
HXDLIN( 177)									_this->byteOffset = in_byteOffset;
HXDLIN( 177)									_this->byteLength = newByteLength;
HXDLIN( 177)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 177)									this1 = _this;
            								}
            								else {
HXLINE( 177)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Int16Array",95,b2,95,a7)));
            								}
            							}
            						}
            					}
            				}
HXLINE( 171)				view = this1;
            			}
            			break;
            			case (int)3: {
HXLINE( 180)				 ::Dynamic elements = null();
HXDLIN( 180)				 ::haxe::io::Bytes buffer = this->buffer;
HXDLIN( 180)				::cpp::VirtualArray array = null();
HXDLIN( 180)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 180)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 180)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 180)				if (::hx::IsNull( byteoffset )) {
HXLINE( 180)					byteoffset = 0;
            				}
HXDLIN( 180)				 ::lime::utils::ArrayBufferView this1;
HXDLIN( 180)				if (::hx::IsNotNull( elements )) {
HXLINE( 180)					this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,3);
            				}
            				else {
HXLINE( 180)					if (::hx::IsNotNull( array )) {
HXLINE( 180)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,3);
HXDLIN( 180)						_this->byteOffset = 0;
HXDLIN( 180)						_this->length = array->get_length();
HXDLIN( 180)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 180)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 180)						_this->buffer = this2;
HXDLIN( 180)						_this->copyFromArray(array,null());
HXDLIN( 180)						this1 = _this;
            					}
            					else {
HXLINE( 180)						if (::hx::IsNotNull( vector )) {
HXLINE( 180)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,3);
HXDLIN( 180)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 180)							_this->byteOffset = 0;
HXDLIN( 180)							_this->length = array->get_length();
HXDLIN( 180)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 180)							 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 180)							_this->buffer = this2;
HXDLIN( 180)							_this->copyFromArray(array,null());
HXDLIN( 180)							this1 = _this;
            						}
            						else {
HXLINE( 180)							if (::hx::IsNotNull( view1 )) {
HXLINE( 180)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,3);
HXDLIN( 180)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 180)								int srcLength = view1->length;
HXDLIN( 180)								int srcByteOffset = view1->byteOffset;
HXDLIN( 180)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 180)								int elementSize = _this->bytesPerElement;
HXDLIN( 180)								if ((view1->type == _this->type)) {
HXLINE( 180)									int srcLength = srcData->length;
HXDLIN( 180)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 180)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 180)									_this->buffer = this1;
HXDLIN( 180)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 180)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 180)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 180)								_this->byteOffset = 0;
HXDLIN( 180)								_this->length = srcLength;
HXDLIN( 180)								this1 = _this;
            							}
            							else {
HXLINE( 180)								if (::hx::IsNotNull( buffer )) {
HXLINE( 180)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,3);
HXDLIN( 180)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 180)									if ((in_byteOffset < 0)) {
HXLINE( 180)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 180)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 180)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 180)									int bufferByteLength = buffer->length;
HXDLIN( 180)									int elementSize = _this->bytesPerElement;
HXDLIN( 180)									int newByteLength = bufferByteLength;
HXDLIN( 180)									if (::hx::IsNull( len )) {
HXLINE( 180)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 180)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 180)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 180)										if ((newByteLength < 0)) {
HXLINE( 180)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 180)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 180)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 180)										if ((newRange > bufferByteLength)) {
HXLINE( 180)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 180)									_this->buffer = buffer;
HXDLIN( 180)									_this->byteOffset = in_byteOffset;
HXDLIN( 180)									_this->byteLength = newByteLength;
HXDLIN( 180)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 180)									this1 = _this;
            								}
            								else {
HXLINE( 180)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Int32Array",9b,2e,53,61)));
            								}
            							}
            						}
            					}
            				}
HXLINE( 171)				view = this1;
            			}
            			break;
            			case (int)4: {
HXLINE( 183)				 ::Dynamic elements = null();
HXDLIN( 183)				 ::haxe::io::Bytes buffer = this->buffer;
HXDLIN( 183)				::cpp::VirtualArray array = null();
HXDLIN( 183)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 183)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 183)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 183)				if (::hx::IsNull( byteoffset )) {
HXLINE( 183)					byteoffset = 0;
            				}
HXDLIN( 183)				 ::lime::utils::ArrayBufferView this1;
HXDLIN( 183)				if (::hx::IsNotNull( elements )) {
HXLINE( 183)					this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,4);
            				}
            				else {
HXLINE( 183)					if (::hx::IsNotNull( array )) {
HXLINE( 183)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 183)						_this->byteOffset = 0;
HXDLIN( 183)						_this->length = array->get_length();
HXDLIN( 183)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 183)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 183)						_this->buffer = this2;
HXDLIN( 183)						_this->copyFromArray(array,null());
HXDLIN( 183)						this1 = _this;
            					}
            					else {
HXLINE( 183)						if (::hx::IsNotNull( vector )) {
HXLINE( 183)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 183)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 183)							_this->byteOffset = 0;
HXDLIN( 183)							_this->length = array->get_length();
HXDLIN( 183)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 183)							 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 183)							_this->buffer = this2;
HXDLIN( 183)							_this->copyFromArray(array,null());
HXDLIN( 183)							this1 = _this;
            						}
            						else {
HXLINE( 183)							if (::hx::IsNotNull( view1 )) {
HXLINE( 183)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 183)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 183)								int srcLength = view1->length;
HXDLIN( 183)								int srcByteOffset = view1->byteOffset;
HXDLIN( 183)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 183)								int elementSize = _this->bytesPerElement;
HXDLIN( 183)								if ((view1->type == _this->type)) {
HXLINE( 183)									int srcLength = srcData->length;
HXDLIN( 183)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 183)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 183)									_this->buffer = this1;
HXDLIN( 183)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 183)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 183)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 183)								_this->byteOffset = 0;
HXDLIN( 183)								_this->length = srcLength;
HXDLIN( 183)								this1 = _this;
            							}
            							else {
HXLINE( 183)								if (::hx::IsNotNull( buffer )) {
HXLINE( 183)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 183)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 183)									if ((in_byteOffset < 0)) {
HXLINE( 183)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 183)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 183)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 183)									int bufferByteLength = buffer->length;
HXDLIN( 183)									int elementSize = _this->bytesPerElement;
HXDLIN( 183)									int newByteLength = bufferByteLength;
HXDLIN( 183)									if (::hx::IsNull( len )) {
HXLINE( 183)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 183)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 183)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 183)										if ((newByteLength < 0)) {
HXLINE( 183)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 183)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 183)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 183)										if ((newRange > bufferByteLength)) {
HXLINE( 183)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 183)									_this->buffer = buffer;
HXDLIN( 183)									_this->byteOffset = in_byteOffset;
HXDLIN( 183)									_this->byteLength = newByteLength;
HXDLIN( 183)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 183)									this1 = _this;
            								}
            								else {
HXLINE( 183)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt8Array",6b,44,d5,85)));
            								}
            							}
            						}
            					}
            				}
HXLINE( 171)				view = this1;
            			}
            			break;
            			case (int)5: {
HXLINE( 186)				 ::Dynamic elements = null();
HXDLIN( 186)				 ::haxe::io::Bytes buffer = this->buffer;
HXDLIN( 186)				::cpp::VirtualArray array = null();
HXDLIN( 186)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 186)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 186)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 186)				if (::hx::IsNull( byteoffset )) {
HXLINE( 186)					byteoffset = 0;
            				}
HXDLIN( 186)				 ::lime::utils::ArrayBufferView this1;
HXDLIN( 186)				if (::hx::IsNotNull( elements )) {
HXLINE( 186)					this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,5);
            				}
            				else {
HXLINE( 186)					if (::hx::IsNotNull( array )) {
HXLINE( 186)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,5);
HXDLIN( 186)						_this->byteOffset = 0;
HXDLIN( 186)						_this->length = array->get_length();
HXDLIN( 186)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 186)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 186)						_this->buffer = this2;
HXDLIN( 186)						_this->copyFromArray(array,null());
HXDLIN( 186)						this1 = _this;
            					}
            					else {
HXLINE( 186)						if (::hx::IsNotNull( vector )) {
HXLINE( 186)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,5);
HXDLIN( 186)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 186)							_this->byteOffset = 0;
HXDLIN( 186)							_this->length = array->get_length();
HXDLIN( 186)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 186)							 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 186)							_this->buffer = this2;
HXDLIN( 186)							_this->copyFromArray(array,null());
HXDLIN( 186)							this1 = _this;
            						}
            						else {
HXLINE( 186)							if (::hx::IsNotNull( view1 )) {
HXLINE( 186)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,5);
HXDLIN( 186)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 186)								int srcLength = view1->length;
HXDLIN( 186)								int srcByteOffset = view1->byteOffset;
HXDLIN( 186)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 186)								int elementSize = _this->bytesPerElement;
HXDLIN( 186)								if ((view1->type == _this->type)) {
HXLINE( 186)									int srcLength = srcData->length;
HXDLIN( 186)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 186)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 186)									_this->buffer = this1;
HXDLIN( 186)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 186)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 186)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 186)								_this->byteOffset = 0;
HXDLIN( 186)								_this->length = srcLength;
HXDLIN( 186)								this1 = _this;
            							}
            							else {
HXLINE( 186)								if (::hx::IsNotNull( buffer )) {
HXLINE( 186)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,5);
HXDLIN( 186)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 186)									if ((in_byteOffset < 0)) {
HXLINE( 186)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 186)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 186)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 186)									int bufferByteLength = buffer->length;
HXDLIN( 186)									int elementSize = _this->bytesPerElement;
HXDLIN( 186)									int newByteLength = bufferByteLength;
HXDLIN( 186)									if (::hx::IsNull( len )) {
HXLINE( 186)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 186)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 186)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 186)										if ((newByteLength < 0)) {
HXLINE( 186)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 186)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 186)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 186)										if ((newRange > bufferByteLength)) {
HXLINE( 186)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 186)									_this->buffer = buffer;
HXDLIN( 186)									_this->byteOffset = in_byteOffset;
HXDLIN( 186)									_this->byteLength = newByteLength;
HXDLIN( 186)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 186)									this1 = _this;
            								}
            								else {
HXLINE( 186)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt8ClampedArray",8d,06,77,13)));
            								}
            							}
            						}
            					}
            				}
HXLINE( 171)				view = this1;
            			}
            			break;
            			case (int)6: {
HXLINE( 189)				 ::Dynamic elements = null();
HXDLIN( 189)				 ::haxe::io::Bytes buffer = this->buffer;
HXDLIN( 189)				::cpp::VirtualArray array = null();
HXDLIN( 189)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 189)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 189)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 189)				if (::hx::IsNull( byteoffset )) {
HXLINE( 189)					byteoffset = 0;
            				}
HXDLIN( 189)				 ::lime::utils::ArrayBufferView this1;
HXDLIN( 189)				if (::hx::IsNotNull( elements )) {
HXLINE( 189)					this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,6);
            				}
            				else {
HXLINE( 189)					if (::hx::IsNotNull( array )) {
HXLINE( 189)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 189)						_this->byteOffset = 0;
HXDLIN( 189)						_this->length = array->get_length();
HXDLIN( 189)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 189)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 189)						_this->buffer = this2;
HXDLIN( 189)						_this->copyFromArray(array,null());
HXDLIN( 189)						this1 = _this;
            					}
            					else {
HXLINE( 189)						if (::hx::IsNotNull( vector )) {
HXLINE( 189)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 189)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 189)							_this->byteOffset = 0;
HXDLIN( 189)							_this->length = array->get_length();
HXDLIN( 189)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 189)							 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 189)							_this->buffer = this2;
HXDLIN( 189)							_this->copyFromArray(array,null());
HXDLIN( 189)							this1 = _this;
            						}
            						else {
HXLINE( 189)							if (::hx::IsNotNull( view1 )) {
HXLINE( 189)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 189)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 189)								int srcLength = view1->length;
HXDLIN( 189)								int srcByteOffset = view1->byteOffset;
HXDLIN( 189)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 189)								int elementSize = _this->bytesPerElement;
HXDLIN( 189)								if ((view1->type == _this->type)) {
HXLINE( 189)									int srcLength = srcData->length;
HXDLIN( 189)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 189)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 189)									_this->buffer = this1;
HXDLIN( 189)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 189)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 189)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 189)								_this->byteOffset = 0;
HXDLIN( 189)								_this->length = srcLength;
HXDLIN( 189)								this1 = _this;
            							}
            							else {
HXLINE( 189)								if (::hx::IsNotNull( buffer )) {
HXLINE( 189)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 189)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 189)									if ((in_byteOffset < 0)) {
HXLINE( 189)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 189)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 189)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 189)									int bufferByteLength = buffer->length;
HXDLIN( 189)									int elementSize = _this->bytesPerElement;
HXDLIN( 189)									int newByteLength = bufferByteLength;
HXDLIN( 189)									if (::hx::IsNull( len )) {
HXLINE( 189)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 189)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 189)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 189)										if ((newByteLength < 0)) {
HXLINE( 189)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 189)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 189)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 189)										if ((newRange > bufferByteLength)) {
HXLINE( 189)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 189)									_this->buffer = buffer;
HXDLIN( 189)									_this->byteOffset = in_byteOffset;
HXDLIN( 189)									_this->byteLength = newByteLength;
HXDLIN( 189)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 189)									this1 = _this;
            								}
            								else {
HXLINE( 189)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt16Array",0a,c7,2d,d5)));
            								}
            							}
            						}
            					}
            				}
HXLINE( 171)				view = this1;
            			}
            			break;
            			case (int)7: {
HXLINE( 192)				 ::Dynamic elements = null();
HXDLIN( 192)				 ::haxe::io::Bytes buffer = this->buffer;
HXDLIN( 192)				::cpp::VirtualArray array = null();
HXDLIN( 192)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 192)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 192)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 192)				if (::hx::IsNull( byteoffset )) {
HXLINE( 192)					byteoffset = 0;
            				}
HXDLIN( 192)				 ::lime::utils::ArrayBufferView this1;
HXDLIN( 192)				if (::hx::IsNotNull( elements )) {
HXLINE( 192)					this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,7);
            				}
            				else {
HXLINE( 192)					if (::hx::IsNotNull( array )) {
HXLINE( 192)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,7);
HXDLIN( 192)						_this->byteOffset = 0;
HXDLIN( 192)						_this->length = array->get_length();
HXDLIN( 192)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 192)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 192)						_this->buffer = this2;
HXDLIN( 192)						_this->copyFromArray(array,null());
HXDLIN( 192)						this1 = _this;
            					}
            					else {
HXLINE( 192)						if (::hx::IsNotNull( vector )) {
HXLINE( 192)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,7);
HXDLIN( 192)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 192)							_this->byteOffset = 0;
HXDLIN( 192)							_this->length = array->get_length();
HXDLIN( 192)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 192)							 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 192)							_this->buffer = this2;
HXDLIN( 192)							_this->copyFromArray(array,null());
HXDLIN( 192)							this1 = _this;
            						}
            						else {
HXLINE( 192)							if (::hx::IsNotNull( view1 )) {
HXLINE( 192)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,7);
HXDLIN( 192)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 192)								int srcLength = view1->length;
HXDLIN( 192)								int srcByteOffset = view1->byteOffset;
HXDLIN( 192)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 192)								int elementSize = _this->bytesPerElement;
HXDLIN( 192)								if ((view1->type == _this->type)) {
HXLINE( 192)									int srcLength = srcData->length;
HXDLIN( 192)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 192)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 192)									_this->buffer = this1;
HXDLIN( 192)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 192)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 192)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 192)								_this->byteOffset = 0;
HXDLIN( 192)								_this->length = srcLength;
HXDLIN( 192)								this1 = _this;
            							}
            							else {
HXLINE( 192)								if (::hx::IsNotNull( buffer )) {
HXLINE( 192)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,7);
HXDLIN( 192)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 192)									if ((in_byteOffset < 0)) {
HXLINE( 192)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 192)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 192)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 192)									int bufferByteLength = buffer->length;
HXDLIN( 192)									int elementSize = _this->bytesPerElement;
HXDLIN( 192)									int newByteLength = bufferByteLength;
HXDLIN( 192)									if (::hx::IsNull( len )) {
HXLINE( 192)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 192)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 192)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 192)										if ((newByteLength < 0)) {
HXLINE( 192)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 192)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 192)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 192)										if ((newRange > bufferByteLength)) {
HXLINE( 192)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 192)									_this->buffer = buffer;
HXDLIN( 192)									_this->byteOffset = in_byteOffset;
HXDLIN( 192)									_this->byteLength = newByteLength;
HXDLIN( 192)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 192)									this1 = _this;
            								}
            								else {
HXLINE( 192)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt32Array",10,43,eb,8e)));
            								}
            							}
            						}
            					}
            				}
HXLINE( 171)				view = this1;
            			}
            			break;
            			case (int)8: {
HXLINE( 195)				 ::Dynamic elements = null();
HXDLIN( 195)				 ::haxe::io::Bytes buffer = this->buffer;
HXDLIN( 195)				::cpp::VirtualArray array = null();
HXDLIN( 195)				 ::openfl::_Vector::FloatVector vector = null();
HXDLIN( 195)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 195)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 195)				if (::hx::IsNull( byteoffset )) {
HXLINE( 195)					byteoffset = 0;
            				}
HXDLIN( 195)				 ::lime::utils::ArrayBufferView this1;
HXDLIN( 195)				if (::hx::IsNotNull( elements )) {
HXLINE( 195)					this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,8);
            				}
            				else {
HXLINE( 195)					if (::hx::IsNotNull( array )) {
HXLINE( 195)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 195)						_this->byteOffset = 0;
HXDLIN( 195)						_this->length = array->get_length();
HXDLIN( 195)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 195)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 195)						_this->buffer = this2;
HXDLIN( 195)						_this->copyFromArray(array,null());
HXDLIN( 195)						this1 = _this;
            					}
            					else {
HXLINE( 195)						if (::hx::IsNotNull( vector )) {
HXLINE( 195)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 195)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 195)							_this->byteOffset = 0;
HXDLIN( 195)							_this->length = array->get_length();
HXDLIN( 195)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 195)							 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 195)							_this->buffer = this2;
HXDLIN( 195)							_this->copyFromArray(array,null());
HXDLIN( 195)							this1 = _this;
            						}
            						else {
HXLINE( 195)							if (::hx::IsNotNull( view1 )) {
HXLINE( 195)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 195)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 195)								int srcLength = view1->length;
HXDLIN( 195)								int srcByteOffset = view1->byteOffset;
HXDLIN( 195)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 195)								int elementSize = _this->bytesPerElement;
HXDLIN( 195)								if ((view1->type == _this->type)) {
HXLINE( 195)									int srcLength = srcData->length;
HXDLIN( 195)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 195)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 195)									_this->buffer = this1;
HXDLIN( 195)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 195)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 195)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 195)								_this->byteOffset = 0;
HXDLIN( 195)								_this->length = srcLength;
HXDLIN( 195)								this1 = _this;
            							}
            							else {
HXLINE( 195)								if (::hx::IsNotNull( buffer )) {
HXLINE( 195)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 195)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 195)									if ((in_byteOffset < 0)) {
HXLINE( 195)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 195)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 195)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 195)									int bufferByteLength = buffer->length;
HXDLIN( 195)									int elementSize = _this->bytesPerElement;
HXDLIN( 195)									int newByteLength = bufferByteLength;
HXDLIN( 195)									if (::hx::IsNull( len )) {
HXLINE( 195)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 195)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 195)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 195)										if ((newByteLength < 0)) {
HXLINE( 195)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 195)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 195)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 195)										if ((newRange > bufferByteLength)) {
HXLINE( 195)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 195)									_this->buffer = buffer;
HXDLIN( 195)									_this->byteOffset = in_byteOffset;
HXDLIN( 195)									_this->byteLength = newByteLength;
HXDLIN( 195)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 195)									this1 = _this;
            								}
            								else {
HXLINE( 195)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Float32Array",8e,c1,f4,d4)));
            								}
            							}
            						}
            					}
            				}
HXLINE( 171)				view = this1;
            			}
            			break;
            			case (int)9: {
HXLINE( 198)				 ::Dynamic elements = null();
HXDLIN( 198)				 ::haxe::io::Bytes buffer = this->buffer;
HXDLIN( 198)				::cpp::VirtualArray array = null();
HXDLIN( 198)				 ::openfl::_Vector::FloatVector vector = null();
HXDLIN( 198)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 198)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 198)				if (::hx::IsNull( byteoffset )) {
HXLINE( 198)					byteoffset = 0;
            				}
HXDLIN( 198)				 ::lime::utils::ArrayBufferView this1;
HXDLIN( 198)				if (::hx::IsNotNull( elements )) {
HXLINE( 198)					this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,9);
            				}
            				else {
HXLINE( 198)					if (::hx::IsNotNull( array )) {
HXLINE( 198)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,9);
HXDLIN( 198)						_this->byteOffset = 0;
HXDLIN( 198)						_this->length = array->get_length();
HXDLIN( 198)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 198)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 198)						_this->buffer = this2;
HXDLIN( 198)						_this->copyFromArray(array,null());
HXDLIN( 198)						this1 = _this;
            					}
            					else {
HXLINE( 198)						if (::hx::IsNotNull( vector )) {
HXLINE( 198)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,9);
HXDLIN( 198)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 198)							_this->byteOffset = 0;
HXDLIN( 198)							_this->length = array->get_length();
HXDLIN( 198)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 198)							 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 198)							_this->buffer = this2;
HXDLIN( 198)							_this->copyFromArray(array,null());
HXDLIN( 198)							this1 = _this;
            						}
            						else {
HXLINE( 198)							if (::hx::IsNotNull( view1 )) {
HXLINE( 198)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,9);
HXDLIN( 198)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 198)								int srcLength = view1->length;
HXDLIN( 198)								int srcByteOffset = view1->byteOffset;
HXDLIN( 198)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 198)								int elementSize = _this->bytesPerElement;
HXDLIN( 198)								if ((view1->type == _this->type)) {
HXLINE( 198)									int srcLength = srcData->length;
HXDLIN( 198)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 198)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 198)									_this->buffer = this1;
HXDLIN( 198)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 198)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 198)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 198)								_this->byteOffset = 0;
HXDLIN( 198)								_this->length = srcLength;
HXDLIN( 198)								this1 = _this;
            							}
            							else {
HXLINE( 198)								if (::hx::IsNotNull( buffer )) {
HXLINE( 198)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,9);
HXDLIN( 198)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 198)									if ((in_byteOffset < 0)) {
HXLINE( 198)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 198)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 198)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 198)									int bufferByteLength = buffer->length;
HXDLIN( 198)									int elementSize = _this->bytesPerElement;
HXDLIN( 198)									int newByteLength = bufferByteLength;
HXDLIN( 198)									if (::hx::IsNull( len )) {
HXLINE( 198)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 198)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 198)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 198)										if ((newByteLength < 0)) {
HXLINE( 198)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 198)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 198)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 198)										if ((newRange > bufferByteLength)) {
HXLINE( 198)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 198)									_this->buffer = buffer;
HXDLIN( 198)									_this->byteOffset = in_byteOffset;
HXDLIN( 198)									_this->byteLength = newByteLength;
HXDLIN( 198)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 198)									this1 = _this;
            								}
            								else {
HXLINE( 198)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Float64Array",8f,de,6b,1e)));
            								}
            							}
            						}
            					}
            				}
HXLINE( 171)				view = this1;
            			}
            			break;
            		}
HXLINE( 204)		return view;
            	}


HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferView_obj,subarray_lime_utils_Int8Array,return )

 ::lime::utils::ArrayBufferView ArrayBufferView_obj::subarray_lime_utils_UInt8ClampedArray(int begin, ::Dynamic end){
            	HX_GC_STACKFRAME(&_hx_pos_244a612994c6bd06_166_subarray_lime_utils_UInt8ClampedArray)
HXLINE( 167)		if (::hx::IsNull( end )) {
HXLINE( 167)			end = this->length;
            		}
HXLINE( 168)		int len = (( (int)(end) ) - begin);
HXLINE( 169)		int byte_offset = ((begin * this->bytesPerElement) + this->byteOffset);
HXLINE( 171)		 ::lime::utils::ArrayBufferView view;
HXDLIN( 171)		switch((int)(this->type)){
            			case (int)0: {
HXLINE( 201)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("subarray on a blank ArrayBufferView",39,87,fd,19)));
            			}
            			break;
            			case (int)1: {
HXLINE( 174)				 ::Dynamic elements = null();
HXDLIN( 174)				 ::haxe::io::Bytes buffer = this->buffer;
HXDLIN( 174)				::cpp::VirtualArray array = null();
HXDLIN( 174)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 174)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 174)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 174)				if (::hx::IsNull( byteoffset )) {
HXLINE( 174)					byteoffset = 0;
            				}
HXDLIN( 174)				 ::lime::utils::ArrayBufferView this1;
HXDLIN( 174)				if (::hx::IsNotNull( elements )) {
HXLINE( 174)					this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,1);
            				}
            				else {
HXLINE( 174)					if (::hx::IsNotNull( array )) {
HXLINE( 174)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,1);
HXDLIN( 174)						_this->byteOffset = 0;
HXDLIN( 174)						_this->length = array->get_length();
HXDLIN( 174)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 174)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 174)						_this->buffer = this2;
HXDLIN( 174)						_this->copyFromArray(array,null());
HXDLIN( 174)						this1 = _this;
            					}
            					else {
HXLINE( 174)						if (::hx::IsNotNull( vector )) {
HXLINE( 174)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,1);
HXDLIN( 174)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 174)							_this->byteOffset = 0;
HXDLIN( 174)							_this->length = array->get_length();
HXDLIN( 174)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 174)							 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 174)							_this->buffer = this2;
HXDLIN( 174)							_this->copyFromArray(array,null());
HXDLIN( 174)							this1 = _this;
            						}
            						else {
HXLINE( 174)							if (::hx::IsNotNull( view1 )) {
HXLINE( 174)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,1);
HXDLIN( 174)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 174)								int srcLength = view1->length;
HXDLIN( 174)								int srcByteOffset = view1->byteOffset;
HXDLIN( 174)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 174)								int elementSize = _this->bytesPerElement;
HXDLIN( 174)								if ((view1->type == _this->type)) {
HXLINE( 174)									int srcLength = srcData->length;
HXDLIN( 174)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 174)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 174)									_this->buffer = this1;
HXDLIN( 174)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 174)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 174)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 174)								_this->byteOffset = 0;
HXDLIN( 174)								_this->length = srcLength;
HXDLIN( 174)								this1 = _this;
            							}
            							else {
HXLINE( 174)								if (::hx::IsNotNull( buffer )) {
HXLINE( 174)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,1);
HXDLIN( 174)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 174)									if ((in_byteOffset < 0)) {
HXLINE( 174)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 174)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 174)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 174)									int bufferByteLength = buffer->length;
HXDLIN( 174)									int elementSize = _this->bytesPerElement;
HXDLIN( 174)									int newByteLength = bufferByteLength;
HXDLIN( 174)									if (::hx::IsNull( len )) {
HXLINE( 174)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 174)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 174)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 174)										if ((newByteLength < 0)) {
HXLINE( 174)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 174)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 174)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 174)										if ((newRange > bufferByteLength)) {
HXLINE( 174)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 174)									_this->buffer = buffer;
HXDLIN( 174)									_this->byteOffset = in_byteOffset;
HXDLIN( 174)									_this->byteLength = newByteLength;
HXDLIN( 174)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 174)									this1 = _this;
            								}
            								else {
HXLINE( 174)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Int8Array",40,53,da,77)));
            								}
            							}
            						}
            					}
            				}
HXLINE( 171)				view = this1;
            			}
            			break;
            			case (int)2: {
HXLINE( 177)				 ::Dynamic elements = null();
HXDLIN( 177)				 ::haxe::io::Bytes buffer = this->buffer;
HXDLIN( 177)				::cpp::VirtualArray array = null();
HXDLIN( 177)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 177)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 177)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 177)				if (::hx::IsNull( byteoffset )) {
HXLINE( 177)					byteoffset = 0;
            				}
HXDLIN( 177)				 ::lime::utils::ArrayBufferView this1;
HXDLIN( 177)				if (::hx::IsNotNull( elements )) {
HXLINE( 177)					this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,2);
            				}
            				else {
HXLINE( 177)					if (::hx::IsNotNull( array )) {
HXLINE( 177)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,2);
HXDLIN( 177)						_this->byteOffset = 0;
HXDLIN( 177)						_this->length = array->get_length();
HXDLIN( 177)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 177)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 177)						_this->buffer = this2;
HXDLIN( 177)						_this->copyFromArray(array,null());
HXDLIN( 177)						this1 = _this;
            					}
            					else {
HXLINE( 177)						if (::hx::IsNotNull( vector )) {
HXLINE( 177)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,2);
HXDLIN( 177)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 177)							_this->byteOffset = 0;
HXDLIN( 177)							_this->length = array->get_length();
HXDLIN( 177)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 177)							 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 177)							_this->buffer = this2;
HXDLIN( 177)							_this->copyFromArray(array,null());
HXDLIN( 177)							this1 = _this;
            						}
            						else {
HXLINE( 177)							if (::hx::IsNotNull( view1 )) {
HXLINE( 177)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,2);
HXDLIN( 177)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 177)								int srcLength = view1->length;
HXDLIN( 177)								int srcByteOffset = view1->byteOffset;
HXDLIN( 177)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 177)								int elementSize = _this->bytesPerElement;
HXDLIN( 177)								if ((view1->type == _this->type)) {
HXLINE( 177)									int srcLength = srcData->length;
HXDLIN( 177)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 177)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 177)									_this->buffer = this1;
HXDLIN( 177)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 177)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 177)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 177)								_this->byteOffset = 0;
HXDLIN( 177)								_this->length = srcLength;
HXDLIN( 177)								this1 = _this;
            							}
            							else {
HXLINE( 177)								if (::hx::IsNotNull( buffer )) {
HXLINE( 177)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,2);
HXDLIN( 177)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 177)									if ((in_byteOffset < 0)) {
HXLINE( 177)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 177)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 177)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 177)									int bufferByteLength = buffer->length;
HXDLIN( 177)									int elementSize = _this->bytesPerElement;
HXDLIN( 177)									int newByteLength = bufferByteLength;
HXDLIN( 177)									if (::hx::IsNull( len )) {
HXLINE( 177)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 177)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 177)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 177)										if ((newByteLength < 0)) {
HXLINE( 177)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 177)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 177)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 177)										if ((newRange > bufferByteLength)) {
HXLINE( 177)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 177)									_this->buffer = buffer;
HXDLIN( 177)									_this->byteOffset = in_byteOffset;
HXDLIN( 177)									_this->byteLength = newByteLength;
HXDLIN( 177)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 177)									this1 = _this;
            								}
            								else {
HXLINE( 177)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Int16Array",95,b2,95,a7)));
            								}
            							}
            						}
            					}
            				}
HXLINE( 171)				view = this1;
            			}
            			break;
            			case (int)3: {
HXLINE( 180)				 ::Dynamic elements = null();
HXDLIN( 180)				 ::haxe::io::Bytes buffer = this->buffer;
HXDLIN( 180)				::cpp::VirtualArray array = null();
HXDLIN( 180)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 180)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 180)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 180)				if (::hx::IsNull( byteoffset )) {
HXLINE( 180)					byteoffset = 0;
            				}
HXDLIN( 180)				 ::lime::utils::ArrayBufferView this1;
HXDLIN( 180)				if (::hx::IsNotNull( elements )) {
HXLINE( 180)					this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,3);
            				}
            				else {
HXLINE( 180)					if (::hx::IsNotNull( array )) {
HXLINE( 180)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,3);
HXDLIN( 180)						_this->byteOffset = 0;
HXDLIN( 180)						_this->length = array->get_length();
HXDLIN( 180)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 180)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 180)						_this->buffer = this2;
HXDLIN( 180)						_this->copyFromArray(array,null());
HXDLIN( 180)						this1 = _this;
            					}
            					else {
HXLINE( 180)						if (::hx::IsNotNull( vector )) {
HXLINE( 180)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,3);
HXDLIN( 180)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 180)							_this->byteOffset = 0;
HXDLIN( 180)							_this->length = array->get_length();
HXDLIN( 180)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 180)							 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 180)							_this->buffer = this2;
HXDLIN( 180)							_this->copyFromArray(array,null());
HXDLIN( 180)							this1 = _this;
            						}
            						else {
HXLINE( 180)							if (::hx::IsNotNull( view1 )) {
HXLINE( 180)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,3);
HXDLIN( 180)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 180)								int srcLength = view1->length;
HXDLIN( 180)								int srcByteOffset = view1->byteOffset;
HXDLIN( 180)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 180)								int elementSize = _this->bytesPerElement;
HXDLIN( 180)								if ((view1->type == _this->type)) {
HXLINE( 180)									int srcLength = srcData->length;
HXDLIN( 180)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 180)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 180)									_this->buffer = this1;
HXDLIN( 180)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 180)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 180)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 180)								_this->byteOffset = 0;
HXDLIN( 180)								_this->length = srcLength;
HXDLIN( 180)								this1 = _this;
            							}
            							else {
HXLINE( 180)								if (::hx::IsNotNull( buffer )) {
HXLINE( 180)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,3);
HXDLIN( 180)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 180)									if ((in_byteOffset < 0)) {
HXLINE( 180)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 180)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 180)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 180)									int bufferByteLength = buffer->length;
HXDLIN( 180)									int elementSize = _this->bytesPerElement;
HXDLIN( 180)									int newByteLength = bufferByteLength;
HXDLIN( 180)									if (::hx::IsNull( len )) {
HXLINE( 180)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 180)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 180)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 180)										if ((newByteLength < 0)) {
HXLINE( 180)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 180)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 180)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 180)										if ((newRange > bufferByteLength)) {
HXLINE( 180)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 180)									_this->buffer = buffer;
HXDLIN( 180)									_this->byteOffset = in_byteOffset;
HXDLIN( 180)									_this->byteLength = newByteLength;
HXDLIN( 180)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 180)									this1 = _this;
            								}
            								else {
HXLINE( 180)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Int32Array",9b,2e,53,61)));
            								}
            							}
            						}
            					}
            				}
HXLINE( 171)				view = this1;
            			}
            			break;
            			case (int)4: {
HXLINE( 183)				 ::Dynamic elements = null();
HXDLIN( 183)				 ::haxe::io::Bytes buffer = this->buffer;
HXDLIN( 183)				::cpp::VirtualArray array = null();
HXDLIN( 183)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 183)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 183)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 183)				if (::hx::IsNull( byteoffset )) {
HXLINE( 183)					byteoffset = 0;
            				}
HXDLIN( 183)				 ::lime::utils::ArrayBufferView this1;
HXDLIN( 183)				if (::hx::IsNotNull( elements )) {
HXLINE( 183)					this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,4);
            				}
            				else {
HXLINE( 183)					if (::hx::IsNotNull( array )) {
HXLINE( 183)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 183)						_this->byteOffset = 0;
HXDLIN( 183)						_this->length = array->get_length();
HXDLIN( 183)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 183)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 183)						_this->buffer = this2;
HXDLIN( 183)						_this->copyFromArray(array,null());
HXDLIN( 183)						this1 = _this;
            					}
            					else {
HXLINE( 183)						if (::hx::IsNotNull( vector )) {
HXLINE( 183)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 183)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 183)							_this->byteOffset = 0;
HXDLIN( 183)							_this->length = array->get_length();
HXDLIN( 183)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 183)							 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 183)							_this->buffer = this2;
HXDLIN( 183)							_this->copyFromArray(array,null());
HXDLIN( 183)							this1 = _this;
            						}
            						else {
HXLINE( 183)							if (::hx::IsNotNull( view1 )) {
HXLINE( 183)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 183)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 183)								int srcLength = view1->length;
HXDLIN( 183)								int srcByteOffset = view1->byteOffset;
HXDLIN( 183)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 183)								int elementSize = _this->bytesPerElement;
HXDLIN( 183)								if ((view1->type == _this->type)) {
HXLINE( 183)									int srcLength = srcData->length;
HXDLIN( 183)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 183)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 183)									_this->buffer = this1;
HXDLIN( 183)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 183)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 183)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 183)								_this->byteOffset = 0;
HXDLIN( 183)								_this->length = srcLength;
HXDLIN( 183)								this1 = _this;
            							}
            							else {
HXLINE( 183)								if (::hx::IsNotNull( buffer )) {
HXLINE( 183)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 183)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 183)									if ((in_byteOffset < 0)) {
HXLINE( 183)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 183)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 183)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 183)									int bufferByteLength = buffer->length;
HXDLIN( 183)									int elementSize = _this->bytesPerElement;
HXDLIN( 183)									int newByteLength = bufferByteLength;
HXDLIN( 183)									if (::hx::IsNull( len )) {
HXLINE( 183)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 183)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 183)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 183)										if ((newByteLength < 0)) {
HXLINE( 183)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 183)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 183)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 183)										if ((newRange > bufferByteLength)) {
HXLINE( 183)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 183)									_this->buffer = buffer;
HXDLIN( 183)									_this->byteOffset = in_byteOffset;
HXDLIN( 183)									_this->byteLength = newByteLength;
HXDLIN( 183)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 183)									this1 = _this;
            								}
            								else {
HXLINE( 183)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt8Array",6b,44,d5,85)));
            								}
            							}
            						}
            					}
            				}
HXLINE( 171)				view = this1;
            			}
            			break;
            			case (int)5: {
HXLINE( 186)				 ::Dynamic elements = null();
HXDLIN( 186)				 ::haxe::io::Bytes buffer = this->buffer;
HXDLIN( 186)				::cpp::VirtualArray array = null();
HXDLIN( 186)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 186)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 186)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 186)				if (::hx::IsNull( byteoffset )) {
HXLINE( 186)					byteoffset = 0;
            				}
HXDLIN( 186)				 ::lime::utils::ArrayBufferView this1;
HXDLIN( 186)				if (::hx::IsNotNull( elements )) {
HXLINE( 186)					this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,5);
            				}
            				else {
HXLINE( 186)					if (::hx::IsNotNull( array )) {
HXLINE( 186)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,5);
HXDLIN( 186)						_this->byteOffset = 0;
HXDLIN( 186)						_this->length = array->get_length();
HXDLIN( 186)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 186)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 186)						_this->buffer = this2;
HXDLIN( 186)						_this->copyFromArray(array,null());
HXDLIN( 186)						this1 = _this;
            					}
            					else {
HXLINE( 186)						if (::hx::IsNotNull( vector )) {
HXLINE( 186)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,5);
HXDLIN( 186)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 186)							_this->byteOffset = 0;
HXDLIN( 186)							_this->length = array->get_length();
HXDLIN( 186)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 186)							 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 186)							_this->buffer = this2;
HXDLIN( 186)							_this->copyFromArray(array,null());
HXDLIN( 186)							this1 = _this;
            						}
            						else {
HXLINE( 186)							if (::hx::IsNotNull( view1 )) {
HXLINE( 186)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,5);
HXDLIN( 186)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 186)								int srcLength = view1->length;
HXDLIN( 186)								int srcByteOffset = view1->byteOffset;
HXDLIN( 186)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 186)								int elementSize = _this->bytesPerElement;
HXDLIN( 186)								if ((view1->type == _this->type)) {
HXLINE( 186)									int srcLength = srcData->length;
HXDLIN( 186)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 186)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 186)									_this->buffer = this1;
HXDLIN( 186)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 186)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 186)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 186)								_this->byteOffset = 0;
HXDLIN( 186)								_this->length = srcLength;
HXDLIN( 186)								this1 = _this;
            							}
            							else {
HXLINE( 186)								if (::hx::IsNotNull( buffer )) {
HXLINE( 186)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,5);
HXDLIN( 186)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 186)									if ((in_byteOffset < 0)) {
HXLINE( 186)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 186)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 186)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 186)									int bufferByteLength = buffer->length;
HXDLIN( 186)									int elementSize = _this->bytesPerElement;
HXDLIN( 186)									int newByteLength = bufferByteLength;
HXDLIN( 186)									if (::hx::IsNull( len )) {
HXLINE( 186)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 186)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 186)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 186)										if ((newByteLength < 0)) {
HXLINE( 186)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 186)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 186)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 186)										if ((newRange > bufferByteLength)) {
HXLINE( 186)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 186)									_this->buffer = buffer;
HXDLIN( 186)									_this->byteOffset = in_byteOffset;
HXDLIN( 186)									_this->byteLength = newByteLength;
HXDLIN( 186)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 186)									this1 = _this;
            								}
            								else {
HXLINE( 186)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt8ClampedArray",8d,06,77,13)));
            								}
            							}
            						}
            					}
            				}
HXLINE( 171)				view = this1;
            			}
            			break;
            			case (int)6: {
HXLINE( 189)				 ::Dynamic elements = null();
HXDLIN( 189)				 ::haxe::io::Bytes buffer = this->buffer;
HXDLIN( 189)				::cpp::VirtualArray array = null();
HXDLIN( 189)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 189)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 189)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 189)				if (::hx::IsNull( byteoffset )) {
HXLINE( 189)					byteoffset = 0;
            				}
HXDLIN( 189)				 ::lime::utils::ArrayBufferView this1;
HXDLIN( 189)				if (::hx::IsNotNull( elements )) {
HXLINE( 189)					this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,6);
            				}
            				else {
HXLINE( 189)					if (::hx::IsNotNull( array )) {
HXLINE( 189)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 189)						_this->byteOffset = 0;
HXDLIN( 189)						_this->length = array->get_length();
HXDLIN( 189)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 189)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 189)						_this->buffer = this2;
HXDLIN( 189)						_this->copyFromArray(array,null());
HXDLIN( 189)						this1 = _this;
            					}
            					else {
HXLINE( 189)						if (::hx::IsNotNull( vector )) {
HXLINE( 189)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 189)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 189)							_this->byteOffset = 0;
HXDLIN( 189)							_this->length = array->get_length();
HXDLIN( 189)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 189)							 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 189)							_this->buffer = this2;
HXDLIN( 189)							_this->copyFromArray(array,null());
HXDLIN( 189)							this1 = _this;
            						}
            						else {
HXLINE( 189)							if (::hx::IsNotNull( view1 )) {
HXLINE( 189)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 189)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 189)								int srcLength = view1->length;
HXDLIN( 189)								int srcByteOffset = view1->byteOffset;
HXDLIN( 189)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 189)								int elementSize = _this->bytesPerElement;
HXDLIN( 189)								if ((view1->type == _this->type)) {
HXLINE( 189)									int srcLength = srcData->length;
HXDLIN( 189)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 189)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 189)									_this->buffer = this1;
HXDLIN( 189)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 189)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 189)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 189)								_this->byteOffset = 0;
HXDLIN( 189)								_this->length = srcLength;
HXDLIN( 189)								this1 = _this;
            							}
            							else {
HXLINE( 189)								if (::hx::IsNotNull( buffer )) {
HXLINE( 189)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 189)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 189)									if ((in_byteOffset < 0)) {
HXLINE( 189)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 189)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 189)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 189)									int bufferByteLength = buffer->length;
HXDLIN( 189)									int elementSize = _this->bytesPerElement;
HXDLIN( 189)									int newByteLength = bufferByteLength;
HXDLIN( 189)									if (::hx::IsNull( len )) {
HXLINE( 189)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 189)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 189)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 189)										if ((newByteLength < 0)) {
HXLINE( 189)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 189)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 189)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 189)										if ((newRange > bufferByteLength)) {
HXLINE( 189)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 189)									_this->buffer = buffer;
HXDLIN( 189)									_this->byteOffset = in_byteOffset;
HXDLIN( 189)									_this->byteLength = newByteLength;
HXDLIN( 189)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 189)									this1 = _this;
            								}
            								else {
HXLINE( 189)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt16Array",0a,c7,2d,d5)));
            								}
            							}
            						}
            					}
            				}
HXLINE( 171)				view = this1;
            			}
            			break;
            			case (int)7: {
HXLINE( 192)				 ::Dynamic elements = null();
HXDLIN( 192)				 ::haxe::io::Bytes buffer = this->buffer;
HXDLIN( 192)				::cpp::VirtualArray array = null();
HXDLIN( 192)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 192)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 192)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 192)				if (::hx::IsNull( byteoffset )) {
HXLINE( 192)					byteoffset = 0;
            				}
HXDLIN( 192)				 ::lime::utils::ArrayBufferView this1;
HXDLIN( 192)				if (::hx::IsNotNull( elements )) {
HXLINE( 192)					this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,7);
            				}
            				else {
HXLINE( 192)					if (::hx::IsNotNull( array )) {
HXLINE( 192)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,7);
HXDLIN( 192)						_this->byteOffset = 0;
HXDLIN( 192)						_this->length = array->get_length();
HXDLIN( 192)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 192)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 192)						_this->buffer = this2;
HXDLIN( 192)						_this->copyFromArray(array,null());
HXDLIN( 192)						this1 = _this;
            					}
            					else {
HXLINE( 192)						if (::hx::IsNotNull( vector )) {
HXLINE( 192)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,7);
HXDLIN( 192)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 192)							_this->byteOffset = 0;
HXDLIN( 192)							_this->length = array->get_length();
HXDLIN( 192)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 192)							 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 192)							_this->buffer = this2;
HXDLIN( 192)							_this->copyFromArray(array,null());
HXDLIN( 192)							this1 = _this;
            						}
            						else {
HXLINE( 192)							if (::hx::IsNotNull( view1 )) {
HXLINE( 192)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,7);
HXDLIN( 192)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 192)								int srcLength = view1->length;
HXDLIN( 192)								int srcByteOffset = view1->byteOffset;
HXDLIN( 192)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 192)								int elementSize = _this->bytesPerElement;
HXDLIN( 192)								if ((view1->type == _this->type)) {
HXLINE( 192)									int srcLength = srcData->length;
HXDLIN( 192)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 192)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 192)									_this->buffer = this1;
HXDLIN( 192)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 192)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 192)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 192)								_this->byteOffset = 0;
HXDLIN( 192)								_this->length = srcLength;
HXDLIN( 192)								this1 = _this;
            							}
            							else {
HXLINE( 192)								if (::hx::IsNotNull( buffer )) {
HXLINE( 192)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,7);
HXDLIN( 192)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 192)									if ((in_byteOffset < 0)) {
HXLINE( 192)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 192)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 192)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 192)									int bufferByteLength = buffer->length;
HXDLIN( 192)									int elementSize = _this->bytesPerElement;
HXDLIN( 192)									int newByteLength = bufferByteLength;
HXDLIN( 192)									if (::hx::IsNull( len )) {
HXLINE( 192)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 192)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 192)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 192)										if ((newByteLength < 0)) {
HXLINE( 192)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 192)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 192)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 192)										if ((newRange > bufferByteLength)) {
HXLINE( 192)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 192)									_this->buffer = buffer;
HXDLIN( 192)									_this->byteOffset = in_byteOffset;
HXDLIN( 192)									_this->byteLength = newByteLength;
HXDLIN( 192)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 192)									this1 = _this;
            								}
            								else {
HXLINE( 192)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt32Array",10,43,eb,8e)));
            								}
            							}
            						}
            					}
            				}
HXLINE( 171)				view = this1;
            			}
            			break;
            			case (int)8: {
HXLINE( 195)				 ::Dynamic elements = null();
HXDLIN( 195)				 ::haxe::io::Bytes buffer = this->buffer;
HXDLIN( 195)				::cpp::VirtualArray array = null();
HXDLIN( 195)				 ::openfl::_Vector::FloatVector vector = null();
HXDLIN( 195)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 195)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 195)				if (::hx::IsNull( byteoffset )) {
HXLINE( 195)					byteoffset = 0;
            				}
HXDLIN( 195)				 ::lime::utils::ArrayBufferView this1;
HXDLIN( 195)				if (::hx::IsNotNull( elements )) {
HXLINE( 195)					this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,8);
            				}
            				else {
HXLINE( 195)					if (::hx::IsNotNull( array )) {
HXLINE( 195)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 195)						_this->byteOffset = 0;
HXDLIN( 195)						_this->length = array->get_length();
HXDLIN( 195)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 195)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 195)						_this->buffer = this2;
HXDLIN( 195)						_this->copyFromArray(array,null());
HXDLIN( 195)						this1 = _this;
            					}
            					else {
HXLINE( 195)						if (::hx::IsNotNull( vector )) {
HXLINE( 195)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 195)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 195)							_this->byteOffset = 0;
HXDLIN( 195)							_this->length = array->get_length();
HXDLIN( 195)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 195)							 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 195)							_this->buffer = this2;
HXDLIN( 195)							_this->copyFromArray(array,null());
HXDLIN( 195)							this1 = _this;
            						}
            						else {
HXLINE( 195)							if (::hx::IsNotNull( view1 )) {
HXLINE( 195)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 195)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 195)								int srcLength = view1->length;
HXDLIN( 195)								int srcByteOffset = view1->byteOffset;
HXDLIN( 195)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 195)								int elementSize = _this->bytesPerElement;
HXDLIN( 195)								if ((view1->type == _this->type)) {
HXLINE( 195)									int srcLength = srcData->length;
HXDLIN( 195)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 195)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 195)									_this->buffer = this1;
HXDLIN( 195)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 195)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 195)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 195)								_this->byteOffset = 0;
HXDLIN( 195)								_this->length = srcLength;
HXDLIN( 195)								this1 = _this;
            							}
            							else {
HXLINE( 195)								if (::hx::IsNotNull( buffer )) {
HXLINE( 195)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 195)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 195)									if ((in_byteOffset < 0)) {
HXLINE( 195)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 195)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 195)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 195)									int bufferByteLength = buffer->length;
HXDLIN( 195)									int elementSize = _this->bytesPerElement;
HXDLIN( 195)									int newByteLength = bufferByteLength;
HXDLIN( 195)									if (::hx::IsNull( len )) {
HXLINE( 195)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 195)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 195)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 195)										if ((newByteLength < 0)) {
HXLINE( 195)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 195)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 195)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 195)										if ((newRange > bufferByteLength)) {
HXLINE( 195)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 195)									_this->buffer = buffer;
HXDLIN( 195)									_this->byteOffset = in_byteOffset;
HXDLIN( 195)									_this->byteLength = newByteLength;
HXDLIN( 195)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 195)									this1 = _this;
            								}
            								else {
HXLINE( 195)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Float32Array",8e,c1,f4,d4)));
            								}
            							}
            						}
            					}
            				}
HXLINE( 171)				view = this1;
            			}
            			break;
            			case (int)9: {
HXLINE( 198)				 ::Dynamic elements = null();
HXDLIN( 198)				 ::haxe::io::Bytes buffer = this->buffer;
HXDLIN( 198)				::cpp::VirtualArray array = null();
HXDLIN( 198)				 ::openfl::_Vector::FloatVector vector = null();
HXDLIN( 198)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 198)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 198)				if (::hx::IsNull( byteoffset )) {
HXLINE( 198)					byteoffset = 0;
            				}
HXDLIN( 198)				 ::lime::utils::ArrayBufferView this1;
HXDLIN( 198)				if (::hx::IsNotNull( elements )) {
HXLINE( 198)					this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,9);
            				}
            				else {
HXLINE( 198)					if (::hx::IsNotNull( array )) {
HXLINE( 198)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,9);
HXDLIN( 198)						_this->byteOffset = 0;
HXDLIN( 198)						_this->length = array->get_length();
HXDLIN( 198)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 198)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 198)						_this->buffer = this2;
HXDLIN( 198)						_this->copyFromArray(array,null());
HXDLIN( 198)						this1 = _this;
            					}
            					else {
HXLINE( 198)						if (::hx::IsNotNull( vector )) {
HXLINE( 198)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,9);
HXDLIN( 198)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 198)							_this->byteOffset = 0;
HXDLIN( 198)							_this->length = array->get_length();
HXDLIN( 198)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 198)							 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 198)							_this->buffer = this2;
HXDLIN( 198)							_this->copyFromArray(array,null());
HXDLIN( 198)							this1 = _this;
            						}
            						else {
HXLINE( 198)							if (::hx::IsNotNull( view1 )) {
HXLINE( 198)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,9);
HXDLIN( 198)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 198)								int srcLength = view1->length;
HXDLIN( 198)								int srcByteOffset = view1->byteOffset;
HXDLIN( 198)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 198)								int elementSize = _this->bytesPerElement;
HXDLIN( 198)								if ((view1->type == _this->type)) {
HXLINE( 198)									int srcLength = srcData->length;
HXDLIN( 198)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 198)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 198)									_this->buffer = this1;
HXDLIN( 198)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 198)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 198)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 198)								_this->byteOffset = 0;
HXDLIN( 198)								_this->length = srcLength;
HXDLIN( 198)								this1 = _this;
            							}
            							else {
HXLINE( 198)								if (::hx::IsNotNull( buffer )) {
HXLINE( 198)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,9);
HXDLIN( 198)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 198)									if ((in_byteOffset < 0)) {
HXLINE( 198)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 198)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 198)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 198)									int bufferByteLength = buffer->length;
HXDLIN( 198)									int elementSize = _this->bytesPerElement;
HXDLIN( 198)									int newByteLength = bufferByteLength;
HXDLIN( 198)									if (::hx::IsNull( len )) {
HXLINE( 198)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 198)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 198)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 198)										if ((newByteLength < 0)) {
HXLINE( 198)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 198)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 198)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 198)										if ((newRange > bufferByteLength)) {
HXLINE( 198)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 198)									_this->buffer = buffer;
HXDLIN( 198)									_this->byteOffset = in_byteOffset;
HXDLIN( 198)									_this->byteLength = newByteLength;
HXDLIN( 198)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 198)									this1 = _this;
            								}
            								else {
HXLINE( 198)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Float64Array",8f,de,6b,1e)));
            								}
            							}
            						}
            					}
            				}
HXLINE( 171)				view = this1;
            			}
            			break;
            		}
HXLINE( 204)		return view;
            	}


HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferView_obj,subarray_lime_utils_UInt8ClampedArray,return )

 ::lime::utils::ArrayBufferView ArrayBufferView_obj::subarray_lime_utils_UInt16Array(int begin, ::Dynamic end){
            	HX_GC_STACKFRAME(&_hx_pos_244a612994c6bd06_166_subarray_lime_utils_UInt16Array)
HXLINE( 167)		if (::hx::IsNull( end )) {
HXLINE( 167)			end = this->length;
            		}
HXLINE( 168)		int len = (( (int)(end) ) - begin);
HXLINE( 169)		int byte_offset = ((begin * this->bytesPerElement) + this->byteOffset);
HXLINE( 171)		 ::lime::utils::ArrayBufferView view;
HXDLIN( 171)		switch((int)(this->type)){
            			case (int)0: {
HXLINE( 201)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("subarray on a blank ArrayBufferView",39,87,fd,19)));
            			}
            			break;
            			case (int)1: {
HXLINE( 174)				 ::Dynamic elements = null();
HXDLIN( 174)				 ::haxe::io::Bytes buffer = this->buffer;
HXDLIN( 174)				::cpp::VirtualArray array = null();
HXDLIN( 174)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 174)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 174)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 174)				if (::hx::IsNull( byteoffset )) {
HXLINE( 174)					byteoffset = 0;
            				}
HXDLIN( 174)				 ::lime::utils::ArrayBufferView this1;
HXDLIN( 174)				if (::hx::IsNotNull( elements )) {
HXLINE( 174)					this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,1);
            				}
            				else {
HXLINE( 174)					if (::hx::IsNotNull( array )) {
HXLINE( 174)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,1);
HXDLIN( 174)						_this->byteOffset = 0;
HXDLIN( 174)						_this->length = array->get_length();
HXDLIN( 174)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 174)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 174)						_this->buffer = this2;
HXDLIN( 174)						_this->copyFromArray(array,null());
HXDLIN( 174)						this1 = _this;
            					}
            					else {
HXLINE( 174)						if (::hx::IsNotNull( vector )) {
HXLINE( 174)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,1);
HXDLIN( 174)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 174)							_this->byteOffset = 0;
HXDLIN( 174)							_this->length = array->get_length();
HXDLIN( 174)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 174)							 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 174)							_this->buffer = this2;
HXDLIN( 174)							_this->copyFromArray(array,null());
HXDLIN( 174)							this1 = _this;
            						}
            						else {
HXLINE( 174)							if (::hx::IsNotNull( view1 )) {
HXLINE( 174)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,1);
HXDLIN( 174)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 174)								int srcLength = view1->length;
HXDLIN( 174)								int srcByteOffset = view1->byteOffset;
HXDLIN( 174)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 174)								int elementSize = _this->bytesPerElement;
HXDLIN( 174)								if ((view1->type == _this->type)) {
HXLINE( 174)									int srcLength = srcData->length;
HXDLIN( 174)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 174)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 174)									_this->buffer = this1;
HXDLIN( 174)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 174)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 174)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 174)								_this->byteOffset = 0;
HXDLIN( 174)								_this->length = srcLength;
HXDLIN( 174)								this1 = _this;
            							}
            							else {
HXLINE( 174)								if (::hx::IsNotNull( buffer )) {
HXLINE( 174)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,1);
HXDLIN( 174)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 174)									if ((in_byteOffset < 0)) {
HXLINE( 174)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 174)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 174)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 174)									int bufferByteLength = buffer->length;
HXDLIN( 174)									int elementSize = _this->bytesPerElement;
HXDLIN( 174)									int newByteLength = bufferByteLength;
HXDLIN( 174)									if (::hx::IsNull( len )) {
HXLINE( 174)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 174)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 174)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 174)										if ((newByteLength < 0)) {
HXLINE( 174)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 174)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 174)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 174)										if ((newRange > bufferByteLength)) {
HXLINE( 174)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 174)									_this->buffer = buffer;
HXDLIN( 174)									_this->byteOffset = in_byteOffset;
HXDLIN( 174)									_this->byteLength = newByteLength;
HXDLIN( 174)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 174)									this1 = _this;
            								}
            								else {
HXLINE( 174)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Int8Array",40,53,da,77)));
            								}
            							}
            						}
            					}
            				}
HXLINE( 171)				view = this1;
            			}
            			break;
            			case (int)2: {
HXLINE( 177)				 ::Dynamic elements = null();
HXDLIN( 177)				 ::haxe::io::Bytes buffer = this->buffer;
HXDLIN( 177)				::cpp::VirtualArray array = null();
HXDLIN( 177)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 177)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 177)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 177)				if (::hx::IsNull( byteoffset )) {
HXLINE( 177)					byteoffset = 0;
            				}
HXDLIN( 177)				 ::lime::utils::ArrayBufferView this1;
HXDLIN( 177)				if (::hx::IsNotNull( elements )) {
HXLINE( 177)					this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,2);
            				}
            				else {
HXLINE( 177)					if (::hx::IsNotNull( array )) {
HXLINE( 177)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,2);
HXDLIN( 177)						_this->byteOffset = 0;
HXDLIN( 177)						_this->length = array->get_length();
HXDLIN( 177)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 177)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 177)						_this->buffer = this2;
HXDLIN( 177)						_this->copyFromArray(array,null());
HXDLIN( 177)						this1 = _this;
            					}
            					else {
HXLINE( 177)						if (::hx::IsNotNull( vector )) {
HXLINE( 177)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,2);
HXDLIN( 177)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 177)							_this->byteOffset = 0;
HXDLIN( 177)							_this->length = array->get_length();
HXDLIN( 177)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 177)							 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 177)							_this->buffer = this2;
HXDLIN( 177)							_this->copyFromArray(array,null());
HXDLIN( 177)							this1 = _this;
            						}
            						else {
HXLINE( 177)							if (::hx::IsNotNull( view1 )) {
HXLINE( 177)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,2);
HXDLIN( 177)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 177)								int srcLength = view1->length;
HXDLIN( 177)								int srcByteOffset = view1->byteOffset;
HXDLIN( 177)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 177)								int elementSize = _this->bytesPerElement;
HXDLIN( 177)								if ((view1->type == _this->type)) {
HXLINE( 177)									int srcLength = srcData->length;
HXDLIN( 177)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 177)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 177)									_this->buffer = this1;
HXDLIN( 177)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 177)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 177)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 177)								_this->byteOffset = 0;
HXDLIN( 177)								_this->length = srcLength;
HXDLIN( 177)								this1 = _this;
            							}
            							else {
HXLINE( 177)								if (::hx::IsNotNull( buffer )) {
HXLINE( 177)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,2);
HXDLIN( 177)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 177)									if ((in_byteOffset < 0)) {
HXLINE( 177)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 177)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 177)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 177)									int bufferByteLength = buffer->length;
HXDLIN( 177)									int elementSize = _this->bytesPerElement;
HXDLIN( 177)									int newByteLength = bufferByteLength;
HXDLIN( 177)									if (::hx::IsNull( len )) {
HXLINE( 177)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 177)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 177)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 177)										if ((newByteLength < 0)) {
HXLINE( 177)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 177)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 177)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 177)										if ((newRange > bufferByteLength)) {
HXLINE( 177)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 177)									_this->buffer = buffer;
HXDLIN( 177)									_this->byteOffset = in_byteOffset;
HXDLIN( 177)									_this->byteLength = newByteLength;
HXDLIN( 177)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 177)									this1 = _this;
            								}
            								else {
HXLINE( 177)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Int16Array",95,b2,95,a7)));
            								}
            							}
            						}
            					}
            				}
HXLINE( 171)				view = this1;
            			}
            			break;
            			case (int)3: {
HXLINE( 180)				 ::Dynamic elements = null();
HXDLIN( 180)				 ::haxe::io::Bytes buffer = this->buffer;
HXDLIN( 180)				::cpp::VirtualArray array = null();
HXDLIN( 180)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 180)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 180)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 180)				if (::hx::IsNull( byteoffset )) {
HXLINE( 180)					byteoffset = 0;
            				}
HXDLIN( 180)				 ::lime::utils::ArrayBufferView this1;
HXDLIN( 180)				if (::hx::IsNotNull( elements )) {
HXLINE( 180)					this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,3);
            				}
            				else {
HXLINE( 180)					if (::hx::IsNotNull( array )) {
HXLINE( 180)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,3);
HXDLIN( 180)						_this->byteOffset = 0;
HXDLIN( 180)						_this->length = array->get_length();
HXDLIN( 180)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 180)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 180)						_this->buffer = this2;
HXDLIN( 180)						_this->copyFromArray(array,null());
HXDLIN( 180)						this1 = _this;
            					}
            					else {
HXLINE( 180)						if (::hx::IsNotNull( vector )) {
HXLINE( 180)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,3);
HXDLIN( 180)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 180)							_this->byteOffset = 0;
HXDLIN( 180)							_this->length = array->get_length();
HXDLIN( 180)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 180)							 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 180)							_this->buffer = this2;
HXDLIN( 180)							_this->copyFromArray(array,null());
HXDLIN( 180)							this1 = _this;
            						}
            						else {
HXLINE( 180)							if (::hx::IsNotNull( view1 )) {
HXLINE( 180)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,3);
HXDLIN( 180)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 180)								int srcLength = view1->length;
HXDLIN( 180)								int srcByteOffset = view1->byteOffset;
HXDLIN( 180)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 180)								int elementSize = _this->bytesPerElement;
HXDLIN( 180)								if ((view1->type == _this->type)) {
HXLINE( 180)									int srcLength = srcData->length;
HXDLIN( 180)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 180)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 180)									_this->buffer = this1;
HXDLIN( 180)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 180)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 180)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 180)								_this->byteOffset = 0;
HXDLIN( 180)								_this->length = srcLength;
HXDLIN( 180)								this1 = _this;
            							}
            							else {
HXLINE( 180)								if (::hx::IsNotNull( buffer )) {
HXLINE( 180)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,3);
HXDLIN( 180)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 180)									if ((in_byteOffset < 0)) {
HXLINE( 180)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 180)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 180)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 180)									int bufferByteLength = buffer->length;
HXDLIN( 180)									int elementSize = _this->bytesPerElement;
HXDLIN( 180)									int newByteLength = bufferByteLength;
HXDLIN( 180)									if (::hx::IsNull( len )) {
HXLINE( 180)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 180)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 180)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 180)										if ((newByteLength < 0)) {
HXLINE( 180)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 180)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 180)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 180)										if ((newRange > bufferByteLength)) {
HXLINE( 180)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 180)									_this->buffer = buffer;
HXDLIN( 180)									_this->byteOffset = in_byteOffset;
HXDLIN( 180)									_this->byteLength = newByteLength;
HXDLIN( 180)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 180)									this1 = _this;
            								}
            								else {
HXLINE( 180)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Int32Array",9b,2e,53,61)));
            								}
            							}
            						}
            					}
            				}
HXLINE( 171)				view = this1;
            			}
            			break;
            			case (int)4: {
HXLINE( 183)				 ::Dynamic elements = null();
HXDLIN( 183)				 ::haxe::io::Bytes buffer = this->buffer;
HXDLIN( 183)				::cpp::VirtualArray array = null();
HXDLIN( 183)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 183)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 183)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 183)				if (::hx::IsNull( byteoffset )) {
HXLINE( 183)					byteoffset = 0;
            				}
HXDLIN( 183)				 ::lime::utils::ArrayBufferView this1;
HXDLIN( 183)				if (::hx::IsNotNull( elements )) {
HXLINE( 183)					this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,4);
            				}
            				else {
HXLINE( 183)					if (::hx::IsNotNull( array )) {
HXLINE( 183)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 183)						_this->byteOffset = 0;
HXDLIN( 183)						_this->length = array->get_length();
HXDLIN( 183)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 183)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 183)						_this->buffer = this2;
HXDLIN( 183)						_this->copyFromArray(array,null());
HXDLIN( 183)						this1 = _this;
            					}
            					else {
HXLINE( 183)						if (::hx::IsNotNull( vector )) {
HXLINE( 183)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 183)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 183)							_this->byteOffset = 0;
HXDLIN( 183)							_this->length = array->get_length();
HXDLIN( 183)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 183)							 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 183)							_this->buffer = this2;
HXDLIN( 183)							_this->copyFromArray(array,null());
HXDLIN( 183)							this1 = _this;
            						}
            						else {
HXLINE( 183)							if (::hx::IsNotNull( view1 )) {
HXLINE( 183)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 183)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 183)								int srcLength = view1->length;
HXDLIN( 183)								int srcByteOffset = view1->byteOffset;
HXDLIN( 183)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 183)								int elementSize = _this->bytesPerElement;
HXDLIN( 183)								if ((view1->type == _this->type)) {
HXLINE( 183)									int srcLength = srcData->length;
HXDLIN( 183)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 183)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 183)									_this->buffer = this1;
HXDLIN( 183)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 183)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 183)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 183)								_this->byteOffset = 0;
HXDLIN( 183)								_this->length = srcLength;
HXDLIN( 183)								this1 = _this;
            							}
            							else {
HXLINE( 183)								if (::hx::IsNotNull( buffer )) {
HXLINE( 183)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 183)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 183)									if ((in_byteOffset < 0)) {
HXLINE( 183)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 183)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 183)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 183)									int bufferByteLength = buffer->length;
HXDLIN( 183)									int elementSize = _this->bytesPerElement;
HXDLIN( 183)									int newByteLength = bufferByteLength;
HXDLIN( 183)									if (::hx::IsNull( len )) {
HXLINE( 183)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 183)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 183)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 183)										if ((newByteLength < 0)) {
HXLINE( 183)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 183)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 183)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 183)										if ((newRange > bufferByteLength)) {
HXLINE( 183)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 183)									_this->buffer = buffer;
HXDLIN( 183)									_this->byteOffset = in_byteOffset;
HXDLIN( 183)									_this->byteLength = newByteLength;
HXDLIN( 183)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 183)									this1 = _this;
            								}
            								else {
HXLINE( 183)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt8Array",6b,44,d5,85)));
            								}
            							}
            						}
            					}
            				}
HXLINE( 171)				view = this1;
            			}
            			break;
            			case (int)5: {
HXLINE( 186)				 ::Dynamic elements = null();
HXDLIN( 186)				 ::haxe::io::Bytes buffer = this->buffer;
HXDLIN( 186)				::cpp::VirtualArray array = null();
HXDLIN( 186)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 186)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 186)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 186)				if (::hx::IsNull( byteoffset )) {
HXLINE( 186)					byteoffset = 0;
            				}
HXDLIN( 186)				 ::lime::utils::ArrayBufferView this1;
HXDLIN( 186)				if (::hx::IsNotNull( elements )) {
HXLINE( 186)					this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,5);
            				}
            				else {
HXLINE( 186)					if (::hx::IsNotNull( array )) {
HXLINE( 186)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,5);
HXDLIN( 186)						_this->byteOffset = 0;
HXDLIN( 186)						_this->length = array->get_length();
HXDLIN( 186)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 186)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 186)						_this->buffer = this2;
HXDLIN( 186)						_this->copyFromArray(array,null());
HXDLIN( 186)						this1 = _this;
            					}
            					else {
HXLINE( 186)						if (::hx::IsNotNull( vector )) {
HXLINE( 186)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,5);
HXDLIN( 186)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 186)							_this->byteOffset = 0;
HXDLIN( 186)							_this->length = array->get_length();
HXDLIN( 186)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 186)							 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 186)							_this->buffer = this2;
HXDLIN( 186)							_this->copyFromArray(array,null());
HXDLIN( 186)							this1 = _this;
            						}
            						else {
HXLINE( 186)							if (::hx::IsNotNull( view1 )) {
HXLINE( 186)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,5);
HXDLIN( 186)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 186)								int srcLength = view1->length;
HXDLIN( 186)								int srcByteOffset = view1->byteOffset;
HXDLIN( 186)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 186)								int elementSize = _this->bytesPerElement;
HXDLIN( 186)								if ((view1->type == _this->type)) {
HXLINE( 186)									int srcLength = srcData->length;
HXDLIN( 186)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 186)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 186)									_this->buffer = this1;
HXDLIN( 186)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 186)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 186)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 186)								_this->byteOffset = 0;
HXDLIN( 186)								_this->length = srcLength;
HXDLIN( 186)								this1 = _this;
            							}
            							else {
HXLINE( 186)								if (::hx::IsNotNull( buffer )) {
HXLINE( 186)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,5);
HXDLIN( 186)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 186)									if ((in_byteOffset < 0)) {
HXLINE( 186)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 186)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 186)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 186)									int bufferByteLength = buffer->length;
HXDLIN( 186)									int elementSize = _this->bytesPerElement;
HXDLIN( 186)									int newByteLength = bufferByteLength;
HXDLIN( 186)									if (::hx::IsNull( len )) {
HXLINE( 186)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 186)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 186)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 186)										if ((newByteLength < 0)) {
HXLINE( 186)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 186)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 186)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 186)										if ((newRange > bufferByteLength)) {
HXLINE( 186)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 186)									_this->buffer = buffer;
HXDLIN( 186)									_this->byteOffset = in_byteOffset;
HXDLIN( 186)									_this->byteLength = newByteLength;
HXDLIN( 186)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 186)									this1 = _this;
            								}
            								else {
HXLINE( 186)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt8ClampedArray",8d,06,77,13)));
            								}
            							}
            						}
            					}
            				}
HXLINE( 171)				view = this1;
            			}
            			break;
            			case (int)6: {
HXLINE( 189)				 ::Dynamic elements = null();
HXDLIN( 189)				 ::haxe::io::Bytes buffer = this->buffer;
HXDLIN( 189)				::cpp::VirtualArray array = null();
HXDLIN( 189)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 189)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 189)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 189)				if (::hx::IsNull( byteoffset )) {
HXLINE( 189)					byteoffset = 0;
            				}
HXDLIN( 189)				 ::lime::utils::ArrayBufferView this1;
HXDLIN( 189)				if (::hx::IsNotNull( elements )) {
HXLINE( 189)					this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,6);
            				}
            				else {
HXLINE( 189)					if (::hx::IsNotNull( array )) {
HXLINE( 189)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 189)						_this->byteOffset = 0;
HXDLIN( 189)						_this->length = array->get_length();
HXDLIN( 189)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 189)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 189)						_this->buffer = this2;
HXDLIN( 189)						_this->copyFromArray(array,null());
HXDLIN( 189)						this1 = _this;
            					}
            					else {
HXLINE( 189)						if (::hx::IsNotNull( vector )) {
HXLINE( 189)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 189)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 189)							_this->byteOffset = 0;
HXDLIN( 189)							_this->length = array->get_length();
HXDLIN( 189)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 189)							 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 189)							_this->buffer = this2;
HXDLIN( 189)							_this->copyFromArray(array,null());
HXDLIN( 189)							this1 = _this;
            						}
            						else {
HXLINE( 189)							if (::hx::IsNotNull( view1 )) {
HXLINE( 189)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 189)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 189)								int srcLength = view1->length;
HXDLIN( 189)								int srcByteOffset = view1->byteOffset;
HXDLIN( 189)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 189)								int elementSize = _this->bytesPerElement;
HXDLIN( 189)								if ((view1->type == _this->type)) {
HXLINE( 189)									int srcLength = srcData->length;
HXDLIN( 189)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 189)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 189)									_this->buffer = this1;
HXDLIN( 189)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 189)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 189)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 189)								_this->byteOffset = 0;
HXDLIN( 189)								_this->length = srcLength;
HXDLIN( 189)								this1 = _this;
            							}
            							else {
HXLINE( 189)								if (::hx::IsNotNull( buffer )) {
HXLINE( 189)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 189)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 189)									if ((in_byteOffset < 0)) {
HXLINE( 189)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 189)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 189)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 189)									int bufferByteLength = buffer->length;
HXDLIN( 189)									int elementSize = _this->bytesPerElement;
HXDLIN( 189)									int newByteLength = bufferByteLength;
HXDLIN( 189)									if (::hx::IsNull( len )) {
HXLINE( 189)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 189)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 189)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 189)										if ((newByteLength < 0)) {
HXLINE( 189)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 189)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 189)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 189)										if ((newRange > bufferByteLength)) {
HXLINE( 189)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 189)									_this->buffer = buffer;
HXDLIN( 189)									_this->byteOffset = in_byteOffset;
HXDLIN( 189)									_this->byteLength = newByteLength;
HXDLIN( 189)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 189)									this1 = _this;
            								}
            								else {
HXLINE( 189)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt16Array",0a,c7,2d,d5)));
            								}
            							}
            						}
            					}
            				}
HXLINE( 171)				view = this1;
            			}
            			break;
            			case (int)7: {
HXLINE( 192)				 ::Dynamic elements = null();
HXDLIN( 192)				 ::haxe::io::Bytes buffer = this->buffer;
HXDLIN( 192)				::cpp::VirtualArray array = null();
HXDLIN( 192)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 192)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 192)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 192)				if (::hx::IsNull( byteoffset )) {
HXLINE( 192)					byteoffset = 0;
            				}
HXDLIN( 192)				 ::lime::utils::ArrayBufferView this1;
HXDLIN( 192)				if (::hx::IsNotNull( elements )) {
HXLINE( 192)					this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,7);
            				}
            				else {
HXLINE( 192)					if (::hx::IsNotNull( array )) {
HXLINE( 192)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,7);
HXDLIN( 192)						_this->byteOffset = 0;
HXDLIN( 192)						_this->length = array->get_length();
HXDLIN( 192)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 192)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 192)						_this->buffer = this2;
HXDLIN( 192)						_this->copyFromArray(array,null());
HXDLIN( 192)						this1 = _this;
            					}
            					else {
HXLINE( 192)						if (::hx::IsNotNull( vector )) {
HXLINE( 192)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,7);
HXDLIN( 192)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 192)							_this->byteOffset = 0;
HXDLIN( 192)							_this->length = array->get_length();
HXDLIN( 192)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 192)							 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 192)							_this->buffer = this2;
HXDLIN( 192)							_this->copyFromArray(array,null());
HXDLIN( 192)							this1 = _this;
            						}
            						else {
HXLINE( 192)							if (::hx::IsNotNull( view1 )) {
HXLINE( 192)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,7);
HXDLIN( 192)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 192)								int srcLength = view1->length;
HXDLIN( 192)								int srcByteOffset = view1->byteOffset;
HXDLIN( 192)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 192)								int elementSize = _this->bytesPerElement;
HXDLIN( 192)								if ((view1->type == _this->type)) {
HXLINE( 192)									int srcLength = srcData->length;
HXDLIN( 192)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 192)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 192)									_this->buffer = this1;
HXDLIN( 192)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 192)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 192)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 192)								_this->byteOffset = 0;
HXDLIN( 192)								_this->length = srcLength;
HXDLIN( 192)								this1 = _this;
            							}
            							else {
HXLINE( 192)								if (::hx::IsNotNull( buffer )) {
HXLINE( 192)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,7);
HXDLIN( 192)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 192)									if ((in_byteOffset < 0)) {
HXLINE( 192)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 192)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 192)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 192)									int bufferByteLength = buffer->length;
HXDLIN( 192)									int elementSize = _this->bytesPerElement;
HXDLIN( 192)									int newByteLength = bufferByteLength;
HXDLIN( 192)									if (::hx::IsNull( len )) {
HXLINE( 192)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 192)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 192)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 192)										if ((newByteLength < 0)) {
HXLINE( 192)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 192)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 192)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 192)										if ((newRange > bufferByteLength)) {
HXLINE( 192)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 192)									_this->buffer = buffer;
HXDLIN( 192)									_this->byteOffset = in_byteOffset;
HXDLIN( 192)									_this->byteLength = newByteLength;
HXDLIN( 192)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 192)									this1 = _this;
            								}
            								else {
HXLINE( 192)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt32Array",10,43,eb,8e)));
            								}
            							}
            						}
            					}
            				}
HXLINE( 171)				view = this1;
            			}
            			break;
            			case (int)8: {
HXLINE( 195)				 ::Dynamic elements = null();
HXDLIN( 195)				 ::haxe::io::Bytes buffer = this->buffer;
HXDLIN( 195)				::cpp::VirtualArray array = null();
HXDLIN( 195)				 ::openfl::_Vector::FloatVector vector = null();
HXDLIN( 195)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 195)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 195)				if (::hx::IsNull( byteoffset )) {
HXLINE( 195)					byteoffset = 0;
            				}
HXDLIN( 195)				 ::lime::utils::ArrayBufferView this1;
HXDLIN( 195)				if (::hx::IsNotNull( elements )) {
HXLINE( 195)					this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,8);
            				}
            				else {
HXLINE( 195)					if (::hx::IsNotNull( array )) {
HXLINE( 195)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 195)						_this->byteOffset = 0;
HXDLIN( 195)						_this->length = array->get_length();
HXDLIN( 195)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 195)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 195)						_this->buffer = this2;
HXDLIN( 195)						_this->copyFromArray(array,null());
HXDLIN( 195)						this1 = _this;
            					}
            					else {
HXLINE( 195)						if (::hx::IsNotNull( vector )) {
HXLINE( 195)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 195)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 195)							_this->byteOffset = 0;
HXDLIN( 195)							_this->length = array->get_length();
HXDLIN( 195)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 195)							 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 195)							_this->buffer = this2;
HXDLIN( 195)							_this->copyFromArray(array,null());
HXDLIN( 195)							this1 = _this;
            						}
            						else {
HXLINE( 195)							if (::hx::IsNotNull( view1 )) {
HXLINE( 195)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 195)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 195)								int srcLength = view1->length;
HXDLIN( 195)								int srcByteOffset = view1->byteOffset;
HXDLIN( 195)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 195)								int elementSize = _this->bytesPerElement;
HXDLIN( 195)								if ((view1->type == _this->type)) {
HXLINE( 195)									int srcLength = srcData->length;
HXDLIN( 195)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 195)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 195)									_this->buffer = this1;
HXDLIN( 195)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 195)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 195)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 195)								_this->byteOffset = 0;
HXDLIN( 195)								_this->length = srcLength;
HXDLIN( 195)								this1 = _this;
            							}
            							else {
HXLINE( 195)								if (::hx::IsNotNull( buffer )) {
HXLINE( 195)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 195)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 195)									if ((in_byteOffset < 0)) {
HXLINE( 195)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 195)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 195)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 195)									int bufferByteLength = buffer->length;
HXDLIN( 195)									int elementSize = _this->bytesPerElement;
HXDLIN( 195)									int newByteLength = bufferByteLength;
HXDLIN( 195)									if (::hx::IsNull( len )) {
HXLINE( 195)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 195)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 195)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 195)										if ((newByteLength < 0)) {
HXLINE( 195)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 195)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 195)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 195)										if ((newRange > bufferByteLength)) {
HXLINE( 195)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 195)									_this->buffer = buffer;
HXDLIN( 195)									_this->byteOffset = in_byteOffset;
HXDLIN( 195)									_this->byteLength = newByteLength;
HXDLIN( 195)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 195)									this1 = _this;
            								}
            								else {
HXLINE( 195)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Float32Array",8e,c1,f4,d4)));
            								}
            							}
            						}
            					}
            				}
HXLINE( 171)				view = this1;
            			}
            			break;
            			case (int)9: {
HXLINE( 198)				 ::Dynamic elements = null();
HXDLIN( 198)				 ::haxe::io::Bytes buffer = this->buffer;
HXDLIN( 198)				::cpp::VirtualArray array = null();
HXDLIN( 198)				 ::openfl::_Vector::FloatVector vector = null();
HXDLIN( 198)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 198)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 198)				if (::hx::IsNull( byteoffset )) {
HXLINE( 198)					byteoffset = 0;
            				}
HXDLIN( 198)				 ::lime::utils::ArrayBufferView this1;
HXDLIN( 198)				if (::hx::IsNotNull( elements )) {
HXLINE( 198)					this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,9);
            				}
            				else {
HXLINE( 198)					if (::hx::IsNotNull( array )) {
HXLINE( 198)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,9);
HXDLIN( 198)						_this->byteOffset = 0;
HXDLIN( 198)						_this->length = array->get_length();
HXDLIN( 198)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 198)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 198)						_this->buffer = this2;
HXDLIN( 198)						_this->copyFromArray(array,null());
HXDLIN( 198)						this1 = _this;
            					}
            					else {
HXLINE( 198)						if (::hx::IsNotNull( vector )) {
HXLINE( 198)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,9);
HXDLIN( 198)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 198)							_this->byteOffset = 0;
HXDLIN( 198)							_this->length = array->get_length();
HXDLIN( 198)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 198)							 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 198)							_this->buffer = this2;
HXDLIN( 198)							_this->copyFromArray(array,null());
HXDLIN( 198)							this1 = _this;
            						}
            						else {
HXLINE( 198)							if (::hx::IsNotNull( view1 )) {
HXLINE( 198)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,9);
HXDLIN( 198)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 198)								int srcLength = view1->length;
HXDLIN( 198)								int srcByteOffset = view1->byteOffset;
HXDLIN( 198)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 198)								int elementSize = _this->bytesPerElement;
HXDLIN( 198)								if ((view1->type == _this->type)) {
HXLINE( 198)									int srcLength = srcData->length;
HXDLIN( 198)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 198)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 198)									_this->buffer = this1;
HXDLIN( 198)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 198)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 198)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 198)								_this->byteOffset = 0;
HXDLIN( 198)								_this->length = srcLength;
HXDLIN( 198)								this1 = _this;
            							}
            							else {
HXLINE( 198)								if (::hx::IsNotNull( buffer )) {
HXLINE( 198)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,9);
HXDLIN( 198)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 198)									if ((in_byteOffset < 0)) {
HXLINE( 198)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 198)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 198)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 198)									int bufferByteLength = buffer->length;
HXDLIN( 198)									int elementSize = _this->bytesPerElement;
HXDLIN( 198)									int newByteLength = bufferByteLength;
HXDLIN( 198)									if (::hx::IsNull( len )) {
HXLINE( 198)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 198)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 198)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 198)										if ((newByteLength < 0)) {
HXLINE( 198)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 198)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 198)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 198)										if ((newRange > bufferByteLength)) {
HXLINE( 198)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 198)									_this->buffer = buffer;
HXDLIN( 198)									_this->byteOffset = in_byteOffset;
HXDLIN( 198)									_this->byteLength = newByteLength;
HXDLIN( 198)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 198)									this1 = _this;
            								}
            								else {
HXLINE( 198)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Float64Array",8f,de,6b,1e)));
            								}
            							}
            						}
            					}
            				}
HXLINE( 171)				view = this1;
            			}
            			break;
            		}
HXLINE( 204)		return view;
            	}


HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferView_obj,subarray_lime_utils_UInt16Array,return )

 ::lime::utils::ArrayBufferView ArrayBufferView_obj::subarray_lime_utils_Int32Array(int begin, ::Dynamic end){
            	HX_GC_STACKFRAME(&_hx_pos_244a612994c6bd06_166_subarray_lime_utils_Int32Array)
HXLINE( 167)		if (::hx::IsNull( end )) {
HXLINE( 167)			end = this->length;
            		}
HXLINE( 168)		int len = (( (int)(end) ) - begin);
HXLINE( 169)		int byte_offset = ((begin * this->bytesPerElement) + this->byteOffset);
HXLINE( 171)		 ::lime::utils::ArrayBufferView view;
HXDLIN( 171)		switch((int)(this->type)){
            			case (int)0: {
HXLINE( 201)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("subarray on a blank ArrayBufferView",39,87,fd,19)));
            			}
            			break;
            			case (int)1: {
HXLINE( 174)				 ::Dynamic elements = null();
HXDLIN( 174)				 ::haxe::io::Bytes buffer = this->buffer;
HXDLIN( 174)				::cpp::VirtualArray array = null();
HXDLIN( 174)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 174)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 174)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 174)				if (::hx::IsNull( byteoffset )) {
HXLINE( 174)					byteoffset = 0;
            				}
HXDLIN( 174)				 ::lime::utils::ArrayBufferView this1;
HXDLIN( 174)				if (::hx::IsNotNull( elements )) {
HXLINE( 174)					this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,1);
            				}
            				else {
HXLINE( 174)					if (::hx::IsNotNull( array )) {
HXLINE( 174)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,1);
HXDLIN( 174)						_this->byteOffset = 0;
HXDLIN( 174)						_this->length = array->get_length();
HXDLIN( 174)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 174)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 174)						_this->buffer = this2;
HXDLIN( 174)						_this->copyFromArray(array,null());
HXDLIN( 174)						this1 = _this;
            					}
            					else {
HXLINE( 174)						if (::hx::IsNotNull( vector )) {
HXLINE( 174)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,1);
HXDLIN( 174)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 174)							_this->byteOffset = 0;
HXDLIN( 174)							_this->length = array->get_length();
HXDLIN( 174)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 174)							 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 174)							_this->buffer = this2;
HXDLIN( 174)							_this->copyFromArray(array,null());
HXDLIN( 174)							this1 = _this;
            						}
            						else {
HXLINE( 174)							if (::hx::IsNotNull( view1 )) {
HXLINE( 174)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,1);
HXDLIN( 174)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 174)								int srcLength = view1->length;
HXDLIN( 174)								int srcByteOffset = view1->byteOffset;
HXDLIN( 174)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 174)								int elementSize = _this->bytesPerElement;
HXDLIN( 174)								if ((view1->type == _this->type)) {
HXLINE( 174)									int srcLength = srcData->length;
HXDLIN( 174)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 174)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 174)									_this->buffer = this1;
HXDLIN( 174)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 174)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 174)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 174)								_this->byteOffset = 0;
HXDLIN( 174)								_this->length = srcLength;
HXDLIN( 174)								this1 = _this;
            							}
            							else {
HXLINE( 174)								if (::hx::IsNotNull( buffer )) {
HXLINE( 174)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,1);
HXDLIN( 174)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 174)									if ((in_byteOffset < 0)) {
HXLINE( 174)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 174)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 174)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 174)									int bufferByteLength = buffer->length;
HXDLIN( 174)									int elementSize = _this->bytesPerElement;
HXDLIN( 174)									int newByteLength = bufferByteLength;
HXDLIN( 174)									if (::hx::IsNull( len )) {
HXLINE( 174)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 174)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 174)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 174)										if ((newByteLength < 0)) {
HXLINE( 174)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 174)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 174)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 174)										if ((newRange > bufferByteLength)) {
HXLINE( 174)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 174)									_this->buffer = buffer;
HXDLIN( 174)									_this->byteOffset = in_byteOffset;
HXDLIN( 174)									_this->byteLength = newByteLength;
HXDLIN( 174)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 174)									this1 = _this;
            								}
            								else {
HXLINE( 174)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Int8Array",40,53,da,77)));
            								}
            							}
            						}
            					}
            				}
HXLINE( 171)				view = this1;
            			}
            			break;
            			case (int)2: {
HXLINE( 177)				 ::Dynamic elements = null();
HXDLIN( 177)				 ::haxe::io::Bytes buffer = this->buffer;
HXDLIN( 177)				::cpp::VirtualArray array = null();
HXDLIN( 177)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 177)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 177)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 177)				if (::hx::IsNull( byteoffset )) {
HXLINE( 177)					byteoffset = 0;
            				}
HXDLIN( 177)				 ::lime::utils::ArrayBufferView this1;
HXDLIN( 177)				if (::hx::IsNotNull( elements )) {
HXLINE( 177)					this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,2);
            				}
            				else {
HXLINE( 177)					if (::hx::IsNotNull( array )) {
HXLINE( 177)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,2);
HXDLIN( 177)						_this->byteOffset = 0;
HXDLIN( 177)						_this->length = array->get_length();
HXDLIN( 177)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 177)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 177)						_this->buffer = this2;
HXDLIN( 177)						_this->copyFromArray(array,null());
HXDLIN( 177)						this1 = _this;
            					}
            					else {
HXLINE( 177)						if (::hx::IsNotNull( vector )) {
HXLINE( 177)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,2);
HXDLIN( 177)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 177)							_this->byteOffset = 0;
HXDLIN( 177)							_this->length = array->get_length();
HXDLIN( 177)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 177)							 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 177)							_this->buffer = this2;
HXDLIN( 177)							_this->copyFromArray(array,null());
HXDLIN( 177)							this1 = _this;
            						}
            						else {
HXLINE( 177)							if (::hx::IsNotNull( view1 )) {
HXLINE( 177)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,2);
HXDLIN( 177)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 177)								int srcLength = view1->length;
HXDLIN( 177)								int srcByteOffset = view1->byteOffset;
HXDLIN( 177)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 177)								int elementSize = _this->bytesPerElement;
HXDLIN( 177)								if ((view1->type == _this->type)) {
HXLINE( 177)									int srcLength = srcData->length;
HXDLIN( 177)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 177)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 177)									_this->buffer = this1;
HXDLIN( 177)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 177)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 177)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 177)								_this->byteOffset = 0;
HXDLIN( 177)								_this->length = srcLength;
HXDLIN( 177)								this1 = _this;
            							}
            							else {
HXLINE( 177)								if (::hx::IsNotNull( buffer )) {
HXLINE( 177)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,2);
HXDLIN( 177)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 177)									if ((in_byteOffset < 0)) {
HXLINE( 177)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 177)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 177)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 177)									int bufferByteLength = buffer->length;
HXDLIN( 177)									int elementSize = _this->bytesPerElement;
HXDLIN( 177)									int newByteLength = bufferByteLength;
HXDLIN( 177)									if (::hx::IsNull( len )) {
HXLINE( 177)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 177)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 177)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 177)										if ((newByteLength < 0)) {
HXLINE( 177)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 177)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 177)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 177)										if ((newRange > bufferByteLength)) {
HXLINE( 177)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 177)									_this->buffer = buffer;
HXDLIN( 177)									_this->byteOffset = in_byteOffset;
HXDLIN( 177)									_this->byteLength = newByteLength;
HXDLIN( 177)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 177)									this1 = _this;
            								}
            								else {
HXLINE( 177)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Int16Array",95,b2,95,a7)));
            								}
            							}
            						}
            					}
            				}
HXLINE( 171)				view = this1;
            			}
            			break;
            			case (int)3: {
HXLINE( 180)				 ::Dynamic elements = null();
HXDLIN( 180)				 ::haxe::io::Bytes buffer = this->buffer;
HXDLIN( 180)				::cpp::VirtualArray array = null();
HXDLIN( 180)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 180)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 180)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 180)				if (::hx::IsNull( byteoffset )) {
HXLINE( 180)					byteoffset = 0;
            				}
HXDLIN( 180)				 ::lime::utils::ArrayBufferView this1;
HXDLIN( 180)				if (::hx::IsNotNull( elements )) {
HXLINE( 180)					this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,3);
            				}
            				else {
HXLINE( 180)					if (::hx::IsNotNull( array )) {
HXLINE( 180)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,3);
HXDLIN( 180)						_this->byteOffset = 0;
HXDLIN( 180)						_this->length = array->get_length();
HXDLIN( 180)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 180)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 180)						_this->buffer = this2;
HXDLIN( 180)						_this->copyFromArray(array,null());
HXDLIN( 180)						this1 = _this;
            					}
            					else {
HXLINE( 180)						if (::hx::IsNotNull( vector )) {
HXLINE( 180)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,3);
HXDLIN( 180)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 180)							_this->byteOffset = 0;
HXDLIN( 180)							_this->length = array->get_length();
HXDLIN( 180)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 180)							 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 180)							_this->buffer = this2;
HXDLIN( 180)							_this->copyFromArray(array,null());
HXDLIN( 180)							this1 = _this;
            						}
            						else {
HXLINE( 180)							if (::hx::IsNotNull( view1 )) {
HXLINE( 180)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,3);
HXDLIN( 180)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 180)								int srcLength = view1->length;
HXDLIN( 180)								int srcByteOffset = view1->byteOffset;
HXDLIN( 180)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 180)								int elementSize = _this->bytesPerElement;
HXDLIN( 180)								if ((view1->type == _this->type)) {
HXLINE( 180)									int srcLength = srcData->length;
HXDLIN( 180)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 180)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 180)									_this->buffer = this1;
HXDLIN( 180)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 180)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 180)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 180)								_this->byteOffset = 0;
HXDLIN( 180)								_this->length = srcLength;
HXDLIN( 180)								this1 = _this;
            							}
            							else {
HXLINE( 180)								if (::hx::IsNotNull( buffer )) {
HXLINE( 180)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,3);
HXDLIN( 180)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 180)									if ((in_byteOffset < 0)) {
HXLINE( 180)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 180)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 180)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 180)									int bufferByteLength = buffer->length;
HXDLIN( 180)									int elementSize = _this->bytesPerElement;
HXDLIN( 180)									int newByteLength = bufferByteLength;
HXDLIN( 180)									if (::hx::IsNull( len )) {
HXLINE( 180)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 180)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 180)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 180)										if ((newByteLength < 0)) {
HXLINE( 180)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 180)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 180)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 180)										if ((newRange > bufferByteLength)) {
HXLINE( 180)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 180)									_this->buffer = buffer;
HXDLIN( 180)									_this->byteOffset = in_byteOffset;
HXDLIN( 180)									_this->byteLength = newByteLength;
HXDLIN( 180)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 180)									this1 = _this;
            								}
            								else {
HXLINE( 180)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Int32Array",9b,2e,53,61)));
            								}
            							}
            						}
            					}
            				}
HXLINE( 171)				view = this1;
            			}
            			break;
            			case (int)4: {
HXLINE( 183)				 ::Dynamic elements = null();
HXDLIN( 183)				 ::haxe::io::Bytes buffer = this->buffer;
HXDLIN( 183)				::cpp::VirtualArray array = null();
HXDLIN( 183)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 183)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 183)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 183)				if (::hx::IsNull( byteoffset )) {
HXLINE( 183)					byteoffset = 0;
            				}
HXDLIN( 183)				 ::lime::utils::ArrayBufferView this1;
HXDLIN( 183)				if (::hx::IsNotNull( elements )) {
HXLINE( 183)					this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,4);
            				}
            				else {
HXLINE( 183)					if (::hx::IsNotNull( array )) {
HXLINE( 183)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 183)						_this->byteOffset = 0;
HXDLIN( 183)						_this->length = array->get_length();
HXDLIN( 183)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 183)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 183)						_this->buffer = this2;
HXDLIN( 183)						_this->copyFromArray(array,null());
HXDLIN( 183)						this1 = _this;
            					}
            					else {
HXLINE( 183)						if (::hx::IsNotNull( vector )) {
HXLINE( 183)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 183)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 183)							_this->byteOffset = 0;
HXDLIN( 183)							_this->length = array->get_length();
HXDLIN( 183)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 183)							 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 183)							_this->buffer = this2;
HXDLIN( 183)							_this->copyFromArray(array,null());
HXDLIN( 183)							this1 = _this;
            						}
            						else {
HXLINE( 183)							if (::hx::IsNotNull( view1 )) {
HXLINE( 183)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 183)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 183)								int srcLength = view1->length;
HXDLIN( 183)								int srcByteOffset = view1->byteOffset;
HXDLIN( 183)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 183)								int elementSize = _this->bytesPerElement;
HXDLIN( 183)								if ((view1->type == _this->type)) {
HXLINE( 183)									int srcLength = srcData->length;
HXDLIN( 183)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 183)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 183)									_this->buffer = this1;
HXDLIN( 183)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 183)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 183)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 183)								_this->byteOffset = 0;
HXDLIN( 183)								_this->length = srcLength;
HXDLIN( 183)								this1 = _this;
            							}
            							else {
HXLINE( 183)								if (::hx::IsNotNull( buffer )) {
HXLINE( 183)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 183)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 183)									if ((in_byteOffset < 0)) {
HXLINE( 183)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 183)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 183)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 183)									int bufferByteLength = buffer->length;
HXDLIN( 183)									int elementSize = _this->bytesPerElement;
HXDLIN( 183)									int newByteLength = bufferByteLength;
HXDLIN( 183)									if (::hx::IsNull( len )) {
HXLINE( 183)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 183)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 183)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 183)										if ((newByteLength < 0)) {
HXLINE( 183)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 183)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 183)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 183)										if ((newRange > bufferByteLength)) {
HXLINE( 183)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 183)									_this->buffer = buffer;
HXDLIN( 183)									_this->byteOffset = in_byteOffset;
HXDLIN( 183)									_this->byteLength = newByteLength;
HXDLIN( 183)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 183)									this1 = _this;
            								}
            								else {
HXLINE( 183)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt8Array",6b,44,d5,85)));
            								}
            							}
            						}
            					}
            				}
HXLINE( 171)				view = this1;
            			}
            			break;
            			case (int)5: {
HXLINE( 186)				 ::Dynamic elements = null();
HXDLIN( 186)				 ::haxe::io::Bytes buffer = this->buffer;
HXDLIN( 186)				::cpp::VirtualArray array = null();
HXDLIN( 186)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 186)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 186)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 186)				if (::hx::IsNull( byteoffset )) {
HXLINE( 186)					byteoffset = 0;
            				}
HXDLIN( 186)				 ::lime::utils::ArrayBufferView this1;
HXDLIN( 186)				if (::hx::IsNotNull( elements )) {
HXLINE( 186)					this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,5);
            				}
            				else {
HXLINE( 186)					if (::hx::IsNotNull( array )) {
HXLINE( 186)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,5);
HXDLIN( 186)						_this->byteOffset = 0;
HXDLIN( 186)						_this->length = array->get_length();
HXDLIN( 186)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 186)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 186)						_this->buffer = this2;
HXDLIN( 186)						_this->copyFromArray(array,null());
HXDLIN( 186)						this1 = _this;
            					}
            					else {
HXLINE( 186)						if (::hx::IsNotNull( vector )) {
HXLINE( 186)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,5);
HXDLIN( 186)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 186)							_this->byteOffset = 0;
HXDLIN( 186)							_this->length = array->get_length();
HXDLIN( 186)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 186)							 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 186)							_this->buffer = this2;
HXDLIN( 186)							_this->copyFromArray(array,null());
HXDLIN( 186)							this1 = _this;
            						}
            						else {
HXLINE( 186)							if (::hx::IsNotNull( view1 )) {
HXLINE( 186)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,5);
HXDLIN( 186)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 186)								int srcLength = view1->length;
HXDLIN( 186)								int srcByteOffset = view1->byteOffset;
HXDLIN( 186)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 186)								int elementSize = _this->bytesPerElement;
HXDLIN( 186)								if ((view1->type == _this->type)) {
HXLINE( 186)									int srcLength = srcData->length;
HXDLIN( 186)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 186)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 186)									_this->buffer = this1;
HXDLIN( 186)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 186)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 186)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 186)								_this->byteOffset = 0;
HXDLIN( 186)								_this->length = srcLength;
HXDLIN( 186)								this1 = _this;
            							}
            							else {
HXLINE( 186)								if (::hx::IsNotNull( buffer )) {
HXLINE( 186)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,5);
HXDLIN( 186)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 186)									if ((in_byteOffset < 0)) {
HXLINE( 186)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 186)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 186)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 186)									int bufferByteLength = buffer->length;
HXDLIN( 186)									int elementSize = _this->bytesPerElement;
HXDLIN( 186)									int newByteLength = bufferByteLength;
HXDLIN( 186)									if (::hx::IsNull( len )) {
HXLINE( 186)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 186)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 186)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 186)										if ((newByteLength < 0)) {
HXLINE( 186)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 186)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 186)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 186)										if ((newRange > bufferByteLength)) {
HXLINE( 186)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 186)									_this->buffer = buffer;
HXDLIN( 186)									_this->byteOffset = in_byteOffset;
HXDLIN( 186)									_this->byteLength = newByteLength;
HXDLIN( 186)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 186)									this1 = _this;
            								}
            								else {
HXLINE( 186)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt8ClampedArray",8d,06,77,13)));
            								}
            							}
            						}
            					}
            				}
HXLINE( 171)				view = this1;
            			}
            			break;
            			case (int)6: {
HXLINE( 189)				 ::Dynamic elements = null();
HXDLIN( 189)				 ::haxe::io::Bytes buffer = this->buffer;
HXDLIN( 189)				::cpp::VirtualArray array = null();
HXDLIN( 189)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 189)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 189)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 189)				if (::hx::IsNull( byteoffset )) {
HXLINE( 189)					byteoffset = 0;
            				}
HXDLIN( 189)				 ::lime::utils::ArrayBufferView this1;
HXDLIN( 189)				if (::hx::IsNotNull( elements )) {
HXLINE( 189)					this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,6);
            				}
            				else {
HXLINE( 189)					if (::hx::IsNotNull( array )) {
HXLINE( 189)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 189)						_this->byteOffset = 0;
HXDLIN( 189)						_this->length = array->get_length();
HXDLIN( 189)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 189)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 189)						_this->buffer = this2;
HXDLIN( 189)						_this->copyFromArray(array,null());
HXDLIN( 189)						this1 = _this;
            					}
            					else {
HXLINE( 189)						if (::hx::IsNotNull( vector )) {
HXLINE( 189)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 189)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 189)							_this->byteOffset = 0;
HXDLIN( 189)							_this->length = array->get_length();
HXDLIN( 189)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 189)							 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 189)							_this->buffer = this2;
HXDLIN( 189)							_this->copyFromArray(array,null());
HXDLIN( 189)							this1 = _this;
            						}
            						else {
HXLINE( 189)							if (::hx::IsNotNull( view1 )) {
HXLINE( 189)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 189)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 189)								int srcLength = view1->length;
HXDLIN( 189)								int srcByteOffset = view1->byteOffset;
HXDLIN( 189)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 189)								int elementSize = _this->bytesPerElement;
HXDLIN( 189)								if ((view1->type == _this->type)) {
HXLINE( 189)									int srcLength = srcData->length;
HXDLIN( 189)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 189)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 189)									_this->buffer = this1;
HXDLIN( 189)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 189)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 189)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 189)								_this->byteOffset = 0;
HXDLIN( 189)								_this->length = srcLength;
HXDLIN( 189)								this1 = _this;
            							}
            							else {
HXLINE( 189)								if (::hx::IsNotNull( buffer )) {
HXLINE( 189)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 189)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 189)									if ((in_byteOffset < 0)) {
HXLINE( 189)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 189)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 189)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 189)									int bufferByteLength = buffer->length;
HXDLIN( 189)									int elementSize = _this->bytesPerElement;
HXDLIN( 189)									int newByteLength = bufferByteLength;
HXDLIN( 189)									if (::hx::IsNull( len )) {
HXLINE( 189)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 189)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 189)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 189)										if ((newByteLength < 0)) {
HXLINE( 189)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 189)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 189)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 189)										if ((newRange > bufferByteLength)) {
HXLINE( 189)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 189)									_this->buffer = buffer;
HXDLIN( 189)									_this->byteOffset = in_byteOffset;
HXDLIN( 189)									_this->byteLength = newByteLength;
HXDLIN( 189)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 189)									this1 = _this;
            								}
            								else {
HXLINE( 189)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt16Array",0a,c7,2d,d5)));
            								}
            							}
            						}
            					}
            				}
HXLINE( 171)				view = this1;
            			}
            			break;
            			case (int)7: {
HXLINE( 192)				 ::Dynamic elements = null();
HXDLIN( 192)				 ::haxe::io::Bytes buffer = this->buffer;
HXDLIN( 192)				::cpp::VirtualArray array = null();
HXDLIN( 192)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 192)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 192)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 192)				if (::hx::IsNull( byteoffset )) {
HXLINE( 192)					byteoffset = 0;
            				}
HXDLIN( 192)				 ::lime::utils::ArrayBufferView this1;
HXDLIN( 192)				if (::hx::IsNotNull( elements )) {
HXLINE( 192)					this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,7);
            				}
            				else {
HXLINE( 192)					if (::hx::IsNotNull( array )) {
HXLINE( 192)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,7);
HXDLIN( 192)						_this->byteOffset = 0;
HXDLIN( 192)						_this->length = array->get_length();
HXDLIN( 192)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 192)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 192)						_this->buffer = this2;
HXDLIN( 192)						_this->copyFromArray(array,null());
HXDLIN( 192)						this1 = _this;
            					}
            					else {
HXLINE( 192)						if (::hx::IsNotNull( vector )) {
HXLINE( 192)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,7);
HXDLIN( 192)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 192)							_this->byteOffset = 0;
HXDLIN( 192)							_this->length = array->get_length();
HXDLIN( 192)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 192)							 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 192)							_this->buffer = this2;
HXDLIN( 192)							_this->copyFromArray(array,null());
HXDLIN( 192)							this1 = _this;
            						}
            						else {
HXLINE( 192)							if (::hx::IsNotNull( view1 )) {
HXLINE( 192)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,7);
HXDLIN( 192)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 192)								int srcLength = view1->length;
HXDLIN( 192)								int srcByteOffset = view1->byteOffset;
HXDLIN( 192)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 192)								int elementSize = _this->bytesPerElement;
HXDLIN( 192)								if ((view1->type == _this->type)) {
HXLINE( 192)									int srcLength = srcData->length;
HXDLIN( 192)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 192)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 192)									_this->buffer = this1;
HXDLIN( 192)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 192)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 192)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 192)								_this->byteOffset = 0;
HXDLIN( 192)								_this->length = srcLength;
HXDLIN( 192)								this1 = _this;
            							}
            							else {
HXLINE( 192)								if (::hx::IsNotNull( buffer )) {
HXLINE( 192)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,7);
HXDLIN( 192)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 192)									if ((in_byteOffset < 0)) {
HXLINE( 192)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 192)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 192)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 192)									int bufferByteLength = buffer->length;
HXDLIN( 192)									int elementSize = _this->bytesPerElement;
HXDLIN( 192)									int newByteLength = bufferByteLength;
HXDLIN( 192)									if (::hx::IsNull( len )) {
HXLINE( 192)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 192)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 192)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 192)										if ((newByteLength < 0)) {
HXLINE( 192)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 192)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 192)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 192)										if ((newRange > bufferByteLength)) {
HXLINE( 192)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 192)									_this->buffer = buffer;
HXDLIN( 192)									_this->byteOffset = in_byteOffset;
HXDLIN( 192)									_this->byteLength = newByteLength;
HXDLIN( 192)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 192)									this1 = _this;
            								}
            								else {
HXLINE( 192)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt32Array",10,43,eb,8e)));
            								}
            							}
            						}
            					}
            				}
HXLINE( 171)				view = this1;
            			}
            			break;
            			case (int)8: {
HXLINE( 195)				 ::Dynamic elements = null();
HXDLIN( 195)				 ::haxe::io::Bytes buffer = this->buffer;
HXDLIN( 195)				::cpp::VirtualArray array = null();
HXDLIN( 195)				 ::openfl::_Vector::FloatVector vector = null();
HXDLIN( 195)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 195)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 195)				if (::hx::IsNull( byteoffset )) {
HXLINE( 195)					byteoffset = 0;
            				}
HXDLIN( 195)				 ::lime::utils::ArrayBufferView this1;
HXDLIN( 195)				if (::hx::IsNotNull( elements )) {
HXLINE( 195)					this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,8);
            				}
            				else {
HXLINE( 195)					if (::hx::IsNotNull( array )) {
HXLINE( 195)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 195)						_this->byteOffset = 0;
HXDLIN( 195)						_this->length = array->get_length();
HXDLIN( 195)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 195)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 195)						_this->buffer = this2;
HXDLIN( 195)						_this->copyFromArray(array,null());
HXDLIN( 195)						this1 = _this;
            					}
            					else {
HXLINE( 195)						if (::hx::IsNotNull( vector )) {
HXLINE( 195)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 195)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 195)							_this->byteOffset = 0;
HXDLIN( 195)							_this->length = array->get_length();
HXDLIN( 195)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 195)							 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 195)							_this->buffer = this2;
HXDLIN( 195)							_this->copyFromArray(array,null());
HXDLIN( 195)							this1 = _this;
            						}
            						else {
HXLINE( 195)							if (::hx::IsNotNull( view1 )) {
HXLINE( 195)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 195)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 195)								int srcLength = view1->length;
HXDLIN( 195)								int srcByteOffset = view1->byteOffset;
HXDLIN( 195)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 195)								int elementSize = _this->bytesPerElement;
HXDLIN( 195)								if ((view1->type == _this->type)) {
HXLINE( 195)									int srcLength = srcData->length;
HXDLIN( 195)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 195)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 195)									_this->buffer = this1;
HXDLIN( 195)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 195)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 195)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 195)								_this->byteOffset = 0;
HXDLIN( 195)								_this->length = srcLength;
HXDLIN( 195)								this1 = _this;
            							}
            							else {
HXLINE( 195)								if (::hx::IsNotNull( buffer )) {
HXLINE( 195)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 195)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 195)									if ((in_byteOffset < 0)) {
HXLINE( 195)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 195)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 195)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 195)									int bufferByteLength = buffer->length;
HXDLIN( 195)									int elementSize = _this->bytesPerElement;
HXDLIN( 195)									int newByteLength = bufferByteLength;
HXDLIN( 195)									if (::hx::IsNull( len )) {
HXLINE( 195)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 195)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 195)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 195)										if ((newByteLength < 0)) {
HXLINE( 195)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 195)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 195)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 195)										if ((newRange > bufferByteLength)) {
HXLINE( 195)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 195)									_this->buffer = buffer;
HXDLIN( 195)									_this->byteOffset = in_byteOffset;
HXDLIN( 195)									_this->byteLength = newByteLength;
HXDLIN( 195)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 195)									this1 = _this;
            								}
            								else {
HXLINE( 195)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Float32Array",8e,c1,f4,d4)));
            								}
            							}
            						}
            					}
            				}
HXLINE( 171)				view = this1;
            			}
            			break;
            			case (int)9: {
HXLINE( 198)				 ::Dynamic elements = null();
HXDLIN( 198)				 ::haxe::io::Bytes buffer = this->buffer;
HXDLIN( 198)				::cpp::VirtualArray array = null();
HXDLIN( 198)				 ::openfl::_Vector::FloatVector vector = null();
HXDLIN( 198)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 198)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 198)				if (::hx::IsNull( byteoffset )) {
HXLINE( 198)					byteoffset = 0;
            				}
HXDLIN( 198)				 ::lime::utils::ArrayBufferView this1;
HXDLIN( 198)				if (::hx::IsNotNull( elements )) {
HXLINE( 198)					this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,9);
            				}
            				else {
HXLINE( 198)					if (::hx::IsNotNull( array )) {
HXLINE( 198)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,9);
HXDLIN( 198)						_this->byteOffset = 0;
HXDLIN( 198)						_this->length = array->get_length();
HXDLIN( 198)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 198)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 198)						_this->buffer = this2;
HXDLIN( 198)						_this->copyFromArray(array,null());
HXDLIN( 198)						this1 = _this;
            					}
            					else {
HXLINE( 198)						if (::hx::IsNotNull( vector )) {
HXLINE( 198)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,9);
HXDLIN( 198)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 198)							_this->byteOffset = 0;
HXDLIN( 198)							_this->length = array->get_length();
HXDLIN( 198)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 198)							 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 198)							_this->buffer = this2;
HXDLIN( 198)							_this->copyFromArray(array,null());
HXDLIN( 198)							this1 = _this;
            						}
            						else {
HXLINE( 198)							if (::hx::IsNotNull( view1 )) {
HXLINE( 198)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,9);
HXDLIN( 198)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 198)								int srcLength = view1->length;
HXDLIN( 198)								int srcByteOffset = view1->byteOffset;
HXDLIN( 198)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 198)								int elementSize = _this->bytesPerElement;
HXDLIN( 198)								if ((view1->type == _this->type)) {
HXLINE( 198)									int srcLength = srcData->length;
HXDLIN( 198)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 198)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 198)									_this->buffer = this1;
HXDLIN( 198)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 198)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 198)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 198)								_this->byteOffset = 0;
HXDLIN( 198)								_this->length = srcLength;
HXDLIN( 198)								this1 = _this;
            							}
            							else {
HXLINE( 198)								if (::hx::IsNotNull( buffer )) {
HXLINE( 198)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,9);
HXDLIN( 198)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 198)									if ((in_byteOffset < 0)) {
HXLINE( 198)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 198)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 198)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 198)									int bufferByteLength = buffer->length;
HXDLIN( 198)									int elementSize = _this->bytesPerElement;
HXDLIN( 198)									int newByteLength = bufferByteLength;
HXDLIN( 198)									if (::hx::IsNull( len )) {
HXLINE( 198)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 198)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 198)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 198)										if ((newByteLength < 0)) {
HXLINE( 198)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 198)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 198)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 198)										if ((newRange > bufferByteLength)) {
HXLINE( 198)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 198)									_this->buffer = buffer;
HXDLIN( 198)									_this->byteOffset = in_byteOffset;
HXDLIN( 198)									_this->byteLength = newByteLength;
HXDLIN( 198)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 198)									this1 = _this;
            								}
            								else {
HXLINE( 198)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Float64Array",8f,de,6b,1e)));
            								}
            							}
            						}
            					}
            				}
HXLINE( 171)				view = this1;
            			}
            			break;
            		}
HXLINE( 204)		return view;
            	}


HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferView_obj,subarray_lime_utils_Int32Array,return )

 ::lime::utils::ArrayBufferView ArrayBufferView_obj::subarray_lime_utils_UInt32Array(int begin, ::Dynamic end){
            	HX_GC_STACKFRAME(&_hx_pos_244a612994c6bd06_166_subarray_lime_utils_UInt32Array)
HXLINE( 167)		if (::hx::IsNull( end )) {
HXLINE( 167)			end = this->length;
            		}
HXLINE( 168)		int len = (( (int)(end) ) - begin);
HXLINE( 169)		int byte_offset = ((begin * this->bytesPerElement) + this->byteOffset);
HXLINE( 171)		 ::lime::utils::ArrayBufferView view;
HXDLIN( 171)		switch((int)(this->type)){
            			case (int)0: {
HXLINE( 201)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("subarray on a blank ArrayBufferView",39,87,fd,19)));
            			}
            			break;
            			case (int)1: {
HXLINE( 174)				 ::Dynamic elements = null();
HXDLIN( 174)				 ::haxe::io::Bytes buffer = this->buffer;
HXDLIN( 174)				::cpp::VirtualArray array = null();
HXDLIN( 174)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 174)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 174)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 174)				if (::hx::IsNull( byteoffset )) {
HXLINE( 174)					byteoffset = 0;
            				}
HXDLIN( 174)				 ::lime::utils::ArrayBufferView this1;
HXDLIN( 174)				if (::hx::IsNotNull( elements )) {
HXLINE( 174)					this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,1);
            				}
            				else {
HXLINE( 174)					if (::hx::IsNotNull( array )) {
HXLINE( 174)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,1);
HXDLIN( 174)						_this->byteOffset = 0;
HXDLIN( 174)						_this->length = array->get_length();
HXDLIN( 174)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 174)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 174)						_this->buffer = this2;
HXDLIN( 174)						_this->copyFromArray(array,null());
HXDLIN( 174)						this1 = _this;
            					}
            					else {
HXLINE( 174)						if (::hx::IsNotNull( vector )) {
HXLINE( 174)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,1);
HXDLIN( 174)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 174)							_this->byteOffset = 0;
HXDLIN( 174)							_this->length = array->get_length();
HXDLIN( 174)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 174)							 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 174)							_this->buffer = this2;
HXDLIN( 174)							_this->copyFromArray(array,null());
HXDLIN( 174)							this1 = _this;
            						}
            						else {
HXLINE( 174)							if (::hx::IsNotNull( view1 )) {
HXLINE( 174)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,1);
HXDLIN( 174)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 174)								int srcLength = view1->length;
HXDLIN( 174)								int srcByteOffset = view1->byteOffset;
HXDLIN( 174)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 174)								int elementSize = _this->bytesPerElement;
HXDLIN( 174)								if ((view1->type == _this->type)) {
HXLINE( 174)									int srcLength = srcData->length;
HXDLIN( 174)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 174)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 174)									_this->buffer = this1;
HXDLIN( 174)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 174)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 174)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 174)								_this->byteOffset = 0;
HXDLIN( 174)								_this->length = srcLength;
HXDLIN( 174)								this1 = _this;
            							}
            							else {
HXLINE( 174)								if (::hx::IsNotNull( buffer )) {
HXLINE( 174)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,1);
HXDLIN( 174)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 174)									if ((in_byteOffset < 0)) {
HXLINE( 174)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 174)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 174)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 174)									int bufferByteLength = buffer->length;
HXDLIN( 174)									int elementSize = _this->bytesPerElement;
HXDLIN( 174)									int newByteLength = bufferByteLength;
HXDLIN( 174)									if (::hx::IsNull( len )) {
HXLINE( 174)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 174)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 174)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 174)										if ((newByteLength < 0)) {
HXLINE( 174)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 174)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 174)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 174)										if ((newRange > bufferByteLength)) {
HXLINE( 174)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 174)									_this->buffer = buffer;
HXDLIN( 174)									_this->byteOffset = in_byteOffset;
HXDLIN( 174)									_this->byteLength = newByteLength;
HXDLIN( 174)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 174)									this1 = _this;
            								}
            								else {
HXLINE( 174)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Int8Array",40,53,da,77)));
            								}
            							}
            						}
            					}
            				}
HXLINE( 171)				view = this1;
            			}
            			break;
            			case (int)2: {
HXLINE( 177)				 ::Dynamic elements = null();
HXDLIN( 177)				 ::haxe::io::Bytes buffer = this->buffer;
HXDLIN( 177)				::cpp::VirtualArray array = null();
HXDLIN( 177)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 177)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 177)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 177)				if (::hx::IsNull( byteoffset )) {
HXLINE( 177)					byteoffset = 0;
            				}
HXDLIN( 177)				 ::lime::utils::ArrayBufferView this1;
HXDLIN( 177)				if (::hx::IsNotNull( elements )) {
HXLINE( 177)					this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,2);
            				}
            				else {
HXLINE( 177)					if (::hx::IsNotNull( array )) {
HXLINE( 177)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,2);
HXDLIN( 177)						_this->byteOffset = 0;
HXDLIN( 177)						_this->length = array->get_length();
HXDLIN( 177)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 177)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 177)						_this->buffer = this2;
HXDLIN( 177)						_this->copyFromArray(array,null());
HXDLIN( 177)						this1 = _this;
            					}
            					else {
HXLINE( 177)						if (::hx::IsNotNull( vector )) {
HXLINE( 177)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,2);
HXDLIN( 177)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 177)							_this->byteOffset = 0;
HXDLIN( 177)							_this->length = array->get_length();
HXDLIN( 177)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 177)							 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 177)							_this->buffer = this2;
HXDLIN( 177)							_this->copyFromArray(array,null());
HXDLIN( 177)							this1 = _this;
            						}
            						else {
HXLINE( 177)							if (::hx::IsNotNull( view1 )) {
HXLINE( 177)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,2);
HXDLIN( 177)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 177)								int srcLength = view1->length;
HXDLIN( 177)								int srcByteOffset = view1->byteOffset;
HXDLIN( 177)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 177)								int elementSize = _this->bytesPerElement;
HXDLIN( 177)								if ((view1->type == _this->type)) {
HXLINE( 177)									int srcLength = srcData->length;
HXDLIN( 177)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 177)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 177)									_this->buffer = this1;
HXDLIN( 177)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 177)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 177)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 177)								_this->byteOffset = 0;
HXDLIN( 177)								_this->length = srcLength;
HXDLIN( 177)								this1 = _this;
            							}
            							else {
HXLINE( 177)								if (::hx::IsNotNull( buffer )) {
HXLINE( 177)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,2);
HXDLIN( 177)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 177)									if ((in_byteOffset < 0)) {
HXLINE( 177)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 177)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 177)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 177)									int bufferByteLength = buffer->length;
HXDLIN( 177)									int elementSize = _this->bytesPerElement;
HXDLIN( 177)									int newByteLength = bufferByteLength;
HXDLIN( 177)									if (::hx::IsNull( len )) {
HXLINE( 177)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 177)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 177)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 177)										if ((newByteLength < 0)) {
HXLINE( 177)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 177)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 177)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 177)										if ((newRange > bufferByteLength)) {
HXLINE( 177)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 177)									_this->buffer = buffer;
HXDLIN( 177)									_this->byteOffset = in_byteOffset;
HXDLIN( 177)									_this->byteLength = newByteLength;
HXDLIN( 177)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 177)									this1 = _this;
            								}
            								else {
HXLINE( 177)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Int16Array",95,b2,95,a7)));
            								}
            							}
            						}
            					}
            				}
HXLINE( 171)				view = this1;
            			}
            			break;
            			case (int)3: {
HXLINE( 180)				 ::Dynamic elements = null();
HXDLIN( 180)				 ::haxe::io::Bytes buffer = this->buffer;
HXDLIN( 180)				::cpp::VirtualArray array = null();
HXDLIN( 180)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 180)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 180)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 180)				if (::hx::IsNull( byteoffset )) {
HXLINE( 180)					byteoffset = 0;
            				}
HXDLIN( 180)				 ::lime::utils::ArrayBufferView this1;
HXDLIN( 180)				if (::hx::IsNotNull( elements )) {
HXLINE( 180)					this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,3);
            				}
            				else {
HXLINE( 180)					if (::hx::IsNotNull( array )) {
HXLINE( 180)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,3);
HXDLIN( 180)						_this->byteOffset = 0;
HXDLIN( 180)						_this->length = array->get_length();
HXDLIN( 180)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 180)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 180)						_this->buffer = this2;
HXDLIN( 180)						_this->copyFromArray(array,null());
HXDLIN( 180)						this1 = _this;
            					}
            					else {
HXLINE( 180)						if (::hx::IsNotNull( vector )) {
HXLINE( 180)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,3);
HXDLIN( 180)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 180)							_this->byteOffset = 0;
HXDLIN( 180)							_this->length = array->get_length();
HXDLIN( 180)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 180)							 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 180)							_this->buffer = this2;
HXDLIN( 180)							_this->copyFromArray(array,null());
HXDLIN( 180)							this1 = _this;
            						}
            						else {
HXLINE( 180)							if (::hx::IsNotNull( view1 )) {
HXLINE( 180)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,3);
HXDLIN( 180)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 180)								int srcLength = view1->length;
HXDLIN( 180)								int srcByteOffset = view1->byteOffset;
HXDLIN( 180)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 180)								int elementSize = _this->bytesPerElement;
HXDLIN( 180)								if ((view1->type == _this->type)) {
HXLINE( 180)									int srcLength = srcData->length;
HXDLIN( 180)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 180)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 180)									_this->buffer = this1;
HXDLIN( 180)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 180)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 180)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 180)								_this->byteOffset = 0;
HXDLIN( 180)								_this->length = srcLength;
HXDLIN( 180)								this1 = _this;
            							}
            							else {
HXLINE( 180)								if (::hx::IsNotNull( buffer )) {
HXLINE( 180)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,3);
HXDLIN( 180)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 180)									if ((in_byteOffset < 0)) {
HXLINE( 180)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 180)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 180)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 180)									int bufferByteLength = buffer->length;
HXDLIN( 180)									int elementSize = _this->bytesPerElement;
HXDLIN( 180)									int newByteLength = bufferByteLength;
HXDLIN( 180)									if (::hx::IsNull( len )) {
HXLINE( 180)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 180)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 180)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 180)										if ((newByteLength < 0)) {
HXLINE( 180)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 180)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 180)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 180)										if ((newRange > bufferByteLength)) {
HXLINE( 180)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 180)									_this->buffer = buffer;
HXDLIN( 180)									_this->byteOffset = in_byteOffset;
HXDLIN( 180)									_this->byteLength = newByteLength;
HXDLIN( 180)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 180)									this1 = _this;
            								}
            								else {
HXLINE( 180)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Int32Array",9b,2e,53,61)));
            								}
            							}
            						}
            					}
            				}
HXLINE( 171)				view = this1;
            			}
            			break;
            			case (int)4: {
HXLINE( 183)				 ::Dynamic elements = null();
HXDLIN( 183)				 ::haxe::io::Bytes buffer = this->buffer;
HXDLIN( 183)				::cpp::VirtualArray array = null();
HXDLIN( 183)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 183)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 183)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 183)				if (::hx::IsNull( byteoffset )) {
HXLINE( 183)					byteoffset = 0;
            				}
HXDLIN( 183)				 ::lime::utils::ArrayBufferView this1;
HXDLIN( 183)				if (::hx::IsNotNull( elements )) {
HXLINE( 183)					this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,4);
            				}
            				else {
HXLINE( 183)					if (::hx::IsNotNull( array )) {
HXLINE( 183)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 183)						_this->byteOffset = 0;
HXDLIN( 183)						_this->length = array->get_length();
HXDLIN( 183)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 183)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 183)						_this->buffer = this2;
HXDLIN( 183)						_this->copyFromArray(array,null());
HXDLIN( 183)						this1 = _this;
            					}
            					else {
HXLINE( 183)						if (::hx::IsNotNull( vector )) {
HXLINE( 183)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 183)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 183)							_this->byteOffset = 0;
HXDLIN( 183)							_this->length = array->get_length();
HXDLIN( 183)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 183)							 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 183)							_this->buffer = this2;
HXDLIN( 183)							_this->copyFromArray(array,null());
HXDLIN( 183)							this1 = _this;
            						}
            						else {
HXLINE( 183)							if (::hx::IsNotNull( view1 )) {
HXLINE( 183)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 183)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 183)								int srcLength = view1->length;
HXDLIN( 183)								int srcByteOffset = view1->byteOffset;
HXDLIN( 183)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 183)								int elementSize = _this->bytesPerElement;
HXDLIN( 183)								if ((view1->type == _this->type)) {
HXLINE( 183)									int srcLength = srcData->length;
HXDLIN( 183)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 183)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 183)									_this->buffer = this1;
HXDLIN( 183)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 183)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 183)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 183)								_this->byteOffset = 0;
HXDLIN( 183)								_this->length = srcLength;
HXDLIN( 183)								this1 = _this;
            							}
            							else {
HXLINE( 183)								if (::hx::IsNotNull( buffer )) {
HXLINE( 183)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 183)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 183)									if ((in_byteOffset < 0)) {
HXLINE( 183)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 183)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 183)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 183)									int bufferByteLength = buffer->length;
HXDLIN( 183)									int elementSize = _this->bytesPerElement;
HXDLIN( 183)									int newByteLength = bufferByteLength;
HXDLIN( 183)									if (::hx::IsNull( len )) {
HXLINE( 183)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 183)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 183)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 183)										if ((newByteLength < 0)) {
HXLINE( 183)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 183)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 183)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 183)										if ((newRange > bufferByteLength)) {
HXLINE( 183)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 183)									_this->buffer = buffer;
HXDLIN( 183)									_this->byteOffset = in_byteOffset;
HXDLIN( 183)									_this->byteLength = newByteLength;
HXDLIN( 183)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 183)									this1 = _this;
            								}
            								else {
HXLINE( 183)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt8Array",6b,44,d5,85)));
            								}
            							}
            						}
            					}
            				}
HXLINE( 171)				view = this1;
            			}
            			break;
            			case (int)5: {
HXLINE( 186)				 ::Dynamic elements = null();
HXDLIN( 186)				 ::haxe::io::Bytes buffer = this->buffer;
HXDLIN( 186)				::cpp::VirtualArray array = null();
HXDLIN( 186)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 186)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 186)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 186)				if (::hx::IsNull( byteoffset )) {
HXLINE( 186)					byteoffset = 0;
            				}
HXDLIN( 186)				 ::lime::utils::ArrayBufferView this1;
HXDLIN( 186)				if (::hx::IsNotNull( elements )) {
HXLINE( 186)					this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,5);
            				}
            				else {
HXLINE( 186)					if (::hx::IsNotNull( array )) {
HXLINE( 186)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,5);
HXDLIN( 186)						_this->byteOffset = 0;
HXDLIN( 186)						_this->length = array->get_length();
HXDLIN( 186)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 186)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 186)						_this->buffer = this2;
HXDLIN( 186)						_this->copyFromArray(array,null());
HXDLIN( 186)						this1 = _this;
            					}
            					else {
HXLINE( 186)						if (::hx::IsNotNull( vector )) {
HXLINE( 186)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,5);
HXDLIN( 186)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 186)							_this->byteOffset = 0;
HXDLIN( 186)							_this->length = array->get_length();
HXDLIN( 186)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 186)							 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 186)							_this->buffer = this2;
HXDLIN( 186)							_this->copyFromArray(array,null());
HXDLIN( 186)							this1 = _this;
            						}
            						else {
HXLINE( 186)							if (::hx::IsNotNull( view1 )) {
HXLINE( 186)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,5);
HXDLIN( 186)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 186)								int srcLength = view1->length;
HXDLIN( 186)								int srcByteOffset = view1->byteOffset;
HXDLIN( 186)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 186)								int elementSize = _this->bytesPerElement;
HXDLIN( 186)								if ((view1->type == _this->type)) {
HXLINE( 186)									int srcLength = srcData->length;
HXDLIN( 186)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 186)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 186)									_this->buffer = this1;
HXDLIN( 186)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 186)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 186)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 186)								_this->byteOffset = 0;
HXDLIN( 186)								_this->length = srcLength;
HXDLIN( 186)								this1 = _this;
            							}
            							else {
HXLINE( 186)								if (::hx::IsNotNull( buffer )) {
HXLINE( 186)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,5);
HXDLIN( 186)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 186)									if ((in_byteOffset < 0)) {
HXLINE( 186)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 186)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 186)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 186)									int bufferByteLength = buffer->length;
HXDLIN( 186)									int elementSize = _this->bytesPerElement;
HXDLIN( 186)									int newByteLength = bufferByteLength;
HXDLIN( 186)									if (::hx::IsNull( len )) {
HXLINE( 186)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 186)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 186)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 186)										if ((newByteLength < 0)) {
HXLINE( 186)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 186)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 186)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 186)										if ((newRange > bufferByteLength)) {
HXLINE( 186)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 186)									_this->buffer = buffer;
HXDLIN( 186)									_this->byteOffset = in_byteOffset;
HXDLIN( 186)									_this->byteLength = newByteLength;
HXDLIN( 186)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 186)									this1 = _this;
            								}
            								else {
HXLINE( 186)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt8ClampedArray",8d,06,77,13)));
            								}
            							}
            						}
            					}
            				}
HXLINE( 171)				view = this1;
            			}
            			break;
            			case (int)6: {
HXLINE( 189)				 ::Dynamic elements = null();
HXDLIN( 189)				 ::haxe::io::Bytes buffer = this->buffer;
HXDLIN( 189)				::cpp::VirtualArray array = null();
HXDLIN( 189)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 189)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 189)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 189)				if (::hx::IsNull( byteoffset )) {
HXLINE( 189)					byteoffset = 0;
            				}
HXDLIN( 189)				 ::lime::utils::ArrayBufferView this1;
HXDLIN( 189)				if (::hx::IsNotNull( elements )) {
HXLINE( 189)					this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,6);
            				}
            				else {
HXLINE( 189)					if (::hx::IsNotNull( array )) {
HXLINE( 189)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 189)						_this->byteOffset = 0;
HXDLIN( 189)						_this->length = array->get_length();
HXDLIN( 189)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 189)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 189)						_this->buffer = this2;
HXDLIN( 189)						_this->copyFromArray(array,null());
HXDLIN( 189)						this1 = _this;
            					}
            					else {
HXLINE( 189)						if (::hx::IsNotNull( vector )) {
HXLINE( 189)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 189)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 189)							_this->byteOffset = 0;
HXDLIN( 189)							_this->length = array->get_length();
HXDLIN( 189)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 189)							 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 189)							_this->buffer = this2;
HXDLIN( 189)							_this->copyFromArray(array,null());
HXDLIN( 189)							this1 = _this;
            						}
            						else {
HXLINE( 189)							if (::hx::IsNotNull( view1 )) {
HXLINE( 189)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 189)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 189)								int srcLength = view1->length;
HXDLIN( 189)								int srcByteOffset = view1->byteOffset;
HXDLIN( 189)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 189)								int elementSize = _this->bytesPerElement;
HXDLIN( 189)								if ((view1->type == _this->type)) {
HXLINE( 189)									int srcLength = srcData->length;
HXDLIN( 189)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 189)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 189)									_this->buffer = this1;
HXDLIN( 189)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 189)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 189)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 189)								_this->byteOffset = 0;
HXDLIN( 189)								_this->length = srcLength;
HXDLIN( 189)								this1 = _this;
            							}
            							else {
HXLINE( 189)								if (::hx::IsNotNull( buffer )) {
HXLINE( 189)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 189)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 189)									if ((in_byteOffset < 0)) {
HXLINE( 189)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 189)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 189)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 189)									int bufferByteLength = buffer->length;
HXDLIN( 189)									int elementSize = _this->bytesPerElement;
HXDLIN( 189)									int newByteLength = bufferByteLength;
HXDLIN( 189)									if (::hx::IsNull( len )) {
HXLINE( 189)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 189)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 189)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 189)										if ((newByteLength < 0)) {
HXLINE( 189)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 189)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 189)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 189)										if ((newRange > bufferByteLength)) {
HXLINE( 189)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 189)									_this->buffer = buffer;
HXDLIN( 189)									_this->byteOffset = in_byteOffset;
HXDLIN( 189)									_this->byteLength = newByteLength;
HXDLIN( 189)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 189)									this1 = _this;
            								}
            								else {
HXLINE( 189)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt16Array",0a,c7,2d,d5)));
            								}
            							}
            						}
            					}
            				}
HXLINE( 171)				view = this1;
            			}
            			break;
            			case (int)7: {
HXLINE( 192)				 ::Dynamic elements = null();
HXDLIN( 192)				 ::haxe::io::Bytes buffer = this->buffer;
HXDLIN( 192)				::cpp::VirtualArray array = null();
HXDLIN( 192)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 192)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 192)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 192)				if (::hx::IsNull( byteoffset )) {
HXLINE( 192)					byteoffset = 0;
            				}
HXDLIN( 192)				 ::lime::utils::ArrayBufferView this1;
HXDLIN( 192)				if (::hx::IsNotNull( elements )) {
HXLINE( 192)					this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,7);
            				}
            				else {
HXLINE( 192)					if (::hx::IsNotNull( array )) {
HXLINE( 192)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,7);
HXDLIN( 192)						_this->byteOffset = 0;
HXDLIN( 192)						_this->length = array->get_length();
HXDLIN( 192)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 192)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 192)						_this->buffer = this2;
HXDLIN( 192)						_this->copyFromArray(array,null());
HXDLIN( 192)						this1 = _this;
            					}
            					else {
HXLINE( 192)						if (::hx::IsNotNull( vector )) {
HXLINE( 192)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,7);
HXDLIN( 192)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 192)							_this->byteOffset = 0;
HXDLIN( 192)							_this->length = array->get_length();
HXDLIN( 192)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 192)							 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 192)							_this->buffer = this2;
HXDLIN( 192)							_this->copyFromArray(array,null());
HXDLIN( 192)							this1 = _this;
            						}
            						else {
HXLINE( 192)							if (::hx::IsNotNull( view1 )) {
HXLINE( 192)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,7);
HXDLIN( 192)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 192)								int srcLength = view1->length;
HXDLIN( 192)								int srcByteOffset = view1->byteOffset;
HXDLIN( 192)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 192)								int elementSize = _this->bytesPerElement;
HXDLIN( 192)								if ((view1->type == _this->type)) {
HXLINE( 192)									int srcLength = srcData->length;
HXDLIN( 192)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 192)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 192)									_this->buffer = this1;
HXDLIN( 192)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 192)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 192)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 192)								_this->byteOffset = 0;
HXDLIN( 192)								_this->length = srcLength;
HXDLIN( 192)								this1 = _this;
            							}
            							else {
HXLINE( 192)								if (::hx::IsNotNull( buffer )) {
HXLINE( 192)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,7);
HXDLIN( 192)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 192)									if ((in_byteOffset < 0)) {
HXLINE( 192)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 192)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 192)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 192)									int bufferByteLength = buffer->length;
HXDLIN( 192)									int elementSize = _this->bytesPerElement;
HXDLIN( 192)									int newByteLength = bufferByteLength;
HXDLIN( 192)									if (::hx::IsNull( len )) {
HXLINE( 192)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 192)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 192)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 192)										if ((newByteLength < 0)) {
HXLINE( 192)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 192)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 192)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 192)										if ((newRange > bufferByteLength)) {
HXLINE( 192)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 192)									_this->buffer = buffer;
HXDLIN( 192)									_this->byteOffset = in_byteOffset;
HXDLIN( 192)									_this->byteLength = newByteLength;
HXDLIN( 192)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 192)									this1 = _this;
            								}
            								else {
HXLINE( 192)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt32Array",10,43,eb,8e)));
            								}
            							}
            						}
            					}
            				}
HXLINE( 171)				view = this1;
            			}
            			break;
            			case (int)8: {
HXLINE( 195)				 ::Dynamic elements = null();
HXDLIN( 195)				 ::haxe::io::Bytes buffer = this->buffer;
HXDLIN( 195)				::cpp::VirtualArray array = null();
HXDLIN( 195)				 ::openfl::_Vector::FloatVector vector = null();
HXDLIN( 195)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 195)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 195)				if (::hx::IsNull( byteoffset )) {
HXLINE( 195)					byteoffset = 0;
            				}
HXDLIN( 195)				 ::lime::utils::ArrayBufferView this1;
HXDLIN( 195)				if (::hx::IsNotNull( elements )) {
HXLINE( 195)					this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,8);
            				}
            				else {
HXLINE( 195)					if (::hx::IsNotNull( array )) {
HXLINE( 195)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 195)						_this->byteOffset = 0;
HXDLIN( 195)						_this->length = array->get_length();
HXDLIN( 195)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 195)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 195)						_this->buffer = this2;
HXDLIN( 195)						_this->copyFromArray(array,null());
HXDLIN( 195)						this1 = _this;
            					}
            					else {
HXLINE( 195)						if (::hx::IsNotNull( vector )) {
HXLINE( 195)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 195)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 195)							_this->byteOffset = 0;
HXDLIN( 195)							_this->length = array->get_length();
HXDLIN( 195)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 195)							 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 195)							_this->buffer = this2;
HXDLIN( 195)							_this->copyFromArray(array,null());
HXDLIN( 195)							this1 = _this;
            						}
            						else {
HXLINE( 195)							if (::hx::IsNotNull( view1 )) {
HXLINE( 195)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 195)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 195)								int srcLength = view1->length;
HXDLIN( 195)								int srcByteOffset = view1->byteOffset;
HXDLIN( 195)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 195)								int elementSize = _this->bytesPerElement;
HXDLIN( 195)								if ((view1->type == _this->type)) {
HXLINE( 195)									int srcLength = srcData->length;
HXDLIN( 195)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 195)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 195)									_this->buffer = this1;
HXDLIN( 195)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 195)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 195)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 195)								_this->byteOffset = 0;
HXDLIN( 195)								_this->length = srcLength;
HXDLIN( 195)								this1 = _this;
            							}
            							else {
HXLINE( 195)								if (::hx::IsNotNull( buffer )) {
HXLINE( 195)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 195)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 195)									if ((in_byteOffset < 0)) {
HXLINE( 195)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 195)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 195)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 195)									int bufferByteLength = buffer->length;
HXDLIN( 195)									int elementSize = _this->bytesPerElement;
HXDLIN( 195)									int newByteLength = bufferByteLength;
HXDLIN( 195)									if (::hx::IsNull( len )) {
HXLINE( 195)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 195)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 195)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 195)										if ((newByteLength < 0)) {
HXLINE( 195)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 195)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 195)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 195)										if ((newRange > bufferByteLength)) {
HXLINE( 195)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 195)									_this->buffer = buffer;
HXDLIN( 195)									_this->byteOffset = in_byteOffset;
HXDLIN( 195)									_this->byteLength = newByteLength;
HXDLIN( 195)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 195)									this1 = _this;
            								}
            								else {
HXLINE( 195)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Float32Array",8e,c1,f4,d4)));
            								}
            							}
            						}
            					}
            				}
HXLINE( 171)				view = this1;
            			}
            			break;
            			case (int)9: {
HXLINE( 198)				 ::Dynamic elements = null();
HXDLIN( 198)				 ::haxe::io::Bytes buffer = this->buffer;
HXDLIN( 198)				::cpp::VirtualArray array = null();
HXDLIN( 198)				 ::openfl::_Vector::FloatVector vector = null();
HXDLIN( 198)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 198)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 198)				if (::hx::IsNull( byteoffset )) {
HXLINE( 198)					byteoffset = 0;
            				}
HXDLIN( 198)				 ::lime::utils::ArrayBufferView this1;
HXDLIN( 198)				if (::hx::IsNotNull( elements )) {
HXLINE( 198)					this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,9);
            				}
            				else {
HXLINE( 198)					if (::hx::IsNotNull( array )) {
HXLINE( 198)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,9);
HXDLIN( 198)						_this->byteOffset = 0;
HXDLIN( 198)						_this->length = array->get_length();
HXDLIN( 198)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 198)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 198)						_this->buffer = this2;
HXDLIN( 198)						_this->copyFromArray(array,null());
HXDLIN( 198)						this1 = _this;
            					}
            					else {
HXLINE( 198)						if (::hx::IsNotNull( vector )) {
HXLINE( 198)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,9);
HXDLIN( 198)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 198)							_this->byteOffset = 0;
HXDLIN( 198)							_this->length = array->get_length();
HXDLIN( 198)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 198)							 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 198)							_this->buffer = this2;
HXDLIN( 198)							_this->copyFromArray(array,null());
HXDLIN( 198)							this1 = _this;
            						}
            						else {
HXLINE( 198)							if (::hx::IsNotNull( view1 )) {
HXLINE( 198)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,9);
HXDLIN( 198)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 198)								int srcLength = view1->length;
HXDLIN( 198)								int srcByteOffset = view1->byteOffset;
HXDLIN( 198)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 198)								int elementSize = _this->bytesPerElement;
HXDLIN( 198)								if ((view1->type == _this->type)) {
HXLINE( 198)									int srcLength = srcData->length;
HXDLIN( 198)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 198)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 198)									_this->buffer = this1;
HXDLIN( 198)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 198)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 198)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 198)								_this->byteOffset = 0;
HXDLIN( 198)								_this->length = srcLength;
HXDLIN( 198)								this1 = _this;
            							}
            							else {
HXLINE( 198)								if (::hx::IsNotNull( buffer )) {
HXLINE( 198)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,9);
HXDLIN( 198)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 198)									if ((in_byteOffset < 0)) {
HXLINE( 198)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 198)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 198)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 198)									int bufferByteLength = buffer->length;
HXDLIN( 198)									int elementSize = _this->bytesPerElement;
HXDLIN( 198)									int newByteLength = bufferByteLength;
HXDLIN( 198)									if (::hx::IsNull( len )) {
HXLINE( 198)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 198)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 198)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 198)										if ((newByteLength < 0)) {
HXLINE( 198)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 198)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 198)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 198)										if ((newRange > bufferByteLength)) {
HXLINE( 198)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 198)									_this->buffer = buffer;
HXDLIN( 198)									_this->byteOffset = in_byteOffset;
HXDLIN( 198)									_this->byteLength = newByteLength;
HXDLIN( 198)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 198)									this1 = _this;
            								}
            								else {
HXLINE( 198)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Float64Array",8f,de,6b,1e)));
            								}
            							}
            						}
            					}
            				}
HXLINE( 171)				view = this1;
            			}
            			break;
            		}
HXLINE( 204)		return view;
            	}


HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferView_obj,subarray_lime_utils_UInt32Array,return )

 ::lime::utils::ArrayBufferView ArrayBufferView_obj::subarray_lime_utils_Float32Array(int begin, ::Dynamic end){
            	HX_GC_STACKFRAME(&_hx_pos_244a612994c6bd06_166_subarray_lime_utils_Float32Array)
HXLINE( 167)		if (::hx::IsNull( end )) {
HXLINE( 167)			end = this->length;
            		}
HXLINE( 168)		int len = (( (int)(end) ) - begin);
HXLINE( 169)		int byte_offset = ((begin * this->bytesPerElement) + this->byteOffset);
HXLINE( 171)		 ::lime::utils::ArrayBufferView view;
HXDLIN( 171)		switch((int)(this->type)){
            			case (int)0: {
HXLINE( 201)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("subarray on a blank ArrayBufferView",39,87,fd,19)));
            			}
            			break;
            			case (int)1: {
HXLINE( 174)				 ::Dynamic elements = null();
HXDLIN( 174)				 ::haxe::io::Bytes buffer = this->buffer;
HXDLIN( 174)				::cpp::VirtualArray array = null();
HXDLIN( 174)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 174)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 174)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 174)				if (::hx::IsNull( byteoffset )) {
HXLINE( 174)					byteoffset = 0;
            				}
HXDLIN( 174)				 ::lime::utils::ArrayBufferView this1;
HXDLIN( 174)				if (::hx::IsNotNull( elements )) {
HXLINE( 174)					this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,1);
            				}
            				else {
HXLINE( 174)					if (::hx::IsNotNull( array )) {
HXLINE( 174)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,1);
HXDLIN( 174)						_this->byteOffset = 0;
HXDLIN( 174)						_this->length = array->get_length();
HXDLIN( 174)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 174)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 174)						_this->buffer = this2;
HXDLIN( 174)						_this->copyFromArray(array,null());
HXDLIN( 174)						this1 = _this;
            					}
            					else {
HXLINE( 174)						if (::hx::IsNotNull( vector )) {
HXLINE( 174)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,1);
HXDLIN( 174)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 174)							_this->byteOffset = 0;
HXDLIN( 174)							_this->length = array->get_length();
HXDLIN( 174)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 174)							 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 174)							_this->buffer = this2;
HXDLIN( 174)							_this->copyFromArray(array,null());
HXDLIN( 174)							this1 = _this;
            						}
            						else {
HXLINE( 174)							if (::hx::IsNotNull( view1 )) {
HXLINE( 174)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,1);
HXDLIN( 174)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 174)								int srcLength = view1->length;
HXDLIN( 174)								int srcByteOffset = view1->byteOffset;
HXDLIN( 174)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 174)								int elementSize = _this->bytesPerElement;
HXDLIN( 174)								if ((view1->type == _this->type)) {
HXLINE( 174)									int srcLength = srcData->length;
HXDLIN( 174)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 174)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 174)									_this->buffer = this1;
HXDLIN( 174)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 174)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 174)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 174)								_this->byteOffset = 0;
HXDLIN( 174)								_this->length = srcLength;
HXDLIN( 174)								this1 = _this;
            							}
            							else {
HXLINE( 174)								if (::hx::IsNotNull( buffer )) {
HXLINE( 174)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,1);
HXDLIN( 174)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 174)									if ((in_byteOffset < 0)) {
HXLINE( 174)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 174)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 174)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 174)									int bufferByteLength = buffer->length;
HXDLIN( 174)									int elementSize = _this->bytesPerElement;
HXDLIN( 174)									int newByteLength = bufferByteLength;
HXDLIN( 174)									if (::hx::IsNull( len )) {
HXLINE( 174)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 174)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 174)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 174)										if ((newByteLength < 0)) {
HXLINE( 174)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 174)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 174)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 174)										if ((newRange > bufferByteLength)) {
HXLINE( 174)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 174)									_this->buffer = buffer;
HXDLIN( 174)									_this->byteOffset = in_byteOffset;
HXDLIN( 174)									_this->byteLength = newByteLength;
HXDLIN( 174)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 174)									this1 = _this;
            								}
            								else {
HXLINE( 174)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Int8Array",40,53,da,77)));
            								}
            							}
            						}
            					}
            				}
HXLINE( 171)				view = this1;
            			}
            			break;
            			case (int)2: {
HXLINE( 177)				 ::Dynamic elements = null();
HXDLIN( 177)				 ::haxe::io::Bytes buffer = this->buffer;
HXDLIN( 177)				::cpp::VirtualArray array = null();
HXDLIN( 177)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 177)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 177)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 177)				if (::hx::IsNull( byteoffset )) {
HXLINE( 177)					byteoffset = 0;
            				}
HXDLIN( 177)				 ::lime::utils::ArrayBufferView this1;
HXDLIN( 177)				if (::hx::IsNotNull( elements )) {
HXLINE( 177)					this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,2);
            				}
            				else {
HXLINE( 177)					if (::hx::IsNotNull( array )) {
HXLINE( 177)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,2);
HXDLIN( 177)						_this->byteOffset = 0;
HXDLIN( 177)						_this->length = array->get_length();
HXDLIN( 177)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 177)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 177)						_this->buffer = this2;
HXDLIN( 177)						_this->copyFromArray(array,null());
HXDLIN( 177)						this1 = _this;
            					}
            					else {
HXLINE( 177)						if (::hx::IsNotNull( vector )) {
HXLINE( 177)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,2);
HXDLIN( 177)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 177)							_this->byteOffset = 0;
HXDLIN( 177)							_this->length = array->get_length();
HXDLIN( 177)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 177)							 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 177)							_this->buffer = this2;
HXDLIN( 177)							_this->copyFromArray(array,null());
HXDLIN( 177)							this1 = _this;
            						}
            						else {
HXLINE( 177)							if (::hx::IsNotNull( view1 )) {
HXLINE( 177)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,2);
HXDLIN( 177)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 177)								int srcLength = view1->length;
HXDLIN( 177)								int srcByteOffset = view1->byteOffset;
HXDLIN( 177)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 177)								int elementSize = _this->bytesPerElement;
HXDLIN( 177)								if ((view1->type == _this->type)) {
HXLINE( 177)									int srcLength = srcData->length;
HXDLIN( 177)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 177)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 177)									_this->buffer = this1;
HXDLIN( 177)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 177)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 177)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 177)								_this->byteOffset = 0;
HXDLIN( 177)								_this->length = srcLength;
HXDLIN( 177)								this1 = _this;
            							}
            							else {
HXLINE( 177)								if (::hx::IsNotNull( buffer )) {
HXLINE( 177)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,2);
HXDLIN( 177)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 177)									if ((in_byteOffset < 0)) {
HXLINE( 177)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 177)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 177)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 177)									int bufferByteLength = buffer->length;
HXDLIN( 177)									int elementSize = _this->bytesPerElement;
HXDLIN( 177)									int newByteLength = bufferByteLength;
HXDLIN( 177)									if (::hx::IsNull( len )) {
HXLINE( 177)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 177)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 177)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 177)										if ((newByteLength < 0)) {
HXLINE( 177)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 177)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 177)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 177)										if ((newRange > bufferByteLength)) {
HXLINE( 177)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 177)									_this->buffer = buffer;
HXDLIN( 177)									_this->byteOffset = in_byteOffset;
HXDLIN( 177)									_this->byteLength = newByteLength;
HXDLIN( 177)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 177)									this1 = _this;
            								}
            								else {
HXLINE( 177)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Int16Array",95,b2,95,a7)));
            								}
            							}
            						}
            					}
            				}
HXLINE( 171)				view = this1;
            			}
            			break;
            			case (int)3: {
HXLINE( 180)				 ::Dynamic elements = null();
HXDLIN( 180)				 ::haxe::io::Bytes buffer = this->buffer;
HXDLIN( 180)				::cpp::VirtualArray array = null();
HXDLIN( 180)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 180)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 180)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 180)				if (::hx::IsNull( byteoffset )) {
HXLINE( 180)					byteoffset = 0;
            				}
HXDLIN( 180)				 ::lime::utils::ArrayBufferView this1;
HXDLIN( 180)				if (::hx::IsNotNull( elements )) {
HXLINE( 180)					this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,3);
            				}
            				else {
HXLINE( 180)					if (::hx::IsNotNull( array )) {
HXLINE( 180)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,3);
HXDLIN( 180)						_this->byteOffset = 0;
HXDLIN( 180)						_this->length = array->get_length();
HXDLIN( 180)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 180)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 180)						_this->buffer = this2;
HXDLIN( 180)						_this->copyFromArray(array,null());
HXDLIN( 180)						this1 = _this;
            					}
            					else {
HXLINE( 180)						if (::hx::IsNotNull( vector )) {
HXLINE( 180)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,3);
HXDLIN( 180)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 180)							_this->byteOffset = 0;
HXDLIN( 180)							_this->length = array->get_length();
HXDLIN( 180)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 180)							 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 180)							_this->buffer = this2;
HXDLIN( 180)							_this->copyFromArray(array,null());
HXDLIN( 180)							this1 = _this;
            						}
            						else {
HXLINE( 180)							if (::hx::IsNotNull( view1 )) {
HXLINE( 180)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,3);
HXDLIN( 180)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 180)								int srcLength = view1->length;
HXDLIN( 180)								int srcByteOffset = view1->byteOffset;
HXDLIN( 180)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 180)								int elementSize = _this->bytesPerElement;
HXDLIN( 180)								if ((view1->type == _this->type)) {
HXLINE( 180)									int srcLength = srcData->length;
HXDLIN( 180)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 180)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 180)									_this->buffer = this1;
HXDLIN( 180)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 180)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 180)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 180)								_this->byteOffset = 0;
HXDLIN( 180)								_this->length = srcLength;
HXDLIN( 180)								this1 = _this;
            							}
            							else {
HXLINE( 180)								if (::hx::IsNotNull( buffer )) {
HXLINE( 180)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,3);
HXDLIN( 180)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 180)									if ((in_byteOffset < 0)) {
HXLINE( 180)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 180)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 180)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 180)									int bufferByteLength = buffer->length;
HXDLIN( 180)									int elementSize = _this->bytesPerElement;
HXDLIN( 180)									int newByteLength = bufferByteLength;
HXDLIN( 180)									if (::hx::IsNull( len )) {
HXLINE( 180)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 180)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 180)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 180)										if ((newByteLength < 0)) {
HXLINE( 180)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 180)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 180)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 180)										if ((newRange > bufferByteLength)) {
HXLINE( 180)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 180)									_this->buffer = buffer;
HXDLIN( 180)									_this->byteOffset = in_byteOffset;
HXDLIN( 180)									_this->byteLength = newByteLength;
HXDLIN( 180)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 180)									this1 = _this;
            								}
            								else {
HXLINE( 180)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Int32Array",9b,2e,53,61)));
            								}
            							}
            						}
            					}
            				}
HXLINE( 171)				view = this1;
            			}
            			break;
            			case (int)4: {
HXLINE( 183)				 ::Dynamic elements = null();
HXDLIN( 183)				 ::haxe::io::Bytes buffer = this->buffer;
HXDLIN( 183)				::cpp::VirtualArray array = null();
HXDLIN( 183)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 183)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 183)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 183)				if (::hx::IsNull( byteoffset )) {
HXLINE( 183)					byteoffset = 0;
            				}
HXDLIN( 183)				 ::lime::utils::ArrayBufferView this1;
HXDLIN( 183)				if (::hx::IsNotNull( elements )) {
HXLINE( 183)					this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,4);
            				}
            				else {
HXLINE( 183)					if (::hx::IsNotNull( array )) {
HXLINE( 183)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 183)						_this->byteOffset = 0;
HXDLIN( 183)						_this->length = array->get_length();
HXDLIN( 183)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 183)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 183)						_this->buffer = this2;
HXDLIN( 183)						_this->copyFromArray(array,null());
HXDLIN( 183)						this1 = _this;
            					}
            					else {
HXLINE( 183)						if (::hx::IsNotNull( vector )) {
HXLINE( 183)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 183)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 183)							_this->byteOffset = 0;
HXDLIN( 183)							_this->length = array->get_length();
HXDLIN( 183)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 183)							 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 183)							_this->buffer = this2;
HXDLIN( 183)							_this->copyFromArray(array,null());
HXDLIN( 183)							this1 = _this;
            						}
            						else {
HXLINE( 183)							if (::hx::IsNotNull( view1 )) {
HXLINE( 183)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 183)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 183)								int srcLength = view1->length;
HXDLIN( 183)								int srcByteOffset = view1->byteOffset;
HXDLIN( 183)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 183)								int elementSize = _this->bytesPerElement;
HXDLIN( 183)								if ((view1->type == _this->type)) {
HXLINE( 183)									int srcLength = srcData->length;
HXDLIN( 183)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 183)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 183)									_this->buffer = this1;
HXDLIN( 183)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 183)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 183)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 183)								_this->byteOffset = 0;
HXDLIN( 183)								_this->length = srcLength;
HXDLIN( 183)								this1 = _this;
            							}
            							else {
HXLINE( 183)								if (::hx::IsNotNull( buffer )) {
HXLINE( 183)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 183)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 183)									if ((in_byteOffset < 0)) {
HXLINE( 183)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 183)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 183)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 183)									int bufferByteLength = buffer->length;
HXDLIN( 183)									int elementSize = _this->bytesPerElement;
HXDLIN( 183)									int newByteLength = bufferByteLength;
HXDLIN( 183)									if (::hx::IsNull( len )) {
HXLINE( 183)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 183)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 183)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 183)										if ((newByteLength < 0)) {
HXLINE( 183)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 183)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 183)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 183)										if ((newRange > bufferByteLength)) {
HXLINE( 183)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 183)									_this->buffer = buffer;
HXDLIN( 183)									_this->byteOffset = in_byteOffset;
HXDLIN( 183)									_this->byteLength = newByteLength;
HXDLIN( 183)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 183)									this1 = _this;
            								}
            								else {
HXLINE( 183)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt8Array",6b,44,d5,85)));
            								}
            							}
            						}
            					}
            				}
HXLINE( 171)				view = this1;
            			}
            			break;
            			case (int)5: {
HXLINE( 186)				 ::Dynamic elements = null();
HXDLIN( 186)				 ::haxe::io::Bytes buffer = this->buffer;
HXDLIN( 186)				::cpp::VirtualArray array = null();
HXDLIN( 186)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 186)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 186)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 186)				if (::hx::IsNull( byteoffset )) {
HXLINE( 186)					byteoffset = 0;
            				}
HXDLIN( 186)				 ::lime::utils::ArrayBufferView this1;
HXDLIN( 186)				if (::hx::IsNotNull( elements )) {
HXLINE( 186)					this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,5);
            				}
            				else {
HXLINE( 186)					if (::hx::IsNotNull( array )) {
HXLINE( 186)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,5);
HXDLIN( 186)						_this->byteOffset = 0;
HXDLIN( 186)						_this->length = array->get_length();
HXDLIN( 186)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 186)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 186)						_this->buffer = this2;
HXDLIN( 186)						_this->copyFromArray(array,null());
HXDLIN( 186)						this1 = _this;
            					}
            					else {
HXLINE( 186)						if (::hx::IsNotNull( vector )) {
HXLINE( 186)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,5);
HXDLIN( 186)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 186)							_this->byteOffset = 0;
HXDLIN( 186)							_this->length = array->get_length();
HXDLIN( 186)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 186)							 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 186)							_this->buffer = this2;
HXDLIN( 186)							_this->copyFromArray(array,null());
HXDLIN( 186)							this1 = _this;
            						}
            						else {
HXLINE( 186)							if (::hx::IsNotNull( view1 )) {
HXLINE( 186)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,5);
HXDLIN( 186)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 186)								int srcLength = view1->length;
HXDLIN( 186)								int srcByteOffset = view1->byteOffset;
HXDLIN( 186)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 186)								int elementSize = _this->bytesPerElement;
HXDLIN( 186)								if ((view1->type == _this->type)) {
HXLINE( 186)									int srcLength = srcData->length;
HXDLIN( 186)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 186)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 186)									_this->buffer = this1;
HXDLIN( 186)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 186)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 186)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 186)								_this->byteOffset = 0;
HXDLIN( 186)								_this->length = srcLength;
HXDLIN( 186)								this1 = _this;
            							}
            							else {
HXLINE( 186)								if (::hx::IsNotNull( buffer )) {
HXLINE( 186)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,5);
HXDLIN( 186)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 186)									if ((in_byteOffset < 0)) {
HXLINE( 186)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 186)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 186)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 186)									int bufferByteLength = buffer->length;
HXDLIN( 186)									int elementSize = _this->bytesPerElement;
HXDLIN( 186)									int newByteLength = bufferByteLength;
HXDLIN( 186)									if (::hx::IsNull( len )) {
HXLINE( 186)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 186)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 186)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 186)										if ((newByteLength < 0)) {
HXLINE( 186)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 186)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 186)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 186)										if ((newRange > bufferByteLength)) {
HXLINE( 186)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 186)									_this->buffer = buffer;
HXDLIN( 186)									_this->byteOffset = in_byteOffset;
HXDLIN( 186)									_this->byteLength = newByteLength;
HXDLIN( 186)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 186)									this1 = _this;
            								}
            								else {
HXLINE( 186)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt8ClampedArray",8d,06,77,13)));
            								}
            							}
            						}
            					}
            				}
HXLINE( 171)				view = this1;
            			}
            			break;
            			case (int)6: {
HXLINE( 189)				 ::Dynamic elements = null();
HXDLIN( 189)				 ::haxe::io::Bytes buffer = this->buffer;
HXDLIN( 189)				::cpp::VirtualArray array = null();
HXDLIN( 189)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 189)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 189)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 189)				if (::hx::IsNull( byteoffset )) {
HXLINE( 189)					byteoffset = 0;
            				}
HXDLIN( 189)				 ::lime::utils::ArrayBufferView this1;
HXDLIN( 189)				if (::hx::IsNotNull( elements )) {
HXLINE( 189)					this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,6);
            				}
            				else {
HXLINE( 189)					if (::hx::IsNotNull( array )) {
HXLINE( 189)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 189)						_this->byteOffset = 0;
HXDLIN( 189)						_this->length = array->get_length();
HXDLIN( 189)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 189)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 189)						_this->buffer = this2;
HXDLIN( 189)						_this->copyFromArray(array,null());
HXDLIN( 189)						this1 = _this;
            					}
            					else {
HXLINE( 189)						if (::hx::IsNotNull( vector )) {
HXLINE( 189)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 189)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 189)							_this->byteOffset = 0;
HXDLIN( 189)							_this->length = array->get_length();
HXDLIN( 189)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 189)							 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 189)							_this->buffer = this2;
HXDLIN( 189)							_this->copyFromArray(array,null());
HXDLIN( 189)							this1 = _this;
            						}
            						else {
HXLINE( 189)							if (::hx::IsNotNull( view1 )) {
HXLINE( 189)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 189)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 189)								int srcLength = view1->length;
HXDLIN( 189)								int srcByteOffset = view1->byteOffset;
HXDLIN( 189)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 189)								int elementSize = _this->bytesPerElement;
HXDLIN( 189)								if ((view1->type == _this->type)) {
HXLINE( 189)									int srcLength = srcData->length;
HXDLIN( 189)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 189)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 189)									_this->buffer = this1;
HXDLIN( 189)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 189)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 189)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 189)								_this->byteOffset = 0;
HXDLIN( 189)								_this->length = srcLength;
HXDLIN( 189)								this1 = _this;
            							}
            							else {
HXLINE( 189)								if (::hx::IsNotNull( buffer )) {
HXLINE( 189)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 189)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 189)									if ((in_byteOffset < 0)) {
HXLINE( 189)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 189)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 189)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 189)									int bufferByteLength = buffer->length;
HXDLIN( 189)									int elementSize = _this->bytesPerElement;
HXDLIN( 189)									int newByteLength = bufferByteLength;
HXDLIN( 189)									if (::hx::IsNull( len )) {
HXLINE( 189)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 189)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 189)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 189)										if ((newByteLength < 0)) {
HXLINE( 189)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 189)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 189)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 189)										if ((newRange > bufferByteLength)) {
HXLINE( 189)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 189)									_this->buffer = buffer;
HXDLIN( 189)									_this->byteOffset = in_byteOffset;
HXDLIN( 189)									_this->byteLength = newByteLength;
HXDLIN( 189)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 189)									this1 = _this;
            								}
            								else {
HXLINE( 189)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt16Array",0a,c7,2d,d5)));
            								}
            							}
            						}
            					}
            				}
HXLINE( 171)				view = this1;
            			}
            			break;
            			case (int)7: {
HXLINE( 192)				 ::Dynamic elements = null();
HXDLIN( 192)				 ::haxe::io::Bytes buffer = this->buffer;
HXDLIN( 192)				::cpp::VirtualArray array = null();
HXDLIN( 192)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 192)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 192)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 192)				if (::hx::IsNull( byteoffset )) {
HXLINE( 192)					byteoffset = 0;
            				}
HXDLIN( 192)				 ::lime::utils::ArrayBufferView this1;
HXDLIN( 192)				if (::hx::IsNotNull( elements )) {
HXLINE( 192)					this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,7);
            				}
            				else {
HXLINE( 192)					if (::hx::IsNotNull( array )) {
HXLINE( 192)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,7);
HXDLIN( 192)						_this->byteOffset = 0;
HXDLIN( 192)						_this->length = array->get_length();
HXDLIN( 192)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 192)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 192)						_this->buffer = this2;
HXDLIN( 192)						_this->copyFromArray(array,null());
HXDLIN( 192)						this1 = _this;
            					}
            					else {
HXLINE( 192)						if (::hx::IsNotNull( vector )) {
HXLINE( 192)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,7);
HXDLIN( 192)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 192)							_this->byteOffset = 0;
HXDLIN( 192)							_this->length = array->get_length();
HXDLIN( 192)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 192)							 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 192)							_this->buffer = this2;
HXDLIN( 192)							_this->copyFromArray(array,null());
HXDLIN( 192)							this1 = _this;
            						}
            						else {
HXLINE( 192)							if (::hx::IsNotNull( view1 )) {
HXLINE( 192)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,7);
HXDLIN( 192)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 192)								int srcLength = view1->length;
HXDLIN( 192)								int srcByteOffset = view1->byteOffset;
HXDLIN( 192)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 192)								int elementSize = _this->bytesPerElement;
HXDLIN( 192)								if ((view1->type == _this->type)) {
HXLINE( 192)									int srcLength = srcData->length;
HXDLIN( 192)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 192)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 192)									_this->buffer = this1;
HXDLIN( 192)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 192)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 192)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 192)								_this->byteOffset = 0;
HXDLIN( 192)								_this->length = srcLength;
HXDLIN( 192)								this1 = _this;
            							}
            							else {
HXLINE( 192)								if (::hx::IsNotNull( buffer )) {
HXLINE( 192)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,7);
HXDLIN( 192)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 192)									if ((in_byteOffset < 0)) {
HXLINE( 192)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 192)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 192)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 192)									int bufferByteLength = buffer->length;
HXDLIN( 192)									int elementSize = _this->bytesPerElement;
HXDLIN( 192)									int newByteLength = bufferByteLength;
HXDLIN( 192)									if (::hx::IsNull( len )) {
HXLINE( 192)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 192)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 192)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 192)										if ((newByteLength < 0)) {
HXLINE( 192)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 192)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 192)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 192)										if ((newRange > bufferByteLength)) {
HXLINE( 192)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 192)									_this->buffer = buffer;
HXDLIN( 192)									_this->byteOffset = in_byteOffset;
HXDLIN( 192)									_this->byteLength = newByteLength;
HXDLIN( 192)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 192)									this1 = _this;
            								}
            								else {
HXLINE( 192)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt32Array",10,43,eb,8e)));
            								}
            							}
            						}
            					}
            				}
HXLINE( 171)				view = this1;
            			}
            			break;
            			case (int)8: {
HXLINE( 195)				 ::Dynamic elements = null();
HXDLIN( 195)				 ::haxe::io::Bytes buffer = this->buffer;
HXDLIN( 195)				::cpp::VirtualArray array = null();
HXDLIN( 195)				 ::openfl::_Vector::FloatVector vector = null();
HXDLIN( 195)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 195)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 195)				if (::hx::IsNull( byteoffset )) {
HXLINE( 195)					byteoffset = 0;
            				}
HXDLIN( 195)				 ::lime::utils::ArrayBufferView this1;
HXDLIN( 195)				if (::hx::IsNotNull( elements )) {
HXLINE( 195)					this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,8);
            				}
            				else {
HXLINE( 195)					if (::hx::IsNotNull( array )) {
HXLINE( 195)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 195)						_this->byteOffset = 0;
HXDLIN( 195)						_this->length = array->get_length();
HXDLIN( 195)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 195)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 195)						_this->buffer = this2;
HXDLIN( 195)						_this->copyFromArray(array,null());
HXDLIN( 195)						this1 = _this;
            					}
            					else {
HXLINE( 195)						if (::hx::IsNotNull( vector )) {
HXLINE( 195)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 195)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 195)							_this->byteOffset = 0;
HXDLIN( 195)							_this->length = array->get_length();
HXDLIN( 195)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 195)							 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 195)							_this->buffer = this2;
HXDLIN( 195)							_this->copyFromArray(array,null());
HXDLIN( 195)							this1 = _this;
            						}
            						else {
HXLINE( 195)							if (::hx::IsNotNull( view1 )) {
HXLINE( 195)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 195)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 195)								int srcLength = view1->length;
HXDLIN( 195)								int srcByteOffset = view1->byteOffset;
HXDLIN( 195)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 195)								int elementSize = _this->bytesPerElement;
HXDLIN( 195)								if ((view1->type == _this->type)) {
HXLINE( 195)									int srcLength = srcData->length;
HXDLIN( 195)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 195)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 195)									_this->buffer = this1;
HXDLIN( 195)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 195)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 195)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 195)								_this->byteOffset = 0;
HXDLIN( 195)								_this->length = srcLength;
HXDLIN( 195)								this1 = _this;
            							}
            							else {
HXLINE( 195)								if (::hx::IsNotNull( buffer )) {
HXLINE( 195)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 195)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 195)									if ((in_byteOffset < 0)) {
HXLINE( 195)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 195)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 195)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 195)									int bufferByteLength = buffer->length;
HXDLIN( 195)									int elementSize = _this->bytesPerElement;
HXDLIN( 195)									int newByteLength = bufferByteLength;
HXDLIN( 195)									if (::hx::IsNull( len )) {
HXLINE( 195)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 195)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 195)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 195)										if ((newByteLength < 0)) {
HXLINE( 195)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 195)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 195)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 195)										if ((newRange > bufferByteLength)) {
HXLINE( 195)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 195)									_this->buffer = buffer;
HXDLIN( 195)									_this->byteOffset = in_byteOffset;
HXDLIN( 195)									_this->byteLength = newByteLength;
HXDLIN( 195)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 195)									this1 = _this;
            								}
            								else {
HXLINE( 195)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Float32Array",8e,c1,f4,d4)));
            								}
            							}
            						}
            					}
            				}
HXLINE( 171)				view = this1;
            			}
            			break;
            			case (int)9: {
HXLINE( 198)				 ::Dynamic elements = null();
HXDLIN( 198)				 ::haxe::io::Bytes buffer = this->buffer;
HXDLIN( 198)				::cpp::VirtualArray array = null();
HXDLIN( 198)				 ::openfl::_Vector::FloatVector vector = null();
HXDLIN( 198)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 198)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 198)				if (::hx::IsNull( byteoffset )) {
HXLINE( 198)					byteoffset = 0;
            				}
HXDLIN( 198)				 ::lime::utils::ArrayBufferView this1;
HXDLIN( 198)				if (::hx::IsNotNull( elements )) {
HXLINE( 198)					this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,9);
            				}
            				else {
HXLINE( 198)					if (::hx::IsNotNull( array )) {
HXLINE( 198)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,9);
HXDLIN( 198)						_this->byteOffset = 0;
HXDLIN( 198)						_this->length = array->get_length();
HXDLIN( 198)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 198)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 198)						_this->buffer = this2;
HXDLIN( 198)						_this->copyFromArray(array,null());
HXDLIN( 198)						this1 = _this;
            					}
            					else {
HXLINE( 198)						if (::hx::IsNotNull( vector )) {
HXLINE( 198)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,9);
HXDLIN( 198)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 198)							_this->byteOffset = 0;
HXDLIN( 198)							_this->length = array->get_length();
HXDLIN( 198)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 198)							 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 198)							_this->buffer = this2;
HXDLIN( 198)							_this->copyFromArray(array,null());
HXDLIN( 198)							this1 = _this;
            						}
            						else {
HXLINE( 198)							if (::hx::IsNotNull( view1 )) {
HXLINE( 198)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,9);
HXDLIN( 198)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 198)								int srcLength = view1->length;
HXDLIN( 198)								int srcByteOffset = view1->byteOffset;
HXDLIN( 198)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 198)								int elementSize = _this->bytesPerElement;
HXDLIN( 198)								if ((view1->type == _this->type)) {
HXLINE( 198)									int srcLength = srcData->length;
HXDLIN( 198)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 198)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 198)									_this->buffer = this1;
HXDLIN( 198)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 198)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 198)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 198)								_this->byteOffset = 0;
HXDLIN( 198)								_this->length = srcLength;
HXDLIN( 198)								this1 = _this;
            							}
            							else {
HXLINE( 198)								if (::hx::IsNotNull( buffer )) {
HXLINE( 198)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,9);
HXDLIN( 198)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 198)									if ((in_byteOffset < 0)) {
HXLINE( 198)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 198)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 198)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 198)									int bufferByteLength = buffer->length;
HXDLIN( 198)									int elementSize = _this->bytesPerElement;
HXDLIN( 198)									int newByteLength = bufferByteLength;
HXDLIN( 198)									if (::hx::IsNull( len )) {
HXLINE( 198)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 198)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 198)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 198)										if ((newByteLength < 0)) {
HXLINE( 198)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 198)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 198)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 198)										if ((newRange > bufferByteLength)) {
HXLINE( 198)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 198)									_this->buffer = buffer;
HXDLIN( 198)									_this->byteOffset = in_byteOffset;
HXDLIN( 198)									_this->byteLength = newByteLength;
HXDLIN( 198)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 198)									this1 = _this;
            								}
            								else {
HXLINE( 198)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Float64Array",8f,de,6b,1e)));
            								}
            							}
            						}
            					}
            				}
HXLINE( 171)				view = this1;
            			}
            			break;
            		}
HXLINE( 204)		return view;
            	}


HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferView_obj,subarray_lime_utils_Float32Array,return )

 ::lime::utils::ArrayBufferView ArrayBufferView_obj::subarray_lime_utils_UInt8Array(int begin, ::Dynamic end){
            	HX_GC_STACKFRAME(&_hx_pos_244a612994c6bd06_166_subarray_lime_utils_UInt8Array)
HXLINE( 167)		if (::hx::IsNull( end )) {
HXLINE( 167)			end = this->length;
            		}
HXLINE( 168)		int len = (( (int)(end) ) - begin);
HXLINE( 169)		int byte_offset = ((begin * this->bytesPerElement) + this->byteOffset);
HXLINE( 171)		 ::lime::utils::ArrayBufferView view;
HXDLIN( 171)		switch((int)(this->type)){
            			case (int)0: {
HXLINE( 201)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("subarray on a blank ArrayBufferView",39,87,fd,19)));
            			}
            			break;
            			case (int)1: {
HXLINE( 174)				 ::Dynamic elements = null();
HXDLIN( 174)				 ::haxe::io::Bytes buffer = this->buffer;
HXDLIN( 174)				::cpp::VirtualArray array = null();
HXDLIN( 174)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 174)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 174)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 174)				if (::hx::IsNull( byteoffset )) {
HXLINE( 174)					byteoffset = 0;
            				}
HXDLIN( 174)				 ::lime::utils::ArrayBufferView this1;
HXDLIN( 174)				if (::hx::IsNotNull( elements )) {
HXLINE( 174)					this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,1);
            				}
            				else {
HXLINE( 174)					if (::hx::IsNotNull( array )) {
HXLINE( 174)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,1);
HXDLIN( 174)						_this->byteOffset = 0;
HXDLIN( 174)						_this->length = array->get_length();
HXDLIN( 174)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 174)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 174)						_this->buffer = this2;
HXDLIN( 174)						_this->copyFromArray(array,null());
HXDLIN( 174)						this1 = _this;
            					}
            					else {
HXLINE( 174)						if (::hx::IsNotNull( vector )) {
HXLINE( 174)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,1);
HXDLIN( 174)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 174)							_this->byteOffset = 0;
HXDLIN( 174)							_this->length = array->get_length();
HXDLIN( 174)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 174)							 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 174)							_this->buffer = this2;
HXDLIN( 174)							_this->copyFromArray(array,null());
HXDLIN( 174)							this1 = _this;
            						}
            						else {
HXLINE( 174)							if (::hx::IsNotNull( view1 )) {
HXLINE( 174)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,1);
HXDLIN( 174)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 174)								int srcLength = view1->length;
HXDLIN( 174)								int srcByteOffset = view1->byteOffset;
HXDLIN( 174)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 174)								int elementSize = _this->bytesPerElement;
HXDLIN( 174)								if ((view1->type == _this->type)) {
HXLINE( 174)									int srcLength = srcData->length;
HXDLIN( 174)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 174)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 174)									_this->buffer = this1;
HXDLIN( 174)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 174)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 174)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 174)								_this->byteOffset = 0;
HXDLIN( 174)								_this->length = srcLength;
HXDLIN( 174)								this1 = _this;
            							}
            							else {
HXLINE( 174)								if (::hx::IsNotNull( buffer )) {
HXLINE( 174)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,1);
HXDLIN( 174)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 174)									if ((in_byteOffset < 0)) {
HXLINE( 174)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 174)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 174)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 174)									int bufferByteLength = buffer->length;
HXDLIN( 174)									int elementSize = _this->bytesPerElement;
HXDLIN( 174)									int newByteLength = bufferByteLength;
HXDLIN( 174)									if (::hx::IsNull( len )) {
HXLINE( 174)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 174)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 174)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 174)										if ((newByteLength < 0)) {
HXLINE( 174)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 174)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 174)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 174)										if ((newRange > bufferByteLength)) {
HXLINE( 174)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 174)									_this->buffer = buffer;
HXDLIN( 174)									_this->byteOffset = in_byteOffset;
HXDLIN( 174)									_this->byteLength = newByteLength;
HXDLIN( 174)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 174)									this1 = _this;
            								}
            								else {
HXLINE( 174)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Int8Array",40,53,da,77)));
            								}
            							}
            						}
            					}
            				}
HXLINE( 171)				view = this1;
            			}
            			break;
            			case (int)2: {
HXLINE( 177)				 ::Dynamic elements = null();
HXDLIN( 177)				 ::haxe::io::Bytes buffer = this->buffer;
HXDLIN( 177)				::cpp::VirtualArray array = null();
HXDLIN( 177)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 177)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 177)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 177)				if (::hx::IsNull( byteoffset )) {
HXLINE( 177)					byteoffset = 0;
            				}
HXDLIN( 177)				 ::lime::utils::ArrayBufferView this1;
HXDLIN( 177)				if (::hx::IsNotNull( elements )) {
HXLINE( 177)					this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,2);
            				}
            				else {
HXLINE( 177)					if (::hx::IsNotNull( array )) {
HXLINE( 177)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,2);
HXDLIN( 177)						_this->byteOffset = 0;
HXDLIN( 177)						_this->length = array->get_length();
HXDLIN( 177)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 177)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 177)						_this->buffer = this2;
HXDLIN( 177)						_this->copyFromArray(array,null());
HXDLIN( 177)						this1 = _this;
            					}
            					else {
HXLINE( 177)						if (::hx::IsNotNull( vector )) {
HXLINE( 177)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,2);
HXDLIN( 177)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 177)							_this->byteOffset = 0;
HXDLIN( 177)							_this->length = array->get_length();
HXDLIN( 177)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 177)							 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 177)							_this->buffer = this2;
HXDLIN( 177)							_this->copyFromArray(array,null());
HXDLIN( 177)							this1 = _this;
            						}
            						else {
HXLINE( 177)							if (::hx::IsNotNull( view1 )) {
HXLINE( 177)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,2);
HXDLIN( 177)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 177)								int srcLength = view1->length;
HXDLIN( 177)								int srcByteOffset = view1->byteOffset;
HXDLIN( 177)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 177)								int elementSize = _this->bytesPerElement;
HXDLIN( 177)								if ((view1->type == _this->type)) {
HXLINE( 177)									int srcLength = srcData->length;
HXDLIN( 177)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 177)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 177)									_this->buffer = this1;
HXDLIN( 177)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 177)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 177)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 177)								_this->byteOffset = 0;
HXDLIN( 177)								_this->length = srcLength;
HXDLIN( 177)								this1 = _this;
            							}
            							else {
HXLINE( 177)								if (::hx::IsNotNull( buffer )) {
HXLINE( 177)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,2);
HXDLIN( 177)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 177)									if ((in_byteOffset < 0)) {
HXLINE( 177)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 177)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 177)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 177)									int bufferByteLength = buffer->length;
HXDLIN( 177)									int elementSize = _this->bytesPerElement;
HXDLIN( 177)									int newByteLength = bufferByteLength;
HXDLIN( 177)									if (::hx::IsNull( len )) {
HXLINE( 177)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 177)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 177)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 177)										if ((newByteLength < 0)) {
HXLINE( 177)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 177)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 177)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 177)										if ((newRange > bufferByteLength)) {
HXLINE( 177)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 177)									_this->buffer = buffer;
HXDLIN( 177)									_this->byteOffset = in_byteOffset;
HXDLIN( 177)									_this->byteLength = newByteLength;
HXDLIN( 177)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 177)									this1 = _this;
            								}
            								else {
HXLINE( 177)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Int16Array",95,b2,95,a7)));
            								}
            							}
            						}
            					}
            				}
HXLINE( 171)				view = this1;
            			}
            			break;
            			case (int)3: {
HXLINE( 180)				 ::Dynamic elements = null();
HXDLIN( 180)				 ::haxe::io::Bytes buffer = this->buffer;
HXDLIN( 180)				::cpp::VirtualArray array = null();
HXDLIN( 180)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 180)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 180)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 180)				if (::hx::IsNull( byteoffset )) {
HXLINE( 180)					byteoffset = 0;
            				}
HXDLIN( 180)				 ::lime::utils::ArrayBufferView this1;
HXDLIN( 180)				if (::hx::IsNotNull( elements )) {
HXLINE( 180)					this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,3);
            				}
            				else {
HXLINE( 180)					if (::hx::IsNotNull( array )) {
HXLINE( 180)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,3);
HXDLIN( 180)						_this->byteOffset = 0;
HXDLIN( 180)						_this->length = array->get_length();
HXDLIN( 180)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 180)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 180)						_this->buffer = this2;
HXDLIN( 180)						_this->copyFromArray(array,null());
HXDLIN( 180)						this1 = _this;
            					}
            					else {
HXLINE( 180)						if (::hx::IsNotNull( vector )) {
HXLINE( 180)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,3);
HXDLIN( 180)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 180)							_this->byteOffset = 0;
HXDLIN( 180)							_this->length = array->get_length();
HXDLIN( 180)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 180)							 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 180)							_this->buffer = this2;
HXDLIN( 180)							_this->copyFromArray(array,null());
HXDLIN( 180)							this1 = _this;
            						}
            						else {
HXLINE( 180)							if (::hx::IsNotNull( view1 )) {
HXLINE( 180)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,3);
HXDLIN( 180)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 180)								int srcLength = view1->length;
HXDLIN( 180)								int srcByteOffset = view1->byteOffset;
HXDLIN( 180)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 180)								int elementSize = _this->bytesPerElement;
HXDLIN( 180)								if ((view1->type == _this->type)) {
HXLINE( 180)									int srcLength = srcData->length;
HXDLIN( 180)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 180)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 180)									_this->buffer = this1;
HXDLIN( 180)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 180)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 180)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 180)								_this->byteOffset = 0;
HXDLIN( 180)								_this->length = srcLength;
HXDLIN( 180)								this1 = _this;
            							}
            							else {
HXLINE( 180)								if (::hx::IsNotNull( buffer )) {
HXLINE( 180)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,3);
HXDLIN( 180)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 180)									if ((in_byteOffset < 0)) {
HXLINE( 180)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 180)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 180)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 180)									int bufferByteLength = buffer->length;
HXDLIN( 180)									int elementSize = _this->bytesPerElement;
HXDLIN( 180)									int newByteLength = bufferByteLength;
HXDLIN( 180)									if (::hx::IsNull( len )) {
HXLINE( 180)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 180)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 180)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 180)										if ((newByteLength < 0)) {
HXLINE( 180)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 180)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 180)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 180)										if ((newRange > bufferByteLength)) {
HXLINE( 180)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 180)									_this->buffer = buffer;
HXDLIN( 180)									_this->byteOffset = in_byteOffset;
HXDLIN( 180)									_this->byteLength = newByteLength;
HXDLIN( 180)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 180)									this1 = _this;
            								}
            								else {
HXLINE( 180)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Int32Array",9b,2e,53,61)));
            								}
            							}
            						}
            					}
            				}
HXLINE( 171)				view = this1;
            			}
            			break;
            			case (int)4: {
HXLINE( 183)				 ::Dynamic elements = null();
HXDLIN( 183)				 ::haxe::io::Bytes buffer = this->buffer;
HXDLIN( 183)				::cpp::VirtualArray array = null();
HXDLIN( 183)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 183)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 183)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 183)				if (::hx::IsNull( byteoffset )) {
HXLINE( 183)					byteoffset = 0;
            				}
HXDLIN( 183)				 ::lime::utils::ArrayBufferView this1;
HXDLIN( 183)				if (::hx::IsNotNull( elements )) {
HXLINE( 183)					this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,4);
            				}
            				else {
HXLINE( 183)					if (::hx::IsNotNull( array )) {
HXLINE( 183)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 183)						_this->byteOffset = 0;
HXDLIN( 183)						_this->length = array->get_length();
HXDLIN( 183)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 183)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 183)						_this->buffer = this2;
HXDLIN( 183)						_this->copyFromArray(array,null());
HXDLIN( 183)						this1 = _this;
            					}
            					else {
HXLINE( 183)						if (::hx::IsNotNull( vector )) {
HXLINE( 183)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 183)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 183)							_this->byteOffset = 0;
HXDLIN( 183)							_this->length = array->get_length();
HXDLIN( 183)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 183)							 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 183)							_this->buffer = this2;
HXDLIN( 183)							_this->copyFromArray(array,null());
HXDLIN( 183)							this1 = _this;
            						}
            						else {
HXLINE( 183)							if (::hx::IsNotNull( view1 )) {
HXLINE( 183)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 183)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 183)								int srcLength = view1->length;
HXDLIN( 183)								int srcByteOffset = view1->byteOffset;
HXDLIN( 183)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 183)								int elementSize = _this->bytesPerElement;
HXDLIN( 183)								if ((view1->type == _this->type)) {
HXLINE( 183)									int srcLength = srcData->length;
HXDLIN( 183)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 183)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 183)									_this->buffer = this1;
HXDLIN( 183)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 183)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 183)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 183)								_this->byteOffset = 0;
HXDLIN( 183)								_this->length = srcLength;
HXDLIN( 183)								this1 = _this;
            							}
            							else {
HXLINE( 183)								if (::hx::IsNotNull( buffer )) {
HXLINE( 183)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 183)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 183)									if ((in_byteOffset < 0)) {
HXLINE( 183)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 183)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 183)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 183)									int bufferByteLength = buffer->length;
HXDLIN( 183)									int elementSize = _this->bytesPerElement;
HXDLIN( 183)									int newByteLength = bufferByteLength;
HXDLIN( 183)									if (::hx::IsNull( len )) {
HXLINE( 183)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 183)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 183)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 183)										if ((newByteLength < 0)) {
HXLINE( 183)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 183)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 183)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 183)										if ((newRange > bufferByteLength)) {
HXLINE( 183)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 183)									_this->buffer = buffer;
HXDLIN( 183)									_this->byteOffset = in_byteOffset;
HXDLIN( 183)									_this->byteLength = newByteLength;
HXDLIN( 183)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 183)									this1 = _this;
            								}
            								else {
HXLINE( 183)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt8Array",6b,44,d5,85)));
            								}
            							}
            						}
            					}
            				}
HXLINE( 171)				view = this1;
            			}
            			break;
            			case (int)5: {
HXLINE( 186)				 ::Dynamic elements = null();
HXDLIN( 186)				 ::haxe::io::Bytes buffer = this->buffer;
HXDLIN( 186)				::cpp::VirtualArray array = null();
HXDLIN( 186)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 186)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 186)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 186)				if (::hx::IsNull( byteoffset )) {
HXLINE( 186)					byteoffset = 0;
            				}
HXDLIN( 186)				 ::lime::utils::ArrayBufferView this1;
HXDLIN( 186)				if (::hx::IsNotNull( elements )) {
HXLINE( 186)					this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,5);
            				}
            				else {
HXLINE( 186)					if (::hx::IsNotNull( array )) {
HXLINE( 186)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,5);
HXDLIN( 186)						_this->byteOffset = 0;
HXDLIN( 186)						_this->length = array->get_length();
HXDLIN( 186)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 186)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 186)						_this->buffer = this2;
HXDLIN( 186)						_this->copyFromArray(array,null());
HXDLIN( 186)						this1 = _this;
            					}
            					else {
HXLINE( 186)						if (::hx::IsNotNull( vector )) {
HXLINE( 186)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,5);
HXDLIN( 186)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 186)							_this->byteOffset = 0;
HXDLIN( 186)							_this->length = array->get_length();
HXDLIN( 186)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 186)							 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 186)							_this->buffer = this2;
HXDLIN( 186)							_this->copyFromArray(array,null());
HXDLIN( 186)							this1 = _this;
            						}
            						else {
HXLINE( 186)							if (::hx::IsNotNull( view1 )) {
HXLINE( 186)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,5);
HXDLIN( 186)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 186)								int srcLength = view1->length;
HXDLIN( 186)								int srcByteOffset = view1->byteOffset;
HXDLIN( 186)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 186)								int elementSize = _this->bytesPerElement;
HXDLIN( 186)								if ((view1->type == _this->type)) {
HXLINE( 186)									int srcLength = srcData->length;
HXDLIN( 186)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 186)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 186)									_this->buffer = this1;
HXDLIN( 186)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 186)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 186)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 186)								_this->byteOffset = 0;
HXDLIN( 186)								_this->length = srcLength;
HXDLIN( 186)								this1 = _this;
            							}
            							else {
HXLINE( 186)								if (::hx::IsNotNull( buffer )) {
HXLINE( 186)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,5);
HXDLIN( 186)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 186)									if ((in_byteOffset < 0)) {
HXLINE( 186)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 186)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 186)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 186)									int bufferByteLength = buffer->length;
HXDLIN( 186)									int elementSize = _this->bytesPerElement;
HXDLIN( 186)									int newByteLength = bufferByteLength;
HXDLIN( 186)									if (::hx::IsNull( len )) {
HXLINE( 186)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 186)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 186)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 186)										if ((newByteLength < 0)) {
HXLINE( 186)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 186)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 186)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 186)										if ((newRange > bufferByteLength)) {
HXLINE( 186)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 186)									_this->buffer = buffer;
HXDLIN( 186)									_this->byteOffset = in_byteOffset;
HXDLIN( 186)									_this->byteLength = newByteLength;
HXDLIN( 186)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 186)									this1 = _this;
            								}
            								else {
HXLINE( 186)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt8ClampedArray",8d,06,77,13)));
            								}
            							}
            						}
            					}
            				}
HXLINE( 171)				view = this1;
            			}
            			break;
            			case (int)6: {
HXLINE( 189)				 ::Dynamic elements = null();
HXDLIN( 189)				 ::haxe::io::Bytes buffer = this->buffer;
HXDLIN( 189)				::cpp::VirtualArray array = null();
HXDLIN( 189)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 189)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 189)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 189)				if (::hx::IsNull( byteoffset )) {
HXLINE( 189)					byteoffset = 0;
            				}
HXDLIN( 189)				 ::lime::utils::ArrayBufferView this1;
HXDLIN( 189)				if (::hx::IsNotNull( elements )) {
HXLINE( 189)					this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,6);
            				}
            				else {
HXLINE( 189)					if (::hx::IsNotNull( array )) {
HXLINE( 189)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 189)						_this->byteOffset = 0;
HXDLIN( 189)						_this->length = array->get_length();
HXDLIN( 189)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 189)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 189)						_this->buffer = this2;
HXDLIN( 189)						_this->copyFromArray(array,null());
HXDLIN( 189)						this1 = _this;
            					}
            					else {
HXLINE( 189)						if (::hx::IsNotNull( vector )) {
HXLINE( 189)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 189)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 189)							_this->byteOffset = 0;
HXDLIN( 189)							_this->length = array->get_length();
HXDLIN( 189)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 189)							 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 189)							_this->buffer = this2;
HXDLIN( 189)							_this->copyFromArray(array,null());
HXDLIN( 189)							this1 = _this;
            						}
            						else {
HXLINE( 189)							if (::hx::IsNotNull( view1 )) {
HXLINE( 189)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 189)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 189)								int srcLength = view1->length;
HXDLIN( 189)								int srcByteOffset = view1->byteOffset;
HXDLIN( 189)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 189)								int elementSize = _this->bytesPerElement;
HXDLIN( 189)								if ((view1->type == _this->type)) {
HXLINE( 189)									int srcLength = srcData->length;
HXDLIN( 189)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 189)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 189)									_this->buffer = this1;
HXDLIN( 189)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 189)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 189)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 189)								_this->byteOffset = 0;
HXDLIN( 189)								_this->length = srcLength;
HXDLIN( 189)								this1 = _this;
            							}
            							else {
HXLINE( 189)								if (::hx::IsNotNull( buffer )) {
HXLINE( 189)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 189)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 189)									if ((in_byteOffset < 0)) {
HXLINE( 189)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 189)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 189)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 189)									int bufferByteLength = buffer->length;
HXDLIN( 189)									int elementSize = _this->bytesPerElement;
HXDLIN( 189)									int newByteLength = bufferByteLength;
HXDLIN( 189)									if (::hx::IsNull( len )) {
HXLINE( 189)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 189)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 189)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 189)										if ((newByteLength < 0)) {
HXLINE( 189)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 189)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 189)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 189)										if ((newRange > bufferByteLength)) {
HXLINE( 189)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 189)									_this->buffer = buffer;
HXDLIN( 189)									_this->byteOffset = in_byteOffset;
HXDLIN( 189)									_this->byteLength = newByteLength;
HXDLIN( 189)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 189)									this1 = _this;
            								}
            								else {
HXLINE( 189)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt16Array",0a,c7,2d,d5)));
            								}
            							}
            						}
            					}
            				}
HXLINE( 171)				view = this1;
            			}
            			break;
            			case (int)7: {
HXLINE( 192)				 ::Dynamic elements = null();
HXDLIN( 192)				 ::haxe::io::Bytes buffer = this->buffer;
HXDLIN( 192)				::cpp::VirtualArray array = null();
HXDLIN( 192)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 192)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 192)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 192)				if (::hx::IsNull( byteoffset )) {
HXLINE( 192)					byteoffset = 0;
            				}
HXDLIN( 192)				 ::lime::utils::ArrayBufferView this1;
HXDLIN( 192)				if (::hx::IsNotNull( elements )) {
HXLINE( 192)					this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,7);
            				}
            				else {
HXLINE( 192)					if (::hx::IsNotNull( array )) {
HXLINE( 192)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,7);
HXDLIN( 192)						_this->byteOffset = 0;
HXDLIN( 192)						_this->length = array->get_length();
HXDLIN( 192)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 192)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 192)						_this->buffer = this2;
HXDLIN( 192)						_this->copyFromArray(array,null());
HXDLIN( 192)						this1 = _this;
            					}
            					else {
HXLINE( 192)						if (::hx::IsNotNull( vector )) {
HXLINE( 192)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,7);
HXDLIN( 192)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 192)							_this->byteOffset = 0;
HXDLIN( 192)							_this->length = array->get_length();
HXDLIN( 192)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 192)							 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 192)							_this->buffer = this2;
HXDLIN( 192)							_this->copyFromArray(array,null());
HXDLIN( 192)							this1 = _this;
            						}
            						else {
HXLINE( 192)							if (::hx::IsNotNull( view1 )) {
HXLINE( 192)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,7);
HXDLIN( 192)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 192)								int srcLength = view1->length;
HXDLIN( 192)								int srcByteOffset = view1->byteOffset;
HXDLIN( 192)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 192)								int elementSize = _this->bytesPerElement;
HXDLIN( 192)								if ((view1->type == _this->type)) {
HXLINE( 192)									int srcLength = srcData->length;
HXDLIN( 192)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 192)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 192)									_this->buffer = this1;
HXDLIN( 192)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 192)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 192)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 192)								_this->byteOffset = 0;
HXDLIN( 192)								_this->length = srcLength;
HXDLIN( 192)								this1 = _this;
            							}
            							else {
HXLINE( 192)								if (::hx::IsNotNull( buffer )) {
HXLINE( 192)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,7);
HXDLIN( 192)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 192)									if ((in_byteOffset < 0)) {
HXLINE( 192)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 192)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 192)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 192)									int bufferByteLength = buffer->length;
HXDLIN( 192)									int elementSize = _this->bytesPerElement;
HXDLIN( 192)									int newByteLength = bufferByteLength;
HXDLIN( 192)									if (::hx::IsNull( len )) {
HXLINE( 192)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 192)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 192)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 192)										if ((newByteLength < 0)) {
HXLINE( 192)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 192)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 192)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 192)										if ((newRange > bufferByteLength)) {
HXLINE( 192)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 192)									_this->buffer = buffer;
HXDLIN( 192)									_this->byteOffset = in_byteOffset;
HXDLIN( 192)									_this->byteLength = newByteLength;
HXDLIN( 192)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 192)									this1 = _this;
            								}
            								else {
HXLINE( 192)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt32Array",10,43,eb,8e)));
            								}
            							}
            						}
            					}
            				}
HXLINE( 171)				view = this1;
            			}
            			break;
            			case (int)8: {
HXLINE( 195)				 ::Dynamic elements = null();
HXDLIN( 195)				 ::haxe::io::Bytes buffer = this->buffer;
HXDLIN( 195)				::cpp::VirtualArray array = null();
HXDLIN( 195)				 ::openfl::_Vector::FloatVector vector = null();
HXDLIN( 195)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 195)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 195)				if (::hx::IsNull( byteoffset )) {
HXLINE( 195)					byteoffset = 0;
            				}
HXDLIN( 195)				 ::lime::utils::ArrayBufferView this1;
HXDLIN( 195)				if (::hx::IsNotNull( elements )) {
HXLINE( 195)					this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,8);
            				}
            				else {
HXLINE( 195)					if (::hx::IsNotNull( array )) {
HXLINE( 195)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 195)						_this->byteOffset = 0;
HXDLIN( 195)						_this->length = array->get_length();
HXDLIN( 195)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 195)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 195)						_this->buffer = this2;
HXDLIN( 195)						_this->copyFromArray(array,null());
HXDLIN( 195)						this1 = _this;
            					}
            					else {
HXLINE( 195)						if (::hx::IsNotNull( vector )) {
HXLINE( 195)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 195)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 195)							_this->byteOffset = 0;
HXDLIN( 195)							_this->length = array->get_length();
HXDLIN( 195)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 195)							 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 195)							_this->buffer = this2;
HXDLIN( 195)							_this->copyFromArray(array,null());
HXDLIN( 195)							this1 = _this;
            						}
            						else {
HXLINE( 195)							if (::hx::IsNotNull( view1 )) {
HXLINE( 195)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 195)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 195)								int srcLength = view1->length;
HXDLIN( 195)								int srcByteOffset = view1->byteOffset;
HXDLIN( 195)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 195)								int elementSize = _this->bytesPerElement;
HXDLIN( 195)								if ((view1->type == _this->type)) {
HXLINE( 195)									int srcLength = srcData->length;
HXDLIN( 195)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 195)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 195)									_this->buffer = this1;
HXDLIN( 195)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 195)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 195)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 195)								_this->byteOffset = 0;
HXDLIN( 195)								_this->length = srcLength;
HXDLIN( 195)								this1 = _this;
            							}
            							else {
HXLINE( 195)								if (::hx::IsNotNull( buffer )) {
HXLINE( 195)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 195)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 195)									if ((in_byteOffset < 0)) {
HXLINE( 195)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 195)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 195)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 195)									int bufferByteLength = buffer->length;
HXDLIN( 195)									int elementSize = _this->bytesPerElement;
HXDLIN( 195)									int newByteLength = bufferByteLength;
HXDLIN( 195)									if (::hx::IsNull( len )) {
HXLINE( 195)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 195)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 195)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 195)										if ((newByteLength < 0)) {
HXLINE( 195)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 195)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 195)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 195)										if ((newRange > bufferByteLength)) {
HXLINE( 195)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 195)									_this->buffer = buffer;
HXDLIN( 195)									_this->byteOffset = in_byteOffset;
HXDLIN( 195)									_this->byteLength = newByteLength;
HXDLIN( 195)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 195)									this1 = _this;
            								}
            								else {
HXLINE( 195)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Float32Array",8e,c1,f4,d4)));
            								}
            							}
            						}
            					}
            				}
HXLINE( 171)				view = this1;
            			}
            			break;
            			case (int)9: {
HXLINE( 198)				 ::Dynamic elements = null();
HXDLIN( 198)				 ::haxe::io::Bytes buffer = this->buffer;
HXDLIN( 198)				::cpp::VirtualArray array = null();
HXDLIN( 198)				 ::openfl::_Vector::FloatVector vector = null();
HXDLIN( 198)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 198)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 198)				if (::hx::IsNull( byteoffset )) {
HXLINE( 198)					byteoffset = 0;
            				}
HXDLIN( 198)				 ::lime::utils::ArrayBufferView this1;
HXDLIN( 198)				if (::hx::IsNotNull( elements )) {
HXLINE( 198)					this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,9);
            				}
            				else {
HXLINE( 198)					if (::hx::IsNotNull( array )) {
HXLINE( 198)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,9);
HXDLIN( 198)						_this->byteOffset = 0;
HXDLIN( 198)						_this->length = array->get_length();
HXDLIN( 198)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 198)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 198)						_this->buffer = this2;
HXDLIN( 198)						_this->copyFromArray(array,null());
HXDLIN( 198)						this1 = _this;
            					}
            					else {
HXLINE( 198)						if (::hx::IsNotNull( vector )) {
HXLINE( 198)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,9);
HXDLIN( 198)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 198)							_this->byteOffset = 0;
HXDLIN( 198)							_this->length = array->get_length();
HXDLIN( 198)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 198)							 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 198)							_this->buffer = this2;
HXDLIN( 198)							_this->copyFromArray(array,null());
HXDLIN( 198)							this1 = _this;
            						}
            						else {
HXLINE( 198)							if (::hx::IsNotNull( view1 )) {
HXLINE( 198)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,9);
HXDLIN( 198)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 198)								int srcLength = view1->length;
HXDLIN( 198)								int srcByteOffset = view1->byteOffset;
HXDLIN( 198)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 198)								int elementSize = _this->bytesPerElement;
HXDLIN( 198)								if ((view1->type == _this->type)) {
HXLINE( 198)									int srcLength = srcData->length;
HXDLIN( 198)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 198)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 198)									_this->buffer = this1;
HXDLIN( 198)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 198)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 198)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 198)								_this->byteOffset = 0;
HXDLIN( 198)								_this->length = srcLength;
HXDLIN( 198)								this1 = _this;
            							}
            							else {
HXLINE( 198)								if (::hx::IsNotNull( buffer )) {
HXLINE( 198)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,9);
HXDLIN( 198)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 198)									if ((in_byteOffset < 0)) {
HXLINE( 198)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 198)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 198)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 198)									int bufferByteLength = buffer->length;
HXDLIN( 198)									int elementSize = _this->bytesPerElement;
HXDLIN( 198)									int newByteLength = bufferByteLength;
HXDLIN( 198)									if (::hx::IsNull( len )) {
HXLINE( 198)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 198)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 198)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 198)										if ((newByteLength < 0)) {
HXLINE( 198)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 198)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 198)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 198)										if ((newRange > bufferByteLength)) {
HXLINE( 198)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 198)									_this->buffer = buffer;
HXDLIN( 198)									_this->byteOffset = in_byteOffset;
HXDLIN( 198)									_this->byteLength = newByteLength;
HXDLIN( 198)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 198)									this1 = _this;
            								}
            								else {
HXLINE( 198)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Float64Array",8f,de,6b,1e)));
            								}
            							}
            						}
            					}
            				}
HXLINE( 171)				view = this1;
            			}
            			break;
            		}
HXLINE( 204)		return view;
            	}


HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferView_obj,subarray_lime_utils_UInt8Array,return )

 ::lime::utils::ArrayBufferView ArrayBufferView_obj::initTypedArray( ::lime::utils::ArrayBufferView view){
            	HX_STACKFRAME(&_hx_pos_244a612994c6bd06_48_initTypedArray)
HXLINE(  49)		 ::haxe::io::Bytes srcData = view->buffer;
HXLINE(  50)		int srcLength = view->length;
HXLINE(  51)		int srcByteOffset = view->byteOffset;
HXLINE(  52)		int srcElementSize = view->bytesPerElement;
HXLINE(  53)		int elementSize = this->bytesPerElement;
HXLINE(  57)		if ((view->type == this->type)) {
HXLINE(  59)			int srcLength = srcData->length;
HXDLIN(  59)			int cloneLength = (srcLength - srcByteOffset);
HXDLIN(  59)			 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN(  59)			this->buffer = this1;
HXDLIN(  59)			this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            		}
            		else {
HXLINE(  64)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            		}
HXLINE(  67)		this->byteLength = (this->bytesPerElement * srcLength);
HXLINE(  68)		this->byteOffset = 0;
HXLINE(  69)		this->length = srcLength;
HXLINE(  71)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ArrayBufferView_obj,initTypedArray,return )

 ::lime::utils::ArrayBufferView ArrayBufferView_obj::initBuffer( ::haxe::io::Bytes in_buffer,::hx::Null< int >  __o_in_byteOffset, ::Dynamic len){
            		int in_byteOffset = __o_in_byteOffset.Default(0);
            	HX_STACKFRAME(&_hx_pos_244a612994c6bd06_79_initBuffer)
HXLINE(  80)		if ((in_byteOffset < 0)) {
HXLINE(  80)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            		}
HXLINE(  81)		if ((::hx::Mod(in_byteOffset,this->bytesPerElement) != 0)) {
HXLINE(  81)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            		}
HXLINE(  83)		int bufferByteLength = in_buffer->length;
HXLINE(  84)		int elementSize = this->bytesPerElement;
HXLINE(  85)		int newByteLength = bufferByteLength;
HXLINE(  87)		if (::hx::IsNull( len )) {
HXLINE(  89)			newByteLength = (bufferByteLength - in_byteOffset);
HXLINE(  91)			if ((::hx::Mod(bufferByteLength,this->bytesPerElement) != 0)) {
HXLINE(  91)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            			}
HXLINE(  92)			if ((newByteLength < 0)) {
HXLINE(  92)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            			}
            		}
            		else {
HXLINE(  96)			newByteLength = (( (int)(len) ) * this->bytesPerElement);
HXLINE(  98)			int newRange = (in_byteOffset + newByteLength);
HXLINE(  99)			if ((newRange > bufferByteLength)) {
HXLINE(  99)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            			}
            		}
HXLINE( 102)		this->buffer = in_buffer;
HXLINE( 103)		this->byteOffset = in_byteOffset;
HXLINE( 104)		this->byteLength = newByteLength;
HXLINE( 105)		this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(this->bytesPerElement) )));
HXLINE( 107)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC3(ArrayBufferView_obj,initBuffer,return )

 ::lime::utils::ArrayBufferView ArrayBufferView_obj::initArray(::cpp::VirtualArray array){
            	HX_STACKFRAME(&_hx_pos_244a612994c6bd06_115_initArray)
HXLINE( 116)		this->byteOffset = 0;
HXLINE( 117)		this->length = array->get_length();
HXLINE( 118)		this->byteLength = (this->length * this->bytesPerElement);
HXLINE( 120)		 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(this->byteLength);
HXDLIN( 120)		this->buffer = this1;
HXLINE( 121)		this->copyFromArray(array,null());
HXLINE( 123)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ArrayBufferView_obj,initArray,return )

void ArrayBufferView_obj::set( ::lime::utils::ArrayBufferView view,::cpp::VirtualArray array,::hx::Null< int >  __o_offset){
            		int offset = __o_offset.Default(0);
            	HX_STACKFRAME(&_hx_pos_244a612994c6bd06_133_set)
HXDLIN( 133)		bool _hx_tmp;
HXDLIN( 133)		if (::hx::IsNotNull( view )) {
HXDLIN( 133)			_hx_tmp = ::hx::IsNull( array );
            		}
            		else {
HXDLIN( 133)			_hx_tmp = false;
            		}
HXDLIN( 133)		if (_hx_tmp) {
HXLINE( 135)			this->buffer->blit((offset * this->bytesPerElement),view->buffer,view->byteOffset,view->byteLength);
            		}
            		else {
HXLINE( 137)			bool _hx_tmp;
HXDLIN( 137)			if (::hx::IsNotNull( array )) {
HXLINE( 137)				_hx_tmp = ::hx::IsNull( view );
            			}
            			else {
HXLINE( 137)				_hx_tmp = false;
            			}
HXDLIN( 137)			if (_hx_tmp) {
HXLINE( 139)				this->copyFromArray(array,offset);
            			}
            			else {
HXLINE( 143)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid .set call. either view, or array must be not-null.",64,ba,b7,6c)));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(ArrayBufferView_obj,set,(void))

void ArrayBufferView_obj::cloneBuffer( ::haxe::io::Bytes src,::hx::Null< int >  __o_srcByteOffset){
            		int srcByteOffset = __o_srcByteOffset.Default(0);
            	HX_STACKFRAME(&_hx_pos_244a612994c6bd06_152_cloneBuffer)
HXLINE( 153)		int srcLength = src->length;
HXLINE( 154)		int cloneLength = (srcLength - srcByteOffset);
HXLINE( 156)		 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 156)		this->buffer = this1;
HXLINE( 157)		this->buffer->blit(0,src,srcByteOffset,cloneLength);
            	}


HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferView_obj,cloneBuffer,(void))

int ArrayBufferView_obj::bytesForType(int type){
            	HX_STACKFRAME(&_hx_pos_244a612994c6bd06_212_bytesForType)
HXDLIN( 212)		switch((int)(type)){
            			case (int)1: {
HXLINE( 215)				return 1;
            			}
            			break;
            			case (int)2: {
HXLINE( 224)				return 2;
            			}
            			break;
            			case (int)3: {
HXLINE( 230)				return 4;
            			}
            			break;
            			case (int)4: {
HXLINE( 218)				return 1;
            			}
            			break;
            			case (int)5: {
HXLINE( 221)				return 1;
            			}
            			break;
            			case (int)6: {
HXLINE( 227)				return 2;
            			}
            			break;
            			case (int)7: {
HXLINE( 233)				return 4;
            			}
            			break;
            			case (int)8: {
HXLINE( 236)				return 4;
            			}
            			break;
            			case (int)9: {
HXLINE( 239)				return 8;
            			}
            			break;
            			default:{
HXLINE( 241)				return 1;
            			}
            		}
HXLINE( 212)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ArrayBufferView_obj,bytesForType,return )

::String ArrayBufferView_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_244a612994c6bd06_249_toString)
HXLINE( 250)		::String name;
HXDLIN( 250)		switch((int)(this->type)){
            			case (int)1: {
HXLINE( 250)				name = HX_("Int8Array",50,dc,f6,ae);
            			}
            			break;
            			case (int)2: {
HXLINE( 250)				name = HX_("Int16Array",85,17,71,a9);
            			}
            			break;
            			case (int)3: {
HXLINE( 250)				name = HX_("Int32Array",8b,93,2e,63);
            			}
            			break;
            			case (int)4: {
HXLINE( 250)				name = HX_("UInt8Array",5b,a9,b0,87);
            			}
            			break;
            			case (int)5: {
HXLINE( 250)				name = HX_("UInt8ClampedArray",9d,1f,db,26);
            			}
            			break;
            			case (int)6: {
HXLINE( 250)				name = HX_("UInt16Array",1a,b4,4a,73);
            			}
            			break;
            			case (int)7: {
HXLINE( 250)				name = HX_("UInt32Array",20,30,08,2d);
            			}
            			break;
            			case (int)8: {
HXLINE( 250)				name = HX_("Float32Array",7e,42,27,90);
            			}
            			break;
            			case (int)9: {
HXLINE( 250)				name = HX_("Float64Array",7f,5f,9e,d9);
            			}
            			break;
            			default:{
HXLINE( 250)				name = HX_("ArrayBufferView",5e,6e,84,fd);
            			}
            		}
HXLINE( 264)		return (name + ((((HX_(" [byteLength:",11,d6,a9,ca) + this->byteLength) + HX_(", length:",a0,04,67,ef)) + this->length) + HX_("]",5d,00,00,00)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ArrayBufferView_obj,toString,return )

int ArrayBufferView_obj::toByteLength(int elemCount){
            	HX_STACKFRAME(&_hx_pos_244a612994c6bd06_272_toByteLength)
HXDLIN( 272)		return (elemCount * this->bytesPerElement);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ArrayBufferView_obj,toByteLength,return )

void ArrayBufferView_obj::copyFromArray(::Array< Float > array,::hx::Null< int >  __o_offset){
            		int offset = __o_offset.Default(0);
            	HX_STACKFRAME(&_hx_pos_244a612994c6bd06_279_copyFromArray)
HXLINE( 281)		int i = 0;
HXDLIN( 281)		int len = array->length;
HXLINE( 283)		switch((int)(this->type)){
            			case (int)0: {
HXLINE( 392)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("copyFromArray on a base type ArrayBuffer",e8,01,1a,e2)));
            			}
            			break;
            			case (int)1: {
HXLINE( 286)				while((i < len)){
HXLINE( 288)					int pos = ((offset + i) * this->bytesPerElement);
HXLINE( 294)					{
HXLINE( 294)						 ::haxe::io::Bytes buffer = this->buffer;
HXDLIN( 294)						int value = ::Std_obj::_hx_int(array->__get(i));
HXDLIN( 294)						 ::__hxcpp_memory_set_byte(buffer->b,pos,value);
            					}
HXLINE( 296)					i = (i + 1);
            				}
            			}
            			break;
            			case (int)2: {
HXLINE( 299)				while((i < len)){
HXLINE( 301)					int pos = ((offset + i) * this->bytesPerElement);
HXLINE( 307)					 ::haxe::io::Bytes _hx_tmp = this->buffer;
HXDLIN( 307)					::lime::utils::ArrayBufferIO_obj::setInt16(_hx_tmp,pos,::Std_obj::_hx_int(array->__get(i)));
HXLINE( 309)					i = (i + 1);
            				}
            			}
            			break;
            			case (int)3: {
HXLINE( 312)				while((i < len)){
HXLINE( 314)					int pos = ((offset + i) * this->bytesPerElement);
HXLINE( 320)					{
HXLINE( 320)						 ::haxe::io::Bytes buffer = this->buffer;
HXDLIN( 320)						int value = ::Std_obj::_hx_int(array->__get(i));
HXDLIN( 320)						 ::__hxcpp_memory_set_i32(buffer->b,pos,value);
            					}
HXLINE( 322)					i = (i + 1);
            				}
            			}
            			break;
            			case (int)4: {
HXLINE( 325)				while((i < len)){
HXLINE( 327)					int pos = ((offset + i) * this->bytesPerElement);
HXLINE( 333)					{
HXLINE( 333)						 ::haxe::io::Bytes buffer = this->buffer;
HXDLIN( 333)						int value = ::Std_obj::_hx_int(array->__get(i));
HXDLIN( 333)						 ::__hxcpp_memory_set_byte(buffer->b,pos,value);
            					}
HXLINE( 335)					i = (i + 1);
            				}
            			}
            			break;
            			case (int)5: {
HXLINE( 364)				while((i < len)){
HXLINE( 366)					int pos = ((offset + i) * this->bytesPerElement);
HXLINE( 372)					{
HXLINE( 372)						 ::haxe::io::Bytes buffer = this->buffer;
HXDLIN( 372)						{
HXLINE( 372)							int _hx_int = ::Std_obj::_hx_int(array->__get(i));
HXDLIN( 372)							Float _out;
HXDLIN( 372)							if ((_hx_int < 0)) {
HXLINE( 372)								_out = (((Float)4294967296.0) + _hx_int);
            							}
            							else {
HXLINE( 372)								_out = (_hx_int + ((Float)0.0));
            							}
HXDLIN( 372)							int _out1 = ::Std_obj::_hx_int(_out);
HXDLIN( 372)							if ((_out1 > 255)) {
HXLINE( 372)								_out1 = 255;
            							}
HXDLIN( 372)							int value;
HXDLIN( 372)							if ((_out1 < 0)) {
HXLINE( 372)								value = 0;
            							}
            							else {
HXLINE( 372)								value = _out1;
            							}
HXDLIN( 372)							 ::__hxcpp_memory_set_byte(buffer->b,pos,value);
            						}
            					}
HXLINE( 374)					i = (i + 1);
            				}
            			}
            			break;
            			case (int)6: {
HXLINE( 338)				while((i < len)){
HXLINE( 340)					int pos = ((offset + i) * this->bytesPerElement);
HXLINE( 346)					{
HXLINE( 346)						 ::haxe::io::Bytes buffer = this->buffer;
HXDLIN( 346)						int value = ::Std_obj::_hx_int(array->__get(i));
HXDLIN( 346)						 ::__hxcpp_memory_set_ui16(buffer->b,pos,value);
            					}
HXLINE( 348)					i = (i + 1);
            				}
            			}
            			break;
            			case (int)7: {
HXLINE( 351)				while((i < len)){
HXLINE( 353)					int pos = ((offset + i) * this->bytesPerElement);
HXLINE( 359)					{
HXLINE( 359)						 ::haxe::io::Bytes buffer = this->buffer;
HXDLIN( 359)						int value = ::Std_obj::_hx_int(array->__get(i));
HXDLIN( 359)						 ::__hxcpp_memory_set_ui32(buffer->b,pos,value);
            					}
HXLINE( 361)					i = (i + 1);
            				}
            			}
            			break;
            			case (int)8: {
HXLINE( 377)				while((i < len)){
HXLINE( 379)					int pos = ((offset + i) * this->bytesPerElement);
HXLINE( 380)					 ::__hxcpp_memory_set_float(this->buffer->b,pos,array->__get(i));
HXLINE( 381)					i = (i + 1);
            				}
            			}
            			break;
            			case (int)9: {
HXLINE( 384)				while((i < len)){
HXLINE( 386)					int pos = ((offset + i) * this->bytesPerElement);
HXLINE( 387)					 ::__hxcpp_memory_set_double(this->buffer->b,pos,array->__get(i));
HXLINE( 388)					i = (i + 1);
            				}
            			}
            			break;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferView_obj,copyFromArray,(void))


::hx::ObjectPtr< ArrayBufferView_obj > ArrayBufferView_obj::__new( ::Dynamic elements,int in_type) {
	::hx::ObjectPtr< ArrayBufferView_obj > __this = new ArrayBufferView_obj();
	__this->__construct(elements,in_type);
	return __this;
}

::hx::ObjectPtr< ArrayBufferView_obj > ArrayBufferView_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic elements,int in_type) {
	ArrayBufferView_obj *__this = (ArrayBufferView_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ArrayBufferView_obj), true, "lime.utils.ArrayBufferView"));
	*(void **)__this = ArrayBufferView_obj::_hx_vtable;
	__this->__construct(elements,in_type);
	return __this;
}

ArrayBufferView_obj::ArrayBufferView_obj()
{
}

void ArrayBufferView_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ArrayBufferView);
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(buffer,"buffer");
	HX_MARK_MEMBER_NAME(byteOffset,"byteOffset");
	HX_MARK_MEMBER_NAME(byteLength,"byteLength");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(bytesPerElement,"bytesPerElement");
	HX_MARK_END_CLASS();
}

void ArrayBufferView_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(buffer,"buffer");
	HX_VISIT_MEMBER_NAME(byteOffset,"byteOffset");
	HX_VISIT_MEMBER_NAME(byteLength,"byteLength");
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(bytesPerElement,"bytesPerElement");
}

::hx::Val ArrayBufferView_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return ::hx::Val( type ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { return ::hx::Val( buffer ); }
		if (HX_FIELD_EQ(inName,"length") ) { return ::hx::Val( length ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"initArray") ) { return ::hx::Val( initArray_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"byteOffset") ) { return ::hx::Val( byteOffset ); }
		if (HX_FIELD_EQ(inName,"byteLength") ) { return ::hx::Val( byteLength ); }
		if (HX_FIELD_EQ(inName,"initBuffer") ) { return ::hx::Val( initBuffer_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"cloneBuffer") ) { return ::hx::Val( cloneBuffer_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"bytesForType") ) { return ::hx::Val( bytesForType_dyn() ); }
		if (HX_FIELD_EQ(inName,"toByteLength") ) { return ::hx::Val( toByteLength_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"copyFromArray") ) { return ::hx::Val( copyFromArray_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"initTypedArray") ) { return ::hx::Val( initTypedArray_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"bytesPerElement") ) { return ::hx::Val( bytesPerElement ); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"subarray_lime_utils_Int8Array") ) { return ::hx::Val( subarray_lime_utils_Int8Array_dyn() ); }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"subarray_lime_utils_Int16Array") ) { return ::hx::Val( subarray_lime_utils_Int16Array_dyn() ); }
		if (HX_FIELD_EQ(inName,"subarray_lime_utils_Int32Array") ) { return ::hx::Val( subarray_lime_utils_Int32Array_dyn() ); }
		if (HX_FIELD_EQ(inName,"subarray_lime_utils_UInt8Array") ) { return ::hx::Val( subarray_lime_utils_UInt8Array_dyn() ); }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"subarray_lime_utils_UInt16Array") ) { return ::hx::Val( subarray_lime_utils_UInt16Array_dyn() ); }
		if (HX_FIELD_EQ(inName,"subarray_lime_utils_UInt32Array") ) { return ::hx::Val( subarray_lime_utils_UInt32Array_dyn() ); }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"subarray_lime_utils_Float64Array") ) { return ::hx::Val( subarray_lime_utils_Float64Array_dyn() ); }
		if (HX_FIELD_EQ(inName,"subarray_lime_utils_Float32Array") ) { return ::hx::Val( subarray_lime_utils_Float32Array_dyn() ); }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"subarray_lime_utils_UInt8ClampedArray") ) { return ::hx::Val( subarray_lime_utils_UInt8ClampedArray_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ArrayBufferView_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { buffer=inValue.Cast<  ::haxe::io::Bytes >(); return inValue; }
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"byteOffset") ) { byteOffset=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"byteLength") ) { byteLength=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"bytesPerElement") ) { bytesPerElement=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ArrayBufferView_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("type",ba,f2,08,4d));
	outFields->push(HX_("buffer",00,bd,94,d0));
	outFields->push(HX_("byteOffset",bb,20,44,38));
	outFields->push(HX_("byteLength",0e,1e,0c,77));
	outFields->push(HX_("length",e6,94,07,9f));
	outFields->push(HX_("bytesPerElement",aa,67,89,18));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ArrayBufferView_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(ArrayBufferView_obj,type),HX_("type",ba,f2,08,4d)},
	{::hx::fsObject /*  ::haxe::io::Bytes */ ,(int)offsetof(ArrayBufferView_obj,buffer),HX_("buffer",00,bd,94,d0)},
	{::hx::fsInt,(int)offsetof(ArrayBufferView_obj,byteOffset),HX_("byteOffset",bb,20,44,38)},
	{::hx::fsInt,(int)offsetof(ArrayBufferView_obj,byteLength),HX_("byteLength",0e,1e,0c,77)},
	{::hx::fsInt,(int)offsetof(ArrayBufferView_obj,length),HX_("length",e6,94,07,9f)},
	{::hx::fsInt,(int)offsetof(ArrayBufferView_obj,bytesPerElement),HX_("bytesPerElement",aa,67,89,18)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ArrayBufferView_obj_sStaticStorageInfo = 0;
#endif

static ::String ArrayBufferView_obj_sMemberFields[] = {
	HX_("subarray_lime_utils_Float64Array",51,8e,35,ee),
	HX_("subarray_lime_utils_Int16Array",d7,8d,80,c2),
	HX_("subarray_lime_utils_Int8Array",3e,16,ba,20),
	HX_("subarray_lime_utils_UInt8ClampedArray",8b,f7,6e,70),
	HX_("subarray_lime_utils_UInt16Array",88,c5,c2,47),
	HX_("subarray_lime_utils_Int32Array",dd,09,3e,7c),
	HX_("subarray_lime_utils_UInt32Array",8e,41,80,01),
	HX_("subarray_lime_utils_Float32Array",50,71,be,a4),
	HX_("subarray_lime_utils_UInt8Array",ad,1f,c0,a0),
	HX_("type",ba,f2,08,4d),
	HX_("buffer",00,bd,94,d0),
	HX_("byteOffset",bb,20,44,38),
	HX_("byteLength",0e,1e,0c,77),
	HX_("length",e6,94,07,9f),
	HX_("bytesPerElement",aa,67,89,18),
	HX_("initTypedArray",ff,5f,1a,1d),
	HX_("initBuffer",30,18,da,d4),
	HX_("initArray",69,88,21,41),
	HX_("set",a2,9b,57,00),
	HX_("cloneBuffer",3d,a8,e8,6c),
	HX_("bytesForType",38,71,1a,bd),
	HX_("toString",ac,d0,6e,38),
	HX_("toByteLength",69,4f,eb,18),
	HX_("copyFromArray",5a,dd,dd,3b),
	::String(null()) };

::hx::Class ArrayBufferView_obj::__mClass;

void ArrayBufferView_obj::__register()
{
	ArrayBufferView_obj _hx_dummy;
	ArrayBufferView_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.utils.ArrayBufferView",08,da,61,c9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ArrayBufferView_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ArrayBufferView_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ArrayBufferView_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ArrayBufferView_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace utils
