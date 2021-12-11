#include <hxcpp.h>

#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_KeyBindMenu
#include <KeyBindMenu.h>
#endif
#ifndef INCLUDED_KeyBinds
#include <KeyBinds.h>
#endif
#ifndef INCLUDED_LangUtil
#include <LangUtil.h>
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
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
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
#ifndef INCLUDED_flixel_input_gamepad__FlxGamepadInputID_FlxGamepadInputID_Impl_
#include <flixel/input/gamepad/_FlxGamepadInputID/FlxGamepadInputID_Impl_.h>
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
#ifndef INCLUDED_flixel_input_keyboard__FlxKey_FlxKey_Impl_
#include <flixel/input/keyboard/_FlxKey/FlxKey_Impl_.h>
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
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b43d8094f4720380_29_new,"KeyBindMenu","new",0x54f9290d,"KeyBindMenu.new","KeyBindMenu.hx",29,0x3c137703)
static const ::String _hx_array_data_e27a9e9b_1[] = {
	HX_("ESCAPE",81,ef,5c,8d),HX_("ENTER",f8,a4,74,ee),HX_("BACKSPACE",1f,f5,42,c6),HX_("SPACE",a6,c4,54,ff),HX_("TAB",35,f6,3f,00),
};
static const ::String _hx_array_data_e27a9e9b_2[] = {
	HX_("X",58,00,00,00),HX_("A",41,00,00,00),HX_("Y",59,00,00,00),HX_("B",42,00,00,00),
};
static const ::String _hx_array_data_e27a9e9b_3[] = {
	HX_("A",41,00,00,00),HX_("S",53,00,00,00),HX_("W",57,00,00,00),HX_("D",44,00,00,00),HX_("R",52,00,00,00),
};
static const ::String _hx_array_data_e27a9e9b_4[] = {
	HX_("DPAD_LEFT",17,2a,9d,8c),HX_("DPAD_DOWN",72,1a,5b,87),HX_("DPAD_UP",6b,00,87,a2),HX_("DPAD_RIGHT",ac,b7,f4,f3),
};
static const ::String _hx_array_data_e27a9e9b_5[] = {
	HX_("LEFT",07,d0,70,32),HX_("DOWN",62,c0,2e,2d),HX_("UP",5b,4a,00,00),HX_("RIGHT",bc,43,52,67),
};
HX_LOCAL_STACK_FRAME(_hx_pos_b43d8094f4720380_112_create,"KeyBindMenu","create",0x79aaf86f,"KeyBindMenu.create","KeyBindMenu.hx",112,0x3c137703)
HX_LOCAL_STACK_FRAME(_hx_pos_b43d8094f4720380_63_create,"KeyBindMenu","create",0x79aaf86f,"KeyBindMenu.create","KeyBindMenu.hx",63,0x3c137703)
HX_LOCAL_STACK_FRAME(_hx_pos_b43d8094f4720380_126_update,"KeyBindMenu","update",0x84a1177c,"KeyBindMenu.update","KeyBindMenu.hx",126,0x3c137703)
HX_LOCAL_STACK_FRAME(_hx_pos_b43d8094f4720380_282_textUpdate,"KeyBindMenu","textUpdate",0x7642cd89,"KeyBindMenu.textUpdate","KeyBindMenu.hx",282,0x3c137703)
HX_LOCAL_STACK_FRAME(_hx_pos_b43d8094f4720380_307_save,"KeyBindMenu","save",0x0855c9f0,"KeyBindMenu.save","KeyBindMenu.hx",307,0x3c137703)
HX_LOCAL_STACK_FRAME(_hx_pos_b43d8094f4720380_324_reset,"KeyBindMenu","reset",0xb1f6e7bc,"KeyBindMenu.reset","KeyBindMenu.hx",324,0x3c137703)
HX_LOCAL_STACK_FRAME(_hx_pos_b43d8094f4720380_342_quit,"KeyBindMenu","quit",0x07127e82,"KeyBindMenu.quit","KeyBindMenu.hx",342,0x3c137703)
HX_LOCAL_STACK_FRAME(_hx_pos_b43d8094f4720380_333_quit,"KeyBindMenu","quit",0x07127e82,"KeyBindMenu.quit","KeyBindMenu.hx",333,0x3c137703)
HX_LOCAL_STACK_FRAME(_hx_pos_b43d8094f4720380_351_addKeyGamepad,"KeyBindMenu","addKeyGamepad",0x62689d30,"KeyBindMenu.addKeyGamepad","KeyBindMenu.hx",351,0x3c137703)
static const ::String _hx_array_data_e27a9e9b_19[] = {
	HX_("START",42,ac,f9,01),HX_("GUIDE",9c,f2,d9,19),
};
HX_LOCAL_STACK_FRAME(_hx_pos_b43d8094f4720380_399_addKey,"KeyBindMenu","addKey",0x9c9e2b71,"KeyBindMenu.addKey","KeyBindMenu.hx",399,0x3c137703)
HX_LOCAL_STACK_FRAME(_hx_pos_b43d8094f4720380_455_changeItem,"KeyBindMenu","changeItem",0xd855c196,"KeyBindMenu.changeItem","KeyBindMenu.hx",455,0x3c137703)

void KeyBindMenu_obj::__construct( ::Dynamic BGColor){
            	HX_STACKFRAME(&_hx_pos_b43d8094f4720380_29_new)
HXLINE( 396)		this->lastKey = HX_("",00,00,00,00);
HXLINE( 123)		this->frames = 0;
HXLINE(  60)		this->acceptInput = false;
HXLINE(  58)		this->state = HX_("select",fc,1a,33,6a);
HXLINE(  53)		this->blacklist = ::Array_obj< ::String >::fromData( _hx_array_data_e27a9e9b_1,5);
HXLINE(  52)		this->tempKey = HX_("",00,00,00,00);
HXLINE(  46)		this->gpKeys = ::Array_obj< ::String >::__new(4)->init(0, ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("gpleftBind",8d,64,a6,ef),::hx::paccDynamic)))->init(1, ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("gpdownBind",68,1e,93,1d),::hx::paccDynamic)))->init(2, ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("gpupBind",a1,30,42,a5),::hx::paccDynamic)))->init(3, ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("gprightBind",70,e4,ee,a5),::hx::paccDynamic)));
HXLINE(  40)		this->keys = ::Array_obj< ::String >::__new(4)->init(0, ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("leftBind",64,39,12,48),::hx::paccDynamic)))->init(1, ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("downBind",3f,f3,fe,75),::hx::paccDynamic)))->init(2, ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("upBind",b8,51,92,70),::hx::paccDynamic)))->init(3, ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("rightBind",b9,4b,dd,ab),::hx::paccDynamic)));
HXLINE(  38)		this->curSelected = 0;
HXLINE(  37)		this->defaultGpKeys = ::Array_obj< ::String >::fromData( _hx_array_data_e27a9e9b_2,4);
HXLINE(  36)		this->defaultKeys = ::Array_obj< ::String >::fromData( _hx_array_data_e27a9e9b_3,5);
HXLINE(  35)		this->gpkeyText = ::Array_obj< ::String >::fromData( _hx_array_data_e27a9e9b_4,4);
HXLINE(  34)		this->keyText = ::Array_obj< ::String >::fromData( _hx_array_data_e27a9e9b_5,4);
HXLINE(  29)		super::__construct(BGColor);
            	}

Dynamic KeyBindMenu_obj::__CreateEmpty() { return new KeyBindMenu_obj; }

void *KeyBindMenu_obj::_hx_vtable = 0;

Dynamic KeyBindMenu_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< KeyBindMenu_obj > _hx_result = new KeyBindMenu_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool KeyBindMenu_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x5661ffbf) {
			if (inClassId<=(int)0x0a838ef3) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0a838ef3;
			} else {
				return inClassId==(int)0x5661ffbf;
			}
		} else {
			return inClassId==(int)0x62817b24;
		}
	} else {
		return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
	}
}

