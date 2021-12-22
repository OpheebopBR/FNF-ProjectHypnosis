#include <hxcpp.h>

#ifndef INCLUDED_Achievements
#include <Achievements.h>
#endif
#ifndef INCLUDED_AchievementsMenuState
#include <AchievementsMenuState.h>
#endif
#ifndef INCLUDED_Alphabet
#include <Alphabet.h>
#endif
#ifndef INCLUDED_AttachedAchievement
#include <AttachedAchievement.h>
#endif
#ifndef INCLUDED_ClientPrefs
#include <ClientPrefs.h>
#endif
#ifndef INCLUDED_Controls
#include <Controls.h>
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
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c4fc54429970e34b_20_new,"AchievementsMenuState","new",0xb8ffca00,"AchievementsMenuState.new","AchievementsMenuState.hx",20,0x310b7570)
HX_LOCAL_STACK_FRAME(_hx_pos_c4fc54429970e34b_29_create,"AchievementsMenuState","create",0x4027315c,"AchievementsMenuState.create","AchievementsMenuState.hx",29,0x310b7570)
HX_LOCAL_STACK_FRAME(_hx_pos_c4fc54429970e34b_76_update,"AchievementsMenuState","update",0x4b1d5069,"AchievementsMenuState.update","AchievementsMenuState.hx",76,0x310b7570)
HX_LOCAL_STACK_FRAME(_hx_pos_c4fc54429970e34b_92_changeSelection,"AchievementsMenuState","changeSelection",0xa841825c,"AchievementsMenuState.changeSelection","AchievementsMenuState.hx",92,0x310b7570)
HX_LOCAL_STACK_FRAME(_hx_pos_c4fc54429970e34b_24_boot,"AchievementsMenuState","boot",0x1ee9f692,"AchievementsMenuState.boot","AchievementsMenuState.hx",24,0x310b7570)

void AchievementsMenuState_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_c4fc54429970e34b_20_new)
HXLINE(  26)		this->achievementIndex = ::Array_obj< int >::__new(0);
HXLINE(  25)		this->achievementArray = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  22)		this->options = ::Array_obj< ::String >::__new(0);
HXLINE(  20)		super::__construct(TransIn,TransOut);
            	}

Dynamic AchievementsMenuState_obj::__CreateEmpty() { return new AchievementsMenuState_obj; }

void *AchievementsMenuState_obj::_hx_vtable = 0;

Dynamic AchievementsMenuState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AchievementsMenuState_obj > _hx_result = new AchievementsMenuState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool AchievementsMenuState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3f706236) {
		if (inClassId<=(int)0x23a57bae) {
			if (inClassId<=(int)0x0c60eb6a) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0c60eb6a;
			} else {
				return inClassId==(int)0x23a57bae;
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

void AchievementsMenuState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_c4fc54429970e34b_29_create)
HXLINE(  31)		::DiscordClient_obj::changePresence(HX_("Achievements Menu",1b,7e,30,71),null(),null(),null(),null());
HXLINE(  34)		 ::flixel::FlxSprite menuBG =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN(  34)		::String library = null();
HXDLIN(  34)		 ::flixel::graphics::FlxGraphic imageToReturn = ::Paths_obj::addCustomGraphic(HX_("menuBGBlue",de,35,e3,1e));
HXDLIN(  34)		 ::Dynamic menuBG1;
HXDLIN(  34)		if (::hx::IsNotNull( imageToReturn )) {
HXLINE(  34)			menuBG1 = imageToReturn;
            		}
            		else {
HXLINE(  34)			menuBG1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("menuBGBlue",de,35,e3,1e)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
            		}
HXDLIN(  34)		 ::flixel::FlxSprite menuBG2 = menuBG->loadGraphic(menuBG1,null(),null(),null(),null(),null());
HXLINE(  35)		menuBG2->setGraphicSize(::Std_obj::_hx_int((menuBG2->get_width() * ((Float)1.1))),null());
HXLINE(  36)		menuBG2->updateHitbox();
HXLINE(  37)		menuBG2->screenCenter(null());
HXLINE(  38)		menuBG2->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE(  39)		this->add(menuBG2);
HXLINE(  41)		this->grpOptions =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  42)		this->add(this->grpOptions);
HXLINE(  44)		{
HXLINE(  44)			int _g = 0;
HXDLIN(  44)			int _g1 = ::Achievements_obj::achievementsStuff->get_length();
HXDLIN(  44)			while((_g < _g1)){
HXLINE(  44)				_g = (_g + 1);
HXDLIN(  44)				int i = (_g - 1);
HXLINE(  45)				bool _hx_tmp;
HXDLIN(  45)				if (( (bool)(::Achievements_obj::achievementsStuff->__get(i)->__GetItem(3)) )) {
HXLINE(  45)					_hx_tmp = ::Achievements_obj::achievementsMap->exists(( (::String)(::Achievements_obj::achievementsStuff->__get(i)->__GetItem(2)) ));
            				}
            				else {
HXLINE(  45)					_hx_tmp = true;
            				}
HXDLIN(  45)				if (_hx_tmp) {
HXLINE(  46)					this->options->push(::Achievements_obj::achievementsStuff->__get(i));
HXLINE(  47)					this->achievementIndex->push(i);
            				}
            			}
            		}
