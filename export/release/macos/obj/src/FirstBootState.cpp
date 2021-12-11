#include <hxcpp.h>

#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_CoolUtil
#include <CoolUtil.h>
#endif
#ifndef INCLUDED_FirstBootState
#include <FirstBootState.h>
#endif
#ifndef INCLUDED_LangUtil
#include <LangUtil.h>
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
#ifndef INCLUDED_TitleState
#include <TitleState.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_58e96fb3db9ff2e7_14_new,"FirstBootState","new",0xcc85d6c1,"FirstBootState.new","FirstBootState.hx",14,0xeb1afbcf)
HX_LOCAL_STACK_FRAME(_hx_pos_58e96fb3db9ff2e7_30_create,"FirstBootState","create",0x1282d33b,"FirstBootState.create","FirstBootState.hx",30,0xeb1afbcf)
HX_LOCAL_STACK_FRAME(_hx_pos_58e96fb3db9ff2e7_68_update,"FirstBootState","update",0x1d78f248,"FirstBootState.update","FirstBootState.hx",68,0xeb1afbcf)
HX_LOCAL_STACK_FRAME(_hx_pos_58e96fb3db9ff2e7_79_update,"FirstBootState","update",0x1d78f248,"FirstBootState.update","FirstBootState.hx",79,0xeb1afbcf)
HX_LOCAL_STACK_FRAME(_hx_pos_58e96fb3db9ff2e7_111_update,"FirstBootState","update",0x1d78f248,"FirstBootState.update","FirstBootState.hx",111,0xeb1afbcf)
HX_LOCAL_STACK_FRAME(_hx_pos_58e96fb3db9ff2e7_125_update,"FirstBootState","update",0x1d78f248,"FirstBootState.update","FirstBootState.hx",125,0xeb1afbcf)
HX_LOCAL_STACK_FRAME(_hx_pos_58e96fb3db9ff2e7_130_update,"FirstBootState","update",0x1d78f248,"FirstBootState.update","FirstBootState.hx",130,0xeb1afbcf)
HX_LOCAL_STACK_FRAME(_hx_pos_58e96fb3db9ff2e7_137_update,"FirstBootState","update",0x1d78f248,"FirstBootState.update","FirstBootState.hx",137,0xeb1afbcf)
HX_LOCAL_STACK_FRAME(_hx_pos_58e96fb3db9ff2e7_151_update,"FirstBootState","update",0x1d78f248,"FirstBootState.update","FirstBootState.hx",151,0xeb1afbcf)
HX_LOCAL_STACK_FRAME(_hx_pos_58e96fb3db9ff2e7_146_update,"FirstBootState","update",0x1d78f248,"FirstBootState.update","FirstBootState.hx",146,0xeb1afbcf)
HX_LOCAL_STACK_FRAME(_hx_pos_58e96fb3db9ff2e7_165_update,"FirstBootState","update",0x1d78f248,"FirstBootState.update","FirstBootState.hx",165,0xeb1afbcf)
HX_LOCAL_STACK_FRAME(_hx_pos_58e96fb3db9ff2e7_160_update,"FirstBootState","update",0x1d78f248,"FirstBootState.update","FirstBootState.hx",160,0xeb1afbcf)
HX_LOCAL_STACK_FRAME(_hx_pos_58e96fb3db9ff2e7_187_bringinthenote,"FirstBootState","bringinthenote",0xc451778b,"FirstBootState.bringinthenote","FirstBootState.hx",187,0xeb1afbcf)
HX_LOCAL_STACK_FRAME(_hx_pos_58e96fb3db9ff2e7_178_bringinthenote,"FirstBootState","bringinthenote",0xc451778b,"FirstBootState.bringinthenote","FirstBootState.hx",178,0xeb1afbcf)

void FirstBootState_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_58e96fb3db9ff2e7_14_new)
HXLINE(  65)		this->selectedSomethin = false;
HXLINE(  21)		this->curSelected = 0;
HXLINE(  19)		this->selectedsomething = false;
HXLINE(  17)		this->localeList = ::Array_obj< ::String >::__new(0);
HXLINE(  16)		this->textMenuItems = ::Array_obj< ::String >::__new(0);
HXLINE(  14)		super::__construct(TransIn,TransOut);
            	}