void KeyBindMenu_obj::create(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::KeyBindMenu,_gthis) HXARGC(1)
            		void _hx_run( ::flixel::tweens::FlxTween flx){
            			HX_GC_STACKFRAME(&_hx_pos_b43d8094f4720380_112_create)
HXLINE( 112)			_gthis->acceptInput = true;
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_b43d8094f4720380_63_create)
HXDLIN(  63)		 ::KeyBindMenu _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  64)		{
HXLINE(  64)			int _g = 0;
HXDLIN(  64)			int _g1 = this->keys->length;
HXDLIN(  64)			while((_g < _g1)){
HXLINE(  64)				_g = (_g + 1);
HXDLIN(  64)				int i = (_g - 1);
HXLINE(  66)				::String k = this->keys->__get(i);
HXLINE(  67)				if (::hx::IsNull( k )) {
HXLINE(  68)					this->keys[i] = this->defaultKeys->__get(i);
            				}
            			}
            		}
HXLINE(  71)		{
HXLINE(  71)			int _g2 = 0;
HXDLIN(  71)			int _g3 = this->gpKeys->length;
HXDLIN(  71)			while((_g2 < _g3)){
HXLINE(  71)				_g2 = (_g2 + 1);
HXDLIN(  71)				int i = (_g2 - 1);
HXLINE(  73)				::String k = this->gpKeys->__get(i);
HXLINE(  74)				if (::hx::IsNull( k )) {
HXLINE(  75)					this->gpKeys[i] = this->defaultGpKeys->__get(i);
            				}
            			}
            		}
HXLINE(  80)		this->persistentUpdate = (this->persistentDraw = true);
HXLINE(  82)		this->keyTextDisplay =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,-10,0,1280,HX_("",00,00,00,00),72,null());
HXLINE(  83)		this->keyTextDisplay->scrollFactor->set(0,0);
HXLINE(  84)		 ::flixel::text::FlxText _hx_tmp = this->keyTextDisplay;
HXDLIN(  84)		_hx_tmp->setFormat(::LangUtil_obj::getFont(HX_("riffic",51,90,7b,4d)),42,-1,HX_("center",d5,25,db,05),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-33537,null());
HXLINE(  85)		this->keyTextDisplay->set_borderSize(( (Float)(2) ));
HXLINE(  86)		this->keyTextDisplay->set_borderQuality(( (Float)(3) ));
HXLINE(  87)		this->keyTextDisplay->set_antialiasing(true);
HXLINE(  89)		this->blackBox =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,0,null())->makeGraphic(::flixel::FlxG_obj::width,::flixel::FlxG_obj::height,-16777216,null(),null());
HXLINE(  90)		this->add(this->blackBox);
HXLINE(  92)		this->infoText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,-10,580,1280,HX_("Just Monika.",e7,e7,80,83),72,null());
HXLINE(  93)		this->infoText->scrollFactor->set(0,0);
HXLINE(  94)		 ::flixel::text::FlxText _hx_tmp1 = this->infoText;
HXDLIN(  94)		_hx_tmp1->setFormat(::LangUtil_obj::getFont(HX_("riffic",51,90,7b,4d)),24,-1,HX_("center",d5,25,db,05),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-33537,null());
HXLINE(  95)		this->infoText->set_borderSize(( (Float)(2) ));
HXLINE(  96)		this->infoText->set_borderQuality(( (Float)(3) ));
HXLINE(  97)		this->infoText->set_alpha(( (Float)(0) ));
HXLINE(  98)		this->infoText->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
HXLINE(  99)		this->infoText->set_antialiasing(true);
HXLINE( 100)		this->add(this->infoText);
HXLINE( 101)		this->add(this->keyTextDisplay);
HXLINE( 103)		this->blackBox->set_alpha(( (Float)(0) ));
HXLINE( 104)		this->keyTextDisplay->set_alpha(( (Float)(0) ));
HXLINE( 106)		::flixel::tweens::FlxTween_obj::tween(this->keyTextDisplay, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("alpha",5e,a7,96,21),1)),1, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::expoInOut_dyn())));
HXLINE( 107)		::flixel::tweens::FlxTween_obj::tween(this->infoText, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("alpha",5e,a7,96,21),1)),((Float)1.4), ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::expoInOut_dyn())));
HXLINE( 108)		::flixel::tweens::FlxTween_obj::tween(this->blackBox, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("alpha",5e,a7,96,21),((Float)0.7))),1, ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::expoInOut_dyn())
            			->setFixed(1,HX_("onComplete",f8,d4,7e,5d), ::Dynamic(new _hx_Closure_0(_gthis)))));
HXLINE( 116)		::OptionsMenu_obj::instance->acceptInput = false;
HXLINE( 118)		this->textUpdate();
HXLINE( 120)		this->super::create();
            	}


void KeyBindMenu_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_b43d8094f4720380_126_update)
HXLINE( 127)		 ::flixel::input::gamepad::FlxGamepad gamepad = ::flixel::FlxG_obj::gamepads->lastActive;
HXLINE( 129)		if ((this->frames <= 10)) {
HXLINE( 130)			this->frames++;
            		}
HXLINE( 132)		 ::flixel::text::FlxText _hx_tmp = this->infoText;
HXDLIN( 132)		::String _hx_tmp1;
HXDLIN( 132)		if (::KeyBinds_obj::gamepad) {
HXLINE( 132)			_hx_tmp1 = ::LangUtil_obj::getString(HX_("descKeyBindGPCurrent",05,13,b0,74));
            		}
            		else {
HXLINE( 132)			_hx_tmp1 = ::LangUtil_obj::getString(HX_("descKeyBindKBCurrent",57,79,b3,9f));
            		}
HXDLIN( 132)		::String _hx_tmp2 = (((_hx_tmp1 + HX_(" ",20,00,00,00)) + ::LangUtil_obj::getString(HX_("descKeyBindTAB",6a,e6,fd,d3))) + HX_("\n",0a,00,00,00));
HXLINE( 136)		::String _hx_tmp3;
HXDLIN( 136)		if (::KeyBinds_obj::gamepad) {
HXLINE( 136)			_hx_tmp3 = ::LangUtil_obj::getString(HX_("descKeyBindGPControls",2a,02,d8,41));
            		}
            		else {
HXLINE( 136)			_hx_tmp3 = ::LangUtil_obj::getString(HX_("descKeyBindKBControls",98,23,ce,b9));
            		}
HXLINE( 138)		::String _hx_tmp4;
HXDLIN( 138)		if ((this->lastKey != HX_("",00,00,00,00))) {
HXLINE( 138)			::String _hx_tmp = (this->lastKey + HX_(" ",20,00,00,00));
HXDLIN( 138)			_hx_tmp4 = (_hx_tmp + ::LangUtil_obj::getString(HX_("descKeyBindBlacklist",72,a3,d2,38)));
            		}
            		else {
HXLINE( 138)			_hx_tmp4 = HX_("",00,00,00,00);
            		}
HXLINE( 132)		_hx_tmp->set_text((((_hx_tmp2 + _hx_tmp3) + HX_("\n",0a,00,00,00)) + _hx_tmp4));
HXLINE( 140)		if (this->acceptInput) {
HXLINE( 142)			::String _hx_switch_0 = this->state;
            			if (  (_hx_switch_0==HX_("exiting",84,dc,da,24)) ){
HXLINE( 268)				goto _hx_goto_10;
            			}
            			if (  (_hx_switch_0==HX_("input",0a,c4,1d,be)) ){
HXLINE( 207)				if (::KeyBinds_obj::gamepad) {
HXLINE( 209)					this->tempKey = this->gpKeys->__get(this->curSelected);
HXLINE( 210)					this->gpKeys[this->curSelected] = HX_("?",3f,00,00,00);
            				}
            				else {
HXLINE( 214)					this->tempKey = this->keys->__get(this->curSelected);
HXLINE( 215)					this->keys[this->curSelected] = HX_("?",3f,00,00,00);
            				}
HXLINE( 217)				this->textUpdate();
HXLINE( 218)				this->state = HX_("waiting",8d,e9,27,df);
HXLINE( 206)				goto _hx_goto_10;
            			}
            			if (  (_hx_switch_0==HX_("select",fc,1a,33,6a)) ){
HXLINE( 145)				 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 145)				if (_this->keyManager->checkStatus(38,_this->status)) {
HXLINE( 147)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 147)					_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
HXLINE( 148)					this->changeItem(-1);
            				}
