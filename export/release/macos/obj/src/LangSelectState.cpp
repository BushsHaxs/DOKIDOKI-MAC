#include <hxcpp.h>

#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_CoolUtil
#include <CoolUtil.h>
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
#ifndef INCLUDED_flixel_effects_FlxFlicker
#include <flixel/effects/FlxFlicker.h>
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
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1a9faffb05dbad7b_14_new,"LangSelectState","new",0x0ab4ce79,"LangSelectState.new","LangSelectState.hx",14,0xfee66317)
HX_LOCAL_STACK_FRAME(_hx_pos_1a9faffb05dbad7b_26_create,"LangSelectState","create",0x22677e83,"LangSelectState.create","LangSelectState.hx",26,0xfee66317)
HX_LOCAL_STACK_FRAME(_hx_pos_1a9faffb05dbad7b_67_update,"LangSelectState","update",0x2d5d9d90,"LangSelectState.update","LangSelectState.hx",67,0xfee66317)
HX_LOCAL_STACK_FRAME(_hx_pos_1a9faffb05dbad7b_98_update,"LangSelectState","update",0x2d5d9d90,"LangSelectState.update","LangSelectState.hx",98,0xfee66317)
HX_LOCAL_STACK_FRAME(_hx_pos_1a9faffb05dbad7b_111_update,"LangSelectState","update",0x2d5d9d90,"LangSelectState.update","LangSelectState.hx",111,0xfee66317)
HX_LOCAL_STACK_FRAME(_hx_pos_1a9faffb05dbad7b_117_update,"LangSelectState","update",0x2d5d9d90,"LangSelectState.update","LangSelectState.hx",117,0xfee66317)
HX_LOCAL_STACK_FRAME(_hx_pos_1a9faffb05dbad7b_126_update,"LangSelectState","update",0x2d5d9d90,"LangSelectState.update","LangSelectState.hx",126,0xfee66317)
HX_LOCAL_STACK_FRAME(_hx_pos_1a9faffb05dbad7b_136_update,"LangSelectState","update",0x2d5d9d90,"LangSelectState.update","LangSelectState.hx",136,0xfee66317)

void LangSelectState_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_1a9faffb05dbad7b_14_new)
HXLINE(  64)		this->selectedSomethin = false;
HXLINE(  19)		this->curSelected = 0;
HXLINE(  17)		this->localeList = ::Array_obj< ::String >::__new(0);
HXLINE(  16)		this->textMenuItems = ::Array_obj< ::String >::__new(0);
HXLINE(  14)		super::__construct(TransIn,TransOut);
            	}

Dynamic LangSelectState_obj::__CreateEmpty() { return new LangSelectState_obj; }

void *LangSelectState_obj::_hx_vtable = 0;

Dynamic LangSelectState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< LangSelectState_obj > _hx_result = new LangSelectState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool LangSelectState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3f706236) {
		if (inClassId<=(int)0x27f45263) {
			if (inClassId<=(int)0x23a57bae) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x23a57bae;
			} else {
				return inClassId==(int)0x27f45263;
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

void LangSelectState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_1a9faffb05dbad7b_26_create)
HXLINE(  27)		this->persistentUpdate = (this->persistentDraw = true);
HXLINE(  29)		::String library = null();
HXDLIN(  29)		::String _hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("scrolling_BG",0f,dc,17,b9)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN(  29)		this->add((this->backdrop =  ::flixel::addons::display::FlxBackdrop_obj::__alloc( HX_CTX ,_hx_tmp,null(),null(),null(),null(),null(),null())));
HXLINE(  30)		this->backdrop->velocity->set(-40,-40);
HXLINE(  32)		::String library1 = null();
HXDLIN(  32)		::String languageList = ::Paths_obj::getPath((HX_("locale/languageList",ab,12,e4,2d) + HX_(".txt",02,3f,c0,1e)),HX_("TEXT",ad,94,ba,37),library1);
HXDLIN(  32)		::Array< ::String > languageList1 = ::CoolUtil_obj::coolTextFile(languageList);
HXLINE(  34)		{
HXLINE(  34)			int _g = 0;
HXDLIN(  34)			int _g1 = languageList1->length;
HXDLIN(  34)			while((_g < _g1)){
HXLINE(  34)				_g = (_g + 1);
HXDLIN(  34)				int i = (_g - 1);
HXLINE(  36)				::Array< ::String > data = languageList1->__get(i).split(HX_(":",3a,00,00,00));
HXLINE(  37)				this->textMenuItems->push(data->__get(0));
HXLINE(  38)				this->localeList->push(data->__get(1));
            			}
            		}
HXLINE(  41)		this->grpOptionsTexts =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  42)		this->add(this->grpOptionsTexts);
HXLINE(  44)		 ::flixel::text::FlxText titleText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,0,20,0,::LangUtil_obj::getString(HX_("optLanguage",ab,c3,2b,ea)),null(),null());
HXLINE(  45)		titleText->setFormat(::LangUtil_obj::getFont(HX_("riffic",51,90,7b,4d)),48,-1,HX_("center",d5,25,db,05),null(),null(),null());
HXLINE(  46)		{
HXLINE(  46)			titleText->set_borderStyle(::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn());
HXDLIN(  46)			titleText->set_borderColor(-33537);
HXDLIN(  46)			titleText->set_borderSize(( (Float)(3) ));
HXDLIN(  46)			titleText->set_borderQuality(( (Float)(1) ));
            		}
