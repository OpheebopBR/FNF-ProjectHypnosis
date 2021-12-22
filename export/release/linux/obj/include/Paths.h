#ifndef INCLUDED_Paths
#define INCLUDED_Paths

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Paths)
HX_DECLARE_CLASS2(flixel,graphics,FlxGraphic)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxAtlasFrames)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxFramesCollection)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,media,Sound)



class HXCPP_CLASS_ATTRIBUTES Paths_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Paths_obj OBJ_;
		Paths_obj();

	public:
		enum { _hx_ClassId = 0x44c8e46a };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="Paths")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"Paths"); }

		inline static ::hx::ObjectPtr< Paths_obj > __new() {
			::hx::ObjectPtr< Paths_obj > __this = new Paths_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Paths_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Paths_obj *__this = (Paths_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Paths_obj), false, "Paths"));
			*(void **)__this = Paths_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Paths_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Paths",0e,7b,84,50); }

		static void __boot();
		static ::String SOUND_EXT;
		static ::String VIDEO_EXT;
		static  ::haxe::ds::StringMap customImagesLoaded;
		static  ::haxe::ds::StringMap customSoundsLoaded;
		static ::Array< ::String > ignoreModFolders;
		static void destroyLoadedImages(::hx::Null< bool >  ignoreCheck);
		static ::Dynamic destroyLoadedImages_dyn();

		static ::String currentModDirectory;
		static ::String currentLevel;
		static void setCurrentLevel(::String name);
		static ::Dynamic setCurrentLevel_dyn();

		static ::String getPath(::String file,::String type,::String library);
		static ::Dynamic getPath_dyn();

		static ::String getLibraryPath(::String file,::String library);
		static ::Dynamic getLibraryPath_dyn();

		static ::String getLibraryPathForce(::String file,::String library);
		static ::Dynamic getLibraryPathForce_dyn();

		static ::String getPreloadPath(::String file);
		static ::Dynamic getPreloadPath_dyn();

		static ::String file(::String file,::String type,::String library);
		static ::Dynamic file_dyn();

		static ::String txt(::String key,::String library);
		static ::Dynamic txt_dyn();

		static ::String xml(::String key,::String library);
		static ::Dynamic xml_dyn();

		static ::String json(::String key,::String library);
		static ::Dynamic json_dyn();

		static ::String lua(::String key,::String library);
		static ::Dynamic lua_dyn();

		static ::String video(::String key);
		static ::Dynamic video_dyn();

		static  ::Dynamic sound(::String key,::String library);
		static ::Dynamic sound_dyn();

		static  ::Dynamic soundRandom(::String key,int min,int max,::String library);
		static ::Dynamic soundRandom_dyn();

		static  ::Dynamic music(::String key,::String library);
		static ::Dynamic music_dyn();

		static  ::Dynamic voices(::String song);
		static ::Dynamic voices_dyn();

		static  ::Dynamic inst(::String song);
		static ::Dynamic inst_dyn();

		static  ::openfl::media::Sound returnSongFile(::String file);
		static ::Dynamic returnSongFile_dyn();

		static  ::Dynamic image(::String key,::String library);
		static ::Dynamic image_dyn();

		static ::String getTextFromFile(::String key, ::Dynamic ignoreMods);
		static ::Dynamic getTextFromFile_dyn();

		static ::String font(::String key);
		static ::Dynamic font_dyn();

		static bool fileExists(::String key,::String type, ::Dynamic ignoreMods,::String library);
		static ::Dynamic fileExists_dyn();

		static  ::flixel::graphics::frames::FlxAtlasFrames getSparrowAtlas(::String key,::String library);
		static ::Dynamic getSparrowAtlas_dyn();

		static  ::flixel::graphics::frames::FlxAtlasFrames getPackerAtlas(::String key,::String library);
		static ::Dynamic getPackerAtlas_dyn();

		static ::String formatToSongPath(::String path);
		static ::Dynamic formatToSongPath_dyn();

		static  ::flixel::graphics::FlxGraphic addCustomGraphic(::String key);
		static ::Dynamic addCustomGraphic_dyn();

		static ::String mods(::String key);
		static ::Dynamic mods_dyn();

		static ::String modsFont(::String key);
		static ::Dynamic modsFont_dyn();

		static ::String modsJson(::String key);
		static ::Dynamic modsJson_dyn();

		static ::String modsVideo(::String key);
		static ::Dynamic modsVideo_dyn();

		static ::String modsMusic(::String key);
		static ::Dynamic modsMusic_dyn();

		static ::String modsSounds(::String key);
		static ::Dynamic modsSounds_dyn();

		static ::String modsSongs(::String key);
		static ::Dynamic modsSongs_dyn();

		static ::String modsImages(::String key);
		static ::Dynamic modsImages_dyn();

		static ::String modsXml(::String key);
		static ::Dynamic modsXml_dyn();

		static ::String modsTxt(::String key);
		static ::Dynamic modsTxt_dyn();

		static ::String modFolders(::String key);
		static ::Dynamic modFolders_dyn();

		static ::Array< ::String > getModDirectories();
		static ::Dynamic getModDirectories_dyn();

};


#endif /* INCLUDED_Paths */ 
