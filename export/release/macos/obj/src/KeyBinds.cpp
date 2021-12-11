#include <hxcpp.h>

#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_KeyBinds
#include <KeyBinds.h>
#endif
#ifndef INCLUDED_PlayerSettings
#include <PlayerSettings.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionSet
#include <flixel/input/actions/FlxActionSet.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_256205a70c995989_17_resetBinds,"KeyBinds","resetBinds",0x495c34be,"KeyBinds.resetBinds","KeyBinds.hx",17,0xfb6ef907)
HX_LOCAL_STACK_FRAME(_hx_pos_256205a70c995989_31_keyCheck,"KeyBinds","keyCheck",0x95182fe0,"KeyBinds.keyCheck","KeyBinds.hx",31,0xfb6ef907)
HX_LOCAL_STACK_FRAME(_hx_pos_256205a70c995989_14_boot,"KeyBinds","boot",0xebe6cde9,"KeyBinds.boot","KeyBinds.hx",14,0xfb6ef907)

void KeyBinds_obj::__construct() { }

Dynamic KeyBinds_obj::__CreateEmpty() { return new KeyBinds_obj; }

void *KeyBinds_obj::_hx_vtable = 0;

Dynamic KeyBinds_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< KeyBinds_obj > _hx_result = new KeyBinds_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool KeyBinds_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2cac64d7;
}

bool KeyBinds_obj::gamepad;

