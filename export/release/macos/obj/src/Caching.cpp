#include <hxcpp.h>

#ifndef INCLUDED_Caching
#include <Caching.h>
#endif
#ifndef INCLUDED_CoolUtil
#include <CoolUtil.h>
#endif
#ifndef INCLUDED_FirstBootState
#include <FirstBootState.h>
#endif
#ifndef INCLUDED_HelperFunctions
#include <HelperFunctions.h>
#endif
#ifndef INCLUDED_KadeEngineData
#include <KadeEngineData.h>
#endif
#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_LangUtil
#include <LangUtil.h>
#endif
#ifndef INCLUDED_MainMenuState
#include <MainMenuState.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_PlayerSettings
#include <PlayerSettings.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_TitleState
#include <TitleState.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_TransitionData
#include <flixel/addons/transition/TransitionData.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIState
#include <flixel/addons/ui/FlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#include <flixel/addons/ui/interfaces/IFlxUIState.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_media_Sound
#include <openfl/media/Sound.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_thread__Thread_HaxeThread
#include <sys/thread/_Thread/HaxeThread.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_30a7a61d6603e890_16_new,"Caching","new",0xdcd83c51,"Caching.new","Caching.hx",16,0xd9f5783f)
HX_LOCAL_STACK_FRAME(_hx_pos_30a7a61d6603e890_106_create,"Caching","create",0xa32c47ab,"Caching.create","Caching.hx",106,0xd9f5783f)
HX_LOCAL_STACK_FRAME(_hx_pos_30a7a61d6603e890_121_create,"Caching","create",0xa32c47ab,"Caching.create","Caching.hx",121,0xd9f5783f)
HX_LOCAL_STACK_FRAME(_hx_pos_30a7a61d6603e890_37_create,"Caching","create",0xa32c47ab,"Caching.create","Caching.hx",37,0xd9f5783f)
HX_LOCAL_STACK_FRAME(_hx_pos_30a7a61d6603e890_144_update,"Caching","update",0xae2266b8,"Caching.update","Caching.hx",144,0xd9f5783f)
HX_LOCAL_STACK_FRAME(_hx_pos_30a7a61d6603e890_159_cache,"Caching","cache",0x9880a473,"Caching.cache","Caching.hx",159,0xd9f5783f)
HX_LOCAL_STACK_FRAME(_hx_pos_30a7a61d6603e890_29_boot,"Caching","boot",0x58758b21,"Caching.boot","Caching.hx",29,0xd9f5783f)

void Caching_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_30a7a61d6603e890_16_new)
HXLINE( 141)		this->calledDone = false;
HXLINE(  34)		this->sounds = ::Array_obj< ::String >::__new(0);
HXLINE(  33)		this->music = ::Array_obj< ::String >::__new(0);
HXLINE(  32)		this->songs = ::Array_obj< ::String >::__new(0);
HXLINE(  31)		this->characters = ::Array_obj< ::String >::__new(0);
HXLINE(  21)		this->loaded = false;
HXLINE(  19)		this->done = 0;
HXLINE(  18)		this->toBeDone = 0;
HXLINE(  16)		super::__construct(TransIn,TransOut);
            	}

Dynamic Caching_obj::__CreateEmpty() { return new Caching_obj; }

void *Caching_obj::_hx_vtable = 0;

Dynamic Caching_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Caching_obj > _hx_result = new Caching_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Caching_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3f706236) {
		if (inClassId<=(int)0x23a57bae) {
			if (inClassId<=(int)0x07d9de73) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x07d9de73;
			} else {
				return inClassId==(int)0x23a57bae;
			}
		} else {
			return inClassId==(int)0x2f064378 || inClassId==(int)0x3f706236;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x62817b24 || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

void Caching_obj::create(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::Caching,_gthis) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_30a7a61d6603e890_106_create)
HXLINE( 106)			while(!(_gthis->loaded)){
HXLINE( 108)				bool _hx_tmp;
HXDLIN( 108)				if ((_gthis->toBeDone != 0)) {
HXLINE( 108)					_hx_tmp = (_gthis->done != _gthis->toBeDone);
            				}
            				else {
HXLINE( 108)					_hx_tmp = false;
            				}
HXDLIN( 108)				if (_hx_tmp) {
HXLINE( 110)					Float alpha = (::HelperFunctions_obj::truncateFloat(((( (Float)(_gthis->done) ) / ( (Float)(_gthis->toBeDone) )) * ( (Float)(100) )),2) / ( (Float)(100) ));
HXLINE( 111)					_gthis->kadeLogo->set_alpha(alpha);
HXLINE( 112)					_gthis->text->set_alpha(alpha);
HXLINE( 113)					 ::flixel::text::FlxText _gthis1 = _gthis->text;
HXDLIN( 113)					::String _hx_tmp = (::LangUtil_obj::getString(HX_("cmnCaching",db,d9,b8,b1)) + HX_("... (",76,83,f9,9a));
HXDLIN( 113)					_gthis1->set_text(((((_hx_tmp + _gthis->done) + HX_("/",2f,00,00,00)) + _gthis->toBeDone) + HX_(")",29,00,00,00)));
            				}
            			}
            		}
            		HX_END_LOCAL_FUNC0((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::Caching,_gthis) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_30a7a61d6603e890_121_create)
