#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Alphabet
#include <Alphabet.h>
#endif
#ifndef INCLUDED_ChartingState
#include <ChartingState.h>
#endif
#ifndef INCLUDED_Conductor
#include <Conductor.h>
#endif
#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_CoolUtil
#include <CoolUtil.h>
#endif
#ifndef INCLUDED_FreeplayState
#include <FreeplayState.h>
#endif
#ifndef INCLUDED_HealthIcon
#include <HealthIcon.h>
#endif
#ifndef INCLUDED_Highscore
#include <Highscore.h>
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
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_PlayerSettings
#include <PlayerSettings.h>
#endif
#ifndef INCLUDED_Song
#include <Song.h>
#endif
#ifndef INCLUDED_SongMetadata
#include <SongMetadata.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
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
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_86166a84e8de7ace_16_new,"FreeplayState","new",0xc894eea3,"FreeplayState.new","FreeplayState.hx",16,0x0d86f62d)
HX_LOCAL_STACK_FRAME(_hx_pos_86166a84e8de7ace_49_create,"FreeplayState","create",0x931e5499,"FreeplayState.create","FreeplayState.hx",49,0x0d86f62d)
HX_LOCAL_STACK_FRAME(_hx_pos_86166a84e8de7ace_140_addSong,"FreeplayState","addSong",0x9e966259,"FreeplayState.addSong","FreeplayState.hx",140,0x0d86f62d)
HX_LOCAL_STACK_FRAME(_hx_pos_86166a84e8de7ace_144_addWeek,"FreeplayState","addWeek",0xa1339e78,"FreeplayState.addWeek","FreeplayState.hx",144,0x0d86f62d)
static const ::String _hx_array_data_b3f26131_7[] = {
	HX_("dad",47,36,4c,00),
};
HX_LOCAL_STACK_FRAME(_hx_pos_86166a84e8de7ace_159_update,"FreeplayState","update",0x9e1473a6,"FreeplayState.update","FreeplayState.hx",159,0x0d86f62d)
HX_LOCAL_STACK_FRAME(_hx_pos_86166a84e8de7ace_221_loadSong,"FreeplayState","loadSong",0xe7d343f8,"FreeplayState.loadSong","FreeplayState.hx",221,0x0d86f62d)
HX_LOCAL_STACK_FRAME(_hx_pos_86166a84e8de7ace_239_changeDiff,"FreeplayState","changeDiff",0x302511b2,"FreeplayState.changeDiff","FreeplayState.hx",239,0x0d86f62d)
HX_LOCAL_STACK_FRAME(_hx_pos_86166a84e8de7ace_277_changeSelection,"FreeplayState","changeSelection",0xbe8c8f7f,"FreeplayState.changeSelection","FreeplayState.hx",277,0x0d86f62d)
HX_LOCAL_STACK_FRAME(_hx_pos_86166a84e8de7ace_38_loadDiff,"FreeplayState","loadDiff",0xdde47c28,"FreeplayState.loadDiff","FreeplayState.hx",38,0x0d86f62d)
HX_LOCAL_STACK_FRAME(_hx_pos_86166a84e8de7ace_34_boot,"FreeplayState","boot",0xb1d4e08f,"FreeplayState.boot","FreeplayState.hx",34,0x0d86f62d)

void FreeplayState_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_86166a84e8de7ace_16_new)
HXLINE(  32)		this->iconArray = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  30)		this->curPlaying = false;
HXLINE(  27)		this->intendedScore = 0;
HXLINE(  26)		this->lerpScore = 0;
HXLINE(  23)		this->goku = false;
HXLINE(  22)		this->curDifficulty = 1;
HXLINE(  21)		this->curSelected = 0;
HXLINE(  18)		this->songs = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  16)		super::__construct(TransIn,TransOut);
            	}

Dynamic FreeplayState_obj::__CreateEmpty() { return new FreeplayState_obj; }

void *FreeplayState_obj::_hx_vtable = 0;

