#include <hxcpp.h>

#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_crypto_Adler32
#include <haxe/crypto/Adler32.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_haxe_zip_HuffTools
#include <haxe/zip/HuffTools.h>
#endif
#ifndef INCLUDED_haxe_zip_Huffman
#include <haxe/zip/Huffman.h>
#endif
#ifndef INCLUDED_haxe_zip_InflateImpl
#include <haxe/zip/InflateImpl.h>
#endif
#ifndef INCLUDED_haxe_zip__InflateImpl_State
#include <haxe/zip/_InflateImpl/State.h>
#endif
#ifndef INCLUDED_haxe_zip__InflateImpl_Window
#include <haxe/zip/_InflateImpl/Window.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0abcb738dc81b7f2_129_new,"haxe.zip.InflateImpl","new",0x8adfb384,"haxe.zip.InflateImpl.new","/usr/share/haxe/std/haxe/zip/InflateImpl.hx",129,0x99065a13)
HX_LOCAL_STACK_FRAME(_hx_pos_0abcb738dc81b7f2_149_buildFixedHuffman,"haxe.zip.InflateImpl","buildFixedHuffman",0x8189428b,"haxe.zip.InflateImpl.buildFixedHuffman","/usr/share/haxe/std/haxe/zip/InflateImpl.hx",149,0x99065a13)
HX_LOCAL_STACK_FRAME(_hx_pos_0abcb738dc81b7f2_159_readBytes,"haxe.zip.InflateImpl","readBytes",0x749c2b59,"haxe.zip.InflateImpl.readBytes","/usr/share/haxe/std/haxe/zip/InflateImpl.hx",159,0x99065a13)
HX_LOCAL_STACK_FRAME(_hx_pos_0abcb738dc81b7f2_168_getBits,"haxe.zip.InflateImpl","getBits",0xefbfefe0,"haxe.zip.InflateImpl.getBits","/usr/share/haxe/std/haxe/zip/InflateImpl.hx",168,0x99065a13)
HX_LOCAL_STACK_FRAME(_hx_pos_0abcb738dc81b7f2_179_getBit,"haxe.zip.InflateImpl","getBit",0x24a99d33,"haxe.zip.InflateImpl.getBit","/usr/share/haxe/std/haxe/zip/InflateImpl.hx",179,0x99065a13)
HX_LOCAL_STACK_FRAME(_hx_pos_0abcb738dc81b7f2_191_getRevBits,"haxe.zip.InflateImpl","getRevBits",0xc652fd6f,"haxe.zip.InflateImpl.getRevBits","/usr/share/haxe/std/haxe/zip/InflateImpl.hx",191,0x99065a13)
HX_LOCAL_STACK_FRAME(_hx_pos_0abcb738dc81b7f2_199_resetBits,"haxe.zip.InflateImpl","resetBits",0x6d1fda99,"haxe.zip.InflateImpl.resetBits","/usr/share/haxe/std/haxe/zip/InflateImpl.hx",199,0x99065a13)
HX_LOCAL_STACK_FRAME(_hx_pos_0abcb738dc81b7f2_204_addBytes,"haxe.zip.InflateImpl","addBytes",0xfc4b68e6,"haxe.zip.InflateImpl.addBytes","/usr/share/haxe/std/haxe/zip/InflateImpl.hx",204,0x99065a13)
HX_LOCAL_STACK_FRAME(_hx_pos_0abcb738dc81b7f2_211_addByte,"haxe.zip.InflateImpl","addByte",0x5986a6ed,"haxe.zip.InflateImpl.addByte","/usr/share/haxe/std/haxe/zip/InflateImpl.hx",211,0x99065a13)
HX_LOCAL_STACK_FRAME(_hx_pos_0abcb738dc81b7f2_218_addDistOne,"haxe.zip.InflateImpl","addDistOne",0x9881c3db,"haxe.zip.InflateImpl.addDistOne","/usr/share/haxe/std/haxe/zip/InflateImpl.hx",218,0x99065a13)
HX_LOCAL_STACK_FRAME(_hx_pos_0abcb738dc81b7f2_225_addDist,"haxe.zip.InflateImpl","addDist",0x5accef4b,"haxe.zip.InflateImpl.addDist","/usr/share/haxe/std/haxe/zip/InflateImpl.hx",225,0x99065a13)
HX_LOCAL_STACK_FRAME(_hx_pos_0abcb738dc81b7f2_229_applyHuffman,"haxe.zip.InflateImpl","applyHuffman",0x495d53bb,"haxe.zip.InflateImpl.applyHuffman","/usr/share/haxe/std/haxe/zip/InflateImpl.hx",229,0x99065a13)
HX_LOCAL_STACK_FRAME(_hx_pos_0abcb738dc81b7f2_236_inflateLengths,"haxe.zip.InflateImpl","inflateLengths",0xf1ca5662,"haxe.zip.InflateImpl.inflateLengths","/usr/share/haxe/std/haxe/zip/InflateImpl.hx",236,0x99065a13)
HX_LOCAL_STACK_FRAME(_hx_pos_0abcb738dc81b7f2_269_inflateLoop,"haxe.zip.InflateImpl","inflateLoop",0x6d5c65af,"haxe.zip.InflateImpl.inflateLoop","/usr/share/haxe/std/haxe/zip/InflateImpl.hx",269,0x99065a13)
HX_LOCAL_STACK_FRAME(_hx_pos_0abcb738dc81b7f2_97_boot,"haxe.zip.InflateImpl","boot",0xf0f6608e,"haxe.zip.InflateImpl.boot","/usr/share/haxe/std/haxe/zip/InflateImpl.hx",97,0x99065a13)
static const int _hx_array_data_cc1ee192_25[] = {
	(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)1,(int)1,(int)1,(int)1,(int)2,(int)2,(int)2,(int)2,(int)3,(int)3,(int)3,(int)3,(int)4,(int)4,(int)4,(int)4,(int)5,(int)5,(int)5,(int)5,(int)0,(int)-1,(int)-1,
};
HX_LOCAL_STACK_FRAME(_hx_pos_0abcb738dc81b7f2_100_boot,"haxe.zip.InflateImpl","boot",0xf0f6608e,"haxe.zip.InflateImpl.boot","/usr/share/haxe/std/haxe/zip/InflateImpl.hx",100,0x99065a13)
static const int _hx_array_data_cc1ee192_27[] = {
	(int)3,(int)4,(int)5,(int)6,(int)7,(int)8,(int)9,(int)10,(int)11,(int)13,(int)15,(int)17,(int)19,(int)23,(int)27,(int)31,(int)35,(int)43,(int)51,(int)59,(int)67,(int)83,(int)99,(int)115,(int)131,(int)163,(int)195,(int)227,(int)258,
};
HX_LOCAL_STACK_FRAME(_hx_pos_0abcb738dc81b7f2_103_boot,"haxe.zip.InflateImpl","boot",0xf0f6608e,"haxe.zip.InflateImpl.boot","/usr/share/haxe/std/haxe/zip/InflateImpl.hx",103,0x99065a13)
static const int _hx_array_data_cc1ee192_29[] = {
	(int)0,(int)0,(int)0,(int)0,(int)1,(int)1,(int)2,(int)2,(int)3,(int)3,(int)4,(int)4,(int)5,(int)5,(int)6,(int)6,(int)7,(int)7,(int)8,(int)8,(int)9,(int)9,(int)10,(int)10,(int)11,(int)11,(int)12,(int)12,(int)13,(int)13,(int)-1,(int)-1,
};
HX_LOCAL_STACK_FRAME(_hx_pos_0abcb738dc81b7f2_106_boot,"haxe.zip.InflateImpl","boot",0xf0f6608e,"haxe.zip.InflateImpl.boot","/usr/share/haxe/std/haxe/zip/InflateImpl.hx",106,0x99065a13)
static const int _hx_array_data_cc1ee192_31[] = {
	(int)1,(int)2,(int)3,(int)4,(int)5,(int)7,(int)9,(int)13,(int)17,(int)25,(int)33,(int)49,(int)65,(int)97,(int)129,(int)193,(int)257,(int)385,(int)513,(int)769,(int)1025,(int)1537,(int)2049,(int)3073,(int)4097,(int)6145,(int)8193,(int)12289,(int)16385,(int)24577,
};
HX_LOCAL_STACK_FRAME(_hx_pos_0abcb738dc81b7f2_109_boot,"haxe.zip.InflateImpl","boot",0xf0f6608e,"haxe.zip.InflateImpl.boot","/usr/share/haxe/std/haxe/zip/InflateImpl.hx",109,0x99065a13)
static const int _hx_array_data_cc1ee192_33[] = {
	(int)16,(int)17,(int)18,(int)0,(int)8,(int)7,(int)9,(int)6,(int)10,(int)5,(int)11,(int)4,(int)12,(int)3,(int)13,(int)2,(int)14,(int)1,(int)15,
};
HX_LOCAL_STACK_FRAME(_hx_pos_0abcb738dc81b7f2_127_boot,"haxe.zip.InflateImpl","boot",0xf0f6608e,"haxe.zip.InflateImpl.boot","/usr/share/haxe/std/haxe/zip/InflateImpl.hx",127,0x99065a13)
namespace haxe{
namespace zip{

void InflateImpl_obj::__construct( ::haxe::io::Input i, ::Dynamic __o_header, ::Dynamic __o_crc){
            		 ::Dynamic header = __o_header;
            		if (::hx::IsNull(__o_header)) header = true;
            		 ::Dynamic crc = __o_crc;
            		if (::hx::IsNull(__o_crc)) crc = true;
            	HX_GC_STACKFRAME(&_hx_pos_0abcb738dc81b7f2_129_new)
HXLINE( 130)		this->isFinal = false;
HXLINE( 131)		this->htools =  ::haxe::zip::HuffTools_obj::__alloc( HX_CTX );
HXLINE( 132)		this->huffman = this->buildFixedHuffman();
HXLINE( 133)		this->huffdist = null();
HXLINE( 134)		this->len = 0;
HXLINE( 135)		this->dist = 0;
HXLINE( 136)		 ::haxe::zip::_InflateImpl::State _hx_tmp;
HXDLIN( 136)		if (( (bool)(header) )) {
HXLINE( 136)			_hx_tmp = ::haxe::zip::_InflateImpl::State_obj::Head_dyn();
            		}
            		else {
HXLINE( 136)			_hx_tmp = ::haxe::zip::_InflateImpl::State_obj::Block_dyn();
            		}
HXDLIN( 136)		this->state = _hx_tmp;
HXLINE( 137)		this->input = i;
HXLINE( 138)		this->bits = 0;
HXLINE( 139)		this->nbits = 0;
HXLINE( 140)		this->needed = 0;
HXLINE( 141)		this->output = null();
HXLINE( 142)		this->outpos = 0;
HXLINE( 143)		this->lengths = ::Array_obj< int >::__new();
HXLINE( 144)		{
HXLINE( 145)			this->lengths->push(-1);
HXDLIN( 145)			this->lengths->push(-1);
HXDLIN( 145)			this->lengths->push(-1);
HXDLIN( 145)			this->lengths->push(-1);
HXDLIN( 145)			this->lengths->push(-1);
HXDLIN( 145)			this->lengths->push(-1);
HXDLIN( 145)			this->lengths->push(-1);
HXDLIN( 145)			this->lengths->push(-1);
HXDLIN( 145)			this->lengths->push(-1);
HXDLIN( 145)			this->lengths->push(-1);
HXDLIN( 145)			this->lengths->push(-1);
HXDLIN( 145)			this->lengths->push(-1);
HXDLIN( 145)			this->lengths->push(-1);
HXDLIN( 145)			this->lengths->push(-1);
HXDLIN( 145)			this->lengths->push(-1);
HXDLIN( 145)			this->lengths->push(-1);
HXDLIN( 145)			this->lengths->push(-1);
HXDLIN( 145)			this->lengths->push(-1);
HXDLIN( 145)			this->lengths->push(-1);
            		}
HXLINE( 146)		this->window =  ::haxe::zip::_InflateImpl::Window_obj::__alloc( HX_CTX ,( (bool)(crc) ));
            	}

Dynamic InflateImpl_obj::__CreateEmpty() { return new InflateImpl_obj; }

void *InflateImpl_obj::_hx_vtable = 0;

Dynamic InflateImpl_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< InflateImpl_obj > _hx_result = new InflateImpl_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool InflateImpl_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x653437cc;
}

