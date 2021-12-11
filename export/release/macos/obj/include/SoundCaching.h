#ifndef INCLUDED_SoundCaching
#define INCLUDED_SoundCaching

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Option
#include <Option.h>
#endif
HX_DECLARE_CLASS0(Option)
HX_DECLARE_CLASS0(SoundCaching)



class HXCPP_CLASS_ATTRIBUTES SoundCaching_obj : public  ::Option_obj
{
	public:
		typedef  ::Option_obj super;
		typedef SoundCaching_obj OBJ_;
		SoundCaching_obj();

	public:
		enum { _hx_ClassId = 0x1a9b0134 };

		void __construct(::String desc);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="SoundCaching")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"SoundCaching"); }
		static ::hx::ObjectPtr< SoundCaching_obj > __new(::String desc);
		static ::hx::ObjectPtr< SoundCaching_obj > __alloc(::hx::Ctx *_hx_ctx,::String desc);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SoundCaching_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SoundCaching",10,47,6f,ff); }

		bool press();

		::String updateDisplay();

};


#endif /* INCLUDED_SoundCaching */ 