HXLINE(  47)		titleText->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
HXLINE(  48)		titleText->set_antialiasing(true);
HXLINE(  49)		this->add(titleText);
HXLINE(  51)		{
HXLINE(  51)			int _g2 = 0;
HXDLIN(  51)			int _g3 = this->textMenuItems->length;
HXDLIN(  51)			while((_g2 < _g3)){
HXLINE(  51)				_g2 = (_g2 + 1);
HXDLIN(  51)				int i = (_g2 - 1);
HXLINE(  53)				Float optionText = ((titleText->get_height() + 50) + (i * 50));
HXDLIN(  53)				 ::flixel::text::FlxText optionText1 =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,0,optionText,0,this->textMenuItems->__get(i),null(),null());
HXLINE(  54)				optionText1->setFormat(::LangUtil_obj::getFont(HX_("riffic",51,90,7b,4d)),32,-1,HX_("center",d5,25,db,05),null(),null(),null());
HXLINE(  55)				optionText1->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
HXLINE(  56)				optionText1->set_antialiasing(true);
HXLINE(  57)				optionText1->ID = i;
HXLINE(  58)				this->grpOptionsTexts->add(optionText1).StaticCast<  ::flixel::text::FlxText >();
            			}
            		}
HXLINE(  61)		this->super::create();
            	}


void LangSelectState_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_1a9faffb05dbad7b_67_update)
HXDLIN(  67)		 ::LangSelectState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  68)		this->super::update(elapsed);
HXLINE(  70)		if (!(this->selectedSomethin)) {
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::LangSelectState,_gthis) HXARGC(1)
            			void _hx_run( ::flixel::text::FlxText txt){
            				HX_GC_STACKFRAME(&_hx_pos_1a9faffb05dbad7b_98_update)
HXLINE(  99)				{
HXLINE(  99)					txt->set_borderStyle(::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn());
HXDLIN(  99)					txt->set_borderColor(-33537);
HXDLIN(  99)					txt->set_borderSize(( (Float)(2) ));
HXDLIN(  99)					txt->set_borderQuality(( (Float)(1) ));
            				}
HXLINE( 101)				if ((txt->ID == _gthis->curSelected)) {
HXLINE( 102)					txt->set_borderStyle(::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn());
HXDLIN( 102)					txt->set_borderColor(-12289);
HXDLIN( 102)					txt->set_borderSize(( (Float)(2) ));
HXDLIN( 102)					txt->set_borderQuality(( (Float)(1) ));
            				}
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE(  72)			if (::PlayerSettings_obj::player1->controls->_back->check()) {
HXLINE(  74)				this->selectedSomethin = true;
HXLINE(  75)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(  75)				_hx_tmp->play(::Paths_obj::sound(HX_("cancelMenu",39,a4,43,b7),null()),null(),null(),null(),null(),null());
HXLINE(  76)				{
HXLINE(  76)					 ::flixel::FlxState nextState =  ::MainMenuState_obj::__alloc( HX_CTX ,null(),null());
HXDLIN(  76)					if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE(  76)						::flixel::FlxG_obj::game->_requestedState = nextState;
            					}
            				}
            			}
