#ifndef INCLUDED_SongMetadatatwo
#define INCLUDED_SongMetadatatwo

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_9251c1e08e3af7b4_501_new)
HX_DECLARE_CLASS0(SongMetadatatwo)



class HXCPP_CLASS_ATTRIBUTES SongMetadatatwo_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef SongMetadatatwo_obj OBJ_;
		SongMetadatatwo_obj();

	public:
		enum { _hx_ClassId = 0x12615be4 };

		void __construct(::String song,int week,::String songCharacter);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="SongMetadatatwo")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"SongMetadatatwo"); }

		inline static ::hx::ObjectPtr< SongMetadatatwo_obj > __new(::String song,int week,::String songCharacter) {
			::hx::ObjectPtr< SongMetadatatwo_obj > __this = new SongMetadatatwo_obj();
			__this->__construct(song,week,songCharacter);
			return __this;
		}

		inline static ::hx::ObjectPtr< SongMetadatatwo_obj > __alloc(::hx::Ctx *_hx_ctx,::String song,int week,::String songCharacter) {
			SongMetadatatwo_obj *__this = (SongMetadatatwo_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SongMetadatatwo_obj), true, "SongMetadatatwo"));
			*(void **)__this = SongMetadatatwo_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_9251c1e08e3af7b4_501_new)
HXLINE( 505)		( ( ::SongMetadatatwo)(__this) )->songCharacter = HX_("",00,00,00,00);
HXLINE( 504)		( ( ::SongMetadatatwo)(__this) )->week = 0;
HXLINE( 503)		( ( ::SongMetadatatwo)(__this) )->songName = HX_("",00,00,00,00);
HXLINE( 509)		( ( ::SongMetadatatwo)(__this) )->songName = song;
HXLINE( 510)		( ( ::SongMetadatatwo)(__this) )->week = week;
HXLINE( 511)		( ( ::SongMetadatatwo)(__this) )->songCharacter = songCharacter;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SongMetadatatwo_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SongMetadatatwo",88,27,31,17); }

		::String songName;
		int week;
		::String songCharacter;
};


#endif /* INCLUDED_SongMetadatatwo */ 