 ::haxe::zip::Huffman InflateImpl_obj::buildFixedHuffman(){
            	HX_STACKFRAME(&_hx_pos_0abcb738dc81b7f2_149_buildFixedHuffman)
HXLINE( 150)		if (::hx::IsNotNull( ::haxe::zip::InflateImpl_obj::FIXED_HUFFMAN )) {
HXLINE( 151)			return ::haxe::zip::InflateImpl_obj::FIXED_HUFFMAN;
            		}
HXLINE( 152)		::Array< int > a = ::Array_obj< int >::__new();
HXLINE( 153)		{
HXLINE( 153)			int _g = 0;
HXDLIN( 153)			while((_g < 288)){
HXLINE( 153)				_g = (_g + 1);
HXDLIN( 153)				int n = (_g - 1);
HXLINE( 154)				int _hx_tmp;
HXDLIN( 154)				if ((n <= 143)) {
HXLINE( 154)					_hx_tmp = 8;
            				}
            				else {
HXLINE( 154)					if ((n <= 255)) {
HXLINE( 154)						_hx_tmp = 9;
            					}
            					else {
HXLINE( 154)						if ((n <= 279)) {
HXLINE( 154)							_hx_tmp = 7;
            						}
            						else {
HXLINE( 154)							_hx_tmp = 8;
            						}
            					}
            				}
HXDLIN( 154)				a->push(_hx_tmp);
            			}
            		}
HXLINE( 155)		::haxe::zip::InflateImpl_obj::FIXED_HUFFMAN = this->htools->make(a,0,288,10);
HXLINE( 156)		return ::haxe::zip::InflateImpl_obj::FIXED_HUFFMAN;
            	}


HX_DEFINE_DYNAMIC_FUNC0(InflateImpl_obj,buildFixedHuffman,return )

int InflateImpl_obj::readBytes( ::haxe::io::Bytes b,int pos,int len){
            	HX_STACKFRAME(&_hx_pos_0abcb738dc81b7f2_159_readBytes)
HXLINE( 160)		this->needed = len;
HXLINE( 161)		this->outpos = pos;
HXLINE( 162)		this->output = b;
HXLINE( 163)		if ((len > 0)) {
HXLINE( 164)			while(this->inflateLoop()){
            			}
            		}
HXLINE( 165)		return (len - this->needed);
            	}


HX_DEFINE_DYNAMIC_FUNC3(InflateImpl_obj,readBytes,return )

int InflateImpl_obj::getBits(int n){
            	HX_STACKFRAME(&_hx_pos_0abcb738dc81b7f2_168_getBits)
HXLINE( 169)		while((this->nbits < n)){
HXLINE( 170)			 ::haxe::zip::InflateImpl _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 170)			int _hx_tmp1 = _hx_tmp->bits;
HXDLIN( 170)			int _hx_tmp2 = this->input->readByte();
HXDLIN( 170)			_hx_tmp->bits = (_hx_tmp1 | (_hx_tmp2 << this->nbits));
HXLINE( 171)			 ::haxe::zip::InflateImpl _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 171)			_hx_tmp3->nbits = (_hx_tmp3->nbits + 8);
            		}
