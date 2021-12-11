#include <hxcpp.h>

#ifndef INCLUDED_Boyfriend
#include <Boyfriend.h>
#endif
#ifndef INCLUDED_Character
#include <Character.h>
#endif
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
#ifndef INCLUDED_GameOverSubstate
#include <GameOverSubstate.h>
#endif
#ifndef INCLUDED_HealthIcon
#include <HealthIcon.h>
#endif
#ifndef INCLUDED_LoadingState
#include <LoadingState.h>
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
#ifndef INCLUDED_Sys
#include <Sys.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
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
#ifndef INCLUDED_flixel_tweens_FlxEase
#include <flixel/tweens/FlxEase.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_VarTween
#include <flixel/tweens/misc/VarTween.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_b2ae8d30512793fc_13_new,"GameOverSubstate","new",0xba5265a9,"GameOverSubstate.new","GameOverSubstate.hx",13,0x01fbc1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_b2ae8d30512793fc_90_update,"GameOverSubstate","update",0x4cd2a460,"GameOverSubstate.update","GameOverSubstate.hx",90,0x01fbc1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_b2ae8d30512793fc_115_update,"GameOverSubstate","update",0x4cd2a460,"GameOverSubstate.update","GameOverSubstate.hx",115,0x01fbc1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_b2ae8d30512793fc_142_beatHit,"GameOverSubstate","beatHit",0xc1b25846,"GameOverSubstate.beatHit","GameOverSubstate.hx",142,0x01fbc1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_b2ae8d30512793fc_151_endBullshit,"GameOverSubstate","endBullshit",0xd9747d97,"GameOverSubstate.endBullshit","GameOverSubstate.hx",151,0x01fbc1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_b2ae8d30512793fc_162_endBullshit,"GameOverSubstate","endBullshit",0xd9747d97,"GameOverSubstate.endBullshit","GameOverSubstate.hx",162,0x01fbc1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_b2ae8d30512793fc_160_endBullshit,"GameOverSubstate","endBullshit",0xd9747d97,"GameOverSubstate.endBullshit","GameOverSubstate.hx",160,0x01fbc1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_b2ae8d30512793fc_20_boot,"GameOverSubstate","boot",0x45df8ec9,"GameOverSubstate.boot","GameOverSubstate.hx",20,0x01fbc1e7)

void GameOverSubstate_obj::__construct(Float x,Float y){
            	HX_GC_STACKFRAME(&_hx_pos_b2ae8d30512793fc_13_new)
HXLINE( 147)		this->isEnding = false;
HXLINE(  18)		this->stageSuffix = HX_("",00,00,00,00);
HXLINE(  24)		::String daStage = ::PlayState_obj::curStage;
HXLINE(  25)		::String daBf = HX_("",00,00,00,00);
HXLINE(  26)		::String _hx_switch_0 = ( (::String)(::PlayState_obj::SONG->__Field(HX_("player1",b0,09,15,8a),::hx::paccDynamic)) );
            		if (  (_hx_switch_0==HX_("bf-pixel",fd,03,90,37)) ||  (_hx_switch_0==HX_("bf-pixelangry",04,b0,b1,bb)) ){
HXLINE(  29)			this->stageSuffix = HX_("-pixel",39,03,b3,c0);
HXLINE(  30)			daBf = HX_("bf-pixel-dead",34,d0,3d,c4);
HXLINE(  28)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("playablesenpai",4a,23,22,fd)) ){
HXLINE(  32)			this->stageSuffix = HX_("-senpai",29,bf,d3,ba);
HXLINE(  33)			daBf = HX_("playablesenpai",4a,23,22,fd);
HXLINE(  31)			goto _hx_goto_0;
            		}
            		/* default */{
HXLINE(  35)			daBf = HX_("bf",c4,55,00,00);
            		}
            		_hx_goto_0:;
HXLINE(  38)		if (::hx::IsEq( ::PlayState_obj::SONG->__Field(HX_("player2",b1,09,15,8a),::hx::paccDynamic),HX_("bigmonika",b3,03,a4,b8) )) {
HXLINE(  41)			this->stageSuffix = HX_("",00,00,00,00);
HXLINE(  42)			daBf = HX_("bigmonika-dead",be,1c,41,44);
            		}
