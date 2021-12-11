#ifndef INCLUDED_CharacterCaching
#define INCLUDED_CharacterCaching

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Option
#include <Option.h>
#endif
HX_DECLARE_CLASS0(CharacterCaching)
HX_DECLARE_CLASS0(Option)



class HXCPP_CLASS_ATTRIBUTES CharacterCaching_obj : public  ::Option_obj
{
	public:
		typedef  ::Option_obj super;
		typedef CharacterCaching_obj OBJ_;
		CharacterCaching_obj();

	public:
		enum { _hx_ClassId = 0x7afa044a };

		void __construct(::String desc);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="CharacterCaching")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"CharacterCaching"); }
		static ::hx::ObjectPtr< CharacterCaching_obj > __new(::String desc);
		static ::hx::ObjectPtr< CharacterCaching_obj > __alloc(::hx::Ctx *_hx_ctx,::String desc);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CharacterCaching_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CharacterCaching",76,77,ad,fe); }

		bool press();

		::String updateDisplay();

};


#endif /* INCLUDED_CharacterCaching */ 
