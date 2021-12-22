#include <hxcpp.h>

#ifndef INCLUDED_hscript_CType
#include <hscript/CType.h>
#endif
#ifndef INCLUDED_hscript_Const
#include <hscript/Const.h>
#endif
#ifndef INCLUDED_hscript_Expr
#include <hscript/Expr.h>
#endif
#ifndef INCLUDED_hscript_Tools
#include <hscript/Tools.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_e328a509a67a04f9_28_iter,"hscript.Tools","iter",0xa012dc86,"hscript.Tools.iter","hscript/Tools.hx",28,0x0fa283ff)
HX_LOCAL_STACK_FRAME(_hx_pos_e328a509a67a04f9_63_map,"hscript.Tools","map",0xde4a3aee,"hscript.Tools.map","hscript/Tools.hx",63,0x0fa283ff)
HX_LOCAL_STACK_FRAME(_hx_pos_e328a509a67a04f9_97_expr,"hscript.Tools","expr",0x9d7114a3,"hscript.Tools.expr","hscript/Tools.hx",97,0x0fa283ff)
HX_LOCAL_STACK_FRAME(_hx_pos_e328a509a67a04f9_105_mk,"hscript.Tools","mk",0x3cb11f4c,"hscript.Tools.mk","hscript/Tools.hx",105,0x0fa283ff)
namespace hscript{

void Tools_obj::__construct() { }

Dynamic Tools_obj::__CreateEmpty() { return new Tools_obj; }

void *Tools_obj::_hx_vtable = 0;

Dynamic Tools_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Tools_obj > _hx_result = new Tools_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Tools_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x74d191e8;
}