HXLINE( 151)				 ::flixel::input::keyboard::FlxKeyList _this1 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 151)				if (_this1->keyManager->checkStatus(40,_this1->status)) {
HXLINE( 153)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 153)					_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
HXLINE( 154)					this->changeItem(1);
            				}
HXLINE( 157)				 ::flixel::input::keyboard::FlxKeyList _this2 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 157)				if (_this2->keyManager->checkStatus(9,_this2->status)) {
HXLINE( 159)					::KeyBinds_obj::gamepad = !(::KeyBinds_obj::gamepad);
HXLINE( 160)					this->textUpdate();
            				}
HXLINE( 163)				 ::flixel::input::keyboard::FlxKeyList _this3 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 163)				if (_this3->keyManager->checkStatus(13,_this3->status)) {
HXLINE( 165)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 165)					_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
HXLINE( 166)					this->state = HX_("input",0a,c4,1d,be);
            				}
            				else {
HXLINE( 168)					 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 168)					if (_this->keyManager->checkStatus(27,_this->status)) {
HXLINE( 170)						this->quit();
            					}
            					else {
HXLINE( 172)						 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 172)						if (_this->keyManager->checkStatus(8,_this->status)) {
HXLINE( 174)							this->reset();
            						}
            					}
            				}
HXLINE( 176)				if (::hx::IsNotNull( gamepad )) {
HXLINE( 178)					 ::flixel::input::gamepad::lists::FlxGamepadButtonList _this = gamepad->justPressed;
HXDLIN( 178)					int id = 11;
HXDLIN( 178)					 ::flixel::input::gamepad::FlxGamepad _this1 = _this->gamepad;
HXDLIN( 178)					int Status = _this->status;
HXDLIN( 178)					bool _hx_tmp;
HXDLIN( 178)					switch((int)(id)){
            						case (int)-2: {
HXLINE( 178)							_hx_tmp = _this1->anyButton(Status);
            						}
            						break;
            						case (int)-1: {
HXLINE( 178)							_hx_tmp = !(_this1->anyButton(Status));
            						}
            						break;
            						default:{
HXLINE( 178)							int RawID = _this1->mapping->getRawID(id);
HXDLIN( 178)							 ::flixel::input::gamepad::FlxGamepadButton button = _this1->buttons->__get(RawID).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN( 178)							if (::hx::IsNotNull( button )) {
HXLINE( 178)								_hx_tmp = button->hasState(Status);
            							}
            							else {
HXLINE( 178)								_hx_tmp = false;
            							}
            						}
            					}
HXDLIN( 178)					if (_hx_tmp) {
HXLINE( 180)						 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 180)						_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
HXLINE( 181)						this->changeItem(-1);
HXLINE( 182)						this->textUpdate();
            					}
HXLINE( 184)					 ::flixel::input::gamepad::lists::FlxGamepadButtonList _this2 = gamepad->justPressed;
HXDLIN( 184)					int id1 = 12;
HXDLIN( 184)					 ::flixel::input::gamepad::FlxGamepad _this3 = _this2->gamepad;
HXDLIN( 184)					int Status1 = _this2->status;
HXDLIN( 184)					bool _hx_tmp1;
HXDLIN( 184)					switch((int)(id1)){
            						case (int)-2: {
HXLINE( 184)							_hx_tmp1 = _this3->anyButton(Status1);
            						}
            						break;
            						case (int)-1: {
HXLINE( 184)							_hx_tmp1 = !(_this3->anyButton(Status1));
            						}
            						break;
            						default:{
HXLINE( 184)							int RawID = _this3->mapping->getRawID(id1);
HXDLIN( 184)							 ::flixel::input::gamepad::FlxGamepadButton button = _this3->buttons->__get(RawID).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN( 184)							if (::hx::IsNotNull( button )) {
HXLINE( 184)								_hx_tmp1 = button->hasState(Status1);
            							}
            							else {
HXLINE( 184)								_hx_tmp1 = false;
            							}
            						}
            					}
HXDLIN( 184)					if (_hx_tmp1) {
HXLINE( 186)						 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 186)						_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
HXLINE( 187)						this->changeItem(1);
HXLINE( 188)						this->textUpdate();
            					}
HXLINE( 191)					bool _hx_tmp2;
HXDLIN( 191)					 ::flixel::input::gamepad::lists::FlxGamepadButtonList _this4 = gamepad->justPressed;
HXDLIN( 191)					int id2 = 7;
HXDLIN( 191)					 ::flixel::input::gamepad::FlxGamepad _this5 = _this4->gamepad;
HXDLIN( 191)					int Status2 = _this4->status;
HXDLIN( 191)					bool _hx_tmp3;
HXDLIN( 191)					switch((int)(id2)){
            						case (int)-2: {
HXLINE( 191)							_hx_tmp3 = _this5->anyButton(Status2);
            						}
            						break;
            						case (int)-1: {
HXLINE( 191)							_hx_tmp3 = !(_this5->anyButton(Status2));
            						}
            						break;
            						default:{
HXLINE( 191)							int RawID = _this5->mapping->getRawID(id2);
HXDLIN( 191)							 ::flixel::input::gamepad::FlxGamepadButton button = _this5->buttons->__get(RawID).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN( 191)							if (::hx::IsNotNull( button )) {
HXLINE( 191)								_hx_tmp3 = button->hasState(Status2);
            							}
            							else {
HXLINE( 191)								_hx_tmp3 = false;
            							}
            						}
            					}
HXDLIN( 191)					if (_hx_tmp3) {
HXLINE( 191)						_hx_tmp2 = (this->frames > 10);
            					}
            					else {
HXLINE( 191)						_hx_tmp2 = false;
            					}
HXDLIN( 191)					if (_hx_tmp2) {
HXLINE( 193)						 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 193)						_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
HXLINE( 194)						this->state = HX_("input",0a,c4,1d,be);
            					}
            					else {
HXLINE( 196)						 ::flixel::input::gamepad::lists::FlxGamepadButtonList _this = gamepad->justPressed;
HXDLIN( 196)						int id = 17;
HXDLIN( 196)						 ::flixel::input::gamepad::FlxGamepad _this1 = _this->gamepad;
HXDLIN( 196)						int Status = _this->status;
HXDLIN( 196)						bool _hx_tmp;
HXDLIN( 196)						switch((int)(id)){
            							case (int)-2: {
HXLINE( 196)								_hx_tmp = _this1->anyButton(Status);
            							}
            							break;
            							case (int)-1: {
HXLINE( 196)								_hx_tmp = !(_this1->anyButton(Status));
            							}
            							break;
            							default:{
HXLINE( 196)								int RawID = _this1->mapping->getRawID(id);
HXDLIN( 196)								 ::flixel::input::gamepad::FlxGamepadButton button = _this1->buttons->__get(RawID).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN( 196)								if (::hx::IsNotNull( button )) {
HXLINE( 196)									_hx_tmp = button->hasState(Status);
            								}
            								else {
HXLINE( 196)									_hx_tmp = false;
            								}
            							}
            						}
HXDLIN( 196)						if (_hx_tmp) {
HXLINE( 198)							this->quit();
            						}
            						else {
HXLINE( 200)							 ::flixel::input::gamepad::lists::FlxGamepadButtonList _this = gamepad->justPressed;
HXDLIN( 200)							int id = 18;
HXDLIN( 200)							 ::flixel::input::gamepad::FlxGamepad _this1 = _this->gamepad;
HXDLIN( 200)							int Status = _this->status;
HXDLIN( 200)							bool _hx_tmp;
HXDLIN( 200)							switch((int)(id)){
            								case (int)-2: {
HXLINE( 200)									_hx_tmp = _this1->anyButton(Status);
            								}
            								break;
            								case (int)-1: {
HXLINE( 200)									_hx_tmp = !(_this1->anyButton(Status));
            								}
            								break;
            								default:{
HXLINE( 200)									int RawID = _this1->mapping->getRawID(id);
HXDLIN( 200)									 ::flixel::input::gamepad::FlxGamepadButton button = _this1->buttons->__get(RawID).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN( 200)									if (::hx::IsNotNull( button )) {
HXLINE( 200)										_hx_tmp = button->hasState(Status);
            									}
            									else {
HXLINE( 200)										_hx_tmp = false;
            									}
            								}
            							}
HXDLIN( 200)							if (_hx_tmp) {
HXLINE( 202)								this->reset();
            							}
            						}
            					}
            				}