HXLINE( 121)			_gthis->cache();
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_GC_STACKFRAME(&_hx_pos_30a7a61d6603e890_37_create)
HXDLIN(  37)		 ::Caching _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  38)		::flixel::FlxG_obj::save->bind(HX_("dokitakeover",04,f8,39,59),HX_("ddtoteam",18,ef,f0,2d));
HXLINE(  39)		::PlayerSettings_obj::init();
HXLINE(  40)		::KadeEngineData_obj::initSave();
HXLINE(  42)		::String _hx_tmp;
HXDLIN(  42)		if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/",2f,00,00,00) + HX_("data/textData",3c,85,6a,69)) + HX_(".txt",02,3f,c0,1e))),HX_("TEXT",ad,94,ba,37),HX_("preload",c9,47,43,35)),null())) {
HXLINE(  42)			_hx_tmp = ::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/",2f,00,00,00) + HX_("data/textData",3c,85,6a,69)) + HX_(".txt",02,3f,c0,1e))),HX_("TEXT",ad,94,ba,37),HX_("preload",c9,47,43,35));
            		}
            		else {
HXLINE(  42)			_hx_tmp = ::Paths_obj::getPath(((HX_("locale/en-US/",02,23,bf,a8) + HX_("data/textData",3c,85,6a,69)) + HX_(".txt",02,3f,c0,1e)),HX_("TEXT",ad,94,ba,37),HX_("preload",c9,47,43,35));
            		}
HXDLIN(  42)		::LangUtil_obj::localeList = ::CoolUtil_obj::coolTextFile(_hx_tmp);
HXLINE(  44)		::flixel::FlxG_obj::mouse->set_visible(false);
HXLINE(  46)		{
HXLINE(  46)			 ::flixel::math::FlxRect _this = ::flixel::FlxG_obj::worldBounds;
HXDLIN(  46)			_this->x = ( (Float)(0) );
HXDLIN(  46)			_this->y = ( (Float)(0) );
HXDLIN(  46)			_this->width = ( (Float)(0) );
HXDLIN(  46)			_this->height = ( (Float)(0) );
            		}
