#include <hxcpp.h>

#ifndef INCLUDED_Alphabet
#include <Alphabet.h>
#endif
#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_CoolUtil
#include <CoolUtil.h>
#endif
#ifndef INCLUDED_DokiFreeplayState
#include <DokiFreeplayState.h>
#endif
#ifndef INCLUDED_DokiStoryState
#include <DokiStoryState.h>
#endif
#ifndef INCLUDED_HealthIcon
#include <HealthIcon.h>
#endif
#ifndef INCLUDED_LangUtil
#include <LangUtil.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
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
#ifndef INCLUDED_PauseSubState
#include <PauseSubState.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_PlayerSettings
#include <PlayerSettings.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
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
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_CameraFrontEnd
#include <flixel/system/frontEnds/CameraFrontEnd.h>
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
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
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
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_17d383cbce329512_20_new,"PauseSubState","new",0x00d575d9,"PauseSubState.new","PauseSubState.hx",20,0x953dc7b7)
static const ::String _hx_array_data_08e59567_2[] = {
	HX_("Resume",cd,dd,18,3d),HX_("Restart Song",06,b6,fe,13),HX_("Exit to menu",82,87,9a,a9),
};
HX_LOCAL_STACK_FRAME(_hx_pos_17d383cbce329512_109_update,"PauseSubState","update",0x6d53d230,"PauseSubState.update","PauseSubState.hx",109,0x953dc7b7)
static const ::String _hx_array_data_08e59567_9[] = {
	HX_("Restart Song",06,b6,fe,13),HX_("Exit to menu",82,87,9a,a9),
};
static const ::String _hx_array_data_08e59567_10[] = {
	HX_("Resume",cd,dd,18,3d),HX_("Restart Song",06,b6,fe,13),HX_("Exit to menu",82,87,9a,a9),
};
static const ::String _hx_array_data_08e59567_11[] = {
	HX_("Restart Song",06,b6,fe,13),HX_("Exit to menu",82,87,9a,a9),
};
static const ::String _hx_array_data_08e59567_12[] = {
	HX_("Resume",cd,dd,18,3d),HX_("Restart Song",06,b6,fe,13),HX_("Exit to menu",82,87,9a,a9),
};
HX_LOCAL_STACK_FRAME(_hx_pos_17d383cbce329512_266_destroy,"PauseSubState","destroy",0xc2ba82f3,"PauseSubState.destroy","PauseSubState.hx",266,0x953dc7b7)
HX_LOCAL_STACK_FRAME(_hx_pos_17d383cbce329512_273_changeSelection,"PauseSubState","changeSelection",0x8f960fb5,"PauseSubState.changeSelection","PauseSubState.hx",273,0x953dc7b7)

