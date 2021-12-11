#include <hxcpp.h>

#ifndef INCLUDED_AccuracyDOption
#include <AccuracyDOption.h>
#endif
#ifndef INCLUDED_AccuracyOption
#include <AccuracyOption.h>
#endif
#ifndef INCLUDED_BotPlay
#include <BotPlay.h>
#endif
#ifndef INCLUDED_CachingState
#include <CachingState.h>
#endif
#ifndef INCLUDED_CharacterCaching
#include <CharacterCaching.h>
#endif
#ifndef INCLUDED_Conductor
#include <Conductor.h>
#endif
#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_CustomizeGameplay
#include <CustomizeGameplay.h>
#endif
#ifndef INCLUDED_DistractionsAndEffectsOption
#include <DistractionsAndEffectsOption.h>
#endif
#ifndef INCLUDED_DownscrollOption
#include <DownscrollOption.h>
#endif
#ifndef INCLUDED_FPSCapOption
#include <FPSCapOption.h>
#endif
#ifndef INCLUDED_FPSOption
#include <FPSOption.h>
#endif
#ifndef INCLUDED_FlashingLightsOption
#include <FlashingLightsOption.h>
#endif
#ifndef INCLUDED_GFCountdownOption
#include <GFCountdownOption.h>
#endif
#ifndef INCLUDED_GhostTapOption
#include <GhostTapOption.h>
#endif
#ifndef INCLUDED_HelperFunctions
#include <HelperFunctions.h>
#endif
#ifndef INCLUDED_Judgement
#include <Judgement.h>
#endif
#ifndef INCLUDED_KeyBindingsOption
#include <KeyBindingsOption.h>
#endif
#ifndef INCLUDED_LaneUnderlayOption
#include <LaneUnderlayOption.h>
#endif
#ifndef INCLUDED_LangUtil
#include <LangUtil.h>
#endif
#ifndef INCLUDED_MainMenuState
#include <MainMenuState.h>
#endif
#ifndef INCLUDED_MiddleScrollOption
#include <MiddleScrollOption.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_MusicCaching
#include <MusicCaching.h>
#endif
#ifndef INCLUDED_NPSDisplayOption
#include <NPSDisplayOption.h>
#endif
#ifndef INCLUDED_Option
#include <Option.h>
#endif
#ifndef INCLUDED_OptionCategory
#include <OptionCategory.h>
#endif
#ifndef INCLUDED_OptionsMenu
#include <OptionsMenu.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_PlayerSettings
#include <PlayerSettings.h>
#endif
#ifndef INCLUDED_RainbowFPSOption
#include <RainbowFPSOption.h>
#endif
#ifndef INCLUDED_ReplayOption
#include <ReplayOption.h>
#endif
#ifndef INCLUDED_ResetButtonOption
#include <ResetButtonOption.h>
#endif
#ifndef INCLUDED_ResetSave
#include <ResetSave.h>
#endif
#ifndef INCLUDED_ScrollSpeedOption
#include <ScrollSpeedOption.h>
#endif
#ifndef INCLUDED_SelfAwareness
#include <SelfAwareness.h>
#endif
#ifndef INCLUDED_SongCaching
#include <SongCaching.h>
#endif
#ifndef INCLUDED_SongPositionOption
#include <SongPositionOption.h>
#endif
#ifndef INCLUDED_SoundCaching
#include <SoundCaching.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_WatermarkOption
#include <WatermarkOption.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
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
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
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
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepad
#include <flixel/input/gamepad/FlxGamepad.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadButton
#include <flixel/input/gamepad/FlxGamepadButton.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadManager
#include <flixel/input/gamepad/FlxGamepadManager.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_lists_FlxBaseGamepadList
#include <flixel/input/gamepad/lists/FlxBaseGamepadList.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_lists_FlxGamepadButtonList
#include <flixel/input/gamepad/lists/FlxGamepadButtonList.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_FlxGamepadMapping
#include <flixel/input/gamepad/mappings/FlxGamepadMapping.h>
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
#ifndef INCLUDED_flixel_tweens_FlxEase
#include <flixel/tweens/FlxEase.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_VarTween
#include <flixel/tweens/misc/VarTween.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
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
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b7c1b117f8362d86_21_new,"OptionsMenu","new",0x0f1d276f,"OptionsMenu.new","OptionsMenu.hx",21,0x7ae6dae1)
HX_LOCAL_STACK_FRAME(_hx_pos_b7c1b117f8362d86_80_create,"OptionsMenu","create",0x9c60a34d,"OptionsMenu.create","OptionsMenu.hx",80,0x7ae6dae1)
HX_LOCAL_STACK_FRAME(_hx_pos_b7c1b117f8362d86_299_update,"OptionsMenu","update",0xa756c25a,"OptionsMenu.update","OptionsMenu.hx",299,0x7ae6dae1)
HX_LOCAL_STACK_FRAME(_hx_pos_b7c1b117f8362d86_148_update,"OptionsMenu","update",0xa756c25a,"OptionsMenu.update","OptionsMenu.hx",148,0x7ae6dae1)
HX_LOCAL_STACK_FRAME(_hx_pos_b7c1b117f8362d86_315_changeSelection,"OptionsMenu","changeSelection",0x61ecca4b,"OptionsMenu.changeSelection","OptionsMenu.hx",315,0x7ae6dae1)
HX_LOCAL_STACK_FRAME(_hx_pos_b7c1b117f8362d86_343_beatHit,"OptionsMenu","beatHit",0x9ac8750c,"OptionsMenu.beatHit","OptionsMenu.hx",343,0x7ae6dae1)

