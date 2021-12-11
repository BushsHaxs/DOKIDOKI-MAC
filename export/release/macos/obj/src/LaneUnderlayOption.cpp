#include <hxcpp.h>

#ifndef INCLUDED_HelperFunctions
#include <HelperFunctions.h>
#endif
#ifndef INCLUDED_LaneUnderlayOption
#include <LaneUnderlayOption.h>
#endif
#ifndef INCLUDED_LangUtil
#include <LangUtil.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_2d5d9b833a3139b5_762_new,"LaneUnderlayOption","new",0x6ddc6d7f,"LaneUnderlayOption.new","Options.hx",762,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_2d5d9b833a3139b5_769_press,"LaneUnderlayOption","press",0x1f49b662,"LaneUnderlayOption.press","Options.hx",769,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_2d5d9b833a3139b5_777_updateDisplay,"LaneUnderlayOption","updateDisplay",0x30f66918,"LaneUnderlayOption.updateDisplay","Options.hx",777,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_2d5d9b833a3139b5_781_right,"LaneUnderlayOption","right",0x40256ebb,"LaneUnderlayOption.right","Options.hx",781,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_2d5d9b833a3139b5_794_getValue,"LaneUnderlayOption","getValue",0x83be017c,"LaneUnderlayOption.getValue","Options.hx",794,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_2d5d9b833a3139b5_798_left,"LaneUnderlayOption","left",0xb1b0e608,"LaneUnderlayOption.left","Options.hx",798,0x9d9a0240)

void LaneUnderlayOption_obj::__construct(::String desc){
            	HX_STACKFRAME(&_hx_pos_2d5d9b833a3139b5_762_new)
HXLINE( 763)		super::__construct();
HXLINE( 764)		this->description = desc;
HXLINE( 765)		this->acceptValues = true;
            	}

Dynamic LaneUnderlayOption_obj::__CreateEmpty() { return new LaneUnderlayOption_obj; }

void *LaneUnderlayOption_obj::_hx_vtable = 0;

Dynamic LaneUnderlayOption_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< LaneUnderlayOption_obj > _hx_result = new LaneUnderlayOption_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool LaneUnderlayOption_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x27a70eb9) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x27a70eb9;
	} else {
		return inClassId==(int)0x3f6624cd;
	}
}

bool LaneUnderlayOption_obj::press(){
            	HX_STACKFRAME(&_hx_pos_2d5d9b833a3139b5_769_press)
HXLINE( 770)		::flixel::FlxG_obj::save->data->__SetField(HX_("laneUnderlay",58,04,15,b5),!(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("laneUnderlay",58,04,15,b5),::hx::paccDynamic)) )),::hx::paccDynamic);
HXLINE( 771)		this->display = this->updateDisplay();
HXLINE( 772)		return true;
            	}


::String LaneUnderlayOption_obj::updateDisplay(){
            	HX_STACKFRAME(&_hx_pos_2d5d9b833a3139b5_777_updateDisplay)
HXDLIN( 777)		if (( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("laneUnderlay",58,04,15,b5),::hx::paccDynamic)) )) {
HXDLIN( 777)			return ::LangUtil_obj::getString(HX_("optLaneUnderwayOn",b5,74,2d,56));
            		}
            		else {
HXDLIN( 777)			return ::LangUtil_obj::getString(HX_("optLaneUnderwayOff",19,a3,98,11));
            		}
HXDLIN( 777)		return null();
            	}


bool LaneUnderlayOption_obj::right(){
            	HX_STACKFRAME(&_hx_pos_2d5d9b833a3139b5_781_right)
HXLINE( 782)		 ::Dynamic fh = ::flixel::FlxG_obj::save->data;
HXDLIN( 782)		fh->__SetField(HX_("laneTransparency",24,32,52,af),(fh->__Field(HX_("laneTransparency",24,32,52,af),::hx::paccDynamic) + ((Float)0.1)),::hx::paccDynamic);
HXLINE( 784)		if (::hx::IsLess( ::flixel::FlxG_obj::save->data->__Field(HX_("laneTransparency",24,32,52,af),::hx::paccDynamic),0 )) {
HXLINE( 785)			::flixel::FlxG_obj::save->data->__SetField(HX_("laneTransparency",24,32,52,af),0,::hx::paccDynamic);
            		}
HXLINE( 787)		if (::hx::IsGreater( ::flixel::FlxG_obj::save->data->__Field(HX_("laneTransparency",24,32,52,af),::hx::paccDynamic),1 )) {
HXLINE( 788)			::flixel::FlxG_obj::save->data->__SetField(HX_("laneTransparency",24,32,52,af),1,::hx::paccDynamic);
            		}
HXLINE( 789)		return true;
            	}


