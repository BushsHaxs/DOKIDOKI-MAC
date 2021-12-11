#include <hxcpp.h>

#ifndef INCLUDED_LangUtil
#include <LangUtil.h>
#endif
#ifndef INCLUDED_MiddleScrollOption
#include <MiddleScrollOption.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_0223c7916a99f2e4_741_new,"MiddleScrollOption","new",0xfbf83ee9,"MiddleScrollOption.new","Options.hx",741,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_0223c7916a99f2e4_747_press,"MiddleScrollOption","press",0x490c364c,"MiddleScrollOption.press","Options.hx",747,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_0223c7916a99f2e4_755_updateDisplay,"MiddleScrollOption","updateDisplay",0x8079e302,"MiddleScrollOption.updateDisplay","Options.hx",755,0x9d9a0240)

void MiddleScrollOption_obj::__construct(::String desc){
            	HX_STACKFRAME(&_hx_pos_0223c7916a99f2e4_741_new)
HXLINE( 742)		super::__construct();
HXLINE( 743)		this->description = desc;
            	}

Dynamic MiddleScrollOption_obj::__CreateEmpty() { return new MiddleScrollOption_obj; }

void *MiddleScrollOption_obj::_hx_vtable = 0;

Dynamic MiddleScrollOption_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MiddleScrollOption_obj > _hx_result = new MiddleScrollOption_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool MiddleScrollOption_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x27a70eb9) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x27a70eb9;
	} else {
		return inClassId==(int)0x56368dff;
	}
}

bool MiddleScrollOption_obj::press(){
            	HX_STACKFRAME(&_hx_pos_0223c7916a99f2e4_747_press)
HXLINE( 748)		::flixel::FlxG_obj::save->data->__SetField(HX_("middleScroll",42,cd,58,62),!(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("middleScroll",42,cd,58,62),::hx::paccDynamic)) )),::hx::paccDynamic);
HXLINE( 749)		this->display = this->updateDisplay();
HXLINE( 750)		return true;
            	}


::String MiddleScrollOption_obj::updateDisplay(){
            	HX_STACKFRAME(&_hx_pos_0223c7916a99f2e4_755_updateDisplay)
HXDLIN( 755)		if (( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("middleScroll",42,cd,58,62),::hx::paccDynamic)) )) {
HXDLIN( 755)			return ::LangUtil_obj::getString(HX_("optMiddleScrollOn",94,6a,3c,5d));
            		}
            		else {
HXDLIN( 755)			return ::LangUtil_obj::getString(HX_("optMiddleScrollOff",5a,d0,a0,37));
            		}
HXDLIN( 755)		return null();
            	}



::hx::ObjectPtr< MiddleScrollOption_obj > MiddleScrollOption_obj::__new(::String desc) {
	::hx::ObjectPtr< MiddleScrollOption_obj > __this = new MiddleScrollOption_obj();
	__this->__construct(desc);
	return __this;
}

::hx::ObjectPtr< MiddleScrollOption_obj > MiddleScrollOption_obj::__alloc(::hx::Ctx *_hx_ctx,::String desc) {
	MiddleScrollOption_obj *__this = (MiddleScrollOption_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MiddleScrollOption_obj), true, "MiddleScrollOption"));
	*(void **)__this = MiddleScrollOption_obj::_hx_vtable;
	__this->__construct(desc);
	return __this;
}

MiddleScrollOption_obj::MiddleScrollOption_obj()
{
}

::hx::Val MiddleScrollOption_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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
static ::hx::StorageInfo *MiddleScrollOption_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *MiddleScrollOption_obj_sStaticStorageInfo = 0;
#endif

static ::String MiddleScrollOption_obj_sMemberFields[] = {
	HX_("press",83,53,88,c8),
	HX_("updateDisplay",39,8f,b8,86),
	::String(null()) };

::hx::Class MiddleScrollOption_obj::__mClass;

void MiddleScrollOption_obj::__register()
{
	MiddleScrollOption_obj _hx_dummy;
	MiddleScrollOption_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("MiddleScrollOption",77,96,8a,30);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MiddleScrollOption_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MiddleScrollOption_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MiddleScrollOption_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MiddleScrollOption_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

