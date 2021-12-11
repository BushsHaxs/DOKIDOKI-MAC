#include <hxcpp.h>

#ifndef INCLUDED_Conductor
#include <Conductor.h>
#endif
#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_DokiFreeplayState
#include <DokiFreeplayState.h>
#endif
#ifndef INCLUDED_DokiStoryState
#include <DokiStoryState.h>
#endif
#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_KeyboardScheme
#include <KeyboardScheme.h>
#endif
#ifndef INCLUDED_LangSelectState
#include <LangSelectState.h>
#endif
#ifndef INCLUDED_LangUtil
#include <LangUtil.h>
#endif
#ifndef INCLUDED_MainMenuState
#include <MainMenuState.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
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
#ifndef INCLUDED_flixel_effects_FlxFlicker
#include <flixel/effects/FlxFlicker.h>
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
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
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
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_lime_app_Application
#include <lime/app/Application.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_app_Module
#include <lime/app/Module.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
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
#ifndef INCLUDED_openfl_net_URLRequest
#include <openfl/net/URLRequest.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b0351dbbcbe2d566_26_new,"MainMenuState","new",0x83a7c9cb,"MainMenuState.new","MainMenuState.hx",26,0x0e5db805)
HX_LOCAL_STACK_FRAME(_hx_pos_b0351dbbcbe2d566_60_create,"MainMenuState","create",0x6b76e271,"MainMenuState.create","MainMenuState.hx",60,0x0e5db805)
static const ::String _hx_array_data_205e8859_4[] = {
	HX_("story mode",6e,d7,a7,5e),HX_("freeplay",a0,90,86,22),HX_("credits",1a,0e,5e,13),HX_("language",58,80,11,7a),HX_("options",5e,33,fe,df),
};
static const ::String _hx_array_data_205e8859_5[] = {
	HX_("story mode",6e,d7,a7,5e),HX_("freeplay",a0,90,86,22),HX_("language",58,80,11,7a),HX_("options",5e,33,fe,df),
};
HX_LOCAL_STACK_FRAME(_hx_pos_b0351dbbcbe2d566_188_create,"MainMenuState","create",0x6b76e271,"MainMenuState.create","MainMenuState.hx",188,0x0e5db805)
HX_LOCAL_STACK_FRAME(_hx_pos_b0351dbbcbe2d566_209_create,"MainMenuState","create",0x6b76e271,"MainMenuState.create","MainMenuState.hx",209,0x0e5db805)
HX_LOCAL_STACK_FRAME(_hx_pos_b0351dbbcbe2d566_393_create,"MainMenuState","create",0x6b76e271,"MainMenuState.create","MainMenuState.hx",393,0x0e5db805)
HX_LOCAL_STACK_FRAME(_hx_pos_b0351dbbcbe2d566_412_create,"MainMenuState","create",0x6b76e271,"MainMenuState.create","MainMenuState.hx",412,0x0e5db805)
HX_LOCAL_STACK_FRAME(_hx_pos_b0351dbbcbe2d566_548_update,"MainMenuState","update",0x766d017e,"MainMenuState.update","MainMenuState.hx",548,0x0e5db805)
HX_LOCAL_STACK_FRAME(_hx_pos_b0351dbbcbe2d566_437_update,"MainMenuState","update",0x766d017e,"MainMenuState.update","MainMenuState.hx",437,0x0e5db805)
HX_LOCAL_STACK_FRAME(_hx_pos_b0351dbbcbe2d566_512_update,"MainMenuState","update",0x766d017e,"MainMenuState.update","MainMenuState.hx",512,0x0e5db805)
HX_LOCAL_STACK_FRAME(_hx_pos_b0351dbbcbe2d566_518_update,"MainMenuState","update",0x766d017e,"MainMenuState.update","MainMenuState.hx",518,0x0e5db805)
HX_LOCAL_STACK_FRAME(_hx_pos_b0351dbbcbe2d566_528_update,"MainMenuState","update",0x766d017e,"MainMenuState.update","MainMenuState.hx",528,0x0e5db805)
HX_LOCAL_STACK_FRAME(_hx_pos_b0351dbbcbe2d566_535_update,"MainMenuState","update",0x766d017e,"MainMenuState.update","MainMenuState.hx",535,0x0e5db805)
HX_LOCAL_STACK_FRAME(_hx_pos_b0351dbbcbe2d566_554_goToState,"MainMenuState","goToState",0xcf6f00f9,"MainMenuState.goToState","MainMenuState.hx",554,0x0e5db805)
HX_LOCAL_STACK_FRAME(_hx_pos_b0351dbbcbe2d566_619_changeItem,"MainMenuState","changeItem",0xf62bd498,"MainMenuState.changeItem","MainMenuState.hx",619,0x0e5db805)
HX_LOCAL_STACK_FRAME(_hx_pos_b0351dbbcbe2d566_610_changeItem,"MainMenuState","changeItem",0xf62bd498,"MainMenuState.changeItem","MainMenuState.hx",610,0x0e5db805)
HX_LOCAL_STACK_FRAME(_hx_pos_b0351dbbcbe2d566_632_beatHit,"MainMenuState","beatHit",0xff297568,"MainMenuState.beatHit","MainMenuState.hx",632,0x0e5db805)
HX_LOCAL_STACK_FRAME(_hx_pos_b0351dbbcbe2d566_30_boot,"MainMenuState","boot",0xa741c867,"MainMenuState.boot","MainMenuState.hx",30,0x0e5db805)
HX_LOCAL_STACK_FRAME(_hx_pos_b0351dbbcbe2d566_31_boot,"MainMenuState","boot",0xa741c867,"MainMenuState.boot","MainMenuState.hx",31,0x0e5db805)
HX_LOCAL_STACK_FRAME(_hx_pos_b0351dbbcbe2d566_40_boot,"MainMenuState","boot",0xa741c867,"MainMenuState.boot","MainMenuState.hx",40,0x0e5db805)

void MainMenuState_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_b0351dbbcbe2d566_26_new)
HXLINE( 434)		this->selectedSomethin = false;
HXLINE(  44)		this->newInput = true;
HXLINE(  33)		this->show = HX_("",00,00,00,00);
HXLINE(  28)		this->curSelected = 0;
HXLINE(  26)		super::__construct(TransIn,TransOut);
            	}

Dynamic MainMenuState_obj::__CreateEmpty() { return new MainMenuState_obj; }

void *MainMenuState_obj::_hx_vtable = 0;

Dynamic MainMenuState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MainMenuState_obj > _hx_result = new MainMenuState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool MainMenuState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x2f064378) {
			if (inClassId<=(int)0x23a57bae) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x23a57bae;
			} else {
				return inClassId==(int)0x2f064378;
			}
		} else {
			return inClassId==(int)0x3f706236 || inClassId==(int)0x62817b24;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x6915cded || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

void MainMenuState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_b0351dbbcbe2d566_60_create)
HXDLIN(  60)		 ::MainMenuState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  61)		if (( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("extrabeaten",ef,e9,0c,61),::hx::paccDynamic)) )) {
HXLINE(  62)			this->optionShit = ::Array_obj< ::String >::fromData( _hx_array_data_205e8859_4,5);
            		}
            		else {
HXLINE(  64)			this->optionShit = ::Array_obj< ::String >::fromData( _hx_array_data_205e8859_5,4);
            		}
HXLINE(  66)		if (::hx::IsNull( ::flixel::FlxG_obj::sound->music->_channel )) {
HXLINE(  68)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(  68)			::String library = null();
HXDLIN(  68)			::String result = ::Paths_obj::getPath((((HX_("music/",ea,bf,1b,3f) + HX_("freakyMenu",15,c9,93,86)) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)),HX_("MUSIC",85,08,49,8e),library);
HXDLIN(  68)			::String _hx_tmp1;
HXDLIN(  68)			if (::Paths_obj::doesSoundAssetExist(result)) {
HXLINE(  68)				_hx_tmp1 = result;
            			}
            			else {
HXLINE(  68)				_hx_tmp1 = null();
            			}
HXDLIN(  68)			_hx_tmp->playMusic(_hx_tmp1,null(),null(),null());
HXLINE(  69)			::Conductor_obj::changeBPM(( (Float)(102) ));
            		}
HXLINE(  72)		if (!(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("monibeaten",3c,53,44,8f),::hx::paccDynamic)) ))) {
HXLINE(  73)			::flixel::FlxG_obj::save->data->__SetField(HX_("weekUnlocked",37,64,c4,a5),1,::hx::paccDynamic);
            		}
HXLINE(  75)		 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN(  75)		::String _hx_tmp1 = (HX_("CURRENT WEEK: ",c1,cc,39,35) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("weekUnlocked",37,64,c4,a5),::hx::paccDynamic))));
HXDLIN(  75)		_hx_tmp(_hx_tmp1,::hx::SourceInfo(HX_("source/MainMenuState.hx",f9,ee,86,cf),75,HX_("MainMenuState",59,88,5e,20),HX_("create",fc,66,0f,7c)));
HXLINE(  77)		this->persistentUpdate = (this->persistentDraw = true);
HXLINE(  79)		 ::flixel::FlxSprite bg =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-80,-80,null());
HXDLIN(  79)		::String library = null();
HXDLIN(  79)		::String bg1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("menuBG",24,65,6d,05)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN(  79)		 ::flixel::FlxSprite bg2 = bg->loadGraphic(bg1,null(),null(),null(),null(),null());
HXLINE(  80)		bg2->scrollFactor->set_x(((Float)0.10));
HXLINE(  81)		bg2->scrollFactor->set_y(( (Float)(0) ));
HXLINE(  82)		bg2->setGraphicSize(::Std_obj::_hx_int((bg2->get_width() * ((Float)1.1))),null());
HXLINE(  83)		bg2->updateHitbox();
HXLINE(  84)		bg2->screenCenter(null());
HXLINE(  85)		bg2->set_antialiasing(true);
HXLINE(  86)		this->add(bg2);
HXLINE(  88)		this->camFollow =  ::flixel::FlxObject_obj::__alloc( HX_CTX ,0,0,1,1);
HXLINE(  90)		this->add(this->camFollow);
HXLINE(  92)		::String library1 = null();
HXDLIN(  92)		::String _hx_tmp2 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("scrolling_BG",0f,dc,17,b9)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library1);
HXDLIN(  92)		this->add((this->backdrop =  ::flixel::addons::display::FlxBackdrop_obj::__alloc( HX_CTX ,_hx_tmp2,null(),null(),null(),null(),null(),null())));
HXLINE(  93)		this->backdrop->velocity->set(-40,-40);
HXLINE(  95)		Float random = ::flixel::FlxG_obj::random->_hx_float(0,200,null());
HXLINE(  97)		::haxe::Log_obj::trace(random,::hx::SourceInfo(HX_("source/MainMenuState.hx",f9,ee,86,cf),97,HX_("MainMenuState",59,88,5e,20),HX_("create",fc,66,0f,7c)));
HXLINE(  98)		if (!(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("extrabeaten",ef,e9,0c,61),::hx::paccDynamic)) ))) {
HXLINE( 100)			::haxe::Log_obj::trace(HX_("together1",37,cb,f7,8e),::hx::SourceInfo(HX_("source/MainMenuState.hx",f9,ee,86,cf),100,HX_("MainMenuState",59,88,5e,20),HX_("create",fc,66,0f,7c)));
HXLINE( 101)			this->show = HX_("together1",37,cb,f7,8e);
            		}
            		else {
HXLINE( 105)			::haxe::Log_obj::trace(HX_("together",ba,f7,e0,95),::hx::SourceInfo(HX_("source/MainMenuState.hx",f9,ee,86,cf),105,HX_("MainMenuState",59,88,5e,20),HX_("create",fc,66,0f,7c)));
HXLINE( 106)			this->show = HX_("together",ba,f7,e0,95);
            		}
HXLINE( 108)		bool _hx_tmp3;
HXDLIN( 108)		if ((random >= 20)) {
HXLINE( 108)			_hx_tmp3 = (random <= 40);
            		}
            		else {
HXLINE( 108)			_hx_tmp3 = false;
            		}
