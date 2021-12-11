#include <hxcpp.h>

#ifndef INCLUDED_Highscore
#include <Highscore.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
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
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_59d01746e3baf250_14_saveScore,"Highscore","saveScore",0xbac27177,"Highscore.saveScore","Highscore.hx",14,0x77c0e42e)
HX_LOCAL_STACK_FRAME(_hx_pos_59d01746e3baf250_33_saveWeekScore,"Highscore","saveWeekScore",0x4660a363,"Highscore.saveWeekScore","Highscore.hx",33,0x77c0e42e)
HX_LOCAL_STACK_FRAME(_hx_pos_59d01746e3baf250_53_setScore,"Highscore","setScore",0x2adf0fee,"Highscore.setScore","Highscore.hx",53,0x77c0e42e)
HX_LOCAL_STACK_FRAME(_hx_pos_59d01746e3baf250_61_formatSong,"Highscore","formatSong",0x2cf91dca,"Highscore.formatSong","Highscore.hx",61,0x77c0e42e)
HX_LOCAL_STACK_FRAME(_hx_pos_59d01746e3baf250_73_getScore,"Highscore","getScore",0x7c81b67a,"Highscore.getScore","Highscore.hx",73,0x77c0e42e)
HX_LOCAL_STACK_FRAME(_hx_pos_59d01746e3baf250_81_getWeekScore,"Highscore","getWeekScore",0xb3da25e6,"Highscore.getWeekScore","Highscore.hx",81,0x77c0e42e)
HX_LOCAL_STACK_FRAME(_hx_pos_59d01746e3baf250_90_load,"Highscore","load",0x978326c4,"Highscore.load","Highscore.hx",90,0x77c0e42e)
HX_LOCAL_STACK_FRAME(_hx_pos_59d01746e3baf250_8_boot,"Highscore","boot",0x90e710d0,"Highscore.boot","Highscore.hx",8,0x77c0e42e)

void Highscore_obj::__construct() { }

Dynamic Highscore_obj::__CreateEmpty() { return new Highscore_obj; }

void *Highscore_obj::_hx_vtable = 0;

Dynamic Highscore_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Highscore_obj > _hx_result = new Highscore_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Highscore_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x55f38dd0;
}

 ::haxe::ds::StringMap Highscore_obj::songScores;

void Highscore_obj::saveScore(::String song,::hx::Null< int >  __o_score, ::Dynamic __o_diff){
            		int score = __o_score.Default(0);
            		 ::Dynamic diff = __o_diff;
            		if (::hx::IsNull(__o_diff)) diff = 0;
            	HX_STACKFRAME(&_hx_pos_59d01746e3baf250_14_saveScore)
HXLINE(  15)		::String daSong = ::Highscore_obj::formatSong(song,( (int)(diff) ));
HXLINE(  17)		bool _hx_tmp;
HXDLIN(  17)		if (!(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("botplay",7b,fb,a9,61),::hx::paccDynamic)) ))) {
HXLINE(  17)			_hx_tmp = !(::PlayState_obj::cannotDie);
            		}
            		else {
HXLINE(  17)			_hx_tmp = false;
            		}
HXDLIN(  17)		if (_hx_tmp) {
HXLINE(  19)			if (::Highscore_obj::songScores->exists(daSong)) {
HXLINE(  21)				if (::hx::IsLess( ::Highscore_obj::songScores->get(daSong),score )) {
HXLINE(  22)					::Highscore_obj::setScore(daSong,score);
            				}
            			}
            			else {
HXLINE(  25)				::Highscore_obj::setScore(daSong,score);
            			}
            		}
            		else {
HXLINE(  28)			::haxe::Log_obj::trace(HX_("BotPlay detected. Score saving is disabled.",db,9d,e0,2d),::hx::SourceInfo(HX_("source/Highscore.hx",22,91,de,7c),28,HX_("Highscore",90,18,b0,92),HX_("saveScore",d5,7a,86,07)));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Highscore_obj,saveScore,(void))

void Highscore_obj::saveWeekScore(::hx::Null< int >  __o_week,::hx::Null< int >  __o_score, ::Dynamic __o_diff){
            		int week = __o_week.Default(1);
            		int score = __o_score.Default(0);
            		 ::Dynamic diff = __o_diff;
            		if (::hx::IsNull(__o_diff)) diff = 0;
            	HX_STACKFRAME(&_hx_pos_59d01746e3baf250_33_saveWeekScore)
HXDLIN(  33)		bool _hx_tmp;
HXDLIN(  33)		if (!(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("botplay",7b,fb,a9,61),::hx::paccDynamic)) ))) {
HXDLIN(  33)			_hx_tmp = !(::PlayState_obj::cannotDie);
            		}
            		else {
HXDLIN(  33)			_hx_tmp = false;
            		}
HXDLIN(  33)		if (_hx_tmp) {
HXLINE(  35)			::String daWeek = ::Highscore_obj::formatSong((HX_("week",f4,5f,f5,4e) + week),( (int)(diff) ));
HXLINE(  37)			if (::Highscore_obj::songScores->exists(daWeek)) {
HXLINE(  39)				if (::hx::IsLess( ::Highscore_obj::songScores->get(daWeek),score )) {
HXLINE(  40)					::Highscore_obj::setScore(daWeek,score);
            				}
            			}
            			else {
HXLINE(  43)				::Highscore_obj::setScore(daWeek,score);
            			}
            		}
            		else {
HXLINE(  46)			::haxe::Log_obj::trace(HX_("BotPlay detected. Score saving is disabled.",db,9d,e0,2d),::hx::SourceInfo(HX_("source/Highscore.hx",22,91,de,7c),46,HX_("Highscore",90,18,b0,92),HX_("saveWeekScore",c1,b3,07,00)));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Highscore_obj,saveWeekScore,(void))

