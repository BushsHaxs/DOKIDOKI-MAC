#include <hxcpp.h>

#ifndef INCLUDED_Conductor
#include <Conductor.h>
#endif
#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_CoolUtil
#include <CoolUtil.h>
#endif
#ifndef INCLUDED_DokiStoryState
#include <DokiStoryState.h>
#endif
#ifndef INCLUDED_KeyboardScheme
#include <KeyboardScheme.h>
#endif
#ifndef INCLUDED_LangUtil
#include <LangUtil.h>
#endif
#ifndef INCLUDED_LoadingState
#include <LoadingState.h>
#endif
#ifndef INCLUDED_MainMenuState
#include <MainMenuState.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_MusicBeatSubstate
#include <MusicBeatSubstate.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_PlayerSettings
#include <PlayerSettings.h>
#endif
#ifndef INCLUDED_PopupMessage
#include <PopupMessage.h>
#endif
#ifndef INCLUDED_Song
#include <Song.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxCameraFollowStyle
#include <flixel/FlxCameraFollowStyle.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
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
#ifndef INCLUDED_flixel_FlxSubState
#include <flixel/FlxSubState.h>
#endif
#ifndef INCLUDED_flixel_addons_display_FlxBackdrop
#include <flixel/addons/display/FlxBackdrop.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimation
#include <flixel/animation/FlxAnimation.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxBaseAnimation
#include <flixel/animation/FlxBaseAnimation.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
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
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
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
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimerManager
#include <flixel/util/FlxTimerManager.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_media_SoundChannel
#include <openfl/media/SoundChannel.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_362c9079ec11828f_27_new,"DokiStoryState","new",0x409fe4b7,"DokiStoryState.new","DokiStoryState.hx",27,0x1bd75e99)
HX_LOCAL_STACK_FRAME(_hx_pos_362c9079ec11828f_96_create,"DokiStoryState","create",0xe5096305,"DokiStoryState.create","DokiStoryState.hx",96,0x1bd75e99)
HX_LOCAL_STACK_FRAME(_hx_pos_362c9079ec11828f_268_update,"DokiStoryState","update",0xefff8212,"DokiStoryState.update","DokiStoryState.hx",268,0x1bd75e99)
HX_LOCAL_STACK_FRAME(_hx_pos_362c9079ec11828f_570_changeDiff,"DokiStoryState","changeDiff",0x1ef5c61e,"DokiStoryState.changeDiff","DokiStoryState.hx",570,0x1bd75e99)
HX_LOCAL_STACK_FRAME(_hx_pos_362c9079ec11828f_640_goToState,"DokiStoryState","goToState",0x1a4014e5,"DokiStoryState.goToState","DokiStoryState.hx",640,0x1bd75e99)
HX_LOCAL_STACK_FRAME(_hx_pos_362c9079ec11828f_590_goToState,"DokiStoryState","goToState",0x1a4014e5,"DokiStoryState.goToState","DokiStoryState.hx",590,0x1bd75e99)
static const ::String _hx_array_data_021bbd45_6[] = {
	HX_("erb",55,07,4d,00),
};
HX_LOCAL_STACK_FRAME(_hx_pos_362c9079ec11828f_670_changeItem,"DokiStoryState","changeItem",0x224c2f2c,"DokiStoryState.changeItem","DokiStoryState.hx",670,0x1bd75e99)
HX_LOCAL_STACK_FRAME(_hx_pos_362c9079ec11828f_720_unlockedweeks,"DokiStoryState","unlockedweeks",0xc9750a13,"DokiStoryState.unlockedweeks","DokiStoryState.hx",720,0x1bd75e99)
HX_LOCAL_STACK_FRAME(_hx_pos_362c9079ec11828f_754_updateText,"DokiStoryState","updateText",0x07f1ebdf,"DokiStoryState.updateText","DokiStoryState.hx",754,0x1bd75e99)
HX_LOCAL_STACK_FRAME(_hx_pos_362c9079ec11828f_771_beatHit,"DokiStoryState","beatHit",0xe5c77654,"DokiStoryState.beatHit","DokiStoryState.hx",771,0x1bd75e99)
HX_LOCAL_STACK_FRAME(_hx_pos_362c9079ec11828f_56_boot,"DokiStoryState","boot",0x43613bfb,"DokiStoryState.boot","DokiStoryState.hx",56,0x1bd75e99)
HX_LOCAL_STACK_FRAME(_hx_pos_362c9079ec11828f_57_boot,"DokiStoryState","boot",0x43613bfb,"DokiStoryState.boot","DokiStoryState.hx",57,0x1bd75e99)
HX_LOCAL_STACK_FRAME(_hx_pos_362c9079ec11828f_70_boot,"DokiStoryState","boot",0x43613bfb,"DokiStoryState.boot","DokiStoryState.hx",70,0x1bd75e99)
HX_LOCAL_STACK_FRAME(_hx_pos_362c9079ec11828f_71_boot,"DokiStoryState","boot",0x43613bfb,"DokiStoryState.boot","DokiStoryState.hx",71,0x1bd75e99)
HX_LOCAL_STACK_FRAME(_hx_pos_362c9079ec11828f_72_boot,"DokiStoryState","boot",0x43613bfb,"DokiStoryState.boot","DokiStoryState.hx",72,0x1bd75e99)

void DokiStoryState_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_362c9079ec11828f_27_new)
HXLINE( 265)		this->diffselect = false;
HXLINE( 264)		this->selectedSomethin = false;
HXLINE(  93)		this->acceptInput = true;
HXLINE(  65)		this->newInput = true;
HXLINE(  54)		this->curSelected = 0;
HXLINE(  48)		::String _hx_tmp;
HXDLIN(  48)		if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/",2f,00,00,00) + HX_("data/weekNames",cf,bb,4c,5f)) + HX_(".txt",02,3f,c0,1e))),HX_("TEXT",ad,94,ba,37),HX_("preload",c9,47,43,35)),null())) {
HXLINE(  48)			_hx_tmp = ::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/",2f,00,00,00) + HX_("data/weekNames",cf,bb,4c,5f)) + HX_(".txt",02,3f,c0,1e))),HX_("TEXT",ad,94,ba,37),HX_("preload",c9,47,43,35));
            		}
            		else {
HXLINE(  48)			_hx_tmp = ::Paths_obj::getPath(((HX_("locale/en-US/",02,23,bf,a8) + HX_("data/weekNames",cf,bb,4c,5f)) + HX_(".txt",02,3f,c0,1e)),HX_("TEXT",ad,94,ba,37),HX_("preload",c9,47,43,35));
            		}
HXDLIN(  48)		this->weekNames = ::CoolUtil_obj::coolTextFile(_hx_tmp);
HXLINE(  46)		this->curDifficulty = 1;
HXLINE(  31)		this->weekData = ::cpp::VirtualArray_obj::__new(6)->init(0,::cpp::VirtualArray_obj::__new(3)->init(0,HX_("High School Conflict",e0,32,a1,28))->init(1,HX_("Bara No Yume",a1,45,b8,31))->init(2,HX_("Your Demise",bc,5d,31,e1)))->init(1,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Rain Clouds",aa,5a,bd,b1))->init(1,HX_("My Confession",bb,f7,05,ff)))->init(2,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("My Sweets",b7,ee,80,a5))->init(1,HX_("Baka",35,0d,ea,2b)))->init(3,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Deep Breaths",df,57,0d,51))->init(1,HX_("Obsession",83,2e,67,91)))->init(4,::cpp::VirtualArray_obj::__new(1)->init(0,HX_("Reconciliation",03,19,5c,84)))->init(5,::cpp::VirtualArray_obj::__new(4)->init(0,HX_("Crucify (Yuri Mix)",d3,43,cc,3f))->init(1,HX_("Beathoven (Natsuki Mix)",96,4f,3e,52))->init(2,HX_("It's Complicated (Sayori Mix)",0a,45,68,99))->init(3,HX_("Glitcher (Monika Mix)",50,2f,a8,6d)));
HXLINE(  27)		super::__construct(TransIn,TransOut);
            	}

Dynamic DokiStoryState_obj::__CreateEmpty() { return new DokiStoryState_obj; }

void *DokiStoryState_obj::_hx_vtable = 0;

Dynamic DokiStoryState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DokiStoryState_obj > _hx_result = new DokiStoryState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool DokiStoryState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3f706236) {
		if (inClassId<=(int)0x23a57bae) {
			if (inClassId<=(int)0x0b454869) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0b454869;
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

void DokiStoryState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_362c9079ec11828f_96_create)
HXLINE(  97)		::DokiStoryState_obj::instance = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 100)		if (::hx::IsNull( ::flixel::FlxG_obj::sound->music->_channel )) {
HXLINE( 102)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 102)			::String library = null();
HXDLIN( 102)			::String result = ::Paths_obj::getPath((((HX_("music/",ea,bf,1b,3f) + HX_("freakyMenu",15,c9,93,86)) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)),HX_("MUSIC",85,08,49,8e),library);
HXDLIN( 102)			::String _hx_tmp1;
HXDLIN( 102)			if (::Paths_obj::doesSoundAssetExist(result)) {
HXLINE( 102)				_hx_tmp1 = result;
            			}
            			else {
HXLINE( 102)				_hx_tmp1 = null();
            			}
HXDLIN( 102)			_hx_tmp->playMusic(_hx_tmp1,null(),null(),null());
HXLINE( 103)			::Conductor_obj::changeBPM(( (Float)(102) ));
            		}
HXLINE( 106)		this->persistentUpdate = (this->persistentDraw = true);
HXLINE( 108)		this->camFollow =  ::flixel::FlxObject_obj::__alloc( HX_CTX ,0,0,1,1);
HXLINE( 110)		this->add(this->camFollow);
HXLINE( 112)		::String library = null();
HXDLIN( 112)		::String _hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("scrolling_BG",0f,dc,17,b9)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN( 112)		this->add((this->backdrop =  ::flixel::addons::display::FlxBackdrop_obj::__alloc( HX_CTX ,_hx_tmp,null(),null(),null(),null(),null(),null())));
HXLINE( 113)		this->backdrop->velocity->set(-40,-40);
HXLINE( 116)		 ::flixel::FlxSprite _hx_tmp1 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-700,-359,null());
HXDLIN( 116)		::String library1 = null();
HXDLIN( 116)		::String _hx_tmp2 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("Credits_LeftSide",83,bf,91,b9)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library1);
HXDLIN( 116)		this->logo = _hx_tmp1->loadGraphic(_hx_tmp2,null(),null(),null(),null(),null());
HXLINE( 117)		this->logo->set_antialiasing(true);
HXLINE( 118)		this->add(this->logo);
HXLINE( 120)		 ::flixel::FlxSprite _hx_tmp3 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-700,-359,null());
HXDLIN( 120)		::String _hx_tmp4;
HXDLIN( 120)		if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dokistory/song_list_lazy_smile",17,34,c3,e5)) + HX_(".png",3b,2d,bd,1e))),HX_("IMAGE",3b,57,57,3b),HX_("preload",c9,47,43,35)),null())) {
HXLINE( 120)			_hx_tmp4 = ::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dokistory/song_list_lazy_smile",17,34,c3,e5)) + HX_(".png",3b,2d,bd,1e))),HX_("IMAGE",3b,57,57,3b),HX_("preload",c9,47,43,35));
            		}
            		else {
HXLINE( 120)			_hx_tmp4 = ::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("dokistory/song_list_lazy_smile",17,34,c3,e5)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),HX_("preload",c9,47,43,35));
            		}
HXDLIN( 120)		this->songlist = _hx_tmp3->loadGraphic(_hx_tmp4,null(),null(),null(),null(),null());
HXLINE( 121)		this->songlist->set_antialiasing(true);
HXLINE( 122)		this->add(this->songlist);
HXLINE( 125)		this->logoBl =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-600,-400,null());
HXLINE( 126)		 ::flixel::FlxSprite _hx_tmp5 = this->logoBl;
HXDLIN( 126)		::String library2 = null();
HXDLIN( 126)		bool isLocale = false;
HXDLIN( 126)		 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp6;
HXDLIN( 126)		if (isLocale) {
HXLINE( 126)			if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("DDLCStart_Screen_Assets",a2,04,0b,cf)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library2),null())) {
HXLINE( 126)				 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("DDLCStart_Screen_Assets",a2,04,0b,cf),library2,isLocale);
HXDLIN( 126)				_hx_tmp6 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("DDLCStart_Screen_Assets",a2,04,0b,cf)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library2));
            			}
            			else {
HXLINE( 126)				 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("DDLCStart_Screen_Assets",a2,04,0b,cf),library2,isLocale);
HXDLIN( 126)				_hx_tmp6 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("DDLCStart_Screen_Assets",a2,04,0b,cf)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library2));
            			}
            		}
            		else {
HXLINE( 126)			 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("DDLCStart_Screen_Assets",a2,04,0b,cf),library2,null());
HXDLIN( 126)			_hx_tmp6 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("DDLCStart_Screen_Assets",a2,04,0b,cf)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library2));
            		}
