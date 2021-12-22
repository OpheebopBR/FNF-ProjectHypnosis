#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_system_FlxAssets
#include <flixel/system/FlxAssets.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxBaseTilemap
#include <flixel/tile/FlxBaseTilemap.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTilemapAutoTiling
#include <flixel/tile/FlxTilemapAutoTiling.h>
#endif
#ifndef INCLUDED_flixel_util_FlxArrayUtil
#include <flixel/util/FlxArrayUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxRect
#include <flixel/util/FlxPool_flixel_math_FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_36d94048d9e4941f_19_new,"flixel.tile.FlxBaseTilemap","new",0x601e788b,"flixel.tile.FlxBaseTilemap.new","flixel/tile/FlxBaseTilemap.hx",19,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_113_updateTile,"flixel.tile.FlxBaseTilemap","updateTile",0x4985390c,"flixel.tile.FlxBaseTilemap.updateTile","flixel/tile/FlxBaseTilemap.hx",113,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_118_cacheGraphics,"flixel.tile.FlxBaseTilemap","cacheGraphics",0x589e0d18,"flixel.tile.FlxBaseTilemap.cacheGraphics","flixel/tile/FlxBaseTilemap.hx",118,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_123_initTileObjects,"flixel.tile.FlxBaseTilemap","initTileObjects",0x1ec17ac1,"flixel.tile.FlxBaseTilemap.initTileObjects","flixel/tile/FlxBaseTilemap.hx",123,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_128_updateMap,"flixel.tile.FlxBaseTilemap","updateMap",0xe833827e,"flixel.tile.FlxBaseTilemap.updateMap","flixel/tile/FlxBaseTilemap.hx",128,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_133_computeDimensions,"flixel.tile.FlxBaseTilemap","computeDimensions",0xc850220f,"flixel.tile.FlxBaseTilemap.computeDimensions","flixel/tile/FlxBaseTilemap.hx",133,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_138_getTileIndexByCoords,"flixel.tile.FlxBaseTilemap","getTileIndexByCoords",0x5f0cf078,"flixel.tile.FlxBaseTilemap.getTileIndexByCoords","flixel/tile/FlxBaseTilemap.hx",138,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_144_getTileCoordsByIndex,"flixel.tile.FlxBaseTilemap","getTileCoordsByIndex",0x89a6db2e,"flixel.tile.FlxBaseTilemap.getTileCoordsByIndex","flixel/tile/FlxBaseTilemap.hx",144,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_150_ray,"flixel.tile.FlxBaseTilemap","ray",0x60217e15,"flixel.tile.FlxBaseTilemap.ray","flixel/tile/FlxBaseTilemap.hx",150,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_156_overlapsWithCallback,"flixel.tile.FlxBaseTilemap","overlapsWithCallback",0x90f43a8c,"flixel.tile.FlxBaseTilemap.overlapsWithCallback","flixel/tile/FlxBaseTilemap.hx",156,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_162_setDirty,"flixel.tile.FlxBaseTilemap","setDirty",0x31f19505,"flixel.tile.FlxBaseTilemap.setDirty","flixel/tile/FlxBaseTilemap.hx",162,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_175_destroy,"flixel.tile.FlxBaseTilemap","destroy",0x44ffc6a5,"flixel.tile.FlxBaseTilemap.destroy","flixel/tile/FlxBaseTilemap.hx",175,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_200_loadMapFromCSV,"flixel.tile.FlxBaseTilemap","loadMapFromCSV",0xbac5ecbb,"flixel.tile.FlxBaseTilemap.loadMapFromCSV","flixel/tile/FlxBaseTilemap.hx",200,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_279_loadMapFromArray,"flixel.tile.FlxBaseTilemap","loadMapFromArray",0x576cd9ce,"flixel.tile.FlxBaseTilemap.loadMapFromArray","flixel/tile/FlxBaseTilemap.hx",279,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_308_loadMapFrom2DArray,"flixel.tile.FlxBaseTilemap","loadMapFrom2DArray",0xb01a13fc,"flixel.tile.FlxBaseTilemap.loadMapFrom2DArray","flixel/tile/FlxBaseTilemap.hx",308,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_342_loadMapFromGraphic,"flixel.tile.FlxBaseTilemap","loadMapFromGraphic",0xe93ffe1d,"flixel.tile.FlxBaseTilemap.loadMapFromGraphic","flixel/tile/FlxBaseTilemap.hx",342,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_350_loadMapHelper,"flixel.tile.FlxBaseTilemap","loadMapHelper",0xc59c560f,"flixel.tile.FlxBaseTilemap.loadMapHelper","flixel/tile/FlxBaseTilemap.hx",350,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_380_postGraphicLoad,"flixel.tile.FlxBaseTilemap","postGraphicLoad",0x0dc00119,"flixel.tile.FlxBaseTilemap.postGraphicLoad","flixel/tile/FlxBaseTilemap.hx",380,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_389_applyAutoTile,"flixel.tile.FlxBaseTilemap","applyAutoTile",0xcc60c5b6,"flixel.tile.FlxBaseTilemap.applyAutoTile","flixel/tile/FlxBaseTilemap.hx",389,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_400_applyCustomRemap,"flixel.tile.FlxBaseTilemap","applyCustomRemap",0x2fd5c57f,"flixel.tile.FlxBaseTilemap.applyCustomRemap","flixel/tile/FlxBaseTilemap.hx",400,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_420_randomizeIndices,"flixel.tile.FlxBaseTilemap","randomizeIndices",0x9015e6eb,"flixel.tile.FlxBaseTilemap.randomizeIndices","flixel/tile/FlxBaseTilemap.hx",420,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_427_randomizeIndices,"flixel.tile.FlxBaseTilemap","randomizeIndices",0x9015e6eb,"flixel.tile.FlxBaseTilemap.randomizeIndices","flixel/tile/FlxBaseTilemap.hx",427,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_456_autoTile,"flixel.tile.FlxBaseTilemap","autoTile",0x7a0f9632,"flixel.tile.FlxBaseTilemap.autoTile","flixel/tile/FlxBaseTilemap.hx",456,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_527_autoTileFull,"flixel.tile.FlxBaseTilemap","autoTileFull",0x4139ace1,"flixel.tile.FlxBaseTilemap.autoTileFull","flixel/tile/FlxBaseTilemap.hx",527,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_574_setCustomTileMappings,"flixel.tile.FlxBaseTilemap","setCustomTileMappings",0x91d80f71,"flixel.tile.FlxBaseTilemap.setCustomTileMappings","flixel/tile/FlxBaseTilemap.hx",574,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_596_getTile,"flixel.tile.FlxBaseTilemap","getTile",0x3ff9148f,"flixel.tile.FlxBaseTilemap.getTile","flixel/tile/FlxBaseTilemap.hx",596,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_607_getTileByIndex,"flixel.tile.FlxBaseTilemap","getTileByIndex",0xf0387cec,"flixel.tile.FlxBaseTilemap.getTileByIndex","flixel/tile/FlxBaseTilemap.hx",607,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_618_getTileCollisions,"flixel.tile.FlxBaseTilemap","getTileCollisions",0x9ca1bd30,"flixel.tile.FlxBaseTilemap.getTileCollisions","flixel/tile/FlxBaseTilemap.hx",618,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_628_getTileInstances,"flixel.tile.FlxBaseTilemap","getTileInstances",0xa0cac4af,"flixel.tile.FlxBaseTilemap.getTileInstances","flixel/tile/FlxBaseTilemap.hx",628,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_659_setTile,"flixel.tile.FlxBaseTilemap","setTile",0x32faa59b,"flixel.tile.FlxBaseTilemap.setTile","flixel/tile/FlxBaseTilemap.hx",659,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_677_setTileByIndex,"flixel.tile.FlxBaseTilemap","setTileByIndex",0x10586560,"flixel.tile.FlxBaseTilemap.setTileByIndex","flixel/tile/FlxBaseTilemap.hx",677,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_738_setTileProperties,"flixel.tile.FlxBaseTilemap","setTileProperties",0x2905d56e,"flixel.tile.FlxBaseTilemap.setTileProperties","flixel/tile/FlxBaseTilemap.hx",738,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_771_getData,"flixel.tile.FlxBaseTilemap","getData",0x355f9f8b,"flixel.tile.FlxBaseTilemap.getData","flixel/tile/FlxBaseTilemap.hx",771,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_804_findPath,"flixel.tile.FlxBaseTilemap","findPath",0xe6d2ce73,"flixel.tile.FlxBaseTilemap.findPath","flixel/tile/FlxBaseTilemap.hx",804,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_876_computePathDistance,"flixel.tile.FlxBaseTilemap","computePathDistance",0x34e53a3c,"flixel.tile.FlxBaseTilemap.computePathDistance","flixel/tile/FlxBaseTilemap.hx",876,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_1075_walkPath,"flixel.tile.FlxBaseTilemap","walkPath",0xa1980343,"flixel.tile.FlxBaseTilemap.walkPath","flixel/tile/FlxBaseTilemap.hx",1075,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_1174_simplifyPath,"flixel.tile.FlxBaseTilemap","simplifyPath",0xe8519bc3,"flixel.tile.FlxBaseTilemap.simplifyPath","flixel/tile/FlxBaseTilemap.hx",1174,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_1207_raySimplifyPath,"flixel.tile.FlxBaseTilemap","raySimplifyPath",0x32723703,"flixel.tile.FlxBaseTilemap.raySimplifyPath","flixel/tile/FlxBaseTilemap.hx",1207,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_1251_overlaps,"flixel.tile.FlxBaseTilemap","overlaps",0x8f17af01,"flixel.tile.FlxBaseTilemap.overlaps","flixel/tile/FlxBaseTilemap.hx",1251,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_1266_tilemapOverlapsCallback,"flixel.tile.FlxBaseTilemap","tilemapOverlapsCallback",0x40d17cea,"flixel.tile.FlxBaseTilemap.tilemapOverlapsCallback","flixel/tile/FlxBaseTilemap.hx",1266,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_1290_overlapsAt,"flixel.tile.FlxBaseTilemap","overlapsAt",0x47a26a54,"flixel.tile.FlxBaseTilemap.overlapsAt","flixel/tile/FlxBaseTilemap.hx",1290,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_1306_tilemapOverlapsAtCallback,"flixel.tile.FlxBaseTilemap","tilemapOverlapsAtCallback",0xbef90c3d,"flixel.tile.FlxBaseTilemap.tilemapOverlapsAtCallback","flixel/tile/FlxBaseTilemap.hx",1306,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_1325_overlapsPoint,"flixel.tile.FlxBaseTilemap","overlapsPoint",0x91c6718f,"flixel.tile.FlxBaseTilemap.overlapsPoint","flixel/tile/FlxBaseTilemap.hx",1325,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_1339_tileAtPointAllowsCollisions,"flixel.tile.FlxBaseTilemap","tileAtPointAllowsCollisions",0x26e8ec45,"flixel.tile.FlxBaseTilemap.tileAtPointAllowsCollisions","flixel/tile/FlxBaseTilemap.hx",1339,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_1353_getBounds,"flixel.tile.FlxBaseTilemap","getBounds",0x47c7aa16,"flixel.tile.FlxBaseTilemap.getBounds","flixel/tile/FlxBaseTilemap.hx",1353,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_26_boot,"flixel.tile.FlxBaseTilemap","boot",0xb2a401a7,"flixel.tile.FlxBaseTilemap.boot","flixel/tile/FlxBaseTilemap.hx",26,0x0139d8e5)
static const int _hx_array_data_6aa6d719_65[] = {
	(int)0,(int)0,(int)0,(int)0,(int)2,(int)2,(int)0,(int)3,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)11,(int)11,(int)0,(int)0,(int)13,(int)13,(int)0,(int)14,(int)0,(int)0,(int)0,(int)0,(int)18,(int)18,(int)0,(int)19,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)51,(int)51,(int)0,(int)0,(int)53,(int)53,(int)0,(int)54,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)62,(int)62,(int)0,(int)0,(int)64,(int)64,(int)0,(int)65,(int)0,(int)0,(int)0,(int)0,(int)69,(int)69,(int)0,(int)70,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)86,(int)86,(int)0,(int)0,(int)88,(int)88,(int)0,(int)89,(int)0,(int)0,(int)0,(int)0,(int)93,(int)93,(int)0,(int)94,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)159,(int)0,(int)0,(int)0,(int)162,(int)0,(int)163,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)172,(int)0,(int)0,(int)0,(int)175,(int)0,(int)176,(int)0,(int)0,(int)0,(int)0,(int)0,(int)181,(int)0,(int)182,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)199,(int)0,(int)0,(int)0,(int)202,(int)0,(int)203,(int)0,(int)0,(int)0,(int)0,(int)0,(int)208,(int)0,(int)209,
};
namespace flixel{
namespace tile{

void FlxBaseTilemap_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_19_new)
HXLINE( 106)		this->_collideIndex = 0;
HXLINE( 105)		this->_drawIndex = 0;
HXLINE(  98)		this->_startingIndex = 0;
HXLINE(  93)		this->_tileObjects = ::cpp::VirtualArray_obj::__new(0);
HXLINE(  49)		this->totalTiles = 0;
HXLINE(  47)		this->heightInTiles = 0;
HXLINE(  45)		this->widthInTiles = 0;
HXLINE(  24)		this->_hx_auto = ::flixel::tile::FlxTilemapAutoTiling_obj::OFF_dyn();
HXLINE( 167)		super::__construct(null(),null(),null(),null());
HXLINE( 169)		this->flixelType = 3;
HXLINE( 170)		this->set_immovable(true);
HXLINE( 171)		this->set_moves(false);
            	}

Dynamic FlxBaseTilemap_obj::__CreateEmpty() { return new FlxBaseTilemap_obj; }

void *FlxBaseTilemap_obj::_hx_vtable = 0;

