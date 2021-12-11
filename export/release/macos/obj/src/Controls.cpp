#include <hxcpp.h>

#ifndef INCLUDED_Control
#include <Control.h>
#endif
#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_Device
#include <Device.h>
#endif
#ifndef INCLUDED_KeyBinds
#include <KeyBinds.h>
#endif
#ifndef INCLUDED_KeyboardScheme
#include <KeyboardScheme.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxAction
#include <flixel/input/actions/FlxAction.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionAnalog
#include <flixel/input/actions/FlxActionAnalog.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionDigital
#include <flixel/input/actions/FlxActionDigital.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionInput
#include <flixel/input/actions/FlxActionInput.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionInputDigital
#include <flixel/input/actions/FlxActionInputDigital.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionManager
#include <flixel/input/actions/FlxActionManager.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionSet
#include <flixel/input/actions/FlxActionSet.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxInputDevice
#include <flixel/input/actions/FlxInputDevice.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad__FlxGamepadInputID_FlxGamepadInputID_Impl_
#include <flixel/input/gamepad/_FlxGamepadInputID/FlxGamepadInputID_Impl_.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard__FlxKey_FlxKey_Impl_
#include <flixel/input/keyboard/_FlxKey/FlxKey_Impl_.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_InputFrontEnd
#include <flixel/system/frontEnds/InputFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_BalancedTree
#include <haxe/ds/BalancedTree.h>
#endif
#ifndef INCLUDED_haxe_ds_EnumValueMap
#include <haxe/ds/EnumValueMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_948b5caa279cd923_124_new,"Controls","new",0x4f8de688,"Controls.new","Controls.hx",124,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_168_get_UP,"Controls","get_UP",0xb958147c,"Controls.get_UP","Controls.hx",168,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_173_get_LEFT,"Controls","get_LEFT",0xc8e82468,"Controls.get_LEFT","Controls.hx",173,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_178_get_RIGHT,"Controls","get_RIGHT",0x7944c43b,"Controls.get_RIGHT","Controls.hx",178,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_183_get_DOWN,"Controls","get_DOWN",0xc3a614c3,"Controls.get_DOWN","Controls.hx",183,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_188_get_UP_P,"Controls","get_UP_P",0xcee37e8d,"Controls.get_UP_P","Controls.hx",188,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_193_get_LEFT_P,"Controls","get_LEFT_P",0xee886179,"Controls.get_LEFT_P","Controls.hx",193,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_198_get_RIGHT_P,"Controls","get_RIGHT_P",0xe72adc0c,"Controls.get_RIGHT_P","Controls.hx",198,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_203_get_DOWN_P,"Controls","get_DOWN_P",0x88e75e94,"Controls.get_DOWN_P","Controls.hx",203,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_208_get_UP_R,"Controls","get_UP_R",0xcee37e8f,"Controls.get_UP_R","Controls.hx",208,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_213_get_LEFT_R,"Controls","get_LEFT_R",0xee88617b,"Controls.get_LEFT_R","Controls.hx",213,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_218_get_RIGHT_R,"Controls","get_RIGHT_R",0xe72adc0e,"Controls.get_RIGHT_R","Controls.hx",218,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_223_get_DOWN_R,"Controls","get_DOWN_R",0x88e75e96,"Controls.get_DOWN_R","Controls.hx",223,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_228_get_NOTE_UP,"Controls","get_NOTE_UP",0x213b6207,"Controls.get_NOTE_UP","Controls.hx",228,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_233_get_NOTE_LEFT,"Controls","get_NOTE_LEFT",0x6a622ab3,"Controls.get_NOTE_LEFT","Controls.hx",233,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_238_get_NOTE_RIGHT,"Controls","get_NOTE_RIGHT",0x22903f90,"Controls.get_NOTE_RIGHT","Controls.hx",238,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_243_get_NOTE_DOWN,"Controls","get_NOTE_DOWN",0x65201b0e,"Controls.get_NOTE_DOWN","Controls.hx",243,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_248_get_NOTE_UP_P,"Controls","get_NOTE_UP_P",0x705d84d8,"Controls.get_NOTE_UP_P","Controls.hx",248,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_253_get_NOTE_LEFT_P,"Controls","get_NOTE_LEFT_P",0x6748d084,"Controls.get_NOTE_LEFT_P","Controls.hx",253,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_258_get_NOTE_RIGHT_P,"Controls","get_NOTE_RIGHT_P",0x16cb96a1,"Controls.get_NOTE_RIGHT_P","Controls.hx",258,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_263_get_NOTE_DOWN_P,"Controls","get_NOTE_DOWN_P",0x01a7cd9f,"Controls.get_NOTE_DOWN_P","Controls.hx",263,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_268_get_NOTE_UP_R,"Controls","get_NOTE_UP_R",0x705d84da,"Controls.get_NOTE_UP_R","Controls.hx",268,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_273_get_NOTE_LEFT_R,"Controls","get_NOTE_LEFT_R",0x6748d086,"Controls.get_NOTE_LEFT_R","Controls.hx",273,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_278_get_NOTE_RIGHT_R,"Controls","get_NOTE_RIGHT_R",0x16cb96a3,"Controls.get_NOTE_RIGHT_R","Controls.hx",278,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_283_get_NOTE_DOWN_R,"Controls","get_NOTE_DOWN_R",0x01a7cda1,"Controls.get_NOTE_DOWN_R","Controls.hx",283,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_288_get_ACCEPT,"Controls","get_ACCEPT",0x5fc72da9,"Controls.get_ACCEPT","Controls.hx",288,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_293_get_BACK,"Controls","get_BACK",0xc248f688,"Controls.get_BACK","Controls.hx",293,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_298_get_PAUSE,"Controls","get_PAUSE",0x4d388f55,"Controls.get_PAUSE","Controls.hx",298,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_303_get_RESET,"Controls","get_RESET",0x76a9022e,"Controls.get_RESET","Controls.hx",303,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_308_get_CHEAT,"Controls","get_CHEAT",0xd5974f72,"Controls.get_CHEAT","Controls.hx",308,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_396_update,"Controls","update",0x9d2db8e1,"Controls.update","Controls.hx",396,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_406_checkByName,"Controls","checkByName",0xbe587cd2,"Controls.checkByName","Controls.hx",406,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_410_getDialogueName,"Controls","getDialogueName",0xe1263f61,"Controls.getDialogueName","Controls.hx",410,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_422_getDialogueNameFromToken,"Controls","getDialogueNameFromToken",0x6458998e,"Controls.getDialogueNameFromToken","Controls.hx",422,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_427_getActionFromControl,"Controls","getActionFromControl",0xa2e9ae5f,"Controls.getActionFromControl","Controls.hx",427,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_459_forEachBound,"Controls","forEachBound",0x9a98930c,"Controls.forEachBound","Controls.hx",459,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_507_replaceBinding,"Controls","replaceBinding",0x45096449,"Controls.replaceBinding","Controls.hx",507,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_528_copyFrom,"Controls","copyFrom",0xdf1da497,"Controls.copyFrom","Controls.hx",528,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_575_copyTo,"Controls","copyTo",0xdf5b4f68,"Controls.copyTo","Controls.hx",575,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_580_mergeKeyboardScheme,"Controls","mergeKeyboardScheme",0x61e2372c,"Controls.mergeKeyboardScheme","Controls.hx",580,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_599_bindKeys,"Controls","bindKeys",0xcb8dbf29,"Controls.bindKeys","Controls.hx",599,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_612_unbindKeys,"Controls","unbindKeys",0xec4b8c82,"Controls.unbindKeys","Controls.hx",612,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_637_setKeyboardScheme,"Controls","setKeyboardScheme",0x039bdb96,"Controls.setKeyboardScheme","Controls.hx",637,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_712_loadKeyBinds,"Controls","loadKeyBinds",0x1c488715,"Controls.loadKeyBinds","Controls.hx",712,0x0ab041e8)
static const int _hx_array_data_116e4296_425[] = {
	(int)11,(int)34,
};
static const int _hx_array_data_116e4296_426[] = {
	(int)13,(int)37,
};
static const int _hx_array_data_116e4296_427[] = {
	(int)12,(int)36,
};
static const int _hx_array_data_116e4296_428[] = {
	(int)14,(int)35,
};
static const int _hx_array_data_116e4296_429[] = {
	(int)0,
};
static const int _hx_array_data_116e4296_430[] = {
	(int)1,
};
static const int _hx_array_data_116e4296_431[] = {
	(int)7,
};
static const int _hx_array_data_116e4296_432[] = {
	(int)87,(int)38,
};
static const int _hx_array_data_116e4296_433[] = {
	(int)65,(int)40,
};
static const int _hx_array_data_116e4296_434[] = {
	(int)83,(int)37,
};
static const int _hx_array_data_116e4296_435[] = {
	(int)68,(int)39,
};
static const int _hx_array_data_116e4296_436[] = {
	(int)90,(int)32,(int)13,
};
static const int _hx_array_data_116e4296_437[] = {
	(int)8,(int)27,
};
static const int _hx_array_data_116e4296_438[] = {
	(int)13,(int)27,
};
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_759_removeKeyboard,"Controls","removeKeyboard",0xd2dac3e3,"Controls.removeKeyboard","Controls.hx",759,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_772_addGamepad,"Controls","addGamepad",0xa2c68b58,"Controls.addGamepad","Controls.hx",772,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_788_addGamepadLiteral,"Controls","addGamepadLiteral",0x50b4e0f7,"Controls.addGamepadLiteral","Controls.hx",788,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_801_removeGamepad,"Controls","removeGamepad",0xfdf294e5,"Controls.removeGamepad","Controls.hx",801,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_819_addDefaultGamepad,"Controls","addDefaultGamepad",0xaa5e6409,"Controls.addDefaultGamepad","Controls.hx",819,0x0ab041e8)
static const int _hx_array_data_116e4296_538[] = {
	(int)0,
};
static const int _hx_array_data_116e4296_539[] = {
	(int)1,
};
static const int _hx_array_data_116e4296_540[] = {
	(int)11,(int)34,
};
static const int _hx_array_data_116e4296_541[] = {
	(int)12,(int)36,
};
static const int _hx_array_data_116e4296_542[] = {
	(int)13,(int)37,
};
static const int _hx_array_data_116e4296_543[] = {
	(int)14,(int)35,
};
static const int _hx_array_data_116e4296_544[] = {
	(int)7,
};
static const int _hx_array_data_116e4296_545[] = {
	(int)3,
};
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_853_bindButtons,"Controls","bindButtons",0x94dee42c,"Controls.bindButtons","Controls.hx",853,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_866_unbindButtons,"Controls","unbindButtons",0x83d33473,"Controls.unbindButtons","Controls.hx",866,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_890_getInputsFor,"Controls","getInputsFor",0xa3571ac2,"Controls.getInputsFor","Controls.hx",890,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_914_removeDevice,"Controls","removeDevice",0x4c1b5cd2,"Controls.removeDevice","Controls.hx",914,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_446_init,"Controls","init",0x495487e8,"Controls.init","Controls.hx",446,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_620_addKeys,"Controls","addKeys",0xd0486edd,"Controls.addKeys","Controls.hx",620,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_625_removeKeys,"Controls","removeKeys",0x75dc9b30,"Controls.removeKeys","Controls.hx",625,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_874_addButtons,"Controls","addButtons",0xe3b5fcf8,"Controls.addButtons","Controls.hx",874,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_879_removeButtons,"Controls","removeButtons",0x3ee20685,"Controls.removeButtons","Controls.hx",879,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_925_isDevice,"Controls","isDevice",0xe09e10f8,"Controls.isDevice","Controls.hx",925,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_934_isGamepad,"Controls","isGamepad",0x5bcd81ff,"Controls.isGamepad","Controls.hx",934,0x0ab041e8)

void Controls_obj::__construct(::String name, ::KeyboardScheme __o_scheme){
            		 ::KeyboardScheme scheme = __o_scheme;
            		if (::hx::IsNull(__o_scheme)) scheme = ::KeyboardScheme_obj::None_dyn();
            	HX_GC_STACKFRAME(&_hx_pos_948b5caa279cd923_124_new)
HXLINE( 163)		this->keyboardScheme = ::KeyboardScheme_obj::None_dyn();
HXLINE( 162)		this->gamepadsAdded = ::Array_obj< int >::__new(0);
HXLINE( 157)		this->byName =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 154)		this->_cheat =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("cheat",13,97,b6,45),null());
HXLINE( 153)		this->_reset =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("reset",cf,49,c8,e6),null());
HXLINE( 152)		this->_pause =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("pause",f6,d6,57,bd),null());
HXLINE( 151)		this->_back =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("back",27,da,10,41),null());
HXLINE( 150)		this->_accept =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("accept",08,93,06,0b),null());
HXLINE( 149)		this->_notedownR =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("down-release",9c,bf,5b,fc),null());
HXLINE( 148)		this->_noterightR =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("right-release",16,dd,28,fb),null());
HXLINE( 147)		this->_noteleftR =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("left-release",41,7c,5d,2e),null());
HXLINE( 146)		this->_noteupR =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("up-release",95,4e,72,92),null());
HXLINE( 145)		this->_notedownP =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("down-press",18,fe,06,cf),null());
HXLINE( 144)		this->_noterightP =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("right-press",12,e9,87,fb),null());
HXLINE( 143)		this->_noteleftP =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("left-press",7d,d7,13,c1),null());
HXLINE( 142)		this->_noteupP =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("up-press",d1,ac,09,1c),null());
HXLINE( 141)		this->_notedown =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("down",62,f8,6d,42),null());
HXLINE( 140)		this->_noteright =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("right",dc,0b,64,e9),null());
HXLINE( 139)		this->_noteleft =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("left",07,08,b0,47),null());
HXLINE( 138)		this->_noteup =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("up",5b,66,00,00),null());
HXLINE( 137)		this->_downR =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("down-release",9c,bf,5b,fc),null());
HXLINE( 136)		this->_rightR =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("right-release",16,dd,28,fb),null());
HXLINE( 135)		this->_leftR =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("left-release",41,7c,5d,2e),null());
HXLINE( 134)		this->_upR =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("up-release",95,4e,72,92),null());
HXLINE( 133)		this->_downP =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("down-press",18,fe,06,cf),null());
HXLINE( 132)		this->_rightP =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("right-press",12,e9,87,fb),null());
HXLINE( 131)		this->_leftP =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("left-press",7d,d7,13,c1),null());
HXLINE( 130)		this->_upP =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("up-press",d1,ac,09,1c),null());
HXLINE( 129)		this->_down =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("down",62,f8,6d,42),null());
HXLINE( 128)		this->_right =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("right",dc,0b,64,e9),null());
HXLINE( 127)		this->_left =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("left",07,08,b0,47),null());
HXLINE( 126)		this->_up =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("up",5b,66,00,00),null());
HXLINE( 313)		super::__construct(name,null(),null());
HXLINE( 315)		this->add(this->_up);
HXLINE( 316)		this->add(this->_left);
HXLINE( 317)		this->add(this->_right);
HXLINE( 318)		this->add(this->_down);
HXLINE( 319)		this->add(this->_upP);
HXLINE( 320)		this->add(this->_leftP);
HXLINE( 321)		this->add(this->_rightP);
HXLINE( 322)		this->add(this->_downP);
HXLINE( 323)		this->add(this->_upR);
HXLINE( 324)		this->add(this->_leftR);
HXLINE( 325)		this->add(this->_rightR);
HXLINE( 326)		this->add(this->_downR);
HXLINE( 327)		this->add(this->_noteup);
HXLINE( 328)		this->add(this->_noteleft);
HXLINE( 329)		this->add(this->_noteright);
HXLINE( 330)		this->add(this->_notedown);
HXLINE( 331)		this->add(this->_noteupP);
HXLINE( 332)		this->add(this->_noteleftP);
HXLINE( 333)		this->add(this->_noterightP);
HXLINE( 334)		this->add(this->_notedownP);
HXLINE( 335)		this->add(this->_noteupR);
HXLINE( 336)		this->add(this->_noteleftR);
HXLINE( 337)		this->add(this->_noterightR);
HXLINE( 338)		this->add(this->_notedownR);
HXLINE( 339)		this->add(this->_accept);
HXLINE( 340)		this->add(this->_back);
HXLINE( 341)		this->add(this->_pause);
HXLINE( 342)		this->add(this->_reset);
HXLINE( 343)		this->add(this->_cheat);
HXLINE( 345)		{
HXLINE( 345)			int _g = 0;
HXDLIN( 345)			::Array< ::Dynamic> _g1 = this->digitalActions;
HXDLIN( 345)			while((_g < _g1->length)){
HXLINE( 345)				 ::flixel::input::actions::FlxActionDigital action = _g1->__get(_g).StaticCast<  ::flixel::input::actions::FlxActionDigital >();
HXDLIN( 345)				_g = (_g + 1);
HXLINE( 346)				this->byName->set(action->name,action);
            			}
            		}
HXLINE( 348)		this->setKeyboardScheme(scheme,false);
            	}

Dynamic Controls_obj::__CreateEmpty() { return new Controls_obj; }

void *Controls_obj::_hx_vtable = 0;

Dynamic Controls_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Controls_obj > _hx_result = new Controls_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Controls_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x315ddd0d) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x315ddd0d;
	} else {
		return inClassId==(int)0x6cff3556;
	}
}

bool Controls_obj::get_UP(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_168_get_UP)
HXDLIN( 168)		return this->_up->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_UP,return )

bool Controls_obj::get_LEFT(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_173_get_LEFT)
HXDLIN( 173)		return this->_left->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_LEFT,return )

bool Controls_obj::get_RIGHT(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_178_get_RIGHT)
HXDLIN( 178)		return this->_right->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_RIGHT,return )

bool Controls_obj::get_DOWN(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_183_get_DOWN)
HXDLIN( 183)		return this->_down->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_DOWN,return )

bool Controls_obj::get_UP_P(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_188_get_UP_P)
HXDLIN( 188)		return this->_upP->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_UP_P,return )

bool Controls_obj::get_LEFT_P(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_193_get_LEFT_P)
HXDLIN( 193)		return this->_leftP->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_LEFT_P,return )

bool Controls_obj::get_RIGHT_P(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_198_get_RIGHT_P)
HXDLIN( 198)		return this->_rightP->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_RIGHT_P,return )

bool Controls_obj::get_DOWN_P(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_203_get_DOWN_P)
HXDLIN( 203)		return this->_downP->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_DOWN_P,return )

bool Controls_obj::get_UP_R(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_208_get_UP_R)
HXDLIN( 208)		return this->_upR->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_UP_R,return )

bool Controls_obj::get_LEFT_R(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_213_get_LEFT_R)
HXDLIN( 213)		return this->_leftR->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_LEFT_R,return )

bool Controls_obj::get_RIGHT_R(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_218_get_RIGHT_R)
HXDLIN( 218)		return this->_rightR->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_RIGHT_R,return )

bool Controls_obj::get_DOWN_R(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_223_get_DOWN_R)
HXDLIN( 223)		return this->_downR->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_DOWN_R,return )

bool Controls_obj::get_NOTE_UP(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_228_get_NOTE_UP)
HXDLIN( 228)		return this->_noteup->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_NOTE_UP,return )

bool Controls_obj::get_NOTE_LEFT(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_233_get_NOTE_LEFT)
HXDLIN( 233)		return this->_noteleft->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_NOTE_LEFT,return )

bool Controls_obj::get_NOTE_RIGHT(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_238_get_NOTE_RIGHT)
HXDLIN( 238)		return this->_noteright->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_NOTE_RIGHT,return )

bool Controls_obj::get_NOTE_DOWN(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_243_get_NOTE_DOWN)
HXDLIN( 243)		return this->_notedown->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_NOTE_DOWN,return )

bool Controls_obj::get_NOTE_UP_P(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_248_get_NOTE_UP_P)
HXDLIN( 248)		return this->_noteupP->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_NOTE_UP_P,return )

bool Controls_obj::get_NOTE_LEFT_P(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_253_get_NOTE_LEFT_P)
HXDLIN( 253)		return this->_noteleftP->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_NOTE_LEFT_P,return )

bool Controls_obj::get_NOTE_RIGHT_P(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_258_get_NOTE_RIGHT_P)
HXDLIN( 258)		return this->_noterightP->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_NOTE_RIGHT_P,return )

bool Controls_obj::get_NOTE_DOWN_P(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_263_get_NOTE_DOWN_P)
HXDLIN( 263)		return this->_notedownP->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_NOTE_DOWN_P,return )

bool Controls_obj::get_NOTE_UP_R(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_268_get_NOTE_UP_R)
HXDLIN( 268)		return this->_noteupR->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_NOTE_UP_R,return )

bool Controls_obj::get_NOTE_LEFT_R(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_273_get_NOTE_LEFT_R)
HXDLIN( 273)		return this->_noteleftR->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_NOTE_LEFT_R,return )

bool Controls_obj::get_NOTE_RIGHT_R(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_278_get_NOTE_RIGHT_R)
HXDLIN( 278)		return this->_noterightR->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_NOTE_RIGHT_R,return )

bool Controls_obj::get_NOTE_DOWN_R(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_283_get_NOTE_DOWN_R)
HXDLIN( 283)		return this->_notedownR->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_NOTE_DOWN_R,return )

bool Controls_obj::get_ACCEPT(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_288_get_ACCEPT)
HXDLIN( 288)		return this->_accept->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_ACCEPT,return )

bool Controls_obj::get_BACK(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_293_get_BACK)
HXDLIN( 293)		return this->_back->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_BACK,return )

bool Controls_obj::get_PAUSE(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_298_get_PAUSE)
HXDLIN( 298)		return this->_pause->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_PAUSE,return )

bool Controls_obj::get_RESET(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_303_get_RESET)
HXDLIN( 303)		return this->_reset->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_RESET,return )

bool Controls_obj::get_CHEAT(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_308_get_CHEAT)
HXDLIN( 308)		return this->_cheat->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_CHEAT,return )

void Controls_obj::update(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_396_update)
HXDLIN( 396)		this->super::update();
            	}


bool Controls_obj::checkByName(::String name){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_406_checkByName)
HXDLIN( 406)		return ( ( ::flixel::input::actions::FlxActionDigital)(this->byName->get(name)) )->check();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Controls_obj,checkByName,return )

::String Controls_obj::getDialogueName( ::flixel::input::actions::FlxActionDigital action){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_410_getDialogueName)
HXLINE( 411)		 ::flixel::input::actions::FlxActionInput input = action->inputs->__get(0).StaticCast<  ::flixel::input::actions::FlxActionInput >();
HXLINE( 412)		 ::flixel::input::actions::FlxInputDevice _g = input->device;
HXDLIN( 412)		switch((int)(_g->_hx_getIndex())){
            			case (int)3: {
HXLINE( 414)				return ((HX_("[",5b,00,00,00) + ::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::toStringMap->get(input->inputID)) + HX_("]",5d,00,00,00));
            			}
            			break;
            			case (int)4: {
HXLINE( 415)				return ((HX_("(",28,00,00,00) + ::flixel::input::gamepad::_FlxGamepadInputID::FlxGamepadInputID_Impl__obj::toStringMap->get(input->inputID)) + HX_(")",29,00,00,00));
            			}
            			break;
            			default:{
HXLINE( 416)				 ::flixel::input::actions::FlxInputDevice device = _g;
HXDLIN( 416)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("unhandled device: ",f9,e1,62,a5) + ::Std_obj::string(device))));
            			}
            		}
HXLINE( 412)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Controls_obj,getDialogueName,return )

::String Controls_obj::getDialogueNameFromToken(::String token){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_422_getDialogueNameFromToken)
HXDLIN( 422)		::cpp::VirtualArray params = null();
HXDLIN( 422)		return this->getDialogueName(this->getActionFromControl(::Type_obj::createEnum(::hx::ClassOf< ::Control >(),token.toUpperCase(),params)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Controls_obj,getDialogueNameFromToken,return )

 ::flixel::input::actions::FlxActionDigital Controls_obj::getActionFromControl( ::Control control){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_427_getActionFromControl)
HXDLIN( 427)		switch((int)(control->_hx_getIndex())){
            			case (int)0: {
HXLINE( 429)				return this->_up;
            			}
            			break;
            			case (int)1: {
HXLINE( 431)				return this->_left;
            			}
            			break;
            			case (int)2: {
HXLINE( 432)				return this->_right;
            			}
            			break;
            			case (int)3: {
HXLINE( 430)				return this->_down;
            			}
            			break;
            			case (int)4: {
HXLINE( 433)				return this->_noteup;
            			}
            			break;
            			case (int)5: {
HXLINE( 435)				return this->_noteleft;
            			}
            			break;
            			case (int)6: {
HXLINE( 436)				return this->_noteright;
            			}
            			break;
            			case (int)7: {
HXLINE( 434)				return this->_notedown;
            			}
            			break;
            			case (int)8: {
HXLINE( 440)				return this->_reset;
            			}
            			break;
            			case (int)9: {
HXLINE( 437)				return this->_accept;
            			}
            			break;
            			case (int)10: {
HXLINE( 438)				return this->_back;
            			}
            			break;
            			case (int)11: {
HXLINE( 439)				return this->_pause;
            			}
            			break;
            			case (int)12: {
HXLINE( 441)				return this->_cheat;
            			}
            			break;
            		}
HXLINE( 427)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Controls_obj,getActionFromControl,return )

void Controls_obj::forEachBound( ::Control control, ::Dynamic func){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_459_forEachBound)
HXDLIN( 459)		switch((int)(control->_hx_getIndex())){
            			case (int)0: {
HXLINE( 462)				func(this->_up,1);
HXLINE( 463)				func(this->_upP,2);
HXLINE( 464)				func(this->_upR,-1);
            			}
            			break;
            			case (int)1: {
HXLINE( 466)				func(this->_left,1);
HXLINE( 467)				func(this->_leftP,2);
HXLINE( 468)				func(this->_leftR,-1);
            			}
            			break;
            			case (int)2: {
HXLINE( 470)				func(this->_right,1);
HXLINE( 471)				func(this->_rightP,2);
HXLINE( 472)				func(this->_rightR,-1);
            			}
            			break;
            			case (int)3: {
HXLINE( 474)				func(this->_down,1);
HXLINE( 475)				func(this->_downP,2);
HXLINE( 476)				func(this->_downR,-1);
            			}
            			break;
            			case (int)4: {
HXLINE( 478)				func(this->_noteup,1);
HXLINE( 479)				func(this->_noteupP,2);
HXLINE( 480)				func(this->_noteupR,-1);
            			}
            			break;
            			case (int)5: {
HXLINE( 482)				func(this->_noteleft,1);
HXLINE( 483)				func(this->_noteleftP,2);
HXLINE( 484)				func(this->_noteleftR,-1);
            			}
            			break;
            			case (int)6: {
HXLINE( 486)				func(this->_noteright,1);
HXLINE( 487)				func(this->_noterightP,2);
HXLINE( 488)				func(this->_noterightR,-1);
            			}
            			break;
            			case (int)7: {
HXLINE( 490)				func(this->_notedown,1);
HXLINE( 491)				func(this->_notedownP,2);
HXLINE( 492)				func(this->_notedownR,-1);
            			}
            			break;
            			case (int)8: {
HXLINE( 500)				func(this->_reset,2);
            			}
            			break;
            			case (int)9: {
HXLINE( 494)				func(this->_accept,2);
            			}
            			break;
            			case (int)10: {
HXLINE( 496)				func(this->_back,2);
            			}
            			break;
            			case (int)11: {
HXLINE( 498)				func(this->_pause,2);
            			}
            			break;
            			case (int)12: {
HXLINE( 502)				func(this->_cheat,2);
            			}
            			break;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Controls_obj,forEachBound,(void))

void Controls_obj::replaceBinding( ::Control control, ::Device device, ::Dynamic toAdd, ::Dynamic toRemove){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_507_replaceBinding)
HXLINE( 508)		if (::hx::IsEq( toAdd,toRemove )) {
HXLINE( 509)			return;
            		}
HXLINE( 511)		switch((int)(device->_hx_getIndex())){
            			case (int)0: {
HXLINE( 514)				if (::hx::IsNotNull( toRemove )) {
HXLINE( 515)					this->unbindKeys(control,::Array_obj< int >::__new(1)->init(0,toRemove));
            				}
HXLINE( 516)				if (::hx::IsNotNull( toAdd )) {
HXLINE( 517)					this->bindKeys(control,::Array_obj< int >::__new(1)->init(0,toAdd));
            				}
            			}
            			break;
            			case (int)1: {
HXLINE( 519)				int id = device->_hx_getInt(0);
HXDLIN( 519)				{
HXLINE( 520)					if (::hx::IsNotNull( toRemove )) {
HXLINE( 521)						this->unbindButtons(control,id,::Array_obj< int >::__new(1)->init(0,toRemove));
            					}
HXLINE( 522)					if (::hx::IsNotNull( toAdd )) {
HXLINE( 523)						this->bindButtons(control,id,::Array_obj< int >::__new(1)->init(0,toAdd));
            					}
            				}
            			}
            			break;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(Controls_obj,replaceBinding,(void))

void Controls_obj::copyFrom( ::Controls controls, ::Device device){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_528_copyFrom)
HXLINE( 530)		{
HXLINE( 530)			::Dynamic map = controls->byName;
HXDLIN( 530)			::Dynamic _g_map = map;
HXDLIN( 530)			 ::Dynamic _g_keys = ::haxe::IMap_obj::keys(map);
HXDLIN( 530)			while(( (bool)(_g_keys->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 530)				::String key = ( (::String)(_g_keys->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN( 530)				 ::flixel::input::actions::FlxActionDigital _g1_value = ( ( ::flixel::input::actions::FlxActionDigital)(::haxe::IMap_obj::get(_g_map,key)) );
HXDLIN( 530)				::String _g1_key = key;
HXDLIN( 530)				::String name = _g1_key;
HXDLIN( 530)				 ::flixel::input::actions::FlxActionDigital action = _g1_value;
HXLINE( 532)				{
HXLINE( 532)					int _g = 0;
HXDLIN( 532)					::Array< ::Dynamic> _g1 = action->inputs;
HXDLIN( 532)					while((_g < _g1->length)){
HXLINE( 532)						 ::flixel::input::actions::FlxActionInput input = _g1->__get(_g).StaticCast<  ::flixel::input::actions::FlxActionInput >();
HXDLIN( 532)						_g = (_g + 1);
HXLINE( 534)						bool _hx_tmp;
HXDLIN( 534)						if (::hx::IsNotNull( device )) {
HXLINE( 534)							_hx_tmp = ::Controls_obj::isDevice(input,device);
            						}
            						else {
HXLINE( 534)							_hx_tmp = true;
            						}
HXDLIN( 534)						if (_hx_tmp) {
HXLINE( 535)							( ( ::flixel::input::actions::FlxActionDigital)(this->byName->get(name)) )->add(( ( ::flixel::input::actions::FlxActionInputDigital)(input) ));
            						}
            					}
            				}
            			}
            		}
HXLINE( 550)		if (::hx::IsNull( device )) {
HXLINE( 555)			{
HXLINE( 555)				int _g = 0;
HXDLIN( 555)				::Array< int > _g1 = controls->gamepadsAdded;
HXDLIN( 555)				while((_g < _g1->length)){
HXLINE( 555)					int gamepad = _g1->__get(_g);
HXDLIN( 555)					_g = (_g + 1);
HXLINE( 556)					if (!(this->gamepadsAdded->contains(gamepad))) {
HXLINE( 557)						this->gamepadsAdded->push(gamepad);
            					}
            				}
            			}
HXLINE( 564)			this->mergeKeyboardScheme(controls->keyboardScheme);
            		}
            		else {
HXLINE( 550)			switch((int)(device->_hx_getIndex())){
            				case (int)0: {
HXLINE( 569)					this->mergeKeyboardScheme(controls->keyboardScheme);
            				}
            				break;
            				case (int)1: {
HXLINE( 566)					int id = device->_hx_getInt(0);
HXLINE( 567)					this->gamepadsAdded->push(id);
            				}
            				break;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Controls_obj,copyFrom,(void))

void Controls_obj::copyTo( ::Controls controls, ::Device device){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_575_copyTo)
HXDLIN( 575)		controls->copyFrom(::hx::ObjectPtr<OBJ_>(this),device);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Controls_obj,copyTo,(void))

void Controls_obj::mergeKeyboardScheme( ::KeyboardScheme scheme){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_580_mergeKeyboardScheme)
HXDLIN( 580)		if (::hx::IsPointerNotEq( scheme,::KeyboardScheme_obj::None_dyn() )) {
HXLINE( 582)			if ((this->keyboardScheme->_hx_getIndex() == 2)) {
HXLINE( 585)				this->keyboardScheme = scheme;
            			}
            			else {
HXLINE( 587)				this->keyboardScheme = ::KeyboardScheme_obj::Custom_dyn();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Controls_obj,mergeKeyboardScheme,(void))

void Controls_obj::bindKeys( ::Control control,::Array< int > keys){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_599_bindKeys)
HXDLIN( 599)		switch((int)(control->_hx_getIndex())){
            			case (int)0: {
HXDLIN( 599)				{
HXDLIN( 599)					 ::flixel::input::actions::FlxActionDigital action = this->_up;
HXDLIN( 599)					int state = 1;
HXDLIN( 599)					int _g = 0;
HXDLIN( 599)					while((_g < keys->length)){
HXDLIN( 599)						int key = keys->__get(_g);
HXDLIN( 599)						_g = (_g + 1);
HXDLIN( 599)						action->addKey(key,state);
            					}
            				}
HXDLIN( 599)				{
HXDLIN( 599)					 ::flixel::input::actions::FlxActionDigital action1 = this->_upP;
HXDLIN( 599)					int state1 = 2;
HXDLIN( 599)					int _g1 = 0;
HXDLIN( 599)					while((_g1 < keys->length)){
HXDLIN( 599)						int key = keys->__get(_g1);
HXDLIN( 599)						_g1 = (_g1 + 1);
HXDLIN( 599)						action1->addKey(key,state1);
            					}
            				}
HXDLIN( 599)				{
HXDLIN( 599)					 ::flixel::input::actions::FlxActionDigital action2 = this->_upR;
HXDLIN( 599)					int state2 = -1;
HXDLIN( 599)					int _g2 = 0;
HXDLIN( 599)					while((_g2 < keys->length)){
HXDLIN( 599)						int key = keys->__get(_g2);
HXDLIN( 599)						_g2 = (_g2 + 1);
HXDLIN( 599)						action2->addKey(key,state2);
            					}
            				}
            			}
            			break;
            			case (int)1: {
HXDLIN( 599)				{
HXDLIN( 599)					 ::flixel::input::actions::FlxActionDigital action = this->_left;
HXDLIN( 599)					int state = 1;
HXDLIN( 599)					int _g = 0;
HXDLIN( 599)					while((_g < keys->length)){
HXDLIN( 599)						int key = keys->__get(_g);
HXDLIN( 599)						_g = (_g + 1);
HXDLIN( 599)						action->addKey(key,state);
            					}
            				}
HXDLIN( 599)				{
HXDLIN( 599)					 ::flixel::input::actions::FlxActionDigital action1 = this->_leftP;
HXDLIN( 599)					int state1 = 2;
HXDLIN( 599)					int _g1 = 0;
HXDLIN( 599)					while((_g1 < keys->length)){
HXDLIN( 599)						int key = keys->__get(_g1);
HXDLIN( 599)						_g1 = (_g1 + 1);
HXDLIN( 599)						action1->addKey(key,state1);
            					}
            				}
HXDLIN( 599)				{
HXDLIN( 599)					 ::flixel::input::actions::FlxActionDigital action2 = this->_leftR;
HXDLIN( 599)					int state2 = -1;
HXDLIN( 599)					int _g2 = 0;
HXDLIN( 599)					while((_g2 < keys->length)){
HXDLIN( 599)						int key = keys->__get(_g2);
HXDLIN( 599)						_g2 = (_g2 + 1);
HXDLIN( 599)						action2->addKey(key,state2);
            					}
            				}
            			}
            			break;
            			case (int)2: {
HXDLIN( 599)				{
HXDLIN( 599)					 ::flixel::input::actions::FlxActionDigital action = this->_right;
HXDLIN( 599)					int state = 1;
HXDLIN( 599)					int _g = 0;
HXDLIN( 599)					while((_g < keys->length)){
HXDLIN( 599)						int key = keys->__get(_g);
HXDLIN( 599)						_g = (_g + 1);
HXDLIN( 599)						action->addKey(key,state);
            					}
            				}
HXDLIN( 599)				{
HXDLIN( 599)					 ::flixel::input::actions::FlxActionDigital action1 = this->_rightP;
HXDLIN( 599)					int state1 = 2;
HXDLIN( 599)					int _g1 = 0;
HXDLIN( 599)					while((_g1 < keys->length)){
HXDLIN( 599)						int key = keys->__get(_g1);
HXDLIN( 599)						_g1 = (_g1 + 1);
HXDLIN( 599)						action1->addKey(key,state1);
            					}
            				}
HXDLIN( 599)				{
HXDLIN( 599)					 ::flixel::input::actions::FlxActionDigital action2 = this->_rightR;
HXDLIN( 599)					int state2 = -1;
HXDLIN( 599)					int _g2 = 0;
HXDLIN( 599)					while((_g2 < keys->length)){
HXDLIN( 599)						int key = keys->__get(_g2);
HXDLIN( 599)						_g2 = (_g2 + 1);
HXDLIN( 599)						action2->addKey(key,state2);
            					}
            				}
            			}
            			break;
            			case (int)3: {
HXDLIN( 599)				{
HXDLIN( 599)					 ::flixel::input::actions::FlxActionDigital action = this->_down;
HXDLIN( 599)					int state = 1;
HXDLIN( 599)					int _g = 0;
HXDLIN( 599)					while((_g < keys->length)){
HXDLIN( 599)						int key = keys->__get(_g);
HXDLIN( 599)						_g = (_g + 1);
HXDLIN( 599)						action->addKey(key,state);
            					}
            				}
HXDLIN( 599)				{
HXDLIN( 599)					 ::flixel::input::actions::FlxActionDigital action1 = this->_downP;
HXDLIN( 599)					int state1 = 2;
HXDLIN( 599)					int _g1 = 0;
HXDLIN( 599)					while((_g1 < keys->length)){
HXDLIN( 599)						int key = keys->__get(_g1);
HXDLIN( 599)						_g1 = (_g1 + 1);
HXDLIN( 599)						action1->addKey(key,state1);
            					}
            				}
HXDLIN( 599)				{
HXDLIN( 599)					 ::flixel::input::actions::FlxActionDigital action2 = this->_downR;
HXDLIN( 599)					int state2 = -1;
HXDLIN( 599)					int _g2 = 0;
HXDLIN( 599)					while((_g2 < keys->length)){
HXDLIN( 599)						int key = keys->__get(_g2);
HXDLIN( 599)						_g2 = (_g2 + 1);
HXDLIN( 599)						action2->addKey(key,state2);
            					}
            				}
            			}
            			break;
            			case (int)4: {
HXDLIN( 599)				{
HXDLIN( 599)					 ::flixel::input::actions::FlxActionDigital action = this->_noteup;
HXDLIN( 599)					int state = 1;
HXDLIN( 599)					int _g = 0;
HXDLIN( 599)					while((_g < keys->length)){
HXDLIN( 599)						int key = keys->__get(_g);
HXDLIN( 599)						_g = (_g + 1);
HXDLIN( 599)						action->addKey(key,state);
            					}
            				}
HXDLIN( 599)				{
HXDLIN( 599)					 ::flixel::input::actions::FlxActionDigital action1 = this->_noteupP;
HXDLIN( 599)					int state1 = 2;
HXDLIN( 599)					int _g1 = 0;
HXDLIN( 599)					while((_g1 < keys->length)){
HXDLIN( 599)						int key = keys->__get(_g1);
HXDLIN( 599)						_g1 = (_g1 + 1);
HXDLIN( 599)						action1->addKey(key,state1);
            					}
            				}
HXDLIN( 599)				{
HXDLIN( 599)					 ::flixel::input::actions::FlxActionDigital action2 = this->_noteupR;
HXDLIN( 599)					int state2 = -1;
HXDLIN( 599)					int _g2 = 0;
HXDLIN( 599)					while((_g2 < keys->length)){
HXDLIN( 599)						int key = keys->__get(_g2);
HXDLIN( 599)						_g2 = (_g2 + 1);
HXDLIN( 599)						action2->addKey(key,state2);
            					}
            				}
            			}
            			break;
            			case (int)5: {
HXDLIN( 599)				{
HXDLIN( 599)					 ::flixel::input::actions::FlxActionDigital action = this->_noteleft;
HXDLIN( 599)					int state = 1;
HXDLIN( 599)					int _g = 0;
HXDLIN( 599)					while((_g < keys->length)){
HXDLIN( 599)						int key = keys->__get(_g);
HXDLIN( 599)						_g = (_g + 1);
HXDLIN( 599)						action->addKey(key,state);
            					}
            				}
HXDLIN( 599)				{
HXDLIN( 599)					 ::flixel::input::actions::FlxActionDigital action1 = this->_noteleftP;
HXDLIN( 599)					int state1 = 2;
HXDLIN( 599)					int _g1 = 0;
HXDLIN( 599)					while((_g1 < keys->length)){
HXDLIN( 599)						int key = keys->__get(_g1);
HXDLIN( 599)						_g1 = (_g1 + 1);
HXDLIN( 599)						action1->addKey(key,state1);
            					}
            				}
HXDLIN( 599)				{
HXDLIN( 599)					 ::flixel::input::actions::FlxActionDigital action2 = this->_noteleftR;
HXDLIN( 599)					int state2 = -1;
HXDLIN( 599)					int _g2 = 0;
HXDLIN( 599)					while((_g2 < keys->length)){
HXDLIN( 599)						int key = keys->__get(_g2);
HXDLIN( 599)						_g2 = (_g2 + 1);
HXDLIN( 599)						action2->addKey(key,state2);
            					}
            				}
            			}
            			break;
            			case (int)6: {
HXDLIN( 599)				{
HXDLIN( 599)					 ::flixel::input::actions::FlxActionDigital action = this->_noteright;
HXDLIN( 599)					int state = 1;
HXDLIN( 599)					int _g = 0;
HXDLIN( 599)					while((_g < keys->length)){
HXDLIN( 599)						int key = keys->__get(_g);
HXDLIN( 599)						_g = (_g + 1);
HXDLIN( 599)						action->addKey(key,state);
            					}
            				}
HXDLIN( 599)				{
HXDLIN( 599)					 ::flixel::input::actions::FlxActionDigital action1 = this->_noterightP;
HXDLIN( 599)					int state1 = 2;
HXDLIN( 599)					int _g1 = 0;
HXDLIN( 599)					while((_g1 < keys->length)){
HXDLIN( 599)						int key = keys->__get(_g1);
HXDLIN( 599)						_g1 = (_g1 + 1);
HXDLIN( 599)						action1->addKey(key,state1);
            					}
            				}
HXDLIN( 599)				{
HXDLIN( 599)					 ::flixel::input::actions::FlxActionDigital action2 = this->_noterightR;
HXDLIN( 599)					int state2 = -1;
HXDLIN( 599)					int _g2 = 0;
HXDLIN( 599)					while((_g2 < keys->length)){
HXDLIN( 599)						int key = keys->__get(_g2);
HXDLIN( 599)						_g2 = (_g2 + 1);
HXDLIN( 599)						action2->addKey(key,state2);
            					}
            				}
            			}
            			break;
            			case (int)7: {
HXDLIN( 599)				{
HXDLIN( 599)					 ::flixel::input::actions::FlxActionDigital action = this->_notedown;
HXDLIN( 599)					int state = 1;
HXDLIN( 599)					int _g = 0;
HXDLIN( 599)					while((_g < keys->length)){
HXDLIN( 599)						int key = keys->__get(_g);
HXDLIN( 599)						_g = (_g + 1);
HXDLIN( 599)						action->addKey(key,state);
            					}
            				}
HXDLIN( 599)				{
HXDLIN( 599)					 ::flixel::input::actions::FlxActionDigital action1 = this->_notedownP;
HXDLIN( 599)					int state1 = 2;
HXDLIN( 599)					int _g1 = 0;
HXDLIN( 599)					while((_g1 < keys->length)){
HXDLIN( 599)						int key = keys->__get(_g1);
HXDLIN( 599)						_g1 = (_g1 + 1);
HXDLIN( 599)						action1->addKey(key,state1);
            					}
            				}
HXDLIN( 599)				{
HXDLIN( 599)					 ::flixel::input::actions::FlxActionDigital action2 = this->_notedownR;
HXDLIN( 599)					int state2 = -1;
HXDLIN( 599)					int _g2 = 0;
HXDLIN( 599)					while((_g2 < keys->length)){
HXDLIN( 599)						int key = keys->__get(_g2);
HXDLIN( 599)						_g2 = (_g2 + 1);
HXDLIN( 599)						action2->addKey(key,state2);
            					}
            				}
            			}
            			break;
            			case (int)8: {
HXDLIN( 599)				 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 599)				int state = 2;
HXDLIN( 599)				int _g = 0;
HXDLIN( 599)				while((_g < keys->length)){
HXDLIN( 599)					int key = keys->__get(_g);
HXDLIN( 599)					_g = (_g + 1);
HXDLIN( 599)					action->addKey(key,state);
            				}
            			}
            			break;
            			case (int)9: {
HXDLIN( 599)				 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 599)				int state = 2;
HXDLIN( 599)				int _g = 0;
HXDLIN( 599)				while((_g < keys->length)){
HXDLIN( 599)					int key = keys->__get(_g);
HXDLIN( 599)					_g = (_g + 1);
HXDLIN( 599)					action->addKey(key,state);
            				}
            			}
            			break;
            			case (int)10: {
HXDLIN( 599)				 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 599)				int state = 2;
HXDLIN( 599)				int _g = 0;
HXDLIN( 599)				while((_g < keys->length)){
HXDLIN( 599)					int key = keys->__get(_g);
HXDLIN( 599)					_g = (_g + 1);
HXDLIN( 599)					action->addKey(key,state);
            				}
            			}
            			break;
            			case (int)11: {
HXDLIN( 599)				 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 599)				int state = 2;
HXDLIN( 599)				int _g = 0;
HXDLIN( 599)				while((_g < keys->length)){
HXDLIN( 599)					int key = keys->__get(_g);
HXDLIN( 599)					_g = (_g + 1);
HXDLIN( 599)					action->addKey(key,state);
            				}
            			}
            			break;
            			case (int)12: {
HXDLIN( 599)				 ::flixel::input::actions::FlxActionDigital action = this->_cheat;
HXDLIN( 599)				int state = 2;
HXDLIN( 599)				int _g = 0;
HXDLIN( 599)				while((_g < keys->length)){
HXDLIN( 599)					int key = keys->__get(_g);
HXDLIN( 599)					_g = (_g + 1);
HXDLIN( 599)					action->addKey(key,state);
            				}
            			}
            			break;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Controls_obj,bindKeys,(void))

void Controls_obj::unbindKeys( ::Control control,::Array< int > keys){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_612_unbindKeys)
HXDLIN( 612)		switch((int)(control->_hx_getIndex())){
            			case (int)0: {
HXDLIN( 612)				::Controls_obj::removeKeys(this->_up,keys);
HXDLIN( 612)				::Controls_obj::removeKeys(this->_upP,keys);
HXDLIN( 612)				::Controls_obj::removeKeys(this->_upR,keys);
            			}
            			break;
            			case (int)1: {
HXDLIN( 612)				::Controls_obj::removeKeys(this->_left,keys);
HXDLIN( 612)				::Controls_obj::removeKeys(this->_leftP,keys);
HXDLIN( 612)				::Controls_obj::removeKeys(this->_leftR,keys);
            			}
            			break;
            			case (int)2: {
HXDLIN( 612)				::Controls_obj::removeKeys(this->_right,keys);
HXDLIN( 612)				::Controls_obj::removeKeys(this->_rightP,keys);
HXDLIN( 612)				::Controls_obj::removeKeys(this->_rightR,keys);
            			}
            			break;
            			case (int)3: {
HXDLIN( 612)				::Controls_obj::removeKeys(this->_down,keys);
HXDLIN( 612)				::Controls_obj::removeKeys(this->_downP,keys);
HXDLIN( 612)				::Controls_obj::removeKeys(this->_downR,keys);
            			}
            			break;
            			case (int)4: {
HXDLIN( 612)				::Controls_obj::removeKeys(this->_noteup,keys);
HXDLIN( 612)				::Controls_obj::removeKeys(this->_noteupP,keys);
HXDLIN( 612)				::Controls_obj::removeKeys(this->_noteupR,keys);
            			}
            			break;
            			case (int)5: {
HXDLIN( 612)				::Controls_obj::removeKeys(this->_noteleft,keys);
HXDLIN( 612)				::Controls_obj::removeKeys(this->_noteleftP,keys);
HXDLIN( 612)				::Controls_obj::removeKeys(this->_noteleftR,keys);
            			}
            			break;
            			case (int)6: {
HXDLIN( 612)				::Controls_obj::removeKeys(this->_noteright,keys);
HXDLIN( 612)				::Controls_obj::removeKeys(this->_noterightP,keys);
HXDLIN( 612)				::Controls_obj::removeKeys(this->_noterightR,keys);
            			}
            			break;
            			case (int)7: {
HXDLIN( 612)				::Controls_obj::removeKeys(this->_notedown,keys);
HXDLIN( 612)				::Controls_obj::removeKeys(this->_notedownP,keys);
HXDLIN( 612)				::Controls_obj::removeKeys(this->_notedownR,keys);
            			}
            			break;
            			case (int)8: {
HXDLIN( 612)				::Controls_obj::removeKeys(this->_reset,keys);
            			}
            			break;
            			case (int)9: {
HXDLIN( 612)				::Controls_obj::removeKeys(this->_accept,keys);
            			}
            			break;
            			case (int)10: {
HXDLIN( 612)				::Controls_obj::removeKeys(this->_back,keys);
            			}
            			break;
            			case (int)11: {
HXDLIN( 612)				::Controls_obj::removeKeys(this->_pause,keys);
            			}
            			break;
            			case (int)12: {
HXDLIN( 612)				::Controls_obj::removeKeys(this->_cheat,keys);
            			}
            			break;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Controls_obj,unbindKeys,(void))

void Controls_obj::setKeyboardScheme( ::KeyboardScheme scheme,::hx::Null< bool >  __o_reset){
            		bool reset = __o_reset.Default(true);
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_637_setKeyboardScheme)
HXDLIN( 637)		this->loadKeyBinds();
            	}


HX_DEFINE_DYNAMIC_FUNC2(Controls_obj,setKeyboardScheme,(void))

void Controls_obj::loadKeyBinds(){
            	HX_GC_STACKFRAME(&_hx_pos_948b5caa279cd923_712_loadKeyBinds)
HXLINE( 713)		this->removeKeyboard();
HXLINE( 714)		if ((this->gamepadsAdded->length != 0)) {
HXLINE( 715)			this->removeGamepad(null());
            		}
HXLINE( 716)		::KeyBinds_obj::keyCheck();
HXLINE( 718)		 ::haxe::ds::EnumValueMap buttons =  ::haxe::ds::EnumValueMap_obj::__alloc( HX_CTX );
HXLINE( 720)		buttons->set(::Control_obj::UP_dyn(),::Array_obj< int >::fromData( _hx_array_data_116e4296_425,2));
HXLINE( 721)		buttons->set(::Control_obj::LEFT_dyn(),::Array_obj< int >::fromData( _hx_array_data_116e4296_426,2));
HXLINE( 722)		buttons->set(::Control_obj::DOWN_dyn(),::Array_obj< int >::fromData( _hx_array_data_116e4296_427,2));
HXLINE( 723)		buttons->set(::Control_obj::RIGHT_dyn(),::Array_obj< int >::fromData( _hx_array_data_116e4296_428,2));
HXLINE( 724)		{
HXLINE( 724)			::String s = ( (::String)(::flixel::FlxG_obj::save->data->__Field(HX_("gpupBind",a1,30,42,a5),::hx::paccDynamic)) );
HXDLIN( 724)			s = s.toUpperCase();
HXDLIN( 724)			int value;
HXDLIN( 724)			if (::flixel::input::gamepad::_FlxGamepadInputID::FlxGamepadInputID_Impl__obj::fromStringMap->exists(s)) {
HXLINE( 724)				value = ::flixel::input::gamepad::_FlxGamepadInputID::FlxGamepadInputID_Impl__obj::fromStringMap->get_int(s);
            			}
            			else {
HXLINE( 724)				value = -1;
            			}
HXDLIN( 724)			buttons->set(::Control_obj::NOTE_UP_dyn(),::Array_obj< int >::__new(2)->init(0,value)->init(1,11));
            		}
HXLINE( 725)		{
HXLINE( 726)			::String s1 = ( (::String)(::flixel::FlxG_obj::save->data->__Field(HX_("gpleftBind",8d,64,a6,ef),::hx::paccDynamic)) );
HXDLIN( 726)			s1 = s1.toUpperCase();
HXDLIN( 726)			int value1;
HXDLIN( 726)			if (::flixel::input::gamepad::_FlxGamepadInputID::FlxGamepadInputID_Impl__obj::fromStringMap->exists(s1)) {
HXLINE( 726)				value1 = ::flixel::input::gamepad::_FlxGamepadInputID::FlxGamepadInputID_Impl__obj::fromStringMap->get_int(s1);
            			}
            			else {
HXLINE( 726)				value1 = -1;
            			}
HXLINE( 725)			buttons->set(::Control_obj::NOTE_LEFT_dyn(),::Array_obj< int >::__new(2)->init(0,value1)->init(1,13));
            		}
HXLINE( 729)		{
HXLINE( 730)			::String s2 = ( (::String)(::flixel::FlxG_obj::save->data->__Field(HX_("gpdownBind",68,1e,93,1d),::hx::paccDynamic)) );
HXDLIN( 730)			s2 = s2.toUpperCase();
HXDLIN( 730)			int value2;
HXDLIN( 730)			if (::flixel::input::gamepad::_FlxGamepadInputID::FlxGamepadInputID_Impl__obj::fromStringMap->exists(s2)) {
HXLINE( 730)				value2 = ::flixel::input::gamepad::_FlxGamepadInputID::FlxGamepadInputID_Impl__obj::fromStringMap->get_int(s2);
            			}
            			else {
HXLINE( 730)				value2 = -1;
            			}
HXLINE( 729)			buttons->set(::Control_obj::NOTE_DOWN_dyn(),::Array_obj< int >::__new(2)->init(0,value2)->init(1,12));
            		}
HXLINE( 733)		{
HXLINE( 734)			::String s3 = ( (::String)(::flixel::FlxG_obj::save->data->__Field(HX_("gprightBind",70,e4,ee,a5),::hx::paccDynamic)) );
HXDLIN( 734)			s3 = s3.toUpperCase();
HXDLIN( 734)			int value3;
HXDLIN( 734)			if (::flixel::input::gamepad::_FlxGamepadInputID::FlxGamepadInputID_Impl__obj::fromStringMap->exists(s3)) {
HXLINE( 734)				value3 = ::flixel::input::gamepad::_FlxGamepadInputID::FlxGamepadInputID_Impl__obj::fromStringMap->get_int(s3);
            			}
            			else {
HXLINE( 734)				value3 = -1;
            			}
HXLINE( 733)			buttons->set(::Control_obj::NOTE_RIGHT_dyn(),::Array_obj< int >::__new(2)->init(0,value3)->init(1,14));
            		}
HXLINE( 737)		buttons->set(::Control_obj::ACCEPT_dyn(),::Array_obj< int >::fromData( _hx_array_data_116e4296_429,1));
HXLINE( 738)		buttons->set(::Control_obj::BACK_dyn(),::Array_obj< int >::fromData( _hx_array_data_116e4296_430,1));
HXLINE( 739)		buttons->set(::Control_obj::PAUSE_dyn(),::Array_obj< int >::fromData( _hx_array_data_116e4296_431,1));
HXLINE( 741)		this->addGamepad(0,buttons);
HXLINE( 743)		{
HXLINE( 743)			::Array< int > keys = ::Array_obj< int >::fromData( _hx_array_data_116e4296_432,2);
HXDLIN( 743)			switch((int)(::Control_obj::UP_dyn()->_hx_getIndex())){
            				case (int)0: {
HXLINE( 743)					{
HXLINE( 743)						 ::flixel::input::actions::FlxActionDigital action = this->_up;
HXDLIN( 743)						int state = 1;
HXDLIN( 743)						int _g = 0;
HXDLIN( 743)						while((_g < keys->length)){
HXLINE( 743)							int key = keys->__get(_g);
HXDLIN( 743)							_g = (_g + 1);
HXDLIN( 743)							action->addKey(key,state);
            						}
            					}
HXDLIN( 743)					{
HXLINE( 743)						 ::flixel::input::actions::FlxActionDigital action1 = this->_upP;
HXDLIN( 743)						int state1 = 2;
HXDLIN( 743)						int _g1 = 0;
HXDLIN( 743)						while((_g1 < keys->length)){
HXLINE( 743)							int key = keys->__get(_g1);
HXDLIN( 743)							_g1 = (_g1 + 1);
HXDLIN( 743)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 743)					{
HXLINE( 743)						 ::flixel::input::actions::FlxActionDigital action2 = this->_upR;
HXDLIN( 743)						int state2 = -1;
HXDLIN( 743)						int _g2 = 0;
HXDLIN( 743)						while((_g2 < keys->length)){
HXLINE( 743)							int key = keys->__get(_g2);
HXDLIN( 743)							_g2 = (_g2 + 1);
HXDLIN( 743)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)1: {
HXLINE( 743)					{
HXLINE( 743)						 ::flixel::input::actions::FlxActionDigital action = this->_left;
HXDLIN( 743)						int state = 1;
HXDLIN( 743)						int _g = 0;
HXDLIN( 743)						while((_g < keys->length)){
HXLINE( 743)							int key = keys->__get(_g);
HXDLIN( 743)							_g = (_g + 1);
HXDLIN( 743)							action->addKey(key,state);
            						}
            					}
HXDLIN( 743)					{
HXLINE( 743)						 ::flixel::input::actions::FlxActionDigital action1 = this->_leftP;
HXDLIN( 743)						int state1 = 2;
HXDLIN( 743)						int _g1 = 0;
HXDLIN( 743)						while((_g1 < keys->length)){
HXLINE( 743)							int key = keys->__get(_g1);
HXDLIN( 743)							_g1 = (_g1 + 1);
HXDLIN( 743)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 743)					{
HXLINE( 743)						 ::flixel::input::actions::FlxActionDigital action2 = this->_leftR;
HXDLIN( 743)						int state2 = -1;
HXDLIN( 743)						int _g2 = 0;
HXDLIN( 743)						while((_g2 < keys->length)){
HXLINE( 743)							int key = keys->__get(_g2);
HXDLIN( 743)							_g2 = (_g2 + 1);
HXDLIN( 743)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)2: {
HXLINE( 743)					{
HXLINE( 743)						 ::flixel::input::actions::FlxActionDigital action = this->_right;
HXDLIN( 743)						int state = 1;
HXDLIN( 743)						int _g = 0;
HXDLIN( 743)						while((_g < keys->length)){
HXLINE( 743)							int key = keys->__get(_g);
HXDLIN( 743)							_g = (_g + 1);
HXDLIN( 743)							action->addKey(key,state);
            						}
            					}
HXDLIN( 743)					{
HXLINE( 743)						 ::flixel::input::actions::FlxActionDigital action1 = this->_rightP;
HXDLIN( 743)						int state1 = 2;
HXDLIN( 743)						int _g1 = 0;
HXDLIN( 743)						while((_g1 < keys->length)){
HXLINE( 743)							int key = keys->__get(_g1);
HXDLIN( 743)							_g1 = (_g1 + 1);
HXDLIN( 743)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 743)					{
HXLINE( 743)						 ::flixel::input::actions::FlxActionDigital action2 = this->_rightR;
HXDLIN( 743)						int state2 = -1;
HXDLIN( 743)						int _g2 = 0;
HXDLIN( 743)						while((_g2 < keys->length)){
HXLINE( 743)							int key = keys->__get(_g2);
HXDLIN( 743)							_g2 = (_g2 + 1);
HXDLIN( 743)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)3: {
HXLINE( 743)					{
HXLINE( 743)						 ::flixel::input::actions::FlxActionDigital action = this->_down;
HXDLIN( 743)						int state = 1;
HXDLIN( 743)						int _g = 0;
HXDLIN( 743)						while((_g < keys->length)){
HXLINE( 743)							int key = keys->__get(_g);
HXDLIN( 743)							_g = (_g + 1);
HXDLIN( 743)							action->addKey(key,state);
            						}
            					}
HXDLIN( 743)					{
HXLINE( 743)						 ::flixel::input::actions::FlxActionDigital action1 = this->_downP;
HXDLIN( 743)						int state1 = 2;
HXDLIN( 743)						int _g1 = 0;
HXDLIN( 743)						while((_g1 < keys->length)){
HXLINE( 743)							int key = keys->__get(_g1);
HXDLIN( 743)							_g1 = (_g1 + 1);
HXDLIN( 743)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 743)					{
HXLINE( 743)						 ::flixel::input::actions::FlxActionDigital action2 = this->_downR;
HXDLIN( 743)						int state2 = -1;
HXDLIN( 743)						int _g2 = 0;
HXDLIN( 743)						while((_g2 < keys->length)){
HXLINE( 743)							int key = keys->__get(_g2);
HXDLIN( 743)							_g2 = (_g2 + 1);
HXDLIN( 743)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)4: {
HXLINE( 743)					{
HXLINE( 743)						 ::flixel::input::actions::FlxActionDigital action = this->_noteup;
HXDLIN( 743)						int state = 1;
HXDLIN( 743)						int _g = 0;
HXDLIN( 743)						while((_g < keys->length)){
HXLINE( 743)							int key = keys->__get(_g);
HXDLIN( 743)							_g = (_g + 1);
HXDLIN( 743)							action->addKey(key,state);
            						}
            					}
HXDLIN( 743)					{
HXLINE( 743)						 ::flixel::input::actions::FlxActionDigital action1 = this->_noteupP;
HXDLIN( 743)						int state1 = 2;
HXDLIN( 743)						int _g1 = 0;
HXDLIN( 743)						while((_g1 < keys->length)){
HXLINE( 743)							int key = keys->__get(_g1);
HXDLIN( 743)							_g1 = (_g1 + 1);
HXDLIN( 743)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 743)					{
HXLINE( 743)						 ::flixel::input::actions::FlxActionDigital action2 = this->_noteupR;
HXDLIN( 743)						int state2 = -1;
HXDLIN( 743)						int _g2 = 0;
HXDLIN( 743)						while((_g2 < keys->length)){
HXLINE( 743)							int key = keys->__get(_g2);
HXDLIN( 743)							_g2 = (_g2 + 1);
HXDLIN( 743)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)5: {
HXLINE( 743)					{
HXLINE( 743)						 ::flixel::input::actions::FlxActionDigital action = this->_noteleft;
HXDLIN( 743)						int state = 1;
HXDLIN( 743)						int _g = 0;
HXDLIN( 743)						while((_g < keys->length)){
HXLINE( 743)							int key = keys->__get(_g);
HXDLIN( 743)							_g = (_g + 1);
HXDLIN( 743)							action->addKey(key,state);
            						}
            					}
HXDLIN( 743)					{
HXLINE( 743)						 ::flixel::input::actions::FlxActionDigital action1 = this->_noteleftP;
HXDLIN( 743)						int state1 = 2;
HXDLIN( 743)						int _g1 = 0;
HXDLIN( 743)						while((_g1 < keys->length)){
HXLINE( 743)							int key = keys->__get(_g1);
HXDLIN( 743)							_g1 = (_g1 + 1);
HXDLIN( 743)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 743)					{
HXLINE( 743)						 ::flixel::input::actions::FlxActionDigital action2 = this->_noteleftR;
HXDLIN( 743)						int state2 = -1;
HXDLIN( 743)						int _g2 = 0;
HXDLIN( 743)						while((_g2 < keys->length)){
HXLINE( 743)							int key = keys->__get(_g2);
HXDLIN( 743)							_g2 = (_g2 + 1);
HXDLIN( 743)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)6: {
HXLINE( 743)					{
HXLINE( 743)						 ::flixel::input::actions::FlxActionDigital action = this->_noteright;
HXDLIN( 743)						int state = 1;
HXDLIN( 743)						int _g = 0;
HXDLIN( 743)						while((_g < keys->length)){
HXLINE( 743)							int key = keys->__get(_g);
HXDLIN( 743)							_g = (_g + 1);
HXDLIN( 743)							action->addKey(key,state);
            						}
            					}
HXDLIN( 743)					{
HXLINE( 743)						 ::flixel::input::actions::FlxActionDigital action1 = this->_noterightP;
HXDLIN( 743)						int state1 = 2;
HXDLIN( 743)						int _g1 = 0;
HXDLIN( 743)						while((_g1 < keys->length)){
HXLINE( 743)							int key = keys->__get(_g1);
HXDLIN( 743)							_g1 = (_g1 + 1);
HXDLIN( 743)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 743)					{
HXLINE( 743)						 ::flixel::input::actions::FlxActionDigital action2 = this->_noterightR;
HXDLIN( 743)						int state2 = -1;
HXDLIN( 743)						int _g2 = 0;
HXDLIN( 743)						while((_g2 < keys->length)){
HXLINE( 743)							int key = keys->__get(_g2);
HXDLIN( 743)							_g2 = (_g2 + 1);
HXDLIN( 743)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)7: {
HXLINE( 743)					{
HXLINE( 743)						 ::flixel::input::actions::FlxActionDigital action = this->_notedown;
HXDLIN( 743)						int state = 1;
HXDLIN( 743)						int _g = 0;
HXDLIN( 743)						while((_g < keys->length)){
HXLINE( 743)							int key = keys->__get(_g);
HXDLIN( 743)							_g = (_g + 1);
HXDLIN( 743)							action->addKey(key,state);
            						}
            					}
HXDLIN( 743)					{
HXLINE( 743)						 ::flixel::input::actions::FlxActionDigital action1 = this->_notedownP;
HXDLIN( 743)						int state1 = 2;
HXDLIN( 743)						int _g1 = 0;
HXDLIN( 743)						while((_g1 < keys->length)){
HXLINE( 743)							int key = keys->__get(_g1);
HXDLIN( 743)							_g1 = (_g1 + 1);
HXDLIN( 743)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 743)					{
HXLINE( 743)						 ::flixel::input::actions::FlxActionDigital action2 = this->_notedownR;
HXDLIN( 743)						int state2 = -1;
HXDLIN( 743)						int _g2 = 0;
HXDLIN( 743)						while((_g2 < keys->length)){
HXLINE( 743)							int key = keys->__get(_g2);
HXDLIN( 743)							_g2 = (_g2 + 1);
HXDLIN( 743)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)8: {
HXLINE( 743)					 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 743)					int state = 2;
HXDLIN( 743)					int _g = 0;
HXDLIN( 743)					while((_g < keys->length)){
HXLINE( 743)						int key = keys->__get(_g);
HXDLIN( 743)						_g = (_g + 1);
HXDLIN( 743)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)9: {
HXLINE( 743)					 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 743)					int state = 2;
HXDLIN( 743)					int _g = 0;
HXDLIN( 743)					while((_g < keys->length)){
HXLINE( 743)						int key = keys->__get(_g);
HXDLIN( 743)						_g = (_g + 1);
HXDLIN( 743)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)10: {
HXLINE( 743)					 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 743)					int state = 2;
HXDLIN( 743)					int _g = 0;
HXDLIN( 743)					while((_g < keys->length)){
HXLINE( 743)						int key = keys->__get(_g);
HXDLIN( 743)						_g = (_g + 1);
HXDLIN( 743)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)11: {
HXLINE( 743)					 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 743)					int state = 2;
HXDLIN( 743)					int _g = 0;
HXDLIN( 743)					while((_g < keys->length)){
HXLINE( 743)						int key = keys->__get(_g);
HXDLIN( 743)						_g = (_g + 1);
HXDLIN( 743)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)12: {
HXLINE( 743)					 ::flixel::input::actions::FlxActionDigital action = this->_cheat;
HXDLIN( 743)					int state = 2;
HXDLIN( 743)					int _g = 0;
HXDLIN( 743)					while((_g < keys->length)){
HXLINE( 743)						int key = keys->__get(_g);
HXDLIN( 743)						_g = (_g + 1);
HXDLIN( 743)						action->addKey(key,state);
            					}
            				}
            				break;
            			}
            		}
HXLINE( 744)		{
HXLINE( 744)			::Array< int > keys1 = ::Array_obj< int >::fromData( _hx_array_data_116e4296_433,2);
HXDLIN( 744)			switch((int)(::Control_obj::DOWN_dyn()->_hx_getIndex())){
            				case (int)0: {
HXLINE( 744)					{
HXLINE( 744)						 ::flixel::input::actions::FlxActionDigital action = this->_up;
HXDLIN( 744)						int state = 1;
HXDLIN( 744)						int _g = 0;
HXDLIN( 744)						while((_g < keys1->length)){
HXLINE( 744)							int key = keys1->__get(_g);
HXDLIN( 744)							_g = (_g + 1);
HXDLIN( 744)							action->addKey(key,state);
            						}
            					}
HXDLIN( 744)					{
HXLINE( 744)						 ::flixel::input::actions::FlxActionDigital action1 = this->_upP;
HXDLIN( 744)						int state1 = 2;
HXDLIN( 744)						int _g1 = 0;
HXDLIN( 744)						while((_g1 < keys1->length)){
HXLINE( 744)							int key = keys1->__get(_g1);
HXDLIN( 744)							_g1 = (_g1 + 1);
HXDLIN( 744)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 744)					{
HXLINE( 744)						 ::flixel::input::actions::FlxActionDigital action2 = this->_upR;
HXDLIN( 744)						int state2 = -1;
HXDLIN( 744)						int _g2 = 0;
HXDLIN( 744)						while((_g2 < keys1->length)){
HXLINE( 744)							int key = keys1->__get(_g2);
HXDLIN( 744)							_g2 = (_g2 + 1);
HXDLIN( 744)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)1: {
HXLINE( 744)					{
HXLINE( 744)						 ::flixel::input::actions::FlxActionDigital action = this->_left;
HXDLIN( 744)						int state = 1;
HXDLIN( 744)						int _g = 0;
HXDLIN( 744)						while((_g < keys1->length)){
HXLINE( 744)							int key = keys1->__get(_g);
HXDLIN( 744)							_g = (_g + 1);
HXDLIN( 744)							action->addKey(key,state);
            						}
            					}
HXDLIN( 744)					{
HXLINE( 744)						 ::flixel::input::actions::FlxActionDigital action1 = this->_leftP;
HXDLIN( 744)						int state1 = 2;
HXDLIN( 744)						int _g1 = 0;
HXDLIN( 744)						while((_g1 < keys1->length)){
HXLINE( 744)							int key = keys1->__get(_g1);
HXDLIN( 744)							_g1 = (_g1 + 1);
HXDLIN( 744)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 744)					{
HXLINE( 744)						 ::flixel::input::actions::FlxActionDigital action2 = this->_leftR;
HXDLIN( 744)						int state2 = -1;
HXDLIN( 744)						int _g2 = 0;
HXDLIN( 744)						while((_g2 < keys1->length)){
HXLINE( 744)							int key = keys1->__get(_g2);
HXDLIN( 744)							_g2 = (_g2 + 1);
HXDLIN( 744)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)2: {
HXLINE( 744)					{
HXLINE( 744)						 ::flixel::input::actions::FlxActionDigital action = this->_right;
HXDLIN( 744)						int state = 1;
HXDLIN( 744)						int _g = 0;
HXDLIN( 744)						while((_g < keys1->length)){
HXLINE( 744)							int key = keys1->__get(_g);
HXDLIN( 744)							_g = (_g + 1);
HXDLIN( 744)							action->addKey(key,state);
            						}
            					}
HXDLIN( 744)					{
HXLINE( 744)						 ::flixel::input::actions::FlxActionDigital action1 = this->_rightP;
HXDLIN( 744)						int state1 = 2;
HXDLIN( 744)						int _g1 = 0;
HXDLIN( 744)						while((_g1 < keys1->length)){
HXLINE( 744)							int key = keys1->__get(_g1);
HXDLIN( 744)							_g1 = (_g1 + 1);
HXDLIN( 744)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 744)					{
HXLINE( 744)						 ::flixel::input::actions::FlxActionDigital action2 = this->_rightR;
HXDLIN( 744)						int state2 = -1;
HXDLIN( 744)						int _g2 = 0;
HXDLIN( 744)						while((_g2 < keys1->length)){
HXLINE( 744)							int key = keys1->__get(_g2);
HXDLIN( 744)							_g2 = (_g2 + 1);
HXDLIN( 744)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)3: {
HXLINE( 744)					{
HXLINE( 744)						 ::flixel::input::actions::FlxActionDigital action = this->_down;
HXDLIN( 744)						int state = 1;
HXDLIN( 744)						int _g = 0;
HXDLIN( 744)						while((_g < keys1->length)){
HXLINE( 744)							int key = keys1->__get(_g);
HXDLIN( 744)							_g = (_g + 1);
HXDLIN( 744)							action->addKey(key,state);
            						}
            					}
HXDLIN( 744)					{
HXLINE( 744)						 ::flixel::input::actions::FlxActionDigital action1 = this->_downP;
HXDLIN( 744)						int state1 = 2;
HXDLIN( 744)						int _g1 = 0;
HXDLIN( 744)						while((_g1 < keys1->length)){
HXLINE( 744)							int key = keys1->__get(_g1);
HXDLIN( 744)							_g1 = (_g1 + 1);
HXDLIN( 744)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 744)					{
HXLINE( 744)						 ::flixel::input::actions::FlxActionDigital action2 = this->_downR;
HXDLIN( 744)						int state2 = -1;
HXDLIN( 744)						int _g2 = 0;
HXDLIN( 744)						while((_g2 < keys1->length)){
HXLINE( 744)							int key = keys1->__get(_g2);
HXDLIN( 744)							_g2 = (_g2 + 1);
HXDLIN( 744)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)4: {
HXLINE( 744)					{
HXLINE( 744)						 ::flixel::input::actions::FlxActionDigital action = this->_noteup;
HXDLIN( 744)						int state = 1;
HXDLIN( 744)						int _g = 0;
HXDLIN( 744)						while((_g < keys1->length)){
HXLINE( 744)							int key = keys1->__get(_g);
HXDLIN( 744)							_g = (_g + 1);
HXDLIN( 744)							action->addKey(key,state);
            						}
            					}
HXDLIN( 744)					{
HXLINE( 744)						 ::flixel::input::actions::FlxActionDigital action1 = this->_noteupP;
HXDLIN( 744)						int state1 = 2;
HXDLIN( 744)						int _g1 = 0;
HXDLIN( 744)						while((_g1 < keys1->length)){
HXLINE( 744)							int key = keys1->__get(_g1);
HXDLIN( 744)							_g1 = (_g1 + 1);
HXDLIN( 744)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 744)					{
HXLINE( 744)						 ::flixel::input::actions::FlxActionDigital action2 = this->_noteupR;
HXDLIN( 744)						int state2 = -1;
HXDLIN( 744)						int _g2 = 0;
HXDLIN( 744)						while((_g2 < keys1->length)){
HXLINE( 744)							int key = keys1->__get(_g2);
HXDLIN( 744)							_g2 = (_g2 + 1);
HXDLIN( 744)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)5: {
HXLINE( 744)					{
HXLINE( 744)						 ::flixel::input::actions::FlxActionDigital action = this->_noteleft;
HXDLIN( 744)						int state = 1;
HXDLIN( 744)						int _g = 0;
HXDLIN( 744)						while((_g < keys1->length)){
HXLINE( 744)							int key = keys1->__get(_g);
HXDLIN( 744)							_g = (_g + 1);
HXDLIN( 744)							action->addKey(key,state);
            						}
            					}
HXDLIN( 744)					{
HXLINE( 744)						 ::flixel::input::actions::FlxActionDigital action1 = this->_noteleftP;
HXDLIN( 744)						int state1 = 2;
HXDLIN( 744)						int _g1 = 0;
HXDLIN( 744)						while((_g1 < keys1->length)){
HXLINE( 744)							int key = keys1->__get(_g1);
HXDLIN( 744)							_g1 = (_g1 + 1);
HXDLIN( 744)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 744)					{
HXLINE( 744)						 ::flixel::input::actions::FlxActionDigital action2 = this->_noteleftR;
HXDLIN( 744)						int state2 = -1;
HXDLIN( 744)						int _g2 = 0;
HXDLIN( 744)						while((_g2 < keys1->length)){
HXLINE( 744)							int key = keys1->__get(_g2);
HXDLIN( 744)							_g2 = (_g2 + 1);
HXDLIN( 744)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)6: {
HXLINE( 744)					{
HXLINE( 744)						 ::flixel::input::actions::FlxActionDigital action = this->_noteright;
HXDLIN( 744)						int state = 1;
HXDLIN( 744)						int _g = 0;
HXDLIN( 744)						while((_g < keys1->length)){
HXLINE( 744)							int key = keys1->__get(_g);
HXDLIN( 744)							_g = (_g + 1);
HXDLIN( 744)							action->addKey(key,state);
            						}
            					}
HXDLIN( 744)					{
HXLINE( 744)						 ::flixel::input::actions::FlxActionDigital action1 = this->_noterightP;
HXDLIN( 744)						int state1 = 2;
HXDLIN( 744)						int _g1 = 0;
HXDLIN( 744)						while((_g1 < keys1->length)){
HXLINE( 744)							int key = keys1->__get(_g1);
HXDLIN( 744)							_g1 = (_g1 + 1);
HXDLIN( 744)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 744)					{
HXLINE( 744)						 ::flixel::input::actions::FlxActionDigital action2 = this->_noterightR;
HXDLIN( 744)						int state2 = -1;
HXDLIN( 744)						int _g2 = 0;
HXDLIN( 744)						while((_g2 < keys1->length)){
HXLINE( 744)							int key = keys1->__get(_g2);
HXDLIN( 744)							_g2 = (_g2 + 1);
HXDLIN( 744)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)7: {
HXLINE( 744)					{
HXLINE( 744)						 ::flixel::input::actions::FlxActionDigital action = this->_notedown;
HXDLIN( 744)						int state = 1;
HXDLIN( 744)						int _g = 0;
HXDLIN( 744)						while((_g < keys1->length)){
HXLINE( 744)							int key = keys1->__get(_g);
HXDLIN( 744)							_g = (_g + 1);
HXDLIN( 744)							action->addKey(key,state);
            						}
            					}
HXDLIN( 744)					{
HXLINE( 744)						 ::flixel::input::actions::FlxActionDigital action1 = this->_notedownP;
HXDLIN( 744)						int state1 = 2;
HXDLIN( 744)						int _g1 = 0;
HXDLIN( 744)						while((_g1 < keys1->length)){
HXLINE( 744)							int key = keys1->__get(_g1);
HXDLIN( 744)							_g1 = (_g1 + 1);
HXDLIN( 744)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 744)					{
HXLINE( 744)						 ::flixel::input::actions::FlxActionDigital action2 = this->_notedownR;
HXDLIN( 744)						int state2 = -1;
HXDLIN( 744)						int _g2 = 0;
HXDLIN( 744)						while((_g2 < keys1->length)){
HXLINE( 744)							int key = keys1->__get(_g2);
HXDLIN( 744)							_g2 = (_g2 + 1);
HXDLIN( 744)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)8: {
HXLINE( 744)					 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 744)					int state = 2;
HXDLIN( 744)					int _g = 0;
HXDLIN( 744)					while((_g < keys1->length)){
HXLINE( 744)						int key = keys1->__get(_g);
HXDLIN( 744)						_g = (_g + 1);
HXDLIN( 744)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)9: {
HXLINE( 744)					 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 744)					int state = 2;
HXDLIN( 744)					int _g = 0;
HXDLIN( 744)					while((_g < keys1->length)){
HXLINE( 744)						int key = keys1->__get(_g);
HXDLIN( 744)						_g = (_g + 1);
HXDLIN( 744)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)10: {
HXLINE( 744)					 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 744)					int state = 2;
HXDLIN( 744)					int _g = 0;
HXDLIN( 744)					while((_g < keys1->length)){
HXLINE( 744)						int key = keys1->__get(_g);
HXDLIN( 744)						_g = (_g + 1);
HXDLIN( 744)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)11: {
HXLINE( 744)					 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 744)					int state = 2;
HXDLIN( 744)					int _g = 0;
HXDLIN( 744)					while((_g < keys1->length)){
HXLINE( 744)						int key = keys1->__get(_g);
HXDLIN( 744)						_g = (_g + 1);
HXDLIN( 744)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)12: {
HXLINE( 744)					 ::flixel::input::actions::FlxActionDigital action = this->_cheat;
HXDLIN( 744)					int state = 2;
HXDLIN( 744)					int _g = 0;
HXDLIN( 744)					while((_g < keys1->length)){
HXLINE( 744)						int key = keys1->__get(_g);
HXDLIN( 744)						_g = (_g + 1);
HXDLIN( 744)						action->addKey(key,state);
            					}
            				}
            				break;
            			}
            		}
HXLINE( 745)		{
HXLINE( 745)			::Array< int > keys2 = ::Array_obj< int >::fromData( _hx_array_data_116e4296_434,2);
HXDLIN( 745)			switch((int)(::Control_obj::LEFT_dyn()->_hx_getIndex())){
            				case (int)0: {
HXLINE( 745)					{
HXLINE( 745)						 ::flixel::input::actions::FlxActionDigital action = this->_up;
HXDLIN( 745)						int state = 1;
HXDLIN( 745)						int _g = 0;
HXDLIN( 745)						while((_g < keys2->length)){
HXLINE( 745)							int key = keys2->__get(_g);
HXDLIN( 745)							_g = (_g + 1);
HXDLIN( 745)							action->addKey(key,state);
            						}
            					}
HXDLIN( 745)					{
HXLINE( 745)						 ::flixel::input::actions::FlxActionDigital action1 = this->_upP;
HXDLIN( 745)						int state1 = 2;
HXDLIN( 745)						int _g1 = 0;
HXDLIN( 745)						while((_g1 < keys2->length)){
HXLINE( 745)							int key = keys2->__get(_g1);
HXDLIN( 745)							_g1 = (_g1 + 1);
HXDLIN( 745)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 745)					{
HXLINE( 745)						 ::flixel::input::actions::FlxActionDigital action2 = this->_upR;
HXDLIN( 745)						int state2 = -1;
HXDLIN( 745)						int _g2 = 0;
HXDLIN( 745)						while((_g2 < keys2->length)){
HXLINE( 745)							int key = keys2->__get(_g2);
HXDLIN( 745)							_g2 = (_g2 + 1);
HXDLIN( 745)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)1: {
HXLINE( 745)					{
HXLINE( 745)						 ::flixel::input::actions::FlxActionDigital action = this->_left;
HXDLIN( 745)						int state = 1;
HXDLIN( 745)						int _g = 0;
HXDLIN( 745)						while((_g < keys2->length)){
HXLINE( 745)							int key = keys2->__get(_g);
HXDLIN( 745)							_g = (_g + 1);
HXDLIN( 745)							action->addKey(key,state);
            						}
            					}
HXDLIN( 745)					{
HXLINE( 745)						 ::flixel::input::actions::FlxActionDigital action1 = this->_leftP;
HXDLIN( 745)						int state1 = 2;
HXDLIN( 745)						int _g1 = 0;
HXDLIN( 745)						while((_g1 < keys2->length)){
HXLINE( 745)							int key = keys2->__get(_g1);
HXDLIN( 745)							_g1 = (_g1 + 1);
HXDLIN( 745)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 745)					{
HXLINE( 745)						 ::flixel::input::actions::FlxActionDigital action2 = this->_leftR;
HXDLIN( 745)						int state2 = -1;
HXDLIN( 745)						int _g2 = 0;
HXDLIN( 745)						while((_g2 < keys2->length)){
HXLINE( 745)							int key = keys2->__get(_g2);
HXDLIN( 745)							_g2 = (_g2 + 1);
HXDLIN( 745)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)2: {
HXLINE( 745)					{
HXLINE( 745)						 ::flixel::input::actions::FlxActionDigital action = this->_right;
HXDLIN( 745)						int state = 1;
HXDLIN( 745)						int _g = 0;
HXDLIN( 745)						while((_g < keys2->length)){
HXLINE( 745)							int key = keys2->__get(_g);
HXDLIN( 745)							_g = (_g + 1);
HXDLIN( 745)							action->addKey(key,state);
            						}
            					}
HXDLIN( 745)					{
HXLINE( 745)						 ::flixel::input::actions::FlxActionDigital action1 = this->_rightP;
HXDLIN( 745)						int state1 = 2;
HXDLIN( 745)						int _g1 = 0;
HXDLIN( 745)						while((_g1 < keys2->length)){
HXLINE( 745)							int key = keys2->__get(_g1);
HXDLIN( 745)							_g1 = (_g1 + 1);
HXDLIN( 745)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 745)					{
HXLINE( 745)						 ::flixel::input::actions::FlxActionDigital action2 = this->_rightR;
HXDLIN( 745)						int state2 = -1;
HXDLIN( 745)						int _g2 = 0;
HXDLIN( 745)						while((_g2 < keys2->length)){
HXLINE( 745)							int key = keys2->__get(_g2);
HXDLIN( 745)							_g2 = (_g2 + 1);
HXDLIN( 745)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)3: {
HXLINE( 745)					{
HXLINE( 745)						 ::flixel::input::actions::FlxActionDigital action = this->_down;
HXDLIN( 745)						int state = 1;
HXDLIN( 745)						int _g = 0;
HXDLIN( 745)						while((_g < keys2->length)){
HXLINE( 745)							int key = keys2->__get(_g);
HXDLIN( 745)							_g = (_g + 1);
HXDLIN( 745)							action->addKey(key,state);
            						}
            					}
HXDLIN( 745)					{
HXLINE( 745)						 ::flixel::input::actions::FlxActionDigital action1 = this->_downP;
HXDLIN( 745)						int state1 = 2;
HXDLIN( 745)						int _g1 = 0;
HXDLIN( 745)						while((_g1 < keys2->length)){
HXLINE( 745)							int key = keys2->__get(_g1);
HXDLIN( 745)							_g1 = (_g1 + 1);
HXDLIN( 745)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 745)					{
HXLINE( 745)						 ::flixel::input::actions::FlxActionDigital action2 = this->_downR;
HXDLIN( 745)						int state2 = -1;
HXDLIN( 745)						int _g2 = 0;
HXDLIN( 745)						while((_g2 < keys2->length)){
HXLINE( 745)							int key = keys2->__get(_g2);
HXDLIN( 745)							_g2 = (_g2 + 1);
HXDLIN( 745)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)4: {
HXLINE( 745)					{
HXLINE( 745)						 ::flixel::input::actions::FlxActionDigital action = this->_noteup;
HXDLIN( 745)						int state = 1;
HXDLIN( 745)						int _g = 0;
HXDLIN( 745)						while((_g < keys2->length)){
HXLINE( 745)							int key = keys2->__get(_g);
HXDLIN( 745)							_g = (_g + 1);
HXDLIN( 745)							action->addKey(key,state);
            						}
            					}
HXDLIN( 745)					{
HXLINE( 745)						 ::flixel::input::actions::FlxActionDigital action1 = this->_noteupP;
HXDLIN( 745)						int state1 = 2;
HXDLIN( 745)						int _g1 = 0;
HXDLIN( 745)						while((_g1 < keys2->length)){
HXLINE( 745)							int key = keys2->__get(_g1);
HXDLIN( 745)							_g1 = (_g1 + 1);
HXDLIN( 745)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 745)					{
HXLINE( 745)						 ::flixel::input::actions::FlxActionDigital action2 = this->_noteupR;
HXDLIN( 745)						int state2 = -1;
HXDLIN( 745)						int _g2 = 0;
HXDLIN( 745)						while((_g2 < keys2->length)){
HXLINE( 745)							int key = keys2->__get(_g2);
HXDLIN( 745)							_g2 = (_g2 + 1);
HXDLIN( 745)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)5: {
HXLINE( 745)					{
HXLINE( 745)						 ::flixel::input::actions::FlxActionDigital action = this->_noteleft;
HXDLIN( 745)						int state = 1;
HXDLIN( 745)						int _g = 0;
HXDLIN( 745)						while((_g < keys2->length)){
HXLINE( 745)							int key = keys2->__get(_g);
HXDLIN( 745)							_g = (_g + 1);
HXDLIN( 745)							action->addKey(key,state);
            						}
            					}
HXDLIN( 745)					{
HXLINE( 745)						 ::flixel::input::actions::FlxActionDigital action1 = this->_noteleftP;
HXDLIN( 745)						int state1 = 2;
HXDLIN( 745)						int _g1 = 0;
HXDLIN( 745)						while((_g1 < keys2->length)){
HXLINE( 745)							int key = keys2->__get(_g1);
HXDLIN( 745)							_g1 = (_g1 + 1);
HXDLIN( 745)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 745)					{
HXLINE( 745)						 ::flixel::input::actions::FlxActionDigital action2 = this->_noteleftR;
HXDLIN( 745)						int state2 = -1;
HXDLIN( 745)						int _g2 = 0;
HXDLIN( 745)						while((_g2 < keys2->length)){
HXLINE( 745)							int key = keys2->__get(_g2);
HXDLIN( 745)							_g2 = (_g2 + 1);
HXDLIN( 745)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)6: {
HXLINE( 745)					{
HXLINE( 745)						 ::flixel::input::actions::FlxActionDigital action = this->_noteright;
HXDLIN( 745)						int state = 1;
HXDLIN( 745)						int _g = 0;
HXDLIN( 745)						while((_g < keys2->length)){
HXLINE( 745)							int key = keys2->__get(_g);
HXDLIN( 745)							_g = (_g + 1);
HXDLIN( 745)							action->addKey(key,state);
            						}
            					}
HXDLIN( 745)					{
HXLINE( 745)						 ::flixel::input::actions::FlxActionDigital action1 = this->_noterightP;
HXDLIN( 745)						int state1 = 2;
HXDLIN( 745)						int _g1 = 0;
HXDLIN( 745)						while((_g1 < keys2->length)){
HXLINE( 745)							int key = keys2->__get(_g1);
HXDLIN( 745)							_g1 = (_g1 + 1);
HXDLIN( 745)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 745)					{
HXLINE( 745)						 ::flixel::input::actions::FlxActionDigital action2 = this->_noterightR;
HXDLIN( 745)						int state2 = -1;
HXDLIN( 745)						int _g2 = 0;
HXDLIN( 745)						while((_g2 < keys2->length)){
HXLINE( 745)							int key = keys2->__get(_g2);
HXDLIN( 745)							_g2 = (_g2 + 1);
HXDLIN( 745)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)7: {
HXLINE( 745)					{
HXLINE( 745)						 ::flixel::input::actions::FlxActionDigital action = this->_notedown;
HXDLIN( 745)						int state = 1;
HXDLIN( 745)						int _g = 0;
HXDLIN( 745)						while((_g < keys2->length)){
HXLINE( 745)							int key = keys2->__get(_g);
HXDLIN( 745)							_g = (_g + 1);
HXDLIN( 745)							action->addKey(key,state);
            						}
            					}
HXDLIN( 745)					{
HXLINE( 745)						 ::flixel::input::actions::FlxActionDigital action1 = this->_notedownP;
HXDLIN( 745)						int state1 = 2;
HXDLIN( 745)						int _g1 = 0;
HXDLIN( 745)						while((_g1 < keys2->length)){
HXLINE( 745)							int key = keys2->__get(_g1);
HXDLIN( 745)							_g1 = (_g1 + 1);
HXDLIN( 745)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 745)					{
HXLINE( 745)						 ::flixel::input::actions::FlxActionDigital action2 = this->_notedownR;
HXDLIN( 745)						int state2 = -1;
HXDLIN( 745)						int _g2 = 0;
HXDLIN( 745)						while((_g2 < keys2->length)){
HXLINE( 745)							int key = keys2->__get(_g2);
HXDLIN( 745)							_g2 = (_g2 + 1);
HXDLIN( 745)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)8: {
HXLINE( 745)					 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 745)					int state = 2;
HXDLIN( 745)					int _g = 0;
HXDLIN( 745)					while((_g < keys2->length)){
HXLINE( 745)						int key = keys2->__get(_g);
HXDLIN( 745)						_g = (_g + 1);
HXDLIN( 745)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)9: {
HXLINE( 745)					 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 745)					int state = 2;
HXDLIN( 745)					int _g = 0;
HXDLIN( 745)					while((_g < keys2->length)){
HXLINE( 745)						int key = keys2->__get(_g);
HXDLIN( 745)						_g = (_g + 1);
HXDLIN( 745)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)10: {
HXLINE( 745)					 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 745)					int state = 2;
HXDLIN( 745)					int _g = 0;
HXDLIN( 745)					while((_g < keys2->length)){
HXLINE( 745)						int key = keys2->__get(_g);
HXDLIN( 745)						_g = (_g + 1);
HXDLIN( 745)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)11: {
HXLINE( 745)					 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 745)					int state = 2;
HXDLIN( 745)					int _g = 0;
HXDLIN( 745)					while((_g < keys2->length)){
HXLINE( 745)						int key = keys2->__get(_g);
HXDLIN( 745)						_g = (_g + 1);
HXDLIN( 745)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)12: {
HXLINE( 745)					 ::flixel::input::actions::FlxActionDigital action = this->_cheat;
HXDLIN( 745)					int state = 2;
HXDLIN( 745)					int _g = 0;
HXDLIN( 745)					while((_g < keys2->length)){
HXLINE( 745)						int key = keys2->__get(_g);
HXDLIN( 745)						_g = (_g + 1);
HXDLIN( 745)						action->addKey(key,state);
            					}
            				}
            				break;
            			}
            		}
HXLINE( 746)		{
HXLINE( 746)			::Array< int > keys3 = ::Array_obj< int >::fromData( _hx_array_data_116e4296_435,2);
HXDLIN( 746)			switch((int)(::Control_obj::RIGHT_dyn()->_hx_getIndex())){
            				case (int)0: {
HXLINE( 746)					{
HXLINE( 746)						 ::flixel::input::actions::FlxActionDigital action = this->_up;
HXDLIN( 746)						int state = 1;
HXDLIN( 746)						int _g = 0;
HXDLIN( 746)						while((_g < keys3->length)){
HXLINE( 746)							int key = keys3->__get(_g);
HXDLIN( 746)							_g = (_g + 1);
HXDLIN( 746)							action->addKey(key,state);
            						}
            					}
HXDLIN( 746)					{
HXLINE( 746)						 ::flixel::input::actions::FlxActionDigital action1 = this->_upP;
HXDLIN( 746)						int state1 = 2;
HXDLIN( 746)						int _g1 = 0;
HXDLIN( 746)						while((_g1 < keys3->length)){
HXLINE( 746)							int key = keys3->__get(_g1);
HXDLIN( 746)							_g1 = (_g1 + 1);
HXDLIN( 746)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 746)					{
HXLINE( 746)						 ::flixel::input::actions::FlxActionDigital action2 = this->_upR;
HXDLIN( 746)						int state2 = -1;
HXDLIN( 746)						int _g2 = 0;
HXDLIN( 746)						while((_g2 < keys3->length)){
HXLINE( 746)							int key = keys3->__get(_g2);
HXDLIN( 746)							_g2 = (_g2 + 1);
HXDLIN( 746)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)1: {
HXLINE( 746)					{
HXLINE( 746)						 ::flixel::input::actions::FlxActionDigital action = this->_left;
HXDLIN( 746)						int state = 1;
HXDLIN( 746)						int _g = 0;
HXDLIN( 746)						while((_g < keys3->length)){
HXLINE( 746)							int key = keys3->__get(_g);
HXDLIN( 746)							_g = (_g + 1);
HXDLIN( 746)							action->addKey(key,state);
            						}
            					}
HXDLIN( 746)					{
HXLINE( 746)						 ::flixel::input::actions::FlxActionDigital action1 = this->_leftP;
HXDLIN( 746)						int state1 = 2;
HXDLIN( 746)						int _g1 = 0;
HXDLIN( 746)						while((_g1 < keys3->length)){
HXLINE( 746)							int key = keys3->__get(_g1);
HXDLIN( 746)							_g1 = (_g1 + 1);
HXDLIN( 746)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 746)					{
HXLINE( 746)						 ::flixel::input::actions::FlxActionDigital action2 = this->_leftR;
HXDLIN( 746)						int state2 = -1;
HXDLIN( 746)						int _g2 = 0;
HXDLIN( 746)						while((_g2 < keys3->length)){
HXLINE( 746)							int key = keys3->__get(_g2);
HXDLIN( 746)							_g2 = (_g2 + 1);
HXDLIN( 746)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)2: {
HXLINE( 746)					{
HXLINE( 746)						 ::flixel::input::actions::FlxActionDigital action = this->_right;
HXDLIN( 746)						int state = 1;
HXDLIN( 746)						int _g = 0;
HXDLIN( 746)						while((_g < keys3->length)){
HXLINE( 746)							int key = keys3->__get(_g);
HXDLIN( 746)							_g = (_g + 1);
HXDLIN( 746)							action->addKey(key,state);
            						}
            					}
HXDLIN( 746)					{
HXLINE( 746)						 ::flixel::input::actions::FlxActionDigital action1 = this->_rightP;
HXDLIN( 746)						int state1 = 2;
HXDLIN( 746)						int _g1 = 0;
HXDLIN( 746)						while((_g1 < keys3->length)){
HXLINE( 746)							int key = keys3->__get(_g1);
HXDLIN( 746)							_g1 = (_g1 + 1);
HXDLIN( 746)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 746)					{
HXLINE( 746)						 ::flixel::input::actions::FlxActionDigital action2 = this->_rightR;
HXDLIN( 746)						int state2 = -1;
HXDLIN( 746)						int _g2 = 0;
HXDLIN( 746)						while((_g2 < keys3->length)){
HXLINE( 746)							int key = keys3->__get(_g2);
HXDLIN( 746)							_g2 = (_g2 + 1);
HXDLIN( 746)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)3: {
HXLINE( 746)					{
HXLINE( 746)						 ::flixel::input::actions::FlxActionDigital action = this->_down;
HXDLIN( 746)						int state = 1;
HXDLIN( 746)						int _g = 0;
HXDLIN( 746)						while((_g < keys3->length)){
HXLINE( 746)							int key = keys3->__get(_g);
HXDLIN( 746)							_g = (_g + 1);
HXDLIN( 746)							action->addKey(key,state);
            						}
            					}
HXDLIN( 746)					{
HXLINE( 746)						 ::flixel::input::actions::FlxActionDigital action1 = this->_downP;
HXDLIN( 746)						int state1 = 2;
HXDLIN( 746)						int _g1 = 0;
HXDLIN( 746)						while((_g1 < keys3->length)){
HXLINE( 746)							int key = keys3->__get(_g1);
HXDLIN( 746)							_g1 = (_g1 + 1);
HXDLIN( 746)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 746)					{
HXLINE( 746)						 ::flixel::input::actions::FlxActionDigital action2 = this->_downR;
HXDLIN( 746)						int state2 = -1;
HXDLIN( 746)						int _g2 = 0;
HXDLIN( 746)						while((_g2 < keys3->length)){
HXLINE( 746)							int key = keys3->__get(_g2);
HXDLIN( 746)							_g2 = (_g2 + 1);
HXDLIN( 746)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)4: {
HXLINE( 746)					{
HXLINE( 746)						 ::flixel::input::actions::FlxActionDigital action = this->_noteup;
HXDLIN( 746)						int state = 1;
HXDLIN( 746)						int _g = 0;
HXDLIN( 746)						while((_g < keys3->length)){
HXLINE( 746)							int key = keys3->__get(_g);
HXDLIN( 746)							_g = (_g + 1);
HXDLIN( 746)							action->addKey(key,state);
            						}
            					}
HXDLIN( 746)					{
HXLINE( 746)						 ::flixel::input::actions::FlxActionDigital action1 = this->_noteupP;
HXDLIN( 746)						int state1 = 2;
HXDLIN( 746)						int _g1 = 0;
HXDLIN( 746)						while((_g1 < keys3->length)){
HXLINE( 746)							int key = keys3->__get(_g1);
HXDLIN( 746)							_g1 = (_g1 + 1);
HXDLIN( 746)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 746)					{
HXLINE( 746)						 ::flixel::input::actions::FlxActionDigital action2 = this->_noteupR;
HXDLIN( 746)						int state2 = -1;
HXDLIN( 746)						int _g2 = 0;
HXDLIN( 746)						while((_g2 < keys3->length)){
HXLINE( 746)							int key = keys3->__get(_g2);
HXDLIN( 746)							_g2 = (_g2 + 1);
HXDLIN( 746)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)5: {
HXLINE( 746)					{
HXLINE( 746)						 ::flixel::input::actions::FlxActionDigital action = this->_noteleft;
HXDLIN( 746)						int state = 1;
HXDLIN( 746)						int _g = 0;
HXDLIN( 746)						while((_g < keys3->length)){
HXLINE( 746)							int key = keys3->__get(_g);
HXDLIN( 746)							_g = (_g + 1);
HXDLIN( 746)							action->addKey(key,state);
            						}
            					}
HXDLIN( 746)					{
HXLINE( 746)						 ::flixel::input::actions::FlxActionDigital action1 = this->_noteleftP;
HXDLIN( 746)						int state1 = 2;
HXDLIN( 746)						int _g1 = 0;
HXDLIN( 746)						while((_g1 < keys3->length)){
HXLINE( 746)							int key = keys3->__get(_g1);
HXDLIN( 746)							_g1 = (_g1 + 1);
HXDLIN( 746)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 746)					{
HXLINE( 746)						 ::flixel::input::actions::FlxActionDigital action2 = this->_noteleftR;
HXDLIN( 746)						int state2 = -1;
HXDLIN( 746)						int _g2 = 0;
HXDLIN( 746)						while((_g2 < keys3->length)){
HXLINE( 746)							int key = keys3->__get(_g2);
HXDLIN( 746)							_g2 = (_g2 + 1);
HXDLIN( 746)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)6: {
HXLINE( 746)					{
HXLINE( 746)						 ::flixel::input::actions::FlxActionDigital action = this->_noteright;
HXDLIN( 746)						int state = 1;
HXDLIN( 746)						int _g = 0;
HXDLIN( 746)						while((_g < keys3->length)){
HXLINE( 746)							int key = keys3->__get(_g);
HXDLIN( 746)							_g = (_g + 1);
HXDLIN( 746)							action->addKey(key,state);
            						}
            					}
HXDLIN( 746)					{
HXLINE( 746)						 ::flixel::input::actions::FlxActionDigital action1 = this->_noterightP;
HXDLIN( 746)						int state1 = 2;
HXDLIN( 746)						int _g1 = 0;
HXDLIN( 746)						while((_g1 < keys3->length)){
HXLINE( 746)							int key = keys3->__get(_g1);
HXDLIN( 746)							_g1 = (_g1 + 1);
HXDLIN( 746)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 746)					{
HXLINE( 746)						 ::flixel::input::actions::FlxActionDigital action2 = this->_noterightR;
HXDLIN( 746)						int state2 = -1;
HXDLIN( 746)						int _g2 = 0;
HXDLIN( 746)						while((_g2 < keys3->length)){
HXLINE( 746)							int key = keys3->__get(_g2);
HXDLIN( 746)							_g2 = (_g2 + 1);
HXDLIN( 746)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)7: {
HXLINE( 746)					{
HXLINE( 746)						 ::flixel::input::actions::FlxActionDigital action = this->_notedown;
HXDLIN( 746)						int state = 1;
HXDLIN( 746)						int _g = 0;
HXDLIN( 746)						while((_g < keys3->length)){
HXLINE( 746)							int key = keys3->__get(_g);
HXDLIN( 746)							_g = (_g + 1);
HXDLIN( 746)							action->addKey(key,state);
            						}
            					}
HXDLIN( 746)					{
HXLINE( 746)						 ::flixel::input::actions::FlxActionDigital action1 = this->_notedownP;
HXDLIN( 746)						int state1 = 2;
HXDLIN( 746)						int _g1 = 0;
HXDLIN( 746)						while((_g1 < keys3->length)){
HXLINE( 746)							int key = keys3->__get(_g1);
HXDLIN( 746)							_g1 = (_g1 + 1);
HXDLIN( 746)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 746)					{
HXLINE( 746)						 ::flixel::input::actions::FlxActionDigital action2 = this->_notedownR;
HXDLIN( 746)						int state2 = -1;
HXDLIN( 746)						int _g2 = 0;
HXDLIN( 746)						while((_g2 < keys3->length)){
HXLINE( 746)							int key = keys3->__get(_g2);
HXDLIN( 746)							_g2 = (_g2 + 1);
HXDLIN( 746)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)8: {
HXLINE( 746)					 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 746)					int state = 2;
HXDLIN( 746)					int _g = 0;
HXDLIN( 746)					while((_g < keys3->length)){
HXLINE( 746)						int key = keys3->__get(_g);
HXDLIN( 746)						_g = (_g + 1);
HXDLIN( 746)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)9: {
HXLINE( 746)					 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 746)					int state = 2;
HXDLIN( 746)					int _g = 0;
HXDLIN( 746)					while((_g < keys3->length)){
HXLINE( 746)						int key = keys3->__get(_g);
HXDLIN( 746)						_g = (_g + 1);
HXDLIN( 746)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)10: {
HXLINE( 746)					 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 746)					int state = 2;
HXDLIN( 746)					int _g = 0;
HXDLIN( 746)					while((_g < keys3->length)){
HXLINE( 746)						int key = keys3->__get(_g);
HXDLIN( 746)						_g = (_g + 1);
HXDLIN( 746)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)11: {
HXLINE( 746)					 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 746)					int state = 2;
HXDLIN( 746)					int _g = 0;
HXDLIN( 746)					while((_g < keys3->length)){
HXLINE( 746)						int key = keys3->__get(_g);
HXDLIN( 746)						_g = (_g + 1);
HXDLIN( 746)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)12: {
HXLINE( 746)					 ::flixel::input::actions::FlxActionDigital action = this->_cheat;
HXDLIN( 746)					int state = 2;
HXDLIN( 746)					int _g = 0;
HXDLIN( 746)					while((_g < keys3->length)){
HXLINE( 746)						int key = keys3->__get(_g);
HXDLIN( 746)						_g = (_g + 1);
HXDLIN( 746)						action->addKey(key,state);
            					}
            				}
            				break;
            			}
            		}
HXLINE( 747)		{
HXLINE( 747)			::String s4 = ( (::String)(::flixel::FlxG_obj::save->data->__Field(HX_("upBind",b8,51,92,70),::hx::paccDynamic)) );
HXDLIN( 747)			s4 = s4.toUpperCase();
HXDLIN( 747)			int keys4;
HXDLIN( 747)			if (::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::fromStringMap->exists(s4)) {
HXLINE( 747)				keys4 = ::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::fromStringMap->get_int(s4);
            			}
            			else {
HXLINE( 747)				keys4 = -1;
            			}
HXDLIN( 747)			::Array< int > keys5 = ::Array_obj< int >::__new(2)->init(0,keys4)->init(1,38);
HXDLIN( 747)			switch((int)(::Control_obj::NOTE_UP_dyn()->_hx_getIndex())){
            				case (int)0: {
HXLINE( 747)					{
HXLINE( 747)						 ::flixel::input::actions::FlxActionDigital action = this->_up;
HXDLIN( 747)						int state = 1;
HXDLIN( 747)						int _g = 0;
HXDLIN( 747)						while((_g < keys5->length)){
HXLINE( 747)							int key = keys5->__get(_g);
HXDLIN( 747)							_g = (_g + 1);
HXDLIN( 747)							action->addKey(key,state);
            						}
            					}
HXDLIN( 747)					{
HXLINE( 747)						 ::flixel::input::actions::FlxActionDigital action1 = this->_upP;
HXDLIN( 747)						int state1 = 2;
HXDLIN( 747)						int _g1 = 0;
HXDLIN( 747)						while((_g1 < keys5->length)){
HXLINE( 747)							int key = keys5->__get(_g1);
HXDLIN( 747)							_g1 = (_g1 + 1);
HXDLIN( 747)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 747)					{
HXLINE( 747)						 ::flixel::input::actions::FlxActionDigital action2 = this->_upR;
HXDLIN( 747)						int state2 = -1;
HXDLIN( 747)						int _g2 = 0;
HXDLIN( 747)						while((_g2 < keys5->length)){
HXLINE( 747)							int key = keys5->__get(_g2);
HXDLIN( 747)							_g2 = (_g2 + 1);
HXDLIN( 747)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)1: {
HXLINE( 747)					{
HXLINE( 747)						 ::flixel::input::actions::FlxActionDigital action = this->_left;
HXDLIN( 747)						int state = 1;
HXDLIN( 747)						int _g = 0;
HXDLIN( 747)						while((_g < keys5->length)){
HXLINE( 747)							int key = keys5->__get(_g);
HXDLIN( 747)							_g = (_g + 1);
HXDLIN( 747)							action->addKey(key,state);
            						}
            					}
HXDLIN( 747)					{
HXLINE( 747)						 ::flixel::input::actions::FlxActionDigital action1 = this->_leftP;
HXDLIN( 747)						int state1 = 2;
HXDLIN( 747)						int _g1 = 0;
HXDLIN( 747)						while((_g1 < keys5->length)){
HXLINE( 747)							int key = keys5->__get(_g1);
HXDLIN( 747)							_g1 = (_g1 + 1);
HXDLIN( 747)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 747)					{
HXLINE( 747)						 ::flixel::input::actions::FlxActionDigital action2 = this->_leftR;
HXDLIN( 747)						int state2 = -1;
HXDLIN( 747)						int _g2 = 0;
HXDLIN( 747)						while((_g2 < keys5->length)){
HXLINE( 747)							int key = keys5->__get(_g2);
HXDLIN( 747)							_g2 = (_g2 + 1);
HXDLIN( 747)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)2: {
HXLINE( 747)					{
HXLINE( 747)						 ::flixel::input::actions::FlxActionDigital action = this->_right;
HXDLIN( 747)						int state = 1;
HXDLIN( 747)						int _g = 0;
HXDLIN( 747)						while((_g < keys5->length)){
HXLINE( 747)							int key = keys5->__get(_g);
HXDLIN( 747)							_g = (_g + 1);
HXDLIN( 747)							action->addKey(key,state);
            						}
            					}
HXDLIN( 747)					{
HXLINE( 747)						 ::flixel::input::actions::FlxActionDigital action1 = this->_rightP;
HXDLIN( 747)						int state1 = 2;
HXDLIN( 747)						int _g1 = 0;
HXDLIN( 747)						while((_g1 < keys5->length)){
HXLINE( 747)							int key = keys5->__get(_g1);
HXDLIN( 747)							_g1 = (_g1 + 1);
HXDLIN( 747)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 747)					{
HXLINE( 747)						 ::flixel::input::actions::FlxActionDigital action2 = this->_rightR;
HXDLIN( 747)						int state2 = -1;
HXDLIN( 747)						int _g2 = 0;
HXDLIN( 747)						while((_g2 < keys5->length)){
HXLINE( 747)							int key = keys5->__get(_g2);
HXDLIN( 747)							_g2 = (_g2 + 1);
HXDLIN( 747)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)3: {
HXLINE( 747)					{
HXLINE( 747)						 ::flixel::input::actions::FlxActionDigital action = this->_down;
HXDLIN( 747)						int state = 1;
HXDLIN( 747)						int _g = 0;
HXDLIN( 747)						while((_g < keys5->length)){
HXLINE( 747)							int key = keys5->__get(_g);
HXDLIN( 747)							_g = (_g + 1);
HXDLIN( 747)							action->addKey(key,state);
            						}
            					}
HXDLIN( 747)					{
HXLINE( 747)						 ::flixel::input::actions::FlxActionDigital action1 = this->_downP;
HXDLIN( 747)						int state1 = 2;
HXDLIN( 747)						int _g1 = 0;
HXDLIN( 747)						while((_g1 < keys5->length)){
HXLINE( 747)							int key = keys5->__get(_g1);
HXDLIN( 747)							_g1 = (_g1 + 1);
HXDLIN( 747)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 747)					{
HXLINE( 747)						 ::flixel::input::actions::FlxActionDigital action2 = this->_downR;
HXDLIN( 747)						int state2 = -1;
HXDLIN( 747)						int _g2 = 0;
HXDLIN( 747)						while((_g2 < keys5->length)){
HXLINE( 747)							int key = keys5->__get(_g2);
HXDLIN( 747)							_g2 = (_g2 + 1);
HXDLIN( 747)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)4: {
HXLINE( 747)					{
HXLINE( 747)						 ::flixel::input::actions::FlxActionDigital action = this->_noteup;
HXDLIN( 747)						int state = 1;
HXDLIN( 747)						int _g = 0;
HXDLIN( 747)						while((_g < keys5->length)){
HXLINE( 747)							int key = keys5->__get(_g);
HXDLIN( 747)							_g = (_g + 1);
HXDLIN( 747)							action->addKey(key,state);
            						}
            					}
HXDLIN( 747)					{
HXLINE( 747)						 ::flixel::input::actions::FlxActionDigital action1 = this->_noteupP;
HXDLIN( 747)						int state1 = 2;
HXDLIN( 747)						int _g1 = 0;
HXDLIN( 747)						while((_g1 < keys5->length)){
HXLINE( 747)							int key = keys5->__get(_g1);
HXDLIN( 747)							_g1 = (_g1 + 1);
HXDLIN( 747)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 747)					{
HXLINE( 747)						 ::flixel::input::actions::FlxActionDigital action2 = this->_noteupR;
HXDLIN( 747)						int state2 = -1;
HXDLIN( 747)						int _g2 = 0;
HXDLIN( 747)						while((_g2 < keys5->length)){
HXLINE( 747)							int key = keys5->__get(_g2);
HXDLIN( 747)							_g2 = (_g2 + 1);
HXDLIN( 747)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)5: {
HXLINE( 747)					{
HXLINE( 747)						 ::flixel::input::actions::FlxActionDigital action = this->_noteleft;
HXDLIN( 747)						int state = 1;
HXDLIN( 747)						int _g = 0;
HXDLIN( 747)						while((_g < keys5->length)){
HXLINE( 747)							int key = keys5->__get(_g);
HXDLIN( 747)							_g = (_g + 1);
HXDLIN( 747)							action->addKey(key,state);
            						}
            					}
HXDLIN( 747)					{
HXLINE( 747)						 ::flixel::input::actions::FlxActionDigital action1 = this->_noteleftP;
HXDLIN( 747)						int state1 = 2;
HXDLIN( 747)						int _g1 = 0;
HXDLIN( 747)						while((_g1 < keys5->length)){
HXLINE( 747)							int key = keys5->__get(_g1);
HXDLIN( 747)							_g1 = (_g1 + 1);
HXDLIN( 747)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 747)					{
HXLINE( 747)						 ::flixel::input::actions::FlxActionDigital action2 = this->_noteleftR;
HXDLIN( 747)						int state2 = -1;
HXDLIN( 747)						int _g2 = 0;
HXDLIN( 747)						while((_g2 < keys5->length)){
HXLINE( 747)							int key = keys5->__get(_g2);
HXDLIN( 747)							_g2 = (_g2 + 1);
HXDLIN( 747)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)6: {
HXLINE( 747)					{
HXLINE( 747)						 ::flixel::input::actions::FlxActionDigital action = this->_noteright;
HXDLIN( 747)						int state = 1;
HXDLIN( 747)						int _g = 0;
HXDLIN( 747)						while((_g < keys5->length)){
HXLINE( 747)							int key = keys5->__get(_g);
HXDLIN( 747)							_g = (_g + 1);
HXDLIN( 747)							action->addKey(key,state);
            						}
            					}
HXDLIN( 747)					{
HXLINE( 747)						 ::flixel::input::actions::FlxActionDigital action1 = this->_noterightP;
HXDLIN( 747)						int state1 = 2;
HXDLIN( 747)						int _g1 = 0;
HXDLIN( 747)						while((_g1 < keys5->length)){
HXLINE( 747)							int key = keys5->__get(_g1);
HXDLIN( 747)							_g1 = (_g1 + 1);
HXDLIN( 747)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 747)					{
HXLINE( 747)						 ::flixel::input::actions::FlxActionDigital action2 = this->_noterightR;
HXDLIN( 747)						int state2 = -1;
HXDLIN( 747)						int _g2 = 0;
HXDLIN( 747)						while((_g2 < keys5->length)){
HXLINE( 747)							int key = keys5->__get(_g2);
HXDLIN( 747)							_g2 = (_g2 + 1);
HXDLIN( 747)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)7: {
HXLINE( 747)					{
HXLINE( 747)						 ::flixel::input::actions::FlxActionDigital action = this->_notedown;
HXDLIN( 747)						int state = 1;
HXDLIN( 747)						int _g = 0;
HXDLIN( 747)						while((_g < keys5->length)){
HXLINE( 747)							int key = keys5->__get(_g);
HXDLIN( 747)							_g = (_g + 1);
HXDLIN( 747)							action->addKey(key,state);
            						}
            					}
HXDLIN( 747)					{
HXLINE( 747)						 ::flixel::input::actions::FlxActionDigital action1 = this->_notedownP;
HXDLIN( 747)						int state1 = 2;
HXDLIN( 747)						int _g1 = 0;
HXDLIN( 747)						while((_g1 < keys5->length)){
HXLINE( 747)							int key = keys5->__get(_g1);
HXDLIN( 747)							_g1 = (_g1 + 1);
HXDLIN( 747)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 747)					{
HXLINE( 747)						 ::flixel::input::actions::FlxActionDigital action2 = this->_notedownR;
HXDLIN( 747)						int state2 = -1;
HXDLIN( 747)						int _g2 = 0;
HXDLIN( 747)						while((_g2 < keys5->length)){
HXLINE( 747)							int key = keys5->__get(_g2);
HXDLIN( 747)							_g2 = (_g2 + 1);
HXDLIN( 747)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)8: {
HXLINE( 747)					 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 747)					int state = 2;
HXDLIN( 747)					int _g = 0;
HXDLIN( 747)					while((_g < keys5->length)){
HXLINE( 747)						int key = keys5->__get(_g);
HXDLIN( 747)						_g = (_g + 1);
HXDLIN( 747)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)9: {
HXLINE( 747)					 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 747)					int state = 2;
HXDLIN( 747)					int _g = 0;
HXDLIN( 747)					while((_g < keys5->length)){
HXLINE( 747)						int key = keys5->__get(_g);
HXDLIN( 747)						_g = (_g + 1);
HXDLIN( 747)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)10: {
HXLINE( 747)					 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 747)					int state = 2;
HXDLIN( 747)					int _g = 0;
HXDLIN( 747)					while((_g < keys5->length)){
HXLINE( 747)						int key = keys5->__get(_g);
HXDLIN( 747)						_g = (_g + 1);
HXDLIN( 747)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)11: {
HXLINE( 747)					 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 747)					int state = 2;
HXDLIN( 747)					int _g = 0;
HXDLIN( 747)					while((_g < keys5->length)){
HXLINE( 747)						int key = keys5->__get(_g);
HXDLIN( 747)						_g = (_g + 1);
HXDLIN( 747)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)12: {
HXLINE( 747)					 ::flixel::input::actions::FlxActionDigital action = this->_cheat;
HXDLIN( 747)					int state = 2;
HXDLIN( 747)					int _g = 0;
HXDLIN( 747)					while((_g < keys5->length)){
HXLINE( 747)						int key = keys5->__get(_g);
HXDLIN( 747)						_g = (_g + 1);
HXDLIN( 747)						action->addKey(key,state);
            					}
            				}
            				break;
            			}
            		}
HXLINE( 748)		{
HXLINE( 748)			::String s5 = ( (::String)(::flixel::FlxG_obj::save->data->__Field(HX_("downBind",3f,f3,fe,75),::hx::paccDynamic)) );
HXDLIN( 748)			s5 = s5.toUpperCase();
HXDLIN( 748)			int keys6;
HXDLIN( 748)			if (::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::fromStringMap->exists(s5)) {
HXLINE( 748)				keys6 = ::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::fromStringMap->get_int(s5);
            			}
            			else {
HXLINE( 748)				keys6 = -1;
            			}
HXDLIN( 748)			::Array< int > keys7 = ::Array_obj< int >::__new(2)->init(0,keys6)->init(1,40);
HXDLIN( 748)			switch((int)(::Control_obj::NOTE_DOWN_dyn()->_hx_getIndex())){
            				case (int)0: {
HXLINE( 748)					{
HXLINE( 748)						 ::flixel::input::actions::FlxActionDigital action = this->_up;
HXDLIN( 748)						int state = 1;
HXDLIN( 748)						int _g = 0;
HXDLIN( 748)						while((_g < keys7->length)){
HXLINE( 748)							int key = keys7->__get(_g);
HXDLIN( 748)							_g = (_g + 1);
HXDLIN( 748)							action->addKey(key,state);
            						}
            					}
HXDLIN( 748)					{
HXLINE( 748)						 ::flixel::input::actions::FlxActionDigital action1 = this->_upP;
HXDLIN( 748)						int state1 = 2;
HXDLIN( 748)						int _g1 = 0;
HXDLIN( 748)						while((_g1 < keys7->length)){
HXLINE( 748)							int key = keys7->__get(_g1);
HXDLIN( 748)							_g1 = (_g1 + 1);
HXDLIN( 748)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 748)					{
HXLINE( 748)						 ::flixel::input::actions::FlxActionDigital action2 = this->_upR;
HXDLIN( 748)						int state2 = -1;
HXDLIN( 748)						int _g2 = 0;
HXDLIN( 748)						while((_g2 < keys7->length)){
HXLINE( 748)							int key = keys7->__get(_g2);
HXDLIN( 748)							_g2 = (_g2 + 1);
HXDLIN( 748)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)1: {
HXLINE( 748)					{
HXLINE( 748)						 ::flixel::input::actions::FlxActionDigital action = this->_left;
HXDLIN( 748)						int state = 1;
HXDLIN( 748)						int _g = 0;
HXDLIN( 748)						while((_g < keys7->length)){
HXLINE( 748)							int key = keys7->__get(_g);
HXDLIN( 748)							_g = (_g + 1);
HXDLIN( 748)							action->addKey(key,state);
            						}
            					}
HXDLIN( 748)					{
HXLINE( 748)						 ::flixel::input::actions::FlxActionDigital action1 = this->_leftP;
HXDLIN( 748)						int state1 = 2;
HXDLIN( 748)						int _g1 = 0;
HXDLIN( 748)						while((_g1 < keys7->length)){
HXLINE( 748)							int key = keys7->__get(_g1);
HXDLIN( 748)							_g1 = (_g1 + 1);
HXDLIN( 748)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 748)					{
HXLINE( 748)						 ::flixel::input::actions::FlxActionDigital action2 = this->_leftR;
HXDLIN( 748)						int state2 = -1;
HXDLIN( 748)						int _g2 = 0;
HXDLIN( 748)						while((_g2 < keys7->length)){
HXLINE( 748)							int key = keys7->__get(_g2);
HXDLIN( 748)							_g2 = (_g2 + 1);
HXDLIN( 748)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)2: {
HXLINE( 748)					{
HXLINE( 748)						 ::flixel::input::actions::FlxActionDigital action = this->_right;
HXDLIN( 748)						int state = 1;
HXDLIN( 748)						int _g = 0;
HXDLIN( 748)						while((_g < keys7->length)){
HXLINE( 748)							int key = keys7->__get(_g);
HXDLIN( 748)							_g = (_g + 1);
HXDLIN( 748)							action->addKey(key,state);
            						}
            					}
HXDLIN( 748)					{
HXLINE( 748)						 ::flixel::input::actions::FlxActionDigital action1 = this->_rightP;
HXDLIN( 748)						int state1 = 2;
HXDLIN( 748)						int _g1 = 0;
HXDLIN( 748)						while((_g1 < keys7->length)){
HXLINE( 748)							int key = keys7->__get(_g1);
HXDLIN( 748)							_g1 = (_g1 + 1);
HXDLIN( 748)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 748)					{
HXLINE( 748)						 ::flixel::input::actions::FlxActionDigital action2 = this->_rightR;
HXDLIN( 748)						int state2 = -1;
HXDLIN( 748)						int _g2 = 0;
HXDLIN( 748)						while((_g2 < keys7->length)){
HXLINE( 748)							int key = keys7->__get(_g2);
HXDLIN( 748)							_g2 = (_g2 + 1);
HXDLIN( 748)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)3: {
HXLINE( 748)					{
HXLINE( 748)						 ::flixel::input::actions::FlxActionDigital action = this->_down;
HXDLIN( 748)						int state = 1;
HXDLIN( 748)						int _g = 0;
HXDLIN( 748)						while((_g < keys7->length)){
HXLINE( 748)							int key = keys7->__get(_g);
HXDLIN( 748)							_g = (_g + 1);
HXDLIN( 748)							action->addKey(key,state);
            						}
            					}
HXDLIN( 748)					{
HXLINE( 748)						 ::flixel::input::actions::FlxActionDigital action1 = this->_downP;
HXDLIN( 748)						int state1 = 2;
HXDLIN( 748)						int _g1 = 0;
HXDLIN( 748)						while((_g1 < keys7->length)){
HXLINE( 748)							int key = keys7->__get(_g1);
HXDLIN( 748)							_g1 = (_g1 + 1);
HXDLIN( 748)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 748)					{
HXLINE( 748)						 ::flixel::input::actions::FlxActionDigital action2 = this->_downR;
HXDLIN( 748)						int state2 = -1;
HXDLIN( 748)						int _g2 = 0;
HXDLIN( 748)						while((_g2 < keys7->length)){
HXLINE( 748)							int key = keys7->__get(_g2);
HXDLIN( 748)							_g2 = (_g2 + 1);
HXDLIN( 748)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)4: {
HXLINE( 748)					{
HXLINE( 748)						 ::flixel::input::actions::FlxActionDigital action = this->_noteup;
HXDLIN( 748)						int state = 1;
HXDLIN( 748)						int _g = 0;
HXDLIN( 748)						while((_g < keys7->length)){
HXLINE( 748)							int key = keys7->__get(_g);
HXDLIN( 748)							_g = (_g + 1);
HXDLIN( 748)							action->addKey(key,state);
            						}
            					}
HXDLIN( 748)					{
HXLINE( 748)						 ::flixel::input::actions::FlxActionDigital action1 = this->_noteupP;
HXDLIN( 748)						int state1 = 2;
HXDLIN( 748)						int _g1 = 0;
HXDLIN( 748)						while((_g1 < keys7->length)){
HXLINE( 748)							int key = keys7->__get(_g1);
HXDLIN( 748)							_g1 = (_g1 + 1);
HXDLIN( 748)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 748)					{
HXLINE( 748)						 ::flixel::input::actions::FlxActionDigital action2 = this->_noteupR;
HXDLIN( 748)						int state2 = -1;
HXDLIN( 748)						int _g2 = 0;
HXDLIN( 748)						while((_g2 < keys7->length)){
HXLINE( 748)							int key = keys7->__get(_g2);
HXDLIN( 748)							_g2 = (_g2 + 1);
HXDLIN( 748)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)5: {
HXLINE( 748)					{
HXLINE( 748)						 ::flixel::input::actions::FlxActionDigital action = this->_noteleft;
HXDLIN( 748)						int state = 1;
HXDLIN( 748)						int _g = 0;
HXDLIN( 748)						while((_g < keys7->length)){
HXLINE( 748)							int key = keys7->__get(_g);
HXDLIN( 748)							_g = (_g + 1);
HXDLIN( 748)							action->addKey(key,state);
            						}
            					}
HXDLIN( 748)					{
HXLINE( 748)						 ::flixel::input::actions::FlxActionDigital action1 = this->_noteleftP;
HXDLIN( 748)						int state1 = 2;
HXDLIN( 748)						int _g1 = 0;
HXDLIN( 748)						while((_g1 < keys7->length)){
HXLINE( 748)							int key = keys7->__get(_g1);
HXDLIN( 748)							_g1 = (_g1 + 1);
HXDLIN( 748)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 748)					{
HXLINE( 748)						 ::flixel::input::actions::FlxActionDigital action2 = this->_noteleftR;
HXDLIN( 748)						int state2 = -1;
HXDLIN( 748)						int _g2 = 0;
HXDLIN( 748)						while((_g2 < keys7->length)){
HXLINE( 748)							int key = keys7->__get(_g2);
HXDLIN( 748)							_g2 = (_g2 + 1);
HXDLIN( 748)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)6: {
HXLINE( 748)					{
HXLINE( 748)						 ::flixel::input::actions::FlxActionDigital action = this->_noteright;
HXDLIN( 748)						int state = 1;
HXDLIN( 748)						int _g = 0;
HXDLIN( 748)						while((_g < keys7->length)){
HXLINE( 748)							int key = keys7->__get(_g);
HXDLIN( 748)							_g = (_g + 1);
HXDLIN( 748)							action->addKey(key,state);
            						}
            					}
HXDLIN( 748)					{
HXLINE( 748)						 ::flixel::input::actions::FlxActionDigital action1 = this->_noterightP;
HXDLIN( 748)						int state1 = 2;
HXDLIN( 748)						int _g1 = 0;
HXDLIN( 748)						while((_g1 < keys7->length)){
HXLINE( 748)							int key = keys7->__get(_g1);
HXDLIN( 748)							_g1 = (_g1 + 1);
HXDLIN( 748)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 748)					{
HXLINE( 748)						 ::flixel::input::actions::FlxActionDigital action2 = this->_noterightR;
HXDLIN( 748)						int state2 = -1;
HXDLIN( 748)						int _g2 = 0;
HXDLIN( 748)						while((_g2 < keys7->length)){
HXLINE( 748)							int key = keys7->__get(_g2);
HXDLIN( 748)							_g2 = (_g2 + 1);
HXDLIN( 748)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)7: {
HXLINE( 748)					{
HXLINE( 748)						 ::flixel::input::actions::FlxActionDigital action = this->_notedown;
HXDLIN( 748)						int state = 1;
HXDLIN( 748)						int _g = 0;
HXDLIN( 748)						while((_g < keys7->length)){
HXLINE( 748)							int key = keys7->__get(_g);
HXDLIN( 748)							_g = (_g + 1);
HXDLIN( 748)							action->addKey(key,state);
            						}
            					}
HXDLIN( 748)					{
HXLINE( 748)						 ::flixel::input::actions::FlxActionDigital action1 = this->_notedownP;
HXDLIN( 748)						int state1 = 2;
HXDLIN( 748)						int _g1 = 0;
HXDLIN( 748)						while((_g1 < keys7->length)){
HXLINE( 748)							int key = keys7->__get(_g1);
HXDLIN( 748)							_g1 = (_g1 + 1);
HXDLIN( 748)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 748)					{
HXLINE( 748)						 ::flixel::input::actions::FlxActionDigital action2 = this->_notedownR;
HXDLIN( 748)						int state2 = -1;
HXDLIN( 748)						int _g2 = 0;
HXDLIN( 748)						while((_g2 < keys7->length)){
HXLINE( 748)							int key = keys7->__get(_g2);
HXDLIN( 748)							_g2 = (_g2 + 1);
HXDLIN( 748)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)8: {
HXLINE( 748)					 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 748)					int state = 2;
HXDLIN( 748)					int _g = 0;
HXDLIN( 748)					while((_g < keys7->length)){
HXLINE( 748)						int key = keys7->__get(_g);
HXDLIN( 748)						_g = (_g + 1);
HXDLIN( 748)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)9: {
HXLINE( 748)					 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 748)					int state = 2;
HXDLIN( 748)					int _g = 0;
HXDLIN( 748)					while((_g < keys7->length)){
HXLINE( 748)						int key = keys7->__get(_g);
HXDLIN( 748)						_g = (_g + 1);
HXDLIN( 748)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)10: {
HXLINE( 748)					 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 748)					int state = 2;
HXDLIN( 748)					int _g = 0;
HXDLIN( 748)					while((_g < keys7->length)){
HXLINE( 748)						int key = keys7->__get(_g);
HXDLIN( 748)						_g = (_g + 1);
HXDLIN( 748)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)11: {
HXLINE( 748)					 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 748)					int state = 2;
HXDLIN( 748)					int _g = 0;
HXDLIN( 748)					while((_g < keys7->length)){
HXLINE( 748)						int key = keys7->__get(_g);
HXDLIN( 748)						_g = (_g + 1);
HXDLIN( 748)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)12: {
HXLINE( 748)					 ::flixel::input::actions::FlxActionDigital action = this->_cheat;
HXDLIN( 748)					int state = 2;
HXDLIN( 748)					int _g = 0;
HXDLIN( 748)					while((_g < keys7->length)){
HXLINE( 748)						int key = keys7->__get(_g);
HXDLIN( 748)						_g = (_g + 1);
HXDLIN( 748)						action->addKey(key,state);
            					}
            				}
            				break;
            			}
            		}
HXLINE( 749)		{
HXLINE( 749)			::String s6 = ( (::String)(::flixel::FlxG_obj::save->data->__Field(HX_("leftBind",64,39,12,48),::hx::paccDynamic)) );
HXDLIN( 749)			s6 = s6.toUpperCase();
HXDLIN( 749)			int keys8;
HXDLIN( 749)			if (::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::fromStringMap->exists(s6)) {
HXLINE( 749)				keys8 = ::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::fromStringMap->get_int(s6);
            			}
            			else {
HXLINE( 749)				keys8 = -1;
            			}
HXDLIN( 749)			::Array< int > keys9 = ::Array_obj< int >::__new(2)->init(0,keys8)->init(1,37);
HXDLIN( 749)			switch((int)(::Control_obj::NOTE_LEFT_dyn()->_hx_getIndex())){
            				case (int)0: {
HXLINE( 749)					{
HXLINE( 749)						 ::flixel::input::actions::FlxActionDigital action = this->_up;
HXDLIN( 749)						int state = 1;
HXDLIN( 749)						int _g = 0;
HXDLIN( 749)						while((_g < keys9->length)){
HXLINE( 749)							int key = keys9->__get(_g);
HXDLIN( 749)							_g = (_g + 1);
HXDLIN( 749)							action->addKey(key,state);
            						}
            					}
HXDLIN( 749)					{
HXLINE( 749)						 ::flixel::input::actions::FlxActionDigital action1 = this->_upP;
HXDLIN( 749)						int state1 = 2;
HXDLIN( 749)						int _g1 = 0;
HXDLIN( 749)						while((_g1 < keys9->length)){
HXLINE( 749)							int key = keys9->__get(_g1);
HXDLIN( 749)							_g1 = (_g1 + 1);
HXDLIN( 749)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 749)					{
HXLINE( 749)						 ::flixel::input::actions::FlxActionDigital action2 = this->_upR;
HXDLIN( 749)						int state2 = -1;
HXDLIN( 749)						int _g2 = 0;
HXDLIN( 749)						while((_g2 < keys9->length)){
HXLINE( 749)							int key = keys9->__get(_g2);
HXDLIN( 749)							_g2 = (_g2 + 1);
HXDLIN( 749)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)1: {
HXLINE( 749)					{
HXLINE( 749)						 ::flixel::input::actions::FlxActionDigital action = this->_left;
HXDLIN( 749)						int state = 1;
HXDLIN( 749)						int _g = 0;
HXDLIN( 749)						while((_g < keys9->length)){
HXLINE( 749)							int key = keys9->__get(_g);
HXDLIN( 749)							_g = (_g + 1);
HXDLIN( 749)							action->addKey(key,state);
            						}
            					}
HXDLIN( 749)					{
HXLINE( 749)						 ::flixel::input::actions::FlxActionDigital action1 = this->_leftP;
HXDLIN( 749)						int state1 = 2;
HXDLIN( 749)						int _g1 = 0;
HXDLIN( 749)						while((_g1 < keys9->length)){
HXLINE( 749)							int key = keys9->__get(_g1);
HXDLIN( 749)							_g1 = (_g1 + 1);
HXDLIN( 749)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 749)					{
HXLINE( 749)						 ::flixel::input::actions::FlxActionDigital action2 = this->_leftR;
HXDLIN( 749)						int state2 = -1;
HXDLIN( 749)						int _g2 = 0;
HXDLIN( 749)						while((_g2 < keys9->length)){
HXLINE( 749)							int key = keys9->__get(_g2);
HXDLIN( 749)							_g2 = (_g2 + 1);
HXDLIN( 749)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)2: {
HXLINE( 749)					{
HXLINE( 749)						 ::flixel::input::actions::FlxActionDigital action = this->_right;
HXDLIN( 749)						int state = 1;
HXDLIN( 749)						int _g = 0;
HXDLIN( 749)						while((_g < keys9->length)){
HXLINE( 749)							int key = keys9->__get(_g);
HXDLIN( 749)							_g = (_g + 1);
HXDLIN( 749)							action->addKey(key,state);
            						}
            					}
HXDLIN( 749)					{
HXLINE( 749)						 ::flixel::input::actions::FlxActionDigital action1 = this->_rightP;
HXDLIN( 749)						int state1 = 2;
HXDLIN( 749)						int _g1 = 0;
HXDLIN( 749)						while((_g1 < keys9->length)){
HXLINE( 749)							int key = keys9->__get(_g1);
HXDLIN( 749)							_g1 = (_g1 + 1);
HXDLIN( 749)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 749)					{
HXLINE( 749)						 ::flixel::input::actions::FlxActionDigital action2 = this->_rightR;
HXDLIN( 749)						int state2 = -1;
HXDLIN( 749)						int _g2 = 0;
HXDLIN( 749)						while((_g2 < keys9->length)){
HXLINE( 749)							int key = keys9->__get(_g2);
HXDLIN( 749)							_g2 = (_g2 + 1);
HXDLIN( 749)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)3: {
HXLINE( 749)					{
HXLINE( 749)						 ::flixel::input::actions::FlxActionDigital action = this->_down;
HXDLIN( 749)						int state = 1;
HXDLIN( 749)						int _g = 0;
HXDLIN( 749)						while((_g < keys9->length)){
HXLINE( 749)							int key = keys9->__get(_g);
HXDLIN( 749)							_g = (_g + 1);
HXDLIN( 749)							action->addKey(key,state);
            						}
            					}
HXDLIN( 749)					{
HXLINE( 749)						 ::flixel::input::actions::FlxActionDigital action1 = this->_downP;
HXDLIN( 749)						int state1 = 2;
HXDLIN( 749)						int _g1 = 0;
HXDLIN( 749)						while((_g1 < keys9->length)){
HXLINE( 749)							int key = keys9->__get(_g1);
HXDLIN( 749)							_g1 = (_g1 + 1);
HXDLIN( 749)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 749)					{
HXLINE( 749)						 ::flixel::input::actions::FlxActionDigital action2 = this->_downR;
HXDLIN( 749)						int state2 = -1;
HXDLIN( 749)						int _g2 = 0;
HXDLIN( 749)						while((_g2 < keys9->length)){
HXLINE( 749)							int key = keys9->__get(_g2);
HXDLIN( 749)							_g2 = (_g2 + 1);
HXDLIN( 749)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)4: {
HXLINE( 749)					{
HXLINE( 749)						 ::flixel::input::actions::FlxActionDigital action = this->_noteup;
HXDLIN( 749)						int state = 1;
HXDLIN( 749)						int _g = 0;
HXDLIN( 749)						while((_g < keys9->length)){
HXLINE( 749)							int key = keys9->__get(_g);
HXDLIN( 749)							_g = (_g + 1);
HXDLIN( 749)							action->addKey(key,state);
            						}
            					}
HXDLIN( 749)					{
HXLINE( 749)						 ::flixel::input::actions::FlxActionDigital action1 = this->_noteupP;
HXDLIN( 749)						int state1 = 2;
HXDLIN( 749)						int _g1 = 0;
HXDLIN( 749)						while((_g1 < keys9->length)){
HXLINE( 749)							int key = keys9->__get(_g1);
HXDLIN( 749)							_g1 = (_g1 + 1);
HXDLIN( 749)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 749)					{
HXLINE( 749)						 ::flixel::input::actions::FlxActionDigital action2 = this->_noteupR;
HXDLIN( 749)						int state2 = -1;
HXDLIN( 749)						int _g2 = 0;
HXDLIN( 749)						while((_g2 < keys9->length)){
HXLINE( 749)							int key = keys9->__get(_g2);
HXDLIN( 749)							_g2 = (_g2 + 1);
HXDLIN( 749)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)5: {
HXLINE( 749)					{
HXLINE( 749)						 ::flixel::input::actions::FlxActionDigital action = this->_noteleft;
HXDLIN( 749)						int state = 1;
HXDLIN( 749)						int _g = 0;
HXDLIN( 749)						while((_g < keys9->length)){
HXLINE( 749)							int key = keys9->__get(_g);
HXDLIN( 749)							_g = (_g + 1);
HXDLIN( 749)							action->addKey(key,state);
            						}
            					}
HXDLIN( 749)					{
HXLINE( 749)						 ::flixel::input::actions::FlxActionDigital action1 = this->_noteleftP;
HXDLIN( 749)						int state1 = 2;
HXDLIN( 749)						int _g1 = 0;
HXDLIN( 749)						while((_g1 < keys9->length)){
HXLINE( 749)							int key = keys9->__get(_g1);
HXDLIN( 749)							_g1 = (_g1 + 1);
HXDLIN( 749)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 749)					{
HXLINE( 749)						 ::flixel::input::actions::FlxActionDigital action2 = this->_noteleftR;
HXDLIN( 749)						int state2 = -1;
HXDLIN( 749)						int _g2 = 0;
HXDLIN( 749)						while((_g2 < keys9->length)){
HXLINE( 749)							int key = keys9->__get(_g2);
HXDLIN( 749)							_g2 = (_g2 + 1);
HXDLIN( 749)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)6: {
HXLINE( 749)					{
HXLINE( 749)						 ::flixel::input::actions::FlxActionDigital action = this->_noteright;
HXDLIN( 749)						int state = 1;
HXDLIN( 749)						int _g = 0;
HXDLIN( 749)						while((_g < keys9->length)){
HXLINE( 749)							int key = keys9->__get(_g);
HXDLIN( 749)							_g = (_g + 1);
HXDLIN( 749)							action->addKey(key,state);
            						}
            					}
HXDLIN( 749)					{
HXLINE( 749)						 ::flixel::input::actions::FlxActionDigital action1 = this->_noterightP;
HXDLIN( 749)						int state1 = 2;
HXDLIN( 749)						int _g1 = 0;
HXDLIN( 749)						while((_g1 < keys9->length)){
HXLINE( 749)							int key = keys9->__get(_g1);
HXDLIN( 749)							_g1 = (_g1 + 1);
HXDLIN( 749)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 749)					{
HXLINE( 749)						 ::flixel::input::actions::FlxActionDigital action2 = this->_noterightR;
HXDLIN( 749)						int state2 = -1;
HXDLIN( 749)						int _g2 = 0;
HXDLIN( 749)						while((_g2 < keys9->length)){
HXLINE( 749)							int key = keys9->__get(_g2);
HXDLIN( 749)							_g2 = (_g2 + 1);
HXDLIN( 749)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)7: {
HXLINE( 749)					{
HXLINE( 749)						 ::flixel::input::actions::FlxActionDigital action = this->_notedown;
HXDLIN( 749)						int state = 1;
HXDLIN( 749)						int _g = 0;
HXDLIN( 749)						while((_g < keys9->length)){
HXLINE( 749)							int key = keys9->__get(_g);
HXDLIN( 749)							_g = (_g + 1);
HXDLIN( 749)							action->addKey(key,state);
            						}
            					}
HXDLIN( 749)					{
HXLINE( 749)						 ::flixel::input::actions::FlxActionDigital action1 = this->_notedownP;
HXDLIN( 749)						int state1 = 2;
HXDLIN( 749)						int _g1 = 0;
HXDLIN( 749)						while((_g1 < keys9->length)){
HXLINE( 749)							int key = keys9->__get(_g1);
HXDLIN( 749)							_g1 = (_g1 + 1);
HXDLIN( 749)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 749)					{
HXLINE( 749)						 ::flixel::input::actions::FlxActionDigital action2 = this->_notedownR;
HXDLIN( 749)						int state2 = -1;
HXDLIN( 749)						int _g2 = 0;
HXDLIN( 749)						while((_g2 < keys9->length)){
HXLINE( 749)							int key = keys9->__get(_g2);
HXDLIN( 749)							_g2 = (_g2 + 1);
HXDLIN( 749)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)8: {
HXLINE( 749)					 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 749)					int state = 2;
HXDLIN( 749)					int _g = 0;
HXDLIN( 749)					while((_g < keys9->length)){
HXLINE( 749)						int key = keys9->__get(_g);
HXDLIN( 749)						_g = (_g + 1);
HXDLIN( 749)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)9: {
HXLINE( 749)					 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 749)					int state = 2;
HXDLIN( 749)					int _g = 0;
HXDLIN( 749)					while((_g < keys9->length)){
HXLINE( 749)						int key = keys9->__get(_g);
HXDLIN( 749)						_g = (_g + 1);
HXDLIN( 749)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)10: {
HXLINE( 749)					 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 749)					int state = 2;
HXDLIN( 749)					int _g = 0;
HXDLIN( 749)					while((_g < keys9->length)){
HXLINE( 749)						int key = keys9->__get(_g);
HXDLIN( 749)						_g = (_g + 1);
HXDLIN( 749)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)11: {
HXLINE( 749)					 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 749)					int state = 2;
HXDLIN( 749)					int _g = 0;
HXDLIN( 749)					while((_g < keys9->length)){
HXLINE( 749)						int key = keys9->__get(_g);
HXDLIN( 749)						_g = (_g + 1);
HXDLIN( 749)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)12: {
HXLINE( 749)					 ::flixel::input::actions::FlxActionDigital action = this->_cheat;
HXDLIN( 749)					int state = 2;
HXDLIN( 749)					int _g = 0;
HXDLIN( 749)					while((_g < keys9->length)){
HXLINE( 749)						int key = keys9->__get(_g);
HXDLIN( 749)						_g = (_g + 1);
HXDLIN( 749)						action->addKey(key,state);
            					}
            				}
            				break;
            			}
            		}
HXLINE( 750)		{
HXLINE( 750)			::String s7 = ( (::String)(::flixel::FlxG_obj::save->data->__Field(HX_("rightBind",b9,4b,dd,ab),::hx::paccDynamic)) );
HXDLIN( 750)			s7 = s7.toUpperCase();
HXDLIN( 750)			int keys10;
HXDLIN( 750)			if (::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::fromStringMap->exists(s7)) {
HXLINE( 750)				keys10 = ::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::fromStringMap->get_int(s7);
            			}
            			else {
HXLINE( 750)				keys10 = -1;
            			}
HXDLIN( 750)			::Array< int > keys11 = ::Array_obj< int >::__new(2)->init(0,keys10)->init(1,39);
HXDLIN( 750)			switch((int)(::Control_obj::NOTE_RIGHT_dyn()->_hx_getIndex())){
            				case (int)0: {
HXLINE( 750)					{
HXLINE( 750)						 ::flixel::input::actions::FlxActionDigital action = this->_up;
HXDLIN( 750)						int state = 1;
HXDLIN( 750)						int _g = 0;
HXDLIN( 750)						while((_g < keys11->length)){
HXLINE( 750)							int key = keys11->__get(_g);
HXDLIN( 750)							_g = (_g + 1);
HXDLIN( 750)							action->addKey(key,state);
            						}
            					}
HXDLIN( 750)					{
HXLINE( 750)						 ::flixel::input::actions::FlxActionDigital action1 = this->_upP;
HXDLIN( 750)						int state1 = 2;
HXDLIN( 750)						int _g1 = 0;
HXDLIN( 750)						while((_g1 < keys11->length)){
HXLINE( 750)							int key = keys11->__get(_g1);
HXDLIN( 750)							_g1 = (_g1 + 1);
HXDLIN( 750)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 750)					{
HXLINE( 750)						 ::flixel::input::actions::FlxActionDigital action2 = this->_upR;
HXDLIN( 750)						int state2 = -1;
HXDLIN( 750)						int _g2 = 0;
HXDLIN( 750)						while((_g2 < keys11->length)){
HXLINE( 750)							int key = keys11->__get(_g2);
HXDLIN( 750)							_g2 = (_g2 + 1);
HXDLIN( 750)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)1: {
HXLINE( 750)					{
HXLINE( 750)						 ::flixel::input::actions::FlxActionDigital action = this->_left;
HXDLIN( 750)						int state = 1;
HXDLIN( 750)						int _g = 0;
HXDLIN( 750)						while((_g < keys11->length)){
HXLINE( 750)							int key = keys11->__get(_g);
HXDLIN( 750)							_g = (_g + 1);
HXDLIN( 750)							action->addKey(key,state);
            						}
            					}
HXDLIN( 750)					{
HXLINE( 750)						 ::flixel::input::actions::FlxActionDigital action1 = this->_leftP;
HXDLIN( 750)						int state1 = 2;
HXDLIN( 750)						int _g1 = 0;
HXDLIN( 750)						while((_g1 < keys11->length)){
HXLINE( 750)							int key = keys11->__get(_g1);
HXDLIN( 750)							_g1 = (_g1 + 1);
HXDLIN( 750)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 750)					{
HXLINE( 750)						 ::flixel::input::actions::FlxActionDigital action2 = this->_leftR;
HXDLIN( 750)						int state2 = -1;
HXDLIN( 750)						int _g2 = 0;
HXDLIN( 750)						while((_g2 < keys11->length)){
HXLINE( 750)							int key = keys11->__get(_g2);
HXDLIN( 750)							_g2 = (_g2 + 1);
HXDLIN( 750)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)2: {
HXLINE( 750)					{
HXLINE( 750)						 ::flixel::input::actions::FlxActionDigital action = this->_right;
HXDLIN( 750)						int state = 1;
HXDLIN( 750)						int _g = 0;
HXDLIN( 750)						while((_g < keys11->length)){
HXLINE( 750)							int key = keys11->__get(_g);
HXDLIN( 750)							_g = (_g + 1);
HXDLIN( 750)							action->addKey(key,state);
            						}
            					}
HXDLIN( 750)					{
HXLINE( 750)						 ::flixel::input::actions::FlxActionDigital action1 = this->_rightP;
HXDLIN( 750)						int state1 = 2;
HXDLIN( 750)						int _g1 = 0;
HXDLIN( 750)						while((_g1 < keys11->length)){
HXLINE( 750)							int key = keys11->__get(_g1);
HXDLIN( 750)							_g1 = (_g1 + 1);
HXDLIN( 750)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 750)					{
HXLINE( 750)						 ::flixel::input::actions::FlxActionDigital action2 = this->_rightR;
HXDLIN( 750)						int state2 = -1;
HXDLIN( 750)						int _g2 = 0;
HXDLIN( 750)						while((_g2 < keys11->length)){
HXLINE( 750)							int key = keys11->__get(_g2);
HXDLIN( 750)							_g2 = (_g2 + 1);
HXDLIN( 750)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)3: {
HXLINE( 750)					{
HXLINE( 750)						 ::flixel::input::actions::FlxActionDigital action = this->_down;
HXDLIN( 750)						int state = 1;
HXDLIN( 750)						int _g = 0;
HXDLIN( 750)						while((_g < keys11->length)){
HXLINE( 750)							int key = keys11->__get(_g);
HXDLIN( 750)							_g = (_g + 1);
HXDLIN( 750)							action->addKey(key,state);
            						}
            					}
HXDLIN( 750)					{
HXLINE( 750)						 ::flixel::input::actions::FlxActionDigital action1 = this->_downP;
HXDLIN( 750)						int state1 = 2;
HXDLIN( 750)						int _g1 = 0;
HXDLIN( 750)						while((_g1 < keys11->length)){
HXLINE( 750)							int key = keys11->__get(_g1);
HXDLIN( 750)							_g1 = (_g1 + 1);
HXDLIN( 750)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 750)					{
HXLINE( 750)						 ::flixel::input::actions::FlxActionDigital action2 = this->_downR;
HXDLIN( 750)						int state2 = -1;
HXDLIN( 750)						int _g2 = 0;
HXDLIN( 750)						while((_g2 < keys11->length)){
HXLINE( 750)							int key = keys11->__get(_g2);
HXDLIN( 750)							_g2 = (_g2 + 1);
HXDLIN( 750)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)4: {
HXLINE( 750)					{
HXLINE( 750)						 ::flixel::input::actions::FlxActionDigital action = this->_noteup;
HXDLIN( 750)						int state = 1;
HXDLIN( 750)						int _g = 0;
HXDLIN( 750)						while((_g < keys11->length)){
HXLINE( 750)							int key = keys11->__get(_g);
HXDLIN( 750)							_g = (_g + 1);
HXDLIN( 750)							action->addKey(key,state);
            						}
            					}
HXDLIN( 750)					{
HXLINE( 750)						 ::flixel::input::actions::FlxActionDigital action1 = this->_noteupP;
HXDLIN( 750)						int state1 = 2;
HXDLIN( 750)						int _g1 = 0;
HXDLIN( 750)						while((_g1 < keys11->length)){
HXLINE( 750)							int key = keys11->__get(_g1);
HXDLIN( 750)							_g1 = (_g1 + 1);
HXDLIN( 750)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 750)					{
HXLINE( 750)						 ::flixel::input::actions::FlxActionDigital action2 = this->_noteupR;
HXDLIN( 750)						int state2 = -1;
HXDLIN( 750)						int _g2 = 0;
HXDLIN( 750)						while((_g2 < keys11->length)){
HXLINE( 750)							int key = keys11->__get(_g2);
HXDLIN( 750)							_g2 = (_g2 + 1);
HXDLIN( 750)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)5: {
HXLINE( 750)					{
HXLINE( 750)						 ::flixel::input::actions::FlxActionDigital action = this->_noteleft;
HXDLIN( 750)						int state = 1;
HXDLIN( 750)						int _g = 0;
HXDLIN( 750)						while((_g < keys11->length)){
HXLINE( 750)							int key = keys11->__get(_g);
HXDLIN( 750)							_g = (_g + 1);
HXDLIN( 750)							action->addKey(key,state);
            						}
            					}
HXDLIN( 750)					{
HXLINE( 750)						 ::flixel::input::actions::FlxActionDigital action1 = this->_noteleftP;
HXDLIN( 750)						int state1 = 2;
HXDLIN( 750)						int _g1 = 0;
HXDLIN( 750)						while((_g1 < keys11->length)){
HXLINE( 750)							int key = keys11->__get(_g1);
HXDLIN( 750)							_g1 = (_g1 + 1);
HXDLIN( 750)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 750)					{
HXLINE( 750)						 ::flixel::input::actions::FlxActionDigital action2 = this->_noteleftR;
HXDLIN( 750)						int state2 = -1;
HXDLIN( 750)						int _g2 = 0;
HXDLIN( 750)						while((_g2 < keys11->length)){
HXLINE( 750)							int key = keys11->__get(_g2);
HXDLIN( 750)							_g2 = (_g2 + 1);
HXDLIN( 750)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)6: {
HXLINE( 750)					{
HXLINE( 750)						 ::flixel::input::actions::FlxActionDigital action = this->_noteright;
HXDLIN( 750)						int state = 1;
HXDLIN( 750)						int _g = 0;
HXDLIN( 750)						while((_g < keys11->length)){
HXLINE( 750)							int key = keys11->__get(_g);
HXDLIN( 750)							_g = (_g + 1);
HXDLIN( 750)							action->addKey(key,state);
            						}
            					}
HXDLIN( 750)					{
HXLINE( 750)						 ::flixel::input::actions::FlxActionDigital action1 = this->_noterightP;
HXDLIN( 750)						int state1 = 2;
HXDLIN( 750)						int _g1 = 0;
HXDLIN( 750)						while((_g1 < keys11->length)){
HXLINE( 750)							int key = keys11->__get(_g1);
HXDLIN( 750)							_g1 = (_g1 + 1);
HXDLIN( 750)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 750)					{
HXLINE( 750)						 ::flixel::input::actions::FlxActionDigital action2 = this->_noterightR;
HXDLIN( 750)						int state2 = -1;
HXDLIN( 750)						int _g2 = 0;
HXDLIN( 750)						while((_g2 < keys11->length)){
HXLINE( 750)							int key = keys11->__get(_g2);
HXDLIN( 750)							_g2 = (_g2 + 1);
HXDLIN( 750)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)7: {
HXLINE( 750)					{
HXLINE( 750)						 ::flixel::input::actions::FlxActionDigital action = this->_notedown;
HXDLIN( 750)						int state = 1;
HXDLIN( 750)						int _g = 0;
HXDLIN( 750)						while((_g < keys11->length)){
HXLINE( 750)							int key = keys11->__get(_g);
HXDLIN( 750)							_g = (_g + 1);
HXDLIN( 750)							action->addKey(key,state);
            						}
            					}
HXDLIN( 750)					{
HXLINE( 750)						 ::flixel::input::actions::FlxActionDigital action1 = this->_notedownP;
HXDLIN( 750)						int state1 = 2;
HXDLIN( 750)						int _g1 = 0;
HXDLIN( 750)						while((_g1 < keys11->length)){
HXLINE( 750)							int key = keys11->__get(_g1);
HXDLIN( 750)							_g1 = (_g1 + 1);
HXDLIN( 750)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 750)					{
HXLINE( 750)						 ::flixel::input::actions::FlxActionDigital action2 = this->_notedownR;
HXDLIN( 750)						int state2 = -1;
HXDLIN( 750)						int _g2 = 0;
HXDLIN( 750)						while((_g2 < keys11->length)){
HXLINE( 750)							int key = keys11->__get(_g2);
HXDLIN( 750)							_g2 = (_g2 + 1);
HXDLIN( 750)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)8: {
HXLINE( 750)					 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 750)					int state = 2;
HXDLIN( 750)					int _g = 0;
HXDLIN( 750)					while((_g < keys11->length)){
HXLINE( 750)						int key = keys11->__get(_g);
HXDLIN( 750)						_g = (_g + 1);
HXDLIN( 750)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)9: {
HXLINE( 750)					 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 750)					int state = 2;
HXDLIN( 750)					int _g = 0;
HXDLIN( 750)					while((_g < keys11->length)){
HXLINE( 750)						int key = keys11->__get(_g);
HXDLIN( 750)						_g = (_g + 1);
HXDLIN( 750)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)10: {
HXLINE( 750)					 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 750)					int state = 2;
HXDLIN( 750)					int _g = 0;
HXDLIN( 750)					while((_g < keys11->length)){
HXLINE( 750)						int key = keys11->__get(_g);
HXDLIN( 750)						_g = (_g + 1);
HXDLIN( 750)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)11: {
HXLINE( 750)					 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 750)					int state = 2;
HXDLIN( 750)					int _g = 0;
HXDLIN( 750)					while((_g < keys11->length)){
HXLINE( 750)						int key = keys11->__get(_g);
HXDLIN( 750)						_g = (_g + 1);
HXDLIN( 750)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)12: {
HXLINE( 750)					 ::flixel::input::actions::FlxActionDigital action = this->_cheat;
HXDLIN( 750)					int state = 2;
HXDLIN( 750)					int _g = 0;
HXDLIN( 750)					while((_g < keys11->length)){
HXLINE( 750)						int key = keys11->__get(_g);
HXDLIN( 750)						_g = (_g + 1);
HXDLIN( 750)						action->addKey(key,state);
            					}
            				}
            				break;
            			}
            		}
HXLINE( 751)		{
HXLINE( 751)			::Array< int > keys12 = ::Array_obj< int >::fromData( _hx_array_data_116e4296_436,3);
HXDLIN( 751)			switch((int)(::Control_obj::ACCEPT_dyn()->_hx_getIndex())){
            				case (int)0: {
HXLINE( 751)					{
HXLINE( 751)						 ::flixel::input::actions::FlxActionDigital action = this->_up;
HXDLIN( 751)						int state = 1;
HXDLIN( 751)						int _g = 0;
HXDLIN( 751)						while((_g < keys12->length)){
HXLINE( 751)							int key = keys12->__get(_g);
HXDLIN( 751)							_g = (_g + 1);
HXDLIN( 751)							action->addKey(key,state);
            						}
            					}
HXDLIN( 751)					{
HXLINE( 751)						 ::flixel::input::actions::FlxActionDigital action1 = this->_upP;
HXDLIN( 751)						int state1 = 2;
HXDLIN( 751)						int _g1 = 0;
HXDLIN( 751)						while((_g1 < keys12->length)){
HXLINE( 751)							int key = keys12->__get(_g1);
HXDLIN( 751)							_g1 = (_g1 + 1);
HXDLIN( 751)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 751)					{
HXLINE( 751)						 ::flixel::input::actions::FlxActionDigital action2 = this->_upR;
HXDLIN( 751)						int state2 = -1;
HXDLIN( 751)						int _g2 = 0;
HXDLIN( 751)						while((_g2 < keys12->length)){
HXLINE( 751)							int key = keys12->__get(_g2);
HXDLIN( 751)							_g2 = (_g2 + 1);
HXDLIN( 751)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)1: {
HXLINE( 751)					{
HXLINE( 751)						 ::flixel::input::actions::FlxActionDigital action = this->_left;
HXDLIN( 751)						int state = 1;
HXDLIN( 751)						int _g = 0;
HXDLIN( 751)						while((_g < keys12->length)){
HXLINE( 751)							int key = keys12->__get(_g);
HXDLIN( 751)							_g = (_g + 1);
HXDLIN( 751)							action->addKey(key,state);
            						}
            					}
HXDLIN( 751)					{
HXLINE( 751)						 ::flixel::input::actions::FlxActionDigital action1 = this->_leftP;
HXDLIN( 751)						int state1 = 2;
HXDLIN( 751)						int _g1 = 0;
HXDLIN( 751)						while((_g1 < keys12->length)){
HXLINE( 751)							int key = keys12->__get(_g1);
HXDLIN( 751)							_g1 = (_g1 + 1);
HXDLIN( 751)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 751)					{
HXLINE( 751)						 ::flixel::input::actions::FlxActionDigital action2 = this->_leftR;
HXDLIN( 751)						int state2 = -1;
HXDLIN( 751)						int _g2 = 0;
HXDLIN( 751)						while((_g2 < keys12->length)){
HXLINE( 751)							int key = keys12->__get(_g2);
HXDLIN( 751)							_g2 = (_g2 + 1);
HXDLIN( 751)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)2: {
HXLINE( 751)					{
HXLINE( 751)						 ::flixel::input::actions::FlxActionDigital action = this->_right;
HXDLIN( 751)						int state = 1;
HXDLIN( 751)						int _g = 0;
HXDLIN( 751)						while((_g < keys12->length)){
HXLINE( 751)							int key = keys12->__get(_g);
HXDLIN( 751)							_g = (_g + 1);
HXDLIN( 751)							action->addKey(key,state);
            						}
            					}
HXDLIN( 751)					{
HXLINE( 751)						 ::flixel::input::actions::FlxActionDigital action1 = this->_rightP;
HXDLIN( 751)						int state1 = 2;
HXDLIN( 751)						int _g1 = 0;
HXDLIN( 751)						while((_g1 < keys12->length)){
HXLINE( 751)							int key = keys12->__get(_g1);
HXDLIN( 751)							_g1 = (_g1 + 1);
HXDLIN( 751)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 751)					{
HXLINE( 751)						 ::flixel::input::actions::FlxActionDigital action2 = this->_rightR;
HXDLIN( 751)						int state2 = -1;
HXDLIN( 751)						int _g2 = 0;
HXDLIN( 751)						while((_g2 < keys12->length)){
HXLINE( 751)							int key = keys12->__get(_g2);
HXDLIN( 751)							_g2 = (_g2 + 1);
HXDLIN( 751)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)3: {
HXLINE( 751)					{
HXLINE( 751)						 ::flixel::input::actions::FlxActionDigital action = this->_down;
HXDLIN( 751)						int state = 1;
HXDLIN( 751)						int _g = 0;
HXDLIN( 751)						while((_g < keys12->length)){
HXLINE( 751)							int key = keys12->__get(_g);
HXDLIN( 751)							_g = (_g + 1);
HXDLIN( 751)							action->addKey(key,state);
            						}
            					}
HXDLIN( 751)					{
HXLINE( 751)						 ::flixel::input::actions::FlxActionDigital action1 = this->_downP;
HXDLIN( 751)						int state1 = 2;
HXDLIN( 751)						int _g1 = 0;
HXDLIN( 751)						while((_g1 < keys12->length)){
HXLINE( 751)							int key = keys12->__get(_g1);
HXDLIN( 751)							_g1 = (_g1 + 1);
HXDLIN( 751)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 751)					{
HXLINE( 751)						 ::flixel::input::actions::FlxActionDigital action2 = this->_downR;
HXDLIN( 751)						int state2 = -1;
HXDLIN( 751)						int _g2 = 0;
HXDLIN( 751)						while((_g2 < keys12->length)){
HXLINE( 751)							int key = keys12->__get(_g2);
HXDLIN( 751)							_g2 = (_g2 + 1);
HXDLIN( 751)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)4: {
HXLINE( 751)					{
HXLINE( 751)						 ::flixel::input::actions::FlxActionDigital action = this->_noteup;
HXDLIN( 751)						int state = 1;
HXDLIN( 751)						int _g = 0;
HXDLIN( 751)						while((_g < keys12->length)){
HXLINE( 751)							int key = keys12->__get(_g);
HXDLIN( 751)							_g = (_g + 1);
HXDLIN( 751)							action->addKey(key,state);
            						}
            					}
HXDLIN( 751)					{
HXLINE( 751)						 ::flixel::input::actions::FlxActionDigital action1 = this->_noteupP;
HXDLIN( 751)						int state1 = 2;
HXDLIN( 751)						int _g1 = 0;
HXDLIN( 751)						while((_g1 < keys12->length)){
HXLINE( 751)							int key = keys12->__get(_g1);
HXDLIN( 751)							_g1 = (_g1 + 1);
HXDLIN( 751)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 751)					{
HXLINE( 751)						 ::flixel::input::actions::FlxActionDigital action2 = this->_noteupR;
HXDLIN( 751)						int state2 = -1;
HXDLIN( 751)						int _g2 = 0;
HXDLIN( 751)						while((_g2 < keys12->length)){
HXLINE( 751)							int key = keys12->__get(_g2);
HXDLIN( 751)							_g2 = (_g2 + 1);
HXDLIN( 751)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)5: {
HXLINE( 751)					{
HXLINE( 751)						 ::flixel::input::actions::FlxActionDigital action = this->_noteleft;
HXDLIN( 751)						int state = 1;
HXDLIN( 751)						int _g = 0;
HXDLIN( 751)						while((_g < keys12->length)){
HXLINE( 751)							int key = keys12->__get(_g);
HXDLIN( 751)							_g = (_g + 1);
HXDLIN( 751)							action->addKey(key,state);
            						}
            					}
HXDLIN( 751)					{
HXLINE( 751)						 ::flixel::input::actions::FlxActionDigital action1 = this->_noteleftP;
HXDLIN( 751)						int state1 = 2;
HXDLIN( 751)						int _g1 = 0;
HXDLIN( 751)						while((_g1 < keys12->length)){
HXLINE( 751)							int key = keys12->__get(_g1);
HXDLIN( 751)							_g1 = (_g1 + 1);
HXDLIN( 751)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 751)					{
HXLINE( 751)						 ::flixel::input::actions::FlxActionDigital action2 = this->_noteleftR;
HXDLIN( 751)						int state2 = -1;
HXDLIN( 751)						int _g2 = 0;
HXDLIN( 751)						while((_g2 < keys12->length)){
HXLINE( 751)							int key = keys12->__get(_g2);
HXDLIN( 751)							_g2 = (_g2 + 1);
HXDLIN( 751)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)6: {
HXLINE( 751)					{
HXLINE( 751)						 ::flixel::input::actions::FlxActionDigital action = this->_noteright;
HXDLIN( 751)						int state = 1;
HXDLIN( 751)						int _g = 0;
HXDLIN( 751)						while((_g < keys12->length)){
HXLINE( 751)							int key = keys12->__get(_g);
HXDLIN( 751)							_g = (_g + 1);
HXDLIN( 751)							action->addKey(key,state);
            						}
            					}
HXDLIN( 751)					{
HXLINE( 751)						 ::flixel::input::actions::FlxActionDigital action1 = this->_noterightP;
HXDLIN( 751)						int state1 = 2;
HXDLIN( 751)						int _g1 = 0;
HXDLIN( 751)						while((_g1 < keys12->length)){
HXLINE( 751)							int key = keys12->__get(_g1);
HXDLIN( 751)							_g1 = (_g1 + 1);
HXDLIN( 751)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 751)					{
HXLINE( 751)						 ::flixel::input::actions::FlxActionDigital action2 = this->_noterightR;
HXDLIN( 751)						int state2 = -1;
HXDLIN( 751)						int _g2 = 0;
HXDLIN( 751)						while((_g2 < keys12->length)){
HXLINE( 751)							int key = keys12->__get(_g2);
HXDLIN( 751)							_g2 = (_g2 + 1);
HXDLIN( 751)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)7: {
HXLINE( 751)					{
HXLINE( 751)						 ::flixel::input::actions::FlxActionDigital action = this->_notedown;
HXDLIN( 751)						int state = 1;
HXDLIN( 751)						int _g = 0;
HXDLIN( 751)						while((_g < keys12->length)){
HXLINE( 751)							int key = keys12->__get(_g);
HXDLIN( 751)							_g = (_g + 1);
HXDLIN( 751)							action->addKey(key,state);
            						}
            					}
HXDLIN( 751)					{
HXLINE( 751)						 ::flixel::input::actions::FlxActionDigital action1 = this->_notedownP;
HXDLIN( 751)						int state1 = 2;
HXDLIN( 751)						int _g1 = 0;
HXDLIN( 751)						while((_g1 < keys12->length)){
HXLINE( 751)							int key = keys12->__get(_g1);
HXDLIN( 751)							_g1 = (_g1 + 1);
HXDLIN( 751)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 751)					{
HXLINE( 751)						 ::flixel::input::actions::FlxActionDigital action2 = this->_notedownR;
HXDLIN( 751)						int state2 = -1;
HXDLIN( 751)						int _g2 = 0;
HXDLIN( 751)						while((_g2 < keys12->length)){
HXLINE( 751)							int key = keys12->__get(_g2);
HXDLIN( 751)							_g2 = (_g2 + 1);
HXDLIN( 751)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)8: {
HXLINE( 751)					 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 751)					int state = 2;
HXDLIN( 751)					int _g = 0;
HXDLIN( 751)					while((_g < keys12->length)){
HXLINE( 751)						int key = keys12->__get(_g);
HXDLIN( 751)						_g = (_g + 1);
HXDLIN( 751)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)9: {
HXLINE( 751)					 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 751)					int state = 2;
HXDLIN( 751)					int _g = 0;
HXDLIN( 751)					while((_g < keys12->length)){
HXLINE( 751)						int key = keys12->__get(_g);
HXDLIN( 751)						_g = (_g + 1);
HXDLIN( 751)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)10: {
HXLINE( 751)					 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 751)					int state = 2;
HXDLIN( 751)					int _g = 0;
HXDLIN( 751)					while((_g < keys12->length)){
HXLINE( 751)						int key = keys12->__get(_g);
HXDLIN( 751)						_g = (_g + 1);
HXDLIN( 751)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)11: {
HXLINE( 751)					 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 751)					int state = 2;
HXDLIN( 751)					int _g = 0;
HXDLIN( 751)					while((_g < keys12->length)){
HXLINE( 751)						int key = keys12->__get(_g);
HXDLIN( 751)						_g = (_g + 1);
HXDLIN( 751)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)12: {
HXLINE( 751)					 ::flixel::input::actions::FlxActionDigital action = this->_cheat;
HXDLIN( 751)					int state = 2;
HXDLIN( 751)					int _g = 0;
HXDLIN( 751)					while((_g < keys12->length)){
HXLINE( 751)						int key = keys12->__get(_g);
HXDLIN( 751)						_g = (_g + 1);
HXDLIN( 751)						action->addKey(key,state);
            					}
            				}
            				break;
            			}
            		}
HXLINE( 752)		{
HXLINE( 752)			::Array< int > keys13 = ::Array_obj< int >::fromData( _hx_array_data_116e4296_437,2);
HXDLIN( 752)			switch((int)(::Control_obj::BACK_dyn()->_hx_getIndex())){
            				case (int)0: {
HXLINE( 752)					{
HXLINE( 752)						 ::flixel::input::actions::FlxActionDigital action = this->_up;
HXDLIN( 752)						int state = 1;
HXDLIN( 752)						int _g = 0;
HXDLIN( 752)						while((_g < keys13->length)){
HXLINE( 752)							int key = keys13->__get(_g);
HXDLIN( 752)							_g = (_g + 1);
HXDLIN( 752)							action->addKey(key,state);
            						}
            					}
HXDLIN( 752)					{
HXLINE( 752)						 ::flixel::input::actions::FlxActionDigital action1 = this->_upP;
HXDLIN( 752)						int state1 = 2;
HXDLIN( 752)						int _g1 = 0;
HXDLIN( 752)						while((_g1 < keys13->length)){
HXLINE( 752)							int key = keys13->__get(_g1);
HXDLIN( 752)							_g1 = (_g1 + 1);
HXDLIN( 752)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 752)					{
HXLINE( 752)						 ::flixel::input::actions::FlxActionDigital action2 = this->_upR;
HXDLIN( 752)						int state2 = -1;
HXDLIN( 752)						int _g2 = 0;
HXDLIN( 752)						while((_g2 < keys13->length)){
HXLINE( 752)							int key = keys13->__get(_g2);
HXDLIN( 752)							_g2 = (_g2 + 1);
HXDLIN( 752)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)1: {
HXLINE( 752)					{
HXLINE( 752)						 ::flixel::input::actions::FlxActionDigital action = this->_left;
HXDLIN( 752)						int state = 1;
HXDLIN( 752)						int _g = 0;
HXDLIN( 752)						while((_g < keys13->length)){
HXLINE( 752)							int key = keys13->__get(_g);
HXDLIN( 752)							_g = (_g + 1);
HXDLIN( 752)							action->addKey(key,state);
            						}
            					}
HXDLIN( 752)					{
HXLINE( 752)						 ::flixel::input::actions::FlxActionDigital action1 = this->_leftP;
HXDLIN( 752)						int state1 = 2;
HXDLIN( 752)						int _g1 = 0;
HXDLIN( 752)						while((_g1 < keys13->length)){
HXLINE( 752)							int key = keys13->__get(_g1);
HXDLIN( 752)							_g1 = (_g1 + 1);
HXDLIN( 752)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 752)					{
HXLINE( 752)						 ::flixel::input::actions::FlxActionDigital action2 = this->_leftR;
HXDLIN( 752)						int state2 = -1;
HXDLIN( 752)						int _g2 = 0;
HXDLIN( 752)						while((_g2 < keys13->length)){
HXLINE( 752)							int key = keys13->__get(_g2);
HXDLIN( 752)							_g2 = (_g2 + 1);
HXDLIN( 752)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)2: {
HXLINE( 752)					{
HXLINE( 752)						 ::flixel::input::actions::FlxActionDigital action = this->_right;
HXDLIN( 752)						int state = 1;
HXDLIN( 752)						int _g = 0;
HXDLIN( 752)						while((_g < keys13->length)){
HXLINE( 752)							int key = keys13->__get(_g);
HXDLIN( 752)							_g = (_g + 1);
HXDLIN( 752)							action->addKey(key,state);
            						}
            					}
HXDLIN( 752)					{
HXLINE( 752)						 ::flixel::input::actions::FlxActionDigital action1 = this->_rightP;
HXDLIN( 752)						int state1 = 2;
HXDLIN( 752)						int _g1 = 0;
HXDLIN( 752)						while((_g1 < keys13->length)){
HXLINE( 752)							int key = keys13->__get(_g1);
HXDLIN( 752)							_g1 = (_g1 + 1);
HXDLIN( 752)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 752)					{
HXLINE( 752)						 ::flixel::input::actions::FlxActionDigital action2 = this->_rightR;
HXDLIN( 752)						int state2 = -1;
HXDLIN( 752)						int _g2 = 0;
HXDLIN( 752)						while((_g2 < keys13->length)){
HXLINE( 752)							int key = keys13->__get(_g2);
HXDLIN( 752)							_g2 = (_g2 + 1);
HXDLIN( 752)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)3: {
HXLINE( 752)					{
HXLINE( 752)						 ::flixel::input::actions::FlxActionDigital action = this->_down;
HXDLIN( 752)						int state = 1;
HXDLIN( 752)						int _g = 0;
HXDLIN( 752)						while((_g < keys13->length)){
HXLINE( 752)							int key = keys13->__get(_g);
HXDLIN( 752)							_g = (_g + 1);
HXDLIN( 752)							action->addKey(key,state);
            						}
            					}
HXDLIN( 752)					{
HXLINE( 752)						 ::flixel::input::actions::FlxActionDigital action1 = this->_downP;
HXDLIN( 752)						int state1 = 2;
HXDLIN( 752)						int _g1 = 0;
HXDLIN( 752)						while((_g1 < keys13->length)){
HXLINE( 752)							int key = keys13->__get(_g1);
HXDLIN( 752)							_g1 = (_g1 + 1);
HXDLIN( 752)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 752)					{
HXLINE( 752)						 ::flixel::input::actions::FlxActionDigital action2 = this->_downR;
HXDLIN( 752)						int state2 = -1;
HXDLIN( 752)						int _g2 = 0;
HXDLIN( 752)						while((_g2 < keys13->length)){
HXLINE( 752)							int key = keys13->__get(_g2);
HXDLIN( 752)							_g2 = (_g2 + 1);
HXDLIN( 752)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)4: {
HXLINE( 752)					{
HXLINE( 752)						 ::flixel::input::actions::FlxActionDigital action = this->_noteup;
HXDLIN( 752)						int state = 1;
HXDLIN( 752)						int _g = 0;
HXDLIN( 752)						while((_g < keys13->length)){
HXLINE( 752)							int key = keys13->__get(_g);
HXDLIN( 752)							_g = (_g + 1);
HXDLIN( 752)							action->addKey(key,state);
            						}
            					}
HXDLIN( 752)					{
HXLINE( 752)						 ::flixel::input::actions::FlxActionDigital action1 = this->_noteupP;
HXDLIN( 752)						int state1 = 2;
HXDLIN( 752)						int _g1 = 0;
HXDLIN( 752)						while((_g1 < keys13->length)){
HXLINE( 752)							int key = keys13->__get(_g1);
HXDLIN( 752)							_g1 = (_g1 + 1);
HXDLIN( 752)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 752)					{
HXLINE( 752)						 ::flixel::input::actions::FlxActionDigital action2 = this->_noteupR;
HXDLIN( 752)						int state2 = -1;
HXDLIN( 752)						int _g2 = 0;
HXDLIN( 752)						while((_g2 < keys13->length)){
HXLINE( 752)							int key = keys13->__get(_g2);
HXDLIN( 752)							_g2 = (_g2 + 1);
HXDLIN( 752)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)5: {
HXLINE( 752)					{
HXLINE( 752)						 ::flixel::input::actions::FlxActionDigital action = this->_noteleft;
HXDLIN( 752)						int state = 1;
HXDLIN( 752)						int _g = 0;
HXDLIN( 752)						while((_g < keys13->length)){
HXLINE( 752)							int key = keys13->__get(_g);
HXDLIN( 752)							_g = (_g + 1);
HXDLIN( 752)							action->addKey(key,state);
            						}
            					}
HXDLIN( 752)					{
HXLINE( 752)						 ::flixel::input::actions::FlxActionDigital action1 = this->_noteleftP;
HXDLIN( 752)						int state1 = 2;
HXDLIN( 752)						int _g1 = 0;
HXDLIN( 752)						while((_g1 < keys13->length)){
HXLINE( 752)							int key = keys13->__get(_g1);
HXDLIN( 752)							_g1 = (_g1 + 1);
HXDLIN( 752)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 752)					{
HXLINE( 752)						 ::flixel::input::actions::FlxActionDigital action2 = this->_noteleftR;
HXDLIN( 752)						int state2 = -1;
HXDLIN( 752)						int _g2 = 0;
HXDLIN( 752)						while((_g2 < keys13->length)){
HXLINE( 752)							int key = keys13->__get(_g2);
HXDLIN( 752)							_g2 = (_g2 + 1);
HXDLIN( 752)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)6: {
HXLINE( 752)					{
HXLINE( 752)						 ::flixel::input::actions::FlxActionDigital action = this->_noteright;
HXDLIN( 752)						int state = 1;
HXDLIN( 752)						int _g = 0;
HXDLIN( 752)						while((_g < keys13->length)){
HXLINE( 752)							int key = keys13->__get(_g);
HXDLIN( 752)							_g = (_g + 1);
HXDLIN( 752)							action->addKey(key,state);
            						}
            					}
HXDLIN( 752)					{
HXLINE( 752)						 ::flixel::input::actions::FlxActionDigital action1 = this->_noterightP;
HXDLIN( 752)						int state1 = 2;
HXDLIN( 752)						int _g1 = 0;
HXDLIN( 752)						while((_g1 < keys13->length)){
HXLINE( 752)							int key = keys13->__get(_g1);
HXDLIN( 752)							_g1 = (_g1 + 1);
HXDLIN( 752)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 752)					{
HXLINE( 752)						 ::flixel::input::actions::FlxActionDigital action2 = this->_noterightR;
HXDLIN( 752)						int state2 = -1;
HXDLIN( 752)						int _g2 = 0;
HXDLIN( 752)						while((_g2 < keys13->length)){
HXLINE( 752)							int key = keys13->__get(_g2);
HXDLIN( 752)							_g2 = (_g2 + 1);
HXDLIN( 752)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)7: {
HXLINE( 752)					{
HXLINE( 752)						 ::flixel::input::actions::FlxActionDigital action = this->_notedown;
HXDLIN( 752)						int state = 1;
HXDLIN( 752)						int _g = 0;
HXDLIN( 752)						while((_g < keys13->length)){
HXLINE( 752)							int key = keys13->__get(_g);
HXDLIN( 752)							_g = (_g + 1);
HXDLIN( 752)							action->addKey(key,state);
            						}
            					}
HXDLIN( 752)					{
HXLINE( 752)						 ::flixel::input::actions::FlxActionDigital action1 = this->_notedownP;
HXDLIN( 752)						int state1 = 2;
HXDLIN( 752)						int _g1 = 0;
HXDLIN( 752)						while((_g1 < keys13->length)){
HXLINE( 752)							int key = keys13->__get(_g1);
HXDLIN( 752)							_g1 = (_g1 + 1);
HXDLIN( 752)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 752)					{
HXLINE( 752)						 ::flixel::input::actions::FlxActionDigital action2 = this->_notedownR;
HXDLIN( 752)						int state2 = -1;
HXDLIN( 752)						int _g2 = 0;
HXDLIN( 752)						while((_g2 < keys13->length)){
HXLINE( 752)							int key = keys13->__get(_g2);
HXDLIN( 752)							_g2 = (_g2 + 1);
HXDLIN( 752)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)8: {
HXLINE( 752)					 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 752)					int state = 2;
HXDLIN( 752)					int _g = 0;
HXDLIN( 752)					while((_g < keys13->length)){
HXLINE( 752)						int key = keys13->__get(_g);
HXDLIN( 752)						_g = (_g + 1);
HXDLIN( 752)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)9: {
HXLINE( 752)					 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 752)					int state = 2;
HXDLIN( 752)					int _g = 0;
HXDLIN( 752)					while((_g < keys13->length)){
HXLINE( 752)						int key = keys13->__get(_g);
HXDLIN( 752)						_g = (_g + 1);
HXDLIN( 752)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)10: {
HXLINE( 752)					 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 752)					int state = 2;
HXDLIN( 752)					int _g = 0;
HXDLIN( 752)					while((_g < keys13->length)){
HXLINE( 752)						int key = keys13->__get(_g);
HXDLIN( 752)						_g = (_g + 1);
HXDLIN( 752)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)11: {
HXLINE( 752)					 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 752)					int state = 2;
HXDLIN( 752)					int _g = 0;
HXDLIN( 752)					while((_g < keys13->length)){
HXLINE( 752)						int key = keys13->__get(_g);
HXDLIN( 752)						_g = (_g + 1);
HXDLIN( 752)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)12: {
HXLINE( 752)					 ::flixel::input::actions::FlxActionDigital action = this->_cheat;
HXDLIN( 752)					int state = 2;
HXDLIN( 752)					int _g = 0;
HXDLIN( 752)					while((_g < keys13->length)){
HXLINE( 752)						int key = keys13->__get(_g);
HXDLIN( 752)						_g = (_g + 1);
HXDLIN( 752)						action->addKey(key,state);
            					}
            				}
            				break;
            			}
            		}
HXLINE( 753)		{
HXLINE( 753)			::Array< int > keys14 = ::Array_obj< int >::fromData( _hx_array_data_116e4296_438,2);
HXDLIN( 753)			switch((int)(::Control_obj::PAUSE_dyn()->_hx_getIndex())){
            				case (int)0: {
HXLINE( 753)					{
HXLINE( 753)						 ::flixel::input::actions::FlxActionDigital action = this->_up;
HXDLIN( 753)						int state = 1;
HXDLIN( 753)						int _g = 0;
HXDLIN( 753)						while((_g < keys14->length)){
HXLINE( 753)							int key = keys14->__get(_g);
HXDLIN( 753)							_g = (_g + 1);
HXDLIN( 753)							action->addKey(key,state);
            						}
            					}
HXDLIN( 753)					{
HXLINE( 753)						 ::flixel::input::actions::FlxActionDigital action1 = this->_upP;
HXDLIN( 753)						int state1 = 2;
HXDLIN( 753)						int _g1 = 0;
HXDLIN( 753)						while((_g1 < keys14->length)){
HXLINE( 753)							int key = keys14->__get(_g1);
HXDLIN( 753)							_g1 = (_g1 + 1);
HXDLIN( 753)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 753)					{
HXLINE( 753)						 ::flixel::input::actions::FlxActionDigital action2 = this->_upR;
HXDLIN( 753)						int state2 = -1;
HXDLIN( 753)						int _g2 = 0;
HXDLIN( 753)						while((_g2 < keys14->length)){
HXLINE( 753)							int key = keys14->__get(_g2);
HXDLIN( 753)							_g2 = (_g2 + 1);
HXDLIN( 753)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)1: {
HXLINE( 753)					{
HXLINE( 753)						 ::flixel::input::actions::FlxActionDigital action = this->_left;
HXDLIN( 753)						int state = 1;
HXDLIN( 753)						int _g = 0;
HXDLIN( 753)						while((_g < keys14->length)){
HXLINE( 753)							int key = keys14->__get(_g);
HXDLIN( 753)							_g = (_g + 1);
HXDLIN( 753)							action->addKey(key,state);
            						}
            					}
HXDLIN( 753)					{
HXLINE( 753)						 ::flixel::input::actions::FlxActionDigital action1 = this->_leftP;
HXDLIN( 753)						int state1 = 2;
HXDLIN( 753)						int _g1 = 0;
HXDLIN( 753)						while((_g1 < keys14->length)){
HXLINE( 753)							int key = keys14->__get(_g1);
HXDLIN( 753)							_g1 = (_g1 + 1);
HXDLIN( 753)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 753)					{
HXLINE( 753)						 ::flixel::input::actions::FlxActionDigital action2 = this->_leftR;
HXDLIN( 753)						int state2 = -1;
HXDLIN( 753)						int _g2 = 0;
HXDLIN( 753)						while((_g2 < keys14->length)){
HXLINE( 753)							int key = keys14->__get(_g2);
HXDLIN( 753)							_g2 = (_g2 + 1);
HXDLIN( 753)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)2: {
HXLINE( 753)					{
HXLINE( 753)						 ::flixel::input::actions::FlxActionDigital action = this->_right;
HXDLIN( 753)						int state = 1;
HXDLIN( 753)						int _g = 0;
HXDLIN( 753)						while((_g < keys14->length)){
HXLINE( 753)							int key = keys14->__get(_g);
HXDLIN( 753)							_g = (_g + 1);
HXDLIN( 753)							action->addKey(key,state);
            						}
            					}
HXDLIN( 753)					{
HXLINE( 753)						 ::flixel::input::actions::FlxActionDigital action1 = this->_rightP;
HXDLIN( 753)						int state1 = 2;
HXDLIN( 753)						int _g1 = 0;
HXDLIN( 753)						while((_g1 < keys14->length)){
HXLINE( 753)							int key = keys14->__get(_g1);
HXDLIN( 753)							_g1 = (_g1 + 1);
HXDLIN( 753)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 753)					{
HXLINE( 753)						 ::flixel::input::actions::FlxActionDigital action2 = this->_rightR;
HXDLIN( 753)						int state2 = -1;
HXDLIN( 753)						int _g2 = 0;
HXDLIN( 753)						while((_g2 < keys14->length)){
HXLINE( 753)							int key = keys14->__get(_g2);
HXDLIN( 753)							_g2 = (_g2 + 1);
HXDLIN( 753)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)3: {
HXLINE( 753)					{
HXLINE( 753)						 ::flixel::input::actions::FlxActionDigital action = this->_down;
HXDLIN( 753)						int state = 1;
HXDLIN( 753)						int _g = 0;
HXDLIN( 753)						while((_g < keys14->length)){
HXLINE( 753)							int key = keys14->__get(_g);
HXDLIN( 753)							_g = (_g + 1);
HXDLIN( 753)							action->addKey(key,state);
            						}
            					}
HXDLIN( 753)					{
HXLINE( 753)						 ::flixel::input::actions::FlxActionDigital action1 = this->_downP;
HXDLIN( 753)						int state1 = 2;
HXDLIN( 753)						int _g1 = 0;
HXDLIN( 753)						while((_g1 < keys14->length)){
HXLINE( 753)							int key = keys14->__get(_g1);
HXDLIN( 753)							_g1 = (_g1 + 1);
HXDLIN( 753)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 753)					{
HXLINE( 753)						 ::flixel::input::actions::FlxActionDigital action2 = this->_downR;
HXDLIN( 753)						int state2 = -1;
HXDLIN( 753)						int _g2 = 0;
HXDLIN( 753)						while((_g2 < keys14->length)){
HXLINE( 753)							int key = keys14->__get(_g2);
HXDLIN( 753)							_g2 = (_g2 + 1);
HXDLIN( 753)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)4: {
HXLINE( 753)					{
HXLINE( 753)						 ::flixel::input::actions::FlxActionDigital action = this->_noteup;
HXDLIN( 753)						int state = 1;
HXDLIN( 753)						int _g = 0;
HXDLIN( 753)						while((_g < keys14->length)){
HXLINE( 753)							int key = keys14->__get(_g);
HXDLIN( 753)							_g = (_g + 1);
HXDLIN( 753)							action->addKey(key,state);
            						}
            					}
HXDLIN( 753)					{
HXLINE( 753)						 ::flixel::input::actions::FlxActionDigital action1 = this->_noteupP;
HXDLIN( 753)						int state1 = 2;
HXDLIN( 753)						int _g1 = 0;
HXDLIN( 753)						while((_g1 < keys14->length)){
HXLINE( 753)							int key = keys14->__get(_g1);
HXDLIN( 753)							_g1 = (_g1 + 1);
HXDLIN( 753)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 753)					{
HXLINE( 753)						 ::flixel::input::actions::FlxActionDigital action2 = this->_noteupR;
HXDLIN( 753)						int state2 = -1;
HXDLIN( 753)						int _g2 = 0;
HXDLIN( 753)						while((_g2 < keys14->length)){
HXLINE( 753)							int key = keys14->__get(_g2);
HXDLIN( 753)							_g2 = (_g2 + 1);
HXDLIN( 753)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)5: {
HXLINE( 753)					{
HXLINE( 753)						 ::flixel::input::actions::FlxActionDigital action = this->_noteleft;
HXDLIN( 753)						int state = 1;
HXDLIN( 753)						int _g = 0;
HXDLIN( 753)						while((_g < keys14->length)){
HXLINE( 753)							int key = keys14->__get(_g);
HXDLIN( 753)							_g = (_g + 1);
HXDLIN( 753)							action->addKey(key,state);
            						}
            					}
HXDLIN( 753)					{
HXLINE( 753)						 ::flixel::input::actions::FlxActionDigital action1 = this->_noteleftP;
HXDLIN( 753)						int state1 = 2;
HXDLIN( 753)						int _g1 = 0;
HXDLIN( 753)						while((_g1 < keys14->length)){
HXLINE( 753)							int key = keys14->__get(_g1);
HXDLIN( 753)							_g1 = (_g1 + 1);
HXDLIN( 753)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 753)					{
HXLINE( 753)						 ::flixel::input::actions::FlxActionDigital action2 = this->_noteleftR;
HXDLIN( 753)						int state2 = -1;
HXDLIN( 753)						int _g2 = 0;
HXDLIN( 753)						while((_g2 < keys14->length)){
HXLINE( 753)							int key = keys14->__get(_g2);
HXDLIN( 753)							_g2 = (_g2 + 1);
HXDLIN( 753)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)6: {
HXLINE( 753)					{
HXLINE( 753)						 ::flixel::input::actions::FlxActionDigital action = this->_noteright;
HXDLIN( 753)						int state = 1;
HXDLIN( 753)						int _g = 0;
HXDLIN( 753)						while((_g < keys14->length)){
HXLINE( 753)							int key = keys14->__get(_g);
HXDLIN( 753)							_g = (_g + 1);
HXDLIN( 753)							action->addKey(key,state);
            						}
            					}
HXDLIN( 753)					{
HXLINE( 753)						 ::flixel::input::actions::FlxActionDigital action1 = this->_noterightP;
HXDLIN( 753)						int state1 = 2;
HXDLIN( 753)						int _g1 = 0;
HXDLIN( 753)						while((_g1 < keys14->length)){
HXLINE( 753)							int key = keys14->__get(_g1);
HXDLIN( 753)							_g1 = (_g1 + 1);
HXDLIN( 753)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 753)					{
HXLINE( 753)						 ::flixel::input::actions::FlxActionDigital action2 = this->_noterightR;
HXDLIN( 753)						int state2 = -1;
HXDLIN( 753)						int _g2 = 0;
HXDLIN( 753)						while((_g2 < keys14->length)){
HXLINE( 753)							int key = keys14->__get(_g2);
HXDLIN( 753)							_g2 = (_g2 + 1);
HXDLIN( 753)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)7: {
HXLINE( 753)					{
HXLINE( 753)						 ::flixel::input::actions::FlxActionDigital action = this->_notedown;
HXDLIN( 753)						int state = 1;
HXDLIN( 753)						int _g = 0;
HXDLIN( 753)						while((_g < keys14->length)){
HXLINE( 753)							int key = keys14->__get(_g);
HXDLIN( 753)							_g = (_g + 1);
HXDLIN( 753)							action->addKey(key,state);
            						}
            					}
HXDLIN( 753)					{
HXLINE( 753)						 ::flixel::input::actions::FlxActionDigital action1 = this->_notedownP;
HXDLIN( 753)						int state1 = 2;
HXDLIN( 753)						int _g1 = 0;
HXDLIN( 753)						while((_g1 < keys14->length)){
HXLINE( 753)							int key = keys14->__get(_g1);
HXDLIN( 753)							_g1 = (_g1 + 1);
HXDLIN( 753)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 753)					{
HXLINE( 753)						 ::flixel::input::actions::FlxActionDigital action2 = this->_notedownR;
HXDLIN( 753)						int state2 = -1;
HXDLIN( 753)						int _g2 = 0;
HXDLIN( 753)						while((_g2 < keys14->length)){
HXLINE( 753)							int key = keys14->__get(_g2);
HXDLIN( 753)							_g2 = (_g2 + 1);
HXDLIN( 753)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)8: {
HXLINE( 753)					 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 753)					int state = 2;
HXDLIN( 753)					int _g = 0;
HXDLIN( 753)					while((_g < keys14->length)){
HXLINE( 753)						int key = keys14->__get(_g);
HXDLIN( 753)						_g = (_g + 1);
HXDLIN( 753)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)9: {
HXLINE( 753)					 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 753)					int state = 2;
HXDLIN( 753)					int _g = 0;
HXDLIN( 753)					while((_g < keys14->length)){
HXLINE( 753)						int key = keys14->__get(_g);
HXDLIN( 753)						_g = (_g + 1);
HXDLIN( 753)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)10: {
HXLINE( 753)					 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 753)					int state = 2;
HXDLIN( 753)					int _g = 0;
HXDLIN( 753)					while((_g < keys14->length)){
HXLINE( 753)						int key = keys14->__get(_g);
HXDLIN( 753)						_g = (_g + 1);
HXDLIN( 753)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)11: {
HXLINE( 753)					 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 753)					int state = 2;
HXDLIN( 753)					int _g = 0;
HXDLIN( 753)					while((_g < keys14->length)){
HXLINE( 753)						int key = keys14->__get(_g);
HXDLIN( 753)						_g = (_g + 1);
HXDLIN( 753)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)12: {
HXLINE( 753)					 ::flixel::input::actions::FlxActionDigital action = this->_cheat;
HXDLIN( 753)					int state = 2;
HXDLIN( 753)					int _g = 0;
HXDLIN( 753)					while((_g < keys14->length)){
HXLINE( 753)						int key = keys14->__get(_g);
HXDLIN( 753)						_g = (_g + 1);
HXDLIN( 753)						action->addKey(key,state);
            					}
            				}
            				break;
            			}
            		}
HXLINE( 754)		{
HXLINE( 754)			::String s8 = ( (::String)(::flixel::FlxG_obj::save->data->__Field(HX_("killBind",7b,28,25,80),::hx::paccDynamic)) );
HXDLIN( 754)			s8 = s8.toUpperCase();
HXDLIN( 754)			int keys15;
HXDLIN( 754)			if (::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::fromStringMap->exists(s8)) {
HXLINE( 754)				keys15 = ::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::fromStringMap->get_int(s8);
            			}
            			else {
HXLINE( 754)				keys15 = -1;
            			}
HXDLIN( 754)			::Array< int > keys16 = ::Array_obj< int >::__new(1)->init(0,keys15);
HXDLIN( 754)			switch((int)(::Control_obj::RESET_dyn()->_hx_getIndex())){
            				case (int)0: {
HXLINE( 754)					{
HXLINE( 754)						 ::flixel::input::actions::FlxActionDigital action = this->_up;
HXDLIN( 754)						int state = 1;
HXDLIN( 754)						int _g = 0;
HXDLIN( 754)						while((_g < keys16->length)){
HXLINE( 754)							int key = keys16->__get(_g);
HXDLIN( 754)							_g = (_g + 1);
HXDLIN( 754)							action->addKey(key,state);
            						}
            					}
HXDLIN( 754)					{
HXLINE( 754)						 ::flixel::input::actions::FlxActionDigital action1 = this->_upP;
HXDLIN( 754)						int state1 = 2;
HXDLIN( 754)						int _g1 = 0;
HXDLIN( 754)						while((_g1 < keys16->length)){
HXLINE( 754)							int key = keys16->__get(_g1);
HXDLIN( 754)							_g1 = (_g1 + 1);
HXDLIN( 754)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 754)					{
HXLINE( 754)						 ::flixel::input::actions::FlxActionDigital action2 = this->_upR;
HXDLIN( 754)						int state2 = -1;
HXDLIN( 754)						int _g2 = 0;
HXDLIN( 754)						while((_g2 < keys16->length)){
HXLINE( 754)							int key = keys16->__get(_g2);
HXDLIN( 754)							_g2 = (_g2 + 1);
HXDLIN( 754)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)1: {
HXLINE( 754)					{
HXLINE( 754)						 ::flixel::input::actions::FlxActionDigital action = this->_left;
HXDLIN( 754)						int state = 1;
HXDLIN( 754)						int _g = 0;
HXDLIN( 754)						while((_g < keys16->length)){
HXLINE( 754)							int key = keys16->__get(_g);
HXDLIN( 754)							_g = (_g + 1);
HXDLIN( 754)							action->addKey(key,state);
            						}
            					}
HXDLIN( 754)					{
HXLINE( 754)						 ::flixel::input::actions::FlxActionDigital action1 = this->_leftP;
HXDLIN( 754)						int state1 = 2;
HXDLIN( 754)						int _g1 = 0;
HXDLIN( 754)						while((_g1 < keys16->length)){
HXLINE( 754)							int key = keys16->__get(_g1);
HXDLIN( 754)							_g1 = (_g1 + 1);
HXDLIN( 754)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 754)					{
HXLINE( 754)						 ::flixel::input::actions::FlxActionDigital action2 = this->_leftR;
HXDLIN( 754)						int state2 = -1;
HXDLIN( 754)						int _g2 = 0;
HXDLIN( 754)						while((_g2 < keys16->length)){
HXLINE( 754)							int key = keys16->__get(_g2);
HXDLIN( 754)							_g2 = (_g2 + 1);
HXDLIN( 754)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)2: {
HXLINE( 754)					{
HXLINE( 754)						 ::flixel::input::actions::FlxActionDigital action = this->_right;
HXDLIN( 754)						int state = 1;
HXDLIN( 754)						int _g = 0;
HXDLIN( 754)						while((_g < keys16->length)){
HXLINE( 754)							int key = keys16->__get(_g);
HXDLIN( 754)							_g = (_g + 1);
HXDLIN( 754)							action->addKey(key,state);
            						}
            					}
HXDLIN( 754)					{
HXLINE( 754)						 ::flixel::input::actions::FlxActionDigital action1 = this->_rightP;
HXDLIN( 754)						int state1 = 2;
HXDLIN( 754)						int _g1 = 0;
HXDLIN( 754)						while((_g1 < keys16->length)){
HXLINE( 754)							int key = keys16->__get(_g1);
HXDLIN( 754)							_g1 = (_g1 + 1);
HXDLIN( 754)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 754)					{
HXLINE( 754)						 ::flixel::input::actions::FlxActionDigital action2 = this->_rightR;
HXDLIN( 754)						int state2 = -1;
HXDLIN( 754)						int _g2 = 0;
HXDLIN( 754)						while((_g2 < keys16->length)){
HXLINE( 754)							int key = keys16->__get(_g2);
HXDLIN( 754)							_g2 = (_g2 + 1);
HXDLIN( 754)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)3: {
HXLINE( 754)					{
HXLINE( 754)						 ::flixel::input::actions::FlxActionDigital action = this->_down;
HXDLIN( 754)						int state = 1;
HXDLIN( 754)						int _g = 0;
HXDLIN( 754)						while((_g < keys16->length)){
HXLINE( 754)							int key = keys16->__get(_g);
HXDLIN( 754)							_g = (_g + 1);
HXDLIN( 754)							action->addKey(key,state);
            						}
            					}
HXDLIN( 754)					{
HXLINE( 754)						 ::flixel::input::actions::FlxActionDigital action1 = this->_downP;
HXDLIN( 754)						int state1 = 2;
HXDLIN( 754)						int _g1 = 0;
HXDLIN( 754)						while((_g1 < keys16->length)){
HXLINE( 754)							int key = keys16->__get(_g1);
HXDLIN( 754)							_g1 = (_g1 + 1);
HXDLIN( 754)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 754)					{
HXLINE( 754)						 ::flixel::input::actions::FlxActionDigital action2 = this->_downR;
HXDLIN( 754)						int state2 = -1;
HXDLIN( 754)						int _g2 = 0;
HXDLIN( 754)						while((_g2 < keys16->length)){
HXLINE( 754)							int key = keys16->__get(_g2);
HXDLIN( 754)							_g2 = (_g2 + 1);
HXDLIN( 754)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)4: {
HXLINE( 754)					{
HXLINE( 754)						 ::flixel::input::actions::FlxActionDigital action = this->_noteup;
HXDLIN( 754)						int state = 1;
HXDLIN( 754)						int _g = 0;
HXDLIN( 754)						while((_g < keys16->length)){
HXLINE( 754)							int key = keys16->__get(_g);
HXDLIN( 754)							_g = (_g + 1);
HXDLIN( 754)							action->addKey(key,state);
            						}
            					}
HXDLIN( 754)					{
HXLINE( 754)						 ::flixel::input::actions::FlxActionDigital action1 = this->_noteupP;
HXDLIN( 754)						int state1 = 2;
HXDLIN( 754)						int _g1 = 0;
HXDLIN( 754)						while((_g1 < keys16->length)){
HXLINE( 754)							int key = keys16->__get(_g1);
HXDLIN( 754)							_g1 = (_g1 + 1);
HXDLIN( 754)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 754)					{
HXLINE( 754)						 ::flixel::input::actions::FlxActionDigital action2 = this->_noteupR;
HXDLIN( 754)						int state2 = -1;
HXDLIN( 754)						int _g2 = 0;
HXDLIN( 754)						while((_g2 < keys16->length)){
HXLINE( 754)							int key = keys16->__get(_g2);
HXDLIN( 754)							_g2 = (_g2 + 1);
HXDLIN( 754)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)5: {
HXLINE( 754)					{
HXLINE( 754)						 ::flixel::input::actions::FlxActionDigital action = this->_noteleft;
HXDLIN( 754)						int state = 1;
HXDLIN( 754)						int _g = 0;
HXDLIN( 754)						while((_g < keys16->length)){
HXLINE( 754)							int key = keys16->__get(_g);
HXDLIN( 754)							_g = (_g + 1);
HXDLIN( 754)							action->addKey(key,state);
            						}
            					}
HXDLIN( 754)					{
HXLINE( 754)						 ::flixel::input::actions::FlxActionDigital action1 = this->_noteleftP;
HXDLIN( 754)						int state1 = 2;
HXDLIN( 754)						int _g1 = 0;
HXDLIN( 754)						while((_g1 < keys16->length)){
HXLINE( 754)							int key = keys16->__get(_g1);
HXDLIN( 754)							_g1 = (_g1 + 1);
HXDLIN( 754)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 754)					{
HXLINE( 754)						 ::flixel::input::actions::FlxActionDigital action2 = this->_noteleftR;
HXDLIN( 754)						int state2 = -1;
HXDLIN( 754)						int _g2 = 0;
HXDLIN( 754)						while((_g2 < keys16->length)){
HXLINE( 754)							int key = keys16->__get(_g2);
HXDLIN( 754)							_g2 = (_g2 + 1);
HXDLIN( 754)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)6: {
HXLINE( 754)					{
HXLINE( 754)						 ::flixel::input::actions::FlxActionDigital action = this->_noteright;
HXDLIN( 754)						int state = 1;
HXDLIN( 754)						int _g = 0;
HXDLIN( 754)						while((_g < keys16->length)){
HXLINE( 754)							int key = keys16->__get(_g);
HXDLIN( 754)							_g = (_g + 1);
HXDLIN( 754)							action->addKey(key,state);
            						}
            					}
HXDLIN( 754)					{
HXLINE( 754)						 ::flixel::input::actions::FlxActionDigital action1 = this->_noterightP;
HXDLIN( 754)						int state1 = 2;
HXDLIN( 754)						int _g1 = 0;
HXDLIN( 754)						while((_g1 < keys16->length)){
HXLINE( 754)							int key = keys16->__get(_g1);
HXDLIN( 754)							_g1 = (_g1 + 1);
HXDLIN( 754)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 754)					{
HXLINE( 754)						 ::flixel::input::actions::FlxActionDigital action2 = this->_noterightR;
HXDLIN( 754)						int state2 = -1;
HXDLIN( 754)						int _g2 = 0;
HXDLIN( 754)						while((_g2 < keys16->length)){
HXLINE( 754)							int key = keys16->__get(_g2);
HXDLIN( 754)							_g2 = (_g2 + 1);
HXDLIN( 754)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)7: {
HXLINE( 754)					{
HXLINE( 754)						 ::flixel::input::actions::FlxActionDigital action = this->_notedown;
HXDLIN( 754)						int state = 1;
HXDLIN( 754)						int _g = 0;
HXDLIN( 754)						while((_g < keys16->length)){
HXLINE( 754)							int key = keys16->__get(_g);
HXDLIN( 754)							_g = (_g + 1);
HXDLIN( 754)							action->addKey(key,state);
            						}
            					}
HXDLIN( 754)					{
HXLINE( 754)						 ::flixel::input::actions::FlxActionDigital action1 = this->_notedownP;
HXDLIN( 754)						int state1 = 2;
HXDLIN( 754)						int _g1 = 0;
HXDLIN( 754)						while((_g1 < keys16->length)){
HXLINE( 754)							int key = keys16->__get(_g1);
HXDLIN( 754)							_g1 = (_g1 + 1);
HXDLIN( 754)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 754)					{
HXLINE( 754)						 ::flixel::input::actions::FlxActionDigital action2 = this->_notedownR;
HXDLIN( 754)						int state2 = -1;
HXDLIN( 754)						int _g2 = 0;
HXDLIN( 754)						while((_g2 < keys16->length)){
HXLINE( 754)							int key = keys16->__get(_g2);
HXDLIN( 754)							_g2 = (_g2 + 1);
HXDLIN( 754)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)8: {
HXLINE( 754)					 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 754)					int state = 2;
HXDLIN( 754)					int _g = 0;
HXDLIN( 754)					while((_g < keys16->length)){
HXLINE( 754)						int key = keys16->__get(_g);
HXDLIN( 754)						_g = (_g + 1);
HXDLIN( 754)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)9: {
HXLINE( 754)					 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 754)					int state = 2;
HXDLIN( 754)					int _g = 0;
HXDLIN( 754)					while((_g < keys16->length)){
HXLINE( 754)						int key = keys16->__get(_g);
HXDLIN( 754)						_g = (_g + 1);
HXDLIN( 754)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)10: {
HXLINE( 754)					 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 754)					int state = 2;
HXDLIN( 754)					int _g = 0;
HXDLIN( 754)					while((_g < keys16->length)){
HXLINE( 754)						int key = keys16->__get(_g);
HXDLIN( 754)						_g = (_g + 1);
HXDLIN( 754)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)11: {
HXLINE( 754)					 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 754)					int state = 2;
HXDLIN( 754)					int _g = 0;
HXDLIN( 754)					while((_g < keys16->length)){
HXLINE( 754)						int key = keys16->__get(_g);
HXDLIN( 754)						_g = (_g + 1);
HXDLIN( 754)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)12: {
HXLINE( 754)					 ::flixel::input::actions::FlxActionDigital action = this->_cheat;
HXDLIN( 754)					int state = 2;
HXDLIN( 754)					int _g = 0;
HXDLIN( 754)					while((_g < keys16->length)){
HXLINE( 754)						int key = keys16->__get(_g);
HXDLIN( 754)						_g = (_g + 1);
HXDLIN( 754)						action->addKey(key,state);
            					}
            				}
            				break;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,loadKeyBinds,(void))

void Controls_obj::removeKeyboard(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_759_removeKeyboard)
HXDLIN( 759)		int _g = 0;
HXDLIN( 759)		::Array< ::Dynamic> _g1 = this->digitalActions;
HXDLIN( 759)		while((_g < _g1->length)){
HXDLIN( 759)			 ::flixel::input::actions::FlxActionDigital action = _g1->__get(_g).StaticCast<  ::flixel::input::actions::FlxActionDigital >();
HXDLIN( 759)			_g = (_g + 1);
HXLINE( 761)			int i = action->inputs->length;
HXLINE( 762)			while(true){
HXLINE( 762)				i = (i - 1);
HXDLIN( 762)				if (!(((i + 1) > 0))) {
HXLINE( 762)					goto _hx_goto_440;
            				}
HXLINE( 764)				 ::flixel::input::actions::FlxActionInput input = action->inputs->__get(i).StaticCast<  ::flixel::input::actions::FlxActionInput >();
HXLINE( 765)				if (::hx::IsPointerEq( input->device,::flixel::input::actions::FlxInputDevice_obj::KEYBOARD_dyn() )) {
HXLINE( 766)					action->remove(input,null());
            				}
            			}
            			_hx_goto_440:;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,removeKeyboard,(void))

void Controls_obj::addGamepad(int id, ::haxe::ds::EnumValueMap buttonMap){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_772_addGamepad)
HXLINE( 773)		if (this->gamepadsAdded->contains(id)) {
HXLINE( 774)			this->gamepadsAdded->remove(id);
            		}
HXLINE( 776)		this->gamepadsAdded->push(id);
HXLINE( 779)		{
HXLINE( 779)			::Dynamic map = buttonMap;
HXDLIN( 779)			::Dynamic _g_map = map;
HXDLIN( 779)			 ::Dynamic _g_keys = ::haxe::IMap_obj::keys(map);
HXDLIN( 779)			while(( (bool)(_g_keys->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 779)				 ::Control key = _g_keys->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)();
HXDLIN( 779)				::Array< int > _g1_value = ( (::Array< int >)(::haxe::IMap_obj::get(_g_map,key)) );
HXDLIN( 779)				 ::Control _g1_key = key;
HXDLIN( 779)				 ::Control control = _g1_key;
HXDLIN( 779)				::Array< int > buttons = _g1_value;
HXLINE( 780)				{
HXLINE( 780)					int id1 = id;
HXDLIN( 780)					::Array< int > buttons1 = buttons;
HXDLIN( 780)					switch((int)(control->_hx_getIndex())){
            						case (int)0: {
HXLINE( 780)							{
HXLINE( 780)								 ::flixel::input::actions::FlxActionDigital action = this->_up;
HXDLIN( 780)								int state = 1;
HXDLIN( 780)								int _g = 0;
HXDLIN( 780)								while((_g < buttons1->length)){
HXLINE( 780)									int button = buttons1->__get(_g);
HXDLIN( 780)									_g = (_g + 1);
HXDLIN( 780)									action->addGamepad(button,state,id1);
            								}
            							}
HXDLIN( 780)							{
HXLINE( 780)								 ::flixel::input::actions::FlxActionDigital action1 = this->_upP;
HXDLIN( 780)								int state1 = 2;
HXDLIN( 780)								int _g1 = 0;
HXDLIN( 780)								while((_g1 < buttons1->length)){
HXLINE( 780)									int button = buttons1->__get(_g1);
HXDLIN( 780)									_g1 = (_g1 + 1);
HXDLIN( 780)									action1->addGamepad(button,state1,id1);
            								}
            							}
HXDLIN( 780)							{
HXLINE( 780)								 ::flixel::input::actions::FlxActionDigital action2 = this->_upR;
HXDLIN( 780)								int state2 = -1;
HXDLIN( 780)								int _g2 = 0;
HXDLIN( 780)								while((_g2 < buttons1->length)){
HXLINE( 780)									int button = buttons1->__get(_g2);
HXDLIN( 780)									_g2 = (_g2 + 1);
HXDLIN( 780)									action2->addGamepad(button,state2,id1);
            								}
            							}
            						}
            						break;
            						case (int)1: {
HXLINE( 780)							{
HXLINE( 780)								 ::flixel::input::actions::FlxActionDigital action = this->_left;
HXDLIN( 780)								int state = 1;
HXDLIN( 780)								int _g = 0;
HXDLIN( 780)								while((_g < buttons1->length)){
HXLINE( 780)									int button = buttons1->__get(_g);
HXDLIN( 780)									_g = (_g + 1);
HXDLIN( 780)									action->addGamepad(button,state,id1);
            								}
            							}
HXDLIN( 780)							{
HXLINE( 780)								 ::flixel::input::actions::FlxActionDigital action1 = this->_leftP;
HXDLIN( 780)								int state1 = 2;
HXDLIN( 780)								int _g1 = 0;
HXDLIN( 780)								while((_g1 < buttons1->length)){
HXLINE( 780)									int button = buttons1->__get(_g1);
HXDLIN( 780)									_g1 = (_g1 + 1);
HXDLIN( 780)									action1->addGamepad(button,state1,id1);
            								}
            							}
HXDLIN( 780)							{
HXLINE( 780)								 ::flixel::input::actions::FlxActionDigital action2 = this->_leftR;
HXDLIN( 780)								int state2 = -1;
HXDLIN( 780)								int _g2 = 0;
HXDLIN( 780)								while((_g2 < buttons1->length)){
HXLINE( 780)									int button = buttons1->__get(_g2);
HXDLIN( 780)									_g2 = (_g2 + 1);
HXDLIN( 780)									action2->addGamepad(button,state2,id1);
            								}
            							}
            						}
            						break;
            						case (int)2: {
HXLINE( 780)							{
HXLINE( 780)								 ::flixel::input::actions::FlxActionDigital action = this->_right;
HXDLIN( 780)								int state = 1;
HXDLIN( 780)								int _g = 0;
HXDLIN( 780)								while((_g < buttons1->length)){
HXLINE( 780)									int button = buttons1->__get(_g);
HXDLIN( 780)									_g = (_g + 1);
HXDLIN( 780)									action->addGamepad(button,state,id1);
            								}
            							}
HXDLIN( 780)							{
HXLINE( 780)								 ::flixel::input::actions::FlxActionDigital action1 = this->_rightP;
HXDLIN( 780)								int state1 = 2;
HXDLIN( 780)								int _g1 = 0;
HXDLIN( 780)								while((_g1 < buttons1->length)){
HXLINE( 780)									int button = buttons1->__get(_g1);
HXDLIN( 780)									_g1 = (_g1 + 1);
HXDLIN( 780)									action1->addGamepad(button,state1,id1);
            								}
            							}
HXDLIN( 780)							{
HXLINE( 780)								 ::flixel::input::actions::FlxActionDigital action2 = this->_rightR;
HXDLIN( 780)								int state2 = -1;
HXDLIN( 780)								int _g2 = 0;
HXDLIN( 780)								while((_g2 < buttons1->length)){
HXLINE( 780)									int button = buttons1->__get(_g2);
HXDLIN( 780)									_g2 = (_g2 + 1);
HXDLIN( 780)									action2->addGamepad(button,state2,id1);
            								}
            							}
            						}
            						break;
            						case (int)3: {
HXLINE( 780)							{
HXLINE( 780)								 ::flixel::input::actions::FlxActionDigital action = this->_down;
HXDLIN( 780)								int state = 1;
HXDLIN( 780)								int _g = 0;
HXDLIN( 780)								while((_g < buttons1->length)){
HXLINE( 780)									int button = buttons1->__get(_g);
HXDLIN( 780)									_g = (_g + 1);
HXDLIN( 780)									action->addGamepad(button,state,id1);
            								}
            							}
HXDLIN( 780)							{
HXLINE( 780)								 ::flixel::input::actions::FlxActionDigital action1 = this->_downP;
HXDLIN( 780)								int state1 = 2;
HXDLIN( 780)								int _g1 = 0;
HXDLIN( 780)								while((_g1 < buttons1->length)){
HXLINE( 780)									int button = buttons1->__get(_g1);
HXDLIN( 780)									_g1 = (_g1 + 1);
HXDLIN( 780)									action1->addGamepad(button,state1,id1);
            								}
            							}
HXDLIN( 780)							{
HXLINE( 780)								 ::flixel::input::actions::FlxActionDigital action2 = this->_downR;
HXDLIN( 780)								int state2 = -1;
HXDLIN( 780)								int _g2 = 0;
HXDLIN( 780)								while((_g2 < buttons1->length)){
HXLINE( 780)									int button = buttons1->__get(_g2);
HXDLIN( 780)									_g2 = (_g2 + 1);
HXDLIN( 780)									action2->addGamepad(button,state2,id1);
            								}
            							}
            						}
            						break;
            						case (int)4: {
HXLINE( 780)							{
HXLINE( 780)								 ::flixel::input::actions::FlxActionDigital action = this->_noteup;
HXDLIN( 780)								int state = 1;
HXDLIN( 780)								int _g = 0;
HXDLIN( 780)								while((_g < buttons1->length)){
HXLINE( 780)									int button = buttons1->__get(_g);
HXDLIN( 780)									_g = (_g + 1);
HXDLIN( 780)									action->addGamepad(button,state,id1);
            								}
            							}
HXDLIN( 780)							{
HXLINE( 780)								 ::flixel::input::actions::FlxActionDigital action1 = this->_noteupP;
HXDLIN( 780)								int state1 = 2;
HXDLIN( 780)								int _g1 = 0;
HXDLIN( 780)								while((_g1 < buttons1->length)){
HXLINE( 780)									int button = buttons1->__get(_g1);
HXDLIN( 780)									_g1 = (_g1 + 1);
HXDLIN( 780)									action1->addGamepad(button,state1,id1);
            								}
            							}
HXDLIN( 780)							{
HXLINE( 780)								 ::flixel::input::actions::FlxActionDigital action2 = this->_noteupR;
HXDLIN( 780)								int state2 = -1;
HXDLIN( 780)								int _g2 = 0;
HXDLIN( 780)								while((_g2 < buttons1->length)){
HXLINE( 780)									int button = buttons1->__get(_g2);
HXDLIN( 780)									_g2 = (_g2 + 1);
HXDLIN( 780)									action2->addGamepad(button,state2,id1);
            								}
            							}
            						}
            						break;
            						case (int)5: {
HXLINE( 780)							{
HXLINE( 780)								 ::flixel::input::actions::FlxActionDigital action = this->_noteleft;
HXDLIN( 780)								int state = 1;
HXDLIN( 780)								int _g = 0;
HXDLIN( 780)								while((_g < buttons1->length)){
HXLINE( 780)									int button = buttons1->__get(_g);
HXDLIN( 780)									_g = (_g + 1);
HXDLIN( 780)									action->addGamepad(button,state,id1);
            								}
            							}
HXDLIN( 780)							{
HXLINE( 780)								 ::flixel::input::actions::FlxActionDigital action1 = this->_noteleftP;
HXDLIN( 780)								int state1 = 2;
HXDLIN( 780)								int _g1 = 0;
HXDLIN( 780)								while((_g1 < buttons1->length)){
HXLINE( 780)									int button = buttons1->__get(_g1);
HXDLIN( 780)									_g1 = (_g1 + 1);
HXDLIN( 780)									action1->addGamepad(button,state1,id1);
            								}
            							}
HXDLIN( 780)							{
HXLINE( 780)								 ::flixel::input::actions::FlxActionDigital action2 = this->_noteleftR;
HXDLIN( 780)								int state2 = -1;
HXDLIN( 780)								int _g2 = 0;
HXDLIN( 780)								while((_g2 < buttons1->length)){
HXLINE( 780)									int button = buttons1->__get(_g2);
HXDLIN( 780)									_g2 = (_g2 + 1);
HXDLIN( 780)									action2->addGamepad(button,state2,id1);
            								}
            							}
            						}
            						break;
            						case (int)6: {
HXLINE( 780)							{
HXLINE( 780)								 ::flixel::input::actions::FlxActionDigital action = this->_noteright;
HXDLIN( 780)								int state = 1;
HXDLIN( 780)								int _g = 0;
HXDLIN( 780)								while((_g < buttons1->length)){
HXLINE( 780)									int button = buttons1->__get(_g);
HXDLIN( 780)									_g = (_g + 1);
HXDLIN( 780)									action->addGamepad(button,state,id1);
            								}
            							}
HXDLIN( 780)							{
HXLINE( 780)								 ::flixel::input::actions::FlxActionDigital action1 = this->_noterightP;
HXDLIN( 780)								int state1 = 2;
HXDLIN( 780)								int _g1 = 0;
HXDLIN( 780)								while((_g1 < buttons1->length)){
HXLINE( 780)									int button = buttons1->__get(_g1);
HXDLIN( 780)									_g1 = (_g1 + 1);
HXDLIN( 780)									action1->addGamepad(button,state1,id1);
            								}
            							}
HXDLIN( 780)							{
HXLINE( 780)								 ::flixel::input::actions::FlxActionDigital action2 = this->_noterightR;
HXDLIN( 780)								int state2 = -1;
HXDLIN( 780)								int _g2 = 0;
HXDLIN( 780)								while((_g2 < buttons1->length)){
HXLINE( 780)									int button = buttons1->__get(_g2);
HXDLIN( 780)									_g2 = (_g2 + 1);
HXDLIN( 780)									action2->addGamepad(button,state2,id1);
            								}
            							}
            						}
            						break;
            						case (int)7: {
HXLINE( 780)							{
HXLINE( 780)								 ::flixel::input::actions::FlxActionDigital action = this->_notedown;
HXDLIN( 780)								int state = 1;
HXDLIN( 780)								int _g = 0;
HXDLIN( 780)								while((_g < buttons1->length)){
HXLINE( 780)									int button = buttons1->__get(_g);
HXDLIN( 780)									_g = (_g + 1);
HXDLIN( 780)									action->addGamepad(button,state,id1);
            								}
            							}
HXDLIN( 780)							{
HXLINE( 780)								 ::flixel::input::actions::FlxActionDigital action1 = this->_notedownP;
HXDLIN( 780)								int state1 = 2;
HXDLIN( 780)								int _g1 = 0;
HXDLIN( 780)								while((_g1 < buttons1->length)){
HXLINE( 780)									int button = buttons1->__get(_g1);
HXDLIN( 780)									_g1 = (_g1 + 1);
HXDLIN( 780)									action1->addGamepad(button,state1,id1);
            								}
            							}
HXDLIN( 780)							{
HXLINE( 780)								 ::flixel::input::actions::FlxActionDigital action2 = this->_notedownR;
HXDLIN( 780)								int state2 = -1;
HXDLIN( 780)								int _g2 = 0;
HXDLIN( 780)								while((_g2 < buttons1->length)){
HXLINE( 780)									int button = buttons1->__get(_g2);
HXDLIN( 780)									_g2 = (_g2 + 1);
HXDLIN( 780)									action2->addGamepad(button,state2,id1);
            								}
            							}
            						}
            						break;
            						case (int)8: {
HXLINE( 780)							 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 780)							int state = 2;
HXDLIN( 780)							int _g = 0;
HXDLIN( 780)							while((_g < buttons1->length)){
HXLINE( 780)								int button = buttons1->__get(_g);
HXDLIN( 780)								_g = (_g + 1);
HXDLIN( 780)								action->addGamepad(button,state,id1);
            							}
            						}
            						break;
            						case (int)9: {
HXLINE( 780)							 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 780)							int state = 2;
HXDLIN( 780)							int _g = 0;
HXDLIN( 780)							while((_g < buttons1->length)){
HXLINE( 780)								int button = buttons1->__get(_g);
HXDLIN( 780)								_g = (_g + 1);
HXDLIN( 780)								action->addGamepad(button,state,id1);
            							}
            						}
            						break;
            						case (int)10: {
HXLINE( 780)							 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 780)							int state = 2;
HXDLIN( 780)							int _g = 0;
HXDLIN( 780)							while((_g < buttons1->length)){
HXLINE( 780)								int button = buttons1->__get(_g);
HXDLIN( 780)								_g = (_g + 1);
HXDLIN( 780)								action->addGamepad(button,state,id1);
            							}
            						}
            						break;
            						case (int)11: {
HXLINE( 780)							 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 780)							int state = 2;
HXDLIN( 780)							int _g = 0;
HXDLIN( 780)							while((_g < buttons1->length)){
HXLINE( 780)								int button = buttons1->__get(_g);
HXDLIN( 780)								_g = (_g + 1);
HXDLIN( 780)								action->addGamepad(button,state,id1);
            							}
            						}
            						break;
            						case (int)12: {
HXLINE( 780)							 ::flixel::input::actions::FlxActionDigital action = this->_cheat;
HXDLIN( 780)							int state = 2;
HXDLIN( 780)							int _g = 0;
HXDLIN( 780)							while((_g < buttons1->length)){
HXLINE( 780)								int button = buttons1->__get(_g);
HXDLIN( 780)								_g = (_g + 1);
HXDLIN( 780)								action->addGamepad(button,state,id1);
            							}
            						}
            						break;
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Controls_obj,addGamepad,(void))

void Controls_obj::addGamepadLiteral(int id, ::haxe::ds::EnumValueMap buttonMap){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_788_addGamepadLiteral)
HXLINE( 789)		this->gamepadsAdded->push(id);
HXLINE( 792)		{
HXLINE( 792)			::Dynamic map = buttonMap;
HXDLIN( 792)			::Dynamic _g_map = map;
HXDLIN( 792)			 ::Dynamic _g_keys = ::haxe::IMap_obj::keys(map);
HXDLIN( 792)			while(( (bool)(_g_keys->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 792)				 ::Control key = _g_keys->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)();
HXDLIN( 792)				::Array< int > _g1_value = ( (::Array< int >)(::haxe::IMap_obj::get(_g_map,key)) );
HXDLIN( 792)				 ::Control _g1_key = key;
HXDLIN( 792)				 ::Control control = _g1_key;
HXDLIN( 792)				::Array< int > buttons = _g1_value;
HXLINE( 793)				{
HXLINE( 793)					int id1 = id;
HXDLIN( 793)					::Array< int > buttons1 = buttons;
HXDLIN( 793)					switch((int)(control->_hx_getIndex())){
            						case (int)0: {
HXLINE( 793)							{
HXLINE( 793)								 ::flixel::input::actions::FlxActionDigital action = this->_up;
HXDLIN( 793)								int state = 1;
HXDLIN( 793)								int _g = 0;
HXDLIN( 793)								while((_g < buttons1->length)){
HXLINE( 793)									int button = buttons1->__get(_g);
HXDLIN( 793)									_g = (_g + 1);
HXDLIN( 793)									action->addGamepad(button,state,id1);
            								}
            							}
HXDLIN( 793)							{
HXLINE( 793)								 ::flixel::input::actions::FlxActionDigital action1 = this->_upP;
HXDLIN( 793)								int state1 = 2;
HXDLIN( 793)								int _g1 = 0;
HXDLIN( 793)								while((_g1 < buttons1->length)){
HXLINE( 793)									int button = buttons1->__get(_g1);
HXDLIN( 793)									_g1 = (_g1 + 1);
HXDLIN( 793)									action1->addGamepad(button,state1,id1);
            								}
            							}
HXDLIN( 793)							{
HXLINE( 793)								 ::flixel::input::actions::FlxActionDigital action2 = this->_upR;
HXDLIN( 793)								int state2 = -1;
HXDLIN( 793)								int _g2 = 0;
HXDLIN( 793)								while((_g2 < buttons1->length)){
HXLINE( 793)									int button = buttons1->__get(_g2);
HXDLIN( 793)									_g2 = (_g2 + 1);
HXDLIN( 793)									action2->addGamepad(button,state2,id1);
            								}
            							}
            						}
            						break;
            						case (int)1: {
HXLINE( 793)							{
HXLINE( 793)								 ::flixel::input::actions::FlxActionDigital action = this->_left;
HXDLIN( 793)								int state = 1;
HXDLIN( 793)								int _g = 0;
HXDLIN( 793)								while((_g < buttons1->length)){
HXLINE( 793)									int button = buttons1->__get(_g);
HXDLIN( 793)									_g = (_g + 1);
HXDLIN( 793)									action->addGamepad(button,state,id1);
            								}
            							}
HXDLIN( 793)							{
HXLINE( 793)								 ::flixel::input::actions::FlxActionDigital action1 = this->_leftP;
HXDLIN( 793)								int state1 = 2;
HXDLIN( 793)								int _g1 = 0;
HXDLIN( 793)								while((_g1 < buttons1->length)){
HXLINE( 793)									int button = buttons1->__get(_g1);
HXDLIN( 793)									_g1 = (_g1 + 1);
HXDLIN( 793)									action1->addGamepad(button,state1,id1);
            								}
            							}
HXDLIN( 793)							{
HXLINE( 793)								 ::flixel::input::actions::FlxActionDigital action2 = this->_leftR;
HXDLIN( 793)								int state2 = -1;
HXDLIN( 793)								int _g2 = 0;
HXDLIN( 793)								while((_g2 < buttons1->length)){
HXLINE( 793)									int button = buttons1->__get(_g2);
HXDLIN( 793)									_g2 = (_g2 + 1);
HXDLIN( 793)									action2->addGamepad(button,state2,id1);
            								}
            							}
            						}
            						break;
            						case (int)2: {
HXLINE( 793)							{
HXLINE( 793)								 ::flixel::input::actions::FlxActionDigital action = this->_right;
HXDLIN( 793)								int state = 1;
HXDLIN( 793)								int _g = 0;
HXDLIN( 793)								while((_g < buttons1->length)){
HXLINE( 793)									int button = buttons1->__get(_g);
HXDLIN( 793)									_g = (_g + 1);
HXDLIN( 793)									action->addGamepad(button,state,id1);
            								}
            							}
HXDLIN( 793)							{
HXLINE( 793)								 ::flixel::input::actions::FlxActionDigital action1 = this->_rightP;
HXDLIN( 793)								int state1 = 2;
HXDLIN( 793)								int _g1 = 0;
HXDLIN( 793)								while((_g1 < buttons1->length)){
HXLINE( 793)									int button = buttons1->__get(_g1);
HXDLIN( 793)									_g1 = (_g1 + 1);
HXDLIN( 793)									action1->addGamepad(button,state1,id1);
            								}
            							}
HXDLIN( 793)							{
HXLINE( 793)								 ::flixel::input::actions::FlxActionDigital action2 = this->_rightR;
HXDLIN( 793)								int state2 = -1;
HXDLIN( 793)								int _g2 = 0;
HXDLIN( 793)								while((_g2 < buttons1->length)){
HXLINE( 793)									int button = buttons1->__get(_g2);
HXDLIN( 793)									_g2 = (_g2 + 1);
HXDLIN( 793)									action2->addGamepad(button,state2,id1);
            								}
            							}
            						}
            						break;
            						case (int)3: {
HXLINE( 793)							{
HXLINE( 793)								 ::flixel::input::actions::FlxActionDigital action = this->_down;
HXDLIN( 793)								int state = 1;
HXDLIN( 793)								int _g = 0;
HXDLIN( 793)								while((_g < buttons1->length)){
HXLINE( 793)									int button = buttons1->__get(_g);
HXDLIN( 793)									_g = (_g + 1);
HXDLIN( 793)									action->addGamepad(button,state,id1);
            								}
            							}
HXDLIN( 793)							{
HXLINE( 793)								 ::flixel::input::actions::FlxActionDigital action1 = this->_downP;
HXDLIN( 793)								int state1 = 2;
HXDLIN( 793)								int _g1 = 0;
HXDLIN( 793)								while((_g1 < buttons1->length)){
HXLINE( 793)									int button = buttons1->__get(_g1);
HXDLIN( 793)									_g1 = (_g1 + 1);
HXDLIN( 793)									action1->addGamepad(button,state1,id1);
            								}
            							}
HXDLIN( 793)							{
HXLINE( 793)								 ::flixel::input::actions::FlxActionDigital action2 = this->_downR;
HXDLIN( 793)								int state2 = -1;
HXDLIN( 793)								int _g2 = 0;
HXDLIN( 793)								while((_g2 < buttons1->length)){
HXLINE( 793)									int button = buttons1->__get(_g2);
HXDLIN( 793)									_g2 = (_g2 + 1);
HXDLIN( 793)									action2->addGamepad(button,state2,id1);
            								}
            							}
            						}
            						break;
            						case (int)4: {
HXLINE( 793)							{
HXLINE( 793)								 ::flixel::input::actions::FlxActionDigital action = this->_noteup;
HXDLIN( 793)								int state = 1;
HXDLIN( 793)								int _g = 0;
HXDLIN( 793)								while((_g < buttons1->length)){
HXLINE( 793)									int button = buttons1->__get(_g);
HXDLIN( 793)									_g = (_g + 1);
HXDLIN( 793)									action->addGamepad(button,state,id1);
            								}
            							}
HXDLIN( 793)							{
HXLINE( 793)								 ::flixel::input::actions::FlxActionDigital action1 = this->_noteupP;
HXDLIN( 793)								int state1 = 2;
HXDLIN( 793)								int _g1 = 0;
HXDLIN( 793)								while((_g1 < buttons1->length)){
HXLINE( 793)									int button = buttons1->__get(_g1);
HXDLIN( 793)									_g1 = (_g1 + 1);
HXDLIN( 793)									action1->addGamepad(button,state1,id1);
            								}
            							}
HXDLIN( 793)							{
HXLINE( 793)								 ::flixel::input::actions::FlxActionDigital action2 = this->_noteupR;
HXDLIN( 793)								int state2 = -1;
HXDLIN( 793)								int _g2 = 0;
HXDLIN( 793)								while((_g2 < buttons1->length)){
HXLINE( 793)									int button = buttons1->__get(_g2);
HXDLIN( 793)									_g2 = (_g2 + 1);
HXDLIN( 793)									action2->addGamepad(button,state2,id1);
            								}
            							}
            						}
            						break;
            						case (int)5: {
HXLINE( 793)							{
HXLINE( 793)								 ::flixel::input::actions::FlxActionDigital action = this->_noteleft;
HXDLIN( 793)								int state = 1;
HXDLIN( 793)								int _g = 0;
HXDLIN( 793)								while((_g < buttons1->length)){
HXLINE( 793)									int button = buttons1->__get(_g);
HXDLIN( 793)									_g = (_g + 1);
HXDLIN( 793)									action->addGamepad(button,state,id1);
            								}
            							}
HXDLIN( 793)							{
HXLINE( 793)								 ::flixel::input::actions::FlxActionDigital action1 = this->_noteleftP;
HXDLIN( 793)								int state1 = 2;
HXDLIN( 793)								int _g1 = 0;
HXDLIN( 793)								while((_g1 < buttons1->length)){
HXLINE( 793)									int button = buttons1->__get(_g1);
HXDLIN( 793)									_g1 = (_g1 + 1);
HXDLIN( 793)									action1->addGamepad(button,state1,id1);
            								}
            							}
HXDLIN( 793)							{
HXLINE( 793)								 ::flixel::input::actions::FlxActionDigital action2 = this->_noteleftR;
HXDLIN( 793)								int state2 = -1;
HXDLIN( 793)								int _g2 = 0;
HXDLIN( 793)								while((_g2 < buttons1->length)){
HXLINE( 793)									int button = buttons1->__get(_g2);
HXDLIN( 793)									_g2 = (_g2 + 1);
HXDLIN( 793)									action2->addGamepad(button,state2,id1);
            								}
            							}
            						}
            						break;
            						case (int)6: {
HXLINE( 793)							{
HXLINE( 793)								 ::flixel::input::actions::FlxActionDigital action = this->_noteright;
HXDLIN( 793)								int state = 1;
HXDLIN( 793)								int _g = 0;
HXDLIN( 793)								while((_g < buttons1->length)){
HXLINE( 793)									int button = buttons1->__get(_g);
HXDLIN( 793)									_g = (_g + 1);
HXDLIN( 793)									action->addGamepad(button,state,id1);
            								}
            							}
HXDLIN( 793)							{
HXLINE( 793)								 ::flixel::input::actions::FlxActionDigital action1 = this->_noterightP;
HXDLIN( 793)								int state1 = 2;
HXDLIN( 793)								int _g1 = 0;
HXDLIN( 793)								while((_g1 < buttons1->length)){
HXLINE( 793)									int button = buttons1->__get(_g1);
HXDLIN( 793)									_g1 = (_g1 + 1);
HXDLIN( 793)									action1->addGamepad(button,state1,id1);
            								}
            							}
HXDLIN( 793)							{
HXLINE( 793)								 ::flixel::input::actions::FlxActionDigital action2 = this->_noterightR;
HXDLIN( 793)								int state2 = -1;
HXDLIN( 793)								int _g2 = 0;
HXDLIN( 793)								while((_g2 < buttons1->length)){
HXLINE( 793)									int button = buttons1->__get(_g2);
HXDLIN( 793)									_g2 = (_g2 + 1);
HXDLIN( 793)									action2->addGamepad(button,state2,id1);
            								}
            							}
            						}
            						break;
            						case (int)7: {
HXLINE( 793)							{
HXLINE( 793)								 ::flixel::input::actions::FlxActionDigital action = this->_notedown;
HXDLIN( 793)								int state = 1;
HXDLIN( 793)								int _g = 0;
HXDLIN( 793)								while((_g < buttons1->length)){
HXLINE( 793)									int button = buttons1->__get(_g);
HXDLIN( 793)									_g = (_g + 1);
HXDLIN( 793)									action->addGamepad(button,state,id1);
            								}
            							}
HXDLIN( 793)							{
HXLINE( 793)								 ::flixel::input::actions::FlxActionDigital action1 = this->_notedownP;
HXDLIN( 793)								int state1 = 2;
HXDLIN( 793)								int _g1 = 0;
HXDLIN( 793)								while((_g1 < buttons1->length)){
HXLINE( 793)									int button = buttons1->__get(_g1);
HXDLIN( 793)									_g1 = (_g1 + 1);
HXDLIN( 793)									action1->addGamepad(button,state1,id1);
            								}
            							}
HXDLIN( 793)							{
HXLINE( 793)								 ::flixel::input::actions::FlxActionDigital action2 = this->_notedownR;
HXDLIN( 793)								int state2 = -1;
HXDLIN( 793)								int _g2 = 0;
HXDLIN( 793)								while((_g2 < buttons1->length)){
HXLINE( 793)									int button = buttons1->__get(_g2);
HXDLIN( 793)									_g2 = (_g2 + 1);
HXDLIN( 793)									action2->addGamepad(button,state2,id1);
            								}
            							}
            						}
            						break;
            						case (int)8: {
HXLINE( 793)							 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 793)							int state = 2;
HXDLIN( 793)							int _g = 0;
HXDLIN( 793)							while((_g < buttons1->length)){
HXLINE( 793)								int button = buttons1->__get(_g);
HXDLIN( 793)								_g = (_g + 1);
HXDLIN( 793)								action->addGamepad(button,state,id1);
            							}
            						}
            						break;
            						case (int)9: {
HXLINE( 793)							 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 793)							int state = 2;
HXDLIN( 793)							int _g = 0;
HXDLIN( 793)							while((_g < buttons1->length)){
HXLINE( 793)								int button = buttons1->__get(_g);
HXDLIN( 793)								_g = (_g + 1);
HXDLIN( 793)								action->addGamepad(button,state,id1);
            							}
            						}
            						break;
            						case (int)10: {
HXLINE( 793)							 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 793)							int state = 2;
HXDLIN( 793)							int _g = 0;
HXDLIN( 793)							while((_g < buttons1->length)){
HXLINE( 793)								int button = buttons1->__get(_g);
HXDLIN( 793)								_g = (_g + 1);
HXDLIN( 793)								action->addGamepad(button,state,id1);
            							}
            						}
            						break;
            						case (int)11: {
HXLINE( 793)							 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 793)							int state = 2;
HXDLIN( 793)							int _g = 0;
HXDLIN( 793)							while((_g < buttons1->length)){
HXLINE( 793)								int button = buttons1->__get(_g);
HXDLIN( 793)								_g = (_g + 1);
HXDLIN( 793)								action->addGamepad(button,state,id1);
            							}
            						}
            						break;
            						case (int)12: {
HXLINE( 793)							 ::flixel::input::actions::FlxActionDigital action = this->_cheat;
HXDLIN( 793)							int state = 2;
HXDLIN( 793)							int _g = 0;
HXDLIN( 793)							while((_g < buttons1->length)){
HXLINE( 793)								int button = buttons1->__get(_g);
HXDLIN( 793)								_g = (_g + 1);
HXDLIN( 793)								action->addGamepad(button,state,id1);
            							}
            						}
            						break;
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Controls_obj,addGamepadLiteral,(void))

void Controls_obj::removeGamepad(::hx::Null< int >  __o_deviceID){
            		int deviceID = __o_deviceID.Default(-1);
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_801_removeGamepad)
HXLINE( 802)		{
HXLINE( 802)			int _g = 0;
HXDLIN( 802)			::Array< ::Dynamic> _g1 = this->digitalActions;
HXDLIN( 802)			while((_g < _g1->length)){
HXLINE( 802)				 ::flixel::input::actions::FlxActionDigital action = _g1->__get(_g).StaticCast<  ::flixel::input::actions::FlxActionDigital >();
HXDLIN( 802)				_g = (_g + 1);
HXLINE( 804)				int i = action->inputs->length;
HXLINE( 805)				while(true){
HXLINE( 805)					i = (i - 1);
HXDLIN( 805)					if (!(((i + 1) > 0))) {
HXLINE( 805)						goto _hx_goto_505;
            					}
HXLINE( 807)					 ::flixel::input::actions::FlxActionInput input = action->inputs->__get(i).StaticCast<  ::flixel::input::actions::FlxActionInput >();
HXLINE( 808)					bool _hx_tmp;
HXDLIN( 808)					if (::hx::IsPointerEq( input->device,::flixel::input::actions::FlxInputDevice_obj::GAMEPAD_dyn() )) {
HXLINE( 808)						if ((deviceID != -1)) {
HXLINE( 808)							_hx_tmp = (input->deviceID == deviceID);
            						}
            						else {
HXLINE( 808)							_hx_tmp = true;
            						}
            					}
            					else {
HXLINE( 808)						_hx_tmp = false;
            					}
HXDLIN( 808)					if (_hx_tmp) {
HXLINE( 809)						action->remove(input,null());
            					}
            				}
            				_hx_goto_505:;
            			}
            		}
HXLINE( 813)		this->gamepadsAdded->remove(deviceID);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Controls_obj,removeGamepad,(void))

void Controls_obj::addDefaultGamepad(int id){
            	HX_GC_STACKFRAME(&_hx_pos_948b5caa279cd923_819_addDefaultGamepad)
HXDLIN( 819)		 ::haxe::ds::EnumValueMap _g =  ::haxe::ds::EnumValueMap_obj::__alloc( HX_CTX );
HXDLIN( 819)		_g->set(::Control_obj::ACCEPT_dyn(),::Array_obj< int >::fromData( _hx_array_data_116e4296_538,1));
HXDLIN( 819)		_g->set(::Control_obj::BACK_dyn(),::Array_obj< int >::fromData( _hx_array_data_116e4296_539,1));
HXDLIN( 819)		_g->set(::Control_obj::UP_dyn(),::Array_obj< int >::fromData( _hx_array_data_116e4296_540,2));
HXDLIN( 819)		_g->set(::Control_obj::DOWN_dyn(),::Array_obj< int >::fromData( _hx_array_data_116e4296_541,2));
HXDLIN( 819)		_g->set(::Control_obj::LEFT_dyn(),::Array_obj< int >::fromData( _hx_array_data_116e4296_542,2));
HXDLIN( 819)		_g->set(::Control_obj::RIGHT_dyn(),::Array_obj< int >::fromData( _hx_array_data_116e4296_543,2));
HXDLIN( 819)		_g->set(::Control_obj::PAUSE_dyn(),::Array_obj< int >::fromData( _hx_array_data_116e4296_544,1));
HXDLIN( 819)		_g->set(::Control_obj::RESET_dyn(),::Array_obj< int >::fromData( _hx_array_data_116e4296_545,1));
HXDLIN( 819)		this->gamepadsAdded->push(id);
HXDLIN( 819)		{
HXDLIN( 819)			::Dynamic map = _g;
HXDLIN( 819)			::Dynamic _g_map = map;
HXDLIN( 819)			 ::Dynamic _g_keys = ::haxe::IMap_obj::keys(map);
HXDLIN( 819)			while(( (bool)(_g_keys->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXDLIN( 819)				 ::Control key = _g_keys->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)();
HXDLIN( 819)				::Array< int > _g1_value = ( (::Array< int >)(::haxe::IMap_obj::get(_g_map,key)) );
HXDLIN( 819)				 ::Control _g1_key = key;
HXDLIN( 819)				 ::Control control = _g1_key;
HXDLIN( 819)				::Array< int > buttons = _g1_value;
HXDLIN( 819)				{
HXDLIN( 819)					int id1 = id;
HXDLIN( 819)					::Array< int > buttons1 = buttons;
HXDLIN( 819)					switch((int)(control->_hx_getIndex())){
            						case (int)0: {
HXDLIN( 819)							{
HXDLIN( 819)								 ::flixel::input::actions::FlxActionDigital action = this->_up;
HXDLIN( 819)								int state = 1;
HXDLIN( 819)								int _g = 0;
HXDLIN( 819)								while((_g < buttons1->length)){
HXDLIN( 819)									int button = buttons1->__get(_g);
HXDLIN( 819)									_g = (_g + 1);
HXDLIN( 819)									action->addGamepad(button,state,id1);
            								}
            							}
HXDLIN( 819)							{
HXDLIN( 819)								 ::flixel::input::actions::FlxActionDigital action1 = this->_upP;
HXDLIN( 819)								int state1 = 2;
HXDLIN( 819)								int _g1 = 0;
HXDLIN( 819)								while((_g1 < buttons1->length)){
HXDLIN( 819)									int button = buttons1->__get(_g1);
HXDLIN( 819)									_g1 = (_g1 + 1);
HXDLIN( 819)									action1->addGamepad(button,state1,id1);
            								}
            							}
HXDLIN( 819)							{
HXDLIN( 819)								 ::flixel::input::actions::FlxActionDigital action2 = this->_upR;
HXDLIN( 819)								int state2 = -1;
HXDLIN( 819)								int _g2 = 0;
HXDLIN( 819)								while((_g2 < buttons1->length)){
HXDLIN( 819)									int button = buttons1->__get(_g2);
HXDLIN( 819)									_g2 = (_g2 + 1);
HXDLIN( 819)									action2->addGamepad(button,state2,id1);
            								}
            							}
            						}
            						break;
            						case (int)1: {
HXDLIN( 819)							{
HXDLIN( 819)								 ::flixel::input::actions::FlxActionDigital action = this->_left;
HXDLIN( 819)								int state = 1;
HXDLIN( 819)								int _g = 0;
HXDLIN( 819)								while((_g < buttons1->length)){
HXDLIN( 819)									int button = buttons1->__get(_g);
HXDLIN( 819)									_g = (_g + 1);
HXDLIN( 819)									action->addGamepad(button,state,id1);
            								}
            							}
HXDLIN( 819)							{
HXDLIN( 819)								 ::flixel::input::actions::FlxActionDigital action1 = this->_leftP;
HXDLIN( 819)								int state1 = 2;
HXDLIN( 819)								int _g1 = 0;
HXDLIN( 819)								while((_g1 < buttons1->length)){
HXDLIN( 819)									int button = buttons1->__get(_g1);
HXDLIN( 819)									_g1 = (_g1 + 1);
HXDLIN( 819)									action1->addGamepad(button,state1,id1);
            								}
            							}
HXDLIN( 819)							{
HXDLIN( 819)								 ::flixel::input::actions::FlxActionDigital action2 = this->_leftR;
HXDLIN( 819)								int state2 = -1;
HXDLIN( 819)								int _g2 = 0;
HXDLIN( 819)								while((_g2 < buttons1->length)){
HXDLIN( 819)									int button = buttons1->__get(_g2);
HXDLIN( 819)									_g2 = (_g2 + 1);
HXDLIN( 819)									action2->addGamepad(button,state2,id1);
            								}
            							}
            						}
            						break;
            						case (int)2: {
HXDLIN( 819)							{
HXDLIN( 819)								 ::flixel::input::actions::FlxActionDigital action = this->_right;
HXDLIN( 819)								int state = 1;
HXDLIN( 819)								int _g = 0;
HXDLIN( 819)								while((_g < buttons1->length)){
HXDLIN( 819)									int button = buttons1->__get(_g);
HXDLIN( 819)									_g = (_g + 1);
HXDLIN( 819)									action->addGamepad(button,state,id1);
            								}
            							}
HXDLIN( 819)							{
HXDLIN( 819)								 ::flixel::input::actions::FlxActionDigital action1 = this->_rightP;
HXDLIN( 819)								int state1 = 2;
HXDLIN( 819)								int _g1 = 0;
HXDLIN( 819)								while((_g1 < buttons1->length)){
HXDLIN( 819)									int button = buttons1->__get(_g1);
HXDLIN( 819)									_g1 = (_g1 + 1);
HXDLIN( 819)									action1->addGamepad(button,state1,id1);
            								}
            							}
HXDLIN( 819)							{
HXDLIN( 819)								 ::flixel::input::actions::FlxActionDigital action2 = this->_rightR;
HXDLIN( 819)								int state2 = -1;
HXDLIN( 819)								int _g2 = 0;
HXDLIN( 819)								while((_g2 < buttons1->length)){
HXDLIN( 819)									int button = buttons1->__get(_g2);
HXDLIN( 819)									_g2 = (_g2 + 1);
HXDLIN( 819)									action2->addGamepad(button,state2,id1);
            								}
            							}
            						}
            						break;
            						case (int)3: {
HXDLIN( 819)							{
HXDLIN( 819)								 ::flixel::input::actions::FlxActionDigital action = this->_down;
HXDLIN( 819)								int state = 1;
HXDLIN( 819)								int _g = 0;
HXDLIN( 819)								while((_g < buttons1->length)){
HXDLIN( 819)									int button = buttons1->__get(_g);
HXDLIN( 819)									_g = (_g + 1);
HXDLIN( 819)									action->addGamepad(button,state,id1);
            								}
            							}
HXDLIN( 819)							{
HXDLIN( 819)								 ::flixel::input::actions::FlxActionDigital action1 = this->_downP;
HXDLIN( 819)								int state1 = 2;
HXDLIN( 819)								int _g1 = 0;
HXDLIN( 819)								while((_g1 < buttons1->length)){
HXDLIN( 819)									int button = buttons1->__get(_g1);
HXDLIN( 819)									_g1 = (_g1 + 1);
HXDLIN( 819)									action1->addGamepad(button,state1,id1);
            								}
            							}
HXDLIN( 819)							{
HXDLIN( 819)								 ::flixel::input::actions::FlxActionDigital action2 = this->_downR;
HXDLIN( 819)								int state2 = -1;
HXDLIN( 819)								int _g2 = 0;
HXDLIN( 819)								while((_g2 < buttons1->length)){
HXDLIN( 819)									int button = buttons1->__get(_g2);
HXDLIN( 819)									_g2 = (_g2 + 1);
HXDLIN( 819)									action2->addGamepad(button,state2,id1);
            								}
            							}
            						}
            						break;
            						case (int)4: {
HXDLIN( 819)							{
HXDLIN( 819)								 ::flixel::input::actions::FlxActionDigital action = this->_noteup;
HXDLIN( 819)								int state = 1;
HXDLIN( 819)								int _g = 0;
HXDLIN( 819)								while((_g < buttons1->length)){
HXDLIN( 819)									int button = buttons1->__get(_g);
HXDLIN( 819)									_g = (_g + 1);
HXDLIN( 819)									action->addGamepad(button,state,id1);
            								}
            							}
HXDLIN( 819)							{
HXDLIN( 819)								 ::flixel::input::actions::FlxActionDigital action1 = this->_noteupP;
HXDLIN( 819)								int state1 = 2;
HXDLIN( 819)								int _g1 = 0;
HXDLIN( 819)								while((_g1 < buttons1->length)){
HXDLIN( 819)									int button = buttons1->__get(_g1);
HXDLIN( 819)									_g1 = (_g1 + 1);
HXDLIN( 819)									action1->addGamepad(button,state1,id1);
            								}
            							}
HXDLIN( 819)							{
HXDLIN( 819)								 ::flixel::input::actions::FlxActionDigital action2 = this->_noteupR;
HXDLIN( 819)								int state2 = -1;
HXDLIN( 819)								int _g2 = 0;
HXDLIN( 819)								while((_g2 < buttons1->length)){
HXDLIN( 819)									int button = buttons1->__get(_g2);
HXDLIN( 819)									_g2 = (_g2 + 1);
HXDLIN( 819)									action2->addGamepad(button,state2,id1);
            								}
            							}
            						}
            						break;
            						case (int)5: {
HXDLIN( 819)							{
HXDLIN( 819)								 ::flixel::input::actions::FlxActionDigital action = this->_noteleft;
HXDLIN( 819)								int state = 1;
HXDLIN( 819)								int _g = 0;
HXDLIN( 819)								while((_g < buttons1->length)){
HXDLIN( 819)									int button = buttons1->__get(_g);
HXDLIN( 819)									_g = (_g + 1);
HXDLIN( 819)									action->addGamepad(button,state,id1);
            								}
            							}
HXDLIN( 819)							{
HXDLIN( 819)								 ::flixel::input::actions::FlxActionDigital action1 = this->_noteleftP;
HXDLIN( 819)								int state1 = 2;
HXDLIN( 819)								int _g1 = 0;
HXDLIN( 819)								while((_g1 < buttons1->length)){
HXDLIN( 819)									int button = buttons1->__get(_g1);
HXDLIN( 819)									_g1 = (_g1 + 1);
HXDLIN( 819)									action1->addGamepad(button,state1,id1);
            								}
            							}
HXDLIN( 819)							{
HXDLIN( 819)								 ::flixel::input::actions::FlxActionDigital action2 = this->_noteleftR;
HXDLIN( 819)								int state2 = -1;
HXDLIN( 819)								int _g2 = 0;
HXDLIN( 819)								while((_g2 < buttons1->length)){
HXDLIN( 819)									int button = buttons1->__get(_g2);
HXDLIN( 819)									_g2 = (_g2 + 1);
HXDLIN( 819)									action2->addGamepad(button,state2,id1);
            								}
            							}
            						}
            						break;
            						case (int)6: {
HXDLIN( 819)							{
HXDLIN( 819)								 ::flixel::input::actions::FlxActionDigital action = this->_noteright;
HXDLIN( 819)								int state = 1;
HXDLIN( 819)								int _g = 0;
HXDLIN( 819)								while((_g < buttons1->length)){
HXDLIN( 819)									int button = buttons1->__get(_g);
HXDLIN( 819)									_g = (_g + 1);
HXDLIN( 819)									action->addGamepad(button,state,id1);
            								}
            							}
HXDLIN( 819)							{
HXDLIN( 819)								 ::flixel::input::actions::FlxActionDigital action1 = this->_noterightP;
HXDLIN( 819)								int state1 = 2;
HXDLIN( 819)								int _g1 = 0;
HXDLIN( 819)								while((_g1 < buttons1->length)){
HXDLIN( 819)									int button = buttons1->__get(_g1);
HXDLIN( 819)									_g1 = (_g1 + 1);
HXDLIN( 819)									action1->addGamepad(button,state1,id1);
            								}
            							}
HXDLIN( 819)							{
HXDLIN( 819)								 ::flixel::input::actions::FlxActionDigital action2 = this->_noterightR;
HXDLIN( 819)								int state2 = -1;
HXDLIN( 819)								int _g2 = 0;
HXDLIN( 819)								while((_g2 < buttons1->length)){
HXDLIN( 819)									int button = buttons1->__get(_g2);
HXDLIN( 819)									_g2 = (_g2 + 1);
HXDLIN( 819)									action2->addGamepad(button,state2,id1);
            								}
            							}
            						}
            						break;
            						case (int)7: {
HXDLIN( 819)							{
HXDLIN( 819)								 ::flixel::input::actions::FlxActionDigital action = this->_notedown;
HXDLIN( 819)								int state = 1;
HXDLIN( 819)								int _g = 0;
HXDLIN( 819)								while((_g < buttons1->length)){
HXDLIN( 819)									int button = buttons1->__get(_g);
HXDLIN( 819)									_g = (_g + 1);
HXDLIN( 819)									action->addGamepad(button,state,id1);
            								}
            							}
HXDLIN( 819)							{
HXDLIN( 819)								 ::flixel::input::actions::FlxActionDigital action1 = this->_notedownP;
HXDLIN( 819)								int state1 = 2;
HXDLIN( 819)								int _g1 = 0;
HXDLIN( 819)								while((_g1 < buttons1->length)){
HXDLIN( 819)									int button = buttons1->__get(_g1);
HXDLIN( 819)									_g1 = (_g1 + 1);
HXDLIN( 819)									action1->addGamepad(button,state1,id1);
            								}
            							}
HXDLIN( 819)							{
HXDLIN( 819)								 ::flixel::input::actions::FlxActionDigital action2 = this->_notedownR;
HXDLIN( 819)								int state2 = -1;
HXDLIN( 819)								int _g2 = 0;
HXDLIN( 819)								while((_g2 < buttons1->length)){
HXDLIN( 819)									int button = buttons1->__get(_g2);
HXDLIN( 819)									_g2 = (_g2 + 1);
HXDLIN( 819)									action2->addGamepad(button,state2,id1);
            								}
            							}
            						}
            						break;
            						case (int)8: {
HXDLIN( 819)							 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 819)							int state = 2;
HXDLIN( 819)							int _g = 0;
HXDLIN( 819)							while((_g < buttons1->length)){
HXDLIN( 819)								int button = buttons1->__get(_g);
HXDLIN( 819)								_g = (_g + 1);
HXDLIN( 819)								action->addGamepad(button,state,id1);
            							}
            						}
            						break;
            						case (int)9: {
HXDLIN( 819)							 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 819)							int state = 2;
HXDLIN( 819)							int _g = 0;
HXDLIN( 819)							while((_g < buttons1->length)){
HXDLIN( 819)								int button = buttons1->__get(_g);
HXDLIN( 819)								_g = (_g + 1);
HXDLIN( 819)								action->addGamepad(button,state,id1);
            							}
            						}
            						break;
            						case (int)10: {
HXDLIN( 819)							 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 819)							int state = 2;
HXDLIN( 819)							int _g = 0;
HXDLIN( 819)							while((_g < buttons1->length)){
HXDLIN( 819)								int button = buttons1->__get(_g);
HXDLIN( 819)								_g = (_g + 1);
HXDLIN( 819)								action->addGamepad(button,state,id1);
            							}
            						}
            						break;
            						case (int)11: {
HXDLIN( 819)							 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 819)							int state = 2;
HXDLIN( 819)							int _g = 0;
HXDLIN( 819)							while((_g < buttons1->length)){
HXDLIN( 819)								int button = buttons1->__get(_g);
HXDLIN( 819)								_g = (_g + 1);
HXDLIN( 819)								action->addGamepad(button,state,id1);
            							}
            						}
            						break;
            						case (int)12: {
HXDLIN( 819)							 ::flixel::input::actions::FlxActionDigital action = this->_cheat;
HXDLIN( 819)							int state = 2;
HXDLIN( 819)							int _g = 0;
HXDLIN( 819)							while((_g < buttons1->length)){
HXDLIN( 819)								int button = buttons1->__get(_g);
HXDLIN( 819)								_g = (_g + 1);
HXDLIN( 819)								action->addGamepad(button,state,id1);
            							}
            						}
            						break;
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Controls_obj,addDefaultGamepad,(void))

void Controls_obj::bindButtons( ::Control control,int id,::Array< int > buttons){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_853_bindButtons)
HXDLIN( 853)		switch((int)(control->_hx_getIndex())){
            			case (int)0: {
HXDLIN( 853)				{
HXDLIN( 853)					 ::flixel::input::actions::FlxActionDigital action = this->_up;
HXDLIN( 853)					int state = 1;
HXDLIN( 853)					int _g = 0;
HXDLIN( 853)					while((_g < buttons->length)){
HXDLIN( 853)						int button = buttons->__get(_g);
HXDLIN( 853)						_g = (_g + 1);
HXDLIN( 853)						action->addGamepad(button,state,id);
            					}
            				}
HXDLIN( 853)				{
HXDLIN( 853)					 ::flixel::input::actions::FlxActionDigital action1 = this->_upP;
HXDLIN( 853)					int state1 = 2;
HXDLIN( 853)					int _g1 = 0;
HXDLIN( 853)					while((_g1 < buttons->length)){
HXDLIN( 853)						int button = buttons->__get(_g1);
HXDLIN( 853)						_g1 = (_g1 + 1);
HXDLIN( 853)						action1->addGamepad(button,state1,id);
            					}
            				}
HXDLIN( 853)				{
HXDLIN( 853)					 ::flixel::input::actions::FlxActionDigital action2 = this->_upR;
HXDLIN( 853)					int state2 = -1;
HXDLIN( 853)					int _g2 = 0;
HXDLIN( 853)					while((_g2 < buttons->length)){
HXDLIN( 853)						int button = buttons->__get(_g2);
HXDLIN( 853)						_g2 = (_g2 + 1);
HXDLIN( 853)						action2->addGamepad(button,state2,id);
            					}
            				}
            			}
            			break;
            			case (int)1: {
HXDLIN( 853)				{
HXDLIN( 853)					 ::flixel::input::actions::FlxActionDigital action = this->_left;
HXDLIN( 853)					int state = 1;
HXDLIN( 853)					int _g = 0;
HXDLIN( 853)					while((_g < buttons->length)){
HXDLIN( 853)						int button = buttons->__get(_g);
HXDLIN( 853)						_g = (_g + 1);
HXDLIN( 853)						action->addGamepad(button,state,id);
            					}
            				}
HXDLIN( 853)				{
HXDLIN( 853)					 ::flixel::input::actions::FlxActionDigital action1 = this->_leftP;
HXDLIN( 853)					int state1 = 2;
HXDLIN( 853)					int _g1 = 0;
HXDLIN( 853)					while((_g1 < buttons->length)){
HXDLIN( 853)						int button = buttons->__get(_g1);
HXDLIN( 853)						_g1 = (_g1 + 1);
HXDLIN( 853)						action1->addGamepad(button,state1,id);
            					}
            				}
HXDLIN( 853)				{
HXDLIN( 853)					 ::flixel::input::actions::FlxActionDigital action2 = this->_leftR;
HXDLIN( 853)					int state2 = -1;
HXDLIN( 853)					int _g2 = 0;
HXDLIN( 853)					while((_g2 < buttons->length)){
HXDLIN( 853)						int button = buttons->__get(_g2);
HXDLIN( 853)						_g2 = (_g2 + 1);
HXDLIN( 853)						action2->addGamepad(button,state2,id);
            					}
            				}
            			}
            			break;
            			case (int)2: {
HXDLIN( 853)				{
HXDLIN( 853)					 ::flixel::input::actions::FlxActionDigital action = this->_right;
HXDLIN( 853)					int state = 1;
HXDLIN( 853)					int _g = 0;
HXDLIN( 853)					while((_g < buttons->length)){
HXDLIN( 853)						int button = buttons->__get(_g);
HXDLIN( 853)						_g = (_g + 1);
HXDLIN( 853)						action->addGamepad(button,state,id);
            					}
            				}
HXDLIN( 853)				{
HXDLIN( 853)					 ::flixel::input::actions::FlxActionDigital action1 = this->_rightP;
HXDLIN( 853)					int state1 = 2;
HXDLIN( 853)					int _g1 = 0;
HXDLIN( 853)					while((_g1 < buttons->length)){
HXDLIN( 853)						int button = buttons->__get(_g1);
HXDLIN( 853)						_g1 = (_g1 + 1);
HXDLIN( 853)						action1->addGamepad(button,state1,id);
            					}
            				}
HXDLIN( 853)				{
HXDLIN( 853)					 ::flixel::input::actions::FlxActionDigital action2 = this->_rightR;
HXDLIN( 853)					int state2 = -1;
HXDLIN( 853)					int _g2 = 0;
HXDLIN( 853)					while((_g2 < buttons->length)){
HXDLIN( 853)						int button = buttons->__get(_g2);
HXDLIN( 853)						_g2 = (_g2 + 1);
HXDLIN( 853)						action2->addGamepad(button,state2,id);
            					}
            				}
            			}
            			break;
            			case (int)3: {
HXDLIN( 853)				{
HXDLIN( 853)					 ::flixel::input::actions::FlxActionDigital action = this->_down;
HXDLIN( 853)					int state = 1;
HXDLIN( 853)					int _g = 0;
HXDLIN( 853)					while((_g < buttons->length)){
HXDLIN( 853)						int button = buttons->__get(_g);
HXDLIN( 853)						_g = (_g + 1);
HXDLIN( 853)						action->addGamepad(button,state,id);
            					}
            				}
HXDLIN( 853)				{
HXDLIN( 853)					 ::flixel::input::actions::FlxActionDigital action1 = this->_downP;
HXDLIN( 853)					int state1 = 2;
HXDLIN( 853)					int _g1 = 0;
HXDLIN( 853)					while((_g1 < buttons->length)){
HXDLIN( 853)						int button = buttons->__get(_g1);
HXDLIN( 853)						_g1 = (_g1 + 1);
HXDLIN( 853)						action1->addGamepad(button,state1,id);
            					}
            				}
HXDLIN( 853)				{
HXDLIN( 853)					 ::flixel::input::actions::FlxActionDigital action2 = this->_downR;
HXDLIN( 853)					int state2 = -1;
HXDLIN( 853)					int _g2 = 0;
HXDLIN( 853)					while((_g2 < buttons->length)){
HXDLIN( 853)						int button = buttons->__get(_g2);
HXDLIN( 853)						_g2 = (_g2 + 1);
HXDLIN( 853)						action2->addGamepad(button,state2,id);
            					}
            				}
            			}
            			break;
            			case (int)4: {
HXDLIN( 853)				{
HXDLIN( 853)					 ::flixel::input::actions::FlxActionDigital action = this->_noteup;
HXDLIN( 853)					int state = 1;
HXDLIN( 853)					int _g = 0;
HXDLIN( 853)					while((_g < buttons->length)){
HXDLIN( 853)						int button = buttons->__get(_g);
HXDLIN( 853)						_g = (_g + 1);
HXDLIN( 853)						action->addGamepad(button,state,id);
            					}
            				}
HXDLIN( 853)				{
HXDLIN( 853)					 ::flixel::input::actions::FlxActionDigital action1 = this->_noteupP;
HXDLIN( 853)					int state1 = 2;
HXDLIN( 853)					int _g1 = 0;
HXDLIN( 853)					while((_g1 < buttons->length)){
HXDLIN( 853)						int button = buttons->__get(_g1);
HXDLIN( 853)						_g1 = (_g1 + 1);
HXDLIN( 853)						action1->addGamepad(button,state1,id);
            					}
            				}
HXDLIN( 853)				{
HXDLIN( 853)					 ::flixel::input::actions::FlxActionDigital action2 = this->_noteupR;
HXDLIN( 853)					int state2 = -1;
HXDLIN( 853)					int _g2 = 0;
HXDLIN( 853)					while((_g2 < buttons->length)){
HXDLIN( 853)						int button = buttons->__get(_g2);
HXDLIN( 853)						_g2 = (_g2 + 1);
HXDLIN( 853)						action2->addGamepad(button,state2,id);
            					}
            				}
            			}
            			break;
            			case (int)5: {
HXDLIN( 853)				{
HXDLIN( 853)					 ::flixel::input::actions::FlxActionDigital action = this->_noteleft;
HXDLIN( 853)					int state = 1;
HXDLIN( 853)					int _g = 0;
HXDLIN( 853)					while((_g < buttons->length)){
HXDLIN( 853)						int button = buttons->__get(_g);
HXDLIN( 853)						_g = (_g + 1);
HXDLIN( 853)						action->addGamepad(button,state,id);
            					}
            				}
HXDLIN( 853)				{
HXDLIN( 853)					 ::flixel::input::actions::FlxActionDigital action1 = this->_noteleftP;
HXDLIN( 853)					int state1 = 2;
HXDLIN( 853)					int _g1 = 0;
HXDLIN( 853)					while((_g1 < buttons->length)){
HXDLIN( 853)						int button = buttons->__get(_g1);
HXDLIN( 853)						_g1 = (_g1 + 1);
HXDLIN( 853)						action1->addGamepad(button,state1,id);
            					}
            				}
HXDLIN( 853)				{
HXDLIN( 853)					 ::flixel::input::actions::FlxActionDigital action2 = this->_noteleftR;
HXDLIN( 853)					int state2 = -1;
HXDLIN( 853)					int _g2 = 0;
HXDLIN( 853)					while((_g2 < buttons->length)){
HXDLIN( 853)						int button = buttons->__get(_g2);
HXDLIN( 853)						_g2 = (_g2 + 1);
HXDLIN( 853)						action2->addGamepad(button,state2,id);
            					}
            				}
            			}
            			break;
            			case (int)6: {
HXDLIN( 853)				{
HXDLIN( 853)					 ::flixel::input::actions::FlxActionDigital action = this->_noteright;
HXDLIN( 853)					int state = 1;
HXDLIN( 853)					int _g = 0;
HXDLIN( 853)					while((_g < buttons->length)){
HXDLIN( 853)						int button = buttons->__get(_g);
HXDLIN( 853)						_g = (_g + 1);
HXDLIN( 853)						action->addGamepad(button,state,id);
            					}
            				}
HXDLIN( 853)				{
HXDLIN( 853)					 ::flixel::input::actions::FlxActionDigital action1 = this->_noterightP;
HXDLIN( 853)					int state1 = 2;
HXDLIN( 853)					int _g1 = 0;
HXDLIN( 853)					while((_g1 < buttons->length)){
HXDLIN( 853)						int button = buttons->__get(_g1);
HXDLIN( 853)						_g1 = (_g1 + 1);
HXDLIN( 853)						action1->addGamepad(button,state1,id);
            					}
            				}
HXDLIN( 853)				{
HXDLIN( 853)					 ::flixel::input::actions::FlxActionDigital action2 = this->_noterightR;
HXDLIN( 853)					int state2 = -1;
HXDLIN( 853)					int _g2 = 0;
HXDLIN( 853)					while((_g2 < buttons->length)){
HXDLIN( 853)						int button = buttons->__get(_g2);
HXDLIN( 853)						_g2 = (_g2 + 1);
HXDLIN( 853)						action2->addGamepad(button,state2,id);
            					}
            				}
            			}
            			break;
            			case (int)7: {
HXDLIN( 853)				{
HXDLIN( 853)					 ::flixel::input::actions::FlxActionDigital action = this->_notedown;
HXDLIN( 853)					int state = 1;
HXDLIN( 853)					int _g = 0;
HXDLIN( 853)					while((_g < buttons->length)){
HXDLIN( 853)						int button = buttons->__get(_g);
HXDLIN( 853)						_g = (_g + 1);
HXDLIN( 853)						action->addGamepad(button,state,id);
            					}
            				}
HXDLIN( 853)				{
HXDLIN( 853)					 ::flixel::input::actions::FlxActionDigital action1 = this->_notedownP;
HXDLIN( 853)					int state1 = 2;
HXDLIN( 853)					int _g1 = 0;
HXDLIN( 853)					while((_g1 < buttons->length)){
HXDLIN( 853)						int button = buttons->__get(_g1);
HXDLIN( 853)						_g1 = (_g1 + 1);
HXDLIN( 853)						action1->addGamepad(button,state1,id);
            					}
            				}
HXDLIN( 853)				{
HXDLIN( 853)					 ::flixel::input::actions::FlxActionDigital action2 = this->_notedownR;
HXDLIN( 853)					int state2 = -1;
HXDLIN( 853)					int _g2 = 0;
HXDLIN( 853)					while((_g2 < buttons->length)){
HXDLIN( 853)						int button = buttons->__get(_g2);
HXDLIN( 853)						_g2 = (_g2 + 1);
HXDLIN( 853)						action2->addGamepad(button,state2,id);
            					}
            				}
            			}
            			break;
            			case (int)8: {
HXDLIN( 853)				 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 853)				int state = 2;
HXDLIN( 853)				int _g = 0;
HXDLIN( 853)				while((_g < buttons->length)){
HXDLIN( 853)					int button = buttons->__get(_g);
HXDLIN( 853)					_g = (_g + 1);
HXDLIN( 853)					action->addGamepad(button,state,id);
            				}
            			}
            			break;
            			case (int)9: {
HXDLIN( 853)				 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 853)				int state = 2;
HXDLIN( 853)				int _g = 0;
HXDLIN( 853)				while((_g < buttons->length)){
HXDLIN( 853)					int button = buttons->__get(_g);
HXDLIN( 853)					_g = (_g + 1);
HXDLIN( 853)					action->addGamepad(button,state,id);
            				}
            			}
            			break;
            			case (int)10: {
HXDLIN( 853)				 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 853)				int state = 2;
HXDLIN( 853)				int _g = 0;
HXDLIN( 853)				while((_g < buttons->length)){
HXDLIN( 853)					int button = buttons->__get(_g);
HXDLIN( 853)					_g = (_g + 1);
HXDLIN( 853)					action->addGamepad(button,state,id);
            				}
            			}
            			break;
            			case (int)11: {
HXDLIN( 853)				 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 853)				int state = 2;
HXDLIN( 853)				int _g = 0;
HXDLIN( 853)				while((_g < buttons->length)){
HXDLIN( 853)					int button = buttons->__get(_g);
HXDLIN( 853)					_g = (_g + 1);
HXDLIN( 853)					action->addGamepad(button,state,id);
            				}
            			}
            			break;
            			case (int)12: {
HXDLIN( 853)				 ::flixel::input::actions::FlxActionDigital action = this->_cheat;
HXDLIN( 853)				int state = 2;
HXDLIN( 853)				int _g = 0;
HXDLIN( 853)				while((_g < buttons->length)){
HXDLIN( 853)					int button = buttons->__get(_g);
HXDLIN( 853)					_g = (_g + 1);
HXDLIN( 853)					action->addGamepad(button,state,id);
            				}
            			}
            			break;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(Controls_obj,bindButtons,(void))

void Controls_obj::unbindButtons( ::Control control,int gamepadID,::Array< int > buttons){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_866_unbindButtons)
HXDLIN( 866)		switch((int)(control->_hx_getIndex())){
            			case (int)0: {
HXDLIN( 866)				::Controls_obj::removeButtons(this->_up,gamepadID,buttons);
HXDLIN( 866)				::Controls_obj::removeButtons(this->_upP,gamepadID,buttons);
HXDLIN( 866)				::Controls_obj::removeButtons(this->_upR,gamepadID,buttons);
            			}
            			break;
            			case (int)1: {
HXDLIN( 866)				::Controls_obj::removeButtons(this->_left,gamepadID,buttons);
HXDLIN( 866)				::Controls_obj::removeButtons(this->_leftP,gamepadID,buttons);
HXDLIN( 866)				::Controls_obj::removeButtons(this->_leftR,gamepadID,buttons);
            			}
            			break;
            			case (int)2: {
HXDLIN( 866)				::Controls_obj::removeButtons(this->_right,gamepadID,buttons);
HXDLIN( 866)				::Controls_obj::removeButtons(this->_rightP,gamepadID,buttons);
HXDLIN( 866)				::Controls_obj::removeButtons(this->_rightR,gamepadID,buttons);
            			}
            			break;
            			case (int)3: {
HXDLIN( 866)				::Controls_obj::removeButtons(this->_down,gamepadID,buttons);
HXDLIN( 866)				::Controls_obj::removeButtons(this->_downP,gamepadID,buttons);
HXDLIN( 866)				::Controls_obj::removeButtons(this->_downR,gamepadID,buttons);
            			}
            			break;
            			case (int)4: {
HXDLIN( 866)				::Controls_obj::removeButtons(this->_noteup,gamepadID,buttons);
HXDLIN( 866)				::Controls_obj::removeButtons(this->_noteupP,gamepadID,buttons);
HXDLIN( 866)				::Controls_obj::removeButtons(this->_noteupR,gamepadID,buttons);
            			}
            			break;
            			case (int)5: {
HXDLIN( 866)				::Controls_obj::removeButtons(this->_noteleft,gamepadID,buttons);
HXDLIN( 866)				::Controls_obj::removeButtons(this->_noteleftP,gamepadID,buttons);
HXDLIN( 866)				::Controls_obj::removeButtons(this->_noteleftR,gamepadID,buttons);
            			}
            			break;
            			case (int)6: {
HXDLIN( 866)				::Controls_obj::removeButtons(this->_noteright,gamepadID,buttons);
HXDLIN( 866)				::Controls_obj::removeButtons(this->_noterightP,gamepadID,buttons);
HXDLIN( 866)				::Controls_obj::removeButtons(this->_noterightR,gamepadID,buttons);
            			}
            			break;
            			case (int)7: {
HXDLIN( 866)				::Controls_obj::removeButtons(this->_notedown,gamepadID,buttons);
HXDLIN( 866)				::Controls_obj::removeButtons(this->_notedownP,gamepadID,buttons);
HXDLIN( 866)				::Controls_obj::removeButtons(this->_notedownR,gamepadID,buttons);
            			}
            			break;
            			case (int)8: {
HXDLIN( 866)				::Controls_obj::removeButtons(this->_reset,gamepadID,buttons);
            			}
            			break;
            			case (int)9: {
HXDLIN( 866)				::Controls_obj::removeButtons(this->_accept,gamepadID,buttons);
            			}
            			break;
            			case (int)10: {
HXDLIN( 866)				::Controls_obj::removeButtons(this->_back,gamepadID,buttons);
            			}
            			break;
            			case (int)11: {
HXDLIN( 866)				::Controls_obj::removeButtons(this->_pause,gamepadID,buttons);
            			}
            			break;
            			case (int)12: {
HXDLIN( 866)				::Controls_obj::removeButtons(this->_cheat,gamepadID,buttons);
            			}
            			break;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(Controls_obj,unbindButtons,(void))

::Array< int > Controls_obj::getInputsFor( ::Control control, ::Device device,::Array< int > list){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_890_getInputsFor)
HXLINE( 891)		if (::hx::IsNull( list )) {
HXLINE( 892)			list = ::Array_obj< int >::__new(0);
            		}
HXLINE( 894)		switch((int)(device->_hx_getIndex())){
            			case (int)0: {
HXLINE( 897)				int _g = 0;
HXDLIN( 897)				::Array< ::Dynamic> _g1 = this->getActionFromControl(control)->inputs;
HXDLIN( 897)				while((_g < _g1->length)){
HXLINE( 897)					 ::flixel::input::actions::FlxActionInput input = _g1->__get(_g).StaticCast<  ::flixel::input::actions::FlxActionInput >();
HXDLIN( 897)					_g = (_g + 1);
HXLINE( 899)					if (::hx::IsPointerEq( input->device,::flixel::input::actions::FlxInputDevice_obj::KEYBOARD_dyn() )) {
HXLINE( 900)						list->push(input->inputID);
            					}
            				}
            			}
            			break;
            			case (int)1: {
HXLINE( 902)				int id = device->_hx_getInt(0);
HXLINE( 903)				{
HXLINE( 903)					int _g = 0;
HXDLIN( 903)					::Array< ::Dynamic> _g1 = this->getActionFromControl(control)->inputs;
HXDLIN( 903)					while((_g < _g1->length)){
HXLINE( 903)						 ::flixel::input::actions::FlxActionInput input = _g1->__get(_g).StaticCast<  ::flixel::input::actions::FlxActionInput >();
HXDLIN( 903)						_g = (_g + 1);
HXLINE( 905)						if ((input->deviceID == id)) {
HXLINE( 906)							list->push(input->inputID);
            						}
            					}
            				}
            			}
            			break;
            		}
HXLINE( 909)		return list;
            	}


HX_DEFINE_DYNAMIC_FUNC3(Controls_obj,getInputsFor,return )

void Controls_obj::removeDevice( ::Device device){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_914_removeDevice)
HXDLIN( 914)		switch((int)(device->_hx_getIndex())){
            			case (int)0: {
HXLINE( 917)				this->setKeyboardScheme(::KeyboardScheme_obj::None_dyn(),null());
            			}
            			break;
            			case (int)1: {
HXLINE( 918)				int id = device->_hx_getInt(0);
HXLINE( 919)				this->removeGamepad(id);
            			}
            			break;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Controls_obj,removeDevice,(void))

void Controls_obj::init(){
            	HX_GC_STACKFRAME(&_hx_pos_948b5caa279cd923_446_init)
HXLINE( 447)		 ::flixel::input::actions::FlxActionManager actions =  ::flixel::input::actions::FlxActionManager_obj::__alloc( HX_CTX );
HXLINE( 448)		::flixel::FlxG_obj::inputs->add_flixel_input_actions_FlxActionManager(actions);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,init,(void))

void Controls_obj::addKeys( ::flixel::input::actions::FlxActionDigital action,::Array< int > keys,int state){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_620_addKeys)
HXDLIN( 620)		int _g = 0;
HXDLIN( 620)		while((_g < keys->length)){
HXDLIN( 620)			int key = keys->__get(_g);
HXDLIN( 620)			_g = (_g + 1);
HXLINE( 621)			action->addKey(key,state);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Controls_obj,addKeys,(void))

void Controls_obj::removeKeys( ::flixel::input::actions::FlxActionDigital action,::Array< int > keys){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_625_removeKeys)
HXLINE( 626)		int i = action->inputs->length;
HXLINE( 627)		while(true){
HXLINE( 627)			i = (i - 1);
HXDLIN( 627)			if (!(((i + 1) > 0))) {
HXLINE( 627)				goto _hx_goto_584;
            			}
HXLINE( 629)			 ::flixel::input::actions::FlxActionInput input = action->inputs->__get(i).StaticCast<  ::flixel::input::actions::FlxActionInput >();
HXLINE( 630)			bool _hx_tmp;
HXDLIN( 630)			if (::hx::IsPointerEq( input->device,::flixel::input::actions::FlxInputDevice_obj::KEYBOARD_dyn() )) {
HXLINE( 630)				_hx_tmp = (keys->indexOf(input->inputID,null()) != -1);
            			}
            			else {
HXLINE( 630)				_hx_tmp = false;
            			}
HXDLIN( 630)			if (_hx_tmp) {
HXLINE( 631)				action->remove(input,null());
            			}
            		}
            		_hx_goto_584:;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Controls_obj,removeKeys,(void))

void Controls_obj::addButtons( ::flixel::input::actions::FlxActionDigital action,::Array< int > buttons,int state,int id){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_874_addButtons)
HXDLIN( 874)		int _g = 0;
HXDLIN( 874)		while((_g < buttons->length)){
HXDLIN( 874)			int button = buttons->__get(_g);
HXDLIN( 874)			_g = (_g + 1);
HXLINE( 875)			action->addGamepad(button,state,id);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Controls_obj,addButtons,(void))

void Controls_obj::removeButtons( ::flixel::input::actions::FlxActionDigital action,int gamepadID,::Array< int > buttons){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_879_removeButtons)
HXLINE( 880)		int i = action->inputs->length;
HXLINE( 881)		while(true){
HXLINE( 881)			i = (i - 1);
HXDLIN( 881)			if (!(((i + 1) > 0))) {
HXLINE( 881)				goto _hx_goto_588;
            			}
HXLINE( 883)			 ::flixel::input::actions::FlxActionInput input = action->inputs->__get(i).StaticCast<  ::flixel::input::actions::FlxActionInput >();
HXLINE( 884)			bool _hx_tmp;
HXDLIN( 884)			bool _hx_tmp1;
HXDLIN( 884)			if (::hx::IsPointerEq( input->device,::flixel::input::actions::FlxInputDevice_obj::GAMEPAD_dyn() )) {
HXLINE( 884)				if ((gamepadID != -1)) {
HXLINE( 884)					_hx_tmp1 = (input->deviceID == gamepadID);
            				}
            				else {
HXLINE( 884)					_hx_tmp1 = true;
            				}
            			}
            			else {
HXLINE( 884)				_hx_tmp1 = false;
            			}
HXDLIN( 884)			if (_hx_tmp1) {
HXLINE( 884)				_hx_tmp = (buttons->indexOf(input->inputID,null()) != -1);
            			}
            			else {
HXLINE( 884)				_hx_tmp = false;
            			}
HXDLIN( 884)			if (_hx_tmp) {
HXLINE( 885)				action->remove(input,null());
            			}
            		}
            		_hx_goto_588:;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Controls_obj,removeButtons,(void))

bool Controls_obj::isDevice( ::flixel::input::actions::FlxActionInput input, ::Device device){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_925_isDevice)
HXDLIN( 925)		switch((int)(device->_hx_getIndex())){
            			case (int)0: {
HXLINE( 927)				return ::hx::IsPointerEq( input->device,::flixel::input::actions::FlxInputDevice_obj::KEYBOARD_dyn() );
            			}
            			break;
            			case (int)1: {
HXLINE( 928)				int id = device->_hx_getInt(0);
HXDLIN( 928)				if (::hx::IsPointerEq( input->device,::flixel::input::actions::FlxInputDevice_obj::GAMEPAD_dyn() )) {
HXLINE( 928)					if ((id != -1)) {
HXLINE( 928)						return (input->deviceID == id);
            					}
            					else {
HXLINE( 928)						return true;
            					}
            				}
            				else {
HXLINE( 928)					return false;
            				}
            			}
            			break;
            		}
HXLINE( 925)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Controls_obj,isDevice,return )

bool Controls_obj::isGamepad( ::flixel::input::actions::FlxActionInput input,int deviceID){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_934_isGamepad)
HXDLIN( 934)		if (::hx::IsPointerEq( input->device,::flixel::input::actions::FlxInputDevice_obj::GAMEPAD_dyn() )) {
HXDLIN( 934)			if ((deviceID != -1)) {
HXDLIN( 934)				return (input->deviceID == deviceID);
            			}
            			else {
HXDLIN( 934)				return true;
            			}
            		}
            		else {
HXDLIN( 934)			return false;
            		}
HXDLIN( 934)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Controls_obj,isGamepad,return )


::hx::ObjectPtr< Controls_obj > Controls_obj::__new(::String name, ::KeyboardScheme __o_scheme) {
	::hx::ObjectPtr< Controls_obj > __this = new Controls_obj();
	__this->__construct(name,__o_scheme);
	return __this;
}

::hx::ObjectPtr< Controls_obj > Controls_obj::__alloc(::hx::Ctx *_hx_ctx,::String name, ::KeyboardScheme __o_scheme) {
	Controls_obj *__this = (Controls_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Controls_obj), true, "Controls"));
	*(void **)__this = Controls_obj::_hx_vtable;
	__this->__construct(name,__o_scheme);
	return __this;
}

Controls_obj::Controls_obj()
{
}

void Controls_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Controls);
	HX_MARK_MEMBER_NAME(_up,"_up");
	HX_MARK_MEMBER_NAME(_left,"_left");
	HX_MARK_MEMBER_NAME(_right,"_right");
	HX_MARK_MEMBER_NAME(_down,"_down");
	HX_MARK_MEMBER_NAME(_upP,"_upP");
	HX_MARK_MEMBER_NAME(_leftP,"_leftP");
	HX_MARK_MEMBER_NAME(_rightP,"_rightP");
	HX_MARK_MEMBER_NAME(_downP,"_downP");
	HX_MARK_MEMBER_NAME(_upR,"_upR");
	HX_MARK_MEMBER_NAME(_leftR,"_leftR");
	HX_MARK_MEMBER_NAME(_rightR,"_rightR");
	HX_MARK_MEMBER_NAME(_downR,"_downR");
	HX_MARK_MEMBER_NAME(_noteup,"_noteup");
	HX_MARK_MEMBER_NAME(_noteleft,"_noteleft");
	HX_MARK_MEMBER_NAME(_noteright,"_noteright");
	HX_MARK_MEMBER_NAME(_notedown,"_notedown");
	HX_MARK_MEMBER_NAME(_noteupP,"_noteupP");
	HX_MARK_MEMBER_NAME(_noteleftP,"_noteleftP");
	HX_MARK_MEMBER_NAME(_noterightP,"_noterightP");
	HX_MARK_MEMBER_NAME(_notedownP,"_notedownP");
	HX_MARK_MEMBER_NAME(_noteupR,"_noteupR");
	HX_MARK_MEMBER_NAME(_noteleftR,"_noteleftR");
	HX_MARK_MEMBER_NAME(_noterightR,"_noterightR");
	HX_MARK_MEMBER_NAME(_notedownR,"_notedownR");
	HX_MARK_MEMBER_NAME(_accept,"_accept");
	HX_MARK_MEMBER_NAME(_back,"_back");
	HX_MARK_MEMBER_NAME(_pause,"_pause");
	HX_MARK_MEMBER_NAME(_reset,"_reset");
	HX_MARK_MEMBER_NAME(_cheat,"_cheat");
	HX_MARK_MEMBER_NAME(byName,"byName");
	HX_MARK_MEMBER_NAME(gamepadsAdded,"gamepadsAdded");
	HX_MARK_MEMBER_NAME(keyboardScheme,"keyboardScheme");
	 ::flixel::input::actions::FlxActionSet_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Controls_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_up,"_up");
	HX_VISIT_MEMBER_NAME(_left,"_left");
	HX_VISIT_MEMBER_NAME(_right,"_right");
	HX_VISIT_MEMBER_NAME(_down,"_down");
	HX_VISIT_MEMBER_NAME(_upP,"_upP");
	HX_VISIT_MEMBER_NAME(_leftP,"_leftP");
	HX_VISIT_MEMBER_NAME(_rightP,"_rightP");
	HX_VISIT_MEMBER_NAME(_downP,"_downP");
	HX_VISIT_MEMBER_NAME(_upR,"_upR");
	HX_VISIT_MEMBER_NAME(_leftR,"_leftR");
	HX_VISIT_MEMBER_NAME(_rightR,"_rightR");
	HX_VISIT_MEMBER_NAME(_downR,"_downR");
	HX_VISIT_MEMBER_NAME(_noteup,"_noteup");
	HX_VISIT_MEMBER_NAME(_noteleft,"_noteleft");
	HX_VISIT_MEMBER_NAME(_noteright,"_noteright");
	HX_VISIT_MEMBER_NAME(_notedown,"_notedown");
	HX_VISIT_MEMBER_NAME(_noteupP,"_noteupP");
	HX_VISIT_MEMBER_NAME(_noteleftP,"_noteleftP");
	HX_VISIT_MEMBER_NAME(_noterightP,"_noterightP");
	HX_VISIT_MEMBER_NAME(_notedownP,"_notedownP");
	HX_VISIT_MEMBER_NAME(_noteupR,"_noteupR");
	HX_VISIT_MEMBER_NAME(_noteleftR,"_noteleftR");
	HX_VISIT_MEMBER_NAME(_noterightR,"_noterightR");
	HX_VISIT_MEMBER_NAME(_notedownR,"_notedownR");
	HX_VISIT_MEMBER_NAME(_accept,"_accept");
	HX_VISIT_MEMBER_NAME(_back,"_back");
	HX_VISIT_MEMBER_NAME(_pause,"_pause");
	HX_VISIT_MEMBER_NAME(_reset,"_reset");
	HX_VISIT_MEMBER_NAME(_cheat,"_cheat");
	HX_VISIT_MEMBER_NAME(byName,"byName");
	HX_VISIT_MEMBER_NAME(gamepadsAdded,"gamepadsAdded");
	HX_VISIT_MEMBER_NAME(keyboardScheme,"keyboardScheme");
	 ::flixel::input::actions::FlxActionSet_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Controls_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"UP") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_UP() ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"_up") ) { return ::hx::Val( _up ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_upP") ) { return ::hx::Val( _upP ); }
		if (HX_FIELD_EQ(inName,"_upR") ) { return ::hx::Val( _upR ); }
		if (HX_FIELD_EQ(inName,"LEFT") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_LEFT() ); }
		if (HX_FIELD_EQ(inName,"DOWN") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_DOWN() ); }
		if (HX_FIELD_EQ(inName,"UP_P") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_UP_P() ); }
		if (HX_FIELD_EQ(inName,"UP_R") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_UP_R() ); }
		if (HX_FIELD_EQ(inName,"BACK") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_BACK() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_left") ) { return ::hx::Val( _left ); }
		if (HX_FIELD_EQ(inName,"_down") ) { return ::hx::Val( _down ); }
		if (HX_FIELD_EQ(inName,"_back") ) { return ::hx::Val( _back ); }
		if (HX_FIELD_EQ(inName,"RIGHT") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_RIGHT() ); }
		if (HX_FIELD_EQ(inName,"PAUSE") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_PAUSE() ); }
		if (HX_FIELD_EQ(inName,"RESET") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_RESET() ); }
		if (HX_FIELD_EQ(inName,"CHEAT") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_CHEAT() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_right") ) { return ::hx::Val( _right ); }
		if (HX_FIELD_EQ(inName,"_leftP") ) { return ::hx::Val( _leftP ); }
		if (HX_FIELD_EQ(inName,"_downP") ) { return ::hx::Val( _downP ); }
		if (HX_FIELD_EQ(inName,"_leftR") ) { return ::hx::Val( _leftR ); }
		if (HX_FIELD_EQ(inName,"_downR") ) { return ::hx::Val( _downR ); }
		if (HX_FIELD_EQ(inName,"_pause") ) { return ::hx::Val( _pause ); }
		if (HX_FIELD_EQ(inName,"_reset") ) { return ::hx::Val( _reset ); }
		if (HX_FIELD_EQ(inName,"_cheat") ) { return ::hx::Val( _cheat ); }
		if (HX_FIELD_EQ(inName,"byName") ) { return ::hx::Val( byName ); }
		if (HX_FIELD_EQ(inName,"get_UP") ) { return ::hx::Val( get_UP_dyn() ); }
		if (HX_FIELD_EQ(inName,"LEFT_P") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_LEFT_P() ); }
		if (HX_FIELD_EQ(inName,"DOWN_P") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_DOWN_P() ); }
		if (HX_FIELD_EQ(inName,"LEFT_R") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_LEFT_R() ); }
		if (HX_FIELD_EQ(inName,"DOWN_R") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_DOWN_R() ); }
		if (HX_FIELD_EQ(inName,"ACCEPT") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_ACCEPT() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		if (HX_FIELD_EQ(inName,"copyTo") ) { return ::hx::Val( copyTo_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_rightP") ) { return ::hx::Val( _rightP ); }
		if (HX_FIELD_EQ(inName,"_rightR") ) { return ::hx::Val( _rightR ); }
		if (HX_FIELD_EQ(inName,"_noteup") ) { return ::hx::Val( _noteup ); }
		if (HX_FIELD_EQ(inName,"_accept") ) { return ::hx::Val( _accept ); }
		if (HX_FIELD_EQ(inName,"RIGHT_P") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_RIGHT_P() ); }
		if (HX_FIELD_EQ(inName,"RIGHT_R") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_RIGHT_R() ); }
		if (HX_FIELD_EQ(inName,"NOTE_UP") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_NOTE_UP() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_noteupP") ) { return ::hx::Val( _noteupP ); }
		if (HX_FIELD_EQ(inName,"_noteupR") ) { return ::hx::Val( _noteupR ); }
		if (HX_FIELD_EQ(inName,"get_LEFT") ) { return ::hx::Val( get_LEFT_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_DOWN") ) { return ::hx::Val( get_DOWN_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_UP_P") ) { return ::hx::Val( get_UP_P_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_UP_R") ) { return ::hx::Val( get_UP_R_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_BACK") ) { return ::hx::Val( get_BACK_dyn() ); }
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return ::hx::Val( copyFrom_dyn() ); }
		if (HX_FIELD_EQ(inName,"bindKeys") ) { return ::hx::Val( bindKeys_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_noteleft") ) { return ::hx::Val( _noteleft ); }
		if (HX_FIELD_EQ(inName,"_notedown") ) { return ::hx::Val( _notedown ); }
		if (HX_FIELD_EQ(inName,"get_RIGHT") ) { return ::hx::Val( get_RIGHT_dyn() ); }
		if (HX_FIELD_EQ(inName,"NOTE_LEFT") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_NOTE_LEFT() ); }
		if (HX_FIELD_EQ(inName,"NOTE_DOWN") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_NOTE_DOWN() ); }
		if (HX_FIELD_EQ(inName,"NOTE_UP_P") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_NOTE_UP_P() ); }
		if (HX_FIELD_EQ(inName,"NOTE_UP_R") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_NOTE_UP_R() ); }
		if (HX_FIELD_EQ(inName,"get_PAUSE") ) { return ::hx::Val( get_PAUSE_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_RESET") ) { return ::hx::Val( get_RESET_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_CHEAT") ) { return ::hx::Val( get_CHEAT_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_noteright") ) { return ::hx::Val( _noteright ); }
		if (HX_FIELD_EQ(inName,"_noteleftP") ) { return ::hx::Val( _noteleftP ); }
		if (HX_FIELD_EQ(inName,"_notedownP") ) { return ::hx::Val( _notedownP ); }
		if (HX_FIELD_EQ(inName,"_noteleftR") ) { return ::hx::Val( _noteleftR ); }
		if (HX_FIELD_EQ(inName,"_notedownR") ) { return ::hx::Val( _notedownR ); }
		if (HX_FIELD_EQ(inName,"get_LEFT_P") ) { return ::hx::Val( get_LEFT_P_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_DOWN_P") ) { return ::hx::Val( get_DOWN_P_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_LEFT_R") ) { return ::hx::Val( get_LEFT_R_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_DOWN_R") ) { return ::hx::Val( get_DOWN_R_dyn() ); }
		if (HX_FIELD_EQ(inName,"NOTE_RIGHT") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_NOTE_RIGHT() ); }
		if (HX_FIELD_EQ(inName,"get_ACCEPT") ) { return ::hx::Val( get_ACCEPT_dyn() ); }
		if (HX_FIELD_EQ(inName,"unbindKeys") ) { return ::hx::Val( unbindKeys_dyn() ); }
		if (HX_FIELD_EQ(inName,"addGamepad") ) { return ::hx::Val( addGamepad_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_noterightP") ) { return ::hx::Val( _noterightP ); }
		if (HX_FIELD_EQ(inName,"_noterightR") ) { return ::hx::Val( _noterightR ); }
		if (HX_FIELD_EQ(inName,"get_RIGHT_P") ) { return ::hx::Val( get_RIGHT_P_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_RIGHT_R") ) { return ::hx::Val( get_RIGHT_R_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_NOTE_UP") ) { return ::hx::Val( get_NOTE_UP_dyn() ); }
		if (HX_FIELD_EQ(inName,"NOTE_LEFT_P") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_NOTE_LEFT_P() ); }
		if (HX_FIELD_EQ(inName,"NOTE_DOWN_P") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_NOTE_DOWN_P() ); }
		if (HX_FIELD_EQ(inName,"NOTE_LEFT_R") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_NOTE_LEFT_R() ); }
		if (HX_FIELD_EQ(inName,"NOTE_DOWN_R") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_NOTE_DOWN_R() ); }
		if (HX_FIELD_EQ(inName,"checkByName") ) { return ::hx::Val( checkByName_dyn() ); }
		if (HX_FIELD_EQ(inName,"bindButtons") ) { return ::hx::Val( bindButtons_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"NOTE_RIGHT_P") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_NOTE_RIGHT_P() ); }
		if (HX_FIELD_EQ(inName,"NOTE_RIGHT_R") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_NOTE_RIGHT_R() ); }
		if (HX_FIELD_EQ(inName,"forEachBound") ) { return ::hx::Val( forEachBound_dyn() ); }
		if (HX_FIELD_EQ(inName,"loadKeyBinds") ) { return ::hx::Val( loadKeyBinds_dyn() ); }
		if (HX_FIELD_EQ(inName,"getInputsFor") ) { return ::hx::Val( getInputsFor_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeDevice") ) { return ::hx::Val( removeDevice_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"gamepadsAdded") ) { return ::hx::Val( gamepadsAdded ); }
		if (HX_FIELD_EQ(inName,"get_NOTE_LEFT") ) { return ::hx::Val( get_NOTE_LEFT_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_NOTE_DOWN") ) { return ::hx::Val( get_NOTE_DOWN_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_NOTE_UP_P") ) { return ::hx::Val( get_NOTE_UP_P_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_NOTE_UP_R") ) { return ::hx::Val( get_NOTE_UP_R_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeGamepad") ) { return ::hx::Val( removeGamepad_dyn() ); }
		if (HX_FIELD_EQ(inName,"unbindButtons") ) { return ::hx::Val( unbindButtons_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"keyboardScheme") ) { return ::hx::Val( keyboardScheme ); }
		if (HX_FIELD_EQ(inName,"get_NOTE_RIGHT") ) { return ::hx::Val( get_NOTE_RIGHT_dyn() ); }
		if (HX_FIELD_EQ(inName,"replaceBinding") ) { return ::hx::Val( replaceBinding_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeKeyboard") ) { return ::hx::Val( removeKeyboard_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_NOTE_LEFT_P") ) { return ::hx::Val( get_NOTE_LEFT_P_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_NOTE_DOWN_P") ) { return ::hx::Val( get_NOTE_DOWN_P_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_NOTE_LEFT_R") ) { return ::hx::Val( get_NOTE_LEFT_R_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_NOTE_DOWN_R") ) { return ::hx::Val( get_NOTE_DOWN_R_dyn() ); }
		if (HX_FIELD_EQ(inName,"getDialogueName") ) { return ::hx::Val( getDialogueName_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_NOTE_RIGHT_P") ) { return ::hx::Val( get_NOTE_RIGHT_P_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_NOTE_RIGHT_R") ) { return ::hx::Val( get_NOTE_RIGHT_R_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"setKeyboardScheme") ) { return ::hx::Val( setKeyboardScheme_dyn() ); }
		if (HX_FIELD_EQ(inName,"addGamepadLiteral") ) { return ::hx::Val( addGamepadLiteral_dyn() ); }
		if (HX_FIELD_EQ(inName,"addDefaultGamepad") ) { return ::hx::Val( addDefaultGamepad_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"mergeKeyboardScheme") ) { return ::hx::Val( mergeKeyboardScheme_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getActionFromControl") ) { return ::hx::Val( getActionFromControl_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"getDialogueNameFromToken") ) { return ::hx::Val( getDialogueNameFromToken_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Controls_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { outValue = init_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"addKeys") ) { outValue = addKeys_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isDevice") ) { outValue = isDevice_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isGamepad") ) { outValue = isGamepad_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"removeKeys") ) { outValue = removeKeys_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"addButtons") ) { outValue = addButtons_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"removeButtons") ) { outValue = removeButtons_dyn(); return true; }
	}
	return false;
}

::hx::Val Controls_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_up") ) { _up=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_upP") ) { _upP=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_upR") ) { _upR=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_left") ) { _left=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_down") ) { _down=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_back") ) { _back=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_right") ) { _right=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_leftP") ) { _leftP=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_downP") ) { _downP=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_leftR") ) { _leftR=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_downR") ) { _downR=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_pause") ) { _pause=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_reset") ) { _reset=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_cheat") ) { _cheat=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"byName") ) { byName=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_rightP") ) { _rightP=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rightR") ) { _rightR=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_noteup") ) { _noteup=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_accept") ) { _accept=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_noteupP") ) { _noteupP=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_noteupR") ) { _noteupR=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_noteleft") ) { _noteleft=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_notedown") ) { _notedown=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_noteright") ) { _noteright=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_noteleftP") ) { _noteleftP=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_notedownP") ) { _notedownP=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_noteleftR") ) { _noteleftR=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_notedownR") ) { _notedownR=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_noterightP") ) { _noterightP=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_noterightR") ) { _noterightR=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"gamepadsAdded") ) { gamepadsAdded=inValue.Cast< ::Array< int > >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"keyboardScheme") ) { keyboardScheme=inValue.Cast<  ::KeyboardScheme >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Controls_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_up",7a,7c,48,00));
	outFields->push(HX_("_left",e6,23,c1,fa));
	outFields->push(HX_("_right",1d,53,4b,e5));
	outFields->push(HX_("_down",41,14,7f,f5));
	outFields->push(HX_("_upP",96,6e,24,3f));
	outFields->push(HX_("_leftP",aa,45,3e,6e));
	outFields->push(HX_("_rightP",93,66,9d,bc));
	outFields->push(HX_("_downP",ef,a4,b2,d9));
	outFields->push(HX_("_upR",98,6e,24,3f));
	outFields->push(HX_("_leftR",ac,45,3e,6e));
	outFields->push(HX_("_rightR",95,66,9d,bc));
	outFields->push(HX_("_downR",f1,a4,b2,d9));
	outFields->push(HX_("_noteup",6c,f0,2c,a0));
	outFields->push(HX_("_noteleft",58,f8,9f,b3));
	outFields->push(HX_("_noteright",6b,62,66,ef));
	outFields->push(HX_("_notedown",b3,e8,5d,ae));
	outFields->push(HX_("_noteupP",64,6e,25,87));
	outFields->push(HX_("_noteleftP",f8,54,59,78));
	outFields->push(HX_("_noterightP",85,bb,2f,8a));
	outFields->push(HX_("_notedownP",3d,b4,cd,e3));
	outFields->push(HX_("_noteupR",66,6e,25,87));
	outFields->push(HX_("_noteleftR",fa,54,59,78));
	outFields->push(HX_("_noterightR",87,bb,2f,8a));
	outFields->push(HX_("_notedownR",3f,b4,cd,e3));
	outFields->push(HX_("_accept",a7,a4,7d,79));
	outFields->push(HX_("_back",06,f6,21,f4));
	outFields->push(HX_("_pause",37,1e,3f,b9));
	outFields->push(HX_("_reset",10,91,af,e2));
	outFields->push(HX_("_cheat",54,de,9d,41));
	outFields->push(HX_("byName",c2,2b,4e,0e));
	outFields->push(HX_("gamepadsAdded",ae,52,a9,94));
	outFields->push(HX_("keyboardScheme",2c,c8,f4,c5));
	outFields->push(HX_("UP",5b,4a,00,00));
	outFields->push(HX_("LEFT",07,d0,70,32));
	outFields->push(HX_("RIGHT",bc,43,52,67));
	outFields->push(HX_("DOWN",62,c0,2e,2d));
	outFields->push(HX_("UP_P",2c,2a,6c,38));
	outFields->push(HX_("LEFT_P",d8,72,4a,4c));
	outFields->push(HX_("RIGHT_P",cd,fd,37,93));
	outFields->push(HX_("DOWN_P",f3,6f,a9,e6));
	outFields->push(HX_("UP_R",2e,2a,6c,38));
	outFields->push(HX_("LEFT_R",da,72,4a,4c));
	outFields->push(HX_("RIGHT_R",cf,fd,37,93));
	outFields->push(HX_("DOWN_R",f5,6f,a9,e6));
	outFields->push(HX_("NOTE_UP",c8,83,48,cd));
	outFields->push(HX_("NOTE_LEFT",b4,fe,4b,0d));
	outFields->push(HX_("NOTE_RIGHT",6f,ec,3f,0c));
	outFields->push(HX_("NOTE_DOWN",0f,ef,09,08));
	outFields->push(HX_("NOTE_UP_P",d9,58,47,13));
	outFields->push(HX_("NOTE_LEFT_P",c5,66,50,f7));
	outFields->push(HX_("NOTE_RIGHT_P",40,79,67,8d));
	outFields->push(HX_("NOTE_DOWN_P",e0,63,af,91));
	outFields->push(HX_("NOTE_UP_R",db,58,47,13));
	outFields->push(HX_("NOTE_LEFT_R",c7,66,50,f7));
	outFields->push(HX_("NOTE_RIGHT_R",42,79,67,8d));
	outFields->push(HX_("NOTE_DOWN_R",e2,63,af,91));
	outFields->push(HX_("ACCEPT",08,3f,89,bd));
	outFields->push(HX_("BACK",27,a2,d1,2b));
	outFields->push(HX_("PAUSE",d6,0e,46,3b));
	outFields->push(HX_("RESET",af,81,b6,64));
	outFields->push(HX_("CHEAT",f3,ce,a4,c3));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Controls_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_up),HX_("_up",7a,7c,48,00)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_left),HX_("_left",e6,23,c1,fa)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_right),HX_("_right",1d,53,4b,e5)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_down),HX_("_down",41,14,7f,f5)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_upP),HX_("_upP",96,6e,24,3f)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_leftP),HX_("_leftP",aa,45,3e,6e)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_rightP),HX_("_rightP",93,66,9d,bc)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_downP),HX_("_downP",ef,a4,b2,d9)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_upR),HX_("_upR",98,6e,24,3f)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_leftR),HX_("_leftR",ac,45,3e,6e)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_rightR),HX_("_rightR",95,66,9d,bc)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_downR),HX_("_downR",f1,a4,b2,d9)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_noteup),HX_("_noteup",6c,f0,2c,a0)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_noteleft),HX_("_noteleft",58,f8,9f,b3)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_noteright),HX_("_noteright",6b,62,66,ef)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_notedown),HX_("_notedown",b3,e8,5d,ae)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_noteupP),HX_("_noteupP",64,6e,25,87)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_noteleftP),HX_("_noteleftP",f8,54,59,78)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_noterightP),HX_("_noterightP",85,bb,2f,8a)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_notedownP),HX_("_notedownP",3d,b4,cd,e3)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_noteupR),HX_("_noteupR",66,6e,25,87)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_noteleftR),HX_("_noteleftR",fa,54,59,78)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_noterightR),HX_("_noterightR",87,bb,2f,8a)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_notedownR),HX_("_notedownR",3f,b4,cd,e3)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_accept),HX_("_accept",a7,a4,7d,79)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_back),HX_("_back",06,f6,21,f4)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_pause),HX_("_pause",37,1e,3f,b9)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_reset),HX_("_reset",10,91,af,e2)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_cheat),HX_("_cheat",54,de,9d,41)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(Controls_obj,byName),HX_("byName",c2,2b,4e,0e)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(Controls_obj,gamepadsAdded),HX_("gamepadsAdded",ae,52,a9,94)},
	{::hx::fsObject /*  ::KeyboardScheme */ ,(int)offsetof(Controls_obj,keyboardScheme),HX_("keyboardScheme",2c,c8,f4,c5)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Controls_obj_sStaticStorageInfo = 0;
#endif

static ::String Controls_obj_sMemberFields[] = {
	HX_("_up",7a,7c,48,00),
	HX_("_left",e6,23,c1,fa),
	HX_("_right",1d,53,4b,e5),
	HX_("_down",41,14,7f,f5),
	HX_("_upP",96,6e,24,3f),
	HX_("_leftP",aa,45,3e,6e),
	HX_("_rightP",93,66,9d,bc),
	HX_("_downP",ef,a4,b2,d9),
	HX_("_upR",98,6e,24,3f),
	HX_("_leftR",ac,45,3e,6e),
	HX_("_rightR",95,66,9d,bc),
	HX_("_downR",f1,a4,b2,d9),
	HX_("_noteup",6c,f0,2c,a0),
	HX_("_noteleft",58,f8,9f,b3),
	HX_("_noteright",6b,62,66,ef),
	HX_("_notedown",b3,e8,5d,ae),
	HX_("_noteupP",64,6e,25,87),
	HX_("_noteleftP",f8,54,59,78),
	HX_("_noterightP",85,bb,2f,8a),
	HX_("_notedownP",3d,b4,cd,e3),
	HX_("_noteupR",66,6e,25,87),
	HX_("_noteleftR",fa,54,59,78),
	HX_("_noterightR",87,bb,2f,8a),
	HX_("_notedownR",3f,b4,cd,e3),
	HX_("_accept",a7,a4,7d,79),
	HX_("_back",06,f6,21,f4),
	HX_("_pause",37,1e,3f,b9),
	HX_("_reset",10,91,af,e2),
	HX_("_cheat",54,de,9d,41),
	HX_("byName",c2,2b,4e,0e),
	HX_("gamepadsAdded",ae,52,a9,94),
	HX_("keyboardScheme",2c,c8,f4,c5),
	HX_("get_UP",a4,e1,2f,a3),
	HX_("get_LEFT",90,8b,2b,b2),
	HX_("get_RIGHT",13,a0,fb,aa),
	HX_("get_DOWN",eb,7b,e9,ac),
	HX_("get_UP_P",b5,e5,26,b8),
	HX_("get_LEFT_P",a1,e2,d1,3c),
	HX_("get_RIGHT_P",e4,5d,32,19),
	HX_("get_DOWN_P",bc,df,30,d7),
	HX_("get_UP_R",b7,e5,26,b8),
	HX_("get_LEFT_R",a3,e2,d1,3c),
	HX_("get_RIGHT_R",e6,5d,32,19),
	HX_("get_DOWN_R",be,df,30,d7),
	HX_("get_NOTE_UP",df,e3,42,53),
	HX_("get_NOTE_LEFT",8b,d2,af,ce),
	HX_("get_NOTE_RIGHT",b8,74,35,82),
	HX_("get_NOTE_DOWN",e6,c2,6d,c9),
	HX_("get_NOTE_UP_P",b0,2c,ab,d4),
	HX_("get_NOTE_LEFT_P",5c,1e,32,b8),
	HX_("get_NOTE_RIGHT_P",c9,65,06,92),
	HX_("get_NOTE_DOWN_P",77,1b,91,52),
	HX_("get_NOTE_UP_R",b2,2c,ab,d4),
	HX_("get_NOTE_LEFT_R",5e,1e,32,b8),
	HX_("get_NOTE_RIGHT_R",cb,65,06,92),
	HX_("get_NOTE_DOWN_R",79,1b,91,52),
	HX_("get_ACCEPT",d1,ae,10,ae),
	HX_("get_BACK",b0,5d,8c,ab),
	HX_("get_PAUSE",2d,6b,ef,7e),
	HX_("get_RESET",06,de,5f,a8),
	HX_("get_CHEAT",4a,2b,4e,07),
	HX_("update",09,86,05,87),
	HX_("checkByName",aa,fe,5f,f0),
	HX_("getDialogueName",39,8d,0f,32),
	HX_("getDialogueNameFromToken",b6,d0,32,d3),
	HX_("getActionFromControl",87,31,3f,3d),
	HX_("forEachBound",34,ae,22,2f),
	HX_("replaceBinding",71,99,ae,a4),
	HX_("copyFrom",bf,0b,61,c8),
	HX_("copyTo",90,1c,33,c9),
	HX_("mergeKeyboardScheme",04,51,83,14),
	HX_("bindKeys",51,26,d1,b4),
	HX_("unbindKeys",aa,0d,95,3a),
	HX_("setKeyboardScheme",6e,4f,d6,5b),
	HX_("loadKeyBinds",3d,a2,d2,b0),
	HX_("removeKeyboard",0b,f9,7f,32),
	HX_("addGamepad",80,0c,10,f1),
	HX_("addGamepadLiteral",cf,54,ef,a8),
	HX_("removeGamepad",bd,3c,40,62),
	HX_("addDefaultGamepad",e1,d7,98,02),
	HX_("bindButtons",04,66,e6,c6),
	HX_("unbindButtons",4b,dc,20,e8),
	HX_("getInputsFor",ea,35,e1,37),
	HX_("removeDevice",fa,77,a5,e0),
	::String(null()) };

::hx::Class Controls_obj::__mClass;

static ::String Controls_obj_sStaticFields[] = {
	HX_("init",10,3b,bb,45),
	HX_("addKeys",b5,24,44,83),
	HX_("removeKeys",58,1c,26,c4),
	HX_("addButtons",20,7e,ff,31),
	HX_("removeButtons",5d,ae,2f,a3),
	HX_("isDevice",20,78,e1,c9),
	HX_("isGamepad",d7,5d,84,8d),
	::String(null())
};

void Controls_obj::__register()
{
	Controls_obj _hx_dummy;
	Controls_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Controls",96,42,6e,11);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Controls_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Controls_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Controls_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Controls_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Controls_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Controls_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