Dynamic FirstBootState_obj::__CreateEmpty() { return new FirstBootState_obj; }

void *FirstBootState_obj::_hx_vtable = 0;

Dynamic FirstBootState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FirstBootState_obj > _hx_result = new FirstBootState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool FirstBootState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3f706236) {
		if (inClassId<=(int)0x23a57bae) {
			if (inClassId<=(int)0x0430f5d7) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0430f5d7;
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

void FirstBootState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_58e96fb3db9ff2e7_30_create)
HXLINE(  31)		this->persistentUpdate = (this->persistentDraw = true);
HXLINE(  33)		::String library = null();
HXDLIN(  33)		::String languageList = ::Paths_obj::getPath((HX_("locale/languageList",ab,12,e4,2d) + HX_(".txt",02,3f,c0,1e)),HX_("TEXT",ad,94,ba,37),library);
HXDLIN(  33)		::Array< ::String > languageList1 = ::CoolUtil_obj::coolTextFile(languageList);
HXLINE(  35)		{
HXLINE(  35)			int _g = 0;
HXDLIN(  35)			int _g1 = languageList1->length;
HXDLIN(  35)			while((_g < _g1)){
HXLINE(  35)				_g = (_g + 1);
HXDLIN(  35)				int i = (_g - 1);
HXLINE(  37)				::Array< ::String > data = languageList1->__get(i).split(HX_(":",3a,00,00,00));
HXLINE(  38)				this->textMenuItems->push(data->__get(0));
HXLINE(  39)				this->localeList->push(data->__get(1));
            			}
            		}
HXLINE(  42)		 ::flixel::FlxSprite _hx_tmp =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-80,null(),null());
HXDLIN(  42)		::String library1 = null();
HXDLIN(  42)		::String _hx_tmp1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("menuBG",24,65,6d,05)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library1);
HXDLIN(  42)		this->bg = _hx_tmp->loadGraphic(_hx_tmp1,null(),null(),null(),null(),null());
HXLINE(  43)		 ::flixel::FlxSprite _hx_tmp2 = this->bg;
HXDLIN(  43)		_hx_tmp2->setGraphicSize(::Std_obj::_hx_int((this->bg->get_width() * ((Float)1.1))),null());
HXLINE(  44)		this->bg->updateHitbox();
HXLINE(  45)		this->bg->screenCenter(null());
HXLINE(  46)		this->bg->set_antialiasing(true);
HXLINE(  47)		this->add(this->bg);
HXLINE(  49)		this->grpOptionsTexts =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  50)		this->add(this->grpOptionsTexts);
HXLINE(  52)		{
HXLINE(  52)			int _g2 = 0;
HXDLIN(  52)			int _g3 = this->textMenuItems->length;
HXDLIN(  52)			while((_g2 < _g3)){
HXLINE(  52)				_g2 = (_g2 + 1);
HXDLIN(  52)				int i = (_g2 - 1);
HXLINE(  54)				 ::flixel::text::FlxText optionText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,0,(50 + (i * 50)),0,this->textMenuItems->__get(i),null(),null());
HXLINE(  55)				optionText->setFormat(::LangUtil_obj::getFont(HX_("riffic",51,90,7b,4d)),32,-1,HX_("center",d5,25,db,05),null(),null(),null());
HXLINE(  56)				optionText->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
HXLINE(  57)				optionText->set_antialiasing(true);
HXLINE(  58)				optionText->ID = i;
HXLINE(  59)				this->grpOptionsTexts->add(optionText).StaticCast<  ::flixel::text::FlxText >();
            			}
            		}
HXLINE(  62)		this->super::create();
            	}


void FirstBootState_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_58e96fb3db9ff2e7_68_update)
HXDLIN(  68)		 ::FirstBootState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  69)		bool _hx_tmp;
HXDLIN(  69)		if (::hx::IsNotNull( ::flixel::FlxG_obj::sound->music )) {
HXLINE(  69)			_hx_tmp = (::flixel::FlxG_obj::sound->music->_volume > 0);
            		}
            		else {
HXLINE(  69)			_hx_tmp = false;
            		}