HXDLIN( 126)		_hx_tmp5->set_frames(_hx_tmp6);
HXLINE( 127)		this->logoBl->set_antialiasing(true);
HXLINE( 128)		this->logoBl->scale->set(((Float)0.5),((Float)0.5));
HXLINE( 129)		this->logoBl->animation->addByPrefix(HX_("bump",f6,0f,20,41),HX_("logo bumpin",70,a1,0b,72),24,false,null(),null());
HXLINE( 130)		this->logoBl->animation->play(HX_("bump",f6,0f,20,41),null(),null(),null());
HXLINE( 131)		this->logoBl->updateHitbox();
HXLINE( 132)		this->add(this->logoBl);
HXLINE( 134)		this->menuItems =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE( 135)		this->add(this->menuItems);
HXLINE( 137)		this->txtWeekTitle =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,(( (Float)(::flixel::FlxG_obj::width) ) * ((Float)0.05)),0,0,HX_("",00,00,00,00),5,null());
HXLINE( 138)		 ::flixel::text::FlxText _hx_tmp7 = this->txtWeekTitle;
HXDLIN( 138)		_hx_tmp7->setFormat(::LangUtil_obj::getFont(HX_("riffic",51,90,7b,4d)),32,-1,HX_("center",d5,25,db,05),null(),null(),null());
HXLINE( 139)		this->txtWeekTitle->set_alignment(HX_("center",d5,25,db,05));
HXLINE( 140)		this->txtWeekTitle->scale->set(((Float)1.2),((Float)1.2));
HXLINE( 141)		{
HXLINE( 141)			 ::flixel::text::FlxText _this = this->txtWeekTitle;
HXDLIN( 141)			_this->set_borderStyle(::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn());
HXDLIN( 141)			_this->set_borderColor(-499536);
HXDLIN( 141)			_this->set_borderSize(( (Float)(2) ));
HXDLIN( 141)			_this->set_borderQuality(( (Float)(1) ));
            		}
HXLINE( 142)		this->txtWeekTitle->updateHitbox();
HXLINE( 143)		this->txtWeekTitle->set_antialiasing(true);
HXLINE( 144)		 ::flixel::text::FlxText fh = this->txtWeekTitle;
HXDLIN( 144)		fh->set_x((fh->x - ( (Float)(30) )));
HXLINE( 145)		 ::flixel::text::FlxText fh1 = this->txtWeekTitle;
HXDLIN( 145)		fh1->set_y((fh1->y - ( (Float)(210) )));
HXLINE( 146)		this->add(this->txtWeekTitle);
HXLINE( 148)		this->txtTracklist =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,(( (Float)(::flixel::FlxG_obj::width) ) * ((Float)0.01)),50,0,HX_("",00,00,00,00),5,null());
HXLINE( 149)		 ::flixel::text::FlxText _hx_tmp8 = this->txtTracklist;
HXDLIN( 149)		_hx_tmp8->setFormat(::LangUtil_obj::getFont(HX_("riffic",51,90,7b,4d)),32,-1,HX_("center",d5,25,db,05),null(),null(),null());
HXLINE( 150)		this->txtTracklist->set_alignment(HX_("center",d5,25,db,05));
HXLINE( 151)		this->txtTracklist->scale->set(((Float).8),((Float).8));
HXLINE( 152)		{
HXLINE( 152)			 ::flixel::text::FlxText _this1 = this->txtTracklist;
HXDLIN( 152)			_this1->set_borderStyle(::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn());
HXDLIN( 152)			_this1->set_borderColor(-17955);
HXDLIN( 152)			_this1->set_borderSize(( (Float)(3) ));
HXDLIN( 152)			_this1->set_borderQuality(( (Float)(1) ));
            		}
HXLINE( 153)		this->txtTracklist->updateHitbox();
HXLINE( 154)		this->txtTracklist->set_antialiasing(true);
HXLINE( 155)		 ::flixel::text::FlxText fh2 = this->txtTracklist;
HXDLIN( 155)		fh2->set_y(fh2->y);
HXLINE( 156)		this->add(this->txtTracklist);
HXLINE( 158)		this->diff =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-30,200,null());
HXLINE( 159)		 ::flixel::FlxSprite _hx_tmp9 = this->diff;
HXDLIN( 159)		 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp10;
HXDLIN( 159)		if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dokistory/difficulties",1c,45,45,3a)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("preload",c9,47,43,35)),null())) {
HXLINE( 159)			 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dokistory/difficulties",1c,45,45,3a),HX_("preload",c9,47,43,35),true);
HXDLIN( 159)			_hx_tmp10 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dokistory/difficulties",1c,45,45,3a)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("preload",c9,47,43,35)));
            		}
            		else {
HXLINE( 159)			 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dokistory/difficulties",1c,45,45,3a),HX_("preload",c9,47,43,35),true);
HXDLIN( 159)			_hx_tmp10 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("dokistory/difficulties",1c,45,45,3a)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("preload",c9,47,43,35)));
            		}
HXDLIN( 159)		_hx_tmp9->set_frames(_hx_tmp10);
HXLINE( 160)		this->diff->set_antialiasing(true);
HXLINE( 161)		this->diff->scale->set(1,1);
HXLINE( 162)		this->diff->animation->addByPrefix(HX_("easy",02,8c,0c,43),HX_("Easy",22,b8,e5,2d),24,null(),null(),null());
HXLINE( 163)		this->diff->animation->addByPrefix(HX_("normal",27,72,69,30),HX_("Normal",47,e6,fd,64),24,null(),null(),null());
HXLINE( 164)		this->diff->animation->addByPrefix(HX_("hard",eb,2e,08,45),HX_("Hard",0b,5b,e1,2f),24,null(),null(),null());
HXLINE( 165)		this->diff->animation->play(HX_("normal",27,72,69,30),null(),null(),null());
HXLINE( 166)		this->diff->updateHitbox();
HXLINE( 167)		this->diff->set_visible(false);
HXLINE( 168)		this->add(this->diff);
HXLINE( 179)		this->story_moni =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-240,-160,null());
HXLINE( 180)		 ::flixel::FlxSprite _hx_tmp11 = this->story_moni;
HXDLIN( 180)		::String library3 = null();
HXDLIN( 180)		bool isLocale1 = false;
HXDLIN( 180)		 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp12;
HXDLIN( 180)		if (isLocale1) {
HXLINE( 180)			if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dokistory/moni_story",16,22,f2,3f)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library3),null())) {
HXLINE( 180)				 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dokistory/moni_story",16,22,f2,3f),library3,isLocale1);
HXDLIN( 180)				_hx_tmp12 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dokistory/moni_story",16,22,f2,3f)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library3));
            			}
            			else {
HXLINE( 180)				 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dokistory/moni_story",16,22,f2,3f),library3,isLocale1);
HXDLIN( 180)				_hx_tmp12 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("dokistory/moni_story",16,22,f2,3f)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library3));
            			}
            		}
            		else {
HXLINE( 180)			 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dokistory/moni_story",16,22,f2,3f),library3,null());
HXDLIN( 180)			_hx_tmp12 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("dokistory/moni_story",16,22,f2,3f)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library3));
            		}
HXDLIN( 180)		_hx_tmp11->set_frames(_hx_tmp12);
HXLINE( 181)		this->story_moni->set_antialiasing(true);
HXLINE( 182)		this->story_moni->scale->set(1,1);
HXLINE( 183)		this->story_moni->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("moni_idle",b6,dd,1f,70),20,null(),null(),null());
HXLINE( 184)		this->story_moni->animation->addByPrefix(HX_("selected",5b,2a,6d,b1),HX_("moni_selected",fd,59,16,6c),24,false,null(),null());
HXLINE( 185)		this->story_moni->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 186)		this->story_moni->updateHitbox();
HXLINE( 187)		this->add(this->story_moni);
HXLINE( 189)		this->story_sayo =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,40,-160,null());
HXLINE( 190)		 ::flixel::FlxSprite _hx_tmp13 = this->story_sayo;
HXDLIN( 190)		::String library4 = null();
HXDLIN( 190)		bool isLocale2 = false;
HXDLIN( 190)		 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp14;
HXDLIN( 190)		if (isLocale2) {
HXLINE( 190)			if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dokistory/sayo_story",1d,e3,28,a7)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library4),null())) {
HXLINE( 190)				 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dokistory/sayo_story",1d,e3,28,a7),library4,isLocale2);
HXDLIN( 190)				_hx_tmp14 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dokistory/sayo_story",1d,e3,28,a7)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library4));
            			}
            			else {
HXLINE( 190)				 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dokistory/sayo_story",1d,e3,28,a7),library4,isLocale2);
HXDLIN( 190)				_hx_tmp14 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("dokistory/sayo_story",1d,e3,28,a7)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library4));
            			}
            		}
            		else {
HXLINE( 190)			 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dokistory/sayo_story",1d,e3,28,a7),library4,null());
HXDLIN( 190)			_hx_tmp14 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("dokistory/sayo_story",1d,e3,28,a7)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library4));
            		}
HXDLIN( 190)		_hx_tmp13->set_frames(_hx_tmp14);
HXLINE( 191)		this->story_sayo->set_antialiasing(true);
HXLINE( 192)		this->story_sayo->scale->set(1,1);
HXLINE( 193)		this->story_sayo->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("sayo_idle",8f,5a,96,70),20,null(),null(),null());
HXLINE( 194)		this->story_sayo->animation->addByPrefix(HX_("selected",5b,2a,6d,b1),HX_("sayo_selected",56,b7,6e,81),24,false,null(),null());
HXLINE( 195)		this->story_sayo->animation->addByPrefix(HX_("locked",0a,05,c7,59),HX_("sayo_Locked",65,41,ee,3d),24,false,null(),null());
HXLINE( 196)		this->story_sayo->animation->play(HX_("locked",0a,05,c7,59),null(),null(),null());
HXLINE( 197)		this->story_sayo->updateHitbox();
HXLINE( 198)		this->add(this->story_sayo);
HXLINE( 200)		this->story_nat =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,320,-160,null());
HXLINE( 201)		 ::flixel::FlxSprite _hx_tmp15 = this->story_nat;
HXDLIN( 201)		::String library5 = null();
HXDLIN( 201)		bool isLocale3 = false;
HXDLIN( 201)		 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp16;
HXDLIN( 201)		if (isLocale3) {
HXLINE( 201)			if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dokistory/nat_story",34,21,be,e8)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library5),null())) {
HXLINE( 201)				 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dokistory/nat_story",34,21,be,e8),library5,isLocale3);
HXDLIN( 201)				_hx_tmp16 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dokistory/nat_story",34,21,be,e8)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library5));
            			}
            			else {
HXLINE( 201)				 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dokistory/nat_story",34,21,be,e8),library5,isLocale3);
HXDLIN( 201)				_hx_tmp16 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("dokistory/nat_story",34,21,be,e8)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library5));
            			}
            		}
            		else {
HXLINE( 201)			 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dokistory/nat_story",34,21,be,e8),library5,null());
HXDLIN( 201)			_hx_tmp16 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("dokistory/nat_story",34,21,be,e8)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library5));
            		}
HXDLIN( 201)		_hx_tmp15->set_frames(_hx_tmp16);
HXLINE( 202)		this->story_nat->set_antialiasing(true);
HXLINE( 203)		this->story_nat->scale->set(1,1);
HXLINE( 204)		this->story_nat->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("natsuki_idle",32,ab,7c,72),20,null(),null(),null());
HXLINE( 205)		this->story_nat->animation->addByPrefix(HX_("selected",5b,2a,6d,b1),HX_("natsuki_selected",79,95,0d,57),24,false,null(),null());
HXLINE( 206)		this->story_nat->animation->addByPrefix(HX_("locked",0a,05,c7,59),HX_("natsuki_Locked",c8,40,84,42),24,false,null(),null());
HXLINE( 207)		this->story_nat->animation->play(HX_("locked",0a,05,c7,59),null(),null(),null());
HXLINE( 208)		this->story_nat->updateHitbox();
HXLINE( 209)		this->add(this->story_nat);
HXLINE( 211)		this->story_yuri =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-240,40,null());
HXLINE( 212)		 ::flixel::FlxSprite _hx_tmp17 = this->story_yuri;
HXDLIN( 212)		::String library6 = null();
HXDLIN( 212)		bool isLocale4 = false;
HXDLIN( 212)		 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp18;
HXDLIN( 212)		if (isLocale4) {
HXLINE( 212)			if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dokistory/yuri_story",0c,ff,e1,19)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library6),null())) {
HXLINE( 212)				 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dokistory/yuri_story",0c,ff,e1,19),library6,isLocale4);
HXDLIN( 212)				_hx_tmp18 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dokistory/yuri_story",0c,ff,e1,19)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library6));
            			}
            			else {
HXLINE( 212)				 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dokistory/yuri_story",0c,ff,e1,19),library6,isLocale4);
HXDLIN( 212)				_hx_tmp18 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("dokistory/yuri_story",0c,ff,e1,19)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library6));
            			}
            		}
            		else {
HXLINE( 212)			 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dokistory/yuri_story",0c,ff,e1,19),library6,null());
HXDLIN( 212)			_hx_tmp18 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("dokistory/yuri_story",0c,ff,e1,19)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library6));
            		}