HXLINE(  48)		::Caching_obj::bitmapData =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  50)		Float _hx_tmp1 = (( (Float)(::flixel::FlxG_obj::width) ) / ( (Float)(2) ));
HXDLIN(  50)		Float _hx_tmp2 = ((( (Float)(::flixel::FlxG_obj::height) ) / ( (Float)(2) )) + 300);
HXDLIN(  50)		this->text =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,_hx_tmp1,_hx_tmp2,0,(::LangUtil_obj::getString(HX_("cmnCaching",db,d9,b8,b1)) + HX_("...",ee,0f,23,00)),null(),null());
HXLINE(  51)		 ::flixel::text::FlxText _hx_tmp3 = this->text;
HXDLIN(  51)		_hx_tmp3->setFormat(::LangUtil_obj::getFont(HX_("riffic",51,90,7b,4d)),42,-1,HX_("center",d5,25,db,05),null(),null(),null());
HXLINE(  52)		this->text->set_alpha(( (Float)(0) ));
HXLINE(  53)		this->text->set_antialiasing(true);
HXLINE(  55)		this->disableText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,0,34,0,::LangUtil_obj::getString(HX_("descDisableCaching",28,e1,25,bc)),null(),null());
HXLINE(  56)		 ::flixel::text::FlxText _hx_tmp4 = this->disableText;
HXDLIN(  56)		_hx_tmp4->setFormat(::LangUtil_obj::getFont(HX_("aller",ce,9b,93,21)),21,-1,HX_("center",d5,25,db,05),null(),null(),null());
HXLINE(  57)		this->disableText->set_antialiasing(true);
HXLINE(  58)		this->disableText->set_alpha(((Float)0.1));
HXLINE(  59)		this->disableText->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
HXLINE(  61)		 ::flixel::FlxSprite _hx_tmp5 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,(( (Float)(::flixel::FlxG_obj::width) ) / ( (Float)(2) )),(( (Float)(::flixel::FlxG_obj::height) ) / ( (Float)(2) )),null());
HXDLIN(  61)		::String library = null();
HXDLIN(  61)		::String _hx_tmp6 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("DokiTakeoverLogo",cf,3d,ce,ab)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN(  61)		this->kadeLogo = _hx_tmp5->loadGraphic(_hx_tmp6,null(),null(),null(),null(),null());
HXLINE(  62)		 ::flixel::FlxSprite fh = this->kadeLogo;
HXDLIN(  62)		Float fh1 = fh->x;
HXDLIN(  62)		fh->set_x((fh1 - (this->kadeLogo->get_width() / ( (Float)(2) ))));
HXLINE(  63)		 ::flixel::FlxSprite fh2 = this->kadeLogo;
HXDLIN(  63)		Float fh3 = fh2->y;
HXDLIN(  63)		fh2->set_y((fh3 - ((this->kadeLogo->get_height() / ( (Float)(2) )) + 67)));
HXLINE(  64)		 ::flixel::text::FlxText fh4 = this->text;
HXDLIN(  64)		Float fh5 = fh4->y;
HXDLIN(  64)		fh4->set_y((fh5 - ((this->kadeLogo->get_height() / ( (Float)(2) )) - ( (Float)(325) ))));
HXLINE(  65)		 ::flixel::text::FlxText fh6 = this->text;
HXDLIN(  65)		fh6->set_x((fh6->x - ( (Float)(170) )));
HXLINE(  66)		 ::flixel::FlxSprite _hx_tmp7 = this->kadeLogo;
HXDLIN(  66)		_hx_tmp7->setGraphicSize(::Std_obj::_hx_int((this->kadeLogo->get_width() * ((Float)0.6))),null());
HXLINE(  67)		this->kadeLogo->set_antialiasing(true);
HXLINE(  69)		this->kadeLogo->set_alpha(( (Float)(0) ));
HXLINE(  73)		if (( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("cacheCharacters",8c,1d,70,34),::hx::paccDynamic)) )) {
HXLINE(  75)			int _g = 0;
HXDLIN(  75)			::Array< ::String > _g1 = ::sys::FileSystem_obj::readDirectory(::sys::FileSystem_obj::absolutePath(HX_("assets/shared/images/characters",03,f9,fb,54)));
HXDLIN(  75)			while((_g < _g1->length)){
HXLINE(  75)				::String i = _g1->__get(_g);
HXDLIN(  75)				_g = (_g + 1);
HXLINE(  77)				if (!(::StringTools_obj::endsWith(i,HX_(".png",3b,2d,bd,1e)))) {
HXLINE(  78)					continue;
            				}
HXLINE(  79)				this->characters->push(i);
            			}
            		}
HXLINE(  84)		if (( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("cacheSongs",5c,9d,7f,c3),::hx::paccDynamic)) )) {
HXLINE(  85)			this->songs = ::Paths_obj::listSongsToCache();
            		}
HXLINE(  87)		if (( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("cacheMusic",03,37,13,53),::hx::paccDynamic)) )) {
HXLINE(  88)			this->music = ::Paths_obj::listAudioToCache(false);
            		}
HXLINE(  90)		if (( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("cacheSounds",a6,d4,cf,50),::hx::paccDynamic)) )) {
HXLINE(  91)			this->sounds = ::Paths_obj::listAudioToCache(true);
            		}
HXLINE(  94)		int _hx_tmp8 = ::Lambda_obj::count(this->characters,null());
HXDLIN(  94)		int _hx_tmp9 = (_hx_tmp8 + ::Lambda_obj::count(this->songs,null()));
HXDLIN(  94)		int _hx_tmp10 = (_hx_tmp9 + ::Lambda_obj::count(this->music,null()));
HXDLIN(  94)		this->toBeDone = (_hx_tmp10 + ::Lambda_obj::count(this->sounds,null()));
HXLINE(  96)		this->add(this->kadeLogo);
HXLINE(  97)		this->add(this->text);
HXLINE(  99)		if (!(::Caching_obj::afterBoot)) {
HXLINE( 100)			this->add(this->disableText);
            		}
HXLINE( 104)		::sys::thread::_Thread::HaxeThread_obj::create( ::Dynamic(new _hx_Closure_0(_gthis)),false);
HXLINE( 119)		::sys::thread::_Thread::HaxeThread_obj::create( ::Dynamic(new _hx_Closure_1(_gthis)),false);
HXLINE( 138)		this->super::create();
            	}


