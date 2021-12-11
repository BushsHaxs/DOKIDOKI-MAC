#include <hxcpp.h>

#ifndef INCLUDED_Conductor
#include <Conductor.h>
#endif
#ifndef INCLUDED_HelperFunctions
#include <HelperFunctions.h>
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
#ifndef INCLUDED_Ratings
#include <Ratings.h>
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

HX_LOCAL_STACK_FRAME(_hx_pos_c466427e4f3e0023_6_GenerateLetterRank,"Ratings","GenerateLetterRank",0x5d6db93f,"Ratings.GenerateLetterRank","Ratings.hx",6,0x142ad6e8)
HX_LOCAL_STACK_FRAME(_hx_pos_c466427e4f3e0023_97_CalculateRating,"Ratings","CalculateRating",0x7423532b,"Ratings.CalculateRating","Ratings.hx",97,0x142ad6e8)
HX_LOCAL_STACK_FRAME(_hx_pos_c466427e4f3e0023_134_CalculateRanking,"Ratings","CalculateRanking",0xb7ac9fe8,"Ratings.CalculateRanking","Ratings.hx",134,0x142ad6e8)

void Ratings_obj::__construct() { }

Dynamic Ratings_obj::__CreateEmpty() { return new Ratings_obj; }

void *Ratings_obj::_hx_vtable = 0;

Dynamic Ratings_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Ratings_obj > _hx_result = new Ratings_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Ratings_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x07eb05f2;
}

::String Ratings_obj::GenerateLetterRank(Float accuracy){
            	HX_STACKFRAME(&_hx_pos_c466427e4f3e0023_6_GenerateLetterRank)
HXLINE(   7)		::String ranking = HX_("N/A",00,59,3b,00);
HXLINE(   9)		if (( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("botplay",7b,fb,a9,61),::hx::paccDynamic)) )) {
HXLINE(  10)			ranking = ::LangUtil_obj::getString(HX_("cmnBotplay",57,3d,3e,f0));
            		}
HXLINE(  12)		bool _hx_tmp;
HXDLIN(  12)		bool _hx_tmp1;
HXDLIN(  12)		bool _hx_tmp2;
HXDLIN(  12)		if ((::PlayState_obj::misses == 0)) {
HXLINE(  12)			_hx_tmp2 = (::PlayState_obj::bads == 0);
            		}
            		else {
HXLINE(  12)			_hx_tmp2 = false;
            		}
HXDLIN(  12)		if (_hx_tmp2) {
HXLINE(  12)			_hx_tmp1 = (::PlayState_obj::shits == 0);
            		}
            		else {
HXLINE(  12)			_hx_tmp1 = false;
            		}
HXDLIN(  12)		if (_hx_tmp1) {
HXLINE(  12)			_hx_tmp = (::PlayState_obj::goods == 0);
            		}
            		else {
HXLINE(  12)			_hx_tmp = false;
            		}
HXDLIN(  12)		if (_hx_tmp) {
HXLINE(  13)			ranking = HX_("(MFC)",47,fa,21,3b);
            		}
            		else {
HXLINE(  14)			bool _hx_tmp;
HXDLIN(  14)			bool _hx_tmp1;
HXDLIN(  14)			bool _hx_tmp2;
HXDLIN(  14)			if ((::PlayState_obj::misses == 0)) {
HXLINE(  14)				_hx_tmp2 = (::PlayState_obj::bads == 0);
            			}
            			else {
HXLINE(  14)				_hx_tmp2 = false;
            			}
HXDLIN(  14)			if (_hx_tmp2) {
HXLINE(  14)				_hx_tmp1 = (::PlayState_obj::shits == 0);
            			}
            			else {
HXLINE(  14)				_hx_tmp1 = false;
            			}
HXDLIN(  14)			if (_hx_tmp1) {
HXLINE(  14)				_hx_tmp = (::PlayState_obj::goods >= 1);
            			}
            			else {
HXLINE(  14)				_hx_tmp = false;
            			}
HXDLIN(  14)			if (_hx_tmp) {
HXLINE(  15)				ranking = HX_("(GFC)",8d,b2,2a,37);
            			}
            			else {
HXLINE(  16)				if ((::PlayState_obj::misses == 0)) {
HXLINE(  17)					ranking = HX_("(FC)",24,e1,a5,1a);
            				}
            				else {
HXLINE(  18)					if ((::PlayState_obj::misses < 10)) {
HXLINE(  19)						ranking = HX_("(SDCB)",91,27,ae,f5);
            					}
            					else {
HXLINE(  21)						ranking = ((HX_("(",28,00,00,00) + ::LangUtil_obj::getString(HX_("cmnClear",69,44,f0,a9))) + HX_(")",29,00,00,00));
            					}
            				}
            			}
            		}
