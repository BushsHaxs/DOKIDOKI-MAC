#include <hxcpp.h>

#ifndef INCLUDED_HealthIcon
#include <HealthIcon.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_lime_utils_Assets
#include <lime/utils/Assets.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_eb8a54c9c53eb75f_9_new,"HealthIcon","new",0x9b7badc7,"HealthIcon.new","HealthIcon.hx",9,0xf7836789)
HX_LOCAL_STACK_FRAME(_hx_pos_eb8a54c9c53eb75f_37_swapOldIcon,"HealthIcon","swapOldIcon",0xe3496dd4,"HealthIcon.swapOldIcon","HealthIcon.hx",37,0xf7836789)
HX_LOCAL_STACK_FRAME(_hx_pos_eb8a54c9c53eb75f_41_changeIcon,"HealthIcon","changeIcon",0xd785ca82,"HealthIcon.changeIcon","HealthIcon.hx",41,0xf7836789)
static const int _hx_array_data_f8f9be55_4[] = {
	(int)0,(int)1,
};
HX_LOCAL_STACK_FRAME(_hx_pos_eb8a54c9c53eb75f_71_update,"HealthIcon","update",0x767ac302,"HealthIcon.update","HealthIcon.hx",71,0xf7836789)
HX_LOCAL_STACK_FRAME(_hx_pos_eb8a54c9c53eb75f_15_boot,"HealthIcon","boot",0x68d560eb,"HealthIcon.boot","HealthIcon.hx",15,0xf7836789)

void HealthIcon_obj::__construct(::String __o__hx_char, ::Dynamic __o_isPlayer){
            		::String _hx_char = __o__hx_char;
            		if (::hx::IsNull(__o__hx_char)) _hx_char = HX_("bf",c4,55,00,00);
            		 ::Dynamic isPlayer = __o_isPlayer;
            		if (::hx::IsNull(__o_isPlayer)) isPlayer = false;
            	HX_STACKFRAME(&_hx_pos_eb8a54c9c53eb75f_9_new)
HXLINE(  13)		this->isOldIcon = false;
HXLINE(  12)		this->isPlayer = false;
HXLINE(  11)		this->_hx_char = HX_("bf",c4,55,00,00);
HXLINE(  24)		super::__construct(null(),null(),null());
HXLINE(  26)		this->_hx_char = _hx_char;
HXLINE(  27)		this->isPlayer = ( (bool)(isPlayer) );
HXLINE(  29)		isPlayer = (this->isOldIcon = false);
HXLINE(  31)		this->changeIcon(_hx_char);
HXLINE(  32)		this->scrollFactor->set(null(),null());
            	}

Dynamic HealthIcon_obj::__CreateEmpty() { return new HealthIcon_obj; }

void *HealthIcon_obj::_hx_vtable = 0;

Dynamic HealthIcon_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< HealthIcon_obj > _hx_result = new HealthIcon_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool HealthIcon_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2c01639b) {
		if (inClassId<=(int)0x10bce115) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x10bce115;
		} else {
			return inClassId==(int)0x2c01639b;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void HealthIcon_obj::swapOldIcon(){
            	HX_STACKFRAME(&_hx_pos_eb8a54c9c53eb75f_37_swapOldIcon)
HXDLIN(  37)		if ((this->isOldIcon = !(this->isOldIcon))) {
HXDLIN(  37)			this->changeIcon(HX_("bf-old",5e,ba,eb,07));
            		}
            		else {
HXDLIN(  37)			this->changeIcon(this->_hx_char);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(HealthIcon_obj,swapOldIcon,(void))

void HealthIcon_obj::changeIcon(::String _hx_char){
            	HX_STACKFRAME(&_hx_pos_eb8a54c9c53eb75f_41_changeIcon)
HXLINE(  42)		::String _hx_switch_0 = _hx_char;
            		if (  (_hx_switch_0==HX_("bf-pixelangry",04,b0,b1,bb)) ){
HXLINE(  47)			_hx_char = HX_("bf-pixel",fd,03,90,37);
HXDLIN(  47)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("bf-old",5e,ba,eb,07)) ||  (_hx_switch_0==HX_("bf-pixel",fd,03,90,37)) ||  (_hx_switch_0==HX_("dual-demise",a0,7b,76,02)) ||  (_hx_switch_0==HX_("monika-angry",07,f9,9e,ce)) ||  (_hx_switch_0==HX_("monika-real",38,9a,2f,b7)) ||  (_hx_switch_0==HX_("yuri-crazy",97,2f,ab,1c)) ){
HXLINE(  44)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("playablesenpai",4a,23,22,fd)) ){
HXLINE(  49)			_hx_char = HX_("senpai",3c,df,8d,6b);
HXLINE(  50)			this->set_flipX(true);
HXLINE(  48)			goto _hx_goto_2;
            		}
            		/* default */{
HXLINE(  52)			_hx_char = _hx_char.split(HX_("-",2d,00,00,00))->__get(0);
            		}
            		_hx_goto_2:;
HXLINE(  55)		::String key = (HX_("icons/icon-",5f,da,21,72) + _hx_char);
HXDLIN(  55)		::String library = null();
HXDLIN(  55)		::String _hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + key) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN(  55)		if (!(::lime::utils::Assets_obj::exists(_hx_tmp,null()))) {
HXLINE(  56)			_hx_char = HX_("bf",c4,55,00,00);
            		}
HXLINE(  58)		::String key1 = (HX_("icons/icon-",5f,da,21,72) + _hx_char);
HXDLIN(  58)		::String library1 = null();
HXDLIN(  58)		::String _hx_tmp1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + key1) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library1);
HXDLIN(  58)		this->loadGraphic(_hx_tmp1,true,150,150,null(),null());
HXLINE(  60)		bool _hx_tmp2;
HXDLIN(  60)		bool _hx_tmp3;
HXDLIN(  60)		bool _hx_tmp4;
HXDLIN(  60)		bool _hx_tmp5;
HXDLIN(  60)		bool _hx_tmp6;
HXDLIN(  60)		bool _hx_tmp7;
HXDLIN(  60)		bool _hx_tmp8;
HXDLIN(  60)		if (!(::StringTools_obj::endsWith(_hx_char,HX_("-pixel",39,03,b3,c0)))) {
HXLINE(  60)			_hx_tmp8 = ::StringTools_obj::startsWith(_hx_char,HX_("senpai",3c,df,8d,6b));
            		}
            		else {
HXLINE(  60)			_hx_tmp8 = true;
            		}
