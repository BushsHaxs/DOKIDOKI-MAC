#ifndef INCLUDED_CachingState
#define INCLUDED_CachingState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Option
#include <Option.h>
#endif
HX_DECLARE_CLASS0(CachingState)
HX_DECLARE_CLASS0(Option)



class HXCPP_CLASS_ATTRIBUTES CachingState_obj : public  ::Option_obj
{
	public:
		typedef  ::Option_obj super;
		typedef CachingState_obj OBJ_;
		CachingState_obj();

	public:
		enum { _hx_ClassId = 0x31e4c69e };

		void __construct(::String desc);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="CachingState")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"CachingState"); }
		static ::hx::ObjectPtr< CachingState_obj > __new(::String desc);
		static ::hx::ObjectPtr< CachingState_obj > __alloc(::hx::Ctx *_hx_ctx,::String desc);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CachingState_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CachingState",b2,3d,24,b2); }

		bool press();

		::String updateDisplay();

};


#endif /* INCLUDED_CachingState */ 
