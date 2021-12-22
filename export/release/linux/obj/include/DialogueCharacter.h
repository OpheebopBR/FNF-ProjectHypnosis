#ifndef INCLUDED_DialogueCharacter
#define INCLUDED_DialogueCharacter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS0(DialogueCharacter)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)



class HXCPP_CLASS_ATTRIBUTES DialogueCharacter_obj : public  ::flixel::FlxSprite_obj
{
	public:
		typedef  ::flixel::FlxSprite_obj super;
		typedef DialogueCharacter_obj OBJ_;
		DialogueCharacter_obj();

	public:
		enum { _hx_ClassId = 0x7fc7f3a5 };

		void __construct(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::String character);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="DialogueCharacter")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"DialogueCharacter"); }
		static ::hx::ObjectPtr< DialogueCharacter_obj > __new(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::String character);
		static ::hx::ObjectPtr< DialogueCharacter_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::String character);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DialogueCharacter_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DialogueCharacter",51,eb,23,69); }

		static void __boot();
		static ::String IDLE_SUFFIX;
		static ::String DEFAULT_CHARACTER;
		static Float DEFAULT_SCALE;
		 ::Dynamic jsonFile;
		 ::haxe::ds::StringMap dialogueAnimations;
		Float startingPos;
		bool isGhost;
		::String curCharacter;
		int skiptimer;
		int skipping;
		void reloadCharacterJson(::String character);
		::Dynamic reloadCharacterJson_dyn();

		void reloadAnimations();
		::Dynamic reloadAnimations_dyn();

		void playAnim(::String animName,::hx::Null< bool >  playIdle);
		::Dynamic playAnim_dyn();

		bool animationIsLoop();
		::Dynamic animationIsLoop_dyn();

};


#endif /* INCLUDED_DialogueCharacter */ 
