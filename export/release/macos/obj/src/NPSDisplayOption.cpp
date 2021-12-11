#include <hxcpp.h>

#ifndef INCLUDED_LangUtil
#include <LangUtil.h>
#endif
#ifndef INCLUDED_NPSDisplayOption
#include <NPSDisplayOption.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_94908c72a49529df_480_new,"NPSDisplayOption","new",0x0195d6b8,"NPSDisplayOption.new","Options.hx",480,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_94908c72a49529df_486_press,"NPSDisplayOption","press",0x231a9fdb,"NPSDisplayOption.press","Options.hx",486,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_94908c72a49529df_494_updateDisplay,"NPSDisplayOption","updateDisplay",0xf172f391,"NPSDisplayOption.updateDisplay","Options.hx",494,0x9d9a0240)

void NPSDisplayOption_obj::__construct(::String desc){
            	HX_STACKFRAME(&_hx_pos_94908c72a49529df_480_new)
HXLINE( 481)		super::__construct();
HXLINE( 482)		this->description = desc;
            	}

Dynamic NPSDisplayOption_obj::__CreateEmpty() { return new NPSDisplayOption_obj; }

void *NPSDisplayOption_obj::_hx_vtable = 0;

Dynamic NPSDisplayOption_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< NPSDisplayOption_obj > _hx_result = new NPSDisplayOption_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool NPSDisplayOption_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x27a70eb9) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x27a70eb9;
	} else {
		return inClassId==(int)0x68300d86;
	}
}

bool NPSDisplayOption_obj::press(){
            	HX_STACKFRAME(&_hx_pos_94908c72a49529df_486_press)
HXLINE( 487)		::flixel::FlxG_obj::save->data->__SetField(HX_("npsDisplay",51,08,e2,23),!(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("npsDisplay",51,08,e2,23),::hx::paccDynamic)) )),::hx::paccDynamic);
HXLINE( 488)		this->display = this->updateDisplay();
HXLINE( 489)		return true;
            	}


::String NPSDisplayOption_obj::updateDisplay(){
            	HX_STACKFRAME(&_hx_pos_94908c72a49529df_494_updateDisplay)
HXDLIN( 494)		::String _hx_tmp = (::LangUtil_obj::getString(HX_("optNPS",7e,3b,66,2b)) + HX_(" ",20,00,00,00));
HXDLIN( 494)		::String _hx_tmp1;
HXDLIN( 494)		if (( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("npsDisplay",51,08,e2,23),::hx::paccDynamic)) )) {
HXDLIN( 494)			_hx_tmp1 = ::LangUtil_obj::getString(HX_("cmnOn",c3,6c,0b,49));
            		}
            		else {
HXDLIN( 494)			_hx_tmp1 = ::LangUtil_obj::getString(HX_("cmnOff",4b,b7,f3,a0));
            		}
HXDLIN( 494)		return (_hx_tmp + _hx_tmp1);
            	}



::hx::ObjectPtr< NPSDisplayOption_obj > NPSDisplayOption_obj::__new(::String desc) {
	::hx::ObjectPtr< NPSDisplayOption_obj > __this = new NPSDisplayOption_obj();
	__this->__construct(desc);
	return __this;
}

::hx::ObjectPtr< NPSDisplayOption_obj > NPSDisplayOption_obj::__alloc(::hx::Ctx *_hx_ctx,::String desc) {
	NPSDisplayOption_obj *__this = (NPSDisplayOption_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(NPSDisplayOption_obj), true, "NPSDisplayOption"));
	*(void **)__this = NPSDisplayOption_obj::_hx_vtable;
	__this->__construct(desc);
	return __this;
}

NPSDisplayOption_obj::NPSDisplayOption_obj()
{
}

::hx::Val NPSDisplayOption_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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
static ::hx::StorageInfo *NPSDisplayOption_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *NPSDisplayOption_obj_sStaticStorageInfo = 0;
#endif

static ::String NPSDisplayOption_obj_sMemberFields[] = {
	HX_("press",83,53,88,c8),
	HX_("updateDisplay",39,8f,b8,86),
	::String(null()) };

::hx::Class NPSDisplayOption_obj::__mClass;

void NPSDisplayOption_obj::__register()
{
	NPSDisplayOption_obj _hx_dummy;
	NPSDisplayOption_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("NPSDisplayOption",c6,5a,4e,92);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(NPSDisplayOption_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< NPSDisplayOption_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NPSDisplayOption_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NPSDisplayOption_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