HXDLIN( 212)		_hx_tmp17->set_frames(_hx_tmp18);
HXLINE( 213)		this->story_yuri->set_antialiasing(true);
HXLINE( 214)		this->story_yuri->scale->set(1,1);
HXLINE( 215)		this->story_yuri->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("yuri_selected",c7,7a,12,3f),20,null(),null(),null());
HXLINE( 216)		this->story_yuri->animation->addByPrefix(HX_("selected",5b,2a,6d,b1),HX_("yuri_idle",80,51,f5,50),24,false,null(),null());
HXLINE( 217)		this->story_yuri->animation->addByPrefix(HX_("locked",0a,05,c7,59),HX_("yuri_Locked",96,96,2d,2d),24,false,null(),null());
HXLINE( 218)		this->story_yuri->animation->play(HX_("locked",0a,05,c7,59),null(),null(),null());
HXLINE( 219)		this->story_yuri->updateHitbox();
HXLINE( 220)		this->add(this->story_yuri);
HXLINE( 222)		this->story_secret =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,40,40,null());
HXLINE( 223)		 ::flixel::FlxSprite _hx_tmp19 = this->story_secret;
HXDLIN( 223)		::String library7 = null();
HXDLIN( 223)		bool isLocale5 = false;
HXDLIN( 223)		 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp20;
HXDLIN( 223)		if (isLocale5) {
HXLINE( 223)			if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dokistory/secret_story",69,5b,90,cd)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library7),null())) {
HXLINE( 223)				 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dokistory/secret_story",69,5b,90,cd),library7,isLocale5);
HXDLIN( 223)				_hx_tmp20 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dokistory/secret_story",69,5b,90,cd)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library7));
            			}
            			else {
HXLINE( 223)				 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dokistory/secret_story",69,5b,90,cd),library7,isLocale5);
HXDLIN( 223)				_hx_tmp20 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("dokistory/secret_story",69,5b,90,cd)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library7));
            			}
            		}
            		else {
HXLINE( 223)			 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dokistory/secret_story",69,5b,90,cd),library7,null());
HXDLIN( 223)			_hx_tmp20 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("dokistory/secret_story",69,5b,90,cd)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library7));
            		}
HXDLIN( 223)		_hx_tmp19->set_frames(_hx_tmp20);
HXLINE( 224)		this->story_secret->set_antialiasing(true);
HXLINE( 225)		this->story_secret->scale->set(1,1);
HXLINE( 226)		this->story_secret->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("duster_idle",34,4f,a4,db),20,null(),null(),null());
HXLINE( 227)		this->story_secret->animation->addByPrefix(HX_("selected",5b,2a,6d,b1),HX_("duster_selected",7b,62,a4,bd),24,false,null(),null());
HXLINE( 228)		this->story_secret->animation->addByPrefix(HX_("locked",0a,05,c7,59),HX_("blank_locked",d5,89,63,b9),24,false,null(),null());
HXLINE( 229)		this->story_secret->animation->play(HX_("locked",0a,05,c7,59),null(),null(),null());
HXLINE( 230)		this->story_secret->updateHitbox();
HXLINE( 231)		this->add(this->story_secret);
HXLINE( 233)		this->story_secret2 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,320,40,null());
HXLINE( 234)		 ::flixel::FlxSprite _hx_tmp21 = this->story_secret2;
HXDLIN( 234)		::String library8 = null();
HXDLIN( 234)		bool isLocale6 = false;
HXDLIN( 234)		 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp22;
HXDLIN( 234)		if (isLocale6) {
HXLINE( 234)			if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dokistory/secret2_story",55,b9,3b,32)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library8),null())) {
HXLINE( 234)				 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dokistory/secret2_story",55,b9,3b,32),library8,isLocale6);
HXDLIN( 234)				_hx_tmp22 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dokistory/secret2_story",55,b9,3b,32)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library8));
            			}
            			else {
HXLINE( 234)				 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dokistory/secret2_story",55,b9,3b,32),library8,isLocale6);
HXDLIN( 234)				_hx_tmp22 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("dokistory/secret2_story",55,b9,3b,32)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library8));
            			}
            		}
            		else {
HXLINE( 234)			 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dokistory/secret2_story",55,b9,3b,32),library8,null());
HXDLIN( 234)			_hx_tmp22 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("dokistory/secret2_story",55,b9,3b,32)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library8));
            		}
HXDLIN( 234)		_hx_tmp21->set_frames(_hx_tmp22);
HXLINE( 235)		this->story_secret2->set_antialiasing(true);
HXLINE( 236)		this->story_secret2->scale->set(1,1);
HXLINE( 237)		this->story_secret2->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("mc_idle",dd,0b,bd,42),20,null(),null(),null());
HXLINE( 238)		this->story_secret2->animation->addByPrefix(HX_("hidden_idle",49,a3,e6,52),HX_("mc_hiddenidle",07,45,b5,29),20,null(),null(),null());
HXLINE( 239)		this->story_secret2->animation->addByPrefix(HX_("selected",5b,2a,6d,b1),HX_("mc_selected",a4,27,83,34),24,false,null(),null());
HXLINE( 240)		this->story_secret2->animation->addByPrefix(HX_("locked",0a,05,c7,59),HX_("blank_locked",d5,89,63,b9),24,false,null(),null());
HXLINE( 241)		this->story_secret2->animation->play(HX_("locked",0a,05,c7,59),null(),null(),null());
HXLINE( 242)		this->story_secret2->updateHitbox();
HXLINE( 243)		this->add(this->story_secret2);
HXLINE( 245)		 ::flixel::FlxSprite _hx_tmp23 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-240,-110,null());
HXDLIN( 245)		::String library9 = null();
HXDLIN( 245)		::String _hx_tmp24 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("dokistory/cursor",59,88,12,8a)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library9);
HXDLIN( 245)		this->story_cursor = _hx_tmp23->loadGraphic(_hx_tmp24,null(),null(),null(),null(),null());
HXLINE( 246)		this->add(this->story_cursor);
HXLINE( 248)		::flixel::FlxG_obj::camera->follow(this->camFollow,null(),(((Float)0.60) * (( (Float)(60) ) / ( (Float)(::flixel::FlxG_obj::save->data->__Field(HX_("fpsCap",a9,7b,7e,91),::hx::paccDynamic)) ))));
HXLINE( 252)		if (( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("dfjk",c3,18,67,42),::hx::paccDynamic)) )) {
HXLINE( 253)			::PlayerSettings_obj::player1->controls->setKeyboardScheme(::KeyboardScheme_obj::Solo_dyn(),true);
            		}
            		else {
HXLINE( 255)			::PlayerSettings_obj::player1->controls->setKeyboardScheme(::KeyboardScheme_obj::Duo(true),true);
            		}
HXLINE( 257)		this->changeItem(null());
HXLINE( 258)		this->updateText();
HXLINE( 259)		this->unlockedweeks();
HXLINE( 261)		this->super::create();
            	}


void DokiStoryState_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_362c9079ec11828f_268_update)
HXLINE( 308)		bool _hx_tmp;
HXDLIN( 308)		if (::DokiStoryState_obj::showPopUp) {
HXLINE( 308)			_hx_tmp = !(::DokiStoryState_obj::secondaryPopUp);
            		}
            		else {
HXLINE( 308)			_hx_tmp = false;
            		}
HXDLIN( 308)		if (_hx_tmp) {
HXLINE( 310)			switch((int)(::DokiStoryState_obj::popupWeek)){
            				case (int)1: {
HXLINE( 318)					if (!(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("sayopopup",c8,a1,66,3e),::hx::paccDynamic)) ))) {
HXLINE( 319)						this->openSubState( ::PopupMessage_obj::__alloc( HX_CTX ,::LangUtil_obj::getString(HX_("msgSayo",c5,88,1a,35)),null()));
            					}
            					else {
HXLINE( 322)						::DokiStoryState_obj::showPopUp = false;
HXLINE( 323)						::DokiStoryState_obj::secondaryPopUp = false;
            					}
            				}
            				break;
            				case (int)2: {
HXLINE( 326)					if (!(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("natpopup",ab,ed,49,7d),::hx::paccDynamic)) ))) {
HXLINE( 327)						this->openSubState( ::PopupMessage_obj::__alloc( HX_CTX ,::LangUtil_obj::getString(HX_("msgNat",20,89,4b,10)),null()));
            					}
            					else {
HXLINE( 330)						::DokiStoryState_obj::showPopUp = false;
HXLINE( 331)						::DokiStoryState_obj::secondaryPopUp = false;
            					}
            				}
            				break;
            				case (int)4: {
HXLINE( 334)					if (!(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("extra1popup",eb,9e,36,28),::hx::paccDynamic)) ))) {
HXLINE( 335)						this->openSubState( ::PopupMessage_obj::__alloc( HX_CTX ,::LangUtil_obj::getString(HX_("msgExtra2",c3,d8,4e,39)),null()));
            					}
            					else {
HXLINE( 337)						::DokiStoryState_obj::showPopUp = false;
            					}
            				}
            				break;
            				case (int)5: {
HXLINE( 339)					if (!(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("extra2popup",4a,fb,91,8e),::hx::paccDynamic)) ))) {
HXLINE( 340)						this->openSubState( ::PopupMessage_obj::__alloc( HX_CTX ,::LangUtil_obj::getString(HX_("msgFestival",19,e1,52,36)),null()));
            					}
            					else {
HXLINE( 343)						::DokiStoryState_obj::showPopUp = false;
HXLINE( 344)						::DokiStoryState_obj::secondaryPopUp = false;
            					}
            				}
            				break;
            				default:{
HXLINE( 313)					if (!(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("monipopup",ef,24,f0,3d),::hx::paccDynamic)) ))) {
HXLINE( 314)						this->openSubState( ::PopupMessage_obj::__alloc( HX_CTX ,::LangUtil_obj::getString(HX_("msgMoni",fe,d6,2d,31)),null()));
            					}
            					else {
HXLINE( 316)						::DokiStoryState_obj::showPopUp = false;
            					}
            				}
            			}
            		}
HXLINE( 349)		bool _hx_tmp1;
HXDLIN( 349)		if (!(::DokiStoryState_obj::showPopUp)) {
HXLINE( 349)			_hx_tmp1 = ::DokiStoryState_obj::secondaryPopUp;
            		}
            		else {
HXLINE( 349)			_hx_tmp1 = false;
            		}
HXDLIN( 349)		if (_hx_tmp1) {
HXLINE( 351)			switch((int)(::DokiStoryState_obj::popupWeek)){
            				case (int)2: {
HXLINE( 356)					this->openSubState( ::PopupMessage_obj::__alloc( HX_CTX ,::LangUtil_obj::getString(HX_("msgExtra1",c2,d8,4e,39)),null()));
            				}
            				break;
            				case (int)5: {
HXLINE( 358)					if (( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("unlockepip",d6,39,27,23),::hx::paccDynamic)) )) {
HXLINE( 359)						this->openSubState( ::PopupMessage_obj::__alloc( HX_CTX ,::LangUtil_obj::getString(HX_("msgExtra3",c4,d8,4e,39)),true));
            					}
            					else {
HXLINE( 361)						::DokiStoryState_obj::secondaryPopUp = false;
            					}
            				}
            				break;
            				default:{
HXLINE( 354)					this->openSubState( ::PopupMessage_obj::__alloc( HX_CTX ,::LangUtil_obj::getString(HX_("msgGFCount",0f,06,73,08)),null()));
            				}
            			}
            		}
HXLINE( 365)		bool _hx_tmp2;
HXDLIN( 365)		if (( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("yuribeaten",32,30,34,69),::hx::paccDynamic)) )) {
HXLINE( 365)			_hx_tmp2 = !(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("yuripopup",b9,98,c5,1e),::hx::paccDynamic)) ));
            		}
            		else {
HXLINE( 365)			_hx_tmp2 = false;
            		}