::String LaneUnderlayOption_obj::getValue(){
            	HX_STACKFRAME(&_hx_pos_2d5d9b833a3139b5_794_getValue)
HXDLIN( 794)		::String _hx_tmp = (::LangUtil_obj::getString(HX_("descLaneUnderwayControl",a9,60,b2,32)) + HX_(": ",a6,32,00,00));
HXDLIN( 794)		return (_hx_tmp + ::HelperFunctions_obj::truncateFloat(( (Float)(::flixel::FlxG_obj::save->data->__Field(HX_("laneTransparency",24,32,52,af),::hx::paccDynamic)) ),1));
            	}


bool LaneUnderlayOption_obj::left(){
            	HX_STACKFRAME(&_hx_pos_2d5d9b833a3139b5_798_left)
HXLINE( 799)		 ::Dynamic fh = ::flixel::FlxG_obj::save->data;
HXDLIN( 799)		fh->__SetField(HX_("laneTransparency",24,32,52,af),( ::Dynamic(fh->__Field(HX_("laneTransparency",24,32,52,af),::hx::paccDynamic)) - ((Float)0.1)),::hx::paccDynamic);
HXLINE( 801)		if (::hx::IsLess( ::flixel::FlxG_obj::save->data->__Field(HX_("laneTransparency",24,32,52,af),::hx::paccDynamic),0 )) {
HXLINE( 802)			::flixel::FlxG_obj::save->data->__SetField(HX_("laneTransparency",24,32,52,af),0,::hx::paccDynamic);
            		}
HXLINE( 804)		if (::hx::IsGreater( ::flixel::FlxG_obj::save->data->__Field(HX_("laneTransparency",24,32,52,af),::hx::paccDynamic),1 )) {
HXLINE( 805)			::flixel::FlxG_obj::save->data->__SetField(HX_("laneTransparency",24,32,52,af),1,::hx::paccDynamic);
            		}
HXLINE( 807)		return true;
            	}



::hx::ObjectPtr< LaneUnderlayOption_obj > LaneUnderlayOption_obj::__new(::String desc) {
	::hx::ObjectPtr< LaneUnderlayOption_obj > __this = new LaneUnderlayOption_obj();
	__this->__construct(desc);
	return __this;
}

::hx::ObjectPtr< LaneUnderlayOption_obj > LaneUnderlayOption_obj::__alloc(::hx::Ctx *_hx_ctx,::String desc) {
	LaneUnderlayOption_obj *__this = (LaneUnderlayOption_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(LaneUnderlayOption_obj), true, "LaneUnderlayOption"));
	*(void **)__this = LaneUnderlayOption_obj::_hx_vtable;
	__this->__construct(desc);
	return __this;
}

LaneUnderlayOption_obj::LaneUnderlayOption_obj()
{
}

::hx::Val LaneUnderlayOption_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { return ::hx::Val( left_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"press") ) { return ::hx::Val( press_dyn() ); }
		if (HX_FIELD_EQ(inName,"right") ) { return ::hx::Val( right_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getValue") ) { return ::hx::Val( getValue_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"updateDisplay") ) { return ::hx::Val( updateDisplay_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *LaneUnderlayOption_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *LaneUnderlayOption_obj_sStaticStorageInfo = 0;
#endif

static ::String LaneUnderlayOption_obj_sMemberFields[] = {
	HX_("press",83,53,88,c8),
	HX_("updateDisplay",39,8f,b8,86),
	HX_("right",dc,0b,64,e9),
	HX_("getValue",fb,8e,8f,91),
	HX_("left",07,08,b0,47),
	::String(null()) };

::hx::Class LaneUnderlayOption_obj::__mClass;

void LaneUnderlayOption_obj::__register()
{
	LaneUnderlayOption_obj _hx_dummy;
	LaneUnderlayOption_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("LaneUnderlayOption",0d,42,a2,e7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(LaneUnderlayOption_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< LaneUnderlayOption_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LaneUnderlayOption_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LaneUnderlayOption_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