Dynamic FreeplayState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FreeplayState_obj > _hx_result = new FreeplayState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool FreeplayState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x5f09868d) {
		if (inClassId<=(int)0x2f064378) {
			if (inClassId<=(int)0x23a57bae) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x23a57bae;
			} else {
				return inClassId==(int)0x2f064378;
			}
		} else {
			return inClassId==(int)0x3f706236 || inClassId==(int)0x5f09868d;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x62817b24 || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

void FreeplayState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_86166a84e8de7ace_49_create)
HXLINE(  50)		::String library = null();
HXDLIN(  50)		::String initSonglist = ::Paths_obj::getPath((HX_("data/freeplaySonglist",38,e4,80,5e) + HX_(".txt",02,3f,c0,1e)),HX_("TEXT",ad,94,ba,37),library);
HXDLIN(  50)		::Array< ::String > initSonglist1 = ::CoolUtil_obj::coolTextFile(initSonglist);
HXLINE(  53)		{
HXLINE(  53)			int _g = 0;
HXDLIN(  53)			int _g1 = initSonglist1->length;
HXDLIN(  53)			while((_g < _g1)){
HXLINE(  53)				_g = (_g + 1);
HXDLIN(  53)				int i = (_g - 1);
HXLINE(  55)				::Array< ::String > data = initSonglist1->__get(i).split(HX_(":",3a,00,00,00));
HXLINE(  56)				::String data1 = data->__get(0);
HXDLIN(  56)				 ::Dynamic meta = ::Std_obj::parseInt(data->__get(2));
HXDLIN(  56)				 ::SongMetadata meta1 =  ::SongMetadata_obj::__alloc( HX_CTX ,data1,( (int)(meta) ),data->__get(1));
HXLINE(  58)				bool _hx_tmp;
HXDLIN(  58)				if (!(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("monibeaten",3c,53,44,8f),::hx::paccDynamic)) ))) {
HXLINE(  58)					_hx_tmp = (data->__get(0).toLowerCase() == HX_("your reality",23,d6,ee,f3));
            				}
            				else {
HXLINE(  58)					_hx_tmp = false;
            				}
HXDLIN(  58)				if (_hx_tmp) {
HXLINE(  59)					continue;
            				}
HXLINE(  61)				bool _hx_tmp1;
HXDLIN(  61)				 ::Dynamic _hx_tmp2 = ::Std_obj::parseInt(data->__get(2));
HXDLIN(  61)				if (!(::hx::IsLessEq( _hx_tmp2,(( (Float)(::flixel::FlxG_obj::save->data->__Field(HX_("weekUnlocked",37,64,c4,a5),::hx::paccDynamic)) ) - ( (Float)(1) )) ))) {
HXLINE(  61)					_hx_tmp1 = ::hx::IsEq( ::Std_obj::parseInt(data->__get(2)),1 );
            				}
            				else {
HXLINE(  61)					_hx_tmp1 = true;
            				}
HXDLIN(  61)				if (_hx_tmp1) {
HXLINE(  62)					this->songs->push(meta1);
            				}
HXLINE(  64)				::Array< ::Dynamic> diffs = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  65)				::FreeplayState_obj::loadDiff(0,meta1->songName,diffs);
HXLINE(  66)				::FreeplayState_obj::loadDiff(1,meta1->songName,diffs);
HXLINE(  67)				::FreeplayState_obj::loadDiff(2,meta1->songName,diffs);
HXLINE(  68)				::FreeplayState_obj::songData->set(meta1->songName,diffs);
            			}
            		}
HXLINE(  72)		bool isDebug = false;
HXLINE(  82)		 ::flixel::FlxSprite bg =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN(  82)		::String library1 = null();
HXDLIN(  82)		::String bg1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("menuBGBlue",de,35,e3,1e)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library1);
HXDLIN(  82)		 ::flixel::FlxSprite bg2 = bg->loadGraphic(bg1,null(),null(),null(),null(),null());
HXLINE(  83)		this->add(bg2);
HXLINE(  85)		this->grpSongs =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  86)		this->add(this->grpSongs);
HXLINE(  88)		{
HXLINE(  88)			int _g2 = 0;
HXDLIN(  88)			int _g3 = this->songs->length;
HXDLIN(  88)			while((_g2 < _g3)){
HXLINE(  88)				_g2 = (_g2 + 1);
HXDLIN(  88)				int i = (_g2 - 1);
HXLINE(  90)				 ::Alphabet songText =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(((70 * i) + 30)) ),this->songs->__get(i).StaticCast<  ::SongMetadata >()->songName,true,false);
HXLINE(  91)				songText->isMenuItem = true;
HXLINE(  92)				songText->targetY = ( (Float)(i) );
HXLINE(  93)				this->grpSongs->add(songText).StaticCast<  ::Alphabet >();
HXLINE(  95)				 ::HealthIcon icon =  ::HealthIcon_obj::__alloc( HX_CTX ,this->songs->__get(i).StaticCast<  ::SongMetadata >()->songCharacter,null());
HXLINE(  96)				icon->sprTracker = songText;
HXLINE(  99)				this->iconArray->push(icon);
HXLINE( 100)				this->add(icon);
            			}
            		}