HXLINE( 173)		int b = (this->bits & ((1 << n) - 1));
HXLINE( 174)		 ::haxe::zip::InflateImpl _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 174)		_hx_tmp->nbits = (_hx_tmp->nbits - n);
HXLINE( 175)		 ::haxe::zip::InflateImpl _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 175)		_hx_tmp1->bits = (_hx_tmp1->bits >> n);
HXLINE( 176)		return b;
            	}


HX_DEFINE_DYNAMIC_FUNC1(InflateImpl_obj,getBits,return )

bool InflateImpl_obj::getBit(){
            	HX_STACKFRAME(&_hx_pos_0abcb738dc81b7f2_179_getBit)
HXLINE( 180)		if ((this->nbits == 0)) {
HXLINE( 181)			this->nbits = 8;
HXLINE( 182)			this->bits = this->input->readByte();
            		}
HXLINE( 184)		bool b = ((this->bits & 1) == 1);
HXLINE( 185)		this->nbits--;
HXLINE( 186)		 ::haxe::zip::InflateImpl _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 186)		_hx_tmp->bits = (_hx_tmp->bits >> 1);
HXLINE( 187)		return b;
            	}


HX_DEFINE_DYNAMIC_FUNC0(InflateImpl_obj,getBit,return )

int InflateImpl_obj::getRevBits(int n){
            	HX_STACKFRAME(&_hx_pos_0abcb738dc81b7f2_191_getRevBits)
HXDLIN( 191)		if ((n == 0)) {
HXLINE( 192)			return 0;
            		}
            		else {
HXLINE( 193)			if (this->getBit()) {
HXLINE( 194)				return ((1 << (n - 1)) | this->getRevBits((n - 1)));
            			}
            			else {
HXLINE( 196)				return this->getRevBits((n - 1));
            			}
            		}
HXLINE( 191)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC1(InflateImpl_obj,getRevBits,return )

void InflateImpl_obj::resetBits(){
            	HX_STACKFRAME(&_hx_pos_0abcb738dc81b7f2_199_resetBits)
HXLINE( 200)		this->bits = 0;
HXLINE( 201)		this->nbits = 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(InflateImpl_obj,resetBits,(void))

void InflateImpl_obj::addBytes( ::haxe::io::Bytes b,int p,int len){
            	HX_STACKFRAME(&_hx_pos_0abcb738dc81b7f2_204_addBytes)
HXLINE( 205)		this->window->addBytes(b,p,len);
HXLINE( 206)		this->output->blit(this->outpos,b,p,len);
HXLINE( 207)		 ::haxe::zip::InflateImpl _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 207)		_hx_tmp->needed = (_hx_tmp->needed - len);
HXLINE( 208)		 ::haxe::zip::InflateImpl _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 208)		_hx_tmp1->outpos = (_hx_tmp1->outpos + len);
            	}


HX_DEFINE_DYNAMIC_FUNC3(InflateImpl_obj,addBytes,(void))

void InflateImpl_obj::addByte(int b){
            	HX_STACKFRAME(&_hx_pos_0abcb738dc81b7f2_211_addByte)
HXLINE( 212)		this->window->addByte(b);
HXLINE( 213)		this->output->b[this->outpos] = ( (unsigned char)(b) );
HXLINE( 214)		this->needed--;
HXLINE( 215)		this->outpos++;
            	}


HX_DEFINE_DYNAMIC_FUNC1(InflateImpl_obj,addByte,(void))

