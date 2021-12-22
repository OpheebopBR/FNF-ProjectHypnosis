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
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_TAError
#include <lime/utils/TAError.h>
#endif
#ifndef INCLUDED_lime_utils__UInt8Array_UInt8Array_Impl_
#include <lime/utils/_UInt8Array/UInt8Array_Impl_.h>
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

HX_LOCAL_STACK_FRAME(_hx_pos_56a8ecc5c2b3800c_95__new,"lime.utils._UInt8Array.UInt8Array_Impl_","_new",0xabaa4faa,"lime.utils._UInt8Array.UInt8Array_Impl_._new","lime/utils/UInt8Array.hx",95,0x1e0ae96b)
HX_LOCAL_STACK_FRAME(_hx_pos_56a8ecc5c2b3800c_128_subarray,"lime.utils._UInt8Array.UInt8Array_Impl_","subarray",0x5b71e6e2,"lime.utils._UInt8Array.UInt8Array_Impl_.subarray","lime/utils/UInt8Array.hx",128,0x1e0ae96b)
HX_LOCAL_STACK_FRAME(_hx_pos_56a8ecc5c2b3800c_133_fromBytes,"lime.utils._UInt8Array.UInt8Array_Impl_","fromBytes",0x90b0cfb8,"lime.utils._UInt8Array.UInt8Array_Impl_.fromBytes","lime/utils/UInt8Array.hx",133,0x1e0ae96b)
HX_LOCAL_STACK_FRAME(_hx_pos_56a8ecc5c2b3800c_138_toBytes,"lime.utils._UInt8Array.UInt8Array_Impl_","toBytes",0xcd11ee47,"lime.utils._UInt8Array.UInt8Array_Impl_.toBytes","lime/utils/UInt8Array.hx",138,0x1e0ae96b)
HX_LOCAL_STACK_FRAME(_hx_pos_56a8ecc5c2b3800c_143_toString,"lime.utils._UInt8Array.UInt8Array_Impl_","toString",0x8c5f6375,"lime.utils._UInt8Array.UInt8Array_Impl_.toString","lime/utils/UInt8Array.hx",143,0x1e0ae96b)
HX_LOCAL_STACK_FRAME(_hx_pos_56a8ecc5c2b3800c_146_get_length,"lime.utils._UInt8Array.UInt8Array_Impl_","get_length",0x2ee09bb8,"lime.utils._UInt8Array.UInt8Array_Impl_.get_length","lime/utils/UInt8Array.hx",146,0x1e0ae96b)
HX_LOCAL_STACK_FRAME(_hx_pos_56a8ecc5c2b3800c_90_boot,"lime.utils._UInt8Array.UInt8Array_Impl_","boot",0xada6be7b,"lime.utils._UInt8Array.UInt8Array_Impl_.boot","lime/utils/UInt8Array.hx",90,0x1e0ae96b)
namespace lime{
namespace utils{
namespace _UInt8Array{

void UInt8Array_Impl__obj::__construct() { }

Dynamic UInt8Array_Impl__obj::__CreateEmpty() { return new UInt8Array_Impl__obj; }

void *UInt8Array_Impl__obj::_hx_vtable = 0;

Dynamic UInt8Array_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< UInt8Array_Impl__obj > _hx_result = new UInt8Array_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool UInt8Array_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2b2398dd;
}

int UInt8Array_Impl__obj::BYTES_PER_ELEMENT;

 ::lime::utils::ArrayBufferView UInt8Array_Impl__obj::_new( ::Dynamic elements, ::haxe::io::Bytes buffer,::cpp::VirtualArray array, ::openfl::_Vector::IntVector vector, ::lime::utils::ArrayBufferView view, ::Dynamic __o_byteoffset, ::Dynamic len){
            		 ::Dynamic byteoffset = __o_byteoffset;
            		if (::hx::IsNull(__o_byteoffset)) byteoffset = 0;
            	HX_GC_STACKFRAME(&_hx_pos_56a8ecc5c2b3800c_95__new)
HXDLIN(  95)		 ::lime::utils::ArrayBufferView this1;
HXLINE(  98)		if (::hx::IsNotNull( elements )) {
HXLINE( 100)			this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,4);
            		}
            		else {
HXLINE( 102)			if (::hx::IsNotNull( array )) {
HXLINE( 104)				 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 104)				_this->byteOffset = 0;
HXDLIN( 104)				_this->length = array->get_length();
HXDLIN( 104)				_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 104)				 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 104)				_this->buffer = this2;
HXDLIN( 104)				_this->copyFromArray(array,null());
HXDLIN( 104)				this1 = _this;
            			}
            			else {
HXLINE( 107)				if (::hx::IsNotNull( vector )) {
HXLINE( 109)					 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 109)					::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 109)					_this->byteOffset = 0;
HXDLIN( 109)					_this->length = array->get_length();
HXDLIN( 109)					_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 109)					 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 109)					_this->buffer = this2;
HXDLIN( 109)					_this->copyFromArray(array,null());
HXDLIN( 109)					this1 = _this;
            				}
            				else {
HXLINE( 112)					if (::hx::IsNotNull( view )) {
HXLINE( 114)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 114)						 ::haxe::io::Bytes srcData = view->buffer;
HXDLIN( 114)						int srcLength = view->length;
HXDLIN( 114)						int srcByteOffset = view->byteOffset;
HXDLIN( 114)						int srcElementSize = view->bytesPerElement;
HXDLIN( 114)						int elementSize = _this->bytesPerElement;
HXDLIN( 114)						if ((view->type == _this->type)) {
HXLINE( 114)							int srcLength = srcData->length;
HXDLIN( 114)							int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 114)							 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 114)							_this->buffer = this1;
HXDLIN( 114)							_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            						}
            						else {
HXLINE( 114)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            						}
HXDLIN( 114)						_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 114)						_this->byteOffset = 0;
HXDLIN( 114)						_this->length = srcLength;
HXDLIN( 114)						this1 = _this;
            					}
            					else {
HXLINE( 116)						if (::hx::IsNotNull( buffer )) {
HXLINE( 118)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 118)							int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 118)							if ((in_byteOffset < 0)) {
HXLINE( 118)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            							}
HXDLIN( 118)							if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 118)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            							}
HXDLIN( 118)							int bufferByteLength = buffer->length;
HXDLIN( 118)							int elementSize = _this->bytesPerElement;
HXDLIN( 118)							int newByteLength = bufferByteLength;
HXDLIN( 118)							if (::hx::IsNull( len )) {
HXLINE( 118)								newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 118)								if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 118)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
HXDLIN( 118)								if ((newByteLength < 0)) {
HXLINE( 118)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
            							}
            							else {
HXLINE( 118)								newByteLength = (( (int)(len) ) * _this->bytesPerElement);
HXDLIN( 118)								int newRange = (in_byteOffset + newByteLength);
HXDLIN( 118)								if ((newRange > bufferByteLength)) {
HXLINE( 118)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
            							}
HXDLIN( 118)							_this->buffer = buffer;
HXDLIN( 118)							_this->byteOffset = in_byteOffset;
HXDLIN( 118)							_this->byteLength = newByteLength;
HXDLIN( 118)							_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 118)							this1 = _this;
            						}
            						else {
HXLINE( 122)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt8Array",6b,44,d5,85)));
            						}
            					}
            				}
            			}
            		}