HXDLIN(  60)		if (!(_hx_tmp8)) {
HXLINE(  60)			_hx_tmp7 = ::StringTools_obj::endsWith(_hx_char,HX_("senpai",3c,df,8d,6b));
            		}
            		else {
HXLINE(  60)			_hx_tmp7 = true;
            		}
HXDLIN(  60)		if (!(_hx_tmp7)) {
HXLINE(  60)			_hx_tmp6 = ::StringTools_obj::startsWith(_hx_char,HX_("spirit",31,bb,a9,bd));
            		}
            		else {
HXLINE(  60)			_hx_tmp6 = true;
            		}
HXDLIN(  60)		if (!(_hx_tmp6)) {
HXLINE(  60)			_hx_tmp5 = (_hx_char == HX_("monika",f3,3a,66,c7));
            		}
            		else {
HXLINE(  60)			_hx_tmp5 = true;
            		}
HXDLIN(  60)		if (!(_hx_tmp5)) {
HXLINE(  60)			_hx_tmp4 = (_hx_char == HX_("monika-angry",07,f9,9e,ce));
            		}
            		else {
HXLINE(  60)			_hx_tmp4 = true;
            		}
HXDLIN(  60)		if (!(_hx_tmp4)) {
HXLINE(  60)			_hx_tmp3 = ::StringTools_obj::startsWith(_hx_char,HX_("duet",40,76,72,42));
            		}
            		else {
HXLINE(  60)			_hx_tmp3 = true;
            		}
HXDLIN(  60)		if (!(_hx_tmp3)) {
HXLINE(  60)			_hx_tmp2 = ::StringTools_obj::endsWith(_hx_char,HX_("demise",ef,fe,84,6b));
            		}
            		else {
HXLINE(  60)			_hx_tmp2 = true;
            		}
HXDLIN(  60)		if (_hx_tmp2) {
HXLINE(  62)			this->set_antialiasing(false);
            		}
            		else {
HXLINE(  64)			this->set_antialiasing(true);
            		}
HXLINE(  66)		this->animation->add(_hx_char,::Array_obj< int >::fromData( _hx_array_data_f8f9be55_4,2),0,false,this->isPlayer,null());
HXLINE(  67)		this->animation->play(_hx_char,null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(HealthIcon_obj,changeIcon,(void))

void HealthIcon_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_eb8a54c9c53eb75f_71_update)
HXLINE(  72)		this->super::update(elapsed);
HXLINE(  74)		if (::hx::IsNotNull( this->sprTracker )) {
HXLINE(  75)			Float _hx_tmp = this->sprTracker->x;
HXDLIN(  75)			Float _hx_tmp1 = ((_hx_tmp + this->sprTracker->get_width()) + 10);
HXDLIN(  75)			this->setPosition(_hx_tmp1,(this->sprTracker->y - ( (Float)(30) )));
            		}
            	}


bool HealthIcon_obj::isEpiphany;