HXDLIN( 108)		if (_hx_tmp3) {
HXLINE( 110)			::haxe::Log_obj::trace(HX_("yuri",93,fc,53,50),::hx::SourceInfo(HX_("source/MainMenuState.hx",f9,ee,86,cf),110,HX_("MainMenuState",59,88,5e,20),HX_("create",fc,66,0f,7c)));
HXLINE( 111)			this->show = HX_("yuri",93,fc,53,50);
            		}
HXLINE( 114)		bool _hx_tmp4;
HXDLIN( 114)		if ((random >= 41)) {
HXLINE( 114)			_hx_tmp4 = (random <= 60);
            		}
            		else {
HXLINE( 114)			_hx_tmp4 = false;
            		}
HXDLIN( 114)		if (_hx_tmp4) {
HXLINE( 116)			::haxe::Log_obj::trace(HX_("natsuki",21,00,af,bd),::hx::SourceInfo(HX_("source/MainMenuState.hx",f9,ee,86,cf),116,HX_("MainMenuState",59,88,5e,20),HX_("create",fc,66,0f,7c)));
HXLINE( 117)			this->show = HX_("natsuki",21,00,af,bd);
            		}
HXLINE( 119)		bool _hx_tmp5;
HXDLIN( 119)		if ((random >= 61)) {
HXLINE( 119)			_hx_tmp5 = (random <= 80);
            		}
            		else {
HXLINE( 119)			_hx_tmp5 = false;
            		}
HXDLIN( 119)		if (_hx_tmp5) {
HXLINE( 121)			::haxe::Log_obj::trace(HX_("sayori",9b,32,38,25),::hx::SourceInfo(HX_("source/MainMenuState.hx",f9,ee,86,cf),121,HX_("MainMenuState",59,88,5e,20),HX_("create",fc,66,0f,7c)));
HXLINE( 122)			this->show = HX_("sayori",9b,32,38,25);
            		}
HXLINE( 124)		bool _hx_tmp6;
HXDLIN( 124)		bool _hx_tmp7;
HXDLIN( 124)		if ((random >= 81)) {
HXLINE( 124)			_hx_tmp7 = (random <= 100);
            		}
            		else {
HXLINE( 124)			_hx_tmp7 = false;
            		}
HXDLIN( 124)		if (_hx_tmp7) {
HXLINE( 124)			_hx_tmp6 = ( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("extrabeaten",ef,e9,0c,61),::hx::paccDynamic)) );
            		}
            		else {
HXLINE( 124)			_hx_tmp6 = false;
            		}
HXDLIN( 124)		if (_hx_tmp6) {
HXLINE( 126)			::haxe::Log_obj::trace(HX_("monika",f3,3a,66,c7),::hx::SourceInfo(HX_("source/MainMenuState.hx",f9,ee,86,cf),126,HX_("MainMenuState",59,88,5e,20),HX_("create",fc,66,0f,7c)));
HXLINE( 127)			this->show = HX_("monika",f3,3a,66,c7);
            		}
HXLINE( 129)		bool _hx_tmp8;
HXDLIN( 129)		bool _hx_tmp9;
HXDLIN( 129)		if ((random >= 81)) {
HXLINE( 129)			_hx_tmp9 = (random <= 100);
            		}
            		else {
HXLINE( 129)			_hx_tmp9 = false;
            		}
HXDLIN( 129)		if (_hx_tmp9) {
HXLINE( 129)			_hx_tmp8 = !(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("extrabeaten",ef,e9,0c,61),::hx::paccDynamic)) ));
            		}
            		else {
HXLINE( 129)			_hx_tmp8 = false;
            		}
HXDLIN( 129)		if (_hx_tmp8) {
HXLINE( 131)			::haxe::Log_obj::trace(HX_("pixelmonika",f9,a9,5e,04),::hx::SourceInfo(HX_("source/MainMenuState.hx",f9,ee,86,cf),131,HX_("MainMenuState",59,88,5e,20),HX_("create",fc,66,0f,7c)));
HXLINE( 132)			this->show = HX_("pixelmonika",f9,a9,5e,04);
            		}
HXLINE( 134)		bool _hx_tmp10;
HXDLIN( 134)		if ((random >= 101)) {
HXLINE( 134)			_hx_tmp10 = (random <= 120);
            		}
            		else {
HXLINE( 134)			_hx_tmp10 = false;
            		}
HXDLIN( 134)		if (_hx_tmp10) {
HXLINE( 136)			::haxe::Log_obj::trace(HX_("senpai",3c,df,8d,6b),::hx::SourceInfo(HX_("source/MainMenuState.hx",f9,ee,86,cf),136,HX_("MainMenuState",59,88,5e,20),HX_("create",fc,66,0f,7c)));
HXLINE( 137)			this->show = HX_("senpai",3c,df,8d,6b);
            		}
HXLINE( 139)		bool _hx_tmp11;
HXDLIN( 139)		if ((random >= 121)) {
HXLINE( 139)			_hx_tmp11 = (random <= 130);
            		}
            		else {
HXLINE( 139)			_hx_tmp11 = false;
            		}
HXDLIN( 139)		if (_hx_tmp11) {
HXLINE( 141)			::haxe::Log_obj::trace(HX_("sunnat",d5,a2,f5,a1),::hx::SourceInfo(HX_("source/MainMenuState.hx",f9,ee,86,cf),141,HX_("MainMenuState",59,88,5e,20),HX_("create",fc,66,0f,7c)));
HXLINE( 142)			this->show = HX_("sunnat",d5,a2,f5,a1);
            		}
HXLINE( 144)		bool _hx_tmp12;
HXDLIN( 144)		if ((random >= 131)) {
HXLINE( 144)			_hx_tmp12 = (random <= 140);
            		}
            		else {
HXLINE( 144)			_hx_tmp12 = false;
            		}
HXDLIN( 144)		if (_hx_tmp12) {
HXLINE( 146)			::haxe::Log_obj::trace(HX_("yuritabi",87,f2,df,60),::hx::SourceInfo(HX_("source/MainMenuState.hx",f9,ee,86,cf),146,HX_("MainMenuState",59,88,5e,20),HX_("create",fc,66,0f,7c)));
HXLINE( 147)			this->show = HX_("yuritabi",87,f2,df,60);
            		}
HXLINE( 149)		bool _hx_tmp13;
HXDLIN( 149)		if ((random >= 141)) {
HXLINE( 149)			_hx_tmp13 = (random <= 150);
            		}
            		else {
HXLINE( 149)			_hx_tmp13 = false;
            		}
HXDLIN( 149)		if (_hx_tmp13) {
HXLINE( 151)			::haxe::Log_obj::trace(HX_("minusmonikapixel",43,70,4b,40),::hx::SourceInfo(HX_("source/MainMenuState.hx",f9,ee,86,cf),151,HX_("MainMenuState",59,88,5e,20),HX_("create",fc,66,0f,7c)));
HXLINE( 152)			this->show = HX_("minusmonikapixel",43,70,4b,40);
            		}
HXLINE( 154)		bool _hx_tmp14;
HXDLIN( 154)		bool _hx_tmp15;
HXDLIN( 154)		if ((random >= 151)) {
HXLINE( 154)			_hx_tmp15 = (random <= 160);
            		}
            		else {
HXLINE( 154)			_hx_tmp15 = false;
            		}
HXDLIN( 154)		if (_hx_tmp15) {
HXLINE( 154)			_hx_tmp14 = ( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("extrabeaten",ef,e9,0c,61),::hx::paccDynamic)) );
            		}
            		else {
HXLINE( 154)			_hx_tmp14 = false;
            		}
HXDLIN( 154)		if (_hx_tmp14) {
HXLINE( 156)			::haxe::Log_obj::trace(HX_("akimonika",72,6c,42,ab),::hx::SourceInfo(HX_("source/MainMenuState.hx",f9,ee,86,cf),156,HX_("MainMenuState",59,88,5e,20),HX_("create",fc,66,0f,7c)));
HXLINE( 157)			this->show = HX_("akimonika",72,6c,42,ab);
            		}
HXLINE( 159)		bool _hx_tmp16;
HXDLIN( 159)		if ((random >= 161)) {
HXLINE( 159)			_hx_tmp16 = (random <= 170);
            		}
            		else {
HXLINE( 159)			_hx_tmp16 = false;
            		}
HXDLIN( 159)		if (_hx_tmp16) {
HXLINE( 161)			::haxe::Log_obj::trace(HX_("cyrixstatic",d9,3a,73,a2),::hx::SourceInfo(HX_("source/MainMenuState.hx",f9,ee,86,cf),161,HX_("MainMenuState",59,88,5e,20),HX_("create",fc,66,0f,7c)));
HXLINE( 162)			this->show = HX_("cyrixstatic",d9,3a,73,a2);
            		}
HXLINE( 164)		bool _hx_tmp17;
HXDLIN( 164)		if ((random >= 171)) {
HXLINE( 164)			_hx_tmp17 = (random <= 180);
            		}
            		else {
HXLINE( 164)			_hx_tmp17 = false;
            		}
HXDLIN( 164)		if (_hx_tmp17) {
HXLINE( 166)			::haxe::Log_obj::trace(HX_("zipori",a5,71,f9,86),::hx::SourceInfo(HX_("source/MainMenuState.hx",f9,ee,86,cf),166,HX_("MainMenuState",59,88,5e,20),HX_("create",fc,66,0f,7c)));
HXLINE( 167)			this->show = HX_("zipori",a5,71,f9,86);
            		}
HXLINE( 169)		bool _hx_tmp18;
HXDLIN( 169)		bool _hx_tmp19;
HXDLIN( 169)		if ((random >= 181)) {
HXLINE( 169)			_hx_tmp19 = (random <= 200);
            		}
            		else {
HXLINE( 169)			_hx_tmp19 = false;
            		}
HXDLIN( 169)		if (_hx_tmp19) {
HXLINE( 169)			_hx_tmp18 = ( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("extra2beaten",81,0c,3e,cc),::hx::paccDynamic)) );
            		}
            		else {
HXLINE( 169)			_hx_tmp18 = false;
            		}
HXDLIN( 169)		if (_hx_tmp18) {
HXLINE( 171)			::haxe::Log_obj::trace(HX_("protag",4d,94,5d,b5),::hx::SourceInfo(HX_("source/MainMenuState.hx",f9,ee,86,cf),171,HX_("MainMenuState",59,88,5e,20),HX_("create",fc,66,0f,7c)));
HXLINE( 172)			this->show = HX_("protag",4d,94,5d,b5);
            		}
HXLINE( 174)		bool _hx_tmp20;
HXDLIN( 174)		if ((random >= 98)) {
HXLINE( 174)			_hx_tmp20 = (random <= 100);
            		}
            		else {
HXLINE( 174)			_hx_tmp20 = false;
            		}
HXDLIN( 174)		if (_hx_tmp20) {
HXLINE( 176)			::haxe::Log_obj::trace(HX_("fumo",71,ea,c4,43),::hx::SourceInfo(HX_("source/MainMenuState.hx",f9,ee,86,cf),176,HX_("MainMenuState",59,88,5e,20),HX_("create",fc,66,0f,7c)));
HXLINE( 177)			this->show = HX_("fumo",71,ea,c4,43);
            		}
HXLINE( 181)		 ::flixel::FlxSprite _hx_tmp21 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-900,-359,null());
HXDLIN( 181)		::String library2 = null();
HXDLIN( 181)		::String _hx_tmp22 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("Credits_LeftSide",83,bf,91,b9)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library2);
HXDLIN( 181)		this->logo = _hx_tmp21->loadGraphic(_hx_tmp22,null(),null(),null(),null(),null());
HXLINE( 182)		this->logo->set_antialiasing(true);
HXLINE( 183)		this->add(this->logo);
HXLINE( 184)		if (::MainMenuState_obj::firstStart) {
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::MainMenuState,_gthis) HXARGC(1)
            			void _hx_run( ::flixel::tweens::FlxTween flxTween){
            				HX_GC_STACKFRAME(&_hx_pos_b0351dbbcbe2d566_188_create)
HXLINE( 189)				::MainMenuState_obj::firstStart = false;
HXLINE( 190)				_gthis->changeItem(null());
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE( 185)			::flixel::tweens::FlxTween_obj::tween(this->logo, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("x",78,00,00,00),-700)),((Float)1.2), ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::elasticOut_dyn())
            				->setFixed(1,HX_("onComplete",f8,d4,7e,5d), ::Dynamic(new _hx_Closure_0(_gthis)))));
            		}
            		else {
HXLINE( 194)			this->logo->set_x(( (Float)(-700) ));
            		}
