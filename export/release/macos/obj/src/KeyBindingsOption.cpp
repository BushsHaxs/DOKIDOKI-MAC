#include <hxcpp.h>

#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_KeyBindMenu
#include <KeyBindMenu.h>
#endif
#ifndef INCLUDED_KeyBindingsOption
#include <KeyBindingsOption.h>
#endif
#ifndef INCLUDED_LangUtil
#include <LangUtil.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_Option
#include <Option.h>
#endif
#ifndef INCLUDED_OptionsMenu
#include <OptionsMenu.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
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
#ifndef INCLUDED_flixel_input_actions_FlxActionSet
#include <flixel/input/actions/FlxActionSet.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2cd7346eaa7cd084_103_new,"KeyBindingsOption","new",0x2cc69774,"KeyBindingsOption.new","Options.hx",103,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_2cd7346eaa7cd084_110_press,"KeyBindingsOption","press",0x0c8a0797,"KeyBindingsOption.press","Options.hx",110,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_2cd7346eaa7cd084_117_updateDisplay,"KeyBindingsOption","updateDisplay",0x6c6a774d,"KeyBindingsOption.updateDisplay","Options.hx",117,0x9d9a0240)

void KeyBindingsOption_obj::__construct(::String desc, ::Controls controls){
            	HX_STACKFRAME(&_hx_pos_2cd7346eaa7cd084_103_new)
HXLINE( 104)		super::__construct();
HXLINE( 105)		this->description = desc;
HXLINE( 106)		this->controls = controls;
            	}

Dynamic KeyBindingsOption_obj::__CreateEmpty() { return new KeyBindingsOption_obj; }

void *KeyBindingsOption_obj::_hx_vtable = 0;

Dynamic KeyBindingsOption_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< KeyBindingsOption_obj > _hx_result = new KeyBindingsOption_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool KeyBindingsOption_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x27a70eb9) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x27a70eb9;
	} else {
		return inClassId==(int)0x7fc48ac6;
	}
}

bool KeyBindingsOption_obj::press(){
            	HX_GC_STACKFRAME(&_hx_pos_2cd7346eaa7cd084_110_press)
HXLINE( 111)		 ::OptionsMenu _hx_tmp = ::OptionsMenu_obj::instance;
HXDLIN( 111)		_hx_tmp->openSubState( ::KeyBindMenu_obj::__alloc( HX_CTX ,null()));
HXLINE( 112)		return false;
            	}


::String KeyBindingsOption_obj::updateDisplay(){
            	HX_STACKFRAME(&_hx_pos_2cd7346eaa7cd084_117_updateDisplay)
HXDLIN( 117)		return ::LangUtil_obj::getString(HX_("optKeyBindings",da,20,1f,ad));
            	}



::hx::ObjectPtr< KeyBindingsOption_obj > KeyBindingsOption_obj::__new(::String desc, ::Controls controls) {
	::hx::ObjectPtr< KeyBindingsOption_obj > __this = new KeyBindingsOption_obj();
	__this->__construct(desc,controls);
	return __this;
}

::hx::ObjectPtr< KeyBindingsOption_obj > KeyBindingsOption_obj::__alloc(::hx::Ctx *_hx_ctx,::String desc, ::Controls controls) {
	KeyBindingsOption_obj *__this = (KeyBindingsOption_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(KeyBindingsOption_obj), true, "KeyBindingsOption"));
	*(void **)__this = KeyBindingsOption_obj::_hx_vtable;
	__this->__construct(desc,controls);
	return __this;
}

KeyBindingsOption_obj::KeyBindingsOption_obj()
{
}

void KeyBindingsOption_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(KeyBindingsOption);
	HX_MARK_MEMBER_NAME(controls,"controls");
	 ::Option_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void KeyBindingsOption_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(controls,"controls");
	 ::Option_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val KeyBindingsOption_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"press") ) { return ::hx::Val( press_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"controls") ) { return ::hx::Val( controls ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"updateDisplay") ) { return ::hx::Val( updateDisplay_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val KeyBindingsOption_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"controls") ) { controls=inValue.Cast<  ::Controls >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void KeyBindingsOption_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("controls",76,86,bc,37));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo KeyBindingsOption_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Controls */ ,(int)offsetof(KeyBindingsOption_obj,controls),HX_("controls",76,86,bc,37)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *KeyBindingsOption_obj_sStaticStorageInfo = 0;
#endif

static ::String KeyBindingsOption_obj_sMemberFields[] = {
	HX_("controls",76,86,bc,37),
	HX_("press",83,53,88,c8),
	HX_("updateDisplay",39,8f,b8,86),
	::String(null()) };

::hx::Class KeyBindingsOption_obj::__mClass;

void KeyBindingsOption_obj::__register()
{
	KeyBindingsOption_obj _hx_dummy;
	KeyBindingsOption_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("KeyBindingsOption",82,0d,e9,55);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(KeyBindingsOption_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< KeyBindingsOption_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = KeyBindingsOption_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = KeyBindingsOption_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