void Tools_obj::iter( ::hscript::Expr e, ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_e328a509a67a04f9_28_iter)
HXDLIN(  28)		switch((int)(e->_hx_getIndex())){
            			case (int)0: {
HXLINE(  29)				 ::hscript::Const _g = e->_hx_getObject(0).StaticCast<  ::hscript::Const >();
            			}
            			break;
            			case (int)1: {
HXLINE(  29)				::String _g = e->_hx_getString(0);
            			}
            			break;
            			case (int)2: {
HXLINE(  30)				::String _g = e->_hx_getString(0);
HXDLIN(  30)				 ::hscript::CType _g1 = e->_hx_getObject(1).StaticCast<  ::hscript::CType >();
HXDLIN(  30)				{
HXLINE(  30)					 ::hscript::Expr e1 = e->_hx_getObject(2).StaticCast<  ::hscript::Expr >();
HXDLIN(  30)					if (::hx::IsNotNull( e1 )) {
HXLINE(  30)						f(e1);
            					}
            				}
            			}
            			break;
            			case (int)3: {
HXLINE(  31)				 ::hscript::Expr e1 = e->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXDLIN(  31)				f(e1);
            			}
            			break;
            			case (int)4: {
HXLINE(  32)				::Array< ::Dynamic> el = e->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  32)				{
HXLINE(  32)					int _g = 0;
HXDLIN(  32)					while((_g < el->length)){
HXLINE(  32)						 ::hscript::Expr e = el->__get(_g).StaticCast<  ::hscript::Expr >();
HXDLIN(  32)						_g = (_g + 1);
HXDLIN(  32)						f(e);
            					}
            				}
            			}
            			break;
            			case (int)5: {
HXLINE(  33)				::String _g = e->_hx_getString(1);
HXDLIN(  33)				{
HXLINE(  33)					 ::hscript::Expr e1 = e->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXDLIN(  33)					f(e1);
            				}
            			}
            			break;
            			case (int)6: {
HXLINE(  34)				::String _g = e->_hx_getString(0);
HXDLIN(  34)				{
HXLINE(  34)					 ::hscript::Expr e1 = e->_hx_getObject(1).StaticCast<  ::hscript::Expr >();
HXDLIN(  34)					 ::hscript::Expr e2 = e->_hx_getObject(2).StaticCast<  ::hscript::Expr >();
HXDLIN(  34)					{
HXLINE(  34)						f(e1);
HXDLIN(  34)						f(e2);
            					}
            				}
            			}
            			break;
            			case (int)7: {
HXLINE(  35)				::String _g = e->_hx_getString(0);
HXDLIN(  35)				bool _g1 = e->_hx_getBool(1);
HXDLIN(  35)				{
HXLINE(  35)					 ::hscript::Expr e1 = e->_hx_getObject(2).StaticCast<  ::hscript::Expr >();
HXDLIN(  35)					f(e1);
            				}
            			}
            			break;
            			case (int)8: {
HXLINE(  36)				 ::hscript::Expr e1 = e->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXDLIN(  36)				::Array< ::Dynamic> args = e->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  36)				{
HXLINE(  36)					f(e1);
HXDLIN(  36)					{
HXLINE(  36)						int _g = 0;
HXDLIN(  36)						while((_g < args->length)){
HXLINE(  36)							 ::hscript::Expr a = args->__get(_g).StaticCast<  ::hscript::Expr >();
HXDLIN(  36)							_g = (_g + 1);
HXDLIN(  36)							f(a);
            						}
            					}
            				}
            			}
            			break;
            			case (int)9: {
HXLINE(  37)				 ::hscript::Expr c = e->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXDLIN(  37)				 ::hscript::Expr e1 = e->_hx_getObject(1).StaticCast<  ::hscript::Expr >();
HXDLIN(  37)				 ::hscript::Expr e2 = e->_hx_getObject(2).StaticCast<  ::hscript::Expr >();
HXDLIN(  37)				{
HXLINE(  37)					f(c);
HXDLIN(  37)					f(e1);
HXDLIN(  37)					if (::hx::IsNotNull( e2 )) {
HXLINE(  37)						f(e2);
            					}
            				}
            			}
            			break;
            			case (int)10: {
HXLINE(  38)				 ::hscript::Expr c = e->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXDLIN(  38)				 ::hscript::Expr e1 = e->_hx_getObject(1).StaticCast<  ::hscript::Expr >();
HXDLIN(  38)				{
HXLINE(  38)					f(c);
HXDLIN(  38)					f(e1);
            				}
            			}
            			break;
            			case (int)11: {
HXLINE(  40)				::String _g = e->_hx_getString(0);
HXDLIN(  40)				{
HXLINE(  40)					 ::hscript::Expr it = e->_hx_getObject(1).StaticCast<  ::hscript::Expr >();
HXDLIN(  40)					 ::hscript::Expr e1 = e->_hx_getObject(2).StaticCast<  ::hscript::Expr >();
HXDLIN(  40)					{
HXLINE(  40)						f(it);
HXDLIN(  40)						f(e1);
            					}
            				}
            			}
            			break;
            			case (int)12: case (int)13: {
            			}
            			break;
            			case (int)14: {
HXLINE(  42)				::Array< ::Dynamic> _g = e->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  42)				::String _g1 = e->_hx_getString(2);
HXDLIN(  42)				 ::hscript::CType _g2 = e->_hx_getObject(3).StaticCast<  ::hscript::CType >();
HXDLIN(  42)				{
HXLINE(  42)					 ::hscript::Expr e1 = e->_hx_getObject(1).StaticCast<  ::hscript::Expr >();
HXDLIN(  42)					f(e1);
            				}
            			}
            			break;
            			case (int)15: {
HXLINE(  43)				 ::hscript::Expr e1 = e->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXDLIN(  43)				if (::hx::IsNotNull( e1 )) {
HXLINE(  43)					f(e1);
            				}
            			}
            			break;
            			case (int)16: {
HXLINE(  44)				 ::hscript::Expr e1 = e->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXDLIN(  44)				 ::hscript::Expr i = e->_hx_getObject(1).StaticCast<  ::hscript::Expr >();
HXDLIN(  44)				{
HXLINE(  44)					f(e1);
HXDLIN(  44)					f(i);
            				}
            			}
            			break;
            			case (int)17: {
HXLINE(  45)				::Array< ::Dynamic> el = e->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  45)				{
HXLINE(  45)					int _g = 0;
HXDLIN(  45)					while((_g < el->length)){
HXLINE(  45)						 ::hscript::Expr e = el->__get(_g).StaticCast<  ::hscript::Expr >();
HXDLIN(  45)						_g = (_g + 1);
HXDLIN(  45)						f(e);
            					}
            				}
            			}
            			break;
            			case (int)18: {
HXLINE(  46)				::String _g = e->_hx_getString(0);
HXDLIN(  46)				{
HXLINE(  46)					::Array< ::Dynamic> el = e->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  46)					{
HXLINE(  46)						int _g1 = 0;
HXDLIN(  46)						while((_g1 < el->length)){
HXLINE(  46)							 ::hscript::Expr e = el->__get(_g1).StaticCast<  ::hscript::Expr >();
HXDLIN(  46)							_g1 = (_g1 + 1);
HXDLIN(  46)							f(e);
            						}
            					}
            				}
            			}
            			break;
            			case (int)19: {
HXLINE(  47)				 ::hscript::Expr e1 = e->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXDLIN(  47)				f(e1);
            			}
            			break;
            			case (int)20: {
HXLINE(  48)				::String _g = e->_hx_getString(1);
HXDLIN(  48)				 ::hscript::CType _g1 = e->_hx_getObject(2).StaticCast<  ::hscript::CType >();
HXDLIN(  48)				{
HXLINE(  48)					 ::hscript::Expr e1 = e->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXDLIN(  48)					 ::hscript::Expr c = e->_hx_getObject(3).StaticCast<  ::hscript::Expr >();
HXDLIN(  48)					{
HXLINE(  48)						f(e1);
HXDLIN(  48)						f(c);
            					}
            				}
            			}
            			break;
            			case (int)21: {
HXLINE(  49)				::Array< ::Dynamic> fl = e->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  49)				{
HXLINE(  49)					int _g = 0;
HXDLIN(  49)					while((_g < fl->length)){
HXLINE(  49)						 ::Dynamic fi = fl->__get(_g);
HXDLIN(  49)						_g = (_g + 1);
HXDLIN(  49)						f( ::Dynamic(fi->__Field(HX_("e",65,00,00,00),::hx::paccDynamic)));
            					}
            				}
            			}
            			break;
            			case (int)22: {
HXLINE(  50)				 ::hscript::Expr c = e->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXDLIN(  50)				 ::hscript::Expr e1 = e->_hx_getObject(1).StaticCast<  ::hscript::Expr >();
HXDLIN(  50)				 ::hscript::Expr e2 = e->_hx_getObject(2).StaticCast<  ::hscript::Expr >();
HXDLIN(  50)				{
HXLINE(  50)					f(c);
HXDLIN(  50)					f(e1);
HXDLIN(  50)					f(e2);
            				}
            			}
            			break;
            			case (int)23: {
HXLINE(  51)				 ::hscript::Expr e1 = e->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXDLIN(  51)				::Array< ::Dynamic> cases = e->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  51)				 ::hscript::Expr def = e->_hx_getObject(2).StaticCast<  ::hscript::Expr >();
HXDLIN(  51)				{
HXLINE(  52)					f(e1);
HXLINE(  53)					{
HXLINE(  53)						int _g = 0;
HXDLIN(  53)						while((_g < cases->length)){
HXLINE(  53)							 ::Dynamic c = cases->__get(_g);
HXDLIN(  53)							_g = (_g + 1);
HXLINE(  54)							{
HXLINE(  54)								int _g1 = 0;
HXDLIN(  54)								::Array< ::Dynamic> _g2 = ( (::Array< ::Dynamic>)(c->__Field(HX_("values",e2,03,b7,4f),::hx::paccDynamic)) );
HXDLIN(  54)								while((_g1 < _g2->length)){
HXLINE(  54)									 ::hscript::Expr v = _g2->__get(_g1).StaticCast<  ::hscript::Expr >();
HXDLIN(  54)									_g1 = (_g1 + 1);
HXDLIN(  54)									f(v);
            								}
            							}
HXLINE(  55)							f( ::Dynamic(c->__Field(HX_("expr",35,fd,1d,43),::hx::paccDynamic)));
            						}
            					}
HXLINE(  57)					if (::hx::IsNotNull( def )) {
HXLINE(  57)						f(def);
            					}
            				}
            			}
            			break;
            			case (int)24: {
HXLINE(  39)				 ::hscript::Expr c = e->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXDLIN(  39)				 ::hscript::Expr e1 = e->_hx_getObject(1).StaticCast<  ::hscript::Expr >();
HXDLIN(  39)				{
HXLINE(  39)					f(c);
HXDLIN(  39)					f(e1);
            				}
            			}
            			break;
            			case (int)25: {
HXLINE(  58)				::String name = e->_hx_getString(0);
HXDLIN(  58)				::Array< ::Dynamic> args = e->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  58)				 ::hscript::Expr e1 = e->_hx_getObject(2).StaticCast<  ::hscript::Expr >();
HXDLIN(  58)				{
HXLINE(  58)					if (::hx::IsNotNull( args )) {
HXLINE(  58)						int _g = 0;
HXDLIN(  58)						while((_g < args->length)){
HXLINE(  58)							 ::hscript::Expr a = args->__get(_g).StaticCast<  ::hscript::Expr >();
HXDLIN(  58)							_g = (_g + 1);
HXDLIN(  58)							f(a);
            						}
            					}
HXDLIN(  58)					f(e1);
            				}
            			}
            			break;
            			case (int)26: {
HXLINE(  59)				 ::hscript::CType _g = e->_hx_getObject(1).StaticCast<  ::hscript::CType >();
HXDLIN(  59)				{
HXLINE(  59)					 ::hscript::Expr e1 = e->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXDLIN(  59)					f(e1);
            				}
            			}
            			break;
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Tools_obj,iter,(void))

 ::hscript::Expr Tools_obj::map( ::hscript::Expr e, ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_e328a509a67a04f9_63_map)