HXLINE( 107)		this->scoreText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,(( (Float)(::flixel::FlxG_obj::width) ) * ((Float)0.7)),5,0,HX_("",00,00,00,00),32,null());
HXLINE( 109)		 ::flixel::text::FlxText _hx_tmp = this->scoreText;
HXDLIN( 109)		_hx_tmp->setFormat(::LangUtil_obj::getFont(null()),32,-1,HX_("left",07,08,b0,47),null(),null(),null());
HXLINE( 112)		 ::flixel::FlxSprite scoreBG =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,(this->scoreText->x - ( (Float)(6) )),0,null());
HXDLIN( 112)		 ::flixel::FlxSprite scoreBG1 = scoreBG->makeGraphic(::Std_obj::_hx_int((( (Float)(::flixel::FlxG_obj::width) ) * ((Float)0.35))),66,-16777216,null(),null());
HXLINE( 113)		scoreBG1->set_alpha(((Float)0.6));
HXLINE( 114)		this->add(scoreBG1);
HXLINE( 116)		this->diffText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,this->scoreText->x,(this->scoreText->y + 36),0,HX_("",00,00,00,00),24,null());
HXLINE( 117)		this->diffText->set_font(this->scoreText->_font);
HXLINE( 118)		this->add(this->diffText);
HXLINE( 120)		this->add(this->scoreText);
HXLINE( 122)		this->changeSelection(null());
HXLINE( 123)		this->changeDiff(null());
HXLINE( 127)		this->selector =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
HXLINE( 129)		this->selector->set_size(40);
HXLINE( 130)		this->selector->set_text(HX_(">",3e,00,00,00));
HXLINE( 133)		 ::Alphabet swag =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(1) ),( (Float)(0) ),HX_("swag",8a,2a,5e,4c),null(),null());
HXLINE( 135)		this->super::create();
            	}


void FreeplayState_obj::addSong(::String songName,int weekNum,::String songCharacter){
            	HX_GC_STACKFRAME(&_hx_pos_86166a84e8de7ace_140_addSong)
HXDLIN( 140)		::Array< ::Dynamic> _hx_tmp = this->songs;
HXDLIN( 140)		_hx_tmp->push( ::SongMetadata_obj::__alloc( HX_CTX ,songName,weekNum,songCharacter));
            	}


HX_DEFINE_DYNAMIC_FUNC3(FreeplayState_obj,addSong,(void))

