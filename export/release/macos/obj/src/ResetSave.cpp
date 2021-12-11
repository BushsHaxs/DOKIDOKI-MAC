#include <hxcpp.h>

#ifndef INCLUDED_Highscore
#include <Highscore.h>
#endif
#ifndef INCLUDED_LangUtil
#include <LangUtil.h>
#endif
#ifndef INCLUDED_Option
#include <Option.h>
#endif
#ifndef INCLUDED_ResetSave
#include <ResetSave.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
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
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c190fe98d048b78e_811_new,"ResetSave","new",0x602b4b7e,"ResetSave.new","Options.hx",811,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_c190fe98d048b78e_822_press,"ResetSave","press",0x698b5221,"ResetSave.press","Options.hx",822,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_c190fe98d048b78e_909_updateDisplay,"ResetSave","updateDisplay",0xb0e85bd7,"ResetSave.updateDisplay","Options.hx",909,0x9d9a0240)

void ResetSave_obj::__construct(::String desc){
            	HX_STACKFRAME(&_hx_pos_c190fe98d048b78e_811_new)
HXLINE( 813)		this->confirm = false;
HXLINE( 817)		super::__construct();
HXLINE( 818)		this->description = desc;
            	}

Dynamic ResetSave_obj::__CreateEmpty() { return new ResetSave_obj; }

void *ResetSave_obj::_hx_vtable = 0;

Dynamic ResetSave_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ResetSave_obj > _hx_result = new ResetSave_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ResetSave_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x27a70eb9) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x27a70eb9;
	} else {
		return inClassId==(int)0x54dd8e04;
	}
}