::hx::ObjectPtr< HealthIcon_obj > HealthIcon_obj::__new(::String __o__hx_char, ::Dynamic __o_isPlayer) {
	::hx::ObjectPtr< HealthIcon_obj > __this = new HealthIcon_obj();
	__this->__construct(__o__hx_char,__o_isPlayer);
	return __this;
}

::hx::ObjectPtr< HealthIcon_obj > HealthIcon_obj::__alloc(::hx::Ctx *_hx_ctx,::String __o__hx_char, ::Dynamic __o_isPlayer) {
	HealthIcon_obj *__this = (HealthIcon_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(HealthIcon_obj), true, "HealthIcon"));
	*(void **)__this = HealthIcon_obj::_hx_vtable;
	__this->__construct(__o__hx_char,__o_isPlayer);
	return __this;
}

HealthIcon_obj::HealthIcon_obj()
{
}

void HealthIcon_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HealthIcon);
	HX_MARK_MEMBER_NAME(_hx_char,"char");
	HX_MARK_MEMBER_NAME(isPlayer,"isPlayer");
	HX_MARK_MEMBER_NAME(isOldIcon,"isOldIcon");
	HX_MARK_MEMBER_NAME(sprTracker,"sprTracker");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void HealthIcon_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_hx_char,"char");
	HX_VISIT_MEMBER_NAME(isPlayer,"isPlayer");
	HX_VISIT_MEMBER_NAME(isOldIcon,"isOldIcon");
	HX_VISIT_MEMBER_NAME(sprTracker,"sprTracker");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val HealthIcon_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"char") ) { return ::hx::Val( _hx_char ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isPlayer") ) { return ::hx::Val( isPlayer ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isOldIcon") ) { return ::hx::Val( isOldIcon ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sprTracker") ) { return ::hx::Val( sprTracker ); }
		if (HX_FIELD_EQ(inName,"changeIcon") ) { return ::hx::Val( changeIcon_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"swapOldIcon") ) { return ::hx::Val( swapOldIcon_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool HealthIcon_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"isEpiphany") ) { outValue = ( isEpiphany ); return true; }
	}
	return false;
}

::hx::Val HealthIcon_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"char") ) { _hx_char=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isPlayer") ) { isPlayer=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isOldIcon") ) { isOldIcon=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sprTracker") ) { sprTracker=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool HealthIcon_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"isEpiphany") ) { isEpiphany=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

void HealthIcon_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("char",d6,5e,bf,41));
	outFields->push(HX_("isPlayer",eb,86,22,90));
	outFields->push(HX_("isOldIcon",f6,08,f6,fe));
	outFields->push(HX_("sprTracker",03,a3,e2,78));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo HealthIcon_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(HealthIcon_obj,_hx_char),HX_("char",d6,5e,bf,41)},
	{::hx::fsBool,(int)offsetof(HealthIcon_obj,isPlayer),HX_("isPlayer",eb,86,22,90)},
	{::hx::fsBool,(int)offsetof(HealthIcon_obj,isOldIcon),HX_("isOldIcon",f6,08,f6,fe)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(HealthIcon_obj,sprTracker),HX_("sprTracker",03,a3,e2,78)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo HealthIcon_obj_sStaticStorageInfo[] = {
	{::hx::fsBool,(void *) &HealthIcon_obj::isEpiphany,HX_("isEpiphany",a0,13,5c,fa)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String HealthIcon_obj_sMemberFields[] = {
	HX_("char",d6,5e,bf,41),
	HX_("isPlayer",eb,86,22,90),
	HX_("isOldIcon",f6,08,f6,fe),
	HX_("sprTracker",03,a3,e2,78),
	HX_("swapOldIcon",6d,51,5b,02),
	HX_("changeIcon",09,1d,fc,1f),
	HX_("update",09,86,05,87),
	::String(null()) };

static void HealthIcon_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HealthIcon_obj::isEpiphany,"isEpiphany");
};

#ifdef HXCPP_VISIT_ALLOCS
static void HealthIcon_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HealthIcon_obj::isEpiphany,"isEpiphany");
};

#endif

::hx::Class HealthIcon_obj::__mClass;

static ::String HealthIcon_obj_sStaticFields[] = {
	HX_("isEpiphany",a0,13,5c,fa),
	::String(null())
};

void HealthIcon_obj::__register()
{
	HealthIcon_obj _hx_dummy;
	HealthIcon_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("HealthIcon",55,be,f9,f8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &HealthIcon_obj::__GetStatic;
	__mClass->mSetStaticField = &HealthIcon_obj::__SetStatic;
	__mClass->mMarkFunc = HealthIcon_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(HealthIcon_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(HealthIcon_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< HealthIcon_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = HealthIcon_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HealthIcon_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HealthIcon_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void HealthIcon_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_eb8a54c9c53eb75f_15_boot)
HXDLIN(  15)		isEpiphany = false;
            	}
}