HXDLIN( 365)		if (_hx_tmp2) {
HXLINE( 366)			this->openSubState( ::PopupMessage_obj::__alloc( HX_CTX ,::LangUtil_obj::getString(HX_("msgYuri",74,f7,20,39)),null()));
            		}
HXLINE( 368)		switch((int)(this->curSelected)){
            			case (int)0: {
HXLINE( 371)				{
HXLINE( 371)					 ::flixel::animation::FlxAnimationController _this = this->story_moni->animation;
HXDLIN( 371)					if (::hx::IsNotNull( _this->_curAnim )) {
HXLINE( 371)						_this->_curAnim->paused = false;
            					}
            				}
HXLINE( 372)				{
HXLINE( 372)					 ::flixel::animation::FlxAnimationController _this1 = this->story_sayo->animation;
HXDLIN( 372)					if (::hx::IsNotNull( _this1->_curAnim )) {
HXLINE( 372)						_this1->_curAnim->pause();
            					}
            				}
HXLINE( 373)				{
HXLINE( 373)					 ::flixel::animation::FlxAnimationController _this2 = this->story_nat->animation;
HXDLIN( 373)					if (::hx::IsNotNull( _this2->_curAnim )) {
HXLINE( 373)						_this2->_curAnim->pause();
            					}
            				}
HXLINE( 374)				{
HXLINE( 374)					 ::flixel::animation::FlxAnimationController _this3 = this->story_yuri->animation;
HXDLIN( 374)					if (::hx::IsNotNull( _this3->_curAnim )) {
HXLINE( 374)						_this3->_curAnim->pause();
            					}
            				}
HXLINE( 375)				{
HXLINE( 375)					 ::flixel::animation::FlxAnimationController _this4 = this->story_secret->animation;
HXDLIN( 375)					if (::hx::IsNotNull( _this4->_curAnim )) {
HXLINE( 375)						_this4->_curAnim->pause();
            					}
            				}
HXLINE( 376)				{
HXLINE( 376)					 ::flixel::animation::FlxAnimationController _this5 = this->story_secret2->animation;
HXDLIN( 376)					if (::hx::IsNotNull( _this5->_curAnim )) {
HXLINE( 376)						_this5->_curAnim->pause();
            					}
            				}
HXLINE( 378)				this->story_cursor->set_x(( (Float)(-240) ));
HXLINE( 379)				this->story_cursor->set_y(( (Float)(-160) ));
            			}
            			break;
            			case (int)1: {
HXLINE( 381)				{
HXLINE( 381)					 ::flixel::animation::FlxAnimationController _this = this->story_moni->animation;
HXDLIN( 381)					if (::hx::IsNotNull( _this->_curAnim )) {
HXLINE( 381)						_this->_curAnim->pause();
            					}
            				}
HXLINE( 382)				{
HXLINE( 382)					 ::flixel::animation::FlxAnimationController _this1 = this->story_sayo->animation;
HXDLIN( 382)					if (::hx::IsNotNull( _this1->_curAnim )) {
HXLINE( 382)						_this1->_curAnim->paused = false;
            					}
            				}
HXLINE( 383)				{
HXLINE( 383)					 ::flixel::animation::FlxAnimationController _this2 = this->story_nat->animation;
HXDLIN( 383)					if (::hx::IsNotNull( _this2->_curAnim )) {
HXLINE( 383)						_this2->_curAnim->pause();
            					}
            				}
HXLINE( 384)				{
HXLINE( 384)					 ::flixel::animation::FlxAnimationController _this3 = this->story_yuri->animation;
HXDLIN( 384)					if (::hx::IsNotNull( _this3->_curAnim )) {
HXLINE( 384)						_this3->_curAnim->pause();
            					}
            				}
HXLINE( 385)				{
HXLINE( 385)					 ::flixel::animation::FlxAnimationController _this4 = this->story_secret->animation;
HXDLIN( 385)					if (::hx::IsNotNull( _this4->_curAnim )) {
HXLINE( 385)						_this4->_curAnim->pause();
            					}
            				}
HXLINE( 386)				{
HXLINE( 386)					 ::flixel::animation::FlxAnimationController _this5 = this->story_secret2->animation;
HXDLIN( 386)					if (::hx::IsNotNull( _this5->_curAnim )) {
HXLINE( 386)						_this5->_curAnim->pause();
            					}
            				}
HXLINE( 388)				this->story_cursor->set_x(( (Float)(40) ));
HXLINE( 389)				this->story_cursor->set_y(( (Float)(-160) ));
            			}
            			break;
            			case (int)2: {
HXLINE( 391)				{
HXLINE( 391)					 ::flixel::animation::FlxAnimationController _this = this->story_moni->animation;
HXDLIN( 391)					if (::hx::IsNotNull( _this->_curAnim )) {
HXLINE( 391)						_this->_curAnim->pause();
            					}
            				}
HXLINE( 392)				{
HXLINE( 392)					 ::flixel::animation::FlxAnimationController _this1 = this->story_sayo->animation;
HXDLIN( 392)					if (::hx::IsNotNull( _this1->_curAnim )) {
HXLINE( 392)						_this1->_curAnim->pause();
            					}
            				}
HXLINE( 393)				{
HXLINE( 393)					 ::flixel::animation::FlxAnimationController _this2 = this->story_nat->animation;
HXDLIN( 393)					if (::hx::IsNotNull( _this2->_curAnim )) {
HXLINE( 393)						_this2->_curAnim->paused = false;
            					}
            				}
HXLINE( 394)				{
HXLINE( 394)					 ::flixel::animation::FlxAnimationController _this3 = this->story_yuri->animation;
HXDLIN( 394)					if (::hx::IsNotNull( _this3->_curAnim )) {
HXLINE( 394)						_this3->_curAnim->pause();
            					}
            				}
HXLINE( 395)				{
HXLINE( 395)					 ::flixel::animation::FlxAnimationController _this4 = this->story_secret->animation;
HXDLIN( 395)					if (::hx::IsNotNull( _this4->_curAnim )) {
HXLINE( 395)						_this4->_curAnim->pause();
            					}
            				}
HXLINE( 396)				{
HXLINE( 396)					 ::flixel::animation::FlxAnimationController _this5 = this->story_secret2->animation;
HXDLIN( 396)					if (::hx::IsNotNull( _this5->_curAnim )) {
HXLINE( 396)						_this5->_curAnim->pause();
            					}
            				}
HXLINE( 398)				this->story_cursor->set_x(( (Float)(320) ));
HXLINE( 399)				this->story_cursor->set_y(( (Float)(-160) ));
            			}
            			break;
            			case (int)3: {
HXLINE( 401)				{
HXLINE( 401)					 ::flixel::animation::FlxAnimationController _this = this->story_moni->animation;
HXDLIN( 401)					if (::hx::IsNotNull( _this->_curAnim )) {
HXLINE( 401)						_this->_curAnim->pause();
            					}
            				}
HXLINE( 402)				{
HXLINE( 402)					 ::flixel::animation::FlxAnimationController _this1 = this->story_sayo->animation;
HXDLIN( 402)					if (::hx::IsNotNull( _this1->_curAnim )) {
HXLINE( 402)						_this1->_curAnim->pause();
            					}
            				}
HXLINE( 403)				{
HXLINE( 403)					 ::flixel::animation::FlxAnimationController _this2 = this->story_nat->animation;
HXDLIN( 403)					if (::hx::IsNotNull( _this2->_curAnim )) {
HXLINE( 403)						_this2->_curAnim->pause();
            					}
            				}
HXLINE( 404)				{
HXLINE( 404)					 ::flixel::animation::FlxAnimationController _this3 = this->story_yuri->animation;
HXDLIN( 404)					if (::hx::IsNotNull( _this3->_curAnim )) {
HXLINE( 404)						_this3->_curAnim->paused = false;
            					}
            				}
HXLINE( 405)				{
HXLINE( 405)					 ::flixel::animation::FlxAnimationController _this4 = this->story_secret->animation;
HXDLIN( 405)					if (::hx::IsNotNull( _this4->_curAnim )) {
HXLINE( 405)						_this4->_curAnim->pause();
            					}
            				}
HXLINE( 406)				{
HXLINE( 406)					 ::flixel::animation::FlxAnimationController _this5 = this->story_secret2->animation;
HXDLIN( 406)					if (::hx::IsNotNull( _this5->_curAnim )) {
HXLINE( 406)						_this5->_curAnim->pause();
            					}
            				}
HXLINE( 408)				this->story_cursor->set_x(( (Float)(-240) ));
HXLINE( 409)				this->story_cursor->set_y(( (Float)(40) ));
            			}
            			break;
            			case (int)4: {
HXLINE( 411)				{
HXLINE( 411)					 ::flixel::animation::FlxAnimationController _this = this->story_moni->animation;
HXDLIN( 411)					if (::hx::IsNotNull( _this->_curAnim )) {
HXLINE( 411)						_this->_curAnim->pause();
            					}
            				}
HXLINE( 412)				{
HXLINE( 412)					 ::flixel::animation::FlxAnimationController _this1 = this->story_sayo->animation;
HXDLIN( 412)					if (::hx::IsNotNull( _this1->_curAnim )) {
HXLINE( 412)						_this1->_curAnim->pause();
            					}
            				}
HXLINE( 413)				{
HXLINE( 413)					 ::flixel::animation::FlxAnimationController _this2 = this->story_nat->animation;
HXDLIN( 413)					if (::hx::IsNotNull( _this2->_curAnim )) {
HXLINE( 413)						_this2->_curAnim->pause();
            					}
            				}
HXLINE( 414)				{
HXLINE( 414)					 ::flixel::animation::FlxAnimationController _this3 = this->story_yuri->animation;
HXDLIN( 414)					if (::hx::IsNotNull( _this3->_curAnim )) {
HXLINE( 414)						_this3->_curAnim->pause();
            					}
            				}
HXLINE( 415)				{
HXLINE( 415)					 ::flixel::animation::FlxAnimationController _this4 = this->story_secret->animation;
HXDLIN( 415)					if (::hx::IsNotNull( _this4->_curAnim )) {
HXLINE( 415)						_this4->_curAnim->paused = false;
            					}
            				}
HXLINE( 416)				{
HXLINE( 416)					 ::flixel::animation::FlxAnimationController _this5 = this->story_secret2->animation;
HXDLIN( 416)					if (::hx::IsNotNull( _this5->_curAnim )) {
HXLINE( 416)						_this5->_curAnim->pause();
            					}
            				}
HXLINE( 418)				this->story_cursor->set_x(( (Float)(40) ));
HXLINE( 419)				this->story_cursor->set_y(( (Float)(40) ));
            			}
            			break;
            			case (int)5: {
HXLINE( 421)				{
HXLINE( 421)					 ::flixel::animation::FlxAnimationController _this = this->story_moni->animation;
HXDLIN( 421)					if (::hx::IsNotNull( _this->_curAnim )) {
HXLINE( 421)						_this->_curAnim->pause();
            					}
            				}
HXLINE( 422)				{
HXLINE( 422)					 ::flixel::animation::FlxAnimationController _this1 = this->story_sayo->animation;
HXDLIN( 422)					if (::hx::IsNotNull( _this1->_curAnim )) {
HXLINE( 422)						_this1->_curAnim->pause();
            					}
            				}
HXLINE( 423)				{
HXLINE( 423)					 ::flixel::animation::FlxAnimationController _this2 = this->story_nat->animation;
HXDLIN( 423)					if (::hx::IsNotNull( _this2->_curAnim )) {
HXLINE( 423)						_this2->_curAnim->pause();
            					}
            				}
HXLINE( 424)				{
HXLINE( 424)					 ::flixel::animation::FlxAnimationController _this3 = this->story_yuri->animation;
HXDLIN( 424)					if (::hx::IsNotNull( _this3->_curAnim )) {
HXLINE( 424)						_this3->_curAnim->pause();
            					}
            				}
HXLINE( 425)				{
HXLINE( 425)					 ::flixel::animation::FlxAnimationController _this4 = this->story_secret->animation;
HXDLIN( 425)					if (::hx::IsNotNull( _this4->_curAnim )) {
HXLINE( 425)						_this4->_curAnim->pause();
            					}
            				}
HXLINE( 426)				{
HXLINE( 426)					 ::flixel::animation::FlxAnimationController _this5 = this->story_secret2->animation;
HXDLIN( 426)					if (::hx::IsNotNull( _this5->_curAnim )) {
HXLINE( 426)						_this5->_curAnim->paused = false;
            					}
            				}
HXLINE( 428)				this->story_cursor->set_x(( (Float)(320) ));
HXLINE( 429)				this->story_cursor->set_y(( (Float)(40) ));
            			}
            			break;
            		}