HXLINE(  51)		{
HXLINE(  51)			int _g2 = 0;
HXDLIN(  51)			int _g3 = this->options->length;
HXDLIN(  51)			while((_g2 < _g3)){
HXLINE(  51)				_g2 = (_g2 + 1);
HXDLIN(  51)				int i = (_g2 - 1);
HXLINE(  52)				::String achieveName = ( (::String)(::Achievements_obj::achievementsStuff->__get(this->achievementIndex->__get(i))->__GetItem(2)) );
HXLINE(  53)				::String optionText;
HXDLIN(  53)				if (::Achievements_obj::isAchievementUnlocked(achieveName)) {
HXLINE(  53)					optionText = ( (::String)(::Achievements_obj::achievementsStuff->__get(this->achievementIndex->__get(i))->__GetItem(0)) );
            				}
            				else {
HXLINE(  53)					optionText = HX_("?",3f,00,00,00);
            				}
HXDLIN(  53)				 ::Alphabet optionText1 =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(((100 * i) + 210)) ),optionText,false,false,null(),null());
HXLINE(  54)				optionText1->isMenuItem = true;
HXLINE(  55)				optionText1->set_x((optionText1->x + 280));
HXLINE(  56)				optionText1->xAdd = ( (Float)(200) );
HXLINE(  57)				optionText1->targetY = ( (Float)(i) );
HXLINE(  58)				this->grpOptions->add(optionText1).StaticCast<  ::Alphabet >();
HXLINE(  60)				 ::AttachedAchievement icon =  ::AttachedAchievement_obj::__alloc( HX_CTX ,(optionText1->x - ( (Float)(105) )),optionText1->y,achieveName);
HXLINE(  61)				icon->sprTracker = optionText1;
HXLINE(  62)				this->achievementArray->push(icon);
HXLINE(  63)				this->add(icon);
            			}
            		}
HXLINE(  66)		this->descText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,150,600,980,HX_("",00,00,00,00),32,null());
HXLINE(  67)		 ::flixel::text::FlxText _hx_tmp = this->descText;
HXDLIN(  67)		::String file = ::Paths_obj::modFolders((HX_("fonts/",eb,13,ef,fa) + HX_("vcr.ttf",9d,d2,a7,82)));
HXDLIN(  67)		::String _hx_tmp1;
HXDLIN(  67)		if (::sys::FileSystem_obj::exists(file)) {
HXLINE(  67)			_hx_tmp1 = file;
            		}
            		else {
HXLINE(  67)			_hx_tmp1 = (HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82));
            		}
HXDLIN(  67)		_hx_tmp->setFormat(_hx_tmp1,32,-1,HX_("center",d5,25,db,05),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE(  68)		this->descText->scrollFactor->set(null(),null());
HXLINE(  69)		this->descText->set_borderSize(((Float)2.4));
HXLINE(  70)		this->add(this->descText);
HXLINE(  71)		this->changeSelection(null());
HXLINE(  73)		this->super::create();
            	}


void AchievementsMenuState_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_c4fc54429970e34b_76_update)
HXLINE(  77)		this->super::update(elapsed);
HXLINE(  79)		if (::PlayerSettings_obj::player1->controls->_ui_upP->check()) {
HXLINE(  80)			this->changeSelection(-1);
            		}
