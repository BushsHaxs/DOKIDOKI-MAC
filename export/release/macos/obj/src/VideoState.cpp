#include <hxcpp.h>

#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_GlobalVideo
#include <GlobalVideo.h>
#endif
#ifndef INCLUDED_LangUtil
#include <LangUtil.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_PlayerSettings
#include <PlayerSettings.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_VideoState
#include <VideoState.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_db9755626f9b4c83_18_new,"VideoState","new",0xa15b6ba8,"VideoState.new","VideoState.hx",18,0x4a31c0c8)
HX_LOCAL_STACK_FRAME(_hx_pos_db9755626f9b4c83_47_create,"VideoState","create",0x9d1208b4,"VideoState.create","VideoState.hx",47,0x4a31c0c8)
HX_LOCAL_STACK_FRAME(_hx_pos_db9755626f9b4c83_107_update,"VideoState","update",0xa80827c1,"VideoState.update","VideoState.hx",107,0x4a31c0c8)

void VideoState_obj::__construct(::String source, ::flixel::FlxState toTrans,::hx::Null< bool >  __o_autopause){
            		bool autopause = __o_autopause.Default(false);
            	HX_STACKFRAME(&_hx_pos_db9755626f9b4c83_18_new)
HXLINE(  34)		this->musicPaused = false;
HXLINE(  33)		this->autoPause = false;
HXLINE(  32)		this->pauseText = HX_("Press P To Pause/Unpause",8c,59,2b,73);
HXLINE(  31)		this->doShit = false;
HXLINE(  30)		this->defaultText = HX_("",00,00,00,00);
HXLINE(  29)		this->videoFrames = 0;
HXLINE(  28)		this->prevSoundMultiplier = ((Float)1);
HXLINE(  27)		this->soundMultiplier = ((Float)1);
HXLINE(  26)		this->useSound = false;
HXLINE(  24)		this->notDone = true;
HXLINE(  23)		this->fuckingVolume = ((Float)1);
HXLINE(  20)		this->leSource = HX_("",00,00,00,00);
HXLINE(  38)		super::__construct(null(),null());
HXLINE(  40)		this->autoPause = autopause;
HXLINE(  42)		this->leSource = source;
HXLINE(  43)		this->transClass = toTrans;
            	}

Dynamic VideoState_obj::__CreateEmpty() { return new VideoState_obj; }

void *VideoState_obj::_hx_vtable = 0;

Dynamic VideoState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< VideoState_obj > _hx_result = new VideoState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool VideoState_obj::_hx_isInstanceOf(int inClassId) {
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
			return inClassId==(int)0x6e4dda76 || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

void VideoState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_db9755626f9b4c83_47_create)
HXLINE(  48)		this->super::create();
HXLINE(  49)		::flixel::FlxG_obj::autoPause = false;
HXLINE(  50)		this->doShit = false;
HXLINE(  52)		if (::GlobalVideo_obj::isWebm) {
HXLINE(  53)			this->videoFrames = ( (int)(::Std_obj::parseInt(::openfl::utils::Assets_obj::getText(::StringTools_obj::replace(this->leSource,HX_(".webm",87,0c,64,cb),HX_(".txt",02,3f,c0,1e))))) );
            		}
HXLINE(  55)		this->fuckingVolume = ::flixel::FlxG_obj::sound->music->_volume;
HXLINE(  56)		::flixel::FlxG_obj::sound->music->set_volume(( (Float)(0) ));
HXLINE(  57)		bool isHTML = false;
HXLINE(  61)		 ::flixel::FlxSprite bg =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null())->makeGraphic(::flixel::FlxG_obj::width,::flixel::FlxG_obj::height,-16777216,null(),null());
HXLINE(  62)		this->add(bg);
HXLINE(  63)		::String html5Text = HX_("",00,00,00,00);
HXLINE(  65)		if (isHTML) {
HXLINE(  66)			html5Text = HX_("",00,00,00,00);
            		}