HXLINE(  45)		super::__construct();
HXLINE(  47)		::Conductor_obj::songPosition = ( (Float)(0) );
HXLINE(  49)		this->bf =  ::Boyfriend_obj::__alloc( HX_CTX ,x,y,daBf);
HXLINE(  50)		 ::Dynamic _hx_tmp;
HXDLIN(  50)		if (::hx::IsNull( this->bf )) {
HXLINE(  50)			_hx_tmp = HX_("bf if hella dumb",c9,cb,1a,58);
            		}
            		else {
HXLINE(  50)			_hx_tmp = HX_("bf has a big forehead",bd,d9,e7,b3);
            		}
HXDLIN(  50)		::haxe::Log_obj::trace(_hx_tmp,::hx::SourceInfo(HX_("source/GameOverSubstate.hx",73,5b,40,f3),50,HX_("GameOverSubstate",37,5d,9a,d7),HX_("new",60,d0,53,00)));
HXLINE(  51)		this->add(this->bf);
HXLINE(  53)		Float _hx_tmp1 = this->bf->getGraphicMidpoint(null())->x;
HXDLIN(  53)		this->camFollow =  ::flixel::FlxObject_obj::__alloc( HX_CTX ,_hx_tmp1,this->bf->getGraphicMidpoint(null())->y,1,1);
HXLINE(  54)		this->add(this->camFollow);
HXLINE(  56)		if (!(::GameOverSubstate_obj::crashdeath)) {
HXLINE(  58)			if (::hx::IsEq( ::PlayState_obj::SONG->__Field(HX_("player2",b1,09,15,8a),::hx::paccDynamic),HX_("bigmonika",b3,03,a4,b8) )) {
HXLINE(  59)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(  59)				_hx_tmp->play(::Paths_obj::sound(HX_("fnf_loss_sfx-bigmonika",d0,34,65,e0),null()),null(),null(),null(),null(),null());
            			}
            			else {
HXLINE(  61)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(  61)				_hx_tmp->play(::Paths_obj::sound((HX_("fnf_loss_sfx",6a,36,72,11) + this->stageSuffix),null()),null(),null(),null(),null(),null());
            			}
            		}
HXLINE(  63)		::Conductor_obj::changeBPM(( (Float)(100) ));
HXLINE(  67)		::flixel::FlxG_obj::camera->scroll->set(null(),null());
HXLINE(  68)		::flixel::FlxG_obj::camera->target = null();
HXLINE(  70)		if ((this->bf->curCharacter == HX_("playablesenpai",4a,23,22,fd))) {
HXLINE(  73)			 ::flixel::FlxObject _hx_tmp = this->camFollow;
HXDLIN(  73)			Float _hx_tmp1 = (this->bf->getGraphicMidpoint(null())->x - ( (Float)(74) ));
HXDLIN(  73)			_hx_tmp->setPosition(_hx_tmp1,(this->bf->getGraphicMidpoint(null())->y - ( (Float)(150) )));
HXLINE(  75)			::flixel::tweens::FlxTween_obj::tween(::flixel::FlxG_obj::camera, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("zoom",13,a3,f8,50),(::flixel::FlxG_obj::camera->zoom - ((Float)0.15)))),((Float)0.35), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quadOut_dyn())));
            		}
HXLINE(  80)		if (!(::GameOverSubstate_obj::crashdeath)) {
HXLINE(  81)			this->bf->playAnim(HX_("firstDeath",e4,d8,fc,14),null(),null(),null());
            		}
            		else {
HXLINE(  84)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(  84)			_hx_tmp->play(::Paths_obj::sound(HX_("JarringMonikaSound",b1,15,44,bb),null()),null(),null(),null(),null(),null());
HXLINE(  85)			this->bf->playAnim(HX_("crashDeath",cd,39,f8,a5),null(),null(),null());
            		}
            	}

Dynamic GameOverSubstate_obj::__CreateEmpty() { return new GameOverSubstate_obj; }

void *GameOverSubstate_obj::_hx_vtable = 0;

Dynamic GameOverSubstate_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GameOverSubstate_obj > _hx_result = new GameOverSubstate_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool GameOverSubstate_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x7c795c9f) {
		if (inClassId<=(int)0x62817b24) {
			if (inClassId<=(int)0x5661ffbf) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x5661ffbf;
			} else {
				return inClassId==(int)0x62817b24;
			}
		} else {
			return inClassId==(int)0x7c795c9f;
		}
	} else {
		if (inClassId<=(int)0x7d3f71b3) {
			return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7d3f71b3;
		} else {
			return inClassId==(int)0x7fce3ab0;
		}
	}
}