void InflateImpl_obj::addDistOne(int n){
            	HX_STACKFRAME(&_hx_pos_0abcb738dc81b7f2_218_addDistOne)
HXLINE( 219)		int c = this->window->getLastChar();
HXLINE( 220)		{
HXLINE( 220)			int _g = 0;
HXDLIN( 220)			int _g1 = n;
HXDLIN( 220)			while((_g < _g1)){
HXLINE( 220)				_g = (_g + 1);
HXDLIN( 220)				int i = (_g - 1);
HXLINE( 221)				this->addByte(c);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(InflateImpl_obj,addDistOne,(void))

void InflateImpl_obj::addDist(int d,int len){
            	HX_STACKFRAME(&_hx_pos_0abcb738dc81b7f2_225_addDist)
HXDLIN( 225)		this->addBytes(this->window->buffer,(this->window->pos - d),len);
            	}


HX_DEFINE_DYNAMIC_FUNC2(InflateImpl_obj,addDist,(void))

int InflateImpl_obj::applyHuffman( ::haxe::zip::Huffman h){
            	HX_STACKFRAME(&_hx_pos_0abcb738dc81b7f2_229_applyHuffman)
HXDLIN( 229)		switch((int)(h->_hx_getIndex())){
            			case (int)0: {
HXLINE( 230)				int n = h->_hx_getInt(0);
HXDLIN( 230)				return n;
            			}
            			break;
            			case (int)1: {
HXLINE( 231)				 ::haxe::zip::Huffman a = h->_hx_getObject(0).StaticCast<  ::haxe::zip::Huffman >();
HXDLIN( 231)				 ::haxe::zip::Huffman b = h->_hx_getObject(1).StaticCast<  ::haxe::zip::Huffman >();
HXDLIN( 231)				 ::haxe::zip::Huffman _hx_tmp;
HXDLIN( 231)				if (this->getBit()) {
HXLINE( 231)					_hx_tmp = b;
            				}
            				else {
HXLINE( 231)					_hx_tmp = a;
            				}
HXDLIN( 231)				return this->applyHuffman(_hx_tmp);
            			}
            			break;
            			case (int)2: {
HXLINE( 232)				int n = h->_hx_getInt(0);
HXDLIN( 232)				::Array< ::Dynamic> tbl = h->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 232)				return this->applyHuffman(tbl->__get(this->getBits(n)).StaticCast<  ::haxe::zip::Huffman >());
            			}
            			break;
            		}
HXLINE( 229)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC1(InflateImpl_obj,applyHuffman,return )

void InflateImpl_obj::inflateLengths(::Array< int > a,int max){
            	HX_STACKFRAME(&_hx_pos_0abcb738dc81b7f2_236_inflateLengths)
HXLINE( 237)		int i = 0;
HXLINE( 238)		int prev = 0;
HXLINE( 239)		while((i < max)){
HXLINE( 240)			int n = this->applyHuffman(this->huffman);
HXLINE( 241)			switch((int)(n)){
            				case (int)0: case (int)1: case (int)2: case (int)3: case (int)4: case (int)5: case (int)6: case (int)7: case (int)8: case (int)9: case (int)10: case (int)11: case (int)12: case (int)13: case (int)14: case (int)15: {
HXLINE( 243)					prev = n;
HXLINE( 244)					a[i] = n;
HXLINE( 245)					i = (i + 1);
            				}
            				break;
            				case (int)16: {
HXLINE( 247)					int end = ((i + 3) + this->getBits(2));
HXLINE( 248)					if ((end > max)) {
HXLINE( 249)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid data",13,38,70,89)));
            					}
HXLINE( 250)					while((i < end)){
HXLINE( 251)						a[i] = prev;
HXLINE( 252)						i = (i + 1);
            					}
            				}
            				break;
            				case (int)17: {
HXLINE( 255)					i = (i + (3 + this->getBits(3)));
HXLINE( 256)					if ((i > max)) {
HXLINE( 257)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid data",13,38,70,89)));
            					}
            				}
            				break;
            				case (int)18: {
HXLINE( 259)					i = (i + (11 + this->getBits(7)));
HXLINE( 260)					if ((i > max)) {
HXLINE( 261)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid data",13,38,70,89)));
            					}
            				}
            				break;
            				default:{
HXLINE( 263)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid data",13,38,70,89)));
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(InflateImpl_obj,inflateLengths,(void))

bool InflateImpl_obj::inflateLoop(){
            	HX_STACKFRAME(&_hx_pos_0abcb738dc81b7f2_269_inflateLoop)
HXDLIN( 269)		switch((int)(this->state->_hx_getIndex())){
            			case (int)0: {
HXLINE( 271)				int cmf = this->input->readByte();
HXLINE( 272)				int cm = (cmf & 15);
HXLINE( 273)				int cinfo = (cmf >> 4);
HXLINE( 274)				if ((cm != 8)) {
HXLINE( 275)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid data",13,38,70,89)));
            				}
HXLINE( 276)				int flg = this->input->readByte();
HXLINE( 278)				bool fdict = ((flg & 32) != 0);
HXLINE( 280)				if ((::hx::Mod(((cmf << 8) + flg),31) != 0)) {
HXLINE( 281)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid data",13,38,70,89)));
            				}
HXLINE( 282)				if (fdict) {
HXLINE( 283)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Unsupported dictionary",41,65,81,ac)));
            				}
HXLINE( 284)				this->state = ::haxe::zip::_InflateImpl::State_obj::Block_dyn();
HXLINE( 285)				return true;
            			}
            			break;
            			case (int)1: {
HXLINE( 301)				this->isFinal = this->getBit();
HXLINE( 302)				switch((int)(this->getBits(2))){
            					case (int)0: {
HXLINE( 304)						this->len = this->input->readUInt16();
HXLINE( 305)						int nlen = this->input->readUInt16();
HXLINE( 306)						if ((nlen != (65535 - this->len))) {
HXLINE( 306)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid data",13,38,70,89)));
            						}
HXLINE( 307)						this->state = ::haxe::zip::_InflateImpl::State_obj::Flat_dyn();
HXLINE( 308)						bool r = this->inflateLoop();
HXLINE( 309)						this->resetBits();
HXLINE( 310)						return r;
            					}
            					break;
            					case (int)1: {
HXLINE( 312)						this->huffman = this->buildFixedHuffman();
HXLINE( 313)						this->huffdist = null();
HXLINE( 314)						this->state = ::haxe::zip::_InflateImpl::State_obj::CData_dyn();
HXLINE( 315)						return true;
            					}
            					break;
            					case (int)2: {
HXLINE( 317)						int hlit = (this->getBits(5) + 257);
HXLINE( 318)						int hdist = (this->getBits(5) + 1);
HXLINE( 319)						int hclen = (this->getBits(4) + 4);
HXLINE( 320)						{
HXLINE( 320)							int _g = 0;
HXDLIN( 320)							int _g1 = hclen;
HXDLIN( 320)							while((_g < _g1)){
HXLINE( 320)								_g = (_g + 1);
HXDLIN( 320)								int i = (_g - 1);
HXLINE( 321)								this->lengths[::haxe::zip::InflateImpl_obj::CODE_LENGTHS_POS->__get(i)] = this->getBits(3);
            							}
            						}
HXLINE( 322)						{
HXLINE( 322)							int _g2 = hclen;
HXDLIN( 322)							int _g3 = 19;
HXDLIN( 322)							while((_g2 < _g3)){
HXLINE( 322)								_g2 = (_g2 + 1);
HXDLIN( 322)								int i = (_g2 - 1);
HXLINE( 323)								this->lengths[::haxe::zip::InflateImpl_obj::CODE_LENGTHS_POS->__get(i)] = 0;
            							}
            						}
HXLINE( 324)						this->huffman = this->htools->make(this->lengths,0,19,8);
HXLINE( 325)						::Array< int > lengths = ::Array_obj< int >::__new();
HXLINE( 326)						{
HXLINE( 326)							int _g4 = 0;
HXDLIN( 326)							int _g5 = (hlit + hdist);
HXDLIN( 326)							while((_g4 < _g5)){
HXLINE( 326)								_g4 = (_g4 + 1);
HXDLIN( 326)								int i = (_g4 - 1);
HXLINE( 327)								lengths->push(0);
            							}
            						}
HXLINE( 328)						this->inflateLengths(lengths,(hlit + hdist));
HXLINE( 329)						this->huffdist = this->htools->make(lengths,hlit,hdist,16);
HXLINE( 330)						this->huffman = this->htools->make(lengths,0,hlit,16);
HXLINE( 331)						this->state = ::haxe::zip::_InflateImpl::State_obj::CData_dyn();
HXLINE( 332)						return true;
            					}
            					break;
            					default:{
HXLINE( 334)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid data",13,38,70,89)));
            					}
            				}
            			}
            			break;
            			case (int)2: {
HXLINE( 362)				int n = this->applyHuffman(this->huffman);
HXLINE( 363)				if ((n < 256)) {
HXLINE( 364)					this->addByte(n);
HXLINE( 365)					return (this->needed > 0);
            				}
            				else {
HXLINE( 366)					if ((n == 256)) {
HXLINE( 367)						 ::haxe::zip::_InflateImpl::State _hx_tmp;
HXDLIN( 367)						if (this->isFinal) {
HXLINE( 367)							_hx_tmp = ::haxe::zip::_InflateImpl::State_obj::Crc_dyn();
            						}
            						else {
HXLINE( 367)							_hx_tmp = ::haxe::zip::_InflateImpl::State_obj::Block_dyn();
            						}
HXDLIN( 367)						this->state = _hx_tmp;
HXLINE( 368)						return true;
            					}
            					else {
HXLINE( 370)						n = (n - 257);
HXLINE( 371)						int extra_bits = ::haxe::zip::InflateImpl_obj::LEN_EXTRA_BITS_TBL->__get(n);
HXLINE( 372)						if ((extra_bits == -1)) {
HXLINE( 373)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid data",13,38,70,89)));
            						}
HXLINE( 374)						int _hx_tmp = ::haxe::zip::InflateImpl_obj::LEN_BASE_VAL_TBL->__get(n);
HXDLIN( 374)						this->len = (_hx_tmp + this->getBits(extra_bits));
HXLINE( 375)						int dist_code;
HXDLIN( 375)						if (::hx::IsNull( this->huffdist )) {
HXLINE( 375)							dist_code = this->getRevBits(5);
            						}
            						else {
HXLINE( 375)							dist_code = this->applyHuffman(this->huffdist);
            						}
HXLINE( 376)						extra_bits = ::haxe::zip::InflateImpl_obj::DIST_EXTRA_BITS_TBL->__get(dist_code);
HXLINE( 377)						if ((extra_bits == -1)) {
HXLINE( 378)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid data",13,38,70,89)));
            						}
HXLINE( 379)						int _hx_tmp1 = ::haxe::zip::InflateImpl_obj::DIST_BASE_VAL_TBL->__get(dist_code);
HXDLIN( 379)						this->dist = (_hx_tmp1 + this->getBits(extra_bits));
HXLINE( 380)						int _hx_tmp2 = this->dist;
HXDLIN( 380)						if ((_hx_tmp2 > this->window->available())) {
HXLINE( 381)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid data",13,38,70,89)));
            						}
HXLINE( 382)						 ::haxe::zip::_InflateImpl::State _hx_tmp3;
HXDLIN( 382)						if ((this->dist == 1)) {
HXLINE( 382)							_hx_tmp3 = ::haxe::zip::_InflateImpl::State_obj::DistOne_dyn();
            						}
            						else {
HXLINE( 382)							_hx_tmp3 = ::haxe::zip::_InflateImpl::State_obj::Dist_dyn();
            						}
HXDLIN( 382)						this->state = _hx_tmp3;
HXLINE( 383)						return true;
            					}
            				}
            			}
            			break;
            			case (int)3: {
HXLINE( 337)				int rlen;
HXDLIN( 337)				if ((this->len < this->needed)) {
HXLINE( 337)					rlen = this->len;
            				}
            				else {
HXLINE( 337)					rlen = this->needed;
            				}
HXLINE( 338)				 ::haxe::io::Bytes bytes = this->input->read(rlen);
HXLINE( 339)				 ::haxe::zip::InflateImpl _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 339)				_hx_tmp->len = (_hx_tmp->len - rlen);
HXLINE( 340)				this->addBytes(bytes,0,rlen);
HXLINE( 341)				if ((this->len == 0)) {
HXLINE( 342)					 ::haxe::zip::_InflateImpl::State _hx_tmp;
HXDLIN( 342)					if (this->isFinal) {
HXLINE( 342)						_hx_tmp = ::haxe::zip::_InflateImpl::State_obj::Crc_dyn();
            					}
            					else {
HXLINE( 342)						_hx_tmp = ::haxe::zip::_InflateImpl::State_obj::Block_dyn();
            					}
HXDLIN( 342)					this->state = _hx_tmp;
            				}
HXLINE( 343)				return (this->needed > 0);
            			}
            			break;
            			case (int)4: {
HXLINE( 287)				 ::haxe::crypto::Adler32 calc = this->window->checksum();
HXLINE( 288)				if (::hx::IsNull( calc )) {
HXLINE( 289)					this->state = ::haxe::zip::_InflateImpl::State_obj::Done_dyn();
HXLINE( 290)					return true;
            				}
HXLINE( 292)				 ::haxe::crypto::Adler32 crc = ::haxe::crypto::Adler32_obj::read(this->input);
HXLINE( 293)				if (!(calc->equals(crc))) {
HXLINE( 294)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid CRC",eb,ac,c2,76)));
            				}
HXLINE( 295)				this->state = ::haxe::zip::_InflateImpl::State_obj::Done_dyn();
HXLINE( 296)				return true;
            			}
            			break;
            			case (int)5: {
HXLINE( 352)				while(true){
HXLINE( 352)					bool _hx_tmp;
HXDLIN( 352)					if ((this->len > 0)) {
HXLINE( 352)						_hx_tmp = (this->needed > 0);
            					}
            					else {
HXLINE( 352)						_hx_tmp = false;
            					}
HXDLIN( 352)					if (!(_hx_tmp)) {
HXLINE( 352)						goto _hx_goto_22;
            					}
HXLINE( 353)					int rdist;
HXDLIN( 353)					if ((this->len < this->dist)) {
HXLINE( 353)						rdist = this->len;
            					}
            					else {
HXLINE( 353)						rdist = this->dist;
            					}
HXLINE( 354)					int rlen;
HXDLIN( 354)					if ((this->needed < rdist)) {
HXLINE( 354)						rlen = this->needed;
            					}
            					else {
HXLINE( 354)						rlen = rdist;
            					}
HXLINE( 355)					this->addDist(this->dist,rlen);
HXLINE( 356)					 ::haxe::zip::InflateImpl _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 356)					_hx_tmp1->len = (_hx_tmp1->len - rlen);
            				}
            				_hx_goto_22:;
HXLINE( 358)				if ((this->len == 0)) {
HXLINE( 359)					this->state = ::haxe::zip::_InflateImpl::State_obj::CData_dyn();
            				}
HXLINE( 360)				return (this->needed > 0);
            			}
            			break;
            			case (int)6: {
HXLINE( 345)				int rlen;
HXDLIN( 345)				if ((this->len < this->needed)) {
HXLINE( 345)					rlen = this->len;
            				}
            				else {
HXLINE( 345)					rlen = this->needed;
            				}
HXLINE( 346)				this->addDistOne(rlen);
HXLINE( 347)				 ::haxe::zip::InflateImpl _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 347)				_hx_tmp->len = (_hx_tmp->len - rlen);
HXLINE( 348)				if ((this->len == 0)) {
HXLINE( 349)					this->state = ::haxe::zip::_InflateImpl::State_obj::CData_dyn();
            				}
HXLINE( 350)				return (this->needed > 0);
            			}
            			break;
            			case (int)7: {
HXLINE( 299)				return false;
            			}
            			break;
            		}
HXLINE( 269)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(InflateImpl_obj,inflateLoop,return )

::Array< int > InflateImpl_obj::LEN_EXTRA_BITS_TBL;

::Array< int > InflateImpl_obj::LEN_BASE_VAL_TBL;

::Array< int > InflateImpl_obj::DIST_EXTRA_BITS_TBL;

::Array< int > InflateImpl_obj::DIST_BASE_VAL_TBL;

::Array< int > InflateImpl_obj::CODE_LENGTHS_POS;

 ::haxe::zip::Huffman InflateImpl_obj::FIXED_HUFFMAN;


::hx::ObjectPtr< InflateImpl_obj > InflateImpl_obj::__new( ::haxe::io::Input i, ::Dynamic __o_header, ::Dynamic __o_crc) {
	::hx::ObjectPtr< InflateImpl_obj > __this = new InflateImpl_obj();
	__this->__construct(i,__o_header,__o_crc);
	return __this;
}

::hx::ObjectPtr< InflateImpl_obj > InflateImpl_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::io::Input i, ::Dynamic __o_header, ::Dynamic __o_crc) {
	InflateImpl_obj *__this = (InflateImpl_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(InflateImpl_obj), true, "haxe.zip.InflateImpl"));
	*(void **)__this = InflateImpl_obj::_hx_vtable;
	__this->__construct(i,__o_header,__o_crc);
	return __this;
}

InflateImpl_obj::InflateImpl_obj()
{
}

void InflateImpl_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(InflateImpl);
	HX_MARK_MEMBER_NAME(nbits,"nbits");
	HX_MARK_MEMBER_NAME(bits,"bits");
	HX_MARK_MEMBER_NAME(state,"state");
	HX_MARK_MEMBER_NAME(isFinal,"isFinal");
	HX_MARK_MEMBER_NAME(huffman,"huffman");
	HX_MARK_MEMBER_NAME(huffdist,"huffdist");
	HX_MARK_MEMBER_NAME(htools,"htools");
	HX_MARK_MEMBER_NAME(len,"len");
	HX_MARK_MEMBER_NAME(dist,"dist");
	HX_MARK_MEMBER_NAME(needed,"needed");
	HX_MARK_MEMBER_NAME(output,"output");
	HX_MARK_MEMBER_NAME(outpos,"outpos");
	HX_MARK_MEMBER_NAME(input,"input");
	HX_MARK_MEMBER_NAME(lengths,"lengths");
	HX_MARK_MEMBER_NAME(window,"window");
	HX_MARK_END_CLASS();
}

void InflateImpl_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(nbits,"nbits");
	HX_VISIT_MEMBER_NAME(bits,"bits");
	HX_VISIT_MEMBER_NAME(state,"state");
	HX_VISIT_MEMBER_NAME(isFinal,"isFinal");
	HX_VISIT_MEMBER_NAME(huffman,"huffman");
	HX_VISIT_MEMBER_NAME(huffdist,"huffdist");
	HX_VISIT_MEMBER_NAME(htools,"htools");
	HX_VISIT_MEMBER_NAME(len,"len");
	HX_VISIT_MEMBER_NAME(dist,"dist");
	HX_VISIT_MEMBER_NAME(needed,"needed");
	HX_VISIT_MEMBER_NAME(output,"output");
	HX_VISIT_MEMBER_NAME(outpos,"outpos");
	HX_VISIT_MEMBER_NAME(input,"input");
	HX_VISIT_MEMBER_NAME(lengths,"lengths");
	HX_VISIT_MEMBER_NAME(window,"window");
}

::hx::Val InflateImpl_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"len") ) { return ::hx::Val( len ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"bits") ) { return ::hx::Val( bits ); }
		if (HX_FIELD_EQ(inName,"dist") ) { return ::hx::Val( dist ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"nbits") ) { return ::hx::Val( nbits ); }
		if (HX_FIELD_EQ(inName,"state") ) { return ::hx::Val( state ); }
		if (HX_FIELD_EQ(inName,"input") ) { return ::hx::Val( input ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"htools") ) { return ::hx::Val( htools ); }
		if (HX_FIELD_EQ(inName,"needed") ) { return ::hx::Val( needed ); }
		if (HX_FIELD_EQ(inName,"output") ) { return ::hx::Val( output ); }
		if (HX_FIELD_EQ(inName,"outpos") ) { return ::hx::Val( outpos ); }
		if (HX_FIELD_EQ(inName,"window") ) { return ::hx::Val( window ); }
		if (HX_FIELD_EQ(inName,"getBit") ) { return ::hx::Val( getBit_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isFinal") ) { return ::hx::Val( isFinal ); }
		if (HX_FIELD_EQ(inName,"huffman") ) { return ::hx::Val( huffman ); }
		if (HX_FIELD_EQ(inName,"lengths") ) { return ::hx::Val( lengths ); }
		if (HX_FIELD_EQ(inName,"getBits") ) { return ::hx::Val( getBits_dyn() ); }
		if (HX_FIELD_EQ(inName,"addByte") ) { return ::hx::Val( addByte_dyn() ); }
		if (HX_FIELD_EQ(inName,"addDist") ) { return ::hx::Val( addDist_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"huffdist") ) { return ::hx::Val( huffdist ); }
		if (HX_FIELD_EQ(inName,"addBytes") ) { return ::hx::Val( addBytes_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"readBytes") ) { return ::hx::Val( readBytes_dyn() ); }
		if (HX_FIELD_EQ(inName,"resetBits") ) { return ::hx::Val( resetBits_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getRevBits") ) { return ::hx::Val( getRevBits_dyn() ); }
		if (HX_FIELD_EQ(inName,"addDistOne") ) { return ::hx::Val( addDistOne_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"inflateLoop") ) { return ::hx::Val( inflateLoop_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"applyHuffman") ) { return ::hx::Val( applyHuffman_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"inflateLengths") ) { return ::hx::Val( inflateLengths_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"buildFixedHuffman") ) { return ::hx::Val( buildFixedHuffman_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool InflateImpl_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"FIXED_HUFFMAN") ) { outValue = ( FIXED_HUFFMAN ); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"LEN_BASE_VAL_TBL") ) { outValue = ( LEN_BASE_VAL_TBL ); return true; }
		if (HX_FIELD_EQ(inName,"CODE_LENGTHS_POS") ) { outValue = ( CODE_LENGTHS_POS ); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"DIST_BASE_VAL_TBL") ) { outValue = ( DIST_BASE_VAL_TBL ); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"LEN_EXTRA_BITS_TBL") ) { outValue = ( LEN_EXTRA_BITS_TBL ); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"DIST_EXTRA_BITS_TBL") ) { outValue = ( DIST_EXTRA_BITS_TBL ); return true; }
	}
	return false;
}

