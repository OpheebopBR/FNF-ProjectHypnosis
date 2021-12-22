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
#ifndef INCLUDED_lime_utils__UInt8ClampedArray_UInt8ClampedArray_Impl_
#include <lime/utils/_UInt8ClampedArray/UInt8ClampedArray_Impl_.h>
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

HX_LOCAL_STACK_FRAME(_hx_pos_aab5f43989e18920_107__new,"lime.utils._UInt8ClampedArray.UInt8ClampedArray_Impl_","_new",0xbd43992c,"lime.utils._UInt8ClampedArray.UInt8ClampedArray_Impl_._new","lime/utils/UInt8ClampedArray.hx",107,0x6c0e3319)
HX_LOCAL_STACK_FRAME(_hx_pos_aab5f43989e18920_140_subarray,"lime.utils._UInt8ClampedArray.UInt8ClampedArray_Impl_","subarray",0xc7fb1964,"lime.utils._UInt8ClampedArray.UInt8ClampedArray_Impl_.subarray","lime/utils/UInt8ClampedArray.hx",140,0x6c0e3319)
HX_LOCAL_STACK_FRAME(_hx_pos_aab5f43989e18920_145_fromBytes,"lime.utils._UInt8ClampedArray.UInt8ClampedArray_Impl_","fromBytes",0x1c33cef6,"lime.utils._UInt8ClampedArray.UInt8ClampedArray_Impl_.fromBytes","lime/utils/UInt8ClampedArray.hx",145,0x6c0e3319)
HX_LOCAL_STACK_FRAME(_hx_pos_aab5f43989e18920_150_toBytes,"lime.utils._UInt8ClampedArray.UInt8ClampedArray_Impl_","toBytes",0x979a0205,"lime.utils._UInt8ClampedArray.UInt8ClampedArray_Impl_.toBytes","lime/utils/UInt8ClampedArray.hx",150,0x6c0e3319)
HX_LOCAL_STACK_FRAME(_hx_pos_aab5f43989e18920_155_get_length,"lime.utils._UInt8ClampedArray.UInt8ClampedArray_Impl_","get_length",0xb5fcf2ba,"lime.utils._UInt8ClampedArray.UInt8ClampedArray_Impl_.get_length","lime/utils/UInt8ClampedArray.hx",155,0x6c0e3319)
HX_LOCAL_STACK_FRAME(_hx_pos_aab5f43989e18920_173_toString,"lime.utils._UInt8ClampedArray.UInt8ClampedArray_Impl_","toString",0xf8e895f7,"lime.utils._UInt8ClampedArray.UInt8ClampedArray_Impl_.toString","lime/utils/UInt8ClampedArray.hx",173,0x6c0e3319)
HX_LOCAL_STACK_FRAME(_hx_pos_aab5f43989e18920_102_boot,"lime.utils._UInt8ClampedArray.UInt8ClampedArray_Impl_","boot",0xbf4007fd,"lime.utils._UInt8ClampedArray.UInt8ClampedArray_Impl_.boot","lime/utils/UInt8ClampedArray.hx",102,0x6c0e3319)
namespace lime{
namespace utils{
namespace _UInt8ClampedArray{

void UInt8ClampedArray_Impl__obj::__construct() { }

Dynamic UInt8ClampedArray_Impl__obj::__CreateEmpty() { return new UInt8ClampedArray_Impl__obj; }

void *UInt8ClampedArray_Impl__obj::_hx_vtable = 0;

Dynamic UInt8ClampedArray_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< UInt8ClampedArray_Impl__obj > _hx_result = new UInt8ClampedArray_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool UInt8ClampedArray_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6583eea3;
}

int UInt8ClampedArray_Impl__obj::BYTES_PER_ELEMENT;

 ::lime::utils::ArrayBufferView UInt8ClampedArray_Impl__obj::_new( ::Dynamic elements, ::haxe::io::Bytes buffer,::cpp::VirtualArray array, ::openfl::_Vector::IntVector vector, ::lime::utils::ArrayBufferView view, ::Dynamic __o_byteoffset, ::Dynamic len){
            		 ::Dynamic byteoffset = __o_byteoffset;
            		if (::hx::IsNull(__o_byteoffset)) byteoffset = 0;
            	HX_GC_STACKFRAME(&_hx_pos_aab5f43989e18920_107__new)
HXDLIN( 107)		 ::lime::utils::ArrayBufferView this1;
HXLINE( 110)		if (::hx::IsNotNull( elements )) {
HXLINE( 112)			this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,5);
            		}
            		else {
HXLINE( 114)			if (::hx::IsNotNull( array )) {
HXLINE( 116)				 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,5);
HXDLIN( 116)				_this->byteOffset = 0;
HXDLIN( 116)				_this->length = array->get_length();
HXDLIN( 116)				_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 116)				 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 116)				_this->buffer = this2;
HXDLIN( 116)				_this->copyFromArray(array,null());
HXDLIN( 116)				this1 = _this;
            			}
            			else {
HXLINE( 119)				if (::hx::IsNotNull( vector )) {
HXLINE( 121)					 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,5);
HXDLIN( 121)					::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 121)					_this->byteOffset = 0;
HXDLIN( 121)					_this->length = array->get_length();
HXDLIN( 121)					_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 121)					 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 121)					_this->buffer = this2;
HXDLIN( 121)					_this->copyFromArray(array,null());
HXDLIN( 121)					this1 = _this;
            				}
            				else {
HXLINE( 124)					if (::hx::IsNotNull( view )) {
HXLINE( 126)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,5);
HXDLIN( 126)						 ::haxe::io::Bytes srcData = view->buffer;
HXDLIN( 126)						int srcLength = view->length;
HXDLIN( 126)						int srcByteOffset = view->byteOffset;
HXDLIN( 126)						int srcElementSize = view->bytesPerElement;
HXDLIN( 126)						int elementSize = _this->bytesPerElement;
HXDLIN( 126)						if ((view->type == _this->type)) {
HXLINE( 126)							int srcLength = srcData->length;
HXDLIN( 126)							int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 126)							 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 126)							_this->buffer = this1;
HXDLIN( 126)							_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            						}
            						else {
HXLINE( 126)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            						}
HXDLIN( 126)						_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 126)						_this->byteOffset = 0;
HXDLIN( 126)						_this->length = srcLength;
HXDLIN( 126)						this1 = _this;
            					}
            					else {
HXLINE( 128)						if (::hx::IsNotNull( buffer )) {
HXLINE( 130)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,5);
HXDLIN( 130)							int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 130)							if ((in_byteOffset < 0)) {
HXLINE( 130)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            							}
HXDLIN( 130)							if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 130)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            							}
HXDLIN( 130)							int bufferByteLength = buffer->length;
HXDLIN( 130)							int elementSize = _this->bytesPerElement;
HXDLIN( 130)							int newByteLength = bufferByteLength;
HXDLIN( 130)							if (::hx::IsNull( len )) {
HXLINE( 130)								newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 130)								if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 130)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
HXDLIN( 130)								if ((newByteLength < 0)) {
HXLINE( 130)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
            							}
            							else {
HXLINE( 130)								newByteLength = (( (int)(len) ) * _this->bytesPerElement);
HXDLIN( 130)								int newRange = (in_byteOffset + newByteLength);
HXDLIN( 130)								if ((newRange > bufferByteLength)) {
HXLINE( 130)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
            							}
HXDLIN( 130)							_this->buffer = buffer;
HXDLIN( 130)							_this->byteOffset = in_byteOffset;
HXDLIN( 130)							_this->byteLength = newByteLength;
HXDLIN( 130)							_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 130)							this1 = _this;
            						}
            						else {
HXLINE( 134)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt8ClampedArray",8d,06,77,13)));
            						}
            					}
            				}
            			}
            		}