HXLINE(  64)		 ::hscript::Expr edef;
HXDLIN(  64)		switch((int)(e->_hx_getIndex())){
            			case (int)0: {
HXLINE(  65)				 ::hscript::Const _g = e->_hx_getObject(0).StaticCast<  ::hscript::Const >();
HXLINE(  64)				edef = e;
            			}
            			break;
            			case (int)1: {
HXLINE(  65)				::String _g = e->_hx_getString(0);
HXLINE(  64)				edef = e;
            			}
            			break;
            			case (int)2: {
HXLINE(  66)				::String n = e->_hx_getString(0);
HXDLIN(  66)				 ::hscript::CType t = e->_hx_getObject(1).StaticCast<  ::hscript::CType >();
HXDLIN(  66)				 ::hscript::Expr e1 = e->_hx_getObject(2).StaticCast<  ::hscript::Expr >();
HXDLIN(  66)				 ::hscript::Expr edef1;
HXDLIN(  66)				if (::hx::IsNotNull( e1 )) {
HXLINE(  66)					edef1 = f(e1);
            				}
            				else {
HXLINE(  66)					edef1 = null();
            				}
HXLINE(  64)				edef = ::hscript::Expr_obj::EVar(n,t,edef1);
            			}
            			break;
            			case (int)3: {
HXLINE(  67)				 ::hscript::Expr e1 = e->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXLINE(  64)				edef = ::hscript::Expr_obj::EParent(f(e1));
            			}
            			break;
            			case (int)4: {
HXLINE(  68)				::Array< ::Dynamic> el = e->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  68)				::Array< ::Dynamic> _g = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(  68)				{
HXLINE(  68)					int _g1 = 0;
HXDLIN(  68)					while((_g1 < el->length)){
HXLINE(  68)						 ::hscript::Expr e = el->__get(_g1).StaticCast<  ::hscript::Expr >();
HXDLIN(  68)						_g1 = (_g1 + 1);
HXDLIN(  68)						_g->push(f(e));
            					}
            				}
HXLINE(  64)				edef = ::hscript::Expr_obj::EBlock(_g);
            			}
            			break;
            			case (int)5: {
HXLINE(  69)				 ::hscript::Expr e1 = e->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXDLIN(  69)				::String fi = e->_hx_getString(1);
HXLINE(  64)				edef = ::hscript::Expr_obj::EField(f(e1),fi);
            			}
            			break;
            			case (int)6: {
HXLINE(  70)				::String op = e->_hx_getString(0);
HXDLIN(  70)				 ::hscript::Expr e1 = e->_hx_getObject(1).StaticCast<  ::hscript::Expr >();
HXDLIN(  70)				 ::hscript::Expr e2 = e->_hx_getObject(2).StaticCast<  ::hscript::Expr >();
HXDLIN(  70)				 ::hscript::Expr edef1 = f(e1);
HXLINE(  64)				edef = ::hscript::Expr_obj::EBinop(op,edef1,f(e2));
            			}
            			break;
            			case (int)7: {
HXLINE(  71)				::String op = e->_hx_getString(0);
HXDLIN(  71)				bool pre = e->_hx_getBool(1);
HXDLIN(  71)				 ::hscript::Expr e1 = e->_hx_getObject(2).StaticCast<  ::hscript::Expr >();
HXLINE(  64)				edef = ::hscript::Expr_obj::EUnop(op,pre,f(e1));
            			}
            			break;
            			case (int)8: {
HXLINE(  72)				 ::hscript::Expr e1 = e->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXDLIN(  72)				::Array< ::Dynamic> args = e->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  72)				 ::hscript::Expr edef1 = f(e1);
HXDLIN(  72)				::Array< ::Dynamic> _g = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(  72)				{
HXLINE(  72)					int _g1 = 0;
HXDLIN(  72)					while((_g1 < args->length)){
HXLINE(  72)						 ::hscript::Expr a = args->__get(_g1).StaticCast<  ::hscript::Expr >();
HXDLIN(  72)						_g1 = (_g1 + 1);
HXDLIN(  72)						_g->push(f(a));
            					}
            				}