::hx::Val InflateImpl_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"len") ) { len=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"bits") ) { bits=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dist") ) { dist=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"nbits") ) { nbits=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"state") ) { state=inValue.Cast<  ::haxe::zip::_InflateImpl::State >(); return inValue; }
		if (HX_FIELD_EQ(inName,"input") ) { input=inValue.Cast<  ::haxe::io::Input >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"htools") ) { htools=inValue.Cast<  ::haxe::zip::HuffTools >(); return inValue; }
		if (HX_FIELD_EQ(inName,"needed") ) { needed=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"output") ) { output=inValue.Cast<  ::haxe::io::Bytes >(); return inValue; }
		if (HX_FIELD_EQ(inName,"outpos") ) { outpos=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"window") ) { window=inValue.Cast<  ::haxe::zip::_InflateImpl::Window >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isFinal") ) { isFinal=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"huffman") ) { huffman=inValue.Cast<  ::haxe::zip::Huffman >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lengths") ) { lengths=inValue.Cast< ::Array< int > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"huffdist") ) { huffdist=inValue.Cast<  ::haxe::zip::Huffman >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool InflateImpl_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"FIXED_HUFFMAN") ) { FIXED_HUFFMAN=ioValue.Cast<  ::haxe::zip::Huffman >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"LEN_BASE_VAL_TBL") ) { LEN_BASE_VAL_TBL=ioValue.Cast< ::Array< int > >(); return true; }
		if (HX_FIELD_EQ(inName,"CODE_LENGTHS_POS") ) { CODE_LENGTHS_POS=ioValue.Cast< ::Array< int > >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"DIST_BASE_VAL_TBL") ) { DIST_BASE_VAL_TBL=ioValue.Cast< ::Array< int > >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"LEN_EXTRA_BITS_TBL") ) { LEN_EXTRA_BITS_TBL=ioValue.Cast< ::Array< int > >(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"DIST_EXTRA_BITS_TBL") ) { DIST_EXTRA_BITS_TBL=ioValue.Cast< ::Array< int > >(); return true; }
	}
	return false;
}