void GameOverSubstate_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_b2ae8d30512793fc_90_update)
HXLINE(  91)		this->super::update(elapsed);
HXLINE(  93)		bool _hx_tmp;
HXDLIN(  93)		if (::PlayerSettings_obj::player1->controls->_accept->check()) {
HXLINE(  93)			_hx_tmp = !(::GameOverSubstate_obj::crashdeath);
            		}
            		else {
HXLINE(  93)			_hx_tmp = false;
            		}
HXDLIN(  93)		if (_hx_tmp) {
HXLINE(  95)			this->endBullshit();
            		}
HXLINE(  98)		bool _hx_tmp1;
HXDLIN(  98)		if (::PlayerSettings_obj::player1->controls->_back->check()) {
HXLINE(  98)			_hx_tmp1 = !(::GameOverSubstate_obj::crashdeath);
            		}
            		else {
HXLINE(  98)			_hx_tmp1 = false;
            		}
HXDLIN(  98)		if (_hx_tmp1) {
HXLINE( 100)			{
HXLINE( 100)				 ::flixel::_hx_system::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN( 100)				_this->cleanup(_this->autoDestroy,true);
            			}
HXLINE( 101)			::HealthIcon_obj::isEpiphany = false;
HXLINE( 102)			::PlayState_obj::showCutscene = true;
HXLINE( 103)			if (::PlayState_obj::isStoryMode) {
HXLINE( 104)				 ::flixel::FlxState nextState =  ::DokiStoryState_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 104)				if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 104)					::flixel::FlxG_obj::game->_requestedState = nextState;
            				}
            			}
            			else {
HXLINE( 106)				 ::flixel::FlxState nextState =  ::DokiFreeplayState_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 106)				if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 106)					::flixel::FlxG_obj::game->_requestedState = nextState;
            				}
            			}
HXLINE( 107)			::PlayState_obj::loadRep = false;
            		}
HXLINE( 110)		bool _hx_tmp2;
HXDLIN( 110)		if ((this->bf->animation->_curAnim->name == HX_("crashDeath",cd,39,f8,a5))) {
HXLINE( 110)			_hx_tmp2 = this->bf->animation->get_finished();
            		}
            		else {
HXLINE( 110)			_hx_tmp2 = false;
            		}
HXDLIN( 110)		if (_hx_tmp2) {
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            			void _hx_run( ::flixel::util::FlxTimer timer){
            				HX_GC_STACKFRAME(&_hx_pos_b2ae8d30512793fc_115_update)
HXLINE( 115)				::Sys_obj::exit(0);
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE( 112)			 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(((Float).5), ::Dynamic(new _hx_Closure_0()),null());
            		}
HXLINE( 124)		bool _hx_tmp3;
HXDLIN( 124)		bool _hx_tmp4;
HXDLIN( 124)		if ((this->bf->animation->_curAnim->name == HX_("firstDeath",e4,d8,fc,14))) {
HXLINE( 124)			_hx_tmp4 = (this->bf->animation->_curAnim->curFrame == 12);
            		}
            		else {
HXLINE( 124)			_hx_tmp4 = false;
            		}
HXDLIN( 124)		if (_hx_tmp4) {
HXLINE( 124)			_hx_tmp3 = !(::GameOverSubstate_obj::crashdeath);
            		}
            		else {
HXLINE( 124)			_hx_tmp3 = false;
            		}
HXDLIN( 124)		if (_hx_tmp3) {
HXLINE( 126)			::flixel::FlxG_obj::camera->follow(this->camFollow,::flixel::FlxCameraFollowStyle_obj::LOCKON_dyn(),((Float)0.01));
            		}
HXLINE( 129)		bool _hx_tmp5;
HXDLIN( 129)		bool _hx_tmp6;
HXDLIN( 129)		if ((this->bf->animation->_curAnim->name == HX_("firstDeath",e4,d8,fc,14))) {
HXLINE( 129)			_hx_tmp6 = this->bf->animation->_curAnim->finished;
            		}
            		else {
HXLINE( 129)			_hx_tmp6 = false;
            		}
HXDLIN( 129)		if (_hx_tmp6) {
HXLINE( 129)			_hx_tmp5 = !(::GameOverSubstate_obj::crashdeath);
            		}
            		else {
HXLINE( 129)			_hx_tmp5 = false;
            		}
HXDLIN( 129)		if (_hx_tmp5) {
HXLINE( 131)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 131)			::String library = null();
HXDLIN( 131)			::String result = ::Paths_obj::getPath((((HX_("music/",ea,bf,1b,3f) + (HX_("gameOver",66,92,de,b5) + this->stageSuffix)) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)),HX_("MUSIC",85,08,49,8e),library);
HXDLIN( 131)			::String _hx_tmp1;
HXDLIN( 131)			if (::Paths_obj::doesSoundAssetExist(result)) {
HXLINE( 131)				_hx_tmp1 = result;
            			}
            			else {
HXLINE( 131)				_hx_tmp1 = null();
            			}
HXDLIN( 131)			_hx_tmp->playMusic(_hx_tmp1,null(),null(),null());
            		}
