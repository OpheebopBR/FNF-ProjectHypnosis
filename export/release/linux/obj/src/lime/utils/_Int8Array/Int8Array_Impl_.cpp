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
#ifndef INCLUDED_lime_utils__Int8Array_Int8Array_Impl_
#include <lime/utils/_Int8Array/Int8Array_Impl_.h>
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

HX_LOCAL_STACK_FRAME(_hx_pos_6e16da696af5edec_96__new,"lime.utils._Int8Array.Int8Array_Impl_","_new",0xb4d98cc6,"lime.utils._Int8Array.Int8Array_Impl_._new","lime/utils/Int8Array.hx",96,0x4ea19046)
HX_LOCAL_STACK_FRAME(_hx_pos_6e16da696af5edec_129_subarray,"lime.utils._Int8Array.Int8Array_Impl_","subarray",0xb8bbe1fe,"lime.utils._Int8Array.Int8Array_Impl_.subarray","lime/utils/Int8Array.hx",129,0x4ea19046)
HX_LOCAL_STACK_FRAME(_hx_pos_6e16da696af5edec_133_fromBytes,"lime.utils._Int8Array.Int8Array_Impl_","fromBytes",0xd4228d1c,"lime.utils._Int8Array.Int8Array_Impl_.fromBytes","lime/utils/Int8Array.hx",133,0x4ea19046)
HX_LOCAL_STACK_FRAME(_hx_pos_6e16da696af5edec_141_toBytes,"lime.utils._Int8Array.Int8Array_Impl_","toBytes",0xcfc8caab,"lime.utils._Int8Array.Int8Array_Impl_.toBytes","lime/utils/Int8Array.hx",141,0x4ea19046)
HX_LOCAL_STACK_FRAME(_hx_pos_6e16da696af5edec_146_get_length,"lime.utils._Int8Array.Int8Array_Impl_","get_length",0xeef495d4,"lime.utils._Int8Array.Int8Array_Impl_.get_length","lime/utils/Int8Array.hx",146,0x4ea19046)
HX_LOCAL_STACK_FRAME(_hx_pos_6e16da696af5edec_164_toString,"lime.utils._Int8Array.Int8Array_Impl_","toString",0xe9a95e91,"lime.utils._Int8Array.Int8Array_Impl_.toString","lime/utils/Int8Array.hx",164,0x4ea19046)
HX_LOCAL_STACK_FRAME(_hx_pos_6e16da696af5edec_91_boot,"lime.utils._Int8Array.Int8Array_Impl_","boot",0xb6d5fb97,"lime.utils._Int8Array.Int8Array_Impl_.boot","lime/utils/Int8Array.hx",91,0x4ea19046)
namespace lime{
namespace utils{
namespace _Int8Array{

void Int8Array_Impl__obj::__construct() { }

Dynamic Int8Array_Impl__obj::__CreateEmpty() { return new Int8Array_Impl__obj; }

void *Int8Array_Impl__obj::_hx_vtable = 0;

Dynamic Int8Array_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Int8Array_Impl__obj > _hx_result = new Int8Array_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Int8Array_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x475b774b;
}

int Int8Array_Impl__obj::BYTES_PER_ELEMENT;

 ::lime::utils::ArrayBufferView Int8Array_Impl__obj::_new( ::Dynamic elements, ::haxe::io::Bytes buffer,::cpp::VirtualArray array, ::openfl::_Vector::IntVector vector, ::lime::utils::ArrayBufferView view, ::Dynamic __o_byteoffset, ::Dynamic len){
            		 ::Dynamic byteoffset = __o_byteoffset;
            		if (::hx::IsNull(__o_byteoffset)) byteoffset = 0;
            	HX_GC_STACKFRAME(&_hx_pos_6e16da696af5edec_96__new)
HXDLIN(  96)		 ::lime::utils::ArrayBufferView this1;
HXLINE(  99)		if (::hx::IsNotNull( elements )) {
HXLINE( 101)			this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,1);
            		}
            		else {
HXLINE( 103)			if (::hx::IsNotNull( array )) {
HXLINE( 105)				 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,1);
HXDLIN( 105)				_this->byteOffset = 0;
HXDLIN( 105)				_this->length = array->get_length();
HXDLIN( 105)				_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 105)				 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 105)				_this->buffer = this2;
HXDLIN( 105)				_this->copyFromArray(array,null());
HXDLIN( 105)				this1 = _this;
            			}
            			else {
HXLINE( 108)				if (::hx::IsNotNull( vector )) {
HXLINE( 110)					 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,1);
HXDLIN( 110)					::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 110)					_this->byteOffset = 0;
HXDLIN( 110)					_this->length = array->get_length();
HXDLIN( 110)					_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 110)					 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 110)					_this->buffer = this2;
HXDLIN( 110)					_this->copyFromArray(array,null());
HXDLIN( 110)					this1 = _this;
            				}
            				else {
HXLINE( 113)					if (::hx::IsNotNull( view )) {
HXLINE( 115)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,1);
HXDLIN( 115)						 ::haxe::io::Bytes srcData = view->buffer;
HXDLIN( 115)						int srcLength = view->length;
HXDLIN( 115)						int srcByteOffset = view->byteOffset;
HXDLIN( 115)						int srcElementSize = view->bytesPerElement;
HXDLIN( 115)						int elementSize = _this->bytesPerElement;
HXDLIN( 115)						if ((view->type == _this->type)) {
HXLINE( 115)							int srcLength = srcData->length;
HXDLIN( 115)							int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 115)							 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 115)							_this->buffer = this1;
HXDLIN( 115)							_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            						}
            						else {
HXLINE( 115)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            						}
HXDLIN( 115)						_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 115)						_this->byteOffset = 0;
HXDLIN( 115)						_this->length = srcLength;
HXDLIN( 115)						this1 = _this;
            					}
            					else {
HXLINE( 117)						if (::hx::IsNotNull( buffer )) {
HXLINE( 119)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,1);
HXDLIN( 119)							int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 119)							if ((in_byteOffset < 0)) {
HXLINE( 119)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            							}
HXDLIN( 119)							if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 119)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            							}
HXDLIN( 119)							int bufferByteLength = buffer->length;
HXDLIN( 119)							int elementSize = _this->bytesPerElement;
HXDLIN( 119)							int newByteLength = bufferByteLength;
HXDLIN( 119)							if (::hx::IsNull( len )) {
HXLINE( 119)								newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 119)								if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 119)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
HXDLIN( 119)								if ((newByteLength < 0)) {
HXLINE( 119)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
            							}
            							else {
HXLINE( 119)								newByteLength = (( (int)(len) ) * _this->bytesPerElement);
HXDLIN( 119)								int newRange = (in_byteOffset + newByteLength);
HXDLIN( 119)								if ((newRange > bufferByteLength)) {
HXLINE( 119)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
            							}
HXDLIN( 119)							_this->buffer = buffer;
HXDLIN( 119)							_this->byteOffset = in_byteOffset;
HXDLIN( 119)							_this->byteLength = newByteLength;
HXDLIN( 119)							_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 119)							this1 = _this;
            						}
            						else {
HXLINE( 123)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Int8Array",40,53,da,77)));
            						}
            					}
            				}
            			}
            		}
