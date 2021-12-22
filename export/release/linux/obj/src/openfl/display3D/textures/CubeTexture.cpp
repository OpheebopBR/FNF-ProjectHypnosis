#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime__internal_backend_native_NativeOpenGLRenderContext
#include <lime/_internal/backend/native/NativeOpenGLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics__WebGL2RenderContext_WebGL2RenderContext_Impl_
#include <lime/graphics/_WebGL2RenderContext/WebGL2RenderContext_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics__WebGLRenderContext_WebGLRenderContext_Impl_
#include <lime/graphics/_WebGLRenderContext/WebGLRenderContext_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_BytePointerData
#include <lime/utils/BytePointerData.h>
#endif
#ifndef INCLUDED_lime_utils_Log
#include <lime/utils/Log.h>
#endif
#ifndef INCLUDED_lime_utils_TAError
#include <lime/utils/TAError.h>
#endif
#ifndef INCLUDED_lime_utils__BytePointer_BytePointer_Impl_
#include <lime/utils/_BytePointer/BytePointer_Impl_.h>
#endif
#ifndef INCLUDED_lime_utils__DataPointer_DataPointer_Impl_
#include <lime/utils/_DataPointer/DataPointer_Impl_.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IntVector
#include <openfl/_Vector/IntVector.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display__internal_SamplerState
#include <openfl/display/_internal/SamplerState.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D__internal_ATFReader
#include <openfl/display3D/_internal/ATFReader.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_CubeTexture
#include <openfl/display3D/textures/CubeTexture.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_TextureBase
#include <openfl/display3D/textures/TextureBase.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_errors_IllegalOperationError
#include <openfl/errors/IllegalOperationError.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl_utils__ByteArray_ByteArray_Impl_
#include <openfl/utils/_ByteArray/ByteArray_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ccb53fcc86b81631_39_new,"openfl.display3D.textures.CubeTexture","new",0x2100f37b,"openfl.display3D.textures.CubeTexture.new","openfl/display3D/textures/CubeTexture.hx",39,0xffe9b114)
HX_LOCAL_STACK_FRAME(_hx_pos_ccb53fcc86b81631_85_uploadCompressedTextureFromByteArray,"openfl.display3D.textures.CubeTexture","uploadCompressedTextureFromByteArray",0x47d49053,"openfl.display3D.textures.CubeTexture.uploadCompressedTextureFromByteArray","openfl/display3D/textures/CubeTexture.hx",85,0xffe9b114)
HX_LOCAL_STACK_FRAME(_hx_pos_ccb53fcc86b81631_93_uploadCompressedTextureFromByteArray,"openfl.display3D.textures.CubeTexture","uploadCompressedTextureFromByteArray",0x47d49053,"openfl.display3D.textures.CubeTexture.uploadCompressedTextureFromByteArray","openfl/display3D/textures/CubeTexture.hx",93,0xffe9b114)
HX_LOCAL_STACK_FRAME(_hx_pos_ccb53fcc86b81631_144_uploadFromBitmapData,"openfl.display3D.textures.CubeTexture","uploadFromBitmapData",0xf44b3429,"openfl.display3D.textures.CubeTexture.uploadFromBitmapData","openfl/display3D/textures/CubeTexture.hx",144,0xffe9b114)
HX_LOCAL_STACK_FRAME(_hx_pos_ccb53fcc86b81631_214_uploadFromByteArray,"openfl.display3D.textures.CubeTexture","uploadFromByteArray",0x1e356101,"openfl.display3D.textures.CubeTexture.uploadFromByteArray","openfl/display3D/textures/CubeTexture.hx",214,0xffe9b114)
HX_LOCAL_STACK_FRAME(_hx_pos_ccb53fcc86b81631_238_uploadFromTypedArray,"openfl.display3D.textures.CubeTexture","uploadFromTypedArray",0xb8da2b3f,"openfl.display3D.textures.CubeTexture.uploadFromTypedArray","openfl/display3D/textures/CubeTexture.hx",238,0xffe9b114)
HX_LOCAL_STACK_FRAME(_hx_pos_ccb53fcc86b81631_256___getGLFramebuffer,"openfl.display3D.textures.CubeTexture","__getGLFramebuffer",0x0b1986d7,"openfl.display3D.textures.CubeTexture.__getGLFramebuffer","openfl/display3D/textures/CubeTexture.hx",256,0xffe9b114)
HX_LOCAL_STACK_FRAME(_hx_pos_ccb53fcc86b81631_287___setSamplerState,"openfl.display3D.textures.CubeTexture","__setSamplerState",0x909e23e6,"openfl.display3D.textures.CubeTexture.__setSamplerState","openfl/display3D/textures/CubeTexture.hx",287,0xffe9b114)
HX_LOCAL_STACK_FRAME(_hx_pos_ccb53fcc86b81631_324___sideToTarget,"openfl.display3D.textures.CubeTexture","__sideToTarget",0x72cba3c8,"openfl.display3D.textures.CubeTexture.__sideToTarget","openfl/display3D/textures/CubeTexture.hx",324,0xffe9b114)
HX_LOCAL_STACK_FRAME(_hx_pos_ccb53fcc86b81631_352___uploadCompressedTextureFromByteArray,"openfl.display3D.textures.CubeTexture","__uploadCompressedTextureFromByteArray",0x02145eb3,"openfl.display3D.textures.CubeTexture.__uploadCompressedTextureFromByteArray","openfl/display3D/textures/CubeTexture.hx",352,0xffe9b114)
HX_LOCAL_STACK_FRAME(_hx_pos_ccb53fcc86b81631_340___uploadCompressedTextureFromByteArray,"openfl.display3D.textures.CubeTexture","__uploadCompressedTextureFromByteArray",0x02145eb3,"openfl.display3D.textures.CubeTexture.__uploadCompressedTextureFromByteArray","openfl/display3D/textures/CubeTexture.hx",340,0xffe9b114)
static const bool _hx_array_data_3a151a09_12[] = {
	0,
};
namespace openfl{
namespace display3D{
namespace textures{

void CubeTexture_obj::__construct( ::openfl::display3D::Context3D context,int size, ::Dynamic format,bool optimizeForRenderToTexture,int streamingLevels){
            	HX_STACKFRAME(&_hx_pos_ccb53fcc86b81631_39_new)
HXLINE(  40)		super::__construct(context);
HXLINE(  42)		this->_hx___size = size;
HXLINE(  43)		this->_hx___width = (this->_hx___height = this->_hx___size);
HXLINE(  45)		this->_hx___optimizeForRenderToTexture = optimizeForRenderToTexture;
HXLINE(  46)		this->_hx___streamingLevels = streamingLevels;
HXLINE(  48)		this->_hx___textureTarget = this->_hx___context->gl->TEXTURE_CUBE_MAP;
HXLINE(  49)		this->_hx___uploadedSides = 0;
            	}

Dynamic CubeTexture_obj::__CreateEmpty() { return new CubeTexture_obj; }

void *CubeTexture_obj::_hx_vtable = 0;

Dynamic CubeTexture_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CubeTexture_obj > _hx_result = new CubeTexture_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool CubeTexture_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1503748b) {
		if (inClassId<=(int)0x0c89e854) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
		} else {
			return inClassId==(int)0x1503748b;
		}
	} else {
		return inClassId==(int)0x3247d979;
	}
}

void CubeTexture_obj::uploadCompressedTextureFromByteArray( ::openfl::utils::ByteArrayData data,int byteArrayOffset,::hx::Null< bool >  __o_async){
            		bool async = __o_async.Default(false);
            	HX_STACKFRAME(&_hx_pos_ccb53fcc86b81631_85_uploadCompressedTextureFromByteArray)
HXDLIN(  85)		 ::openfl::display3D::textures::CubeTexture _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  86)		if (!(async)) {
HXLINE(  88)			this->_hx___uploadCompressedTextureFromByteArray(data,byteArrayOffset);
            		}
            		else {
            			HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_0, ::openfl::display3D::textures::CubeTexture,_gthis, ::openfl::utils::ByteArrayData,data,int,byteArrayOffset) HXARGC(0)
            			void _hx_run(){
            				HX_GC_STACKFRAME(&_hx_pos_ccb53fcc86b81631_93_uploadCompressedTextureFromByteArray)
HXLINE(  94)				_gthis->_hx___uploadCompressedTextureFromByteArray(data,byteArrayOffset);
HXLINE(  96)				 ::openfl::events::Event event = null();
HXLINE( 101)				event =  ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("textureReady",88,4d,5a,df),null(),null());
HXLINE( 104)				_gthis->dispatchEvent(event);
            			}
            			HX_END_LOCAL_FUNC0((void))

HXLINE(  92)			::haxe::Timer_obj::delay( ::Dynamic(new _hx_Closure_0(_gthis,data,byteArrayOffset)),1);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(CubeTexture_obj,uploadCompressedTextureFromByteArray,(void))

