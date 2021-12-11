#include <hxcpp.h>

#ifndef INCLUDED_Caching
#include <Caching.h>
#endif
#ifndef INCLUDED_CachingState
#include <CachingState.h>
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
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_37671ddb2b67b25b_719_new,"CachingState","new",0xa1959fa4,"CachingState.new","Options.hx",719,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_37671ddb2b67b25b_725_press,"CachingState","press",0x994f7bc7,"CachingState.press","Options.hx",725,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_37671ddb2b67b25b_733_updateDisplay,"CachingState","updateDisplay",0xb7079b7d,"CachingState.updateDisplay","Options.hx",733,0x9d9a0240)

void CachingState_obj::__construct(::String desc){
            	HX_STACKFRAME(&_hx_pos_37671ddb2b67b25b_719_new)
HXLINE( 720)		super::__construct();
HXLINE( 721)		this->description = desc;
            	}

Dynamic CachingState_obj::__CreateEmpty() { return new CachingState_obj; }

void *CachingState_obj::_hx_vtable = 0;

Dynamic CachingState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CachingState_obj > _hx_result = new CachingState_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool CachingState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x27a70eb9) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x27a70eb9;
	} else {
		return inClassId==(int)0x31e4c69e;
	}
}

bool CachingState_obj::press(){
            	HX_GC_STACKFRAME(&_hx_pos_37671ddb2b67b25b_725_press)
HXLINE( 726)		::haxe::Log_obj::trace(HX_("switch",f4,49,79,c5),::hx::SourceInfo(HX_("source/Options.hx",34,ca,fe,29),726,HX_("CachingState",b2,3d,24,b2),HX_("press",83,53,88,c8)));
HXLINE( 727)		{
HXLINE( 727)			 ::flixel::FlxState nextState =  ::Caching_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 727)			if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 727)				::flixel::FlxG_obj::game->_requestedState = nextState;
            			}
            		}
HXLINE( 728)		return false;
            	}


::String CachingState_obj::updateDisplay(){
            	HX_STACKFRAME(&_hx_pos_37671ddb2b67b25b_733_updateDisplay)
HXDLIN( 733)		return ::LangUtil_obj::getString(HX_("optCaching",0c,60,39,85));
            	}



::hx::ObjectPtr< CachingState_obj > CachingState_obj::__new(::String desc) {
	::hx::ObjectPtr< CachingState_obj > __this = new CachingState_obj();
	__this->__construct(desc);
	return __this;
}

::hx::ObjectPtr< CachingState_obj > CachingState_obj::__alloc(::hx::Ctx *_hx_ctx,::String desc) {
	CachingState_obj *__this = (CachingState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CachingState_obj), true, "CachingState"));
	*(void **)__this = CachingState_obj::_hx_vtable;
	__this->__construct(desc);
	return __this;
}

CachingState_obj::CachingState_obj()
{
}

::hx::Val CachingState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"press") ) { return ::hx::Val( press_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"updateDisplay") ) { return ::hx::Val( updateDisplay_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *CachingState_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *CachingState_obj_sStaticStorageInfo = 0;
#endif

static ::String CachingState_obj_sMemberFields[] = {
	HX_("press",83,53,88,c8),
	HX_("updateDisplay",39,8f,b8,86),
	::String(null()) };

::hx::Class CachingState_obj::__mClass;

void CachingState_obj::__register()
{
	CachingState_obj _hx_dummy;
	CachingState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("CachingState",b2,3d,24,b2);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CachingState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CachingState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CachingState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CachingState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