HXLINE(  95)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(UInt8Array_Impl__obj,_new,return )

 ::lime::utils::ArrayBufferView UInt8Array_Impl__obj::subarray( ::lime::utils::ArrayBufferView this1,int begin, ::Dynamic end){
            	HX_GC_STACKFRAME(&_hx_pos_56a8ecc5c2b3800c_128_subarray)
HXDLIN( 128)		 ::Dynamic end1 = end;
HXDLIN( 128)		if (::hx::IsNull( end1 )) {
HXDLIN( 128)			end1 = this1->length;
            		}
HXDLIN( 128)		int len = (( (int)(end1) ) - begin);
HXDLIN( 128)		int byte_offset = ((begin * this1->bytesPerElement) + this1->byteOffset);
HXDLIN( 128)		 ::lime::utils::ArrayBufferView view;
HXDLIN( 128)		switch((int)(this1->type)){
            			case (int)0: {
HXDLIN( 128)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("subarray on a blank ArrayBufferView",39,87,fd,19)));
            			}
            			break;
            			case (int)1: {
HXDLIN( 128)				 ::Dynamic elements = null();
HXDLIN( 128)				 ::haxe::io::Bytes buffer = this1->buffer;
HXDLIN( 128)				::cpp::VirtualArray array = null();
HXDLIN( 128)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 128)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 128)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 128)				if (::hx::IsNull( byteoffset )) {
HXDLIN( 128)					byteoffset = 0;
            				}
HXDLIN( 128)				 ::lime::utils::ArrayBufferView this2;
HXDLIN( 128)				if (::hx::IsNotNull( elements )) {
HXDLIN( 128)					this2 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,1);
            				}
            				else {
HXDLIN( 128)					if (::hx::IsNotNull( array )) {
HXDLIN( 128)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,1);
HXDLIN( 128)						_this->byteOffset = 0;
HXDLIN( 128)						_this->length = array->get_length();
HXDLIN( 128)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 128)						 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 128)						_this->buffer = this1;
HXDLIN( 128)						_this->copyFromArray(array,null());
HXDLIN( 128)						this2 = _this;
            					}
            					else {
HXDLIN( 128)						if (::hx::IsNotNull( vector )) {
HXDLIN( 128)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,1);
HXDLIN( 128)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 128)							_this->byteOffset = 0;
HXDLIN( 128)							_this->length = array->get_length();
HXDLIN( 128)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 128)							 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 128)							_this->buffer = this1;
HXDLIN( 128)							_this->copyFromArray(array,null());
HXDLIN( 128)							this2 = _this;
            						}
            						else {
HXDLIN( 128)							if (::hx::IsNotNull( view1 )) {
HXDLIN( 128)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,1);
HXDLIN( 128)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 128)								int srcLength = view1->length;
HXDLIN( 128)								int srcByteOffset = view1->byteOffset;
HXDLIN( 128)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 128)								int elementSize = _this->bytesPerElement;
HXDLIN( 128)								if ((view1->type == _this->type)) {
HXDLIN( 128)									int srcLength = srcData->length;
HXDLIN( 128)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 128)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 128)									_this->buffer = this1;
HXDLIN( 128)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXDLIN( 128)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 128)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 128)								_this->byteOffset = 0;
HXDLIN( 128)								_this->length = srcLength;
HXDLIN( 128)								this2 = _this;
            							}
            							else {
HXDLIN( 128)								if (::hx::IsNotNull( buffer )) {
HXDLIN( 128)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,1);
HXDLIN( 128)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 128)									if ((in_byteOffset < 0)) {
HXDLIN( 128)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 128)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXDLIN( 128)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 128)									int bufferByteLength = buffer->length;
HXDLIN( 128)									int elementSize = _this->bytesPerElement;
HXDLIN( 128)									int newByteLength = bufferByteLength;
HXDLIN( 128)									if (::hx::IsNull( len )) {
HXDLIN( 128)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 128)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXDLIN( 128)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 128)										if ((newByteLength < 0)) {
HXDLIN( 128)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXDLIN( 128)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 128)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 128)										if ((newRange > bufferByteLength)) {
HXDLIN( 128)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 128)									_this->buffer = buffer;
HXDLIN( 128)									_this->byteOffset = in_byteOffset;
HXDLIN( 128)									_this->byteLength = newByteLength;
HXDLIN( 128)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 128)									this2 = _this;
            								}
            								else {
HXDLIN( 128)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Int8Array",40,53,da,77)));
            								}
            							}
            						}
            					}
            				}