HXLINE(  82)		if (::PlayerSettings_obj::player1->controls->_ui_downP->check()) {
HXLINE(  83)			this->changeSelection(1);
            		}
HXLINE(  86)		if (::PlayerSettings_obj::player1->controls->_back->check()) {
HXLINE(  87)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(  87)			_hx_tmp->play(::Paths_obj::sound(HX_("cancelMenu",39,a4,43,b7),null()),null(),null(),null(),null(),null());
HXLINE(  88)			::MusicBeatState_obj::switchState( ::MainMenuState_obj::__alloc( HX_CTX ,null(),null()));
            		}
            	}


void AchievementsMenuState_obj::changeSelection(::hx::Null< int >  __o_change){
            		int change = __o_change.Default(0);
            	HX_STACKFRAME(&_hx_pos_c4fc54429970e34b_92_changeSelection)
HXLINE(  93)		 ::Dynamic _hx_tmp = ::hx::ClassOf< ::AchievementsMenuState >();
HXDLIN(  93)		::AchievementsMenuState_obj::curSelected = (::AchievementsMenuState_obj::curSelected + change);
HXLINE(  94)		if ((::AchievementsMenuState_obj::curSelected < 0)) {
HXLINE(  95)			::AchievementsMenuState_obj::curSelected = (this->options->length - 1);
            		}
HXLINE(  96)		if ((::AchievementsMenuState_obj::curSelected >= this->options->length)) {
HXLINE(  97)			::AchievementsMenuState_obj::curSelected = 0;
            		}
HXLINE(  99)		int bullShit = 0;
HXLINE( 101)		{
HXLINE( 101)			int _g = 0;
HXDLIN( 101)			::Array< ::Dynamic> _g1 = this->grpOptions->members;
HXDLIN( 101)			while((_g < _g1->length)){
HXLINE( 101)				 ::Alphabet item = _g1->__get(_g).StaticCast<  ::Alphabet >();
HXDLIN( 101)				_g = (_g + 1);
HXLINE( 102)				item->targetY = ( (Float)((bullShit - ::AchievementsMenuState_obj::curSelected)) );
HXLINE( 103)				bullShit = (bullShit + 1);
HXLINE( 105)				item->set_alpha(((Float)0.6));
HXLINE( 106)				if ((item->targetY == 0)) {
HXLINE( 107)					item->set_alpha(( (Float)(1) ));
            				}
            			}
            		}
HXLINE( 111)		{
HXLINE( 111)			int _g2 = 0;
HXDLIN( 111)			int _g3 = this->achievementArray->length;
HXDLIN( 111)			while((_g2 < _g3)){
HXLINE( 111)				_g2 = (_g2 + 1);
HXDLIN( 111)				int i = (_g2 - 1);
HXLINE( 112)				this->achievementArray->__get(i).StaticCast<  ::AttachedAchievement >()->set_alpha(((Float)0.6));
HXLINE( 113)				if ((i == ::AchievementsMenuState_obj::curSelected)) {
HXLINE( 114)					this->achievementArray->__get(i).StaticCast<  ::AttachedAchievement >()->set_alpha(( (Float)(1) ));
            				}
            			}
            		}
HXLINE( 117)		this->descText->set_text(( (::String)(::Achievements_obj::achievementsStuff->__get(this->achievementIndex->__get(::AchievementsMenuState_obj::curSelected))->__GetItem(1)) ));
            	}


HX_DEFINE_DYNAMIC_FUNC1(AchievementsMenuState_obj,changeSelection,(void))

int AchievementsMenuState_obj::curSelected;


::hx::ObjectPtr< AchievementsMenuState_obj > AchievementsMenuState_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< AchievementsMenuState_obj > __this = new AchievementsMenuState_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< AchievementsMenuState_obj > AchievementsMenuState_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	AchievementsMenuState_obj *__this = (AchievementsMenuState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AchievementsMenuState_obj), true, "AchievementsMenuState"));
	*(void **)__this = AchievementsMenuState_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

AchievementsMenuState_obj::AchievementsMenuState_obj()
{
}