HXLINE( 197)		this->logoBl =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-800,-400,null());
HXLINE( 198)		 ::flixel::FlxSprite _hx_tmp23 = this->logoBl;
HXDLIN( 198)		::String library3 = null();
HXDLIN( 198)		bool isLocale = false;
HXDLIN( 198)		 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp24;
HXDLIN( 198)		if (isLocale) {
HXLINE( 198)			if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("DDLCStart_Screen_Assets",a2,04,0b,cf)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library3),null())) {
HXLINE( 198)				 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("DDLCStart_Screen_Assets",a2,04,0b,cf),library3,isLocale);
HXDLIN( 198)				_hx_tmp24 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("DDLCStart_Screen_Assets",a2,04,0b,cf)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library3));
            			}
            			else {
HXLINE( 198)				 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("DDLCStart_Screen_Assets",a2,04,0b,cf),library3,isLocale);
HXDLIN( 198)				_hx_tmp24 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("DDLCStart_Screen_Assets",a2,04,0b,cf)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library3));
            			}
            		}
            		else {
HXLINE( 198)			 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("DDLCStart_Screen_Assets",a2,04,0b,cf),library3,null());
HXDLIN( 198)			_hx_tmp24 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("DDLCStart_Screen_Assets",a2,04,0b,cf)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library3));
            		}
HXDLIN( 198)		_hx_tmp23->set_frames(_hx_tmp24);
HXLINE( 199)		this->logoBl->set_antialiasing(true);
HXLINE( 200)		this->logoBl->scale->set(((Float)0.5),((Float)0.5));
HXLINE( 201)		this->logoBl->animation->addByPrefix(HX_("bump",f6,0f,20,41),HX_("logo bumpin",70,a1,0b,72),24,false,null(),null());
HXLINE( 202)		this->logoBl->animation->play(HX_("bump",f6,0f,20,41),null(),null(),null());
HXLINE( 203)		this->logoBl->updateHitbox();
HXLINE( 204)		this->add(this->logoBl);
HXLINE( 205)		if (::MainMenuState_obj::firstStart) {
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::MainMenuState,_gthis) HXARGC(1)
            			void _hx_run( ::flixel::tweens::FlxTween flxTween){
            				HX_GC_STACKFRAME(&_hx_pos_b0351dbbcbe2d566_209_create)
HXLINE( 210)				::MainMenuState_obj::firstStart = false;
HXLINE( 211)				_gthis->changeItem(null());
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE( 206)			::flixel::tweens::FlxTween_obj::tween(this->logoBl, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("x",78,00,00,00),-600)),((Float)1.2), ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::elasticOut_dyn())
            				->setFixed(1,HX_("onComplete",f8,d4,7e,5d), ::Dynamic(new _hx_Closure_1(_gthis)))));
            		}
            		else {
HXLINE( 215)			this->logoBl->set_x(( (Float)(-600) ));
            		}
HXLINE( 223)		::String _hx_switch_0 = this->show;
            		if (  (_hx_switch_0==HX_("akimonika",72,6c,42,ab)) ){
HXLINE( 325)			this->menu_character =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-70,-270,null());
HXLINE( 326)			 ::flixel::FlxSprite _hx_tmp = this->menu_character;
HXDLIN( 326)			::String library = null();
HXDLIN( 326)			bool isLocale = false;
HXDLIN( 326)			 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp1;
HXDLIN( 326)			if (isLocale) {
HXLINE( 326)				if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("menucharacters/akihamoniduo",cf,27,cc,05)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library),null())) {
HXLINE( 326)					 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("menucharacters/akihamoniduo",cf,27,cc,05),library,isLocale);
HXDLIN( 326)					_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("menucharacters/akihamoniduo",cf,27,cc,05)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library));
            				}
            				else {
HXLINE( 326)					 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("menucharacters/akihamoniduo",cf,27,cc,05),library,isLocale);
HXDLIN( 326)					_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("menucharacters/akihamoniduo",cf,27,cc,05)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
            				}
            			}
            			else {
HXLINE( 326)				 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("menucharacters/akihamoniduo",cf,27,cc,05),library,null());
HXDLIN( 326)				_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("menucharacters/akihamoniduo",cf,27,cc,05)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
            			}
HXDLIN( 326)			_hx_tmp->set_frames(_hx_tmp1);
HXLINE( 327)			this->menu_character->set_antialiasing(true);
HXLINE( 328)			this->menu_character->scale->set(((Float).77),((Float).77));
HXLINE( 329)			this->menu_character->animation->addByPrefix(HX_("play",f4,2d,5a,4a),HX_("Moni Akiha Menu",0a,e1,b8,05),21,false,null(),null());
HXLINE( 330)			this->menu_character->updateHitbox();
HXLINE( 331)			this->menu_character->animation->play(HX_("play",f4,2d,5a,4a),null(),null(),null());
HXLINE( 332)			this->add(this->menu_character);
HXLINE( 324)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==HX_("cyrixstatic",d9,3a,73,a2)) ){
HXLINE( 334)			this->menu_character =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-150,-270,null());
HXLINE( 335)			 ::flixel::FlxSprite _hx_tmp = this->menu_character;
HXDLIN( 335)			::String library = null();
HXDLIN( 335)			bool isLocale = false;
HXDLIN( 335)			 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp1;
HXDLIN( 335)			if (isLocale) {
HXLINE( 335)				if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("menucharacters/cyrixstaticmenu",b2,ca,a9,2e)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library),null())) {
HXLINE( 335)					 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("menucharacters/cyrixstaticmenu",b2,ca,a9,2e),library,isLocale);
HXDLIN( 335)					_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("menucharacters/cyrixstaticmenu",b2,ca,a9,2e)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library));
            				}
            				else {
HXLINE( 335)					 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("menucharacters/cyrixstaticmenu",b2,ca,a9,2e),library,isLocale);
HXDLIN( 335)					_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("menucharacters/cyrixstaticmenu",b2,ca,a9,2e)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
            				}
            			}
            			else {
HXLINE( 335)				 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("menucharacters/cyrixstaticmenu",b2,ca,a9,2e),library,null());
HXDLIN( 335)				_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("menucharacters/cyrixstaticmenu",b2,ca,a9,2e)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
            			}
HXDLIN( 335)			_hx_tmp->set_frames(_hx_tmp1);
HXLINE( 336)			this->menu_character->set_antialiasing(true);
HXLINE( 337)			this->menu_character->scale->set(((Float).77),((Float).77));
HXLINE( 338)			this->menu_character->animation->addByPrefix(HX_("play",f4,2d,5a,4a),HX_("Cyrix-Static Menu",8f,db,6f,e3),21,null(),null(),null());
HXLINE( 339)			this->menu_character->updateHitbox();
HXLINE( 340)			this->menu_character->animation->play(HX_("play",f4,2d,5a,4a),null(),null(),null());
HXLINE( 341)			this->add(this->menu_character);
HXLINE( 333)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==HX_("fumo",71,ea,c4,43)) ){
HXLINE( 226)			this->menu_character =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,-200,null());
HXLINE( 227)			 ::flixel::FlxSprite _hx_tmp = this->menu_character;
HXDLIN( 227)			::String library = null();
HXDLIN( 227)			bool isLocale = false;
HXDLIN( 227)			 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp1;
HXDLIN( 227)			if (isLocale) {
HXLINE( 227)				if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("menucharacters/fumo",77,12,3e,49)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library),null())) {
HXLINE( 227)					 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("menucharacters/fumo",77,12,3e,49),library,isLocale);
HXDLIN( 227)					_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("menucharacters/fumo",77,12,3e,49)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library));
            				}
            				else {
HXLINE( 227)					 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("menucharacters/fumo",77,12,3e,49),library,isLocale);
HXDLIN( 227)					_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("menucharacters/fumo",77,12,3e,49)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
            				}
            			}
            			else {
HXLINE( 227)				 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("menucharacters/fumo",77,12,3e,49),library,null());
HXDLIN( 227)				_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("menucharacters/fumo",77,12,3e,49)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
            			}
HXDLIN( 227)			_hx_tmp->set_frames(_hx_tmp1);
HXLINE( 228)			this->menu_character->set_antialiasing(true);
HXLINE( 229)			this->menu_character->scale->set(1,1);
HXLINE( 230)			this->menu_character->animation->addByPrefix(HX_("play",f4,2d,5a,4a),HX_("cirno_fumo",e3,58,f3,90),24,false,null(),null());
HXLINE( 231)			this->menu_character->updateHitbox();
HXLINE( 232)			this->menu_character->animation->play(HX_("play",f4,2d,5a,4a),null(),null(),null());
HXLINE( 233)			this->add(this->menu_character);
HXLINE( 225)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==HX_("minusmonikapixel",43,70,4b,40)) ){
HXLINE( 271)			this->menu_character =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-40,-280,null());
HXLINE( 272)			 ::flixel::FlxSprite _hx_tmp = this->menu_character;
HXDLIN( 272)			::String library = null();
HXDLIN( 272)			bool isLocale = false;
HXDLIN( 272)			 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp1;
HXDLIN( 272)			if (isLocale) {
HXLINE( 272)				if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("menucharacters/minusmonikapixel",49,89,63,cd)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library),null())) {
HXLINE( 272)					 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("menucharacters/minusmonikapixel",49,89,63,cd),library,isLocale);
HXDLIN( 272)					_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("menucharacters/minusmonikapixel",49,89,63,cd)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library));
            				}
            				else {
HXLINE( 272)					 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("menucharacters/minusmonikapixel",49,89,63,cd),library,isLocale);
HXDLIN( 272)					_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("menucharacters/minusmonikapixel",49,89,63,cd)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
            				}
            			}
            			else {
HXLINE( 272)				 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("menucharacters/minusmonikapixel",49,89,63,cd),library,null());
HXDLIN( 272)				_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("menucharacters/minusmonikapixel",49,89,63,cd)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
            			}
HXDLIN( 272)			_hx_tmp->set_frames(_hx_tmp1);
HXLINE( 273)			this->menu_character->set_antialiasing(true);
HXLINE( 274)			this->menu_character->scale->set(((Float).7),((Float).7));
HXLINE( 275)			this->menu_character->animation->addByPrefix(HX_("play",f4,2d,5a,4a),HX_("MinusMonika_gif",e8,71,18,62),24,false,null(),null());
HXLINE( 276)			this->menu_character->updateHitbox();
HXLINE( 277)			this->menu_character->animation->play(HX_("play",f4,2d,5a,4a),null(),null(),null());
HXLINE( 278)			this->add(this->menu_character);
HXLINE( 270)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==HX_("monika",f3,3a,66,c7)) ){
HXLINE( 307)			this->menu_character =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-70,-250,null());
HXLINE( 308)			 ::flixel::FlxSprite _hx_tmp = this->menu_character;
HXDLIN( 308)			::String library = null();
HXDLIN( 308)			bool isLocale = false;
HXDLIN( 308)			 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp1;
HXDLIN( 308)			if (isLocale) {
HXLINE( 308)				if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("menucharacters/monika",79,f0,7d,fb)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library),null())) {
HXLINE( 308)					 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("menucharacters/monika",79,f0,7d,fb),library,isLocale);
HXDLIN( 308)					_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("menucharacters/monika",79,f0,7d,fb)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library));
            				}
            				else {
HXLINE( 308)					 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("menucharacters/monika",79,f0,7d,fb),library,isLocale);
HXDLIN( 308)					_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("menucharacters/monika",79,f0,7d,fb)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
            				}
            			}
            			else {
HXLINE( 308)				 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("menucharacters/monika",79,f0,7d,fb),library,null());
HXDLIN( 308)				_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("menucharacters/monika",79,f0,7d,fb)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
            			}