HXLINE( 432)		if ((::flixel::FlxG_obj::sound->music->_volume < ((Float)0.8))) {
HXLINE( 434)			 ::flixel::_hx_system::FlxSound fh = ::flixel::FlxG_obj::sound->music;
HXDLIN( 434)			fh->set_volume((fh->_volume + (((Float)0.5) * ::flixel::FlxG_obj::elapsed)));
            		}
HXLINE( 437)		bool _hx_tmp3;
HXDLIN( 437)		if (!(this->selectedSomethin)) {
HXLINE( 437)			_hx_tmp3 = this->acceptInput;
            		}
            		else {
HXLINE( 437)			_hx_tmp3 = false;
            		}
HXDLIN( 437)		if (_hx_tmp3) {
HXLINE( 439)			if (this->diffselect) {
HXLINE( 534)				if (::PlayerSettings_obj::player1->controls->_back->check()) {
HXLINE( 536)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 536)					_hx_tmp->play(::Paths_obj::sound(HX_("cancelMenu",39,a4,43,b7),null()),null(),null(),null(),null(),null());
HXLINE( 537)					this->diff->set_visible(false);
HXLINE( 538)					this->diffselect = false;
            				}
HXLINE( 541)				if (::PlayerSettings_obj::player1->controls->_leftP->check()) {
HXLINE( 543)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 543)					_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
HXLINE( 544)					this->changeDiff(-1);
            				}
HXLINE( 547)				if (::PlayerSettings_obj::player1->controls->_rightP->check()) {
HXLINE( 549)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 549)					_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
HXLINE( 550)					this->changeDiff(1);
            				}
HXLINE( 553)				if (::PlayerSettings_obj::player1->controls->_accept->check()) {
HXLINE( 555)					this->selectedSomethin = true;
HXLINE( 556)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 556)					_hx_tmp->play(::Paths_obj::sound(HX_("confirmMenu",bf,8e,fe,3c),null()),null(),null(),null(),null(),null());
HXLINE( 557)					this->goToState();
            				}
            			}
            			else {
HXLINE( 443)				if (::PlayerSettings_obj::player1->controls->_leftP->check()) {
HXLINE( 445)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 445)					_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
HXLINE( 446)					this->changeItem(-1);
            				}
HXLINE( 449)				if (::PlayerSettings_obj::player1->controls->_rightP->check()) {
HXLINE( 451)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 451)					_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
HXLINE( 452)					this->changeItem(1);
            				}
HXLINE( 455)				if (::PlayerSettings_obj::player1->controls->_upP->check()) {
HXLINE( 457)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 457)					_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
HXLINE( 458)					this->changeItem(-3);
            				}
HXLINE( 461)				if (::PlayerSettings_obj::player1->controls->_downP->check()) {
HXLINE( 463)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 463)					_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
HXLINE( 464)					this->changeItem(3);
            				}
HXLINE( 467)				if (::PlayerSettings_obj::player1->controls->_back->check()) {
HXLINE( 469)					this->acceptInput = false;
HXLINE( 470)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 470)					_hx_tmp->play(::Paths_obj::sound(HX_("cancelMenu",39,a4,43,b7),null()),null(),null(),null(),null(),null());
HXLINE( 471)					{
HXLINE( 471)						 ::flixel::FlxState nextState =  ::MainMenuState_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 471)						if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 471)							::flixel::FlxG_obj::game->_requestedState = nextState;
            						}
            					}
            				}
HXLINE( 474)				if (::PlayerSettings_obj::player1->controls->_accept->check()) {
HXLINE( 476)					switch((int)(this->curSelected)){
            						case (int)1: {
HXLINE( 486)							if (::hx::IsEq( ::flixel::FlxG_obj::save->data->__Field(HX_("monibeaten",3c,53,44,8f),::hx::paccDynamic),true )) {
HXLINE( 488)								 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 488)								_hx_tmp->play(::Paths_obj::sound(HX_("confirmMenu",bf,8e,fe,3c),null()),null(),null(),null(),null(),null());
HXLINE( 489)								this->diff->set_visible(true);
HXLINE( 490)								this->diffselect = true;
            							}
            						}
            						break;
            						case (int)2: {
HXLINE( 495)							if (::hx::IsEq( ::flixel::FlxG_obj::save->data->__Field(HX_("sayobeaten",43,14,7b,f6),::hx::paccDynamic),true )) {
HXLINE( 497)								 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 497)								_hx_tmp->play(::Paths_obj::sound(HX_("confirmMenu",bf,8e,fe,3c),null()),null(),null(),null(),null(),null());
HXLINE( 498)								this->diff->set_visible(true);
HXLINE( 499)								this->diffselect = true;
            							}
            						}
            						break;
            						case (int)3: {
HXLINE( 504)							if (::hx::IsEq( ::flixel::FlxG_obj::save->data->__Field(HX_("natbeaten",00,2f,7a,be),::hx::paccDynamic),true )) {
HXLINE( 506)								 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 506)								_hx_tmp->play(::Paths_obj::sound(HX_("confirmMenu",bf,8e,fe,3c),null()),null(),null(),null(),null(),null());
HXLINE( 507)								this->diff->set_visible(true);
HXLINE( 508)								this->diffselect = true;
            							}
            						}
            						break;
            						case (int)4: {
HXLINE( 513)							if (::hx::IsEq( ::flixel::FlxG_obj::save->data->__Field(HX_("yuribeaten",32,30,34,69),::hx::paccDynamic),true )) {
HXLINE( 515)								 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 515)								_hx_tmp->play(::Paths_obj::sound(HX_("confirmMenu",bf,8e,fe,3c),null()),null(),null(),null(),null(),null());
HXLINE( 516)								this->diff->set_visible(true);
HXLINE( 517)								this->diffselect = true;
            							}
            						}
            						break;
            						case (int)5: {
HXLINE( 522)							if (::hx::IsEq( ::flixel::FlxG_obj::save->data->__Field(HX_("extrabeaten",ef,e9,0c,61),::hx::paccDynamic),true )) {
HXLINE( 524)								 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 524)								_hx_tmp->play(::Paths_obj::sound(HX_("confirmMenu",bf,8e,fe,3c),null()),null(),null(),null(),null(),null());
HXLINE( 525)								this->diff->set_visible(true);
HXLINE( 526)								this->diffselect = true;
            							}
            						}
            						break;
            						default:{
HXLINE( 480)							 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 480)							_hx_tmp->play(::Paths_obj::sound(HX_("confirmMenu",bf,8e,fe,3c),null()),null(),null(),null(),null(),null());
HXLINE( 481)							this->diff->set_visible(true);
HXLINE( 482)							this->diffselect = true;
            						}
            					}
            				}
            			}
            		}
HXLINE( 563)		if (::hx::IsNotNull( ::flixel::FlxG_obj::sound->music )) {
HXLINE( 564)			::Conductor_obj::songPosition = ::flixel::FlxG_obj::sound->music->_time;
            		}
HXLINE( 566)		this->super::update(elapsed);
            	}


void DokiStoryState_obj::changeDiff(::hx::Null< int >  __o_change){
            		int change = __o_change.Default(0);
            	HX_STACKFRAME(&_hx_pos_362c9079ec11828f_570_changeDiff)
HXLINE( 571)		 ::DokiStoryState _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 571)		_hx_tmp->curDifficulty = (_hx_tmp->curDifficulty + change);
HXLINE( 573)		if ((this->curDifficulty < 0)) {
HXLINE( 574)			this->curDifficulty = 2;
            		}
HXLINE( 575)		if ((this->curDifficulty > 2)) {
HXLINE( 576)			this->curDifficulty = 0;
            		}
HXLINE( 578)		switch((int)(this->curDifficulty)){
            			case (int)0: {
HXLINE( 581)				this->diff->animation->play(HX_("easy",02,8c,0c,43),null(),null(),null());
            			}
            			break;
            			case (int)1: {
HXLINE( 583)				this->diff->animation->play(HX_("normal",27,72,69,30),null(),null(),null());
            			}
            			break;
            			case (int)2: {
HXLINE( 585)				this->diff->animation->play(HX_("hard",eb,2e,08,45),null(),null(),null());
            			}
            			break;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(DokiStoryState_obj,changeDiff,(void))

void DokiStoryState_obj::goToState(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::DokiStoryState,_gthis) HXARGC(1)
            		void _hx_run( ::flixel::util::FlxTimer tmr){
            			HX_GC_STACKFRAME(&_hx_pos_362c9079ec11828f_640_goToState)
HXLINE( 640)			switch((int)(_gthis->curSelected)){
            				case (int)0: {
HXLINE( 643)					{
HXLINE( 643)						 ::flixel::FlxState nextState = ::LoadingState_obj::getNextState(( ( ::flixel::FlxState)( ::PlayState_obj::__alloc( HX_CTX ,null(),null())) ),true);
HXDLIN( 643)						if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 643)							::flixel::FlxG_obj::game->_requestedState = nextState;
            						}
            					}
HXLINE( 644)					::haxe::Log_obj::trace(HX_("Monika Week Selected",3a,8e,23,69),::hx::SourceInfo(HX_("source/DokiStoryState.hx",25,3d,be,5e),644,HX_("DokiStoryState",45,bd,1b,02),HX_("goToState",4e,a5,e1,c9)));
            				}
            				break;
            				case (int)1: {
HXLINE( 649)					{
HXLINE( 649)						 ::flixel::FlxState nextState = ::LoadingState_obj::getNextState(( ( ::flixel::FlxState)( ::PlayState_obj::__alloc( HX_CTX ,null(),null())) ),false);
HXDLIN( 649)						if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 649)							::flixel::FlxG_obj::game->_requestedState = nextState;
            						}
            					}
HXLINE( 651)					::haxe::Log_obj::trace(HX_("Sayori Selected",80,30,20,b6),::hx::SourceInfo(HX_("source/DokiStoryState.hx",25,3d,be,5e),651,HX_("DokiStoryState",45,bd,1b,02),HX_("goToState",4e,a5,e1,c9)));
            				}
            				break;
            				case (int)2: {
HXLINE( 653)					{
HXLINE( 653)						 ::flixel::FlxState nextState = ::LoadingState_obj::getNextState(( ( ::flixel::FlxState)( ::PlayState_obj::__alloc( HX_CTX ,null(),null())) ),true);
HXDLIN( 653)						if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 653)							::flixel::FlxG_obj::game->_requestedState = nextState;
            						}
            					}
HXLINE( 654)					::haxe::Log_obj::trace(HX_("Natsuki Week Selected",a8,8b,b9,cb),::hx::SourceInfo(HX_("source/DokiStoryState.hx",25,3d,be,5e),654,HX_("DokiStoryState",45,bd,1b,02),HX_("goToState",4e,a5,e1,c9)));
            				}
            				break;
            				case (int)3: {
HXLINE( 656)					{
HXLINE( 656)						 ::flixel::FlxState nextState = ::LoadingState_obj::getNextState(( ( ::flixel::FlxState)( ::PlayState_obj::__alloc( HX_CTX ,null(),null())) ),true);
HXDLIN( 656)						if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 656)							::flixel::FlxG_obj::game->_requestedState = nextState;
            						}
            					}
HXLINE( 657)					::haxe::Log_obj::trace(HX_("Yuri Week Selected",da,9f,9b,27),::hx::SourceInfo(HX_("source/DokiStoryState.hx",25,3d,be,5e),657,HX_("DokiStoryState",45,bd,1b,02),HX_("goToState",4e,a5,e1,c9)));
            				}
            				break;
            				case (int)4: {
HXLINE( 659)					{
HXLINE( 659)						 ::flixel::FlxState nextState = ::LoadingState_obj::getNextState(( ( ::flixel::FlxState)( ::PlayState_obj::__alloc( HX_CTX ,null(),null())) ),true);
HXDLIN( 659)						if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 659)							::flixel::FlxG_obj::game->_requestedState = nextState;
            						}
            					}
HXLINE( 660)					::haxe::Log_obj::trace(HX_("monika extra Week Selected",ca,d4,f3,1a),::hx::SourceInfo(HX_("source/DokiStoryState.hx",25,3d,be,5e),660,HX_("DokiStoryState",45,bd,1b,02),HX_("goToState",4e,a5,e1,c9)));
            				}
            				break;
            				case (int)5: {
HXLINE( 662)					{
HXLINE( 662)						 ::flixel::FlxState nextState = ::LoadingState_obj::getNextState(( ( ::flixel::FlxState)( ::PlayState_obj::__alloc( HX_CTX ,null(),null())) ),true);
HXDLIN( 662)						if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 662)							::flixel::FlxG_obj::game->_requestedState = nextState;
            						}
            					}