HXDLIN( 128)				view = this2;
            			}
            			break;
            			case (int)2: {
HXDLIN( 128)				 ::Dynamic elements = null();
HXDLIN( 128)				 ::haxe::io::Bytes buffer = this1->buffer;
HXDLIN( 128)				::cpp::VirtualArray array = null();
HXDLIN( 128)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 128)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 128)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 128)				if (::hx::IsNull( byteoffset )) {
HXDLIN( 128)					byteoffset = 0;
            				}
HXDLIN( 128)				 ::lime::utils::ArrayBufferView this2;
HXDLIN( 128)				if (::hx::IsNotNull( elements )) {
HXDLIN( 128)					this2 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,2);
            				}
            				else {
HXDLIN( 128)					if (::hx::IsNotNull( array )) {
HXDLIN( 128)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,2);
HXDLIN( 128)						_this->byteOffset = 0;
HXDLIN( 128)						_this->length = array->get_length();
HXDLIN( 128)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 128)						 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 128)						_this->buffer = this1;
HXDLIN( 128)						_this->copyFromArray(array,null());
HXDLIN( 128)						this2 = _this;
            					}
            					else {
HXDLIN( 128)						if (::hx::IsNotNull( vector )) {
HXDLIN( 128)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,2);
HXDLIN( 128)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 128)							_this->byteOffset = 0;
HXDLIN( 128)							_this->length = array->get_length();
HXDLIN( 128)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 128)							 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 128)							_this->buffer = this1;
HXDLIN( 128)							_this->copyFromArray(array,null());
HXDLIN( 128)							this2 = _this;
            						}
            						else {
HXDLIN( 128)							if (::hx::IsNotNull( view1 )) {
HXDLIN( 128)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,2);
HXDLIN( 128)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 128)								int srcLength = view1->length;
HXDLIN( 128)								int srcByteOffset = view1->byteOffset;
HXDLIN( 128)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 128)								int elementSize = _this->bytesPerElement;
HXDLIN( 128)								if ((view1->type == _this->type)) {
HXDLIN( 128)									int srcLength = srcData->length;
HXDLIN( 128)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 128)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 128)									_this->buffer = this1;
HXDLIN( 128)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXDLIN( 128)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 128)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 128)								_this->byteOffset = 0;
HXDLIN( 128)								_this->length = srcLength;
HXDLIN( 128)								this2 = _this;
            							}
            							else {
HXDLIN( 128)								if (::hx::IsNotNull( buffer )) {
HXDLIN( 128)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,2);
HXDLIN( 128)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 128)									if ((in_byteOffset < 0)) {
HXDLIN( 128)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 128)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXDLIN( 128)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 128)									int bufferByteLength = buffer->length;
HXDLIN( 128)									int elementSize = _this->bytesPerElement;
HXDLIN( 128)									int newByteLength = bufferByteLength;
HXDLIN( 128)									if (::hx::IsNull( len )) {
HXDLIN( 128)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 128)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXDLIN( 128)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 128)										if ((newByteLength < 0)) {
HXDLIN( 128)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXDLIN( 128)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 128)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 128)										if ((newRange > bufferByteLength)) {
HXDLIN( 128)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 128)									_this->buffer = buffer;
HXDLIN( 128)									_this->byteOffset = in_byteOffset;
HXDLIN( 128)									_this->byteLength = newByteLength;
HXDLIN( 128)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 128)									this2 = _this;
            								}
            								else {
HXDLIN( 128)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Int16Array",95,b2,95,a7)));
            								}
            							}
            						}
            					}
            				}
HXDLIN( 128)				view = this2;
            			}
            			break;
            			case (int)3: {
HXDLIN( 128)				 ::Dynamic elements = null();
HXDLIN( 128)				 ::haxe::io::Bytes buffer = this1->buffer;
HXDLIN( 128)				::cpp::VirtualArray array = null();
HXDLIN( 128)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 128)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 128)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 128)				if (::hx::IsNull( byteoffset )) {
HXDLIN( 128)					byteoffset = 0;
            				}
HXDLIN( 128)				 ::lime::utils::ArrayBufferView this2;
HXDLIN( 128)				if (::hx::IsNotNull( elements )) {
HXDLIN( 128)					this2 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,3);
            				}
            				else {
HXDLIN( 128)					if (::hx::IsNotNull( array )) {
HXDLIN( 128)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,3);
HXDLIN( 128)						_this->byteOffset = 0;
HXDLIN( 128)						_this->length = array->get_length();
HXDLIN( 128)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 128)						 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 128)						_this->buffer = this1;
HXDLIN( 128)						_this->copyFromArray(array,null());
HXDLIN( 128)						this2 = _this;
            					}
            					else {
HXDLIN( 128)						if (::hx::IsNotNull( vector )) {
HXDLIN( 128)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,3);
HXDLIN( 128)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 128)							_this->byteOffset = 0;
HXDLIN( 128)							_this->length = array->get_length();
HXDLIN( 128)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 128)							 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 128)							_this->buffer = this1;
HXDLIN( 128)							_this->copyFromArray(array,null());
HXDLIN( 128)							this2 = _this;
            						}
            						else {
HXDLIN( 128)							if (::hx::IsNotNull( view1 )) {
HXDLIN( 128)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,3);
HXDLIN( 128)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 128)								int srcLength = view1->length;
HXDLIN( 128)								int srcByteOffset = view1->byteOffset;
HXDLIN( 128)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 128)								int elementSize = _this->bytesPerElement;
HXDLIN( 128)								if ((view1->type == _this->type)) {
HXDLIN( 128)									int srcLength = srcData->length;
HXDLIN( 128)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 128)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 128)									_this->buffer = this1;
HXDLIN( 128)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXDLIN( 128)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 128)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 128)								_this->byteOffset = 0;
HXDLIN( 128)								_this->length = srcLength;
HXDLIN( 128)								this2 = _this;
            							}
            							else {
HXDLIN( 128)								if (::hx::IsNotNull( buffer )) {
HXDLIN( 128)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,3);
HXDLIN( 128)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 128)									if ((in_byteOffset < 0)) {
HXDLIN( 128)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 128)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXDLIN( 128)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 128)									int bufferByteLength = buffer->length;
HXDLIN( 128)									int elementSize = _this->bytesPerElement;
HXDLIN( 128)									int newByteLength = bufferByteLength;
HXDLIN( 128)									if (::hx::IsNull( len )) {
HXDLIN( 128)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 128)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXDLIN( 128)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 128)										if ((newByteLength < 0)) {
HXDLIN( 128)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXDLIN( 128)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 128)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 128)										if ((newRange > bufferByteLength)) {
HXDLIN( 128)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 128)									_this->buffer = buffer;
HXDLIN( 128)									_this->byteOffset = in_byteOffset;
HXDLIN( 128)									_this->byteLength = newByteLength;
HXDLIN( 128)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 128)									this2 = _this;
            								}
            								else {
HXDLIN( 128)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Int32Array",9b,2e,53,61)));
            								}
            							}
            						}
            					}
            				}
