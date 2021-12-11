#include <hxcpp.h>

#ifndef INCLUDED_LangUtil
#include <LangUtil.h>
#endif
#ifndef INCLUDED_Option
#include <Option.h>
#endif
#ifndef INCLUDED_SongCaching
#include <SongCaching.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_92347808d3cf3650_653_new,"SongCaching","new",0x004f367c,"SongCaching.new","Options.hx",653,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_92347808d3cf3650_659_press,"SongCaching","press",0x4abe789f,"SongCaching.press","Options.hx",659,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_92347808d3cf3650_668_updateDisplay,"SongCaching","updateDisplay",0x25833055,"SongCaching.updateDisplay","Options.hx",668,0x9d9a0240)

void SongCaching_obj::__construct(::String desc){
            	HX_STACKFRAME(&_hx_pos_92347808d3cf3650_653_new)
HXLINE( 654)		super::__construct();
HXLINE( 655)		this->description = desc;
            	}

Dynamic SongCaching_obj::__CreateEmpty() { return new SongCaching_obj; }

void *SongCaching_obj::_hx_vtable = 0;

Dynamic SongCaching_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SongCaching_obj > _hx_result = new SongCaching_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool SongCaching_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x27a70eb9) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x27a70eb9;
	} else {
		return inClassId==(int)0x72decdca;
	}
}

bool SongCaching_obj::press(){
            	HX_STACKFRAME(&_hx_pos_92347808d3cf3650_659_press)
HXLINE( 660)		::flixel::FlxG_obj::save->data->__SetField(HX_("cacheSongs",5c,9d,7f,c3),!(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("cacheSongs",5c,9d,7f,c3),::hx::paccDynamic)) )),::hx::paccDynamic);
HXLINE( 662)		this->display = this->updateDisplay();
HXLINE( 663)		return true;
            	}


::String SongCaching_obj::updateDisplay(){
            	HX_STACKFRAME(&_hx_pos_92347808d3cf3650_668_updateDisplay)
HXDLIN( 668)		::String _hx_tmp = (::LangUtil_obj::getString(HX_("optSongCache",7a,87,6f,17)) + HX_(" ",20,00,00,00));
HXDLIN( 668)		::String _hx_tmp1;
HXDLIN( 668)		if (( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("cacheSongs",5c,9d,7f,c3),::hx::paccDynamic)) )) {
HXDLIN( 668)			_hx_tmp1 = ::LangUtil_obj::getString(HX_("cmnOn",c3,6c,0b,49));
            		}
            		else {
HXDLIN( 668)			_hx_tmp1 = ::LangUtil_obj::getString(HX_("cmnOff",4b,b7,f3,a0));
            		}
HXDLIN( 668)		return (_hx_tmp + _hx_tmp1);
            	}



::hx::ObjectPtr< SongCaching_obj > SongCaching_obj::__new(::String desc) {
	::hx::ObjectPtr< SongCaching_obj > __this = new SongCaching_obj();
	__this->__construct(desc);
	return __this;
}

::hx::ObjectPtr< SongCaching_obj > SongCaching_obj::__alloc(::hx::Ctx *_hx_ctx,::String desc) {
	SongCaching_obj *__this = (SongCaching_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SongCaching_obj), true, "SongCaching"));
	*(void **)__this = SongCaching_obj::_hx_vtable;
	__this->__construct(desc);
	return __this;
}

SongCaching_obj::SongCaching_obj()
{
}

::hx::Val SongCaching_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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
static ::hx::StorageInfo *SongCaching_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *SongCaching_obj_sStaticStorageInfo = 0;
#endif

static ::String SongCaching_obj_sMemberFields[] = {
	HX_("press",83,53,88,c8),
	HX_("updateDisplay",39,8f,b8,86),
	::String(null()) };

::hx::Class SongCaching_obj::__mClass;

void SongCaching_obj::__register()
{
	SongCaching_obj _hx_dummy;
	SongCaching_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("SongCaching",8a,88,e3,bf);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SongCaching_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SongCaching_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SongCaching_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SongCaching_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