HXLINE(  96)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(Int8Array_Impl__obj,_new,return )

 ::lime::utils::ArrayBufferView Int8Array_Impl__obj::subarray( ::lime::utils::ArrayBufferView this1,int begin, ::Dynamic end){
            	HX_GC_STACKFRAME(&_hx_pos_6e16da696af5edec_129_subarray)
HXDLIN( 129)		 ::Dynamic end1 = end;
HXDLIN( 129)		if (::hx::IsNull( end1 )) {
HXDLIN( 129)			end1 = this1->length;
            		}
HXDLIN( 129)		int len = (( (int)(end1) ) - begin);
HXDLIN( 129)		int byte_offset = ((begin * this1->bytesPerElement) + this1->byteOffset);
HXDLIN( 129)		 ::lime::utils::ArrayBufferView view;
HXDLIN( 129)		switch((int)(this1->type)){
            			case (int)0: {
HXDLIN( 129)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("subarray on a blank ArrayBufferView",39,87,fd,19)));
            			}
            			break;
            			case (int)1: {
HXDLIN( 129)				 ::Dynamic elements = null();
HXDLIN( 129)				 ::haxe::io::Bytes buffer = this1->buffer;
HXDLIN( 129)				::cpp::VirtualArray array = null();
HXDLIN( 129)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 129)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 129)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 129)				if (::hx::IsNull( byteoffset )) {
HXDLIN( 129)					byteoffset = 0;
            				}
HXDLIN( 129)				 ::lime::utils::ArrayBufferView this2;
HXDLIN( 129)				if (::hx::IsNotNull( elements )) {
HXDLIN( 129)					this2 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,1);
            				}
            				else {
HXDLIN( 129)					if (::hx::IsNotNull( array )) {
HXDLIN( 129)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,1);
HXDLIN( 129)						_this->byteOffset = 0;
HXDLIN( 129)						_this->length = array->get_length();
HXDLIN( 129)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 129)						 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 129)						_this->buffer = this1;
HXDLIN( 129)						_this->copyFromArray(array,null());
HXDLIN( 129)						this2 = _this;
            					}
            					else {
HXDLIN( 129)						if (::hx::IsNotNull( vector )) {
HXDLIN( 129)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,1);
HXDLIN( 129)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 129)							_this->byteOffset = 0;
HXDLIN( 129)							_this->length = array->get_length();
HXDLIN( 129)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 129)							 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 129)							_this->buffer = this1;
HXDLIN( 129)							_this->copyFromArray(array,null());
HXDLIN( 129)							this2 = _this;
            						}
            						else {
HXDLIN( 129)							if (::hx::IsNotNull( view1 )) {
HXDLIN( 129)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,1);
HXDLIN( 129)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 129)								int srcLength = view1->length;
HXDLIN( 129)								int srcByteOffset = view1->byteOffset;
HXDLIN( 129)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 129)								int elementSize = _this->bytesPerElement;
HXDLIN( 129)								if ((view1->type == _this->type)) {
HXDLIN( 129)									int srcLength = srcData->length;
HXDLIN( 129)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 129)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 129)									_this->buffer = this1;
HXDLIN( 129)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXDLIN( 129)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 129)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 129)								_this->byteOffset = 0;
HXDLIN( 129)								_this->length = srcLength;
HXDLIN( 129)								this2 = _this;
            							}
            							else {
HXDLIN( 129)								if (::hx::IsNotNull( buffer )) {
HXDLIN( 129)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,1);
HXDLIN( 129)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 129)									if ((in_byteOffset < 0)) {
HXDLIN( 129)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 129)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXDLIN( 129)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 129)									int bufferByteLength = buffer->length;
HXDLIN( 129)									int elementSize = _this->bytesPerElement;
HXDLIN( 129)									int newByteLength = bufferByteLength;
HXDLIN( 129)									if (::hx::IsNull( len )) {
HXDLIN( 129)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 129)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXDLIN( 129)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 129)										if ((newByteLength < 0)) {
HXDLIN( 129)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXDLIN( 129)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 129)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 129)										if ((newRange > bufferByteLength)) {
HXDLIN( 129)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 129)									_this->buffer = buffer;
HXDLIN( 129)									_this->byteOffset = in_byteOffset;
HXDLIN( 129)									_this->byteLength = newByteLength;
HXDLIN( 129)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 129)									this2 = _this;
            								}
            								else {
HXDLIN( 129)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Int8Array",40,53,da,77)));
            								}
            							}
            						}
            					}
            				}
HXDLIN( 129)				view = this2;
            			}
            			break;
            			case (int)2: {
HXDLIN( 129)				 ::Dynamic elements = null();
HXDLIN( 129)				 ::haxe::io::Bytes buffer = this1->buffer;
HXDLIN( 129)				::cpp::VirtualArray array = null();
HXDLIN( 129)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 129)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 129)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 129)				if (::hx::IsNull( byteoffset )) {
HXDLIN( 129)					byteoffset = 0;
            				}
HXDLIN( 129)				 ::lime::utils::ArrayBufferView this2;
HXDLIN( 129)				if (::hx::IsNotNull( elements )) {
HXDLIN( 129)					this2 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,2);
            				}
            				else {
HXDLIN( 129)					if (::hx::IsNotNull( array )) {
HXDLIN( 129)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,2);
HXDLIN( 129)						_this->byteOffset = 0;
HXDLIN( 129)						_this->length = array->get_length();
HXDLIN( 129)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 129)						 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 129)						_this->buffer = this1;
HXDLIN( 129)						_this->copyFromArray(array,null());
HXDLIN( 129)						this2 = _this;
            					}
            					else {
HXDLIN( 129)						if (::hx::IsNotNull( vector )) {
HXDLIN( 129)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,2);
HXDLIN( 129)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 129)							_this->byteOffset = 0;
HXDLIN( 129)							_this->length = array->get_length();
HXDLIN( 129)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 129)							 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 129)							_this->buffer = this1;
HXDLIN( 129)							_this->copyFromArray(array,null());
HXDLIN( 129)							this2 = _this;
            						}
            						else {
HXDLIN( 129)							if (::hx::IsNotNull( view1 )) {
HXDLIN( 129)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,2);
HXDLIN( 129)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 129)								int srcLength = view1->length;
HXDLIN( 129)								int srcByteOffset = view1->byteOffset;
HXDLIN( 129)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 129)								int elementSize = _this->bytesPerElement;
HXDLIN( 129)								if ((view1->type == _this->type)) {
HXDLIN( 129)									int srcLength = srcData->length;
HXDLIN( 129)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 129)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 129)									_this->buffer = this1;
HXDLIN( 129)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXDLIN( 129)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 129)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 129)								_this->byteOffset = 0;
HXDLIN( 129)								_this->length = srcLength;
HXDLIN( 129)								this2 = _this;
            							}
            							else {
HXDLIN( 129)								if (::hx::IsNotNull( buffer )) {
HXDLIN( 129)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,2);
HXDLIN( 129)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 129)									if ((in_byteOffset < 0)) {
HXDLIN( 129)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 129)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXDLIN( 129)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 129)									int bufferByteLength = buffer->length;
HXDLIN( 129)									int elementSize = _this->bytesPerElement;
HXDLIN( 129)									int newByteLength = bufferByteLength;
HXDLIN( 129)									if (::hx::IsNull( len )) {
HXDLIN( 129)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 129)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXDLIN( 129)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 129)										if ((newByteLength < 0)) {
HXDLIN( 129)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXDLIN( 129)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 129)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 129)										if ((newRange > bufferByteLength)) {
HXDLIN( 129)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 129)									_this->buffer = buffer;
HXDLIN( 129)									_this->byteOffset = in_byteOffset;
HXDLIN( 129)									_this->byteLength = newByteLength;
HXDLIN( 129)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 129)									this2 = _this;
            								}
            								else {
HXDLIN( 129)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Int16Array",95,b2,95,a7)));
            								}
            							}
            						}
            					}
            				}