void FreeplayState_obj::addWeek(::Array< ::String > songs,int weekNum,::Array< ::String > songCharacters){
            	HX_STACKFRAME(&_hx_pos_86166a84e8de7ace_144_addWeek)
HXLINE( 145)		if (::hx::IsNull( songCharacters )) {
HXLINE( 146)			songCharacters = ::Array_obj< ::String >::fromData( _hx_array_data_b3f26131_7,1);
            		}
HXLINE( 148)		int num = 0;
HXLINE( 149)		{
HXLINE( 149)			int _g = 0;
HXDLIN( 149)			while((_g < songs->length)){
HXLINE( 149)				::String song = songs->__get(_g);
HXDLIN( 149)				_g = (_g + 1);
HXLINE( 151)				this->addSong(song,weekNum,songCharacters->__get(num));
HXLINE( 153)				if ((songCharacters->length != 1)) {
HXLINE( 154)					num = (num + 1);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(FreeplayState_obj,addWeek,(void))

void FreeplayState_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_86166a84e8de7ace_159_update)
HXLINE( 160)		this->super::update(elapsed);
HXLINE( 162)		if ((::flixel::FlxG_obj::sound->music->_volume < ((Float)0.7))) {
HXLINE( 164)			 ::flixel::_hx_system::FlxSound fh = ::flixel::FlxG_obj::sound->music;
HXDLIN( 164)			fh->set_volume((fh->_volume + (((Float)0.5) * ::flixel::FlxG_obj::elapsed)));
            		}
HXLINE( 167)		Float a = ( (Float)(this->lerpScore) );
HXDLIN( 167)		this->lerpScore = ::Math_obj::floor((a + (((Float)0.4) * (( (Float)(this->intendedScore) ) - a))));
HXLINE( 169)		if ((::Math_obj::abs(( (Float)((this->lerpScore - this->intendedScore)) )) <= 10)) {
HXLINE( 170)			this->lerpScore = this->intendedScore;
            		}
HXLINE( 172)		 ::flixel::text::FlxText _hx_tmp = this->scoreText;
HXDLIN( 172)		::String _hx_tmp1 = (::LangUtil_obj::getString(HX_("cmnPB",76,6d,0b,49)) + HX_(":",3a,00,00,00));
HXDLIN( 172)		_hx_tmp->set_text((_hx_tmp1 + this->lerpScore));
HXLINE( 174)		bool upP = ::PlayerSettings_obj::player1->controls->_upP->check();
HXLINE( 175)		bool downP = ::PlayerSettings_obj::player1->controls->_downP->check();
HXLINE( 176)		bool accepted = ::PlayerSettings_obj::player1->controls->_accept->check();
HXLINE( 177)		 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 177)		bool charting = _this->keyManager->checkStatus(55,_this->status);
HXLINE( 179)		if (upP) {
HXLINE( 181)			this->changeSelection(-1);
            		}
HXLINE( 183)		if (downP) {
HXLINE( 185)			this->changeSelection(1);
            		}
HXLINE( 188)		::String _hx_switch_0 = this->songs->__get(this->curSelected).StaticCast<  ::SongMetadata >()->songName.toLowerCase();
            		if (  (_hx_switch_0==HX_("erb",55,07,4d,00)) ||  (_hx_switch_0==HX_("your reality",23,d6,ee,f3)) ){
HXLINE( 191)			if (!(this->goku)) {
HXLINE( 192)				this->goku = true;
            			}
HXLINE( 194)			this->curDifficulty = 1;
HXLINE( 195)			this->changeDiff(null());
HXLINE( 190)			goto _hx_goto_8;
            		}
            		/* default */{
HXLINE( 197)			if (this->goku) {
HXLINE( 199)				this->changeDiff(null());
HXLINE( 200)				this->goku = false;
            			}
HXLINE( 203)			if (::PlayerSettings_obj::player1->controls->_leftP->check()) {
HXLINE( 204)				this->changeDiff(-1);
            			}
HXLINE( 205)			if (::PlayerSettings_obj::player1->controls->_rightP->check()) {
HXLINE( 206)				this->changeDiff(1);
            			}
            		}
            		_hx_goto_8:;
HXLINE( 209)		if (::PlayerSettings_obj::player1->controls->_back->check()) {
HXLINE( 211)			 ::flixel::FlxState nextState =  ::MainMenuState_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 211)			if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 211)				::flixel::FlxG_obj::game->_requestedState = nextState;
            			}
            		}
HXLINE( 214)		if (accepted) {
HXLINE( 215)			this->loadSong(null());
            		}
            		else {
HXLINE( 216)			if (charting) {
HXLINE( 217)				this->loadSong(true);
            			}
            		}
            	}


void FreeplayState_obj::loadSong(::hx::Null< bool >  __o_isCharting){
            		bool isCharting = __o_isCharting.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_86166a84e8de7ace_221_loadSong)