HXLINE( 144)				goto _hx_goto_10;
            			}
            			if (  (_hx_switch_0==HX_("waiting",8d,e9,27,df)) ){
HXLINE( 221)				bool _hx_tmp;
HXDLIN( 221)				if (::hx::IsNotNull( gamepad )) {
HXLINE( 221)					_hx_tmp = ::KeyBinds_obj::gamepad;
            				}
            				else {
HXLINE( 221)					_hx_tmp = false;
            				}
HXDLIN( 221)				if (_hx_tmp) {
HXLINE( 223)					 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 223)					if (_this->keyManager->checkStatus(27,_this->status)) {
HXLINE( 225)						this->gpKeys[this->curSelected] = this->tempKey;
HXLINE( 226)						this->state = HX_("select",fc,1a,33,6a);
HXLINE( 227)						 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 227)						_hx_tmp->play(::Paths_obj::sound(HX_("confirmMenu",bf,8e,fe,3c),null()),null(),null(),null(),null(),null());
            					}
HXLINE( 230)					 ::flixel::input::gamepad::lists::FlxGamepadButtonList _this1 = gamepad->justPressed;
HXDLIN( 230)					int id = 7;
HXDLIN( 230)					 ::flixel::input::gamepad::FlxGamepad _this2 = _this1->gamepad;
HXDLIN( 230)					int Status = _this1->status;
HXDLIN( 230)					bool _hx_tmp;
HXDLIN( 230)					switch((int)(id)){
            						case (int)-2: {
HXLINE( 230)							_hx_tmp = _this2->anyButton(Status);
            						}
            						break;
            						case (int)-1: {
HXLINE( 230)							_hx_tmp = !(_this2->anyButton(Status));
            						}
            						break;
            						default:{
HXLINE( 230)							int RawID = _this2->mapping->getRawID(id);
HXDLIN( 230)							 ::flixel::input::gamepad::FlxGamepadButton button = _this2->buttons->__get(RawID).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN( 230)							if (::hx::IsNotNull( button )) {
HXLINE( 230)								_hx_tmp = button->hasState(Status);
            							}
            							else {
HXLINE( 230)								_hx_tmp = false;
            							}
            						}
            					}
HXDLIN( 230)					if (_hx_tmp) {
HXLINE( 232)						this->addKeyGamepad(this->defaultKeys->__get(this->curSelected));
HXLINE( 233)						this->save();
HXLINE( 234)						this->state = HX_("select",fc,1a,33,6a);
            					}
HXLINE( 237)					if (gamepad->justPressed->get_ANY()) {
HXLINE( 239)						 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN( 239)						 ::flixel::input::gamepad::mappings::FlxGamepadMapping gamepad1 = gamepad->mapping;
HXDLIN( 239)						int this1 = gamepad1->getID(gamepad->firstJustPressedRawID());
HXDLIN( 239)						::String _hx_tmp1 = ::flixel::input::gamepad::_FlxGamepadInputID::FlxGamepadInputID_Impl__obj::toStringMap->get_string(this1);
HXDLIN( 239)						_hx_tmp(_hx_tmp1,::hx::SourceInfo(HX_("source/KeyBindMenu.hx",f7,48,ad,05),239,HX_("KeyBindMenu",9b,9e,7a,e2),HX_("update",09,86,05,87)));
HXLINE( 240)						 ::flixel::input::gamepad::mappings::FlxGamepadMapping gamepad2 = gamepad->mapping;
HXDLIN( 240)						int this2 = gamepad2->getID(gamepad->firstJustPressedRawID());
HXDLIN( 240)						this->addKeyGamepad(::flixel::input::gamepad::_FlxGamepadInputID::FlxGamepadInputID_Impl__obj::toStringMap->get_string(this2));
HXLINE( 241)						this->save();
HXLINE( 242)						this->state = HX_("select",fc,1a,33,6a);
HXLINE( 243)						this->textUpdate();
            					}
            				}
            				else {
HXLINE( 248)					 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 248)					if (_this->keyManager->checkStatus(27,_this->status)) {
HXLINE( 250)						this->keys[this->curSelected] = this->tempKey;
HXLINE( 251)						this->state = HX_("select",fc,1a,33,6a);
HXLINE( 252)						 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 252)						_hx_tmp->play(::Paths_obj::sound(HX_("confirmMenu",bf,8e,fe,3c),null()),null(),null(),null(),null(),null());
            					}
            					else {
HXLINE( 254)						 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 254)						if (_this->keyManager->checkStatus(13,_this->status)) {
HXLINE( 256)							this->addKey(this->defaultKeys->__get(this->curSelected));
HXLINE( 257)							this->save();
HXLINE( 258)							this->state = HX_("select",fc,1a,33,6a);
            						}
            						else {
HXLINE( 260)							if (( ( ::flixel::input::FlxBaseKeyList)(::flixel::FlxG_obj::keys->justPressed) )->get_ANY()) {
HXLINE( 262)								int this1 = ( (int)(::flixel::FlxG_obj::keys->getIsDown()->__get(0).StaticCast<  ::flixel::input::FlxInput >()->ID) );
HXDLIN( 262)								this->addKey(::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::toStringMap->get_string(this1));
HXLINE( 263)								this->save();
HXLINE( 264)								this->state = HX_("select",fc,1a,33,6a);
            							}
            						}
            					}
            				}
HXLINE( 221)				goto _hx_goto_10;
            			}
            			/* default */{
HXLINE( 271)				this->state = HX_("select",fc,1a,33,6a);
            			}
            			_hx_goto_10:;
HXLINE( 274)			if (( ( ::flixel::input::FlxBaseKeyList)(::flixel::FlxG_obj::keys->justPressed) )->get_ANY()) {
HXLINE( 275)				this->textUpdate();
            			}
            		}
HXLINE( 278)		this->super::update(elapsed);
            	}