Dynamic FlxBaseTilemap_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxBaseTilemap_obj > _hx_result = new FlxBaseTilemap_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxBaseTilemap_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x7ccf8994) {
		if (inClassId<=(int)0x3d6253b5) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x3d6253b5;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	} else {
		return inClassId==(int)0x7dab0655;
	}
}

void FlxBaseTilemap_obj::updateTile(int Index){
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_113_updateTile)
HXDLIN( 113)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("updateTile must be implemented",53,76,b0,30)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseTilemap_obj,updateTile,(void))

void FlxBaseTilemap_obj::cacheGraphics(int TileWidth,int TileHeight, ::Dynamic TileGraphic){
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_118_cacheGraphics)
HXDLIN( 118)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("cacheGraphics must be implemented",a9,10,20,38)));
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxBaseTilemap_obj,cacheGraphics,(void))

void FlxBaseTilemap_obj::initTileObjects(){
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_123_initTileObjects)
HXDLIN( 123)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("initTileObjects must be implemented",12,b8,a6,2f)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxBaseTilemap_obj,initTileObjects,(void))

void FlxBaseTilemap_obj::updateMap(){
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_128_updateMap)
HXDLIN( 128)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("updateMap must be implemented",8f,ae,0f,b7)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxBaseTilemap_obj,updateMap,(void))

void FlxBaseTilemap_obj::computeDimensions(){
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_133_computeDimensions)
HXDLIN( 133)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("computeDimensions must be implemented",a0,79,f6,10)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxBaseTilemap_obj,computeDimensions,(void))

int FlxBaseTilemap_obj::getTileIndexByCoords( ::flixel::math::FlxPoint Coord){
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_138_getTileIndexByCoords)
HXDLIN( 138)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("getTileIndexByCoords must be implemented",7f,57,93,9c)));
HXDLIN( 138)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseTilemap_obj,getTileIndexByCoords,return )

 ::flixel::math::FlxPoint FlxBaseTilemap_obj::getTileCoordsByIndex(int Index,::hx::Null< bool >  __o_Midpoint){
            		bool Midpoint = __o_Midpoint.Default(true);
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_144_getTileCoordsByIndex)
HXDLIN( 144)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("getTileCoordsByIndex must be implemented",35,21,39,05)));
HXDLIN( 144)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxBaseTilemap_obj,getTileCoordsByIndex,return )

bool FlxBaseTilemap_obj::ray( ::flixel::math::FlxPoint Start, ::flixel::math::FlxPoint End, ::flixel::math::FlxPoint Result,::hx::Null< Float >  __o_Resolution){
            		Float Resolution = __o_Resolution.Default(1);
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_150_ray)
HXDLIN( 150)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("ray must be implemented",e6,31,5e,58)));
HXDLIN( 150)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxBaseTilemap_obj,ray,return )

bool FlxBaseTilemap_obj::overlapsWithCallback( ::flixel::FlxObject Object, ::Dynamic Callback,::hx::Null< bool >  __o_FlipCallbackParams, ::flixel::math::FlxPoint Position){
            		bool FlipCallbackParams = __o_FlipCallbackParams.Default(false);
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_156_overlapsWithCallback)
HXDLIN( 156)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("overlapsWithCallback must be implemented",93,a3,ff,38)));
HXDLIN( 156)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxBaseTilemap_obj,overlapsWithCallback,return )

void FlxBaseTilemap_obj::setDirty(::hx::Null< bool >  __o_Dirty){
            		bool Dirty = __o_Dirty.Default(true);
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_162_setDirty)
HXDLIN( 162)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("setDirty must be implemented",0c,cc,e0,5f)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseTilemap_obj,setDirty,(void))

void FlxBaseTilemap_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_175_destroy)
HXLINE( 176)		this->_data = null();
HXLINE( 177)		this->super::destroy();
            	}


 ::flixel::tile::FlxBaseTilemap FlxBaseTilemap_obj::loadMapFromCSV(::String MapData, ::Dynamic TileGraphic,::hx::Null< int >  __o_TileWidth,::hx::Null< int >  __o_TileHeight, ::flixel::tile::FlxTilemapAutoTiling AutoTile,::hx::Null< int >  __o_StartingIndex,::hx::Null< int >  __o_DrawIndex,::hx::Null< int >  __o_CollideIndex){
            		int TileWidth = __o_TileWidth.Default(0);
            		int TileHeight = __o_TileHeight.Default(0);
            		int StartingIndex = __o_StartingIndex.Default(0);
            		int DrawIndex = __o_DrawIndex.Default(1);
            		int CollideIndex = __o_CollideIndex.Default(1);
            	HX_GC_STACKFRAME(&_hx_pos_36d94048d9e4941f_200_loadMapFromCSV)
HXLINE( 202)		if (::openfl::utils::Assets_obj::exists(MapData,null())) {
HXLINE( 204)			MapData = ::openfl::utils::Assets_obj::getText(MapData);
            		}
HXLINE( 208)		this->_data = ::Array_obj< int >::__new();
HXLINE( 209)		::Array< ::String > columns;
HXLINE( 211)		 ::EReg regex =  ::EReg_obj::__alloc( HX_CTX ,HX_("[ \t]*((\r\n)|\r|\n)[ \t]*",22,2c,8d,6d),HX_("g",67,00,00,00));
HXLINE( 212)		::Array< ::String > lines = regex->split(MapData);
HXLINE( 213)		::Array< ::String > _g = ::Array_obj< ::String >::__new(0);
HXDLIN( 213)		{
HXLINE( 213)			int _g1 = 0;
HXDLIN( 213)			::Array< ::String > _g2 = lines;
HXDLIN( 213)			while((_g1 < _g2->length)){
HXLINE( 213)				::String v = _g2->__get(_g1);
HXDLIN( 213)				_g1 = (_g1 + 1);
HXDLIN( 213)				if ((v != HX_("",00,00,00,00))) {
HXLINE( 213)					_g->push(v);
            				}
            			}
            		}
HXDLIN( 213)		::Array< ::String > rows = _g;
HXLINE( 215)		this->heightInTiles = rows->length;
HXLINE( 216)		this->widthInTiles = 0;
HXLINE( 218)		int row = 0;
HXLINE( 219)		while((row < this->heightInTiles)){
HXLINE( 221)			::String rowString = rows->__get(row);
HXLINE( 222)			if (::StringTools_obj::endsWith(rowString,HX_(",",2c,00,00,00))) {
HXLINE( 223)				rowString = rowString.substr(0,(rowString.length - 1));
            			}
HXLINE( 224)			columns = rowString.split(HX_(",",2c,00,00,00));
HXLINE( 226)			if ((columns->length == 0)) {
HXLINE( 228)				this->heightInTiles--;
HXLINE( 229)				continue;
            			}
HXLINE( 231)			if ((this->widthInTiles == 0)) {
HXLINE( 233)				this->widthInTiles = columns->length;
            			}
HXLINE( 236)			int column = 0;
HXLINE( 237)			while((column < this->widthInTiles)){
HXLINE( 240)				::String columnString = columns->__get(column);
HXLINE( 241)				 ::Dynamic curTile = ::Std_obj::parseInt(columnString);
HXLINE( 243)				if (::hx::IsNull( curTile )) {
HXLINE( 244)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((((((HX_("String in row ",b2,a4,63,43) + row) + HX_(", column ",96,fc,25,5b)) + column) + HX_(" is not a valid integer: \"",44,67,cc,45)) + columnString) + HX_("\"",22,00,00,00))));
            				}
HXLINE( 246)				this->_data->push(curTile);
HXLINE( 247)				column = (column + 1);
            			}
HXLINE( 250)			row = (row + 1);
            		}
HXLINE( 253)		this->loadMapHelper(TileGraphic,TileWidth,TileHeight,AutoTile,StartingIndex,DrawIndex,CollideIndex);
HXLINE( 254)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC8(FlxBaseTilemap_obj,loadMapFromCSV,return )

 ::flixel::tile::FlxBaseTilemap FlxBaseTilemap_obj::loadMapFromArray(::Array< int > MapData,int WidthInTiles,int HeightInTiles, ::Dynamic TileGraphic,::hx::Null< int >  __o_TileWidth,::hx::Null< int >  __o_TileHeight, ::flixel::tile::FlxTilemapAutoTiling AutoTile,::hx::Null< int >  __o_StartingIndex,::hx::Null< int >  __o_DrawIndex,::hx::Null< int >  __o_CollideIndex){
            		int TileWidth = __o_TileWidth.Default(0);
            		int TileHeight = __o_TileHeight.Default(0);
            		int StartingIndex = __o_StartingIndex.Default(0);
            		int DrawIndex = __o_DrawIndex.Default(1);
            		int CollideIndex = __o_CollideIndex.Default(1);
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_279_loadMapFromArray)
HXLINE( 280)		this->widthInTiles = WidthInTiles;
HXLINE( 281)		this->heightInTiles = HeightInTiles;
HXLINE( 282)		this->_data = MapData->copy();
HXLINE( 284)		this->loadMapHelper(TileGraphic,TileWidth,TileHeight,AutoTile,StartingIndex,DrawIndex,CollideIndex);
HXLINE( 285)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC10(FlxBaseTilemap_obj,loadMapFromArray,return )

 ::flixel::tile::FlxBaseTilemap FlxBaseTilemap_obj::loadMapFrom2DArray(::Array< ::Dynamic> MapData, ::Dynamic TileGraphic,::hx::Null< int >  __o_TileWidth,::hx::Null< int >  __o_TileHeight, ::flixel::tile::FlxTilemapAutoTiling AutoTile,::hx::Null< int >  __o_StartingIndex,::hx::Null< int >  __o_DrawIndex,::hx::Null< int >  __o_CollideIndex){
            		int TileWidth = __o_TileWidth.Default(0);
            		int TileHeight = __o_TileHeight.Default(0);
            		int StartingIndex = __o_StartingIndex.Default(0);
            		int DrawIndex = __o_DrawIndex.Default(1);
            		int CollideIndex = __o_CollideIndex.Default(1);
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_308_loadMapFrom2DArray)
HXLINE( 309)		this->widthInTiles = MapData->__get(0).StaticCast< ::Array< int > >()->length;
HXLINE( 310)		this->heightInTiles = MapData->length;
HXLINE( 311)		this->_data = ::flixel::util::FlxArrayUtil_obj::flatten2DArray_Int(MapData);
HXLINE( 313)		this->loadMapHelper(TileGraphic,TileWidth,TileHeight,AutoTile,StartingIndex,DrawIndex,CollideIndex);
HXLINE( 314)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC8(FlxBaseTilemap_obj,loadMapFrom2DArray,return )

 ::flixel::tile::FlxBaseTilemap FlxBaseTilemap_obj::loadMapFromGraphic( ::Dynamic MapGraphic,::hx::Null< bool >  __o_Invert,::hx::Null< int >  __o_Scale,::Array< int > ColorMap, ::Dynamic TileGraphic,::hx::Null< int >  __o_TileWidth,::hx::Null< int >  __o_TileHeight, ::flixel::tile::FlxTilemapAutoTiling AutoTile,::hx::Null< int >  __o_StartingIndex,::hx::Null< int >  __o_DrawIndex,::hx::Null< int >  __o_CollideIndex){
            		bool Invert = __o_Invert.Default(false);
            		int Scale = __o_Scale.Default(1);
            		int TileWidth = __o_TileWidth.Default(0);
            		int TileHeight = __o_TileHeight.Default(0);
            		int StartingIndex = __o_StartingIndex.Default(0);
            		int DrawIndex = __o_DrawIndex.Default(1);
            		int CollideIndex = __o_CollideIndex.Default(1);
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_342_loadMapFromGraphic)
HXLINE( 343)		 ::openfl::display::BitmapData mapBitmap = ::flixel::_hx_system::FlxAssets_obj::resolveBitmapData(MapGraphic);
HXLINE( 344)		::String mapData = ::flixel::util::FlxStringUtil_obj::bitmapToCSV(mapBitmap,Invert,Scale,ColorMap);
HXLINE( 345)		return this->loadMapFromCSV(mapData,TileGraphic,TileWidth,TileHeight,AutoTile,StartingIndex,DrawIndex,CollideIndex);
            	}


HX_DEFINE_DYNAMIC_FUNC11(FlxBaseTilemap_obj,loadMapFromGraphic,return )

void FlxBaseTilemap_obj::loadMapHelper( ::Dynamic TileGraphic,::hx::Null< int >  __o_TileWidth,::hx::Null< int >  __o_TileHeight, ::flixel::tile::FlxTilemapAutoTiling AutoTile,::hx::Null< int >  __o_StartingIndex,::hx::Null< int >  __o_DrawIndex,::hx::Null< int >  __o_CollideIndex){
            		int TileWidth = __o_TileWidth.Default(0);
            		int TileHeight = __o_TileHeight.Default(0);
            		int StartingIndex = __o_StartingIndex.Default(0);
            		int DrawIndex = __o_DrawIndex.Default(1);
            		int CollideIndex = __o_CollideIndex.Default(1);
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_350_loadMapHelper)
HXLINE( 352)		{
HXLINE( 352)			int _g = 0;
HXDLIN( 352)			int _g1 = this->_data->length;
HXDLIN( 352)			while((_g < _g1)){
HXLINE( 352)				_g = (_g + 1);
HXDLIN( 352)				int i = (_g - 1);
HXLINE( 354)				if ((this->_data->__get(i) < 0)) {
HXLINE( 355)					this->_data[i] = 0;
            				}
            			}
            		}
HXLINE( 358)		this->totalTiles = this->_data->length;
HXLINE( 359)		 ::flixel::tile::FlxTilemapAutoTiling _hx_tmp;
HXDLIN( 359)		if (::hx::IsNull( AutoTile )) {
HXLINE( 359)			_hx_tmp = ::flixel::tile::FlxTilemapAutoTiling_obj::OFF_dyn();
            		}
            		else {
HXLINE( 359)			_hx_tmp = AutoTile;
            		}