void KeyBinds_obj::resetBinds(){
            	HX_STACKFRAME(&_hx_pos_256205a70c995989_17_resetBinds)
HXLINE(  18)		::flixel::FlxG_obj::save->data->__SetField(HX_("upBind",b8,51,92,70),HX_("W",57,00,00,00),::hx::paccDynamic);
HXLINE(  19)		::flixel::FlxG_obj::save->data->__SetField(HX_("downBind",3f,f3,fe,75),HX_("S",53,00,00,00),::hx::paccDynamic);
HXLINE(  20)		::flixel::FlxG_obj::save->data->__SetField(HX_("leftBind",64,39,12,48),HX_("A",41,00,00,00),::hx::paccDynamic);
HXLINE(  21)		::flixel::FlxG_obj::save->data->__SetField(HX_("rightBind",b9,4b,dd,ab),HX_("D",44,00,00,00),::hx::paccDynamic);
HXLINE(  22)		::flixel::FlxG_obj::save->data->__SetField(HX_("killBind",7b,28,25,80),HX_("R",52,00,00,00),::hx::paccDynamic);
HXLINE(  23)		::flixel::FlxG_obj::save->data->__SetField(HX_("gpupBind",a1,30,42,a5),HX_("Y",59,00,00,00),::hx::paccDynamic);
HXLINE(  24)		::flixel::FlxG_obj::save->data->__SetField(HX_("gpdownBind",68,1e,93,1d),HX_("A",41,00,00,00),::hx::paccDynamic);
HXLINE(  25)		::flixel::FlxG_obj::save->data->__SetField(HX_("gpleftBind",8d,64,a6,ef),HX_("X",58,00,00,00),::hx::paccDynamic);
HXLINE(  26)		::flixel::FlxG_obj::save->data->__SetField(HX_("gprightBind",70,e4,ee,a5),HX_("B",42,00,00,00),::hx::paccDynamic);
HXLINE(  27)		::PlayerSettings_obj::player1->controls->loadKeyBinds();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(KeyBinds_obj,resetBinds,(void))

void KeyBinds_obj::keyCheck(){
            	HX_STACKFRAME(&_hx_pos_256205a70c995989_31_keyCheck)
HXLINE(  32)		if (::hx::IsNull( ::flixel::FlxG_obj::save->data->__Field(HX_("upBind",b8,51,92,70),::hx::paccDynamic) )) {
HXLINE(  34)			::flixel::FlxG_obj::save->data->__SetField(HX_("upBind",b8,51,92,70),HX_("W",57,00,00,00),::hx::paccDynamic);
HXLINE(  35)			::haxe::Log_obj::trace(HX_("No UP",ba,80,b8,32),::hx::SourceInfo(HX_("source/KeyBinds.hx",93,26,39,47),35,HX_("KeyBinds",17,72,1b,d1),HX_("keyCheck",a9,3e,20,8a)));
            		}
HXLINE(  37)		if (::hx::IsNull( ::flixel::FlxG_obj::save->data->__Field(HX_("downBind",3f,f3,fe,75),::hx::paccDynamic) )) {
HXLINE(  39)			::flixel::FlxG_obj::save->data->__SetField(HX_("downBind",3f,f3,fe,75),HX_("S",53,00,00,00),::hx::paccDynamic);
HXLINE(  40)			::haxe::Log_obj::trace(HX_("No DOWN",81,8c,28,a7),::hx::SourceInfo(HX_("source/KeyBinds.hx",93,26,39,47),40,HX_("KeyBinds",17,72,1b,d1),HX_("keyCheck",a9,3e,20,8a)));
            		}
HXLINE(  42)		if (::hx::IsNull( ::flixel::FlxG_obj::save->data->__Field(HX_("leftBind",64,39,12,48),::hx::paccDynamic) )) {
HXLINE(  44)			::flixel::FlxG_obj::save->data->__SetField(HX_("leftBind",64,39,12,48),HX_("A",41,00,00,00),::hx::paccDynamic);
HXLINE(  45)			::haxe::Log_obj::trace(HX_("No LEFT",26,9c,6a,ac),::hx::SourceInfo(HX_("source/KeyBinds.hx",93,26,39,47),45,HX_("KeyBinds",17,72,1b,d1),HX_("keyCheck",a9,3e,20,8a)));
            		}
HXLINE(  47)		if (::hx::IsNull( ::flixel::FlxG_obj::save->data->__Field(HX_("rightBind",b9,4b,dd,ab),::hx::paccDynamic) )) {
HXLINE(  49)			::flixel::FlxG_obj::save->data->__SetField(HX_("rightBind",b9,4b,dd,ab),HX_("D",44,00,00,00),::hx::paccDynamic);
HXLINE(  50)			::haxe::Log_obj::trace(HX_("No RIGHT",bd,12,eb,a7),::hx::SourceInfo(HX_("source/KeyBinds.hx",93,26,39,47),50,HX_("KeyBinds",17,72,1b,d1),HX_("keyCheck",a9,3e,20,8a)));
            		}
HXLINE(  53)		if (::hx::IsNull( ::flixel::FlxG_obj::save->data->__Field(HX_("gpupBind",a1,30,42,a5),::hx::paccDynamic) )) {
HXLINE(  55)			::flixel::FlxG_obj::save->data->__SetField(HX_("gpupBind",a1,30,42,a5),HX_("Y",59,00,00,00),::hx::paccDynamic);
HXLINE(  56)			::haxe::Log_obj::trace(HX_("No GUP",23,87,ad,2e),::hx::SourceInfo(HX_("source/KeyBinds.hx",93,26,39,47),56,HX_("KeyBinds",17,72,1b,d1),HX_("keyCheck",a9,3e,20,8a)));
            		}
HXLINE(  58)		if (::hx::IsNull( ::flixel::FlxG_obj::save->data->__Field(HX_("gpdownBind",68,1e,93,1d),::hx::paccDynamic) )) {
HXLINE(  60)			::flixel::FlxG_obj::save->data->__SetField(HX_("gpdownBind",68,1e,93,1d),HX_("A",41,00,00,00),::hx::paccDynamic);
HXLINE(  61)			::haxe::Log_obj::trace(HX_("No GDOWN",2a,bf,3a,4f),::hx::SourceInfo(HX_("source/KeyBinds.hx",93,26,39,47),61,HX_("KeyBinds",17,72,1b,d1),HX_("keyCheck",a9,3e,20,8a)));
            		}
HXLINE(  63)		if (::hx::IsNull( ::flixel::FlxG_obj::save->data->__Field(HX_("gpleftBind",8d,64,a6,ef),::hx::paccDynamic) )) {
HXLINE(  65)			::flixel::FlxG_obj::save->data->__SetField(HX_("gpleftBind",8d,64,a6,ef),HX_("X",58,00,00,00),::hx::paccDynamic);
HXLINE(  66)			::haxe::Log_obj::trace(HX_("No GLEFT",cf,ce,7c,54),::hx::SourceInfo(HX_("source/KeyBinds.hx",93,26,39,47),66,HX_("KeyBinds",17,72,1b,d1),HX_("keyCheck",a9,3e,20,8a)));
            		}
HXLINE(  68)		if (::hx::IsNull( ::flixel::FlxG_obj::save->data->__Field(HX_("gprightBind",70,e4,ee,a5),::hx::paccDynamic) )) {
HXLINE(  70)			::flixel::FlxG_obj::save->data->__SetField(HX_("gprightBind",70,e4,ee,a5),HX_("B",42,00,00,00),::hx::paccDynamic);
HXLINE(  71)			::haxe::Log_obj::trace(HX_("No GRIGHT",f4,33,c5,0f),::hx::SourceInfo(HX_("source/KeyBinds.hx",93,26,39,47),71,HX_("KeyBinds",17,72,1b,d1),HX_("keyCheck",a9,3e,20,8a)));
            		}
HXLINE(  73)		if (::hx::IsNull( ::flixel::FlxG_obj::save->data->__Field(HX_("killBind",7b,28,25,80),::hx::paccDynamic) )) {
HXLINE(  75)			::flixel::FlxG_obj::save->data->__SetField(HX_("killBind",7b,28,25,80),HX_("R",52,00,00,00),::hx::paccDynamic);
HXLINE(  76)			::haxe::Log_obj::trace(HX_("No KILL",bd,73,c4,ab),::hx::SourceInfo(HX_("source/KeyBinds.hx",93,26,39,47),76,HX_("KeyBinds",17,72,1b,d1),HX_("keyCheck",a9,3e,20,8a)));
            		}
HXLINE(  79)		 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN(  79)		::String _hx_tmp1 = ((HX_("",00,00,00,00) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("leftBind",64,39,12,48),::hx::paccDynamic)))) + HX_("-",2d,00,00,00));
HXDLIN(  79)		::String _hx_tmp2 = ((_hx_tmp1 + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("downBind",3f,f3,fe,75),::hx::paccDynamic)))) + HX_("-",2d,00,00,00));
HXDLIN(  79)		::String _hx_tmp3 = ((_hx_tmp2 + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("upBind",b8,51,92,70),::hx::paccDynamic)))) + HX_("-",2d,00,00,00));
HXDLIN(  79)		::String _hx_tmp4 = (_hx_tmp3 + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("rightBind",b9,4b,dd,ab),::hx::paccDynamic))));
HXDLIN(  79)		_hx_tmp(_hx_tmp4,::hx::SourceInfo(HX_("source/KeyBinds.hx",93,26,39,47),79,HX_("KeyBinds",17,72,1b,d1),HX_("keyCheck",a9,3e,20,8a)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(KeyBinds_obj,keyCheck,(void))


KeyBinds_obj::KeyBinds_obj()
{
}

bool KeyBinds_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"gamepad") ) { outValue = ( gamepad ); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"keyCheck") ) { outValue = keyCheck_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"resetBinds") ) { outValue = resetBinds_dyn(); return true; }
	}
	return false;
}

