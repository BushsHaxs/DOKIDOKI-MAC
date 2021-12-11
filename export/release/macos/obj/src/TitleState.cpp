#include <hxcpp.h>

#ifndef INCLUDED_Alphabet
#include <Alphabet.h>
#endif
#ifndef INCLUDED_Conductor
#include <Conductor.h>
#endif
#ifndef INCLUDED_CoolUtil
#include <CoolUtil.h>
#endif
#ifndef INCLUDED_Highscore
#include <Highscore.h>
#endif
#ifndef INCLUDED_KadeEngineData
#include <KadeEngineData.h>
#endif
#ifndef INCLUDED_LangUtil
#include <LangUtil.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_MainMenuState
#include <MainMenuState.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_OutdatedSubState
#include <OutdatedSubState.h>
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
#ifndef INCLUDED_StoryMenuState
#include <StoryMenuState.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_TitleState
#include <TitleState.h>
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
#ifndef INCLUDED_flixel_addons_display_FlxBackdrop
#include <flixel/addons/display/FlxBackdrop.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_GraphicTransTileDiamond
#include <flixel/addons/transition/GraphicTransTileDiamond.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
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
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
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
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
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
#ifndef INCLUDED_flixel_tweens_misc_NumTween
#include <flixel/tweens/misc/NumTween.h>
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
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
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
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a55214e0452daa02_32_new,"TitleState","new",0x3b23deeb,"TitleState.new","TitleState.hx",32,0xd132a6e5)
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_97_create,"TitleState","create",0x801cc151,"TitleState.create","TitleState.hx",97,0xd132a6e5)
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_47_create,"TitleState","create",0x801cc151,"TitleState.create","TitleState.hx",47,0xd132a6e5)
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_109_startIntro,"TitleState","startIntro",0x6a094b7f,"TitleState.startIntro","TitleState.hx",109,0xd132a6e5)
static const int _hx_array_data_8ca18d79_4[] = {
	(int)30,(int)0,(int)1,(int)2,(int)3,(int)4,(int)5,(int)6,(int)7,(int)8,(int)9,(int)10,(int)11,(int)12,(int)13,(int)14,
};
static const int _hx_array_data_8ca18d79_5[] = {
	(int)15,(int)16,(int)17,(int)18,(int)19,(int)20,(int)21,(int)22,(int)23,(int)24,(int)25,(int)26,(int)27,(int)28,(int)29,
};
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_213_getIntroTextShit,"TitleState","getIntroTextShit",0x5dcf15b8,"TitleState.getIntroTextShit","TitleState.hx",213,0xd132a6e5)
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_230_update,"TitleState","update",0x8b12e05e,"TitleState.update","TitleState.hx",230,0xd132a6e5)
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_278_update,"TitleState","update",0x8b12e05e,"TitleState.update","TitleState.hx",278,0xd132a6e5)
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_300_createCoolText,"TitleState","createCoolText",0x83610287,"TitleState.createCoolText","TitleState.hx",300,0xd132a6e5)
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_311_addMoreText,"TitleState","addMoreText",0xcf420fae,"TitleState.addMoreText","TitleState.hx",311,0xd132a6e5)
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_321_deleteCoolText,"TitleState","deleteCoolText",0x8afda2b6,"TitleState.deleteCoolText","TitleState.hx",321,0xd132a6e5)
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_329_beatHit,"TitleState","beatHit",0xfba69a88,"TitleState.beatHit","TitleState.hx",329,0xd132a6e5)
static const ::String _hx_array_data_8ca18d79_16[] = {
	HX_("the DDTO team",73,a9,9b,60),
};
static const ::String _hx_array_data_8ca18d79_17[] = {
	HX_("the DDTO team",73,a9,9b,60),
};
static const ::String _hx_array_data_8ca18d79_18[] = {
	HX_("Powered",84,97,1a,28),HX_("by",d7,55,00,00),
};
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_406_skipIntro,"TitleState","skipIntro",0xc9924038,"TitleState.skipIntro","TitleState.hx",406,0xd132a6e5)
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_34_boot,"TitleState","boot",0x7c582f47,"TitleState.boot","TitleState.hx",34,0xd132a6e5)

void TitleState_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_a55214e0452daa02_32_new)
HXLINE( 402)		this->skippedIntro = false;
HXLINE( 227)		this->transitioning = false;
HXLINE( 105)		this->danceLeft = false;
HXLINE(  42)		this->curWacky = ::Array_obj< ::String >::__new(0);
HXLINE(  32)		super::__construct(TransIn,TransOut);
            	}

Dynamic TitleState_obj::__CreateEmpty() { return new TitleState_obj; }

void *TitleState_obj::_hx_vtable = 0;

