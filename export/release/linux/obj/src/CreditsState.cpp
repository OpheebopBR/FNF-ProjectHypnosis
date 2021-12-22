#include <hxcpp.h>

#ifndef INCLUDED_Alphabet
#include <Alphabet.h>
#endif
#ifndef INCLUDED_AttachedSprite
#include <AttachedSprite.h>
#endif
#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_CoolUtil
#include <CoolUtil.h>
#endif
#ifndef INCLUDED_CreditsState
#include <CreditsState.h>
#endif
#ifndef INCLUDED_DiscordClient
#include <DiscordClient.h>
#endif
#ifndef INCLUDED_MainMenuState
#include <MainMenuState.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_PlayerSettings
#include <PlayerSettings.h>
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
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_TransitionData
#include <flixel/addons/transition/TransitionData.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIState
#include <flixel/addons/ui/FlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#include <flixel/addons/ui/interfaces/IFlxUIState.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxAction
#include <flixel/input/actions/FlxAction.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionDigital
#include <flixel/input/actions/FlxActionDigital.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionSet
#include <flixel/input/actions/FlxActionSet.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSoundGroup
#include <flixel/system/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_ColorTween
#include <flixel/tweens/misc/ColorTween.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1bf4423a091ce525_23_new,"CreditsState","new",0xfd580e29,"CreditsState.new","CreditsState.hx",23,0xdb40a967)
HX_LOCAL_STACK_FRAME(_hx_pos_1bf4423a091ce525_37_create,"CreditsState","create",0x506b2cd3,"CreditsState.create","CreditsState.hx",37,0xdb40a967)
static const ::String _hx_array_data_3b81c5b7_7[] = {
	HX_("",00,00,00,00),
};
static const ::String _hx_array_data_3b81c5b7_8[] = {
	HX_("",00,00,00,00),
};
static const ::String _hx_array_data_3b81c5b7_9[] = {
	HX_("Amalgam Engine Team",17,2c,0e,f9),
};
static const ::String _hx_array_data_3b81c5b7_10[] = {
	HX_("Gui iago",e5,bb,49,8c),HX_("gui-credits",08,1f,c6,61),HX_("Publisher - Icon by Davidgreen123 - Edited by Gui iago",60,ba,ae,66),HX_("https://github.com/Gui-iago",3c,dd,6d,e0),HX_("FFFF00",80,14,82,79),
};
static const ::String _hx_array_data_3b81c5b7_11[] = {
	HX_("Max",84,c2,3a,00),HX_("max-credits",31,6c,50,bd),HX_("Tester - Icon by Luzinu_",8a,80,b5,a0),HX_("https://github.com/CMax0808",7b,af,af,52),HX_("40FBFC",f5,dc,41,9c),
};
static const ::String _hx_array_data_3b81c5b7_12[] = {
	HX_("",00,00,00,00),
};
static const ::String _hx_array_data_3b81c5b7_13[] = {
	HX_("Psych Engine Team",36,ef,98,3e),
};
static const ::String _hx_array_data_3b81c5b7_14[] = {
	HX_("Shadow Mario",c4,01,05,71),HX_("shadowmario",24,76,c0,e6),HX_("Main Programmer of Psych Engine",6d,91,ad,35),HX_("https://twitter.com/Shadow_Mario_",a2,98,47,eb),HX_("444444",80,a8,eb,dd),
};
static const ::String _hx_array_data_3b81c5b7_15[] = {
	HX_("RiverOaken",36,1d,dd,33),HX_("riveroaken",36,a9,fe,a9),HX_("Main Artist/Animator of Psych Engine",f8,d1,00,db),HX_("https://twitter.com/river_oaken",17,26,7a,b0),HX_("C30085",8d,9d,37,47),
};
static const ::String _hx_array_data_3b81c5b7_16[] = {
	HX_("bb-panzu",cb,ef,e8,8b),HX_("bb-panzu",cb,ef,e8,8b),HX_("Additional Programmer of Psych Engine",7f,3f,a6,5a),HX_("https://twitter.com/bbsub3",6b,b6,13,17),HX_("389A58",70,8d,82,c8),
};
static const ::String _hx_array_data_3b81c5b7_17[] = {
	HX_("",00,00,00,00),
};
static const ::String _hx_array_data_3b81c5b7_18[] = {
	HX_("Engine Contributors",56,17,70,dc),
};
static const ::String _hx_array_data_3b81c5b7_19[] = {
	HX_("shubs",11,04,2c,7c),HX_("shubs",11,04,2c,7c),HX_("New Input System Programmer",11,7a,dd,e2),HX_("https://twitter.com/yoshubs",83,11,b4,00),HX_("4494E6",6c,c8,39,e1),
};
static const ::String _hx_array_data_3b81c5b7_20[] = {
	HX_("SqirraRNG",35,93,90,2a),HX_("gedehari",8f,9f,74,d3),HX_("Chart Editor's Sound Waveform base",be,9c,e4,cf),HX_("https://twitter.com/gedehari",87,e7,51,35),HX_("FF9300",9a,e3,db,70),
};
static const ::String _hx_array_data_3b81c5b7_21[] = {
	HX_("iFlicky",97,81,42,80),HX_("iflicky",77,0d,ae,4b),HX_("Delay/Combo Menu Song Composer\nand Dialogue Sounds",81,24,34,43),HX_("https://twitter.com/flicky_i",f0,22,3f,fa),HX_("C549DB",d5,7f,b0,70),
};
static const ::String _hx_array_data_3b81c5b7_22[] = {
	HX_("PolybiusProxy",5d,cc,61,1d),HX_("polybiusproxy",9d,0c,44,42),HX_(".MP4 Video Loader Extension",14,63,28,2d),HX_("https://twitter.com/polybiusproxy",a5,e1,66,7e),HX_("FFEAA6",71,21,d5,78),
};
static const ::String _hx_array_data_3b81c5b7_23[] = {
	HX_("Keoiki",f2,5f,eb,6d),HX_("keoiki",d2,eb,56,39),HX_("Note Splash Animations",7a,27,38,e2),HX_("https://twitter.com/Keoiki_",35,73,4e,3b),HX_("FFFFFF",c0,27,82,79),
};
static const ::String _hx_array_data_3b81c5b7_24[] = {
	HX_("",00,00,00,00),
};
static const ::String _hx_array_data_3b81c5b7_25[] = {
	HX_("Funkin' Crew",ab,00,2d,30),
};
static const ::String _hx_array_data_3b81c5b7_26[] = {
	HX_("ninjamuffin99",f7,4c,e5,00),HX_("ninjamuffin99",f7,4c,e5,00),HX_("Programmer of Friday Night Funkin'",2c,f9,c3,b2),HX_("https://twitter.com/ninja_muffin99",7a,ac,b6,89),HX_("F73838",3b,b6,e5,c9),
};
static const ::String _hx_array_data_3b81c5b7_27[] = {
	HX_("PhantomArcade",9d,2d,b3,ef),HX_("phantomarcade",9d,69,2e,73),HX_("Animator of Friday Night Funkin'",7d,a9,23,e4),HX_("https://twitter.com/PhantomArcade3K",9d,e2,57,4f),HX_("FFBB1B",f1,31,da,76),
};
static const ::String _hx_array_data_3b81c5b7_28[] = {
	HX_("evilsk8r",66,38,e0,32),HX_("evilsk8r",66,38,e0,32),HX_("Artist of Friday Night Funkin'",dd,f8,e7,48),HX_("https://twitter.com/evilsk8r",5e,80,bd,94),HX_("53E52C",7f,d1,1d,bc),
};
static const ::String _hx_array_data_3b81c5b7_29[] = {
	HX_("kawaisprite",0e,de,66,45),HX_("kawaisprite",0e,de,66,45),HX_("Composer of Friday Night Funkin'",36,08,52,24),HX_("https://twitter.com/kawaisprite",16,e1,bc,3d),HX_("6475F3",09,d7,9e,ac),
};
HX_LOCAL_STACK_FRAME(_hx_pos_1bf4423a091ce525_156_update,"CreditsState","update",0x5b614be0,"CreditsState.update","CreditsState.hx",156,0xdb40a967)
HX_LOCAL_STACK_FRAME(_hx_pos_1bf4423a091ce525_189_changeSelection,"CreditsState","changeSelection",0x5dc3e005,"CreditsState.changeSelection","CreditsState.hx",189,0xdb40a967)
HX_LOCAL_STACK_FRAME(_hx_pos_1bf4423a091ce525_207_changeSelection,"CreditsState","changeSelection",0x5dc3e005,"CreditsState.changeSelection","CreditsState.hx",207,0xdb40a967)
HX_LOCAL_STACK_FRAME(_hx_pos_1bf4423a091ce525_229_getCurrentBGColor,"CreditsState","getCurrentBGColor",0xd6c58504,"CreditsState.getCurrentBGColor","CreditsState.hx",229,0xdb40a967)
HX_LOCAL_STACK_FRAME(_hx_pos_1bf4423a091ce525_238_unselectableCheck,"CreditsState","unselectableCheck",0x4473c3a2,"CreditsState.unselectableCheck","CreditsState.hx",238,0xdb40a967)