void CubeTexture_obj::uploadFromBitmapData( ::openfl::display::BitmapData source,int side,::hx::Null< int >  __o_miplevel,::hx::Null< bool >  __o_generateMipmap){
            		int miplevel = __o_miplevel.Default(0);
            		bool generateMipmap = __o_generateMipmap.Default(false);
            	HX_STACKFRAME(&_hx_pos_ccb53fcc86b81631_144_uploadFromBitmapData)
HXLINE( 146)		if (::hx::IsNull( source )) {
HXLINE( 146)			return;
            		}
HXLINE( 147)		int size = (this->_hx___size >> miplevel);
HXLINE( 148)		if ((size == 0)) {
HXLINE( 148)			return;
            		}
HXLINE( 150)		 ::lime::graphics::Image image = this->_hx___getImage(source);
HXLINE( 151)		if (::hx::IsNull( image )) {
HXLINE( 151)			return;
            		}
HXLINE( 173)		this->uploadFromTypedArray(image->get_data(),side,miplevel);
            	}


HX_DEFINE_DYNAMIC_FUNC4(CubeTexture_obj,uploadFromBitmapData,(void))

void CubeTexture_obj::uploadFromByteArray( ::openfl::utils::ByteArrayData data,int byteArrayOffset,int side,::hx::Null< int >  __o_miplevel){
            		int miplevel = __o_miplevel.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_ccb53fcc86b81631_214_uploadFromByteArray)
HXDLIN( 214)		 ::Dynamic elements = null();
HXDLIN( 214)		 ::haxe::io::Bytes buffer = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::toArrayBuffer(data);
HXDLIN( 214)		::cpp::VirtualArray array = null();
HXDLIN( 214)		 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 214)		 ::lime::utils::ArrayBufferView view = null();
HXDLIN( 214)		 ::Dynamic byteoffset = byteArrayOffset;
HXDLIN( 214)		 ::Dynamic len = null();
HXDLIN( 214)		if (::hx::IsNull( byteoffset )) {
HXDLIN( 214)			byteoffset = 0;
            		}
HXDLIN( 214)		 ::lime::utils::ArrayBufferView this1;
HXDLIN( 214)		if (::hx::IsNotNull( elements )) {
HXDLIN( 214)			this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,4);
            		}
            		else {
HXDLIN( 214)			if (::hx::IsNotNull( array )) {
HXDLIN( 214)				 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 214)				_this->byteOffset = 0;
HXDLIN( 214)				_this->length = array->get_length();
HXDLIN( 214)				_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 214)				 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 214)				_this->buffer = this2;
HXDLIN( 214)				_this->copyFromArray(array,null());
HXDLIN( 214)				this1 = _this;
            			}
            			else {
HXDLIN( 214)				if (::hx::IsNotNull( vector )) {
HXDLIN( 214)					 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 214)					::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 214)					_this->byteOffset = 0;
HXDLIN( 214)					_this->length = array->get_length();
HXDLIN( 214)					_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 214)					 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 214)					_this->buffer = this2;
HXDLIN( 214)					_this->copyFromArray(array,null());
HXDLIN( 214)					this1 = _this;
            				}
            				else {
HXDLIN( 214)					if (::hx::IsNotNull( view )) {
HXDLIN( 214)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 214)						 ::haxe::io::Bytes srcData = view->buffer;
HXDLIN( 214)						int srcLength = view->length;
HXDLIN( 214)						int srcByteOffset = view->byteOffset;
HXDLIN( 214)						int srcElementSize = view->bytesPerElement;
HXDLIN( 214)						int elementSize = _this->bytesPerElement;
HXDLIN( 214)						if ((view->type == _this->type)) {
HXDLIN( 214)							int srcLength = srcData->length;
HXDLIN( 214)							int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 214)							 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 214)							_this->buffer = this1;
HXDLIN( 214)							_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            						}
            						else {
HXDLIN( 214)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            						}
HXDLIN( 214)						_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 214)						_this->byteOffset = 0;
HXDLIN( 214)						_this->length = srcLength;
HXDLIN( 214)						this1 = _this;
            					}
            					else {
HXDLIN( 214)						if (::hx::IsNotNull( buffer )) {
HXDLIN( 214)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 214)							int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 214)							if ((in_byteOffset < 0)) {
HXDLIN( 214)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            							}
HXDLIN( 214)							if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXDLIN( 214)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            							}
HXDLIN( 214)							int bufferByteLength = buffer->length;
HXDLIN( 214)							int elementSize = _this->bytesPerElement;
HXDLIN( 214)							int newByteLength = bufferByteLength;
HXDLIN( 214)							if (::hx::IsNull( len )) {
HXDLIN( 214)								newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 214)								if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXDLIN( 214)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
HXDLIN( 214)								if ((newByteLength < 0)) {
HXDLIN( 214)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
            							}
            							else {
HXDLIN( 214)								newByteLength = (( (int)(len) ) * _this->bytesPerElement);
HXDLIN( 214)								int newRange = (in_byteOffset + newByteLength);
HXDLIN( 214)								if ((newRange > bufferByteLength)) {
HXDLIN( 214)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
            							}
HXDLIN( 214)							_this->buffer = buffer;
HXDLIN( 214)							_this->byteOffset = in_byteOffset;
HXDLIN( 214)							_this->byteLength = newByteLength;
HXDLIN( 214)							_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 214)							this1 = _this;
            						}
            						else {
HXDLIN( 214)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt8Array",6b,44,d5,85)));
            						}
            					}
            				}
            			}
            		}
HXDLIN( 214)		this->uploadFromTypedArray(this1,side,miplevel);
            	}


HX_DEFINE_DYNAMIC_FUNC4(CubeTexture_obj,uploadFromByteArray,(void))

void CubeTexture_obj::uploadFromTypedArray( ::lime::utils::ArrayBufferView data,int side,::hx::Null< int >  __o_miplevel){
            		int miplevel = __o_miplevel.Default(0);
            	HX_STACKFRAME(&_hx_pos_ccb53fcc86b81631_238_uploadFromTypedArray)
HXLINE( 239)		if (::hx::IsNull( data )) {
HXLINE( 239)			return;
            		}
HXLINE( 241)		 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl = this->_hx___context->gl;
HXLINE( 243)		int size = (this->_hx___size >> miplevel);
HXLINE( 244)		if ((size == 0)) {
HXLINE( 244)			return;
            		}
HXLINE( 246)		int target = this->_hx___sideToTarget(side);
HXLINE( 248)		this->_hx___context->_hx___bindGLTextureCubeMap(this->_hx___textureID);
HXLINE( 249)		{
HXLINE( 249)			int internalformat = this->_hx___internalFormat;
HXDLIN( 249)			int format = this->_hx___format;
HXDLIN( 249)			int type = gl->UNSIGNED_BYTE;
HXDLIN( 249)			{
HXLINE( 249)				::lime::utils::_BytePointer::BytePointer_Impl__obj::set(::lime::graphics::_WebGL2RenderContext::WebGL2RenderContext_Impl__obj::_hx___tempPointer,null(),data,null(),0);
HXDLIN( 249)				gl->texImage2D(target,miplevel,internalformat,size,size,0,format,type,::lime::utils::_DataPointer::DataPointer_Impl__obj::fromBytesPointer(::lime::graphics::_WebGL2RenderContext::WebGL2RenderContext_Impl__obj::_hx___tempPointer));
            			}
            		}
HXLINE( 250)		this->_hx___context->_hx___bindGLTextureCubeMap(null());
HXLINE( 252)		 ::openfl::display3D::textures::CubeTexture _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 252)		_hx_tmp->_hx___uploadedSides = (_hx_tmp->_hx___uploadedSides | (1 << side));
            	}


HX_DEFINE_DYNAMIC_FUNC3(CubeTexture_obj,uploadFromTypedArray,(void))

 ::lime::graphics::opengl::GLObject CubeTexture_obj::_hx___getGLFramebuffer(bool enableDepthAndStencil,int antiAlias,int surfaceSelector){
            	HX_STACKFRAME(&_hx_pos_ccb53fcc86b81631_256___getGLFramebuffer)
HXLINE( 257)		 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl = this->_hx___context->gl;
HXLINE( 259)		if (::hx::IsNull( this->_hx___glFramebuffer )) {
HXLINE( 261)			this->_hx___glFramebuffer = gl->createFramebuffer();
HXLINE( 262)			this->_hx___framebufferSurface = -1;
            		}
HXLINE( 265)		if ((this->_hx___framebufferSurface != surfaceSelector)) {
HXLINE( 267)			this->_hx___framebufferSurface = surfaceSelector;
HXLINE( 269)			this->_hx___context->_hx___bindGLFramebuffer(this->_hx___glFramebuffer);
HXLINE( 270)			gl->framebufferTexture2D(gl->FRAMEBUFFER,gl->COLOR_ATTACHMENT0,(gl->TEXTURE_CUBE_MAP_POSITIVE_X + surfaceSelector),this->_hx___textureID,0);
HXLINE( 272)			if (this->_hx___context->_hx___enableErrorChecking) {
HXLINE( 274)				int code = gl->checkFramebufferStatus(gl->FRAMEBUFFER);
HXLINE( 276)				if ((code != gl->FRAMEBUFFER_COMPLETE)) {
HXLINE( 278)					::lime::utils::Log_obj::error((((((HX_("Error: Context3D.setRenderToTexture status:",4c,0a,86,52) + code) + HX_(" width:",94,67,ab,7e)) + this->_hx___width) + HX_(" height:",53,26,89,26)) + this->_hx___height),::hx::SourceInfo(HX_("openfl/display3D/textures/CubeTexture.hx",14,b1,e9,ff),278,HX_("openfl.display3D.textures.CubeTexture",09,1a,15,3a),HX_("__getGLFramebuffer",92,f3,72,c9)));
            				}
            			}
            		}
HXLINE( 283)		return this->super::_hx___getGLFramebuffer(enableDepthAndStencil,antiAlias,surfaceSelector);
            	}


