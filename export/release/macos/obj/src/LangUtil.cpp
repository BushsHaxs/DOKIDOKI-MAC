#include <hxcpp.h>

#ifndef INCLUDED_LangUtil
#include <LangUtil.h>
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

HX_LOCAL_STACK_FRAME(_hx_pos_88718b0e6c83ad45_11_getFont,"LangUtil","getFont",0xbf9f1447,"LangUtil.getFont","LangUtil.hx",11,0xb1e5cb8e)
HX_LOCAL_STACK_FRAME(_hx_pos_88718b0e6c83ad45_52_getString,"LangUtil","getString",0x4b036d49,"LangUtil.getString","LangUtil.hx",52,0xb1e5cb8e)

void LangUtil_obj::__construct() { }

Dynamic LangUtil_obj::__CreateEmpty() { return new LangUtil_obj; }

void *LangUtil_obj::_hx_vtable = 0;

Dynamic LangUtil_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< LangUtil_obj > _hx_result = new LangUtil_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool LangUtil_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x47ff92b8;
}

::Array< ::String > LangUtil_obj::localeList;

::String LangUtil_obj::getFont(::String __o_type){
            		::String type = __o_type;
            		if (::hx::IsNull(__o_type)) type = HX_("vcr",a5,e0,59,00);
            	HX_STACKFRAME(&_hx_pos_88718b0e6c83ad45_11_getFont)
HXLINE(  12)		::String font = HX_("",00,00,00,00);
HXLINE(  14)		::String _hx_switch_0 = type.toLowerCase();
            		if (  (_hx_switch_0==HX_("aller",ce,9b,93,21)) ){
HXLINE(  17)			if (::hx::IsEq( ::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic),HX_("ru-RU",4d,85,26,f1) )) {
HXLINE(  20)				font = HX_("Ubuntu Bold",5e,cb,9f,9a);
            			}
            			else {
HXLINE(  22)				font = HX_("Aller",ae,0b,c1,b4);
            			}
HXLINE(  17)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("pixel",86,c6,a3,c2)) ){
HXLINE(  33)			 ::Dynamic _g =  ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic));
HXLINE(  36)			font = HX_("LanaPixel",5e,a7,70,48);
HXLINE(  33)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("riffic",51,90,7b,4d)) ){
HXLINE(  25)			if (::hx::IsEq( ::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic),HX_("ru-RU",4d,85,26,f1) )) {
HXLINE(  28)				font = HX_("Ubuntu Bold",5e,cb,9f,9a);
            			}
            			else {
HXLINE(  30)				font = HX_("Riffic Free Bold",0a,69,7d,a4);
            			}
HXLINE(  25)			goto _hx_goto_0;
            		}
            		/* default */{
HXLINE(  39)			if (::hx::IsEq( ::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic),HX_("ru-RU",4d,85,26,f1) )) {
HXLINE(  42)				font = HX_("Ubuntu Bold",5e,cb,9f,9a);
            			}
            			else {
HXLINE(  44)				font = HX_("VCR OSD Mono",be,44,e4,b8);
            			}
            		}
            		_hx_goto_0:;
HXLINE(  48)		return font;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LangUtil_obj,getFont,return )

::String LangUtil_obj::getString(::String identifier){
            	HX_STACKFRAME(&_hx_pos_88718b0e6c83ad45_52_getString)
HXLINE(  53)		::String string = HX_("",00,00,00,00);
HXLINE(  55)		{
HXLINE(  55)			int _g = 0;
HXDLIN(  55)			int _g1 = ::LangUtil_obj::localeList->length;
HXDLIN(  55)			while((_g < _g1)){
HXLINE(  55)				_g = (_g + 1);
HXDLIN(  55)				int i = (_g - 1);
HXLINE(  57)				::Array< ::String > data = ::LangUtil_obj::localeList->__get(i).split(HX_("::",c0,32,00,00));
HXLINE(  59)				if ((data->__get(0) != identifier)) {
HXLINE(  60)					continue;
            				}
            				else {
HXLINE(  62)					string = data->__get(1);
            				}
            			}
            		}
HXLINE(  65)		if ((string == HX_("",00,00,00,00))) {
HXLINE(  66)			return identifier;
            		}
            		else {
HXLINE(  68)			return string;
            		}
HXLINE(  65)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LangUtil_obj,getString,return )


LangUtil_obj::LangUtil_obj()
{
}

bool LangUtil_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getFont") ) { outValue = getFont_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getString") ) { outValue = getString_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"localeList") ) { outValue = ( localeList ); return true; }
	}
	return false;
}

bool LangUtil_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"localeList") ) { localeList=ioValue.Cast< ::Array< ::String > >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *LangUtil_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo LangUtil_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::String > */ ,(void *) &LangUtil_obj::localeList,HX_("localeList",18,12,cb,fe)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void LangUtil_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LangUtil_obj::localeList,"localeList");
};

#ifdef HXCPP_VISIT_ALLOCS
static void LangUtil_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LangUtil_obj::localeList,"localeList");
};

#endif

::hx::Class LangUtil_obj::__mClass;

static ::String LangUtil_obj_sStaticFields[] = {
	HX_("localeList",18,12,cb,fe),
	HX_("getFont",85,0d,43,16),
	HX_("getString",07,b2,86,8d),
	::String(null())
};

void LangUtil_obj::__register()
{
	LangUtil_obj _hx_dummy;
	LangUtil_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("LangUtil",30,d5,aa,3e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &LangUtil_obj::__GetStatic;
	__mClass->mSetStaticField = &LangUtil_obj::__SetStatic;
	__mClass->mMarkFunc = LangUtil_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(LangUtil_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< LangUtil_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = LangUtil_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LangUtil_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LangUtil_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

