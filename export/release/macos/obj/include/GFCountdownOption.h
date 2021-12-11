#ifndef INCLUDED_GFCountdownOption
#define INCLUDED_GFCountdownOption

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Option
#include <Option.h>
#endif
HX_DECLARE_CLASS0(GFCountdownOption)
HX_DECLARE_CLASS0(Option)



class HXCPP_CLASS_ATTRIBUTES GFCountdownOption_obj : public  ::Option_obj
{
	public:
		typedef  ::Option_obj super;
		typedef GFCountdownOption_obj OBJ_;
		GFCountdownOption_obj();

	public:
		enum { _hx_ClassId = 0x6de8ece7 };

		void __construct(::String desc);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="GFCountdownOption")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"GFCountdownOption"); }
		static ::hx::ObjectPtr< GFCountdownOption_obj > __new(::String desc);
		static ::hx::ObjectPtr< GFCountdownOption_obj > __alloc(::hx::Ctx *_hx_ctx,::String desc);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~GFCountdownOption_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("GFCountdownOption",a7,37,4e,1e); }

		bool press();

		::String updateDisplay();

};


#endif /* INCLUDED_GFCountdownOption */ 
