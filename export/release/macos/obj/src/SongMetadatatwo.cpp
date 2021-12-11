#include <hxcpp.h>

#ifndef INCLUDED_SongMetadatatwo
#include <SongMetadatatwo.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_9251c1e08e3af7b4_501_new,"SongMetadatatwo","new",0x118b2c7a,"SongMetadatatwo.new","DokiFreeplayState.hx",501,0xd6b47236)

void SongMetadatatwo_obj::__construct(::String song,int week,::String songCharacter){
            	HX_STACKFRAME(&_hx_pos_9251c1e08e3af7b4_501_new)
HXLINE( 505)		this->songCharacter = HX_("",00,00,00,00);
HXLINE( 504)		this->week = 0;
HXLINE( 503)		this->songName = HX_("",00,00,00,00);
HXLINE( 509)		this->songName = song;
HXLINE( 510)		this->week = week;
HXLINE( 511)		this->songCharacter = songCharacter;
            	}

Dynamic SongMetadatatwo_obj::__CreateEmpty() { return new SongMetadatatwo_obj; }

void *SongMetadatatwo_obj::_hx_vtable = 0;

Dynamic SongMetadatatwo_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SongMetadatatwo_obj > _hx_result = new SongMetadatatwo_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool SongMetadatatwo_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x12615be4;
}


SongMetadatatwo_obj::SongMetadatatwo_obj()
{
}

void SongMetadatatwo_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SongMetadatatwo);
	HX_MARK_MEMBER_NAME(songName,"songName");
	HX_MARK_MEMBER_NAME(week,"week");
	HX_MARK_MEMBER_NAME(songCharacter,"songCharacter");
	HX_MARK_END_CLASS();
}

void SongMetadatatwo_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(songName,"songName");
	HX_VISIT_MEMBER_NAME(week,"week");
	HX_VISIT_MEMBER_NAME(songCharacter,"songCharacter");
}

::hx::Val SongMetadatatwo_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"week") ) { return ::hx::Val( week ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"songName") ) { return ::hx::Val( songName ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"songCharacter") ) { return ::hx::Val( songCharacter ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val SongMetadatatwo_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"week") ) { week=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"songName") ) { songName=inValue.Cast< ::String >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"songCharacter") ) { songCharacter=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SongMetadatatwo_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("songName",c0,d0,d7,36));
	outFields->push(HX_("week",f4,5f,f5,4e));
	outFields->push(HX_("songCharacter",14,f5,a5,78));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo SongMetadatatwo_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(SongMetadatatwo_obj,songName),HX_("songName",c0,d0,d7,36)},
	{::hx::fsInt,(int)offsetof(SongMetadatatwo_obj,week),HX_("week",f4,5f,f5,4e)},
	{::hx::fsString,(int)offsetof(SongMetadatatwo_obj,songCharacter),HX_("songCharacter",14,f5,a5,78)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *SongMetadatatwo_obj_sStaticStorageInfo = 0;
#endif

static ::String SongMetadatatwo_obj_sMemberFields[] = {
	HX_("songName",c0,d0,d7,36),
	HX_("week",f4,5f,f5,4e),
	HX_("songCharacter",14,f5,a5,78),
	::String(null()) };

::hx::Class SongMetadatatwo_obj::__mClass;

void SongMetadatatwo_obj::__register()
{
	SongMetadatatwo_obj _hx_dummy;
	SongMetadatatwo_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("SongMetadatatwo",88,27,31,17);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SongMetadatatwo_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SongMetadatatwo_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SongMetadatatwo_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SongMetadatatwo_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