HXDLIN(  69)		if (_hx_tmp) {
HXLINE(  70)			 ::flixel::_hx_system::FlxSound fh = ::flixel::FlxG_obj::sound->music;
HXDLIN(  70)			fh->set_volume((fh->_volume - (((Float)0.25) * ::flixel::FlxG_obj::elapsed)));
            		}
HXLINE(  72)		this->super::update(elapsed);
HXLINE(  74)		bool _hx_tmp1;
HXDLIN(  74)		bool _hx_tmp2;
HXDLIN(  74)		if (::PlayerSettings_obj::player1->controls->_accept->check()) {
HXLINE(  74)			_hx_tmp2 = this->selectedSomethin;
            		}
            		else {
HXLINE(  74)			_hx_tmp2 = false;
            		}
HXDLIN(  74)		if (_hx_tmp2) {
HXLINE(  74)			_hx_tmp1 = !(this->selectedsomething);
            		}
            		else {
HXLINE(  74)			_hx_tmp1 = false;
            		}
HXDLIN(  74)		if (_hx_tmp1) {
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::FirstBootState,_gthis) HXARGC(1)
            			void _hx_run( ::flixel::tweens::FlxTween twn){
            				HX_GC_STACKFRAME(&_hx_pos_58e96fb3db9ff2e7_79_update)
HXLINE(  80)				_gthis->funnynote->kill();
HXLINE(  82)				{
HXLINE(  82)					 ::flixel::FlxState nextState =  ::TitleState_obj::__alloc( HX_CTX ,null(),null());
HXDLIN(  82)					if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE(  82)						::flixel::FlxG_obj::game->_requestedState = nextState;
            					}
            				}
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE(  76)			::flixel::tweens::FlxTween_obj::tween(this->funnynote, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("alpha",5e,a7,96,21),0)),2, ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quadOut_dyn())
            				->setFixed(1,HX_("onComplete",f8,d4,7e,5d), ::Dynamic(new _hx_Closure_0(_gthis)))));
            		}
HXLINE(  90)		if (!(this->selectedSomethin)) {
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::FirstBootState,_gthis) HXARGC(1)
            			void _hx_run( ::flixel::text::FlxText txt){
            				HX_STACKFRAME(&_hx_pos_58e96fb3db9ff2e7_111_update)
HXLINE( 112)				{
HXLINE( 112)					txt->set_borderStyle(::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn());
HXDLIN( 112)					txt->set_borderColor(-33537);
HXDLIN( 112)					txt->set_borderSize(( (Float)(2) ));
HXDLIN( 112)					txt->set_borderQuality(( (Float)(1) ));
            				}
HXLINE( 114)				if ((txt->ID == _gthis->curSelected)) {
HXLINE( 115)					txt->set_borderStyle(::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn());
HXDLIN( 115)					txt->set_borderColor(-12289);
HXDLIN( 115)					txt->set_borderSize(( (Float)(2) ));
HXDLIN( 115)					txt->set_borderQuality(( (Float)(1) ));
            				}
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE(  92)			if (::PlayerSettings_obj::player1->controls->_upP->check()) {
HXLINE(  94)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(  94)				_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
HXLINE(  95)				 ::FirstBootState _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  95)				_hx_tmp1->curSelected = (_hx_tmp1->curSelected - 1);
            			}
HXLINE(  98)			if (::PlayerSettings_obj::player1->controls->_downP->check()) {
HXLINE( 100)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 100)				_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
HXLINE( 101)				 ::FirstBootState _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 101)				_hx_tmp1->curSelected = (_hx_tmp1->curSelected + 1);
            			}
HXLINE( 104)			if ((this->curSelected < 0)) {
HXLINE( 105)				this->curSelected = (this->textMenuItems->length - 1);
            			}
HXLINE( 107)			if ((this->curSelected >= this->textMenuItems->length)) {
HXLINE( 108)				this->curSelected = 0;
            			}