bool CubeTexture_obj::_hx___setSamplerState( ::openfl::display::_internal::SamplerState state){
            	HX_STACKFRAME(&_hx_pos_ccb53fcc86b81631_287___setSamplerState)
HXLINE( 288)		if (this->super::_hx___setSamplerState(state)) {
HXLINE( 290)			 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl = this->_hx___context->gl;
HXLINE( 292)			bool _hx_tmp;
HXDLIN( 292)			if (::hx::IsNotEq( state->mipfilter,2 )) {
HXLINE( 292)				_hx_tmp = !(this->_hx___samplerState->mipmapGenerated);
            			}
            			else {
HXLINE( 292)				_hx_tmp = false;
            			}
HXDLIN( 292)			if (_hx_tmp) {
HXLINE( 294)				gl->generateMipmap(gl->TEXTURE_CUBE_MAP);
HXLINE( 295)				this->_hx___samplerState->mipmapGenerated = true;
            			}
HXLINE( 298)			if ((::openfl::display3D::Context3D_obj::_hx___glMaxTextureMaxAnisotropy != 0)) {
HXLINE( 300)				int aniso;
HXDLIN( 300)				 ::Dynamic _hx_switch_0 = state->filter;
            				if (  (_hx_switch_0==0) ){
HXLINE( 300)					aniso = 16;
HXDLIN( 300)					goto _hx_goto_7;
            				}
            				if (  (_hx_switch_0==1) ){
HXLINE( 300)					aniso = 2;
HXDLIN( 300)					goto _hx_goto_7;
            				}
            				if (  (_hx_switch_0==2) ){
HXLINE( 300)					aniso = 4;
HXDLIN( 300)					goto _hx_goto_7;
            				}
            				if (  (_hx_switch_0==3) ){
HXLINE( 300)					aniso = 8;
HXDLIN( 300)					goto _hx_goto_7;
            				}
            				/* default */{
HXLINE( 300)					aniso = 1;
            				}
            				_hx_goto_7:;
HXLINE( 309)				if ((aniso > ::openfl::display3D::Context3D_obj::_hx___glMaxTextureMaxAnisotropy)) {
HXLINE( 311)					aniso = ::openfl::display3D::Context3D_obj::_hx___glMaxTextureMaxAnisotropy;
            				}
HXLINE( 314)				gl->texParameterf(gl->TEXTURE_CUBE_MAP,::openfl::display3D::Context3D_obj::_hx___glTextureMaxAnisotropy,( (Float)(aniso) ));
            			}
HXLINE( 317)			return true;
            		}
HXLINE( 320)		return false;
            	}


int CubeTexture_obj::_hx___sideToTarget(int side){
            	HX_GC_STACKFRAME(&_hx_pos_ccb53fcc86b81631_324___sideToTarget)
HXLINE( 325)		 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl = this->_hx___context->gl;
HXLINE( 327)		switch((int)(side)){
            			case (int)0: {
HXLINE( 329)				return gl->TEXTURE_CUBE_MAP_POSITIVE_X;
            			}
            			break;
            			case (int)1: {
HXLINE( 330)				return gl->TEXTURE_CUBE_MAP_NEGATIVE_X;
            			}
            			break;
            			case (int)2: {
HXLINE( 331)				return gl->TEXTURE_CUBE_MAP_POSITIVE_Y;
            			}
            			break;
            			case (int)3: {
HXLINE( 332)				return gl->TEXTURE_CUBE_MAP_NEGATIVE_Y;
            			}
            			break;
            			case (int)4: {
HXLINE( 333)				return gl->TEXTURE_CUBE_MAP_POSITIVE_Z;
            			}
            			break;
            			case (int)5: {
HXLINE( 334)				return gl->TEXTURE_CUBE_MAP_NEGATIVE_Z;
            			}
            			break;
            			default:{
HXLINE( 335)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::openfl::errors::IllegalOperationError_obj::__alloc( HX_CTX ,null())));
            			}
            		}
HXLINE( 327)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC1(CubeTexture_obj,_hx___sideToTarget,return )

void CubeTexture_obj::_hx___uploadCompressedTextureFromByteArray( ::openfl::utils::ByteArrayData data,int byteArrayOffset){
            		HX_BEGIN_LOCAL_FUNC_S4(::hx::LocalFunc,_hx_Closure_0, ::openfl::display3D::textures::CubeTexture,_gthis,::Array< bool >,hasTexture,bool,alpha, ::lime::_internal::backend::native::NativeOpenGLRenderContext,gl) HXARGC(7)
            		void _hx_run(int side,int level,int gpuFormat,int width,int height,int blockLength, ::haxe::io::Bytes bytes){
            			HX_GC_STACKFRAME(&_hx_pos_ccb53fcc86b81631_352___uploadCompressedTextureFromByteArray)
HXLINE( 353)			 ::Dynamic format;
HXDLIN( 353)			if (alpha) {
HXLINE( 353)				format = ::openfl::display3D::textures::TextureBase_obj::_hx___compressedFormatsAlpha->get(gpuFormat);
            			}
            			else {
HXLINE( 353)				format = ::openfl::display3D::textures::TextureBase_obj::_hx___compressedFormats->get(gpuFormat);
            			}
HXLINE( 354)			if (::hx::IsEq( format,0 )) {
HXLINE( 354)				return;
            			}
HXLINE( 356)			hasTexture[0] = true;
HXLINE( 357)			int target = _gthis->_hx___sideToTarget(side);
HXLINE( 359)			_gthis->_hx___format = ( (int)(format) );
HXLINE( 360)			_gthis->_hx___internalFormat = ( (int)(format) );
HXLINE( 362)			bool _hx_tmp;
HXDLIN( 362)			if (alpha) {
HXLINE( 362)				_hx_tmp = (gpuFormat == 2);
            			}
            			else {
HXLINE( 362)				_hx_tmp = false;
            			}
HXDLIN( 362)			if (_hx_tmp) {
HXLINE( 364)				int size = ::Std_obj::_hx_int((( (Float)(blockLength) ) / ( (Float)(2) )));
HXLINE( 366)				 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl1 = gl;
HXDLIN( 366)				int _gthis1 = _gthis->_hx___internalFormat;
HXLINE( 367)				 ::Dynamic elements = null();
HXDLIN( 367)				::cpp::VirtualArray array = null();
HXDLIN( 367)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 367)				 ::lime::utils::ArrayBufferView view = null();
HXDLIN( 367)				 ::Dynamic byteoffset = 0;
HXDLIN( 367)				if (::hx::IsNull( byteoffset )) {
HXLINE( 367)					byteoffset = 0;
            				}
HXDLIN( 367)				 ::lime::utils::ArrayBufferView this1;
HXDLIN( 367)				if (::hx::IsNotNull( elements )) {
HXLINE( 367)					this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,4);
            				}
            				else {
HXLINE( 367)					if (::hx::IsNotNull( array )) {
HXLINE( 367)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 367)						_this->byteOffset = 0;
HXDLIN( 367)						_this->length = array->get_length();
HXDLIN( 367)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 367)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 367)						_this->buffer = this2;
HXDLIN( 367)						_this->copyFromArray(array,null());
HXDLIN( 367)						this1 = _this;
            					}
            					else {
HXLINE( 367)						if (::hx::IsNotNull( vector )) {
HXLINE( 367)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 367)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 367)							_this->byteOffset = 0;
HXDLIN( 367)							_this->length = array->get_length();
HXDLIN( 367)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 367)							 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 367)							_this->buffer = this2;
HXDLIN( 367)							_this->copyFromArray(array,null());
HXDLIN( 367)							this1 = _this;
            						}
            						else {
HXLINE( 367)							if (::hx::IsNotNull( view )) {
HXLINE( 367)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 367)								 ::haxe::io::Bytes srcData = view->buffer;
HXDLIN( 367)								int srcLength = view->length;
HXDLIN( 367)								int srcByteOffset = view->byteOffset;
HXDLIN( 367)								int srcElementSize = view->bytesPerElement;
HXDLIN( 367)								int elementSize = _this->bytesPerElement;
HXDLIN( 367)								if ((view->type == _this->type)) {
HXLINE( 367)									int srcLength = srcData->length;
HXDLIN( 367)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 367)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 367)									_this->buffer = this1;
HXDLIN( 367)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 367)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 367)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 367)								_this->byteOffset = 0;
HXDLIN( 367)								_this->length = srcLength;
HXDLIN( 367)								this1 = _this;
            							}
            							else {
HXLINE( 367)								if (::hx::IsNotNull( bytes )) {
HXLINE( 367)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 367)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 367)									if ((in_byteOffset < 0)) {
HXLINE( 367)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 367)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 367)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 367)									int bufferByteLength = bytes->length;
HXDLIN( 367)									int elementSize = _this->bytesPerElement;
HXDLIN( 367)									int newByteLength = bufferByteLength;
HXDLIN( 367)									if (::hx::IsNull( size )) {
HXLINE( 367)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 367)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 367)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 367)										if ((newByteLength < 0)) {
HXLINE( 367)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 367)										newByteLength = (size * _this->bytesPerElement);
HXDLIN( 367)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 367)										if ((newRange > bufferByteLength)) {
HXLINE( 367)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 367)									_this->buffer = bytes;
HXDLIN( 367)									_this->byteOffset = in_byteOffset;
HXDLIN( 367)									_this->byteLength = newByteLength;
HXDLIN( 367)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 367)									this1 = _this;
            								}
            								else {
HXLINE( 367)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt8Array",6b,44,d5,85)));
            								}
            							}
            						}
            					}
            				}