Dynamic TitleState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TitleState_obj > _hx_result = new TitleState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool TitleState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3f706236) {
		if (inClassId<=(int)0x23a57bae) {
			if (inClassId<=(int)0x22c6bd01) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x22c6bd01;
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

void TitleState_obj::create(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::TitleState,_gthis) HXARGC(1)
            		void _hx_run( ::flixel::util::FlxTimer tmr){
            			HX_GC_STACKFRAME(&_hx_pos_a55214e0452daa02_97_create)
HXLINE(  97)			_gthis->startIntro();
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_a55214e0452daa02_47_create)
HXDLIN(  47)		 ::TitleState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  49)		if (!(::sys::FileSystem_obj::exists((::Sys_obj::getCwd() + HX_("/assets/replays",0f,a7,b1,e3))))) {
HXLINE(  50)			::sys::FileSystem_obj::createDirectory((::Sys_obj::getCwd() + HX_("/assets/replays",0f,a7,b1,e3)));
            		}
HXLINE(  62)		 ::flixel::math::FlxRandom _hx_tmp = ::flixel::FlxG_obj::random;
HXDLIN(  62)		this->curWacky = _hx_tmp->getObject_Array_String(this->getIntroTextShit(),null(),null(),null());
HXLINE(  66)		this->super::create();
HXLINE(  68)		::flixel::FlxG_obj::save->bind(HX_("dokitakeover",04,f8,39,59),HX_("ddtoteam",18,ef,f0,2d));
HXLINE(  69)		::PlayerSettings_obj::init();
HXLINE(  70)		::KadeEngineData_obj::initSave();
HXLINE(  72)		::String _hx_tmp1;
HXDLIN(  72)		if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/",2f,00,00,00) + HX_("data/textData",3c,85,6a,69)) + HX_(".txt",02,3f,c0,1e))),HX_("TEXT",ad,94,ba,37),HX_("preload",c9,47,43,35)),null())) {
HXLINE(  72)			_hx_tmp1 = ::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/",2f,00,00,00) + HX_("data/textData",3c,85,6a,69)) + HX_(".txt",02,3f,c0,1e))),HX_("TEXT",ad,94,ba,37),HX_("preload",c9,47,43,35));
            		}
            		else {
HXLINE(  72)			_hx_tmp1 = ::Paths_obj::getPath(((HX_("locale/en-US/",02,23,bf,a8) + HX_("data/textData",3c,85,6a,69)) + HX_(".txt",02,3f,c0,1e)),HX_("TEXT",ad,94,ba,37),HX_("preload",c9,47,43,35));
            		}
HXDLIN(  72)		::LangUtil_obj::localeList = ::CoolUtil_obj::coolTextFile(_hx_tmp1);
HXLINE(  74)		::Highscore_obj::load();
HXLINE(  76)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("weekUnlocked",37,64,c4,a5),::hx::paccDynamic) )) {
HXLINE(  82)			if ((::StoryMenuState_obj::weekUnlocked->length < 4)) {
HXLINE(  83)				::StoryMenuState_obj::weekUnlocked->insert(0,true);
            			}
HXLINE(  86)			if (!(::StoryMenuState_obj::weekUnlocked->__get(0))) {
HXLINE(  87)				::StoryMenuState_obj::weekUnlocked[0] = true;
            			}
            		}
HXLINE(  95)		 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(1, ::Dynamic(new _hx_Closure_0(_gthis)),null());
            	}


void TitleState_obj::startIntro(){
            	HX_GC_STACKFRAME(&_hx_pos_a55214e0452daa02_109_startIntro)
HXLINE( 110)		if (!(::TitleState_obj::initialized)) {
HXLINE( 112)			 ::flixel::graphics::FlxGraphic diamond = ::flixel::graphics::FlxGraphic_obj::fromClass(::hx::ClassOf< ::flixel::addons::transition::GraphicTransTileDiamond >(),null(),null(),null());
HXLINE( 113)			diamond->persist = true;
HXLINE( 114)			diamond->set_destroyOnNoUse(false);
HXLINE( 116)			 ::flixel::math::FlxPoint _hx_tmp =  ::flixel::math::FlxPoint_obj::__alloc( HX_CTX ,0,-1);
HXDLIN( 116)			::flixel::addons::transition::FlxTransitionableState_obj::defaultTransIn =  ::flixel::addons::transition::TransitionData_obj::__alloc( HX_CTX ,HX_("fade",7c,b5,b5,43),-16777216,1,_hx_tmp, ::Dynamic(::hx::Anon_obj::Create(3)
            				->setFixed(0,HX_("width",06,b6,62,ca),32)
            				->setFixed(1,HX_("height",e7,07,4c,02),32)
            				->setFixed(2,HX_("asset",f0,69,39,26),diamond)), ::flixel::math::FlxRect_obj::__alloc( HX_CTX ,-200,-200,(( (Float)(::flixel::FlxG_obj::width) ) * ((Float)1.4)),(( (Float)(::flixel::FlxG_obj::height) ) * ((Float)1.4))));
HXLINE( 118)			 ::flixel::math::FlxPoint _hx_tmp1 =  ::flixel::math::FlxPoint_obj::__alloc( HX_CTX ,0,1);
HXDLIN( 118)			::flixel::addons::transition::FlxTransitionableState_obj::defaultTransOut =  ::flixel::addons::transition::TransitionData_obj::__alloc( HX_CTX ,HX_("fade",7c,b5,b5,43),-16777216,((Float)0.7),_hx_tmp1, ::Dynamic(::hx::Anon_obj::Create(3)
            				->setFixed(0,HX_("width",06,b6,62,ca),32)
            				->setFixed(1,HX_("height",e7,07,4c,02),32)
            				->setFixed(2,HX_("asset",f0,69,39,26),diamond)), ::flixel::math::FlxRect_obj::__alloc( HX_CTX ,-200,-200,(( (Float)(::flixel::FlxG_obj::width) ) * ((Float)1.4)),(( (Float)(::flixel::FlxG_obj::height) ) * ((Float)1.4))));
HXLINE( 121)			this->transIn = ::flixel::addons::transition::FlxTransitionableState_obj::defaultTransIn;
HXLINE( 122)			this->transOut = ::flixel::addons::transition::FlxTransitionableState_obj::defaultTransOut;
HXLINE( 124)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp2 = ::flixel::FlxG_obj::sound;
HXDLIN( 124)			::String library = null();
HXDLIN( 124)			::String result = ::Paths_obj::getPath((((HX_("music/",ea,bf,1b,3f) + HX_("freakyMenu",15,c9,93,86)) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)),HX_("MUSIC",85,08,49,8e),library);
HXDLIN( 124)			::String _hx_tmp3;
HXDLIN( 124)			if (::Paths_obj::doesSoundAssetExist(result)) {
HXLINE( 124)				_hx_tmp3 = result;
            			}
            			else {
HXLINE( 124)				_hx_tmp3 = null();
            			}
HXDLIN( 124)			_hx_tmp2->playMusic(_hx_tmp3,0,null(),null());
HXLINE( 126)			{
HXLINE( 126)				 ::flixel::_hx_system::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN( 126)				 ::Dynamic onComplete = null();
HXDLIN( 126)				if (::hx::IsNull( _this->_channel )) {
HXLINE( 126)					_this->play(null(),null(),null());
            				}
HXDLIN( 126)				if (::hx::IsNotNull( _this->fadeTween )) {
HXLINE( 126)					_this->fadeTween->cancel();
            				}
HXDLIN( 126)				_this->fadeTween = ::flixel::tweens::FlxTween_obj::num(( (Float)(0) ),((Float)0.7),4, ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("onComplete",f8,d4,7e,5d),onComplete)),_this->volumeTween_dyn());
            			}
            		}