HXLINE( 110)			this->grpOptionsTexts->forEach( ::Dynamic(new _hx_Closure_1(_gthis)),null());
HXLINE( 118)			if (::PlayerSettings_obj::player1->controls->_accept->check()) {
            				HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_8, ::FirstBootState,_gthis) HXARGC(1)
            				void _hx_run( ::flixel::text::FlxText txt){
            					HX_GC_STACKFRAME(&_hx_pos_58e96fb3db9ff2e7_125_update)
HXLINE( 125)					if ((_gthis->curSelected != txt->ID)) {
            						HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_2) HXARGC(1)
            						void _hx_run( ::flixel::tweens::FlxTween twn){
            							HX_STACKFRAME(&_hx_pos_58e96fb3db9ff2e7_130_update)
            						}
            						HX_END_LOCAL_FUNC1((void))

            						HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_3, ::flixel::text::FlxText,txt) HXARGC(1)
            						void _hx_run( ::flixel::tweens::FlxTween twn){
            							HX_STACKFRAME(&_hx_pos_58e96fb3db9ff2e7_137_update)
HXLINE( 137)							txt->kill();
            						}
            						HX_END_LOCAL_FUNC1((void))

HXLINE( 127)						::flixel::tweens::FlxTween_obj::tween(_gthis->bg, ::Dynamic(::hx::Anon_obj::Create(1)
            							->setFixed(0,HX_("alpha",5e,a7,96,21),0)),((Float)1.3), ::Dynamic(::hx::Anon_obj::Create(2)
            							->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quadOut_dyn())
            							->setFixed(1,HX_("onComplete",f8,d4,7e,5d), ::Dynamic(new _hx_Closure_2()))));
HXLINE( 133)						::flixel::tweens::FlxTween_obj::tween(txt, ::Dynamic(::hx::Anon_obj::Create(1)
            							->setFixed(0,HX_("alpha",5e,a7,96,21),0)),((Float)1.3), ::Dynamic(::hx::Anon_obj::Create(2)
            							->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quadOut_dyn())
            							->setFixed(1,HX_("onComplete",f8,d4,7e,5d), ::Dynamic(new _hx_Closure_3(txt)))));
            					}
            					else {
HXLINE( 143)						if (( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("flashing",32,85,e8,99),::hx::paccDynamic)) )) {
            							HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_5, ::FirstBootState,_gthis) HXARGC(1)
            							void _hx_run( ::flixel::effects::FlxFlicker flick){
            								HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_4, ::FirstBootState,_gthis) HXARGC(1)
            								void _hx_run( ::flixel::util::FlxTimer tmr){
            									HX_GC_STACKFRAME(&_hx_pos_58e96fb3db9ff2e7_151_update)
HXLINE( 152)									 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 152)									_hx_tmp->play(::Paths_obj::sound(HX_("flip_page",61,10,21,01),HX_("shared",a5,5e,2b,1d)),null(),null(),null(),null(),null());
HXLINE( 153)									_gthis->bringinthenote();
            								}
            								HX_END_LOCAL_FUNC1((void))

            								HX_GC_STACKFRAME(&_hx_pos_58e96fb3db9ff2e7_146_update)
HXLINE( 147)								::flixel::FlxG_obj::save->data->__SetField(HX_("language",58,80,11,7a),_gthis->localeList->__get(_gthis->curSelected),::hx::paccDynamic);
HXLINE( 148)								 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN( 148)								::String _hx_tmp1 = (HX_("langauge set to ",a7,fb,71,af) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic))));
HXDLIN( 148)								_hx_tmp(_hx_tmp1,::hx::SourceInfo(HX_("source/FirstBootState.hx",5b,da,01,2e),148,HX_("FirstBootState",4f,62,c9,d3),HX_("update",09,86,05,87)));
HXLINE( 149)								::String _hx_tmp2;
HXDLIN( 149)								if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/",2f,00,00,00) + HX_("data/textData",3c,85,6a,69)) + HX_(".txt",02,3f,c0,1e))),HX_("TEXT",ad,94,ba,37),HX_("preload",c9,47,43,35)),null())) {
HXLINE( 149)									_hx_tmp2 = ::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/",2f,00,00,00) + HX_("data/textData",3c,85,6a,69)) + HX_(".txt",02,3f,c0,1e))),HX_("TEXT",ad,94,ba,37),HX_("preload",c9,47,43,35));
            								}
            								else {
HXLINE( 149)									_hx_tmp2 = ::Paths_obj::getPath(((HX_("locale/en-US/",02,23,bf,a8) + HX_("data/textData",3c,85,6a,69)) + HX_(".txt",02,3f,c0,1e)),HX_("TEXT",ad,94,ba,37),HX_("preload",c9,47,43,35));
            								}