HXLINE(  68)		this->defaultText = (HX_("",00,00,00,00) + html5Text);
HXLINE(  69)		this->txt =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,0,0,::flixel::FlxG_obj::width,this->defaultText,32,null());
HXLINE(  70)		 ::flixel::text::FlxText _hx_tmp = this->txt;
HXDLIN(  70)		_hx_tmp->setFormat(::LangUtil_obj::getFont(null()),32,-1,HX_("center",d5,25,db,05),null(),null(),null());
HXLINE(  71)		this->txt->screenCenter(null());
HXLINE(  72)		this->add(this->txt);
HXLINE(  74)		if (::GlobalVideo_obj::isWebm) {
HXLINE(  76)			bool _hx_tmp;
HXDLIN(  76)			if (!(::openfl::utils::Assets_obj::exists(::StringTools_obj::replace(this->leSource,HX_(".webm",87,0c,64,cb),HX_(".ogg",e1,64,bc,1e)),HX_("MUSIC",85,08,49,8e)))) {
HXLINE(  76)				_hx_tmp = ::openfl::utils::Assets_obj::exists(::StringTools_obj::replace(this->leSource,HX_(".webm",87,0c,64,cb),HX_(".ogg",e1,64,bc,1e)),HX_("SOUND",af,c4,ba,fe));
            			}
            			else {
HXLINE(  76)				_hx_tmp = true;
            			}
HXDLIN(  76)			if (_hx_tmp) {
HXLINE(  78)				this->useSound = true;
HXLINE(  79)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(  79)				this->vidSound = _hx_tmp->play(::StringTools_obj::replace(this->leSource,HX_(".webm",87,0c,64,cb),HX_(".ogg",e1,64,bc,1e)),null(),null(),null(),null(),null());
            			}
            		}
HXLINE(  83)		::GlobalVideo_obj::get()->__Field(HX_("source",db,b0,31,32),::hx::paccDynamic)(this->leSource);
HXLINE(  84)		::GlobalVideo_obj::get()->__Field(HX_("clearPause",29,16,62,92),::hx::paccDynamic)();
HXLINE(  86)		if (::GlobalVideo_obj::isWebm) {
HXLINE(  87)			::GlobalVideo_obj::get()->__Field(HX_("updatePlayer",4a,92,7c,37),::hx::paccDynamic)();
            		}
HXLINE(  89)		::GlobalVideo_obj::get()->__Field(HX_("show",fd,d4,52,4c),::hx::paccDynamic)();
HXLINE(  91)		if (::GlobalVideo_obj::isWebm) {
HXLINE(  92)			::GlobalVideo_obj::get()->__Field(HX_("restart",cf,c7,a5,6a),::hx::paccDynamic)();
            		}
            		else {
HXLINE(  94)			::GlobalVideo_obj::get()->__Field(HX_("play",f4,2d,5a,4a),::hx::paccDynamic)();
            		}
HXLINE(  96)		this->vidSound->set_time((this->vidSound->_length * this->soundMultiplier));
HXLINE(  97)		this->doShit = true;
HXLINE(  99)		bool _hx_tmp1;
HXDLIN(  99)		bool _hx_tmp2;
HXDLIN(  99)		if (this->autoPause) {
HXLINE(  99)			_hx_tmp2 = ::hx::IsNotNull( ::flixel::FlxG_obj::sound->music );
            		}
            		else {
HXLINE(  99)			_hx_tmp2 = false;
            		}
HXDLIN(  99)		if (_hx_tmp2) {
HXLINE(  99)			_hx_tmp1 = ::hx::IsNotNull( ::flixel::FlxG_obj::sound->music->_channel );
            		}
            		else {
HXLINE(  99)			_hx_tmp1 = false;
            		}
HXDLIN(  99)		if (_hx_tmp1) {
HXLINE( 101)			this->musicPaused = true;
HXLINE( 102)			::flixel::FlxG_obj::sound->music->pause();
            		}
            	}