HXDLIN( 359)		this->_hx_auto = _hx_tmp;
HXLINE( 360)		int _hx_tmp1;
HXDLIN( 360)		if ((StartingIndex <= 0)) {
HXLINE( 360)			_hx_tmp1 = 0;
            		}
            		else {
HXLINE( 360)			_hx_tmp1 = StartingIndex;
            		}
HXDLIN( 360)		this->_startingIndex = _hx_tmp1;
HXLINE( 362)		if (::hx::IsPointerNotEq( this->_hx_auto,::flixel::tile::FlxTilemapAutoTiling_obj::OFF_dyn() )) {
HXLINE( 364)			this->_startingIndex = 1;
HXLINE( 365)			DrawIndex = 1;
HXLINE( 366)			CollideIndex = 1;
            		}
HXLINE( 369)		this->_drawIndex = DrawIndex;
HXLINE( 370)		this->_collideIndex = CollideIndex;
HXLINE( 372)		this->applyAutoTile();
HXLINE( 373)		this->applyCustomRemap();
HXLINE( 374)		this->randomizeIndices();
HXLINE( 375)		this->cacheGraphics(TileWidth,TileHeight,TileGraphic);
HXLINE( 376)		this->postGraphicLoad();
            	}


HX_DEFINE_DYNAMIC_FUNC7(FlxBaseTilemap_obj,loadMapHelper,(void))

void FlxBaseTilemap_obj::postGraphicLoad(){
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_380_postGraphicLoad)
HXLINE( 381)		this->initTileObjects();
HXLINE( 382)		this->computeDimensions();
HXLINE( 383)		this->updateMap();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxBaseTilemap_obj,postGraphicLoad,(void))

void FlxBaseTilemap_obj::applyAutoTile(){
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_389_applyAutoTile)
HXDLIN( 389)		if (::hx::IsPointerNotEq( this->_hx_auto,::flixel::tile::FlxTilemapAutoTiling_obj::OFF_dyn() )) {
HXLINE( 391)			int i = 0;
HXLINE( 392)			while((i < this->totalTiles)){
HXLINE( 394)				i = (i + 1);
HXDLIN( 394)				this->autoTile((i - 1));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxBaseTilemap_obj,applyAutoTile,(void))

void FlxBaseTilemap_obj::applyCustomRemap(){
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_400_applyCustomRemap)
HXLINE( 401)		int i = 0;
HXLINE( 403)		if (::hx::IsNotNull( this->customTileRemap )) {
HXLINE( 405)			while((i < this->totalTiles)){
HXLINE( 407)				int oldIndex = this->_data->__get(i);
HXLINE( 408)				int newIndex = oldIndex;
HXLINE( 409)				if ((oldIndex < this->customTileRemap->length)) {
HXLINE( 411)					newIndex = this->customTileRemap->__get(oldIndex);
            				}
HXLINE( 413)				this->_data[i] = newIndex;
HXLINE( 414)				i = (i + 1);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxBaseTilemap_obj,applyCustomRemap,(void))

void FlxBaseTilemap_obj::randomizeIndices(){
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_420_randomizeIndices)
HXLINE( 421)		int i = 0;
HXLINE( 423)		if (::hx::IsNotNull( this->_randomIndices )) {
HXLINE( 425)			 ::Dynamic randLambda;
HXDLIN( 425)			if (::hx::IsNotNull( this->_randomLambda )) {
HXLINE( 425)				randLambda = this->_randomLambda;
            			}
            			else {
            				HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            				Float _hx_run(){
            					HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_427_randomizeIndices)
HXLINE( 427)					return ::flixel::FlxG_obj::random->_hx_float(null(),null(),null());
            				}
            				HX_END_LOCAL_FUNC0(return)

HXLINE( 425)				randLambda =  ::Dynamic(new _hx_Closure_0());
            			}
HXLINE( 430)			while((i < this->totalTiles)){
HXLINE( 432)				int oldIndex = this->_data->__get(i);
HXLINE( 433)				int j = 0;
HXLINE( 434)				int newIndex = oldIndex;
HXLINE( 435)				{
HXLINE( 435)					int _g = 0;
HXDLIN( 435)					::Array< int > _g1 = this->_randomIndices;
HXDLIN( 435)					while((_g < _g1->length)){
HXLINE( 435)						int rand = _g1->__get(_g);
HXDLIN( 435)						_g = (_g + 1);
HXLINE( 437)						if ((oldIndex == rand)) {
HXLINE( 439)							Float k = ( (Float)(randLambda()) );
HXDLIN( 439)							int k1 = ::Std_obj::_hx_int((k * ( (Float)(this->_randomChoices->__get(j).StaticCast< ::Array< int > >()->length) )));
HXLINE( 440)							newIndex = this->_randomChoices->__get(j).StaticCast< ::Array< int > >()->__get(k1);
            						}
HXLINE( 442)						j = (j + 1);
            					}
            				}
HXLINE( 444)				this->_data[i] = newIndex;
HXLINE( 445)				i = (i + 1);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxBaseTilemap_obj,randomizeIndices,(void))

void FlxBaseTilemap_obj::autoTile(int Index){
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_456_autoTile)
HXLINE( 457)		if ((this->_data->__get(Index) == 0)) {
HXLINE( 459)			return;
            		}
HXLINE( 462)		if (::hx::IsPointerEq( this->_hx_auto,::flixel::tile::FlxTilemapAutoTiling_obj::FULL_dyn() )) {
HXLINE( 464)			this->autoTileFull(Index);
HXLINE( 465)			return;
            		}
HXLINE( 468)		this->_data[Index] = 0;
HXLINE( 471)		bool _hx_tmp;
HXDLIN( 471)		if (((Index - this->widthInTiles) >= 0)) {
HXLINE( 471)			_hx_tmp = (this->_data->__get((Index - this->widthInTiles)) > 0);
            		}
            		else {
HXLINE( 471)			_hx_tmp = true;
            		}
HXDLIN( 471)		if (_hx_tmp) {
HXLINE( 473)			::Array< int > base = this->_data;
HXDLIN( 473)			int Index1 = Index;
HXDLIN( 473)			base[Index1] = (base->__get(Index1) + 1);
            		}
HXLINE( 476)		bool _hx_tmp1;
HXDLIN( 476)		if ((::hx::Mod(Index,this->widthInTiles) < (this->widthInTiles - 1))) {
HXLINE( 476)			_hx_tmp1 = (this->_data->__get((Index + 1)) > 0);
            		}
            		else {
HXLINE( 476)			_hx_tmp1 = true;
            		}
HXDLIN( 476)		if (_hx_tmp1) {
HXLINE( 478)			::Array< int > base = this->_data;
HXDLIN( 478)			int Index1 = Index;
HXDLIN( 478)			base[Index1] = (base->__get(Index1) + 2);
            		}
HXLINE( 481)		bool _hx_tmp2;
HXDLIN( 481)		int _hx_tmp3 = ::Std_obj::_hx_int(( (Float)((Index + this->widthInTiles)) ));
HXDLIN( 481)		if ((_hx_tmp3 < this->totalTiles)) {
HXLINE( 481)			_hx_tmp2 = (this->_data->__get((Index + this->widthInTiles)) > 0);
            		}
            		else {
HXLINE( 481)			_hx_tmp2 = true;
            		}
HXDLIN( 481)		if (_hx_tmp2) {
HXLINE( 483)			::Array< int > base = this->_data;
HXDLIN( 483)			int Index1 = Index;
HXDLIN( 483)			base[Index1] = (base->__get(Index1) + 4);
            		}
HXLINE( 486)		bool _hx_tmp4;
HXDLIN( 486)		if ((::hx::Mod(Index,this->widthInTiles) > 0)) {
HXLINE( 486)			_hx_tmp4 = (this->_data->__get((Index - 1)) > 0);
            		}
            		else {
HXLINE( 486)			_hx_tmp4 = true;
            		}
HXDLIN( 486)		if (_hx_tmp4) {
HXLINE( 488)			::Array< int > base = this->_data;
HXDLIN( 488)			int Index1 = Index;
HXDLIN( 488)			base[Index1] = (base->__get(Index1) + 8);
            		}
HXLINE( 492)		bool _hx_tmp5;
HXDLIN( 492)		if (::hx::IsPointerEq( this->_hx_auto,::flixel::tile::FlxTilemapAutoTiling_obj::ALT_dyn() )) {
HXLINE( 492)			_hx_tmp5 = (this->_data->__get(Index) == 15);
            		}
            		else {
HXLINE( 492)			_hx_tmp5 = false;
            		}
HXDLIN( 492)		if (_hx_tmp5) {
HXLINE( 495)			bool _hx_tmp;
HXDLIN( 495)			bool _hx_tmp1;
HXDLIN( 495)			if ((::hx::Mod(Index,this->widthInTiles) > 0)) {
HXLINE( 495)				int _hx_tmp = ::Std_obj::_hx_int(( (Float)((Index + this->widthInTiles)) ));
HXDLIN( 495)				_hx_tmp1 = (_hx_tmp < this->totalTiles);
            			}
            			else {
HXLINE( 495)				_hx_tmp1 = false;
            			}
HXDLIN( 495)			if (_hx_tmp1) {
HXLINE( 495)				_hx_tmp = (this->_data->__get(((Index + this->widthInTiles) - 1)) <= 0);
            			}
            			else {
HXLINE( 495)				_hx_tmp = false;
            			}
HXDLIN( 495)			if (_hx_tmp) {
HXLINE( 497)				this->_data[Index] = 1;
            			}
HXLINE( 500)			bool _hx_tmp2;
HXDLIN( 500)			bool _hx_tmp3;
HXDLIN( 500)			if ((::hx::Mod(Index,this->widthInTiles) > 0)) {
HXLINE( 500)				_hx_tmp3 = ((Index - this->widthInTiles) >= 0);
            			}
            			else {
HXLINE( 500)				_hx_tmp3 = false;
            			}
HXDLIN( 500)			if (_hx_tmp3) {
HXLINE( 500)				_hx_tmp2 = (this->_data->__get(((Index - this->widthInTiles) - 1)) <= 0);
            			}
            			else {
HXLINE( 500)				_hx_tmp2 = false;
            			}
HXDLIN( 500)			if (_hx_tmp2) {
HXLINE( 502)				this->_data[Index] = 2;
            			}
HXLINE( 505)			bool _hx_tmp4;
HXDLIN( 505)			bool _hx_tmp5;
HXDLIN( 505)			if ((::hx::Mod(Index,this->widthInTiles) < (this->widthInTiles - 1))) {
HXLINE( 505)				_hx_tmp5 = ((Index - this->widthInTiles) >= 0);
            			}
            			else {
HXLINE( 505)				_hx_tmp5 = false;
            			}
HXDLIN( 505)			if (_hx_tmp5) {
HXLINE( 505)				_hx_tmp4 = (this->_data->__get(((Index - this->widthInTiles) + 1)) <= 0);
            			}
            			else {
HXLINE( 505)				_hx_tmp4 = false;
            			}
HXDLIN( 505)			if (_hx_tmp4) {
HXLINE( 507)				this->_data[Index] = 4;
            			}
HXLINE( 510)			bool _hx_tmp6;
HXDLIN( 510)			bool _hx_tmp7;
HXDLIN( 510)			if ((::hx::Mod(Index,this->widthInTiles) < (this->widthInTiles - 1))) {
HXLINE( 511)				int _hx_tmp = ::Std_obj::_hx_int(( (Float)((Index + this->widthInTiles)) ));
HXLINE( 510)				_hx_tmp7 = (_hx_tmp < this->totalTiles);
            			}
            			else {
HXLINE( 510)				_hx_tmp7 = false;
            			}
HXDLIN( 510)			if (_hx_tmp7) {
HXLINE( 510)				_hx_tmp6 = (this->_data->__get(((Index + this->widthInTiles) + 1)) <= 0);
            			}
            			else {
HXLINE( 510)				_hx_tmp6 = false;
            			}
HXDLIN( 510)			if (_hx_tmp6) {
HXLINE( 514)				this->_data[Index] = 8;
            			}
            		}
HXLINE( 518)		::Array< int > base = this->_data;
HXDLIN( 518)		int Index1 = Index;
HXDLIN( 518)		base[Index1] = (base->__get(Index1) + 1);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseTilemap_obj,autoTile,(void))

void FlxBaseTilemap_obj::autoTileFull(int Index){
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_527_autoTileFull)
HXLINE( 528)		this->_data[Index] = 0;
HXLINE( 530)		bool wallUp = ((Index - this->widthInTiles) < 0);
HXLINE( 531)		bool wallRight = (::hx::Mod(Index,this->widthInTiles) >= (this->widthInTiles - 1));
HXLINE( 532)		int wallDown = ::Std_obj::_hx_int(( (Float)((Index + this->widthInTiles)) ));
HXDLIN( 532)		bool wallDown1 = (wallDown >= this->totalTiles);
HXLINE( 533)		bool wallLeft = (::hx::Mod(Index,this->widthInTiles) <= 0);
HXLINE( 535)		bool up;
HXDLIN( 535)		if (!(wallUp)) {
HXLINE( 535)			up = (this->_data->__get((Index - this->widthInTiles)) > 0);
            		}
            		else {
HXLINE( 535)			up = true;
            		}
HXLINE( 536)		bool upRight;
HXDLIN( 536)		bool upRight1;
HXDLIN( 536)		if (!(wallUp)) {
HXLINE( 536)			upRight1 = wallRight;
            		}
            		else {
HXLINE( 536)			upRight1 = true;
            		}
HXDLIN( 536)		if (!(upRight1)) {
HXLINE( 536)			upRight = (this->_data->__get(((Index - this->widthInTiles) + 1)) > 0);
            		}
            		else {
HXLINE( 536)			upRight = true;
            		}
HXLINE( 537)		bool right;
HXDLIN( 537)		if (!(wallRight)) {
HXLINE( 537)			right = (this->_data->__get((Index + 1)) > 0);
            		}
            		else {
HXLINE( 537)			right = true;
            		}
HXLINE( 538)		bool rightDown;
HXDLIN( 538)		bool rightDown1;
HXDLIN( 538)		if (!(wallRight)) {
HXLINE( 538)			rightDown1 = wallDown1;
            		}
            		else {
HXLINE( 538)			rightDown1 = true;
            		}
HXDLIN( 538)		if (!(rightDown1)) {
HXLINE( 538)			rightDown = (this->_data->__get(((Index + this->widthInTiles) + 1)) > 0);
            		}
            		else {
HXLINE( 538)			rightDown = true;
            		}
HXLINE( 539)		bool down;
HXDLIN( 539)		if (!(wallDown1)) {
HXLINE( 539)			down = (this->_data->__get((Index + this->widthInTiles)) > 0);
            		}
            		else {
HXLINE( 539)			down = true;
            		}
HXLINE( 540)		bool downLeft;
HXDLIN( 540)		bool downLeft1;
HXDLIN( 540)		if (!(wallDown1)) {
HXLINE( 540)			downLeft1 = wallLeft;
            		}
            		else {
HXLINE( 540)			downLeft1 = true;
            		}
HXDLIN( 540)		if (!(downLeft1)) {
HXLINE( 540)			downLeft = (this->_data->__get(((Index + this->widthInTiles) - 1)) > 0);
            		}
            		else {
HXLINE( 540)			downLeft = true;
            		}
HXLINE( 541)		bool left;
HXDLIN( 541)		if (!(wallLeft)) {
HXLINE( 541)			left = (this->_data->__get((Index - 1)) > 0);
            		}
            		else {
HXLINE( 541)			left = true;
            		}
HXLINE( 542)		bool leftUp;
HXDLIN( 542)		bool leftUp1;
HXDLIN( 542)		if (!(wallLeft)) {
HXLINE( 542)			leftUp1 = wallUp;
            		}
            		else {
HXLINE( 542)			leftUp1 = true;
            		}
HXDLIN( 542)		if (!(leftUp1)) {
HXLINE( 542)			leftUp = (this->_data->__get(((Index - this->widthInTiles) - 1)) > 0);
            		}
            		else {
HXLINE( 542)			leftUp = true;
            		}
HXLINE( 544)		if (up) {
HXLINE( 545)			::Array< int > base = this->_data;
HXDLIN( 545)			int Index1 = Index;
HXDLIN( 545)			base[Index1] = (base->__get(Index1) + 1);
            		}
HXLINE( 546)		bool _hx_tmp;
HXDLIN( 546)		bool _hx_tmp1;
HXDLIN( 546)		if (upRight) {
HXLINE( 546)			_hx_tmp1 = up;
            		}
            		else {
HXLINE( 546)			_hx_tmp1 = false;
            		}
HXDLIN( 546)		if (_hx_tmp1) {
HXLINE( 546)			_hx_tmp = right;
            		}
            		else {
HXLINE( 546)			_hx_tmp = false;
            		}
HXDLIN( 546)		if (_hx_tmp) {
HXLINE( 547)			::Array< int > base = this->_data;
HXDLIN( 547)			int Index1 = Index;
HXDLIN( 547)			base[Index1] = (base->__get(Index1) + 2);
            		}
HXLINE( 548)		if (right) {
HXLINE( 549)			::Array< int > base = this->_data;
HXDLIN( 549)			int Index1 = Index;
HXDLIN( 549)			base[Index1] = (base->__get(Index1) + 4);
            		}
HXLINE( 550)		bool _hx_tmp2;
HXDLIN( 550)		bool _hx_tmp3;
HXDLIN( 550)		if (rightDown) {
HXLINE( 550)			_hx_tmp3 = right;
            		}
            		else {
HXLINE( 550)			_hx_tmp3 = false;
            		}
HXDLIN( 550)		if (_hx_tmp3) {
HXLINE( 550)			_hx_tmp2 = down;
            		}
            		else {
HXLINE( 550)			_hx_tmp2 = false;
            		}
HXDLIN( 550)		if (_hx_tmp2) {
HXLINE( 551)			::Array< int > base = this->_data;
HXDLIN( 551)			int Index1 = Index;
HXDLIN( 551)			base[Index1] = (base->__get(Index1) + 8);
            		}
HXLINE( 552)		if (down) {
HXLINE( 553)			::Array< int > base = this->_data;
HXDLIN( 553)			int Index1 = Index;
HXDLIN( 553)			base[Index1] = (base->__get(Index1) + 16);
            		}
HXLINE( 554)		bool _hx_tmp4;
HXDLIN( 554)		bool _hx_tmp5;
HXDLIN( 554)		if (downLeft) {
HXLINE( 554)			_hx_tmp5 = down;
            		}
            		else {
HXLINE( 554)			_hx_tmp5 = false;
            		}
HXDLIN( 554)		if (_hx_tmp5) {
HXLINE( 554)			_hx_tmp4 = left;
            		}
            		else {
HXLINE( 554)			_hx_tmp4 = false;
            		}
HXDLIN( 554)		if (_hx_tmp4) {
HXLINE( 555)			::Array< int > base = this->_data;
HXDLIN( 555)			int Index1 = Index;
HXDLIN( 555)			base[Index1] = (base->__get(Index1) + 32);
            		}
HXLINE( 556)		if (left) {
HXLINE( 557)			::Array< int > base = this->_data;
HXDLIN( 557)			int Index1 = Index;
HXDLIN( 557)			base[Index1] = (base->__get(Index1) + 64);
            		}
HXLINE( 558)		bool _hx_tmp6;
HXDLIN( 558)		bool _hx_tmp7;
HXDLIN( 558)		if (leftUp) {
HXLINE( 558)			_hx_tmp7 = left;
            		}
            		else {
HXLINE( 558)			_hx_tmp7 = false;
            		}
HXDLIN( 558)		if (_hx_tmp7) {
HXLINE( 558)			_hx_tmp6 = up;
            		}
            		else {
HXLINE( 558)			_hx_tmp6 = false;
            		}
HXDLIN( 558)		if (_hx_tmp6) {
HXLINE( 559)			::Array< int > base = this->_data;
HXDLIN( 559)			int Index1 = Index;
HXDLIN( 559)			base[Index1] = (base->__get(Index1) + 128);
            		}
HXLINE( 561)		::Array< int > base = this->_data;
HXDLIN( 561)		int Index1 = Index;
HXDLIN( 561)		base[Index1] = (base->__get(Index1) - (::flixel::tile::FlxBaseTilemap_obj::offsetAutoTile->__get(this->_data->__get(Index)) - 1));
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseTilemap_obj,autoTileFull,(void))

