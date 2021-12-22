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
#ifndef INCLUDED_lime_utils__Float64Array_Float64Array_Impl_
#include <lime/utils/_Float64Array/Float64Array_Impl_.h>
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

HX_LOCAL_STACK_FRAME(_hx_pos_8b7b048dadc59c63_98__new,"lime.utils._Float64Array.Float64Array_Impl_","_new",0x269603ea,"lime.utils._Float64Array.Float64Array_Impl_._new","lime/utils/Float64Array.hx",98,0x73d83bc7)
HX_LOCAL_STACK_FRAME(_hx_pos_8b7b048dadc59c63_131_subarray,"lime.utils._Float64Array.Float64Array_Impl_","subarray",0x21ecbb22,"lime.utils._Float64Array.Float64Array_Impl_.subarray","lime/utils/Float64Array.hx",131,0x73d83bc7)
HX_LOCAL_STACK_FRAME(_hx_pos_8b7b048dadc59c63_136_fromBytes,"lime.utils._Float64Array.Float64Array_Impl_","fromBytes",0x75afb378,"lime.utils._Float64Array.Float64Array_Impl_.fromBytes","lime/utils/Float64Array.hx",136,0x73d83bc7)
HX_LOCAL_STACK_FRAME(_hx_pos_8b7b048dadc59c63_141_toBytes,"lime.utils._Float64Array.Float64Array_Impl_","toBytes",0xdbbc6207,"lime.utils._Float64Array.Float64Array_Impl_.toBytes","lime/utils/Float64Array.hx",141,0x73d83bc7)
HX_LOCAL_STACK_FRAME(_hx_pos_8b7b048dadc59c63_146_get_length,"lime.utils._Float64Array.Float64Array_Impl_","get_length",0xa8e8fff8,"lime.utils._Float64Array.Float64Array_Impl_.get_length","lime/utils/Float64Array.hx",146,0x73d83bc7)
HX_LOCAL_STACK_FRAME(_hx_pos_8b7b048dadc59c63_164_toString,"lime.utils._Float64Array.Float64Array_Impl_","toString",0x52da37b5,"lime.utils._Float64Array.Float64Array_Impl_.toString","lime/utils/Float64Array.hx",164,0x73d83bc7)
HX_LOCAL_STACK_FRAME(_hx_pos_8b7b048dadc59c63_93_boot,"lime.utils._Float64Array.Float64Array_Impl_","boot",0x289272bb,"lime.utils._Float64Array.Float64Array_Impl_.boot","lime/utils/Float64Array.hx",93,0x73d83bc7)
namespace lime{
namespace utils{
namespace _Float64Array{

void Float64Array_Impl__obj::__construct() { }

Dynamic Float64Array_Impl__obj::__CreateEmpty() { return new Float64Array_Impl__obj; }

void *Float64Array_Impl__obj::_hx_vtable = 0;

Dynamic Float64Array_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Float64Array_Impl__obj > _hx_result = new Float64Array_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Float64Array_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x60ed2601;
}

int Float64Array_Impl__obj::BYTES_PER_ELEMENT;

 ::lime::utils::ArrayBufferView Float64Array_Impl__obj::_new( ::Dynamic elements, ::haxe::io::Bytes buffer,::cpp::VirtualArray array, ::openfl::_Vector::FloatVector vector, ::lime::utils::ArrayBufferView view, ::Dynamic __o_byteoffset, ::Dynamic len){
            		 ::Dynamic byteoffset = __o_byteoffset;
            		if (::hx::IsNull(__o_byteoffset)) byteoffset = 0;
            	HX_GC_STACKFRAME(&_hx_pos_8b7b048dadc59c63_98__new)
HXDLIN(  98)		 ::lime::utils::ArrayBufferView this1;
HXLINE( 101)		if (::hx::IsNotNull( elements )) {
HXLINE( 103)			this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,9);
            		}
            		else {
HXLINE( 105)			if (::hx::IsNotNull( array )) {
HXLINE( 107)				 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,9);
HXDLIN( 107)				_this->byteOffset = 0;
HXDLIN( 107)				_this->length = array->get_length();
HXDLIN( 107)				_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 107)				 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 107)				_this->buffer = this2;
HXDLIN( 107)				_this->copyFromArray(array,null());
HXDLIN( 107)				this1 = _this;
            			}
            			else {
HXLINE( 110)				if (::hx::IsNotNull( vector )) {
HXLINE( 112)					 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,9);
HXDLIN( 112)					::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 112)					_this->byteOffset = 0;
HXDLIN( 112)					_this->length = array->get_length();
HXDLIN( 112)					_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 112)					 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 112)					_this->buffer = this2;
HXDLIN( 112)					_this->copyFromArray(array,null());
HXDLIN( 112)					this1 = _this;
            				}
            				else {
HXLINE( 115)					if (::hx::IsNotNull( view )) {
HXLINE( 117)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,9);
HXDLIN( 117)						 ::haxe::io::Bytes srcData = view->buffer;
HXDLIN( 117)						int srcLength = view->length;
HXDLIN( 117)						int srcByteOffset = view->byteOffset;
HXDLIN( 117)						int srcElementSize = view->bytesPerElement;
HXDLIN( 117)						int elementSize = _this->bytesPerElement;
HXDLIN( 117)						if ((view->type == _this->type)) {
HXLINE( 117)							int srcLength = srcData->length;
HXDLIN( 117)							int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 117)							 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 117)							_this->buffer = this1;
HXDLIN( 117)							_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            						}
            						else {
HXLINE( 117)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            						}
HXDLIN( 117)						_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 117)						_this->byteOffset = 0;
HXDLIN( 117)						_this->length = srcLength;
HXDLIN( 117)						this1 = _this;
            					}
            					else {
HXLINE( 119)						if (::hx::IsNotNull( buffer )) {
HXLINE( 121)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,9);
HXDLIN( 121)							int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 121)							if ((in_byteOffset < 0)) {
HXLINE( 121)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            							}
HXDLIN( 121)							if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 121)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            							}
HXDLIN( 121)							int bufferByteLength = buffer->length;
HXDLIN( 121)							int elementSize = _this->bytesPerElement;
HXDLIN( 121)							int newByteLength = bufferByteLength;
HXDLIN( 121)							if (::hx::IsNull( len )) {
HXLINE( 121)								newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 121)								if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 121)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
HXDLIN( 121)								if ((newByteLength < 0)) {
HXLINE( 121)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
            							}
            							else {
HXLINE( 121)								newByteLength = (( (int)(len) ) * _this->bytesPerElement);
HXDLIN( 121)								int newRange = (in_byteOffset + newByteLength);
HXDLIN( 121)								if ((newRange > bufferByteLength)) {
HXLINE( 121)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
            							}
HXDLIN( 121)							_this->buffer = buffer;
HXDLIN( 121)							_this->byteOffset = in_byteOffset;
HXDLIN( 121)							_this->byteLength = newByteLength;
HXDLIN( 121)							_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 121)							this1 = _this;
            						}
            						else {
HXLINE( 125)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Float64Array",8f,de,6b,1e)));
            						}
            					}
            				}
            			}
            		}