void OptionsMenu_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_GC_STACKFRAME(&_hx_pos_b7c1b117f8362d86_21_new)
HXLINE( 312)		this->isSettingControl = false;
HXLINE( 145)		this->isCat = false;
HXLINE(  71)		this->currentDescription = HX_("",00,00,00,00);
HXLINE(  69)		this->acceptInput = true;
HXLINE(  33)		::String _hx_tmp = ::LangUtil_obj::getString(HX_("catGameplay",1c,39,f7,ec));
HXLINE(  34)		::String _hx_tmp1 = ::LangUtil_obj::getString(HX_("descKeyBindings",7c,77,2f,b8));
HXDLIN(  34)		 ::KeyBindingsOption _hx_tmp2 =  ::KeyBindingsOption_obj::__alloc( HX_CTX ,_hx_tmp1,::PlayerSettings_obj::player1->controls);
HXLINE(  35)		 ::DownscrollOption _hx_tmp3 =  ::DownscrollOption_obj::__alloc( HX_CTX ,::LangUtil_obj::getString(HX_("descDownscroll",a0,17,2d,36)));
HXLINE(  36)		 ::GhostTapOption _hx_tmp4 =  ::GhostTapOption_obj::__alloc( HX_CTX ,::LangUtil_obj::getString(HX_("descGhostTap",c5,11,ab,22)));
HXLINE(  37)		 ::Judgement _hx_tmp5 =  ::Judgement_obj::__alloc( HX_CTX ,::LangUtil_obj::getString(HX_("descJudgement",24,bc,3a,6b)));
HXLINE(  38)		 ::FPSCapOption _hx_tmp6 =  ::FPSCapOption_obj::__alloc( HX_CTX ,::LangUtil_obj::getString(HX_("descFPSCap",da,fc,e4,60)));
HXLINE(  41)		 ::ReplayOption _hx_tmp7 =  ::ReplayOption_obj::__alloc( HX_CTX ,::LangUtil_obj::getString(HX_("descReplay",58,cc,e1,57)));
HXLINE(  43)		 ::ScrollSpeedOption _hx_tmp8 =  ::ScrollSpeedOption_obj::__alloc( HX_CTX ,::LangUtil_obj::getString(HX_("descScroll",3e,bd,c4,98)));
HXLINE(  44)		 ::AccuracyDOption _hx_tmp9 =  ::AccuracyDOption_obj::__alloc( HX_CTX ,::LangUtil_obj::getString(HX_("descAccuracyMode",2d,76,46,fe)));
HXLINE(  45)		 ::ResetButtonOption _hx_tmp10 =  ::ResetButtonOption_obj::__alloc( HX_CTX ,::LangUtil_obj::getString(HX_("descReset",be,d5,a2,b4)));
HXLINE(  46)		 ::BotPlay _hx_tmp11 =  ::BotPlay_obj::__alloc( HX_CTX ,::LangUtil_obj::getString(HX_("descBotplay",2a,a1,32,44)));
HXLINE(  47)		 ::SelfAwareness _hx_tmp12 =  ::SelfAwareness_obj::__alloc( HX_CTX ,HX_("...",ee,0f,23,00));
HXLINE(  33)		 ::OptionCategory _hx_tmp13 =  ::OptionCategory_obj::__alloc( HX_CTX ,_hx_tmp,::Array_obj< ::Dynamic>::__new(12)->init(0,_hx_tmp2)->init(1,_hx_tmp3)->init(2,_hx_tmp4)->init(3,_hx_tmp5)->init(4,_hx_tmp6)->init(5,_hx_tmp7)->init(6,_hx_tmp8)->init(7,_hx_tmp9)->init(8,_hx_tmp10)->init(9,_hx_tmp11)->init(10,_hx_tmp12)->init(11, ::CustomizeGameplay_obj::__alloc( HX_CTX ,::LangUtil_obj::getString(HX_("descCustomize",b2,63,0b,0b)))));
HXLINE(  50)		::String _hx_tmp14 = ::LangUtil_obj::getString(HX_("catAppearance",9a,75,0f,7f));
HXLINE(  51)		 ::FPSOption _hx_tmp15 =  ::FPSOption_obj::__alloc( HX_CTX ,::LangUtil_obj::getString(HX_("descFPSCount",97,8f,06,2b)));
HXDLIN(  51)		 ::RainbowFPSOption _hx_tmp16 =  ::RainbowFPSOption_obj::__alloc( HX_CTX ,::LangUtil_obj::getString(HX_("descFPSRainbow",fe,8d,61,d3)));
HXLINE(  52)		 ::DistractionsAndEffectsOption _hx_tmp17 =  ::DistractionsAndEffectsOption_obj::__alloc( HX_CTX ,::LangUtil_obj::getString(HX_("descDistract",f7,a9,34,cc)));
HXDLIN(  52)		 ::FlashingLightsOption _hx_tmp18 =  ::FlashingLightsOption_obj::__alloc( HX_CTX ,::LangUtil_obj::getString(HX_("descFlashing",a3,d8,f0,ee)));
HXLINE(  53)		 ::AccuracyOption _hx_tmp19 =  ::AccuracyOption_obj::__alloc( HX_CTX ,::LangUtil_obj::getString(HX_("descAccuracy",aa,59,cd,54)));
HXDLIN(  53)		 ::NPSDisplayOption _hx_tmp20 =  ::NPSDisplayOption_obj::__alloc( HX_CTX ,::LangUtil_obj::getString(HX_("descNPS",20,20,2e,19)));
HXLINE(  54)		 ::LaneUnderlayOption _hx_tmp21 =  ::LaneUnderlayOption_obj::__alloc( HX_CTX ,::LangUtil_obj::getString(HX_("descLaneUnderway",14,bd,92,80)));
HXDLIN(  54)		 ::MiddleScrollOption _hx_tmp22 =  ::MiddleScrollOption_obj::__alloc( HX_CTX ,::LangUtil_obj::getString(HX_("descMiddleScroll",33,2d,ce,2d)));
HXLINE(  55)		 ::SongPositionOption _hx_tmp23 =  ::SongPositionOption_obj::__alloc( HX_CTX ,::LangUtil_obj::getString(HX_("descPosition",1a,f4,02,20)));
HXLINE(  50)		 ::OptionCategory _hx_tmp24 =  ::OptionCategory_obj::__alloc( HX_CTX ,_hx_tmp14,::Array_obj< ::Dynamic>::__new(10)->init(0,_hx_tmp15)->init(1,_hx_tmp16)->init(2,_hx_tmp17)->init(3,_hx_tmp18)->init(4,_hx_tmp19)->init(5,_hx_tmp20)->init(6,_hx_tmp21)->init(7,_hx_tmp22)->init(8,_hx_tmp23)->init(9, ::WatermarkOption_obj::__alloc( HX_CTX ,::LangUtil_obj::getString(HX_("descWatermark",13,5f,5f,f2)))));
HXLINE(  58)		::String _hx_tmp25 = ::LangUtil_obj::getString(HX_("cmnCaching",db,d9,b8,b1));
HXLINE(  59)		 ::CharacterCaching _hx_tmp26 =  ::CharacterCaching_obj::__alloc( HX_CTX ,::LangUtil_obj::getString(HX_("descCharacterCache",0a,48,a8,b2)));
HXLINE(  60)		 ::SongCaching _hx_tmp27 =  ::SongCaching_obj::__alloc( HX_CTX ,::LangUtil_obj::getString(HX_("descSongCache",9c,91,cf,82)));
HXLINE(  61)		 ::MusicCaching _hx_tmp28 =  ::MusicCaching_obj::__alloc( HX_CTX ,::LangUtil_obj::getString(HX_("descMusicCache",0e,95,f0,57)));
HXLINE(  62)		 ::SoundCaching _hx_tmp29 =  ::SoundCaching_obj::__alloc( HX_CTX ,::LangUtil_obj::getString(HX_("descSoundCache",a4,80,b2,90)));
HXLINE(  58)		 ::OptionCategory _hx_tmp30 =  ::OptionCategory_obj::__alloc( HX_CTX ,_hx_tmp25,::Array_obj< ::Dynamic>::__new(5)->init(0,_hx_tmp26)->init(1,_hx_tmp27)->init(2,_hx_tmp28)->init(3,_hx_tmp29)->init(4, ::CachingState_obj::__alloc( HX_CTX ,::LangUtil_obj::getString(HX_("descCaching",ae,3d,ad,05)))));
HXLINE(  66)		::String _hx_tmp31 = ::LangUtil_obj::getString(HX_("catSave",73,ee,0c,df));
HXLINE(  32)		this->options = ::Array_obj< ::Dynamic>::__new(4)->init(0,_hx_tmp13)->init(1,_hx_tmp24)->init(2,_hx_tmp30)->init(3, ::OptionCategory_obj::__alloc( HX_CTX ,_hx_tmp31,::Array_obj< ::Dynamic>::__new(1)->init(0, ::ResetSave_obj::__alloc( HX_CTX ,::LangUtil_obj::getString(HX_("descSaveReset",c1,00,b6,87))))));
HXLINE(  30)		this->curSelected = 0;
HXLINE(  21)		super::__construct(TransIn,TransOut);
            	}

