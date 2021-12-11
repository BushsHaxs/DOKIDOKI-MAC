#ifndef INCLUDED_ResetSave
#define INCLUDED_ResetSave

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Option
#include <Option.h>
#endif
HX_DECLARE_CLASS0(Option)
HX_DECLARE_CLASS0(ResetSave)



class HXCPP_CLASS_ATTRIBUTES ResetSave_obj : public  ::Option_obj
{
	public:
		typedef  ::Option_obj super;
		typedef ResetSave_obj OBJ_;
		ResetSave_obj();

	public:
		enum { _hx_ClassId = 0x54dd8e04 };

		void __construct(::String desc);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="ResetSave")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"ResetSave"); }
		static ::hx::ObjectPtr< ResetSave_obj > __new(::String desc);
		static ::hx::ObjectPtr< ResetSave_obj > __alloc(::hx::Ctx *_hx_ctx,::String desc);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ResetSave_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ResetSave",8c,74,0c,34); }

		bool confirm;
		bool press();

		::String updateDisplay();

};


#endif /* INCLUDED_ResetSave */ 