void AchievementsMenuState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AchievementsMenuState);
	HX_MARK_MEMBER_NAME(options,"options");
	HX_MARK_MEMBER_NAME(grpOptions,"grpOptions");
	HX_MARK_MEMBER_NAME(achievementArray,"achievementArray");
	HX_MARK_MEMBER_NAME(achievementIndex,"achievementIndex");
	HX_MARK_MEMBER_NAME(descText,"descText");
	 ::flixel::addons::ui::FlxUIState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void AchievementsMenuState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(options,"options");
	HX_VISIT_MEMBER_NAME(grpOptions,"grpOptions");
	HX_VISIT_MEMBER_NAME(achievementArray,"achievementArray");
	HX_VISIT_MEMBER_NAME(achievementIndex,"achievementIndex");
	HX_VISIT_MEMBER_NAME(descText,"descText");
	 ::flixel::addons::ui::FlxUIState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val AchievementsMenuState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { return ::hx::Val( options ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"descText") ) { return ::hx::Val( descText ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"grpOptions") ) { return ::hx::Val( grpOptions ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"changeSelection") ) { return ::hx::Val( changeSelection_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"achievementArray") ) { return ::hx::Val( achievementArray ); }
		if (HX_FIELD_EQ(inName,"achievementIndex") ) { return ::hx::Val( achievementIndex ); }
	}
	return super::__Field(inName,inCallProp);
}

bool AchievementsMenuState_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { outValue = ( curSelected ); return true; }
	}
	return false;
}

::hx::Val AchievementsMenuState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { options=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"descText") ) { descText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"grpOptions") ) { grpOptions=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"achievementArray") ) { achievementArray=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"achievementIndex") ) { achievementIndex=inValue.Cast< ::Array< int > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool AchievementsMenuState_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { curSelected=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void AchievementsMenuState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("options",5e,33,fe,df));
	outFields->push(HX_("grpOptions",f9,45,d8,00));
	outFields->push(HX_("achievementArray",aa,2a,65,57));
	outFields->push(HX_("achievementIndex",23,58,ea,ef));
	outFields->push(HX_("descText",9e,53,35,f3));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo AchievementsMenuState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(AchievementsMenuState_obj,options),HX_("options",5e,33,fe,df)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(AchievementsMenuState_obj,grpOptions),HX_("grpOptions",f9,45,d8,00)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(AchievementsMenuState_obj,achievementArray),HX_("achievementArray",aa,2a,65,57)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(AchievementsMenuState_obj,achievementIndex),HX_("achievementIndex",23,58,ea,ef)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(AchievementsMenuState_obj,descText),HX_("descText",9e,53,35,f3)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo AchievementsMenuState_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &AchievementsMenuState_obj::curSelected,HX_("curSelected",fb,eb,ab,32)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String AchievementsMenuState_obj_sMemberFields[] = {
	HX_("options",5e,33,fe,df),
	HX_("grpOptions",f9,45,d8,00),
	HX_("achievementArray",aa,2a,65,57),
	HX_("achievementIndex",23,58,ea,ef),
	HX_("descText",9e,53,35,f3),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	HX_("changeSelection",bc,98,b5,48),
	::String(null()) };

static void AchievementsMenuState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AchievementsMenuState_obj::curSelected,"curSelected");
};

#ifdef HXCPP_VISIT_ALLOCS
static void AchievementsMenuState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AchievementsMenuState_obj::curSelected,"curSelected");
};

#endif

::hx::Class AchievementsMenuState_obj::__mClass;

static ::String AchievementsMenuState_obj_sStaticFields[] = {
	HX_("curSelected",fb,eb,ab,32),
	::String(null())
};

void AchievementsMenuState_obj::__register()
{
	AchievementsMenuState_obj _hx_dummy;
	AchievementsMenuState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("AchievementsMenuState",0e,0a,5b,3f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AchievementsMenuState_obj::__GetStatic;
	__mClass->mSetStaticField = &AchievementsMenuState_obj::__SetStatic;
	__mClass->mMarkFunc = AchievementsMenuState_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(AchievementsMenuState_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(AchievementsMenuState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< AchievementsMenuState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = AchievementsMenuState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AchievementsMenuState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AchievementsMenuState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void AchievementsMenuState_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_c4fc54429970e34b_24_boot)
HXDLIN(  24)		curSelected = 0;
            	}
}