HXDLIN( 129)				view = this2;
            			}
            			break;
            			case (int)3: {
HXDLIN( 129)				 ::Dynamic elements = null();
HXDLIN( 129)				 ::haxe::io::Bytes buffer = this1->buffer;
HXDLIN( 129)				::cpp::VirtualArray array = null();
HXDLIN( 129)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 129)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 129)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 129)				if (::hx::IsNull( byteoffset )) {
HXDLIN( 129)					byteoffset = 0;
            				}
HXDLIN( 129)				 ::lime::utils::ArrayBufferView this2;
HXDLIN( 129)				if (::hx::IsNotNull( elements )) {
HXDLIN( 129)					this2 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,3);
            				}
            				else {
HXDLIN( 129)					if (::hx::IsNotNull( array )) {
HXDLIN( 129)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,3);
HXDLIN( 129)						_this->byteOffset = 0;
HXDLIN( 129)						_this->length = array->get_length();
HXDLIN( 129)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 129)						 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 129)						_this->buffer = this1;
HXDLIN( 129)						_this->copyFromArray(array,null());
HXDLIN( 129)						this2 = _this;
            					}
            					else {
HXDLIN( 129)						if (::hx::IsNotNull( vector )) {
HXDLIN( 129)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,3);
HXDLIN( 129)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 129)							_this->byteOffset = 0;
HXDLIN( 129)							_this->length = array->get_length();
HXDLIN( 129)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 129)							 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 129)							_this->buffer = this1;
HXDLIN( 129)							_this->copyFromArray(array,null());
HXDLIN( 129)							this2 = _this;
            						}
            						else {
HXDLIN( 129)							if (::hx::IsNotNull( view1 )) {
HXDLIN( 129)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,3);
HXDLIN( 129)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 129)								int srcLength = view1->length;
HXDLIN( 129)								int srcByteOffset = view1->byteOffset;
HXDLIN( 129)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 129)								int elementSize = _this->bytesPerElement;
HXDLIN( 129)								if ((view1->type == _this->type)) {
HXDLIN( 129)									int srcLength = srcData->length;
HXDLIN( 129)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 129)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 129)									_this->buffer = this1;
HXDLIN( 129)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXDLIN( 129)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 129)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 129)								_this->byteOffset = 0;
HXDLIN( 129)								_this->length = srcLength;
HXDLIN( 129)								this2 = _this;
            							}
            							else {
HXDLIN( 129)								if (::hx::IsNotNull( buffer )) {
HXDLIN( 129)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,3);
HXDLIN( 129)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 129)									if ((in_byteOffset < 0)) {
HXDLIN( 129)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 129)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXDLIN( 129)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 129)									int bufferByteLength = buffer->length;
HXDLIN( 129)									int elementSize = _this->bytesPerElement;
HXDLIN( 129)									int newByteLength = bufferByteLength;
HXDLIN( 129)									if (::hx::IsNull( len )) {
HXDLIN( 129)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 129)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXDLIN( 129)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 129)										if ((newByteLength < 0)) {
HXDLIN( 129)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXDLIN( 129)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 129)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 129)										if ((newRange > bufferByteLength)) {
HXDLIN( 129)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 129)									_this->buffer = buffer;
HXDLIN( 129)									_this->byteOffset = in_byteOffset;
HXDLIN( 129)									_this->byteLength = newByteLength;
HXDLIN( 129)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 129)									this2 = _this;
            								}
            								else {
HXDLIN( 129)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Int32Array",9b,2e,53,61)));
            								}
            							}
            						}
            					}
            				}
HXDLIN( 129)				view = this2;
            			}
            			break;
            			case (int)4: {
HXDLIN( 129)				 ::Dynamic elements = null();
HXDLIN( 129)				 ::haxe::io::Bytes buffer = this1->buffer;
HXDLIN( 129)				::cpp::VirtualArray array = null();
HXDLIN( 129)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 129)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 129)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 129)				if (::hx::IsNull( byteoffset )) {
HXDLIN( 129)					byteoffset = 0;
            				}
HXDLIN( 129)				 ::lime::utils::ArrayBufferView this2;
HXDLIN( 129)				if (::hx::IsNotNull( elements )) {
HXDLIN( 129)					this2 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,4);
            				}
            				else {
HXDLIN( 129)					if (::hx::IsNotNull( array )) {
HXDLIN( 129)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 129)						_this->byteOffset = 0;
HXDLIN( 129)						_this->length = array->get_length();
HXDLIN( 129)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 129)						 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 129)						_this->buffer = this1;
HXDLIN( 129)						_this->copyFromArray(array,null());
HXDLIN( 129)						this2 = _this;
            					}
            					else {
HXDLIN( 129)						if (::hx::IsNotNull( vector )) {
HXDLIN( 129)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 129)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 129)							_this->byteOffset = 0;
HXDLIN( 129)							_this->length = array->get_length();
HXDLIN( 129)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 129)							 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 129)							_this->buffer = this1;
HXDLIN( 129)							_this->copyFromArray(array,null());
HXDLIN( 129)							this2 = _this;
            						}
            						else {
HXDLIN( 129)							if (::hx::IsNotNull( view1 )) {
HXDLIN( 129)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 129)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 129)								int srcLength = view1->length;
HXDLIN( 129)								int srcByteOffset = view1->byteOffset;
HXDLIN( 129)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 129)								int elementSize = _this->bytesPerElement;
HXDLIN( 129)								if ((view1->type == _this->type)) {
HXDLIN( 129)									int srcLength = srcData->length;
HXDLIN( 129)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 129)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 129)									_this->buffer = this1;
HXDLIN( 129)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXDLIN( 129)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 129)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 129)								_this->byteOffset = 0;
HXDLIN( 129)								_this->length = srcLength;
HXDLIN( 129)								this2 = _this;
            							}
            							else {
HXDLIN( 129)								if (::hx::IsNotNull( buffer )) {
HXDLIN( 129)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 129)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 129)									if ((in_byteOffset < 0)) {
HXDLIN( 129)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 129)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXDLIN( 129)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 129)									int bufferByteLength = buffer->length;
HXDLIN( 129)									int elementSize = _this->bytesPerElement;
HXDLIN( 129)									int newByteLength = bufferByteLength;
HXDLIN( 129)									if (::hx::IsNull( len )) {
HXDLIN( 129)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 129)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXDLIN( 129)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 129)										if ((newByteLength < 0)) {
HXDLIN( 129)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXDLIN( 129)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 129)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 129)										if ((newRange > bufferByteLength)) {
HXDLIN( 129)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 129)									_this->buffer = buffer;
HXDLIN( 129)									_this->byteOffset = in_byteOffset;
HXDLIN( 129)									_this->byteLength = newByteLength;
HXDLIN( 129)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 129)									this2 = _this;
            								}
            								else {
HXDLIN( 129)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt8Array",6b,44,d5,85)));
            								}
            							}
            						}
            					}
            				}