Dynamic OptionsMenu_obj::__CreateEmpty() { return new OptionsMenu_obj; }

void *OptionsMenu_obj::_hx_vtable = 0;

Dynamic OptionsMenu_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< OptionsMenu_obj > _hx_result = new OptionsMenu_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool OptionsMenu_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3f706236) {
		if (inClassId<=(int)0x23a57bae) {
			if (inClassId<=(int)0x109e893d) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x109e893d;
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

void OptionsMenu_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_b7c1b117f8362d86_80_create)
HXLINE(  81)		::OptionsMenu_obj::instance = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  83)		this->persistentUpdate = (this->persistentDraw = true);
HXLINE(  85)		if (( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("sayobeaten",43,14,7b,f6),::hx::paccDynamic)) )) {
HXLINE(  86)			::Array< ::Dynamic> _hx_tmp = this->options;
HXDLIN(  86)			::String _hx_tmp1 = ::LangUtil_obj::getString(HX_("catUnlock",7a,bf,53,b1));
HXDLIN(  86)			_hx_tmp->push( ::OptionCategory_obj::__alloc( HX_CTX ,_hx_tmp1,::Array_obj< ::Dynamic>::__new(1)->init(0, ::GFCountdownOption_obj::__alloc( HX_CTX ,::LangUtil_obj::getString(HX_("descGFCountdown",e1,c7,c0,20))))));
            		}
HXLINE(  88)		::String library = null();
HXDLIN(  88)		::String _hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("scrolling_BG",0f,dc,17,b9)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN(  88)		this->add((this->backdrop =  ::flixel::addons::display::FlxBackdrop_obj::__alloc( HX_CTX ,_hx_tmp,null(),null(),null(),null(),null(),null())));
HXLINE(  89)		this->backdrop->velocity->set(-40,-40);
HXLINE(  91)		 ::flixel::FlxSprite _hx_tmp1 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-60,0,null());
HXDLIN(  91)		::String library1 = null();
HXDLIN(  91)		::String _hx_tmp2 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("Credits_LeftSide",83,bf,91,b9)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library1);
HXDLIN(  91)		this->logo = _hx_tmp1->loadGraphic(_hx_tmp2,null(),null(),null(),null(),null());
HXLINE(  92)		this->logo->set_antialiasing(true);
HXLINE(  93)		this->add(this->logo);
HXLINE(  95)		this->logoBl =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,40,-41,null());
HXLINE(  96)		 ::flixel::FlxSprite _hx_tmp3 = this->logoBl;
HXDLIN(  96)		::String library2 = null();
HXDLIN(  96)		bool isLocale = false;
HXDLIN(  96)		 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp4;
HXDLIN(  96)		if (isLocale) {
HXLINE(  96)			if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("DDLCStart_Screen_Assets",a2,04,0b,cf)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library2),null())) {
HXLINE(  96)				 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("DDLCStart_Screen_Assets",a2,04,0b,cf),library2,isLocale);
HXDLIN(  96)				_hx_tmp4 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("DDLCStart_Screen_Assets",a2,04,0b,cf)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library2));
            			}
            			else {
HXLINE(  96)				 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("DDLCStart_Screen_Assets",a2,04,0b,cf),library2,isLocale);
HXDLIN(  96)				_hx_tmp4 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("DDLCStart_Screen_Assets",a2,04,0b,cf)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library2));
            			}
            		}
            		else {
HXLINE(  96)			 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("DDLCStart_Screen_Assets",a2,04,0b,cf),library2,null());
HXDLIN(  96)			_hx_tmp4 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("DDLCStart_Screen_Assets",a2,04,0b,cf)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library2));
            		}
HXDLIN(  96)		_hx_tmp3->set_frames(_hx_tmp4);
HXLINE(  97)		this->logoBl->set_antialiasing(true);
HXLINE(  98)		this->logoBl->scale->set(((Float)0.5),((Float)0.5));
HXLINE(  99)		this->logoBl->animation->addByPrefix(HX_("bump",f6,0f,20,41),HX_("logo bumpin",70,a1,0b,72),24,false,null(),null());
HXLINE( 100)		this->logoBl->animation->play(HX_("bump",f6,0f,20,41),null(),null(),null());
HXLINE( 101)		this->logoBl->updateHitbox();
HXLINE( 102)		this->add(this->logoBl);
HXLINE( 104)		this->grpControls =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE( 105)		this->add(this->grpControls);
HXLINE( 107)		{
HXLINE( 107)			int _g = 0;
HXDLIN( 107)			int _g1 = this->options->length;
HXDLIN( 107)			while((_g < _g1)){
HXLINE( 107)				_g = (_g + 1);
HXDLIN( 107)				int i = (_g - 1);
HXLINE( 109)				 ::flixel::text::FlxText controlLabel =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,460,((50 * i) + 20),0,this->options->__get(i).StaticCast<  ::OptionCategory >()->getName(),null(),null());
HXLINE( 110)				controlLabel->setFormat(::LangUtil_obj::getFont(HX_("riffic",51,90,7b,4d)),38,-1,HX_("center",d5,25,db,05),null(),null(),null());
HXLINE( 111)				{
HXLINE( 111)					controlLabel->set_borderStyle(::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn());
HXDLIN( 111)					controlLabel->set_borderColor(-33537);
HXDLIN( 111)					controlLabel->set_borderSize(( (Float)(2) ));
HXDLIN( 111)					controlLabel->set_borderQuality(( (Float)(1) ));
            				}
HXLINE( 112)				controlLabel->ID = i;
HXLINE( 113)				this->grpControls->add(controlLabel).StaticCast<  ::flixel::text::FlxText >();
            			}
            		}