void Highscore_obj::setScore(::String song,int score){
            	HX_STACKFRAME(&_hx_pos_59d01746e3baf250_53_setScore)
HXLINE(  55)		::Highscore_obj::songScores->set(song,score);
HXLINE(  56)		::flixel::FlxG_obj::save->data->__SetField(HX_("songScores",96,1a,f0,a0),::Highscore_obj::songScores,::hx::paccDynamic);
HXLINE(  57)		::flixel::FlxG_obj::save->flush(null(),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Highscore_obj,setScore,(void))

::String Highscore_obj::formatSong(::String song,int diff){
            	HX_STACKFRAME(&_hx_pos_59d01746e3baf250_61_formatSong)
HXLINE(  62)		::String daSong = song;
HXLINE(  64)		if ((diff == 0)) {
HXLINE(  65)			daSong = (daSong + HX_("-easy",af,a6,14,2c));
            		}
            		else {
HXLINE(  66)			if ((diff == 2)) {
HXLINE(  67)				daSong = (daSong + HX_("-hard",98,49,10,2e));
            			}
            		}
HXLINE(  69)		return daSong;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Highscore_obj,formatSong,return )

int Highscore_obj::getScore(::String song,int diff){
            	HX_STACKFRAME(&_hx_pos_59d01746e3baf250_73_getScore)
HXLINE(  74)		::Dynamic this1 = ::Highscore_obj::songScores;
HXDLIN(  74)		if (!(( ( ::haxe::ds::StringMap)(this1) )->exists(::Highscore_obj::formatSong(song,diff)))) {
HXLINE(  75)			::Highscore_obj::setScore(::Highscore_obj::formatSong(song,diff),0);
            		}
HXLINE(  77)		::Dynamic this2 = ::Highscore_obj::songScores;
HXDLIN(  77)		return ( ( ::haxe::ds::StringMap)(this2) )->get_int(::Highscore_obj::formatSong(song,diff));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Highscore_obj,getScore,return )

int Highscore_obj::getWeekScore(int week,int diff){
            	HX_STACKFRAME(&_hx_pos_59d01746e3baf250_81_getWeekScore)
HXLINE(  82)		::Dynamic this1 = ::Highscore_obj::songScores;
HXDLIN(  82)		if (!(( ( ::haxe::ds::StringMap)(this1) )->exists(::Highscore_obj::formatSong((HX_("week",f4,5f,f5,4e) + week),diff)))) {
HXLINE(  83)			::Highscore_obj::setScore(::Highscore_obj::formatSong((HX_("week",f4,5f,f5,4e) + week),diff),0);
            		}
HXLINE(  85)		::Dynamic this2 = ::Highscore_obj::songScores;
HXDLIN(  85)		return ( ( ::haxe::ds::StringMap)(this2) )->get_int(::Highscore_obj::formatSong((HX_("week",f4,5f,f5,4e) + week),diff));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Highscore_obj,getWeekScore,return )

void Highscore_obj::load(){
            	HX_STACKFRAME(&_hx_pos_59d01746e3baf250_90_load)
HXDLIN(  90)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("songScores",96,1a,f0,a0),::hx::paccDynamic) )) {
HXLINE(  92)			::Highscore_obj::songScores = ( ( ::haxe::ds::StringMap)(::flixel::FlxG_obj::save->data->__Field(HX_("songScores",96,1a,f0,a0),::hx::paccDynamic)) );
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Highscore_obj,load,(void))


Highscore_obj::Highscore_obj()
{
}

bool Highscore_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { outValue = load_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"setScore") ) { outValue = setScore_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getScore") ) { outValue = getScore_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"saveScore") ) { outValue = saveScore_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"songScores") ) { outValue = ( songScores ); return true; }
		if (HX_FIELD_EQ(inName,"formatSong") ) { outValue = formatSong_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getWeekScore") ) { outValue = getWeekScore_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"saveWeekScore") ) { outValue = saveWeekScore_dyn(); return true; }
	}
	return false;
}

bool Highscore_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"songScores") ) { songScores=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Highscore_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Highscore_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &Highscore_obj::songScores,HX_("songScores",96,1a,f0,a0)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Highscore_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Highscore_obj::songScores,"songScores");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Highscore_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Highscore_obj::songScores,"songScores");
};

#endif

::hx::Class Highscore_obj::__mClass;

static ::String Highscore_obj_sStaticFields[] = {
	HX_("songScores",96,1a,f0,a0),
	HX_("saveScore",d5,7a,86,07),
	HX_("saveWeekScore",c1,b3,07,00),
	HX_("setScore",50,dc,0d,87),
	HX_("formatSong",ac,46,bd,0b),
	HX_("getScore",dc,82,b0,d8),
	HX_("getWeekScore",48,cb,a3,ea),
	HX_("load",26,9a,b7,47),
	::String(null())
};

void Highscore_obj::__register()
{
	Highscore_obj _hx_dummy;
	Highscore_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Highscore",90,18,b0,92);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Highscore_obj::__GetStatic;
	__mClass->mSetStaticField = &Highscore_obj::__SetStatic;
	__mClass->mMarkFunc = Highscore_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Highscore_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Highscore_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Highscore_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Highscore_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Highscore_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Highscore_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_59d01746e3baf250_8_boot)
HXDLIN(   8)		songScores =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}
}