HXLINE( 222)		::String poop = this->songs->__get(this->curSelected).StaticCast<  ::SongMetadata >()->songName.toLowerCase();
HXDLIN( 222)		::String poop1 = ::Highscore_obj::formatSong(poop,this->curDifficulty);
HXLINE( 224)		::haxe::Log_obj::trace(poop1,::hx::SourceInfo(HX_("source/FreeplayState.hx",21,2d,b0,ce),224,HX_("FreeplayState",31,61,f2,b3),HX_("loadSong",1b,f5,f7,bc)));
HXLINE( 226)		::PlayState_obj::SONG = ::Song_obj::loadFromJson(poop1,this->songs->__get(this->curSelected).StaticCast<  ::SongMetadata >()->songName.toLowerCase());
HXLINE( 227)		::PlayState_obj::isStoryMode = false;
HXLINE( 228)		::PlayState_obj::storyDifficulty = this->curDifficulty;
HXLINE( 229)		::PlayState_obj::storyWeek = this->songs->__get(this->curSelected).StaticCast<  ::SongMetadata >()->week;
HXLINE( 230)		::haxe::Log_obj::trace((HX_("CUR WEEK",b4,9a,a0,36) + ::PlayState_obj::storyWeek),::hx::SourceInfo(HX_("source/FreeplayState.hx",21,2d,b0,ce),230,HX_("FreeplayState",31,61,f2,b3),HX_("loadSong",1b,f5,f7,bc)));
HXLINE( 232)		if (isCharting) {
HXLINE( 233)			 ::flixel::FlxState nextState = ::LoadingState_obj::getNextState(( ( ::flixel::FlxState)( ::ChartingState_obj::__alloc( HX_CTX ,null(),null())) ),false);
HXDLIN( 233)			if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 233)				::flixel::FlxG_obj::game->_requestedState = nextState;
            			}
            		}
            		else {
HXLINE( 235)			 ::flixel::FlxState nextState = ::LoadingState_obj::getNextState(( ( ::flixel::FlxState)( ::PlayState_obj::__alloc( HX_CTX ,null(),null())) ),false);
HXDLIN( 235)			if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 235)				::flixel::FlxG_obj::game->_requestedState = nextState;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FreeplayState_obj,loadSong,(void))

void FreeplayState_obj::changeDiff(::hx::Null< int >  __o_change){
            		int change = __o_change.Default(0);
            	HX_STACKFRAME(&_hx_pos_86166a84e8de7ace_239_changeDiff)
HXLINE( 240)		 ::FreeplayState _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 240)		_hx_tmp->curDifficulty = (_hx_tmp->curDifficulty + change);
HXLINE( 242)		::String _hx_switch_0 = this->songs->__get(this->curSelected).StaticCast<  ::SongMetadata >()->songName.toLowerCase();
            		if (  (_hx_switch_0==HX_("erb",55,07,4d,00)) ||  (_hx_switch_0==HX_("your reality",23,d6,ee,f3)) ){
HXLINE( 245)			this->curDifficulty = 1;
HXDLIN( 245)			goto _hx_goto_11;
            		}
            		/* default */{
HXLINE( 247)			if ((this->curDifficulty < 0)) {
HXLINE( 248)				this->curDifficulty = 2;
            			}
HXLINE( 249)			if ((this->curDifficulty > 2)) {
HXLINE( 250)				this->curDifficulty = 0;
            			}
            		}
            		_hx_goto_11:;
HXLINE( 254)		this->intendedScore = ::Highscore_obj::getScore(this->songs->__get(this->curSelected).StaticCast<  ::SongMetadata >()->songName,this->curDifficulty);
HXLINE( 257)		switch((int)(this->curDifficulty)){
            			case (int)0: {
HXLINE( 260)				 ::flixel::text::FlxText _hx_tmp = this->diffText;
HXDLIN( 260)				_hx_tmp->set_text(::LangUtil_obj::getString(HX_("cmnEasy",a6,c8,ac,2d)));
            			}
            			break;
            			case (int)1: {
HXLINE( 262)				::String _hx_switch_1 = this->songs->__get(this->curSelected).StaticCast<  ::SongMetadata >()->songName.toLowerCase();
            				if (  (_hx_switch_1==HX_("erb",55,07,4d,00)) ){
HXLINE( 267)					this->diffText->set_text(HX_("GOKU",d2,59,2a,2f));
HXDLIN( 267)					goto _hx_goto_12;
            				}
            				if (  (_hx_switch_1==HX_("your reality",23,d6,ee,f3)) ){
HXLINE( 265)					this->diffText->set_text(HX_("YOUR REALITY",03,72,8b,b8));
HXDLIN( 265)					goto _hx_goto_12;
            				}
            				/* default */{
HXLINE( 269)					 ::flixel::text::FlxText _hx_tmp = this->diffText;
HXDLIN( 269)					_hx_tmp->set_text(::LangUtil_obj::getString(HX_("cmnNormal",cb,1f,0d,31)));
            				}
            				_hx_goto_12:;
            			}
            			break;
            			case (int)2: {
HXLINE( 272)				 ::flixel::text::FlxText _hx_tmp = this->diffText;
HXDLIN( 272)				_hx_tmp->set_text(::LangUtil_obj::getString(HX_("cmnHard",8f,6b,a8,2f)));
            			}
            			break;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FreeplayState_obj,changeDiff,(void))