HXLINE(  64)				edef = ::hscript::Expr_obj::ECall(edef1,_g);
            			}
            			break;
            			case (int)9: {
HXLINE(  73)				 ::hscript::Expr c = e->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXDLIN(  73)				 ::hscript::Expr e1 = e->_hx_getObject(1).StaticCast<  ::hscript::Expr >();
HXDLIN(  73)				 ::hscript::Expr e2 = e->_hx_getObject(2).StaticCast<  ::hscript::Expr >();
HXDLIN(  73)				 ::hscript::Expr edef1 = f(c);
HXDLIN(  73)				 ::hscript::Expr edef2 = f(e1);
HXDLIN(  73)				 ::hscript::Expr edef3;
HXDLIN(  73)				if (::hx::IsNotNull( e2 )) {
HXLINE(  73)					edef3 = f(e2);
            				}
            				else {
HXLINE(  73)					edef3 = null();
            				}
HXLINE(  64)				edef = ::hscript::Expr_obj::EIf(edef1,edef2,edef3);
            			}
            			break;
            			case (int)10: {
HXLINE(  74)				 ::hscript::Expr c = e->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXDLIN(  74)				 ::hscript::Expr e1 = e->_hx_getObject(1).StaticCast<  ::hscript::Expr >();
HXDLIN(  74)				 ::hscript::Expr edef1 = f(c);
HXLINE(  64)				edef = ::hscript::Expr_obj::EWhile(edef1,f(e1));
            			}
            			break;
            			case (int)11: {
HXLINE(  76)				::String v = e->_hx_getString(0);
HXDLIN(  76)				 ::hscript::Expr it = e->_hx_getObject(1).StaticCast<  ::hscript::Expr >();
HXDLIN(  76)				 ::hscript::Expr e1 = e->_hx_getObject(2).StaticCast<  ::hscript::Expr >();
HXDLIN(  76)				 ::hscript::Expr edef1 = f(it);
HXLINE(  64)				edef = ::hscript::Expr_obj::EFor(v,edef1,f(e1));
            			}
            			break;
            			case (int)12: case (int)13: {
HXLINE(  64)				edef = e;
            			}
            			break;
            			case (int)14: {
HXLINE(  77)				::Array< ::Dynamic> args = e->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  77)				 ::hscript::Expr e1 = e->_hx_getObject(1).StaticCast<  ::hscript::Expr >();
HXDLIN(  77)				::String name = e->_hx_getString(2);
HXDLIN(  77)				 ::hscript::CType t = e->_hx_getObject(3).StaticCast<  ::hscript::CType >();
HXLINE(  64)				edef = ::hscript::Expr_obj::EFunction(args,f(e1),name,t);
            			}
            			break;
            			case (int)15: {
HXLINE(  78)				 ::hscript::Expr e1 = e->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXDLIN(  78)				 ::hscript::Expr edef1;
HXDLIN(  78)				if (::hx::IsNotNull( e1 )) {
HXLINE(  78)					edef1 = f(e1);
            				}
            				else {
HXLINE(  78)					edef1 = null();
            				}
HXLINE(  64)				edef = ::hscript::Expr_obj::EReturn(edef1);
            			}
            			break;
            			case (int)16: {
HXLINE(  79)				 ::hscript::Expr e1 = e->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXDLIN(  79)				 ::hscript::Expr i = e->_hx_getObject(1).StaticCast<  ::hscript::Expr >();
HXDLIN(  79)				 ::hscript::Expr edef1 = f(e1);
HXLINE(  64)				edef = ::hscript::Expr_obj::EArray(edef1,f(i));
            			}
            			break;
            			case (int)17: {
HXLINE(  80)				::Array< ::Dynamic> el = e->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  80)				::Array< ::Dynamic> _g = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(  80)				{
HXLINE(  80)					int _g1 = 0;
HXDLIN(  80)					while((_g1 < el->length)){
HXLINE(  80)						 ::hscript::Expr e = el->__get(_g1).StaticCast<  ::hscript::Expr >();
HXDLIN(  80)						_g1 = (_g1 + 1);
HXDLIN(  80)						_g->push(f(e));
            					}
            				}