HXLINE( 117)		this->currentDescription = HX_("N/A",00,59,3b,00);
HXLINE( 119)		int _hx_tmp5 = (::flixel::FlxG_obj::height + 40);
HXLINE( 121)		::String _hx_tmp6 = (::LangUtil_obj::getString(HX_("cmnOffset",37,45,e3,60)) + HX_(": ",a6,32,00,00));
HXDLIN( 121)		::String _hx_tmp7 = ((_hx_tmp6 + ::HelperFunctions_obj::truncateFloat(( (Float)(::flixel::FlxG_obj::save->data->__Field(HX_("offset",93,97,3f,60),::hx::paccDynamic)) ),2)) + HX_(" - ",73,6f,18,00));
HXDLIN( 121)		::String _hx_tmp8 = ((_hx_tmp7 + ::LangUtil_obj::getString(HX_("cmnDesc",f5,9a,06,2d))) + HX_(" - ",73,6f,18,00));
HXLINE( 119)		::OptionsMenu_obj::versionShit =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,5,_hx_tmp5,0,(_hx_tmp8 + this->currentDescription),12,null());
HXLINE( 129)		::OptionsMenu_obj::versionShit->scrollFactor->set(null(),null());
HXLINE( 130)		 ::flixel::text::FlxText _hx_tmp9 = ::OptionsMenu_obj::versionShit;
HXDLIN( 130)		_hx_tmp9->setFormat(::LangUtil_obj::getFont(null()),16,-1,HX_("left",07,08,b0,47),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE( 132)		 ::flixel::FlxSprite _hx_tmp10 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-30,(::flixel::FlxG_obj::height + 40),null());
HXDLIN( 132)		int _hx_tmp11 = ::Std_obj::_hx_int((::OptionsMenu_obj::versionShit->get_width() + 900));
HXDLIN( 132)		this->blackBorder = _hx_tmp10->makeGraphic(_hx_tmp11,::Std_obj::_hx_int((::OptionsMenu_obj::versionShit->get_height() + 600)),-16777216,null(),null());
HXLINE( 133)		this->blackBorder->set_alpha(((Float)0.5));
HXLINE( 135)		this->add(this->blackBorder);
HXLINE( 137)		this->add(::OptionsMenu_obj::versionShit);
HXLINE( 139)		::flixel::tweens::FlxTween_obj::tween(::OptionsMenu_obj::versionShit, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("y",79,00,00,00),(::flixel::FlxG_obj::height - 18))),2, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::elasticInOut_dyn())));
HXLINE( 140)		::flixel::tweens::FlxTween_obj::tween(this->blackBorder, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("y",79,00,00,00),(::flixel::FlxG_obj::height - 18))),2, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::elasticInOut_dyn())));
HXLINE( 142)		this->super::create();
            	}


void OptionsMenu_obj::update(Float elapsed){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::OptionsMenu,_gthis) HXARGC(1)
            		void _hx_run( ::flixel::text::FlxText txt){
            			HX_GC_STACKFRAME(&_hx_pos_b7c1b117f8362d86_299_update)
HXLINE( 300)			{
HXLINE( 300)				txt->set_borderStyle(::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn());
HXDLIN( 300)				txt->set_borderColor(-33537);
HXDLIN( 300)				txt->set_borderSize(( (Float)(2) ));
HXDLIN( 300)				txt->set_borderQuality(( (Float)(1) ));
            			}
HXLINE( 302)			if ((txt->ID == _gthis->curSelected)) {
HXLINE( 303)				txt->set_borderStyle(::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn());
HXDLIN( 303)				txt->set_borderColor(-12289);
HXDLIN( 303)				txt->set_borderSize(( (Float)(2) ));
HXDLIN( 303)				txt->set_borderQuality(( (Float)(1) ));
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_b7c1b117f8362d86_148_update)
HXDLIN( 148)		 ::OptionsMenu _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 149)		if (this->acceptInput) {
HXLINE( 151)			bool _hx_tmp;
HXDLIN( 151)			if (::PlayerSettings_obj::player1->controls->_back->check()) {
HXLINE( 151)				_hx_tmp = !(this->isCat);
            			}
            			else {
HXLINE( 151)				_hx_tmp = false;
            			}
HXDLIN( 151)			if (_hx_tmp) {
HXLINE( 153)				this->acceptInput = false;
HXLINE( 154)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 154)				_hx_tmp->play(::Paths_obj::sound(HX_("cancelMenu",39,a4,43,b7),null()),null(),null(),null(),null(),null());
HXLINE( 155)				{
HXLINE( 155)					 ::flixel::FlxState nextState =  ::MainMenuState_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 155)					if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 155)						::flixel::FlxG_obj::game->_requestedState = nextState;
            					}
            				}
            			}
            			else {
HXLINE( 157)				if (::PlayerSettings_obj::player1->controls->_back->check()) {
HXLINE( 159)					this->isCat = false;
HXLINE( 160)					this->grpControls->clear();
HXLINE( 161)					{
HXLINE( 161)						int _g = 0;
HXDLIN( 161)						int _g1 = this->options->length;
HXDLIN( 161)						while((_g < _g1)){
HXLINE( 161)							_g = (_g + 1);
HXDLIN( 161)							int i = (_g - 1);
HXLINE( 163)							 ::flixel::text::FlxText controlLabel =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,460,((50 * i) + 20),0,this->options->__get(i).StaticCast<  ::OptionCategory >()->getName(),null(),null());
HXLINE( 164)							controlLabel->setFormat(::LangUtil_obj::getFont(HX_("riffic",51,90,7b,4d)),38,-1,HX_("center",d5,25,db,05),null(),null(),null());
HXLINE( 165)							{
HXLINE( 165)								controlLabel->set_borderStyle(::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn());
HXDLIN( 165)								controlLabel->set_borderColor(-33537);
HXDLIN( 165)								controlLabel->set_borderSize(( (Float)(2) ));
HXDLIN( 165)								controlLabel->set_borderQuality(( (Float)(1) ));
            							}
HXLINE( 166)							controlLabel->ID = i;
HXLINE( 167)							this->grpControls->add(controlLabel).StaticCast<  ::flixel::text::FlxText >();
            						}
            					}
HXLINE( 171)					this->curSelected = 0;
HXLINE( 173)					this->changeSelection(this->curSelected);
            				}
            			}
HXLINE( 176)			 ::flixel::input::gamepad::FlxGamepad gamepad = ::flixel::FlxG_obj::gamepads->lastActive;
HXLINE( 178)			if (::hx::IsNotNull( gamepad )) {
HXLINE( 180)				 ::flixel::input::gamepad::lists::FlxGamepadButtonList _this = gamepad->justPressed;
HXDLIN( 180)				int id = 11;
HXDLIN( 180)				 ::flixel::input::gamepad::FlxGamepad _this1 = _this->gamepad;
HXDLIN( 180)				int Status = _this->status;
HXDLIN( 180)				bool _hx_tmp;
HXDLIN( 180)				switch((int)(id)){
            					case (int)-2: {
HXLINE( 180)						_hx_tmp = _this1->anyButton(Status);
            					}
            					break;
            					case (int)-1: {
HXLINE( 180)						_hx_tmp = !(_this1->anyButton(Status));
            					}
            					break;
            					default:{
HXLINE( 180)						int RawID = _this1->mapping->getRawID(id);
HXDLIN( 180)						 ::flixel::input::gamepad::FlxGamepadButton button = _this1->buttons->__get(RawID).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN( 180)						if (::hx::IsNotNull( button )) {
HXLINE( 180)							_hx_tmp = button->hasState(Status);
            						}
            						else {
HXLINE( 180)							_hx_tmp = false;
            						}
            					}
            				}
HXDLIN( 180)				if (_hx_tmp) {
HXLINE( 182)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 182)					_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
HXLINE( 183)					this->changeSelection(-1);
            				}
HXLINE( 185)				 ::flixel::input::gamepad::lists::FlxGamepadButtonList _this2 = gamepad->justPressed;
HXDLIN( 185)				int id1 = 12;
HXDLIN( 185)				 ::flixel::input::gamepad::FlxGamepad _this3 = _this2->gamepad;
HXDLIN( 185)				int Status1 = _this2->status;
HXDLIN( 185)				bool _hx_tmp1;
HXDLIN( 185)				switch((int)(id1)){
            					case (int)-2: {
HXLINE( 185)						_hx_tmp1 = _this3->anyButton(Status1);
            					}
            					break;
            					case (int)-1: {
HXLINE( 185)						_hx_tmp1 = !(_this3->anyButton(Status1));
            					}
            					break;
            					default:{
HXLINE( 185)						int RawID = _this3->mapping->getRawID(id1);
HXDLIN( 185)						 ::flixel::input::gamepad::FlxGamepadButton button = _this3->buttons->__get(RawID).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN( 185)						if (::hx::IsNotNull( button )) {
HXLINE( 185)							_hx_tmp1 = button->hasState(Status1);
            						}
            						else {
HXLINE( 185)							_hx_tmp1 = false;
            						}
            					}
            				}