HXLINE( 107)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(UInt8ClampedArray_Impl__obj,_new,return )

 ::lime::utils::ArrayBufferView UInt8ClampedArray_Impl__obj::subarray( ::lime::utils::ArrayBufferView this1,int begin, ::Dynamic end){
            	HX_GC_STACKFRAME(&_hx_pos_aab5f43989e18920_140_subarray)
HXDLIN( 140)		 ::Dynamic end1 = end;
HXDLIN( 140)		if (::hx::IsNull( end1 )) {
HXDLIN( 140)			end1 = this1->length;
            		}
HXDLIN( 140)		int len = (( (int)(end1) ) - begin);
HXDLIN( 140)		int byte_offset = ((begin * this1->bytesPerElement) + this1->byteOffset);
HXDLIN( 140)		 ::lime::utils::ArrayBufferView view;
HXDLIN( 140)		switch((int)(this1->type)){
            			case (int)0: {
HXDLIN( 140)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("subarray on a blank ArrayBufferView",39,87,fd,19)));
            			}
            			break;
            			case (int)1: {
HXDLIN( 140)				 ::Dynamic elements = null();
HXDLIN( 140)				 ::haxe::io::Bytes buffer = this1->buffer;
HXDLIN( 140)				::cpp::VirtualArray array = null();
HXDLIN( 140)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 140)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 140)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 140)				if (::hx::IsNull( byteoffset )) {
HXDLIN( 140)					byteoffset = 0;
            				}
HXDLIN( 140)				 ::lime::utils::ArrayBufferView this2;
HXDLIN( 140)				if (::hx::IsNotNull( elements )) {
HXDLIN( 140)					this2 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,1);
            				}
            				else {
HXDLIN( 140)					if (::hx::IsNotNull( array )) {
HXDLIN( 140)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,1);
HXDLIN( 140)						_this->byteOffset = 0;
HXDLIN( 140)						_this->length = array->get_length();
HXDLIN( 140)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 140)						 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 140)						_this->buffer = this1;
HXDLIN( 140)						_this->copyFromArray(array,null());
HXDLIN( 140)						this2 = _this;
            					}
            					else {
HXDLIN( 140)						if (::hx::IsNotNull( vector )) {
HXDLIN( 140)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,1);
HXDLIN( 140)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 140)							_this->byteOffset = 0;
HXDLIN( 140)							_this->length = array->get_length();
HXDLIN( 140)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 140)							 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 140)							_this->buffer = this1;
HXDLIN( 140)							_this->copyFromArray(array,null());
HXDLIN( 140)							this2 = _this;
            						}
            						else {
HXDLIN( 140)							if (::hx::IsNotNull( view1 )) {
HXDLIN( 140)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,1);
HXDLIN( 140)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 140)								int srcLength = view1->length;
HXDLIN( 140)								int srcByteOffset = view1->byteOffset;
HXDLIN( 140)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 140)								int elementSize = _this->bytesPerElement;
HXDLIN( 140)								if ((view1->type == _this->type)) {
HXDLIN( 140)									int srcLength = srcData->length;
HXDLIN( 140)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 140)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 140)									_this->buffer = this1;
HXDLIN( 140)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXDLIN( 140)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 140)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 140)								_this->byteOffset = 0;
HXDLIN( 140)								_this->length = srcLength;
HXDLIN( 140)								this2 = _this;
            							}
            							else {
HXDLIN( 140)								if (::hx::IsNotNull( buffer )) {
HXDLIN( 140)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,1);
HXDLIN( 140)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 140)									if ((in_byteOffset < 0)) {
HXDLIN( 140)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 140)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXDLIN( 140)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 140)									int bufferByteLength = buffer->length;
HXDLIN( 140)									int elementSize = _this->bytesPerElement;
HXDLIN( 140)									int newByteLength = bufferByteLength;
HXDLIN( 140)									if (::hx::IsNull( len )) {
HXDLIN( 140)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 140)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXDLIN( 140)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 140)										if ((newByteLength < 0)) {
HXDLIN( 140)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXDLIN( 140)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 140)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 140)										if ((newRange > bufferByteLength)) {
HXDLIN( 140)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 140)									_this->buffer = buffer;
HXDLIN( 140)									_this->byteOffset = in_byteOffset;
HXDLIN( 140)									_this->byteLength = newByteLength;
HXDLIN( 140)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 140)									this2 = _this;
            								}
            								else {
HXDLIN( 140)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Int8Array",40,53,da,77)));
            								}
            							}
            						}
            					}
            				}
