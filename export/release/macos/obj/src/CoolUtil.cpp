#include <hxcpp.h>

#ifndef INCLUDED_CoolUtil
#include <CoolUtil.h>
#endif
#ifndef INCLUDED_LangUtil
#include <LangUtil.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIState
#include <flixel/addons/ui/FlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#include <flixel/addons/ui/interfaces/IFlxUIState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_lime_utils_Assets
#include <lime/utils/Assets.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_d6b1695b4ccb37a6_30_difficultyString,"CoolUtil","difficultyString",0x7da345af,"CoolUtil.difficultyString","CoolUtil.hx",30,0x9f143813)
HX_LOCAL_STACK_FRAME(_hx_pos_d6b1695b4ccb37a6_58_isRecording,"CoolUtil","isRecording",0xac51e844,"CoolUtil.isRecording","CoolUtil.hx",58,0x9f143813)
HX_LOCAL_STACK_FRAME(_hx_pos_d6b1695b4ccb37a6_63_coolText,"CoolUtil","coolText",0x229f4d59,"CoolUtil.coolText","CoolUtil.hx",63,0x9f143813)
HX_LOCAL_STACK_FRAME(_hx_pos_d6b1695b4ccb37a6_69_coolTextFile,"CoolUtil","coolTextFile",0xa6086875,"CoolUtil.coolTextFile","CoolUtil.hx",69,0x9f143813)
HX_LOCAL_STACK_FRAME(_hx_pos_d6b1695b4ccb37a6_81_coolStringFile,"CoolUtil","coolStringFile",0xc0e9a999,"CoolUtil.coolStringFile","CoolUtil.hx",81,0x9f143813)
HX_LOCAL_STACK_FRAME(_hx_pos_d6b1695b4ccb37a6_93_numberArray,"CoolUtil","numberArray",0x9e0008ad,"CoolUtil.numberArray","CoolUtil.hx",93,0x9f143813)
HX_LOCAL_STACK_FRAME(_hx_pos_d6b1695b4ccb37a6_15_boot,"CoolUtil","boot",0xb2a2e7f5,"CoolUtil.boot","CoolUtil.hx",15,0x9f143813)
static const ::String _hx_array_data_c96d938b_10[] = {
	HX_("obs32",9f,bc,98,2a),HX_("obs64",3e,bf,98,2a),HX_("streamlabs obs",e6,2e,89,39),HX_("bdcam",8d,a3,a9,af),HX_("fraps",d8,7a,83,06),HX_("xsplit",62,37,42,7c),HX_("hycam2",d4,d0,53,82),HX_("twitchstudio",a9,a3,72,3c),
};
HX_LOCAL_STACK_FRAME(_hx_pos_d6b1695b4ccb37a6_26_boot,"CoolUtil","boot",0xb2a2e7f5,"CoolUtil.boot","CoolUtil.hx",26,0x9f143813)
HX_LOCAL_STACK_FRAME(_hx_pos_d6b1695b4ccb37a6_27_boot,"CoolUtil","boot",0xb2a2e7f5,"CoolUtil.boot","CoolUtil.hx",27,0x9f143813)

void CoolUtil_obj::__construct() { }

Dynamic CoolUtil_obj::__CreateEmpty() { return new CoolUtil_obj; }

void *CoolUtil_obj::_hx_vtable = 0;

Dynamic CoolUtil_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CoolUtil_obj > _hx_result = new CoolUtil_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CoolUtil_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x24fe864b;
}

::Array< ::String > CoolUtil_obj::programList;

::String CoolUtil_obj::pfpPath;

bool CoolUtil_obj::grabbedPfp;

::String CoolUtil_obj::difficultyString(){
            	HX_STACKFRAME(&_hx_pos_d6b1695b4ccb37a6_30_difficultyString)
HXLINE(  32)		::String difficultyArray = ::LangUtil_obj::getString(HX_("cmnEasy",a6,c8,ac,2d));
HXLINE(  33)		::String difficultyArray1 = ::LangUtil_obj::getString(HX_("cmnNormal",cb,1f,0d,31));
HXLINE(  31)		::Array< ::String > difficultyArray2 = ::Array_obj< ::String >::__new(3)->init(0,difficultyArray)->init(1,difficultyArray1)->init(2,::LangUtil_obj::getString(HX_("cmnHard",8f,6b,a8,2f)));
HXLINE(  37)		return difficultyArray2->__get(::PlayState_obj::storyDifficulty);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CoolUtil_obj,difficultyString,return )

bool CoolUtil_obj::isRecording(){
            	HX_STACKFRAME(&_hx_pos_d6b1695b4ccb37a6_58_isRecording)
HXDLIN(  58)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CoolUtil_obj,isRecording,return )

::String CoolUtil_obj::coolText(::String path){
            	HX_STACKFRAME(&_hx_pos_d6b1695b4ccb37a6_63_coolText)
HXLINE(  64)		::String daList = ::StringTools_obj::trim(::lime::utils::Assets_obj::getText(path));
HXLINE(  65)		return daList;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CoolUtil_obj,coolText,return )

::Array< ::String > CoolUtil_obj::coolTextFile(::String path){
            	HX_STACKFRAME(&_hx_pos_d6b1695b4ccb37a6_69_coolTextFile)
HXLINE(  70)		::Array< ::String > daList = ::StringTools_obj::trim(::lime::utils::Assets_obj::getText(path)).split(HX_("\n",0a,00,00,00));
HXLINE(  72)		{
HXLINE(  72)			int _g = 0;
HXDLIN(  72)			int _g1 = daList->length;
HXDLIN(  72)			while((_g < _g1)){
HXLINE(  72)				_g = (_g + 1);
HXDLIN(  72)				int i = (_g - 1);
HXLINE(  74)				daList[i] = ::StringTools_obj::trim(daList->__get(i));
            			}
            		}
HXLINE(  77)		return daList;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CoolUtil_obj,coolTextFile,return )