HXDLIN( 129)				view = this2;
            			}
            			break;
            			case (int)5: {
HXDLIN( 129)				 ::Dynamic elements = null();
HXDLIN( 129)				 ::haxe::io::Bytes buffer = this1->buffer;
HXDLIN( 129)				::cpp::VirtualArray array = null();
HXDLIN( 129)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 129)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 129)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 129)				if (::hx::IsNull( byteoffset )) {
HXDLIN( 129)					byteoffset = 0;
            				}
HXDLIN( 129)				 ::lime::utils::ArrayBufferView this2;
HXDLIN( 129)				if (::hx::IsNotNull( elements )) {
HXDLIN( 129)					this2 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,5);
            				}
            				else {
HXDLIN( 129)					if (::hx::IsNotNull( array )) {
HXDLIN( 129)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,5);
HXDLIN( 129)						_this->byteOffset = 0;
HXDLIN( 129)						_this->length = array->get_length();
HXDLIN( 129)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 129)						 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 129)						_this->buffer = this1;
HXDLIN( 129)						_this->copyFromArray(array,null());
HXDLIN( 129)						this2 = _this;
            					}
            					else {
HXDLIN( 129)						if (::hx::IsNotNull( vector )) {
HXDLIN( 129)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,5);
HXDLIN( 129)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 129)							_this->byteOffset = 0;
HXDLIN( 129)							_this->length = array->get_length();
HXDLIN( 129)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 129)							 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 129)							_this->buffer = this1;
HXDLIN( 129)							_this->copyFromArray(array,null());
HXDLIN( 129)							this2 = _this;
            						}
            						else {
HXDLIN( 129)							if (::hx::IsNotNull( view1 )) {
HXDLIN( 129)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,5);
HXDLIN( 129)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 129)								int srcLength = view1->length;
HXDLIN( 129)								int srcByteOffset = view1->byteOffset;
HXDLIN( 129)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 129)								int elementSize = _this->bytesPerElement;
HXDLIN( 129)								if ((view1->type == _this->type)) {
HXDLIN( 129)									int srcLength = srcData->length;
HXDLIN( 129)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 129)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 129)									_this->buffer = this1;
HXDLIN( 129)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXDLIN( 129)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 129)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 129)								_this->byteOffset = 0;
HXDLIN( 129)								_this->length = srcLength;
HXDLIN( 129)								this2 = _this;
            							}
            							else {
HXDLIN( 129)								if (::hx::IsNotNull( buffer )) {
HXDLIN( 129)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,5);
HXDLIN( 129)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 129)									if ((in_byteOffset < 0)) {
HXDLIN( 129)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 129)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXDLIN( 129)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 129)									int bufferByteLength = buffer->length;
HXDLIN( 129)									int elementSize = _this->bytesPerElement;
HXDLIN( 129)									int newByteLength = bufferByteLength;
HXDLIN( 129)									if (::hx::IsNull( len )) {
HXDLIN( 129)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 129)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXDLIN( 129)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 129)										if ((newByteLength < 0)) {
HXDLIN( 129)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXDLIN( 129)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 129)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 129)										if ((newRange > bufferByteLength)) {
HXDLIN( 129)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 129)									_this->buffer = buffer;
HXDLIN( 129)									_this->byteOffset = in_byteOffset;
HXDLIN( 129)									_this->byteLength = newByteLength;
HXDLIN( 129)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 129)									this2 = _this;
            								}
            								else {
HXDLIN( 129)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt8ClampedArray",8d,06,77,13)));
            								}
            							}
            						}
            					}
            				}
HXDLIN( 129)				view = this2;
            			}
            			break;
            			case (int)6: {
HXDLIN( 129)				 ::Dynamic elements = null();
HXDLIN( 129)				 ::haxe::io::Bytes buffer = this1->buffer;
HXDLIN( 129)				::cpp::VirtualArray array = null();
HXDLIN( 129)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 129)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 129)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 129)				if (::hx::IsNull( byteoffset )) {
HXDLIN( 129)					byteoffset = 0;
            				}
HXDLIN( 129)				 ::lime::utils::ArrayBufferView this2;
HXDLIN( 129)				if (::hx::IsNotNull( elements )) {
HXDLIN( 129)					this2 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,6);
            				}
            				else {
HXDLIN( 129)					if (::hx::IsNotNull( array )) {
HXDLIN( 129)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 129)						_this->byteOffset = 0;
HXDLIN( 129)						_this->length = array->get_length();
HXDLIN( 129)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 129)						 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 129)						_this->buffer = this1;
HXDLIN( 129)						_this->copyFromArray(array,null());
HXDLIN( 129)						this2 = _this;
            					}
            					else {
HXDLIN( 129)						if (::hx::IsNotNull( vector )) {
HXDLIN( 129)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 129)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 129)							_this->byteOffset = 0;
HXDLIN( 129)							_this->length = array->get_length();
HXDLIN( 129)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 129)							 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 129)							_this->buffer = this1;
HXDLIN( 129)							_this->copyFromArray(array,null());
HXDLIN( 129)							this2 = _this;
            						}
            						else {
HXDLIN( 129)							if (::hx::IsNotNull( view1 )) {
HXDLIN( 129)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 129)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 129)								int srcLength = view1->length;
HXDLIN( 129)								int srcByteOffset = view1->byteOffset;
HXDLIN( 129)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 129)								int elementSize = _this->bytesPerElement;
HXDLIN( 129)								if ((view1->type == _this->type)) {
HXDLIN( 129)									int srcLength = srcData->length;
HXDLIN( 129)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 129)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 129)									_this->buffer = this1;
HXDLIN( 129)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXDLIN( 129)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 129)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 129)								_this->byteOffset = 0;
HXDLIN( 129)								_this->length = srcLength;
HXDLIN( 129)								this2 = _this;
            							}
            							else {
HXDLIN( 129)								if (::hx::IsNotNull( buffer )) {
HXDLIN( 129)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 129)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 129)									if ((in_byteOffset < 0)) {
HXDLIN( 129)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 129)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXDLIN( 129)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 129)									int bufferByteLength = buffer->length;
HXDLIN( 129)									int elementSize = _this->bytesPerElement;
HXDLIN( 129)									int newByteLength = bufferByteLength;
HXDLIN( 129)									if (::hx::IsNull( len )) {
HXDLIN( 129)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 129)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXDLIN( 129)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 129)										if ((newByteLength < 0)) {
HXDLIN( 129)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXDLIN( 129)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 129)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 129)										if ((newRange > bufferByteLength)) {
HXDLIN( 129)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 129)									_this->buffer = buffer;
HXDLIN( 129)									_this->byteOffset = in_byteOffset;
HXDLIN( 129)									_this->byteLength = newByteLength;
HXDLIN( 129)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 129)									this2 = _this;
            								}
            								else {
HXDLIN( 129)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt16Array",0a,c7,2d,d5)));
            								}
            							}
            						}
            					}
            				}