void FlxBaseTilemap_obj::setCustomTileMappings(::Array< int > mappings,::Array< int > randomIndices,::Array< ::Dynamic> randomChoices, ::Dynamic randomLambda){
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_574_setCustomTileMappings)
HXLINE( 575)		this->customTileRemap = mappings;
HXLINE( 576)		this->_randomIndices = randomIndices;
HXLINE( 577)		this->_randomChoices = randomChoices;
HXLINE( 578)		this->_randomLambda = randomLambda;
HXLINE( 581)		bool _hx_tmp;
HXDLIN( 581)		if (::hx::IsNotNull( this->_randomIndices )) {
HXLINE( 581)			if (::hx::IsNotNull( this->_randomChoices )) {
HXLINE( 581)				_hx_tmp = (this->_randomChoices->length == 0);
            			}
            			else {
HXLINE( 581)				_hx_tmp = true;
            			}
            		}
            		else {
HXLINE( 581)			_hx_tmp = false;
            		}
HXDLIN( 581)		if (_hx_tmp) {
HXLINE( 583)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("You must provide valid 'randomChoices' if you wish to randomize tilemap indices, please read documentation of 'setCustomTileMappings' function.",b3,ce,50,22)));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxBaseTilemap_obj,setCustomTileMappings,(void))

int FlxBaseTilemap_obj::getTile(int X,int Y){
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_596_getTile)
HXDLIN( 596)		return this->_data->__get(((Y * this->widthInTiles) + X));
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxBaseTilemap_obj,getTile,return )

int FlxBaseTilemap_obj::getTileByIndex(int Index){
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_607_getTileByIndex)
HXDLIN( 607)		return this->_data->__get(Index);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseTilemap_obj,getTileByIndex,return )

int FlxBaseTilemap_obj::getTileCollisions(int Index){
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_618_getTileCollisions)
HXDLIN( 618)		return ( ( ::flixel::FlxObject)(this->_tileObjects->__get(Index)) )->allowCollisions;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseTilemap_obj,getTileCollisions,return )

::Array< int > FlxBaseTilemap_obj::getTileInstances(int Index){
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_628_getTileInstances)
HXLINE( 629)		::Array< int > array = null();
HXLINE( 630)		int i = 0;
HXLINE( 631)		int l = (this->widthInTiles * this->heightInTiles);
HXLINE( 633)		while((i < l)){
HXLINE( 635)			if ((this->_data->__get(i) == Index)) {
HXLINE( 637)				if (::hx::IsNull( array )) {
HXLINE( 639)					array = ::Array_obj< int >::__new(0);
            				}
HXLINE( 641)				array->push(i);
            			}
HXLINE( 643)			i = (i + 1);
            		}
HXLINE( 646)		return array;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseTilemap_obj,getTileInstances,return )

bool FlxBaseTilemap_obj::setTile(int X,int Y,int Tile,::hx::Null< bool >  __o_UpdateGraphics){
            		bool UpdateGraphics = __o_UpdateGraphics.Default(true);
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_659_setTile)
HXLINE( 660)		bool _hx_tmp;
HXDLIN( 660)		if ((X < this->widthInTiles)) {
HXLINE( 660)			_hx_tmp = (Y >= this->heightInTiles);
            		}
            		else {
HXLINE( 660)			_hx_tmp = true;
            		}
HXDLIN( 660)		if (_hx_tmp) {
HXLINE( 662)			return false;
            		}
HXLINE( 665)		return this->setTileByIndex(((Y * this->widthInTiles) + X),Tile,UpdateGraphics);
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxBaseTilemap_obj,setTile,return )

bool FlxBaseTilemap_obj::setTileByIndex(int Index,int Tile,::hx::Null< bool >  __o_UpdateGraphics){
            		bool UpdateGraphics = __o_UpdateGraphics.Default(true);
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_677_setTileByIndex)
HXLINE( 678)		if ((Index >= this->_data->length)) {
HXLINE( 680)			return false;
            		}
HXLINE( 683)		bool ok = true;
HXLINE( 684)		this->_data[Index] = Tile;
HXLINE( 686)		if (!(UpdateGraphics)) {
HXLINE( 688)			return ok;
            		}
HXLINE( 691)		this->setDirty(null());
HXLINE( 693)		if (::hx::IsPointerEq( this->_hx_auto,::flixel::tile::FlxTilemapAutoTiling_obj::OFF_dyn() )) {
HXLINE( 695)			this->updateTile(this->_data->__get(Index));
HXLINE( 696)			return ok;
            		}
HXLINE( 700)		int i;
HXLINE( 701)		int row = (::Std_obj::_hx_int((( (Float)(Index) ) / ( (Float)(this->widthInTiles) ))) - 1);
HXLINE( 702)		int rowLength = (row + 3);
HXLINE( 703)		int column = (::hx::Mod(Index,this->widthInTiles) - 1);
HXLINE( 704)		int columnHeight = (column + 3);
HXLINE( 706)		while((row < rowLength)){
HXLINE( 708)			column = (columnHeight - 3);
HXLINE( 710)			while((column < columnHeight)){
HXLINE( 712)				bool _hx_tmp;
HXDLIN( 712)				bool _hx_tmp1;
HXDLIN( 712)				bool _hx_tmp2;
HXDLIN( 712)				if ((row >= 0)) {
HXLINE( 712)					_hx_tmp2 = (row < this->heightInTiles);
            				}
            				else {
HXLINE( 712)					_hx_tmp2 = false;
            				}
HXDLIN( 712)				if (_hx_tmp2) {
HXLINE( 712)					_hx_tmp1 = (column >= 0);
            				}
            				else {
HXLINE( 712)					_hx_tmp1 = false;
            				}
HXDLIN( 712)				if (_hx_tmp1) {
HXLINE( 712)					_hx_tmp = (column < this->widthInTiles);
            				}
            				else {
HXLINE( 712)					_hx_tmp = false;
            				}
HXDLIN( 712)				if (_hx_tmp) {
HXLINE( 714)					i = ((row * this->widthInTiles) + column);
HXLINE( 715)					this->autoTile(i);
HXLINE( 716)					this->updateTile(this->_data->__get(i));
            				}
HXLINE( 718)				column = (column + 1);
            			}
HXLINE( 720)			row = (row + 1);
            		}
HXLINE( 723)		return ok;
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxBaseTilemap_obj,setTileByIndex,return )

void FlxBaseTilemap_obj::setTileProperties(int Tile,::hx::Null< int >  __o_AllowCollisions, ::Dynamic Callback,::hx::Class CallbackFilter,::hx::Null< int >  __o_Range){
            		int AllowCollisions = __o_AllowCollisions.Default(4369);
            		int Range = __o_Range.Default(1);
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_738_setTileProperties)
HXLINE( 739)		if ((Range <= 0)) {
HXLINE( 741)			Range = 1;
            		}
HXLINE( 744)		 ::Dynamic tile;
HXLINE( 745)		int i = Tile;
HXLINE( 746)		int l = (Tile + Range);
HXLINE( 748)		int maxIndex = this->_tileObjects->get_length();
HXLINE( 749)		if ((l > maxIndex)) {
HXLINE( 751)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((((((((HX_("Index ",ee,88,87,c8) + l) + HX_(" exceeds the maximum tile index of ",d9,51,06,f4)) + maxIndex) + HX_(". Please verify the Tile (",88,d4,6b,e3)) + Tile) + HX_(") and Range (",25,ce,96,19)) + Range) + HX_(") parameters.",cd,e3,29,61))));
            		}