void PauseSubState_obj::__construct(Float x,Float y){
            	HX_GC_STACKFRAME(&_hx_pos_17d383cbce329512_20_new)
HXLINE(  31)		this->startOffset = ::PlayState_obj::songOffset;
HXLINE(  30)		this->offsetChanged = false;
HXLINE(  25)		this->curSelected = 0;
HXLINE(  24)		this->menuItems = ::Array_obj< ::String >::fromData( _hx_array_data_08e59567_2,3);
HXLINE(  35)		super::__construct();
HXLINE(  37)		 ::flixel::_hx_system::FlxSound _hx_tmp =  ::flixel::_hx_system::FlxSound_obj::__alloc( HX_CTX );
HXDLIN(  37)		::String library = null();
HXDLIN(  37)		::String result = ::Paths_obj::getPath((((HX_("music/",ea,bf,1b,3f) + HX_("disco",7a,03,d1,d9)) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)),HX_("MUSIC",85,08,49,8e),library);
HXDLIN(  37)		::String _hx_tmp1;
HXDLIN(  37)		if (::Paths_obj::doesSoundAssetExist(result)) {
HXLINE(  37)			_hx_tmp1 = result;
            		}
            		else {
HXLINE(  37)			_hx_tmp1 = null();
            		}
HXDLIN(  37)		this->pauseMusic = _hx_tmp->loadEmbedded(_hx_tmp1,true,true,null());
HXLINE(  38)		this->pauseMusic->set_volume(( (Float)(0) ));
HXLINE(  39)		this->pauseMusic->play(null(),null(),null());
HXLINE(  41)		::flixel::FlxG_obj::sound->list->add(this->pauseMusic).StaticCast<  ::flixel::_hx_system::FlxSound >();
HXLINE(  43)		 ::flixel::FlxSprite bg =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,(( (Float)(-(::flixel::FlxG_obj::width)) ) * ::flixel::FlxG_obj::camera->zoom),(( (Float)(-(::flixel::FlxG_obj::height)) ) * ::flixel::FlxG_obj::camera->zoom),null());
HXDLIN(  43)		 ::flixel::FlxSprite bg1 = bg->makeGraphic((::flixel::FlxG_obj::width * 3),(::flixel::FlxG_obj::height * 3),-16777216,null(),null());
HXLINE(  45)		bg1->set_alpha(( (Float)(0) ));
HXLINE(  46)		bg1->scrollFactor->set(null(),null());
HXLINE(  47)		this->add(bg1);
HXLINE(  49)		 ::flixel::text::FlxText levelInfo =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,20,15,0,HX_("",00,00,00,00),32,null());
HXLINE(  50)		levelInfo->set_text(( (::String)((levelInfo->text + ::PlayState_obj::SONG->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic))) ));
HXLINE(  51)		levelInfo->set_antialiasing(true);
HXLINE(  52)		levelInfo->scrollFactor->set(null(),null());
HXLINE(  53)		levelInfo->setFormat(::LangUtil_obj::getFont(null()),32,null(),null(),null(),null(),null());
HXLINE(  54)		levelInfo->updateHitbox();
HXLINE(  55)		this->add(levelInfo);
HXLINE(  57)		 ::flixel::text::FlxText levelDifficulty =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,20,47,0,HX_("",00,00,00,00),32,null());
HXLINE(  58)		::String levelDifficulty1 = levelDifficulty->text;
HXDLIN(  58)		levelDifficulty->set_text((levelDifficulty1 + ::CoolUtil_obj::difficultyString()));
HXLINE(  59)		levelDifficulty->set_antialiasing(true);
HXLINE(  60)		levelDifficulty->scrollFactor->set(null(),null());
HXLINE(  61)		levelDifficulty->setFormat(::LangUtil_obj::getFont(null()),32,null(),null(),null(),null(),null());
HXLINE(  62)		levelDifficulty->updateHitbox();
HXLINE(  63)		this->add(levelDifficulty);
HXLINE(  65)		levelDifficulty->set_alpha(( (Float)(0) ));
HXLINE(  66)		levelInfo->set_alpha(( (Float)(0) ));
HXLINE(  68)		int _hx_tmp2 = ::flixel::FlxG_obj::width;
HXDLIN(  68)		levelInfo->set_x((( (Float)(_hx_tmp2) ) - (levelInfo->get_width() + 20)));
HXLINE(  69)		int _hx_tmp3 = ::flixel::FlxG_obj::width;
HXDLIN(  69)		levelDifficulty->set_x((( (Float)(_hx_tmp3) ) - (levelDifficulty->get_width() + 20)));
HXLINE(  71)		::flixel::tweens::FlxTween_obj::tween(bg1, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("alpha",5e,a7,96,21),((Float)0.6))),((Float)0.4), ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quartInOut_dyn())));
HXLINE(  72)		::flixel::tweens::FlxTween_obj::tween(levelInfo, ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("y",79,00,00,00),20)
            			->setFixed(1,HX_("alpha",5e,a7,96,21),1)),((Float)0.4), ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("startDelay",c1,af,3d,f3),((Float)0.3))
            			->setFixed(1,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quartInOut_dyn())));