HXDLIN( 129)				view = this2;
            			}
            			break;
            			case (int)7: {
HXDLIN( 129)				 ::Dynamic elements = null();
HXDLIN( 129)				 ::haxe::io::Bytes buffer = this1->buffer;
HXDLIN( 129)				::cpp::VirtualArray array = null();
HXDLIN( 129)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 129)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 129)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 129)				if (::hx::IsNull( byteoffset )) {
HXDLIN( 129)					byteoffset = 0;
            				}
HXDLIN( 129)				 ::lime::utils::ArrayBufferView this2;
HXDLIN( 129)				if (::hx::IsNotNull( elements )) {
HXDLIN( 129)					this2 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,7);
            				}
            				else {
HXDLIN( 129)					if (::hx::IsNotNull( array )) {
HXDLIN( 129)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,7);
HXDLIN( 129)						_this->byteOffset = 0;
HXDLIN( 129)						_this->length = array->get_length();
HXDLIN( 129)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 129)						 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 129)						_this->buffer = this1;
HXDLIN( 129)						_this->copyFromArray(array,null());
HXDLIN( 129)						this2 = _this;
            					}
            					else {
HXDLIN( 129)						if (::hx::IsNotNull( vector )) {
HXDLIN( 129)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,7);
HXDLIN( 129)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 129)							_this->byteOffset = 0;
HXDLIN( 129)							_this->length = array->get_length();
HXDLIN( 129)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 129)							 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 129)							_this->buffer = this1;
HXDLIN( 129)							_this->copyFromArray(array,null());
HXDLIN( 129)							this2 = _this;
            						}
            						else {
HXDLIN( 129)							if (::hx::IsNotNull( view1 )) {
HXDLIN( 129)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,7);
HXDLIN( 129)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 129)								int srcLength = view1->length;
HXDLIN( 129)								int srcByteOffset = view1->byteOffset;
HXDLIN( 129)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 129)								int elementSize = _this->bytesPerElement;
HXDLIN( 129)								if ((view1->type == _this->type)) {
HXDLIN( 129)									int srcLength = srcData->length;
HXDLIN( 129)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 129)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 129)									_this->buffer = this1;
HXDLIN( 129)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXDLIN( 129)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 129)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 129)								_this->byteOffset = 0;
HXDLIN( 129)								_this->length = srcLength;
HXDLIN( 129)								this2 = _this;
            							}
            							else {
HXDLIN( 129)								if (::hx::IsNotNull( buffer )) {
HXDLIN( 129)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,7);
HXDLIN( 129)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 129)									if ((in_byteOffset < 0)) {
HXDLIN( 129)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 129)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXDLIN( 129)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 129)									int bufferByteLength = buffer->length;
HXDLIN( 129)									int elementSize = _this->bytesPerElement;
HXDLIN( 129)									int newByteLength = bufferByteLength;
HXDLIN( 129)									if (::hx::IsNull( len )) {
HXDLIN( 129)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 129)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXDLIN( 129)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 129)										if ((newByteLength < 0)) {
HXDLIN( 129)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXDLIN( 129)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 129)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 129)										if ((newRange > bufferByteLength)) {
HXDLIN( 129)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 129)									_this->buffer = buffer;
HXDLIN( 129)									_this->byteOffset = in_byteOffset;
HXDLIN( 129)									_this->byteLength = newByteLength;
HXDLIN( 129)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 129)									this2 = _this;
            								}
            								else {
HXDLIN( 129)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt32Array",10,43,eb,8e)));
            								}
            							}
            						}
            					}
            				}
HXDLIN( 129)				view = this2;
            			}
            			break;
            			case (int)8: {
HXDLIN( 129)				 ::Dynamic elements = null();
HXDLIN( 129)				 ::haxe::io::Bytes buffer = this1->buffer;
HXDLIN( 129)				::cpp::VirtualArray array = null();
HXDLIN( 129)				 ::openfl::_Vector::FloatVector vector = null();
HXDLIN( 129)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 129)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 129)				if (::hx::IsNull( byteoffset )) {
HXDLIN( 129)					byteoffset = 0;
            				}
HXDLIN( 129)				 ::lime::utils::ArrayBufferView this2;
HXDLIN( 129)				if (::hx::IsNotNull( elements )) {
HXDLIN( 129)					this2 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,8);
            				}
            				else {
HXDLIN( 129)					if (::hx::IsNotNull( array )) {
HXDLIN( 129)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 129)						_this->byteOffset = 0;
HXDLIN( 129)						_this->length = array->get_length();
HXDLIN( 129)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 129)						 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 129)						_this->buffer = this1;
HXDLIN( 129)						_this->copyFromArray(array,null());
HXDLIN( 129)						this2 = _this;
            					}
            					else {
HXDLIN( 129)						if (::hx::IsNotNull( vector )) {
HXDLIN( 129)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 129)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 129)							_this->byteOffset = 0;
HXDLIN( 129)							_this->length = array->get_length();
HXDLIN( 129)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 129)							 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 129)							_this->buffer = this1;
HXDLIN( 129)							_this->copyFromArray(array,null());
HXDLIN( 129)							this2 = _this;
            						}
            						else {
HXDLIN( 129)							if (::hx::IsNotNull( view1 )) {
HXDLIN( 129)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 129)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 129)								int srcLength = view1->length;
HXDLIN( 129)								int srcByteOffset = view1->byteOffset;
HXDLIN( 129)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 129)								int elementSize = _this->bytesPerElement;
HXDLIN( 129)								if ((view1->type == _this->type)) {
HXDLIN( 129)									int srcLength = srcData->length;
HXDLIN( 129)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 129)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 129)									_this->buffer = this1;
HXDLIN( 129)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXDLIN( 129)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 129)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 129)								_this->byteOffset = 0;
HXDLIN( 129)								_this->length = srcLength;
HXDLIN( 129)								this2 = _this;
            							}
            							else {
HXDLIN( 129)								if (::hx::IsNotNull( buffer )) {
HXDLIN( 129)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 129)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 129)									if ((in_byteOffset < 0)) {
HXDLIN( 129)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 129)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXDLIN( 129)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 129)									int bufferByteLength = buffer->length;
HXDLIN( 129)									int elementSize = _this->bytesPerElement;
HXDLIN( 129)									int newByteLength = bufferByteLength;
HXDLIN( 129)									if (::hx::IsNull( len )) {
HXDLIN( 129)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 129)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXDLIN( 129)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 129)										if ((newByteLength < 0)) {
HXDLIN( 129)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXDLIN( 129)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 129)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 129)										if ((newRange > bufferByteLength)) {
HXDLIN( 129)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 129)									_this->buffer = buffer;
HXDLIN( 129)									_this->byteOffset = in_byteOffset;
HXDLIN( 129)									_this->byteLength = newByteLength;
HXDLIN( 129)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 129)									this2 = _this;
            								}
            								else {
HXDLIN( 129)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Float32Array",8e,c1,f4,d4)));
            								}
            							}
            						}
            					}
            				}