HXDLIN( 128)				view = this2;
            			}
            			break;
            			case (int)4: {
HXDLIN( 128)				 ::Dynamic elements = null();
HXDLIN( 128)				 ::haxe::io::Bytes buffer = this1->buffer;
HXDLIN( 128)				::cpp::VirtualArray array = null();
HXDLIN( 128)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 128)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 128)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 128)				if (::hx::IsNull( byteoffset )) {
HXDLIN( 128)					byteoffset = 0;
            				}
HXDLIN( 128)				 ::lime::utils::ArrayBufferView this2;
HXDLIN( 128)				if (::hx::IsNotNull( elements )) {
HXDLIN( 128)					this2 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,4);
            				}
            				else {
HXDLIN( 128)					if (::hx::IsNotNull( array )) {
HXDLIN( 128)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 128)						_this->byteOffset = 0;
HXDLIN( 128)						_this->length = array->get_length();
HXDLIN( 128)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 128)						 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 128)						_this->buffer = this1;
HXDLIN( 128)						_this->copyFromArray(array,null());
HXDLIN( 128)						this2 = _this;
            					}
            					else {
HXDLIN( 128)						if (::hx::IsNotNull( vector )) {
HXDLIN( 128)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 128)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 128)							_this->byteOffset = 0;
HXDLIN( 128)							_this->length = array->get_length();
HXDLIN( 128)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 128)							 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 128)							_this->buffer = this1;
HXDLIN( 128)							_this->copyFromArray(array,null());
HXDLIN( 128)							this2 = _this;
            						}
            						else {
HXDLIN( 128)							if (::hx::IsNotNull( view1 )) {
HXDLIN( 128)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 128)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 128)								int srcLength = view1->length;
HXDLIN( 128)								int srcByteOffset = view1->byteOffset;
HXDLIN( 128)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 128)								int elementSize = _this->bytesPerElement;
HXDLIN( 128)								if ((view1->type == _this->type)) {
HXDLIN( 128)									int srcLength = srcData->length;
HXDLIN( 128)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 128)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 128)									_this->buffer = this1;
HXDLIN( 128)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXDLIN( 128)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 128)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 128)								_this->byteOffset = 0;
HXDLIN( 128)								_this->length = srcLength;
HXDLIN( 128)								this2 = _this;
            							}
            							else {
HXDLIN( 128)								if (::hx::IsNotNull( buffer )) {
HXDLIN( 128)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 128)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 128)									if ((in_byteOffset < 0)) {
HXDLIN( 128)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 128)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXDLIN( 128)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 128)									int bufferByteLength = buffer->length;
HXDLIN( 128)									int elementSize = _this->bytesPerElement;
HXDLIN( 128)									int newByteLength = bufferByteLength;
HXDLIN( 128)									if (::hx::IsNull( len )) {
HXDLIN( 128)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 128)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXDLIN( 128)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 128)										if ((newByteLength < 0)) {
HXDLIN( 128)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXDLIN( 128)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 128)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 128)										if ((newRange > bufferByteLength)) {
HXDLIN( 128)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 128)									_this->buffer = buffer;
HXDLIN( 128)									_this->byteOffset = in_byteOffset;
HXDLIN( 128)									_this->byteLength = newByteLength;
HXDLIN( 128)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 128)									this2 = _this;
            								}
            								else {
HXDLIN( 128)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt8Array",6b,44,d5,85)));
            								}
            							}
            						}
            					}
            				}
HXDLIN( 128)				view = this2;
            			}
            			break;
            			case (int)5: {
HXDLIN( 128)				 ::Dynamic elements = null();
HXDLIN( 128)				 ::haxe::io::Bytes buffer = this1->buffer;
HXDLIN( 128)				::cpp::VirtualArray array = null();
HXDLIN( 128)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 128)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 128)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 128)				if (::hx::IsNull( byteoffset )) {
HXDLIN( 128)					byteoffset = 0;
            				}
