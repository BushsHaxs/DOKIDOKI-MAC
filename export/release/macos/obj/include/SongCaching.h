#ifndef INCLUDED_SongCaching
#define INCLUDED_SongCaching

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Option
#include <Option.h>
#endif
HX_DECLARE_CLASS0(Option)
HX_DECLARE_CLASS0(SongCaching)



class HXCPP_CLASS_ATTRIBUTES SongCaching_obj : public  ::Option_obj
{
	public:
		typedef  ::Option_obj super;
		typedef SongCaching_obj OBJ_;
		SongCaching_obj();

	public:
		enum { _hx_ClassId = 0x72decdca };

		void __construct(::String desc);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="SongCaching")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"SongCaching"); }
		static ::hx::ObjectPtr< SongCaching_obj > __new(::String desc);
		static ::hx::ObjectPtr< SongCaching_obj > __alloc(::hx::Ctx *_hx_ctx,::String desc);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SongCaching_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SongCaching",8a,88,e3,bf); }

		bool press();

		::String updateDisplay();

};


#endif /* INCLUDED_SongCaching */ 