HXLINE( 134)		if (::hx::IsNotNull( ::flixel::FlxG_obj::sound->music->_channel )) {
HXLINE( 136)			::Conductor_obj::songPosition = ::flixel::FlxG_obj::sound->music->_time;
            		}
            	}


void GameOverSubstate_obj::beatHit(){
            	HX_STACKFRAME(&_hx_pos_b2ae8d30512793fc_142_beatHit)
HXDLIN( 142)		this->super::beatHit();
            	}


void GameOverSubstate_obj::endBullshit(){
            	HX_GC_STACKFRAME(&_hx_pos_b2ae8d30512793fc_151_endBullshit)
HXDLIN( 151)		if (!(this->isEnding)) {
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_1) HXARGC(1)
            			void _hx_run( ::flixel::util::FlxTimer tmr){
            				HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            				void _hx_run(){
            					HX_GC_STACKFRAME(&_hx_pos_b2ae8d30512793fc_162_endBullshit)
HXLINE( 162)					 ::flixel::FlxState nextState = ::LoadingState_obj::getNextState(( ( ::flixel::FlxState)( ::PlayState_obj::__alloc( HX_CTX ,null(),null())) ),false);
HXDLIN( 162)					if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 162)						::flixel::FlxG_obj::game->_requestedState = nextState;
            					}
            				}
            				HX_END_LOCAL_FUNC0((void))

            				HX_GC_STACKFRAME(&_hx_pos_b2ae8d30512793fc_160_endBullshit)
HXLINE( 160)				::flixel::FlxG_obj::camera->fade(-16777216,2,false, ::Dynamic(new _hx_Closure_0()),null());
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE( 153)			this->isEnding = true;
HXLINE( 154)			this->bf->playAnim(HX_("deathConfirm",2c,44,2b,12),true,null(),null());
HXLINE( 155)			{
HXLINE( 155)				 ::flixel::_hx_system::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN( 155)				_this->cleanup(_this->autoDestroy,true);
            			}
HXLINE( 156)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 156)			::String library = null();
HXDLIN( 156)			::String result = ::Paths_obj::getPath((((HX_("music/",ea,bf,1b,3f) + (HX_("gameOverEnd",15,2d,a9,8d) + this->stageSuffix)) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)),HX_("MUSIC",85,08,49,8e),library);
HXDLIN( 156)			::String _hx_tmp1;
HXDLIN( 156)			if (::Paths_obj::doesSoundAssetExist(result)) {
HXLINE( 156)				_hx_tmp1 = result;
            			}
            			else {
HXLINE( 156)				_hx_tmp1 = null();
            			}
HXDLIN( 156)			_hx_tmp->play(_hx_tmp1,null(),null(),null(),null(),null());
HXLINE( 158)			 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(((Float)0.7), ::Dynamic(new _hx_Closure_1()),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(GameOverSubstate_obj,endBullshit,(void))

bool GameOverSubstate_obj::crashdeath;


::hx::ObjectPtr< GameOverSubstate_obj > GameOverSubstate_obj::__new(Float x,Float y) {
	::hx::ObjectPtr< GameOverSubstate_obj > __this = new GameOverSubstate_obj();
	__this->__construct(x,y);
	return __this;
}

::hx::ObjectPtr< GameOverSubstate_obj > GameOverSubstate_obj::__alloc(::hx::Ctx *_hx_ctx,Float x,Float y) {
	GameOverSubstate_obj *__this = (GameOverSubstate_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GameOverSubstate_obj), true, "GameOverSubstate"));
	*(void **)__this = GameOverSubstate_obj::_hx_vtable;
	__this->__construct(x,y);
	return __this;
}