void InflateImpl_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("nbits",74,ca,2a,97));
	outFields->push(HX_("bits",06,fb,16,41));
	outFields->push(HX_("state",11,76,0b,84));
	outFields->push(HX_("isFinal",2c,03,20,9d));
	outFields->push(HX_("huffman",2d,6f,17,ab));
	outFields->push(HX_("huffdist",73,03,7d,03));
	outFields->push(HX_("htools",b3,18,4c,a9));
	outFields->push(HX_("len",d5,4b,52,00));
	outFields->push(HX_("dist",66,67,69,42));
	outFields->push(HX_("needed",35,0e,c9,65));
	outFields->push(HX_("output",01,0f,81,0c));
	outFields->push(HX_("outpos",c6,09,81,0c));
	outFields->push(HX_("input",0a,c4,1d,be));
	outFields->push(HX_("lengths",cd,b4,9a,87));
	outFields->push(HX_("window",f0,93,8c,52));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo InflateImpl_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(InflateImpl_obj,nbits),HX_("nbits",74,ca,2a,97)},
	{::hx::fsInt,(int)offsetof(InflateImpl_obj,bits),HX_("bits",06,fb,16,41)},
	{::hx::fsObject /*  ::haxe::zip::_InflateImpl::State */ ,(int)offsetof(InflateImpl_obj,state),HX_("state",11,76,0b,84)},
	{::hx::fsBool,(int)offsetof(InflateImpl_obj,isFinal),HX_("isFinal",2c,03,20,9d)},
	{::hx::fsObject /*  ::haxe::zip::Huffman */ ,(int)offsetof(InflateImpl_obj,huffman),HX_("huffman",2d,6f,17,ab)},
	{::hx::fsObject /*  ::haxe::zip::Huffman */ ,(int)offsetof(InflateImpl_obj,huffdist),HX_("huffdist",73,03,7d,03)},
	{::hx::fsObject /*  ::haxe::zip::HuffTools */ ,(int)offsetof(InflateImpl_obj,htools),HX_("htools",b3,18,4c,a9)},
	{::hx::fsInt,(int)offsetof(InflateImpl_obj,len),HX_("len",d5,4b,52,00)},
	{::hx::fsInt,(int)offsetof(InflateImpl_obj,dist),HX_("dist",66,67,69,42)},
	{::hx::fsInt,(int)offsetof(InflateImpl_obj,needed),HX_("needed",35,0e,c9,65)},
	{::hx::fsObject /*  ::haxe::io::Bytes */ ,(int)offsetof(InflateImpl_obj,output),HX_("output",01,0f,81,0c)},
	{::hx::fsInt,(int)offsetof(InflateImpl_obj,outpos),HX_("outpos",c6,09,81,0c)},
	{::hx::fsObject /*  ::haxe::io::Input */ ,(int)offsetof(InflateImpl_obj,input),HX_("input",0a,c4,1d,be)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(InflateImpl_obj,lengths),HX_("lengths",cd,b4,9a,87)},
	{::hx::fsObject /*  ::haxe::zip::_InflateImpl::Window */ ,(int)offsetof(InflateImpl_obj,window),HX_("window",f0,93,8c,52)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo InflateImpl_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Array< int > */ ,(void *) &InflateImpl_obj::LEN_EXTRA_BITS_TBL,HX_("LEN_EXTRA_BITS_TBL",9e,a5,c6,5c)},
	{::hx::fsObject /* ::Array< int > */ ,(void *) &InflateImpl_obj::LEN_BASE_VAL_TBL,HX_("LEN_BASE_VAL_TBL",fc,eb,05,8d)},
	{::hx::fsObject /* ::Array< int > */ ,(void *) &InflateImpl_obj::DIST_EXTRA_BITS_TBL,HX_("DIST_EXTRA_BITS_TBL",0d,ad,8a,51)},
	{::hx::fsObject /* ::Array< int > */ ,(void *) &InflateImpl_obj::DIST_BASE_VAL_TBL,HX_("DIST_BASE_VAL_TBL",ab,e9,0b,b6)},
	{::hx::fsObject /* ::Array< int > */ ,(void *) &InflateImpl_obj::CODE_LENGTHS_POS,HX_("CODE_LENGTHS_POS",50,d8,e3,b4)},
	{::hx::fsObject /*  ::haxe::zip::Huffman */ ,(void *) &InflateImpl_obj::FIXED_HUFFMAN,HX_("FIXED_HUFFMAN",e2,41,83,5f)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String InflateImpl_obj_sMemberFields[] = {
	HX_("nbits",74,ca,2a,97),
	HX_("bits",06,fb,16,41),
	HX_("state",11,76,0b,84),
	HX_("isFinal",2c,03,20,9d),
	HX_("huffman",2d,6f,17,ab),
	HX_("huffdist",73,03,7d,03),
	HX_("htools",b3,18,4c,a9),
	HX_("len",d5,4b,52,00),
	HX_("dist",66,67,69,42),
	HX_("needed",35,0e,c9,65),
	HX_("output",01,0f,81,0c),
	HX_("outpos",c6,09,81,0c),
	HX_("input",0a,c4,1d,be),
	HX_("lengths",cd,b4,9a,87),
	HX_("window",f0,93,8c,52),
	HX_("buildFixedHuffman",67,a8,b3,a7),
	HX_("readBytes",35,55,7f,8e),
	HX_("getBits",bc,aa,99,13),
	HX_("getBit",d7,f1,19,a3),
	HX_("getRevBits",13,74,34,53),
	HX_("resetBits",75,04,03,87),
	HX_("addBytes",8a,2e,f5,36),
	HX_("addByte",c9,61,60,7d),
	HX_("addDistOne",7f,3a,63,25),
	HX_("addDist",27,aa,a6,7e),
	HX_("applyHuffman",5f,bb,84,ea),
	HX_("inflateLengths",06,ef,55,b9),
	HX_("inflateLoop",8b,be,c2,25),
	::String(null()) };

static void InflateImpl_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(InflateImpl_obj::LEN_EXTRA_BITS_TBL,"LEN_EXTRA_BITS_TBL");
	HX_MARK_MEMBER_NAME(InflateImpl_obj::LEN_BASE_VAL_TBL,"LEN_BASE_VAL_TBL");
	HX_MARK_MEMBER_NAME(InflateImpl_obj::DIST_EXTRA_BITS_TBL,"DIST_EXTRA_BITS_TBL");
	HX_MARK_MEMBER_NAME(InflateImpl_obj::DIST_BASE_VAL_TBL,"DIST_BASE_VAL_TBL");
	HX_MARK_MEMBER_NAME(InflateImpl_obj::CODE_LENGTHS_POS,"CODE_LENGTHS_POS");
	HX_MARK_MEMBER_NAME(InflateImpl_obj::FIXED_HUFFMAN,"FIXED_HUFFMAN");
};