HXLINE(  73)		::flixel::tweens::FlxTween_obj::tween(levelDifficulty, ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("y",79,00,00,00),(levelDifficulty->y + 5))
            			->setFixed(1,HX_("alpha",5e,a7,96,21),1)),((Float)0.4), ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("startDelay",c1,af,3d,f3),((Float)0.5))
            			->setFixed(1,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quartInOut_dyn())));
HXLINE(  75)		this->grpMenuShit =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  76)		this->add(this->grpMenuShit);
HXLINE(  77)		int _hx_tmp4 = (::flixel::FlxG_obj::height - 18);
HXLINE(  79)		::String _hx_tmp5 = (::LangUtil_obj::getString(HX_("cmnAddOffset",70,3d,f1,a5)) + HX_(": ",a6,32,00,00));
HXDLIN(  79)		::String _hx_tmp6 = ((_hx_tmp5 + ::PlayState_obj::songOffset) + HX_(" - ",73,6f,18,00));
HXDLIN(  79)		::String _hx_tmp7 = ((_hx_tmp6 + ::LangUtil_obj::getString(HX_("cmnDesc",f5,9a,06,2d))) + HX_(" - ",73,6f,18,00));
HXLINE(  77)		this->perSongOffset =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,5,_hx_tmp4,0,(_hx_tmp7 + ::LangUtil_obj::getString(HX_("descAddOffset",03,7c,a4,2a))),12,null());
HXLINE(  87)		this->perSongOffset->set_antialiasing(true);
HXLINE(  88)		this->perSongOffset->scrollFactor->set(null(),null());
HXLINE(  89)		 ::flixel::text::FlxText _hx_tmp8 = this->perSongOffset;
HXDLIN(  89)		_hx_tmp8->setFormat(::LangUtil_obj::getFont(null()),16,-1,HX_("left",07,08,b0,47),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE(  92)		this->add(this->perSongOffset);
HXLINE(  95)		{
HXLINE(  95)			int _g = 0;
HXDLIN(  95)			int _g1 = this->menuItems->length;
HXDLIN(  95)			while((_g < _g1)){
HXLINE(  95)				_g = (_g + 1);
HXDLIN(  95)				int i = (_g - 1);
HXLINE(  97)				 ::Alphabet songText =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(((70 * i) + 30)) ),this->menuItems->__get(i),true,false);
HXLINE(  98)				songText->isMenuItem = true;
HXLINE(  99)				songText->targetY = ( (Float)(i) );
HXLINE( 100)				this->grpMenuShit->add(songText).StaticCast<  ::Alphabet >();
            			}
            		}
HXLINE( 103)		this->changeSelection(null());
HXLINE( 105)		this->set_cameras(::Array_obj< ::Dynamic>::__new(1)->init(0,::flixel::FlxG_obj::cameras->list->__get((::flixel::FlxG_obj::cameras->list->length - 1)).StaticCast<  ::flixel::FlxCamera >()));
            	}

Dynamic PauseSubState_obj::__CreateEmpty() { return new PauseSubState_obj; }

void *PauseSubState_obj::_hx_vtable = 0;

Dynamic PauseSubState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PauseSubState_obj > _hx_result = new PauseSubState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool PauseSubState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x5661ffbf) {
			if (inClassId<=(int)0x519cdafb) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x519cdafb;
			} else {
				return inClassId==(int)0x5661ffbf;
			}
		} else {
			return inClassId==(int)0x62817b24;
		}
	} else {
		if (inClassId<=(int)0x7ccf8994) {
			return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
		} else {
			return inClassId==(int)0x7fce3ab0;
		}
	}
}

void PauseSubState_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_17d383cbce329512_109_update)
HXLINE( 110)		if ((this->pauseMusic->_volume < ((Float)0.5))) {
HXLINE( 111)			 ::flixel::_hx_system::FlxSound fh = this->pauseMusic;
HXDLIN( 111)			fh->set_volume((fh->_volume + (((Float)0.01) * elapsed)));
            		}