void FreeplayState_obj::changeSelection(::hx::Null< int >  __o_change){
            		int change = __o_change.Default(0);
            	HX_STACKFRAME(&_hx_pos_86166a84e8de7ace_277_changeSelection)
HXLINE( 278)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 278)		_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),((Float)0.4),null(),null(),null(),null());
HXLINE( 280)		 ::FreeplayState _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 280)		_hx_tmp1->curSelected = (_hx_tmp1->curSelected + change);
HXLINE( 282)		if ((this->curSelected < 0)) {
HXLINE( 283)			this->curSelected = (this->songs->length - 1);
            		}
HXLINE( 284)		if ((this->curSelected >= this->songs->length)) {
HXLINE( 285)			this->curSelected = 0;
            		}
HXLINE( 290)		this->intendedScore = ::Highscore_obj::getScore(this->songs->__get(this->curSelected).StaticCast<  ::SongMetadata >()->songName,this->curDifficulty);
HXLINE( 295)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp2 = ::flixel::FlxG_obj::sound;
HXDLIN( 295)		::String result = (((HX_("songs:assets/songs/",c1,ed,e6,7e) + this->songs->__get(this->curSelected).StaticCast<  ::SongMetadata >()->songName.toLowerCase()) + HX_("/Inst.",f9,6e,13,1c)) + HX_("ogg",4f,94,54,00));
HXDLIN( 295)		::String _hx_tmp3;
HXDLIN( 295)		if (::Paths_obj::doesSoundAssetExist(result)) {
HXLINE( 295)			_hx_tmp3 = result;
            		}
            		else {
HXLINE( 295)			_hx_tmp3 = null();
            		}
HXDLIN( 295)		_hx_tmp2->playMusic(_hx_tmp3,0,null(),null());
HXLINE( 298)		 ::Dynamic hmm;
HXLINE( 299)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 301)			hmm = ::FreeplayState_obj::songData->get(this->songs->__get(this->curSelected).StaticCast<  ::SongMetadata >()->songName)->__GetItem(this->curDifficulty);
HXLINE( 302)			if (::hx::IsNotNull( hmm )) {
HXLINE( 303)				::Conductor_obj::changeBPM(( (Float)(hmm->__Field(HX_("bpm",df,be,4a,00),::hx::paccDynamic)) ));
            			}
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE( 309)		int bullShit = 0;
HXLINE( 311)		{
HXLINE( 311)			int _g = 0;
HXDLIN( 311)			int _g1 = this->iconArray->length;
HXDLIN( 311)			while((_g < _g1)){
HXLINE( 311)				_g = (_g + 1);
HXDLIN( 311)				int i = (_g - 1);
HXLINE( 313)				this->iconArray->__get(i).StaticCast<  ::HealthIcon >()->set_alpha(((Float)0.6));
            			}
            		}
HXLINE( 316)		this->iconArray->__get(this->curSelected).StaticCast<  ::HealthIcon >()->set_alpha(( (Float)(1) ));
HXLINE( 318)		{
HXLINE( 318)			int _g2 = 0;
HXDLIN( 318)			::Array< ::Dynamic> _g3 = this->grpSongs->members;
HXDLIN( 318)			while((_g2 < _g3->length)){
HXLINE( 318)				 ::Alphabet item = _g3->__get(_g2).StaticCast<  ::Alphabet >();
HXDLIN( 318)				_g2 = (_g2 + 1);
HXLINE( 320)				item->targetY = ( (Float)((bullShit - this->curSelected)) );
HXLINE( 321)				bullShit = (bullShit + 1);
HXLINE( 323)				item->set_alpha(((Float)0.6));
HXLINE( 326)				if ((item->targetY == 0)) {
HXLINE( 328)					item->set_alpha(( (Float)(1) ));
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FreeplayState_obj,changeSelection,(void))

 ::haxe::ds::StringMap FreeplayState_obj::songData;

void FreeplayState_obj::loadDiff(int diff,::String name,::Array< ::Dynamic> array){
            	HX_STACKFRAME(&_hx_pos_86166a84e8de7ace_38_loadDiff)
HXDLIN(  38)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(  40)			array->push(::Song_obj::loadFromJson(::Highscore_obj::formatSong(name,diff),name));
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FreeplayState_obj,loadDiff,(void))


::hx::ObjectPtr< FreeplayState_obj > FreeplayState_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< FreeplayState_obj > __this = new FreeplayState_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< FreeplayState_obj > FreeplayState_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	FreeplayState_obj *__this = (FreeplayState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FreeplayState_obj), true, "FreeplayState"));
	*(void **)__this = FreeplayState_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