HXLINE(  25)		::Array< bool > wifeConditions = ::Array_obj< bool >::__new(16)->init(0,(accuracy >= ((Float)99.9935)))->init(1,(accuracy >= ((Float)99.980)))->init(2,(accuracy >= ((Float)99.970)))->init(3,(accuracy >= ((Float)99.955)))->init(4,(accuracy >= ((Float)99.90)))->init(5,(accuracy >= ((Float)99.80)))->init(6,(accuracy >= ((Float)99.70)))->init(7,(accuracy >= 99))->init(8,(accuracy >= ((Float)96.50)))->init(9,(accuracy >= 93))->init(10,(accuracy >= 90))->init(11,(accuracy >= 85))->init(12,(accuracy >= 80))->init(13,(accuracy >= 70))->init(14,(accuracy >= 60))->init(15,(accuracy < 60));
HXLINE(  44)		{
HXLINE(  44)			int _g = 0;
HXDLIN(  44)			int _g1 = wifeConditions->length;
HXDLIN(  44)			while((_g < _g1)){
HXLINE(  44)				_g = (_g + 1);
HXDLIN(  44)				int i = (_g - 1);
HXLINE(  46)				bool b = wifeConditions->__get(i);
HXLINE(  47)				if (b) {
HXLINE(  49)					switch((int)(i)){
            						case (int)0: {
HXLINE(  52)							ranking = (ranking + HX_(" AAAAA",61,aa,9f,63));
            						}
            						break;
            						case (int)1: {
HXLINE(  54)							ranking = (ranking + HX_(" AAAA:",5a,aa,9f,63));
            						}
            						break;
            						case (int)2: {
HXLINE(  56)							ranking = (ranking + HX_(" AAAA.",4e,aa,9f,63));
            						}
            						break;
            						case (int)3: {
HXLINE(  58)							ranking = (ranking + HX_(" AAAA",e0,f9,fa,97));
            						}
            						break;
            						case (int)4: {
HXLINE(  60)							ranking = (ranking + HX_(" AAA:",d9,f9,fa,97));
            						}
            						break;
            						case (int)5: {
HXLINE(  62)							ranking = (ranking + HX_(" AAA.",cd,f9,fa,97));
            						}
            						break;
            						case (int)6: {
HXLINE(  64)							ranking = (ranking + HX_(" AAA",41,5f,58,15));
            						}
            						break;
            						case (int)7: {
HXLINE(  66)							ranking = (ranking + HX_(" AA:",3a,5f,58,15));
            						}
            						break;
            						case (int)8: {
HXLINE(  68)							ranking = (ranking + HX_(" AA.",2e,5f,58,15));
            						}
            						break;
            						case (int)9: {
HXLINE(  70)							ranking = (ranking + HX_(" AA",00,81,18,00));
            						}
            						break;
            						case (int)10: {
HXLINE(  72)							ranking = (ranking + HX_(" A:",f9,80,18,00));
            						}
            						break;
            						case (int)11: {
HXLINE(  74)							ranking = (ranking + HX_(" A.",ed,80,18,00));
            						}
            						break;
            						case (int)12: {
HXLINE(  76)							ranking = (ranking + HX_(" A",21,1c,00,00));
            						}
            						break;
            						case (int)13: {
HXLINE(  78)							ranking = (ranking + HX_(" B",22,1c,00,00));
            						}
            						break;
            						case (int)14: {
HXLINE(  80)							ranking = (ranking + HX_(" C",23,1c,00,00));
            						}
            						break;
            						case (int)15: {
HXLINE(  82)							ranking = (ranking + HX_(" D",24,1c,00,00));
            						}
            						break;
            					}
HXLINE(  84)					goto _hx_goto_0;
            				}
            			}
            			_hx_goto_0:;
            		}
