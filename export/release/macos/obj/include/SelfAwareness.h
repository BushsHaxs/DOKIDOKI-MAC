#ifndef INCLUDED_SelfAwareness
#define INCLUDED_SelfAwareness

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Option
#include <Option.h>
#endif
HX_DECLARE_CLASS0(Option)
HX_DECLARE_CLASS0(SelfAwareness)



class HXCPP_CLASS_ATTRIBUTES SelfAwareness_obj : public  ::Option_obj
{
	public:
		typedef  ::Option_obj super;
		typedef SelfAwareness_obj OBJ_;
		SelfAwareness_obj();

	public:
		enum { _hx_ClassId = 0x5241f6a9 };

		void __construct(::String desc);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="SelfAwareness")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"SelfAwareness"); }
		static ::hx::ObjectPtr< SelfAwareness_obj > __new(::String desc);
		static ::hx::ObjectPtr< SelfAwareness_obj > __alloc(::hx::Ctx *_hx_ctx,::String desc);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SelfAwareness_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SelfAwareness",69,e1,fa,75); }

		bool press();

		::String updateDisplay();

};


#endif /* INCLUDED_SelfAwareness */ 