HXLINE(  79)			if (::PlayerSettings_obj::player1->controls->_upP->check()) {
HXLINE(  81)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(  81)				_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
HXLINE(  82)				 ::LangSelectState _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  82)				_hx_tmp1->curSelected = (_hx_tmp1->curSelected - 1);
            			}
HXLINE(  85)			if (::PlayerSettings_obj::player1->controls->_downP->check()) {
HXLINE(  87)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(  87)				_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
HXLINE(  88)				 ::LangSelectState _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  88)				_hx_tmp1->curSelected = (_hx_tmp1->curSelected + 1);
            			}
HXLINE(  91)			if ((this->curSelected < 0)) {
HXLINE(  92)				this->curSelected = (this->textMenuItems->length - 1);
            			}
HXLINE(  94)			if ((this->curSelected >= this->textMenuItems->length)) {
HXLINE(  95)				this->curSelected = 0;
            			}
HXLINE(  97)			this->grpOptionsTexts->forEach( ::Dynamic(new _hx_Closure_0(_gthis)),null());
HXLINE( 105)			if (::PlayerSettings_obj::player1->controls->_accept->check()) {
            				HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_4, ::LangSelectState,_gthis) HXARGC(1)
            				void _hx_run( ::flixel::text::FlxText txt){
            					HX_GC_STACKFRAME(&_hx_pos_1a9faffb05dbad7b_111_update)
HXLINE( 111)					if ((_gthis->curSelected != txt->ID)) {
            						HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::flixel::text::FlxText,txt) HXARGC(1)
            						void _hx_run( ::flixel::tweens::FlxTween twn){
            							HX_GC_STACKFRAME(&_hx_pos_1a9faffb05dbad7b_117_update)
HXLINE( 117)							txt->kill();
            						}
            						HX_END_LOCAL_FUNC1((void))

HXLINE( 113)						::flixel::tweens::FlxTween_obj::tween(txt, ::Dynamic(::hx::Anon_obj::Create(1)
            							->setFixed(0,HX_("alpha",5e,a7,96,21),0)),((Float)1.3), ::Dynamic(::hx::Anon_obj::Create(2)
            							->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quadOut_dyn())
            							->setFixed(1,HX_("onComplete",f8,d4,7e,5d), ::Dynamic(new _hx_Closure_1(txt)))));
            					}
            					else {
HXLINE( 123)						if (( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("flashing",32,85,e8,99),::hx::paccDynamic)) )) {
            							HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_2, ::LangSelectState,_gthis) HXARGC(1)
            							void _hx_run( ::flixel::effects::FlxFlicker flick){
            								HX_GC_STACKFRAME(&_hx_pos_1a9faffb05dbad7b_126_update)
HXLINE( 127)								::flixel::FlxG_obj::save->data->__SetField(HX_("language",58,80,11,7a),_gthis->localeList->__get(_gthis->curSelected),::hx::paccDynamic);
HXLINE( 128)								 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN( 128)								::String _hx_tmp1 = (HX_("langauge set to ",a7,fb,71,af) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic))));
HXDLIN( 128)								_hx_tmp(_hx_tmp1,::hx::SourceInfo(HX_("source/LangSelectState.hx",0b,3f,02,46),128,HX_("LangSelectState",07,1e,c4,2c),HX_("update",09,86,05,87)));
HXLINE( 129)								::String _hx_tmp2;
HXDLIN( 129)								if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/",2f,00,00,00) + HX_("data/textData",3c,85,6a,69)) + HX_(".txt",02,3f,c0,1e))),HX_("TEXT",ad,94,ba,37),HX_("preload",c9,47,43,35)),null())) {
HXLINE( 129)									_hx_tmp2 = ::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/",2f,00,00,00) + HX_("data/textData",3c,85,6a,69)) + HX_(".txt",02,3f,c0,1e))),HX_("TEXT",ad,94,ba,37),HX_("preload",c9,47,43,35));
            								}
            								else {
HXLINE( 129)									_hx_tmp2 = ::Paths_obj::getPath(((HX_("locale/en-US/",02,23,bf,a8) + HX_("data/textData",3c,85,6a,69)) + HX_(".txt",02,3f,c0,1e)),HX_("TEXT",ad,94,ba,37),HX_("preload",c9,47,43,35));
            								}