void KeyBindMenu_obj::textUpdate(){
            	HX_STACKFRAME(&_hx_pos_b43d8094f4720380_282_textUpdate)
HXLINE( 283)		this->keyTextDisplay->set_text(HX_("\n\n",c0,08,00,00));
HXLINE( 285)		if (::KeyBinds_obj::gamepad) {
HXLINE( 288)			{
HXLINE( 289)				::String textStart;
HXDLIN( 289)				if ((0 == this->curSelected)) {
HXLINE( 289)					textStart = HX_("> ",22,36,00,00);
            				}
            				else {
HXLINE( 289)					textStart = HX_("  ",00,1c,00,00);
            				}
HXLINE( 290)				::haxe::Log_obj::trace(this->gpKeys->__get(0),::hx::SourceInfo(HX_("source/KeyBindMenu.hx",f7,48,ad,05),290,HX_("KeyBindMenu",9b,9e,7a,e2),HX_("textUpdate",96,06,f6,bd)));
HXLINE( 291)				 ::flixel::text::FlxText fh = this->keyTextDisplay;
HXDLIN( 291)				::String _hx_tmp;
HXDLIN( 291)				if ((this->gpKeys->__get(0) != this->gpkeyText->__get(0))) {
HXLINE( 291)					_hx_tmp = (this->gpKeys->__get(0) + HX_(" / ",31,71,18,00));
            				}
            				else {
HXLINE( 291)					_hx_tmp = HX_("",00,00,00,00);
            				}
HXDLIN( 291)				fh->set_text((fh->text + (((((textStart + this->keyText->__get(0)) + HX_(": ",a6,32,00,00)) + _hx_tmp) + this->gpkeyText->__get(0)) + HX_(" \n",ea,1b,00,00))));
            			}
HXLINE( 288)			{
HXLINE( 289)				::String textStart1;
HXDLIN( 289)				if ((1 == this->curSelected)) {
HXLINE( 289)					textStart1 = HX_("> ",22,36,00,00);
            				}
            				else {
HXLINE( 289)					textStart1 = HX_("  ",00,1c,00,00);
            				}
HXLINE( 290)				::haxe::Log_obj::trace(this->gpKeys->__get(1),::hx::SourceInfo(HX_("source/KeyBindMenu.hx",f7,48,ad,05),290,HX_("KeyBindMenu",9b,9e,7a,e2),HX_("textUpdate",96,06,f6,bd)));
HXLINE( 291)				 ::flixel::text::FlxText fh1 = this->keyTextDisplay;
HXDLIN( 291)				::String _hx_tmp1;
HXDLIN( 291)				if ((this->gpKeys->__get(1) != this->gpkeyText->__get(1))) {
HXLINE( 291)					_hx_tmp1 = (this->gpKeys->__get(1) + HX_(" / ",31,71,18,00));
            				}
            				else {
HXLINE( 291)					_hx_tmp1 = HX_("",00,00,00,00);
            				}
HXDLIN( 291)				fh1->set_text((fh1->text + (((((textStart1 + this->keyText->__get(1)) + HX_(": ",a6,32,00,00)) + _hx_tmp1) + this->gpkeyText->__get(1)) + HX_(" \n",ea,1b,00,00))));
            			}
HXLINE( 288)			{
HXLINE( 289)				::String textStart2;
HXDLIN( 289)				if ((2 == this->curSelected)) {
HXLINE( 289)					textStart2 = HX_("> ",22,36,00,00);
            				}
            				else {
HXLINE( 289)					textStart2 = HX_("  ",00,1c,00,00);
            				}
HXLINE( 290)				::haxe::Log_obj::trace(this->gpKeys->__get(2),::hx::SourceInfo(HX_("source/KeyBindMenu.hx",f7,48,ad,05),290,HX_("KeyBindMenu",9b,9e,7a,e2),HX_("textUpdate",96,06,f6,bd)));
HXLINE( 291)				 ::flixel::text::FlxText fh2 = this->keyTextDisplay;
HXDLIN( 291)				::String _hx_tmp2;
HXDLIN( 291)				if ((this->gpKeys->__get(2) != this->gpkeyText->__get(2))) {
HXLINE( 291)					_hx_tmp2 = (this->gpKeys->__get(2) + HX_(" / ",31,71,18,00));
            				}
            				else {
HXLINE( 291)					_hx_tmp2 = HX_("",00,00,00,00);
            				}
HXDLIN( 291)				fh2->set_text((fh2->text + (((((textStart2 + this->keyText->__get(2)) + HX_(": ",a6,32,00,00)) + _hx_tmp2) + this->gpkeyText->__get(2)) + HX_(" \n",ea,1b,00,00))));
            			}
HXLINE( 288)			{
HXLINE( 289)				::String textStart3;
HXDLIN( 289)				if ((3 == this->curSelected)) {
HXLINE( 289)					textStart3 = HX_("> ",22,36,00,00);
            				}
            				else {
HXLINE( 289)					textStart3 = HX_("  ",00,1c,00,00);
            				}
HXLINE( 290)				::haxe::Log_obj::trace(this->gpKeys->__get(3),::hx::SourceInfo(HX_("source/KeyBindMenu.hx",f7,48,ad,05),290,HX_("KeyBindMenu",9b,9e,7a,e2),HX_("textUpdate",96,06,f6,bd)));
HXLINE( 291)				 ::flixel::text::FlxText fh3 = this->keyTextDisplay;
HXDLIN( 291)				::String _hx_tmp3;
HXDLIN( 291)				if ((this->gpKeys->__get(3) != this->gpkeyText->__get(3))) {
HXLINE( 291)					_hx_tmp3 = (this->gpKeys->__get(3) + HX_(" / ",31,71,18,00));
            				}
            				else {
HXLINE( 291)					_hx_tmp3 = HX_("",00,00,00,00);
            				}
HXDLIN( 291)				fh3->set_text((fh3->text + (((((textStart3 + this->keyText->__get(3)) + HX_(": ",a6,32,00,00)) + _hx_tmp3) + this->gpkeyText->__get(3)) + HX_(" \n",ea,1b,00,00))));
            			}
            		}
            		else {
HXLINE( 297)			{
HXLINE( 298)				::String textStart;
HXDLIN( 298)				if ((0 == this->curSelected)) {
HXLINE( 298)					textStart = HX_("> ",22,36,00,00);
            				}
            				else {
HXLINE( 298)					textStart = HX_("  ",00,1c,00,00);
            				}
HXLINE( 299)				 ::flixel::text::FlxText fh = this->keyTextDisplay;
HXDLIN( 299)				::String _hx_tmp;
HXDLIN( 299)				if ((this->keys->__get(0) != this->keyText->__get(0))) {
HXLINE( 299)					_hx_tmp = (this->keys->__get(0) + HX_(" / ",31,71,18,00));
            				}
            				else {
HXLINE( 299)					_hx_tmp = HX_("",00,00,00,00);
            				}
HXDLIN( 299)				fh->set_text((fh->text + (((((textStart + this->keyText->__get(0)) + HX_(": ",a6,32,00,00)) + _hx_tmp) + this->keyText->__get(0)) + HX_(" ARROW\n",61,9a,2c,9d))));
            			}
HXLINE( 297)			{
HXLINE( 298)				::String textStart1;
HXDLIN( 298)				if ((1 == this->curSelected)) {
HXLINE( 298)					textStart1 = HX_("> ",22,36,00,00);
            				}
            				else {
HXLINE( 298)					textStart1 = HX_("  ",00,1c,00,00);
            				}
HXLINE( 299)				 ::flixel::text::FlxText fh1 = this->keyTextDisplay;
HXDLIN( 299)				::String _hx_tmp1;
HXDLIN( 299)				if ((this->keys->__get(1) != this->keyText->__get(1))) {
HXLINE( 299)					_hx_tmp1 = (this->keys->__get(1) + HX_(" / ",31,71,18,00));
            				}
            				else {
HXLINE( 299)					_hx_tmp1 = HX_("",00,00,00,00);
            				}
HXDLIN( 299)				fh1->set_text((fh1->text + (((((textStart1 + this->keyText->__get(1)) + HX_(": ",a6,32,00,00)) + _hx_tmp1) + this->keyText->__get(1)) + HX_(" ARROW\n",61,9a,2c,9d))));
            			}
HXLINE( 297)			{
HXLINE( 298)				::String textStart2;
HXDLIN( 298)				if ((2 == this->curSelected)) {
HXLINE( 298)					textStart2 = HX_("> ",22,36,00,00);
            				}
            				else {
HXLINE( 298)					textStart2 = HX_("  ",00,1c,00,00);
            				}
HXLINE( 299)				 ::flixel::text::FlxText fh2 = this->keyTextDisplay;
HXDLIN( 299)				::String _hx_tmp2;
HXDLIN( 299)				if ((this->keys->__get(2) != this->keyText->__get(2))) {
HXLINE( 299)					_hx_tmp2 = (this->keys->__get(2) + HX_(" / ",31,71,18,00));
            				}
            				else {
HXLINE( 299)					_hx_tmp2 = HX_("",00,00,00,00);
            				}
HXDLIN( 299)				fh2->set_text((fh2->text + (((((textStart2 + this->keyText->__get(2)) + HX_(": ",a6,32,00,00)) + _hx_tmp2) + this->keyText->__get(2)) + HX_(" ARROW\n",61,9a,2c,9d))));
            			}
HXLINE( 297)			{
HXLINE( 298)				::String textStart3;
HXDLIN( 298)				if ((3 == this->curSelected)) {
HXLINE( 298)					textStart3 = HX_("> ",22,36,00,00);
            				}
            				else {
HXLINE( 298)					textStart3 = HX_("  ",00,1c,00,00);
            				}
HXLINE( 299)				 ::flixel::text::FlxText fh3 = this->keyTextDisplay;
HXDLIN( 299)				::String _hx_tmp3;
HXDLIN( 299)				if ((this->keys->__get(3) != this->keyText->__get(3))) {
HXLINE( 299)					_hx_tmp3 = (this->keys->__get(3) + HX_(" / ",31,71,18,00));
            				}
            				else {
HXLINE( 299)					_hx_tmp3 = HX_("",00,00,00,00);
            				}
HXDLIN( 299)				fh3->set_text((fh3->text + (((((textStart3 + this->keyText->__get(3)) + HX_(": ",a6,32,00,00)) + _hx_tmp3) + this->keyText->__get(3)) + HX_(" ARROW\n",61,9a,2c,9d))));
            			}
            		}
HXLINE( 303)		this->keyTextDisplay->screenCenter(null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(KeyBindMenu_obj,textUpdate,(void))

void KeyBindMenu_obj::save(){
            	HX_STACKFRAME(&_hx_pos_b43d8094f4720380_307_save)
HXLINE( 308)		::flixel::FlxG_obj::save->data->__SetField(HX_("upBind",b8,51,92,70),this->keys->__get(2),::hx::paccDynamic);
HXLINE( 309)		::flixel::FlxG_obj::save->data->__SetField(HX_("downBind",3f,f3,fe,75),this->keys->__get(1),::hx::paccDynamic);
HXLINE( 310)		::flixel::FlxG_obj::save->data->__SetField(HX_("leftBind",64,39,12,48),this->keys->__get(0),::hx::paccDynamic);
HXLINE( 311)		::flixel::FlxG_obj::save->data->__SetField(HX_("rightBind",b9,4b,dd,ab),this->keys->__get(3),::hx::paccDynamic);
HXLINE( 313)		::flixel::FlxG_obj::save->data->__SetField(HX_("gpupBind",a1,30,42,a5),this->gpKeys->__get(2),::hx::paccDynamic);
HXLINE( 314)		::flixel::FlxG_obj::save->data->__SetField(HX_("gpdownBind",68,1e,93,1d),this->gpKeys->__get(1),::hx::paccDynamic);
HXLINE( 315)		::flixel::FlxG_obj::save->data->__SetField(HX_("gpleftBind",8d,64,a6,ef),this->gpKeys->__get(0),::hx::paccDynamic);
HXLINE( 316)		::flixel::FlxG_obj::save->data->__SetField(HX_("gprightBind",70,e4,ee,a5),this->gpKeys->__get(3),::hx::paccDynamic);
HXLINE( 318)		::flixel::FlxG_obj::save->flush(null(),null());
HXLINE( 320)		::PlayerSettings_obj::player1->controls->loadKeyBinds();
            	}


HX_DEFINE_DYNAMIC_FUNC0(KeyBindMenu_obj,save,(void))

void KeyBindMenu_obj::reset(){
            	HX_STACKFRAME(&_hx_pos_b43d8094f4720380_324_reset)
HXLINE( 325)		{
HXLINE( 327)			this->keys[0] = this->defaultKeys->__get(0);
HXDLIN( 327)			this->keys[1] = this->defaultKeys->__get(1);
HXDLIN( 327)			this->keys[2] = this->defaultKeys->__get(2);
HXDLIN( 327)			this->keys[3] = this->defaultKeys->__get(3);
HXDLIN( 327)			this->keys[4] = this->defaultKeys->__get(4);
            		}
HXLINE( 329)		this->quit();
            	}


HX_DEFINE_DYNAMIC_FUNC0(KeyBindMenu_obj,reset,(void))

void KeyBindMenu_obj::quit(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::KeyBindMenu,_gthis) HXARGC(1)
            		void _hx_run( ::flixel::tweens::FlxTween flx){
            			HX_STACKFRAME(&_hx_pos_b43d8094f4720380_342_quit)
HXLINE( 343)			::OptionsMenu_obj::instance->acceptInput = true;
HXLINE( 344)			_gthis->close();
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_b43d8094f4720380_333_quit)
HXDLIN( 333)		 ::KeyBindMenu _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 334)		this->state = HX_("exiting",84,dc,da,24);
HXLINE( 336)		this->save();
HXLINE( 338)		::flixel::tweens::FlxTween_obj::tween(this->keyTextDisplay, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("alpha",5e,a7,96,21),0)),1, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::expoInOut_dyn())));
HXLINE( 339)		::flixel::tweens::FlxTween_obj::tween(this->blackBox, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("alpha",5e,a7,96,21),0)),((Float)1.1), ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::expoInOut_dyn())
            			->setFixed(1,HX_("onComplete",f8,d4,7e,5d), ::Dynamic(new _hx_Closure_0(_gthis)))));