void Caching_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_30a7a61d6603e890_144_update)
HXLINE( 145)		bool _hx_tmp;
HXDLIN( 145)		 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 145)		if (_this->keyManager->checkStatus(68,_this->status)) {
HXLINE( 145)			_hx_tmp = !(::Caching_obj::afterBoot);
            		}
            		else {
HXLINE( 145)			_hx_tmp = false;
            		}
HXDLIN( 145)		if (_hx_tmp) {
HXLINE( 147)			::haxe::Log_obj::trace(HX_("disabled caching for next time",fe,3c,01,af),::hx::SourceInfo(HX_("source/Caching.hx",33,40,5a,66),147,HX_("Caching",df,bf,75,f0),HX_("update",09,86,05,87)));
HXLINE( 148)			::flixel::FlxG_obj::save->data->__SetField(HX_("cacheCharacters",8c,1d,70,34),false,::hx::paccDynamic);
HXLINE( 149)			::flixel::FlxG_obj::save->data->__SetField(HX_("cacheSongs",5c,9d,7f,c3),false,::hx::paccDynamic);
HXLINE( 150)			::flixel::FlxG_obj::save->data->__SetField(HX_("cacheMusic",03,37,13,53),false,::hx::paccDynamic);
HXLINE( 151)			::flixel::FlxG_obj::save->data->__SetField(HX_("cacheSounds",a6,d4,cf,50),false,::hx::paccDynamic);
HXLINE( 152)			this->remove(this->disableText,null());
            		}
HXLINE( 155)		this->super::update(elapsed);
            	}


void Caching_obj::cache(){
            	HX_GC_STACKFRAME(&_hx_pos_30a7a61d6603e890_159_cache)
HXLINE( 161)		::haxe::Log_obj::trace(((HX_("LOADING: ",02,24,79,41) + this->toBeDone) + HX_(" OBJECTS.",1a,01,df,3a)),::hx::SourceInfo(HX_("source/Caching.hx",33,40,5a,66),161,HX_("Caching",df,bf,75,f0),HX_("cache",42,9a,14,41)));
HXLINE( 163)		{
HXLINE( 163)			int _g = 0;
HXDLIN( 163)			::Array< ::String > _g1 = this->characters;
HXDLIN( 163)			while((_g < _g1->length)){
HXLINE( 163)				::String i = _g1->__get(_g);
HXDLIN( 163)				_g = (_g + 1);
HXLINE( 165)				::String replaced = ::StringTools_obj::replace(i,HX_(".png",3b,2d,bd,1e),HX_("",00,00,00,00));
HXLINE( 166)				::String key = (HX_("characters/",45,3c,bf,be) + replaced);
HXDLIN( 166)				::String imagePath = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + key) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),HX_("shared",a5,5e,2b,1d));
HXLINE( 167)				::haxe::Log_obj::trace(((((HX_("Caching character graphic ",70,8f,24,c9) + replaced) + HX_(" (",08,1c,00,00)) + imagePath) + HX_(")...",65,cf,3c,1b)),::hx::SourceInfo(HX_("source/Caching.hx",33,40,5a,66),167,HX_("Caching",df,bf,75,f0),HX_("cache",42,9a,14,41)));
HXLINE( 168)				 ::openfl::display::BitmapData data = ::openfl::utils::Assets_obj::getBitmapData(imagePath,null());
HXLINE( 169)				 ::flixel::graphics::FlxGraphic graph = ::flixel::graphics::FlxGraphic_obj::fromBitmapData(data,null(),null(),null());
HXLINE( 170)				graph->persist = true;
HXLINE( 171)				::Caching_obj::bitmapData->set(replaced,graph);
HXLINE( 172)				this->done++;
            			}
            		}