HXDLIN( 308)			_hx_tmp->set_frames(_hx_tmp1);
HXLINE( 309)			this->menu_character->set_antialiasing(true);
HXLINE( 310)			this->menu_character->scale->set(((Float).7),((Float).7));
HXLINE( 311)			this->menu_character->animation->addByPrefix(HX_("play",f4,2d,5a,4a),HX_("Moni BG",c8,7d,25,7f),24,false,null(),null());
HXLINE( 312)			this->menu_character->updateHitbox();
HXLINE( 313)			this->menu_character->animation->play(HX_("play",f4,2d,5a,4a),null(),null(),null());
HXLINE( 314)			this->add(this->menu_character);
HXLINE( 306)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==HX_("natsuki",21,00,af,bd)) ){
HXLINE( 298)			this->menu_character =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,-140,null());
HXLINE( 299)			 ::flixel::FlxSprite _hx_tmp = this->menu_character;
HXDLIN( 299)			::String library = null();
HXDLIN( 299)			bool isLocale = false;
HXDLIN( 299)			 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp1;
HXDLIN( 299)			if (isLocale) {
HXLINE( 299)				if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("menucharacters/natsuki",db,1f,56,1e)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library),null())) {
HXLINE( 299)					 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("menucharacters/natsuki",db,1f,56,1e),library,isLocale);
HXDLIN( 299)					_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("menucharacters/natsuki",db,1f,56,1e)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library));
            				}
            				else {
HXLINE( 299)					 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("menucharacters/natsuki",db,1f,56,1e),library,isLocale);
HXDLIN( 299)					_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("menucharacters/natsuki",db,1f,56,1e)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
            				}
            			}
            			else {
HXLINE( 299)				 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("menucharacters/natsuki",db,1f,56,1e),library,null());
HXDLIN( 299)				_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("menucharacters/natsuki",db,1f,56,1e)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
            			}
HXDLIN( 299)			_hx_tmp->set_frames(_hx_tmp1);
HXLINE( 300)			this->menu_character->set_antialiasing(true);
HXLINE( 301)			this->menu_character->scale->set(((Float).7),((Float).7));
HXLINE( 302)			this->menu_character->animation->addByPrefix(HX_("play",f4,2d,5a,4a),HX_("Natsu BG",22,ce,e9,14),24,false,null(),null());
HXLINE( 303)			this->menu_character->updateHitbox();
HXLINE( 304)			this->menu_character->animation->play(HX_("play",f4,2d,5a,4a),null(),null(),null());
HXLINE( 305)			this->add(this->menu_character);
HXLINE( 297)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==HX_("pixelmonika",f9,a9,5e,04)) ){
HXLINE( 262)			this->menu_character =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-40,-240,null());
HXLINE( 263)			 ::flixel::FlxSprite _hx_tmp = this->menu_character;
HXDLIN( 263)			::String library = null();
HXDLIN( 263)			bool isLocale = false;
HXDLIN( 263)			 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp1;
HXDLIN( 263)			if (isLocale) {
HXLINE( 263)				if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("menucharacters/pixelmonika",b3,2e,09,c9)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library),null())) {
HXLINE( 263)					 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("menucharacters/pixelmonika",b3,2e,09,c9),library,isLocale);
HXDLIN( 263)					_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("menucharacters/pixelmonika",b3,2e,09,c9)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library));
            				}
            				else {
HXLINE( 263)					 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("menucharacters/pixelmonika",b3,2e,09,c9),library,isLocale);
HXDLIN( 263)					_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("menucharacters/pixelmonika",b3,2e,09,c9)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
            				}
            			}
            			else {
HXLINE( 263)				 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("menucharacters/pixelmonika",b3,2e,09,c9),library,null());
HXDLIN( 263)				_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("menucharacters/pixelmonika",b3,2e,09,c9)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
            			}
HXDLIN( 263)			_hx_tmp->set_frames(_hx_tmp1);
HXLINE( 264)			this->menu_character->set_antialiasing(true);
HXLINE( 265)			this->menu_character->scale->set(((Float).7),((Float).7));
HXLINE( 266)			this->menu_character->animation->addByPrefix(HX_("play",f4,2d,5a,4a),HX_("Monika_Neutral_gif",40,2b,fc,63),24,false,null(),null());
HXLINE( 267)			this->menu_character->updateHitbox();
HXLINE( 268)			this->menu_character->animation->play(HX_("play",f4,2d,5a,4a),null(),null(),null());
HXLINE( 269)			this->add(this->menu_character);
HXLINE( 261)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==HX_("protag",4d,94,5d,b5)) ){
HXLINE( 316)			this->menu_character =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,20,-250,null());
HXLINE( 317)			 ::flixel::FlxSprite _hx_tmp = this->menu_character;
HXDLIN( 317)			::String library = null();
HXDLIN( 317)			bool isLocale = false;
HXDLIN( 317)			 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp1;
HXDLIN( 317)			if (isLocale) {
HXLINE( 317)				if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("menucharacters/protag",d3,49,75,e9)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library),null())) {
HXLINE( 317)					 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("menucharacters/protag",d3,49,75,e9),library,isLocale);
HXDLIN( 317)					_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("menucharacters/protag",d3,49,75,e9)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library));
            				}
            				else {
HXLINE( 317)					 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("menucharacters/protag",d3,49,75,e9),library,isLocale);
HXDLIN( 317)					_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("menucharacters/protag",d3,49,75,e9)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
            				}
            			}
            			else {
HXLINE( 317)				 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("menucharacters/protag",d3,49,75,e9),library,null());
HXDLIN( 317)				_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("menucharacters/protag",d3,49,75,e9)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
            			}
HXDLIN( 317)			_hx_tmp->set_frames(_hx_tmp1);
HXLINE( 318)			this->menu_character->set_antialiasing(true);
HXLINE( 319)			this->menu_character->scale->set(((Float).7),((Float).7));
HXLINE( 320)			this->menu_character->animation->addByPrefix(HX_("play",f4,2d,5a,4a),HX_("Protag-kun BG",01,e4,7e,c4),24,false,null(),null());
HXLINE( 321)			this->menu_character->updateHitbox();
HXLINE( 322)			this->menu_character->animation->play(HX_("play",f4,2d,5a,4a),null(),null(),null());
HXLINE( 323)			this->add(this->menu_character);
HXLINE( 315)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==HX_("sayori",9b,32,38,25)) ){
HXLINE( 289)			this->menu_character =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,20,-180,null());
HXLINE( 290)			 ::flixel::FlxSprite _hx_tmp = this->menu_character;
HXDLIN( 290)			::String library = null();
HXDLIN( 290)			bool isLocale = false;
HXDLIN( 290)			 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp1;
HXDLIN( 290)			if (isLocale) {
HXLINE( 290)				if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("menucharacters/sayori",21,e8,4f,59)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library),null())) {
HXLINE( 290)					 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("menucharacters/sayori",21,e8,4f,59),library,isLocale);
HXDLIN( 290)					_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("menucharacters/sayori",21,e8,4f,59)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library));
            				}
            				else {
HXLINE( 290)					 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("menucharacters/sayori",21,e8,4f,59),library,isLocale);
HXDLIN( 290)					_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("menucharacters/sayori",21,e8,4f,59)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
            				}
            			}
            			else {
HXLINE( 290)				 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("menucharacters/sayori",21,e8,4f,59),library,null());
HXDLIN( 290)				_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("menucharacters/sayori",21,e8,4f,59)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
            			}
HXDLIN( 290)			_hx_tmp->set_frames(_hx_tmp1);
HXLINE( 291)			this->menu_character->set_antialiasing(true);
HXLINE( 292)			this->menu_character->scale->set(((Float).7),((Float).7));
HXLINE( 293)			this->menu_character->animation->addByPrefix(HX_("play",f4,2d,5a,4a),HX_("Sayori BG",0a,82,d2,02),24,false,null(),null());
HXLINE( 294)			this->menu_character->updateHitbox();
HXLINE( 295)			this->menu_character->animation->play(HX_("play",f4,2d,5a,4a),null(),null(),null());
HXLINE( 296)			this->add(this->menu_character);
HXLINE( 288)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==HX_("senpai",3c,df,8d,6b)) ){
HXLINE( 235)			this->menu_character =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-100,-250,null());
HXLINE( 236)			 ::flixel::FlxSprite _hx_tmp = this->menu_character;
HXDLIN( 236)			::String library = null();
HXDLIN( 236)			bool isLocale = false;
HXDLIN( 236)			 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp1;
HXDLIN( 236)			if (isLocale) {
HXLINE( 236)				if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("menucharacters/Senpai",e2,08,3a,d4)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library),null())) {
HXLINE( 236)					 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("menucharacters/Senpai",e2,08,3a,d4),library,isLocale);
HXDLIN( 236)					_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("menucharacters/Senpai",e2,08,3a,d4)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library));
            				}
            				else {
HXLINE( 236)					 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("menucharacters/Senpai",e2,08,3a,d4),library,isLocale);
HXDLIN( 236)					_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("menucharacters/Senpai",e2,08,3a,d4)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
            				}
            			}
            			else {
HXLINE( 236)				 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("menucharacters/Senpai",e2,08,3a,d4),library,null());
HXDLIN( 236)				_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("menucharacters/Senpai",e2,08,3a,d4)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
            			}
HXDLIN( 236)			_hx_tmp->set_frames(_hx_tmp1);
HXLINE( 237)			this->menu_character->set_antialiasing(true);
HXLINE( 238)			this->menu_character->scale->set(((Float).9),((Float).9));
HXLINE( 239)			this->menu_character->animation->addByPrefix(HX_("play",f4,2d,5a,4a),HX_("senpai_microphone",4d,ef,d2,fc),24,null(),null(),null());
HXLINE( 240)			this->menu_character->updateHitbox();
HXLINE( 241)			this->menu_character->animation->play(HX_("play",f4,2d,5a,4a),null(),null(),null());
HXLINE( 242)			this->add(this->menu_character);
HXLINE( 234)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==HX_("sunnat",d5,a2,f5,a1)) ){
HXLINE( 244)			this->menu_character =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-300,-100,null());
HXLINE( 245)			 ::flixel::FlxSprite _hx_tmp = this->menu_character;
HXDLIN( 245)			::String library = null();
HXDLIN( 245)			bool isLocale = false;
HXDLIN( 245)			 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp1;
HXDLIN( 245)			if (isLocale) {
HXLINE( 245)				if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("menucharacters/sunnat_menu",43,df,77,e0)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library),null())) {
HXLINE( 245)					 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("menucharacters/sunnat_menu",43,df,77,e0),library,isLocale);
HXDLIN( 245)					_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("menucharacters/sunnat_menu",43,df,77,e0)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library));
            				}
            				else {
HXLINE( 245)					 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("menucharacters/sunnat_menu",43,df,77,e0),library,isLocale);
HXDLIN( 245)					_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("menucharacters/sunnat_menu",43,df,77,e0)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
            				}
            			}
            			else {
HXLINE( 245)				 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("menucharacters/sunnat_menu",43,df,77,e0),library,null());
HXDLIN( 245)				_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("menucharacters/sunnat_menu",43,df,77,e0)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
            			}