HXLINE( 754)		while((i < l)){
HXLINE( 756)			i = (i + 1);
HXDLIN( 756)			tile = this->_tileObjects->__get((i - 1));
HXLINE( 757)			( ( ::flixel::FlxObject)(tile) )->set_allowCollisions(AllowCollisions);
HXLINE( 758)			tile->__SetField(HX_("callbackFunction",fd,cd,91,7e),Callback,::hx::paccDynamic);
HXLINE( 759)			tile->__SetField(HX_("filter",b8,1f,35,85),CallbackFilter,::hx::paccDynamic);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC5(FlxBaseTilemap_obj,setTileProperties,(void))

::Array< int > FlxBaseTilemap_obj::getData(::hx::Null< bool >  __o_Simple){
            		bool Simple = __o_Simple.Default(false);
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_771_getData)
HXLINE( 772)		if (!(Simple)) {
HXLINE( 774)			return this->_data;
            		}
HXLINE( 777)		int i = 0;
HXLINE( 778)		int l = this->_data->length;
HXLINE( 779)		::Array< int > data = ::Array_obj< int >::__new();
HXLINE( 780)		::flixel::util::FlxArrayUtil_obj::setLength_Int(data,l);
HXLINE( 782)		while((i < l)){
HXLINE( 784)			int _hx_tmp;
HXDLIN( 784)			if ((( ( ::flixel::FlxObject)(this->_tileObjects->__get(this->_data->__get(i))) )->allowCollisions > 0)) {
HXLINE( 784)				_hx_tmp = 1;
            			}
            			else {
HXLINE( 784)				_hx_tmp = 0;
            			}
HXDLIN( 784)			data[i] = _hx_tmp;
HXLINE( 785)			i = (i + 1);
            		}
HXLINE( 788)		return data;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseTilemap_obj,getData,return )

::Array< ::Dynamic> FlxBaseTilemap_obj::findPath( ::flixel::math::FlxPoint Start, ::flixel::math::FlxPoint End,::hx::Null< bool >  __o_Simplify,::hx::Null< bool >  __o_RaySimplify,::hx::Null< int >  __o_DiagonalPolicy){
            		bool Simplify = __o_Simplify.Default(true);
            		bool RaySimplify = __o_RaySimplify.Default(false);
            		int DiagonalPolicy = __o_DiagonalPolicy.Default(2);
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_804_findPath)
HXLINE( 806)		int startIndex = this->getTileIndexByCoords(Start);
HXLINE( 807)		int endIndex = this->getTileIndexByCoords(End);
HXLINE( 810)		bool _hx_tmp;
HXDLIN( 810)		if ((startIndex >= 0)) {
HXLINE( 810)			_hx_tmp = (endIndex < 0);
            		}
            		else {
HXLINE( 810)			_hx_tmp = true;
            		}
HXDLIN( 810)		if (_hx_tmp) {
HXLINE( 811)			return null();
            		}
HXLINE( 814)		bool _hx_tmp1;
HXDLIN( 814)		if (!((( ( ::flixel::FlxObject)(this->_tileObjects->__get(this->_data->__get(startIndex))) )->allowCollisions > 0))) {
HXLINE( 814)			_hx_tmp1 = (( ( ::flixel::FlxObject)(this->_tileObjects->__get(this->_data->__get(endIndex))) )->allowCollisions > 0);
            		}
            		else {
HXLINE( 814)			_hx_tmp1 = true;
            		}
HXDLIN( 814)		if (_hx_tmp1) {
HXLINE( 816)			return null();
            		}
HXLINE( 820)		::Array< int > distances = this->computePathDistance(startIndex,endIndex,DiagonalPolicy,null());
HXLINE( 822)		if (::hx::IsNull( distances )) {
HXLINE( 824)			return null();
            		}
HXLINE( 828)		::Array< ::Dynamic> points = ::Array_obj< ::Dynamic>::__new();
HXLINE( 829)		this->walkPath(distances,endIndex,points);
HXLINE( 832)		 ::flixel::math::FlxPoint node = points->__get((points->length - 1)).StaticCast<  ::flixel::math::FlxPoint >();
HXLINE( 834)		{
HXLINE( 834)			node->set_x(Start->x);
HXDLIN( 834)			node->set_y(Start->y);
HXDLIN( 834)			if (Start->_weak) {
HXLINE( 834)				Start->put();
            			}
            		}
HXLINE( 835)		node = points->__get(0).StaticCast<  ::flixel::math::FlxPoint >();
HXLINE( 836)		{
HXLINE( 836)			node->set_x(End->x);
HXDLIN( 836)			node->set_y(End->y);
HXDLIN( 836)			if (End->_weak) {
HXLINE( 836)				End->put();
            			}
            		}
HXLINE( 839)		if (Simplify) {
HXLINE( 841)			this->simplifyPath(points);
            		}
HXLINE( 843)		if (RaySimplify) {
HXLINE( 845)			this->raySimplifyPath(points);
            		}
HXLINE( 849)		::Array< ::Dynamic> path = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 850)		int i = (points->length - 1);
HXLINE( 852)		while((i >= 0)){
HXLINE( 854)			i = (i - 1);
HXDLIN( 854)			node = points->__get((i + 1)).StaticCast<  ::flixel::math::FlxPoint >();
HXLINE( 856)			if (::hx::IsNotNull( node )) {
HXLINE( 858)				path->push(node);
            			}
            		}
HXLINE( 862)		return path;
            	}


HX_DEFINE_DYNAMIC_FUNC5(FlxBaseTilemap_obj,findPath,return )

::Array< int > FlxBaseTilemap_obj::computePathDistance(int StartIndex,int EndIndex,int DiagonalPolicy,::hx::Null< bool >  __o_StopOnEnd){
            		bool StopOnEnd = __o_StopOnEnd.Default(true);
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_876_computePathDistance)
HXLINE( 879)		int mapSize = (this->widthInTiles * this->heightInTiles);
HXLINE( 880)		::Array< int > distances = ::Array_obj< int >::__new();
HXLINE( 881)		::flixel::util::FlxArrayUtil_obj::setLength_Int(distances,mapSize);
HXLINE( 882)		int i = 0;
HXLINE( 884)		while((i < mapSize)){
HXLINE( 886)			if ((( ( ::flixel::FlxObject)(this->_tileObjects->__get(this->_data->__get(i))) )->allowCollisions != 0)) {
HXLINE( 888)				distances[i] = -2;
            			}
            			else {
HXLINE( 892)				distances[i] = -1;
            			}
HXLINE( 894)			i = (i + 1);
            		}
HXLINE( 897)		distances[StartIndex] = 0;
HXLINE( 898)		int distance = 1;
HXLINE( 899)		::Array< int > neighbors = ::Array_obj< int >::__new(1)->init(0,StartIndex);
HXLINE( 900)		::Array< int > current;
HXLINE( 901)		int currentIndex;
HXLINE( 902)		bool left;
HXLINE( 903)		bool right;
HXLINE( 904)		bool up;
HXLINE( 905)		bool down;
HXLINE( 906)		int currentLength;
HXLINE( 907)		bool foundEnd = false;
HXLINE( 909)		while((neighbors->length > 0)){
HXLINE( 911)			current = neighbors;
HXLINE( 912)			neighbors = ::Array_obj< int >::__new();
HXLINE( 914)			i = 0;
HXLINE( 915)			currentLength = current->length;
HXLINE( 916)			while((i < currentLength)){
HXLINE( 918)				i = (i + 1);
HXDLIN( 918)				currentIndex = current->__get((i - 1));
HXLINE( 920)				if ((currentIndex == ::Std_obj::_hx_int(( (Float)(EndIndex) )))) {
HXLINE( 922)					foundEnd = true;
HXLINE( 923)					if (StopOnEnd) {
HXLINE( 925)						neighbors = ::Array_obj< int >::__new(0);
HXLINE( 926)						goto _hx_goto_50;
            					}
            				}
HXLINE( 931)				left = (::hx::Mod(currentIndex,this->widthInTiles) > 0);
HXLINE( 932)				right = (::hx::Mod(currentIndex,this->widthInTiles) < (this->widthInTiles - 1));
HXLINE( 933)				up = ((( (Float)(currentIndex) ) / ( (Float)(this->widthInTiles) )) > 0);
HXLINE( 934)				down = ((( (Float)(currentIndex) ) / ( (Float)(this->widthInTiles) )) < (this->heightInTiles - 1));
HXLINE( 936)				int index;
HXLINE( 938)				if (up) {
HXLINE( 940)					index = (currentIndex - this->widthInTiles);
HXLINE( 942)					if ((distances->__get(index) == -1)) {
HXLINE( 944)						distances[index] = distance;
HXLINE( 945)						neighbors->push(index);
            					}
            				}
HXLINE( 948)				if (right) {
HXLINE( 950)					index = (currentIndex + 1);
HXLINE( 952)					if ((distances->__get(index) == -1)) {
HXLINE( 954)						distances[index] = distance;
HXLINE( 955)						neighbors->push(index);
            					}
            				}
HXLINE( 958)				if (down) {
HXLINE( 960)					index = (currentIndex + this->widthInTiles);
HXLINE( 962)					if ((distances->__get(index) == -1)) {
HXLINE( 964)						distances[index] = distance;
HXLINE( 965)						neighbors->push(index);
            					}
            				}
HXLINE( 968)				if (left) {
HXLINE( 970)					index = (currentIndex - 1);
HXLINE( 972)					if ((distances->__get(index) == -1)) {
HXLINE( 974)						distances[index] = distance;
HXLINE( 975)						neighbors->push(index);
            					}
            				}
HXLINE( 979)				if ((DiagonalPolicy != 0)) {
HXLINE( 981)					bool wideDiagonal = (DiagonalPolicy == 2);
HXLINE( 982)					bool _hx_tmp;
HXDLIN( 982)					if (up) {
HXLINE( 982)						_hx_tmp = right;
            					}
            					else {
HXLINE( 982)						_hx_tmp = false;
            					}
HXDLIN( 982)					if (_hx_tmp) {
HXLINE( 984)						index = ((currentIndex - this->widthInTiles) + 1);
HXLINE( 986)						bool _hx_tmp;
HXDLIN( 986)						bool _hx_tmp1;
HXDLIN( 986)						bool _hx_tmp2;
HXDLIN( 986)						if (wideDiagonal) {
HXLINE( 986)							_hx_tmp2 = (distances->__get(index) == -1);
            						}
            						else {
HXLINE( 986)							_hx_tmp2 = false;
            						}
HXDLIN( 986)						if (_hx_tmp2) {
HXLINE( 986)							_hx_tmp1 = (distances->__get((currentIndex - this->widthInTiles)) >= -1);
            						}
            						else {
HXLINE( 986)							_hx_tmp1 = false;
            						}
HXDLIN( 986)						if (_hx_tmp1) {
HXLINE( 986)							_hx_tmp = (distances->__get((currentIndex + 1)) >= -1);
            						}
            						else {
HXLINE( 986)							_hx_tmp = false;
            						}
HXDLIN( 986)						if (_hx_tmp) {
HXLINE( 991)							distances[index] = distance;
HXLINE( 992)							neighbors->push(index);
            						}
            						else {
HXLINE( 994)							bool _hx_tmp;
HXDLIN( 994)							if (!(wideDiagonal)) {
HXLINE( 994)								_hx_tmp = (distances->__get(index) == -1);
            							}
            							else {
HXLINE( 994)								_hx_tmp = false;
            							}
HXDLIN( 994)							if (_hx_tmp) {
HXLINE( 996)								distances[index] = distance;
HXLINE( 997)								neighbors->push(index);
            							}
            						}
            					}
HXLINE(1000)					bool _hx_tmp1;
HXDLIN(1000)					if (right) {
HXLINE(1000)						_hx_tmp1 = down;
            					}
            					else {
HXLINE(1000)						_hx_tmp1 = false;
            					}
HXDLIN(1000)					if (_hx_tmp1) {
HXLINE(1002)						index = ((currentIndex + this->widthInTiles) + 1);
HXLINE(1004)						bool _hx_tmp;
HXDLIN(1004)						bool _hx_tmp1;
HXDLIN(1004)						bool _hx_tmp2;
HXDLIN(1004)						if (wideDiagonal) {
HXLINE(1004)							_hx_tmp2 = (distances->__get(index) == -1);
            						}
            						else {
HXLINE(1004)							_hx_tmp2 = false;
            						}
HXDLIN(1004)						if (_hx_tmp2) {
HXLINE(1004)							_hx_tmp1 = (distances->__get((currentIndex + this->widthInTiles)) >= -1);
            						}
            						else {
HXLINE(1004)							_hx_tmp1 = false;
            						}
HXDLIN(1004)						if (_hx_tmp1) {
HXLINE(1004)							_hx_tmp = (distances->__get((currentIndex + 1)) >= -1);
            						}
            						else {
HXLINE(1004)							_hx_tmp = false;
            						}
HXDLIN(1004)						if (_hx_tmp) {
HXLINE(1009)							distances[index] = distance;
HXLINE(1010)							neighbors->push(index);
            						}
            						else {
HXLINE(1012)							bool _hx_tmp;
HXDLIN(1012)							if (!(wideDiagonal)) {
HXLINE(1012)								_hx_tmp = (distances->__get(index) == -1);
            							}
            							else {
HXLINE(1012)								_hx_tmp = false;
            							}
HXDLIN(1012)							if (_hx_tmp) {
HXLINE(1014)								distances[index] = distance;
HXLINE(1015)								neighbors->push(index);
            							}
            						}
            					}
HXLINE(1018)					bool _hx_tmp2;
HXDLIN(1018)					if (left) {
HXLINE(1018)						_hx_tmp2 = down;
            					}
            					else {
HXLINE(1018)						_hx_tmp2 = false;
            					}
HXDLIN(1018)					if (_hx_tmp2) {
HXLINE(1020)						index = ((currentIndex + this->widthInTiles) - 1);
HXLINE(1022)						bool _hx_tmp;
HXDLIN(1022)						bool _hx_tmp1;
HXDLIN(1022)						bool _hx_tmp2;
HXDLIN(1022)						if (wideDiagonal) {
HXLINE(1022)							_hx_tmp2 = (distances->__get(index) == -1);
            						}
            						else {
HXLINE(1022)							_hx_tmp2 = false;
            						}
HXDLIN(1022)						if (_hx_tmp2) {
HXLINE(1022)							_hx_tmp1 = (distances->__get((currentIndex + this->widthInTiles)) >= -1);
            						}
            						else {
HXLINE(1022)							_hx_tmp1 = false;
            						}
HXDLIN(1022)						if (_hx_tmp1) {
HXLINE(1022)							_hx_tmp = (distances->__get((currentIndex - 1)) >= -1);
            						}
            						else {
HXLINE(1022)							_hx_tmp = false;
            						}
HXDLIN(1022)						if (_hx_tmp) {
HXLINE(1027)							distances[index] = distance;
HXLINE(1028)							neighbors->push(index);
            						}
            						else {
HXLINE(1030)							bool _hx_tmp;
HXDLIN(1030)							if (!(wideDiagonal)) {
HXLINE(1030)								_hx_tmp = (distances->__get(index) == -1);
            							}
            							else {
HXLINE(1030)								_hx_tmp = false;
            							}
HXDLIN(1030)							if (_hx_tmp) {
HXLINE(1032)								distances[index] = distance;
HXLINE(1033)								neighbors->push(index);
            							}
            						}
            					}
HXLINE(1036)					bool _hx_tmp3;
HXDLIN(1036)					if (up) {
HXLINE(1036)						_hx_tmp3 = left;
            					}
            					else {
HXLINE(1036)						_hx_tmp3 = false;
            					}
HXDLIN(1036)					if (_hx_tmp3) {
HXLINE(1038)						index = ((currentIndex - this->widthInTiles) - 1);
HXLINE(1040)						bool _hx_tmp;
HXDLIN(1040)						bool _hx_tmp1;
HXDLIN(1040)						bool _hx_tmp2;
HXDLIN(1040)						if (wideDiagonal) {
HXLINE(1040)							_hx_tmp2 = (distances->__get(index) == -1);
            						}
            						else {
HXLINE(1040)							_hx_tmp2 = false;
            						}
HXDLIN(1040)						if (_hx_tmp2) {
HXLINE(1040)							_hx_tmp1 = (distances->__get((currentIndex - this->widthInTiles)) >= -1);
            						}
            						else {
HXLINE(1040)							_hx_tmp1 = false;
            						}
HXDLIN(1040)						if (_hx_tmp1) {
HXLINE(1040)							_hx_tmp = (distances->__get((currentIndex - 1)) >= -1);
            						}
            						else {
HXLINE(1040)							_hx_tmp = false;
            						}
HXDLIN(1040)						if (_hx_tmp) {
HXLINE(1045)							distances[index] = distance;
HXLINE(1046)							neighbors->push(index);
            						}
            						else {
HXLINE(1048)							bool _hx_tmp;
HXDLIN(1048)							if (!(wideDiagonal)) {
HXLINE(1048)								_hx_tmp = (distances->__get(index) == -1);
            							}
            							else {
HXLINE(1048)								_hx_tmp = false;
            							}
HXDLIN(1048)							if (_hx_tmp) {
HXLINE(1050)								distances[index] = distance;
HXLINE(1051)								neighbors->push(index);
            							}
            						}
            					}
            				}
            			}
            			_hx_goto_50:;
HXLINE(1057)			distance = (distance + 1);
            		}