HXLINE( 129)		::Conductor_obj::changeBPM(( (Float)(102) ));
HXLINE( 130)		this->persistentUpdate = true;
HXLINE( 140)		::String library = null();
HXDLIN( 140)		::String _hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("scrolling_BG",0f,dc,17,b9)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN( 140)		this->add((this->backdrop =  ::flixel::addons::display::FlxBackdrop_obj::__alloc( HX_CTX ,_hx_tmp,null(),null(),null(),null(),null(),null())));
HXLINE( 141)		this->backdrop->velocity->set(-40,-40);
HXLINE( 143)		this->logoBl =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,0,null());
HXLINE( 144)		 ::flixel::FlxSprite _hx_tmp1 = this->logoBl;
HXDLIN( 144)		::String library1 = null();
HXDLIN( 144)		bool isLocale = false;
HXDLIN( 144)		 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp2;
HXDLIN( 144)		if (isLocale) {
HXLINE( 144)			if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("DDLCStart_Screen_Assets",a2,04,0b,cf)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library1),null())) {
HXLINE( 144)				 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("DDLCStart_Screen_Assets",a2,04,0b,cf),library1,isLocale);
HXDLIN( 144)				_hx_tmp2 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("DDLCStart_Screen_Assets",a2,04,0b,cf)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library1));
            			}
            			else {
HXLINE( 144)				 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("DDLCStart_Screen_Assets",a2,04,0b,cf),library1,isLocale);
HXDLIN( 144)				_hx_tmp2 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("DDLCStart_Screen_Assets",a2,04,0b,cf)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library1));
            			}
            		}
            		else {
HXLINE( 144)			 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("DDLCStart_Screen_Assets",a2,04,0b,cf),library1,null());
HXDLIN( 144)			_hx_tmp2 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("DDLCStart_Screen_Assets",a2,04,0b,cf)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library1));
            		}
HXDLIN( 144)		_hx_tmp1->set_frames(_hx_tmp2);
HXLINE( 145)		this->logoBl->set_antialiasing(true);
HXLINE( 146)		 ::flixel::FlxSprite _hx_tmp3 = this->logoBl;
HXDLIN( 146)		_hx_tmp3->setGraphicSize(::Std_obj::_hx_int((this->logoBl->get_width() * ((Float)0.8))),null());
HXLINE( 147)		this->logoBl->animation->addByPrefix(HX_("bump",f6,0f,20,41),HX_("logo bumpin",70,a1,0b,72),24,false,null(),null());
HXLINE( 148)		this->logoBl->updateHitbox();
HXLINE( 152)		this->gfDance =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,(( (Float)(::flixel::FlxG_obj::width) ) * ((Float)0.4)),(( (Float)(::flixel::FlxG_obj::height) ) * ((Float)0.07)),null());
HXLINE( 153)		 ::flixel::FlxSprite _hx_tmp4 = this->gfDance;
HXDLIN( 153)		::String library2 = null();
HXDLIN( 153)		bool isLocale1 = false;
HXDLIN( 153)		 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp5;
HXDLIN( 153)		if (isLocale1) {
HXLINE( 153)			if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("gfDanceTitle",64,64,d2,7b)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library2),null())) {
HXLINE( 153)				 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("gfDanceTitle",64,64,d2,7b),library2,isLocale1);
HXDLIN( 153)				_hx_tmp5 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("gfDanceTitle",64,64,d2,7b)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library2));
            			}
            			else {
HXLINE( 153)				 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("gfDanceTitle",64,64,d2,7b),library2,isLocale1);
HXDLIN( 153)				_hx_tmp5 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("gfDanceTitle",64,64,d2,7b)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library2));
            			}
            		}
            		else {
HXLINE( 153)			 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("gfDanceTitle",64,64,d2,7b),library2,null());
HXDLIN( 153)			_hx_tmp5 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("gfDanceTitle",64,64,d2,7b)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library2));
            		}