HXLINE(  98)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(Float64Array_Impl__obj,_new,return )

 ::lime::utils::ArrayBufferView Float64Array_Impl__obj::subarray( ::lime::utils::ArrayBufferView this1,int begin, ::Dynamic end){
            	HX_GC_STACKFRAME(&_hx_pos_8b7b048dadc59c63_131_subarray)
HXDLIN( 131)		 ::Dynamic end1 = end;
HXDLIN( 131)		if (::hx::IsNull( end1 )) {
HXDLIN( 131)			end1 = this1->length;
            		}
HXDLIN( 131)		int len = (( (int)(end1) ) - begin);
HXDLIN( 131)		int byte_offset = ((begin * this1->bytesPerElement) + this1->byteOffset);
HXDLIN( 131)		 ::lime::utils::ArrayBufferView view;
HXDLIN( 131)		switch((int)(this1->type)){
            			case (int)0: {
HXDLIN( 131)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("subarray on a blank ArrayBufferView",39,87,fd,19)));
            			}
            			break;
            			case (int)1: {
HXDLIN( 131)				 ::Dynamic elements = null();
HXDLIN( 131)				 ::haxe::io::Bytes buffer = this1->buffer;
HXDLIN( 131)				::cpp::VirtualArray array = null();
HXDLIN( 131)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 131)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 131)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 131)				if (::hx::IsNull( byteoffset )) {
HXDLIN( 131)					byteoffset = 0;
            				}
HXDLIN( 131)				 ::lime::utils::ArrayBufferView this2;
HXDLIN( 131)				if (::hx::IsNotNull( elements )) {
HXDLIN( 131)					this2 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,1);
            				}
            				else {
HXDLIN( 131)					if (::hx::IsNotNull( array )) {
HXDLIN( 131)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,1);
HXDLIN( 131)						_this->byteOffset = 0;
HXDLIN( 131)						_this->length = array->get_length();
HXDLIN( 131)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 131)						 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 131)						_this->buffer = this1;
HXDLIN( 131)						_this->copyFromArray(array,null());
HXDLIN( 131)						this2 = _this;
            					}
            					else {
HXDLIN( 131)						if (::hx::IsNotNull( vector )) {
HXDLIN( 131)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,1);
HXDLIN( 131)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 131)							_this->byteOffset = 0;
HXDLIN( 131)							_this->length = array->get_length();
HXDLIN( 131)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 131)							 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 131)							_this->buffer = this1;
HXDLIN( 131)							_this->copyFromArray(array,null());
HXDLIN( 131)							this2 = _this;
            						}
            						else {
HXDLIN( 131)							if (::hx::IsNotNull( view1 )) {
HXDLIN( 131)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,1);
HXDLIN( 131)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 131)								int srcLength = view1->length;
HXDLIN( 131)								int srcByteOffset = view1->byteOffset;
HXDLIN( 131)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 131)								int elementSize = _this->bytesPerElement;
HXDLIN( 131)								if ((view1->type == _this->type)) {
HXDLIN( 131)									int srcLength = srcData->length;
HXDLIN( 131)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 131)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 131)									_this->buffer = this1;
HXDLIN( 131)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXDLIN( 131)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 131)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 131)								_this->byteOffset = 0;
HXDLIN( 131)								_this->length = srcLength;
HXDLIN( 131)								this2 = _this;
            							}
            							else {
HXDLIN( 131)								if (::hx::IsNotNull( buffer )) {
HXDLIN( 131)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,1);
HXDLIN( 131)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 131)									if ((in_byteOffset < 0)) {
HXDLIN( 131)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 131)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXDLIN( 131)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 131)									int bufferByteLength = buffer->length;
HXDLIN( 131)									int elementSize = _this->bytesPerElement;
HXDLIN( 131)									int newByteLength = bufferByteLength;
HXDLIN( 131)									if (::hx::IsNull( len )) {
HXDLIN( 131)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 131)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXDLIN( 131)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 131)										if ((newByteLength < 0)) {
HXDLIN( 131)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXDLIN( 131)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 131)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 131)										if ((newRange > bufferByteLength)) {
HXDLIN( 131)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 131)									_this->buffer = buffer;
HXDLIN( 131)									_this->byteOffset = in_byteOffset;
HXDLIN( 131)									_this->byteLength = newByteLength;
HXDLIN( 131)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 131)									this2 = _this;
            								}
            								else {
HXDLIN( 131)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Int8Array",40,53,da,77)));
            								}
            							}
            						}
            					}
            				}