HXLINE(  64)				edef = ::hscript::Expr_obj::EArrayDecl(_g);
            			}
            			break;
            			case (int)18: {
HXLINE(  81)				::String cl = e->_hx_getString(0);
HXDLIN(  81)				::Array< ::Dynamic> el = e->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  81)				::Array< ::Dynamic> _g = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(  81)				{
HXLINE(  81)					int _g1 = 0;
HXDLIN(  81)					while((_g1 < el->length)){
HXLINE(  81)						 ::hscript::Expr e = el->__get(_g1).StaticCast<  ::hscript::Expr >();
HXDLIN(  81)						_g1 = (_g1 + 1);
HXDLIN(  81)						_g->push(f(e));
            					}
            				}
HXLINE(  64)				edef = ::hscript::Expr_obj::ENew(cl,_g);
            			}
            			break;
            			case (int)19: {
HXLINE(  82)				 ::hscript::Expr e1 = e->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXLINE(  64)				edef = ::hscript::Expr_obj::EThrow(f(e1));
            			}
            			break;
            			case (int)20: {
HXLINE(  83)				 ::hscript::Expr e1 = e->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXDLIN(  83)				::String v = e->_hx_getString(1);
HXDLIN(  83)				 ::hscript::CType t = e->_hx_getObject(2).StaticCast<  ::hscript::CType >();
HXDLIN(  83)				 ::hscript::Expr c = e->_hx_getObject(3).StaticCast<  ::hscript::Expr >();
HXDLIN(  83)				 ::hscript::Expr edef1 = f(e1);
HXLINE(  64)				edef = ::hscript::Expr_obj::ETry(edef1,v,t,f(c));
            			}
            			break;
            			case (int)21: {
HXLINE(  84)				::Array< ::Dynamic> fl = e->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  84)				::Array< ::Dynamic> _g = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(  84)				{
HXLINE(  84)					int _g1 = 0;
HXDLIN(  84)					while((_g1 < fl->length)){
HXLINE(  84)						 ::Dynamic fi = fl->__get(_g1);
HXDLIN(  84)						_g1 = (_g1 + 1);
HXDLIN(  84)						::String fi1 = ( (::String)(fi->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)) );
HXDLIN(  84)						_g->push( ::Dynamic(::hx::Anon_obj::Create(2)
            							->setFixed(0,HX_("e",65,00,00,00),f( ::Dynamic(fi->__Field(HX_("e",65,00,00,00),::hx::paccDynamic))))
            							->setFixed(1,HX_("name",4b,72,ff,48),fi1)));
            					}
            				}