HXDLIN( 185)				if (_hx_tmp1) {
HXLINE( 187)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 187)					_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
HXLINE( 188)					this->changeSelection(1);
            				}
            			}
HXLINE( 192)			 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 192)			if (_this->keyManager->checkStatus(38,_this->status)) {
HXLINE( 193)				this->changeSelection(-1);
            			}
HXLINE( 194)			 ::flixel::input::keyboard::FlxKeyList _this1 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 194)			if (_this1->keyManager->checkStatus(40,_this1->status)) {
HXLINE( 195)				this->changeSelection(1);
            			}
HXLINE( 197)			if (this->isCat) {
HXLINE( 199)				if (this->currentSelectedCat->getOptions()->__get(this->curSelected).StaticCast<  ::Option >()->getAccept()) {
HXLINE( 201)					 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN( 201)					if (_this->keyManager->checkStatus(16,_this->status)) {
HXLINE( 203)						 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN( 203)						if (_this->keyManager->checkStatus(39,_this->status)) {
HXLINE( 204)							this->currentSelectedCat->getOptions()->__get(this->curSelected).StaticCast<  ::Option >()->right();
            						}
HXLINE( 205)						 ::flixel::input::keyboard::FlxKeyList _this1 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN( 205)						if (_this1->keyManager->checkStatus(37,_this1->status)) {
HXLINE( 206)							this->currentSelectedCat->getOptions()->__get(this->curSelected).StaticCast<  ::Option >()->left();
            						}
            					}
            					else {
HXLINE( 210)						 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 210)						if (_this->keyManager->checkStatus(39,_this->status)) {
HXLINE( 211)							this->currentSelectedCat->getOptions()->__get(this->curSelected).StaticCast<  ::Option >()->right();
            						}
HXLINE( 212)						 ::flixel::input::keyboard::FlxKeyList _this1 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 212)						if (_this1->keyManager->checkStatus(37,_this1->status)) {
HXLINE( 213)							this->currentSelectedCat->getOptions()->__get(this->curSelected).StaticCast<  ::Option >()->left();
            						}
            					}
            				}
            				else {
HXLINE( 218)					 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN( 218)					if (_this->keyManager->checkStatus(16,_this->status)) {
HXLINE( 220)						 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 220)						if (_this->keyManager->checkStatus(39,_this->status)) {
HXLINE( 221)							 ::Dynamic fh = ::flixel::FlxG_obj::save->data;
HXDLIN( 221)							fh->__SetField(HX_("offset",93,97,3f,60),(fh->__Field(HX_("offset",93,97,3f,60),::hx::paccDynamic) + ((Float)0.1)),::hx::paccDynamic);
            						}
            						else {
HXLINE( 222)							 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 222)							if (_this->keyManager->checkStatus(37,_this->status)) {
HXLINE( 223)								 ::Dynamic fh = ::flixel::FlxG_obj::save->data;
HXDLIN( 223)								fh->__SetField(HX_("offset",93,97,3f,60),( ::Dynamic(fh->__Field(HX_("offset",93,97,3f,60),::hx::paccDynamic)) - ((Float)0.1)),::hx::paccDynamic);
            							}
            						}
            					}
            					else {
HXLINE( 225)						 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN( 225)						if (_this->keyManager->checkStatus(39,_this->status)) {
HXLINE( 226)							 ::Dynamic fh = ::flixel::FlxG_obj::save->data;
HXDLIN( 226)							fh->__SetField(HX_("offset",93,97,3f,60),(fh->__Field(HX_("offset",93,97,3f,60),::hx::paccDynamic) + ((Float)0.1)),::hx::paccDynamic);
            						}
            						else {
HXLINE( 227)							 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN( 227)							if (_this->keyManager->checkStatus(37,_this->status)) {
HXLINE( 228)								 ::Dynamic fh = ::flixel::FlxG_obj::save->data;
HXDLIN( 228)								fh->__SetField(HX_("offset",93,97,3f,60),( ::Dynamic(fh->__Field(HX_("offset",93,97,3f,60),::hx::paccDynamic)) - ((Float)0.1)),::hx::paccDynamic);
            							}
            						}
            					}
HXLINE( 230)					 ::flixel::text::FlxText _hx_tmp = ::OptionsMenu_obj::versionShit;
HXDLIN( 230)					::String _hx_tmp1 = (::LangUtil_obj::getString(HX_("cmnOffset",37,45,e3,60)) + HX_(": ",a6,32,00,00));
HXDLIN( 230)					::String _hx_tmp2 = ((_hx_tmp1 + ::HelperFunctions_obj::truncateFloat(( (Float)(::flixel::FlxG_obj::save->data->__Field(HX_("offset",93,97,3f,60),::hx::paccDynamic)) ),2)) + HX_(" - ",73,6f,18,00));
HXDLIN( 230)					::String _hx_tmp3 = ((_hx_tmp2 + ::LangUtil_obj::getString(HX_("cmnDesc",f5,9a,06,2d))) + HX_(" - ",73,6f,18,00));
HXDLIN( 230)					_hx_tmp->set_text((_hx_tmp3 + this->currentDescription));
            				}