HXDLIN( 128)				 ::lime::utils::ArrayBufferView this2;
HXDLIN( 128)				if (::hx::IsNotNull( elements )) {
HXDLIN( 128)					this2 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,5);
            				}
            				else {
HXDLIN( 128)					if (::hx::IsNotNull( array )) {
HXDLIN( 128)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,5);
HXDLIN( 128)						_this->byteOffset = 0;
HXDLIN( 128)						_this->length = array->get_length();
HXDLIN( 128)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 128)						 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 128)						_this->buffer = this1;
HXDLIN( 128)						_this->copyFromArray(array,null());
HXDLIN( 128)						this2 = _this;
            					}
            					else {
HXDLIN( 128)						if (::hx::IsNotNull( vector )) {
HXDLIN( 128)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,5);
HXDLIN( 128)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 128)							_this->byteOffset = 0;
HXDLIN( 128)							_this->length = array->get_length();
HXDLIN( 128)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 128)							 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 128)							_this->buffer = this1;
HXDLIN( 128)							_this->copyFromArray(array,null());
HXDLIN( 128)							this2 = _this;
            						}
            						else {
HXDLIN( 128)							if (::hx::IsNotNull( view1 )) {
HXDLIN( 128)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,5);
HXDLIN( 128)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 128)								int srcLength = view1->length;
HXDLIN( 128)								int srcByteOffset = view1->byteOffset;
HXDLIN( 128)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 128)								int elementSize = _this->bytesPerElement;
HXDLIN( 128)								if ((view1->type == _this->type)) {
HXDLIN( 128)									int srcLength = srcData->length;
HXDLIN( 128)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 128)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 128)									_this->buffer = this1;
HXDLIN( 128)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXDLIN( 128)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 128)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 128)								_this->byteOffset = 0;
HXDLIN( 128)								_this->length = srcLength;
HXDLIN( 128)								this2 = _this;
            							}
            							else {
HXDLIN( 128)								if (::hx::IsNotNull( buffer )) {
HXDLIN( 128)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,5);
HXDLIN( 128)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 128)									if ((in_byteOffset < 0)) {
HXDLIN( 128)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 128)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXDLIN( 128)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 128)									int bufferByteLength = buffer->length;
HXDLIN( 128)									int elementSize = _this->bytesPerElement;
HXDLIN( 128)									int newByteLength = bufferByteLength;
HXDLIN( 128)									if (::hx::IsNull( len )) {
HXDLIN( 128)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 128)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXDLIN( 128)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 128)										if ((newByteLength < 0)) {
HXDLIN( 128)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXDLIN( 128)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 128)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 128)										if ((newRange > bufferByteLength)) {
HXDLIN( 128)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 128)									_this->buffer = buffer;
HXDLIN( 128)									_this->byteOffset = in_byteOffset;
HXDLIN( 128)									_this->byteLength = newByteLength;
HXDLIN( 128)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 128)									this2 = _this;
            								}
            								else {
HXDLIN( 128)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt8ClampedArray",8d,06,77,13)));
            								}
            							}
            						}
            					}
            				}
HXDLIN( 128)				view = this2;
            			}
            			break;
            			case (int)6: {
HXDLIN( 128)				 ::Dynamic elements = null();
HXDLIN( 128)				 ::haxe::io::Bytes buffer = this1->buffer;
HXDLIN( 128)				::cpp::VirtualArray array = null();
HXDLIN( 128)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 128)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 128)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 128)				if (::hx::IsNull( byteoffset )) {
HXDLIN( 128)					byteoffset = 0;
            				}
HXDLIN( 128)				 ::lime::utils::ArrayBufferView this2;
HXDLIN( 128)				if (::hx::IsNotNull( elements )) {
HXDLIN( 128)					this2 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,6);
            				}
            				else {
HXDLIN( 128)					if (::hx::IsNotNull( array )) {
HXDLIN( 128)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 128)						_this->byteOffset = 0;
HXDLIN( 128)						_this->length = array->get_length();
HXDLIN( 128)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 128)						 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 128)						_this->buffer = this1;
HXDLIN( 128)						_this->copyFromArray(array,null());
HXDLIN( 128)						this2 = _this;
            					}
            					else {
HXDLIN( 128)						if (::hx::IsNotNull( vector )) {
HXDLIN( 128)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 128)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 128)							_this->byteOffset = 0;
HXDLIN( 128)							_this->length = array->get_length();
HXDLIN( 128)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 128)							 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 128)							_this->buffer = this1;
HXDLIN( 128)							_this->copyFromArray(array,null());
HXDLIN( 128)							this2 = _this;
            						}
            						else {
HXDLIN( 128)							if (::hx::IsNotNull( view1 )) {
HXDLIN( 128)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 128)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 128)								int srcLength = view1->length;
HXDLIN( 128)								int srcByteOffset = view1->byteOffset;
HXDLIN( 128)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 128)								int elementSize = _this->bytesPerElement;
HXDLIN( 128)								if ((view1->type == _this->type)) {
HXDLIN( 128)									int srcLength = srcData->length;
HXDLIN( 128)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 128)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 128)									_this->buffer = this1;
HXDLIN( 128)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXDLIN( 128)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 128)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 128)								_this->byteOffset = 0;
HXDLIN( 128)								_this->length = srcLength;
HXDLIN( 128)								this2 = _this;
            							}
            							else {
HXDLIN( 128)								if (::hx::IsNotNull( buffer )) {
HXDLIN( 128)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 128)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 128)									if ((in_byteOffset < 0)) {
HXDLIN( 128)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 128)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXDLIN( 128)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 128)									int bufferByteLength = buffer->length;
HXDLIN( 128)									int elementSize = _this->bytesPerElement;
HXDLIN( 128)									int newByteLength = bufferByteLength;
HXDLIN( 128)									if (::hx::IsNull( len )) {
HXDLIN( 128)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 128)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXDLIN( 128)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 128)										if ((newByteLength < 0)) {
HXDLIN( 128)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXDLIN( 128)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 128)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 128)										if ((newRange > bufferByteLength)) {
HXDLIN( 128)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 128)									_this->buffer = buffer;
HXDLIN( 128)									_this->byteOffset = in_byteOffset;
HXDLIN( 128)									_this->byteLength = newByteLength;
HXDLIN( 128)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 128)									this2 = _this;
            								}
            								else {
HXDLIN( 128)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt16Array",0a,c7,2d,d5)));
            								}
            							}
            						}
            					}
            				}
HXDLIN( 128)				view = this2;
            			}
            			break;
            			case (int)7: {
HXDLIN( 128)				 ::Dynamic elements = null();
HXDLIN( 128)				 ::haxe::io::Bytes buffer = this1->buffer;
HXDLIN( 128)				::cpp::VirtualArray array = null();
HXDLIN( 128)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 128)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 128)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 128)				if (::hx::IsNull( byteoffset )) {
HXDLIN( 128)					byteoffset = 0;
            				}