HXDLIN( 245)			_hx_tmp->set_frames(_hx_tmp1);
HXLINE( 246)			this->menu_character->set_antialiasing(true);
HXLINE( 247)			this->menu_character->scale->set(((Float).8),((Float).8));
HXLINE( 248)			this->menu_character->animation->addByPrefix(HX_("play",f4,2d,5a,4a),HX_("sunday right",0c,c0,83,7d),24,null(),null(),null());
HXLINE( 249)			this->menu_character->updateHitbox();
HXLINE( 250)			this->menu_character->animation->play(HX_("play",f4,2d,5a,4a),null(),null(),null());
HXLINE( 251)			this->add(this->menu_character);
HXLINE( 243)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==HX_("together",ba,f7,e0,95)) ){
HXLINE( 343)			this->menu_character =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-170,-320,null());
HXLINE( 344)			 ::flixel::FlxSprite _hx_tmp = this->menu_character;
HXDLIN( 344)			::String library = null();
HXDLIN( 344)			bool isLocale = false;
HXDLIN( 344)			 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp1;
HXDLIN( 344)			if (isLocale) {
HXLINE( 344)				if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("menucharacters/dokitogether",a9,14,c6,59)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library),null())) {
HXLINE( 344)					 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("menucharacters/dokitogether",a9,14,c6,59),library,isLocale);
HXDLIN( 344)					_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("menucharacters/dokitogether",a9,14,c6,59)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library));
            				}
            				else {
HXLINE( 344)					 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("menucharacters/dokitogether",a9,14,c6,59),library,isLocale);
HXDLIN( 344)					_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("menucharacters/dokitogether",a9,14,c6,59)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
            				}
            			}
            			else {
HXLINE( 344)				 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("menucharacters/dokitogether",a9,14,c6,59),library,null());
HXDLIN( 344)				_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("menucharacters/dokitogether",a9,14,c6,59)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
            			}
HXDLIN( 344)			_hx_tmp->set_frames(_hx_tmp1);
HXLINE( 345)			this->menu_character->set_antialiasing(true);
HXLINE( 346)			this->menu_character->scale->set(((Float).7),((Float).7));
HXLINE( 347)			this->menu_character->animation->addByPrefix(HX_("play",f4,2d,5a,4a),HX_("Doki together club",05,73,79,ad),21,false,null(),null());
HXLINE( 348)			this->menu_character->updateHitbox();
HXLINE( 349)			this->menu_character->animation->play(HX_("play",f4,2d,5a,4a),null(),null(),null());
HXLINE( 350)			this->add(this->menu_character);
HXLINE( 342)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==HX_("together1",37,cb,f7,8e)) ){
HXLINE( 352)			this->menu_character =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-150,-310,null());
HXLINE( 353)			 ::flixel::FlxSprite _hx_tmp = this->menu_character;
HXDLIN( 353)			::String library = null();
HXDLIN( 353)			bool isLocale = false;
HXDLIN( 353)			 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp1;
HXDLIN( 353)			if (isLocale) {
HXLINE( 353)				if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("menucharacters/dokitogetheralt",20,74,3d,2e)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library),null())) {
HXLINE( 353)					 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("menucharacters/dokitogetheralt",20,74,3d,2e),library,isLocale);
HXDLIN( 353)					_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("menucharacters/dokitogetheralt",20,74,3d,2e)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library));
            				}
            				else {
HXLINE( 353)					 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("menucharacters/dokitogetheralt",20,74,3d,2e),library,isLocale);
HXDLIN( 353)					_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("menucharacters/dokitogetheralt",20,74,3d,2e)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
            				}
            			}
            			else {
HXLINE( 353)				 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("menucharacters/dokitogetheralt",20,74,3d,2e),library,null());
HXDLIN( 353)				_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("menucharacters/dokitogetheralt",20,74,3d,2e)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
            			}
HXDLIN( 353)			_hx_tmp->set_frames(_hx_tmp1);
HXLINE( 354)			this->menu_character->set_antialiasing(true);
HXLINE( 355)			this->menu_character->scale->set(((Float).77),((Float).77));
HXLINE( 356)			this->menu_character->animation->addByPrefix(HX_("play",f4,2d,5a,4a),HX_("Doki together club",05,73,79,ad),21,false,null(),null());
HXLINE( 357)			this->menu_character->updateHitbox();
HXLINE( 358)			this->menu_character->animation->play(HX_("play",f4,2d,5a,4a),null(),null(),null());
HXLINE( 359)			this->add(this->menu_character);
HXLINE( 351)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==HX_("yuri",93,fc,53,50)) ){
HXLINE( 280)			this->menu_character =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,20,-230,null());
HXLINE( 281)			 ::flixel::FlxSprite _hx_tmp = this->menu_character;
HXDLIN( 281)			::String library = null();
HXDLIN( 281)			bool isLocale = false;
HXDLIN( 281)			 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp1;
HXDLIN( 281)			if (isLocale) {
HXLINE( 281)				if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("menucharacters/yuri",99,24,cd,55)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library),null())) {
HXLINE( 281)					 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("menucharacters/yuri",99,24,cd,55),library,isLocale);
HXDLIN( 281)					_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("menucharacters/yuri",99,24,cd,55)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library));
            				}
            				else {
HXLINE( 281)					 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("menucharacters/yuri",99,24,cd,55),library,isLocale);
HXDLIN( 281)					_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("menucharacters/yuri",99,24,cd,55)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
            				}
            			}
            			else {
HXLINE( 281)				 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("menucharacters/yuri",99,24,cd,55),library,null());
HXDLIN( 281)				_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("menucharacters/yuri",99,24,cd,55)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
            			}
HXDLIN( 281)			_hx_tmp->set_frames(_hx_tmp1);
HXLINE( 282)			this->menu_character->set_antialiasing(true);
HXLINE( 283)			this->menu_character->scale->set(((Float).7),((Float).7));
HXLINE( 284)			this->menu_character->animation->addByPrefix(HX_("play",f4,2d,5a,4a),HX_("Yuri BG",12,8b,e5,25),24,false,null(),null());
HXLINE( 285)			this->menu_character->updateHitbox();
HXLINE( 286)			this->menu_character->animation->play(HX_("play",f4,2d,5a,4a),null(),null(),null());
HXLINE( 287)			this->add(this->menu_character);
HXLINE( 279)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==HX_("yuritabi",87,f2,df,60)) ){
HXLINE( 253)			this->menu_character =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-150,-270,null());
HXLINE( 254)			 ::flixel::FlxSprite _hx_tmp = this->menu_character;
HXDLIN( 254)			::String library = null();
HXDLIN( 254)			bool isLocale = false;
HXDLIN( 254)			 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp1;
HXDLIN( 254)			if (isLocale) {
HXLINE( 254)				if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("menucharacters/tabiandyuri",b0,39,0f,dd)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library),null())) {
HXLINE( 254)					 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("menucharacters/tabiandyuri",b0,39,0f,dd),library,isLocale);
HXDLIN( 254)					_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("menucharacters/tabiandyuri",b0,39,0f,dd)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library));
            				}
            				else {
HXLINE( 254)					 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("menucharacters/tabiandyuri",b0,39,0f,dd),library,isLocale);
HXDLIN( 254)					_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("menucharacters/tabiandyuri",b0,39,0f,dd)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
            				}
            			}
            			else {
HXLINE( 254)				 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("menucharacters/tabiandyuri",b0,39,0f,dd),library,null());
HXDLIN( 254)				_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("menucharacters/tabiandyuri",b0,39,0f,dd)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
            			}
HXDLIN( 254)			_hx_tmp->set_frames(_hx_tmp1);
HXLINE( 255)			this->menu_character->set_antialiasing(true);
HXLINE( 256)			this->menu_character->scale->set(((Float).77),((Float).77));
HXLINE( 257)			this->menu_character->animation->addByPrefix(HX_("play",f4,2d,5a,4a),HX_("Tabi Yuri together hueh",b5,46,e4,4d),21,null(),null(),null());
HXLINE( 258)			this->menu_character->updateHitbox();
HXLINE( 259)			this->menu_character->animation->play(HX_("play",f4,2d,5a,4a),null(),null(),null());
HXLINE( 260)			this->add(this->menu_character);
HXLINE( 252)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==HX_("zipori",a5,71,f9,86)) ){
HXLINE( 361)			this->menu_character =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-100,-270,null());
HXLINE( 362)			 ::flixel::FlxSprite _hx_tmp = this->menu_character;
HXDLIN( 362)			::String library = null();
HXDLIN( 362)			bool isLocale = false;
HXDLIN( 362)			 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp1;
HXDLIN( 362)			if (isLocale) {
HXLINE( 362)				if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("menucharacters/sayozip",37,47,a1,cc)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library),null())) {
HXLINE( 362)					 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("menucharacters/sayozip",37,47,a1,cc),library,isLocale);
HXDLIN( 362)					_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("menucharacters/sayozip",37,47,a1,cc)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library));
            				}
            				else {
HXLINE( 362)					 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("menucharacters/sayozip",37,47,a1,cc),library,isLocale);
HXDLIN( 362)					_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("menucharacters/sayozip",37,47,a1,cc)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
            				}
            			}
            			else {
HXLINE( 362)				 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("menucharacters/sayozip",37,47,a1,cc),library,null());
HXDLIN( 362)				_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("menucharacters/sayozip",37,47,a1,cc)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
            			}
HXDLIN( 362)			_hx_tmp->set_frames(_hx_tmp1);
HXLINE( 363)			this->menu_character->set_antialiasing(true);
HXLINE( 364)			this->menu_character->scale->set(((Float).8),((Float).8));
HXLINE( 365)			this->menu_character->animation->addByPrefix(HX_("play",f4,2d,5a,4a),HX_("Sayo Zipper Menu",87,1f,5e,9b),24,null(),null(),null());
HXLINE( 366)			this->menu_character->updateHitbox();
HXLINE( 367)			this->menu_character->animation->play(HX_("play",f4,2d,5a,4a),null(),null(),null());
HXLINE( 368)			this->add(this->menu_character);
HXLINE( 360)			goto _hx_goto_1;
            		}
            		_hx_goto_1:;
HXLINE( 371)		this->menuItems =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE( 372)		this->add(this->menuItems);
HXLINE( 374)		 ::flixel::graphics::frames::FlxAtlasFrames tex;
HXDLIN( 374)		if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("credits_assets",48,a3,39,80)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("preload",c9,47,43,35)),null())) {
HXLINE( 374)			 ::flixel::graphics::FlxGraphic tex1 = ::Paths_obj::loadImage(HX_("credits_assets",48,a3,39,80),HX_("preload",c9,47,43,35),true);
HXDLIN( 374)			tex = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex1,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("credits_assets",48,a3,39,80)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("preload",c9,47,43,35)));
            		}
            		else {
HXLINE( 374)			 ::flixel::graphics::FlxGraphic tex1 = ::Paths_obj::loadImage(HX_("credits_assets",48,a3,39,80),HX_("preload",c9,47,43,35),true);
HXDLIN( 374)			tex = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex1,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("credits_assets",48,a3,39,80)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("preload",c9,47,43,35)));
            		}
HXLINE( 376)		{
HXLINE( 376)			int _g = 0;
HXDLIN( 376)			int _g1 = this->optionShit->length;
HXDLIN( 376)			while((_g < _g1)){
HXLINE( 376)				_g = (_g + 1);
HXDLIN( 376)				int i = (_g - 1);
HXLINE( 378)				 ::flixel::FlxSprite menuItem =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-350,(390 + (i * 50)),null());
HXLINE( 379)				menuItem->set_frames(tex);
HXLINE( 380)				menuItem->animation->addByPrefix(HX_("idle",14,a7,b3,45),(this->optionShit->__get(i) + HX_(" basic",8e,b6,25,79)),24,null(),null(),null());
HXLINE( 381)				menuItem->animation->addByPrefix(HX_("selected",5b,2a,6d,b1),(this->optionShit->__get(i) + HX_(" white",89,d6,28,95)),24,null(),null(),null());
HXLINE( 382)				menuItem->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 383)				menuItem->ID = i;
HXLINE( 384)				menuItem->scale->set(((Float)1.5),((Float)1.5));
HXLINE( 386)				this->menuItems->add(menuItem).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 387)				menuItem->scrollFactor->set(null(),null());
HXLINE( 388)				menuItem->set_antialiasing(true);
HXLINE( 389)				if (::MainMenuState_obj::firstStart) {
            					HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_2, ::MainMenuState,_gthis) HXARGC(1)
            					void _hx_run( ::flixel::tweens::FlxTween flxTween){
            						HX_GC_STACKFRAME(&_hx_pos_b0351dbbcbe2d566_393_create)
HXLINE( 394)						::MainMenuState_obj::firstStart = false;
HXLINE( 395)						_gthis->changeItem(null());
            					}
            					HX_END_LOCAL_FUNC1((void))