void CreditsState_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_1bf4423a091ce525_23_new)
HXLINE(  29)		this->creditsStuff = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  28)		this->iconArray = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  25)		this->curSelected = -1;
HXLINE(  23)		super::__construct(TransIn,TransOut);
            	}

Dynamic CreditsState_obj::__CreateEmpty() { return new CreditsState_obj; }

void *CreditsState_obj::_hx_vtable = 0;

Dynamic CreditsState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CreditsState_obj > _hx_result = new CreditsState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool CreditsState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3f706236) {
		if (inClassId<=(int)0x24631877) {
			if (inClassId<=(int)0x23a57bae) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x23a57bae;
			} else {
				return inClassId==(int)0x24631877;
			}
		} else {
			return inClassId==(int)0x2f064378 || inClassId==(int)0x3f706236;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x62817b24 || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

void CreditsState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_1bf4423a091ce525_37_create)
HXLINE(  40)		::DiscordClient_obj::changePresence(HX_("Reading the Credits",57,1c,24,1a),null(),null(),null(),null());
HXLINE(  43)		 ::flixel::FlxSprite _hx_tmp =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN(  43)		::String library = null();
HXDLIN(  43)		 ::flixel::graphics::FlxGraphic imageToReturn = ::Paths_obj::addCustomGraphic(HX_("menuDesat",26,91,04,72));
HXDLIN(  43)		 ::Dynamic _hx_tmp1;
HXDLIN(  43)		if (::hx::IsNotNull( imageToReturn )) {
HXLINE(  43)			_hx_tmp1 = imageToReturn;
            		}
            		else {
HXLINE(  43)			_hx_tmp1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("menuDesat",26,91,04,72)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
            		}