void VideoState_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_db9755626f9b4c83_107_update)
HXLINE( 108)		this->super::update(elapsed);
HXLINE( 110)		if (this->useSound) {
HXLINE( 112)			bool wasFuckingHit = ( (bool)( ::Dynamic(::GlobalVideo_obj::get()->__Field(HX_("webm",59,5d,f5,4e),::hx::paccDynamic))->__Field(HX_("wasHitOnce",4b,03,49,ae),::hx::paccDynamic)) );
HXLINE( 113)			this->soundMultiplier = (( (Float)( ::Dynamic(::GlobalVideo_obj::get()->__Field(HX_("webm",59,5d,f5,4e),::hx::paccDynamic))->__Field(HX_("renderedCount",5a,ef,d4,6f),::hx::paccDynamic)) ) / ( (Float)(this->videoFrames) ));
HXLINE( 115)			if ((this->soundMultiplier > 1)) {
HXLINE( 116)				this->soundMultiplier = ( (Float)(1) );
            			}
HXLINE( 118)			if ((this->soundMultiplier < 0)) {
HXLINE( 119)				this->soundMultiplier = ( (Float)(0) );
            			}
HXLINE( 121)			if (this->doShit) {
HXLINE( 123)				Float compareShit = ( (Float)(50) );
HXLINE( 124)				bool _hx_tmp;
HXDLIN( 124)				if (!((this->vidSound->_time >= ((this->vidSound->_length * this->soundMultiplier) + compareShit)))) {
HXLINE( 124)					_hx_tmp = (this->vidSound->_time <= ((this->vidSound->_length * this->soundMultiplier) - compareShit));
            				}
            				else {
HXLINE( 124)					_hx_tmp = true;
            				}
HXDLIN( 124)				if (_hx_tmp) {
HXLINE( 126)					this->vidSound->set_time((this->vidSound->_length * this->soundMultiplier));
            				}
            			}
HXLINE( 129)			if (wasFuckingHit) {
HXLINE( 131)				if ((this->soundMultiplier == 0)) {
HXLINE( 133)					if ((this->prevSoundMultiplier != 0)) {
HXLINE( 135)						this->vidSound->pause();
HXLINE( 136)						this->vidSound->set_time(( (Float)(0) ));
            					}
            				}
            				else {
HXLINE( 141)					if ((this->prevSoundMultiplier == 0)) {
HXLINE( 143)						this->vidSound->resume();
HXLINE( 144)						this->vidSound->set_time((this->vidSound->_length * this->soundMultiplier));
            					}
            				}
HXLINE( 148)				this->prevSoundMultiplier = this->soundMultiplier;
            			}
            		}
HXLINE( 152)		if (this->notDone) {
HXLINE( 153)			::flixel::FlxG_obj::sound->music->set_volume(( (Float)(0) ));
            		}
HXLINE( 155)		::GlobalVideo_obj::get()->__Field(HX_("update",09,86,05,87),::hx::paccDynamic)(elapsed);
HXLINE( 157)		bool _hx_tmp;
HXDLIN( 157)		bool _hx_tmp1;
HXDLIN( 157)		bool _hx_tmp2;
HXDLIN( 157)		bool _hx_tmp3;
HXDLIN( 157)		if (!(::PlayState_obj::isStoryMode)) {
HXLINE( 157)			_hx_tmp3 = ::PlayerSettings_obj::player1->controls->_accept->check();
            		}
            		else {
HXLINE( 157)			_hx_tmp3 = false;
            		}
HXDLIN( 157)		if (!(_hx_tmp3)) {
HXLINE( 157)			_hx_tmp2 = ( (bool)(::GlobalVideo_obj::get()->__Field(HX_("ended",fa,48,7a,70),::hx::paccDynamic)) );
            		}
            		else {
HXLINE( 157)			_hx_tmp2 = true;
            		}
HXDLIN( 157)		if (!(_hx_tmp2)) {
HXLINE( 157)			_hx_tmp1 = ( (bool)(::GlobalVideo_obj::get()->__Field(HX_("stopped",0d,d2,61,43),::hx::paccDynamic)) );
            		}
            		else {
HXLINE( 157)			_hx_tmp1 = true;
            		}
HXDLIN( 157)		if (!(_hx_tmp1)) {
HXLINE( 158)			bool _hx_tmp1;
HXDLIN( 158)			if (::PlayState_obj::isStoryMode) {
HXLINE( 158)				_hx_tmp1 = ( (bool)(::GlobalVideo_obj::get()->__Field(HX_("ended",fa,48,7a,70),::hx::paccDynamic)) );
            			}
            			else {
HXLINE( 158)				_hx_tmp1 = false;
            			}
HXDLIN( 158)			if (!(_hx_tmp1)) {
HXLINE( 157)				_hx_tmp = ( (bool)(::GlobalVideo_obj::get()->__Field(HX_("stopped",0d,d2,61,43),::hx::paccDynamic)) );
            			}
            			else {
HXLINE( 157)				_hx_tmp = true;
            			}
            		}
            		else {
HXLINE( 157)			_hx_tmp = true;
            		}
HXDLIN( 157)		if (_hx_tmp) {
HXLINE( 160)			this->txt->set_visible(false);
HXLINE( 161)			::GlobalVideo_obj::get()->__Field(HX_("hide",c2,34,0e,45),::hx::paccDynamic)();
HXLINE( 162)			::GlobalVideo_obj::get()->__Field(HX_("stop",02,f0,5b,4c),::hx::paccDynamic)();
            		}