HXLINE(1059)		if (!(foundEnd)) {
HXLINE(1061)			distances = null();
            		}
HXLINE(1064)		return distances;
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxBaseTilemap_obj,computePathDistance,return )

void FlxBaseTilemap_obj::walkPath(::Array< int > Data,int Start,::Array< ::Dynamic> Points){
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_1075_walkPath)
HXLINE(1076)		Points->push(this->getTileCoordsByIndex(Start,null()));
HXLINE(1078)		if ((Data->__get(Start) == 0)) {
HXLINE(1080)			return;
            		}
HXLINE(1084)		bool left = (::hx::Mod(Start,this->widthInTiles) > 0);
HXLINE(1085)		bool right = (::hx::Mod(Start,this->widthInTiles) < (this->widthInTiles - 1));
HXLINE(1086)		bool up = ((( (Float)(Start) ) / ( (Float)(this->widthInTiles) )) > 0);
HXLINE(1087)		bool down = ((( (Float)(Start) ) / ( (Float)(this->widthInTiles) )) < (this->heightInTiles - 1));
HXLINE(1089)		int current = Data->__get(Start);
HXLINE(1090)		int i;
HXLINE(1092)		if (up) {
HXLINE(1094)			i = (Start - this->widthInTiles);
HXLINE(1096)			bool _hx_tmp;
HXDLIN(1096)			bool _hx_tmp1;
HXDLIN(1096)			if ((i >= 0)) {
HXLINE(1096)				_hx_tmp1 = (Data->__get(i) >= 0);
            			}
            			else {
HXLINE(1096)				_hx_tmp1 = false;
            			}
HXDLIN(1096)			if (_hx_tmp1) {
HXLINE(1096)				_hx_tmp = (Data->__get(i) < current);
            			}
            			else {
HXLINE(1096)				_hx_tmp = false;
            			}
HXDLIN(1096)			if (_hx_tmp) {
HXLINE(1098)				this->walkPath(Data,i,Points);
HXDLIN(1098)				return;
            			}
            		}
HXLINE(1101)		if (right) {
HXLINE(1103)			i = (Start + 1);
HXLINE(1105)			bool _hx_tmp;
HXDLIN(1105)			bool _hx_tmp1;
HXDLIN(1105)			if ((i >= 0)) {
HXLINE(1105)				_hx_tmp1 = (Data->__get(i) >= 0);
            			}
            			else {
HXLINE(1105)				_hx_tmp1 = false;
            			}
HXDLIN(1105)			if (_hx_tmp1) {
HXLINE(1105)				_hx_tmp = (Data->__get(i) < current);
            			}
            			else {
HXLINE(1105)				_hx_tmp = false;
            			}
HXDLIN(1105)			if (_hx_tmp) {
HXLINE(1107)				this->walkPath(Data,i,Points);
HXDLIN(1107)				return;
            			}
            		}
HXLINE(1110)		if (down) {
HXLINE(1112)			i = (Start + this->widthInTiles);
HXLINE(1114)			bool _hx_tmp;
HXDLIN(1114)			bool _hx_tmp1;
HXDLIN(1114)			if ((i >= 0)) {
HXLINE(1114)				_hx_tmp1 = (Data->__get(i) >= 0);
            			}
            			else {
HXLINE(1114)				_hx_tmp1 = false;
            			}
HXDLIN(1114)			if (_hx_tmp1) {
HXLINE(1114)				_hx_tmp = (Data->__get(i) < current);
            			}
            			else {
HXLINE(1114)				_hx_tmp = false;
            			}
HXDLIN(1114)			if (_hx_tmp) {
HXLINE(1116)				this->walkPath(Data,i,Points);
HXDLIN(1116)				return;
            			}
            		}
HXLINE(1119)		if (left) {
HXLINE(1121)			i = (Start - 1);
HXLINE(1123)			bool _hx_tmp;
HXDLIN(1123)			bool _hx_tmp1;
HXDLIN(1123)			if ((i >= 0)) {
HXLINE(1123)				_hx_tmp1 = (Data->__get(i) >= 0);
            			}
            			else {
HXLINE(1123)				_hx_tmp1 = false;
            			}
HXDLIN(1123)			if (_hx_tmp1) {
HXLINE(1123)				_hx_tmp = (Data->__get(i) < current);
            			}
            			else {
HXLINE(1123)				_hx_tmp = false;
            			}
HXDLIN(1123)			if (_hx_tmp) {
HXLINE(1125)				this->walkPath(Data,i,Points);
HXDLIN(1125)				return;
            			}
            		}
HXLINE(1128)		bool _hx_tmp;
HXDLIN(1128)		if (up) {
HXLINE(1128)			_hx_tmp = right;
            		}
            		else {
HXLINE(1128)			_hx_tmp = false;
            		}
HXDLIN(1128)		if (_hx_tmp) {
HXLINE(1130)			i = ((Start - this->widthInTiles) + 1);
HXLINE(1132)			bool _hx_tmp;
HXDLIN(1132)			bool _hx_tmp1;
HXDLIN(1132)			if ((i >= 0)) {
HXLINE(1132)				_hx_tmp1 = (Data->__get(i) >= 0);
            			}
            			else {
HXLINE(1132)				_hx_tmp1 = false;
            			}
HXDLIN(1132)			if (_hx_tmp1) {
HXLINE(1132)				_hx_tmp = (Data->__get(i) < current);
            			}
            			else {
HXLINE(1132)				_hx_tmp = false;
            			}
HXDLIN(1132)			if (_hx_tmp) {
HXLINE(1134)				this->walkPath(Data,i,Points);
HXDLIN(1134)				return;
            			}
            		}
HXLINE(1137)		bool _hx_tmp1;
HXDLIN(1137)		if (right) {
HXLINE(1137)			_hx_tmp1 = down;
            		}
            		else {
HXLINE(1137)			_hx_tmp1 = false;
            		}
HXDLIN(1137)		if (_hx_tmp1) {
HXLINE(1139)			i = ((Start + this->widthInTiles) + 1);
HXLINE(1141)			bool _hx_tmp;
HXDLIN(1141)			bool _hx_tmp1;
HXDLIN(1141)			if ((i >= 0)) {
HXLINE(1141)				_hx_tmp1 = (Data->__get(i) >= 0);
            			}
            			else {
HXLINE(1141)				_hx_tmp1 = false;
            			}
HXDLIN(1141)			if (_hx_tmp1) {
HXLINE(1141)				_hx_tmp = (Data->__get(i) < current);
            			}
            			else {
HXLINE(1141)				_hx_tmp = false;
            			}
HXDLIN(1141)			if (_hx_tmp) {
HXLINE(1143)				this->walkPath(Data,i,Points);
HXDLIN(1143)				return;
            			}
            		}
HXLINE(1146)		bool _hx_tmp2;
HXDLIN(1146)		if (left) {
HXLINE(1146)			_hx_tmp2 = down;
            		}
            		else {
HXLINE(1146)			_hx_tmp2 = false;
            		}
HXDLIN(1146)		if (_hx_tmp2) {
HXLINE(1148)			i = ((Start + this->widthInTiles) - 1);
HXLINE(1150)			bool _hx_tmp;
HXDLIN(1150)			bool _hx_tmp1;
HXDLIN(1150)			if ((i >= 0)) {
HXLINE(1150)				_hx_tmp1 = (Data->__get(i) >= 0);
            			}
            			else {
HXLINE(1150)				_hx_tmp1 = false;
            			}
HXDLIN(1150)			if (_hx_tmp1) {
HXLINE(1150)				_hx_tmp = (Data->__get(i) < current);
            			}
            			else {
HXLINE(1150)				_hx_tmp = false;
            			}
HXDLIN(1150)			if (_hx_tmp) {
HXLINE(1152)				this->walkPath(Data,i,Points);
HXDLIN(1152)				return;
            			}
            		}
HXLINE(1155)		bool _hx_tmp3;
HXDLIN(1155)		if (up) {
HXLINE(1155)			_hx_tmp3 = left;
            		}
            		else {
HXLINE(1155)			_hx_tmp3 = false;
            		}