HXLINE(  64)				edef = ::hscript::Expr_obj::EObject(_g);
            			}
            			break;
            			case (int)22: {
HXLINE(  85)				 ::hscript::Expr c = e->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXDLIN(  85)				 ::hscript::Expr e1 = e->_hx_getObject(1).StaticCast<  ::hscript::Expr >();
HXDLIN(  85)				 ::hscript::Expr e2 = e->_hx_getObject(2).StaticCast<  ::hscript::Expr >();
HXDLIN(  85)				 ::hscript::Expr edef1 = f(c);
HXDLIN(  85)				 ::hscript::Expr edef2 = f(e1);
HXLINE(  64)				edef = ::hscript::Expr_obj::ETernary(edef1,edef2,f(e2));
            			}
            			break;
            			case (int)23: {
HXLINE(  86)				 ::hscript::Expr e1 = e->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXDLIN(  86)				::Array< ::Dynamic> cases = e->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  86)				 ::hscript::Expr def = e->_hx_getObject(2).StaticCast<  ::hscript::Expr >();
HXDLIN(  86)				 ::hscript::Expr edef1 = f(e1);
HXDLIN(  86)				::Array< ::Dynamic> _g = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(  86)				{
HXLINE(  86)					int _g1 = 0;
HXDLIN(  86)					while((_g1 < cases->length)){
HXLINE(  86)						 ::Dynamic c = cases->__get(_g1);
HXDLIN(  86)						_g1 = (_g1 + 1);
HXDLIN(  86)						::Array< ::Dynamic> _g2 = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(  86)						{
HXLINE(  86)							int _g3 = 0;
HXDLIN(  86)							::Array< ::Dynamic> _g4 = ( (::Array< ::Dynamic>)(c->__Field(HX_("values",e2,03,b7,4f),::hx::paccDynamic)) );
HXDLIN(  86)							while((_g3 < _g4->length)){
HXLINE(  86)								 ::hscript::Expr v = _g4->__get(_g3).StaticCast<  ::hscript::Expr >();
HXDLIN(  86)								_g3 = (_g3 + 1);
HXDLIN(  86)								_g2->push(f(v));
            							}
            						}
HXDLIN(  86)						_g->push( ::Dynamic(::hx::Anon_obj::Create(2)
            							->setFixed(0,HX_("expr",35,fd,1d,43),f( ::Dynamic(c->__Field(HX_("expr",35,fd,1d,43),::hx::paccDynamic))))
            							->setFixed(1,HX_("values",e2,03,b7,4f),_g2)));
            					}
            				}
