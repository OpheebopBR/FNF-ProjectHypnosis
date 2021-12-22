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
#ifndef INCLUDED_lime_utils__Int16Array_Int16Array_Impl_
#include <lime/utils/_Int16Array/Int16Array_Impl_.h>
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

HX_LOCAL_STACK_FRAME(_hx_pos_90caf5f0f330bbe1_98__new,"lime.utils._Int16Array.Int16Array_Impl_","_new",0xb8c47b6a,"lime.utils._Int16Array.Int16Array_Impl_._new","lime/utils/Int16Array.hx",98,0x65863181)
HX_LOCAL_STACK_FRAME(_hx_pos_90caf5f0f330bbe1_131_subarray,"lime.utils._Int16Array.Int16Array_Impl_","subarray",0xc56cf2a2,"lime.utils._Int16Array.Int16Array_Impl_.subarray","lime/utils/Int16Array.hx",131,0x65863181)
HX_LOCAL_STACK_FRAME(_hx_pos_90caf5f0f330bbe1_136_fromBytes,"lime.utils._Int16Array.Int16Array_Impl_","fromBytes",0xe2600bf8,"lime.utils._Int16Array.Int16Array_Impl_.fromBytes","lime/utils/Int16Array.hx",136,0x65863181)
HX_LOCAL_STACK_FRAME(_hx_pos_90caf5f0f330bbe1_141_toBytes,"lime.utils._Int16Array.Int16Array_Impl_","toBytes",0x574d9a87,"lime.utils._Int16Array.Int16Array_Impl_.toBytes","lime/utils/Int16Array.hx",141,0x65863181)
HX_LOCAL_STACK_FRAME(_hx_pos_90caf5f0f330bbe1_146_get_length,"lime.utils._Int16Array.Int16Array_Impl_","get_length",0x56861778,"lime.utils._Int16Array.Int16Array_Impl_.get_length","lime/utils/Int16Array.hx",146,0x65863181)
HX_LOCAL_STACK_FRAME(_hx_pos_90caf5f0f330bbe1_164_toString,"lime.utils._Int16Array.Int16Array_Impl_","toString",0xf65a6f35,"lime.utils._Int16Array.Int16Array_Impl_.toString","lime/utils/Int16Array.hx",164,0x65863181)
HX_LOCAL_STACK_FRAME(_hx_pos_90caf5f0f330bbe1_93_boot,"lime.utils._Int16Array.Int16Array_Impl_","boot",0xbac0ea3b,"lime.utils._Int16Array.Int16Array_Impl_.boot","lime/utils/Int16Array.hx",93,0x65863181)
namespace lime{
namespace utils{
namespace _Int16Array{

void Int16Array_Impl__obj::__construct() { }

Dynamic Int16Array_Impl__obj::__CreateEmpty() { return new Int16Array_Impl__obj; }

void *Int16Array_Impl__obj::_hx_vtable = 0;

Dynamic Int16Array_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Int16Array_Impl__obj > _hx_result = new Int16Array_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Int16Array_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2d094331;
}

int Int16Array_Impl__obj::BYTES_PER_ELEMENT;

 ::lime::utils::ArrayBufferView Int16Array_Impl__obj::_new( ::Dynamic elements, ::haxe::io::Bytes buffer,::cpp::VirtualArray array, ::openfl::_Vector::IntVector vector, ::lime::utils::ArrayBufferView view, ::Dynamic __o_byteoffset, ::Dynamic len){
            		 ::Dynamic byteoffset = __o_byteoffset;
            		if (::hx::IsNull(__o_byteoffset)) byteoffset = 0;
            	HX_GC_STACKFRAME(&_hx_pos_90caf5f0f330bbe1_98__new)
HXDLIN(  98)		 ::lime::utils::ArrayBufferView this1;
HXLINE( 101)		if (::hx::IsNotNull( elements )) {
HXLINE( 103)			this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,2);
            		}
            		else {
HXLINE( 105)			if (::hx::IsNotNull( array )) {
HXLINE( 107)				 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,2);
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
HXLINE( 112)					 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,2);
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
HXLINE( 117)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,2);
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
HXLINE( 121)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,2);
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
HXLINE( 125)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Int16Array",95,b2,95,a7)));
            						}
            					}
            				}
            			}
            		}
