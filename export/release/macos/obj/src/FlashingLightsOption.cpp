#include <hxcpp.h>

#ifndef INCLUDED_FlashingLightsOption
#include <FlashingLightsOption.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_59e1436159e1af96_250_new,"FlashingLightsOption","new",0xa84c7996,"FlashingLightsOption.new","Options.hx",250,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_59e1436159e1af96_256_press,"FlashingLightsOption","press",0xdee63639,"FlashingLightsOption.press","Options.hx",256,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_59e1436159e1af96_264_updateDisplay,"FlashingLightsOption","updateDisplay",0xd86917ef,"FlashingLightsOption.updateDisplay","Options.hx",264,0x9d9a0240)

void FlashingLightsOption_obj::__construct(::String desc){
            	HX_STACKFRAME(&_hx_pos_59e1436159e1af96_250_new)
HXLINE( 251)		super::__construct();
HXLINE( 252)		this->description = desc;
            	}

Dynamic FlashingLightsOption_obj::__CreateEmpty() { return new FlashingLightsOption_obj; }

void *FlashingLightsOption_obj::_hx_vtable = 0;

Dynamic FlashingLightsOption_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlashingLightsOption_obj > _hx_result = new FlashingLightsOption_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool FlashingLightsOption_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x095c0b90) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x095c0b90;
	} else {
		return inClassId==(int)0x27a70eb9;
	}
}

bool FlashingLightsOption_obj::press(){
            	HX_STACKFRAME(&_hx_pos_59e1436159e1af96_256_press)
HXLINE( 257)		::flixel::FlxG_obj::save->data->__SetField(HX_("flashing",32,85,e8,99),!(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("flashing",32,85,e8,99),::hx::paccDynamic)) )),::hx::paccDynamic);
HXLINE( 258)		this->display = this->updateDisplay();
HXLINE( 259)		return true;
            	}


::String FlashingLightsOption_obj::updateDisplay(){
            	HX_STACKFRAME(&_hx_pos_59e1436159e1af96_264_updateDisplay)
HXDLIN( 264)		::String _hx_tmp = (::LangUtil_obj::getString(HX_("optFlashing",85,c8,02,0a)) + HX_(" ",20,00,00,00));
HXDLIN( 264)		::String _hx_tmp1;
HXDLIN( 264)		if (( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("flashing",32,85,e8,99),::hx::paccDynamic)) )) {
HXDLIN( 264)			_hx_tmp1 = ::LangUtil_obj::getString(HX_("cmnOn",c3,6c,0b,49));
            		}
            		else {
HXDLIN( 264)			_hx_tmp1 = ::LangUtil_obj::getString(HX_("cmnOff",4b,b7,f3,a0));
            		}
HXDLIN( 264)		return (_hx_tmp + _hx_tmp1);
            	}



::hx::ObjectPtr< FlashingLightsOption_obj > FlashingLightsOption_obj::__new(::String desc) {
	::hx::ObjectPtr< FlashingLightsOption_obj > __this = new FlashingLightsOption_obj();
	__this->__construct(desc);
	return __this;
}

::hx::ObjectPtr< FlashingLightsOption_obj > FlashingLightsOption_obj::__alloc(::hx::Ctx *_hx_ctx,::String desc) {
	FlashingLightsOption_obj *__this = (FlashingLightsOption_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlashingLightsOption_obj), true, "FlashingLightsOption"));
	*(void **)__this = FlashingLightsOption_obj::_hx_vtable;
	__this->__construct(desc);
	return __this;
}

FlashingLightsOption_obj::FlashingLightsOption_obj()
{
}

::hx::Val FlashingLightsOption_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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
static ::hx::StorageInfo *FlashingLightsOption_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *FlashingLightsOption_obj_sStaticStorageInfo = 0;
#endif

static ::String FlashingLightsOption_obj_sMemberFields[] = {
	HX_("press",83,53,88,c8),
	HX_("updateDisplay",39,8f,b8,86),
	::String(null()) };

::hx::Class FlashingLightsOption_obj::__mClass;

void FlashingLightsOption_obj::__register()
{
	FlashingLightsOption_obj _hx_dummy;
	FlashingLightsOption_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("FlashingLightsOption",a4,b6,46,13);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlashingLightsOption_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlashingLightsOption_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlashingLightsOption_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlashingLightsOption_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