HXLINE( 233)				if (this->currentSelectedCat->getOptions()->__get(this->curSelected).StaticCast<  ::Option >()->getAccept()) {
HXLINE( 234)					 ::flixel::text::FlxText _hx_tmp = ::OptionsMenu_obj::versionShit;
HXDLIN( 234)					::String _hx_tmp1 = (this->currentSelectedCat->getOptions()->__get(this->curSelected).StaticCast<  ::Option >()->getValue() + HX_(" - ",73,6f,18,00));
HXDLIN( 234)					::String _hx_tmp2 = ((_hx_tmp1 + ::LangUtil_obj::getString(HX_("cmnDesc",f5,9a,06,2d))) + HX_(" - ",73,6f,18,00));
HXDLIN( 234)					_hx_tmp->set_text((_hx_tmp2 + this->currentDescription));
            				}
            				else {
HXLINE( 237)					 ::flixel::text::FlxText _hx_tmp = ::OptionsMenu_obj::versionShit;
HXDLIN( 237)					::String _hx_tmp1 = (::LangUtil_obj::getString(HX_("cmnOffset",37,45,e3,60)) + HX_(": ",a6,32,00,00));
HXDLIN( 237)					::String _hx_tmp2 = ((_hx_tmp1 + ::HelperFunctions_obj::truncateFloat(( (Float)(::flixel::FlxG_obj::save->data->__Field(HX_("offset",93,97,3f,60),::hx::paccDynamic)) ),2)) + HX_(" - ",73,6f,18,00));
HXDLIN( 237)					::String _hx_tmp3 = ((_hx_tmp2 + ::LangUtil_obj::getString(HX_("cmnDesc",f5,9a,06,2d))) + HX_(" - ",73,6f,18,00));
HXDLIN( 237)					_hx_tmp->set_text((_hx_tmp3 + this->currentDescription));
            				}
            			}
            			else {
HXLINE( 242)				 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN( 242)				if (_this->keyManager->checkStatus(16,_this->status)) {
HXLINE( 244)					 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 244)					if (_this->keyManager->checkStatus(39,_this->status)) {
HXLINE( 245)						 ::Dynamic fh = ::flixel::FlxG_obj::save->data;
HXDLIN( 245)						fh->__SetField(HX_("offset",93,97,3f,60),(fh->__Field(HX_("offset",93,97,3f,60),::hx::paccDynamic) + ((Float)0.1)),::hx::paccDynamic);
            					}
            					else {
HXLINE( 246)						 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 246)						if (_this->keyManager->checkStatus(37,_this->status)) {
HXLINE( 247)							 ::Dynamic fh = ::flixel::FlxG_obj::save->data;
HXDLIN( 247)							fh->__SetField(HX_("offset",93,97,3f,60),( ::Dynamic(fh->__Field(HX_("offset",93,97,3f,60),::hx::paccDynamic)) - ((Float)0.1)),::hx::paccDynamic);
            						}
            					}
            				}
            				else {
HXLINE( 249)					 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN( 249)					if (_this->keyManager->checkStatus(39,_this->status)) {
HXLINE( 250)						 ::Dynamic fh = ::flixel::FlxG_obj::save->data;
HXDLIN( 250)						fh->__SetField(HX_("offset",93,97,3f,60),(fh->__Field(HX_("offset",93,97,3f,60),::hx::paccDynamic) + ((Float)0.1)),::hx::paccDynamic);
            					}
            					else {
HXLINE( 251)						 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN( 251)						if (_this->keyManager->checkStatus(37,_this->status)) {
HXLINE( 252)							 ::Dynamic fh = ::flixel::FlxG_obj::save->data;
HXDLIN( 252)							fh->__SetField(HX_("offset",93,97,3f,60),( ::Dynamic(fh->__Field(HX_("offset",93,97,3f,60),::hx::paccDynamic)) - ((Float)0.1)),::hx::paccDynamic);
            						}
            					}
            				}
HXLINE( 254)				 ::flixel::text::FlxText _hx_tmp = ::OptionsMenu_obj::versionShit;
HXDLIN( 254)				::String _hx_tmp1 = (::LangUtil_obj::getString(HX_("cmnOffset",37,45,e3,60)) + HX_(": ",a6,32,00,00));
HXDLIN( 254)				::String _hx_tmp2 = ((_hx_tmp1 + ::HelperFunctions_obj::truncateFloat(( (Float)(::flixel::FlxG_obj::save->data->__Field(HX_("offset",93,97,3f,60),::hx::paccDynamic)) ),2)) + HX_(" - ",73,6f,18,00));
HXDLIN( 254)				::String _hx_tmp3 = ((_hx_tmp2 + ::LangUtil_obj::getString(HX_("cmnDesc",f5,9a,06,2d))) + HX_(" - ",73,6f,18,00));
HXDLIN( 254)				_hx_tmp->set_text((_hx_tmp3 + this->currentDescription));
            			}
HXLINE( 258)			if (::PlayerSettings_obj::player1->controls->_reset->check()) {
HXLINE( 259)				::flixel::FlxG_obj::save->data->__SetField(HX_("offset",93,97,3f,60),0,::hx::paccDynamic);
            			}
HXLINE( 261)			if (::PlayerSettings_obj::player1->controls->_accept->check()) {
HXLINE( 263)				if (this->isCat) {
HXLINE( 265)					if (this->currentSelectedCat->getOptions()->__get(this->curSelected).StaticCast<  ::Option >()->press()) {
HXLINE( 267)						this->grpControls->remove(Dynamic( this->grpControls->members->__get(this->curSelected)).StaticCast<  ::flixel::text::FlxText >(),null()).StaticCast<  ::flixel::text::FlxText >();
HXLINE( 268)						int ctrl = ((50 * this->curSelected) + 20);
HXDLIN( 268)						 ::flixel::text::FlxText ctrl1 =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,460,ctrl,0,this->currentSelectedCat->getOptions()->__get(this->curSelected).StaticCast<  ::Option >()->getDisplay(),null(),null());
HXLINE( 269)						ctrl1->setFormat(::LangUtil_obj::getFont(HX_("riffic",51,90,7b,4d)),38,-1,HX_("center",d5,25,db,05),null(),null(),null());
HXLINE( 270)						{
HXLINE( 270)							ctrl1->set_borderStyle(::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn());
HXDLIN( 270)							ctrl1->set_borderColor(-33537);
HXDLIN( 270)							ctrl1->set_borderSize(( (Float)(2) ));
HXDLIN( 270)							ctrl1->set_borderQuality(( (Float)(1) ));
            						}
HXLINE( 271)						ctrl1->ID = this->curSelected;
HXLINE( 272)						this->grpControls->add(ctrl1).StaticCast<  ::flixel::text::FlxText >();
            					}
            				}
            				else {
HXLINE( 277)					this->currentSelectedCat = this->options->__get(this->curSelected).StaticCast<  ::OptionCategory >();
HXLINE( 278)					this->isCat = true;
HXLINE( 279)					this->grpControls->clear();
HXLINE( 280)					{
HXLINE( 280)						int _g = 0;
HXDLIN( 280)						int _g1 = this->currentSelectedCat->getOptions()->length;
HXDLIN( 280)						while((_g < _g1)){
HXLINE( 280)							_g = (_g + 1);
HXDLIN( 280)							int i = (_g - 1);
HXLINE( 282)							 ::flixel::text::FlxText controlLabel =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,460,((50 * i) + 20),0,this->currentSelectedCat->getOptions()->__get(i).StaticCast<  ::Option >()->getDisplay(),null(),null());
HXLINE( 283)							controlLabel->setFormat(::LangUtil_obj::getFont(HX_("riffic",51,90,7b,4d)),38,-1,HX_("center",d5,25,db,05),null(),null(),null());
HXLINE( 284)							{
HXLINE( 284)								controlLabel->set_borderStyle(::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn());
HXDLIN( 284)								controlLabel->set_borderColor(-33537);
HXDLIN( 284)								controlLabel->set_borderSize(( (Float)(2) ));
HXDLIN( 284)								controlLabel->set_borderQuality(( (Float)(1) ));
            							}
HXLINE( 285)							controlLabel->ID = i;
HXLINE( 286)							this->grpControls->add(controlLabel).StaticCast<  ::flixel::text::FlxText >();
            						}
            					}
HXLINE( 289)					this->curSelected = 0;
            				}
HXLINE( 292)				this->changeSelection(null());
            			}
            		}
HXLINE( 296)		::flixel::FlxG_obj::save->flush(null(),null());
HXLINE( 298)		this->grpControls->forEach( ::Dynamic(new _hx_Closure_0(_gthis)),null());
HXLINE( 306)		if (::hx::IsNotNull( ::flixel::FlxG_obj::sound->music )) {
HXLINE( 307)			::Conductor_obj::songPosition = ::flixel::FlxG_obj::sound->music->_time;
            		}