HXDLIN(  43)		this->bg = _hx_tmp->loadGraphic(_hx_tmp1,null(),null(),null(),null(),null());
HXLINE(  44)		this->add(this->bg);
HXLINE(  46)		this->grpOptions =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  47)		this->add(this->grpOptions);
HXLINE(  51)		{
HXLINE(  51)			int _g = 0;
HXDLIN(  51)			::Array< ::String > _g1 = ::Paths_obj::getModDirectories();
HXDLIN(  51)			while((_g < _g1->length)){
HXLINE(  51)				::String folder = _g1->__get(_g);
HXDLIN(  51)				_g = (_g + 1);
HXLINE(  53)				::String key = (folder + HX_("/data/credits.txt",a6,fd,31,d1));
HXDLIN(  53)				if (::hx::IsNull( key )) {
HXLINE(  53)					key = HX_("",00,00,00,00);
            				}
HXDLIN(  53)				::String creditsFile = (HX_("mods/",9e,2f,58,0c) + key);
HXLINE(  54)				if (::sys::FileSystem_obj::exists(creditsFile)) {
HXLINE(  56)					::Array< ::String > firstarray = ::sys::io::File_obj::getContent(creditsFile).split(HX_("\n",0a,00,00,00));
HXLINE(  57)					{
HXLINE(  57)						int _g = 0;
HXDLIN(  57)						while((_g < firstarray->length)){
HXLINE(  57)							::String i = firstarray->__get(_g);
HXDLIN(  57)							_g = (_g + 1);
HXLINE(  59)							::Array< ::String > arr = ::StringTools_obj::replace(i,HX_("\\n",92,50,00,00),HX_("\n",0a,00,00,00)).split(HX_("::",c0,32,00,00));
HXLINE(  60)							if ((arr->length >= 5)) {
HXLINE(  60)								arr->push(folder);
            							}
HXLINE(  61)							this->creditsStuff->push(arr);
            						}
            					}
HXLINE(  63)					this->creditsStuff->push(::Array_obj< ::String >::fromData( _hx_array_data_3b81c5b7_7,1));
            				}
            			}
            		}