HXLINE( 113)		this->super::update(elapsed);
HXLINE( 115)		bool upP = ::PlayerSettings_obj::player1->controls->_upP->check();
HXLINE( 116)		bool downP = ::PlayerSettings_obj::player1->controls->_downP->check();
HXLINE( 117)		bool leftP = ::PlayerSettings_obj::player1->controls->_leftP->check();
HXLINE( 118)		bool rightP = ::PlayerSettings_obj::player1->controls->_rightP->check();
HXLINE( 119)		bool accepted = ::PlayerSettings_obj::player1->controls->_accept->check();
HXLINE( 120)		Float oldOffset = ( (Float)(0) );
HXLINE( 121)		::String songPath = ((HX_("assets/data/",f9,10,73,a0) + ( (::String)(::PlayState_obj::SONG->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic)) ).toLowerCase()) + HX_("/",2f,00,00,00));
HXLINE( 123)		if (upP) {
HXLINE( 124)			this->changeSelection(-1);
            		}
            		else {
HXLINE( 125)			if (downP) {
HXLINE( 126)				this->changeSelection(1);
            			}
            			else {
HXLINE( 129)				if (leftP) {
HXLINE( 131)					oldOffset = ::PlayState_obj::songOffset;
HXLINE( 132)					 ::Dynamic _hx_tmp = ::hx::ClassOf< ::PlayState >();
HXDLIN( 132)					::PlayState_obj::songOffset = (::PlayState_obj::songOffset - ( (Float)(1) ));
HXLINE( 133)					::sys::FileSystem_obj::rename(((songPath + oldOffset) + HX_(".offset",41,ee,1a,d9)),((songPath + ::PlayState_obj::songOffset) + HX_(".offset",41,ee,1a,d9)));
HXLINE( 134)					 ::flixel::text::FlxText _hx_tmp1 = this->perSongOffset;
HXDLIN( 134)					::String _hx_tmp2 = (::LangUtil_obj::getString(HX_("cmnAddOffset",70,3d,f1,a5)) + HX_(": ",a6,32,00,00));
HXDLIN( 134)					::String _hx_tmp3 = ((_hx_tmp2 + ::PlayState_obj::songOffset) + HX_(" - ",73,6f,18,00));
HXDLIN( 134)					::String _hx_tmp4 = ((_hx_tmp3 + ::LangUtil_obj::getString(HX_("cmnDesc",f5,9a,06,2d))) + HX_(" - ",73,6f,18,00));
HXDLIN( 134)					_hx_tmp1->set_text((_hx_tmp4 + ::LangUtil_obj::getString(HX_("descAddOffset",03,7c,a4,2a))));
HXLINE( 138)					if (!(this->offsetChanged)) {
HXLINE( 140)						this->grpMenuShit->clear();
HXLINE( 142)						this->menuItems = ::Array_obj< ::String >::fromData( _hx_array_data_08e59567_9,2);
HXLINE( 144)						{
HXLINE( 144)							int _g = 0;
HXDLIN( 144)							int _g1 = this->menuItems->length;
HXDLIN( 144)							while((_g < _g1)){
HXLINE( 144)								_g = (_g + 1);
HXDLIN( 144)								int i = (_g - 1);
HXLINE( 146)								 ::Alphabet songText =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(((70 * i) + 30)) ),this->menuItems->__get(i),true,false);
HXLINE( 147)								songText->isMenuItem = true;
HXLINE( 148)								songText->targetY = ( (Float)(i) );
HXLINE( 149)								this->grpMenuShit->add(songText).StaticCast<  ::Alphabet >();
            							}
            						}
HXLINE( 152)						this->changeSelection(null());
HXLINE( 154)						this->set_cameras(::Array_obj< ::Dynamic>::__new(1)->init(0,::flixel::FlxG_obj::cameras->list->__get((::flixel::FlxG_obj::cameras->list->length - 1)).StaticCast<  ::flixel::FlxCamera >()));
HXLINE( 155)						this->offsetChanged = true;
            					}
            					else {
HXLINE( 157)						if ((::PlayState_obj::songOffset == this->startOffset)) {
HXLINE( 159)							this->grpMenuShit->clear();
HXLINE( 160)							this->menuItems = ::Array_obj< ::String >::fromData( _hx_array_data_08e59567_10,3);
HXLINE( 161)							{
HXLINE( 161)								int _g = 0;
HXDLIN( 161)								int _g1 = this->menuItems->length;
HXDLIN( 161)								while((_g < _g1)){
HXLINE( 161)									_g = (_g + 1);
HXDLIN( 161)									int i = (_g - 1);
HXLINE( 163)									 ::Alphabet songText =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(((70 * i) + 30)) ),this->menuItems->__get(i),true,false);
HXLINE( 164)									songText->isMenuItem = true;
HXLINE( 165)									songText->targetY = ( (Float)(i) );
HXLINE( 166)									this->grpMenuShit->add(songText).StaticCast<  ::Alphabet >();
            								}
            							}
HXLINE( 169)							this->changeSelection(null());
HXLINE( 171)							this->set_cameras(::Array_obj< ::Dynamic>::__new(1)->init(0,::flixel::FlxG_obj::cameras->list->__get((::flixel::FlxG_obj::cameras->list->length - 1)).StaticCast<  ::flixel::FlxCamera >()));
HXLINE( 172)							this->offsetChanged = false;
            						}
            					}
            				}
            				else {
HXLINE( 175)					if (rightP) {
HXLINE( 177)						oldOffset = ::PlayState_obj::songOffset;
HXLINE( 178)						 ::Dynamic _hx_tmp = ::hx::ClassOf< ::PlayState >();
HXDLIN( 178)						::PlayState_obj::songOffset = (::PlayState_obj::songOffset + 1);
HXLINE( 179)						::sys::FileSystem_obj::rename(((songPath + oldOffset) + HX_(".offset",41,ee,1a,d9)),((songPath + ::PlayState_obj::songOffset) + HX_(".offset",41,ee,1a,d9)));
HXLINE( 180)						 ::flixel::text::FlxText _hx_tmp1 = this->perSongOffset;
HXDLIN( 180)						::String _hx_tmp2 = (::LangUtil_obj::getString(HX_("cmnAddOffset",70,3d,f1,a5)) + HX_(": ",a6,32,00,00));
HXDLIN( 180)						::String _hx_tmp3 = ((_hx_tmp2 + ::PlayState_obj::songOffset) + HX_(" - ",73,6f,18,00));
HXDLIN( 180)						::String _hx_tmp4 = ((_hx_tmp3 + ::LangUtil_obj::getString(HX_("cmnDesc",f5,9a,06,2d))) + HX_(" - ",73,6f,18,00));
HXDLIN( 180)						_hx_tmp1->set_text((_hx_tmp4 + ::LangUtil_obj::getString(HX_("descAddOffset",03,7c,a4,2a))));
HXLINE( 182)						if (!(this->offsetChanged)) {
HXLINE( 184)							this->grpMenuShit->clear();
HXLINE( 186)							this->menuItems = ::Array_obj< ::String >::fromData( _hx_array_data_08e59567_11,2);
HXLINE( 188)							{
HXLINE( 188)								int _g = 0;
HXDLIN( 188)								int _g1 = this->menuItems->length;
HXDLIN( 188)								while((_g < _g1)){
HXLINE( 188)									_g = (_g + 1);
HXDLIN( 188)									int i = (_g - 1);
HXLINE( 190)									 ::Alphabet songText =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(((70 * i) + 30)) ),this->menuItems->__get(i),true,false);
HXLINE( 191)									songText->isMenuItem = true;
HXLINE( 192)									songText->targetY = ( (Float)(i) );
HXLINE( 193)									this->grpMenuShit->add(songText).StaticCast<  ::Alphabet >();
            								}
            							}
HXLINE( 196)							this->changeSelection(null());
HXLINE( 198)							this->set_cameras(::Array_obj< ::Dynamic>::__new(1)->init(0,::flixel::FlxG_obj::cameras->list->__get((::flixel::FlxG_obj::cameras->list->length - 1)).StaticCast<  ::flixel::FlxCamera >()));
HXLINE( 199)							this->offsetChanged = true;
            						}
            						else {
HXLINE( 201)							if ((::PlayState_obj::songOffset == this->startOffset)) {
HXLINE( 203)								this->grpMenuShit->clear();
HXLINE( 204)								this->menuItems = ::Array_obj< ::String >::fromData( _hx_array_data_08e59567_12,3);
HXLINE( 205)								{
HXLINE( 205)									int _g = 0;
HXDLIN( 205)									int _g1 = this->menuItems->length;
HXDLIN( 205)									while((_g < _g1)){
HXLINE( 205)										_g = (_g + 1);
HXDLIN( 205)										int i = (_g - 1);
HXLINE( 207)										 ::Alphabet songText =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(((70 * i) + 30)) ),this->menuItems->__get(i),true,false);
HXLINE( 208)										songText->isMenuItem = true;
HXLINE( 209)										songText->targetY = ( (Float)(i) );
HXLINE( 210)										this->grpMenuShit->add(songText).StaticCast<  ::Alphabet >();
            									}
            								}