HXDLIN( 128)				 ::lime::utils::ArrayBufferView this2;
HXDLIN( 128)				if (::hx::IsNotNull( elements )) {
HXDLIN( 128)					this2 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,7);
            				}
            				else {
HXDLIN( 128)					if (::hx::IsNotNull( array )) {
HXDLIN( 128)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,7);
HXDLIN( 128)						_this->byteOffset = 0;
HXDLIN( 128)						_this->length = array->get_length();
HXDLIN( 128)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 128)						 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 128)						_this->buffer = this1;
HXDLIN( 128)						_this->copyFromArray(array,null());
HXDLIN( 128)						this2 = _this;
            					}
            					else {
HXDLIN( 128)						if (::hx::IsNotNull( vector )) {
HXDLIN( 128)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,7);
HXDLIN( 128)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 128)							_this->byteOffset = 0;
HXDLIN( 128)							_this->length = array->get_length();
HXDLIN( 128)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 128)							 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 128)							_this->buffer = this1;
HXDLIN( 128)							_this->copyFromArray(array,null());
HXDLIN( 128)							this2 = _this;
            						}
            						else {
HXDLIN( 128)							if (::hx::IsNotNull( view1 )) {
HXDLIN( 128)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,7);
HXDLIN( 128)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 128)								int srcLength = view1->length;
HXDLIN( 128)								int srcByteOffset = view1->byteOffset;
HXDLIN( 128)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 128)								int elementSize = _this->bytesPerElement;
HXDLIN( 128)								if ((view1->type == _this->type)) {
HXDLIN( 128)									int srcLength = srcData->length;
HXDLIN( 128)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 128)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 128)									_this->buffer = this1;
HXDLIN( 128)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXDLIN( 128)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 128)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 128)								_this->byteOffset = 0;
HXDLIN( 128)								_this->length = srcLength;
HXDLIN( 128)								this2 = _this;
            							}
            							else {
HXDLIN( 128)								if (::hx::IsNotNull( buffer )) {
HXDLIN( 128)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,7);
HXDLIN( 128)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 128)									if ((in_byteOffset < 0)) {
HXDLIN( 128)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 128)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXDLIN( 128)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 128)									int bufferByteLength = buffer->length;
HXDLIN( 128)									int elementSize = _this->bytesPerElement;
HXDLIN( 128)									int newByteLength = bufferByteLength;
HXDLIN( 128)									if (::hx::IsNull( len )) {
HXDLIN( 128)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 128)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXDLIN( 128)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 128)										if ((newByteLength < 0)) {
HXDLIN( 128)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXDLIN( 128)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 128)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 128)										if ((newRange > bufferByteLength)) {
HXDLIN( 128)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 128)									_this->buffer = buffer;
HXDLIN( 128)									_this->byteOffset = in_byteOffset;
HXDLIN( 128)									_this->byteLength = newByteLength;
HXDLIN( 128)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 128)									this2 = _this;
            								}
            								else {
HXDLIN( 128)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt32Array",10,43,eb,8e)));
            								}
            							}
            						}
            					}
            				}
HXDLIN( 128)				view = this2;
            			}
            			break;
            			case (int)8: {
HXDLIN( 128)				 ::Dynamic elements = null();
HXDLIN( 128)				 ::haxe::io::Bytes buffer = this1->buffer;
HXDLIN( 128)				::cpp::VirtualArray array = null();
HXDLIN( 128)				 ::openfl::_Vector::FloatVector vector = null();
HXDLIN( 128)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 128)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 128)				if (::hx::IsNull( byteoffset )) {
HXDLIN( 128)					byteoffset = 0;
            				}
HXDLIN( 128)				 ::lime::utils::ArrayBufferView this2;
HXDLIN( 128)				if (::hx::IsNotNull( elements )) {
HXDLIN( 128)					this2 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,8);
            				}
            				else {
HXDLIN( 128)					if (::hx::IsNotNull( array )) {
HXDLIN( 128)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 128)						_this->byteOffset = 0;
HXDLIN( 128)						_this->length = array->get_length();
HXDLIN( 128)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 128)						 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 128)						_this->buffer = this1;
HXDLIN( 128)						_this->copyFromArray(array,null());
HXDLIN( 128)						this2 = _this;
            					}
            					else {
HXDLIN( 128)						if (::hx::IsNotNull( vector )) {
HXDLIN( 128)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 128)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 128)							_this->byteOffset = 0;
HXDLIN( 128)							_this->length = array->get_length();
HXDLIN( 128)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 128)							 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 128)							_this->buffer = this1;
HXDLIN( 128)							_this->copyFromArray(array,null());
HXDLIN( 128)							this2 = _this;
            						}
            						else {
HXDLIN( 128)							if (::hx::IsNotNull( view1 )) {
HXDLIN( 128)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 128)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 128)								int srcLength = view1->length;
HXDLIN( 128)								int srcByteOffset = view1->byteOffset;
HXDLIN( 128)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 128)								int elementSize = _this->bytesPerElement;
HXDLIN( 128)								if ((view1->type == _this->type)) {
HXDLIN( 128)									int srcLength = srcData->length;
HXDLIN( 128)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 128)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 128)									_this->buffer = this1;
HXDLIN( 128)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXDLIN( 128)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 128)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 128)								_this->byteOffset = 0;
HXDLIN( 128)								_this->length = srcLength;
HXDLIN( 128)								this2 = _this;
            							}
            							else {
HXDLIN( 128)								if (::hx::IsNotNull( buffer )) {
HXDLIN( 128)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 128)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 128)									if ((in_byteOffset < 0)) {
HXDLIN( 128)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 128)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXDLIN( 128)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 128)									int bufferByteLength = buffer->length;
HXDLIN( 128)									int elementSize = _this->bytesPerElement;
HXDLIN( 128)									int newByteLength = bufferByteLength;
HXDLIN( 128)									if (::hx::IsNull( len )) {
HXDLIN( 128)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 128)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXDLIN( 128)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 128)										if ((newByteLength < 0)) {
HXDLIN( 128)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXDLIN( 128)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 128)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 128)										if ((newRange > bufferByteLength)) {
HXDLIN( 128)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 128)									_this->buffer = buffer;
HXDLIN( 128)									_this->byteOffset = in_byteOffset;
HXDLIN( 128)									_this->byteLength = newByteLength;
HXDLIN( 128)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 128)									this2 = _this;
            								}
            								else {
HXDLIN( 128)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Float32Array",8e,c1,f4,d4)));
            								}
            							}
            						}
            					}
            				}
