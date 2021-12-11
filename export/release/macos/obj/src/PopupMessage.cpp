#include <hxcpp.h>

#ifndef INCLUDED_Conductor
#include <Conductor.h>
#endif
#ifndef INCLUDED_DokiStoryState
#include <DokiStoryState.h>
#endif
#ifndef INCLUDED_LangUtil
#include <LangUtil.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_MusicBeatSubstate
#include <MusicBeatSubstate.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_PopupMessage
#include <PopupMessage.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
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
#ifndef INCLUDED_flixel_FlxSubState
#include <flixel/FlxSubState.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSoundGroup
#include <flixel/system/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_media_SoundChannel
#include <openfl/media/SoundChannel.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_30feec4c2eb31707_11_new,"PopupMessage","new",0xf3b0478d,"PopupMessage.new","PopupMessage.hx",11,0xb307a883)
HX_LOCAL_STACK_FRAME(_hx_pos_30feec4c2eb31707_70_update,"PopupMessage","update",0xdb4c08fc,"PopupMessage.update","PopupMessage.hx",70,0xb307a883)

void PopupMessage_obj::__construct(::String popupText, ::Dynamic __o_isGlitched){
            		 ::Dynamic isGlitched = __o_isGlitched;
            		if (::hx::IsNull(__o_isGlitched)) isGlitched = false;
            	HX_GC_STACKFRAME(&_hx_pos_30feec4c2eb31707_11_new)
HXLINE(  17)		this->offsetY = (( (Float)(::flixel::FlxG_obj::height) ) / ( (Float)(2) ));
HXLINE(  16)		this->offsetX = (( (Float)(::flixel::FlxG_obj::width) ) / ( (Float)(2) ));
HXLINE(  23)		super::__construct();
HXLINE(  25)		::Array< ::String > popupTextLines = ::StringTools_obj::trim(popupText).split(HX_("{NL}",e4,b0,88,51));
HXLINE(  27)		::DokiStoryState_obj::instance->acceptInput = false;
HXLINE(  31)		this->background =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-(this->offsetX),-(this->offsetY),null())->makeGraphic(::flixel::FlxG_obj::width,::flixel::FlxG_obj::height,-1,null(),null());
HXLINE(  32)		this->background->set_alpha(((Float)0.5));
HXLINE(  33)		this->add(this->background);
HXLINE(  35)		this->box =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,0,null());
HXLINE(  36)		 ::flixel::FlxSprite _hx_tmp = this->box;
HXDLIN(  36)		bool isLocale = false;
HXDLIN(  36)		 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp1;
HXDLIN(  36)		if (isLocale) {
HXLINE(  36)			if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dokistory/popup",09,f2,35,e8)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("preload",c9,47,43,35)),null())) {
HXLINE(  36)				 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dokistory/popup",09,f2,35,e8),HX_("preload",c9,47,43,35),isLocale);
HXDLIN(  36)				_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dokistory/popup",09,f2,35,e8)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("preload",c9,47,43,35)));
            			}
            			else {
HXLINE(  36)				 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dokistory/popup",09,f2,35,e8),HX_("preload",c9,47,43,35),isLocale);
HXDLIN(  36)				_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("dokistory/popup",09,f2,35,e8)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("preload",c9,47,43,35)));
            			}
            		}
            		else {
HXLINE(  36)			 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dokistory/popup",09,f2,35,e8),HX_("preload",c9,47,43,35),null());
HXDLIN(  36)			_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("dokistory/popup",09,f2,35,e8)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("preload",c9,47,43,35)));
            		}
HXDLIN(  36)		_hx_tmp->set_frames(_hx_tmp1);
HXLINE(  37)		this->box->animation->addByPrefix(HX_("normal",27,72,69,30),HX_("normal",27,72,69,30),null(),null(),null(),null());
HXLINE(  38)		this->box->animation->addByPrefix(HX_("glitch",f5,93,c8,a3),HX_("glitch",f5,93,c8,a3),null(),null(),null(),null());
HXLINE(  39)		this->box->animation->play(HX_("normal",27,72,69,30),null(),null(),null());
HXLINE(  40)		this->box->set_antialiasing(true);
HXLINE(  41)		this->box->screenCenter(::flixel::util::FlxAxes_obj::XY_dyn());
HXLINE(  42)		 ::flixel::FlxSprite fh = this->box;
HXDLIN(  42)		fh->set_x((fh->x - this->offsetX));
HXLINE(  43)		 ::flixel::FlxSprite fh1 = this->box;
HXDLIN(  43)		fh1->set_y((fh1->y - this->offsetY));
HXLINE(  44)		this->box->offset->set(-71,null());
HXLINE(  45)		this->add(this->box);
HXLINE(  47)		if (( (bool)(isGlitched) )) {
HXLINE(  49)			if (::hx::IsNotNull( ::flixel::FlxG_obj::sound->music )) {
HXLINE(  50)				 ::flixel::_hx_system::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN(  50)				_this->cleanup(_this->autoDestroy,true);
            			}
HXLINE(  51)			this->box->animation->play(HX_("glitch",f5,93,c8,a3),null(),null(),null());
HXLINE(  52)			this->box->offset->set(0,null());
            		}