HXDLIN( 149)								::LangUtil_obj::localeList = ::CoolUtil_obj::coolTextFile(_hx_tmp2);
HXLINE( 150)								 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(2, ::Dynamic(new _hx_Closure_4(_gthis)),null());
            							}
            							HX_END_LOCAL_FUNC1((void))

HXLINE( 145)							::flixel::effects::FlxFlicker_obj::flicker(txt,1,((Float)0.06),false,false, ::Dynamic(new _hx_Closure_5(_gthis)),null());
            						}
            						else {
            							HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_7, ::FirstBootState,_gthis) HXARGC(1)
            							void _hx_run( ::flixel::util::FlxTimer tmr){
            								HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_6, ::FirstBootState,_gthis) HXARGC(1)
            								void _hx_run( ::flixel::util::FlxTimer tmr){
            									HX_GC_STACKFRAME(&_hx_pos_58e96fb3db9ff2e7_165_update)
HXLINE( 166)									 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 166)									_hx_tmp->play(::Paths_obj::sound(HX_("flip_page",61,10,21,01),HX_("shared",a5,5e,2b,1d)),null(),null(),null(),null(),null());
HXLINE( 167)									_gthis->bringinthenote();
            								}
            								HX_END_LOCAL_FUNC1((void))

            								HX_GC_STACKFRAME(&_hx_pos_58e96fb3db9ff2e7_160_update)
HXLINE( 161)								::flixel::FlxG_obj::save->data->__SetField(HX_("language",58,80,11,7a),_gthis->localeList->__get(_gthis->curSelected),::hx::paccDynamic);
HXLINE( 162)								 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN( 162)								::String _hx_tmp1 = (HX_("langauge set to ",a7,fb,71,af) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic))));
HXDLIN( 162)								_hx_tmp(_hx_tmp1,::hx::SourceInfo(HX_("source/FirstBootState.hx",5b,da,01,2e),162,HX_("FirstBootState",4f,62,c9,d3),HX_("update",09,86,05,87)));
HXLINE( 163)								::String _hx_tmp2;
HXDLIN( 163)								if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/",2f,00,00,00) + HX_("data/textData",3c,85,6a,69)) + HX_(".txt",02,3f,c0,1e))),HX_("TEXT",ad,94,ba,37),HX_("preload",c9,47,43,35)),null())) {
HXLINE( 163)									_hx_tmp2 = ::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/",2f,00,00,00) + HX_("data/textData",3c,85,6a,69)) + HX_(".txt",02,3f,c0,1e))),HX_("TEXT",ad,94,ba,37),HX_("preload",c9,47,43,35));
            								}
            								else {
HXLINE( 163)									_hx_tmp2 = ::Paths_obj::getPath(((HX_("locale/en-US/",02,23,bf,a8) + HX_("data/textData",3c,85,6a,69)) + HX_(".txt",02,3f,c0,1e)),HX_("TEXT",ad,94,ba,37),HX_("preload",c9,47,43,35));
            								}
HXDLIN( 163)								::LangUtil_obj::localeList = ::CoolUtil_obj::coolTextFile(_hx_tmp2);
HXLINE( 164)								 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(2, ::Dynamic(new _hx_Closure_6(_gthis)),null());
            							}
            							HX_END_LOCAL_FUNC1((void))

HXLINE( 159)							 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(1, ::Dynamic(new _hx_Closure_7(_gthis)),null());
            						}
            					}
            				}
            				HX_END_LOCAL_FUNC1((void))

