#ifndef INCLUDED_KeyBindingsOption
#define INCLUDED_KeyBindingsOption

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Option
#include <Option.h>
#endif
HX_DECLARE_CLASS0(Controls)
HX_DECLARE_CLASS0(KeyBindingsOption)
HX_DECLARE_CLASS0(Option)
HX_DECLARE_CLASS3(flixel,input,actions,FlxActionSet)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES KeyBindingsOption_obj : public  ::Option_obj
{
	public:
		typedef  ::Option_obj super;
		typedef KeyBindingsOption_obj OBJ_;
		KeyBindingsOption_obj();

	public:
		enum { _hx_ClassId = 0x7fc48ac6 };

		void __construct(::String desc, ::Controls controls);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="KeyBindingsOption")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"KeyBindingsOption"); }
		static ::hx::ObjectPtr< KeyBindingsOption_obj > __new(::String desc, ::Controls controls);
		static ::hx::ObjectPtr< KeyBindingsOption_obj > __alloc(::hx::Ctx *_hx_ctx,::String desc, ::Controls controls);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~KeyBindingsOption_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("KeyBindingsOption",82,0d,e9,55); }

		 ::Controls controls;
		bool press();

		::String updateDisplay();

};


#endif /* INCLUDED_KeyBindingsOption */ 