HXDLIN( 140)				view = this2;
            			}
            			break;
            			case (int)2: {
HXDLIN( 140)				 ::Dynamic elements = null();
HXDLIN( 140)				 ::haxe::io::Bytes buffer = this1->buffer;
HXDLIN( 140)				::cpp::VirtualArray array = null();
HXDLIN( 140)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 140)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 140)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 140)				if (::hx::IsNull( byteoffset )) {
HXDLIN( 140)					byteoffset = 0;
            				}
HXDLIN( 140)				 ::lime::utils::ArrayBufferView this2;
HXDLIN( 140)				if (::hx::IsNotNull( elements )) {
HXDLIN( 140)					this2 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,2);
            				}
            				else {
HXDLIN( 140)					if (::hx::IsNotNull( array )) {
HXDLIN( 140)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,2);
HXDLIN( 140)						_this->byteOffset = 0;
HXDLIN( 140)						_this->length = array->get_length();
HXDLIN( 140)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 140)						 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 140)						_this->buffer = this1;
HXDLIN( 140)						_this->copyFromArray(array,null());
HXDLIN( 140)						this2 = _this;
            					}
            					else {
HXDLIN( 140)						if (::hx::IsNotNull( vector )) {
HXDLIN( 140)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,2);
HXDLIN( 140)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 140)							_this->byteOffset = 0;
HXDLIN( 140)							_this->length = array->get_length();
HXDLIN( 140)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 140)							 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 140)							_this->buffer = this1;
HXDLIN( 140)							_this->copyFromArray(array,null());
HXDLIN( 140)							this2 = _this;
            						}
            						else {
HXDLIN( 140)							if (::hx::IsNotNull( view1 )) {
HXDLIN( 140)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,2);
HXDLIN( 140)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 140)								int srcLength = view1->length;
HXDLIN( 140)								int srcByteOffset = view1->byteOffset;
HXDLIN( 140)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 140)								int elementSize = _this->bytesPerElement;
HXDLIN( 140)								if ((view1->type == _this->type)) {
HXDLIN( 140)									int srcLength = srcData->length;
HXDLIN( 140)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 140)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 140)									_this->buffer = this1;
HXDLIN( 140)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXDLIN( 140)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 140)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 140)								_this->byteOffset = 0;
HXDLIN( 140)								_this->length = srcLength;
HXDLIN( 140)								this2 = _this;
            							}
            							else {
HXDLIN( 140)								if (::hx::IsNotNull( buffer )) {
HXDLIN( 140)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,2);
HXDLIN( 140)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 140)									if ((in_byteOffset < 0)) {
HXDLIN( 140)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 140)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXDLIN( 140)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 140)									int bufferByteLength = buffer->length;
HXDLIN( 140)									int elementSize = _this->bytesPerElement;
HXDLIN( 140)									int newByteLength = bufferByteLength;
HXDLIN( 140)									if (::hx::IsNull( len )) {
HXDLIN( 140)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 140)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXDLIN( 140)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 140)										if ((newByteLength < 0)) {
HXDLIN( 140)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXDLIN( 140)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 140)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 140)										if ((newRange > bufferByteLength)) {
HXDLIN( 140)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 140)									_this->buffer = buffer;
HXDLIN( 140)									_this->byteOffset = in_byteOffset;
HXDLIN( 140)									_this->byteLength = newByteLength;
HXDLIN( 140)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 140)									this2 = _this;
            								}
            								else {
HXDLIN( 140)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Int16Array",95,b2,95,a7)));
            								}
            							}
            						}
            					}
            				}
HXDLIN( 140)				view = this2;
            			}
            			break;
            			case (int)3: {
HXDLIN( 140)				 ::Dynamic elements = null();
HXDLIN( 140)				 ::haxe::io::Bytes buffer = this1->buffer;
HXDLIN( 140)				::cpp::VirtualArray array = null();
HXDLIN( 140)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 140)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 140)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 140)				if (::hx::IsNull( byteoffset )) {
HXDLIN( 140)					byteoffset = 0;
            				}
HXDLIN( 140)				 ::lime::utils::ArrayBufferView this2;
HXDLIN( 140)				if (::hx::IsNotNull( elements )) {
HXDLIN( 140)					this2 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,3);
            				}
            				else {
HXDLIN( 140)					if (::hx::IsNotNull( array )) {
HXDLIN( 140)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,3);
HXDLIN( 140)						_this->byteOffset = 0;
HXDLIN( 140)						_this->length = array->get_length();
HXDLIN( 140)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 140)						 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 140)						_this->buffer = this1;
HXDLIN( 140)						_this->copyFromArray(array,null());
HXDLIN( 140)						this2 = _this;
            					}
            					else {
HXDLIN( 140)						if (::hx::IsNotNull( vector )) {
HXDLIN( 140)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,3);
HXDLIN( 140)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 140)							_this->byteOffset = 0;
HXDLIN( 140)							_this->length = array->get_length();
HXDLIN( 140)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 140)							 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 140)							_this->buffer = this1;
HXDLIN( 140)							_this->copyFromArray(array,null());
HXDLIN( 140)							this2 = _this;
            						}
            						else {
HXDLIN( 140)							if (::hx::IsNotNull( view1 )) {
HXDLIN( 140)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,3);
HXDLIN( 140)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 140)								int srcLength = view1->length;
HXDLIN( 140)								int srcByteOffset = view1->byteOffset;
HXDLIN( 140)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 140)								int elementSize = _this->bytesPerElement;
HXDLIN( 140)								if ((view1->type == _this->type)) {
HXDLIN( 140)									int srcLength = srcData->length;
HXDLIN( 140)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 140)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 140)									_this->buffer = this1;
HXDLIN( 140)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXDLIN( 140)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 140)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 140)								_this->byteOffset = 0;
HXDLIN( 140)								_this->length = srcLength;
HXDLIN( 140)								this2 = _this;
            							}
            							else {
HXDLIN( 140)								if (::hx::IsNotNull( buffer )) {
HXDLIN( 140)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,3);
HXDLIN( 140)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 140)									if ((in_byteOffset < 0)) {
HXDLIN( 140)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 140)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXDLIN( 140)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 140)									int bufferByteLength = buffer->length;
HXDLIN( 140)									int elementSize = _this->bytesPerElement;
HXDLIN( 140)									int newByteLength = bufferByteLength;
HXDLIN( 140)									if (::hx::IsNull( len )) {
HXDLIN( 140)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 140)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXDLIN( 140)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 140)										if ((newByteLength < 0)) {
HXDLIN( 140)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXDLIN( 140)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 140)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 140)										if ((newRange > bufferByteLength)) {
HXDLIN( 140)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 140)									_this->buffer = buffer;
HXDLIN( 140)									_this->byteOffset = in_byteOffset;
HXDLIN( 140)									_this->byteLength = newByteLength;
HXDLIN( 140)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 140)									this2 = _this;
            								}
            								else {
HXDLIN( 140)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Int32Array",9b,2e,53,61)));
            								}
            							}
            						}
            					}
            				}