HXLINE( 120)				this->selectedsomething = true;
HXLINE( 121)				this->selectedSomethin = true;
HXLINE( 122)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 122)				_hx_tmp->play(::Paths_obj::sound(HX_("confirmMenu",bf,8e,fe,3c),null()),null(),null(),null(),null(),null());
HXLINE( 123)				this->grpOptionsTexts->forEach( ::Dynamic(new _hx_Closure_8(_gthis)),null());
            			}
            		}
            	}


void FirstBootState_obj::bringinthenote(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::FirstBootState,_gthis) HXARGC(1)
            		void _hx_run( ::flixel::tweens::FlxTween twn){
            			HX_GC_STACKFRAME(&_hx_pos_58e96fb3db9ff2e7_187_bringinthenote)
HXLINE( 187)			_gthis->selectedsomething = false;
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_58e96fb3db9ff2e7_178_bringinthenote)
HXDLIN( 178)		 ::FirstBootState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 179)		 ::flixel::FlxSprite _hx_tmp =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,0,null());
HXDLIN( 179)		::String _hx_tmp1;
HXDLIN( 179)		if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("DDLCIntroWarning",e7,dd,da,5c)) + HX_(".png",3b,2d,bd,1e))),HX_("IMAGE",3b,57,57,3b),HX_("preload",c9,47,43,35)),null())) {
HXLINE( 179)			_hx_tmp1 = ::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("DDLCIntroWarning",e7,dd,da,5c)) + HX_(".png",3b,2d,bd,1e))),HX_("IMAGE",3b,57,57,3b),HX_("preload",c9,47,43,35));
            		}
            		else {
HXLINE( 179)			_hx_tmp1 = ::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("DDLCIntroWarning",e7,dd,da,5c)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),HX_("preload",c9,47,43,35));
            		}
HXDLIN( 179)		this->funnynote = _hx_tmp->loadGraphic(_hx_tmp1,null(),null(),null(),null(),null());
HXLINE( 180)		this->funnynote->set_alpha(( (Float)(0) ));
HXLINE( 181)		this->funnynote->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
HXLINE( 182)		this->add(this->funnynote);
HXLINE( 183)		::flixel::tweens::FlxTween_obj::tween(this->funnynote, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("alpha",5e,a7,96,21),1)),1, ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quadOut_dyn())
            			->setFixed(1,HX_("onComplete",f8,d4,7e,5d), ::Dynamic(new _hx_Closure_0(_gthis)))));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FirstBootState_obj,bringinthenote,(void))


::hx::ObjectPtr< FirstBootState_obj > FirstBootState_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< FirstBootState_obj > __this = new FirstBootState_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< FirstBootState_obj > FirstBootState_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	FirstBootState_obj *__this = (FirstBootState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FirstBootState_obj), true, "FirstBootState"));
	*(void **)__this = FirstBootState_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

FirstBootState_obj::FirstBootState_obj()
{
}