GameOverSubstate_obj::GameOverSubstate_obj()
{
}

void GameOverSubstate_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GameOverSubstate);
	HX_MARK_MEMBER_NAME(bf,"bf");
	HX_MARK_MEMBER_NAME(camFollow,"camFollow");
	HX_MARK_MEMBER_NAME(stageSuffix,"stageSuffix");
	HX_MARK_MEMBER_NAME(isEnding,"isEnding");
	 ::flixel::FlxSubState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GameOverSubstate_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bf,"bf");
	HX_VISIT_MEMBER_NAME(camFollow,"camFollow");
	HX_VISIT_MEMBER_NAME(stageSuffix,"stageSuffix");
	HX_VISIT_MEMBER_NAME(isEnding,"isEnding");
	 ::flixel::FlxSubState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val GameOverSubstate_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bf") ) { return ::hx::Val( bf ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"beatHit") ) { return ::hx::Val( beatHit_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isEnding") ) { return ::hx::Val( isEnding ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"camFollow") ) { return ::hx::Val( camFollow ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"stageSuffix") ) { return ::hx::Val( stageSuffix ); }
		if (HX_FIELD_EQ(inName,"endBullshit") ) { return ::hx::Val( endBullshit_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool GameOverSubstate_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"crashdeath") ) { outValue = ( crashdeath ); return true; }
	}
	return false;
}

::hx::Val GameOverSubstate_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bf") ) { bf=inValue.Cast<  ::Boyfriend >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isEnding") ) { isEnding=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"camFollow") ) { camFollow=inValue.Cast<  ::flixel::FlxObject >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"stageSuffix") ) { stageSuffix=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool GameOverSubstate_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"crashdeath") ) { crashdeath=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

void GameOverSubstate_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("bf",c4,55,00,00));
	outFields->push(HX_("camFollow",e0,6e,47,22));
	outFields->push(HX_("stageSuffix",2f,64,9f,2f));
	outFields->push(HX_("isEnding",71,3f,f2,52));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo GameOverSubstate_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Boyfriend */ ,(int)offsetof(GameOverSubstate_obj,bf),HX_("bf",c4,55,00,00)},
	{::hx::fsObject /*  ::flixel::FlxObject */ ,(int)offsetof(GameOverSubstate_obj,camFollow),HX_("camFollow",e0,6e,47,22)},
	{::hx::fsString,(int)offsetof(GameOverSubstate_obj,stageSuffix),HX_("stageSuffix",2f,64,9f,2f)},
	{::hx::fsBool,(int)offsetof(GameOverSubstate_obj,isEnding),HX_("isEnding",71,3f,f2,52)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo GameOverSubstate_obj_sStaticStorageInfo[] = {
	{::hx::fsBool,(void *) &GameOverSubstate_obj::crashdeath,HX_("crashdeath",ed,c9,ca,12)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String GameOverSubstate_obj_sMemberFields[] = {
	HX_("bf",c4,55,00,00),
	HX_("camFollow",e0,6e,47,22),
	HX_("stageSuffix",2f,64,9f,2f),
	HX_("update",09,86,05,87),
	HX_("beatHit",7d,ea,04,74),
	HX_("isEnding",71,3f,f2,52),
	HX_("endBullshit",4e,f7,81,48),
	::String(null()) };

static void GameOverSubstate_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GameOverSubstate_obj::crashdeath,"crashdeath");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GameOverSubstate_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GameOverSubstate_obj::crashdeath,"crashdeath");
};

#endif

::hx::Class GameOverSubstate_obj::__mClass;

static ::String GameOverSubstate_obj_sStaticFields[] = {
	HX_("crashdeath",ed,c9,ca,12),
	::String(null())
};

void GameOverSubstate_obj::__register()
{
	GameOverSubstate_obj _hx_dummy;
	GameOverSubstate_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("GameOverSubstate",37,5d,9a,d7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GameOverSubstate_obj::__GetStatic;
	__mClass->mSetStaticField = &GameOverSubstate_obj::__SetStatic;
	__mClass->mMarkFunc = GameOverSubstate_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(GameOverSubstate_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(GameOverSubstate_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< GameOverSubstate_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GameOverSubstate_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GameOverSubstate_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GameOverSubstate_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void GameOverSubstate_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_b2ae8d30512793fc_20_boot)
HXDLIN(  20)		crashdeath = false;
            	}
}