HXDLIN( 131)				view = this2;
            			}
            			break;
            			case (int)2: {
HXDLIN( 131)				 ::Dynamic elements = null();
HXDLIN( 131)				 ::haxe::io::Bytes buffer = this1->buffer;
HXDLIN( 131)				::cpp::VirtualArray array = null();
HXDLIN( 131)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 131)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 131)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 131)				if (::hx::IsNull( byteoffset )) {
HXDLIN( 131)					byteoffset = 0;
            				}
HXDLIN( 131)				 ::lime::utils::ArrayBufferView this2;
HXDLIN( 131)				if (::hx::IsNotNull( elements )) {
HXDLIN( 131)					this2 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,2);
            				}
            				else {
HXDLIN( 131)					if (::hx::IsNotNull( array )) {
HXDLIN( 131)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,2);
HXDLIN( 131)						_this->byteOffset = 0;
HXDLIN( 131)						_this->length = array->get_length();
HXDLIN( 131)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 131)						 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 131)						_this->buffer = this1;
HXDLIN( 131)						_this->copyFromArray(array,null());
HXDLIN( 131)						this2 = _this;
            					}
            					else {
HXDLIN( 131)						if (::hx::IsNotNull( vector )) {
HXDLIN( 131)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,2);
HXDLIN( 131)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 131)							_this->byteOffset = 0;
HXDLIN( 131)							_this->length = array->get_length();
HXDLIN( 131)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 131)							 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 131)							_this->buffer = this1;
HXDLIN( 131)							_this->copyFromArray(array,null());
HXDLIN( 131)							this2 = _this;
            						}
            						else {
HXDLIN( 131)							if (::hx::IsNotNull( view1 )) {
HXDLIN( 131)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,2);
HXDLIN( 131)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 131)								int srcLength = view1->length;
HXDLIN( 131)								int srcByteOffset = view1->byteOffset;
HXDLIN( 131)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 131)								int elementSize = _this->bytesPerElement;
HXDLIN( 131)								if ((view1->type == _this->type)) {
HXDLIN( 131)									int srcLength = srcData->length;
HXDLIN( 131)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 131)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 131)									_this->buffer = this1;
HXDLIN( 131)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXDLIN( 131)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 131)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 131)								_this->byteOffset = 0;
HXDLIN( 131)								_this->length = srcLength;
HXDLIN( 131)								this2 = _this;
            							}
            							else {
HXDLIN( 131)								if (::hx::IsNotNull( buffer )) {
HXDLIN( 131)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,2);
HXDLIN( 131)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 131)									if ((in_byteOffset < 0)) {
HXDLIN( 131)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 131)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXDLIN( 131)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 131)									int bufferByteLength = buffer->length;
HXDLIN( 131)									int elementSize = _this->bytesPerElement;
HXDLIN( 131)									int newByteLength = bufferByteLength;
HXDLIN( 131)									if (::hx::IsNull( len )) {
HXDLIN( 131)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 131)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXDLIN( 131)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 131)										if ((newByteLength < 0)) {
HXDLIN( 131)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXDLIN( 131)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 131)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 131)										if ((newRange > bufferByteLength)) {
HXDLIN( 131)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 131)									_this->buffer = buffer;
HXDLIN( 131)									_this->byteOffset = in_byteOffset;
HXDLIN( 131)									_this->byteLength = newByteLength;
HXDLIN( 131)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 131)									this2 = _this;
            								}
            								else {
HXDLIN( 131)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Int16Array",95,b2,95,a7)));
            								}
            							}
            						}
            					}
            				}
HXDLIN( 131)				view = this2;
            			}
            			break;
            			case (int)3: {
HXDLIN( 131)				 ::Dynamic elements = null();
HXDLIN( 131)				 ::haxe::io::Bytes buffer = this1->buffer;
HXDLIN( 131)				::cpp::VirtualArray array = null();
HXDLIN( 131)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 131)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 131)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 131)				if (::hx::IsNull( byteoffset )) {
HXDLIN( 131)					byteoffset = 0;
            				}
HXDLIN( 131)				 ::lime::utils::ArrayBufferView this2;
HXDLIN( 131)				if (::hx::IsNotNull( elements )) {
HXDLIN( 131)					this2 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,3);
            				}
            				else {
HXDLIN( 131)					if (::hx::IsNotNull( array )) {
HXDLIN( 131)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,3);
HXDLIN( 131)						_this->byteOffset = 0;
HXDLIN( 131)						_this->length = array->get_length();
HXDLIN( 131)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 131)						 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 131)						_this->buffer = this1;
HXDLIN( 131)						_this->copyFromArray(array,null());
HXDLIN( 131)						this2 = _this;
            					}
            					else {
HXDLIN( 131)						if (::hx::IsNotNull( vector )) {
HXDLIN( 131)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,3);
HXDLIN( 131)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 131)							_this->byteOffset = 0;
HXDLIN( 131)							_this->length = array->get_length();
HXDLIN( 131)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 131)							 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 131)							_this->buffer = this1;
HXDLIN( 131)							_this->copyFromArray(array,null());
HXDLIN( 131)							this2 = _this;
            						}
            						else {
HXDLIN( 131)							if (::hx::IsNotNull( view1 )) {
HXDLIN( 131)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,3);
HXDLIN( 131)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 131)								int srcLength = view1->length;
HXDLIN( 131)								int srcByteOffset = view1->byteOffset;
HXDLIN( 131)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 131)								int elementSize = _this->bytesPerElement;
HXDLIN( 131)								if ((view1->type == _this->type)) {
HXDLIN( 131)									int srcLength = srcData->length;
HXDLIN( 131)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 131)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 131)									_this->buffer = this1;
HXDLIN( 131)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXDLIN( 131)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 131)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 131)								_this->byteOffset = 0;
HXDLIN( 131)								_this->length = srcLength;
HXDLIN( 131)								this2 = _this;
            							}
            							else {
HXDLIN( 131)								if (::hx::IsNotNull( buffer )) {
HXDLIN( 131)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,3);
HXDLIN( 131)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 131)									if ((in_byteOffset < 0)) {
HXDLIN( 131)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 131)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXDLIN( 131)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 131)									int bufferByteLength = buffer->length;
HXDLIN( 131)									int elementSize = _this->bytesPerElement;
HXDLIN( 131)									int newByteLength = bufferByteLength;
HXDLIN( 131)									if (::hx::IsNull( len )) {
HXDLIN( 131)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 131)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXDLIN( 131)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 131)										if ((newByteLength < 0)) {
HXDLIN( 131)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXDLIN( 131)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 131)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 131)										if ((newRange > bufferByteLength)) {
HXDLIN( 131)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 131)									_this->buffer = buffer;
HXDLIN( 131)									_this->byteOffset = in_byteOffset;
HXDLIN( 131)									_this->byteLength = newByteLength;
HXDLIN( 131)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 131)									this2 = _this;
            								}
            								else {
HXDLIN( 131)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Int32Array",9b,2e,53,61)));
            								}
            							}
            						}
            					}
            				}