bool ResetSave_obj::press(){
            	HX_STACKFRAME(&_hx_pos_c190fe98d048b78e_822_press)
HXLINE( 823)		if (!(this->confirm)) {
HXLINE( 825)			this->confirm = true;
HXLINE( 826)			this->display = this->updateDisplay();
HXLINE( 827)			return true;
            		}
HXLINE( 830)		::flixel::FlxG_obj::save->data->__SetField(HX_("language",58,80,11,7a),null(),::hx::paccDynamic);
HXLINE( 831)		::flixel::FlxG_obj::save->data->__SetField(HX_("weekUnlocked",37,64,c4,a5),null(),::hx::paccDynamic);
HXLINE( 832)		::flixel::FlxG_obj::save->data->__SetField(HX_("newInput",8a,07,68,e1),null(),::hx::paccDynamic);
HXLINE( 833)		::flixel::FlxG_obj::save->data->__SetField(HX_("downscroll",ef,45,d4,4f),null(),::hx::paccDynamic);
HXLINE( 834)		::flixel::FlxG_obj::save->data->__SetField(HX_("dfjk",c3,18,67,42),null(),::hx::paccDynamic);
HXLINE( 835)		::flixel::FlxG_obj::save->data->__SetField(HX_("accuracyDisplay",09,75,5e,26),null(),::hx::paccDynamic);
HXLINE( 836)		::flixel::FlxG_obj::save->data->__SetField(HX_("offset",93,97,3f,60),null(),::hx::paccDynamic);
HXLINE( 837)		::flixel::FlxG_obj::save->data->__SetField(HX_("songPosition",9e,dd,3b,8d),null(),::hx::paccDynamic);
HXLINE( 838)		::flixel::FlxG_obj::save->data->__SetField(HX_("fps",e9,c7,4d,00),null(),::hx::paccDynamic);
HXLINE( 839)		::flixel::FlxG_obj::save->data->__SetField(HX_("changedHit",bf,5d,c0,31),null(),::hx::paccDynamic);
HXLINE( 840)		::flixel::FlxG_obj::save->data->__SetField(HX_("fpsRain",dd,e5,17,c7),null(),::hx::paccDynamic);
HXLINE( 841)		::flixel::FlxG_obj::save->data->__SetField(HX_("fpsCap",a9,7b,7e,91),null(),::hx::paccDynamic);
HXLINE( 842)		::flixel::FlxG_obj::save->data->__SetField(HX_("scrollSpeed",3a,e0,46,cb),null(),::hx::paccDynamic);
HXLINE( 843)		::flixel::FlxG_obj::save->data->__SetField(HX_("npsDisplay",51,08,e2,23),null(),::hx::paccDynamic);
HXLINE( 844)		::flixel::FlxG_obj::save->data->__SetField(HX_("frames",a6,af,85,ac),null(),::hx::paccDynamic);
HXLINE( 845)		::flixel::FlxG_obj::save->data->__SetField(HX_("accuracyMod",09,b2,8a,86),null(),::hx::paccDynamic);
HXLINE( 846)		::flixel::FlxG_obj::save->data->__SetField(HX_("watermark",a4,af,1e,e0),null(),::hx::paccDynamic);
HXLINE( 847)		::flixel::FlxG_obj::save->data->__SetField(HX_("ghost",4f,8f,58,93),null(),::hx::paccDynamic);
HXLINE( 848)		::flixel::FlxG_obj::save->data->__SetField(HX_("distractions",31,13,7d,60),null(),::hx::paccDynamic);
HXLINE( 849)		::flixel::FlxG_obj::save->data->__SetField(HX_("flashing",32,85,e8,99),null(),::hx::paccDynamic);
HXLINE( 850)		::flixel::FlxG_obj::save->data->__SetField(HX_("resetButton",21,e5,f4,79),null(),::hx::paccDynamic);
HXLINE( 851)		::flixel::FlxG_obj::save->data->__SetField(HX_("botplay",7b,fb,a9,61),null(),::hx::paccDynamic);
HXLINE( 852)		::flixel::FlxG_obj::save->data->__SetField(HX_("gfCountdown",92,1a,b1,82),null(),::hx::paccDynamic);
HXLINE( 853)		::flixel::FlxG_obj::save->data->__SetField(HX_("zoom",13,a3,f8,50),null(),::hx::paccDynamic);
HXLINE( 854)		::flixel::FlxG_obj::save->data->__SetField(HX_("cacheCharacters",8c,1d,70,34),null(),::hx::paccDynamic);
HXLINE( 855)		::flixel::FlxG_obj::save->data->__SetField(HX_("cacheSongs",5c,9d,7f,c3),null(),::hx::paccDynamic);
HXLINE( 856)		::flixel::FlxG_obj::save->data->__SetField(HX_("cacheMusic",03,37,13,53),null(),::hx::paccDynamic);
HXLINE( 857)		::flixel::FlxG_obj::save->data->__SetField(HX_("cacheSounds",a6,d4,cf,50),null(),::hx::paccDynamic);
HXLINE( 858)		::flixel::FlxG_obj::save->data->__SetField(HX_("middleScroll",42,cd,58,62),null(),::hx::paccDynamic);
HXLINE( 859)		::flixel::FlxG_obj::save->data->__SetField(HX_("laneUnderlay",58,04,15,b5),null(),::hx::paccDynamic);
HXLINE( 860)		::flixel::FlxG_obj::save->data->__SetField(HX_("laneTransparency",24,32,52,af),null(),::hx::paccDynamic);
HXLINE( 861)		::flixel::FlxG_obj::save->data->__SetField(HX_("monibeaten",3c,53,44,8f),null(),::hx::paccDynamic);
HXLINE( 862)		::flixel::FlxG_obj::save->data->__SetField(HX_("sayobeaten",43,14,7b,f6),null(),::hx::paccDynamic);
HXLINE( 863)		::flixel::FlxG_obj::save->data->__SetField(HX_("natbeaten",00,2f,7a,be),null(),::hx::paccDynamic);
HXLINE( 864)		::flixel::FlxG_obj::save->data->__SetField(HX_("yuribeaten",32,30,34,69),null(),::hx::paccDynamic);
HXLINE( 865)		::flixel::FlxG_obj::save->data->__SetField(HX_("extrabeaten",ef,e9,0c,61),null(),::hx::paccDynamic);
HXLINE( 866)		::flixel::FlxG_obj::save->data->__SetField(HX_("extra2beaten",81,0c,3e,cc),null(),::hx::paccDynamic);
HXLINE( 867)		::flixel::FlxG_obj::save->data->__SetField(HX_("gfCountdown",92,1a,b1,82),null(),::hx::paccDynamic);
HXLINE( 868)		::flixel::FlxG_obj::save->data->__SetField(HX_("unlockepip",d6,39,27,23),null(),::hx::paccDynamic);
HXLINE( 869)		::flixel::FlxG_obj::save->data->__SetField(HX_("monipopup",ef,24,f0,3d),null(),::hx::paccDynamic);
HXLINE( 870)		::flixel::FlxG_obj::save->data->__SetField(HX_("sayopopup",c8,a1,66,3e),null(),::hx::paccDynamic);
HXLINE( 871)		::flixel::FlxG_obj::save->data->__SetField(HX_("natpopup",ab,ed,49,7d),null(),::hx::paccDynamic);
HXLINE( 872)		::flixel::FlxG_obj::save->data->__SetField(HX_("yuripopup",b9,98,c5,1e),null(),::hx::paccDynamic);
HXLINE( 873)		::flixel::FlxG_obj::save->data->__SetField(HX_("extra1popup",eb,9e,36,28),null(),::hx::paccDynamic);
HXLINE( 874)		::flixel::FlxG_obj::save->data->__SetField(HX_("extra2popup",4a,fb,91,8e),null(),::hx::paccDynamic);
HXLINE( 875)		::flixel::FlxG_obj::save->data->__SetField(HX_("funnyquestionpopup",bc,24,5f,b0),null(),::hx::paccDynamic);
HXLINE( 876)		::flixel::FlxG_obj::save->data->__SetField(HX_("upBind",b8,51,92,70),null(),::hx::paccDynamic);
HXLINE( 877)		::flixel::FlxG_obj::save->data->__SetField(HX_("downBind",3f,f3,fe,75),null(),::hx::paccDynamic);
HXLINE( 878)		::flixel::FlxG_obj::save->data->__SetField(HX_("leftBind",64,39,12,48),null(),::hx::paccDynamic);
HXLINE( 879)		::flixel::FlxG_obj::save->data->__SetField(HX_("rightBind",b9,4b,dd,ab),null(),::hx::paccDynamic);
HXLINE( 880)		::flixel::FlxG_obj::save->data->__SetField(HX_("gpupBind",a1,30,42,a5),null(),::hx::paccDynamic);
HXLINE( 881)		::flixel::FlxG_obj::save->data->__SetField(HX_("gpdownBind",68,1e,93,1d),null(),::hx::paccDynamic);
HXLINE( 882)		::flixel::FlxG_obj::save->data->__SetField(HX_("gpleftBind",8d,64,a6,ef),null(),::hx::paccDynamic);
HXLINE( 883)		::flixel::FlxG_obj::save->data->__SetField(HX_("gprightBind",70,e4,ee,a5),null(),::hx::paccDynamic);
HXLINE( 884)		::flixel::FlxG_obj::save->data->__SetField(HX_("songScores",96,1a,f0,a0),null(),::hx::paccDynamic);
HXLINE( 885)		{
HXLINE( 885)			 ::Dynamic key = ::Highscore_obj::songScores->keys();
HXDLIN( 885)			while(( (bool)(key->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 885)				::String key1 = ( (::String)(key->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 887)				::Highscore_obj::songScores->set(key1,0);
            			}
            		}
HXLINE( 890)		::flixel::FlxG_obj::save->flush(null(),null());
HXLINE( 893)		::Sys_obj::exit(0);
HXLINE( 902)		this->confirm = false;
HXLINE( 903)		this->display = this->updateDisplay();
HXLINE( 904)		return true;
            	}


::String ResetSave_obj::updateDisplay(){
            	HX_STACKFRAME(&_hx_pos_c190fe98d048b78e_909_updateDisplay)
HXDLIN( 909)		if (this->confirm) {
HXDLIN( 909)			return ::LangUtil_obj::getString(HX_("optSaveResetConfirm",21,70,d4,25));
            		}
            		else {
HXDLIN( 909)			return ::LangUtil_obj::getString(HX_("optSaveReset",9f,f6,55,1c));
            		}
HXDLIN( 909)		return null();
            	}



::hx::ObjectPtr< ResetSave_obj > ResetSave_obj::__new(::String desc) {
	::hx::ObjectPtr< ResetSave_obj > __this = new ResetSave_obj();
	__this->__construct(desc);
	return __this;
}

::hx::ObjectPtr< ResetSave_obj > ResetSave_obj::__alloc(::hx::Ctx *_hx_ctx,::String desc) {
	ResetSave_obj *__this = (ResetSave_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ResetSave_obj), true, "ResetSave"));
	*(void **)__this = ResetSave_obj::_hx_vtable;
	__this->__construct(desc);
	return __this;
}

ResetSave_obj::ResetSave_obj()
{
}

::hx::Val ResetSave_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"press") ) { return ::hx::Val( press_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"confirm") ) { return ::hx::Val( confirm ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"updateDisplay") ) { return ::hx::Val( updateDisplay_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ResetSave_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"confirm") ) { confirm=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ResetSave_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("confirm",00,9d,39,10));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ResetSave_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(ResetSave_obj,confirm),HX_("confirm",00,9d,39,10)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ResetSave_obj_sStaticStorageInfo = 0;
#endif

static ::String ResetSave_obj_sMemberFields[] = {
	HX_("confirm",00,9d,39,10),
	HX_("press",83,53,88,c8),
	HX_("updateDisplay",39,8f,b8,86),
	::String(null()) };

::hx::Class ResetSave_obj::__mClass;

void ResetSave_obj::__register()
{
	ResetSave_obj _hx_dummy;
	ResetSave_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("ResetSave",8c,74,0c,34);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ResetSave_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ResetSave_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ResetSave_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ResetSave_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