#ifdef HXCPP_VISIT_ALLOCS
static void InflateImpl_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(InflateImpl_obj::LEN_EXTRA_BITS_TBL,"LEN_EXTRA_BITS_TBL");
	HX_VISIT_MEMBER_NAME(InflateImpl_obj::LEN_BASE_VAL_TBL,"LEN_BASE_VAL_TBL");
	HX_VISIT_MEMBER_NAME(InflateImpl_obj::DIST_EXTRA_BITS_TBL,"DIST_EXTRA_BITS_TBL");
	HX_VISIT_MEMBER_NAME(InflateImpl_obj::DIST_BASE_VAL_TBL,"DIST_BASE_VAL_TBL");
	HX_VISIT_MEMBER_NAME(InflateImpl_obj::CODE_LENGTHS_POS,"CODE_LENGTHS_POS");
	HX_VISIT_MEMBER_NAME(InflateImpl_obj::FIXED_HUFFMAN,"FIXED_HUFFMAN");
};

#endif

::hx::Class InflateImpl_obj::__mClass;

static ::String InflateImpl_obj_sStaticFields[] = {
	HX_("LEN_EXTRA_BITS_TBL",9e,a5,c6,5c),
	HX_("LEN_BASE_VAL_TBL",fc,eb,05,8d),
	HX_("DIST_EXTRA_BITS_TBL",0d,ad,8a,51),
	HX_("DIST_BASE_VAL_TBL",ab,e9,0b,b6),
	HX_("CODE_LENGTHS_POS",50,d8,e3,b4),
	HX_("FIXED_HUFFMAN",e2,41,83,5f),
	::String(null())
};

