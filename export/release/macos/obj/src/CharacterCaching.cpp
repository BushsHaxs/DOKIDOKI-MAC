#include <hxcpp.h>

#ifndef INCLUDED_CharacterCaching
#include <CharacterCaching.h>
#endif
#ifndef INCLUDED_LangUtil
#include <LangUtil.h>
#endif
#ifndef INCLUDED_Option
#include <Option.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7e6dba8f272f1002_631_new,"CharacterCaching","new",0x18390b68,"CharacterCaching.new","Options.hx",631,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_7e6dba8f272f1002_637_press,"CharacterCaching","press",0x9078608b,"CharacterCaching.press","Options.hx",637,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_7e6dba8f272f1002_646_updateDisplay,"CharacterCaching","updateDisplay",0x9888e441,"CharacterCaching.updateDisplay","Options.hx",646,0x9d9a0240)

void CharacterCaching_obj::__construct(::String desc){
            	HX_STACKFRAME(&_hx_pos_7e6dba8f272f1002_631_new)
HXLINE( 632)		super::__construct();
HXLINE( 633)		this->description = desc;
            	}

Dynamic CharacterCaching_obj::__CreateEmpty() { return new CharacterCaching_obj; }

void *CharacterCaching_obj::_hx_vtable = 0;

Dynamic CharacterCaching_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CharacterCaching_obj > _hx_result = new CharacterCaching_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool CharacterCaching_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x27a70eb9) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x27a70eb9;
	} else {
		return inClassId==(int)0x7afa044a;
	}
}

bool CharacterCaching_obj::press(){
            	HX_STACKFRAME(&_hx_pos_7e6dba8f272f1002_637_press)
HXLINE( 638)		::flixel::FlxG_obj::save->data->__SetField(HX_("cacheCharacters",8c,1d,70,34),!(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("cacheCharacters",8c,1d,70,34),::hx::paccDynamic)) )),::hx::paccDynamic);
HXLINE( 640)		this->display = this->updateDisplay();
HXLINE( 641)		return true;
            	}


::String CharacterCaching_obj::updateDisplay(){
            	HX_STACKFRAME(&_hx_pos_7e6dba8f272f1002_646_updateDisplay)
HXDLIN( 646)		::String _hx_tmp = (::LangUtil_obj::getString(HX_("optCharacterCache",6c,4d,4a,30)) + HX_(" ",20,00,00,00));
HXDLIN( 646)		::String _hx_tmp1;
HXDLIN( 646)		if (( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("cacheCharacters",8c,1d,70,34),::hx::paccDynamic)) )) {
HXDLIN( 646)			_hx_tmp1 = ::LangUtil_obj::getString(HX_("cmnOn",c3,6c,0b,49));
            		}
            		else {
HXDLIN( 646)			_hx_tmp1 = ::LangUtil_obj::getString(HX_("cmnOff",4b,b7,f3,a0));
            		}
HXDLIN( 646)		return (_hx_tmp + _hx_tmp1);
            	}



::hx::ObjectPtr< CharacterCaching_obj > CharacterCaching_obj::__new(::String desc) {
	::hx::ObjectPtr< CharacterCaching_obj > __this = new CharacterCaching_obj();
	__this->__construct(desc);
	return __this;
}

::hx::ObjectPtr< CharacterCaching_obj > CharacterCaching_obj::__alloc(::hx::Ctx *_hx_ctx,::String desc) {
	CharacterCaching_obj *__this = (CharacterCaching_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CharacterCaching_obj), true, "CharacterCaching"));
	*(void **)__this = CharacterCaching_obj::_hx_vtable;
	__this->__construct(desc);
	return __this;
}

CharacterCaching_obj::CharacterCaching_obj()
{
}

::hx::Val CharacterCaching_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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
static ::hx::StorageInfo *CharacterCaching_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *CharacterCaching_obj_sStaticStorageInfo = 0;
#endif

static ::String CharacterCaching_obj_sMemberFields[] = {
	HX_("press",83,53,88,c8),
	HX_("updateDisplay",39,8f,b8,86),
	::String(null()) };

::hx::Class CharacterCaching_obj::__mClass;

void CharacterCaching_obj::__register()
{
	CharacterCaching_obj _hx_dummy;
	CharacterCaching_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("CharacterCaching",76,77,ad,fe);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CharacterCaching_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CharacterCaching_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CharacterCaching_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CharacterCaching_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

