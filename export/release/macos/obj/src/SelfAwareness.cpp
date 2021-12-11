#include <hxcpp.h>

#ifndef INCLUDED_LangUtil
#include <LangUtil.h>
#endif
#ifndef INCLUDED_Option
#include <Option.h>
#endif
#ifndef INCLUDED_SelfAwareness
#include <SelfAwareness.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_9749878285e3b80b_916_new,"SelfAwareness","new",0xb74deadb,"SelfAwareness.new","Options.hx",916,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_9749878285e3b80b_922_press,"SelfAwareness","press",0xc61a42be,"SelfAwareness.press","Options.hx",922,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_9749878285e3b80b_931_updateDisplay,"SelfAwareness","updateDisplay",0xfbf4b174,"SelfAwareness.updateDisplay","Options.hx",931,0x9d9a0240)

void SelfAwareness_obj::__construct(::String desc){
            	HX_STACKFRAME(&_hx_pos_9749878285e3b80b_916_new)
HXLINE( 917)		super::__construct();
HXLINE( 918)		this->description = desc;
            	}

Dynamic SelfAwareness_obj::__CreateEmpty() { return new SelfAwareness_obj; }

void *SelfAwareness_obj::_hx_vtable = 0;

Dynamic SelfAwareness_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SelfAwareness_obj > _hx_result = new SelfAwareness_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool SelfAwareness_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x27a70eb9) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x27a70eb9;
	} else {
		return inClassId==(int)0x5241f6a9;
	}
}

bool SelfAwareness_obj::press(){
            	HX_STACKFRAME(&_hx_pos_9749878285e3b80b_922_press)
HXLINE( 923)		::flixel::FlxG_obj::save->data->__SetField(HX_("selfAware",f2,2f,cc,62),!(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("selfAware",f2,2f,cc,62),::hx::paccDynamic)) )),::hx::paccDynamic);
HXLINE( 925)		this->display = this->updateDisplay();
HXLINE( 926)		return true;
            	}


::String SelfAwareness_obj::updateDisplay(){
            	HX_STACKFRAME(&_hx_pos_9749878285e3b80b_931_updateDisplay)
HXDLIN( 931)		::String _hx_tmp = (::LangUtil_obj::getString(HX_("optSelfAware",3f,d5,ac,09)) + HX_(" ",20,00,00,00));
HXDLIN( 931)		::String _hx_tmp1;
HXDLIN( 931)		if (( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("selfAware",f2,2f,cc,62),::hx::paccDynamic)) )) {
HXDLIN( 931)			_hx_tmp1 = ::LangUtil_obj::getString(HX_("cmnOn",c3,6c,0b,49));
            		}
            		else {
HXDLIN( 931)			_hx_tmp1 = ::LangUtil_obj::getString(HX_("cmnOff",4b,b7,f3,a0));
            		}
HXDLIN( 931)		return (_hx_tmp + _hx_tmp1);
            	}



::hx::ObjectPtr< SelfAwareness_obj > SelfAwareness_obj::__new(::String desc) {
	::hx::ObjectPtr< SelfAwareness_obj > __this = new SelfAwareness_obj();
	__this->__construct(desc);
	return __this;
}

::hx::ObjectPtr< SelfAwareness_obj > SelfAwareness_obj::__alloc(::hx::Ctx *_hx_ctx,::String desc) {
	SelfAwareness_obj *__this = (SelfAwareness_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SelfAwareness_obj), true, "SelfAwareness"));
	*(void **)__this = SelfAwareness_obj::_hx_vtable;
	__this->__construct(desc);
	return __this;
}

SelfAwareness_obj::SelfAwareness_obj()
{
}

::hx::Val SelfAwareness_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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
static ::hx::StorageInfo *SelfAwareness_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *SelfAwareness_obj_sStaticStorageInfo = 0;
#endif

static ::String SelfAwareness_obj_sMemberFields[] = {
	HX_("press",83,53,88,c8),
	HX_("updateDisplay",39,8f,b8,86),
	::String(null()) };

::hx::Class SelfAwareness_obj::__mClass;

void SelfAwareness_obj::__register()
{
	SelfAwareness_obj _hx_dummy;
	SelfAwareness_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("SelfAwareness",69,e1,fa,75);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SelfAwareness_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SelfAwareness_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SelfAwareness_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SelfAwareness_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