HXLINE( 213)								this->changeSelection(null());
HXLINE( 215)								this->set_cameras(::Array_obj< ::Dynamic>::__new(1)->init(0,::flixel::FlxG_obj::cameras->list->__get((::flixel::FlxG_obj::cameras->list->length - 1)).StaticCast<  ::flixel::FlxCamera >()));
HXLINE( 216)								this->offsetChanged = false;
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE( 221)		if (accepted) {
HXLINE( 223)			::String daSelected = this->menuItems->__get(this->curSelected);
HXLINE( 225)			::String _hx_switch_0 = daSelected;
            			if (  (_hx_switch_0==HX_("Exit to menu",82,87,9a,a9)) ){
HXLINE( 232)				::HealthIcon_obj::isEpiphany = false;
HXLINE( 233)				::PlayState_obj::showCutscene = true;
HXLINE( 234)				if (::PlayState_obj::loadRep) {
HXLINE( 236)					::flixel::FlxG_obj::save->data->__SetField(HX_("botplay",7b,fb,a9,61),false,::hx::paccDynamic);
HXLINE( 237)					::flixel::FlxG_obj::save->data->__SetField(HX_("scrollSpeed",3a,e0,46,cb),1,::hx::paccDynamic);
HXLINE( 238)					::flixel::FlxG_obj::save->data->__SetField(HX_("downscroll",ef,45,d4,4f),false,::hx::paccDynamic);
            				}
HXLINE( 240)				::PlayState_obj::loadRep = false;
HXLINE( 248)				if (::hx::IsGreater( ::flixel::FlxG_obj::save->data->__Field(HX_("fpsCap",a9,7b,7e,91),::hx::paccDynamic),290 )) {
HXLINE( 249)					::hx::TCast<  ::Main >::cast(::openfl::Lib_obj::get_current()->getChildAt(0))->setFPSCap(( (Float)(290) ));
            				}
HXLINE( 251)				if (::PlayState_obj::isStoryMode) {
HXLINE( 252)					 ::flixel::FlxState nextState =  ::DokiStoryState_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 252)					if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 252)						::flixel::FlxG_obj::game->_requestedState = nextState;
            					}
            				}
            				else {
HXLINE( 254)					 ::flixel::FlxState nextState =  ::DokiFreeplayState_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 254)					if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 254)						::flixel::FlxG_obj::game->_requestedState = nextState;
            					}
            				}
