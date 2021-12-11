#include <hxcpp.h>

#ifndef INCLUDED_GFCountdownOption
#include <GFCountdownOption.h>
#endif
#ifndef INCLUDED_LangUtil
#include <LangUtil.h>
#endif
#ifndef INCLUDED_Option
#include <Option.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_711cb005a4b7bfee_610_new,"GFCountdownOption","new",0xaddc3819,"GFCountdownOption.new","Options.hx",610,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_711cb005a4b7bfee_616_press,"GFCountdownOption","press",0x36c4db7c,"GFCountdownOption.press","Options.hx",616,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_711cb005a4b7bfee_624_updateDisplay,"GFCountdownOption","updateDisplay",0x0c233832,"GFCountdownOption.updateDisplay","Options.hx",624,0x9d9a0240)

void GFCountdownOption_obj::__construct(::String desc){
            	HX_STACKFRAME(&_hx_pos_711cb005a4b7bfee_610_new)
HXLINE( 611)		super::__construct();
HXLINE( 612)		this->description = desc;
            	}

Dynamic GFCountdownOption_obj::__CreateEmpty() { return new GFCountdownOption_obj; }

void *GFCountdownOption_obj::_hx_vtable = 0;

Dynamic GFCountdownOption_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GFCountdownOption_obj > _hx_result = new GFCountdownOption_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool GFCountdownOption_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x27a70eb9) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x27a70eb9;
	} else {
		return inClassId==(int)0x6de8ece7;
	}
}

bool GFCountdownOption_obj::press(){
            	HX_STACKFRAME(&_hx_pos_711cb005a4b7bfee_616_press)
HXLINE( 617)		::flixel::FlxG_obj::save->data->__SetField(HX_("gfCountdown",92,1a,b1,82),!(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("gfCountdown",92,1a,b1,82),::hx::paccDynamic)) )),::hx::paccDynamic);
HXLINE( 618)		 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN( 618)		::String _hx_tmp1 = (HX_("Girlfriend Countdown: ",31,12,c0,69) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("gfCountdown",92,1a,b1,82),::hx::paccDynamic))));
HXDLIN( 618)		_hx_tmp(_hx_tmp1,::hx::SourceInfo(HX_("source/Options.hx",34,ca,fe,29),618,HX_("GFCountdownOption",a7,37,4e,1e),HX_("press",83,53,88,c8)));
HXLINE( 619)		this->display = this->updateDisplay();
HXLINE( 620)		return true;
            	}


::String GFCountdownOption_obj::updateDisplay(){
            	HX_STACKFRAME(&_hx_pos_711cb005a4b7bfee_624_updateDisplay)
HXDLIN( 624)		::String _hx_tmp = (::LangUtil_obj::getString(HX_("optGFCountdown",3f,71,b0,15)) + HX_(" ",20,00,00,00));
HXDLIN( 624)		::String _hx_tmp1;
HXDLIN( 624)		if (( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("gfCountdown",92,1a,b1,82),::hx::paccDynamic)) )) {
HXDLIN( 624)			_hx_tmp1 = ::LangUtil_obj::getString(HX_("cmnOn",c3,6c,0b,49));
            		}
            		else {
HXDLIN( 624)			_hx_tmp1 = ::LangUtil_obj::getString(HX_("cmnOff",4b,b7,f3,a0));
            		}
HXDLIN( 624)		return (_hx_tmp + _hx_tmp1);
            	}



::hx::ObjectPtr< GFCountdownOption_obj > GFCountdownOption_obj::__new(::String desc) {
	::hx::ObjectPtr< GFCountdownOption_obj > __this = new GFCountdownOption_obj();
	__this->__construct(desc);
	return __this;
}

::hx::ObjectPtr< GFCountdownOption_obj > GFCountdownOption_obj::__alloc(::hx::Ctx *_hx_ctx,::String desc) {
	GFCountdownOption_obj *__this = (GFCountdownOption_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GFCountdownOption_obj), true, "GFCountdownOption"));
	*(void **)__this = GFCountdownOption_obj::_hx_vtable;
	__this->__construct(desc);
	return __this;
}

GFCountdownOption_obj::GFCountdownOption_obj()
{
}

::hx::Val GFCountdownOption_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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
static ::hx::StorageInfo *GFCountdownOption_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *GFCountdownOption_obj_sStaticStorageInfo = 0;
#endif

static ::String GFCountdownOption_obj_sMemberFields[] = {
	HX_("press",83,53,88,c8),
	HX_("updateDisplay",39,8f,b8,86),
	::String(null()) };

::hx::Class GFCountdownOption_obj::__mClass;

void GFCountdownOption_obj::__register()
{
	GFCountdownOption_obj _hx_dummy;
	GFCountdownOption_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("GFCountdownOption",a7,37,4e,1e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(GFCountdownOption_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< GFCountdownOption_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GFCountdownOption_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GFCountdownOption_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