FreeplayState_obj::FreeplayState_obj()
{
}

void FreeplayState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FreeplayState);
	HX_MARK_MEMBER_NAME(songs,"songs");
	HX_MARK_MEMBER_NAME(selector,"selector");
	HX_MARK_MEMBER_NAME(curSelected,"curSelected");
	HX_MARK_MEMBER_NAME(curDifficulty,"curDifficulty");
	HX_MARK_MEMBER_NAME(goku,"goku");
	HX_MARK_MEMBER_NAME(scoreText,"scoreText");
	HX_MARK_MEMBER_NAME(diffText,"diffText");
	HX_MARK_MEMBER_NAME(lerpScore,"lerpScore");
	HX_MARK_MEMBER_NAME(intendedScore,"intendedScore");
	HX_MARK_MEMBER_NAME(grpSongs,"grpSongs");
	HX_MARK_MEMBER_NAME(curPlaying,"curPlaying");
	HX_MARK_MEMBER_NAME(iconArray,"iconArray");
	 ::MusicBeatState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FreeplayState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(songs,"songs");
	HX_VISIT_MEMBER_NAME(selector,"selector");
	HX_VISIT_MEMBER_NAME(curSelected,"curSelected");
	HX_VISIT_MEMBER_NAME(curDifficulty,"curDifficulty");
	HX_VISIT_MEMBER_NAME(goku,"goku");
	HX_VISIT_MEMBER_NAME(scoreText,"scoreText");
	HX_VISIT_MEMBER_NAME(diffText,"diffText");
	HX_VISIT_MEMBER_NAME(lerpScore,"lerpScore");
	HX_VISIT_MEMBER_NAME(intendedScore,"intendedScore");
	HX_VISIT_MEMBER_NAME(grpSongs,"grpSongs");
	HX_VISIT_MEMBER_NAME(curPlaying,"curPlaying");
	HX_VISIT_MEMBER_NAME(iconArray,"iconArray");
	 ::MusicBeatState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FreeplayState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"goku") ) { return ::hx::Val( goku ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"songs") ) { return ::hx::Val( songs ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"addSong") ) { return ::hx::Val( addSong_dyn() ); }
		if (HX_FIELD_EQ(inName,"addWeek") ) { return ::hx::Val( addWeek_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"selector") ) { return ::hx::Val( selector ); }
		if (HX_FIELD_EQ(inName,"diffText") ) { return ::hx::Val( diffText ); }
		if (HX_FIELD_EQ(inName,"grpSongs") ) { return ::hx::Val( grpSongs ); }
		if (HX_FIELD_EQ(inName,"loadSong") ) { return ::hx::Val( loadSong_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"scoreText") ) { return ::hx::Val( scoreText ); }
		if (HX_FIELD_EQ(inName,"lerpScore") ) { return ::hx::Val( lerpScore ); }
		if (HX_FIELD_EQ(inName,"iconArray") ) { return ::hx::Val( iconArray ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"curPlaying") ) { return ::hx::Val( curPlaying ); }
		if (HX_FIELD_EQ(inName,"changeDiff") ) { return ::hx::Val( changeDiff_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { return ::hx::Val( curSelected ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"curDifficulty") ) { return ::hx::Val( curDifficulty ); }
		if (HX_FIELD_EQ(inName,"intendedScore") ) { return ::hx::Val( intendedScore ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"changeSelection") ) { return ::hx::Val( changeSelection_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool FreeplayState_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"songData") ) { outValue = ( songData ); return true; }
		if (HX_FIELD_EQ(inName,"loadDiff") ) { outValue = loadDiff_dyn(); return true; }
	}
	return false;
}