HXLINE(  88)		if ((accuracy == 0)) {
HXLINE(  89)			ranking = HX_("N/A",00,59,3b,00);
            		}
            		else {
HXLINE(  90)			if (( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("botplay",7b,fb,a9,61),::hx::paccDynamic)) )) {
HXLINE(  91)				ranking = ::LangUtil_obj::getString(HX_("cmnBotplay",57,3d,3e,f0));
            			}
            		}
HXLINE(  93)		return ranking;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ratings_obj,GenerateLetterRank,return )

::String Ratings_obj::CalculateRating(Float noteDiff, ::Dynamic customSafeZone){
            	HX_STACKFRAME(&_hx_pos_c466427e4f3e0023_97_CalculateRating)
HXLINE(  98)		Float customTimeScale = ::Conductor_obj::timeScale;
HXLINE( 100)		if (::hx::IsNotNull( customSafeZone )) {
HXLINE( 101)			customTimeScale = (( (Float)(customSafeZone) ) / ( (Float)(166) ));
            		}
HXLINE( 110)		if (( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("botplay",7b,fb,a9,61),::hx::paccDynamic)) )) {
HXLINE( 111)			return HX_("sick",be,8c,53,4c);
            		}
HXLINE( 113)		if ((noteDiff > (( (Float)(166) ) * customTimeScale))) {
HXLINE( 114)			return HX_("miss",fc,52,5c,48);
            		}
