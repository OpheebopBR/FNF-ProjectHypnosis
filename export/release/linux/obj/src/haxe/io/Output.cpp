#include <hxcpp.h>

#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_exceptions_NotImplementedException
#include <haxe/exceptions/NotImplementedException.h>
#endif
#ifndef INCLUDED_haxe_exceptions_PosException
#include <haxe/exceptions/PosException.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Encoding
#include <haxe/io/Encoding.h>
#endif
#ifndef INCLUDED_haxe_io_Error
#include <haxe/io/Error.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_124933b0af6bed49_47_writeByte,"haxe.io.Output","writeByte",0xb4fe513a,"haxe.io.Output.writeByte","/usr/share/haxe/std/haxe/io/Output.hx",47,0xf8a8de42)
HX_LOCAL_STACK_FRAME(_hx_pos_124933b0af6bed49_57_writeBytes,"haxe.io.Output","writeBytes",0xa988c1f9,"haxe.io.Output.writeBytes","/usr/share/haxe/std/haxe/io/Output.hx",57,0xf8a8de42)
HX_LOCAL_STACK_FRAME(_hx_pos_124933b0af6bed49_92_close,"haxe.io.Output","close",0xe726bfeb,"haxe.io.Output.close","/usr/share/haxe/std/haxe/io/Output.hx",92,0xf8a8de42)
HX_LOCAL_STACK_FRAME(_hx_pos_124933b0af6bed49_103_write,"haxe.io.Output","write",0x6f1d1512,"haxe.io.Output.write","/usr/share/haxe/std/haxe/io/Output.hx",103,0xf8a8de42)
HX_LOCAL_STACK_FRAME(_hx_pos_124933b0af6bed49_121_writeFullBytes,"haxe.io.Output","writeFullBytes",0xc2c420ea,"haxe.io.Output.writeFullBytes","/usr/share/haxe/std/haxe/io/Output.hx",121,0xf8a8de42)
HX_LOCAL_STACK_FRAME(_hx_pos_124933b0af6bed49_278_writeString,"haxe.io.Output","writeString",0x97e1cb83,"haxe.io.Output.writeString","/usr/share/haxe/std/haxe/io/Output.hx",278,0xf8a8de42)
namespace haxe{
namespace io{

void Output_obj::__construct() { }

Dynamic Output_obj::__CreateEmpty() { return new Output_obj; }

void *Output_obj::_hx_vtable = 0;

Dynamic Output_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Output_obj > _hx_result = new Output_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Output_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0a55a26d;
}

void Output_obj::writeByte(int c){
            	HX_GC_STACKFRAME(&_hx_pos_124933b0af6bed49_47_writeByte)
HXDLIN(  47)		HX_STACK_DO_THROW( ::haxe::exceptions::NotImplementedException_obj::__alloc( HX_CTX ,null(),null(),::hx::SourceInfo(HX_("haxe/io/Output.hx",5d,da,8a,cb),47,HX_("haxe.io.Output",61,10,0b,c7),HX_("writeByte",87,13,d7,49))));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Output_obj,writeByte,(void))

int Output_obj::writeBytes( ::haxe::io::Bytes s,int pos,int len){
            	HX_STACKFRAME(&_hx_pos_124933b0af6bed49_57_writeBytes)
HXLINE(  59)		bool _hx_tmp;
HXDLIN(  59)		bool _hx_tmp1;
HXDLIN(  59)		if ((pos >= 0)) {
HXLINE(  59)			_hx_tmp1 = (len < 0);
            		}
            		else {
HXLINE(  59)			_hx_tmp1 = true;
            		}
HXDLIN(  59)		if (!(_hx_tmp1)) {
HXLINE(  59)			_hx_tmp = ((pos + len) > s->length);
            		}
            		else {
HXLINE(  59)			_hx_tmp = true;
            		}
HXDLIN(  59)		if (_hx_tmp) {
HXLINE(  60)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::haxe::io::Error_obj::OutsideBounds_dyn()));
            		}
HXLINE(  62)		::Array< unsigned char > b = s->b;
HXLINE(  63)		int k = len;
HXLINE(  64)		while((k > 0)){
HXLINE(  70)			this->writeByte(( (int)(b->__get(pos)) ));
HXLINE(  76)			pos = (pos + 1);
HXLINE(  77)			k = (k - 1);
            		}
HXLINE(  79)		return len;
            	}


HX_DEFINE_DYNAMIC_FUNC3(Output_obj,writeBytes,return )

void Output_obj::close(){
            	HX_STACKFRAME(&_hx_pos_124933b0af6bed49_92_close)
            	}


HX_DEFINE_DYNAMIC_FUNC0(Output_obj,close,(void))

void Output_obj::write( ::haxe::io::Bytes s){
            	HX_STACKFRAME(&_hx_pos_124933b0af6bed49_103_write)
HXLINE( 104)		int l = s->length;
HXLINE( 105)		int p = 0;
HXLINE( 106)		while((l > 0)){
HXLINE( 107)			int k = this->writeBytes(s,p,l);
HXLINE( 108)			if ((k == 0)) {
HXLINE( 109)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::haxe::io::Error_obj::Blocked_dyn()));
            			}
HXLINE( 110)			p = (p + k);
HXLINE( 111)			l = (l - k);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Output_obj,write,(void))

void Output_obj::writeFullBytes( ::haxe::io::Bytes s,int pos,int len){
            	HX_STACKFRAME(&_hx_pos_124933b0af6bed49_121_writeFullBytes)
HXDLIN( 121)		while((len > 0)){
HXLINE( 122)			int k = this->writeBytes(s,pos,len);
HXLINE( 123)			pos = (pos + k);
HXLINE( 124)			len = (len - k);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(Output_obj,writeFullBytes,(void))

void Output_obj::writeString(::String s, ::haxe::io::Encoding encoding){
            	HX_STACKFRAME(&_hx_pos_124933b0af6bed49_278_writeString)
HXLINE( 282)		 ::haxe::io::Bytes b = ::haxe::io::Bytes_obj::ofString(s,encoding);
HXLINE( 284)		this->writeFullBytes(b,0,b->length);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Output_obj,writeString,(void))


Output_obj::Output_obj()
{
}

::hx::Val Output_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return ::hx::Val( close_dyn() ); }
		if (HX_FIELD_EQ(inName,"write") ) { return ::hx::Val( write_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"writeByte") ) { return ::hx::Val( writeByte_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"writeBytes") ) { return ::hx::Val( writeBytes_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"writeString") ) { return ::hx::Val( writeString_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"writeFullBytes") ) { return ::hx::Val( writeFullBytes_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Output_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Output_obj_sStaticStorageInfo = 0;
#endif

static ::String Output_obj_sMemberFields[] = {
	HX_("writeByte",87,13,d7,49),
	HX_("writeBytes",0c,03,5a,52),
	HX_("close",b8,17,63,48),
	HX_("write",df,6c,59,d0),
	HX_("writeFullBytes",7d,e7,66,a4),
	HX_("writeString",10,7b,29,a6),
	::String(null()) };

::hx::Class Output_obj::__mClass;

void Output_obj::__register()
{
	Output_obj _hx_dummy;
	Output_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.io.Output",61,10,0b,c7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Output_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Output_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Output_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Output_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace io