HXDLIN( 140)				view = this2;
            			}
            			break;
            			case (int)4: {
HXDLIN( 140)				 ::Dynamic elements = null();
HXDLIN( 140)				 ::haxe::io::Bytes buffer = this1->buffer;
HXDLIN( 140)				::cpp::VirtualArray array = null();
HXDLIN( 140)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 140)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 140)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 140)				if (::hx::IsNull( byteoffset )) {
HXDLIN( 140)					byteoffset = 0;
            				}
HXDLIN( 140)				 ::lime::utils::ArrayBufferView this2;
HXDLIN( 140)				if (::hx::IsNotNull( elements )) {
HXDLIN( 140)					this2 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,4);
            				}
            				else {
HXDLIN( 140)					if (::hx::IsNotNull( array )) {
HXDLIN( 140)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 140)						_this->byteOffset = 0;
HXDLIN( 140)						_this->length = array->get_length();
HXDLIN( 140)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 140)						 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 140)						_this->buffer = this1;
HXDLIN( 140)						_this->copyFromArray(array,null());
HXDLIN( 140)						this2 = _this;
            					}
            					else {
HXDLIN( 140)						if (::hx::IsNotNull( vector )) {
HXDLIN( 140)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 140)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 140)							_this->byteOffset = 0;
HXDLIN( 140)							_this->length = array->get_length();
HXDLIN( 140)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 140)							 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 140)							_this->buffer = this1;
HXDLIN( 140)							_this->copyFromArray(array,null());
HXDLIN( 140)							this2 = _this;
            						}
            						else {
HXDLIN( 140)							if (::hx::IsNotNull( view1 )) {
HXDLIN( 140)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 140)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 140)								int srcLength = view1->length;
HXDLIN( 140)								int srcByteOffset = view1->byteOffset;
HXDLIN( 140)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 140)								int elementSize = _this->bytesPerElement;
HXDLIN( 140)								if ((view1->type == _this->type)) {
HXDLIN( 140)									int srcLength = srcData->length;
HXDLIN( 140)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 140)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 140)									_this->buffer = this1;
HXDLIN( 140)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXDLIN( 140)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 140)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 140)								_this->byteOffset = 0;
HXDLIN( 140)								_this->length = srcLength;
HXDLIN( 140)								this2 = _this;
            							}
            							else {
HXDLIN( 140)								if (::hx::IsNotNull( buffer )) {
HXDLIN( 140)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 140)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 140)									if ((in_byteOffset < 0)) {
HXDLIN( 140)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 140)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXDLIN( 140)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 140)									int bufferByteLength = buffer->length;
HXDLIN( 140)									int elementSize = _this->bytesPerElement;
HXDLIN( 140)									int newByteLength = bufferByteLength;
HXDLIN( 140)									if (::hx::IsNull( len )) {
HXDLIN( 140)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 140)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXDLIN( 140)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 140)										if ((newByteLength < 0)) {
HXDLIN( 140)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXDLIN( 140)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 140)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 140)										if ((newRange > bufferByteLength)) {
HXDLIN( 140)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 140)									_this->buffer = buffer;
HXDLIN( 140)									_this->byteOffset = in_byteOffset;
HXDLIN( 140)									_this->byteLength = newByteLength;
HXDLIN( 140)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 140)									this2 = _this;
            								}
            								else {
HXDLIN( 140)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt8Array",6b,44,d5,85)));
            								}
            							}
            						}
            					}
            				}
HXDLIN( 140)				view = this2;
            			}
            			break;
            			case (int)5: {
HXDLIN( 140)				 ::Dynamic elements = null();
HXDLIN( 140)				 ::haxe::io::Bytes buffer = this1->buffer;
HXDLIN( 140)				::cpp::VirtualArray array = null();
HXDLIN( 140)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 140)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 140)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 140)				if (::hx::IsNull( byteoffset )) {
HXDLIN( 140)					byteoffset = 0;
            				}