HXLINE( 115)		if ((noteDiff > (( (Float)(135) ) * customTimeScale))) {
HXLINE( 116)			return HX_("shit",c0,cf,52,4c);
            		}
            		else {
HXLINE( 117)			if ((noteDiff > (( (Float)(90) ) * customTimeScale))) {
HXLINE( 118)				return HX_("bad",c5,b1,4a,00);
            			}
            			else {
HXLINE( 119)				if ((noteDiff > (( (Float)(45) ) * customTimeScale))) {
HXLINE( 120)					return HX_("good",3d,95,69,44);
            				}
            				else {
HXLINE( 121)					if ((noteDiff < (( (Float)(-45) ) * customTimeScale))) {
HXLINE( 122)						return HX_("good",3d,95,69,44);
            					}
            					else {
HXLINE( 123)						if ((noteDiff < (( (Float)(-90) ) * customTimeScale))) {
HXLINE( 124)							return HX_("bad",c5,b1,4a,00);
            						}
            						else {
HXLINE( 125)							if ((noteDiff < (( (Float)(-135) ) * customTimeScale))) {
HXLINE( 126)								return HX_("shit",c0,cf,52,4c);
            							}
            							else {
HXLINE( 127)								if ((noteDiff < (( (Float)(-166) ) * customTimeScale))) {
HXLINE( 128)									return HX_("miss",fc,52,5c,48);
            								}
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE( 129)		return HX_("sick",be,8c,53,4c);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Ratings_obj,CalculateRating,return )

::String Ratings_obj::CalculateRanking(int score,int scoreDef,int nps,int maxNPS,Float accuracy){
            	HX_STACKFRAME(&_hx_pos_c466427e4f3e0023_134_CalculateRanking)
HXDLIN( 134)		::String _hx_tmp;
HXDLIN( 134)		if (( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("npsDisplay",51,08,e2,23),::hx::paccDynamic)) )) {
HXDLIN( 134)			::String _hx_tmp1 = (((::LangUtil_obj::getString(HX_("cmnNPS",cd,e1,f2,a0)) + HX_(": ",a6,32,00,00)) + nps) + HX_(" (",08,1c,00,00));
HXDLIN( 134)			::String _hx_tmp2 = ((((_hx_tmp1 + ::LangUtil_obj::getString(HX_("cmnMaxNPS",51,57,f5,be))) + HX_(" ",20,00,00,00)) + maxNPS) + HX_(")",29,00,00,00));
HXLINE( 135)			::String _hx_tmp3;
HXDLIN( 135)			if (!(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("botplay",7b,fb,a9,61),::hx::paccDynamic)) ))) {
HXLINE( 135)				_hx_tmp3 = HX_(" | ",44,b4,18,00);
            			}
            			else {
HXLINE( 135)				_hx_tmp3 = HX_("",00,00,00,00);
            			}
HXLINE( 134)			_hx_tmp = (_hx_tmp2 + _hx_tmp3);
            		}
            		else {
HXDLIN( 134)			_hx_tmp = HX_("",00,00,00,00);
            		}
HXLINE( 136)		::String _hx_tmp1;
HXDLIN( 136)		if (!(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("botplay",7b,fb,a9,61),::hx::paccDynamic)) ))) {
HXLINE( 137)			::String _hx_tmp = (::LangUtil_obj::getString(HX_("cmnScore",2e,46,6e,da)) + HX_(":",3a,00,00,00));
HXLINE( 139)			::String _hx_tmp2;
HXDLIN( 139)			if ((::Conductor_obj::safeFrames != 10)) {
HXLINE( 139)				_hx_tmp2 = (((score + HX_(" (",08,1c,00,00)) + scoreDef) + HX_(")",29,00,00,00));
            			}
            			else {
HXLINE( 139)				_hx_tmp2 = (HX_("",00,00,00,00) + score);
            			}
HXLINE( 137)			::String _hx_tmp3 = ((((_hx_tmp + _hx_tmp2) + HX_(" | ",44,b4,18,00)) + ::LangUtil_obj::getString(HX_("cmnComboBreak",35,e1,16,15))) + HX_(":",3a,00,00,00));
HXDLIN( 137)			::String _hx_tmp4 = ((_hx_tmp3 + ::PlayState_obj::misses) + HX_(" | ",44,b4,18,00));
HXDLIN( 137)			::String _hx_tmp5 = ((_hx_tmp4 + ::LangUtil_obj::getString(HX_("cmnAccuracy",dd,64,ea,32))) + HX_(":",3a,00,00,00));
HXLINE( 149)			::String _hx_tmp6;
HXDLIN( 149)			if (( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("botplay",7b,fb,a9,61),::hx::paccDynamic)) )) {
HXLINE( 149)				_hx_tmp6 = HX_("N/A",00,59,3b,00);
            			}
            			else {
HXLINE( 149)				_hx_tmp6 = (::HelperFunctions_obj::truncateFloat(accuracy,2) + HX_(" %",05,1c,00,00));
            			}
HXLINE( 136)			_hx_tmp1 = (((_hx_tmp5 + _hx_tmp6) + HX_(" | ",44,b4,18,00)) + ::Ratings_obj::GenerateLetterRank(accuracy));
            		}
            		else {
HXLINE( 136)			_hx_tmp1 = HX_("",00,00,00,00);
            		}
HXLINE( 134)		return (_hx_tmp + _hx_tmp1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Ratings_obj,CalculateRanking,return )


Ratings_obj::Ratings_obj()
{
}

bool Ratings_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"CalculateRating") ) { outValue = CalculateRating_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"CalculateRanking") ) { outValue = CalculateRanking_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"GenerateLetterRank") ) { outValue = GenerateLetterRank_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Ratings_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Ratings_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Ratings_obj::__mClass;

static ::String Ratings_obj_sStaticFields[] = {
	HX_("GenerateLetterRank",67,0d,a4,31),
	HX_("CalculateRating",03,56,40,d1),
	HX_("CalculateRanking",10,1a,f2,d3),
	::String(null())
};

void Ratings_obj::__register()
{
	Ratings_obj _hx_dummy;
	Ratings_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Ratings",96,8d,b4,2a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Ratings_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Ratings_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Ratings_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Ratings_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Ratings_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

