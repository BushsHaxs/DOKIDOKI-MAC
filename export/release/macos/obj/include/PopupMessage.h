#ifndef INCLUDED_PopupMessage
#define INCLUDED_PopupMessage

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_MusicBeatSubstate
#include <MusicBeatSubstate.h>
#endif
HX_DECLARE_CLASS0(MusicBeatSubstate)
HX_DECLARE_CLASS0(PopupMessage)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS1(flixel,FlxSubState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES PopupMessage_obj : public  ::MusicBeatSubstate_obj
{
	public:
		typedef  ::MusicBeatSubstate_obj super;
		typedef PopupMessage_obj OBJ_;
		PopupMessage_obj();

	public:
		enum { _hx_ClassId = 0x4b81cfdb };

		void __construct(::String popupText, ::Dynamic __o_isGlitched);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="PopupMessage")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"PopupMessage"); }
		static ::hx::ObjectPtr< PopupMessage_obj > __new(::String popupText, ::Dynamic __o_isGlitched);
		static ::hx::ObjectPtr< PopupMessage_obj > __alloc(::hx::Ctx *_hx_ctx,::String popupText, ::Dynamic __o_isGlitched);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PopupMessage_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PopupMessage",1b,7d,a0,62); }

		 ::flixel::FlxSprite background;
		 ::flixel::FlxSprite box;
		Float offsetX;
		Float offsetY;
		 ::flixel::group::FlxTypedGroup grpText;
		void update(Float elapsed);

};


#endif /* INCLUDED_PopupMessage */ 