HXLINE( 664)					::haxe::Log_obj::trace(HX_("Festival Week Selected",bf,6b,b9,e4),::hx::SourceInfo(HX_("source/DokiStoryState.hx",25,3d,be,5e),664,HX_("DokiStoryState",45,bd,1b,02),HX_("goToState",4e,a5,e1,c9)));
            				}
            				break;
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_362c9079ec11828f_590_goToState)
HXDLIN( 590)		 ::DokiStoryState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 591)		bool _hx_tmp;
HXDLIN( 591)		bool _hx_tmp1;
HXDLIN( 591)		 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN( 591)		if (_this->keyManager->checkStatus(69,_this->status)) {
HXLINE( 591)			 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN( 591)			_hx_tmp1 = _this->keyManager->checkStatus(82,_this->status);
            		}
            		else {
HXLINE( 591)			_hx_tmp1 = false;
            		}
HXDLIN( 591)		if (_hx_tmp1) {
HXLINE( 591)			 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN( 591)			_hx_tmp = _this->keyManager->checkStatus(66,_this->status);
            		}
            		else {
HXLINE( 591)			_hx_tmp = false;
            		}
HXDLIN( 591)		if (_hx_tmp) {
HXLINE( 593)			::PlayState_obj::storyPlaylist = ::Array_obj< ::String >::fromData( _hx_array_data_021bbd45_6,1);
HXLINE( 594)			::PlayState_obj::storyDifficulty = 1;
            		}
            		else {
HXLINE( 598)			::PlayState_obj::storyPlaylist = ( (::Array< ::String >)(this->weekData->__get(this->curSelected)) );
HXLINE( 599)			::PlayState_obj::storyDifficulty = this->curDifficulty;
            		}
HXLINE( 602)		::PlayState_obj::isStoryMode = true;
HXLINE( 603)		this->selectedSomethin = true;
HXLINE( 604)		this->diffselect = false;
HXLINE( 606)		::String diffic = HX_("",00,00,00,00);
HXLINE( 608)		switch((int)(this->curDifficulty)){
            			case (int)0: {
HXLINE( 611)				diffic = HX_("-easy",af,a6,14,2c);
            			}
            			break;
            			case (int)2: {
HXLINE( 613)				diffic = HX_("-hard",98,49,10,2e);
            			}
            			break;
            		}
HXLINE( 616)		switch((int)(this->curSelected)){
            			case (int)0: {
HXLINE( 619)				this->story_moni->animation->play(HX_("selected",5b,2a,6d,b1),null(),null(),null());
            			}
            			break;
            			case (int)1: {
HXLINE( 621)				this->story_sayo->animation->play(HX_("selected",5b,2a,6d,b1),null(),null(),null());
            			}
            			break;
            			case (int)2: {
HXLINE( 623)				this->story_nat->animation->play(HX_("selected",5b,2a,6d,b1),null(),null(),null());
            			}
            			break;
            			case (int)3: {
HXLINE( 625)				this->story_yuri->animation->play(HX_("selected",5b,2a,6d,b1),null(),null(),null());
            			}
            			break;
            			case (int)4: {
HXLINE( 627)				this->story_secret->animation->play(HX_("selected",5b,2a,6d,b1),null(),null(),null());
            			}
            			break;
            			case (int)5: {
HXLINE( 629)				if (::hx::IsEq( ::flixel::FlxG_obj::save->data->__Field(HX_("extra2beaten",81,0c,3e,cc),::hx::paccDynamic),true )) {
HXLINE( 631)					this->story_secret2->animation->play(HX_("selected",5b,2a,6d,b1),null(),null(),null());
            				}
            			}
            			break;
            		}