::Array< ::String > CoolUtil_obj::coolStringFile(::String path){
            	HX_STACKFRAME(&_hx_pos_d6b1695b4ccb37a6_81_coolStringFile)
HXLINE(  82)		::Array< ::String > daList = ::StringTools_obj::trim(path).split(HX_("\n",0a,00,00,00));
HXLINE(  84)		{
HXLINE(  84)			int _g = 0;
HXDLIN(  84)			int _g1 = daList->length;
HXDLIN(  84)			while((_g < _g1)){
HXLINE(  84)				_g = (_g + 1);
HXDLIN(  84)				int i = (_g - 1);
HXLINE(  86)				daList[i] = ::StringTools_obj::trim(daList->__get(i));
            			}
            		}
HXLINE(  89)		return daList;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CoolUtil_obj,coolStringFile,return )

::Array< int > CoolUtil_obj::numberArray(int max, ::Dynamic __o_min){
            		 ::Dynamic min = __o_min;
            		if (::hx::IsNull(__o_min)) min = 0;
            	HX_STACKFRAME(&_hx_pos_d6b1695b4ccb37a6_93_numberArray)
HXLINE(  94)		::Array< int > dumbArray = ::Array_obj< int >::__new(0);
HXLINE(  95)		{
HXLINE(  95)			int _g = ( (int)(min) );
HXDLIN(  95)			int _g1 = max;
HXDLIN(  95)			while((_g < _g1)){
HXLINE(  95)				_g = (_g + 1);
HXDLIN(  95)				int i = (_g - 1);
HXLINE(  97)				dumbArray->push(i);
            			}
            		}
HXLINE(  99)		return dumbArray;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CoolUtil_obj,numberArray,return )


CoolUtil_obj::CoolUtil_obj()
{
}

bool CoolUtil_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"pfpPath") ) { outValue = ( pfpPath ); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"coolText") ) { outValue = coolText_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"grabbedPfp") ) { outValue = ( grabbedPfp ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"programList") ) { outValue = ( programList ); return true; }
		if (HX_FIELD_EQ(inName,"isRecording") ) { outValue = isRecording_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"numberArray") ) { outValue = numberArray_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"coolTextFile") ) { outValue = coolTextFile_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"coolStringFile") ) { outValue = coolStringFile_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"difficultyString") ) { outValue = difficultyString_dyn(); return true; }
	}
	return false;
}

bool CoolUtil_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"pfpPath") ) { pfpPath=ioValue.Cast< ::String >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"grabbedPfp") ) { grabbedPfp=ioValue.Cast< bool >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"programList") ) { programList=ioValue.Cast< ::Array< ::String > >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *CoolUtil_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo CoolUtil_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::String > */ ,(void *) &CoolUtil_obj::programList,HX_("programList",02,25,d7,be)},
	{::hx::fsString,(void *) &CoolUtil_obj::pfpPath,HX_("pfpPath",7f,cc,d6,ab)},
	{::hx::fsBool,(void *) &CoolUtil_obj::grabbedPfp,HX_("grabbedPfp",c5,07,94,7d)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void CoolUtil_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CoolUtil_obj::programList,"programList");
	HX_MARK_MEMBER_NAME(CoolUtil_obj::pfpPath,"pfpPath");
	HX_MARK_MEMBER_NAME(CoolUtil_obj::grabbedPfp,"grabbedPfp");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CoolUtil_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CoolUtil_obj::programList,"programList");
	HX_VISIT_MEMBER_NAME(CoolUtil_obj::pfpPath,"pfpPath");
	HX_VISIT_MEMBER_NAME(CoolUtil_obj::grabbedPfp,"grabbedPfp");
};

#endif

::hx::Class CoolUtil_obj::__mClass;

static ::String CoolUtil_obj_sStaticFields[] = {
	HX_("programList",02,25,d7,be),
	HX_("pfpPath",7f,cc,d6,ab),
	HX_("grabbedPfp",c5,07,94,7d),
	HX_("difficultyString",6c,c9,73,cb),
	HX_("isRecording",a7,fd,69,bb),
	HX_("coolText",16,4c,07,ef),
	HX_("coolTextFile",b2,09,03,cc),
	HX_("coolStringFile",16,d4,bc,53),
	HX_("numberArray",10,1e,18,ad),
	::String(null())
};

void CoolUtil_obj::__register()
{
	CoolUtil_obj _hx_dummy;
	CoolUtil_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("CoolUtil",8b,93,6d,c9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CoolUtil_obj::__GetStatic;
	__mClass->mSetStaticField = &CoolUtil_obj::__SetStatic;
	__mClass->mMarkFunc = CoolUtil_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(CoolUtil_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< CoolUtil_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CoolUtil_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CoolUtil_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CoolUtil_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void CoolUtil_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_d6b1695b4ccb37a6_15_boot)
HXDLIN(  15)		programList = ::Array_obj< ::String >::fromData( _hx_array_data_c96d938b_10,8);
            	}
{
            	HX_STACKFRAME(&_hx_pos_d6b1695b4ccb37a6_26_boot)
HXDLIN(  26)		pfpPath = HX_("",00,00,00,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_d6b1695b4ccb37a6_27_boot)
HXDLIN(  27)		grabbedPfp = false;
            	}
}