HXDLIN( 131)				view = this2;
            			}
            			break;
            			case (int)4: {
HXDLIN( 131)				 ::Dynamic elements = null();
HXDLIN( 131)				 ::haxe::io::Bytes buffer = this1->buffer;
HXDLIN( 131)				::cpp::VirtualArray array = null();
HXDLIN( 131)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 131)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 131)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 131)				if (::hx::IsNull( byteoffset )) {
HXDLIN( 131)					byteoffset = 0;
            				}
HXDLIN( 131)				 ::lime::utils::ArrayBufferView this2;
HXDLIN( 131)				if (::hx::IsNotNull( elements )) {
HXDLIN( 131)					this2 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,4);
            				}
            				else {
HXDLIN( 131)					if (::hx::IsNotNull( array )) {
HXDLIN( 131)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 131)						_this->byteOffset = 0;
HXDLIN( 131)						_this->length = array->get_length();
HXDLIN( 131)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 131)						 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 131)						_this->buffer = this1;
HXDLIN( 131)						_this->copyFromArray(array,null());
HXDLIN( 131)						this2 = _this;
            					}
            					else {
HXDLIN( 131)						if (::hx::IsNotNull( vector )) {
HXDLIN( 131)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 131)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 131)							_this->byteOffset = 0;
HXDLIN( 131)							_this->length = array->get_length();
HXDLIN( 131)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 131)							 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 131)							_this->buffer = this1;
HXDLIN( 131)							_this->copyFromArray(array,null());
HXDLIN( 131)							this2 = _this;
            						}
            						else {
HXDLIN( 131)							if (::hx::IsNotNull( view1 )) {
HXDLIN( 131)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 131)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 131)								int srcLength = view1->length;
HXDLIN( 131)								int srcByteOffset = view1->byteOffset;
HXDLIN( 131)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 131)								int elementSize = _this->bytesPerElement;
HXDLIN( 131)								if ((view1->type == _this->type)) {
HXDLIN( 131)									int srcLength = srcData->length;
HXDLIN( 131)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 131)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 131)									_this->buffer = this1;
HXDLIN( 131)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXDLIN( 131)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 131)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 131)								_this->byteOffset = 0;
HXDLIN( 131)								_this->length = srcLength;
HXDLIN( 131)								this2 = _this;
            							}
            							else {
HXDLIN( 131)								if (::hx::IsNotNull( buffer )) {
HXDLIN( 131)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 131)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 131)									if ((in_byteOffset < 0)) {
HXDLIN( 131)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 131)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXDLIN( 131)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 131)									int bufferByteLength = buffer->length;
HXDLIN( 131)									int elementSize = _this->bytesPerElement;
HXDLIN( 131)									int newByteLength = bufferByteLength;
HXDLIN( 131)									if (::hx::IsNull( len )) {
HXDLIN( 131)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 131)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXDLIN( 131)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 131)										if ((newByteLength < 0)) {
HXDLIN( 131)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXDLIN( 131)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 131)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 131)										if ((newRange > bufferByteLength)) {
HXDLIN( 131)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 131)									_this->buffer = buffer;
HXDLIN( 131)									_this->byteOffset = in_byteOffset;
HXDLIN( 131)									_this->byteLength = newByteLength;
HXDLIN( 131)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 131)									this2 = _this;
            								}
            								else {
HXDLIN( 131)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt8Array",6b,44,d5,85)));
            								}
            							}
            						}
            					}
            				}
HXDLIN( 131)				view = this2;
            			}
            			break;
            			case (int)5: {
HXDLIN( 131)				 ::Dynamic elements = null();
HXDLIN( 131)				 ::haxe::io::Bytes buffer = this1->buffer;
HXDLIN( 131)				::cpp::VirtualArray array = null();
HXDLIN( 131)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 131)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 131)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 131)				if (::hx::IsNull( byteoffset )) {
HXDLIN( 131)					byteoffset = 0;
            				}