HXDLIN(1155)		if (_hx_tmp3) {
HXLINE(1157)			i = ((Start - this->widthInTiles) - 1);
HXLINE(1159)			bool _hx_tmp;
HXDLIN(1159)			bool _hx_tmp1;
HXDLIN(1159)			if ((i >= 0)) {
HXLINE(1159)				_hx_tmp1 = (Data->__get(i) >= 0);
            			}
            			else {
HXLINE(1159)				_hx_tmp1 = false;
            			}
HXDLIN(1159)			if (_hx_tmp1) {
HXLINE(1159)				_hx_tmp = (Data->__get(i) < current);
            			}
            			else {
HXLINE(1159)				_hx_tmp = false;
            			}
HXDLIN(1159)			if (_hx_tmp) {
HXLINE(1161)				this->walkPath(Data,i,Points);
HXDLIN(1161)				return;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxBaseTilemap_obj,walkPath,(void))

void FlxBaseTilemap_obj::simplifyPath(::Array< ::Dynamic> Points){
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_1174_simplifyPath)
HXLINE(1175)		Float deltaPrevious;
HXLINE(1176)		Float deltaNext;
HXLINE(1177)		 ::flixel::math::FlxPoint last = Points->__get(0).StaticCast<  ::flixel::math::FlxPoint >();
HXLINE(1178)		 ::flixel::math::FlxPoint node;
HXLINE(1179)		int i = 1;
HXLINE(1180)		int l = (Points->length - 1);
HXLINE(1182)		while((i < l)){
HXLINE(1184)			node = Points->__get(i).StaticCast<  ::flixel::math::FlxPoint >();
HXLINE(1185)			deltaPrevious = ((node->x - last->x) / (node->y - last->y));
HXLINE(1186)			deltaNext = ((node->x - Points->__get((i + 1)).StaticCast<  ::flixel::math::FlxPoint >()->x) / (node->y - Points->__get((i + 1)).StaticCast<  ::flixel::math::FlxPoint >()->y));
HXLINE(1188)			bool _hx_tmp;
HXDLIN(1188)			bool _hx_tmp1;
HXDLIN(1188)			if ((last->x != Points->__get((i + 1)).StaticCast<  ::flixel::math::FlxPoint >()->x)) {
HXLINE(1188)				_hx_tmp1 = (last->y == Points->__get((i + 1)).StaticCast<  ::flixel::math::FlxPoint >()->y);
            			}
            			else {
HXLINE(1188)				_hx_tmp1 = true;
            			}
HXDLIN(1188)			if (!(_hx_tmp1)) {
HXLINE(1188)				_hx_tmp = (deltaPrevious == deltaNext);
            			}
            			else {
HXLINE(1188)				_hx_tmp = true;
            			}
HXDLIN(1188)			if (_hx_tmp) {
HXLINE(1190)				Points[i] = null();
            			}
            			else {
HXLINE(1194)				last = node;
            			}
HXLINE(1197)			i = (i + 1);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseTilemap_obj,simplifyPath,(void))

void FlxBaseTilemap_obj::raySimplifyPath(::Array< ::Dynamic> Points){
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_1207_raySimplifyPath)
HXLINE(1208)		 ::flixel::math::FlxPoint source = Points->__get(0).StaticCast<  ::flixel::math::FlxPoint >();
HXLINE(1209)		int lastIndex = -1;
HXLINE(1210)		 ::flixel::math::FlxPoint node;
HXLINE(1211)		int i = 1;
HXLINE(1212)		int l = Points->length;
HXLINE(1214)		while((i < l)){
HXLINE(1216)			i = (i + 1);
HXDLIN(1216)			node = Points->__get((i - 1)).StaticCast<  ::flixel::math::FlxPoint >();
HXLINE(1218)			if (::hx::IsNull( node )) {
HXLINE(1220)				continue;
            			}
HXLINE(1223)			if (this->ray(source,node,this->_point,null())) {
HXLINE(1225)				if ((lastIndex >= 0)) {
HXLINE(1227)					Points[lastIndex] = null();
            				}
            			}
            			else {
HXLINE(1232)				source = Points->__get(lastIndex).StaticCast<  ::flixel::math::FlxPoint >();
            			}
HXLINE(1235)			lastIndex = (i - 1);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseTilemap_obj,raySimplifyPath,(void))

bool FlxBaseTilemap_obj::overlaps( ::flixel::FlxBasic ObjectOrGroup,::hx::Null< bool >  __o_InScreenSpace, ::flixel::FlxCamera Camera){
            		bool InScreenSpace = __o_InScreenSpace.Default(false);
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_1251_overlaps)
HXLINE(1252)		 ::flixel::group::FlxTypedGroup group = ::flixel::group::FlxTypedGroup_obj::resolveGroup(ObjectOrGroup);
HXLINE(1253)		if (::hx::IsNotNull( group )) {
HXLINE(1255)			return ::flixel::group::FlxTypedGroup_obj::overlaps(this->tilemapOverlapsCallback_dyn(),group,( (Float)(0) ),( (Float)(0) ),InScreenSpace,Camera);
            		}
            		else {
HXLINE(1257)			 ::flixel::FlxCamera Camera = null();
HXDLIN(1257)			bool _hx_tmp;
HXDLIN(1257)			bool _hx_tmp1;
HXDLIN(1257)			if ((ObjectOrGroup->flixelType != 1)) {
HXLINE(1257)				_hx_tmp1 = (ObjectOrGroup->flixelType == 3);
            			}
            			else {
HXLINE(1257)				_hx_tmp1 = true;
            			}
HXDLIN(1257)			if (_hx_tmp1) {
HXLINE(1257)				_hx_tmp = this->overlapsWithCallback(( ( ::flixel::FlxObject)(ObjectOrGroup) ),null(),null(),null());
            			}
            			else {
HXLINE(1257)				_hx_tmp = this->overlaps(ObjectOrGroup,false,Camera);
            			}
HXDLIN(1257)			if (_hx_tmp) {
HXLINE(1259)				return true;
            			}
            		}
HXLINE(1261)		return false;
            	}


bool FlxBaseTilemap_obj::tilemapOverlapsCallback( ::flixel::FlxBasic ObjectOrGroup,::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::hx::Null< bool >  __o_InScreenSpace, ::flixel::FlxCamera Camera){
            		Float X = __o_X.Default(0);
            		Float Y = __o_Y.Default(0);
            		bool InScreenSpace = __o_InScreenSpace.Default(false);
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_1266_tilemapOverlapsCallback)
HXDLIN(1266)		bool _hx_tmp;
HXDLIN(1266)		if ((ObjectOrGroup->flixelType != 1)) {
HXDLIN(1266)			_hx_tmp = (ObjectOrGroup->flixelType == 3);
            		}
            		else {
HXDLIN(1266)			_hx_tmp = true;
            		}
HXDLIN(1266)		if (_hx_tmp) {
HXLINE(1268)			return this->overlapsWithCallback(( ( ::flixel::FlxObject)(ObjectOrGroup) ),null(),null(),null());
            		}
            		else {
HXLINE(1272)			return this->overlaps(ObjectOrGroup,InScreenSpace,Camera);
            		}
HXLINE(1266)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC5(FlxBaseTilemap_obj,tilemapOverlapsCallback,return )

bool FlxBaseTilemap_obj::overlapsAt(Float X,Float Y, ::flixel::FlxBasic ObjectOrGroup,::hx::Null< bool >  __o_InScreenSpace, ::flixel::FlxCamera Camera){
            		bool InScreenSpace = __o_InScreenSpace.Default(false);
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_1290_overlapsAt)
HXLINE(1291)		 ::flixel::group::FlxTypedGroup group = ::flixel::group::FlxTypedGroup_obj::resolveGroup(ObjectOrGroup);
HXLINE(1292)		if (::hx::IsNotNull( group )) {
HXLINE(1294)			return ::flixel::group::FlxTypedGroup_obj::overlaps(this->tilemapOverlapsAtCallback_dyn(),group,X,Y,InScreenSpace,Camera);
            		}
            		else {
HXLINE(1296)			bool _hx_tmp;
HXDLIN(1296)			bool _hx_tmp1;
HXDLIN(1296)			if ((ObjectOrGroup->flixelType != 1)) {
HXLINE(1296)				_hx_tmp1 = (ObjectOrGroup->flixelType == 3);
            			}
            			else {
HXLINE(1296)				_hx_tmp1 = true;
            			}
HXDLIN(1296)			if (_hx_tmp1) {
HXLINE(1296)				_hx_tmp = this->overlapsWithCallback(( ( ::flixel::FlxObject)(ObjectOrGroup) ),null(),false,this->_point->set(X,Y));
            			}
            			else {
HXLINE(1296)				_hx_tmp = this->overlapsAt(X,Y,ObjectOrGroup,InScreenSpace,Camera);
            			}
HXDLIN(1296)			if (_hx_tmp) {
HXLINE(1298)				return true;
            			}
            		}
HXLINE(1301)		return false;
            	}


bool FlxBaseTilemap_obj::tilemapOverlapsAtCallback( ::flixel::FlxBasic ObjectOrGroup,Float X,Float Y,bool InScreenSpace, ::flixel::FlxCamera Camera){
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_1306_tilemapOverlapsAtCallback)
HXDLIN(1306)		bool _hx_tmp;
HXDLIN(1306)		if ((ObjectOrGroup->flixelType != 1)) {
HXDLIN(1306)			_hx_tmp = (ObjectOrGroup->flixelType == 3);
            		}
            		else {
HXDLIN(1306)			_hx_tmp = true;
            		}
HXDLIN(1306)		if (_hx_tmp) {
HXLINE(1308)			return this->overlapsWithCallback(( ( ::flixel::FlxObject)(ObjectOrGroup) ),null(),false,this->_point->set(X,Y));
            		}
            		else {
HXLINE(1312)			return this->overlapsAt(X,Y,ObjectOrGroup,InScreenSpace,Camera);
            		}
HXLINE(1306)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC5(FlxBaseTilemap_obj,tilemapOverlapsAtCallback,return )

bool FlxBaseTilemap_obj::overlapsPoint( ::flixel::math::FlxPoint WorldPoint,::hx::Null< bool >  __o_InScreenSpace, ::flixel::FlxCamera Camera){
            		bool InScreenSpace = __o_InScreenSpace.Default(false);
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_1325_overlapsPoint)
HXLINE(1326)		if (InScreenSpace) {
HXLINE(1328)			if (::hx::IsNull( Camera )) {
HXLINE(1329)				Camera = ::flixel::FlxG_obj::camera;
            			}
HXLINE(1331)			WorldPoint->subtractPoint(Camera->scroll);
HXLINE(1332)			if (WorldPoint->_weak) {
HXLINE(1332)				WorldPoint->put();
            			}
            		}
HXLINE(1335)		return this->tileAtPointAllowsCollisions(WorldPoint);
            	}


bool FlxBaseTilemap_obj::tileAtPointAllowsCollisions( ::flixel::math::FlxPoint point){
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_1339_tileAtPointAllowsCollisions)
HXLINE(1340)		int tileIndex = this->getTileIndexByCoords(point);
HXLINE(1341)		bool _hx_tmp;
HXDLIN(1341)		if ((tileIndex >= 0)) {
HXLINE(1341)			_hx_tmp = (tileIndex >= this->_data->length);
            		}
            		else {
HXLINE(1341)			_hx_tmp = true;
            		}
HXDLIN(1341)		if (_hx_tmp) {
HXLINE(1342)			return false;
            		}
HXLINE(1343)		return (( ( ::flixel::FlxObject)(this->_tileObjects->__get(this->_data->__get(tileIndex))) )->allowCollisions > 0);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseTilemap_obj,tileAtPointAllowsCollisions,return )

 ::flixel::math::FlxRect FlxBaseTilemap_obj::getBounds( ::flixel::math::FlxRect Bounds){
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_1353_getBounds)
HXLINE(1354)		if (::hx::IsNull( Bounds )) {
HXLINE(1355)			 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN(1355)			_this->x = ( (Float)(0) );
HXDLIN(1355)			_this->y = ( (Float)(0) );
HXDLIN(1355)			_this->width = ( (Float)(0) );
HXDLIN(1355)			_this->height = ( (Float)(0) );
HXDLIN(1355)			 ::flixel::math::FlxRect rect = _this;
HXDLIN(1355)			rect->_inPool = false;
HXDLIN(1355)			Bounds = rect;
            		}
HXLINE(1357)		Float X = this->x;
HXDLIN(1357)		Float Y = this->y;
HXDLIN(1357)		Float Width = this->get_width();
HXDLIN(1357)		Float Height = this->get_height();
HXDLIN(1357)		Bounds->x = X;
HXDLIN(1357)		Bounds->y = Y;
HXDLIN(1357)		Bounds->width = Width;
HXDLIN(1357)		Bounds->height = Height;
HXDLIN(1357)		return Bounds;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseTilemap_obj,getBounds,return )

::Array< int > FlxBaseTilemap_obj::offsetAutoTile;


::hx::ObjectPtr< FlxBaseTilemap_obj > FlxBaseTilemap_obj::__new() {
	::hx::ObjectPtr< FlxBaseTilemap_obj > __this = new FlxBaseTilemap_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< FlxBaseTilemap_obj > FlxBaseTilemap_obj::__alloc(::hx::Ctx *_hx_ctx) {
	FlxBaseTilemap_obj *__this = (FlxBaseTilemap_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxBaseTilemap_obj), true, "flixel.tile.FlxBaseTilemap"));
	*(void **)__this = FlxBaseTilemap_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FlxBaseTilemap_obj::FlxBaseTilemap_obj()
{
}