HXDLIN( 129)								::LangUtil_obj::localeList = ::CoolUtil_obj::coolTextFile(_hx_tmp2);
HXLINE( 130)								{
HXLINE( 130)									 ::flixel::FlxState nextState =  ::MainMenuState_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 130)									if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 130)										::flixel::FlxG_obj::game->_requestedState = nextState;
            									}
            								}
            							}
            							HX_END_LOCAL_FUNC1((void))

HXLINE( 125)							::flixel::effects::FlxFlicker_obj::flicker(txt,1,((Float)0.06),false,false, ::Dynamic(new _hx_Closure_2(_gthis)),null());
            						}
            						else {
            							HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_3, ::LangSelectState,_gthis) HXARGC(1)
            							void _hx_run( ::flixel::util::FlxTimer tmr){
            								HX_GC_STACKFRAME(&_hx_pos_1a9faffb05dbad7b_136_update)
HXLINE( 137)								::flixel::FlxG_obj::save->data->__SetField(HX_("language",58,80,11,7a),_gthis->localeList->__get(_gthis->curSelected),::hx::paccDynamic);
HXLINE( 138)								 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN( 138)								::String _hx_tmp1 = (HX_("langauge set to ",a7,fb,71,af) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic))));
HXDLIN( 138)								_hx_tmp(_hx_tmp1,::hx::SourceInfo(HX_("source/LangSelectState.hx",0b,3f,02,46),138,HX_("LangSelectState",07,1e,c4,2c),HX_("update",09,86,05,87)));
HXLINE( 139)								::String _hx_tmp2;
HXDLIN( 139)								if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/",2f,00,00,00) + HX_("data/textData",3c,85,6a,69)) + HX_(".txt",02,3f,c0,1e))),HX_("TEXT",ad,94,ba,37),HX_("preload",c9,47,43,35)),null())) {
HXLINE( 139)									_hx_tmp2 = ::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/",2f,00,00,00) + HX_("data/textData",3c,85,6a,69)) + HX_(".txt",02,3f,c0,1e))),HX_("TEXT",ad,94,ba,37),HX_("preload",c9,47,43,35));
            								}
            								else {
HXLINE( 139)									_hx_tmp2 = ::Paths_obj::getPath(((HX_("locale/en-US/",02,23,bf,a8) + HX_("data/textData",3c,85,6a,69)) + HX_(".txt",02,3f,c0,1e)),HX_("TEXT",ad,94,ba,37),HX_("preload",c9,47,43,35));
            								}
HXDLIN( 139)								::LangUtil_obj::localeList = ::CoolUtil_obj::coolTextFile(_hx_tmp2);
HXLINE( 140)								{
HXLINE( 140)									 ::flixel::FlxState nextState =  ::MainMenuState_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 140)									if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 140)										::flixel::FlxG_obj::game->_requestedState = nextState;
            									}
            								}
            							}
            							HX_END_LOCAL_FUNC1((void))

HXLINE( 135)							 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(1, ::Dynamic(new _hx_Closure_3(_gthis)),null());
            						}
            					}
            				}
            				HX_END_LOCAL_FUNC1((void))

HXLINE( 107)				this->selectedSomethin = true;
HXLINE( 108)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 108)				_hx_tmp->play(::Paths_obj::sound(HX_("confirmMenu",bf,8e,fe,3c),null()),null(),null(),null(),null(),null());
HXLINE( 109)				this->grpOptionsTexts->forEach( ::Dynamic(new _hx_Closure_4(_gthis)),null());
            			}
            		}
            	}



::hx::ObjectPtr< LangSelectState_obj > LangSelectState_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< LangSelectState_obj > __this = new LangSelectState_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< LangSelectState_obj > LangSelectState_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	LangSelectState_obj *__this = (LangSelectState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(LangSelectState_obj), true, "LangSelectState"));
	*(void **)__this = LangSelectState_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

