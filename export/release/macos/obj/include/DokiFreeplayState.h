#ifndef INCLUDED_DokiFreeplayState
#define INCLUDED_DokiFreeplayState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
HX_DECLARE_CLASS0(DokiFreeplayState)
HX_DECLARE_CLASS0(HealthIcon)
HX_DECLARE_CLASS0(MusicBeatState)
HX_DECLARE_CLASS0(SongMetadatatwo)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS3(flixel,addons,transition,FlxTransitionableState)
HX_DECLARE_CLASS3(flixel,addons,transition,TransitionData)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIState)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IEventGetter)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)



class HXCPP_CLASS_ATTRIBUTES DokiFreeplayState_obj : public  ::MusicBeatState_obj
{
	public:
		typedef  ::MusicBeatState_obj super;
		typedef DokiFreeplayState_obj OBJ_;
		DokiFreeplayState_obj();

	public:
		enum { _hx_ClassId = 0x4875aac8 };

		void __construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="DokiFreeplayState")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"DokiFreeplayState"); }
		static ::hx::ObjectPtr< DokiFreeplayState_obj > __new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		static ::hx::ObjectPtr< DokiFreeplayState_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DokiFreeplayState_obj();

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
		::String __ToString() const { return HX_("DokiFreeplayState",88,f5,da,f8); }

		static void __boot();
		static int curPage;
		static bool pageFlipped;
		static  ::haxe::ds::StringMap songData;
		static void loadDiff(int diff,::String name,::Array< ::Dynamic> array);
		static ::Dynamic loadDiff_dyn();

		::Array< ::Dynamic> songs;
		 ::flixel::FlxSprite menu_character;
		 ::flixel::text::FlxText selector;
		int curSelected;
		int curDifficulty;
		bool goku;
		bool diffselect;
		 ::flixel::text::FlxText scoreText;
		 ::flixel::text::FlxText diffText;
		int lerpScore;
		int intendedScore;
		 ::flixel::FlxSprite diff;
		 ::flixel::FlxSprite bg;
		 ::flixel::group::FlxTypedGroup grpSongs;
		bool curPlaying;
		::Array< ::Dynamic> iconArray;
		void create();

		void addSong(::String songName,int weekNum,::String songCharacter);
		::Dynamic addSong_dyn();

		bool selectedSomethin;
		void update(Float elapsed);

		void startsong();
		::Dynamic startsong_dyn();

		void loadSong(::hx::Null< bool >  isCharting);
		::Dynamic loadSong_dyn();

		void changeDiff(::hx::Null< int >  change);
		::Dynamic changeDiff_dyn();

		void changeItem(::hx::Null< int >  huh);
		::Dynamic changeItem_dyn();

		void changePage(::hx::Null< int >  huh);
		::Dynamic changePage_dyn();

};


#endif /* INCLUDED_DokiFreeplayState */ 