HXLINE( 175)		{
HXLINE( 175)			int _g2 = 0;
HXDLIN( 175)			::Array< ::String > _g3 = this->songs;
HXDLIN( 175)			while((_g2 < _g3->length)){
HXLINE( 175)				::String i = _g3->__get(_g2);
HXDLIN( 175)				_g2 = (_g2 + 1);
HXLINE( 177)				::haxe::Log_obj::trace(((HX_("Caching song \"",38,01,79,0e) + i) + HX_("\"...",0c,51,9c,16)),::hx::SourceInfo(HX_("source/Caching.hx",33,40,5a,66),177,HX_("Caching",df,bf,75,f0),HX_("cache",42,9a,14,41)));
HXLINE( 178)				::String result = (((HX_("songs:assets/songs/",c1,ed,e6,7e) + i.toLowerCase()) + HX_("/Inst.",f9,6e,13,1c)) + HX_("ogg",4f,94,54,00));
HXDLIN( 178)				::String inst;
HXDLIN( 178)				if (::Paths_obj::doesSoundAssetExist(result)) {
HXLINE( 178)					inst = result;
            				}
            				else {
HXLINE( 178)					inst = null();
            				}
HXLINE( 179)				if (::Paths_obj::doesSoundAssetExist(inst)) {
HXLINE( 181)					{
HXLINE( 181)						 ::flixel::_hx_system::frontEnds::SoundFrontEnd _this = ::flixel::FlxG_obj::sound;
HXDLIN( 181)						bool _hx_tmp;
HXDLIN( 181)						if (!(::openfl::utils::Assets_obj::exists(inst,HX_("SOUND",af,c4,ba,fe)))) {
HXLINE( 181)							_hx_tmp = ::openfl::utils::Assets_obj::exists(inst,HX_("MUSIC",85,08,49,8e));
            						}
            						else {
HXLINE( 181)							_hx_tmp = true;
            						}
HXDLIN( 181)						if (_hx_tmp) {
HXLINE( 181)							::openfl::utils::Assets_obj::getSound(inst,true);
            						}
            					}
HXLINE( 182)					::haxe::Log_obj::trace(((HX_("Cached inst for song \"",4a,fd,13,92) + i) + HX_("\"",22,00,00,00)),::hx::SourceInfo(HX_("source/Caching.hx",33,40,5a,66),182,HX_("Caching",df,bf,75,f0),HX_("cache",42,9a,14,41)));
            				}
            				else {
HXLINE( 185)					::haxe::Log_obj::trace(((HX_("Failed to cache inst for song \"",c8,21,fd,25) + i) + HX_("\"",22,00,00,00)),::hx::SourceInfo(HX_("source/Caching.hx",33,40,5a,66),185,HX_("Caching",df,bf,75,f0),HX_("cache",42,9a,14,41)));
            				}
HXLINE( 187)				::String result1 = (((HX_("songs:assets/songs/",c1,ed,e6,7e) + i.toLowerCase()) + HX_("/Voices.",1e,f6,e5,90)) + HX_("ogg",4f,94,54,00));
HXDLIN( 187)				::String voices;
HXDLIN( 187)				if (::Paths_obj::doesSoundAssetExist(result1)) {
HXLINE( 187)					voices = result1;
            				}
            				else {
HXLINE( 187)					voices = null();
            				}
HXLINE( 188)				if (::Paths_obj::doesSoundAssetExist(voices)) {
HXLINE( 190)					{
HXLINE( 190)						 ::flixel::_hx_system::frontEnds::SoundFrontEnd _this = ::flixel::FlxG_obj::sound;
HXDLIN( 190)						bool _hx_tmp;
HXDLIN( 190)						if (!(::openfl::utils::Assets_obj::exists(voices,HX_("SOUND",af,c4,ba,fe)))) {
HXLINE( 190)							_hx_tmp = ::openfl::utils::Assets_obj::exists(voices,HX_("MUSIC",85,08,49,8e));
            						}
            						else {
HXLINE( 190)							_hx_tmp = true;
            						}
HXDLIN( 190)						if (_hx_tmp) {
HXLINE( 190)							::openfl::utils::Assets_obj::getSound(voices,true);
            						}
            					}
HXLINE( 191)					::haxe::Log_obj::trace(((HX_("Cached voices for song \"",ef,fa,a7,1f) + i) + HX_("\"",22,00,00,00)),::hx::SourceInfo(HX_("source/Caching.hx",33,40,5a,66),191,HX_("Caching",df,bf,75,f0),HX_("cache",42,9a,14,41)));
            				}
            				else {
HXLINE( 194)					::haxe::Log_obj::trace(((HX_("Failed to cache voices for song \"",ed,ba,81,5b) + i) + HX_("\"",22,00,00,00)),::hx::SourceInfo(HX_("source/Caching.hx",33,40,5a,66),194,HX_("Caching",df,bf,75,f0),HX_("cache",42,9a,14,41)));
            				}
HXLINE( 196)				this->done++;
            			}
            		}