HXDLIN( 129)				view = this2;
            			}
            			break;
            			case (int)9: {
HXDLIN( 129)				 ::Dynamic elements = null();
HXDLIN( 129)				 ::haxe::io::Bytes buffer = this1->buffer;
HXDLIN( 129)				::cpp::VirtualArray array = null();
HXDLIN( 129)				 ::openfl::_Vector::FloatVector vector = null();
HXDLIN( 129)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 129)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 129)				if (::hx::IsNull( byteoffset )) {
HXDLIN( 129)					byteoffset = 0;
            				}
HXDLIN( 129)				 ::lime::utils::ArrayBufferView this2;
HXDLIN( 129)				if (::hx::IsNotNull( elements )) {
HXDLIN( 129)					this2 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,9);
            				}
            				else {
HXDLIN( 129)					if (::hx::IsNotNull( array )) {
HXDLIN( 129)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,9);
HXDLIN( 129)						_this->byteOffset = 0;
HXDLIN( 129)						_this->length = array->get_length();
HXDLIN( 129)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 129)						 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 129)						_this->buffer = this1;
HXDLIN( 129)						_this->copyFromArray(array,null());
HXDLIN( 129)						this2 = _this;
            					}
            					else {
HXDLIN( 129)						if (::hx::IsNotNull( vector )) {
HXDLIN( 129)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,9);
HXDLIN( 129)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 129)							_this->byteOffset = 0;
HXDLIN( 129)							_this->length = array->get_length();
HXDLIN( 129)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 129)							 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 129)							_this->buffer = this1;
HXDLIN( 129)							_this->copyFromArray(array,null());
HXDLIN( 129)							this2 = _this;
            						}
            						else {
HXDLIN( 129)							if (::hx::IsNotNull( view1 )) {
HXDLIN( 129)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,9);
HXDLIN( 129)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 129)								int srcLength = view1->length;
HXDLIN( 129)								int srcByteOffset = view1->byteOffset;
HXDLIN( 129)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 129)								int elementSize = _this->bytesPerElement;
HXDLIN( 129)								if ((view1->type == _this->type)) {
HXDLIN( 129)									int srcLength = srcData->length;
HXDLIN( 129)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 129)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 129)									_this->buffer = this1;
HXDLIN( 129)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXDLIN( 129)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 129)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 129)								_this->byteOffset = 0;
HXDLIN( 129)								_this->length = srcLength;
HXDLIN( 129)								this2 = _this;
            							}
            							else {
HXDLIN( 129)								if (::hx::IsNotNull( buffer )) {
HXDLIN( 129)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,9);
HXDLIN( 129)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 129)									if ((in_byteOffset < 0)) {
HXDLIN( 129)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 129)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXDLIN( 129)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 129)									int bufferByteLength = buffer->length;
HXDLIN( 129)									int elementSize = _this->bytesPerElement;
HXDLIN( 129)									int newByteLength = bufferByteLength;
HXDLIN( 129)									if (::hx::IsNull( len )) {
HXDLIN( 129)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 129)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXDLIN( 129)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 129)										if ((newByteLength < 0)) {
HXDLIN( 129)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXDLIN( 129)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 129)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 129)										if ((newRange > bufferByteLength)) {
HXDLIN( 129)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 129)									_this->buffer = buffer;
HXDLIN( 129)									_this->byteOffset = in_byteOffset;
HXDLIN( 129)									_this->byteLength = newByteLength;
HXDLIN( 129)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 129)									this2 = _this;
            								}
            								else {
HXDLIN( 129)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Float64Array",8f,de,6b,1e)));
            								}
            							}
            						}
            					}
            				}
HXDLIN( 129)				view = this2;
            			}
            			break;
            		}