HXLINE(  55)		this->grpText =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  56)		this->add(this->grpText);
HXLINE(  58)		{
HXLINE(  58)			int _g = 0;
HXDLIN(  58)			int _g1 = popupTextLines->length;
HXDLIN(  58)			while((_g < _g1)){
HXLINE(  58)				_g = (_g + 1);
HXDLIN(  58)				int i = (_g - 1);
HXLINE(  60)				 ::flixel::text::FlxText text =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,0,((this->box->y + 76) + (i * 36)),(( (Float)(this->box->frameWidth) ) * ((Float)0.95)),popupTextLines->__get(i),null(),null());
HXLINE(  61)				text->setFormat(::LangUtil_obj::getFont(HX_("aller",ce,9b,93,21)),32,-16777216,HX_("center",d5,25,db,05),null(),null(),null());
HXLINE(  62)				text->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
HXLINE(  63)				text->set_x((text->x - this->offsetX));
HXLINE(  64)				text->set_antialiasing(true);
HXLINE(  65)				this->grpText->add(text).StaticCast<  ::flixel::text::FlxText >();
            			}
            		}
            	}

Dynamic PopupMessage_obj::__CreateEmpty() { return new PopupMessage_obj; }

void *PopupMessage_obj::_hx_vtable = 0;

Dynamic PopupMessage_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PopupMessage_obj > _hx_result = new PopupMessage_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool PopupMessage_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x5661ffbf) {
			if (inClassId<=(int)0x4b81cfdb) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x4b81cfdb;
			} else {
				return inClassId==(int)0x5661ffbf;
			}
		} else {
			return inClassId==(int)0x62817b24;
		}
	} else {
		if (inClassId<=(int)0x7ccf8994) {
			return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
		} else {
			return inClassId==(int)0x7fce3ab0;
		}
	}
}

void PopupMessage_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_30feec4c2eb31707_70_update)
HXLINE(  71)		 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN(  71)		if (_this->keyManager->checkStatus(13,_this->status)) {
HXLINE(  73)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(  73)			_hx_tmp->play(::Paths_obj::sound(HX_("confirmMenu",bf,8e,fe,3c),null()),null(),null(),null(),null(),null());
HXLINE(  74)			::DokiStoryState_obj::showPopUp = false;
HXLINE(  76)			if (::DokiStoryState_obj::secondaryPopUp) {
HXLINE(  78)				::DokiStoryState_obj::popupWeek = 0;
HXLINE(  79)				::DokiStoryState_obj::secondaryPopUp = false;
            			}
            			else {
HXLINE(  81)				bool _hx_tmp;
HXDLIN(  81)				bool _hx_tmp1;
HXDLIN(  81)				if ((::DokiStoryState_obj::popupWeek != 1)) {
HXLINE(  81)					_hx_tmp1 = (::DokiStoryState_obj::popupWeek == 2);
            				}
            				else {
HXLINE(  81)					_hx_tmp1 = true;
            				}
HXDLIN(  81)				if (!(_hx_tmp1)) {
HXLINE(  81)					_hx_tmp = (::DokiStoryState_obj::popupWeek == 5);
            				}
            				else {
HXLINE(  81)					_hx_tmp = true;
            				}
HXDLIN(  81)				if (_hx_tmp) {
HXLINE(  82)					::DokiStoryState_obj::secondaryPopUp = true;
            				}
            			}
HXLINE(  84)			if (::hx::IsNull( ::flixel::FlxG_obj::sound->music->_channel )) {
HXLINE(  86)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(  86)				::String library = null();
HXDLIN(  86)				::String result = ::Paths_obj::getPath((((HX_("music/",ea,bf,1b,3f) + HX_("freakyMenu",15,c9,93,86)) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)),HX_("MUSIC",85,08,49,8e),library);
HXDLIN(  86)				::String _hx_tmp1;
HXDLIN(  86)				if (::Paths_obj::doesSoundAssetExist(result)) {
HXLINE(  86)					_hx_tmp1 = result;
            				}
            				else {
HXLINE(  86)					_hx_tmp1 = null();
            				}
HXDLIN(  86)				_hx_tmp->playMusic(_hx_tmp1,null(),null(),null());
HXLINE(  87)				::Conductor_obj::changeBPM(( (Float)(102) ));
            			}
HXLINE(  90)			switch((int)(::DokiStoryState_obj::popupWeek)){
            				case (int)1: {
HXLINE(  95)					::flixel::FlxG_obj::save->data->__SetField(HX_("sayopopup",c8,a1,66,3e),true,::hx::paccDynamic);
            				}
            				break;
            				case (int)2: {
HXLINE(  97)					::flixel::FlxG_obj::save->data->__SetField(HX_("natpopup",ab,ed,49,7d),true,::hx::paccDynamic);
            				}
            				break;
            				case (int)4: {
HXLINE(  99)					::flixel::FlxG_obj::save->data->__SetField(HX_("extra1popup",eb,9e,36,28),true,::hx::paccDynamic);
            				}
            				break;
            				case (int)5: {
HXLINE( 101)					::flixel::FlxG_obj::save->data->__SetField(HX_("extra2popup",4a,fb,91,8e),true,::hx::paccDynamic);
            				}
            				break;
            				default:{
HXLINE(  93)					::flixel::FlxG_obj::save->data->__SetField(HX_("monipopup",ef,24,f0,3d),true,::hx::paccDynamic);
            				}
            			}
HXLINE( 104)			if (( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("yuribeaten",32,30,34,69),::hx::paccDynamic)) )) {
HXLINE( 105)				::flixel::FlxG_obj::save->data->__SetField(HX_("yuripopup",b9,98,c5,1e),true,::hx::paccDynamic);
            			}