HXLINE( 199)		{
HXLINE( 199)			int _g4 = 0;
HXDLIN( 199)			::Array< ::String > _g5 = this->music;
HXDLIN( 199)			while((_g4 < _g5->length)){
HXLINE( 199)				::String i = _g5->__get(_g4);
HXDLIN( 199)				_g4 = (_g4 + 1);
HXLINE( 201)				::String replaced = ::StringTools_obj::replace(i,HX_(".ogg",e1,64,bc,1e),HX_("",00,00,00,00));
HXLINE( 202)				::haxe::Log_obj::trace(((HX_("Caching music \"",a6,9a,91,ea) + replaced) + HX_("\"...",0c,51,9c,16)),::hx::SourceInfo(HX_("source/Caching.hx",33,40,5a,66),202,HX_("Caching",df,bf,75,f0),HX_("cache",42,9a,14,41)));
HXLINE( 203)				::String result = ::Paths_obj::getPath((((HX_("music/",ea,bf,1b,3f) + replaced) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)),HX_("MUSIC",85,08,49,8e),HX_("shared",a5,5e,2b,1d));
HXDLIN( 203)				::String music;
HXDLIN( 203)				if (::Paths_obj::doesSoundAssetExist(result)) {
HXLINE( 203)					music = result;
            				}
            				else {
HXLINE( 203)					music = null();
            				}
HXLINE( 204)				if (::Paths_obj::doesSoundAssetExist(music)) {
HXLINE( 206)					{
HXLINE( 206)						 ::flixel::_hx_system::frontEnds::SoundFrontEnd _this = ::flixel::FlxG_obj::sound;
HXDLIN( 206)						bool _hx_tmp;
HXDLIN( 206)						if (!(::openfl::utils::Assets_obj::exists(music,HX_("SOUND",af,c4,ba,fe)))) {
HXLINE( 206)							_hx_tmp = ::openfl::utils::Assets_obj::exists(music,HX_("MUSIC",85,08,49,8e));
            						}
            						else {
HXLINE( 206)							_hx_tmp = true;
            						}
HXDLIN( 206)						if (_hx_tmp) {
HXLINE( 206)							::openfl::utils::Assets_obj::getSound(music,true);
            						}
            					}
HXLINE( 207)					::haxe::Log_obj::trace(((HX_("Cached music \"",c9,09,d8,8b) + replaced) + HX_("\"",22,00,00,00)),::hx::SourceInfo(HX_("source/Caching.hx",33,40,5a,66),207,HX_("Caching",df,bf,75,f0),HX_("cache",42,9a,14,41)));
            				}
            				else {
HXLINE( 210)					::haxe::Log_obj::trace(((HX_("Failed to cache music \"",47,80,89,6d) + replaced) + HX_("\"",22,00,00,00)),::hx::SourceInfo(HX_("source/Caching.hx",33,40,5a,66),210,HX_("Caching",df,bf,75,f0),HX_("cache",42,9a,14,41)));
            				}
HXLINE( 212)				this->done++;
            			}
            		}
HXLINE( 215)		{
HXLINE( 215)			int _g6 = 0;
HXDLIN( 215)			::Array< ::String > _g7 = this->sounds;
HXDLIN( 215)			while((_g6 < _g7->length)){
HXLINE( 215)				::String i = _g7->__get(_g6);
HXDLIN( 215)				_g6 = (_g6 + 1);
HXLINE( 217)				::String replaced = ::StringTools_obj::replace(i,HX_(".ogg",e1,64,bc,1e),HX_("",00,00,00,00));
HXLINE( 218)				::haxe::Log_obj::trace(((HX_("Caching sound \"",50,35,0a,a8) + replaced) + HX_("\"...",0c,51,9c,16)),::hx::SourceInfo(HX_("source/Caching.hx",33,40,5a,66),218,HX_("Caching",df,bf,75,f0),HX_("cache",42,9a,14,41)));
HXLINE( 219)				::String sound = ::Paths_obj::sound(replaced,HX_("shared",a5,5e,2b,1d));
HXLINE( 220)				if (::Paths_obj::doesSoundAssetExist(sound)) {
HXLINE( 222)					{
HXLINE( 222)						 ::flixel::_hx_system::frontEnds::SoundFrontEnd _this = ::flixel::FlxG_obj::sound;
HXDLIN( 222)						bool _hx_tmp;
HXDLIN( 222)						if (!(::openfl::utils::Assets_obj::exists(sound,HX_("SOUND",af,c4,ba,fe)))) {
HXLINE( 222)							_hx_tmp = ::openfl::utils::Assets_obj::exists(sound,HX_("MUSIC",85,08,49,8e));
            						}
            						else {
HXLINE( 222)							_hx_tmp = true;
            						}
HXDLIN( 222)						if (_hx_tmp) {
HXLINE( 222)							::openfl::utils::Assets_obj::getSound(sound,true);
            						}
            					}
HXLINE( 223)					::haxe::Log_obj::trace(((HX_("Cached sound \"",73,a4,50,49) + replaced) + HX_("\"",22,00,00,00)),::hx::SourceInfo(HX_("source/Caching.hx",33,40,5a,66),223,HX_("Caching",df,bf,75,f0),HX_("cache",42,9a,14,41)));
            				}
            				else {
HXLINE( 226)					::haxe::Log_obj::trace(((HX_("Failed to cache sound \"",f1,1a,02,2b) + replaced) + HX_("\"",22,00,00,00)),::hx::SourceInfo(HX_("source/Caching.hx",33,40,5a,66),226,HX_("Caching",df,bf,75,f0),HX_("cache",42,9a,14,41)));
            				}
HXLINE( 228)				this->done++;
            			}
            		}