HXDLIN( 129)		return view;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Int8Array_Impl__obj,subarray,return )

 ::lime::utils::ArrayBufferView Int8Array_Impl__obj::fromBytes( ::haxe::io::Bytes bytes, ::Dynamic __o_byteOffset, ::Dynamic len){
            		 ::Dynamic byteOffset = __o_byteOffset;
            		if (::hx::IsNull(__o_byteOffset)) byteOffset = 0;
            	HX_GC_STACKFRAME(&_hx_pos_6e16da696af5edec_133_fromBytes)
HXLINE( 134)		if (::hx::IsNull( byteOffset )) {
HXLINE( 134)			 ::Dynamic elements = null();
HXDLIN( 134)			 ::haxe::io::Bytes buffer = null();
HXDLIN( 134)			::cpp::VirtualArray array = bytes->b;
HXDLIN( 134)			 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 134)			 ::lime::utils::ArrayBufferView view = null();
HXDLIN( 134)			 ::Dynamic len = null();
HXDLIN( 134)			 ::lime::utils::ArrayBufferView this1;
HXDLIN( 134)			if (::hx::IsNotNull( elements )) {
HXLINE( 134)				this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,1);
            			}
            			else {
HXLINE( 134)				if (::hx::IsNotNull( array )) {
HXLINE( 134)					 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,1);
HXDLIN( 134)					_this->byteOffset = 0;
HXDLIN( 134)					_this->length = array->get_length();
HXDLIN( 134)					_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 134)					 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 134)					_this->buffer = this2;
HXDLIN( 134)					_this->copyFromArray(array,null());
HXDLIN( 134)					this1 = _this;
            				}
            				else {
HXLINE( 134)					if (::hx::IsNotNull( vector )) {
HXLINE( 134)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,1);
HXDLIN( 134)						::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 134)						_this->byteOffset = 0;
HXDLIN( 134)						_this->length = array->get_length();
HXDLIN( 134)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 134)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 134)						_this->buffer = this2;
HXDLIN( 134)						_this->copyFromArray(array,null());
HXDLIN( 134)						this1 = _this;
            					}
            					else {
HXLINE( 134)						if (::hx::IsNotNull( view )) {
HXLINE( 134)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,1);
HXDLIN( 134)							 ::haxe::io::Bytes srcData = view->buffer;
HXDLIN( 134)							int srcLength = view->length;
HXDLIN( 134)							int srcByteOffset = view->byteOffset;
HXDLIN( 134)							int srcElementSize = view->bytesPerElement;
HXDLIN( 134)							int elementSize = _this->bytesPerElement;
HXDLIN( 134)							if ((view->type == _this->type)) {
HXLINE( 134)								int srcLength = srcData->length;
HXDLIN( 134)								int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 134)								 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 134)								_this->buffer = this1;
HXDLIN( 134)								_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            							}
            							else {
HXLINE( 134)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            							}
HXDLIN( 134)							_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 134)							_this->byteOffset = 0;
HXDLIN( 134)							_this->length = srcLength;
HXDLIN( 134)							this1 = _this;
            						}
            						else {
HXLINE( 134)							if (::hx::IsNotNull( buffer )) {
HXLINE( 134)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,1);
HXDLIN( 134)								int in_byteOffset = 0;
HXDLIN( 134)								if ((in_byteOffset < 0)) {
HXLINE( 134)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
HXDLIN( 134)								if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 134)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
HXDLIN( 134)								int bufferByteLength = buffer->length;
HXDLIN( 134)								int elementSize = _this->bytesPerElement;
HXDLIN( 134)								int newByteLength = bufferByteLength;
HXDLIN( 134)								if (::hx::IsNull( len )) {
HXLINE( 134)									newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 134)									if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 134)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 134)									if ((newByteLength < 0)) {
HXLINE( 134)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
            								}
            								else {
HXLINE( 134)									newByteLength = (( (int)(len) ) * _this->bytesPerElement);
HXDLIN( 134)									int newRange = (in_byteOffset + newByteLength);
HXDLIN( 134)									if ((newRange > bufferByteLength)) {
HXLINE( 134)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
            								}
HXDLIN( 134)								_this->buffer = buffer;
HXDLIN( 134)								_this->byteOffset = in_byteOffset;
HXDLIN( 134)								_this->byteLength = newByteLength;
HXDLIN( 134)								_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 134)								this1 = _this;
            							}
            							else {
HXLINE( 134)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Int8Array",40,53,da,77)));
            							}
            						}
            					}
            				}
            			}
HXDLIN( 134)			return this1;
            		}
HXLINE( 135)		if (::hx::IsNull( len )) {
HXLINE( 135)			 ::Dynamic elements = null();
HXDLIN( 135)			 ::haxe::io::Bytes buffer = null();
HXDLIN( 135)			::cpp::VirtualArray array = bytes->b;
HXDLIN( 135)			 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 135)			 ::lime::utils::ArrayBufferView view = null();
HXDLIN( 135)			 ::Dynamic byteoffset = byteOffset;
HXDLIN( 135)			 ::Dynamic len = null();
HXDLIN( 135)			if (::hx::IsNull( byteoffset )) {
HXLINE( 135)				byteoffset = 0;
            			}
HXDLIN( 135)			 ::lime::utils::ArrayBufferView this1;
HXDLIN( 135)			if (::hx::IsNotNull( elements )) {
HXLINE( 135)				this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,1);
            			}
            			else {
HXLINE( 135)				if (::hx::IsNotNull( array )) {
HXLINE( 135)					 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,1);
HXDLIN( 135)					_this->byteOffset = 0;
HXDLIN( 135)					_this->length = array->get_length();
HXDLIN( 135)					_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 135)					 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 135)					_this->buffer = this2;
HXDLIN( 135)					_this->copyFromArray(array,null());
HXDLIN( 135)					this1 = _this;
            				}
            				else {
HXLINE( 135)					if (::hx::IsNotNull( vector )) {
HXLINE( 135)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,1);
HXDLIN( 135)						::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 135)						_this->byteOffset = 0;
HXDLIN( 135)						_this->length = array->get_length();
HXDLIN( 135)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 135)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 135)						_this->buffer = this2;
HXDLIN( 135)						_this->copyFromArray(array,null());
HXDLIN( 135)						this1 = _this;
            					}
            					else {
HXLINE( 135)						if (::hx::IsNotNull( view )) {
HXLINE( 135)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,1);
HXDLIN( 135)							 ::haxe::io::Bytes srcData = view->buffer;
HXDLIN( 135)							int srcLength = view->length;
HXDLIN( 135)							int srcByteOffset = view->byteOffset;
HXDLIN( 135)							int srcElementSize = view->bytesPerElement;
HXDLIN( 135)							int elementSize = _this->bytesPerElement;
HXDLIN( 135)							if ((view->type == _this->type)) {
HXLINE( 135)								int srcLength = srcData->length;
HXDLIN( 135)								int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 135)								 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 135)								_this->buffer = this1;
HXDLIN( 135)								_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            							}
            							else {
HXLINE( 135)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            							}
HXDLIN( 135)							_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 135)							_this->byteOffset = 0;
HXDLIN( 135)							_this->length = srcLength;
HXDLIN( 135)							this1 = _this;
            						}
            						else {
HXLINE( 135)							if (::hx::IsNotNull( buffer )) {
HXLINE( 135)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,1);
HXDLIN( 135)								int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 135)								if ((in_byteOffset < 0)) {
HXLINE( 135)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
HXDLIN( 135)								if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 135)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
HXDLIN( 135)								int bufferByteLength = buffer->length;
HXDLIN( 135)								int elementSize = _this->bytesPerElement;
HXDLIN( 135)								int newByteLength = bufferByteLength;
HXDLIN( 135)								if (::hx::IsNull( len )) {
HXLINE( 135)									newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 135)									if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 135)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 135)									if ((newByteLength < 0)) {
HXLINE( 135)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
            								}
            								else {
HXLINE( 135)									newByteLength = (( (int)(len) ) * _this->bytesPerElement);
HXDLIN( 135)									int newRange = (in_byteOffset + newByteLength);
HXDLIN( 135)									if ((newRange > bufferByteLength)) {
HXLINE( 135)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
            								}
HXDLIN( 135)								_this->buffer = buffer;
HXDLIN( 135)								_this->byteOffset = in_byteOffset;
HXDLIN( 135)								_this->byteLength = newByteLength;
HXDLIN( 135)								_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 135)								this1 = _this;
            							}
            							else {
HXLINE( 135)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Int8Array",40,53,da,77)));
            							}
            						}
            					}
            				}
            			}
HXDLIN( 135)			return this1;
            		}