HXDLIN(  86)				 ::hscript::Expr edef2;
HXDLIN(  86)				if (::hx::IsNull( def )) {
HXLINE(  86)					edef2 = null();
            				}
            				else {
HXLINE(  86)					edef2 = f(def);
            				}
HXLINE(  64)				edef = ::hscript::Expr_obj::ESwitch(edef1,_g,edef2);
            			}
            			break;
            			case (int)24: {
HXLINE(  75)				 ::hscript::Expr c = e->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXDLIN(  75)				 ::hscript::Expr e1 = e->_hx_getObject(1).StaticCast<  ::hscript::Expr >();
HXDLIN(  75)				 ::hscript::Expr edef1 = f(c);
HXLINE(  64)				edef = ::hscript::Expr_obj::EDoWhile(edef1,f(e1));
            			}
            			break;
            			case (int)25: {
HXLINE(  87)				::String name = e->_hx_getString(0);
HXDLIN(  87)				::Array< ::Dynamic> args = e->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  87)				 ::hscript::Expr e1 = e->_hx_getObject(2).StaticCast<  ::hscript::Expr >();
HXDLIN(  87)				::Array< ::Dynamic> edef1;
HXDLIN(  87)				if (::hx::IsNull( args )) {
HXLINE(  87)					edef1 = null();
            				}
            				else {
HXLINE(  87)					::Array< ::Dynamic> _g = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(  87)					{
HXLINE(  87)						int _g1 = 0;
HXDLIN(  87)						while((_g1 < args->length)){
HXLINE(  87)							 ::hscript::Expr a = args->__get(_g1).StaticCast<  ::hscript::Expr >();
HXDLIN(  87)							_g1 = (_g1 + 1);
HXDLIN(  87)							_g->push(f(a));
            						}
            					}
HXDLIN(  87)					edef1 = _g;
            				}