HXDLIN( 153)		_hx_tmp4->set_frames(_hx_tmp5);
HXLINE( 154)		this->gfDance->animation->addByIndices(HX_("danceLeft",da,cc,f9,df),HX_("gfDance",94,88,3a,eb),::Array_obj< int >::fromData( _hx_array_data_8ca18d79_4,16),HX_("",00,00,00,00),24,false,null(),null());
HXLINE( 155)		this->gfDance->animation->addByIndices(HX_("danceRight",a9,7f,a6,91),HX_("gfDance",94,88,3a,eb),::Array_obj< int >::fromData( _hx_array_data_8ca18d79_5,15),HX_("",00,00,00,00),24,false,null(),null());
HXLINE( 156)		this->gfDance->set_antialiasing(true);
HXLINE( 157)		this->add(this->gfDance);
HXLINE( 158)		this->add(this->logoBl);
HXLINE( 160)		this->titleText =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,100,(( (Float)(::flixel::FlxG_obj::height) ) * ((Float)0.8)),null());
HXLINE( 161)		 ::flixel::FlxSprite _hx_tmp6 = this->titleText;
HXDLIN( 161)		 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp7;
HXDLIN( 161)		if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("titleEnter",60,80,6b,82)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("preload",c9,47,43,35)),null())) {
HXLINE( 161)			 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("titleEnter",60,80,6b,82),HX_("preload",c9,47,43,35),true);
HXDLIN( 161)			_hx_tmp7 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("titleEnter",60,80,6b,82)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("preload",c9,47,43,35)));
            		}
            		else {
HXLINE( 161)			 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("titleEnter",60,80,6b,82),HX_("preload",c9,47,43,35),true);
HXDLIN( 161)			_hx_tmp7 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("titleEnter",60,80,6b,82)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("preload",c9,47,43,35)));
            		}
HXDLIN( 161)		_hx_tmp6->set_frames(_hx_tmp7);
HXLINE( 162)		this->titleText->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("Press Enter to Begin",e9,79,2c,83),24,null(),null(),null());
HXLINE( 163)		this->titleText->animation->addByPrefix(HX_("press",83,53,88,c8),HX_("ENTER PRESSED",5a,47,9f,63),24,null(),null(),null());
HXLINE( 164)		this->titleText->set_antialiasing(true);
HXLINE( 165)		this->titleText->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 166)		this->titleText->updateHitbox();
HXLINE( 168)		this->add(this->titleText);
HXLINE( 170)		 ::flixel::FlxSprite logo =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN( 170)		::String library3 = null();
HXDLIN( 170)		::String logo1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("logo",6b,9f,b7,47)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library3);
HXDLIN( 170)		 ::flixel::FlxSprite logo2 = logo->loadGraphic(logo1,null(),null(),null(),null(),null());
HXLINE( 171)		logo2->screenCenter(null());
HXLINE( 172)		logo2->set_antialiasing(true);
HXLINE( 178)		this->credGroup =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE( 179)		this->add(this->credGroup);
HXLINE( 180)		this->textGroup =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE( 182)		this->blackScreen =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null())->makeGraphic(::flixel::FlxG_obj::width,::flixel::FlxG_obj::height,-16777216,null(),null());
HXLINE( 183)		this->credGroup->add(this->blackScreen).StaticCast<  ::flixel::FlxBasic >();
HXLINE( 185)		this->credTextShit =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(0) ),HX_("ninjamuffin99\nPhantomArcade\nkawaisprite\nevilsk8er",fd,7d,e3,3b),true,null());
HXLINE( 186)		this->credTextShit->screenCenter(null());
HXLINE( 190)		this->credTextShit->set_visible(false);
HXLINE( 192)		 ::flixel::FlxSprite _hx_tmp8 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,(( (Float)(::flixel::FlxG_obj::height) ) * ((Float)0.52)),null());
HXDLIN( 192)		::String library4 = null();
HXDLIN( 192)		::String _hx_tmp9 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("newgrounds_logo",1e,5c,8d,a6)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library4);
HXDLIN( 192)		this->ngSpr = _hx_tmp8->loadGraphic(_hx_tmp9,null(),null(),null(),null(),null());
HXLINE( 193)		this->add(this->ngSpr);
HXLINE( 194)		this->ngSpr->set_visible(false);
HXLINE( 195)		 ::flixel::FlxSprite _hx_tmp10 = this->ngSpr;
HXDLIN( 195)		_hx_tmp10->setGraphicSize(::Std_obj::_hx_int((this->ngSpr->get_width() * ((Float)0.8))),null());
HXLINE( 196)		this->ngSpr->updateHitbox();
HXLINE( 197)		this->ngSpr->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
HXLINE( 198)		this->ngSpr->set_antialiasing(true);
HXLINE( 200)		::flixel::tweens::FlxTween_obj::tween(this->credTextShit, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("y",79,00,00,00),(this->credTextShit->y + 20))),((Float)2.9), ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quadInOut_dyn())
            			->setFixed(1,HX_("type",ba,f2,08,4d),4)));
HXLINE( 202)		::flixel::FlxG_obj::mouse->set_visible(false);
HXLINE( 204)		if (::TitleState_obj::initialized) {
HXLINE( 205)			this->skipIntro();
            		}
            		else {
HXLINE( 207)			::TitleState_obj::initialized = true;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TitleState_obj,startIntro,(void))

::Array< ::Dynamic> TitleState_obj::getIntroTextShit(){
            	HX_STACKFRAME(&_hx_pos_a55214e0452daa02_213_getIntroTextShit)
HXLINE( 214)		::String library = null();
HXDLIN( 214)		::String fullText = ::Paths_obj::getPath((HX_("data/introText",d4,d9,bb,0c) + HX_(".txt",02,3f,c0,1e)),HX_("TEXT",ad,94,ba,37),library);
HXDLIN( 214)		::String fullText1 = ::openfl::utils::Assets_obj::getText(fullText);
HXLINE( 216)		::Array< ::String > firstArray = fullText1.split(HX_("\n",0a,00,00,00));
HXLINE( 217)		::Array< ::Dynamic> swagGoodArray = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 219)		{
HXLINE( 219)			int _g = 0;
HXDLIN( 219)			while((_g < firstArray->length)){
HXLINE( 219)				::String i = firstArray->__get(_g);
HXDLIN( 219)				_g = (_g + 1);
HXLINE( 221)				swagGoodArray->push(i.split(HX_("--",60,27,00,00)));
            			}
            		}
