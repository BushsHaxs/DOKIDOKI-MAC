#include <hxcpp.h>

#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_LangUtil
#include <LangUtil.h>
#endif
#ifndef INCLUDED_MainMenuState
#include <MainMenuState.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_OutdatedSubState
#include <OutdatedSubState.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_PlayerSettings
#include <PlayerSettings.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_TransitionData
#include <flixel/addons/transition/TransitionData.h>
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
#ifndef INCLUDED_flixel_input_actions_FlxAction
#include <flixel/input/actions/FlxAction.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionDigital
#include <flixel/input/actions/FlxActionDigital.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionSet
#include <flixel/input/actions/FlxActionSet.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_ColorTween
#include <flixel/tweens/misc/ColorTween.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimerManager
#include <flixel/util/FlxTimerManager.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util__FlxColor_FlxColor_Impl_
#include <flixel/util/_FlxColor/FlxColor_Impl_.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_badf7fe26ae152fc_13_new,"OutdatedSubState","new",0xf8fc7d4b,"OutdatedSubState.new","OutdatedSubState.hx",13,0x9d3df485)
static const ::String _hx_array_data_69737bd9_1[] = {
	HX_("#314d7f",00,3a,f0,6c),HX_("#4e7093",c7,f0,f5,c5),HX_("#70526e",08,5c,7a,73),HX_("#594465",86,29,b7,d4),
};
HX_LOCAL_STACK_FRAME(_hx_pos_badf7fe26ae152fc_48_create,"OutdatedSubState","create",0xa86f5ef1,"OutdatedSubState.create","OutdatedSubState.hx",48,0x9d3df485)
HX_LOCAL_STACK_FRAME(_hx_pos_badf7fe26ae152fc_24_create,"OutdatedSubState","create",0xa86f5ef1,"OutdatedSubState.create","OutdatedSubState.hx",24,0x9d3df485)
HX_LOCAL_STACK_FRAME(_hx_pos_badf7fe26ae152fc_58_update,"OutdatedSubState","update",0xb3657dfe,"OutdatedSubState.update","OutdatedSubState.hx",58,0x9d3df485)
HX_LOCAL_STACK_FRAME(_hx_pos_badf7fe26ae152fc_15_boot,"OutdatedSubState","boot",0xdc0a24e7,"OutdatedSubState.boot","OutdatedSubState.hx",15,0x9d3df485)
HX_LOCAL_STACK_FRAME(_hx_pos_badf7fe26ae152fc_17_boot,"OutdatedSubState","boot",0xdc0a24e7,"OutdatedSubState.boot","OutdatedSubState.hx",17,0x9d3df485)
HX_LOCAL_STACK_FRAME(_hx_pos_badf7fe26ae152fc_18_boot,"OutdatedSubState","boot",0xdc0a24e7,"OutdatedSubState.boot","OutdatedSubState.hx",18,0x9d3df485)

void OutdatedSubState_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_badf7fe26ae152fc_13_new)
HXLINE(  21)		this->colorRotation = 1;
HXLINE(  20)		this->bgColors = ::Array_obj< ::String >::fromData( _hx_array_data_69737bd9_1,4);
HXLINE(  13)		super::__construct(TransIn,TransOut);
            	}

Dynamic OutdatedSubState_obj::__CreateEmpty() { return new OutdatedSubState_obj; }

void *OutdatedSubState_obj::_hx_vtable = 0;