HXDLIN( 140)				 ::lime::utils::ArrayBufferView this2;
HXDLIN( 140)				if (::hx::IsNotNull( elements )) {
HXDLIN( 140)					this2 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,5);
            				}
            				else {
HXDLIN( 140)					if (::hx::IsNotNull( array )) {
HXDLIN( 140)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,5);
HXDLIN( 140)						_this->byteOffset = 0;
HXDLIN( 140)						_this->length = array->get_length();
HXDLIN( 140)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 140)						 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 140)						_this->buffer = this1;
HXDLIN( 140)						_this->copyFromArray(array,null());
HXDLIN( 140)						this2 = _this;
            					}
            					else {
HXDLIN( 140)						if (::hx::IsNotNull( vector )) {
HXDLIN( 140)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,5);
HXDLIN( 140)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 140)							_this->byteOffset = 0;
HXDLIN( 140)							_this->length = array->get_length();
HXDLIN( 140)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 140)							 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 140)							_this->buffer = this1;
HXDLIN( 140)							_this->copyFromArray(array,null());
HXDLIN( 140)							this2 = _this;
            						}
            						else {
HXDLIN( 140)							if (::hx::IsNotNull( view1 )) {
HXDLIN( 140)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,5);
HXDLIN( 140)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 140)								int srcLength = view1->length;
HXDLIN( 140)								int srcByteOffset = view1->byteOffset;
HXDLIN( 140)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 140)								int elementSize = _this->bytesPerElement;
HXDLIN( 140)								if ((view1->type == _this->type)) {
HXDLIN( 140)									int srcLength = srcData->length;
HXDLIN( 140)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 140)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 140)									_this->buffer = this1;
HXDLIN( 140)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXDLIN( 140)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 140)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 140)								_this->byteOffset = 0;
HXDLIN( 140)								_this->length = srcLength;
HXDLIN( 140)								this2 = _this;
            							}
            							else {
HXDLIN( 140)								if (::hx::IsNotNull( buffer )) {
HXDLIN( 140)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,5);
HXDLIN( 140)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 140)									if ((in_byteOffset < 0)) {
HXDLIN( 140)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 140)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXDLIN( 140)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 140)									int bufferByteLength = buffer->length;
HXDLIN( 140)									int elementSize = _this->bytesPerElement;
HXDLIN( 140)									int newByteLength = bufferByteLength;
HXDLIN( 140)									if (::hx::IsNull( len )) {
HXDLIN( 140)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 140)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXDLIN( 140)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 140)										if ((newByteLength < 0)) {
HXDLIN( 140)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXDLIN( 140)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 140)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 140)										if ((newRange > bufferByteLength)) {
HXDLIN( 140)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 140)									_this->buffer = buffer;
HXDLIN( 140)									_this->byteOffset = in_byteOffset;
HXDLIN( 140)									_this->byteLength = newByteLength;
HXDLIN( 140)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 140)									this2 = _this;
            								}
            								else {
HXDLIN( 140)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt8ClampedArray",8d,06,77,13)));
            								}
            							}
            						}
            					}
            				}
HXDLIN( 140)				view = this2;
            			}
            			break;
            			case (int)6: {
HXDLIN( 140)				 ::Dynamic elements = null();
HXDLIN( 140)				 ::haxe::io::Bytes buffer = this1->buffer;
HXDLIN( 140)				::cpp::VirtualArray array = null();
HXDLIN( 140)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 140)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 140)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 140)				if (::hx::IsNull( byteoffset )) {
HXDLIN( 140)					byteoffset = 0;
            				}
HXDLIN( 140)				 ::lime::utils::ArrayBufferView this2;
HXDLIN( 140)				if (::hx::IsNotNull( elements )) {
HXDLIN( 140)					this2 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,6);
            				}
            				else {
HXDLIN( 140)					if (::hx::IsNotNull( array )) {
HXDLIN( 140)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 140)						_this->byteOffset = 0;
HXDLIN( 140)						_this->length = array->get_length();
HXDLIN( 140)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 140)						 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 140)						_this->buffer = this1;
HXDLIN( 140)						_this->copyFromArray(array,null());
HXDLIN( 140)						this2 = _this;
            					}
            					else {
HXDLIN( 140)						if (::hx::IsNotNull( vector )) {
HXDLIN( 140)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 140)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 140)							_this->byteOffset = 0;
HXDLIN( 140)							_this->length = array->get_length();
HXDLIN( 140)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 140)							 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 140)							_this->buffer = this1;
HXDLIN( 140)							_this->copyFromArray(array,null());
HXDLIN( 140)							this2 = _this;
            						}
            						else {
HXDLIN( 140)							if (::hx::IsNotNull( view1 )) {
HXDLIN( 140)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 140)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 140)								int srcLength = view1->length;
HXDLIN( 140)								int srcByteOffset = view1->byteOffset;
HXDLIN( 140)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 140)								int elementSize = _this->bytesPerElement;
HXDLIN( 140)								if ((view1->type == _this->type)) {
HXDLIN( 140)									int srcLength = srcData->length;
HXDLIN( 140)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 140)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 140)									_this->buffer = this1;
HXDLIN( 140)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXDLIN( 140)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 140)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 140)								_this->byteOffset = 0;
HXDLIN( 140)								_this->length = srcLength;
HXDLIN( 140)								this2 = _this;
            							}
            							else {
HXDLIN( 140)								if (::hx::IsNotNull( buffer )) {
HXDLIN( 140)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 140)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 140)									if ((in_byteOffset < 0)) {
HXDLIN( 140)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 140)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXDLIN( 140)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 140)									int bufferByteLength = buffer->length;
HXDLIN( 140)									int elementSize = _this->bytesPerElement;
HXDLIN( 140)									int newByteLength = bufferByteLength;
HXDLIN( 140)									if (::hx::IsNull( len )) {
HXDLIN( 140)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 140)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXDLIN( 140)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 140)										if ((newByteLength < 0)) {
HXDLIN( 140)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXDLIN( 140)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 140)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 140)										if ((newRange > bufferByteLength)) {
HXDLIN( 140)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 140)									_this->buffer = buffer;
HXDLIN( 140)									_this->byteOffset = in_byteOffset;
HXDLIN( 140)									_this->byteLength = newByteLength;
HXDLIN( 140)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 140)									this2 = _this;
            								}
            								else {
HXDLIN( 140)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt16Array",0a,c7,2d,d5)));
            								}
            							}
            						}
            					}
            				}
HXDLIN( 140)				view = this2;
            			}
            			break;
            			case (int)7: {
HXDLIN( 140)				 ::Dynamic elements = null();
HXDLIN( 140)				 ::haxe::io::Bytes buffer = this1->buffer;
HXDLIN( 140)				::cpp::VirtualArray array = null();
HXDLIN( 140)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 140)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 140)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 140)				if (::hx::IsNull( byteoffset )) {
HXDLIN( 140)					byteoffset = 0;
            				}