::hx::Val FreeplayState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"goku") ) { goku=inValue.Cast< bool >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"songs") ) { songs=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"selector") ) { selector=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"diffText") ) { diffText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"grpSongs") ) { grpSongs=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"scoreText") ) { scoreText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lerpScore") ) { lerpScore=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"iconArray") ) { iconArray=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"curPlaying") ) { curPlaying=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { curSelected=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"curDifficulty") ) { curDifficulty=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"intendedScore") ) { intendedScore=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FreeplayState_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"songData") ) { songData=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

void FreeplayState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("songs",fe,36,c7,80));
	outFields->push(HX_("selector",1f,33,6d,b1));
	outFields->push(HX_("curSelected",fb,eb,ab,32));
	outFields->push(HX_("curDifficulty",db,b7,38,a7));
	outFields->push(HX_("goku",d2,91,69,44));
	outFields->push(HX_("scoreText",1f,7d,bd,dc));
	outFields->push(HX_("diffText",52,3b,1b,21));
	outFields->push(HX_("lerpScore",5b,81,4d,e7));
	outFields->push(HX_("intendedScore",a7,fd,7c,89));
	outFields->push(HX_("grpSongs",d9,dc,c7,63));
	outFields->push(HX_("curPlaying",ce,61,01,95));
	outFields->push(HX_("iconArray",60,3f,53,5f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FreeplayState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(FreeplayState_obj,songs),HX_("songs",fe,36,c7,80)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(FreeplayState_obj,selector),HX_("selector",1f,33,6d,b1)},
	{::hx::fsInt,(int)offsetof(FreeplayState_obj,curSelected),HX_("curSelected",fb,eb,ab,32)},
	{::hx::fsInt,(int)offsetof(FreeplayState_obj,curDifficulty),HX_("curDifficulty",db,b7,38,a7)},
	{::hx::fsBool,(int)offsetof(FreeplayState_obj,goku),HX_("goku",d2,91,69,44)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(FreeplayState_obj,scoreText),HX_("scoreText",1f,7d,bd,dc)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(FreeplayState_obj,diffText),HX_("diffText",52,3b,1b,21)},
	{::hx::fsInt,(int)offsetof(FreeplayState_obj,lerpScore),HX_("lerpScore",5b,81,4d,e7)},
	{::hx::fsInt,(int)offsetof(FreeplayState_obj,intendedScore),HX_("intendedScore",a7,fd,7c,89)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(FreeplayState_obj,grpSongs),HX_("grpSongs",d9,dc,c7,63)},
	{::hx::fsBool,(int)offsetof(FreeplayState_obj,curPlaying),HX_("curPlaying",ce,61,01,95)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(FreeplayState_obj,iconArray),HX_("iconArray",60,3f,53,5f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo FreeplayState_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &FreeplayState_obj::songData,HX_("songData",9f,b4,3b,30)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String FreeplayState_obj_sMemberFields[] = {
	HX_("songs",fe,36,c7,80),
	HX_("selector",1f,33,6d,b1),
	HX_("curSelected",fb,eb,ab,32),
	HX_("curDifficulty",db,b7,38,a7),
	HX_("goku",d2,91,69,44),
	HX_("scoreText",1f,7d,bd,dc),
	HX_("diffText",52,3b,1b,21),
	HX_("lerpScore",5b,81,4d,e7),
	HX_("intendedScore",a7,fd,7c,89),
	HX_("grpSongs",d9,dc,c7,63),
	HX_("curPlaying",ce,61,01,95),
	HX_("iconArray",60,3f,53,5f),
	HX_("create",fc,66,0f,7c),
	HX_("addSong",96,66,95,88),
	HX_("addWeek",b5,a2,32,8b),
	HX_("update",09,86,05,87),
	HX_("loadSong",1b,f5,f7,bc),
	HX_("changeDiff",95,91,b2,1c),
	HX_("changeSelection",bc,98,b5,48),
	::String(null()) };

static void FreeplayState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FreeplayState_obj::songData,"songData");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FreeplayState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FreeplayState_obj::songData,"songData");
};

#endif

::hx::Class FreeplayState_obj::__mClass;

static ::String FreeplayState_obj_sStaticFields[] = {
	HX_("songData",9f,b4,3b,30),
	HX_("loadDiff",4b,2d,09,b3),
	::String(null())
};

void FreeplayState_obj::__register()
{
	FreeplayState_obj _hx_dummy;
	FreeplayState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("FreeplayState",31,61,f2,b3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FreeplayState_obj::__GetStatic;
	__mClass->mSetStaticField = &FreeplayState_obj::__SetStatic;
	__mClass->mMarkFunc = FreeplayState_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FreeplayState_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FreeplayState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FreeplayState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FreeplayState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FreeplayState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FreeplayState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FreeplayState_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_86166a84e8de7ace_34_boot)
HXDLIN(  34)		songData =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}
}