HXLINE(  66)		::String folder = HX_("",00,00,00,00);
HXLINE(  67)		::String key = HX_("data/credits.txt",77,6f,6e,c6);
HXDLIN(  67)		if (::hx::IsNull( key )) {
HXLINE(  67)			key = HX_("",00,00,00,00);
            		}
HXDLIN(  67)		::String creditsFile = (HX_("mods/",9e,2f,58,0c) + key);
HXLINE(  68)		if (::sys::FileSystem_obj::exists(creditsFile)) {
HXLINE(  70)			::Array< ::String > firstarray = ::sys::io::File_obj::getContent(creditsFile).split(HX_("\n",0a,00,00,00));
HXLINE(  71)			{
HXLINE(  71)				int _g = 0;
HXDLIN(  71)				while((_g < firstarray->length)){
HXLINE(  71)					::String i = firstarray->__get(_g);
HXDLIN(  71)					_g = (_g + 1);
HXLINE(  73)					::Array< ::String > arr = ::StringTools_obj::replace(i,HX_("\\n",92,50,00,00),HX_("\n",0a,00,00,00)).split(HX_("::",c0,32,00,00));
HXLINE(  74)					if ((arr->length >= 5)) {
HXLINE(  74)						arr->push(folder);
            					}
HXLINE(  75)					this->creditsStuff->push(arr);
            				}
            			}
HXLINE(  77)			this->creditsStuff->push(::Array_obj< ::String >::fromData( _hx_array_data_3b81c5b7_8,1));
            		}
HXLINE(  81)		::Array< ::Dynamic> pisspoop = ::Array_obj< ::Dynamic>::__new(21)->init(0,::Array_obj< ::String >::fromData( _hx_array_data_3b81c5b7_9,1))->init(1,::Array_obj< ::String >::fromData( _hx_array_data_3b81c5b7_10,5))->init(2,::Array_obj< ::String >::fromData( _hx_array_data_3b81c5b7_11,5))->init(3,::Array_obj< ::String >::fromData( _hx_array_data_3b81c5b7_12,1))->init(4,::Array_obj< ::String >::fromData( _hx_array_data_3b81c5b7_13,1))->init(5,::Array_obj< ::String >::fromData( _hx_array_data_3b81c5b7_14,5))->init(6,::Array_obj< ::String >::fromData( _hx_array_data_3b81c5b7_15,5))->init(7,::Array_obj< ::String >::fromData( _hx_array_data_3b81c5b7_16,5))->init(8,::Array_obj< ::String >::fromData( _hx_array_data_3b81c5b7_17,1))->init(9,::Array_obj< ::String >::fromData( _hx_array_data_3b81c5b7_18,1))->init(10,::Array_obj< ::String >::fromData( _hx_array_data_3b81c5b7_19,5))->init(11,::Array_obj< ::String >::fromData( _hx_array_data_3b81c5b7_20,5))->init(12,::Array_obj< ::String >::fromData( _hx_array_data_3b81c5b7_21,5))->init(13,::Array_obj< ::String >::fromData( _hx_array_data_3b81c5b7_22,5))->init(14,::Array_obj< ::String >::fromData( _hx_array_data_3b81c5b7_23,5))->init(15,::Array_obj< ::String >::fromData( _hx_array_data_3b81c5b7_24,1))->init(16,::Array_obj< ::String >::fromData( _hx_array_data_3b81c5b7_25,1))->init(17,::Array_obj< ::String >::fromData( _hx_array_data_3b81c5b7_26,5))->init(18,::Array_obj< ::String >::fromData( _hx_array_data_3b81c5b7_27,5))->init(19,::Array_obj< ::String >::fromData( _hx_array_data_3b81c5b7_28,5))->init(20,::Array_obj< ::String >::fromData( _hx_array_data_3b81c5b7_29,5));
HXLINE( 105)		{
HXLINE( 105)			int _g2 = 0;
HXDLIN( 105)			while((_g2 < pisspoop->length)){
HXLINE( 105)				::Array< ::String > i = pisspoop->__get(_g2).StaticCast< ::Array< ::String > >();
HXDLIN( 105)				_g2 = (_g2 + 1);
HXLINE( 106)				this->creditsStuff->push(i);
            			}
            		}