void FirstBootState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FirstBootState);
	HX_MARK_MEMBER_NAME(textMenuItems,"textMenuItems");
	HX_MARK_MEMBER_NAME(localeList,"localeList");
	HX_MARK_MEMBER_NAME(selectedsomething,"selectedsomething");
	HX_MARK_MEMBER_NAME(curSelected,"curSelected");
	HX_MARK_MEMBER_NAME(backdrop,"backdrop");
	HX_MARK_MEMBER_NAME(bg,"bg");
	HX_MARK_MEMBER_NAME(funnynote,"funnynote");
	HX_MARK_MEMBER_NAME(grpOptionsTexts,"grpOptionsTexts");
	HX_MARK_MEMBER_NAME(selectedSomethin,"selectedSomethin");
	 ::MusicBeatState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FirstBootState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(textMenuItems,"textMenuItems");
	HX_VISIT_MEMBER_NAME(localeList,"localeList");
	HX_VISIT_MEMBER_NAME(selectedsomething,"selectedsomething");
	HX_VISIT_MEMBER_NAME(curSelected,"curSelected");
	HX_VISIT_MEMBER_NAME(backdrop,"backdrop");
	HX_VISIT_MEMBER_NAME(bg,"bg");
	HX_VISIT_MEMBER_NAME(funnynote,"funnynote");
	HX_VISIT_MEMBER_NAME(grpOptionsTexts,"grpOptionsTexts");
	HX_VISIT_MEMBER_NAME(selectedSomethin,"selectedSomethin");
	 ::MusicBeatState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FirstBootState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { return ::hx::Val( bg ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"backdrop") ) { return ::hx::Val( backdrop ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"funnynote") ) { return ::hx::Val( funnynote ); }
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
	case 14:
		if (HX_FIELD_EQ(inName,"bringinthenote") ) { return ::hx::Val( bringinthenote_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"grpOptionsTexts") ) { return ::hx::Val( grpOptionsTexts ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"selectedSomethin") ) { return ::hx::Val( selectedSomethin ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"selectedsomething") ) { return ::hx::Val( selectedsomething ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FirstBootState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { bg=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"backdrop") ) { backdrop=inValue.Cast<  ::flixel::addons::display::FlxBackdrop >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"funnynote") ) { funnynote=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
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
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"selectedsomething") ) { selectedsomething=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FirstBootState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("textMenuItems",74,ab,77,14));
	outFields->push(HX_("localeList",18,12,cb,fe));
	outFields->push(HX_("selectedsomething",bf,62,a0,80));
	outFields->push(HX_("curSelected",fb,eb,ab,32));
	outFields->push(HX_("backdrop",d6,b1,96,1a));
	outFields->push(HX_("bg",c5,55,00,00));
	outFields->push(HX_("funnynote",3c,ff,3e,fe));
	outFields->push(HX_("grpOptionsTexts",6d,2e,b1,bf));
	outFields->push(HX_("selectedSomethin",c8,ec,fb,99));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FirstBootState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(FirstBootState_obj,textMenuItems),HX_("textMenuItems",74,ab,77,14)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(FirstBootState_obj,localeList),HX_("localeList",18,12,cb,fe)},
	{::hx::fsBool,(int)offsetof(FirstBootState_obj,selectedsomething),HX_("selectedsomething",bf,62,a0,80)},
	{::hx::fsInt,(int)offsetof(FirstBootState_obj,curSelected),HX_("curSelected",fb,eb,ab,32)},
	{::hx::fsObject /*  ::flixel::addons::display::FlxBackdrop */ ,(int)offsetof(FirstBootState_obj,backdrop),HX_("backdrop",d6,b1,96,1a)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(FirstBootState_obj,bg),HX_("bg",c5,55,00,00)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(FirstBootState_obj,funnynote),HX_("funnynote",3c,ff,3e,fe)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(FirstBootState_obj,grpOptionsTexts),HX_("grpOptionsTexts",6d,2e,b1,bf)},
	{::hx::fsBool,(int)offsetof(FirstBootState_obj,selectedSomethin),HX_("selectedSomethin",c8,ec,fb,99)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FirstBootState_obj_sStaticStorageInfo = 0;
#endif

static ::String FirstBootState_obj_sMemberFields[] = {
	HX_("textMenuItems",74,ab,77,14),
	HX_("localeList",18,12,cb,fe),
	HX_("selectedsomething",bf,62,a0,80),
	HX_("curSelected",fb,eb,ab,32),
	HX_("backdrop",d6,b1,96,1a),
	HX_("bg",c5,55,00,00),
	HX_("funnynote",3c,ff,3e,fe),
	HX_("grpOptionsTexts",6d,2e,b1,bf),
	HX_("create",fc,66,0f,7c),
	HX_("selectedSomethin",c8,ec,fb,99),
	HX_("update",09,86,05,87),
	HX_("bringinthenote",4c,34,29,41),
	::String(null()) };

::hx::Class FirstBootState_obj::__mClass;

void FirstBootState_obj::__register()
{
	FirstBootState_obj _hx_dummy;
	FirstBootState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("FirstBootState",4f,62,c9,d3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FirstBootState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FirstBootState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FirstBootState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FirstBootState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