HXLINE( 224)		return swagGoodArray;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TitleState_obj,getIntroTextShit,return )

void TitleState_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_a55214e0452daa02_230_update)
HXLINE( 231)		if (::hx::IsNotNull( ::flixel::FlxG_obj::sound->music )) {
HXLINE( 232)			::Conductor_obj::songPosition = ::flixel::FlxG_obj::sound->music->_time;
            		}
HXLINE( 235)		 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 235)		if (_this->keyManager->checkStatus(70,_this->status)) {
HXLINE( 237)			::flixel::FlxG_obj::set_fullscreen(!(::flixel::FlxG_obj::get_fullscreen()));
            		}
HXLINE( 240)		 ::flixel::input::keyboard::FlxKeyList _this1 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 240)		bool pressedEnter = _this1->keyManager->checkStatus(13,_this1->status);
HXLINE( 252)		 ::flixel::input::gamepad::FlxGamepad gamepad = ::flixel::FlxG_obj::gamepads->lastActive;
HXLINE( 254)		if (::hx::IsNotNull( gamepad )) {
HXLINE( 256)			 ::flixel::input::gamepad::lists::FlxGamepadButtonList _this = gamepad->justPressed;
HXDLIN( 256)			int id = 7;
HXDLIN( 256)			 ::flixel::input::gamepad::FlxGamepad _this1 = _this->gamepad;
HXDLIN( 256)			int Status = _this->status;
HXDLIN( 256)			bool _hx_tmp;
HXDLIN( 256)			switch((int)(id)){
            				case (int)-2: {
HXLINE( 256)					_hx_tmp = _this1->anyButton(Status);
            				}
            				break;
            				case (int)-1: {
HXLINE( 256)					_hx_tmp = !(_this1->anyButton(Status));
            				}
            				break;
            				default:{
HXLINE( 256)					int RawID = _this1->mapping->getRawID(id);
HXDLIN( 256)					 ::flixel::input::gamepad::FlxGamepadButton button = _this1->buttons->__get(RawID).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN( 256)					if (::hx::IsNotNull( button )) {
HXLINE( 256)						_hx_tmp = button->hasState(Status);
            					}
            					else {
HXLINE( 256)						_hx_tmp = false;
            					}
            				}
            			}
HXDLIN( 256)			if (_hx_tmp) {
HXLINE( 257)				pressedEnter = true;
            			}
            		}
HXLINE( 265)		bool _hx_tmp;
HXDLIN( 265)		bool _hx_tmp1;
HXDLIN( 265)		if (pressedEnter) {
HXLINE( 265)			_hx_tmp1 = !(this->transitioning);
            		}
            		else {
HXLINE( 265)			_hx_tmp1 = false;
            		}
HXDLIN( 265)		if (_hx_tmp1) {
HXLINE( 265)			_hx_tmp = this->skippedIntro;
            		}
            		else {
HXLINE( 265)			_hx_tmp = false;
            		}
HXDLIN( 265)		if (_hx_tmp) {
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            			void _hx_run( ::flixel::util::FlxTimer tmr){
            				HX_GC_STACKFRAME(&_hx_pos_a55214e0452daa02_278_update)
HXLINE( 278)				if (!(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("funnyquestionpopup",bc,24,5f,b0),::hx::paccDynamic)) ))) {
HXLINE( 280)					 ::flixel::FlxState nextState =  ::OutdatedSubState_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 280)					if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 280)						::flixel::FlxG_obj::game->_requestedState = nextState;
            					}
            				}
            				else {
HXLINE( 285)					 ::flixel::FlxState nextState =  ::MainMenuState_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 285)					if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 285)						::flixel::FlxG_obj::game->_requestedState = nextState;
            					}
            				}
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE( 267)			if (( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("flashing",32,85,e8,99),::hx::paccDynamic)) )) {
HXLINE( 268)				this->titleText->animation->play(HX_("press",83,53,88,c8),null(),null(),null());
            			}
HXLINE( 270)			::flixel::FlxG_obj::camera->flash(-1,1,null(),null());
HXLINE( 271)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 271)			_hx_tmp->play(::Paths_obj::sound(HX_("confirmMenu",bf,8e,fe,3c),null()),((Float)0.7),null(),null(),null(),null());
HXLINE( 273)			this->transitioning = true;
HXLINE( 276)			 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(2, ::Dynamic(new _hx_Closure_0()),null());
            		}
HXLINE( 290)		bool _hx_tmp2;
HXDLIN( 290)		bool _hx_tmp3;
HXDLIN( 290)		if (pressedEnter) {
HXLINE( 290)			_hx_tmp3 = !(this->skippedIntro);
            		}
            		else {
HXLINE( 290)			_hx_tmp3 = false;
            		}
HXDLIN( 290)		if (_hx_tmp3) {
HXLINE( 290)			_hx_tmp2 = ::TitleState_obj::initialized;
            		}
            		else {
HXLINE( 290)			_hx_tmp2 = false;
            		}
HXDLIN( 290)		if (_hx_tmp2) {
HXLINE( 292)			this->skipIntro();
            		}