HXLINE( 109)		{
HXLINE( 109)			int _g3 = 0;
HXDLIN( 109)			int _g4 = this->creditsStuff->length;
HXDLIN( 109)			while((_g3 < _g4)){
HXLINE( 109)				_g3 = (_g3 + 1);
HXDLIN( 109)				int i = (_g3 - 1);
HXLINE( 111)				bool isSelectable = !(this->unselectableCheck(i));
HXLINE( 112)				 ::Alphabet optionText =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)((70 * i)) ),this->creditsStuff->__get(i).StaticCast< ::Array< ::String > >()->__get(0),!(isSelectable),false,null(),null());
HXLINE( 113)				optionText->isMenuItem = true;
HXLINE( 114)				optionText->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
HXLINE( 115)				 ::Alphabet optionText1 = optionText;
HXDLIN( 115)				optionText1->yAdd = (optionText1->yAdd - ( (Float)(70) ));
HXLINE( 116)				if (isSelectable) {
HXLINE( 117)					optionText->set_x((optionText->x - ( (Float)(70) )));
            				}
HXLINE( 119)				optionText->forceX = optionText->x;
HXLINE( 121)				optionText->targetY = ( (Float)(i) );
HXLINE( 122)				this->grpOptions->add(optionText).StaticCast<  ::Alphabet >();
HXLINE( 124)				if (isSelectable) {
HXLINE( 125)					if (::hx::IsNotNull( this->creditsStuff->__get(i).StaticCast< ::Array< ::String > >()->__get(5) )) {
HXLINE( 127)						::Paths_obj::currentModDirectory = this->creditsStuff->__get(i).StaticCast< ::Array< ::String > >()->__get(5);
            					}
HXLINE( 130)					 ::AttachedSprite icon =  ::AttachedSprite_obj::__alloc( HX_CTX ,(HX_("credits/",d5,48,ee,de) + this->creditsStuff->__get(i).StaticCast< ::Array< ::String > >()->__get(1)),null(),null(),null());
HXLINE( 131)					icon->xAdd = (optionText->get_width() + 10);
HXLINE( 132)					icon->sprTracker = optionText;
HXLINE( 135)					this->iconArray->push(icon);
HXLINE( 136)					this->add(icon);
HXLINE( 137)					::Paths_obj::currentModDirectory = HX_("",00,00,00,00);
HXLINE( 139)					if ((this->curSelected == -1)) {
HXLINE( 139)						this->curSelected = i;
            					}
            				}
            			}
            		}
HXLINE( 143)		this->descText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,50,600,1180,HX_("",00,00,00,00),32,null());
HXLINE( 144)		 ::flixel::text::FlxText _hx_tmp2 = this->descText;
HXDLIN( 144)		::String file = ::Paths_obj::modFolders((HX_("fonts/",eb,13,ef,fa) + HX_("vcr.ttf",9d,d2,a7,82)));
HXDLIN( 144)		::String _hx_tmp3;
HXDLIN( 144)		if (::sys::FileSystem_obj::exists(file)) {
HXLINE( 144)			_hx_tmp3 = file;
            		}
            		else {
HXLINE( 144)			_hx_tmp3 = (HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82));
            		}