LangSelectState_obj::LangSelectState_obj()
{
}

void LangSelectState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LangSelectState);
	HX_MARK_MEMBER_NAME(textMenuItems,"textMenuItems");
	HX_MARK_MEMBER_NAME(localeList,"localeList");
	HX_MARK_MEMBER_NAME(curSelected,"curSelected");
	HX_MARK_MEMBER_NAME(backdrop,"backdrop");
	HX_MARK_MEMBER_NAME(grpOptionsTexts,"grpOptionsTexts");
	HX_MARK_MEMBER_NAME(selectedSomethin,"selectedSomethin");
	 ::MusicBeatState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void LangSelectState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(textMenuItems,"textMenuItems");
	HX_VISIT_MEMBER_NAME(localeList,"localeList");
	HX_VISIT_MEMBER_NAME(curSelected,"curSelected");
	HX_VISIT_MEMBER_NAME(backdrop,"backdrop");
	HX_VISIT_MEMBER_NAME(grpOptionsTexts,"grpOptionsTexts");
	HX_VISIT_MEMBER_NAME(selectedSomethin,"selectedSomethin");
	 ::MusicBeatState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val LangSelectState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"backdrop") ) { return ::hx::Val( backdrop ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"localeList") ) { return ::hx::Val( localeList ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { return ::hx::Val( curSelected ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"textMenuItems") ) { return ::hx::Val( textMenuItems ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"grpOptionsTexts") ) { return ::hx::Val( grpOptionsTexts ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"selectedSomethin") ) { return ::hx::Val( selectedSomethin ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val LangSelectState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"backdrop") ) { backdrop=inValue.Cast<  ::flixel::addons::display::FlxBackdrop >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"localeList") ) { localeList=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { curSelected=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"textMenuItems") ) { textMenuItems=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"grpOptionsTexts") ) { grpOptionsTexts=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"selectedSomethin") ) { selectedSomethin=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LangSelectState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("textMenuItems",74,ab,77,14));
	outFields->push(HX_("localeList",18,12,cb,fe));
	outFields->push(HX_("curSelected",fb,eb,ab,32));
	outFields->push(HX_("backdrop",d6,b1,96,1a));
	outFields->push(HX_("grpOptionsTexts",6d,2e,b1,bf));
	outFields->push(HX_("selectedSomethin",c8,ec,fb,99));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo LangSelectState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(LangSelectState_obj,textMenuItems),HX_("textMenuItems",74,ab,77,14)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(LangSelectState_obj,localeList),HX_("localeList",18,12,cb,fe)},
	{::hx::fsInt,(int)offsetof(LangSelectState_obj,curSelected),HX_("curSelected",fb,eb,ab,32)},
	{::hx::fsObject /*  ::flixel::addons::display::FlxBackdrop */ ,(int)offsetof(LangSelectState_obj,backdrop),HX_("backdrop",d6,b1,96,1a)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(LangSelectState_obj,grpOptionsTexts),HX_("grpOptionsTexts",6d,2e,b1,bf)},
	{::hx::fsBool,(int)offsetof(LangSelectState_obj,selectedSomethin),HX_("selectedSomethin",c8,ec,fb,99)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *LangSelectState_obj_sStaticStorageInfo = 0;
#endif

static ::String LangSelectState_obj_sMemberFields[] = {
	HX_("textMenuItems",74,ab,77,14),
	HX_("localeList",18,12,cb,fe),
	HX_("curSelected",fb,eb,ab,32),
	HX_("backdrop",d6,b1,96,1a),
	HX_("grpOptionsTexts",6d,2e,b1,bf),
	HX_("create",fc,66,0f,7c),
	HX_("selectedSomethin",c8,ec,fb,99),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class LangSelectState_obj::__mClass;

void LangSelectState_obj::__register()
{
	LangSelectState_obj _hx_dummy;
	LangSelectState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("LangSelectState",07,1e,c4,2c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(LangSelectState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< LangSelectState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LangSelectState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LangSelectState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