HXLINE( 366)				::lime::graphics::_WebGLRenderContext::WebGLRenderContext_Impl__obj::compressedTexImage2D(gl1,target,level,_gthis1,width,height,0,this1);
HXLINE( 369)				 ::openfl::display3D::textures::CubeTexture alphaTexture =  ::openfl::display3D::textures::CubeTexture_obj::__alloc( HX_CTX ,_gthis->_hx___context,_gthis->_hx___size,3,_gthis->_hx___optimizeForRenderToTexture,_gthis->_hx___streamingLevels);
HXLINE( 370)				alphaTexture->_hx___format = ( (int)(format) );
HXLINE( 371)				alphaTexture->_hx___internalFormat = ( (int)(format) );
HXLINE( 373)				_gthis->_hx___context->_hx___bindGLTextureCubeMap(alphaTexture->_hx___textureID);
HXLINE( 374)				 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl2 = gl;
HXDLIN( 374)				int alphaTexture1 = alphaTexture->_hx___internalFormat;
HXLINE( 375)				 ::Dynamic elements1 = null();
HXDLIN( 375)				::cpp::VirtualArray array1 = null();
HXDLIN( 375)				 ::openfl::_Vector::IntVector vector1 = null();
HXDLIN( 375)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 375)				 ::Dynamic byteoffset1 = size;
HXDLIN( 375)				if (::hx::IsNull( byteoffset1 )) {
HXLINE( 375)					byteoffset1 = 0;
            				}
HXDLIN( 375)				 ::lime::utils::ArrayBufferView this2;
HXDLIN( 375)				if (::hx::IsNotNull( elements1 )) {
HXLINE( 375)					this2 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements1,4);
            				}
            				else {
HXLINE( 375)					if (::hx::IsNotNull( array1 )) {
HXLINE( 375)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 375)						_this->byteOffset = 0;
HXDLIN( 375)						_this->length = array1->get_length();
HXDLIN( 375)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 375)						 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 375)						_this->buffer = this1;
HXDLIN( 375)						_this->copyFromArray(array1,null());
HXDLIN( 375)						this2 = _this;
            					}
            					else {
HXLINE( 375)						if (::hx::IsNotNull( vector1 )) {
HXLINE( 375)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 375)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector1->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 375)							_this->byteOffset = 0;
HXDLIN( 375)							_this->length = array->get_length();
HXDLIN( 375)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 375)							 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 375)							_this->buffer = this1;
HXDLIN( 375)							_this->copyFromArray(array,null());
HXDLIN( 375)							this2 = _this;
            						}
            						else {
HXLINE( 375)							if (::hx::IsNotNull( view1 )) {
HXLINE( 375)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 375)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 375)								int srcLength = view1->length;
HXDLIN( 375)								int srcByteOffset = view1->byteOffset;
HXDLIN( 375)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 375)								int elementSize = _this->bytesPerElement;
HXDLIN( 375)								if ((view1->type == _this->type)) {
HXLINE( 375)									int srcLength = srcData->length;
HXDLIN( 375)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 375)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 375)									_this->buffer = this1;
HXDLIN( 375)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 375)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 375)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 375)								_this->byteOffset = 0;
HXDLIN( 375)								_this->length = srcLength;
HXDLIN( 375)								this2 = _this;
            							}
            							else {
HXLINE( 375)								if (::hx::IsNotNull( bytes )) {
HXLINE( 375)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 375)									int in_byteOffset = ( (int)(byteoffset1) );
HXDLIN( 375)									if ((in_byteOffset < 0)) {
HXLINE( 375)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 375)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 375)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 375)									int bufferByteLength = bytes->length;
HXDLIN( 375)									int elementSize = _this->bytesPerElement;
HXDLIN( 375)									int newByteLength = bufferByteLength;
HXDLIN( 375)									if (::hx::IsNull( size )) {
HXLINE( 375)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 375)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 375)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 375)										if ((newByteLength < 0)) {
HXLINE( 375)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 375)										newByteLength = (size * _this->bytesPerElement);
HXDLIN( 375)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 375)										if ((newRange > bufferByteLength)) {
HXLINE( 375)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 375)									_this->buffer = bytes;
HXDLIN( 375)									_this->byteOffset = in_byteOffset;
HXDLIN( 375)									_this->byteLength = newByteLength;
HXDLIN( 375)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 375)									this2 = _this;
            								}
            								else {
HXLINE( 375)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt8Array",6b,44,d5,85)));
            								}
            							}
            						}
            					}
            				}
HXLINE( 374)				::lime::graphics::_WebGLRenderContext::WebGLRenderContext_Impl__obj::compressedTexImage2D(gl2,target,level,alphaTexture1,width,height,0,this2);
HXLINE( 377)				_gthis->_hx___alphaTexture = alphaTexture;
            			}
            			else {
HXLINE( 381)				 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl1 = gl;
HXDLIN( 381)				int _gthis1 = _gthis->_hx___internalFormat;
HXLINE( 382)				 ::Dynamic elements = null();
HXDLIN( 382)				::cpp::VirtualArray array = null();
HXDLIN( 382)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 382)				 ::lime::utils::ArrayBufferView view = null();
HXDLIN( 382)				 ::Dynamic byteoffset = 0;
HXDLIN( 382)				if (::hx::IsNull( byteoffset )) {
HXLINE( 382)					byteoffset = 0;
            				}
HXDLIN( 382)				 ::lime::utils::ArrayBufferView this1;
HXDLIN( 382)				if (::hx::IsNotNull( elements )) {
HXLINE( 382)					this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,4);
            				}
            				else {
HXLINE( 382)					if (::hx::IsNotNull( array )) {
HXLINE( 382)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 382)						_this->byteOffset = 0;
HXDLIN( 382)						_this->length = array->get_length();
HXDLIN( 382)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 382)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 382)						_this->buffer = this2;
HXDLIN( 382)						_this->copyFromArray(array,null());
HXDLIN( 382)						this1 = _this;
            					}
            					else {
HXLINE( 382)						if (::hx::IsNotNull( vector )) {
HXLINE( 382)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 382)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 382)							_this->byteOffset = 0;
HXDLIN( 382)							_this->length = array->get_length();
HXDLIN( 382)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 382)							 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 382)							_this->buffer = this2;
HXDLIN( 382)							_this->copyFromArray(array,null());
HXDLIN( 382)							this1 = _this;
            						}
            						else {
HXLINE( 382)							if (::hx::IsNotNull( view )) {
HXLINE( 382)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 382)								 ::haxe::io::Bytes srcData = view->buffer;
HXDLIN( 382)								int srcLength = view->length;
HXDLIN( 382)								int srcByteOffset = view->byteOffset;
HXDLIN( 382)								int srcElementSize = view->bytesPerElement;
HXDLIN( 382)								int elementSize = _this->bytesPerElement;
HXDLIN( 382)								if ((view->type == _this->type)) {
HXLINE( 382)									int srcLength = srcData->length;
HXDLIN( 382)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 382)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 382)									_this->buffer = this1;
HXDLIN( 382)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 382)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 382)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 382)								_this->byteOffset = 0;
HXDLIN( 382)								_this->length = srcLength;
HXDLIN( 382)								this1 = _this;
            							}
            							else {
HXLINE( 382)								if (::hx::IsNotNull( bytes )) {
HXLINE( 382)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 382)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 382)									if ((in_byteOffset < 0)) {
HXLINE( 382)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 382)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 382)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 382)									int bufferByteLength = bytes->length;
HXDLIN( 382)									int elementSize = _this->bytesPerElement;
HXDLIN( 382)									int newByteLength = bufferByteLength;
HXDLIN( 382)									if (::hx::IsNull( blockLength )) {
HXLINE( 382)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 382)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 382)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 382)										if ((newByteLength < 0)) {
HXLINE( 382)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 382)										newByteLength = (blockLength * _this->bytesPerElement);
HXDLIN( 382)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 382)										if ((newRange > bufferByteLength)) {
HXLINE( 382)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 382)									_this->buffer = bytes;
HXDLIN( 382)									_this->byteOffset = in_byteOffset;
HXDLIN( 382)									_this->byteLength = newByteLength;
HXDLIN( 382)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 382)									this1 = _this;
            								}
            								else {
HXLINE( 382)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt8Array",6b,44,d5,85)));
            								}
            							}
            						}
            					}
            				}