HXDLIN( 144)		_hx_tmp2->setFormat(_hx_tmp3,32,-1,HX_("center",d5,25,db,05),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE( 145)		this->descText->scrollFactor->set(null(),null());
HXLINE( 146)		this->descText->set_borderSize(((Float)2.4));
HXLINE( 147)		this->add(this->descText);
HXLINE( 149)		 ::flixel::FlxSprite _hx_tmp4 = this->bg;
HXDLIN( 149)		_hx_tmp4->set_color(( (int)(this->getCurrentBGColor()) ));
HXLINE( 150)		this->intendedColor = this->bg->color;
HXLINE( 151)		this->changeSelection(null());
HXLINE( 152)		this->super::create();
            	}


void CreditsState_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_1bf4423a091ce525_156_update)
HXLINE( 157)		if ((::flixel::FlxG_obj::sound->music->_volume < ((Float)0.7))) {
HXLINE( 159)			 ::flixel::_hx_system::FlxSound fh = ::flixel::FlxG_obj::sound->music;
HXDLIN( 159)			fh->set_volume((fh->_volume + (((Float)0.5) * ::flixel::FlxG_obj::elapsed)));
            		}
HXLINE( 162)		bool upP = ::PlayerSettings_obj::player1->controls->_ui_upP->check();
HXLINE( 163)		bool downP = ::PlayerSettings_obj::player1->controls->_ui_downP->check();
HXLINE( 165)		if (upP) {
HXLINE( 167)			this->changeSelection(-1);
            		}
HXLINE( 169)		if (downP) {
HXLINE( 171)			this->changeSelection(1);
            		}
HXLINE( 174)		if (::PlayerSettings_obj::player1->controls->_back->check()) {
HXLINE( 176)			if (::hx::IsNotNull( this->colorTween )) {
HXLINE( 177)				this->colorTween->cancel();
            			}
HXLINE( 179)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 179)			_hx_tmp->play(::Paths_obj::sound(HX_("cancelMenu",39,a4,43,b7),null()),null(),null(),null(),null(),null());
HXLINE( 180)			::MusicBeatState_obj::switchState( ::MainMenuState_obj::__alloc( HX_CTX ,null(),null()));
            		}
HXLINE( 182)		if (::PlayerSettings_obj::player1->controls->_accept->check()) {
HXLINE( 183)			::CoolUtil_obj::browserLoad(this->creditsStuff->__get(this->curSelected).StaticCast< ::Array< ::String > >()->__get(3));
            		}
HXLINE( 185)		this->super::update(elapsed);
            	}


void CreditsState_obj::changeSelection(::hx::Null< int >  __o_change){
            		int change = __o_change.Default(0);
            	HX_STACKFRAME(&_hx_pos_1bf4423a091ce525_189_changeSelection)
HXDLIN( 189)		 ::CreditsState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 190)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 190)		_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),((Float)0.4),null(),null(),null(),null());
HXLINE( 191)		while(true){
HXLINE( 192)			 ::CreditsState _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 192)			_hx_tmp->curSelected = (_hx_tmp->curSelected + change);
HXLINE( 193)			if ((this->curSelected < 0)) {
HXLINE( 194)				this->curSelected = (this->creditsStuff->length - 1);
            			}
HXLINE( 195)			if ((this->curSelected >= this->creditsStuff->length)) {
HXLINE( 196)				this->curSelected = 0;
            			}
HXLINE( 191)			if (!(this->unselectableCheck(this->curSelected))) {
HXLINE( 191)				goto _hx_goto_31;
            			}
            		}
            		_hx_goto_31:;
HXLINE( 199)		int newColor = ( (int)(this->getCurrentBGColor()) );
HXLINE( 200)		if ((newColor != this->intendedColor)) {
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::CreditsState,_gthis) HXARGC(1)
            			void _hx_run( ::flixel::tweens::FlxTween twn){
            				HX_STACKFRAME(&_hx_pos_1bf4423a091ce525_207_changeSelection)
HXLINE( 207)				_gthis->colorTween = null();
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE( 201)			if (::hx::IsNotNull( this->colorTween )) {
HXLINE( 202)				this->colorTween->cancel();
            			}
HXLINE( 204)			this->intendedColor = newColor;
HXLINE( 205)			this->colorTween = ::flixel::tweens::FlxTween_obj::color(this->bg,1,this->bg->color,this->intendedColor, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("onComplete",f8,d4,7e,5d), ::Dynamic(new _hx_Closure_0(_gthis)))));
            		}