HXDLIN( 140)				 ::lime::utils::ArrayBufferView this2;
HXDLIN( 140)				if (::hx::IsNotNull( elements )) {
HXDLIN( 140)					this2 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,7);
            				}
            				else {
HXDLIN( 140)					if (::hx::IsNotNull( array )) {
HXDLIN( 140)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,7);
HXDLIN( 140)						_this->byteOffset = 0;
HXDLIN( 140)						_this->length = array->get_length();
HXDLIN( 140)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 140)						 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 140)						_this->buffer = this1;
HXDLIN( 140)						_this->copyFromArray(array,null());
HXDLIN( 140)						this2 = _this;
            					}
            					else {
HXDLIN( 140)						if (::hx::IsNotNull( vector )) {
HXDLIN( 140)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,7);
HXDLIN( 140)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 140)							_this->byteOffset = 0;
HXDLIN( 140)							_this->length = array->get_length();
HXDLIN( 140)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 140)							 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 140)							_this->buffer = this1;
HXDLIN( 140)							_this->copyFromArray(array,null());
HXDLIN( 140)							this2 = _this;
            						}
            						else {
HXDLIN( 140)							if (::hx::IsNotNull( view1 )) {
HXDLIN( 140)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,7);
HXDLIN( 140)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 140)								int srcLength = view1->length;
HXDLIN( 140)								int srcByteOffset = view1->byteOffset;
HXDLIN( 140)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 140)								int elementSize = _this->bytesPerElement;
HXDLIN( 140)								if ((view1->type == _this->type)) {
HXDLIN( 140)									int srcLength = srcData->length;
HXDLIN( 140)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 140)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 140)									_this->buffer = this1;
HXDLIN( 140)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXDLIN( 140)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 140)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 140)								_this->byteOffset = 0;
HXDLIN( 140)								_this->length = srcLength;
HXDLIN( 140)								this2 = _this;
            							}
            							else {
HXDLIN( 140)								if (::hx::IsNotNull( buffer )) {
HXDLIN( 140)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,7);
HXDLIN( 140)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 140)									if ((in_byteOffset < 0)) {
HXDLIN( 140)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 140)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXDLIN( 140)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 140)									int bufferByteLength = buffer->length;
HXDLIN( 140)									int elementSize = _this->bytesPerElement;
HXDLIN( 140)									int newByteLength = bufferByteLength;
HXDLIN( 140)									if (::hx::IsNull( len )) {
HXDLIN( 140)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 140)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXDLIN( 140)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 140)										if ((newByteLength < 0)) {
HXDLIN( 140)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXDLIN( 140)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 140)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 140)										if ((newRange > bufferByteLength)) {
HXDLIN( 140)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 140)									_this->buffer = buffer;
HXDLIN( 140)									_this->byteOffset = in_byteOffset;
HXDLIN( 140)									_this->byteLength = newByteLength;
HXDLIN( 140)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 140)									this2 = _this;
            								}
            								else {
HXDLIN( 140)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt32Array",10,43,eb,8e)));
            								}
            							}
            						}
            					}
            				}
HXDLIN( 140)				view = this2;
            			}
            			break;
            			case (int)8: {
HXDLIN( 140)				 ::Dynamic elements = null();
HXDLIN( 140)				 ::haxe::io::Bytes buffer = this1->buffer;
HXDLIN( 140)				::cpp::VirtualArray array = null();
HXDLIN( 140)				 ::openfl::_Vector::FloatVector vector = null();
HXDLIN( 140)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 140)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 140)				if (::hx::IsNull( byteoffset )) {
HXDLIN( 140)					byteoffset = 0;
            				}
HXDLIN( 140)				 ::lime::utils::ArrayBufferView this2;
HXDLIN( 140)				if (::hx::IsNotNull( elements )) {
HXDLIN( 140)					this2 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,8);
            				}
            				else {
HXDLIN( 140)					if (::hx::IsNotNull( array )) {
HXDLIN( 140)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 140)						_this->byteOffset = 0;
HXDLIN( 140)						_this->length = array->get_length();
HXDLIN( 140)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 140)						 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 140)						_this->buffer = this1;
HXDLIN( 140)						_this->copyFromArray(array,null());
HXDLIN( 140)						this2 = _this;
            					}
            					else {
HXDLIN( 140)						if (::hx::IsNotNull( vector )) {
HXDLIN( 140)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 140)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 140)							_this->byteOffset = 0;
HXDLIN( 140)							_this->length = array->get_length();
HXDLIN( 140)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 140)							 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 140)							_this->buffer = this1;
HXDLIN( 140)							_this->copyFromArray(array,null());
HXDLIN( 140)							this2 = _this;
            						}
            						else {
HXDLIN( 140)							if (::hx::IsNotNull( view1 )) {
HXDLIN( 140)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 140)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 140)								int srcLength = view1->length;
HXDLIN( 140)								int srcByteOffset = view1->byteOffset;
HXDLIN( 140)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 140)								int elementSize = _this->bytesPerElement;
HXDLIN( 140)								if ((view1->type == _this->type)) {
HXDLIN( 140)									int srcLength = srcData->length;
HXDLIN( 140)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 140)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 140)									_this->buffer = this1;
HXDLIN( 140)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXDLIN( 140)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 140)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 140)								_this->byteOffset = 0;
HXDLIN( 140)								_this->length = srcLength;
HXDLIN( 140)								this2 = _this;
            							}
            							else {
HXDLIN( 140)								if (::hx::IsNotNull( buffer )) {
HXDLIN( 140)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 140)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 140)									if ((in_byteOffset < 0)) {
HXDLIN( 140)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 140)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXDLIN( 140)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 140)									int bufferByteLength = buffer->length;
HXDLIN( 140)									int elementSize = _this->bytesPerElement;
HXDLIN( 140)									int newByteLength = bufferByteLength;
HXDLIN( 140)									if (::hx::IsNull( len )) {
HXDLIN( 140)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 140)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXDLIN( 140)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 140)										if ((newByteLength < 0)) {
HXDLIN( 140)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXDLIN( 140)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 140)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 140)										if ((newRange > bufferByteLength)) {
HXDLIN( 140)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 140)									_this->buffer = buffer;
HXDLIN( 140)									_this->byteOffset = in_byteOffset;
HXDLIN( 140)									_this->byteLength = newByteLength;
HXDLIN( 140)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 140)									this2 = _this;
            								}
            								else {
HXDLIN( 140)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Float32Array",8e,c1,f4,d4)));
            								}
            							}
            						}
            					}
            				}