HXLINE( 165)		bool _hx_tmp4;
HXDLIN( 165)		bool _hx_tmp5;
HXDLIN( 165)		bool _hx_tmp6;
HXDLIN( 165)		if (!(::PlayState_obj::isStoryMode)) {
HXLINE( 165)			_hx_tmp6 = ::PlayerSettings_obj::player1->controls->_accept->check();
            		}
            		else {
HXLINE( 165)			_hx_tmp6 = false;
            		}
HXDLIN( 165)		if (!(_hx_tmp6)) {
HXLINE( 165)			_hx_tmp5 = ( (bool)(::GlobalVideo_obj::get()->__Field(HX_("ended",fa,48,7a,70),::hx::paccDynamic)) );
            		}
            		else {
HXLINE( 165)			_hx_tmp5 = true;
            		}
HXDLIN( 165)		if (!(_hx_tmp5)) {
HXLINE( 165)			if (::PlayState_obj::isStoryMode) {
HXLINE( 165)				_hx_tmp4 = ( (bool)(::GlobalVideo_obj::get()->__Field(HX_("ended",fa,48,7a,70),::hx::paccDynamic)) );
            			}
            			else {
HXLINE( 165)				_hx_tmp4 = false;
            			}
            		}
            		else {
HXLINE( 165)			_hx_tmp4 = true;
            		}
HXDLIN( 165)		if (_hx_tmp4) {
HXLINE( 167)			this->notDone = false;
HXLINE( 168)			::flixel::FlxG_obj::sound->music->set_volume(this->fuckingVolume);
HXLINE( 169)			this->txt->set_text(this->pauseText);
HXLINE( 170)			if (this->musicPaused) {
HXLINE( 172)				this->musicPaused = false;
HXLINE( 173)				::flixel::FlxG_obj::sound->music->resume();
            			}
HXLINE( 175)			::flixel::FlxG_obj::autoPause = true;
HXLINE( 176)			{
HXLINE( 176)				 ::flixel::FlxState nextState = this->transClass;
HXDLIN( 176)				if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 176)					::flixel::FlxG_obj::game->_requestedState = nextState;
            				}
            			}
            		}
HXLINE( 179)		bool _hx_tmp7;
HXDLIN( 179)		if (!(( (bool)(::GlobalVideo_obj::get()->__Field(HX_("played",53,eb,b8,37),::hx::paccDynamic)) ))) {
HXLINE( 179)			_hx_tmp7 = ( (bool)(::GlobalVideo_obj::get()->__Field(HX_("restarted",ee,f1,82,b5),::hx::paccDynamic)) );
            		}
            		else {
HXLINE( 179)			_hx_tmp7 = true;
            		}
HXDLIN( 179)		if (_hx_tmp7) {
HXLINE( 180)			::GlobalVideo_obj::get()->__Field(HX_("show",fd,d4,52,4c),::hx::paccDynamic)();
            		}
HXLINE( 182)		::GlobalVideo_obj::get()->__SetField(HX_("restarted",ee,f1,82,b5),false,::hx::paccDynamic);
HXLINE( 183)		::GlobalVideo_obj::get()->__SetField(HX_("played",53,eb,b8,37),false,::hx::paccDynamic);
HXLINE( 184)		::GlobalVideo_obj::get()->__SetField(HX_("stopped",0d,d2,61,43),false,::hx::paccDynamic);
HXLINE( 185)		::GlobalVideo_obj::get()->__SetField(HX_("ended",fa,48,7a,70),false,::hx::paccDynamic);
            	}



::hx::ObjectPtr< VideoState_obj > VideoState_obj::__new(::String source, ::flixel::FlxState toTrans,::hx::Null< bool >  __o_autopause) {
	::hx::ObjectPtr< VideoState_obj > __this = new VideoState_obj();
	__this->__construct(source,toTrans,__o_autopause);
	return __this;
}

::hx::ObjectPtr< VideoState_obj > VideoState_obj::__alloc(::hx::Ctx *_hx_ctx,::String source, ::flixel::FlxState toTrans,::hx::Null< bool >  __o_autopause) {
	VideoState_obj *__this = (VideoState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(VideoState_obj), true, "VideoState"));
	*(void **)__this = VideoState_obj::_hx_vtable;
	__this->__construct(source,toTrans,__o_autopause);
	return __this;
}