HXLINE( 347)		::flixel::tweens::FlxTween_obj::tween(this->infoText, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("alpha",5e,a7,96,21),0)),1, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::expoInOut_dyn())));
            	}


HX_DEFINE_DYNAMIC_FUNC0(KeyBindMenu_obj,quit,(void))

void KeyBindMenu_obj::addKeyGamepad(::String r){
            	HX_STACKFRAME(&_hx_pos_b43d8094f4720380_351_addKeyGamepad)
HXLINE( 352)		bool shouldReturn = true;
HXLINE( 354)		::Array< ::String > notAllowed = ::Array_obj< ::String >::fromData( _hx_array_data_e27a9e9b_19,2);
HXLINE( 355)		int swapKey = -1;
HXLINE( 357)		{
HXLINE( 357)			int _g = 0;
HXDLIN( 357)			int _g1 = this->gpKeys->length;
HXDLIN( 357)			while((_g < _g1)){
HXLINE( 357)				_g = (_g + 1);
HXDLIN( 357)				int x = (_g - 1);
HXLINE( 359)				::String oK = this->gpKeys->__get(x);
HXLINE( 360)				if ((oK == r)) {
HXLINE( 362)					swapKey = x;
HXLINE( 363)					this->gpKeys[x] = null();
            				}
HXLINE( 365)				if (notAllowed->contains(oK)) {
HXLINE( 367)					this->gpKeys[x] = null();
HXLINE( 368)					this->lastKey = r;
HXLINE( 369)					return;
            				}
            			}
            		}
HXLINE( 373)		if (notAllowed->contains(r)) {
HXLINE( 375)			this->gpKeys[this->curSelected] = this->tempKey;
HXLINE( 376)			this->lastKey = r;
HXLINE( 377)			return;
            		}
HXLINE( 380)		if (shouldReturn) {
HXLINE( 382)			if ((swapKey != -1)) {
HXLINE( 384)				this->gpKeys[swapKey] = this->tempKey;
            			}
HXLINE( 386)			this->gpKeys[this->curSelected] = r;
HXLINE( 387)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 387)			_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            		}
            		else {
HXLINE( 391)			this->gpKeys[this->curSelected] = this->tempKey;
HXLINE( 392)			this->lastKey = r;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(KeyBindMenu_obj,addKeyGamepad,(void))

void KeyBindMenu_obj::addKey(::String r){
            	HX_STACKFRAME(&_hx_pos_b43d8094f4720380_399_addKey)
HXLINE( 400)		bool shouldReturn = true;
HXLINE( 402)		::Array< ::String > notAllowed = ::Array_obj< ::String >::__new(0);
HXLINE( 403)		int swapKey = -1;
HXLINE( 405)		{
HXLINE( 405)			int _g = 0;
HXDLIN( 405)			::Array< ::String > _g1 = this->blacklist;
HXDLIN( 405)			while((_g < _g1->length)){
HXLINE( 405)				::String x = _g1->__get(_g);
HXDLIN( 405)				_g = (_g + 1);
HXLINE( 407)				notAllowed->push(x);
            			}
            		}
HXLINE( 410)		::haxe::Log_obj::trace(notAllowed,::hx::SourceInfo(HX_("source/KeyBindMenu.hx",f7,48,ad,05),410,HX_("KeyBindMenu",9b,9e,7a,e2),HX_("addKey",fe,99,02,9f)));
HXLINE( 412)		{
HXLINE( 412)			int _g2 = 0;
HXDLIN( 412)			int _g3 = this->keys->length;
HXDLIN( 412)			while((_g2 < _g3)){
HXLINE( 412)				_g2 = (_g2 + 1);
HXDLIN( 412)				int x = (_g2 - 1);
HXLINE( 414)				::String oK = this->keys->__get(x);
HXLINE( 415)				if ((oK == r)) {
HXLINE( 417)					swapKey = x;
HXLINE( 418)					this->keys[x] = null();
            				}
HXLINE( 420)				if (notAllowed->contains(oK)) {
HXLINE( 422)					this->keys[x] = null();
HXLINE( 423)					this->lastKey = oK;
HXLINE( 424)					return;
            				}
            			}
            		}
HXLINE( 428)		if (notAllowed->contains(r)) {
HXLINE( 430)			this->keys[this->curSelected] = this->tempKey;
HXLINE( 431)			this->lastKey = r;
HXLINE( 432)			return;
            		}
HXLINE( 435)		this->lastKey = HX_("",00,00,00,00);
HXLINE( 437)		if (shouldReturn) {
HXLINE( 440)			if ((swapKey != -1)) {
HXLINE( 442)				this->keys[swapKey] = this->tempKey;
            			}
HXLINE( 444)			this->keys[this->curSelected] = r;
HXLINE( 445)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 445)			_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            		}
            		else {
HXLINE( 449)			this->keys[this->curSelected] = this->tempKey;
HXLINE( 450)			this->lastKey = r;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(KeyBindMenu_obj,addKey,(void))

void KeyBindMenu_obj::changeItem(::hx::Null< int >  __o__amount){
            		int _amount = __o__amount.Default(0);
            	HX_STACKFRAME(&_hx_pos_b43d8094f4720380_455_changeItem)
HXLINE( 456)		 ::KeyBindMenu _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 456)		_hx_tmp->curSelected = (_hx_tmp->curSelected + _amount);
HXLINE( 458)		if ((this->curSelected > 3)) {
HXLINE( 459)			this->curSelected = 0;
            		}
HXLINE( 460)		if ((this->curSelected < 0)) {
HXLINE( 461)			this->curSelected = 3;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(KeyBindMenu_obj,changeItem,(void))


::hx::ObjectPtr< KeyBindMenu_obj > KeyBindMenu_obj::__new( ::Dynamic BGColor) {
	::hx::ObjectPtr< KeyBindMenu_obj > __this = new KeyBindMenu_obj();
	__this->__construct(BGColor);
	return __this;
}

::hx::ObjectPtr< KeyBindMenu_obj > KeyBindMenu_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic BGColor) {
	KeyBindMenu_obj *__this = (KeyBindMenu_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(KeyBindMenu_obj), true, "KeyBindMenu"));
	*(void **)__this = KeyBindMenu_obj::_hx_vtable;
	__this->__construct(BGColor);
	return __this;
}

KeyBindMenu_obj::KeyBindMenu_obj()
{
}

void KeyBindMenu_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(KeyBindMenu);
	HX_MARK_MEMBER_NAME(keyTextDisplay,"keyTextDisplay");
	HX_MARK_MEMBER_NAME(keyWarning,"keyWarning");
	HX_MARK_MEMBER_NAME(warningTween,"warningTween");
	HX_MARK_MEMBER_NAME(keyText,"keyText");
	HX_MARK_MEMBER_NAME(gpkeyText,"gpkeyText");
	HX_MARK_MEMBER_NAME(defaultKeys,"defaultKeys");
	HX_MARK_MEMBER_NAME(defaultGpKeys,"defaultGpKeys");
	HX_MARK_MEMBER_NAME(curSelected,"curSelected");
	HX_MARK_MEMBER_NAME(keys,"keys");
	HX_MARK_MEMBER_NAME(gpKeys,"gpKeys");
	HX_MARK_MEMBER_NAME(tempKey,"tempKey");
	HX_MARK_MEMBER_NAME(blacklist,"blacklist");
	HX_MARK_MEMBER_NAME(blackBox,"blackBox");
	HX_MARK_MEMBER_NAME(infoText,"infoText");
	HX_MARK_MEMBER_NAME(state,"state");
	HX_MARK_MEMBER_NAME(acceptInput,"acceptInput");
	HX_MARK_MEMBER_NAME(frames,"frames");
	HX_MARK_MEMBER_NAME(lastKey,"lastKey");
	 ::flixel::FlxSubState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void KeyBindMenu_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(keyTextDisplay,"keyTextDisplay");
	HX_VISIT_MEMBER_NAME(keyWarning,"keyWarning");
	HX_VISIT_MEMBER_NAME(warningTween,"warningTween");
	HX_VISIT_MEMBER_NAME(keyText,"keyText");
	HX_VISIT_MEMBER_NAME(gpkeyText,"gpkeyText");
	HX_VISIT_MEMBER_NAME(defaultKeys,"defaultKeys");
	HX_VISIT_MEMBER_NAME(defaultGpKeys,"defaultGpKeys");
	HX_VISIT_MEMBER_NAME(curSelected,"curSelected");
	HX_VISIT_MEMBER_NAME(keys,"keys");
	HX_VISIT_MEMBER_NAME(gpKeys,"gpKeys");
	HX_VISIT_MEMBER_NAME(tempKey,"tempKey");
	HX_VISIT_MEMBER_NAME(blacklist,"blacklist");
	HX_VISIT_MEMBER_NAME(blackBox,"blackBox");
	HX_VISIT_MEMBER_NAME(infoText,"infoText");
	HX_VISIT_MEMBER_NAME(state,"state");
	HX_VISIT_MEMBER_NAME(acceptInput,"acceptInput");
	HX_VISIT_MEMBER_NAME(frames,"frames");
	HX_VISIT_MEMBER_NAME(lastKey,"lastKey");
	 ::flixel::FlxSubState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val KeyBindMenu_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"keys") ) { return ::hx::Val( keys ); }
		if (HX_FIELD_EQ(inName,"save") ) { return ::hx::Val( save_dyn() ); }
		if (HX_FIELD_EQ(inName,"quit") ) { return ::hx::Val( quit_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { return ::hx::Val( state ); }
		if (HX_FIELD_EQ(inName,"reset") ) { return ::hx::Val( reset_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"gpKeys") ) { return ::hx::Val( gpKeys ); }
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"frames") ) { return ::hx::Val( frames ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		if (HX_FIELD_EQ(inName,"addKey") ) { return ::hx::Val( addKey_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"keyText") ) { return ::hx::Val( keyText ); }
		if (HX_FIELD_EQ(inName,"tempKey") ) { return ::hx::Val( tempKey ); }
		if (HX_FIELD_EQ(inName,"lastKey") ) { return ::hx::Val( lastKey ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"blackBox") ) { return ::hx::Val( blackBox ); }
		if (HX_FIELD_EQ(inName,"infoText") ) { return ::hx::Val( infoText ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"gpkeyText") ) { return ::hx::Val( gpkeyText ); }
		if (HX_FIELD_EQ(inName,"blacklist") ) { return ::hx::Val( blacklist ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"keyWarning") ) { return ::hx::Val( keyWarning ); }
		if (HX_FIELD_EQ(inName,"textUpdate") ) { return ::hx::Val( textUpdate_dyn() ); }
		if (HX_FIELD_EQ(inName,"changeItem") ) { return ::hx::Val( changeItem_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"defaultKeys") ) { return ::hx::Val( defaultKeys ); }
		if (HX_FIELD_EQ(inName,"curSelected") ) { return ::hx::Val( curSelected ); }
		if (HX_FIELD_EQ(inName,"acceptInput") ) { return ::hx::Val( acceptInput ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"warningTween") ) { return ::hx::Val( warningTween ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"defaultGpKeys") ) { return ::hx::Val( defaultGpKeys ); }
		if (HX_FIELD_EQ(inName,"addKeyGamepad") ) { return ::hx::Val( addKeyGamepad_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"keyTextDisplay") ) { return ::hx::Val( keyTextDisplay ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val KeyBindMenu_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"keys") ) { keys=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { state=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"gpKeys") ) { gpKeys=inValue.Cast< ::Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frames") ) { frames=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"keyText") ) { keyText=inValue.Cast< ::Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tempKey") ) { tempKey=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastKey") ) { lastKey=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"blackBox") ) { blackBox=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"infoText") ) { infoText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"gpkeyText") ) { gpkeyText=inValue.Cast< ::Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blacklist") ) { blacklist=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"keyWarning") ) { keyWarning=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"defaultKeys") ) { defaultKeys=inValue.Cast< ::Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"curSelected") ) { curSelected=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"acceptInput") ) { acceptInput=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"warningTween") ) { warningTween=inValue.Cast<  ::flixel::tweens::FlxTween >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"defaultGpKeys") ) { defaultGpKeys=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"keyTextDisplay") ) { keyTextDisplay=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void KeyBindMenu_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("keyTextDisplay",b6,e9,da,71));
	outFields->push(HX_("keyWarning",7d,7a,53,78));
	outFields->push(HX_("warningTween",6f,32,71,d8));
	outFields->push(HX_("keyText",ec,3d,d3,a6));
	outFields->push(HX_("gpkeyText",e3,6a,06,8c));
	outFields->push(HX_("defaultKeys",55,db,c5,18));
	outFields->push(HX_("defaultGpKeys",5e,04,fc,d7));
	outFields->push(HX_("curSelected",fb,eb,ab,32));
	outFields->push(HX_("keys",f4,e1,06,47));
	outFields->push(HX_("gpKeys",bd,30,83,dd));
	outFields->push(HX_("tempKey",eb,a2,b3,46));
	outFields->push(HX_("blacklist",9d,3d,3c,1c));
	outFields->push(HX_("blackBox",8c,81,93,80));
	outFields->push(HX_("infoText",3b,00,9e,3d));
	outFields->push(HX_("state",11,76,0b,84));
	outFields->push(HX_("acceptInput",e2,a3,6a,39));
	outFields->push(HX_("frames",a6,af,85,ac));
	outFields->push(HX_("lastKey",e9,d0,a6,d7));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo KeyBindMenu_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(KeyBindMenu_obj,keyTextDisplay),HX_("keyTextDisplay",b6,e9,da,71)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(KeyBindMenu_obj,keyWarning),HX_("keyWarning",7d,7a,53,78)},
	{::hx::fsObject /*  ::flixel::tweens::FlxTween */ ,(int)offsetof(KeyBindMenu_obj,warningTween),HX_("warningTween",6f,32,71,d8)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(KeyBindMenu_obj,keyText),HX_("keyText",ec,3d,d3,a6)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(KeyBindMenu_obj,gpkeyText),HX_("gpkeyText",e3,6a,06,8c)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(KeyBindMenu_obj,defaultKeys),HX_("defaultKeys",55,db,c5,18)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(KeyBindMenu_obj,defaultGpKeys),HX_("defaultGpKeys",5e,04,fc,d7)},
	{::hx::fsInt,(int)offsetof(KeyBindMenu_obj,curSelected),HX_("curSelected",fb,eb,ab,32)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(KeyBindMenu_obj,keys),HX_("keys",f4,e1,06,47)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(KeyBindMenu_obj,gpKeys),HX_("gpKeys",bd,30,83,dd)},
	{::hx::fsString,(int)offsetof(KeyBindMenu_obj,tempKey),HX_("tempKey",eb,a2,b3,46)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(KeyBindMenu_obj,blacklist),HX_("blacklist",9d,3d,3c,1c)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(KeyBindMenu_obj,blackBox),HX_("blackBox",8c,81,93,80)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(KeyBindMenu_obj,infoText),HX_("infoText",3b,00,9e,3d)},
	{::hx::fsString,(int)offsetof(KeyBindMenu_obj,state),HX_("state",11,76,0b,84)},
	{::hx::fsBool,(int)offsetof(KeyBindMenu_obj,acceptInput),HX_("acceptInput",e2,a3,6a,39)},
	{::hx::fsInt,(int)offsetof(KeyBindMenu_obj,frames),HX_("frames",a6,af,85,ac)},
	{::hx::fsString,(int)offsetof(KeyBindMenu_obj,lastKey),HX_("lastKey",e9,d0,a6,d7)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *KeyBindMenu_obj_sStaticStorageInfo = 0;
#endif

static ::String KeyBindMenu_obj_sMemberFields[] = {
	HX_("keyTextDisplay",b6,e9,da,71),
	HX_("keyWarning",7d,7a,53,78),
	HX_("warningTween",6f,32,71,d8),
	HX_("keyText",ec,3d,d3,a6),
	HX_("gpkeyText",e3,6a,06,8c),
	HX_("defaultKeys",55,db,c5,18),
	HX_("defaultGpKeys",5e,04,fc,d7),
	HX_("curSelected",fb,eb,ab,32),
	HX_("keys",f4,e1,06,47),
	HX_("gpKeys",bd,30,83,dd),
	HX_("tempKey",eb,a2,b3,46),
	HX_("blacklist",9d,3d,3c,1c),
	HX_("blackBox",8c,81,93,80),
	HX_("infoText",3b,00,9e,3d),
	HX_("state",11,76,0b,84),
	HX_("acceptInput",e2,a3,6a,39),
	HX_("create",fc,66,0f,7c),
	HX_("frames",a6,af,85,ac),
	HX_("update",09,86,05,87),
	HX_("textUpdate",96,06,f6,bd),
	HX_("save",3d,8b,4d,4c),
	HX_("reset",cf,49,c8,e6),
	HX_("quit",cf,3f,0a,4b),
	HX_("addKeyGamepad",43,ca,56,62),
	HX_("lastKey",e9,d0,a6,d7),
	HX_("addKey",fe,99,02,9f),
	HX_("changeItem",a3,fa,08,20),
	::String(null()) };

::hx::Class KeyBindMenu_obj::__mClass;

void KeyBindMenu_obj::__register()
{
	KeyBindMenu_obj _hx_dummy;
	KeyBindMenu_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("KeyBindMenu",9b,9e,7a,e2);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(KeyBindMenu_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< KeyBindMenu_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = KeyBindMenu_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = KeyBindMenu_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