HXLINE( 231)		::haxe::Log_obj::trace(HX_("Finished caching!",90,b5,c3,59),::hx::SourceInfo(HX_("source/Caching.hx",33,40,5a,66),231,HX_("Caching",df,bf,75,f0),HX_("cache",42,9a,14,41)));
HXLINE( 234)		this->loaded = true;
HXLINE( 236)		if (::Caching_obj::afterBoot) {
HXLINE( 237)			 ::flixel::FlxState nextState =  ::MainMenuState_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 237)			if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 237)				::flixel::FlxG_obj::game->_requestedState = nextState;
            			}
            		}
            		else {
HXLINE( 240)			::Caching_obj::afterBoot = true;
HXLINE( 242)			if (!(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("funnyquestionpopup",bc,24,5f,b0),::hx::paccDynamic)) ))) {
HXLINE( 243)				 ::flixel::FlxState nextState =  ::FirstBootState_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 243)				if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 243)					::flixel::FlxG_obj::game->_requestedState = nextState;
            				}
            			}
            			else {
HXLINE( 245)				 ::flixel::FlxState nextState =  ::TitleState_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 245)				if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 245)					::flixel::FlxG_obj::game->_requestedState = nextState;
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Caching_obj,cache,(void))

 ::haxe::ds::StringMap Caching_obj::bitmapData;

bool Caching_obj::afterBoot;


::hx::ObjectPtr< Caching_obj > Caching_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< Caching_obj > __this = new Caching_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< Caching_obj > Caching_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	Caching_obj *__this = (Caching_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Caching_obj), true, "Caching"));
	*(void **)__this = Caching_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

Caching_obj::Caching_obj()
{
}

void Caching_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Caching);
	HX_MARK_MEMBER_NAME(toBeDone,"toBeDone");
	HX_MARK_MEMBER_NAME(done,"done");
	HX_MARK_MEMBER_NAME(loaded,"loaded");
	HX_MARK_MEMBER_NAME(text,"text");
	HX_MARK_MEMBER_NAME(disableText,"disableText");
	HX_MARK_MEMBER_NAME(kadeLogo,"kadeLogo");
	HX_MARK_MEMBER_NAME(characters,"characters");
	HX_MARK_MEMBER_NAME(songs,"songs");
	HX_MARK_MEMBER_NAME(music,"music");
	HX_MARK_MEMBER_NAME(sounds,"sounds");
	HX_MARK_MEMBER_NAME(calledDone,"calledDone");
	 ::MusicBeatState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Caching_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(toBeDone,"toBeDone");
	HX_VISIT_MEMBER_NAME(done,"done");
	HX_VISIT_MEMBER_NAME(loaded,"loaded");
	HX_VISIT_MEMBER_NAME(text,"text");
	HX_VISIT_MEMBER_NAME(disableText,"disableText");
	HX_VISIT_MEMBER_NAME(kadeLogo,"kadeLogo");
	HX_VISIT_MEMBER_NAME(characters,"characters");
	HX_VISIT_MEMBER_NAME(songs,"songs");
	HX_VISIT_MEMBER_NAME(music,"music");
	HX_VISIT_MEMBER_NAME(sounds,"sounds");
	HX_VISIT_MEMBER_NAME(calledDone,"calledDone");
	 ::MusicBeatState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Caching_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"done") ) { return ::hx::Val( done ); }
		if (HX_FIELD_EQ(inName,"text") ) { return ::hx::Val( text ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"songs") ) { return ::hx::Val( songs ); }
		if (HX_FIELD_EQ(inName,"music") ) { return ::hx::Val( music ); }
		if (HX_FIELD_EQ(inName,"cache") ) { return ::hx::Val( cache_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"loaded") ) { return ::hx::Val( loaded ); }
		if (HX_FIELD_EQ(inName,"sounds") ) { return ::hx::Val( sounds ); }
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toBeDone") ) { return ::hx::Val( toBeDone ); }
		if (HX_FIELD_EQ(inName,"kadeLogo") ) { return ::hx::Val( kadeLogo ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"characters") ) { return ::hx::Val( characters ); }
		if (HX_FIELD_EQ(inName,"calledDone") ) { return ::hx::Val( calledDone ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"disableText") ) { return ::hx::Val( disableText ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Caching_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"afterBoot") ) { outValue = ( afterBoot ); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapData") ) { outValue = ( bitmapData ); return true; }
	}
	return false;
}