HXLINE( 295)		this->super::update(elapsed);
            	}


void TitleState_obj::createCoolText(::Array< ::String > textArray){
            	HX_GC_STACKFRAME(&_hx_pos_a55214e0452daa02_300_createCoolText)
HXDLIN( 300)		int _g = 0;
HXDLIN( 300)		int _g1 = textArray->length;
HXDLIN( 300)		while((_g < _g1)){
HXDLIN( 300)			_g = (_g + 1);
HXDLIN( 300)			int i = (_g - 1);
HXLINE( 302)			 ::Alphabet money =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(0) ),textArray->__get(i),true,false);
HXLINE( 303)			money->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
HXLINE( 304)			money->set_y((money->y + ((i * 60) + 200)));
HXLINE( 305)			this->credGroup->add(money).StaticCast<  ::flixel::FlxBasic >();
HXLINE( 306)			this->textGroup->add(money).StaticCast<  ::flixel::FlxBasic >();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(TitleState_obj,createCoolText,(void))

void TitleState_obj::addMoreText(::String text){
            	HX_GC_STACKFRAME(&_hx_pos_a55214e0452daa02_311_addMoreText)
HXLINE( 312)		 ::Alphabet coolText =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(0) ),text,true,false);
HXLINE( 313)		coolText->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
HXLINE( 314)		coolText->set_y((coolText->y + ((this->textGroup->length * 60) + 200)));
HXLINE( 315)		this->credGroup->add(coolText).StaticCast<  ::flixel::FlxBasic >();
HXLINE( 316)		this->textGroup->add(coolText).StaticCast<  ::flixel::FlxBasic >();
            	}


HX_DEFINE_DYNAMIC_FUNC1(TitleState_obj,addMoreText,(void))

void TitleState_obj::deleteCoolText(){
            	HX_STACKFRAME(&_hx_pos_a55214e0452daa02_321_deleteCoolText)
HXDLIN( 321)		while((this->textGroup->members->get_length() > 0)){
HXLINE( 323)			this->credGroup->remove(Dynamic( this->textGroup->members->__get(0)).StaticCast<  ::flixel::FlxBasic >(),true).StaticCast<  ::flixel::FlxBasic >();
HXLINE( 324)			this->textGroup->remove(Dynamic( this->textGroup->members->__get(0)).StaticCast<  ::flixel::FlxBasic >(),true).StaticCast<  ::flixel::FlxBasic >();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TitleState_obj,deleteCoolText,(void))

void TitleState_obj::beatHit(){
            	HX_STACKFRAME(&_hx_pos_a55214e0452daa02_329_beatHit)
HXLINE( 330)		this->super::beatHit();
HXLINE( 332)		this->logoBl->animation->play(HX_("bump",f6,0f,20,41),true,null(),null());
HXLINE( 333)		this->danceLeft = !(this->danceLeft);
HXLINE( 335)		if (this->danceLeft) {
HXLINE( 336)			this->gfDance->animation->play(HX_("danceRight",a9,7f,a6,91),null(),null(),null());
            		}
            		else {
HXLINE( 338)			this->gfDance->animation->play(HX_("danceLeft",da,cc,f9,df),null(),null(),null());
            		}
HXLINE( 342)		switch((int)(this->curBeat)){
            			case (int)1: {
HXLINE( 345)				this->createCoolText(::Array_obj< ::String >::fromData( _hx_array_data_8ca18d79_16,1));
            			}
            			break;
            			case (int)3: {
HXLINE( 348)				this->deleteCoolText();
HXLINE( 349)				this->createCoolText(::Array_obj< ::String >::fromData( _hx_array_data_8ca18d79_17,1));
HXLINE( 350)				this->addMoreText(HX_("presents",18,61,d7,66));
            			}
            			break;
            			case (int)4: {
HXLINE( 354)				this->deleteCoolText();
            			}
            			break;
            			case (int)5: {
HXLINE( 359)				if (::Main_obj::watermarks) {
HXLINE( 360)					this->createCoolText(::Array_obj< ::String >::fromData( _hx_array_data_8ca18d79_18,2));
            				}
            			}
            			break;
            			case (int)7: {
HXLINE( 362)				if (::Main_obj::watermarks) {
HXLINE( 363)					this->addMoreText(HX_("Kade Engine",2b,76,5c,f8));
            				}
            				else {
HXLINE( 366)					this->addMoreText(HX_("Newgrounds",cc,13,58,ed));
HXLINE( 367)					this->ngSpr->set_visible(true);
            				}
            			}
            			break;
            			case (int)8: {
HXLINE( 371)				this->deleteCoolText();
HXLINE( 372)				this->ngSpr->set_visible(false);
            			}
            			break;
            			case (int)9: {
HXLINE( 378)				this->createCoolText(::Array_obj< ::String >::__new(1)->init(0,this->curWacky->__get(0)));
            			}
            			break;
            			case (int)11: {
HXLINE( 381)				this->addMoreText(this->curWacky->__get(1));
            			}
            			break;
            			case (int)12: {
HXLINE( 384)				this->deleteCoolText();
            			}
            			break;
            			case (int)13: {
            			}
            			break;
            			case (int)14: {
HXLINE( 392)				this->addMoreText(HX_("Doki",09,1a,47,2d));
            			}
            			break;
            			case (int)15: {
HXLINE( 395)				this->addMoreText(HX_("Doki",09,1a,47,2d));
            			}
            			break;
            			case (int)16: {
HXLINE( 398)				this->skipIntro();
            			}
            			break;
            		}
            	}


void TitleState_obj::skipIntro(){
            	HX_STACKFRAME(&_hx_pos_a55214e0452daa02_406_skipIntro)
HXDLIN( 406)		if (!(this->skippedIntro)) {
HXLINE( 408)			 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN( 408)			::String _hx_tmp1 = (HX_("langauge set to ",a7,fb,71,af) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic))));
HXDLIN( 408)			_hx_tmp(_hx_tmp1,::hx::SourceInfo(HX_("source/TitleState.hx",71,4f,0c,46),408,HX_("TitleState",79,8d,a1,8c),HX_("skipIntro",6d,37,1c,d2)));
HXLINE( 410)			this->remove(this->ngSpr,null());
HXLINE( 412)			::flixel::FlxG_obj::camera->flash(-1,4,null(),null());
HXLINE( 413)			this->remove(this->credGroup,null());
HXLINE( 414)			this->skippedIntro = true;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TitleState_obj,skipIntro,(void))