HXLINE( 381)				::lime::graphics::_WebGLRenderContext::WebGLRenderContext_Impl__obj::compressedTexImage2D(gl1,target,level,_gthis1,width,height,0,this1);
            			}
            		}
            		HX_END_LOCAL_FUNC7((void))

            	HX_GC_STACKFRAME(&_hx_pos_ccb53fcc86b81631_340___uploadCompressedTextureFromByteArray)
HXDLIN( 340)		 ::openfl::display3D::textures::CubeTexture _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 341)		 ::openfl::display3D::_internal::ATFReader reader =  ::openfl::display3D::_internal::ATFReader_obj::__alloc( HX_CTX ,data,byteArrayOffset);
HXLINE( 342)		bool alpha = reader->readHeader(this->_hx___size,this->_hx___size,true);
HXLINE( 344)		 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl = this->_hx___context->gl;
HXLINE( 346)		this->_hx___context->_hx___bindGLTextureCubeMap(this->_hx___textureID);
HXLINE( 348)		::Array< bool > hasTexture = ::Array_obj< bool >::fromData( _hx_array_data_3a151a09_12,1);
HXLINE( 351)		reader->readTextures( ::Dynamic(new _hx_Closure_0(_gthis,hasTexture,alpha,gl)));
HXLINE( 386)		if (!(hasTexture->__get(0))) {
HXLINE( 389)			{
HXLINE( 390)				 ::Dynamic elements = ((this->_hx___size * this->_hx___size) * 4);
HXDLIN( 390)				 ::haxe::io::Bytes buffer = null();
HXDLIN( 390)				::cpp::VirtualArray array = null();
HXDLIN( 390)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 390)				 ::lime::utils::ArrayBufferView view = null();
HXDLIN( 390)				 ::Dynamic len = null();
HXDLIN( 390)				 ::lime::utils::ArrayBufferView this1;
HXDLIN( 390)				if (::hx::IsNotNull( elements )) {
HXLINE( 390)					this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,4);
            				}
            				else {
HXLINE( 390)					if (::hx::IsNotNull( array )) {
HXLINE( 390)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 390)						_this->byteOffset = 0;
HXDLIN( 390)						_this->length = array->get_length();
HXDLIN( 390)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 390)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 390)						_this->buffer = this2;
HXDLIN( 390)						_this->copyFromArray(array,null());
HXDLIN( 390)						this1 = _this;
            					}
            					else {
HXLINE( 390)						if (::hx::IsNotNull( vector )) {
HXLINE( 390)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 390)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 390)							_this->byteOffset = 0;
HXDLIN( 390)							_this->length = array->get_length();
HXDLIN( 390)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 390)							 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 390)							_this->buffer = this2;
HXDLIN( 390)							_this->copyFromArray(array,null());
HXDLIN( 390)							this1 = _this;
            						}
            						else {
HXLINE( 390)							if (::hx::IsNotNull( view )) {
HXLINE( 390)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 390)								 ::haxe::io::Bytes srcData = view->buffer;
HXDLIN( 390)								int srcLength = view->length;
HXDLIN( 390)								int srcByteOffset = view->byteOffset;
HXDLIN( 390)								int srcElementSize = view->bytesPerElement;
HXDLIN( 390)								int elementSize = _this->bytesPerElement;
HXDLIN( 390)								if ((view->type == _this->type)) {
HXLINE( 390)									int srcLength = srcData->length;
HXDLIN( 390)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 390)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 390)									_this->buffer = this1;
HXDLIN( 390)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 390)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 390)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 390)								_this->byteOffset = 0;
HXDLIN( 390)								_this->length = srcLength;
HXDLIN( 390)								this1 = _this;
            							}
            							else {
HXLINE( 390)								if (::hx::IsNotNull( buffer )) {
HXLINE( 390)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 390)									int in_byteOffset = 0;
HXDLIN( 390)									if ((in_byteOffset < 0)) {
HXLINE( 390)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 390)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 390)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 390)									int bufferByteLength = buffer->length;
HXDLIN( 390)									int elementSize = _this->bytesPerElement;
HXDLIN( 390)									int newByteLength = bufferByteLength;
HXDLIN( 390)									if (::hx::IsNull( len )) {
HXLINE( 390)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 390)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 390)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 390)										if ((newByteLength < 0)) {
HXLINE( 390)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 390)										newByteLength = (( (int)(len) ) * _this->bytesPerElement);
HXDLIN( 390)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 390)										if ((newRange > bufferByteLength)) {
HXLINE( 390)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 390)									_this->buffer = buffer;
HXDLIN( 390)									_this->byteOffset = in_byteOffset;
HXDLIN( 390)									_this->byteLength = newByteLength;
HXDLIN( 390)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 390)									this1 = _this;
            								}
            								else {
HXLINE( 390)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt8Array",6b,44,d5,85)));
            								}
            							}
            						}
            					}
            				}
HXDLIN( 390)				 ::lime::utils::ArrayBufferView data = this1;
HXLINE( 391)				{
HXLINE( 391)					int target = this->_hx___sideToTarget(0);
HXDLIN( 391)					int internalformat = this->_hx___internalFormat;
HXDLIN( 391)					int width = this->_hx___size;
HXDLIN( 391)					int height = this->_hx___size;
HXDLIN( 391)					int format = this->_hx___format;
HXDLIN( 391)					int type = gl->UNSIGNED_BYTE;
HXDLIN( 391)					{
HXLINE( 391)						::lime::utils::_BytePointer::BytePointer_Impl__obj::set(::lime::graphics::_WebGL2RenderContext::WebGL2RenderContext_Impl__obj::_hx___tempPointer,null(),data,null(),0);
HXDLIN( 391)						 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl1 = gl;
HXDLIN( 391)						gl1->texImage2D(target,0,internalformat,width,height,0,format,type,::lime::utils::_DataPointer::DataPointer_Impl__obj::fromBytesPointer(::lime::graphics::_WebGL2RenderContext::WebGL2RenderContext_Impl__obj::_hx___tempPointer));
            					}
            				}
            			}
HXLINE( 389)			{
HXLINE( 390)				 ::Dynamic elements1 = ((this->_hx___size * this->_hx___size) * 4);
HXDLIN( 390)				 ::haxe::io::Bytes buffer1 = null();
HXDLIN( 390)				::cpp::VirtualArray array1 = null();
HXDLIN( 390)				 ::openfl::_Vector::IntVector vector1 = null();
HXDLIN( 390)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 390)				 ::Dynamic len1 = null();
HXDLIN( 390)				 ::lime::utils::ArrayBufferView this2;
HXDLIN( 390)				if (::hx::IsNotNull( elements1 )) {
HXLINE( 390)					this2 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements1,4);
            				}
            				else {
HXLINE( 390)					if (::hx::IsNotNull( array1 )) {
HXLINE( 390)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 390)						_this->byteOffset = 0;
HXDLIN( 390)						_this->length = array1->get_length();
HXDLIN( 390)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 390)						 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 390)						_this->buffer = this1;
HXDLIN( 390)						_this->copyFromArray(array1,null());
HXDLIN( 390)						this2 = _this;
            					}
            					else {
HXLINE( 390)						if (::hx::IsNotNull( vector1 )) {
HXLINE( 390)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 390)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector1->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 390)							_this->byteOffset = 0;
HXDLIN( 390)							_this->length = array->get_length();
HXDLIN( 390)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 390)							 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 390)							_this->buffer = this1;
HXDLIN( 390)							_this->copyFromArray(array,null());
HXDLIN( 390)							this2 = _this;
            						}
            						else {
HXLINE( 390)							if (::hx::IsNotNull( view1 )) {
HXLINE( 390)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 390)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 390)								int srcLength = view1->length;
HXDLIN( 390)								int srcByteOffset = view1->byteOffset;
HXDLIN( 390)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 390)								int elementSize = _this->bytesPerElement;
HXDLIN( 390)								if ((view1->type == _this->type)) {
HXLINE( 390)									int srcLength = srcData->length;
HXDLIN( 390)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 390)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 390)									_this->buffer = this1;
HXDLIN( 390)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 390)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 390)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 390)								_this->byteOffset = 0;
HXDLIN( 390)								_this->length = srcLength;
HXDLIN( 390)								this2 = _this;
            							}
            							else {
HXLINE( 390)								if (::hx::IsNotNull( buffer1 )) {
HXLINE( 390)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 390)									int in_byteOffset = 0;
HXDLIN( 390)									if ((in_byteOffset < 0)) {
HXLINE( 390)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 390)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 390)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 390)									int bufferByteLength = buffer1->length;
HXDLIN( 390)									int elementSize = _this->bytesPerElement;
HXDLIN( 390)									int newByteLength = bufferByteLength;
HXDLIN( 390)									if (::hx::IsNull( len1 )) {
HXLINE( 390)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 390)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 390)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 390)										if ((newByteLength < 0)) {
HXLINE( 390)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 390)										newByteLength = (( (int)(len1) ) * _this->bytesPerElement);
HXDLIN( 390)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 390)										if ((newRange > bufferByteLength)) {
HXLINE( 390)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 390)									_this->buffer = buffer1;
HXDLIN( 390)									_this->byteOffset = in_byteOffset;
HXDLIN( 390)									_this->byteLength = newByteLength;
HXDLIN( 390)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 390)									this2 = _this;
            								}
            								else {
HXLINE( 390)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt8Array",6b,44,d5,85)));
            								}
            							}
            						}
            					}
            				}