HXLINE( 390)					::flixel::tweens::FlxTween_obj::tween(menuItem, ::Dynamic(::hx::Anon_obj::Create(1)
            						->setFixed(0,HX_("x",78,00,00,00),50)),(((Float)1.2) + (( (Float)(i) ) * ((Float)0.2))), ::Dynamic(::hx::Anon_obj::Create(2)
            						->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::elasticOut_dyn())
            						->setFixed(1,HX_("onComplete",f8,d4,7e,5d), ::Dynamic(new _hx_Closure_2(_gthis)))));
            				}
            				else {
HXLINE( 399)					menuItem->set_x(( (Float)(50) ));
            				}
            			}
            		}
HXLINE( 402)		int versionShit = (::flixel::FlxG_obj::height - 24);
HXDLIN( 402)		 ::flixel::text::FlxText versionShit1 =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,-350,versionShit,0,(HX_("v",76,00,00,00) + ::lime::app::Application_obj::current->meta->get(HX_("version",18,e7,f1,7c))),12,null());
HXLINE( 403)		versionShit1->scrollFactor->set(null(),null());
HXLINE( 404)		versionShit1->set_antialiasing(true);
HXLINE( 405)		versionShit1->setFormat(::LangUtil_obj::getFont(HX_("aller",ce,9b,93,21)),16,-1,HX_("left",07,08,b0,47),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE( 406)		this->add(versionShit1);
HXLINE( 408)		if (::MainMenuState_obj::firstStart) {
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_3, ::MainMenuState,_gthis) HXARGC(1)
            			void _hx_run( ::flixel::tweens::FlxTween flxTween){
            				HX_GC_STACKFRAME(&_hx_pos_b0351dbbcbe2d566_412_create)
HXLINE( 413)				::MainMenuState_obj::firstStart = false;
HXLINE( 414)				_gthis->changeItem(null());
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE( 409)			::flixel::tweens::FlxTween_obj::tween(versionShit1, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("x",78,00,00,00),5)),((Float)1.2), ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::elasticOut_dyn())
            				->setFixed(1,HX_("onComplete",f8,d4,7e,5d), ::Dynamic(new _hx_Closure_3(_gthis)))));
            		}
            		else {
HXLINE( 418)			versionShit1->set_x(( (Float)(5) ));
            		}
HXLINE( 420)		::flixel::FlxG_obj::camera->follow(this->camFollow,null(),(((Float)0.60) * (( (Float)(60) ) / ( (Float)(::flixel::FlxG_obj::save->data->__Field(HX_("fpsCap",a9,7b,7e,91),::hx::paccDynamic)) ))));
HXLINE( 424)		if (( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("dfjk",c3,18,67,42),::hx::paccDynamic)) )) {
HXLINE( 425)			::PlayerSettings_obj::player1->controls->setKeyboardScheme(::KeyboardScheme_obj::Solo_dyn(),true);
            		}
            		else {
HXLINE( 427)			::PlayerSettings_obj::player1->controls->setKeyboardScheme(::KeyboardScheme_obj::Duo(true),true);
            		}
HXLINE( 429)		this->changeItem(null());
HXLINE( 431)		this->super::create();
            	}


void MainMenuState_obj::update(Float elapsed){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_4) HXARGC(1)
            		void _hx_run( ::flixel::FlxSprite spr){
            			HX_STACKFRAME(&_hx_pos_b0351dbbcbe2d566_548_update)
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_b0351dbbcbe2d566_437_update)
HXDLIN( 437)		 ::MainMenuState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 438)		if ((::flixel::FlxG_obj::sound->music->_volume < ((Float)0.8))) {
HXLINE( 440)			 ::flixel::_hx_system::FlxSound fh = ::flixel::FlxG_obj::sound->music;
HXDLIN( 440)			fh->set_volume((fh->_volume + (((Float)0.5) * ::flixel::FlxG_obj::elapsed)));
            		}
HXLINE( 443)		if (!(this->selectedSomethin)) {
HXLINE( 445)			if (::PlayerSettings_obj::player1->controls->_upP->check()) {
HXLINE( 447)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 447)				_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
HXLINE( 448)				this->changeItem(-1);
            			}
HXLINE( 451)			if (::PlayerSettings_obj::player1->controls->_downP->check()) {
HXLINE( 453)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 453)				_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
HXLINE( 454)				this->changeItem(1);
            			}
HXLINE( 505)			if (::PlayerSettings_obj::player1->controls->_accept->check()) {
            				HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_3, ::MainMenuState,_gthis) HXARGC(1)
            				void _hx_run( ::flixel::FlxSprite spr){
            					HX_GC_STACKFRAME(&_hx_pos_b0351dbbcbe2d566_512_update)
HXLINE( 512)					if ((_gthis->curSelected != spr->ID)) {
            						HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::flixel::FlxSprite,spr) HXARGC(1)
            						void _hx_run( ::flixel::tweens::FlxTween twn){
            							HX_STACKFRAME(&_hx_pos_b0351dbbcbe2d566_518_update)
HXLINE( 518)							spr->kill();
            						}
            						HX_END_LOCAL_FUNC1((void))

HXLINE( 514)						::flixel::tweens::FlxTween_obj::tween(spr, ::Dynamic(::hx::Anon_obj::Create(1)
            							->setFixed(0,HX_("alpha",5e,a7,96,21),0)),((Float)1.3), ::Dynamic(::hx::Anon_obj::Create(2)
            							->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quadOut_dyn())
            							->setFixed(1,HX_("onComplete",f8,d4,7e,5d), ::Dynamic(new _hx_Closure_0(spr)))));
            					}
            					else {
HXLINE( 524)						if (( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("flashing",32,85,e8,99),::hx::paccDynamic)) )) {
            							HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::MainMenuState,_gthis) HXARGC(1)
            							void _hx_run( ::flixel::effects::FlxFlicker flick){
            								HX_STACKFRAME(&_hx_pos_b0351dbbcbe2d566_528_update)
HXLINE( 528)								_gthis->goToState();
            							}
            							HX_END_LOCAL_FUNC1((void))

HXLINE( 526)							::flixel::effects::FlxFlicker_obj::flicker(spr,1,((Float)0.06),false,false, ::Dynamic(new _hx_Closure_1(_gthis)),null());
            						}
            						else {
            							HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_2, ::MainMenuState,_gthis) HXARGC(1)
            							void _hx_run( ::flixel::util::FlxTimer tmr){
            								HX_GC_STACKFRAME(&_hx_pos_b0351dbbcbe2d566_535_update)
HXLINE( 535)								_gthis->goToState();
            							}
            							HX_END_LOCAL_FUNC1((void))

HXLINE( 533)							 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(1, ::Dynamic(new _hx_Closure_2(_gthis)),null());
            						}
            					}
            				}
            				HX_END_LOCAL_FUNC1((void))

HXLINE( 507)				this->selectedSomethin = true;
HXLINE( 508)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 508)				_hx_tmp->play(::Paths_obj::sound(HX_("confirmMenu",bf,8e,fe,3c),null()),null(),null(),null(),null(),null());
HXLINE( 510)				this->menuItems->forEach( ::Dynamic(new _hx_Closure_3(_gthis)),null());
            			}
            		}
HXLINE( 543)		if (::hx::IsNotNull( ::flixel::FlxG_obj::sound->music )) {
HXLINE( 544)			::Conductor_obj::songPosition = ::flixel::FlxG_obj::sound->music->_time;
            		}
HXLINE( 546)		this->super::update(elapsed);
HXLINE( 547)		this->menuItems->forEach( ::Dynamic(new _hx_Closure_4()),null());
            	}


void MainMenuState_obj::goToState(){
            	HX_GC_STACKFRAME(&_hx_pos_b0351dbbcbe2d566_554_goToState)
HXLINE( 555)		::String daChoice = this->optionShit->__get(this->curSelected);
HXLINE( 557)		::String _hx_switch_0 = daChoice;
            		if (  (_hx_switch_0==HX_("credits",1a,0e,5e,13)) ){
HXLINE( 566)			 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN( 566)			if (_this->keyManager->checkStatus(71,_this->status)) {
HXLINE( 572)				{
HXLINE( 572)					::String prefix = HX_("",00,00,00,00);
HXDLIN( 572)					if (!( ::EReg_obj::__alloc( HX_CTX ,HX_("^https?://",48,ee,dd,38),HX_("",00,00,00,00))->match(HX_("https://www.youtube.com/watch?v=0MW9Nrg_kZU",95,2b,c4,3a)))) {
HXLINE( 572)						prefix = HX_("http://",52,75,cd,5a);
            					}
HXDLIN( 572)					::openfl::Lib_obj::getURL( ::openfl::net::URLRequest_obj::__alloc( HX_CTX ,(prefix + HX_("https://www.youtube.com/watch?v=0MW9Nrg_kZU",95,2b,c4,3a))),HX_("_blank",95,26,d9,b0));
            				}
HXLINE( 574)				{
HXLINE( 574)					 ::flixel::FlxState nextState =  ::MainMenuState_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 574)					if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 574)						::flixel::FlxG_obj::game->_requestedState = nextState;
            					}
            				}
            			}
            			else {
HXLINE( 581)				 ::flixel::FlxState nextState =  ::MainMenuState_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 581)				if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 581)					::flixel::FlxG_obj::game->_requestedState = nextState;
            				}
            			}
HXLINE( 584)			::haxe::Log_obj::trace(HX_("Credits Menu Selected",56,48,b9,16),::hx::SourceInfo(HX_("source/MainMenuState.hx",f9,ee,86,cf),584,HX_("MainMenuState",59,88,5e,20),HX_("goToState",4e,a5,e1,c9)));
HXLINE( 565)			goto _hx_goto_16;
            		}
            		if (  (_hx_switch_0==HX_("freeplay",a0,90,86,22)) ){
HXLINE( 563)			{
HXLINE( 563)				 ::flixel::FlxState nextState =  ::DokiFreeplayState_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 563)				if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 563)					::flixel::FlxG_obj::game->_requestedState = nextState;
            				}
            			}
HXLINE( 564)			::haxe::Log_obj::trace(HX_("Freeplay Menu Selected",9c,6d,5a,ca),::hx::SourceInfo(HX_("source/MainMenuState.hx",f9,ee,86,cf),564,HX_("MainMenuState",59,88,5e,20),HX_("goToState",4e,a5,e1,c9)));
HXLINE( 562)			goto _hx_goto_16;
            		}
            		if (  (_hx_switch_0==HX_("language",58,80,11,7a)) ){
HXLINE( 605)			 ::flixel::FlxState nextState =  ::LangSelectState_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 605)			if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 605)				::flixel::FlxG_obj::game->_requestedState = nextState;
            			}
HXDLIN( 605)			goto _hx_goto_16;
            		}
            		if (  (_hx_switch_0==HX_("options",5e,33,fe,df)) ){
HXLINE( 603)			 ::flixel::FlxState nextState =  ::OptionsMenu_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 603)			if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 603)				::flixel::FlxG_obj::game->_requestedState = nextState;
            			}
HXDLIN( 603)			goto _hx_goto_16;
            		}
            		if (  (_hx_switch_0==HX_("story mode",6e,d7,a7,5e)) ){
HXLINE( 560)			{
HXLINE( 560)				 ::flixel::FlxState nextState =  ::DokiStoryState_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 560)				if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 560)					::flixel::FlxG_obj::game->_requestedState = nextState;
            				}
            			}
