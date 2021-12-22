#include <hxcpp.h>

#ifndef INCLUDED_openfl_display_ITileContainer
#include <openfl/display/ITileContainer.h>
#endif
#ifndef INCLUDED_openfl_display_Tile
#include <openfl/display/Tile.h>
#endif

namespace openfl{
namespace display{


static ::String ITileContainer_obj_sMemberFields[] = {
	HX_("get_numTiles",68,c5,5e,82),
	HX_("addTile",ef,0d,3a,89),
	HX_("addTileAt",c2,e0,4c,d6),
	HX_("addTiles",a4,23,92,89),
	HX_("contains",1f,5a,7b,2c),
	HX_("getTileAt",f7,34,7f,9a),
	HX_("getTileIndex",8e,95,c6,58),
	HX_("removeTile",92,05,1c,ca),
	HX_("removeTileAt",25,47,56,8d),
	HX_("removeTiles",a1,da,68,0e),
	HX_("setTileIndex",02,b9,bf,6d),
	HX_("sortTiles",47,d1,a8,18),
	HX_("swapTiles",f2,0d,e2,85),
	HX_("swapTilesAt",85,27,f7,4c),
	::String(null()) };

::hx::Class ITileContainer_obj::__mClass;

void ITileContainer_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display.ITileContainer",f4,4f,e3,8f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ITileContainer_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0xcad54adc >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display