HXDLIN( 131)				 ::lime::utils::ArrayBufferView this2;
HXDLIN( 131)				if (::hx::IsNotNull( elements )) {
HXDLIN( 131)					this2 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,5);
            				}
            				else {
HXDLIN( 131)					if (::hx::IsNotNull( array )) {
HXDLIN( 131)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,5);
HXDLIN( 131)						_this->byteOffset = 0;
HXDLIN( 131)						_this->length = array->get_length();
HXDLIN( 131)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 131)						 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 131)						_this->buffer = this1;
HXDLIN( 131)						_this->copyFromArray(array,null());
HXDLIN( 131)						this2 = _this;
            					}
            					else {
HXDLIN( 131)						if (::hx::IsNotNull( vector )) {
HXDLIN( 131)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,5);
HXDLIN( 131)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 131)							_this->byteOffset = 0;
HXDLIN( 131)							_this->length = array->get_length();
HXDLIN( 131)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 131)							 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 131)							_this->buffer = this1;
HXDLIN( 131)							_this->copyFromArray(array,null());
HXDLIN( 131)							this2 = _this;
            						}
            						else {
HXDLIN( 131)							if (::hx::IsNotNull( view1 )) {
HXDLIN( 131)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,5);
HXDLIN( 131)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 131)								int srcLength = view1->length;
HXDLIN( 131)								int srcByteOffset = view1->byteOffset;
HXDLIN( 131)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 131)								int elementSize = _this->bytesPerElement;
HXDLIN( 131)								if ((view1->type == _this->type)) {
HXDLIN( 131)									int srcLength = srcData->length;
HXDLIN( 131)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 131)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 131)									_this->buffer = this1;
HXDLIN( 131)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXDLIN( 131)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 131)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 131)								_this->byteOffset = 0;
HXDLIN( 131)								_this->length = srcLength;
HXDLIN( 131)								this2 = _this;
            							}
            							else {
HXDLIN( 131)								if (::hx::IsNotNull( buffer )) {
HXDLIN( 131)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,5);
HXDLIN( 131)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 131)									if ((in_byteOffset < 0)) {
HXDLIN( 131)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 131)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXDLIN( 131)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 131)									int bufferByteLength = buffer->length;
HXDLIN( 131)									int elementSize = _this->bytesPerElement;
HXDLIN( 131)									int newByteLength = bufferByteLength;
HXDLIN( 131)									if (::hx::IsNull( len )) {
HXDLIN( 131)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 131)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXDLIN( 131)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 131)										if ((newByteLength < 0)) {
HXDLIN( 131)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXDLIN( 131)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 131)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 131)										if ((newRange > bufferByteLength)) {
HXDLIN( 131)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 131)									_this->buffer = buffer;
HXDLIN( 131)									_this->byteOffset = in_byteOffset;
HXDLIN( 131)									_this->byteLength = newByteLength;
HXDLIN( 131)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 131)									this2 = _this;
            								}
            								else {
HXDLIN( 131)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt8ClampedArray",8d,06,77,13)));
            								}
            							}
            						}
            					}
            				}
HXDLIN( 131)				view = this2;
            			}
            			break;
            			case (int)6: {
HXDLIN( 131)				 ::Dynamic elements = null();
HXDLIN( 131)				 ::haxe::io::Bytes buffer = this1->buffer;
HXDLIN( 131)				::cpp::VirtualArray array = null();
HXDLIN( 131)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 131)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 131)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 131)				if (::hx::IsNull( byteoffset )) {
HXDLIN( 131)					byteoffset = 0;
            				}
HXDLIN( 131)				 ::lime::utils::ArrayBufferView this2;
HXDLIN( 131)				if (::hx::IsNotNull( elements )) {
HXDLIN( 131)					this2 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,6);
            				}
            				else {
HXDLIN( 131)					if (::hx::IsNotNull( array )) {
HXDLIN( 131)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 131)						_this->byteOffset = 0;
HXDLIN( 131)						_this->length = array->get_length();
HXDLIN( 131)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 131)						 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 131)						_this->buffer = this1;
HXDLIN( 131)						_this->copyFromArray(array,null());
HXDLIN( 131)						this2 = _this;
            					}
            					else {
HXDLIN( 131)						if (::hx::IsNotNull( vector )) {
HXDLIN( 131)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 131)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 131)							_this->byteOffset = 0;
HXDLIN( 131)							_this->length = array->get_length();
HXDLIN( 131)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 131)							 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 131)							_this->buffer = this1;
HXDLIN( 131)							_this->copyFromArray(array,null());
HXDLIN( 131)							this2 = _this;
            						}
            						else {
HXDLIN( 131)							if (::hx::IsNotNull( view1 )) {
HXDLIN( 131)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 131)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 131)								int srcLength = view1->length;
HXDLIN( 131)								int srcByteOffset = view1->byteOffset;
HXDLIN( 131)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 131)								int elementSize = _this->bytesPerElement;
HXDLIN( 131)								if ((view1->type == _this->type)) {
HXDLIN( 131)									int srcLength = srcData->length;
HXDLIN( 131)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 131)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 131)									_this->buffer = this1;
HXDLIN( 131)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXDLIN( 131)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 131)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 131)								_this->byteOffset = 0;
HXDLIN( 131)								_this->length = srcLength;
HXDLIN( 131)								this2 = _this;
            							}
            							else {
HXDLIN( 131)								if (::hx::IsNotNull( buffer )) {
HXDLIN( 131)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 131)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 131)									if ((in_byteOffset < 0)) {
HXDLIN( 131)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 131)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXDLIN( 131)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 131)									int bufferByteLength = buffer->length;
HXDLIN( 131)									int elementSize = _this->bytesPerElement;
HXDLIN( 131)									int newByteLength = bufferByteLength;
HXDLIN( 131)									if (::hx::IsNull( len )) {
HXDLIN( 131)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 131)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXDLIN( 131)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 131)										if ((newByteLength < 0)) {
HXDLIN( 131)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXDLIN( 131)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 131)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 131)										if ((newRange > bufferByteLength)) {
HXDLIN( 131)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 131)									_this->buffer = buffer;
HXDLIN( 131)									_this->byteOffset = in_byteOffset;
HXDLIN( 131)									_this->byteLength = newByteLength;
HXDLIN( 131)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 131)									this2 = _this;
            								}
            								else {
HXDLIN( 131)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt16Array",0a,c7,2d,d5)));
            								}
            							}
            						}
            					}
            				}
HXDLIN( 131)				view = this2;
            			}
            			break;
            			case (int)7: {
HXDLIN( 131)				 ::Dynamic elements = null();
HXDLIN( 131)				 ::haxe::io::Bytes buffer = this1->buffer;
HXDLIN( 131)				::cpp::VirtualArray array = null();
HXDLIN( 131)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 131)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 131)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 131)				if (::hx::IsNull( byteoffset )) {
HXDLIN( 131)					byteoffset = 0;
            				}