HXLINE( 231)				goto _hx_goto_7;
            			}
            			if (  (_hx_switch_0==HX_("Restart Song",06,b6,fe,13)) ){
HXLINE( 230)				 ::flixel::FlxState nextState = ( ( ::flixel::FlxState)(::Type_obj::createInstance(::Type_obj::getClass(::flixel::FlxG_obj::game->_state),::cpp::VirtualArray_obj::__new(0))) );
HXDLIN( 230)				if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 230)					::flixel::FlxG_obj::game->_requestedState = nextState;
            				}
HXDLIN( 230)				goto _hx_goto_7;
            			}
            			if (  (_hx_switch_0==HX_("Resume",cd,dd,18,3d)) ){
HXLINE( 228)				this->close();
HXDLIN( 228)				goto _hx_goto_7;
            			}
            			_hx_goto_7:;
            		}
HXLINE( 258)		 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 258)		bool _hx_tmp = _this->keyManager->checkStatus(74,_this->status);
            	}


void PauseSubState_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_17d383cbce329512_266_destroy)
HXLINE( 267)		this->pauseMusic->destroy();
HXLINE( 269)		this->super::destroy();
            	}


void PauseSubState_obj::changeSelection(::hx::Null< int >  __o_change){
            		int change = __o_change.Default(0);
            	HX_STACKFRAME(&_hx_pos_17d383cbce329512_273_changeSelection)
HXLINE( 274)		 ::PauseSubState _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 274)		_hx_tmp->curSelected = (_hx_tmp->curSelected + change);
HXLINE( 276)		if ((this->curSelected < 0)) {
HXLINE( 277)			this->curSelected = (this->menuItems->length - 1);
            		}