HXLINE(  64)				edef = ::hscript::Expr_obj::EMeta(name,edef1,f(e1));
            			}
            			break;
            			case (int)26: {
HXLINE(  88)				 ::hscript::Expr e1 = e->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXDLIN(  88)				 ::hscript::CType t = e->_hx_getObject(1).StaticCast<  ::hscript::CType >();
HXLINE(  64)				edef = ::hscript::Expr_obj::ECheckType(f(e1),t);
            			}
            			break;
            		}
HXLINE(  90)		return edef;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Tools_obj,map,return )

 ::hscript::Expr Tools_obj::expr( ::hscript::Expr e){
            	HX_STACKFRAME(&_hx_pos_e328a509a67a04f9_97_expr)
HXDLIN(  97)		return e;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Tools_obj,expr,return )

 ::hscript::Expr Tools_obj::mk( ::hscript::Expr e, ::hscript::Expr p){
            	HX_STACKFRAME(&_hx_pos_e328a509a67a04f9_105_mk)
HXDLIN( 105)		return e;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Tools_obj,mk,return )


Tools_obj::Tools_obj()
{
}

bool Tools_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"mk") ) { outValue = mk_dyn(); return true; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { outValue = map_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"iter") ) { outValue = iter_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"expr") ) { outValue = expr_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Tools_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Tools_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Tools_obj::__mClass;

static ::String Tools_obj_sStaticFields[] = {
	HX_("iter",18,c5,bf,45),
	HX_("map",9c,0a,53,00),
	HX_("expr",35,fd,1d,43),
	HX_("mk",5e,5f,00,00),
	::String(null())
};

void Tools_obj::__register()
{
	Tools_obj _hx_dummy;
	Tools_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hscript.Tools",c0,7f,f4,c4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Tools_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Tools_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Tools_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Tools_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Tools_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hscript