HXDLIN( 390)				 ::lime::utils::ArrayBufferView data1 = this2;
HXLINE( 391)				{
HXLINE( 391)					int target1 = this->_hx___sideToTarget(1);
HXDLIN( 391)					int internalformat1 = this->_hx___internalFormat;
HXDLIN( 391)					int width1 = this->_hx___size;
HXDLIN( 391)					int height1 = this->_hx___size;
HXDLIN( 391)					int format1 = this->_hx___format;
HXDLIN( 391)					int type1 = gl->UNSIGNED_BYTE;
HXDLIN( 391)					{
HXLINE( 391)						::lime::utils::_BytePointer::BytePointer_Impl__obj::set(::lime::graphics::_WebGL2RenderContext::WebGL2RenderContext_Impl__obj::_hx___tempPointer,null(),data1,null(),0);
HXDLIN( 391)						 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl2 = gl;
HXDLIN( 391)						gl2->texImage2D(target1,0,internalformat1,width1,height1,0,format1,type1,::lime::utils::_DataPointer::DataPointer_Impl__obj::fromBytesPointer(::lime::graphics::_WebGL2RenderContext::WebGL2RenderContext_Impl__obj::_hx___tempPointer));
            					}
            				}
            			}
HXLINE( 389)			{
HXLINE( 390)				 ::Dynamic elements2 = ((this->_hx___size * this->_hx___size) * 4);
HXDLIN( 390)				 ::haxe::io::Bytes buffer2 = null();
HXDLIN( 390)				::cpp::VirtualArray array2 = null();
HXDLIN( 390)				 ::openfl::_Vector::IntVector vector2 = null();
HXDLIN( 390)				 ::lime::utils::ArrayBufferView view2 = null();
HXDLIN( 390)				 ::Dynamic len2 = null();
HXDLIN( 390)				 ::lime::utils::ArrayBufferView this3;
HXDLIN( 390)				if (::hx::IsNotNull( elements2 )) {
HXLINE( 390)					this3 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements2,4);
            				}
            				else {
HXLINE( 390)					if (::hx::IsNotNull( array2 )) {
HXLINE( 390)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 390)						_this->byteOffset = 0;
HXDLIN( 390)						_this->length = array2->get_length();
HXDLIN( 390)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 390)						 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 390)						_this->buffer = this1;
HXDLIN( 390)						_this->copyFromArray(array2,null());
HXDLIN( 390)						this3 = _this;
            					}
            					else {
HXLINE( 390)						if (::hx::IsNotNull( vector2 )) {
HXLINE( 390)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 390)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector2->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 390)							_this->byteOffset = 0;
HXDLIN( 390)							_this->length = array->get_length();
HXDLIN( 390)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 390)							 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 390)							_this->buffer = this1;
HXDLIN( 390)							_this->copyFromArray(array,null());
HXDLIN( 390)							this3 = _this;
            						}
            						else {
HXLINE( 390)							if (::hx::IsNotNull( view2 )) {
HXLINE( 390)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 390)								 ::haxe::io::Bytes srcData = view2->buffer;
HXDLIN( 390)								int srcLength = view2->length;
HXDLIN( 390)								int srcByteOffset = view2->byteOffset;
HXDLIN( 390)								int srcElementSize = view2->bytesPerElement;
HXDLIN( 390)								int elementSize = _this->bytesPerElement;
HXDLIN( 390)								if ((view2->type == _this->type)) {
HXLINE( 390)									int srcLength = srcData->length;
HXDLIN( 390)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 390)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 390)									_this->buffer = this1;
HXDLIN( 390)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 390)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 390)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 390)								_this->byteOffset = 0;
HXDLIN( 390)								_this->length = srcLength;
HXDLIN( 390)								this3 = _this;
            							}
            							else {
HXLINE( 390)								if (::hx::IsNotNull( buffer2 )) {
HXLINE( 390)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 390)									int in_byteOffset = 0;
HXDLIN( 390)									if ((in_byteOffset < 0)) {
HXLINE( 390)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 390)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 390)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 390)									int bufferByteLength = buffer2->length;
HXDLIN( 390)									int elementSize = _this->bytesPerElement;
HXDLIN( 390)									int newByteLength = bufferByteLength;
HXDLIN( 390)									if (::hx::IsNull( len2 )) {
HXLINE( 390)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 390)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 390)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 390)										if ((newByteLength < 0)) {
HXLINE( 390)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 390)										newByteLength = (( (int)(len2) ) * _this->bytesPerElement);
HXDLIN( 390)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 390)										if ((newRange > bufferByteLength)) {
HXLINE( 390)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 390)									_this->buffer = buffer2;
HXDLIN( 390)									_this->byteOffset = in_byteOffset;
HXDLIN( 390)									_this->byteLength = newByteLength;
HXDLIN( 390)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 390)									this3 = _this;
            								}
            								else {
HXLINE( 390)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt8Array",6b,44,d5,85)));
            								}
            							}
            						}
            					}
            				}
HXDLIN( 390)				 ::lime::utils::ArrayBufferView data2 = this3;
HXLINE( 391)				{
HXLINE( 391)					int target2 = this->_hx___sideToTarget(2);
HXDLIN( 391)					int internalformat2 = this->_hx___internalFormat;
HXDLIN( 391)					int width2 = this->_hx___size;
HXDLIN( 391)					int height2 = this->_hx___size;
HXDLIN( 391)					int format2 = this->_hx___format;
HXDLIN( 391)					int type2 = gl->UNSIGNED_BYTE;
HXDLIN( 391)					{
HXLINE( 391)						::lime::utils::_BytePointer::BytePointer_Impl__obj::set(::lime::graphics::_WebGL2RenderContext::WebGL2RenderContext_Impl__obj::_hx___tempPointer,null(),data2,null(),0);
HXDLIN( 391)						 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl3 = gl;
HXDLIN( 391)						gl3->texImage2D(target2,0,internalformat2,width2,height2,0,format2,type2,::lime::utils::_DataPointer::DataPointer_Impl__obj::fromBytesPointer(::lime::graphics::_WebGL2RenderContext::WebGL2RenderContext_Impl__obj::_hx___tempPointer));
            					}
            				}
            			}
