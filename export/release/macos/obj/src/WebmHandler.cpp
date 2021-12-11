#include <hxcpp.h>

#ifndef INCLUDED_WebmHandler
#include <WebmHandler.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_b6d9a5cb8ab7eda1_173_new,"WebmHandler","new",0xe7cf7cc3,"WebmHandler.new","WebmHandler.hx",173,0x2dcf8c0d)

void WebmHandler_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_b6d9a5cb8ab7eda1_173_new)
HXDLIN( 173)		::haxe::Log_obj::trace(HX_("THIS IS ANDROID! or some shit...",65,e0,a5,4f),::hx::SourceInfo(HX_("source/WebmHandler.hx",01,5e,69,f7),173,HX_("WebmHandler",51,5f,03,d7),HX_("new",60,d0,53,00)));
            	}

Dynamic WebmHandler_obj::__CreateEmpty() { return new WebmHandler_obj; }

void *WebmHandler_obj::_hx_vtable = 0;

Dynamic WebmHandler_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< WebmHandler_obj > _hx_result = new WebmHandler_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool WebmHandler_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0ac0e0c5;
}


::hx::ObjectPtr< WebmHandler_obj > WebmHandler_obj::__new() {
	::hx::ObjectPtr< WebmHandler_obj > __this = new WebmHandler_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< WebmHandler_obj > WebmHandler_obj::__alloc(::hx::Ctx *_hx_ctx) {
	WebmHandler_obj *__this = (WebmHandler_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(WebmHandler_obj), true, "WebmHandler"));
	*(void **)__this = WebmHandler_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

WebmHandler_obj::WebmHandler_obj()
{
}

void WebmHandler_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(WebmHandler);
	HX_MARK_MEMBER_NAME(webm,"webm");
	HX_MARK_END_CLASS();
}

void WebmHandler_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(webm,"webm");
}

::hx::Val WebmHandler_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"webm") ) { return ::hx::Val( webm ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val WebmHandler_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"webm") ) { webm=inValue.Cast<  ::openfl::display::Sprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void WebmHandler_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("webm",59,5d,f5,4e));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo WebmHandler_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::Sprite */ ,(int)offsetof(WebmHandler_obj,webm),HX_("webm",59,5d,f5,4e)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *WebmHandler_obj_sStaticStorageInfo = 0;
#endif

static ::String WebmHandler_obj_sMemberFields[] = {
	HX_("webm",59,5d,f5,4e),
	::String(null()) };

::hx::Class WebmHandler_obj::__mClass;

void WebmHandler_obj::__register()
{
	WebmHandler_obj _hx_dummy;
	WebmHandler_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("WebmHandler",51,5f,03,d7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(WebmHandler_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< WebmHandler_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = WebmHandler_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = WebmHandler_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