bool TitleState_obj::initialized;


::hx::ObjectPtr< TitleState_obj > TitleState_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< TitleState_obj > __this = new TitleState_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< TitleState_obj > TitleState_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	TitleState_obj *__this = (TitleState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TitleState_obj), true, "TitleState"));
	*(void **)__this = TitleState_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

TitleState_obj::TitleState_obj()
{
}

void TitleState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TitleState);
	HX_MARK_MEMBER_NAME(blackScreen,"blackScreen");
	HX_MARK_MEMBER_NAME(credGroup,"credGroup");
	HX_MARK_MEMBER_NAME(credTextShit,"credTextShit");
	HX_MARK_MEMBER_NAME(textGroup,"textGroup");
	HX_MARK_MEMBER_NAME(ngSpr,"ngSpr");
	HX_MARK_MEMBER_NAME(curWacky,"curWacky");
	HX_MARK_MEMBER_NAME(wackyImage,"wackyImage");
	HX_MARK_MEMBER_NAME(logoBl,"logoBl");
	HX_MARK_MEMBER_NAME(gfDance,"gfDance");
	HX_MARK_MEMBER_NAME(backdrop,"backdrop");
	HX_MARK_MEMBER_NAME(danceLeft,"danceLeft");
	HX_MARK_MEMBER_NAME(titleText,"titleText");
	HX_MARK_MEMBER_NAME(transitioning,"transitioning");
	HX_MARK_MEMBER_NAME(skippedIntro,"skippedIntro");
	 ::MusicBeatState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TitleState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(blackScreen,"blackScreen");
	HX_VISIT_MEMBER_NAME(credGroup,"credGroup");
	HX_VISIT_MEMBER_NAME(credTextShit,"credTextShit");
	HX_VISIT_MEMBER_NAME(textGroup,"textGroup");
	HX_VISIT_MEMBER_NAME(ngSpr,"ngSpr");
	HX_VISIT_MEMBER_NAME(curWacky,"curWacky");
	HX_VISIT_MEMBER_NAME(wackyImage,"wackyImage");
	HX_VISIT_MEMBER_NAME(logoBl,"logoBl");
	HX_VISIT_MEMBER_NAME(gfDance,"gfDance");
	HX_VISIT_MEMBER_NAME(backdrop,"backdrop");
	HX_VISIT_MEMBER_NAME(danceLeft,"danceLeft");
	HX_VISIT_MEMBER_NAME(titleText,"titleText");
	HX_VISIT_MEMBER_NAME(transitioning,"transitioning");
	HX_VISIT_MEMBER_NAME(skippedIntro,"skippedIntro");
	 ::MusicBeatState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val TitleState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"ngSpr") ) { return ::hx::Val( ngSpr ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"logoBl") ) { return ::hx::Val( logoBl ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"gfDance") ) { return ::hx::Val( gfDance ); }
		if (HX_FIELD_EQ(inName,"beatHit") ) { return ::hx::Val( beatHit_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"curWacky") ) { return ::hx::Val( curWacky ); }
		if (HX_FIELD_EQ(inName,"backdrop") ) { return ::hx::Val( backdrop ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"credGroup") ) { return ::hx::Val( credGroup ); }
		if (HX_FIELD_EQ(inName,"textGroup") ) { return ::hx::Val( textGroup ); }
		if (HX_FIELD_EQ(inName,"danceLeft") ) { return ::hx::Val( danceLeft ); }
		if (HX_FIELD_EQ(inName,"titleText") ) { return ::hx::Val( titleText ); }
		if (HX_FIELD_EQ(inName,"skipIntro") ) { return ::hx::Val( skipIntro_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"wackyImage") ) { return ::hx::Val( wackyImage ); }
		if (HX_FIELD_EQ(inName,"startIntro") ) { return ::hx::Val( startIntro_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"blackScreen") ) { return ::hx::Val( blackScreen ); }
		if (HX_FIELD_EQ(inName,"addMoreText") ) { return ::hx::Val( addMoreText_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"credTextShit") ) { return ::hx::Val( credTextShit ); }
		if (HX_FIELD_EQ(inName,"skippedIntro") ) { return ::hx::Val( skippedIntro ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"transitioning") ) { return ::hx::Val( transitioning ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"createCoolText") ) { return ::hx::Val( createCoolText_dyn() ); }
		if (HX_FIELD_EQ(inName,"deleteCoolText") ) { return ::hx::Val( deleteCoolText_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getIntroTextShit") ) { return ::hx::Val( getIntroTextShit_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool TitleState_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { outValue = ( initialized ); return true; }
	}
	return false;
}