HXLINE( 561)			::haxe::Log_obj::trace(HX_("Story Menu Selected",71,ff,9b,4a),::hx::SourceInfo(HX_("source/MainMenuState.hx",f9,ee,86,cf),561,HX_("MainMenuState",59,88,5e,20),HX_("goToState",4e,a5,e1,c9)));
HXLINE( 559)			goto _hx_goto_16;
            		}
            		if (  (_hx_switch_0==HX_("unlock",c4,a2,8c,65)) ){
HXLINE( 586)			::haxe::Log_obj::trace(HX_("hello",12,33,c1,24),::hx::SourceInfo(HX_("source/MainMenuState.hx",f9,ee,86,cf),586,HX_("MainMenuState",59,88,5e,20),HX_("goToState",4e,a5,e1,c9)));
HXLINE( 587)			::flixel::FlxG_obj::save->data->__SetField(HX_("monibeaten",3c,53,44,8f),true,::hx::paccDynamic);
HXLINE( 588)			::flixel::FlxG_obj::save->data->__SetField(HX_("sayobeaten",43,14,7b,f6),true,::hx::paccDynamic);
HXLINE( 589)			::flixel::FlxG_obj::save->data->__SetField(HX_("natbeaten",00,2f,7a,be),true,::hx::paccDynamic);
HXLINE( 590)			::flixel::FlxG_obj::save->data->__SetField(HX_("yuribeaten",32,30,34,69),true,::hx::paccDynamic);
HXLINE( 591)			::flixel::FlxG_obj::save->data->__SetField(HX_("extrabeaten",ef,e9,0c,61),true,::hx::paccDynamic);
HXLINE( 592)			::flixel::FlxG_obj::save->data->__SetField(HX_("extra2beaten",81,0c,3e,cc),true,::hx::paccDynamic);
HXLINE( 593)			::flixel::FlxG_obj::save->data->__SetField(HX_("unlockepip",d6,39,27,23),true,::hx::paccDynamic);
HXLINE( 594)			::flixel::FlxG_obj::save->data->__SetField(HX_("monipopup",ef,24,f0,3d),true,::hx::paccDynamic);
HXLINE( 595)			::flixel::FlxG_obj::save->data->__SetField(HX_("sayopopup",c8,a1,66,3e),true,::hx::paccDynamic);
HXLINE( 596)			::flixel::FlxG_obj::save->data->__SetField(HX_("natpopup",ab,ed,49,7d),true,::hx::paccDynamic);
HXLINE( 597)			::flixel::FlxG_obj::save->data->__SetField(HX_("yuripopup",b9,98,c5,1e),true,::hx::paccDynamic);
HXLINE( 598)			::flixel::FlxG_obj::save->data->__SetField(HX_("extra1popup",eb,9e,36,28),true,::hx::paccDynamic);
HXLINE( 599)			::flixel::FlxG_obj::save->data->__SetField(HX_("extra2popup",4a,fb,91,8e),true,::hx::paccDynamic);
HXLINE( 600)			::flixel::FlxG_obj::save->data->__SetField(HX_("weekUnlocked",37,64,c4,a5),7,::hx::paccDynamic);
HXLINE( 601)			{
HXLINE( 601)				 ::flixel::FlxState nextState =  ::DokiFreeplayState_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 601)				if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 601)					::flixel::FlxG_obj::game->_requestedState = nextState;
            				}
            			}
HXLINE( 585)			goto _hx_goto_16;
            		}
            		_hx_goto_16:;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MainMenuState_obj,goToState,(void))

void MainMenuState_obj::changeItem(::hx::Null< int >  __o_huh){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::MainMenuState,_gthis) HXARGC(1)
            		void _hx_run( ::flixel::FlxSprite spr){
            			HX_STACKFRAME(&_hx_pos_b0351dbbcbe2d566_619_changeItem)
HXLINE( 620)			spr->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 622)			if ((spr->ID == _gthis->curSelected)) {
HXLINE( 624)				spr->animation->play(HX_("selected",5b,2a,6d,b1),null(),null(),null());
            			}
HXLINE( 627)			spr->updateHitbox();
            		}
            		HX_END_LOCAL_FUNC1((void))

            		int huh = __o_huh.Default(0);
            	HX_STACKFRAME(&_hx_pos_b0351dbbcbe2d566_610_changeItem)
HXDLIN( 610)		 ::MainMenuState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 611)		 ::MainMenuState _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 611)		_hx_tmp->curSelected = (_hx_tmp->curSelected + huh);
HXLINE( 613)		if ((this->curSelected >= this->optionShit->length)) {
HXLINE( 614)			this->curSelected = 0;
            		}
HXLINE( 615)		if ((this->curSelected < 0)) {
HXLINE( 616)			this->curSelected = (this->optionShit->length - 1);
            		}
HXLINE( 618)		this->menuItems->forEach( ::Dynamic(new _hx_Closure_0(_gthis)),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(MainMenuState_obj,changeItem,(void))

void MainMenuState_obj::beatHit(){
            	HX_STACKFRAME(&_hx_pos_b0351dbbcbe2d566_632_beatHit)
HXLINE( 633)		this->super::beatHit();
HXLINE( 635)		this->logoBl->animation->play(HX_("bump",f6,0f,20,41),true,null(),null());
HXLINE( 637)		bool _hx_tmp;
HXDLIN( 637)		bool _hx_tmp1;
HXDLIN( 637)		bool _hx_tmp2;
HXDLIN( 637)		bool _hx_tmp3;
HXDLIN( 637)		bool _hx_tmp4;
HXDLIN( 637)		bool _hx_tmp5;
HXDLIN( 637)		bool _hx_tmp6;
HXDLIN( 637)		bool _hx_tmp7;
HXDLIN( 637)		bool _hx_tmp8;
HXDLIN( 637)		bool _hx_tmp9;
HXDLIN( 637)		bool _hx_tmp10;
HXDLIN( 637)		if ((this->show != HX_("protag",4d,94,5d,b5))) {
HXLINE( 637)			_hx_tmp10 = (this->show == HX_("fumo",71,ea,c4,43));
            		}
            		else {
HXLINE( 637)			_hx_tmp10 = true;
            		}
HXDLIN( 637)		if (!(_hx_tmp10)) {
HXLINE( 637)			_hx_tmp9 = (this->show == HX_("together1",37,cb,f7,8e));
            		}
            		else {
HXLINE( 637)			_hx_tmp9 = true;
            		}
HXDLIN( 637)		if (!(_hx_tmp9)) {
HXLINE( 637)			_hx_tmp8 = (this->show == HX_("together",ba,f7,e0,95));
            		}
            		else {
HXLINE( 637)			_hx_tmp8 = true;
            		}
HXDLIN( 637)		if (!(_hx_tmp8)) {
HXLINE( 637)			_hx_tmp7 = (this->show == HX_("akimonika",72,6c,42,ab));
            		}
            		else {
HXLINE( 637)			_hx_tmp7 = true;
            		}
HXDLIN( 637)		if (!(_hx_tmp7)) {
HXLINE( 637)			_hx_tmp6 = (this->show == HX_("monika",f3,3a,66,c7));
            		}
            		else {
HXLINE( 637)			_hx_tmp6 = true;
            		}
HXDLIN( 637)		if (!(_hx_tmp6)) {
HXLINE( 637)			_hx_tmp5 = (this->show == HX_("yuri",93,fc,53,50));
            		}
            		else {
HXLINE( 637)			_hx_tmp5 = true;
            		}
HXDLIN( 637)		if (!(_hx_tmp5)) {
HXLINE( 637)			_hx_tmp4 = (this->show == HX_("natsuki",21,00,af,bd));
            		}
            		else {
HXLINE( 637)			_hx_tmp4 = true;
            		}
HXDLIN( 637)		if (!(_hx_tmp4)) {
HXLINE( 637)			_hx_tmp3 = (this->show == HX_("sayori",9b,32,38,25));
            		}
            		else {
HXLINE( 637)			_hx_tmp3 = true;
            		}
HXDLIN( 637)		if (!(_hx_tmp3)) {
HXLINE( 637)			_hx_tmp2 = (this->show == HX_("pixelmonika",f9,a9,5e,04));
            		}
            		else {
HXLINE( 637)			_hx_tmp2 = true;
            		}
HXDLIN( 637)		if (!(_hx_tmp2)) {
HXLINE( 637)			_hx_tmp1 = (this->show == HX_("minusmonikapixel",43,70,4b,40));
            		}
            		else {
HXLINE( 637)			_hx_tmp1 = true;
            		}
HXDLIN( 637)		if (_hx_tmp1) {
HXLINE( 637)			_hx_tmp = (::hx::Mod(this->curBeat,2) == 0);
            		}
            		else {
HXLINE( 637)			_hx_tmp = false;
            		}
HXDLIN( 637)		if (_hx_tmp) {
HXLINE( 640)			this->menu_character->animation->play(HX_("play",f4,2d,5a,4a),true,null(),null());
            		}
            	}


::String MainMenuState_obj::kadeEngineVer;

::String MainMenuState_obj::nightly;

bool MainMenuState_obj::firstStart;


::hx::ObjectPtr< MainMenuState_obj > MainMenuState_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< MainMenuState_obj > __this = new MainMenuState_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< MainMenuState_obj > MainMenuState_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	MainMenuState_obj *__this = (MainMenuState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MainMenuState_obj), true, "MainMenuState"));
	*(void **)__this = MainMenuState_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

MainMenuState_obj::MainMenuState_obj()
{
}

void MainMenuState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MainMenuState);
	HX_MARK_MEMBER_NAME(curSelected,"curSelected");
	HX_MARK_MEMBER_NAME(show,"show");
	HX_MARK_MEMBER_NAME(menuItems,"menuItems");
	HX_MARK_MEMBER_NAME(crediticons,"crediticons");
	HX_MARK_MEMBER_NAME(fixdiff,"fixdiff");
	HX_MARK_MEMBER_NAME(optionShit,"optionShit");
	HX_MARK_MEMBER_NAME(newGaming,"newGaming");
	HX_MARK_MEMBER_NAME(newGaming2,"newGaming2");
	HX_MARK_MEMBER_NAME(newInput,"newInput");
	HX_MARK_MEMBER_NAME(logo,"logo");
	HX_MARK_MEMBER_NAME(fumo,"fumo");
	HX_MARK_MEMBER_NAME(menu_character,"menu_character");
	HX_MARK_MEMBER_NAME(magenta,"magenta");
	HX_MARK_MEMBER_NAME(camFollow,"camFollow");
	HX_MARK_MEMBER_NAME(backdrop,"backdrop");
	HX_MARK_MEMBER_NAME(logoBl,"logoBl");
	HX_MARK_MEMBER_NAME(grpLocks,"grpLocks");
	HX_MARK_MEMBER_NAME(difficultySelectors,"difficultySelectors");
	HX_MARK_MEMBER_NAME(sprDifficulty,"sprDifficulty");
	HX_MARK_MEMBER_NAME(leftArrow,"leftArrow");
	HX_MARK_MEMBER_NAME(rightArrow,"rightArrow");
	HX_MARK_MEMBER_NAME(selectedSomethin,"selectedSomethin");
	 ::MusicBeatState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MainMenuState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(curSelected,"curSelected");
	HX_VISIT_MEMBER_NAME(show,"show");
	HX_VISIT_MEMBER_NAME(menuItems,"menuItems");
	HX_VISIT_MEMBER_NAME(crediticons,"crediticons");
	HX_VISIT_MEMBER_NAME(fixdiff,"fixdiff");
	HX_VISIT_MEMBER_NAME(optionShit,"optionShit");
	HX_VISIT_MEMBER_NAME(newGaming,"newGaming");
	HX_VISIT_MEMBER_NAME(newGaming2,"newGaming2");
	HX_VISIT_MEMBER_NAME(newInput,"newInput");
	HX_VISIT_MEMBER_NAME(logo,"logo");
	HX_VISIT_MEMBER_NAME(fumo,"fumo");
	HX_VISIT_MEMBER_NAME(menu_character,"menu_character");
	HX_VISIT_MEMBER_NAME(magenta,"magenta");
	HX_VISIT_MEMBER_NAME(camFollow,"camFollow");
	HX_VISIT_MEMBER_NAME(backdrop,"backdrop");
	HX_VISIT_MEMBER_NAME(logoBl,"logoBl");
	HX_VISIT_MEMBER_NAME(grpLocks,"grpLocks");
	HX_VISIT_MEMBER_NAME(difficultySelectors,"difficultySelectors");
	HX_VISIT_MEMBER_NAME(sprDifficulty,"sprDifficulty");
	HX_VISIT_MEMBER_NAME(leftArrow,"leftArrow");
	HX_VISIT_MEMBER_NAME(rightArrow,"rightArrow");
	HX_VISIT_MEMBER_NAME(selectedSomethin,"selectedSomethin");
	 ::MusicBeatState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val MainMenuState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"show") ) { return ::hx::Val( show ); }
		if (HX_FIELD_EQ(inName,"logo") ) { return ::hx::Val( logo ); }
		if (HX_FIELD_EQ(inName,"fumo") ) { return ::hx::Val( fumo ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"logoBl") ) { return ::hx::Val( logoBl ); }
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"fixdiff") ) { return ::hx::Val( fixdiff ); }
		if (HX_FIELD_EQ(inName,"magenta") ) { return ::hx::Val( magenta ); }
		if (HX_FIELD_EQ(inName,"beatHit") ) { return ::hx::Val( beatHit_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"newInput") ) { return ::hx::Val( newInput ); }
		if (HX_FIELD_EQ(inName,"backdrop") ) { return ::hx::Val( backdrop ); }
		if (HX_FIELD_EQ(inName,"grpLocks") ) { return ::hx::Val( grpLocks ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"menuItems") ) { return ::hx::Val( menuItems ); }
		if (HX_FIELD_EQ(inName,"newGaming") ) { return ::hx::Val( newGaming ); }
		if (HX_FIELD_EQ(inName,"camFollow") ) { return ::hx::Val( camFollow ); }
		if (HX_FIELD_EQ(inName,"leftArrow") ) { return ::hx::Val( leftArrow ); }
		if (HX_FIELD_EQ(inName,"goToState") ) { return ::hx::Val( goToState_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"optionShit") ) { return ::hx::Val( optionShit ); }
		if (HX_FIELD_EQ(inName,"newGaming2") ) { return ::hx::Val( newGaming2 ); }
		if (HX_FIELD_EQ(inName,"rightArrow") ) { return ::hx::Val( rightArrow ); }
		if (HX_FIELD_EQ(inName,"changeItem") ) { return ::hx::Val( changeItem_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { return ::hx::Val( curSelected ); }
		if (HX_FIELD_EQ(inName,"crediticons") ) { return ::hx::Val( crediticons ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"sprDifficulty") ) { return ::hx::Val( sprDifficulty ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"menu_character") ) { return ::hx::Val( menu_character ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"selectedSomethin") ) { return ::hx::Val( selectedSomethin ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"difficultySelectors") ) { return ::hx::Val( difficultySelectors ); }
	}
	return super::__Field(inName,inCallProp);
}