HXDLIN( 128)				view = this2;
            			}
            			break;
            			case (int)9: {
HXDLIN( 128)				 ::Dynamic elements = null();
HXDLIN( 128)				 ::haxe::io::Bytes buffer = this1->buffer;
HXDLIN( 128)				::cpp::VirtualArray array = null();
HXDLIN( 128)				 ::openfl::_Vector::FloatVector vector = null();
HXDLIN( 128)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 128)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 128)				if (::hx::IsNull( byteoffset )) {
HXDLIN( 128)					byteoffset = 0;
            				}
HXDLIN( 128)				 ::lime::utils::ArrayBufferView this2;
HXDLIN( 128)				if (::hx::IsNotNull( elements )) {
HXDLIN( 128)					this2 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,9);
            				}
            				else {
HXDLIN( 128)					if (::hx::IsNotNull( array )) {
HXDLIN( 128)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,9);
HXDLIN( 128)						_this->byteOffset = 0;
HXDLIN( 128)						_this->length = array->get_length();
HXDLIN( 128)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 128)						 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 128)						_this->buffer = this1;
HXDLIN( 128)						_this->copyFromArray(array,null());
HXDLIN( 128)						this2 = _this;
            					}
            					else {
HXDLIN( 128)						if (::hx::IsNotNull( vector )) {
HXDLIN( 128)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,9);
HXDLIN( 128)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 128)							_this->byteOffset = 0;
HXDLIN( 128)							_this->length = array->get_length();
HXDLIN( 128)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 128)							 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 128)							_this->buffer = this1;
HXDLIN( 128)							_this->copyFromArray(array,null());
HXDLIN( 128)							this2 = _this;
            						}
            						else {
HXDLIN( 128)							if (::hx::IsNotNull( view1 )) {
HXDLIN( 128)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,9);
HXDLIN( 128)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 128)								int srcLength = view1->length;
HXDLIN( 128)								int srcByteOffset = view1->byteOffset;
HXDLIN( 128)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 128)								int elementSize = _this->bytesPerElement;
HXDLIN( 128)								if ((view1->type == _this->type)) {
HXDLIN( 128)									int srcLength = srcData->length;
HXDLIN( 128)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 128)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 128)									_this->buffer = this1;
HXDLIN( 128)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXDLIN( 128)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 128)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 128)								_this->byteOffset = 0;
HXDLIN( 128)								_this->length = srcLength;
HXDLIN( 128)								this2 = _this;
            							}
            							else {
HXDLIN( 128)								if (::hx::IsNotNull( buffer )) {
HXDLIN( 128)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,9);
HXDLIN( 128)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 128)									if ((in_byteOffset < 0)) {
HXDLIN( 128)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 128)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXDLIN( 128)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 128)									int bufferByteLength = buffer->length;
HXDLIN( 128)									int elementSize = _this->bytesPerElement;
HXDLIN( 128)									int newByteLength = bufferByteLength;
HXDLIN( 128)									if (::hx::IsNull( len )) {
HXDLIN( 128)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 128)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXDLIN( 128)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 128)										if ((newByteLength < 0)) {
HXDLIN( 128)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXDLIN( 128)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 128)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 128)										if ((newRange > bufferByteLength)) {
HXDLIN( 128)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 128)									_this->buffer = buffer;
HXDLIN( 128)									_this->byteOffset = in_byteOffset;
HXDLIN( 128)									_this->byteLength = newByteLength;
HXDLIN( 128)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 128)									this2 = _this;
            								}
            								else {
HXDLIN( 128)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Float64Array",8f,de,6b,1e)));
            								}
            							}
            						}
            					}
            				}
HXDLIN( 128)				view = this2;
            			}
            			break;
            		}
HXDLIN( 128)		return view;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(UInt8Array_Impl__obj,subarray,return )

 ::lime::utils::ArrayBufferView UInt8Array_Impl__obj::fromBytes( ::haxe::io::Bytes bytes, ::Dynamic __o_byteOffset, ::Dynamic len){
            		 ::Dynamic byteOffset = __o_byteOffset;
            		if (::hx::IsNull(__o_byteOffset)) byteOffset = 0;
            	HX_GC_STACKFRAME(&_hx_pos_56a8ecc5c2b3800c_133_fromBytes)
HXDLIN( 133)		 ::Dynamic elements = null();
HXDLIN( 133)		::cpp::VirtualArray array = null();
HXDLIN( 133)		 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 133)		 ::lime::utils::ArrayBufferView view = null();
HXDLIN( 133)		 ::Dynamic byteoffset = byteOffset;
HXDLIN( 133)		if (::hx::IsNull( byteoffset )) {
HXDLIN( 133)			byteoffset = 0;
            		}