VideoState_obj::VideoState_obj()
{
}

void VideoState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(VideoState);
	HX_MARK_MEMBER_NAME(leSource,"leSource");
	HX_MARK_MEMBER_NAME(transClass,"transClass");
	HX_MARK_MEMBER_NAME(txt,"txt");
	HX_MARK_MEMBER_NAME(fuckingVolume,"fuckingVolume");
	HX_MARK_MEMBER_NAME(notDone,"notDone");
	HX_MARK_MEMBER_NAME(vidSound,"vidSound");
	HX_MARK_MEMBER_NAME(useSound,"useSound");
	HX_MARK_MEMBER_NAME(soundMultiplier,"soundMultiplier");
	HX_MARK_MEMBER_NAME(prevSoundMultiplier,"prevSoundMultiplier");
	HX_MARK_MEMBER_NAME(videoFrames,"videoFrames");
	HX_MARK_MEMBER_NAME(defaultText,"defaultText");
	HX_MARK_MEMBER_NAME(doShit,"doShit");
	HX_MARK_MEMBER_NAME(pauseText,"pauseText");
	HX_MARK_MEMBER_NAME(autoPause,"autoPause");
	HX_MARK_MEMBER_NAME(musicPaused,"musicPaused");
	 ::MusicBeatState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void VideoState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(leSource,"leSource");
	HX_VISIT_MEMBER_NAME(transClass,"transClass");
	HX_VISIT_MEMBER_NAME(txt,"txt");
	HX_VISIT_MEMBER_NAME(fuckingVolume,"fuckingVolume");
	HX_VISIT_MEMBER_NAME(notDone,"notDone");
	HX_VISIT_MEMBER_NAME(vidSound,"vidSound");
	HX_VISIT_MEMBER_NAME(useSound,"useSound");
	HX_VISIT_MEMBER_NAME(soundMultiplier,"soundMultiplier");
	HX_VISIT_MEMBER_NAME(prevSoundMultiplier,"prevSoundMultiplier");
	HX_VISIT_MEMBER_NAME(videoFrames,"videoFrames");
	HX_VISIT_MEMBER_NAME(defaultText,"defaultText");
	HX_VISIT_MEMBER_NAME(doShit,"doShit");
	HX_VISIT_MEMBER_NAME(pauseText,"pauseText");
	HX_VISIT_MEMBER_NAME(autoPause,"autoPause");
	HX_VISIT_MEMBER_NAME(musicPaused,"musicPaused");
	 ::MusicBeatState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val VideoState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"txt") ) { return ::hx::Val( txt ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"doShit") ) { return ::hx::Val( doShit ); }
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"notDone") ) { return ::hx::Val( notDone ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"leSource") ) { return ::hx::Val( leSource ); }
		if (HX_FIELD_EQ(inName,"vidSound") ) { return ::hx::Val( vidSound ); }
		if (HX_FIELD_EQ(inName,"useSound") ) { return ::hx::Val( useSound ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"pauseText") ) { return ::hx::Val( pauseText ); }
		if (HX_FIELD_EQ(inName,"autoPause") ) { return ::hx::Val( autoPause ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"transClass") ) { return ::hx::Val( transClass ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"videoFrames") ) { return ::hx::Val( videoFrames ); }
		if (HX_FIELD_EQ(inName,"defaultText") ) { return ::hx::Val( defaultText ); }
		if (HX_FIELD_EQ(inName,"musicPaused") ) { return ::hx::Val( musicPaused ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"fuckingVolume") ) { return ::hx::Val( fuckingVolume ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"soundMultiplier") ) { return ::hx::Val( soundMultiplier ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"prevSoundMultiplier") ) { return ::hx::Val( prevSoundMultiplier ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val VideoState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"txt") ) { txt=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"doShit") ) { doShit=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"notDone") ) { notDone=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"leSource") ) { leSource=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vidSound") ) { vidSound=inValue.Cast<  ::flixel::_hx_system::FlxSound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"useSound") ) { useSound=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"pauseText") ) { pauseText=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"autoPause") ) { autoPause=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"transClass") ) { transClass=inValue.Cast<  ::flixel::FlxState >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"videoFrames") ) { videoFrames=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"defaultText") ) { defaultText=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"musicPaused") ) { musicPaused=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"fuckingVolume") ) { fuckingVolume=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"soundMultiplier") ) { soundMultiplier=inValue.Cast< Float >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"prevSoundMultiplier") ) { prevSoundMultiplier=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void VideoState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("leSource",34,24,06,f0));
	outFields->push(HX_("transClass",f0,be,25,72));
	outFields->push(HX_("txt",70,6e,58,00));
	outFields->push(HX_("fuckingVolume",c5,2f,0e,74));
	outFields->push(HX_("notDone",35,7b,98,37));
	outFields->push(HX_("vidSound",3e,61,38,7b));
	outFields->push(HX_("useSound",08,ef,37,48));
	outFields->push(HX_("soundMultiplier",30,31,16,c6));
	outFields->push(HX_("prevSoundMultiplier",7d,43,40,07));
	outFields->push(HX_("videoFrames",81,46,2d,25));
	outFields->push(HX_("defaultText",0e,c6,b8,1e));
	outFields->push(HX_("doShit",eb,74,56,1c));
	outFields->push(HX_("pauseText",c3,82,60,51));
	outFields->push(HX_("autoPause",07,15,63,9b));
	outFields->push(HX_("musicPaused",33,0f,c5,31));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo VideoState_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(VideoState_obj,leSource),HX_("leSource",34,24,06,f0)},
	{::hx::fsObject /*  ::flixel::FlxState */ ,(int)offsetof(VideoState_obj,transClass),HX_("transClass",f0,be,25,72)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(VideoState_obj,txt),HX_("txt",70,6e,58,00)},
	{::hx::fsFloat,(int)offsetof(VideoState_obj,fuckingVolume),HX_("fuckingVolume",c5,2f,0e,74)},
	{::hx::fsBool,(int)offsetof(VideoState_obj,notDone),HX_("notDone",35,7b,98,37)},
	{::hx::fsObject /*  ::flixel::_hx_system::FlxSound */ ,(int)offsetof(VideoState_obj,vidSound),HX_("vidSound",3e,61,38,7b)},
	{::hx::fsBool,(int)offsetof(VideoState_obj,useSound),HX_("useSound",08,ef,37,48)},
	{::hx::fsFloat,(int)offsetof(VideoState_obj,soundMultiplier),HX_("soundMultiplier",30,31,16,c6)},
	{::hx::fsFloat,(int)offsetof(VideoState_obj,prevSoundMultiplier),HX_("prevSoundMultiplier",7d,43,40,07)},
	{::hx::fsInt,(int)offsetof(VideoState_obj,videoFrames),HX_("videoFrames",81,46,2d,25)},
	{::hx::fsString,(int)offsetof(VideoState_obj,defaultText),HX_("defaultText",0e,c6,b8,1e)},
	{::hx::fsBool,(int)offsetof(VideoState_obj,doShit),HX_("doShit",eb,74,56,1c)},
	{::hx::fsString,(int)offsetof(VideoState_obj,pauseText),HX_("pauseText",c3,82,60,51)},
	{::hx::fsBool,(int)offsetof(VideoState_obj,autoPause),HX_("autoPause",07,15,63,9b)},
	{::hx::fsBool,(int)offsetof(VideoState_obj,musicPaused),HX_("musicPaused",33,0f,c5,31)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *VideoState_obj_sStaticStorageInfo = 0;
#endif

static ::String VideoState_obj_sMemberFields[] = {
	HX_("leSource",34,24,06,f0),
	HX_("transClass",f0,be,25,72),
	HX_("txt",70,6e,58,00),
	HX_("fuckingVolume",c5,2f,0e,74),
	HX_("notDone",35,7b,98,37),
	HX_("vidSound",3e,61,38,7b),
	HX_("useSound",08,ef,37,48),
	HX_("soundMultiplier",30,31,16,c6),
	HX_("prevSoundMultiplier",7d,43,40,07),
	HX_("videoFrames",81,46,2d,25),
	HX_("defaultText",0e,c6,b8,1e),
	HX_("doShit",eb,74,56,1c),
	HX_("pauseText",c3,82,60,51),
	HX_("autoPause",07,15,63,9b),
	HX_("musicPaused",33,0f,c5,31),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class VideoState_obj::__mClass;

void VideoState_obj::__register()
{
	VideoState_obj _hx_dummy;
	VideoState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("VideoState",b6,b7,8a,56);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(VideoState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< VideoState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = VideoState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = VideoState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