HXLINE( 212)		int bullShit = 0;
HXLINE( 214)		{
HXLINE( 214)			int _g = 0;
HXDLIN( 214)			::Array< ::Dynamic> _g1 = this->grpOptions->members;
HXDLIN( 214)			while((_g < _g1->length)){
HXLINE( 214)				 ::Alphabet item = _g1->__get(_g).StaticCast<  ::Alphabet >();
HXDLIN( 214)				_g = (_g + 1);
HXLINE( 216)				item->targetY = ( (Float)((bullShit - this->curSelected)) );
HXLINE( 217)				bullShit = (bullShit + 1);
HXLINE( 219)				if (!(this->unselectableCheck((bullShit - 1)))) {
HXLINE( 220)					item->set_alpha(((Float)0.6));
HXLINE( 221)					if ((item->targetY == 0)) {
HXLINE( 222)						item->set_alpha(( (Float)(1) ));
            					}
            				}
            			}
            		}
HXLINE( 226)		this->descText->set_text(this->creditsStuff->__get(this->curSelected).StaticCast< ::Array< ::String > >()->__get(2));
            	}


HX_DEFINE_DYNAMIC_FUNC1(CreditsState_obj,changeSelection,(void))

 ::Dynamic CreditsState_obj::getCurrentBGColor(){
            	HX_STACKFRAME(&_hx_pos_1bf4423a091ce525_229_getCurrentBGColor)
HXLINE( 230)		::String bgColor = this->creditsStuff->__get(this->curSelected).StaticCast< ::Array< ::String > >()->__get(4);
HXLINE( 231)		if (!(::StringTools_obj::startsWith(bgColor,HX_("0x",48,2a,00,00)))) {
HXLINE( 232)			bgColor = (HX_("0xFF",88,89,15,20) + bgColor);
            		}
HXLINE( 234)		return ::Std_obj::parseInt(bgColor);
            	}


HX_DEFINE_DYNAMIC_FUNC0(CreditsState_obj,getCurrentBGColor,return )

bool CreditsState_obj::unselectableCheck(int num){
            	HX_STACKFRAME(&_hx_pos_1bf4423a091ce525_238_unselectableCheck)
HXDLIN( 238)		return (this->creditsStuff->__get(num).StaticCast< ::Array< ::String > >()->length <= 1);
            	}


HX_DEFINE_DYNAMIC_FUNC1(CreditsState_obj,unselectableCheck,return )


::hx::ObjectPtr< CreditsState_obj > CreditsState_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< CreditsState_obj > __this = new CreditsState_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< CreditsState_obj > CreditsState_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	CreditsState_obj *__this = (CreditsState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CreditsState_obj), true, "CreditsState"));
	*(void **)__this = CreditsState_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

CreditsState_obj::CreditsState_obj()
{
}