bool KeyBinds_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"gamepad") ) { gamepad=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *KeyBinds_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo KeyBinds_obj_sStaticStorageInfo[] = {
	{::hx::fsBool,(void *) &KeyBinds_obj::gamepad,HX_("gamepad",a1,e0,85,89)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void KeyBinds_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(KeyBinds_obj::gamepad,"gamepad");
};

#ifdef HXCPP_VISIT_ALLOCS
static void KeyBinds_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(KeyBinds_obj::gamepad,"gamepad");
};

#endif

::hx::Class KeyBinds_obj::__mClass;

static ::String KeyBinds_obj_sStaticFields[] = {
	HX_("gamepad",a1,e0,85,89),
	HX_("resetBinds",c7,47,9c,9b),
	HX_("keyCheck",a9,3e,20,8a),
	::String(null())
};

void KeyBinds_obj::__register()
{
	KeyBinds_obj _hx_dummy;
	KeyBinds_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("KeyBinds",17,72,1b,d1);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &KeyBinds_obj::__GetStatic;
	__mClass->mSetStaticField = &KeyBinds_obj::__SetStatic;
	__mClass->mMarkFunc = KeyBinds_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(KeyBinds_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< KeyBinds_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = KeyBinds_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = KeyBinds_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = KeyBinds_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void KeyBinds_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_256205a70c995989_14_boot)
HXDLIN(  14)		gamepad = false;
            	}
}