HXLINE( 309)		this->super::update(elapsed);
            	}


void OptionsMenu_obj::changeSelection(::hx::Null< int >  __o_change){
            		int change = __o_change.Default(0);
            	HX_STACKFRAME(&_hx_pos_b7c1b117f8362d86_315_changeSelection)
HXLINE( 316)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 316)		_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
HXLINE( 318)		 ::OptionsMenu _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 318)		_hx_tmp1->curSelected = (_hx_tmp1->curSelected + change);
HXLINE( 320)		if ((this->curSelected < 0)) {
HXLINE( 321)			this->curSelected = (this->grpControls->length - 1);
            		}
HXLINE( 322)		if ((this->curSelected >= this->grpControls->length)) {
HXLINE( 323)			this->curSelected = 0;
            		}
HXLINE( 325)		if (this->isCat) {
HXLINE( 326)			this->currentDescription = this->currentSelectedCat->getOptions()->__get(this->curSelected).StaticCast<  ::Option >()->getDescription();
            		}
            		else {
HXLINE( 328)			this->currentDescription = ::LangUtil_obj::getString(HX_("cmnCategory",a2,89,91,e0));
            		}
HXLINE( 329)		if (this->isCat) {
HXLINE( 331)			if (this->currentSelectedCat->getOptions()->__get(this->curSelected).StaticCast<  ::Option >()->getAccept()) {
HXLINE( 332)				 ::flixel::text::FlxText _hx_tmp = ::OptionsMenu_obj::versionShit;
HXDLIN( 332)				::String _hx_tmp1 = (this->currentSelectedCat->getOptions()->__get(this->curSelected).StaticCast<  ::Option >()->getValue() + HX_(" - ",73,6f,18,00));
HXDLIN( 332)				::String _hx_tmp2 = ((_hx_tmp1 + ::LangUtil_obj::getString(HX_("cmnDesc",f5,9a,06,2d))) + HX_(" - ",73,6f,18,00));
HXDLIN( 332)				_hx_tmp->set_text((_hx_tmp2 + this->currentDescription));
            			}
            			else {
HXLINE( 334)				 ::flixel::text::FlxText _hx_tmp = ::OptionsMenu_obj::versionShit;
HXDLIN( 334)				::String _hx_tmp1 = (::LangUtil_obj::getString(HX_("cmnOffset",37,45,e3,60)) + HX_(": ",a6,32,00,00));
HXDLIN( 334)				::String _hx_tmp2 = ((_hx_tmp1 + ::HelperFunctions_obj::truncateFloat(( (Float)(::flixel::FlxG_obj::save->data->__Field(HX_("offset",93,97,3f,60),::hx::paccDynamic)) ),2)) + HX_(" - ",73,6f,18,00));
HXDLIN( 334)				::String _hx_tmp3 = ((_hx_tmp2 + ::LangUtil_obj::getString(HX_("cmnDesc",f5,9a,06,2d))) + HX_(" - ",73,6f,18,00));
HXDLIN( 334)				_hx_tmp->set_text((_hx_tmp3 + this->currentDescription));
            			}
            		}
            		else {
HXLINE( 338)			 ::flixel::text::FlxText _hx_tmp = ::OptionsMenu_obj::versionShit;
HXDLIN( 338)			::String _hx_tmp1 = (::LangUtil_obj::getString(HX_("cmnOffset",37,45,e3,60)) + HX_(": ",a6,32,00,00));
HXDLIN( 338)			::String _hx_tmp2 = ((_hx_tmp1 + ::HelperFunctions_obj::truncateFloat(( (Float)(::flixel::FlxG_obj::save->data->__Field(HX_("offset",93,97,3f,60),::hx::paccDynamic)) ),2)) + HX_(" - ",73,6f,18,00));
HXDLIN( 338)			::String _hx_tmp3 = ((_hx_tmp2 + ::LangUtil_obj::getString(HX_("cmnDesc",f5,9a,06,2d))) + HX_(" - ",73,6f,18,00));
HXDLIN( 338)			_hx_tmp->set_text((_hx_tmp3 + this->currentDescription));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(OptionsMenu_obj,changeSelection,(void))

void OptionsMenu_obj::beatHit(){
            	HX_STACKFRAME(&_hx_pos_b7c1b117f8362d86_343_beatHit)
HXLINE( 344)		this->super::beatHit();
HXLINE( 345)		this->logoBl->animation->play(HX_("bump",f6,0f,20,41),true,null(),null());
            	}


 ::OptionsMenu OptionsMenu_obj::instance;

 ::flixel::text::FlxText OptionsMenu_obj::versionShit;


::hx::ObjectPtr< OptionsMenu_obj > OptionsMenu_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< OptionsMenu_obj > __this = new OptionsMenu_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< OptionsMenu_obj > OptionsMenu_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	OptionsMenu_obj *__this = (OptionsMenu_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(OptionsMenu_obj), true, "OptionsMenu"));
	*(void **)__this = OptionsMenu_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

OptionsMenu_obj::OptionsMenu_obj()
{
}

void OptionsMenu_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(OptionsMenu);
	HX_MARK_MEMBER_NAME(backdrop,"backdrop");
	HX_MARK_MEMBER_NAME(logo,"logo");
	HX_MARK_MEMBER_NAME(logoBl,"logoBl");
	HX_MARK_MEMBER_NAME(selector,"selector");
	HX_MARK_MEMBER_NAME(curSelected,"curSelected");
	HX_MARK_MEMBER_NAME(options,"options");
	HX_MARK_MEMBER_NAME(acceptInput,"acceptInput");
	HX_MARK_MEMBER_NAME(currentDescription,"currentDescription");
	HX_MARK_MEMBER_NAME(grpControls,"grpControls");
	HX_MARK_MEMBER_NAME(currentSelectedCat,"currentSelectedCat");
	HX_MARK_MEMBER_NAME(blackBorder,"blackBorder");
	HX_MARK_MEMBER_NAME(isCat,"isCat");
	HX_MARK_MEMBER_NAME(isSettingControl,"isSettingControl");
	 ::MusicBeatState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void OptionsMenu_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(backdrop,"backdrop");
	HX_VISIT_MEMBER_NAME(logo,"logo");
	HX_VISIT_MEMBER_NAME(logoBl,"logoBl");
	HX_VISIT_MEMBER_NAME(selector,"selector");
	HX_VISIT_MEMBER_NAME(curSelected,"curSelected");
	HX_VISIT_MEMBER_NAME(options,"options");
	HX_VISIT_MEMBER_NAME(acceptInput,"acceptInput");
	HX_VISIT_MEMBER_NAME(currentDescription,"currentDescription");
	HX_VISIT_MEMBER_NAME(grpControls,"grpControls");
	HX_VISIT_MEMBER_NAME(currentSelectedCat,"currentSelectedCat");
	HX_VISIT_MEMBER_NAME(blackBorder,"blackBorder");
	HX_VISIT_MEMBER_NAME(isCat,"isCat");
	HX_VISIT_MEMBER_NAME(isSettingControl,"isSettingControl");
	 ::MusicBeatState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val OptionsMenu_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"logo") ) { return ::hx::Val( logo ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"isCat") ) { return ::hx::Val( isCat ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"logoBl") ) { return ::hx::Val( logoBl ); }
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { return ::hx::Val( options ); }
		if (HX_FIELD_EQ(inName,"beatHit") ) { return ::hx::Val( beatHit_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"backdrop") ) { return ::hx::Val( backdrop ); }
		if (HX_FIELD_EQ(inName,"selector") ) { return ::hx::Val( selector ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { return ::hx::Val( curSelected ); }
		if (HX_FIELD_EQ(inName,"acceptInput") ) { return ::hx::Val( acceptInput ); }
		if (HX_FIELD_EQ(inName,"grpControls") ) { return ::hx::Val( grpControls ); }
		if (HX_FIELD_EQ(inName,"blackBorder") ) { return ::hx::Val( blackBorder ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"changeSelection") ) { return ::hx::Val( changeSelection_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"isSettingControl") ) { return ::hx::Val( isSettingControl ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"currentDescription") ) { return ::hx::Val( currentDescription ); }
		if (HX_FIELD_EQ(inName,"currentSelectedCat") ) { return ::hx::Val( currentSelectedCat ); }
	}
	return super::__Field(inName,inCallProp);
}