::hx::Val Caching_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"done") ) { done=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"text") ) { text=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"songs") ) { songs=inValue.Cast< ::Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"music") ) { music=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"loaded") ) { loaded=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sounds") ) { sounds=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toBeDone") ) { toBeDone=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kadeLogo") ) { kadeLogo=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"characters") ) { characters=inValue.Cast< ::Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"calledDone") ) { calledDone=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"disableText") ) { disableText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Caching_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"afterBoot") ) { afterBoot=ioValue.Cast< bool >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapData") ) { bitmapData=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

void Caching_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("toBeDone",c0,b7,f7,aa));
	outFields->push(HX_("done",82,f0,6d,42));
	outFields->push(HX_("loaded",05,48,6f,58));
	outFields->push(HX_("text",ad,cc,f9,4c));
	outFields->push(HX_("disableText",b5,76,0a,1d));
	outFields->push(HX_("kadeLogo",a2,29,71,ff));
	outFields->push(HX_("characters",aa,58,ce,55));
	outFields->push(HX_("songs",fe,36,c7,80));
	outFields->push(HX_("music",a5,d0,5a,10));
	outFields->push(HX_("sounds",c4,a8,2e,32));
	outFields->push(HX_("calledDone",9f,f3,ff,19));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Caching_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(Caching_obj,toBeDone),HX_("toBeDone",c0,b7,f7,aa)},
	{::hx::fsInt,(int)offsetof(Caching_obj,done),HX_("done",82,f0,6d,42)},
	{::hx::fsBool,(int)offsetof(Caching_obj,loaded),HX_("loaded",05,48,6f,58)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(Caching_obj,text),HX_("text",ad,cc,f9,4c)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(Caching_obj,disableText),HX_("disableText",b5,76,0a,1d)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(Caching_obj,kadeLogo),HX_("kadeLogo",a2,29,71,ff)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(Caching_obj,characters),HX_("characters",aa,58,ce,55)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(Caching_obj,songs),HX_("songs",fe,36,c7,80)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(Caching_obj,music),HX_("music",a5,d0,5a,10)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(Caching_obj,sounds),HX_("sounds",c4,a8,2e,32)},
	{::hx::fsBool,(int)offsetof(Caching_obj,calledDone),HX_("calledDone",9f,f3,ff,19)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Caching_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &Caching_obj::bitmapData,HX_("bitmapData",b9,b5,c0,33)},
	{::hx::fsBool,(void *) &Caching_obj::afterBoot,HX_("afterBoot",6e,54,fa,c0)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Caching_obj_sMemberFields[] = {
	HX_("toBeDone",c0,b7,f7,aa),
	HX_("done",82,f0,6d,42),
	HX_("loaded",05,48,6f,58),
	HX_("text",ad,cc,f9,4c),
	HX_("disableText",b5,76,0a,1d),
	HX_("kadeLogo",a2,29,71,ff),
	HX_("characters",aa,58,ce,55),
	HX_("songs",fe,36,c7,80),
	HX_("music",a5,d0,5a,10),
	HX_("sounds",c4,a8,2e,32),
	HX_("create",fc,66,0f,7c),
	HX_("calledDone",9f,f3,ff,19),
	HX_("update",09,86,05,87),
	HX_("cache",42,9a,14,41),
	::String(null()) };

static void Caching_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Caching_obj::bitmapData,"bitmapData");
	HX_MARK_MEMBER_NAME(Caching_obj::afterBoot,"afterBoot");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Caching_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Caching_obj::bitmapData,"bitmapData");
	HX_VISIT_MEMBER_NAME(Caching_obj::afterBoot,"afterBoot");
};

#endif

::hx::Class Caching_obj::__mClass;

static ::String Caching_obj_sStaticFields[] = {
	HX_("bitmapData",b9,b5,c0,33),
	HX_("afterBoot",6e,54,fa,c0),
	::String(null())
};

void Caching_obj::__register()
{
	Caching_obj _hx_dummy;
	Caching_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Caching",df,bf,75,f0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Caching_obj::__GetStatic;
	__mClass->mSetStaticField = &Caching_obj::__SetStatic;
	__mClass->mMarkFunc = Caching_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Caching_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Caching_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Caching_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Caching_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Caching_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Caching_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Caching_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_30a7a61d6603e890_29_boot)
HXDLIN(  29)		afterBoot = false;
            	}
}