HXDLIN( 133)		 ::lime::utils::ArrayBufferView this1;
HXDLIN( 133)		if (::hx::IsNotNull( elements )) {
HXDLIN( 133)			this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,4);
            		}
            		else {
HXDLIN( 133)			if (::hx::IsNotNull( array )) {
HXDLIN( 133)				 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 133)				_this->byteOffset = 0;
HXDLIN( 133)				_this->length = array->get_length();
HXDLIN( 133)				_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 133)				 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 133)				_this->buffer = this2;
HXDLIN( 133)				_this->copyFromArray(array,null());
HXDLIN( 133)				this1 = _this;
            			}
            			else {
HXDLIN( 133)				if (::hx::IsNotNull( vector )) {
HXDLIN( 133)					 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 133)					::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 133)					_this->byteOffset = 0;
HXDLIN( 133)					_this->length = array->get_length();
HXDLIN( 133)					_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 133)					 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 133)					_this->buffer = this2;
HXDLIN( 133)					_this->copyFromArray(array,null());
HXDLIN( 133)					this1 = _this;
            				}
            				else {
HXDLIN( 133)					if (::hx::IsNotNull( view )) {
HXDLIN( 133)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 133)						 ::haxe::io::Bytes srcData = view->buffer;
HXDLIN( 133)						int srcLength = view->length;
HXDLIN( 133)						int srcByteOffset = view->byteOffset;
HXDLIN( 133)						int srcElementSize = view->bytesPerElement;
HXDLIN( 133)						int elementSize = _this->bytesPerElement;
HXDLIN( 133)						if ((view->type == _this->type)) {
HXDLIN( 133)							int srcLength = srcData->length;
HXDLIN( 133)							int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 133)							 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 133)							_this->buffer = this1;
HXDLIN( 133)							_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            						}
            						else {
HXDLIN( 133)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            						}
HXDLIN( 133)						_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 133)						_this->byteOffset = 0;
HXDLIN( 133)						_this->length = srcLength;
HXDLIN( 133)						this1 = _this;
            					}
            					else {
HXDLIN( 133)						if (::hx::IsNotNull( bytes )) {
HXDLIN( 133)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 133)							int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 133)							if ((in_byteOffset < 0)) {
HXDLIN( 133)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            							}
HXDLIN( 133)							if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXDLIN( 133)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            							}
HXDLIN( 133)							int bufferByteLength = bytes->length;
HXDLIN( 133)							int elementSize = _this->bytesPerElement;
HXDLIN( 133)							int newByteLength = bufferByteLength;
HXDLIN( 133)							if (::hx::IsNull( len )) {
HXDLIN( 133)								newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 133)								if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXDLIN( 133)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
HXDLIN( 133)								if ((newByteLength < 0)) {
HXDLIN( 133)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
            							}
            							else {
HXDLIN( 133)								newByteLength = (( (int)(len) ) * _this->bytesPerElement);
HXDLIN( 133)								int newRange = (in_byteOffset + newByteLength);
HXDLIN( 133)								if ((newRange > bufferByteLength)) {
HXDLIN( 133)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
            							}
HXDLIN( 133)							_this->buffer = bytes;
HXDLIN( 133)							_this->byteOffset = in_byteOffset;
HXDLIN( 133)							_this->byteLength = newByteLength;
HXDLIN( 133)							_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 133)							this1 = _this;
            						}
            						else {
HXDLIN( 133)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt8Array",6b,44,d5,85)));
            						}
            					}
            				}
            			}
            		}
HXDLIN( 133)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(UInt8Array_Impl__obj,fromBytes,return )

 ::haxe::io::Bytes UInt8Array_Impl__obj::toBytes( ::lime::utils::ArrayBufferView this1){
            	HX_STACKFRAME(&_hx_pos_56a8ecc5c2b3800c_138_toBytes)
HXDLIN( 138)		return this1->buffer;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(UInt8Array_Impl__obj,toBytes,return )

::String UInt8Array_Impl__obj::toString( ::lime::utils::ArrayBufferView this1){
            	HX_STACKFRAME(&_hx_pos_56a8ecc5c2b3800c_143_toString)
HXDLIN( 143)		if (::hx::IsNotNull( this1 )) {
HXDLIN( 143)			return ((((HX_("UInt8Array [byteLength:",d6,2f,a0,d4) + this1->byteLength) + HX_(", length:",a0,04,67,ef)) + this1->length) + HX_("]",5d,00,00,00));
            		}
            		else {
HXDLIN( 143)			return null();
            		}
HXDLIN( 143)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(UInt8Array_Impl__obj,toString,return )

int UInt8Array_Impl__obj::get_length( ::lime::utils::ArrayBufferView this1){
            	HX_STACKFRAME(&_hx_pos_56a8ecc5c2b3800c_146_get_length)
HXDLIN( 146)		return this1->length;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(UInt8Array_Impl__obj,get_length,return )


UInt8Array_Impl__obj::UInt8Array_Impl__obj()
{
}

bool UInt8Array_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"toBytes") ) { outValue = toBytes_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"subarray") ) { outValue = subarray_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { outValue = fromBytes_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { outValue = get_length_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *UInt8Array_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo UInt8Array_Impl__obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &UInt8Array_Impl__obj::BYTES_PER_ELEMENT,HX_("BYTES_PER_ELEMENT",a6,04,1d,cc)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void UInt8Array_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UInt8Array_Impl__obj::BYTES_PER_ELEMENT,"BYTES_PER_ELEMENT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void UInt8Array_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UInt8Array_Impl__obj::BYTES_PER_ELEMENT,"BYTES_PER_ELEMENT");
};

#endif

::hx::Class UInt8Array_Impl__obj::__mClass;

static ::String UInt8Array_Impl__obj_sStaticFields[] = {
	HX_("BYTES_PER_ELEMENT",a6,04,1d,cc),
	HX_("_new",61,15,1f,3f),
	HX_("subarray",19,54,81,07),
	HX_("fromBytes",a1,f2,20,72),
	HX_("toBytes",f0,54,1c,8a),
	HX_("toString",ac,d0,6e,38),
	HX_("get_length",af,04,8f,8f),
	::String(null())
};

void UInt8Array_Impl__obj::__register()
{
	UInt8Array_Impl__obj _hx_dummy;
	UInt8Array_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.utils._UInt8Array.UInt8Array_Impl_",c5,4a,c5,12);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &UInt8Array_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = UInt8Array_Impl__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(UInt8Array_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< UInt8Array_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = UInt8Array_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = UInt8Array_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = UInt8Array_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void UInt8Array_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_56a8ecc5c2b3800c_90_boot)
HXDLIN(  90)		BYTES_PER_ELEMENT = 1;
            	}
}

} // end namespace lime
} // end namespace utils
} // end namespace _UInt8Array