HXLINE(  98)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(Int16Array_Impl__obj,_new,return )

 ::lime::utils::ArrayBufferView Int16Array_Impl__obj::subarray( ::lime::utils::ArrayBufferView this1,int begin, ::Dynamic end){
            	HX_GC_STACKFRAME(&_hx_pos_90caf5f0f330bbe1_131_subarray)
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


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Int16Array_Impl__obj,subarray,return )

 ::lime::utils::ArrayBufferView Int16Array_Impl__obj::fromBytes( ::haxe::io::Bytes bytes, ::Dynamic __o_byteOffset, ::Dynamic len){
            		 ::Dynamic byteOffset = __o_byteOffset;
            		if (::hx::IsNull(__o_byteOffset)) byteOffset = 0;
            	HX_GC_STACKFRAME(&_hx_pos_90caf5f0f330bbe1_136_fromBytes)
HXDLIN( 136)		 ::Dynamic elements = null();
HXDLIN( 136)		::cpp::VirtualArray array = null();
HXDLIN( 136)		 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 136)		 ::lime::utils::ArrayBufferView view = null();
HXDLIN( 136)		 ::Dynamic byteoffset = byteOffset;
HXDLIN( 136)		if (::hx::IsNull( byteoffset )) {
HXDLIN( 136)			byteoffset = 0;
            		}
HXDLIN( 136)		 ::lime::utils::ArrayBufferView this1;
HXDLIN( 136)		if (::hx::IsNotNull( elements )) {
HXDLIN( 136)			this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,2);
            		}
            		else {
HXDLIN( 136)			if (::hx::IsNotNull( array )) {
HXDLIN( 136)				 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,2);
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
HXDLIN( 136)					 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,2);
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
HXDLIN( 136)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,2);
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
HXDLIN( 136)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,2);
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
HXDLIN( 136)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Int16Array",95,b2,95,a7)));
            						}
            					}
            				}
            			}
            		}
HXDLIN( 136)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Int16Array_Impl__obj,fromBytes,return )

 ::haxe::io::Bytes Int16Array_Impl__obj::toBytes( ::lime::utils::ArrayBufferView this1){
            	HX_STACKFRAME(&_hx_pos_90caf5f0f330bbe1_141_toBytes)
HXDLIN( 141)		return this1->buffer;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Int16Array_Impl__obj,toBytes,return )

int Int16Array_Impl__obj::get_length( ::lime::utils::ArrayBufferView this1){
            	HX_STACKFRAME(&_hx_pos_90caf5f0f330bbe1_146_get_length)
HXDLIN( 146)		return this1->length;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Int16Array_Impl__obj,get_length,return )

::String Int16Array_Impl__obj::toString( ::lime::utils::ArrayBufferView this1){
            	HX_STACKFRAME(&_hx_pos_90caf5f0f330bbe1_164_toString)
HXDLIN( 164)		if (::hx::IsNotNull( this1 )) {
HXDLIN( 164)			return ((((HX_("Int16Array [byteLength:",6c,af,22,05) + this1->byteLength) + HX_(", length:",a0,04,67,ef)) + this1->length) + HX_("]",5d,00,00,00));
            		}
            		else {
HXDLIN( 164)			return null();
            		}
HXDLIN( 164)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Int16Array_Impl__obj,toString,return )


Int16Array_Impl__obj::Int16Array_Impl__obj()
{
}

bool Int16Array_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
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
static ::hx::StorageInfo *Int16Array_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Int16Array_Impl__obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &Int16Array_Impl__obj::BYTES_PER_ELEMENT,HX_("BYTES_PER_ELEMENT",a6,04,1d,cc)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Int16Array_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Int16Array_Impl__obj::BYTES_PER_ELEMENT,"BYTES_PER_ELEMENT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Int16Array_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Int16Array_Impl__obj::BYTES_PER_ELEMENT,"BYTES_PER_ELEMENT");
};

#endif

::hx::Class Int16Array_Impl__obj::__mClass;

static ::String Int16Array_Impl__obj_sStaticFields[] = {
	HX_("BYTES_PER_ELEMENT",a6,04,1d,cc),
	HX_("_new",61,15,1f,3f),
	HX_("subarray",19,54,81,07),
	HX_("fromBytes",a1,f2,20,72),
	HX_("toBytes",f0,54,1c,8a),
	HX_("get_length",af,04,8f,8f),
	HX_("toString",ac,d0,6e,38),
	::String(null())
};

void Int16Array_Impl__obj::__register()
{
	Int16Array_Impl__obj _hx_dummy;
	Int16Array_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.utils._Int16Array.Int16Array_Impl_",05,b7,5a,eb);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Int16Array_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Int16Array_Impl__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Int16Array_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Int16Array_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Int16Array_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Int16Array_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Int16Array_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Int16Array_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_90caf5f0f330bbe1_93_boot)
HXDLIN(  93)		BYTES_PER_ELEMENT = 2;
            	}
}

} // end namespace lime
} // end namespace utils
} // end namespace _Int16Array