HXLINE( 635)		::String _hx_tmp2 = (::PlayState_obj::storyPlaylist->__get(0).toLowerCase() + diffic);
HXDLIN( 635)		::PlayState_obj::SONG = ::Song_obj::loadFromJson(_hx_tmp2,::PlayState_obj::storyPlaylist->__get(0).toLowerCase());
HXLINE( 636)		::PlayState_obj::storyWeek = this->curSelected;
HXLINE( 637)		::PlayState_obj::campaignScore = 0;
HXLINE( 638)		 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(2, ::Dynamic(new _hx_Closure_0(_gthis)),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(DokiStoryState_obj,goToState,(void))

void DokiStoryState_obj::changeItem(::hx::Null< int >  __o_huh){
            		int huh = __o_huh.Default(0);
            	HX_STACKFRAME(&_hx_pos_362c9079ec11828f_670_changeItem)
HXLINE( 671)		 ::DokiStoryState _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 671)		_hx_tmp->curSelected = (_hx_tmp->curSelected + huh);
HXLINE( 674)		if ((this->curSelected == -3)) {
HXLINE( 675)			this->curSelected = 3;
            		}
HXLINE( 676)		if ((this->curSelected == -2)) {
HXLINE( 677)			this->curSelected = 4;
            		}
HXLINE( 678)		if ((this->curSelected == -1)) {
HXLINE( 679)			this->curSelected = 5;
            		}
HXLINE( 682)		if ((this->curSelected == 7)) {
HXLINE( 683)			this->curSelected = 1;
            		}
HXLINE( 684)		if ((this->curSelected == 8)) {
HXLINE( 685)			this->curSelected = 2;
            		}
HXLINE( 686)		if ((this->curSelected == 9)) {
HXLINE( 687)			this->curSelected = 3;
            		}
HXLINE( 689)		if ((this->curSelected >= 6)) {
HXLINE( 690)			this->curSelected = 0;
            		}
HXLINE( 691)		if ((this->curSelected < 0)) {
HXLINE( 692)			this->curSelected = 5;
            		}
HXLINE( 694)		this->updateText();
HXLINE( 696)		switch((int)(this->curSelected)){
            			case (int)1: {
HXLINE( 699)				this->txtWeekTitle->set_visible(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("monibeaten",3c,53,44,8f),::hx::paccDynamic)) ));
HXLINE( 700)				this->txtTracklist->set_visible(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("monibeaten",3c,53,44,8f),::hx::paccDynamic)) ));
            			}
            			break;
            			case (int)2: {
HXLINE( 702)				this->txtWeekTitle->set_visible(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("sayobeaten",43,14,7b,f6),::hx::paccDynamic)) ));
HXLINE( 703)				this->txtTracklist->set_visible(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("sayobeaten",43,14,7b,f6),::hx::paccDynamic)) ));
            			}
            			break;
            			case (int)3: {
HXLINE( 705)				this->txtWeekTitle->set_visible(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("natbeaten",00,2f,7a,be),::hx::paccDynamic)) ));
HXLINE( 706)				this->txtTracklist->set_visible(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("natbeaten",00,2f,7a,be),::hx::paccDynamic)) ));
            			}
            			break;
            			case (int)4: {
HXLINE( 708)				this->txtWeekTitle->set_visible(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("yuribeaten",32,30,34,69),::hx::paccDynamic)) ));
HXLINE( 709)				this->txtTracklist->set_visible(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("yuribeaten",32,30,34,69),::hx::paccDynamic)) ));
            			}
            			break;
            			case (int)5: {
HXLINE( 711)				this->txtWeekTitle->set_visible(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("extrabeaten",ef,e9,0c,61),::hx::paccDynamic)) ));
HXLINE( 712)				this->txtTracklist->set_visible(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("extra2beaten",81,0c,3e,cc),::hx::paccDynamic)) ));
            			}
            			break;
            			default:{
HXLINE( 714)				this->txtWeekTitle->set_visible(true);
HXLINE( 715)				this->txtTracklist->set_visible(true);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(DokiStoryState_obj,changeItem,(void))

void DokiStoryState_obj::unlockedweeks(){
            	HX_STACKFRAME(&_hx_pos_362c9079ec11828f_720_unlockedweeks)
HXLINE( 721)		if (::hx::IsEq( ::flixel::FlxG_obj::save->data->__Field(HX_("monibeaten",3c,53,44,8f),::hx::paccDynamic),true )) {
HXLINE( 723)			::flixel::FlxG_obj::save->data->__SetField(HX_("weekUnlocked",37,64,c4,a5),2,::hx::paccDynamic);
HXLINE( 724)			this->story_sayo->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
            		}
HXLINE( 726)		if (::hx::IsEq( ::flixel::FlxG_obj::save->data->__Field(HX_("sayobeaten",43,14,7b,f6),::hx::paccDynamic),true )) {
HXLINE( 728)			::flixel::FlxG_obj::save->data->__SetField(HX_("weekUnlocked",37,64,c4,a5),3,::hx::paccDynamic);
HXLINE( 729)			this->story_nat->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
            		}
HXLINE( 731)		if (::hx::IsEq( ::flixel::FlxG_obj::save->data->__Field(HX_("natbeaten",00,2f,7a,be),::hx::paccDynamic),true )) {
HXLINE( 733)			::flixel::FlxG_obj::save->data->__SetField(HX_("weekUnlocked",37,64,c4,a5),4,::hx::paccDynamic);
HXLINE( 734)			this->story_yuri->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
            		}
HXLINE( 736)		if (::hx::IsEq( ::flixel::FlxG_obj::save->data->__Field(HX_("yuribeaten",32,30,34,69),::hx::paccDynamic),true )) {
HXLINE( 738)			::flixel::FlxG_obj::save->data->__SetField(HX_("weekUnlocked",37,64,c4,a5),5,::hx::paccDynamic);
HXLINE( 739)			this->story_secret->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
            		}
HXLINE( 741)		if (::hx::IsEq( ::flixel::FlxG_obj::save->data->__Field(HX_("extrabeaten",ef,e9,0c,61),::hx::paccDynamic),true )) {
HXLINE( 743)			::flixel::FlxG_obj::save->data->__SetField(HX_("weekUnlocked",37,64,c4,a5),6,::hx::paccDynamic);
HXLINE( 744)			this->story_secret2->animation->play(HX_("hidden_idle",49,a3,e6,52),null(),null(),null());
            		}
HXLINE( 746)		if (::hx::IsEq( ::flixel::FlxG_obj::save->data->__Field(HX_("extra2beaten",81,0c,3e,cc),::hx::paccDynamic),true )) {
HXLINE( 748)			::flixel::FlxG_obj::save->data->__SetField(HX_("weekUnlocked",37,64,c4,a5),7,::hx::paccDynamic);
HXLINE( 749)			this->story_secret2->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(DokiStoryState_obj,unlockedweeks,(void))

void DokiStoryState_obj::updateText(){
            	HX_STACKFRAME(&_hx_pos_362c9079ec11828f_754_updateText)
HXLINE( 755)		this->txtTracklist->set_text(HX_("\n",0a,00,00,00));
HXLINE( 756)		::Array< ::String > stringThing = ( (::Array< ::String >)(this->weekData->__get(this->curSelected)) );
HXLINE( 758)		{
HXLINE( 758)			int _g = 0;
HXDLIN( 758)			while((_g < stringThing->length)){
HXLINE( 758)				::String i = stringThing->__get(_g);
HXDLIN( 758)				_g = (_g + 1);
HXLINE( 759)				 ::flixel::text::FlxText fh = this->txtTracklist;
HXDLIN( 759)				::String fh1 = fh->text;
HXDLIN( 759)				fh->set_text((fh1 + (HX_("\n",0a,00,00,00) + i.split(HX_(" (",08,1c,00,00))->__get(0))));
            			}
            		}
HXLINE( 761)		 ::flixel::text::FlxText _hx_tmp = this->txtWeekTitle;
HXDLIN( 761)		_hx_tmp->set_text(this->weekNames->__get(this->curSelected).toUpperCase());
HXLINE( 762)		 ::flixel::text::FlxText _hx_tmp1 = this->txtTracklist;
HXDLIN( 762)		_hx_tmp1->set_text(this->txtTracklist->text.toUpperCase());
HXLINE( 764)		this->txtTracklist->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
HXLINE( 765)		 ::flixel::text::FlxText fh = this->txtTracklist;
HXDLIN( 765)		fh->set_x((fh->x - ( (Float)(1110) )));
HXLINE( 767)		 ::flixel::text::FlxText fh1 = this->txtTracklist;
HXDLIN( 767)		fh1->set_text((fh1->text + HX_("\n",0a,00,00,00)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(DokiStoryState_obj,updateText,(void))

void DokiStoryState_obj::beatHit(){
            	HX_STACKFRAME(&_hx_pos_362c9079ec11828f_771_beatHit)
HXLINE( 772)		this->super::beatHit();
HXLINE( 773)		this->logoBl->animation->play(HX_("bump",f6,0f,20,41),true,null(),null());
            	}


::String DokiStoryState_obj::kadeEngineVer;

::String DokiStoryState_obj::nightly;

bool DokiStoryState_obj::showPopUp;

int DokiStoryState_obj::popupWeek;

bool DokiStoryState_obj::secondaryPopUp;

 ::DokiStoryState DokiStoryState_obj::instance;


::hx::ObjectPtr< DokiStoryState_obj > DokiStoryState_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< DokiStoryState_obj > __this = new DokiStoryState_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< DokiStoryState_obj > DokiStoryState_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	DokiStoryState_obj *__this = (DokiStoryState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DokiStoryState_obj), true, "DokiStoryState"));
	*(void **)__this = DokiStoryState_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

DokiStoryState_obj::DokiStoryState_obj()
{
}

void DokiStoryState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DokiStoryState);
	HX_MARK_MEMBER_NAME(scoreText,"scoreText");
	HX_MARK_MEMBER_NAME(weekData,"weekData");
	HX_MARK_MEMBER_NAME(curDifficulty,"curDifficulty");
	HX_MARK_MEMBER_NAME(weekNames,"weekNames");
	HX_MARK_MEMBER_NAME(txtWeekTitle,"txtWeekTitle");
	HX_MARK_MEMBER_NAME(txtTracklist,"txtTracklist");
	HX_MARK_MEMBER_NAME(grpWeekText,"grpWeekText");
	HX_MARK_MEMBER_NAME(curSelected,"curSelected");
	HX_MARK_MEMBER_NAME(menuItems,"menuItems");
	HX_MARK_MEMBER_NAME(crediticons,"crediticons");
	HX_MARK_MEMBER_NAME(fixdiff,"fixdiff");
	HX_MARK_MEMBER_NAME(newGaming,"newGaming");
	HX_MARK_MEMBER_NAME(newGaming2,"newGaming2");
	HX_MARK_MEMBER_NAME(newInput,"newInput");
	HX_MARK_MEMBER_NAME(logo,"logo");
	HX_MARK_MEMBER_NAME(songlist,"songlist");
	HX_MARK_MEMBER_NAME(camFollow,"camFollow");
	HX_MARK_MEMBER_NAME(story_moni,"story_moni");
	HX_MARK_MEMBER_NAME(story_sayo,"story_sayo");
	HX_MARK_MEMBER_NAME(story_nat,"story_nat");
	HX_MARK_MEMBER_NAME(story_yuri,"story_yuri");
	HX_MARK_MEMBER_NAME(story_secret,"story_secret");
	HX_MARK_MEMBER_NAME(story_secret2,"story_secret2");
	HX_MARK_MEMBER_NAME(story_cursor,"story_cursor");
	HX_MARK_MEMBER_NAME(backdrop,"backdrop");
	HX_MARK_MEMBER_NAME(logoBl,"logoBl");
	HX_MARK_MEMBER_NAME(diff,"diff");
	HX_MARK_MEMBER_NAME(grpLocks,"grpLocks");
	HX_MARK_MEMBER_NAME(difficultySelectors,"difficultySelectors");
	HX_MARK_MEMBER_NAME(sprDifficulty,"sprDifficulty");
	HX_MARK_MEMBER_NAME(leftArrow,"leftArrow");
	HX_MARK_MEMBER_NAME(rightArrow,"rightArrow");
	HX_MARK_MEMBER_NAME(acceptInput,"acceptInput");
	HX_MARK_MEMBER_NAME(selectedSomethin,"selectedSomethin");
	HX_MARK_MEMBER_NAME(diffselect,"diffselect");
	 ::MusicBeatState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DokiStoryState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(scoreText,"scoreText");
	HX_VISIT_MEMBER_NAME(weekData,"weekData");
	HX_VISIT_MEMBER_NAME(curDifficulty,"curDifficulty");
	HX_VISIT_MEMBER_NAME(weekNames,"weekNames");
	HX_VISIT_MEMBER_NAME(txtWeekTitle,"txtWeekTitle");
	HX_VISIT_MEMBER_NAME(txtTracklist,"txtTracklist");
	HX_VISIT_MEMBER_NAME(grpWeekText,"grpWeekText");
	HX_VISIT_MEMBER_NAME(curSelected,"curSelected");
	HX_VISIT_MEMBER_NAME(menuItems,"menuItems");
	HX_VISIT_MEMBER_NAME(crediticons,"crediticons");
	HX_VISIT_MEMBER_NAME(fixdiff,"fixdiff");
	HX_VISIT_MEMBER_NAME(newGaming,"newGaming");
	HX_VISIT_MEMBER_NAME(newGaming2,"newGaming2");
	HX_VISIT_MEMBER_NAME(newInput,"newInput");
	HX_VISIT_MEMBER_NAME(logo,"logo");
	HX_VISIT_MEMBER_NAME(songlist,"songlist");
	HX_VISIT_MEMBER_NAME(camFollow,"camFollow");
	HX_VISIT_MEMBER_NAME(story_moni,"story_moni");
	HX_VISIT_MEMBER_NAME(story_sayo,"story_sayo");
	HX_VISIT_MEMBER_NAME(story_nat,"story_nat");
	HX_VISIT_MEMBER_NAME(story_yuri,"story_yuri");
	HX_VISIT_MEMBER_NAME(story_secret,"story_secret");
	HX_VISIT_MEMBER_NAME(story_secret2,"story_secret2");
	HX_VISIT_MEMBER_NAME(story_cursor,"story_cursor");
	HX_VISIT_MEMBER_NAME(backdrop,"backdrop");
	HX_VISIT_MEMBER_NAME(logoBl,"logoBl");
	HX_VISIT_MEMBER_NAME(diff,"diff");
	HX_VISIT_MEMBER_NAME(grpLocks,"grpLocks");
	HX_VISIT_MEMBER_NAME(difficultySelectors,"difficultySelectors");
	HX_VISIT_MEMBER_NAME(sprDifficulty,"sprDifficulty");
	HX_VISIT_MEMBER_NAME(leftArrow,"leftArrow");
	HX_VISIT_MEMBER_NAME(rightArrow,"rightArrow");
	HX_VISIT_MEMBER_NAME(acceptInput,"acceptInput");
	HX_VISIT_MEMBER_NAME(selectedSomethin,"selectedSomethin");
	HX_VISIT_MEMBER_NAME(diffselect,"diffselect");
	 ::MusicBeatState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val DokiStoryState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"logo") ) { return ::hx::Val( logo ); }
		if (HX_FIELD_EQ(inName,"diff") ) { return ::hx::Val( diff ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"logoBl") ) { return ::hx::Val( logoBl ); }
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"fixdiff") ) { return ::hx::Val( fixdiff ); }
		if (HX_FIELD_EQ(inName,"beatHit") ) { return ::hx::Val( beatHit_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"weekData") ) { return ::hx::Val( weekData ); }
		if (HX_FIELD_EQ(inName,"newInput") ) { return ::hx::Val( newInput ); }
		if (HX_FIELD_EQ(inName,"songlist") ) { return ::hx::Val( songlist ); }
		if (HX_FIELD_EQ(inName,"backdrop") ) { return ::hx::Val( backdrop ); }
		if (HX_FIELD_EQ(inName,"grpLocks") ) { return ::hx::Val( grpLocks ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"scoreText") ) { return ::hx::Val( scoreText ); }
		if (HX_FIELD_EQ(inName,"weekNames") ) { return ::hx::Val( weekNames ); }
		if (HX_FIELD_EQ(inName,"menuItems") ) { return ::hx::Val( menuItems ); }
		if (HX_FIELD_EQ(inName,"newGaming") ) { return ::hx::Val( newGaming ); }
		if (HX_FIELD_EQ(inName,"camFollow") ) { return ::hx::Val( camFollow ); }
		if (HX_FIELD_EQ(inName,"story_nat") ) { return ::hx::Val( story_nat ); }
		if (HX_FIELD_EQ(inName,"leftArrow") ) { return ::hx::Val( leftArrow ); }
		if (HX_FIELD_EQ(inName,"goToState") ) { return ::hx::Val( goToState_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"newGaming2") ) { return ::hx::Val( newGaming2 ); }
		if (HX_FIELD_EQ(inName,"story_moni") ) { return ::hx::Val( story_moni ); }
		if (HX_FIELD_EQ(inName,"story_sayo") ) { return ::hx::Val( story_sayo ); }
		if (HX_FIELD_EQ(inName,"story_yuri") ) { return ::hx::Val( story_yuri ); }
		if (HX_FIELD_EQ(inName,"rightArrow") ) { return ::hx::Val( rightArrow ); }
		if (HX_FIELD_EQ(inName,"diffselect") ) { return ::hx::Val( diffselect ); }
		if (HX_FIELD_EQ(inName,"changeDiff") ) { return ::hx::Val( changeDiff_dyn() ); }
		if (HX_FIELD_EQ(inName,"changeItem") ) { return ::hx::Val( changeItem_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateText") ) { return ::hx::Val( updateText_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"grpWeekText") ) { return ::hx::Val( grpWeekText ); }
		if (HX_FIELD_EQ(inName,"curSelected") ) { return ::hx::Val( curSelected ); }
		if (HX_FIELD_EQ(inName,"crediticons") ) { return ::hx::Val( crediticons ); }
		if (HX_FIELD_EQ(inName,"acceptInput") ) { return ::hx::Val( acceptInput ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"txtWeekTitle") ) { return ::hx::Val( txtWeekTitle ); }
		if (HX_FIELD_EQ(inName,"txtTracklist") ) { return ::hx::Val( txtTracklist ); }
		if (HX_FIELD_EQ(inName,"story_secret") ) { return ::hx::Val( story_secret ); }
		if (HX_FIELD_EQ(inName,"story_cursor") ) { return ::hx::Val( story_cursor ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"curDifficulty") ) { return ::hx::Val( curDifficulty ); }
		if (HX_FIELD_EQ(inName,"story_secret2") ) { return ::hx::Val( story_secret2 ); }
		if (HX_FIELD_EQ(inName,"sprDifficulty") ) { return ::hx::Val( sprDifficulty ); }
		if (HX_FIELD_EQ(inName,"unlockedweeks") ) { return ::hx::Val( unlockedweeks_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"selectedSomethin") ) { return ::hx::Val( selectedSomethin ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"difficultySelectors") ) { return ::hx::Val( difficultySelectors ); }
	}
	return super::__Field(inName,inCallProp);
}

bool DokiStoryState_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"nightly") ) { outValue = ( nightly ); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { outValue = ( instance ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"showPopUp") ) { outValue = ( showPopUp ); return true; }
		if (HX_FIELD_EQ(inName,"popupWeek") ) { outValue = ( popupWeek ); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"kadeEngineVer") ) { outValue = ( kadeEngineVer ); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"secondaryPopUp") ) { outValue = ( secondaryPopUp ); return true; }
	}
	return false;
}

