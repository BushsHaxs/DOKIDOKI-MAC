#ifndef INCLUDED_DokiStoryState
#define INCLUDED_DokiStoryState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
HX_DECLARE_CLASS0(DokiStoryState)
HX_DECLARE_CLASS0(MusicBeatState)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS3(flixel,addons,display,FlxBackdrop)
HX_DECLARE_CLASS3(flixel,addons,transition,FlxTransitionableState)
HX_DECLARE_CLASS3(flixel,addons,transition,TransitionData)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIState)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IEventGetter)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES DokiStoryState_obj : public  ::MusicBeatState_obj
{
	public:
		typedef  ::MusicBeatState_obj super;
		typedef DokiStoryState_obj OBJ_;
		DokiStoryState_obj();

	public:
		enum { _hx_ClassId = 0x0b454869 };

		void __construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="DokiStoryState")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"DokiStoryState"); }
		static ::hx::ObjectPtr< DokiStoryState_obj > __new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		static ::hx::ObjectPtr< DokiStoryState_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DokiStoryState_obj();

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
		::String __ToString() const { return HX_("DokiStoryState",45,bd,1b,02); }

		static void __boot();
		static ::String kadeEngineVer;
		static ::String nightly;
		static bool showPopUp;
		static int popupWeek;
		static bool secondaryPopUp;
		static  ::DokiStoryState instance;
		 ::flixel::text::FlxText scoreText;
		::cpp::VirtualArray weekData;
		int curDifficulty;
		::Array< ::String > weekNames;
		 ::flixel::text::FlxText txtWeekTitle;
		 ::flixel::text::FlxText txtTracklist;
		 ::flixel::group::FlxTypedGroup grpWeekText;
		int curSelected;
		 ::flixel::group::FlxTypedGroup menuItems;
		 ::flixel::group::FlxTypedGroup crediticons;
		 ::flixel::group::FlxTypedGroup fixdiff;
		 ::flixel::text::FlxText newGaming;
		 ::flixel::text::FlxText newGaming2;
		bool newInput;
		 ::flixel::FlxSprite logo;
		 ::flixel::FlxSprite songlist;
		 ::flixel::FlxObject camFollow;
		 ::flixel::FlxSprite story_moni;
		 ::flixel::FlxSprite story_sayo;
		 ::flixel::FlxSprite story_nat;
		 ::flixel::FlxSprite story_yuri;
		 ::flixel::FlxSprite story_secret;
		 ::flixel::FlxSprite story_secret2;
		 ::flixel::FlxSprite story_cursor;
		 ::flixel::addons::display::FlxBackdrop backdrop;
		 ::flixel::FlxSprite logoBl;
		 ::flixel::FlxSprite diff;
		 ::flixel::group::FlxTypedGroup grpLocks;
		 ::flixel::group::FlxTypedGroup difficultySelectors;
		 ::flixel::FlxSprite sprDifficulty;
		 ::flixel::FlxSprite leftArrow;
		 ::flixel::FlxSprite rightArrow;
		bool acceptInput;
		void create();

		bool selectedSomethin;
		bool diffselect;
		void update(Float elapsed);

		void changeDiff(::hx::Null< int >  change);
		::Dynamic changeDiff_dyn();

		void goToState();
		::Dynamic goToState_dyn();

		void changeItem(::hx::Null< int >  huh);
		::Dynamic changeItem_dyn();

		void unlockedweeks();
		::Dynamic unlockedweeks_dyn();

		void updateText();
		::Dynamic updateText_dyn();

		void beatHit();

};


#endif /* INCLUDED_DokiStoryState */ 