Dynamic OutdatedSubState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< OutdatedSubState_obj > _hx_result = new OutdatedSubState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool OutdatedSubState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3f706236) {
		if (inClassId<=(int)0x2f064378) {
			if (inClassId<=(int)0x23a57bae) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x23a57bae;
			} else {
				return inClassId==(int)0x2f064378;
			}
		} else {
			return inClassId==(int)0x3f552e99 || inClassId==(int)0x3f706236;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x62817b24 || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

void OutdatedSubState_obj::create(){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::flixel::FlxSprite,bg2, ::OutdatedSubState,_gthis) HXARGC(1)
            		void _hx_run( ::flixel::util::FlxTimer tmr){
            			HX_GC_STACKFRAME(&_hx_pos_badf7fe26ae152fc_48_create)
HXLINE(  49)			 ::flixel::FlxSprite bg = bg2;
HXDLIN(  49)			int bg1 = bg2->color;
HXDLIN(  49)			::flixel::tweens::FlxTween_obj::color(bg,2,bg1,( (int)(::flixel::util::_FlxColor::FlxColor_Impl__obj::fromString(_gthis->bgColors->__get(_gthis->colorRotation))) ),null());
HXLINE(  50)			if ((_gthis->colorRotation < (_gthis->bgColors->length - 1))) {
HXLINE(  51)				_gthis->colorRotation++;
            			}
            			else {
HXLINE(  53)				_gthis->colorRotation = 0;
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_badf7fe26ae152fc_24_create)
HXDLIN(  24)		 ::OutdatedSubState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  25)		this->super::create();
HXLINE(  26)		 ::flixel::FlxSprite bg =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN(  26)		::String library = null();
HXDLIN(  26)		::String bg1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("menuBGFriends",91,27,08,d0)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN(  26)		 ::flixel::FlxSprite bg2 = bg->loadGraphic(bg1,null(),null(),null(),null(),null());
HXLINE(  27)		 ::flixel::math::FlxPoint fh = bg2->scale;
HXDLIN(  27)		fh->set_x(fh->x);
HXLINE(  28)		 ::flixel::math::FlxPoint fh1 = bg2->scale;
HXDLIN(  28)		fh1->set_y(fh1->y);
HXLINE(  29)		bg2->screenCenter(null());
HXLINE(  30)		this->add(bg2);
HXLINE(  32)		 ::flixel::text::FlxText txt =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,0,0,::flixel::FlxG_obj::width,(((HX_("Welcome to Doki Doki Takeover!",9f,3e,1c,36) + HX_("\nThis is a sequel to the Monika Full Week mod",c8,f9,01,d6)) + HX_("\n\nHave you played Monika Full Week?\n\n",13,74,2b,fe)) + HX_("\nEnter for Yes - Esc for No\n",d2,03,33,f3)),32,null());
HXLINE(  39)		::String _hx_tmp = ::LangUtil_obj::getFont(null());
HXDLIN(  39)		int Alpha = 255;
HXDLIN(  39)		int color = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());
HXDLIN(  39)		{
HXLINE(  39)			color = (color & -16711681);
HXDLIN(  39)			color = (color | 13107200);
            		}
HXDLIN(  39)		{
HXLINE(  39)			color = (color & -65281);
HXDLIN(  39)			color = (color | 51200);
            		}
HXDLIN(  39)		{
HXLINE(  39)			color = (color & -256);
HXDLIN(  39)			color = (color | 200);
            		}
HXDLIN(  39)		{
HXLINE(  39)			color = (color & 16777215);
HXDLIN(  39)			int color1;
HXDLIN(  39)			if ((Alpha > 255)) {
HXLINE(  39)				color1 = 255;
            			}
            			else {
HXLINE(  39)				if ((Alpha < 0)) {
HXLINE(  39)					color1 = 0;
            				}
            				else {
HXLINE(  39)					color1 = Alpha;
            				}
            			}
HXDLIN(  39)			color = (color | (color1 << 24));
            		}
HXDLIN(  39)		txt->setFormat(_hx_tmp,32,color,HX_("center",d5,25,db,05),null(),null(),null());
HXLINE(  40)		txt->set_borderColor(-16777216);
HXLINE(  41)		txt->set_borderSize(( (Float)(3) ));
HXLINE(  42)		txt->set_borderStyle(::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn());
HXLINE(  43)		txt->screenCenter(null());
HXLINE(  44)		this->add(txt);
HXLINE(  46)		 ::flixel::FlxSprite bg3 = bg2;
HXDLIN(  46)		int bg4 = bg2->color;
HXDLIN(  46)		::flixel::tweens::FlxTween_obj::color(bg3,2,bg4,( (int)(::flixel::util::_FlxColor::FlxColor_Impl__obj::fromString(this->bgColors->__get(this->colorRotation))) ),null());
HXLINE(  47)		 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(2, ::Dynamic(new _hx_Closure_0(bg2,_gthis)),0);
            	}


void OutdatedSubState_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_badf7fe26ae152fc_58_update)
HXLINE(  59)		if (::PlayerSettings_obj::player1->controls->_back->check()) {
HXLINE(  61)			::flixel::FlxG_obj::save->data->__SetField(HX_("funnyquestionpopup",bc,24,5f,b0),true,::hx::paccDynamic);
HXLINE(  62)			{
HXLINE(  62)				 ::flixel::FlxState nextState =  ::MainMenuState_obj::__alloc( HX_CTX ,null(),null());
HXDLIN(  62)				if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE(  62)					::flixel::FlxG_obj::game->_requestedState = nextState;
            				}
            			}
            		}
HXLINE(  64)		if (::PlayerSettings_obj::player1->controls->_accept->check()) {
HXLINE(  66)			::flixel::FlxG_obj::save->data->__SetField(HX_("funnyquestionpopup",bc,24,5f,b0),true,::hx::paccDynamic);
HXLINE(  67)			::flixel::FlxG_obj::save->data->__SetField(HX_("monibeaten",3c,53,44,8f),true,::hx::paccDynamic);
HXLINE(  68)			::flixel::FlxG_obj::save->data->__SetField(HX_("weekUnlocked",37,64,c4,a5),2,::hx::paccDynamic);
HXLINE(  79)			{
HXLINE(  79)				 ::flixel::FlxState nextState =  ::MainMenuState_obj::__alloc( HX_CTX ,null(),null());
HXDLIN(  79)				if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE(  79)					::flixel::FlxG_obj::game->_requestedState = nextState;
            				}
            			}
            		}
            	}