::hx::Val DokiStoryState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"logo") ) { logo=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"diff") ) { diff=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"logoBl") ) { logoBl=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"fixdiff") ) { fixdiff=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"weekData") ) { weekData=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
		if (HX_FIELD_EQ(inName,"newInput") ) { newInput=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"songlist") ) { songlist=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"backdrop") ) { backdrop=inValue.Cast<  ::flixel::addons::display::FlxBackdrop >(); return inValue; }
		if (HX_FIELD_EQ(inName,"grpLocks") ) { grpLocks=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"scoreText") ) { scoreText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"weekNames") ) { weekNames=inValue.Cast< ::Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"menuItems") ) { menuItems=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"newGaming") ) { newGaming=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"camFollow") ) { camFollow=inValue.Cast<  ::flixel::FlxObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"story_nat") ) { story_nat=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"leftArrow") ) { leftArrow=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"newGaming2") ) { newGaming2=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"story_moni") ) { story_moni=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"story_sayo") ) { story_sayo=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"story_yuri") ) { story_yuri=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rightArrow") ) { rightArrow=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"diffselect") ) { diffselect=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"grpWeekText") ) { grpWeekText=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"curSelected") ) { curSelected=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"crediticons") ) { crediticons=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"acceptInput") ) { acceptInput=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"txtWeekTitle") ) { txtWeekTitle=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"txtTracklist") ) { txtTracklist=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"story_secret") ) { story_secret=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"story_cursor") ) { story_cursor=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"curDifficulty") ) { curDifficulty=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"story_secret2") ) { story_secret2=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sprDifficulty") ) { sprDifficulty=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"selectedSomethin") ) { selectedSomethin=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"difficultySelectors") ) { difficultySelectors=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool DokiStoryState_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"nightly") ) { nightly=ioValue.Cast< ::String >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=ioValue.Cast<  ::DokiStoryState >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"showPopUp") ) { showPopUp=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"popupWeek") ) { popupWeek=ioValue.Cast< int >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"kadeEngineVer") ) { kadeEngineVer=ioValue.Cast< ::String >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"secondaryPopUp") ) { secondaryPopUp=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

void DokiStoryState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("scoreText",1f,7d,bd,dc));
	outFields->push(HX_("weekData",3e,ec,92,29));
	outFields->push(HX_("curDifficulty",db,b7,38,a7));
	outFields->push(HX_("weekNames",34,4b,f8,f8));
	outFields->push(HX_("txtWeekTitle",74,f4,3f,69));
	outFields->push(HX_("txtTracklist",d9,6f,f5,3e));
	outFields->push(HX_("grpWeekText",c6,97,1f,d2));
	outFields->push(HX_("curSelected",fb,eb,ab,32));
	outFields->push(HX_("menuItems",e1,15,e5,5c));
	outFields->push(HX_("crediticons",01,10,ab,2e));
	outFields->push(HX_("fixdiff",5a,2c,85,e7));
	outFields->push(HX_("newGaming",2f,8a,ad,0e));
	outFields->push(HX_("newGaming2",23,5f,2b,c9));
	outFields->push(HX_("newInput",8a,07,68,e1));
	outFields->push(HX_("logo",6b,9f,b7,47));
	outFields->push(HX_("songlist",b3,4e,b2,4a));
	outFields->push(HX_("camFollow",e0,6e,47,22));
	outFields->push(HX_("story_moni",e7,6b,e6,a4));
	outFields->push(HX_("story_sayo",ae,1d,d3,a8));
	outFields->push(HX_("story_nat",57,c4,66,34));
	outFields->push(HX_("story_yuri",5d,8c,d9,ac));
	outFields->push(HX_("story_secret",ba,a4,2a,19));
	outFields->push(HX_("story_secret2",38,7e,25,ec));
	outFields->push(HX_("story_cursor",20,25,c9,f3));
	outFields->push(HX_("backdrop",d6,b1,96,1a));
	outFields->push(HX_("logoBl",15,ca,6e,5c));
	outFields->push(HX_("diff",05,5c,69,42));
	outFields->push(HX_("grpLocks",03,78,f1,5b));
	outFields->push(HX_("difficultySelectors",b9,fa,53,88));
	outFields->push(HX_("sprDifficulty",d0,6b,83,ba));
	outFields->push(HX_("leftArrow",42,68,6f,3a));
	outFields->push(HX_("rightArrow",4d,60,54,28));
	outFields->push(HX_("acceptInput",e2,a3,6a,39));
	outFields->push(HX_("selectedSomethin",c8,ec,fb,99));
	outFields->push(HX_("diffselect",c1,c8,f4,67));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DokiStoryState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(DokiStoryState_obj,scoreText),HX_("scoreText",1f,7d,bd,dc)},
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(int)offsetof(DokiStoryState_obj,weekData),HX_("weekData",3e,ec,92,29)},
	{::hx::fsInt,(int)offsetof(DokiStoryState_obj,curDifficulty),HX_("curDifficulty",db,b7,38,a7)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(DokiStoryState_obj,weekNames),HX_("weekNames",34,4b,f8,f8)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(DokiStoryState_obj,txtWeekTitle),HX_("txtWeekTitle",74,f4,3f,69)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(DokiStoryState_obj,txtTracklist),HX_("txtTracklist",d9,6f,f5,3e)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(DokiStoryState_obj,grpWeekText),HX_("grpWeekText",c6,97,1f,d2)},
	{::hx::fsInt,(int)offsetof(DokiStoryState_obj,curSelected),HX_("curSelected",fb,eb,ab,32)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(DokiStoryState_obj,menuItems),HX_("menuItems",e1,15,e5,5c)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(DokiStoryState_obj,crediticons),HX_("crediticons",01,10,ab,2e)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(DokiStoryState_obj,fixdiff),HX_("fixdiff",5a,2c,85,e7)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(DokiStoryState_obj,newGaming),HX_("newGaming",2f,8a,ad,0e)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(DokiStoryState_obj,newGaming2),HX_("newGaming2",23,5f,2b,c9)},
	{::hx::fsBool,(int)offsetof(DokiStoryState_obj,newInput),HX_("newInput",8a,07,68,e1)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(DokiStoryState_obj,logo),HX_("logo",6b,9f,b7,47)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(DokiStoryState_obj,songlist),HX_("songlist",b3,4e,b2,4a)},
	{::hx::fsObject /*  ::flixel::FlxObject */ ,(int)offsetof(DokiStoryState_obj,camFollow),HX_("camFollow",e0,6e,47,22)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(DokiStoryState_obj,story_moni),HX_("story_moni",e7,6b,e6,a4)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(DokiStoryState_obj,story_sayo),HX_("story_sayo",ae,1d,d3,a8)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(DokiStoryState_obj,story_nat),HX_("story_nat",57,c4,66,34)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(DokiStoryState_obj,story_yuri),HX_("story_yuri",5d,8c,d9,ac)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(DokiStoryState_obj,story_secret),HX_("story_secret",ba,a4,2a,19)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(DokiStoryState_obj,story_secret2),HX_("story_secret2",38,7e,25,ec)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(DokiStoryState_obj,story_cursor),HX_("story_cursor",20,25,c9,f3)},
	{::hx::fsObject /*  ::flixel::addons::display::FlxBackdrop */ ,(int)offsetof(DokiStoryState_obj,backdrop),HX_("backdrop",d6,b1,96,1a)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(DokiStoryState_obj,logoBl),HX_("logoBl",15,ca,6e,5c)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(DokiStoryState_obj,diff),HX_("diff",05,5c,69,42)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(DokiStoryState_obj,grpLocks),HX_("grpLocks",03,78,f1,5b)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(DokiStoryState_obj,difficultySelectors),HX_("difficultySelectors",b9,fa,53,88)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(DokiStoryState_obj,sprDifficulty),HX_("sprDifficulty",d0,6b,83,ba)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(DokiStoryState_obj,leftArrow),HX_("leftArrow",42,68,6f,3a)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(DokiStoryState_obj,rightArrow),HX_("rightArrow",4d,60,54,28)},
	{::hx::fsBool,(int)offsetof(DokiStoryState_obj,acceptInput),HX_("acceptInput",e2,a3,6a,39)},
	{::hx::fsBool,(int)offsetof(DokiStoryState_obj,selectedSomethin),HX_("selectedSomethin",c8,ec,fb,99)},
	{::hx::fsBool,(int)offsetof(DokiStoryState_obj,diffselect),HX_("diffselect",c1,c8,f4,67)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo DokiStoryState_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &DokiStoryState_obj::kadeEngineVer,HX_("kadeEngineVer",2a,26,b2,03)},
	{::hx::fsString,(void *) &DokiStoryState_obj::nightly,HX_("nightly",65,3e,0e,6d)},
	{::hx::fsBool,(void *) &DokiStoryState_obj::showPopUp,HX_("showPopUp",0f,54,f9,f4)},
	{::hx::fsInt,(void *) &DokiStoryState_obj::popupWeek,HX_("popupWeek",40,1c,52,c6)},
	{::hx::fsBool,(void *) &DokiStoryState_obj::secondaryPopUp,HX_("secondaryPopUp",38,8a,2f,38)},
	{::hx::fsObject /*  ::DokiStoryState */ ,(void *) &DokiStoryState_obj::instance,HX_("instance",95,1f,e1,59)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String DokiStoryState_obj_sMemberFields[] = {
	HX_("scoreText",1f,7d,bd,dc),
	HX_("weekData",3e,ec,92,29),
	HX_("curDifficulty",db,b7,38,a7),
	HX_("weekNames",34,4b,f8,f8),
	HX_("txtWeekTitle",74,f4,3f,69),
	HX_("txtTracklist",d9,6f,f5,3e),
	HX_("grpWeekText",c6,97,1f,d2),
	HX_("curSelected",fb,eb,ab,32),
	HX_("menuItems",e1,15,e5,5c),
	HX_("crediticons",01,10,ab,2e),
	HX_("fixdiff",5a,2c,85,e7),
	HX_("newGaming",2f,8a,ad,0e),
	HX_("newGaming2",23,5f,2b,c9),
	HX_("newInput",8a,07,68,e1),
	HX_("logo",6b,9f,b7,47),
	HX_("songlist",b3,4e,b2,4a),
	HX_("camFollow",e0,6e,47,22),
	HX_("story_moni",e7,6b,e6,a4),
	HX_("story_sayo",ae,1d,d3,a8),
	HX_("story_nat",57,c4,66,34),
	HX_("story_yuri",5d,8c,d9,ac),
	HX_("story_secret",ba,a4,2a,19),
	HX_("story_secret2",38,7e,25,ec),
	HX_("story_cursor",20,25,c9,f3),
	HX_("backdrop",d6,b1,96,1a),
	HX_("logoBl",15,ca,6e,5c),
	HX_("diff",05,5c,69,42),
	HX_("grpLocks",03,78,f1,5b),
	HX_("difficultySelectors",b9,fa,53,88),
	HX_("sprDifficulty",d0,6b,83,ba),
	HX_("leftArrow",42,68,6f,3a),
	HX_("rightArrow",4d,60,54,28),
	HX_("acceptInput",e2,a3,6a,39),
	HX_("create",fc,66,0f,7c),
	HX_("selectedSomethin",c8,ec,fb,99),
	HX_("diffselect",c1,c8,f4,67),
	HX_("update",09,86,05,87),
	HX_("changeDiff",95,91,b2,1c),
	HX_("goToState",4e,a5,e1,c9),
	HX_("changeItem",a3,fa,08,20),
	HX_("unlockedweeks",fc,82,31,86),
	HX_("updateText",56,b7,ae,05),
	HX_("beatHit",7d,ea,04,74),
	::String(null()) };

static void DokiStoryState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DokiStoryState_obj::kadeEngineVer,"kadeEngineVer");
	HX_MARK_MEMBER_NAME(DokiStoryState_obj::nightly,"nightly");
	HX_MARK_MEMBER_NAME(DokiStoryState_obj::showPopUp,"showPopUp");
	HX_MARK_MEMBER_NAME(DokiStoryState_obj::popupWeek,"popupWeek");
	HX_MARK_MEMBER_NAME(DokiStoryState_obj::secondaryPopUp,"secondaryPopUp");
	HX_MARK_MEMBER_NAME(DokiStoryState_obj::instance,"instance");
};

#ifdef HXCPP_VISIT_ALLOCS
static void DokiStoryState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DokiStoryState_obj::kadeEngineVer,"kadeEngineVer");
	HX_VISIT_MEMBER_NAME(DokiStoryState_obj::nightly,"nightly");
	HX_VISIT_MEMBER_NAME(DokiStoryState_obj::showPopUp,"showPopUp");
	HX_VISIT_MEMBER_NAME(DokiStoryState_obj::popupWeek,"popupWeek");
	HX_VISIT_MEMBER_NAME(DokiStoryState_obj::secondaryPopUp,"secondaryPopUp");
	HX_VISIT_MEMBER_NAME(DokiStoryState_obj::instance,"instance");
};

#endif

::hx::Class DokiStoryState_obj::__mClass;

static ::String DokiStoryState_obj_sStaticFields[] = {
	HX_("kadeEngineVer",2a,26,b2,03),
	HX_("nightly",65,3e,0e,6d),
	HX_("showPopUp",0f,54,f9,f4),
	HX_("popupWeek",40,1c,52,c6),
	HX_("secondaryPopUp",38,8a,2f,38),
	HX_("instance",95,1f,e1,59),
	::String(null())
};

void DokiStoryState_obj::__register()
{
	DokiStoryState_obj _hx_dummy;
	DokiStoryState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("DokiStoryState",45,bd,1b,02);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DokiStoryState_obj::__GetStatic;
	__mClass->mSetStaticField = &DokiStoryState_obj::__SetStatic;
	__mClass->mMarkFunc = DokiStoryState_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(DokiStoryState_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DokiStoryState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DokiStoryState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = DokiStoryState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DokiStoryState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DokiStoryState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void DokiStoryState_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_362c9079ec11828f_56_boot)
HXDLIN(  56)		kadeEngineVer = (HX_("1.4.2",bb,da,31,55) + ::DokiStoryState_obj::nightly);
            	}
{
            	HX_STACKFRAME(&_hx_pos_362c9079ec11828f_57_boot)
HXDLIN(  57)		nightly = HX_("",00,00,00,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_362c9079ec11828f_70_boot)
HXDLIN(  70)		showPopUp = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_362c9079ec11828f_71_boot)
HXDLIN(  71)		popupWeek = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_362c9079ec11828f_72_boot)
HXDLIN(  72)		secondaryPopUp = false;
            	}
}