HXLINE( 389)			{
HXLINE( 390)				 ::Dynamic elements3 = ((this->_hx___size * this->_hx___size) * 4);
HXDLIN( 390)				 ::haxe::io::Bytes buffer3 = null();
HXDLIN( 390)				::cpp::VirtualArray array3 = null();
HXDLIN( 390)				 ::openfl::_Vector::IntVector vector3 = null();
HXDLIN( 390)				 ::lime::utils::ArrayBufferView view3 = null();
HXDLIN( 390)				 ::Dynamic len3 = null();
HXDLIN( 390)				 ::lime::utils::ArrayBufferView this4;
HXDLIN( 390)				if (::hx::IsNotNull( elements3 )) {
HXLINE( 390)					this4 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements3,4);
            				}
            				else {
HXLINE( 390)					if (::hx::IsNotNull( array3 )) {
HXLINE( 390)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 390)						_this->byteOffset = 0;
HXDLIN( 390)						_this->length = array3->get_length();
HXDLIN( 390)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 390)						 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 390)						_this->buffer = this1;
HXDLIN( 390)						_this->copyFromArray(array3,null());
HXDLIN( 390)						this4 = _this;
            					}
            					else {
HXLINE( 390)						if (::hx::IsNotNull( vector3 )) {
HXLINE( 390)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 390)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector3->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 390)							_this->byteOffset = 0;
HXDLIN( 390)							_this->length = array->get_length();
HXDLIN( 390)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 390)							 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 390)							_this->buffer = this1;
HXDLIN( 390)							_this->copyFromArray(array,null());
HXDLIN( 390)							this4 = _this;
            						}
            						else {
HXLINE( 390)							if (::hx::IsNotNull( view3 )) {
HXLINE( 390)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 390)								 ::haxe::io::Bytes srcData = view3->buffer;
HXDLIN( 390)								int srcLength = view3->length;
HXDLIN( 390)								int srcByteOffset = view3->byteOffset;
HXDLIN( 390)								int srcElementSize = view3->bytesPerElement;
HXDLIN( 390)								int elementSize = _this->bytesPerElement;
HXDLIN( 390)								if ((view3->type == _this->type)) {
HXLINE( 390)									int srcLength = srcData->length;
HXDLIN( 390)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 390)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 390)									_this->buffer = this1;
HXDLIN( 390)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 390)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 390)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 390)								_this->byteOffset = 0;
HXDLIN( 390)								_this->length = srcLength;
HXDLIN( 390)								this4 = _this;
            							}
            							else {
HXLINE( 390)								if (::hx::IsNotNull( buffer3 )) {
HXLINE( 390)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 390)									int in_byteOffset = 0;
HXDLIN( 390)									if ((in_byteOffset < 0)) {
HXLINE( 390)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 390)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 390)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 390)									int bufferByteLength = buffer3->length;
HXDLIN( 390)									int elementSize = _this->bytesPerElement;
HXDLIN( 390)									int newByteLength = bufferByteLength;
HXDLIN( 390)									if (::hx::IsNull( len3 )) {
HXLINE( 390)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 390)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 390)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 390)										if ((newByteLength < 0)) {
HXLINE( 390)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 390)										newByteLength = (( (int)(len3) ) * _this->bytesPerElement);
HXDLIN( 390)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 390)										if ((newRange > bufferByteLength)) {
HXLINE( 390)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 390)									_this->buffer = buffer3;
HXDLIN( 390)									_this->byteOffset = in_byteOffset;
HXDLIN( 390)									_this->byteLength = newByteLength;
HXDLIN( 390)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 390)									this4 = _this;
            								}
            								else {
HXLINE( 390)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt8Array",6b,44,d5,85)));
            								}
            							}
            						}
            					}
            				}
HXDLIN( 390)				 ::lime::utils::ArrayBufferView data3 = this4;
HXLINE( 391)				{
HXLINE( 391)					int target3 = this->_hx___sideToTarget(3);
HXDLIN( 391)					int internalformat3 = this->_hx___internalFormat;
HXDLIN( 391)					int width3 = this->_hx___size;
HXDLIN( 391)					int height3 = this->_hx___size;
HXDLIN( 391)					int format3 = this->_hx___format;
HXDLIN( 391)					int type3 = gl->UNSIGNED_BYTE;
HXDLIN( 391)					{
HXLINE( 391)						::lime::utils::_BytePointer::BytePointer_Impl__obj::set(::lime::graphics::_WebGL2RenderContext::WebGL2RenderContext_Impl__obj::_hx___tempPointer,null(),data3,null(),0);
HXDLIN( 391)						 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl4 = gl;
HXDLIN( 391)						gl4->texImage2D(target3,0,internalformat3,width3,height3,0,format3,type3,::lime::utils::_DataPointer::DataPointer_Impl__obj::fromBytesPointer(::lime::graphics::_WebGL2RenderContext::WebGL2RenderContext_Impl__obj::_hx___tempPointer));
            					}
            				}
            			}
HXLINE( 389)			{
HXLINE( 390)				 ::Dynamic elements4 = ((this->_hx___size * this->_hx___size) * 4);
HXDLIN( 390)				 ::haxe::io::Bytes buffer4 = null();
HXDLIN( 390)				::cpp::VirtualArray array4 = null();
HXDLIN( 390)				 ::openfl::_Vector::IntVector vector4 = null();
HXDLIN( 390)				 ::lime::utils::ArrayBufferView view4 = null();
HXDLIN( 390)				 ::Dynamic len4 = null();
HXDLIN( 390)				 ::lime::utils::ArrayBufferView this5;
HXDLIN( 390)				if (::hx::IsNotNull( elements4 )) {
HXLINE( 390)					this5 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements4,4);
            				}
            				else {
HXLINE( 390)					if (::hx::IsNotNull( array4 )) {
HXLINE( 390)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 390)						_this->byteOffset = 0;
HXDLIN( 390)						_this->length = array4->get_length();
HXDLIN( 390)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 390)						 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 390)						_this->buffer = this1;
HXDLIN( 390)						_this->copyFromArray(array4,null());
HXDLIN( 390)						this5 = _this;
            					}
            					else {
HXLINE( 390)						if (::hx::IsNotNull( vector4 )) {
HXLINE( 390)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 390)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector4->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 390)							_this->byteOffset = 0;
HXDLIN( 390)							_this->length = array->get_length();
HXDLIN( 390)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 390)							 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 390)							_this->buffer = this1;
HXDLIN( 390)							_this->copyFromArray(array,null());
HXDLIN( 390)							this5 = _this;
            						}
            						else {
HXLINE( 390)							if (::hx::IsNotNull( view4 )) {
HXLINE( 390)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 390)								 ::haxe::io::Bytes srcData = view4->buffer;
HXDLIN( 390)								int srcLength = view4->length;
HXDLIN( 390)								int srcByteOffset = view4->byteOffset;
HXDLIN( 390)								int srcElementSize = view4->bytesPerElement;
HXDLIN( 390)								int elementSize = _this->bytesPerElement;
HXDLIN( 390)								if ((view4->type == _this->type)) {
HXLINE( 390)									int srcLength = srcData->length;
HXDLIN( 390)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 390)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 390)									_this->buffer = this1;
HXDLIN( 390)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 390)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 390)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 390)								_this->byteOffset = 0;
HXDLIN( 390)								_this->length = srcLength;
HXDLIN( 390)								this5 = _this;
            							}
            							else {
HXLINE( 390)								if (::hx::IsNotNull( buffer4 )) {
HXLINE( 390)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 390)									int in_byteOffset = 0;
HXDLIN( 390)									if ((in_byteOffset < 0)) {
HXLINE( 390)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 390)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 390)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 390)									int bufferByteLength = buffer4->length;
HXDLIN( 390)									int elementSize = _this->bytesPerElement;
HXDLIN( 390)									int newByteLength = bufferByteLength;
HXDLIN( 390)									if (::hx::IsNull( len4 )) {
HXLINE( 390)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 390)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 390)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 390)										if ((newByteLength < 0)) {
HXLINE( 390)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 390)										newByteLength = (( (int)(len4) ) * _this->bytesPerElement);
HXDLIN( 390)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 390)										if ((newRange > bufferByteLength)) {
HXLINE( 390)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 390)									_this->buffer = buffer4;
HXDLIN( 390)									_this->byteOffset = in_byteOffset;
HXDLIN( 390)									_this->byteLength = newByteLength;
HXDLIN( 390)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 390)									this5 = _this;
            								}
            								else {
HXLINE( 390)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt8Array",6b,44,d5,85)));
            								}
            							}
            						}
            					}
            				}
HXDLIN( 390)				 ::lime::utils::ArrayBufferView data4 = this5;
HXLINE( 391)				{
HXLINE( 391)					int target4 = this->_hx___sideToTarget(4);
HXDLIN( 391)					int internalformat4 = this->_hx___internalFormat;
HXDLIN( 391)					int width4 = this->_hx___size;
HXDLIN( 391)					int height4 = this->_hx___size;
HXDLIN( 391)					int format4 = this->_hx___format;
HXDLIN( 391)					int type4 = gl->UNSIGNED_BYTE;
HXDLIN( 391)					{
HXLINE( 391)						::lime::utils::_BytePointer::BytePointer_Impl__obj::set(::lime::graphics::_WebGL2RenderContext::WebGL2RenderContext_Impl__obj::_hx___tempPointer,null(),data4,null(),0);
HXDLIN( 391)						 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl5 = gl;
HXDLIN( 391)						gl5->texImage2D(target4,0,internalformat4,width4,height4,0,format4,type4,::lime::utils::_DataPointer::DataPointer_Impl__obj::fromBytesPointer(::lime::graphics::_WebGL2RenderContext::WebGL2RenderContext_Impl__obj::_hx___tempPointer));
            					}
            				}
            			}