HXDLIN( 140)				view = this2;
            			}
            			break;
            			case (int)9: {
HXDLIN( 140)				 ::Dynamic elements = null();
HXDLIN( 140)				 ::haxe::io::Bytes buffer = this1->buffer;
HXDLIN( 140)				::cpp::VirtualArray array = null();
HXDLIN( 140)				 ::openfl::_Vector::FloatVector vector = null();
HXDLIN( 140)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 140)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 140)				if (::hx::IsNull( byteoffset )) {
HXDLIN( 140)					byteoffset = 0;
            				}
HXDLIN( 140)				 ::lime::utils::ArrayBufferView this2;
HXDLIN( 140)				if (::hx::IsNotNull( elements )) {
HXDLIN( 140)					this2 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,9);
            				}
            				else {
HXDLIN( 140)					if (::hx::IsNotNull( array )) {
HXDLIN( 140)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,9);
HXDLIN( 140)						_this->byteOffset = 0;
HXDLIN( 140)						_this->length = array->get_length();
HXDLIN( 140)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 140)						 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 140)						_this->buffer = this1;
HXDLIN( 140)						_this->copyFromArray(array,null());
HXDLIN( 140)						this2 = _this;
            					}
            					else {
HXDLIN( 140)						if (::hx::IsNotNull( vector )) {
HXDLIN( 140)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,9);
HXDLIN( 140)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 140)							_this->byteOffset = 0;
HXDLIN( 140)							_this->length = array->get_length();
HXDLIN( 140)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 140)							 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 140)							_this->buffer = this1;
HXDLIN( 140)							_this->copyFromArray(array,null());
HXDLIN( 140)							this2 = _this;
            						}
            						else {
HXDLIN( 140)							if (::hx::IsNotNull( view1 )) {
HXDLIN( 140)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,9);
HXDLIN( 140)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 140)								int srcLength = view1->length;
HXDLIN( 140)								int srcByteOffset = view1->byteOffset;
HXDLIN( 140)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 140)								int elementSize = _this->bytesPerElement;
HXDLIN( 140)								if ((view1->type == _this->type)) {
HXDLIN( 140)									int srcLength = srcData->length;
HXDLIN( 140)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 140)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 140)									_this->buffer = this1;
HXDLIN( 140)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXDLIN( 140)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 140)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 140)								_this->byteOffset = 0;
HXDLIN( 140)								_this->length = srcLength;
HXDLIN( 140)								this2 = _this;
            							}
            							else {
HXDLIN( 140)								if (::hx::IsNotNull( buffer )) {
HXDLIN( 140)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,9);
HXDLIN( 140)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 140)									if ((in_byteOffset < 0)) {
HXDLIN( 140)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 140)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXDLIN( 140)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 140)									int bufferByteLength = buffer->length;
HXDLIN( 140)									int elementSize = _this->bytesPerElement;
HXDLIN( 140)									int newByteLength = bufferByteLength;
HXDLIN( 140)									if (::hx::IsNull( len )) {
HXDLIN( 140)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 140)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXDLIN( 140)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 140)										if ((newByteLength < 0)) {
HXDLIN( 140)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXDLIN( 140)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 140)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 140)										if ((newRange > bufferByteLength)) {
HXDLIN( 140)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 140)									_this->buffer = buffer;
HXDLIN( 140)									_this->byteOffset = in_byteOffset;
HXDLIN( 140)									_this->byteLength = newByteLength;
HXDLIN( 140)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 140)									this2 = _this;
            								}
            								else {
HXDLIN( 140)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Float64Array",8f,de,6b,1e)));
            								}
            							}
            						}
            					}
            				}
HXDLIN( 140)				view = this2;
            			}
            			break;
            		}
HXDLIN( 140)		return view;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(UInt8ClampedArray_Impl__obj,subarray,return )

 ::lime::utils::ArrayBufferView UInt8ClampedArray_Impl__obj::fromBytes( ::haxe::io::Bytes bytes, ::Dynamic __o_byteOffset, ::Dynamic len){
            		 ::Dynamic byteOffset = __o_byteOffset;
            		if (::hx::IsNull(__o_byteOffset)) byteOffset = 0;
            	HX_GC_STACKFRAME(&_hx_pos_aab5f43989e18920_145_fromBytes)
HXDLIN( 145)		 ::Dynamic elements = null();
HXDLIN( 145)		::cpp::VirtualArray array = null();
HXDLIN( 145)		 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 145)		 ::lime::utils::ArrayBufferView view = null();
HXDLIN( 145)		 ::Dynamic byteoffset = byteOffset;
HXDLIN( 145)		if (::hx::IsNull( byteoffset )) {
HXDLIN( 145)			byteoffset = 0;
            		}