bool MainMenuState_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"nightly") ) { outValue = ( nightly ); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"firstStart") ) { outValue = ( firstStart ); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"kadeEngineVer") ) { outValue = ( kadeEngineVer ); return true; }
	}
	return false;
}

::hx::Val MainMenuState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"show") ) { show=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"logo") ) { logo=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fumo") ) { fumo=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"logoBl") ) { logoBl=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"fixdiff") ) { fixdiff=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"magenta") ) { magenta=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"newInput") ) { newInput=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"backdrop") ) { backdrop=inValue.Cast<  ::flixel::addons::display::FlxBackdrop >(); return inValue; }
		if (HX_FIELD_EQ(inName,"grpLocks") ) { grpLocks=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"menuItems") ) { menuItems=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"newGaming") ) { newGaming=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"camFollow") ) { camFollow=inValue.Cast<  ::flixel::FlxObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"leftArrow") ) { leftArrow=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"optionShit") ) { optionShit=inValue.Cast< ::Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"newGaming2") ) { newGaming2=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rightArrow") ) { rightArrow=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { curSelected=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"crediticons") ) { crediticons=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"sprDifficulty") ) { sprDifficulty=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"menu_character") ) { menu_character=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"selectedSomethin") ) { selectedSomethin=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"difficultySelectors") ) { difficultySelectors=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool MainMenuState_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"nightly") ) { nightly=ioValue.Cast< ::String >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"firstStart") ) { firstStart=ioValue.Cast< bool >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"kadeEngineVer") ) { kadeEngineVer=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

void MainMenuState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("curSelected",fb,eb,ab,32));
	outFields->push(HX_("show",fd,d4,52,4c));
	outFields->push(HX_("menuItems",e1,15,e5,5c));
	outFields->push(HX_("crediticons",01,10,ab,2e));
	outFields->push(HX_("fixdiff",5a,2c,85,e7));
	outFields->push(HX_("optionShit",d5,2d,ee,91));
	outFields->push(HX_("newGaming",2f,8a,ad,0e));
	outFields->push(HX_("newGaming2",23,5f,2b,c9));
	outFields->push(HX_("newInput",8a,07,68,e1));
	outFields->push(HX_("logo",6b,9f,b7,47));
	outFields->push(HX_("fumo",71,ea,c4,43));
	outFields->push(HX_("menu_character",c9,79,1a,2c));
	outFields->push(HX_("magenta",29,ba,9d,0e));
	outFields->push(HX_("camFollow",e0,6e,47,22));
	outFields->push(HX_("backdrop",d6,b1,96,1a));
	outFields->push(HX_("logoBl",15,ca,6e,5c));
	outFields->push(HX_("grpLocks",03,78,f1,5b));
	outFields->push(HX_("difficultySelectors",b9,fa,53,88));
	outFields->push(HX_("sprDifficulty",d0,6b,83,ba));
	outFields->push(HX_("leftArrow",42,68,6f,3a));
	outFields->push(HX_("rightArrow",4d,60,54,28));
	outFields->push(HX_("selectedSomethin",c8,ec,fb,99));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MainMenuState_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(MainMenuState_obj,curSelected),HX_("curSelected",fb,eb,ab,32)},
	{::hx::fsString,(int)offsetof(MainMenuState_obj,show),HX_("show",fd,d4,52,4c)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(MainMenuState_obj,menuItems),HX_("menuItems",e1,15,e5,5c)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(MainMenuState_obj,crediticons),HX_("crediticons",01,10,ab,2e)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(MainMenuState_obj,fixdiff),HX_("fixdiff",5a,2c,85,e7)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(MainMenuState_obj,optionShit),HX_("optionShit",d5,2d,ee,91)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(MainMenuState_obj,newGaming),HX_("newGaming",2f,8a,ad,0e)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(MainMenuState_obj,newGaming2),HX_("newGaming2",23,5f,2b,c9)},
	{::hx::fsBool,(int)offsetof(MainMenuState_obj,newInput),HX_("newInput",8a,07,68,e1)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(MainMenuState_obj,logo),HX_("logo",6b,9f,b7,47)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(MainMenuState_obj,fumo),HX_("fumo",71,ea,c4,43)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(MainMenuState_obj,menu_character),HX_("menu_character",c9,79,1a,2c)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(MainMenuState_obj,magenta),HX_("magenta",29,ba,9d,0e)},
	{::hx::fsObject /*  ::flixel::FlxObject */ ,(int)offsetof(MainMenuState_obj,camFollow),HX_("camFollow",e0,6e,47,22)},
	{::hx::fsObject /*  ::flixel::addons::display::FlxBackdrop */ ,(int)offsetof(MainMenuState_obj,backdrop),HX_("backdrop",d6,b1,96,1a)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(MainMenuState_obj,logoBl),HX_("logoBl",15,ca,6e,5c)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(MainMenuState_obj,grpLocks),HX_("grpLocks",03,78,f1,5b)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(MainMenuState_obj,difficultySelectors),HX_("difficultySelectors",b9,fa,53,88)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(MainMenuState_obj,sprDifficulty),HX_("sprDifficulty",d0,6b,83,ba)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(MainMenuState_obj,leftArrow),HX_("leftArrow",42,68,6f,3a)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(MainMenuState_obj,rightArrow),HX_("rightArrow",4d,60,54,28)},
	{::hx::fsBool,(int)offsetof(MainMenuState_obj,selectedSomethin),HX_("selectedSomethin",c8,ec,fb,99)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo MainMenuState_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &MainMenuState_obj::kadeEngineVer,HX_("kadeEngineVer",2a,26,b2,03)},
	{::hx::fsString,(void *) &MainMenuState_obj::nightly,HX_("nightly",65,3e,0e,6d)},
	{::hx::fsBool,(void *) &MainMenuState_obj::firstStart,HX_("firstStart",12,be,e9,c1)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String MainMenuState_obj_sMemberFields[] = {
	HX_("curSelected",fb,eb,ab,32),
	HX_("show",fd,d4,52,4c),
	HX_("menuItems",e1,15,e5,5c),
	HX_("crediticons",01,10,ab,2e),
	HX_("fixdiff",5a,2c,85,e7),
	HX_("optionShit",d5,2d,ee,91),
	HX_("newGaming",2f,8a,ad,0e),
	HX_("newGaming2",23,5f,2b,c9),
	HX_("newInput",8a,07,68,e1),
	HX_("logo",6b,9f,b7,47),
	HX_("fumo",71,ea,c4,43),
	HX_("menu_character",c9,79,1a,2c),
	HX_("magenta",29,ba,9d,0e),
	HX_("camFollow",e0,6e,47,22),
	HX_("backdrop",d6,b1,96,1a),
	HX_("logoBl",15,ca,6e,5c),
	HX_("grpLocks",03,78,f1,5b),
	HX_("difficultySelectors",b9,fa,53,88),
	HX_("sprDifficulty",d0,6b,83,ba),
	HX_("leftArrow",42,68,6f,3a),
	HX_("rightArrow",4d,60,54,28),
	HX_("create",fc,66,0f,7c),
	HX_("selectedSomethin",c8,ec,fb,99),
	HX_("update",09,86,05,87),
	HX_("goToState",4e,a5,e1,c9),
	HX_("changeItem",a3,fa,08,20),
	HX_("beatHit",7d,ea,04,74),
	::String(null()) };

static void MainMenuState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MainMenuState_obj::kadeEngineVer,"kadeEngineVer");
	HX_MARK_MEMBER_NAME(MainMenuState_obj::nightly,"nightly");
	HX_MARK_MEMBER_NAME(MainMenuState_obj::firstStart,"firstStart");
};

#ifdef HXCPP_VISIT_ALLOCS
static void MainMenuState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MainMenuState_obj::kadeEngineVer,"kadeEngineVer");
	HX_VISIT_MEMBER_NAME(MainMenuState_obj::nightly,"nightly");
	HX_VISIT_MEMBER_NAME(MainMenuState_obj::firstStart,"firstStart");
};

#endif

::hx::Class MainMenuState_obj::__mClass;

static ::String MainMenuState_obj_sStaticFields[] = {
	HX_("kadeEngineVer",2a,26,b2,03),
	HX_("nightly",65,3e,0e,6d),
	HX_("firstStart",12,be,e9,c1),
	::String(null())
};

void MainMenuState_obj::__register()
{
	MainMenuState_obj _hx_dummy;
	MainMenuState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("MainMenuState",59,88,5e,20);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &MainMenuState_obj::__GetStatic;
	__mClass->mSetStaticField = &MainMenuState_obj::__SetStatic;
	__mClass->mMarkFunc = MainMenuState_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(MainMenuState_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MainMenuState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MainMenuState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = MainMenuState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MainMenuState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MainMenuState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void MainMenuState_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_b0351dbbcbe2d566_30_boot)
HXDLIN(  30)		kadeEngineVer = (HX_("1.4.2",bb,da,31,55) + ::MainMenuState_obj::nightly);
            	}
{
            	HX_STACKFRAME(&_hx_pos_b0351dbbcbe2d566_31_boot)
HXDLIN(  31)		nightly = HX_("",00,00,00,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_b0351dbbcbe2d566_40_boot)
HXDLIN(  40)		firstStart = true;
            	}
}