void CreditsState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CreditsState);
	HX_MARK_MEMBER_NAME(curSelected,"curSelected");
	HX_MARK_MEMBER_NAME(grpOptions,"grpOptions");
	HX_MARK_MEMBER_NAME(iconArray,"iconArray");
	HX_MARK_MEMBER_NAME(creditsStuff,"creditsStuff");
	HX_MARK_MEMBER_NAME(bg,"bg");
	HX_MARK_MEMBER_NAME(descText,"descText");
	HX_MARK_MEMBER_NAME(intendedColor,"intendedColor");
	HX_MARK_MEMBER_NAME(colorTween,"colorTween");
	 ::flixel::addons::ui::FlxUIState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CreditsState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(curSelected,"curSelected");
	HX_VISIT_MEMBER_NAME(grpOptions,"grpOptions");
	HX_VISIT_MEMBER_NAME(iconArray,"iconArray");
	HX_VISIT_MEMBER_NAME(creditsStuff,"creditsStuff");
	HX_VISIT_MEMBER_NAME(bg,"bg");
	HX_VISIT_MEMBER_NAME(descText,"descText");
	HX_VISIT_MEMBER_NAME(intendedColor,"intendedColor");
	HX_VISIT_MEMBER_NAME(colorTween,"colorTween");
	 ::flixel::addons::ui::FlxUIState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val CreditsState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { return ::hx::Val( bg ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"descText") ) { return ::hx::Val( descText ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"iconArray") ) { return ::hx::Val( iconArray ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"grpOptions") ) { return ::hx::Val( grpOptions ); }
		if (HX_FIELD_EQ(inName,"colorTween") ) { return ::hx::Val( colorTween ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { return ::hx::Val( curSelected ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"creditsStuff") ) { return ::hx::Val( creditsStuff ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"intendedColor") ) { return ::hx::Val( intendedColor ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"changeSelection") ) { return ::hx::Val( changeSelection_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getCurrentBGColor") ) { return ::hx::Val( getCurrentBGColor_dyn() ); }
		if (HX_FIELD_EQ(inName,"unselectableCheck") ) { return ::hx::Val( unselectableCheck_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val CreditsState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { bg=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"descText") ) { descText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"iconArray") ) { iconArray=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"grpOptions") ) { grpOptions=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"colorTween") ) { colorTween=inValue.Cast<  ::flixel::tweens::FlxTween >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { curSelected=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"creditsStuff") ) { creditsStuff=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"intendedColor") ) { intendedColor=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CreditsState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("curSelected",fb,eb,ab,32));
	outFields->push(HX_("grpOptions",f9,45,d8,00));
	outFields->push(HX_("iconArray",60,3f,53,5f));
	outFields->push(HX_("creditsStuff",7a,9a,7e,73));
	outFields->push(HX_("bg",c5,55,00,00));
	outFields->push(HX_("descText",9e,53,35,f3));
	outFields->push(HX_("intendedColor",b8,fb,ff,5a));
	outFields->push(HX_("colorTween",08,c2,dc,3d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo CreditsState_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(CreditsState_obj,curSelected),HX_("curSelected",fb,eb,ab,32)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(CreditsState_obj,grpOptions),HX_("grpOptions",f9,45,d8,00)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(CreditsState_obj,iconArray),HX_("iconArray",60,3f,53,5f)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(CreditsState_obj,creditsStuff),HX_("creditsStuff",7a,9a,7e,73)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(CreditsState_obj,bg),HX_("bg",c5,55,00,00)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(CreditsState_obj,descText),HX_("descText",9e,53,35,f3)},
	{::hx::fsInt,(int)offsetof(CreditsState_obj,intendedColor),HX_("intendedColor",b8,fb,ff,5a)},
	{::hx::fsObject /*  ::flixel::tweens::FlxTween */ ,(int)offsetof(CreditsState_obj,colorTween),HX_("colorTween",08,c2,dc,3d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *CreditsState_obj_sStaticStorageInfo = 0;
#endif

static ::String CreditsState_obj_sMemberFields[] = {
	HX_("curSelected",fb,eb,ab,32),
	HX_("grpOptions",f9,45,d8,00),
	HX_("iconArray",60,3f,53,5f),
	HX_("creditsStuff",7a,9a,7e,73),
	HX_("bg",c5,55,00,00),
	HX_("descText",9e,53,35,f3),
	HX_("intendedColor",b8,fb,ff,5a),
	HX_("colorTween",08,c2,dc,3d),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	HX_("changeSelection",bc,98,b5,48),
	HX_("getCurrentBGColor",7b,19,20,ac),
	HX_("unselectableCheck",19,58,ce,19),
	::String(null()) };

::hx::Class CreditsState_obj::__mClass;

void CreditsState_obj::__register()
{
	CreditsState_obj _hx_dummy;
	CreditsState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("CreditsState",b7,c5,81,3b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CreditsState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CreditsState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CreditsState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CreditsState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

