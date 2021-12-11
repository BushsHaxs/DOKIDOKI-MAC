#include <hxcpp.h>

#ifndef INCLUDED_LangUtil
#include <LangUtil.h>
#endif
#ifndef INCLUDED_MusicCaching
#include <MusicCaching.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_368ddee42bcf69db_675_new,"MusicCaching","new",0x5a2befec,"MusicCaching.new","Options.hx",675,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_368ddee42bcf69db_681_press,"MusicCaching","press",0x60506e0f,"MusicCaching.press","Options.hx",681,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_368ddee42bcf69db_690_updateDisplay,"MusicCaching","updateDisplay",0x073015c5,"MusicCaching.updateDisplay","Options.hx",690,0x9d9a0240)

void MusicCaching_obj::__construct(::String desc){
            	HX_STACKFRAME(&_hx_pos_368ddee42bcf69db_675_new)
HXLINE( 676)		super::__construct();
HXLINE( 677)		this->description = desc;
            	}

Dynamic MusicCaching_obj::__CreateEmpty() { return new MusicCaching_obj; }

void *MusicCaching_obj::_hx_vtable = 0;

Dynamic MusicCaching_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MusicCaching_obj > _hx_result = new MusicCaching_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool MusicCaching_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x216b52e6) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x216b52e6;
	} else {
		return inClassId==(int)0x27a70eb9;
	}
}

bool MusicCaching_obj::press(){
            	HX_STACKFRAME(&_hx_pos_368ddee42bcf69db_681_press)
HXLINE( 682)		::flixel::FlxG_obj::save->data->__SetField(HX_("cacheMusic",03,37,13,53),!(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("cacheMusic",03,37,13,53),::hx::paccDynamic)) )),::hx::paccDynamic);
HXLINE( 684)		this->display = this->updateDisplay();
HXLINE( 685)		return true;
            	}


::String MusicCaching_obj::updateDisplay(){
            	HX_STACKFRAME(&_hx_pos_368ddee42bcf69db_690_updateDisplay)
HXDLIN( 690)		::String _hx_tmp = (::LangUtil_obj::getString(HX_("optMusicCache",70,c1,47,cf)) + HX_(" ",20,00,00,00));
HXDLIN( 690)		::String _hx_tmp1;
HXDLIN( 690)		if (( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("cacheMusic",03,37,13,53),::hx::paccDynamic)) )) {
HXDLIN( 690)			_hx_tmp1 = ::LangUtil_obj::getString(HX_("cmnOn",c3,6c,0b,49));
            		}
            		else {
HXDLIN( 690)			_hx_tmp1 = ::LangUtil_obj::getString(HX_("cmnOff",4b,b7,f3,a0));
            		}
HXDLIN( 690)		return (_hx_tmp + _hx_tmp1);
            	}



::hx::ObjectPtr< MusicCaching_obj > MusicCaching_obj::__new(::String desc) {
	::hx::ObjectPtr< MusicCaching_obj > __this = new MusicCaching_obj();
	__this->__construct(desc);
	return __this;
}

::hx::ObjectPtr< MusicCaching_obj > MusicCaching_obj::__alloc(::hx::Ctx *_hx_ctx,::String desc) {
	MusicCaching_obj *__this = (MusicCaching_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MusicCaching_obj), true, "MusicCaching"));
	*(void **)__this = MusicCaching_obj::_hx_vtable;
	__this->__construct(desc);
	return __this;
}

MusicCaching_obj::MusicCaching_obj()
{
}

::hx::Val MusicCaching_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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
static ::hx::StorageInfo *MusicCaching_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *MusicCaching_obj_sStaticStorageInfo = 0;
#endif

static ::String MusicCaching_obj_sMemberFields[] = {
	HX_("press",83,53,88,c8),
	HX_("updateDisplay",39,8f,b8,86),
	::String(null()) };

::hx::Class MusicCaching_obj::__mClass;

void MusicCaching_obj::__register()
{
	MusicCaching_obj _hx_dummy;
	MusicCaching_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("MusicCaching",fa,c9,aa,a1);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MusicCaching_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MusicCaching_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MusicCaching_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MusicCaching_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