HXLINE( 136)		 ::Dynamic elements = null();
HXDLIN( 136)		 ::haxe::io::Bytes buffer = null();
HXDLIN( 136)		::cpp::VirtualArray array = bytes->b;
HXDLIN( 136)		 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 136)		 ::lime::utils::ArrayBufferView view = null();
HXDLIN( 136)		 ::Dynamic byteoffset = byteOffset;
HXDLIN( 136)		if (::hx::IsNull( byteoffset )) {
HXLINE( 136)			byteoffset = 0;
            		}
HXDLIN( 136)		 ::lime::utils::ArrayBufferView this1;
HXDLIN( 136)		if (::hx::IsNotNull( elements )) {
HXLINE( 136)			this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,1);
            		}
            		else {
HXLINE( 136)			if (::hx::IsNotNull( array )) {
HXLINE( 136)				 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,1);
HXDLIN( 136)				_this->byteOffset = 0;
HXDLIN( 136)				_this->length = array->get_length();
HXDLIN( 136)				_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 136)				 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 136)				_this->buffer = this2;
HXDLIN( 136)				_this->copyFromArray(array,null());
HXDLIN( 136)				this1 = _this;
            			}
            			else {
HXLINE( 136)				if (::hx::IsNotNull( vector )) {
HXLINE( 136)					 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,1);
HXDLIN( 136)					::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 136)					_this->byteOffset = 0;
HXDLIN( 136)					_this->length = array->get_length();
HXDLIN( 136)					_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 136)					 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 136)					_this->buffer = this2;
HXDLIN( 136)					_this->copyFromArray(array,null());
HXDLIN( 136)					this1 = _this;
            				}
            				else {
HXLINE( 136)					if (::hx::IsNotNull( view )) {
HXLINE( 136)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,1);
HXDLIN( 136)						 ::haxe::io::Bytes srcData = view->buffer;
HXDLIN( 136)						int srcLength = view->length;
HXDLIN( 136)						int srcByteOffset = view->byteOffset;
HXDLIN( 136)						int srcElementSize = view->bytesPerElement;
HXDLIN( 136)						int elementSize = _this->bytesPerElement;
HXDLIN( 136)						if ((view->type == _this->type)) {
HXLINE( 136)							int srcLength = srcData->length;
HXDLIN( 136)							int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 136)							 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 136)							_this->buffer = this1;
HXDLIN( 136)							_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            						}
            						else {
HXLINE( 136)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            						}
HXDLIN( 136)						_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 136)						_this->byteOffset = 0;
HXDLIN( 136)						_this->length = srcLength;
HXDLIN( 136)						this1 = _this;
            					}
            					else {
HXLINE( 136)						if (::hx::IsNotNull( buffer )) {
HXLINE( 136)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,1);
HXDLIN( 136)							int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 136)							if ((in_byteOffset < 0)) {
HXLINE( 136)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            							}
HXDLIN( 136)							if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 136)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            							}
HXDLIN( 136)							int bufferByteLength = buffer->length;
HXDLIN( 136)							int elementSize = _this->bytesPerElement;
HXDLIN( 136)							int newByteLength = bufferByteLength;
HXDLIN( 136)							if (::hx::IsNull( len )) {
HXLINE( 136)								newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 136)								if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 136)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
HXDLIN( 136)								if ((newByteLength < 0)) {
HXLINE( 136)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
            							}
            							else {
HXLINE( 136)								newByteLength = (( (int)(len) ) * _this->bytesPerElement);
HXDLIN( 136)								int newRange = (in_byteOffset + newByteLength);
HXDLIN( 136)								if ((newRange > bufferByteLength)) {
HXLINE( 136)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
            							}
HXDLIN( 136)							_this->buffer = buffer;
HXDLIN( 136)							_this->byteOffset = in_byteOffset;
HXDLIN( 136)							_this->byteLength = newByteLength;
HXDLIN( 136)							_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 136)							this1 = _this;
            						}
            						else {
HXLINE( 136)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Int8Array",40,53,da,77)));
            						}
            					}
            				}
            			}
            		}
HXDLIN( 136)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Int8Array_Impl__obj,fromBytes,return )

 ::haxe::io::Bytes Int8Array_Impl__obj::toBytes( ::lime::utils::ArrayBufferView this1){
            	HX_STACKFRAME(&_hx_pos_6e16da696af5edec_141_toBytes)
HXDLIN( 141)		return this1->buffer;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Int8Array_Impl__obj,toBytes,return )

int Int8Array_Impl__obj::get_length( ::lime::utils::ArrayBufferView this1){
            	HX_STACKFRAME(&_hx_pos_6e16da696af5edec_146_get_length)
HXDLIN( 146)		return this1->length;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Int8Array_Impl__obj,get_length,return )

::String Int8Array_Impl__obj::toString( ::lime::utils::ArrayBufferView this1){
            	HX_STACKFRAME(&_hx_pos_6e16da696af5edec_164_toString)
HXDLIN( 164)		if (::hx::IsNotNull( this1 )) {
HXDLIN( 164)			return ((((HX_("Int8Array [byteLength:",c1,87,c3,43) + this1->byteLength) + HX_(", length:",a0,04,67,ef)) + this1->length) + HX_("]",5d,00,00,00));
            		}
            		else {
HXDLIN( 164)			return null();
            		}
HXDLIN( 164)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Int8Array_Impl__obj,toString,return )


Int8Array_Impl__obj::Int8Array_Impl__obj()
{
}

bool Int8Array_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
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
static ::hx::StorageInfo *Int8Array_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Int8Array_Impl__obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &Int8Array_Impl__obj::BYTES_PER_ELEMENT,HX_("BYTES_PER_ELEMENT",a6,04,1d,cc)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Int8Array_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Int8Array_Impl__obj::BYTES_PER_ELEMENT,"BYTES_PER_ELEMENT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Int8Array_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Int8Array_Impl__obj::BYTES_PER_ELEMENT,"BYTES_PER_ELEMENT");
};

#endif

::hx::Class Int8Array_Impl__obj::__mClass;

static ::String Int8Array_Impl__obj_sStaticFields[] = {
	HX_("BYTES_PER_ELEMENT",a6,04,1d,cc),
	HX_("_new",61,15,1f,3f),
	HX_("subarray",19,54,81,07),
	HX_("fromBytes",a1,f2,20,72),
	HX_("toBytes",f0,54,1c,8a),
	HX_("get_length",af,04,8f,8f),
	HX_("toString",ac,d0,6e,38),
	::String(null())
};

void Int8Array_Impl__obj::__register()
{
	Int8Array_Impl__obj _hx_dummy;
	Int8Array_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.utils._Int8Array.Int8Array_Impl_",29,23,97,45);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Int8Array_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Int8Array_Impl__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Int8Array_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Int8Array_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Int8Array_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Int8Array_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Int8Array_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Int8Array_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_6e16da696af5edec_91_boot)
HXDLIN(  91)		BYTES_PER_ELEMENT = 1;
            	}
}

} // end namespace lime
} // end namespace utils
} // end namespace _Int8Array
