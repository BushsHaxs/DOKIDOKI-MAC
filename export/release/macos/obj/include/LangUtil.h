#ifndef INCLUDED_LangUtil
#define INCLUDED_LangUtil

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(LangUtil)



class HXCPP_CLASS_ATTRIBUTES LangUtil_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef LangUtil_obj OBJ_;
		LangUtil_obj();

	public:
		enum { _hx_ClassId = 0x47ff92b8 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="LangUtil")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"LangUtil"); }

		inline static ::hx::ObjectPtr< LangUtil_obj > __new() {
			::hx::ObjectPtr< LangUtil_obj > __this = new LangUtil_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< LangUtil_obj > __alloc(::hx::Ctx *_hx_ctx) {
			LangUtil_obj *__this = (LangUtil_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(LangUtil_obj), false, "LangUtil"));
			*(void **)__this = LangUtil_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~LangUtil_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("LangUtil",30,d5,aa,3e); }

		static ::Array< ::String > localeList;
		static ::String getFont(::String type);
		static ::Dynamic getFont_dyn();

		static ::String getString(::String identifier);
		static ::Dynamic getString_dyn();

};


#endif /* INCLUDED_LangUtil */ 