HXLINE( 389)			{
HXLINE( 390)				 ::Dynamic elements5 = ((this->_hx___size * this->_hx___size) * 4);
HXDLIN( 390)				 ::haxe::io::Bytes buffer5 = null();
HXDLIN( 390)				::cpp::VirtualArray array5 = null();
HXDLIN( 390)				 ::openfl::_Vector::IntVector vector5 = null();
HXDLIN( 390)				 ::lime::utils::ArrayBufferView view5 = null();
HXDLIN( 390)				 ::Dynamic len5 = null();
HXDLIN( 390)				 ::lime::utils::ArrayBufferView this6;
HXDLIN( 390)				if (::hx::IsNotNull( elements5 )) {
HXLINE( 390)					this6 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements5,4);
            				}
            				else {
HXLINE( 390)					if (::hx::IsNotNull( array5 )) {
HXLINE( 390)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 390)						_this->byteOffset = 0;
HXDLIN( 390)						_this->length = array5->get_length();
HXDLIN( 390)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 390)						 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 390)						_this->buffer = this1;
HXDLIN( 390)						_this->copyFromArray(array5,null());
HXDLIN( 390)						this6 = _this;
            					}
            					else {
HXLINE( 390)						if (::hx::IsNotNull( vector5 )) {
HXLINE( 390)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 390)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector5->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 390)							_this->byteOffset = 0;
HXDLIN( 390)							_this->length = array->get_length();
HXDLIN( 390)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 390)							 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 390)							_this->buffer = this1;
HXDLIN( 390)							_this->copyFromArray(array,null());
HXDLIN( 390)							this6 = _this;
            						}
            						else {
HXLINE( 390)							if (::hx::IsNotNull( view5 )) {
HXLINE( 390)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 390)								 ::haxe::io::Bytes srcData = view5->buffer;
HXDLIN( 390)								int srcLength = view5->length;
HXDLIN( 390)								int srcByteOffset = view5->byteOffset;
HXDLIN( 390)								int srcElementSize = view5->bytesPerElement;
HXDLIN( 390)								int elementSize = _this->bytesPerElement;
HXDLIN( 390)								if ((view5->type == _this->type)) {
HXLINE( 390)									int srcLength = srcData->length;
HXDLIN( 390)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 390)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 390)									_this->buffer = this1;
HXDLIN( 390)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 390)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 390)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 390)								_this->byteOffset = 0;
HXDLIN( 390)								_this->length = srcLength;
HXDLIN( 390)								this6 = _this;
            							}
            							else {
HXLINE( 390)								if (::hx::IsNotNull( buffer5 )) {
HXLINE( 390)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 390)									int in_byteOffset = 0;
HXDLIN( 390)									if ((in_byteOffset < 0)) {
HXLINE( 390)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 390)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 390)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 390)									int bufferByteLength = buffer5->length;
HXDLIN( 390)									int elementSize = _this->bytesPerElement;
HXDLIN( 390)									int newByteLength = bufferByteLength;
HXDLIN( 390)									if (::hx::IsNull( len5 )) {
HXLINE( 390)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 390)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 390)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 390)										if ((newByteLength < 0)) {
HXLINE( 390)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 390)										newByteLength = (( (int)(len5) ) * _this->bytesPerElement);
HXDLIN( 390)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 390)										if ((newRange > bufferByteLength)) {
HXLINE( 390)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 390)									_this->buffer = buffer5;
HXDLIN( 390)									_this->byteOffset = in_byteOffset;
HXDLIN( 390)									_this->byteLength = newByteLength;
HXDLIN( 390)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 390)									this6 = _this;
            								}
            								else {
HXLINE( 390)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt8Array",6b,44,d5,85)));
            								}
            							}
            						}
            					}
            				}
HXDLIN( 390)				 ::lime::utils::ArrayBufferView data5 = this6;
HXLINE( 391)				{
HXLINE( 391)					int target5 = this->_hx___sideToTarget(5);
HXDLIN( 391)					int internalformat5 = this->_hx___internalFormat;
HXDLIN( 391)					int width5 = this->_hx___size;
HXDLIN( 391)					int height5 = this->_hx___size;
HXDLIN( 391)					int format5 = this->_hx___format;
HXDLIN( 391)					int type5 = gl->UNSIGNED_BYTE;
HXDLIN( 391)					{
HXLINE( 391)						::lime::utils::_BytePointer::BytePointer_Impl__obj::set(::lime::graphics::_WebGL2RenderContext::WebGL2RenderContext_Impl__obj::_hx___tempPointer,null(),data5,null(),0);
HXDLIN( 391)						 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl6 = gl;
HXDLIN( 391)						gl6->texImage2D(target5,0,internalformat5,width5,height5,0,format5,type5,::lime::utils::_DataPointer::DataPointer_Impl__obj::fromBytesPointer(::lime::graphics::_WebGL2RenderContext::WebGL2RenderContext_Impl__obj::_hx___tempPointer));
            					}
            				}
            			}
            		}
HXLINE( 396)		this->_hx___context->_hx___bindGLTextureCubeMap(null());
            	}


HX_DEFINE_DYNAMIC_FUNC2(CubeTexture_obj,_hx___uploadCompressedTextureFromByteArray,(void))


::hx::ObjectPtr< CubeTexture_obj > CubeTexture_obj::__new( ::openfl::display3D::Context3D context,int size, ::Dynamic format,bool optimizeForRenderToTexture,int streamingLevels) {
	::hx::ObjectPtr< CubeTexture_obj > __this = new CubeTexture_obj();
	__this->__construct(context,size,format,optimizeForRenderToTexture,streamingLevels);
	return __this;
}

::hx::ObjectPtr< CubeTexture_obj > CubeTexture_obj::__alloc(::hx::Ctx *_hx_ctx, ::openfl::display3D::Context3D context,int size, ::Dynamic format,bool optimizeForRenderToTexture,int streamingLevels) {
	CubeTexture_obj *__this = (CubeTexture_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CubeTexture_obj), true, "openfl.display3D.textures.CubeTexture"));
	*(void **)__this = CubeTexture_obj::_hx_vtable;
	__this->__construct(context,size,format,optimizeForRenderToTexture,streamingLevels);
	return __this;
}

CubeTexture_obj::CubeTexture_obj()
{
}

::hx::Val CubeTexture_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"__size") ) { return ::hx::Val( _hx___size ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__sideToTarget") ) { return ::hx::Val( _hx___sideToTarget_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__uploadedSides") ) { return ::hx::Val( _hx___uploadedSides ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__setSamplerState") ) { return ::hx::Val( _hx___setSamplerState_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__getGLFramebuffer") ) { return ::hx::Val( _hx___getGLFramebuffer_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"uploadFromByteArray") ) { return ::hx::Val( uploadFromByteArray_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"__framebufferSurface") ) { return ::hx::Val( _hx___framebufferSurface ); }
		if (HX_FIELD_EQ(inName,"uploadFromBitmapData") ) { return ::hx::Val( uploadFromBitmapData_dyn() ); }
		if (HX_FIELD_EQ(inName,"uploadFromTypedArray") ) { return ::hx::Val( uploadFromTypedArray_dyn() ); }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"uploadCompressedTextureFromByteArray") ) { return ::hx::Val( uploadCompressedTextureFromByteArray_dyn() ); }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"__uploadCompressedTextureFromByteArray") ) { return ::hx::Val( _hx___uploadCompressedTextureFromByteArray_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val CubeTexture_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"__size") ) { _hx___size=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__uploadedSides") ) { _hx___uploadedSides=inValue.Cast< int >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"__framebufferSurface") ) { _hx___framebufferSurface=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CubeTexture_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("__framebufferSurface",e0,3b,24,cd));
	outFields->push(HX_("__size",e1,03,4c,fb));
	outFields->push(HX_("__uploadedSides",1c,d7,55,a3));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo CubeTexture_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(CubeTexture_obj,_hx___framebufferSurface),HX_("__framebufferSurface",e0,3b,24,cd)},
	{::hx::fsInt,(int)offsetof(CubeTexture_obj,_hx___size),HX_("__size",e1,03,4c,fb)},
	{::hx::fsInt,(int)offsetof(CubeTexture_obj,_hx___uploadedSides),HX_("__uploadedSides",1c,d7,55,a3)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *CubeTexture_obj_sStaticStorageInfo = 0;
#endif

static ::String CubeTexture_obj_sMemberFields[] = {
	HX_("__framebufferSurface",e0,3b,24,cd),
	HX_("__size",e1,03,4c,fb),
	HX_("__uploadedSides",1c,d7,55,a3),
	HX_("uploadCompressedTextureFromByteArray",ce,c7,86,c5),
	HX_("uploadFromBitmapData",a4,85,65,0d),
	HX_("uploadFromByteArray",e6,17,1b,ee),
	HX_("uploadFromTypedArray",ba,7c,f4,d1),
	HX_("__getGLFramebuffer",92,f3,72,c9),
	HX_("__setSamplerState",8b,e7,cf,5d),
	HX_("__sideToTarget",03,57,2b,63),
	HX_("__uploadCompressedTextureFromByteArray",ee,aa,5f,fa),
	::String(null()) };

::hx::Class CubeTexture_obj::__mClass;

void CubeTexture_obj::__register()
{
	CubeTexture_obj _hx_dummy;
	CubeTexture_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display3D.textures.CubeTexture",09,1a,15,3a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CubeTexture_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CubeTexture_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CubeTexture_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CubeTexture_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display3D
} // end namespace textures