::hx::Val TitleState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"ngSpr") ) { ngSpr=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"logoBl") ) { logoBl=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"gfDance") ) { gfDance=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"curWacky") ) { curWacky=inValue.Cast< ::Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"backdrop") ) { backdrop=inValue.Cast<  ::flixel::addons::display::FlxBackdrop >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"credGroup") ) { credGroup=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textGroup") ) { textGroup=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"danceLeft") ) { danceLeft=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"titleText") ) { titleText=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"wackyImage") ) { wackyImage=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"blackScreen") ) { blackScreen=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"credTextShit") ) { credTextShit=inValue.Cast<  ::Alphabet >(); return inValue; }
		if (HX_FIELD_EQ(inName,"skippedIntro") ) { skippedIntro=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"transitioning") ) { transitioning=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TitleState_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { initialized=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

void TitleState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("blackScreen",8b,de,f4,5d));
	outFields->push(HX_("credGroup",91,7f,9c,9c));
	outFields->push(HX_("credTextShit",fb,55,c1,3c));
	outFields->push(HX_("textGroup",52,43,e2,32));
	outFields->push(HX_("ngSpr",7c,26,68,9a));
	outFields->push(HX_("curWacky",67,31,c6,0c));
	outFields->push(HX_("wackyImage",d4,7e,d6,81));
	outFields->push(HX_("logoBl",15,ca,6e,5c));
	outFields->push(HX_("gfDance",94,88,3a,eb));
	outFields->push(HX_("backdrop",d6,b1,96,1a));
	outFields->push(HX_("danceLeft",da,cc,f9,df));
	outFields->push(HX_("titleText",65,ba,a4,70));
	outFields->push(HX_("transitioning",6d,6a,93,94));
	outFields->push(HX_("skippedIntro",9c,44,26,49));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TitleState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(TitleState_obj,blackScreen),HX_("blackScreen",8b,de,f4,5d)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(TitleState_obj,credGroup),HX_("credGroup",91,7f,9c,9c)},
	{::hx::fsObject /*  ::Alphabet */ ,(int)offsetof(TitleState_obj,credTextShit),HX_("credTextShit",fb,55,c1,3c)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(TitleState_obj,textGroup),HX_("textGroup",52,43,e2,32)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(TitleState_obj,ngSpr),HX_("ngSpr",7c,26,68,9a)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(TitleState_obj,curWacky),HX_("curWacky",67,31,c6,0c)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(TitleState_obj,wackyImage),HX_("wackyImage",d4,7e,d6,81)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(TitleState_obj,logoBl),HX_("logoBl",15,ca,6e,5c)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(TitleState_obj,gfDance),HX_("gfDance",94,88,3a,eb)},
	{::hx::fsObject /*  ::flixel::addons::display::FlxBackdrop */ ,(int)offsetof(TitleState_obj,backdrop),HX_("backdrop",d6,b1,96,1a)},
	{::hx::fsBool,(int)offsetof(TitleState_obj,danceLeft),HX_("danceLeft",da,cc,f9,df)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(TitleState_obj,titleText),HX_("titleText",65,ba,a4,70)},
	{::hx::fsBool,(int)offsetof(TitleState_obj,transitioning),HX_("transitioning",6d,6a,93,94)},
	{::hx::fsBool,(int)offsetof(TitleState_obj,skippedIntro),HX_("skippedIntro",9c,44,26,49)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo TitleState_obj_sStaticStorageInfo[] = {
	{::hx::fsBool,(void *) &TitleState_obj::initialized,HX_("initialized",14,f5,0f,37)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String TitleState_obj_sMemberFields[] = {
	HX_("blackScreen",8b,de,f4,5d),
	HX_("credGroup",91,7f,9c,9c),
	HX_("credTextShit",fb,55,c1,3c),
	HX_("textGroup",52,43,e2,32),
	HX_("ngSpr",7c,26,68,9a),
	HX_("curWacky",67,31,c6,0c),
	HX_("wackyImage",d4,7e,d6,81),
	HX_("create",fc,66,0f,7c),
	HX_("logoBl",15,ca,6e,5c),
	HX_("gfDance",94,88,3a,eb),
	HX_("backdrop",d6,b1,96,1a),
	HX_("danceLeft",da,cc,f9,df),
	HX_("titleText",65,ba,a4,70),
	HX_("startIntro",aa,a2,37,da),
	HX_("getIntroTextShit",23,9f,f3,eb),
	HX_("transitioning",6d,6a,93,94),
	HX_("update",09,86,05,87),
	HX_("createCoolText",32,cb,41,41),
	HX_("addMoreText",23,fe,9f,87),
	HX_("deleteCoolText",61,6b,de,48),
	HX_("beatHit",7d,ea,04,74),
	HX_("skippedIntro",9c,44,26,49),
	HX_("skipIntro",6d,37,1c,d2),
	::String(null()) };

static void TitleState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TitleState_obj::initialized,"initialized");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TitleState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TitleState_obj::initialized,"initialized");
};

#endif

::hx::Class TitleState_obj::__mClass;

static ::String TitleState_obj_sStaticFields[] = {
	HX_("initialized",14,f5,0f,37),
	::String(null())
};

void TitleState_obj::__register()
{
	TitleState_obj _hx_dummy;
	TitleState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("TitleState",79,8d,a1,8c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TitleState_obj::__GetStatic;
	__mClass->mSetStaticField = &TitleState_obj::__SetStatic;
	__mClass->mMarkFunc = TitleState_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(TitleState_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TitleState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TitleState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TitleState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TitleState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TitleState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void TitleState_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_a55214e0452daa02_34_boot)
HXDLIN(  34)		initialized = false;
            	}
}