bool OutdatedSubState_obj::leftState;

::String OutdatedSubState_obj::needVer;

::String OutdatedSubState_obj::currChanges;


::hx::ObjectPtr< OutdatedSubState_obj > OutdatedSubState_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< OutdatedSubState_obj > __this = new OutdatedSubState_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< OutdatedSubState_obj > OutdatedSubState_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	OutdatedSubState_obj *__this = (OutdatedSubState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(OutdatedSubState_obj), true, "OutdatedSubState"));
	*(void **)__this = OutdatedSubState_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

OutdatedSubState_obj::OutdatedSubState_obj()
{
}

void OutdatedSubState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(OutdatedSubState);
	HX_MARK_MEMBER_NAME(bgColors,"bgColors");
	HX_MARK_MEMBER_NAME(colorRotation,"colorRotation");
	 ::MusicBeatState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void OutdatedSubState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bgColors,"bgColors");
	HX_VISIT_MEMBER_NAME(colorRotation,"colorRotation");
	 ::MusicBeatState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val OutdatedSubState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"bgColors") ) { return ::hx::Val( bgColors ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"colorRotation") ) { return ::hx::Val( colorRotation ); }
	}
	return super::__Field(inName,inCallProp);
}

bool OutdatedSubState_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"needVer") ) { outValue = ( needVer ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"leftState") ) { outValue = ( leftState ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"currChanges") ) { outValue = ( currChanges ); return true; }
	}
	return false;
}

::hx::Val OutdatedSubState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"bgColors") ) { bgColors=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"colorRotation") ) { colorRotation=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool OutdatedSubState_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"needVer") ) { needVer=ioValue.Cast< ::String >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"leftState") ) { leftState=ioValue.Cast< bool >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"currChanges") ) { currChanges=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

void OutdatedSubState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("bgColors",55,b1,8d,9b));
	outFields->push(HX_("colorRotation",c1,05,49,0b));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo OutdatedSubState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(OutdatedSubState_obj,bgColors),HX_("bgColors",55,b1,8d,9b)},
	{::hx::fsInt,(int)offsetof(OutdatedSubState_obj,colorRotation),HX_("colorRotation",c1,05,49,0b)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo OutdatedSubState_obj_sStaticStorageInfo[] = {
	{::hx::fsBool,(void *) &OutdatedSubState_obj::leftState,HX_("leftState",8a,64,eb,98)},
	{::hx::fsString,(void *) &OutdatedSubState_obj::needVer,HX_("needVer",ad,ff,17,aa)},
	{::hx::fsString,(void *) &OutdatedSubState_obj::currChanges,HX_("currChanges",31,b0,21,ba)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String OutdatedSubState_obj_sMemberFields[] = {
	HX_("bgColors",55,b1,8d,9b),
	HX_("colorRotation",c1,05,49,0b),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	::String(null()) };

static void OutdatedSubState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OutdatedSubState_obj::leftState,"leftState");
	HX_MARK_MEMBER_NAME(OutdatedSubState_obj::needVer,"needVer");
	HX_MARK_MEMBER_NAME(OutdatedSubState_obj::currChanges,"currChanges");
};

#ifdef HXCPP_VISIT_ALLOCS
static void OutdatedSubState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OutdatedSubState_obj::leftState,"leftState");
	HX_VISIT_MEMBER_NAME(OutdatedSubState_obj::needVer,"needVer");
	HX_VISIT_MEMBER_NAME(OutdatedSubState_obj::currChanges,"currChanges");
};

#endif

::hx::Class OutdatedSubState_obj::__mClass;

static ::String OutdatedSubState_obj_sStaticFields[] = {
	HX_("leftState",8a,64,eb,98),
	HX_("needVer",ad,ff,17,aa),
	HX_("currChanges",31,b0,21,ba),
	::String(null())
};

void OutdatedSubState_obj::__register()
{
	OutdatedSubState_obj _hx_dummy;
	OutdatedSubState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("OutdatedSubState",d9,7b,73,69);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &OutdatedSubState_obj::__GetStatic;
	__mClass->mSetStaticField = &OutdatedSubState_obj::__SetStatic;
	__mClass->mMarkFunc = OutdatedSubState_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(OutdatedSubState_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(OutdatedSubState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< OutdatedSubState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = OutdatedSubState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = OutdatedSubState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = OutdatedSubState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void OutdatedSubState_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_badf7fe26ae152fc_15_boot)
HXDLIN(  15)		leftState = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_badf7fe26ae152fc_17_boot)
HXDLIN(  17)		needVer = HX_("IDFK LOL",29,9e,7f,9c);
            	}
{
            	HX_STACKFRAME(&_hx_pos_badf7fe26ae152fc_18_boot)
HXDLIN(  18)		currChanges = HX_("dk",87,57,00,00);
            	}
}