HXDLIN( 131)				 ::lime::utils::ArrayBufferView this2;
HXDLIN( 131)				if (::hx::IsNotNull( elements )) {
HXDLIN( 131)					this2 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,7);
            				}
            				else {
HXDLIN( 131)					if (::hx::IsNotNull( array )) {
HXDLIN( 131)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,7);
HXDLIN( 131)						_this->byteOffset = 0;
HXDLIN( 131)						_this->length = array->get_length();
HXDLIN( 131)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 131)						 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 131)						_this->buffer = this1;
HXDLIN( 131)						_this->copyFromArray(array,null());
HXDLIN( 131)						this2 = _this;
            					}
            					else {
HXDLIN( 131)						if (::hx::IsNotNull( vector )) {
HXDLIN( 131)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,7);
HXDLIN( 131)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 131)							_this->byteOffset = 0;
HXDLIN( 131)							_this->length = array->get_length();
HXDLIN( 131)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 131)							 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 131)							_this->buffer = this1;
HXDLIN( 131)							_this->copyFromArray(array,null());
HXDLIN( 131)							this2 = _this;
            						}
            						else {
HXDLIN( 131)							if (::hx::IsNotNull( view1 )) {
HXDLIN( 131)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,7);
HXDLIN( 131)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 131)								int srcLength = view1->length;
HXDLIN( 131)								int srcByteOffset = view1->byteOffset;
HXDLIN( 131)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 131)								int elementSize = _this->bytesPerElement;
HXDLIN( 131)								if ((view1->type == _this->type)) {
HXDLIN( 131)									int srcLength = srcData->length;
HXDLIN( 131)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 131)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 131)									_this->buffer = this1;
HXDLIN( 131)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXDLIN( 131)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 131)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 131)								_this->byteOffset = 0;
HXDLIN( 131)								_this->length = srcLength;
HXDLIN( 131)								this2 = _this;
            							}
            							else {
HXDLIN( 131)								if (::hx::IsNotNull( buffer )) {
HXDLIN( 131)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,7);
HXDLIN( 131)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 131)									if ((in_byteOffset < 0)) {
HXDLIN( 131)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 131)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXDLIN( 131)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 131)									int bufferByteLength = buffer->length;
HXDLIN( 131)									int elementSize = _this->bytesPerElement;
HXDLIN( 131)									int newByteLength = bufferByteLength;
HXDLIN( 131)									if (::hx::IsNull( len )) {
HXDLIN( 131)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 131)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXDLIN( 131)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 131)										if ((newByteLength < 0)) {
HXDLIN( 131)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXDLIN( 131)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 131)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 131)										if ((newRange > bufferByteLength)) {
HXDLIN( 131)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 131)									_this->buffer = buffer;
HXDLIN( 131)									_this->byteOffset = in_byteOffset;
HXDLIN( 131)									_this->byteLength = newByteLength;
HXDLIN( 131)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 131)									this2 = _this;
            								}
            								else {
HXDLIN( 131)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt32Array",10,43,eb,8e)));
            								}
            							}
            						}
            					}
            				}
HXDLIN( 131)				view = this2;
            			}
            			break;
            			case (int)8: {
HXDLIN( 131)				 ::Dynamic elements = null();
HXDLIN( 131)				 ::haxe::io::Bytes buffer = this1->buffer;
HXDLIN( 131)				::cpp::VirtualArray array = null();
HXDLIN( 131)				 ::openfl::_Vector::FloatVector vector = null();
HXDLIN( 131)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 131)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 131)				if (::hx::IsNull( byteoffset )) {
HXDLIN( 131)					byteoffset = 0;
            				}
HXDLIN( 131)				 ::lime::utils::ArrayBufferView this2;
HXDLIN( 131)				if (::hx::IsNotNull( elements )) {
HXDLIN( 131)					this2 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,8);
            				}
            				else {
HXDLIN( 131)					if (::hx::IsNotNull( array )) {
HXDLIN( 131)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 131)						_this->byteOffset = 0;
HXDLIN( 131)						_this->length = array->get_length();
HXDLIN( 131)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 131)						 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 131)						_this->buffer = this1;
HXDLIN( 131)						_this->copyFromArray(array,null());
HXDLIN( 131)						this2 = _this;
            					}
            					else {
HXDLIN( 131)						if (::hx::IsNotNull( vector )) {
HXDLIN( 131)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 131)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 131)							_this->byteOffset = 0;
HXDLIN( 131)							_this->length = array->get_length();
HXDLIN( 131)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 131)							 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 131)							_this->buffer = this1;
HXDLIN( 131)							_this->copyFromArray(array,null());
HXDLIN( 131)							this2 = _this;
            						}
            						else {
HXDLIN( 131)							if (::hx::IsNotNull( view1 )) {
HXDLIN( 131)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 131)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 131)								int srcLength = view1->length;
HXDLIN( 131)								int srcByteOffset = view1->byteOffset;
HXDLIN( 131)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 131)								int elementSize = _this->bytesPerElement;
HXDLIN( 131)								if ((view1->type == _this->type)) {
HXDLIN( 131)									int srcLength = srcData->length;
HXDLIN( 131)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 131)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 131)									_this->buffer = this1;
HXDLIN( 131)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXDLIN( 131)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 131)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 131)								_this->byteOffset = 0;
HXDLIN( 131)								_this->length = srcLength;
HXDLIN( 131)								this2 = _this;
            							}
            							else {
HXDLIN( 131)								if (::hx::IsNotNull( buffer )) {
HXDLIN( 131)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 131)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 131)									if ((in_byteOffset < 0)) {
HXDLIN( 131)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 131)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXDLIN( 131)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 131)									int bufferByteLength = buffer->length;
HXDLIN( 131)									int elementSize = _this->bytesPerElement;
HXDLIN( 131)									int newByteLength = bufferByteLength;
HXDLIN( 131)									if (::hx::IsNull( len )) {
HXDLIN( 131)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 131)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXDLIN( 131)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 131)										if ((newByteLength < 0)) {
HXDLIN( 131)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXDLIN( 131)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 131)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 131)										if ((newRange > bufferByteLength)) {
HXDLIN( 131)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 131)									_this->buffer = buffer;
HXDLIN( 131)									_this->byteOffset = in_byteOffset;
HXDLIN( 131)									_this->byteLength = newByteLength;
HXDLIN( 131)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 131)									this2 = _this;
            								}
            								else {
HXDLIN( 131)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Float32Array",8e,c1,f4,d4)));
            								}
            							}
            						}
            					}
            				}
