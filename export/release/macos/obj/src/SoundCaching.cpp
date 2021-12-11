#include <hxcpp.h>

#ifndef INCLUDED_LangUtil
#include <LangUtil.h>
#endif
#ifndef INCLUDED_Option
#include <Option.h>
#endif
#ifndef INCLUDED_SoundCaching
#include <SoundCaching.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_1c241632373925d8_697_new,"SoundCaching","new",0xab43b002,"SoundCaching.new","Options.hx",697,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_1c241632373925d8_703_press,"SoundCaching","press",0xf6e8dfa5,"SoundCaching.press","Options.hx",703,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_1c241632373925d8_712_updateDisplay,"SoundCaching","updateDisplay",0x1e950d5b,"SoundCaching.updateDisplay","Options.hx",712,0x9d9a0240)

void SoundCaching_obj::__construct(::String desc){
            	HX_STACKFRAME(&_hx_pos_1c241632373925d8_697_new)
HXLINE( 698)		super::__construct();
HXLINE( 699)		this->description = desc;
            	}

Dynamic SoundCaching_obj::__CreateEmpty() { return new SoundCaching_obj; }

void *SoundCaching_obj::_hx_vtable = 0;

Dynamic SoundCaching_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SoundCaching_obj > _hx_result = new SoundCaching_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool SoundCaching_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1a9b0134) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1a9b0134;
	} else {
		return inClassId==(int)0x27a70eb9;
	}
}

bool SoundCaching_obj::press(){
            	HX_STACKFRAME(&_hx_pos_1c241632373925d8_703_press)
HXLINE( 704)		::flixel::FlxG_obj::save->data->__SetField(HX_("cacheSounds",a6,d4,cf,50),!(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("cacheSounds",a6,d4,cf,50),::hx::paccDynamic)) )),::hx::paccDynamic);
HXLINE( 706)		this->display = this->updateDisplay();
HXLINE( 707)		return true;
            	}


::String SoundCaching_obj::updateDisplay(){
            	HX_STACKFRAME(&_hx_pos_1c241632373925d8_712_updateDisplay)
HXDLIN( 712)		::String _hx_tmp = (::LangUtil_obj::getString(HX_("optSoundCache",06,ad,09,08)) + HX_(" ",20,00,00,00));
HXDLIN( 712)		::String _hx_tmp1;
HXDLIN( 712)		if (( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("cacheSounds",a6,d4,cf,50),::hx::paccDynamic)) )) {
HXDLIN( 712)			_hx_tmp1 = ::LangUtil_obj::getString(HX_("cmnOn",c3,6c,0b,49));
            		}
            		else {
HXDLIN( 712)			_hx_tmp1 = ::LangUtil_obj::getString(HX_("cmnOff",4b,b7,f3,a0));
            		}
HXDLIN( 712)		return (_hx_tmp + _hx_tmp1);
            	}



::hx::ObjectPtr< SoundCaching_obj > SoundCaching_obj::__new(::String desc) {
	::hx::ObjectPtr< SoundCaching_obj > __this = new SoundCaching_obj();
	__this->__construct(desc);
	return __this;
}

::hx::ObjectPtr< SoundCaching_obj > SoundCaching_obj::__alloc(::hx::Ctx *_hx_ctx,::String desc) {
	SoundCaching_obj *__this = (SoundCaching_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SoundCaching_obj), true, "SoundCaching"));
	*(void **)__this = SoundCaching_obj::_hx_vtable;
	__this->__construct(desc);
	return __this;
}

SoundCaching_obj::SoundCaching_obj()
{
}

::hx::Val SoundCaching_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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
static ::hx::StorageInfo *SoundCaching_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *SoundCaching_obj_sStaticStorageInfo = 0;
#endif

static ::String SoundCaching_obj_sMemberFields[] = {
	HX_("press",83,53,88,c8),
	HX_("updateDisplay",39,8f,b8,86),
	::String(null()) };

::hx::Class SoundCaching_obj::__mClass;

void SoundCaching_obj::__register()
{
	SoundCaching_obj _hx_dummy;
	SoundCaching_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("SoundCaching",10,47,6f,ff);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SoundCaching_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SoundCaching_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SoundCaching_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SoundCaching_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