void FlxBaseTilemap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxBaseTilemap);
	HX_MARK_MEMBER_NAME(_hx_auto,"auto");
	HX_MARK_MEMBER_NAME(widthInTiles,"widthInTiles");
	HX_MARK_MEMBER_NAME(heightInTiles,"heightInTiles");
	HX_MARK_MEMBER_NAME(totalTiles,"totalTiles");
	HX_MARK_MEMBER_NAME(customTileRemap,"customTileRemap");
	HX_MARK_MEMBER_NAME(_randomIndices,"_randomIndices");
	HX_MARK_MEMBER_NAME(_randomChoices,"_randomChoices");
	HX_MARK_MEMBER_NAME(_randomLambda,"_randomLambda");
	HX_MARK_MEMBER_NAME(_tileObjects,"_tileObjects");
	HX_MARK_MEMBER_NAME(_startingIndex,"_startingIndex");
	HX_MARK_MEMBER_NAME(_data,"_data");
	HX_MARK_MEMBER_NAME(_drawIndex,"_drawIndex");
	HX_MARK_MEMBER_NAME(_collideIndex,"_collideIndex");
	 ::flixel::FlxObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxBaseTilemap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_hx_auto,"auto");
	HX_VISIT_MEMBER_NAME(widthInTiles,"widthInTiles");
	HX_VISIT_MEMBER_NAME(heightInTiles,"heightInTiles");
	HX_VISIT_MEMBER_NAME(totalTiles,"totalTiles");
	HX_VISIT_MEMBER_NAME(customTileRemap,"customTileRemap");
	HX_VISIT_MEMBER_NAME(_randomIndices,"_randomIndices");
	HX_VISIT_MEMBER_NAME(_randomChoices,"_randomChoices");
	HX_VISIT_MEMBER_NAME(_randomLambda,"_randomLambda");
	HX_VISIT_MEMBER_NAME(_tileObjects,"_tileObjects");
	HX_VISIT_MEMBER_NAME(_startingIndex,"_startingIndex");
	HX_VISIT_MEMBER_NAME(_data,"_data");
	HX_VISIT_MEMBER_NAME(_drawIndex,"_drawIndex");
	HX_VISIT_MEMBER_NAME(_collideIndex,"_collideIndex");
	 ::flixel::FlxObject_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxBaseTilemap_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ray") ) { return ::hx::Val( ray_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"auto") ) { return ::hx::Val( _hx_auto ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_data") ) { return ::hx::Val( _data ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		if (HX_FIELD_EQ(inName,"getTile") ) { return ::hx::Val( getTile_dyn() ); }
		if (HX_FIELD_EQ(inName,"setTile") ) { return ::hx::Val( setTile_dyn() ); }
		if (HX_FIELD_EQ(inName,"getData") ) { return ::hx::Val( getData_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"setDirty") ) { return ::hx::Val( setDirty_dyn() ); }
		if (HX_FIELD_EQ(inName,"autoTile") ) { return ::hx::Val( autoTile_dyn() ); }
		if (HX_FIELD_EQ(inName,"findPath") ) { return ::hx::Val( findPath_dyn() ); }
		if (HX_FIELD_EQ(inName,"walkPath") ) { return ::hx::Val( walkPath_dyn() ); }
		if (HX_FIELD_EQ(inName,"overlaps") ) { return ::hx::Val( overlaps_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"updateMap") ) { return ::hx::Val( updateMap_dyn() ); }
		if (HX_FIELD_EQ(inName,"getBounds") ) { return ::hx::Val( getBounds_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"totalTiles") ) { return ::hx::Val( totalTiles ); }
		if (HX_FIELD_EQ(inName,"_drawIndex") ) { return ::hx::Val( _drawIndex ); }
		if (HX_FIELD_EQ(inName,"updateTile") ) { return ::hx::Val( updateTile_dyn() ); }
		if (HX_FIELD_EQ(inName,"overlapsAt") ) { return ::hx::Val( overlapsAt_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"widthInTiles") ) { return ::hx::Val( widthInTiles ); }
		if (HX_FIELD_EQ(inName,"_tileObjects") ) { return ::hx::Val( _tileObjects ); }
		if (HX_FIELD_EQ(inName,"autoTileFull") ) { return ::hx::Val( autoTileFull_dyn() ); }
		if (HX_FIELD_EQ(inName,"simplifyPath") ) { return ::hx::Val( simplifyPath_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"heightInTiles") ) { return ::hx::Val( heightInTiles ); }
		if (HX_FIELD_EQ(inName,"_randomLambda") ) { return ::hx::Val( _randomLambda ); }
		if (HX_FIELD_EQ(inName,"_collideIndex") ) { return ::hx::Val( _collideIndex ); }
		if (HX_FIELD_EQ(inName,"cacheGraphics") ) { return ::hx::Val( cacheGraphics_dyn() ); }
		if (HX_FIELD_EQ(inName,"loadMapHelper") ) { return ::hx::Val( loadMapHelper_dyn() ); }
		if (HX_FIELD_EQ(inName,"applyAutoTile") ) { return ::hx::Val( applyAutoTile_dyn() ); }
		if (HX_FIELD_EQ(inName,"overlapsPoint") ) { return ::hx::Val( overlapsPoint_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_randomIndices") ) { return ::hx::Val( _randomIndices ); }
		if (HX_FIELD_EQ(inName,"_randomChoices") ) { return ::hx::Val( _randomChoices ); }
		if (HX_FIELD_EQ(inName,"_startingIndex") ) { return ::hx::Val( _startingIndex ); }
		if (HX_FIELD_EQ(inName,"loadMapFromCSV") ) { return ::hx::Val( loadMapFromCSV_dyn() ); }
		if (HX_FIELD_EQ(inName,"getTileByIndex") ) { return ::hx::Val( getTileByIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"setTileByIndex") ) { return ::hx::Val( setTileByIndex_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"customTileRemap") ) { return ::hx::Val( customTileRemap ); }
		if (HX_FIELD_EQ(inName,"initTileObjects") ) { return ::hx::Val( initTileObjects_dyn() ); }
		if (HX_FIELD_EQ(inName,"postGraphicLoad") ) { return ::hx::Val( postGraphicLoad_dyn() ); }
		if (HX_FIELD_EQ(inName,"raySimplifyPath") ) { return ::hx::Val( raySimplifyPath_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"loadMapFromArray") ) { return ::hx::Val( loadMapFromArray_dyn() ); }
		if (HX_FIELD_EQ(inName,"applyCustomRemap") ) { return ::hx::Val( applyCustomRemap_dyn() ); }
		if (HX_FIELD_EQ(inName,"randomizeIndices") ) { return ::hx::Val( randomizeIndices_dyn() ); }
		if (HX_FIELD_EQ(inName,"getTileInstances") ) { return ::hx::Val( getTileInstances_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"computeDimensions") ) { return ::hx::Val( computeDimensions_dyn() ); }
		if (HX_FIELD_EQ(inName,"getTileCollisions") ) { return ::hx::Val( getTileCollisions_dyn() ); }
		if (HX_FIELD_EQ(inName,"setTileProperties") ) { return ::hx::Val( setTileProperties_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"loadMapFrom2DArray") ) { return ::hx::Val( loadMapFrom2DArray_dyn() ); }
		if (HX_FIELD_EQ(inName,"loadMapFromGraphic") ) { return ::hx::Val( loadMapFromGraphic_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"computePathDistance") ) { return ::hx::Val( computePathDistance_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getTileIndexByCoords") ) { return ::hx::Val( getTileIndexByCoords_dyn() ); }
		if (HX_FIELD_EQ(inName,"getTileCoordsByIndex") ) { return ::hx::Val( getTileCoordsByIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"overlapsWithCallback") ) { return ::hx::Val( overlapsWithCallback_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"setCustomTileMappings") ) { return ::hx::Val( setCustomTileMappings_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"tilemapOverlapsCallback") ) { return ::hx::Val( tilemapOverlapsCallback_dyn() ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"tilemapOverlapsAtCallback") ) { return ::hx::Val( tilemapOverlapsAtCallback_dyn() ); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"tileAtPointAllowsCollisions") ) { return ::hx::Val( tileAtPointAllowsCollisions_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxBaseTilemap_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"offsetAutoTile") ) { outValue = ( offsetAutoTile ); return true; }
	}
	return false;
}

::hx::Val FlxBaseTilemap_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"auto") ) { _hx_auto=inValue.Cast<  ::flixel::tile::FlxTilemapAutoTiling >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_data") ) { _data=inValue.Cast< ::Array< int > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"totalTiles") ) { totalTiles=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_drawIndex") ) { _drawIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"widthInTiles") ) { widthInTiles=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tileObjects") ) { _tileObjects=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"heightInTiles") ) { heightInTiles=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_randomLambda") ) { _randomLambda=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_collideIndex") ) { _collideIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_randomIndices") ) { _randomIndices=inValue.Cast< ::Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_randomChoices") ) { _randomChoices=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_startingIndex") ) { _startingIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"customTileRemap") ) { customTileRemap=inValue.Cast< ::Array< int > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxBaseTilemap_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"offsetAutoTile") ) { offsetAutoTile=ioValue.Cast< ::Array< int > >(); return true; }
	}
	return false;
}

void FlxBaseTilemap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("auto",6f,df,76,40));
	outFields->push(HX_("widthInTiles",fa,b1,71,d4));
	outFields->push(HX_("heightInTiles",39,ce,1a,97));
	outFields->push(HX_("totalTiles",21,f3,d5,16));
	outFields->push(HX_("customTileRemap",ca,70,d3,8a));
	outFields->push(HX_("_randomIndices",a5,d3,07,36));
	outFields->push(HX_("_randomChoices",70,42,cb,2b));
	outFields->push(HX_("_tileObjects",47,55,bd,87));
	outFields->push(HX_("_startingIndex",73,a1,49,3d));
	outFields->push(HX_("_data",09,72,74,f5));
	outFields->push(HX_("_drawIndex",2f,4c,c2,e1));
	outFields->push(HX_("_collideIndex",93,05,8a,b4));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxBaseTilemap_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::tile::FlxTilemapAutoTiling */ ,(int)offsetof(FlxBaseTilemap_obj,_hx_auto),HX_("auto",6f,df,76,40)},
	{::hx::fsInt,(int)offsetof(FlxBaseTilemap_obj,widthInTiles),HX_("widthInTiles",fa,b1,71,d4)},
	{::hx::fsInt,(int)offsetof(FlxBaseTilemap_obj,heightInTiles),HX_("heightInTiles",39,ce,1a,97)},
	{::hx::fsInt,(int)offsetof(FlxBaseTilemap_obj,totalTiles),HX_("totalTiles",21,f3,d5,16)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(FlxBaseTilemap_obj,customTileRemap),HX_("customTileRemap",ca,70,d3,8a)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(FlxBaseTilemap_obj,_randomIndices),HX_("_randomIndices",a5,d3,07,36)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(FlxBaseTilemap_obj,_randomChoices),HX_("_randomChoices",70,42,cb,2b)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxBaseTilemap_obj,_randomLambda),HX_("_randomLambda",49,40,18,0b)},
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(int)offsetof(FlxBaseTilemap_obj,_tileObjects),HX_("_tileObjects",47,55,bd,87)},
	{::hx::fsInt,(int)offsetof(FlxBaseTilemap_obj,_startingIndex),HX_("_startingIndex",73,a1,49,3d)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(FlxBaseTilemap_obj,_data),HX_("_data",09,72,74,f5)},
	{::hx::fsInt,(int)offsetof(FlxBaseTilemap_obj,_drawIndex),HX_("_drawIndex",2f,4c,c2,e1)},
	{::hx::fsInt,(int)offsetof(FlxBaseTilemap_obj,_collideIndex),HX_("_collideIndex",93,05,8a,b4)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo FlxBaseTilemap_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Array< int > */ ,(void *) &FlxBaseTilemap_obj::offsetAutoTile,HX_("offsetAutoTile",f0,58,a2,c6)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String FlxBaseTilemap_obj_sMemberFields[] = {
	HX_("auto",6f,df,76,40),
	HX_("widthInTiles",fa,b1,71,d4),
	HX_("heightInTiles",39,ce,1a,97),
	HX_("totalTiles",21,f3,d5,16),
	HX_("customTileRemap",ca,70,d3,8a),
	HX_("_randomIndices",a5,d3,07,36),
	HX_("_randomChoices",70,42,cb,2b),
	HX_("_randomLambda",49,40,18,0b),
	HX_("_tileObjects",47,55,bd,87),
	HX_("_startingIndex",73,a1,49,3d),
	HX_("_data",09,72,74,f5),
	HX_("_drawIndex",2f,4c,c2,e1),
	HX_("_collideIndex",93,05,8a,b4),
	HX_("updateTile",d7,b5,b1,05),
	HX_("cacheGraphics",2d,61,95,fc),
	HX_("initTileObjects",16,be,45,2e),
	HX_("updateMap",13,e8,df,82),
	HX_("computeDimensions",a4,a4,eb,f3),
	HX_("getTileIndexByCoords",03,79,8b,76),
	HX_("getTileCoordsByIndex",b9,63,25,a1),
	HX_("ray",ea,d5,56,00),
	HX_("overlapsWithCallback",17,c3,72,a8),
	HX_("setDirty",10,b9,04,e8),
	HX_("destroy",fa,2c,86,24),
	HX_("loadMapFromCSV",06,2b,38,8f),
	HX_("loadMapFromArray",d9,80,a3,db),
	HX_("loadMapFrom2DArray",c7,d3,90,ac),
	HX_("loadMapFromGraphic",e8,bd,b6,e5),
	HX_("loadMapHelper",24,aa,93,69),
	HX_("postGraphicLoad",6e,44,44,1d),
	HX_("applyAutoTile",cb,19,58,70),
	HX_("applyCustomRemap",8a,6c,0c,b4),
	HX_("randomizeIndices",f6,8d,4c,14),
	HX_("autoTile",3d,ba,22,30),
	HX_("autoTileFull",6c,32,17,bf),
	HX_("setCustomTileMappings",86,00,11,09),
	HX_("getTile",e4,7a,7f,1f),
	HX_("getTileByIndex",37,bb,aa,c4),
	HX_("getTileCollisions",c5,3f,3d,c8),
	HX_("getTileInstances",ba,6b,01,25),
	HX_("setTile",f0,0b,81,12),
	HX_("setTileByIndex",ab,a3,ca,e4),
	HX_("setTileProperties",03,58,a1,54),
	HX_("getData",e0,05,e6,14),
	HX_("findPath",7e,f2,e5,9c),
	HX_("computePathDistance",11,4c,56,20),
	HX_("walkPath",4e,27,ab,57),
	HX_("simplifyPath",4e,21,2f,66),
	HX_("raySimplifyPath",58,7a,f6,41),
	HX_("overlaps",0c,d3,2a,45),
	HX_("tilemapOverlapsCallback",3f,9d,f8,ac),
	HX_("overlapsAt",1f,e7,ce,03),
	HX_("tilemapOverlapsAtCallback",d2,ab,68,db),
	HX_("overlapsPoint",a4,c5,bd,35),
	HX_("tileAtPointAllowsCollisions",1a,5b,2f,f6),
	HX_("getBounds",ab,0f,74,e2),
	::String(null()) };

static void FlxBaseTilemap_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxBaseTilemap_obj::offsetAutoTile,"offsetAutoTile");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxBaseTilemap_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxBaseTilemap_obj::offsetAutoTile,"offsetAutoTile");
};

#endif

::hx::Class FlxBaseTilemap_obj::__mClass;

static ::String FlxBaseTilemap_obj_sStaticFields[] = {
	HX_("offsetAutoTile",f0,58,a2,c6),
	::String(null())
};

void FlxBaseTilemap_obj::__register()
{
	FlxBaseTilemap_obj _hx_dummy;
	FlxBaseTilemap_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.tile.FlxBaseTilemap",19,d7,a6,6a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxBaseTilemap_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxBaseTilemap_obj::__SetStatic;
	__mClass->mMarkFunc = FlxBaseTilemap_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxBaseTilemap_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxBaseTilemap_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxBaseTilemap_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxBaseTilemap_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxBaseTilemap_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxBaseTilemap_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxBaseTilemap_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_26_boot)
HXDLIN(  26)		offsetAutoTile = ::Array_obj< int >::fromData( _hx_array_data_6aa6d719_65,256);
            	}
}

} // end namespace flixel
} // end namespace tile
