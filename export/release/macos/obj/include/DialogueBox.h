#ifndef INCLUDED_DialogueBox
#define INCLUDED_DialogueBox

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
HX_DECLARE_CLASS0(Alphabet)
HX_DECLARE_CLASS0(DialogueBox)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,addons,text,FlxTypeText)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES DialogueBox_obj : public  ::flixel::group::FlxTypedSpriteGroup_obj
{
	public:
		typedef  ::flixel::group::FlxTypedSpriteGroup_obj super;
		typedef DialogueBox_obj OBJ_;
		DialogueBox_obj();

	public:
		enum { _hx_ClassId = 0x04b35cb7 };

		void __construct(::hx::Null< bool >  __o_isPixel,::Array< ::String > dialogueList);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="DialogueBox")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"DialogueBox"); }
		static ::hx::ObjectPtr< DialogueBox_obj > __new(::hx::Null< bool >  __o_isPixel,::Array< ::String > dialogueList);
		static ::hx::ObjectPtr< DialogueBox_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< bool >  __o_isPixel,::Array< ::String > dialogueList);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DialogueBox_obj();

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
		::String __ToString() const { return HX_("DialogueBox",b3,1f,c8,ff); }

		static void __boot();
		static bool isPixel;
		static bool isEpiphany;
		 ::flixel::FlxSprite box;
		::String curCharacter;
		 ::Alphabet dialogue;
		::Array< ::String > dialogueList;
		bool canSkip;
		bool canFullSkip;
		 ::flixel::addons::text::FlxTypeText swagDialogue;
		 ::flixel::text::FlxText dropText;
		 ::flixel::text::FlxText skipText;
		 ::Dynamic finishThing;
		Dynamic finishThing_dyn() { return finishThing;}
		 ::flixel::FlxSprite backgroundImage;
		 ::flixel::FlxSprite portraitLeft;
		 ::flixel::FlxSprite portraitRight;
		 ::flixel::FlxSprite blackscreen;
		 ::flixel::FlxSprite handSelect;
		 ::flixel::FlxSprite bgFade;
		bool dialogueOpened;
		bool dialogueStarted;
		bool stopspamming;
		void update(Float elapsed);

		void endinstantly();
		::Dynamic endinstantly_dyn();

		void enddialogue();
		::Dynamic enddialogue_dyn();

		bool isEnding;
		bool isCommand;
		void startDialogue();
		::Dynamic startDialogue_dyn();

		void cleanDialog();
		::Dynamic cleanDialog_dyn();

		void funnyGlitch();
		::Dynamic funnyGlitch_dyn();

};


#endif /* INCLUDED_DialogueBox */ 