HXDLIN( 131)				view = this2;
            			}
            			break;
            			case (int)9: {
HXDLIN( 131)				 ::Dynamic elements = null();
HXDLIN( 131)				 ::haxe::io::Bytes buffer = this1->buffer;
HXDLIN( 131)				::cpp::VirtualArray array = null();
HXDLIN( 131)				 ::openfl::_Vector::FloatVector vector = null();
HXDLIN( 131)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 131)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 131)				if (::hx::IsNull( byteoffset )) {
HXDLIN( 131)					byteoffset = 0;
            				}
HXDLIN( 131)				 ::lime::utils::ArrayBufferView this2;
HXDLIN( 131)				if (::hx::IsNotNull( elements )) {
HXDLIN( 131)					this2 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,9);
            				}
            				else {
HXDLIN( 131)					if (::hx::IsNotNull( array )) {
HXDLIN( 131)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,9);
HXDLIN( 131)						_this->byteOffset = 0;
HXDLIN( 131)						_this->length = array->get_length();
HXDLIN( 131)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 131)						 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 131)						_this->buffer = this1;
HXDLIN( 131)						_this->copyFromArray(array,null());
HXDLIN( 131)						this2 = _this;
            					}
            					else {
HXDLIN( 131)						if (::hx::IsNotNull( vector )) {
HXDLIN( 131)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,9);
HXDLIN( 131)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 131)							_this->byteOffset = 0;
HXDLIN( 131)							_this->length = array->get_length();
HXDLIN( 131)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 131)							 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 131)							_this->buffer = this1;
HXDLIN( 131)							_this->copyFromArray(array,null());
HXDLIN( 131)							this2 = _this;
            						}
            						else {
HXDLIN( 131)							if (::hx::IsNotNull( view1 )) {
HXDLIN( 131)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,9);
HXDLIN( 131)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 131)								int srcLength = view1->length;
HXDLIN( 131)								int srcByteOffset = view1->byteOffset;
HXDLIN( 131)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 131)								int elementSize = _this->bytesPerElement;
HXDLIN( 131)								if ((view1->type == _this->type)) {
HXDLIN( 131)									int srcLength = srcData->length;
HXDLIN( 131)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 131)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 131)									_this->buffer = this1;
HXDLIN( 131)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXDLIN( 131)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 131)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 131)								_this->byteOffset = 0;
HXDLIN( 131)								_this->length = srcLength;
HXDLIN( 131)								this2 = _this;
            							}
            							else {
HXDLIN( 131)								if (::hx::IsNotNull( buffer )) {
HXDLIN( 131)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,9);
HXDLIN( 131)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 131)									if ((in_byteOffset < 0)) {
HXDLIN( 131)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 131)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXDLIN( 131)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 131)									int bufferByteLength = buffer->length;
HXDLIN( 131)									int elementSize = _this->bytesPerElement;
HXDLIN( 131)									int newByteLength = bufferByteLength;
HXDLIN( 131)									if (::hx::IsNull( len )) {
HXDLIN( 131)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 131)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXDLIN( 131)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 131)										if ((newByteLength < 0)) {
HXDLIN( 131)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXDLIN( 131)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 131)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 131)										if ((newRange > bufferByteLength)) {
HXDLIN( 131)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 131)									_this->buffer = buffer;
HXDLIN( 131)									_this->byteOffset = in_byteOffset;
HXDLIN( 131)									_this->byteLength = newByteLength;
HXDLIN( 131)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 131)									this2 = _this;
            								}
            								else {
HXDLIN( 131)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Float64Array",8f,de,6b,1e)));
            								}
            							}
            						}
            					}
            				}
HXDLIN( 131)				view = this2;
            			}
            			break;
            		}