HXDLIN( 145)		 ::lime::utils::ArrayBufferView this1;
HXDLIN( 145)		if (::hx::IsNotNull( elements )) {
HXDLIN( 145)			this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,5);
            		}
            		else {
HXDLIN( 145)			if (::hx::IsNotNull( array )) {
HXDLIN( 145)				 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,5);
HXDLIN( 145)				_this->byteOffset = 0;
HXDLIN( 145)				_this->length = array->get_length();
HXDLIN( 145)				_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 145)				 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 145)				_this->buffer = this2;
HXDLIN( 145)				_this->copyFromArray(array,null());
HXDLIN( 145)				this1 = _this;
            			}
            			else {
HXDLIN( 145)				if (::hx::IsNotNull( vector )) {
HXDLIN( 145)					 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,5);
HXDLIN( 145)					::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 145)					_this->byteOffset = 0;
HXDLIN( 145)					_this->length = array->get_length();
HXDLIN( 145)					_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 145)					 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 145)					_this->buffer = this2;
HXDLIN( 145)					_this->copyFromArray(array,null());
HXDLIN( 145)					this1 = _this;
            				}
            				else {
HXDLIN( 145)					if (::hx::IsNotNull( view )) {
HXDLIN( 145)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,5);
HXDLIN( 145)						 ::haxe::io::Bytes srcData = view->buffer;
HXDLIN( 145)						int srcLength = view->length;
HXDLIN( 145)						int srcByteOffset = view->byteOffset;
HXDLIN( 145)						int srcElementSize = view->bytesPerElement;
HXDLIN( 145)						int elementSize = _this->bytesPerElement;
HXDLIN( 145)						if ((view->type == _this->type)) {
HXDLIN( 145)							int srcLength = srcData->length;
HXDLIN( 145)							int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 145)							 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 145)							_this->buffer = this1;
HXDLIN( 145)							_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            						}
            						else {
HXDLIN( 145)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            						}
HXDLIN( 145)						_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 145)						_this->byteOffset = 0;
HXDLIN( 145)						_this->length = srcLength;
HXDLIN( 145)						this1 = _this;
            					}
            					else {
HXDLIN( 145)						if (::hx::IsNotNull( bytes )) {
HXDLIN( 145)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,5);
HXDLIN( 145)							int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 145)							if ((in_byteOffset < 0)) {
HXDLIN( 145)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            							}
HXDLIN( 145)							if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXDLIN( 145)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            							}
HXDLIN( 145)							int bufferByteLength = bytes->length;
HXDLIN( 145)							int elementSize = _this->bytesPerElement;
HXDLIN( 145)							int newByteLength = bufferByteLength;
HXDLIN( 145)							if (::hx::IsNull( len )) {
HXDLIN( 145)								newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 145)								if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXDLIN( 145)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
HXDLIN( 145)								if ((newByteLength < 0)) {
HXDLIN( 145)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
            							}
            							else {
HXDLIN( 145)								newByteLength = (( (int)(len) ) * _this->bytesPerElement);
HXDLIN( 145)								int newRange = (in_byteOffset + newByteLength);
HXDLIN( 145)								if ((newRange > bufferByteLength)) {
HXDLIN( 145)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
            							}
HXDLIN( 145)							_this->buffer = bytes;
HXDLIN( 145)							_this->byteOffset = in_byteOffset;
HXDLIN( 145)							_this->byteLength = newByteLength;
HXDLIN( 145)							_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 145)							this1 = _this;
            						}
            						else {
HXDLIN( 145)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt8ClampedArray",8d,06,77,13)));
            						}
            					}
            				}
            			}
            		}
HXDLIN( 145)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(UInt8ClampedArray_Impl__obj,fromBytes,return )

 ::haxe::io::Bytes UInt8ClampedArray_Impl__obj::toBytes( ::lime::utils::ArrayBufferView this1){
            	HX_STACKFRAME(&_hx_pos_aab5f43989e18920_150_toBytes)
HXDLIN( 150)		return this1->buffer;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(UInt8ClampedArray_Impl__obj,toBytes,return )

int UInt8ClampedArray_Impl__obj::get_length( ::lime::utils::ArrayBufferView this1){
            	HX_STACKFRAME(&_hx_pos_aab5f43989e18920_155_get_length)
HXDLIN( 155)		return this1->length;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(UInt8ClampedArray_Impl__obj,get_length,return )

::String UInt8ClampedArray_Impl__obj::toString( ::lime::utils::ArrayBufferView this1){
            	HX_STACKFRAME(&_hx_pos_aab5f43989e18920_173_toString)
HXDLIN( 173)		if (::hx::IsNotNull( this1 )) {
HXDLIN( 173)			return ((((HX_("UInt8ClampedArray [byteLength:",54,78,53,98) + this1->byteLength) + HX_(", length:",a0,04,67,ef)) + this1->length) + HX_("]",5d,00,00,00));
            		}
            		else {
HXDLIN( 173)			return null();
            		}
HXDLIN( 173)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(UInt8ClampedArray_Impl__obj,toString,return )


UInt8ClampedArray_Impl__obj::UInt8ClampedArray_Impl__obj()
{
}

bool UInt8ClampedArray_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
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
static ::hx::StorageInfo *UInt8ClampedArray_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo UInt8ClampedArray_Impl__obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &UInt8ClampedArray_Impl__obj::BYTES_PER_ELEMENT,HX_("BYTES_PER_ELEMENT",a6,04,1d,cc)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void UInt8ClampedArray_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UInt8ClampedArray_Impl__obj::BYTES_PER_ELEMENT,"BYTES_PER_ELEMENT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void UInt8ClampedArray_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UInt8ClampedArray_Impl__obj::BYTES_PER_ELEMENT,"BYTES_PER_ELEMENT");
};

#endif

::hx::Class UInt8ClampedArray_Impl__obj::__mClass;

static ::String UInt8ClampedArray_Impl__obj_sStaticFields[] = {
	HX_("BYTES_PER_ELEMENT",a6,04,1d,cc),
	HX_("_new",61,15,1f,3f),
	HX_("subarray",19,54,81,07),
	HX_("fromBytes",a1,f2,20,72),
	HX_("toBytes",f0,54,1c,8a),
	HX_("get_length",af,04,8f,8f),
	HX_("toString",ac,d0,6e,38),
	::String(null())
};

void UInt8ClampedArray_Impl__obj::__register()
{
	UInt8ClampedArray_Impl__obj _hx_dummy;
	UInt8ClampedArray_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.utils._UInt8ClampedArray.UInt8ClampedArray_Impl_",83,70,f4,22);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &UInt8ClampedArray_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = UInt8ClampedArray_Impl__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(UInt8ClampedArray_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< UInt8ClampedArray_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = UInt8ClampedArray_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = UInt8ClampedArray_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = UInt8ClampedArray_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void UInt8ClampedArray_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_aab5f43989e18920_102_boot)
HXDLIN( 102)		BYTES_PER_ELEMENT = 1;
            	}
}

} // end namespace lime
} // end namespace utils
} // end namespace _UInt8ClampedArray