void InflateImpl_obj::__register()
{
	InflateImpl_obj _hx_dummy;
	InflateImpl_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.zip.InflateImpl",92,e1,1e,cc);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &InflateImpl_obj::__GetStatic;
	__mClass->mSetStaticField = &InflateImpl_obj::__SetStatic;
	__mClass->mMarkFunc = InflateImpl_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(InflateImpl_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(InflateImpl_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< InflateImpl_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = InflateImpl_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = InflateImpl_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = InflateImpl_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void InflateImpl_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_0abcb738dc81b7f2_97_boot)
HXDLIN(  97)		LEN_EXTRA_BITS_TBL = ::Array_obj< int >::fromData( _hx_array_data_cc1ee192_25,31);
            	}
{
            	HX_STACKFRAME(&_hx_pos_0abcb738dc81b7f2_100_boot)
HXDLIN( 100)		LEN_BASE_VAL_TBL = ::Array_obj< int >::fromData( _hx_array_data_cc1ee192_27,29);
            	}
{
            	HX_STACKFRAME(&_hx_pos_0abcb738dc81b7f2_103_boot)
HXDLIN( 103)		DIST_EXTRA_BITS_TBL = ::Array_obj< int >::fromData( _hx_array_data_cc1ee192_29,32);
            	}
{
            	HX_STACKFRAME(&_hx_pos_0abcb738dc81b7f2_106_boot)
HXDLIN( 106)		DIST_BASE_VAL_TBL = ::Array_obj< int >::fromData( _hx_array_data_cc1ee192_31,30);
            	}
{
            	HX_STACKFRAME(&_hx_pos_0abcb738dc81b7f2_109_boot)
HXDLIN( 109)		CODE_LENGTHS_POS = ::Array_obj< int >::fromData( _hx_array_data_cc1ee192_33,19);
            	}
{
            	HX_STACKFRAME(&_hx_pos_0abcb738dc81b7f2_127_boot)
HXDLIN( 127)		FIXED_HUFFMAN = null();
            	}
}

} // end namespace haxe
} // end namespace zip