HXLINE( 107)			::DokiStoryState_obj::instance->acceptInput = true;
HXLINE( 108)			this->close();
            		}
HXLINE( 111)		this->super::update(elapsed);
            	}



::hx::ObjectPtr< PopupMessage_obj > PopupMessage_obj::__new(::String popupText, ::Dynamic __o_isGlitched) {
	::hx::ObjectPtr< PopupMessage_obj > __this = new PopupMessage_obj();
	__this->__construct(popupText,__o_isGlitched);
	return __this;
}

::hx::ObjectPtr< PopupMessage_obj > PopupMessage_obj::__alloc(::hx::Ctx *_hx_ctx,::String popupText, ::Dynamic __o_isGlitched) {
	PopupMessage_obj *__this = (PopupMessage_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PopupMessage_obj), true, "PopupMessage"));
	*(void **)__this = PopupMessage_obj::_hx_vtable;
	__this->__construct(popupText,__o_isGlitched);
	return __this;
}

PopupMessage_obj::PopupMessage_obj()
{
}

void PopupMessage_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PopupMessage);
	HX_MARK_MEMBER_NAME(background,"background");
	HX_MARK_MEMBER_NAME(box,"box");
	HX_MARK_MEMBER_NAME(offsetX,"offsetX");
	HX_MARK_MEMBER_NAME(offsetY,"offsetY");
	HX_MARK_MEMBER_NAME(grpText,"grpText");
	 ::flixel::FlxSubState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PopupMessage_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(background,"background");
	HX_VISIT_MEMBER_NAME(box,"box");
	HX_VISIT_MEMBER_NAME(offsetX,"offsetX");
	HX_VISIT_MEMBER_NAME(offsetY,"offsetY");
	HX_VISIT_MEMBER_NAME(grpText,"grpText");
	 ::flixel::FlxSubState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val PopupMessage_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"box") ) { return ::hx::Val( box ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"offsetX") ) { return ::hx::Val( offsetX ); }
		if (HX_FIELD_EQ(inName,"offsetY") ) { return ::hx::Val( offsetY ); }
		if (HX_FIELD_EQ(inName,"grpText") ) { return ::hx::Val( grpText ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { return ::hx::Val( background ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val PopupMessage_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"box") ) { box=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"offsetX") ) { offsetX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offsetY") ) { offsetY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"grpText") ) { grpText=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { background=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PopupMessage_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("background",ee,93,1d,26));
	outFields->push(HX_("box",0b,be,4a,00));
	outFields->push(HX_("offsetX",65,09,65,d7));
	outFields->push(HX_("offsetY",66,09,65,d7));
	outFields->push(HX_("grpText",32,db,85,04));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo PopupMessage_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(PopupMessage_obj,background),HX_("background",ee,93,1d,26)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(PopupMessage_obj,box),HX_("box",0b,be,4a,00)},
	{::hx::fsFloat,(int)offsetof(PopupMessage_obj,offsetX),HX_("offsetX",65,09,65,d7)},
	{::hx::fsFloat,(int)offsetof(PopupMessage_obj,offsetY),HX_("offsetY",66,09,65,d7)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(PopupMessage_obj,grpText),HX_("grpText",32,db,85,04)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *PopupMessage_obj_sStaticStorageInfo = 0;
#endif

static ::String PopupMessage_obj_sMemberFields[] = {
	HX_("background",ee,93,1d,26),
	HX_("box",0b,be,4a,00),
	HX_("offsetX",65,09,65,d7),
	HX_("offsetY",66,09,65,d7),
	HX_("grpText",32,db,85,04),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class PopupMessage_obj::__mClass;

void PopupMessage_obj::__register()
{
	PopupMessage_obj _hx_dummy;
	PopupMessage_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("PopupMessage",1b,7d,a0,62);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PopupMessage_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PopupMessage_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PopupMessage_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PopupMessage_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