bool OptionsMenu_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { outValue = ( instance ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"versionShit") ) { outValue = ( versionShit ); return true; }
	}
	return false;
}

::hx::Val OptionsMenu_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"logo") ) { logo=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"isCat") ) { isCat=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"logoBl") ) { logoBl=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { options=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"backdrop") ) { backdrop=inValue.Cast<  ::flixel::addons::display::FlxBackdrop >(); return inValue; }
		if (HX_FIELD_EQ(inName,"selector") ) { selector=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { curSelected=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"acceptInput") ) { acceptInput=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"grpControls") ) { grpControls=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blackBorder") ) { blackBorder=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"isSettingControl") ) { isSettingControl=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"currentDescription") ) { currentDescription=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"currentSelectedCat") ) { currentSelectedCat=inValue.Cast<  ::OptionCategory >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool OptionsMenu_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=ioValue.Cast<  ::OptionsMenu >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"versionShit") ) { versionShit=ioValue.Cast<  ::flixel::text::FlxText >(); return true; }
	}
	return false;
}

void OptionsMenu_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("backdrop",d6,b1,96,1a));
	outFields->push(HX_("logo",6b,9f,b7,47));
	outFields->push(HX_("logoBl",15,ca,6e,5c));
	outFields->push(HX_("selector",1f,33,6d,b1));
	outFields->push(HX_("curSelected",fb,eb,ab,32));
	outFields->push(HX_("options",5e,33,fe,df));
	outFields->push(HX_("acceptInput",e2,a3,6a,39));
	outFields->push(HX_("currentDescription",43,ed,b8,d6));
	outFields->push(HX_("grpControls",7b,bb,b2,d5));
	outFields->push(HX_("currentSelectedCat",c2,90,9e,a7));
	outFields->push(HX_("blackBorder",0b,f0,b1,7a));
	outFields->push(HX_("isCat",4c,9e,49,c1));
	outFields->push(HX_("isSettingControl",37,39,d8,de));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo OptionsMenu_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::addons::display::FlxBackdrop */ ,(int)offsetof(OptionsMenu_obj,backdrop),HX_("backdrop",d6,b1,96,1a)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(OptionsMenu_obj,logo),HX_("logo",6b,9f,b7,47)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(OptionsMenu_obj,logoBl),HX_("logoBl",15,ca,6e,5c)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(OptionsMenu_obj,selector),HX_("selector",1f,33,6d,b1)},
	{::hx::fsInt,(int)offsetof(OptionsMenu_obj,curSelected),HX_("curSelected",fb,eb,ab,32)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(OptionsMenu_obj,options),HX_("options",5e,33,fe,df)},
	{::hx::fsBool,(int)offsetof(OptionsMenu_obj,acceptInput),HX_("acceptInput",e2,a3,6a,39)},
	{::hx::fsString,(int)offsetof(OptionsMenu_obj,currentDescription),HX_("currentDescription",43,ed,b8,d6)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(OptionsMenu_obj,grpControls),HX_("grpControls",7b,bb,b2,d5)},
	{::hx::fsObject /*  ::OptionCategory */ ,(int)offsetof(OptionsMenu_obj,currentSelectedCat),HX_("currentSelectedCat",c2,90,9e,a7)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(OptionsMenu_obj,blackBorder),HX_("blackBorder",0b,f0,b1,7a)},
	{::hx::fsBool,(int)offsetof(OptionsMenu_obj,isCat),HX_("isCat",4c,9e,49,c1)},
	{::hx::fsBool,(int)offsetof(OptionsMenu_obj,isSettingControl),HX_("isSettingControl",37,39,d8,de)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo OptionsMenu_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::OptionsMenu */ ,(void *) &OptionsMenu_obj::instance,HX_("instance",95,1f,e1,59)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(void *) &OptionsMenu_obj::versionShit,HX_("versionShit",f8,4e,3b,e2)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String OptionsMenu_obj_sMemberFields[] = {
	HX_("backdrop",d6,b1,96,1a),
	HX_("logo",6b,9f,b7,47),
	HX_("logoBl",15,ca,6e,5c),
	HX_("selector",1f,33,6d,b1),
	HX_("curSelected",fb,eb,ab,32),
	HX_("options",5e,33,fe,df),
	HX_("acceptInput",e2,a3,6a,39),
	HX_("currentDescription",43,ed,b8,d6),
	HX_("grpControls",7b,bb,b2,d5),
	HX_("currentSelectedCat",c2,90,9e,a7),
	HX_("blackBorder",0b,f0,b1,7a),
	HX_("create",fc,66,0f,7c),
	HX_("isCat",4c,9e,49,c1),
	HX_("update",09,86,05,87),
	HX_("isSettingControl",37,39,d8,de),
	HX_("changeSelection",bc,98,b5,48),
	HX_("beatHit",7d,ea,04,74),
	::String(null()) };

static void OptionsMenu_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OptionsMenu_obj::instance,"instance");
	HX_MARK_MEMBER_NAME(OptionsMenu_obj::versionShit,"versionShit");
};

#ifdef HXCPP_VISIT_ALLOCS
static void OptionsMenu_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OptionsMenu_obj::instance,"instance");
	HX_VISIT_MEMBER_NAME(OptionsMenu_obj::versionShit,"versionShit");
};

#endif

::hx::Class OptionsMenu_obj::__mClass;

static ::String OptionsMenu_obj_sStaticFields[] = {
	HX_("instance",95,1f,e1,59),
	HX_("versionShit",f8,4e,3b,e2),
	::String(null())
};

void OptionsMenu_obj::__register()
{
	OptionsMenu_obj _hx_dummy;
	OptionsMenu_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("OptionsMenu",fd,43,a3,5d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &OptionsMenu_obj::__GetStatic;
	__mClass->mSetStaticField = &OptionsMenu_obj::__SetStatic;
	__mClass->mMarkFunc = OptionsMenu_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(OptionsMenu_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(OptionsMenu_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< OptionsMenu_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = OptionsMenu_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = OptionsMenu_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = OptionsMenu_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