HXDLIN( 131)		return view;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Float64Array_Impl__obj,subarray,return )

 ::lime::utils::ArrayBufferView Float64Array_Impl__obj::fromBytes( ::haxe::io::Bytes bytes, ::Dynamic __o_byteOffset, ::Dynamic len){
            		 ::Dynamic byteOffset = __o_byteOffset;
            		if (::hx::IsNull(__o_byteOffset)) byteOffset = 0;
            	HX_GC_STACKFRAME(&_hx_pos_8b7b048dadc59c63_136_fromBytes)
HXDLIN( 136)		 ::Dynamic elements = null();
HXDLIN( 136)		::cpp::VirtualArray array = null();
HXDLIN( 136)		 ::openfl::_Vector::FloatVector vector = null();
HXDLIN( 136)		 ::lime::utils::ArrayBufferView view = null();
HXDLIN( 136)		 ::Dynamic byteoffset = byteOffset;
HXDLIN( 136)		if (::hx::IsNull( byteoffset )) {
HXDLIN( 136)			byteoffset = 0;
            		}
HXDLIN( 136)		 ::lime::utils::ArrayBufferView this1;
HXDLIN( 136)		if (::hx::IsNotNull( elements )) {
HXDLIN( 136)			this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,9);
            		}
            		else {
HXDLIN( 136)			if (::hx::IsNotNull( array )) {
HXDLIN( 136)				 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,9);
HXDLIN( 136)				_this->byteOffset = 0;
HXDLIN( 136)				_this->length = array->get_length();
HXDLIN( 136)				_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 136)				 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 136)				_this->buffer = this2;
HXDLIN( 136)				_this->copyFromArray(array,null());
HXDLIN( 136)				this1 = _this;
            			}
            			else {
HXDLIN( 136)				if (::hx::IsNotNull( vector )) {
HXDLIN( 136)					 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,9);
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
HXDLIN( 136)					if (::hx::IsNotNull( view )) {
HXDLIN( 136)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,9);
HXDLIN( 136)						 ::haxe::io::Bytes srcData = view->buffer;
HXDLIN( 136)						int srcLength = view->length;
HXDLIN( 136)						int srcByteOffset = view->byteOffset;
HXDLIN( 136)						int srcElementSize = view->bytesPerElement;
HXDLIN( 136)						int elementSize = _this->bytesPerElement;
HXDLIN( 136)						if ((view->type == _this->type)) {
HXDLIN( 136)							int srcLength = srcData->length;
HXDLIN( 136)							int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 136)							 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 136)							_this->buffer = this1;
HXDLIN( 136)							_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            						}
            						else {
HXDLIN( 136)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            						}
HXDLIN( 136)						_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 136)						_this->byteOffset = 0;
HXDLIN( 136)						_this->length = srcLength;
HXDLIN( 136)						this1 = _this;
            					}
            					else {
HXDLIN( 136)						if (::hx::IsNotNull( bytes )) {
HXDLIN( 136)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,9);
HXDLIN( 136)							int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 136)							if ((in_byteOffset < 0)) {
HXDLIN( 136)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            							}
HXDLIN( 136)							if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXDLIN( 136)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            							}
HXDLIN( 136)							int bufferByteLength = bytes->length;
HXDLIN( 136)							int elementSize = _this->bytesPerElement;
HXDLIN( 136)							int newByteLength = bufferByteLength;
HXDLIN( 136)							if (::hx::IsNull( len )) {
HXDLIN( 136)								newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 136)								if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXDLIN( 136)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
HXDLIN( 136)								if ((newByteLength < 0)) {
HXDLIN( 136)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
            							}
            							else {
HXDLIN( 136)								newByteLength = (( (int)(len) ) * _this->bytesPerElement);
HXDLIN( 136)								int newRange = (in_byteOffset + newByteLength);
HXDLIN( 136)								if ((newRange > bufferByteLength)) {
HXDLIN( 136)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
            							}
HXDLIN( 136)							_this->buffer = bytes;
HXDLIN( 136)							_this->byteOffset = in_byteOffset;
HXDLIN( 136)							_this->byteLength = newByteLength;
HXDLIN( 136)							_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 136)							this1 = _this;
            						}
            						else {
HXDLIN( 136)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Float64Array",8f,de,6b,1e)));
            						}
            					}
            				}
            			}
            		}
HXDLIN( 136)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Float64Array_Impl__obj,fromBytes,return )

 ::haxe::io::Bytes Float64Array_Impl__obj::toBytes( ::lime::utils::ArrayBufferView this1){
            	HX_STACKFRAME(&_hx_pos_8b7b048dadc59c63_141_toBytes)
HXDLIN( 141)		return this1->buffer;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Float64Array_Impl__obj,toBytes,return )

int Float64Array_Impl__obj::get_length( ::lime::utils::ArrayBufferView this1){
            	HX_STACKFRAME(&_hx_pos_8b7b048dadc59c63_146_get_length)
HXDLIN( 146)		return this1->length;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Float64Array_Impl__obj,get_length,return )

::String Float64Array_Impl__obj::toString( ::lime::utils::ArrayBufferView this1){
            	HX_STACKFRAME(&_hx_pos_8b7b048dadc59c63_164_toString)
HXDLIN( 164)		if (::hx::IsNotNull( this1 )) {
HXDLIN( 164)			return ((((HX_("Float64Array [byteLength:",32,73,38,ac) + this1->byteLength) + HX_(", length:",a0,04,67,ef)) + this1->length) + HX_("]",5d,00,00,00));
            		}
            		else {
HXDLIN( 164)			return null();
            		}
HXDLIN( 164)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Float64Array_Impl__obj,toString,return )


Float64Array_Impl__obj::Float64Array_Impl__obj()
{
}

bool Float64Array_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
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
static ::hx::StorageInfo *Float64Array_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Float64Array_Impl__obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &Float64Array_Impl__obj::BYTES_PER_ELEMENT,HX_("BYTES_PER_ELEMENT",a6,04,1d,cc)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Float64Array_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Float64Array_Impl__obj::BYTES_PER_ELEMENT,"BYTES_PER_ELEMENT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Float64Array_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Float64Array_Impl__obj::BYTES_PER_ELEMENT,"BYTES_PER_ELEMENT");
};

#endif

::hx::Class Float64Array_Impl__obj::__mClass;

static ::String Float64Array_Impl__obj_sStaticFields[] = {
	HX_("BYTES_PER_ELEMENT",a6,04,1d,cc),
	HX_("_new",61,15,1f,3f),
	HX_("subarray",19,54,81,07),
	HX_("fromBytes",a1,f2,20,72),
	HX_("toBytes",f0,54,1c,8a),
	HX_("get_length",af,04,8f,8f),
	HX_("toString",ac,d0,6e,38),
	::String(null())
};

void Float64Array_Impl__obj::__register()
{
	Float64Array_Impl__obj _hx_dummy;
	Float64Array_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.utils._Float64Array.Float64Array_Impl_",85,fe,f5,6f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Float64Array_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Float64Array_Impl__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Float64Array_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Float64Array_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Float64Array_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Float64Array_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Float64Array_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Float64Array_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_8b7b048dadc59c63_93_boot)
HXDLIN(  93)		BYTES_PER_ELEMENT = 8;
            	}
}

} // end namespace lime
} // end namespace utils
} // end namespace _Float64Array
