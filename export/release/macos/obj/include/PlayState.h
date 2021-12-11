#ifndef INCLUDED_PlayState
#define INCLUDED_PlayState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
HX_DECLARE_CLASS0(BackgroundGirls)
HX_DECLARE_CLASS0(Boyfriend)
HX_DECLARE_CLASS0(Character)
HX_DECLARE_CLASS0(Date)
HX_DECLARE_CLASS0(DialogueBox)
HX_DECLARE_CLASS0(HealthIcon)
HX_DECLARE_CLASS0(MusicBeatState)
HX_DECLARE_CLASS0(Note)
HX_DECLARE_CLASS0(PlayState)
HX_DECLARE_CLASS0(Replay)
HX_DECLARE_CLASS0(WiggleEffect)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxCamera)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS1(flixel,FlxSubState)
HX_DECLARE_CLASS3(flixel,addons,display,FlxBackdrop)
HX_DECLARE_CLASS3(flixel,addons,transition,FlxTransitionableState)
HX_DECLARE_CLASS3(flixel,addons,transition,TransitionData)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIState)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IEventGetter)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,_hx_system,FlxSound)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,tweens,FlxTween)
HX_DECLARE_CLASS2(flixel,ui,FlxBar)
HX_DECLARE_CLASS2(flixel,util,FlxTimer)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES PlayState_obj : public  ::MusicBeatState_obj
{
	public:
		typedef  ::MusicBeatState_obj super;
		typedef PlayState_obj OBJ_;
		PlayState_obj();

	public:
		enum { _hx_ClassId = 0x0a05f89d };

		void __construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="PlayState")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"PlayState"); }
		static ::hx::ObjectPtr< PlayState_obj > __new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		static ::hx::ObjectPtr< PlayState_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PlayState_obj();

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
		::String __ToString() const { return HX_("PlayState",5d,83,c2,46); }

		static void __boot();
		static  ::PlayState instance;
		static bool showCutscene;
		static ::String curStage;
		static  ::Dynamic SONG;
		static bool isStoryMode;
		static int storyWeek;
		static ::Array< ::String > storyPlaylist;
		static int storyDifficulty;
		static int weekSong;
		static int shits;
		static int bads;
		static int goods;
		static int sicks;
		static  ::flixel::FlxSprite songPosBG;
		static  ::flixel::ui::FlxBar songPosBar;
		static  ::Replay rep;
		static bool loadRep;
		static ::Array< bool > noteBools;
		static  ::Character spirit;
		static  ::Character dad;
		static  ::Character gf;
		static  ::Boyfriend boyfriend;
		static  ::flixel::FlxObject prevCamFollow;
		static  ::flixel::group::FlxTypedGroup strumLineNotes;
		static  ::flixel::group::FlxTypedGroup playerStrums;
		static  ::flixel::group::FlxTypedGroup cpuStrums;
		static int misses;
		static bool offsetTesting;
		static int campaignScore;
		static Float daPixelZoom;
		static bool theFunne;
		static bool cannotDie;
		static int repPresses;
		static int repReleases;
		static Float timeCurrently;
		static Float timeCurrentlyR;
		static Float songOffset;
		static Float songRate;
		bool midsongcutscene;
		bool yuriGoneCrazy;
		 ::DialogueBox doof;
		 ::DialogueBox doof2;
		 ::DialogueBox doof3;
		 ::DialogueBox doof4;
		 ::DialogueBox doof5;
		 ::DialogueBox doof6;
		Float songLength;
		 ::flixel::text::FlxText kadeEngineWatermark;
		 ::flixel::_hx_system::FlxSound vocals;
		 ::flixel::group::FlxTypedGroup notes;
		::Array< ::Dynamic> unspawnNotes;
		 ::flixel::FlxSprite strumLine;
		int curSection;
		 ::flixel::FlxObject camFollow;
		 ::flixel::FlxSprite laneunderlay;
		 ::flixel::FlxSprite laneunderlayOpponent;
		bool isPixelUI;
		bool camZooming;
		bool camFocus;
		::String curSong;
		int gfSpeed;
		Float health;
		int combo;
		Float accuracy;
		Float accuracyDefault;
		Float totalNotesHit;
		Float totalNotesHitDefault;
		int totalPlayed;
		bool ss;
		 ::flixel::FlxSprite healthBarBG;
		 ::flixel::ui::FlxBar healthBar;
		Float songPositionBar;
		bool generatedMusic;
		bool startingSong;
		 ::HealthIcon iconP1;
		 ::HealthIcon iconP2;
		 ::flixel::FlxCamera camHUD;
		 ::flixel::FlxCamera camGame;
		::Array< ::Dynamic> notesHitArray;
		int currentFrames;
		::Array< ::String > dialogue;
		::Array< ::String > extra1;
		::Array< ::String > extra2;
		::Array< ::String > extra3;
		::Array< ::String > extra4;
		::Array< ::String > preintro;
		 ::flixel::addons::display::FlxBackdrop sparkleFG;
		 ::flixel::addons::display::FlxBackdrop sparkleBG;
		 ::flixel::FlxSprite pinkOverlay;
		 ::flixel::FlxSprite bakaOverlay;
		 ::flixel::FlxSprite vignette;
		 ::flixel::FlxSprite staticshock;
		 ::flixel::FlxSprite halloweenBG;
		bool isHalloween;
		 ::flixel::FlxSprite oldspace;
		 ::flixel::group::FlxTypedGroup phillyCityLights;
		 ::flixel::FlxSprite phillyTrain;
		 ::flixel::_hx_system::FlxSound trainSound;
		 ::flixel::FlxObject camend;
		 ::flixel::FlxSprite popup;
		 ::flixel::FlxSprite lights_front;
		 ::flixel::FlxSprite deskfront;
		 ::flixel::FlxSprite closet;
		 ::flixel::FlxSprite clubroom;
		 ::flixel::FlxSprite lights_back;
		 ::flixel::FlxSprite banner;
		 ::flixel::FlxSprite fgTrees;
		 ::flixel::FlxSprite bgSky;
		 ::flixel::FlxSprite bgSchool;
		 ::flixel::FlxSprite bgStreet;
		 ::flixel::FlxSprite bgTrees;
		 ::flixel::FlxSprite treeLeaves;
		 ::flixel::FlxSprite monika;
		 ::flixel::FlxSprite sayori;
		 ::flixel::FlxSprite yuri;
		 ::flixel::FlxSprite natsuki;
		 ::flixel::FlxSprite protag;
		 ::flixel::FlxSprite imageBG;
		 ::flixel::FlxSprite monikatransformer;
		 ::flixel::FlxSprite limo;
		 ::flixel::group::FlxTypedGroup grpLimoDancers;
		 ::flixel::FlxSprite fastCar;
		 ::flixel::text::FlxText songName;
		 ::flixel::FlxSprite upperBoppers;
		 ::flixel::FlxSprite bottomBoppers;
		 ::flixel::FlxSprite santa;
		 ::flixel::addons::display::FlxBackdrop space;
		 ::flixel::FlxSprite whiteflash;
		 ::flixel::FlxSprite blackScreen;
		 ::flixel::FlxSprite blackScreenBG;
		 ::flixel::FlxSprite blackScreentwo;
		::String altAnim;
		bool fc;
		bool isintro;
		bool incutsceneforendingsmh;
		 ::BackgroundGirls bgGirls;
		 ::WiggleEffect wiggleShit;
		 ::flixel::tweens::FlxTween camtween;
		bool talking;
		int songScore;
		int songScoreDef;
		 ::flixel::text::FlxText scoreTxt;
		 ::flixel::text::FlxText replayTxt;
		Float defaultCamZoom;
		 ::flixel::FlxSprite funneEffect;
		bool inCutscene;
		bool usedTimeTravel;
		bool triggeredAlready;
		bool allowedToHeadbang;
		 ::flixel::text::FlxText botPlayState;
		::Array< Float > saveNotes;
		bool executeModchart;
		void addObject( ::flixel::FlxBasic object);
		::Dynamic addObject_dyn();

		void removeObject( ::flixel::FlxBasic object);
		::Dynamic removeObject_dyn();

		void create();

		void dualdemisecountdown( ::DialogueBox dialogueBox);
		::Dynamic dualdemisecountdown_dyn();

		void DarkStart( ::DialogueBox dialogueBox);
		::Dynamic DarkStart_dyn();

		void epipdarkstart( ::DialogueBox dialogueBox);
		::Dynamic epipdarkstart_dyn();

		void funnyephiphinya( ::DialogueBox dialogueBox);
		::Dynamic funnyephiphinya_dyn();

		void endcutscene( ::DialogueBox dialogueBox);
		::Dynamic endcutscene_dyn();

		void obsessionending();
		::Dynamic obsessionending_dyn();

		void preintrocutscene( ::DialogueBox dialogueBox);
		::Dynamic preintrocutscene_dyn();

		bool isObsessionIntro;
		void postdialoguecutscene();
		::Dynamic postdialoguecutscene_dyn();

		void introcutscene( ::DialogueBox dialogueBox);
		::Dynamic introcutscene_dyn();

		 ::flixel::util::FlxTimer startTimer;
		bool perfectMode;
		::Array< ::Dynamic> luaWiggles;
		void startCountdown();
		::Dynamic startCountdown_dyn();

		int previousFrameTime;
		int lastReportedPlayheadPosition;
		Float songTime;
		bool songStarted;
		void startSong();
		::Dynamic startSong_dyn();

		int debugNum;
		void generateSong(::String dataPath);
		::Dynamic generateSong_dyn();

		int sortByShit( ::Note Obj1, ::Note Obj2);
		::Dynamic sortByShit_dyn();

		void generateStaticArrows(int player,::String noteStyle,::hx::Null< bool >  tweenIn);
		::Dynamic generateStaticArrows_dyn();

		void tweenCamIn();
		::Dynamic tweenCamIn_dyn();

		void openSubState( ::flixel::FlxSubState SubState);

		void closeSubState();

		void resyncVocals();
		::Dynamic resyncVocals_dyn();

		bool paused;
		bool startedCountdown;
		bool canPause;
		int nps;
		int maxNPS;
		void update(Float elapsed);

		void songOutro();
		::Dynamic songOutro_dyn();

		void endSong();
		::Dynamic endSong_dyn();

		bool endingSong;
		::Array< Float > hits;
		Float offsetTest;
		int timeShown;
		 ::flixel::text::FlxText currentTimingShown;
		::String pixelShitPart1;
		::String pixelShitPart2;
		void popUpScore( ::Note daNote);
		::Dynamic popUpScore_dyn();

		bool NearlyEquals(Float value1,Float value2,::hx::Null< Float >  unimportantDifference);
		::Dynamic NearlyEquals_dyn();

		bool upHold;
		bool downHold;
		bool rightHold;
		bool leftHold;
		void keyShit();
		::Dynamic keyShit_dyn();

		void noteMiss(::hx::Null< int >  direction, ::Note daNote);
		::Dynamic noteMiss_dyn();

		void updateAccuracy();
		::Dynamic updateAccuracy_dyn();

		int getKeyPresses( ::Note note);
		::Dynamic getKeyPresses_dyn();

		int mashing;
		int mashViolations;
		int etternaModeScore;
		void noteCheck(::Array< bool > controlArray, ::Note note);
		::Dynamic noteCheck_dyn();

		void goodNoteHit( ::Note note,::hx::Null< bool >  resetMashViolation);
		::Dynamic goodNoteHit_dyn();

		bool fastCarCanDrive;
		void resetFastCar();
		::Dynamic resetFastCar_dyn();

		void fastCarDrive();
		::Dynamic fastCarDrive_dyn();

		bool trainMoving;
		Float trainFrameTiming;
		int trainCars;
		bool trainFinishing;
		int trainCooldown;
		void trainStart();
		::Dynamic trainStart_dyn();

		bool startedMoving;
		void updateTrainPos();
		::Dynamic updateTrainPos_dyn();

		void trainReset();
		::Dynamic trainReset_dyn();

		void lightningStrikeShit();
		::Dynamic lightningStrikeShit_dyn();

		void stepHit();

		int lightningStrikeBeat;
		int lightningOffset;
		void beatHit();

		void yuriGoCrazy();
		::Dynamic yuriGoCrazy_dyn();

		void gopixel();
		::Dynamic gopixel_dyn();

		void becomefumo();
		::Dynamic becomefumo_dyn();

		int curLight;
};


#endif /* INCLUDED_PlayState */ 