HXLINE( 278)		if ((this->curSelected >= this->menuItems->length)) {
HXLINE( 279)			this->curSelected = 0;
            		}
HXLINE( 281)		int bullShit = 0;
HXLINE( 283)		{
HXLINE( 283)			int _g = 0;
HXDLIN( 283)			::Array< ::Dynamic> _g1 = this->grpMenuShit->members;
HXDLIN( 283)			while((_g < _g1->length)){
HXLINE( 283)				 ::Alphabet item = _g1->__get(_g).StaticCast<  ::Alphabet >();
HXDLIN( 283)				_g = (_g + 1);
HXLINE( 285)				item->targetY = ( (Float)((bullShit - this->curSelected)) );
HXLINE( 286)				bullShit = (bullShit + 1);
HXLINE( 288)				item->set_alpha(((Float)0.6));
HXLINE( 291)				if ((item->targetY == 0)) {
HXLINE( 293)					item->set_alpha(( (Float)(1) ));
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(PauseSubState_obj,changeSelection,(void))


::hx::ObjectPtr< PauseSubState_obj > PauseSubState_obj::__new(Float x,Float y) {
	::hx::ObjectPtr< PauseSubState_obj > __this = new PauseSubState_obj();
	__this->__construct(x,y);
	return __this;
}

::hx::ObjectPtr< PauseSubState_obj > PauseSubState_obj::__alloc(::hx::Ctx *_hx_ctx,Float x,Float y) {
	PauseSubState_obj *__this = (PauseSubState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PauseSubState_obj), true, "PauseSubState"));
	*(void **)__this = PauseSubState_obj::_hx_vtable;
	__this->__construct(x,y);
	return __this;
}

PauseSubState_obj::PauseSubState_obj()
{
}

void PauseSubState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PauseSubState);
	HX_MARK_MEMBER_NAME(grpMenuShit,"grpMenuShit");
	HX_MARK_MEMBER_NAME(menuItems,"menuItems");
	HX_MARK_MEMBER_NAME(curSelected,"curSelected");
	HX_MARK_MEMBER_NAME(pauseMusic,"pauseMusic");
	HX_MARK_MEMBER_NAME(perSongOffset,"perSongOffset");
	HX_MARK_MEMBER_NAME(offsetChanged,"offsetChanged");
	HX_MARK_MEMBER_NAME(startOffset,"startOffset");
	 ::flixel::FlxSubState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PauseSubState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(grpMenuShit,"grpMenuShit");
	HX_VISIT_MEMBER_NAME(menuItems,"menuItems");
	HX_VISIT_MEMBER_NAME(curSelected,"curSelected");
	HX_VISIT_MEMBER_NAME(pauseMusic,"pauseMusic");
	HX_VISIT_MEMBER_NAME(perSongOffset,"perSongOffset");
	HX_VISIT_MEMBER_NAME(offsetChanged,"offsetChanged");
	HX_VISIT_MEMBER_NAME(startOffset,"startOffset");
	 ::flixel::FlxSubState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val PauseSubState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"menuItems") ) { return ::hx::Val( menuItems ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"pauseMusic") ) { return ::hx::Val( pauseMusic ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"grpMenuShit") ) { return ::hx::Val( grpMenuShit ); }
		if (HX_FIELD_EQ(inName,"curSelected") ) { return ::hx::Val( curSelected ); }
		if (HX_FIELD_EQ(inName,"startOffset") ) { return ::hx::Val( startOffset ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"perSongOffset") ) { return ::hx::Val( perSongOffset ); }
		if (HX_FIELD_EQ(inName,"offsetChanged") ) { return ::hx::Val( offsetChanged ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"changeSelection") ) { return ::hx::Val( changeSelection_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val PauseSubState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"menuItems") ) { menuItems=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"pauseMusic") ) { pauseMusic=inValue.Cast<  ::flixel::_hx_system::FlxSound >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"grpMenuShit") ) { grpMenuShit=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"curSelected") ) { curSelected=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"startOffset") ) { startOffset=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"perSongOffset") ) { perSongOffset=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offsetChanged") ) { offsetChanged=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PauseSubState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("grpMenuShit",04,32,b8,f0));
	outFields->push(HX_("menuItems",e1,15,e5,5c));
	outFields->push(HX_("curSelected",fb,eb,ab,32));
	outFields->push(HX_("pauseMusic",cf,6d,d3,e5));
	outFields->push(HX_("perSongOffset",85,2c,3e,8a));
	outFields->push(HX_("offsetChanged",a1,a9,06,e9));
	outFields->push(HX_("startOffset",95,f5,25,d8));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo PauseSubState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(PauseSubState_obj,grpMenuShit),HX_("grpMenuShit",04,32,b8,f0)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(PauseSubState_obj,menuItems),HX_("menuItems",e1,15,e5,5c)},
	{::hx::fsInt,(int)offsetof(PauseSubState_obj,curSelected),HX_("curSelected",fb,eb,ab,32)},
	{::hx::fsObject /*  ::flixel::_hx_system::FlxSound */ ,(int)offsetof(PauseSubState_obj,pauseMusic),HX_("pauseMusic",cf,6d,d3,e5)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(PauseSubState_obj,perSongOffset),HX_("perSongOffset",85,2c,3e,8a)},
	{::hx::fsBool,(int)offsetof(PauseSubState_obj,offsetChanged),HX_("offsetChanged",a1,a9,06,e9)},
	{::hx::fsFloat,(int)offsetof(PauseSubState_obj,startOffset),HX_("startOffset",95,f5,25,d8)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *PauseSubState_obj_sStaticStorageInfo = 0;
#endif

static ::String PauseSubState_obj_sMemberFields[] = {
	HX_("grpMenuShit",04,32,b8,f0),
	HX_("menuItems",e1,15,e5,5c),
	HX_("curSelected",fb,eb,ab,32),
	HX_("pauseMusic",cf,6d,d3,e5),
	HX_("perSongOffset",85,2c,3e,8a),
	HX_("offsetChanged",a1,a9,06,e9),
	HX_("startOffset",95,f5,25,d8),
	HX_("update",09,86,05,87),
	HX_("destroy",fa,2c,86,24),
	HX_("changeSelection",bc,98,b5,48),
	::String(null()) };

::hx::Class PauseSubState_obj::__mClass;

void PauseSubState_obj::__register()
{
	PauseSubState_obj _hx_dummy;
	PauseSubState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("PauseSubState",67,95,e5,08);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PauseSubState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PauseSubState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PauseSubState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PauseSubState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

