#ifndef INCLUDED_MusicCaching
#define INCLUDED_MusicCaching

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Option
#include <Option.h>
#endif
HX_DECLARE_CLASS0(MusicCaching)
HX_DECLARE_CLASS0(Option)



class HXCPP_CLASS_ATTRIBUTES MusicCaching_obj : public  ::Option_obj
{
	public:
		typedef  ::Option_obj super;
		typedef MusicCaching_obj OBJ_;
		MusicCaching_obj();

	public:
		enum { _hx_ClassId = 0x216b52e6 };

		void __construct(::String desc);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="MusicCaching")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"MusicCaching"); }
		static ::hx::ObjectPtr< MusicCaching_obj > __new(::String desc);
		static ::hx::ObjectPtr< MusicCaching_obj > __alloc(::hx::Ctx *_hx_ctx,::String desc);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~MusicCaching_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("MusicCaching",fa,c9,aa,a1); }

		bool press();

		::String updateDisplay();

};


#endif /* INCLUDED_MusicCaching */ 
