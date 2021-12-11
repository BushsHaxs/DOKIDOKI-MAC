#include <hxcpp.h>

#ifndef INCLUDED_Character
#include <Character.h>
#endif
#ifndef INCLUDED_Conductor
#include <Conductor.h>
#endif
#ifndef INCLUDED_CoolUtil
#include <CoolUtil.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
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
#ifndef INCLUDED_flixel_addons_ui_FlxUIState
#include <flixel/addons/ui/FlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#include <flixel/addons/ui/interfaces/IFlxUIState.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimation
#include <flixel/animation/FlxAnimation.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxBaseAnimation
#include <flixel/animation/FlxBaseAnimation.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
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
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ae240c01d039da8e_10_new,"Character","new",0x74bf54fb,"Character.new","Character.hx",10,0xf073a2d5)
static const int _hx_array_data_e3a4bb89_2[] = {
	(int)11,(int)12,
};
static const int _hx_array_data_e3a4bb89_3[] = {
	(int)0,(int)1,(int)2,(int)3,(int)4,(int)5,(int)6,(int)7,(int)8,(int)9,(int)10,(int)11,(int)12,
};
static const int _hx_array_data_e3a4bb89_4[] = {
	(int)30,(int)0,(int)1,(int)2,(int)3,(int)4,(int)5,(int)6,(int)7,(int)8,(int)9,(int)10,(int)11,(int)12,(int)13,(int)14,
};
static const int _hx_array_data_e3a4bb89_5[] = {
	(int)15,(int)16,(int)17,(int)18,(int)19,(int)20,(int)21,(int)22,(int)23,(int)24,(int)25,(int)26,(int)27,(int)28,(int)29,
};
static const int _hx_array_data_e3a4bb89_6[] = {
	(int)0,(int)1,(int)2,(int)3,
};
static const int _hx_array_data_e3a4bb89_7[] = {
	(int)0,(int)1,(int)2,(int)3,(int)4,(int)5,(int)6,(int)7,(int)8,(int)9,(int)10,(int)11,
};
static const int _hx_array_data_e3a4bb89_8[] = {
	(int)2,
};
static const int _hx_array_data_e3a4bb89_9[] = {
	(int)30,(int)0,(int)1,(int)2,(int)3,(int)4,(int)5,(int)6,(int)7,(int)8,(int)9,(int)10,(int)11,(int)12,(int)13,(int)14,
};
static const int _hx_array_data_e3a4bb89_10[] = {
	(int)15,(int)16,(int)17,(int)18,(int)19,(int)20,(int)21,(int)22,(int)23,(int)24,(int)25,(int)26,(int)27,(int)28,(int)29,
};
static const int _hx_array_data_e3a4bb89_11[] = {
	(int)2,
};
static const int _hx_array_data_e3a4bb89_12[] = {
	(int)30,(int)0,(int)1,(int)2,(int)3,(int)4,(int)5,(int)6,(int)7,(int)8,(int)9,(int)10,(int)11,(int)12,(int)13,(int)14,
};
static const int _hx_array_data_e3a4bb89_13[] = {
	(int)15,(int)16,(int)17,(int)18,(int)19,(int)20,(int)21,(int)22,(int)23,(int)24,(int)25,(int)26,(int)27,(int)28,(int)29,
};
static const int _hx_array_data_e3a4bb89_14[] = {
	(int)0,(int)1,(int)2,(int)3,(int)4,(int)5,(int)6,(int)7,(int)8,(int)9,(int)10,(int)11,(int)12,
};
static const int _hx_array_data_e3a4bb89_15[] = {
	(int)30,(int)0,(int)1,(int)2,(int)3,(int)4,(int)5,(int)6,(int)7,(int)8,(int)9,(int)10,(int)11,(int)12,(int)13,(int)14,
};
static const int _hx_array_data_e3a4bb89_16[] = {
	(int)15,(int)16,(int)17,(int)18,(int)19,(int)20,(int)21,(int)22,(int)23,(int)24,(int)25,(int)26,(int)27,(int)28,(int)29,
};
static const int _hx_array_data_e3a4bb89_17[] = {
	(int)0,(int)1,(int)2,(int)3,(int)4,(int)5,(int)6,
};
static const int _hx_array_data_e3a4bb89_18[] = {
	(int)7,(int)8,(int)9,(int)10,(int)11,(int)12,(int)13,(int)14,(int)15,
};
static const int _hx_array_data_e3a4bb89_19[] = {
	(int)16,(int)17,(int)18,(int)19,(int)20,(int)21,(int)22,(int)23,
};
static const int _hx_array_data_e3a4bb89_20[] = {
	(int)24,(int)25,(int)26,(int)27,(int)28,(int)29,(int)30,(int)31,(int)32,(int)33,(int)34,
};
static const int _hx_array_data_e3a4bb89_21[] = {
	(int)2,
};
static const int _hx_array_data_e3a4bb89_22[] = {
	(int)30,(int)0,(int)1,(int)2,(int)3,(int)4,(int)5,(int)6,(int)7,(int)8,(int)9,(int)10,(int)11,(int)12,(int)13,(int)14,
};
static const int _hx_array_data_e3a4bb89_23[] = {
	(int)15,(int)16,(int)17,(int)18,(int)19,(int)20,(int)21,(int)22,(int)23,(int)24,(int)25,(int)26,(int)27,(int)28,(int)29,
};
static const int _hx_array_data_e3a4bb89_24[] = {
	(int)25,(int)0,(int)1,(int)2,(int)3,(int)4,(int)5,(int)6,(int)7,(int)8,(int)9,(int)10,(int)11,(int)12,
};
static const int _hx_array_data_e3a4bb89_25[] = {
	(int)13,(int)14,(int)15,(int)16,(int)17,(int)18,(int)19,(int)20,(int)21,(int)22,(int)23,(int)24,
};
HX_LOCAL_STACK_FRAME(_hx_pos_ae240c01d039da8e_531_loadOffsetFile,"Character","loadOffsetFile",0x3766bcba,"Character.loadOffsetFile","Character.hx",531,0xf073a2d5)
HX_LOCAL_STACK_FRAME(_hx_pos_ae240c01d039da8e_542_update,"Character","update",0x0e18944e,"Character.update","Character.hx",542,0xf073a2d5)
HX_LOCAL_STACK_FRAME(_hx_pos_ae240c01d039da8e_584_dance,"Character","dance",0xde4da48e,"Character.dance","Character.hx",584,0xf073a2d5)
HX_LOCAL_STACK_FRAME(_hx_pos_ae240c01d039da8e_631_playAnim,"Character","playAnim",0xed2bd3aa,"Character.playAnim","Character.hx",631,0xf073a2d5)
HX_LOCAL_STACK_FRAME(_hx_pos_ae240c01d039da8e_670_addOffset,"Character","addOffset",0x6dc9376f,"Character.addOffset","Character.hx",670,0xf073a2d5)

void Character_obj::__construct(Float x,Float y,::String __o_character, ::Dynamic __o_isPlayer){
            		::String character = __o_character;
            		if (::hx::IsNull(__o_character)) character = HX_("bf",c4,55,00,00);
            		 ::Dynamic isPlayer = __o_isPlayer;
            		if (::hx::IsNull(__o_isPlayer)) isPlayer = false;
            	HX_GC_STACKFRAME(&_hx_pos_ae240c01d039da8e_10_new)
HXLINE( 578)		this->danced = false;
HXLINE(  18)		this->holdTimer = ((Float)0);
HXLINE(  16)		this->curCharacter = HX_("bf",c4,55,00,00);
HXLINE(  15)		this->isPlayer = false;
HXLINE(  13)		this->debugMode = false;
HXLINE(  22)		super::__construct(x,y,null());
HXLINE(  24)		this->animOffsets =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  25)		this->curCharacter = character;
HXLINE(  26)		this->isPlayer = ( (bool)(isPlayer) );
HXLINE(  28)		 ::flixel::graphics::frames::FlxAtlasFrames tex;
HXLINE(  29)		this->set_antialiasing(true);
HXLINE(  31)		::String _hx_switch_0 = this->curCharacter;
            		if (  (_hx_switch_0==HX_("bf",c4,55,00,00)) ){
HXLINE( 130)			::String library = null();
HXDLIN( 130)			bool isLocale = false;
HXDLIN( 130)			 ::flixel::graphics::frames::FlxAtlasFrames tex;
HXDLIN( 130)			if (isLocale) {
HXLINE( 130)				if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("characters/BOYFRIEND",65,2c,9c,1b)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library),null())) {
HXLINE( 130)					 ::flixel::graphics::FlxGraphic tex1 = ::Paths_obj::loadImage(HX_("characters/BOYFRIEND",65,2c,9c,1b),library,isLocale);
HXDLIN( 130)					tex = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex1,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("characters/BOYFRIEND",65,2c,9c,1b)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library));
            				}
            				else {
HXLINE( 130)					 ::flixel::graphics::FlxGraphic tex1 = ::Paths_obj::loadImage(HX_("characters/BOYFRIEND",65,2c,9c,1b),library,isLocale);
HXDLIN( 130)					tex = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex1,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("characters/BOYFRIEND",65,2c,9c,1b)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
            				}
            			}
            			else {
HXLINE( 130)				 ::flixel::graphics::FlxGraphic tex1 = ::Paths_obj::loadImage(HX_("characters/BOYFRIEND",65,2c,9c,1b),library,null());
HXDLIN( 130)				tex = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex1,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/BOYFRIEND",65,2c,9c,1b)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
            			}
HXLINE( 131)			this->set_frames(tex);
HXLINE( 132)			this->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("BF idle dance",03,fa,cc,7f),24,false,null(),null());
HXLINE( 133)			this->animation->addByPrefix(HX_("singUP",6a,52,21,b9),HX_("BF NOTE UP0",23,e8,67,d4),24,false,null(),null());
HXLINE( 134)			this->animation->addByPrefix(HX_("singLEFT",d6,39,ef,3b),HX_("BF NOTE LEFT0",77,e0,7c,76),24,false,null(),null());
HXLINE( 135)			this->animation->addByPrefix(HX_("singRIGHT",0d,6f,70,ac),HX_("BF NOTE RIGHT0",06,3f,26,eb),24,false,null(),null());
HXLINE( 136)			this->animation->addByPrefix(HX_("singDOWN",31,2a,ad,36),HX_("BF NOTE DOWN0",bc,3f,f1,e1),24,false,null(),null());
HXLINE( 137)			this->animation->addByPrefix(HX_("singUPmiss",66,22,08,8a),HX_("BF NOTE UP MISS",8f,08,36,ae),24,false,null(),null());
HXLINE( 138)			this->animation->addByPrefix(HX_("singLEFTmiss",d2,2f,9c,b6),HX_("BF NOTE LEFT MISS",e3,ba,cf,a7),24,false,null(),null());
HXLINE( 139)			this->animation->addByPrefix(HX_("singRIGHTmiss",89,cc,65,e3),HX_("BF NOTE RIGHT MISS",f2,0c,cd,25),24,false,null(),null());
HXLINE( 140)			this->animation->addByPrefix(HX_("singDOWNmiss",ad,e9,88,e4),HX_("BF NOTE DOWN MISS",a8,a0,05,a9),24,false,null(),null());
HXLINE( 141)			this->animation->addByPrefix(HX_("hey",dc,42,4f,00),HX_("BF HEY",60,1e,f8,c6),24,false,null(),null());
HXLINE( 143)			this->animation->addByPrefix(HX_("firstDeath",e4,d8,fc,14),HX_("BF dies",0f,cb,bf,64),24,false,null(),null());
HXLINE( 144)			this->animation->addByPrefix(HX_("deathLoop",b8,0b,79,2e),HX_("BF Dead Loop",04,f4,36,2f),24,true,null(),null());
HXLINE( 145)			this->animation->addByPrefix(HX_("deathConfirm",2c,44,2b,12),HX_("BF Dead confirm",80,6b,f9,23),24,false,null(),null());
HXLINE( 147)			this->animation->addByPrefix(HX_("scared",20,78,2a,3c),HX_("BF idle shaking",53,d0,da,8d),24,null(),null(),null());
HXLINE( 149)			this->loadOffsetFile(this->curCharacter);
HXLINE( 151)			this->playAnim(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 153)			this->set_flipX(true);
HXLINE( 129)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("bf-doki",52,4c,14,df)) ){
HXLINE( 156)			::String library = null();
HXDLIN( 156)			bool isLocale = false;
HXDLIN( 156)			 ::flixel::graphics::frames::FlxAtlasFrames tex;
HXDLIN( 156)			if (isLocale) {
HXLINE( 156)				if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("characters/DDLCBoyFriend_Assets",d4,0a,94,01)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library),null())) {
HXLINE( 156)					 ::flixel::graphics::FlxGraphic tex1 = ::Paths_obj::loadImage(HX_("characters/DDLCBoyFriend_Assets",d4,0a,94,01),library,isLocale);
HXDLIN( 156)					tex = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex1,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("characters/DDLCBoyFriend_Assets",d4,0a,94,01)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library));
            				}
            				else {
HXLINE( 156)					 ::flixel::graphics::FlxGraphic tex1 = ::Paths_obj::loadImage(HX_("characters/DDLCBoyFriend_Assets",d4,0a,94,01),library,isLocale);
HXDLIN( 156)					tex = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex1,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("characters/DDLCBoyFriend_Assets",d4,0a,94,01)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
            				}
            			}
            			else {
HXLINE( 156)				 ::flixel::graphics::FlxGraphic tex1 = ::Paths_obj::loadImage(HX_("characters/DDLCBoyFriend_Assets",d4,0a,94,01),library,null());
HXDLIN( 156)				tex = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex1,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/DDLCBoyFriend_Assets",d4,0a,94,01)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
            			}
HXLINE( 157)			this->set_frames(tex);
HXLINE( 158)			this->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("BF idle dance",03,fa,cc,7f),24,false,null(),null());
HXLINE( 159)			this->animation->addByPrefix(HX_("singUP",6a,52,21,b9),HX_("BF NOTE UP0",23,e8,67,d4),24,false,null(),null());
HXLINE( 160)			this->animation->addByPrefix(HX_("singLEFT",d6,39,ef,3b),HX_("BF NOTE LEFT0",77,e0,7c,76),24,false,null(),null());
HXLINE( 161)			this->animation->addByPrefix(HX_("singRIGHT",0d,6f,70,ac),HX_("BF NOTE RIGHT0",06,3f,26,eb),24,false,null(),null());
HXLINE( 162)			this->animation->addByPrefix(HX_("singDOWN",31,2a,ad,36),HX_("BF NOTE DOWN0",bc,3f,f1,e1),24,false,null(),null());
HXLINE( 163)			this->animation->addByPrefix(HX_("singUPmiss",66,22,08,8a),HX_("BF NOTE UP MISS",8f,08,36,ae),24,false,null(),null());
HXLINE( 164)			this->animation->addByPrefix(HX_("singLEFTmiss",d2,2f,9c,b6),HX_("BF NOTE LEFT MISS",e3,ba,cf,a7),24,false,null(),null());
HXLINE( 165)			this->animation->addByPrefix(HX_("singRIGHTmiss",89,cc,65,e3),HX_("BF NOTE RIGHT MISS",f2,0c,cd,25),24,false,null(),null());
HXLINE( 166)			this->animation->addByPrefix(HX_("singDOWNmiss",ad,e9,88,e4),HX_("BF NOTE DOWN MISS",a8,a0,05,a9),24,false,null(),null());
HXLINE( 168)			this->animation->addByPrefix(HX_("scared",20,78,2a,3c),HX_("BF idle shaking",53,d0,da,8d),24,null(),null(),null());
HXLINE( 170)			this->loadOffsetFile(this->curCharacter);
HXLINE( 172)			this->playAnim(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 174)			this->set_flipX(true);
HXLINE( 155)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("bf-pixel",fd,03,90,37)) ){
HXLINE( 177)			::String library = null();
HXDLIN( 177)			bool isLocale = false;
HXDLIN( 177)			 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp;
HXDLIN( 177)			if (isLocale) {
HXLINE( 177)				if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("characters/bfPixel",7d,80,e8,6d)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library),null())) {
HXLINE( 177)					 ::flixel::graphics::FlxGraphic _hx_tmp1 = ::Paths_obj::loadImage(HX_("characters/bfPixel",7d,80,e8,6d),library,isLocale);
HXDLIN( 177)					_hx_tmp = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp1,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("characters/bfPixel",7d,80,e8,6d)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library));
            				}
            				else {
HXLINE( 177)					 ::flixel::graphics::FlxGraphic _hx_tmp1 = ::Paths_obj::loadImage(HX_("characters/bfPixel",7d,80,e8,6d),library,isLocale);
HXDLIN( 177)					_hx_tmp = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp1,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("characters/bfPixel",7d,80,e8,6d)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
            				}
            			}
            			else {
HXLINE( 177)				 ::flixel::graphics::FlxGraphic _hx_tmp1 = ::Paths_obj::loadImage(HX_("characters/bfPixel",7d,80,e8,6d),library,null());
HXDLIN( 177)				_hx_tmp = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp1,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/bfPixel",7d,80,e8,6d)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
            			}
HXDLIN( 177)			this->set_frames(_hx_tmp);
HXLINE( 178)			this->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("BF IDLE",f0,de,ca,52),24,false,null(),null());
HXLINE( 179)			this->animation->addByPrefix(HX_("singUP",6a,52,21,b9),HX_("BF UP NOTE",7b,9d,4e,d3),24,false,null(),null());
HXLINE( 180)			this->animation->addByPrefix(HX_("singLEFT",d6,39,ef,3b),HX_("BF LEFT NOTE",4f,b9,34,d9),24,false,null(),null());
HXLINE( 181)			this->animation->addByPrefix(HX_("singRIGHT",0d,6f,70,ac),HX_("BF RIGHT NOTE",b2,df,15,96),24,false,null(),null());
HXLINE( 182)			this->animation->addByPrefix(HX_("singDOWN",31,2a,ad,36),HX_("BF DOWN NOTE",14,9f,6a,da),24,false,null(),null());
HXLINE( 183)			this->animation->addByPrefix(HX_("singUPmiss",66,22,08,8a),HX_("BF UP MISS",85,d8,a0,d2),24,false,null(),null());
HXLINE( 184)			this->animation->addByPrefix(HX_("singLEFTmiss",d2,2f,9c,b6),HX_("BF LEFT MISS",59,f4,86,d8),24,false,null(),null());
HXLINE( 185)			this->animation->addByPrefix(HX_("singRIGHTmiss",89,cc,65,e3),HX_("BF RIGHT MISS",bc,1a,68,95),24,false,null(),null());
HXLINE( 186)			this->animation->addByPrefix(HX_("singDOWNmiss",ad,e9,88,e4),HX_("BF DOWN MISS",1e,da,bc,d9),24,false,null(),null());
HXLINE( 187)			this->animation->addByPrefix(HX_("peaceSIGN",ab,9d,08,90),HX_("BF PEACE",f2,1e,27,27),24,false,null(),null());
HXLINE( 189)			this->loadOffsetFile(this->curCharacter);
HXLINE( 191)			this->setGraphicSize(::Std_obj::_hx_int((this->get_width() * ( (Float)(6) ))),null());
HXLINE( 192)			this->updateHitbox();
HXLINE( 194)			this->playAnim(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 196)			this->set_width((this->get_width() - ( (Float)(100) )));
HXLINE( 197)			this->set_height((this->get_height() - ( (Float)(100) )));
HXLINE( 199)			this->set_antialiasing(false);
HXLINE( 201)			this->set_flipX(true);
HXLINE( 176)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("bf-pixel-dead",34,d0,3d,c4)) ){
HXLINE( 230)			::String library = null();
HXDLIN( 230)			bool isLocale = false;
HXDLIN( 230)			 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp;
HXDLIN( 230)			if (isLocale) {
HXLINE( 230)				if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("characters/bfPixelsDEAD",fa,66,1f,36)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library),null())) {
HXLINE( 230)					 ::flixel::graphics::FlxGraphic _hx_tmp1 = ::Paths_obj::loadImage(HX_("characters/bfPixelsDEAD",fa,66,1f,36),library,isLocale);
HXDLIN( 230)					_hx_tmp = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp1,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("characters/bfPixelsDEAD",fa,66,1f,36)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library));
            				}
            				else {
HXLINE( 230)					 ::flixel::graphics::FlxGraphic _hx_tmp1 = ::Paths_obj::loadImage(HX_("characters/bfPixelsDEAD",fa,66,1f,36),library,isLocale);
HXDLIN( 230)					_hx_tmp = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp1,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("characters/bfPixelsDEAD",fa,66,1f,36)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
            				}
            			}
            			else {
HXLINE( 230)				 ::flixel::graphics::FlxGraphic _hx_tmp1 = ::Paths_obj::loadImage(HX_("characters/bfPixelsDEAD",fa,66,1f,36),library,null());
HXDLIN( 230)				_hx_tmp = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp1,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/bfPixelsDEAD",fa,66,1f,36)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
            			}
HXDLIN( 230)			this->set_frames(_hx_tmp);
HXLINE( 231)			this->animation->addByPrefix(HX_("singUP",6a,52,21,b9),HX_("BF Dies pixel",d5,56,ac,77),24,false,null(),null());
HXLINE( 232)			this->animation->addByPrefix(HX_("firstDeath",e4,d8,fc,14),HX_("BF Dies pixel",d5,56,ac,77),24,false,null(),null());
HXLINE( 233)			this->animation->addByPrefix(HX_("deathLoop",b8,0b,79,2e),HX_("Retry Loop",5c,76,15,41),24,true,null(),null());
HXLINE( 234)			this->animation->addByPrefix(HX_("deathConfirm",2c,44,2b,12),HX_("RETRY CONFIRM",08,8c,5f,fd),24,false,null(),null());
HXLINE( 235)			this->animation->play(HX_("firstDeath",e4,d8,fc,14),null(),null(),null());
HXLINE( 237)			this->loadOffsetFile(this->curCharacter);
HXLINE( 239)			this->playAnim(HX_("firstDeath",e4,d8,fc,14),null(),null(),null());
HXLINE( 241)			this->setGraphicSize(::Std_obj::_hx_int((this->get_width() * ( (Float)(6) ))),null());
HXLINE( 242)			this->updateHitbox();
HXLINE( 243)			this->set_antialiasing(false);
HXLINE( 244)			this->set_flipX(true);
HXLINE( 229)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("bf-pixelangry",04,b0,b1,bb)) ){
HXLINE( 204)			::String library = null();
HXDLIN( 204)			bool isLocale = false;
HXDLIN( 204)			 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp;
HXDLIN( 204)			if (isLocale) {
HXLINE( 204)				if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("characters/bfPixelangry",84,e3,c5,f4)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library),null())) {
HXLINE( 204)					 ::flixel::graphics::FlxGraphic _hx_tmp1 = ::Paths_obj::loadImage(HX_("characters/bfPixelangry",84,e3,c5,f4),library,isLocale);
HXDLIN( 204)					_hx_tmp = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp1,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("characters/bfPixelangry",84,e3,c5,f4)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library));
            				}
            				else {
HXLINE( 204)					 ::flixel::graphics::FlxGraphic _hx_tmp1 = ::Paths_obj::loadImage(HX_("characters/bfPixelangry",84,e3,c5,f4),library,isLocale);
HXDLIN( 204)					_hx_tmp = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp1,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("characters/bfPixelangry",84,e3,c5,f4)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
            				}
            			}
            			else {
HXLINE( 204)				 ::flixel::graphics::FlxGraphic _hx_tmp1 = ::Paths_obj::loadImage(HX_("characters/bfPixelangry",84,e3,c5,f4),library,null());
HXDLIN( 204)				_hx_tmp = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp1,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/bfPixelangry",84,e3,c5,f4)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
            			}
HXDLIN( 204)			this->set_frames(_hx_tmp);
HXLINE( 205)			this->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("BF IDLE",f0,de,ca,52),24,false,null(),null());
HXLINE( 206)			this->animation->addByPrefix(HX_("singUP",6a,52,21,b9),HX_("BF UP NOTE",7b,9d,4e,d3),24,false,null(),null());
HXLINE( 207)			this->animation->addByPrefix(HX_("singLEFT",d6,39,ef,3b),HX_("BF LEFT NOTE",4f,b9,34,d9),24,false,null(),null());
HXLINE( 208)			this->animation->addByPrefix(HX_("singRIGHT",0d,6f,70,ac),HX_("BF RIGHT NOTE",b2,df,15,96),24,false,null(),null());
HXLINE( 209)			this->animation->addByPrefix(HX_("singDOWN",31,2a,ad,36),HX_("BF DOWN NOTE",14,9f,6a,da),24,false,null(),null());
HXLINE( 210)			this->animation->addByPrefix(HX_("singUPmiss",66,22,08,8a),HX_("BF UP MISS",85,d8,a0,d2),24,false,null(),null());
HXLINE( 211)			this->animation->addByPrefix(HX_("singLEFTmiss",d2,2f,9c,b6),HX_("BF LEFT MISS",59,f4,86,d8),24,false,null(),null());
HXLINE( 212)			this->animation->addByPrefix(HX_("singRIGHTmiss",89,cc,65,e3),HX_("BF RIGHT MISS",bc,1a,68,95),24,false,null(),null());
HXLINE( 213)			this->animation->addByPrefix(HX_("singDOWNmiss",ad,e9,88,e4),HX_("BF DOWN MISS",1e,da,bc,d9),24,false,null(),null());
HXLINE( 215)			this->loadOffsetFile(this->curCharacter);
HXLINE( 217)			this->setGraphicSize(::Std_obj::_hx_int((this->get_width() * ( (Float)(6) ))),null());
HXLINE( 218)			this->updateHitbox();
HXLINE( 220)			this->playAnim(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 222)			this->set_width((this->get_width() - ( (Float)(100) )));
HXLINE( 223)			this->set_height((this->get_height() - ( (Float)(100) )));
HXLINE( 225)			this->set_antialiasing(false);
HXLINE( 227)			this->set_flipX(true);
HXLINE( 203)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("bigmonika",b3,03,a4,b8)) ){
HXLINE( 477)			::String library = null();
HXDLIN( 477)			bool isLocale = false;
HXDLIN( 477)			 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp;
HXDLIN( 477)			if (isLocale) {
HXLINE( 477)				if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("characters/big_monikia_base",8e,65,97,26)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library),null())) {
HXLINE( 477)					 ::flixel::graphics::FlxGraphic _hx_tmp1 = ::Paths_obj::loadImage(HX_("characters/big_monikia_base",8e,65,97,26),library,isLocale);
HXDLIN( 477)					_hx_tmp = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp1,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("characters/big_monikia_base",8e,65,97,26)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library));
            				}
            				else {
HXLINE( 477)					 ::flixel::graphics::FlxGraphic _hx_tmp1 = ::Paths_obj::loadImage(HX_("characters/big_monikia_base",8e,65,97,26),library,isLocale);
HXDLIN( 477)					_hx_tmp = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp1,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("characters/big_monikia_base",8e,65,97,26)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
            				}
            			}
            			else {
HXLINE( 477)				 ::flixel::graphics::FlxGraphic _hx_tmp1 = ::Paths_obj::loadImage(HX_("characters/big_monikia_base",8e,65,97,26),library,null());
HXDLIN( 477)				_hx_tmp = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp1,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/big_monikia_base",8e,65,97,26)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
            			}
HXDLIN( 477)			this->set_frames(_hx_tmp);
HXLINE( 478)			this->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("Big Monika Idle",e1,c3,68,8e),24,false,null(),null());
HXLINE( 479)			this->animation->addByPrefix(HX_("singUP",6a,52,21,b9),HX_("Big Monika Up",e8,c5,34,cb),24,false,null(),null());
HXLINE( 480)			this->animation->addByPrefix(HX_("singDOWN",31,2a,ad,36),HX_("Big Monika Down",2f,15,23,8b),24,false,null(),null());
HXLINE( 481)			this->animation->addByPrefix(HX_("singLEFT",d6,39,ef,3b),HX_("Big Monika Left",d4,24,65,90),24,false,null(),null());
HXLINE( 482)			this->animation->addByPrefix(HX_("singRIGHT",0d,6f,70,ac),HX_("Big Monika Right",6f,22,28,3f),24,false,null(),null());
HXLINE( 483)			this->animation->addByPrefix(HX_("lastNOTE",48,cd,3a,dc),HX_("Big Monika Last Note",2f,ee,a3,56),24,false,null(),null());
HXLINE( 485)			this->loadOffsetFile(this->curCharacter);
HXLINE( 487)			this->playAnim(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 488)			this->updateHitbox();
HXLINE( 476)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("bigmonika-dead",be,1c,41,44)) ){
HXLINE( 490)			::String library = null();
HXDLIN( 490)			bool isLocale = false;
HXDLIN( 490)			 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp;
HXDLIN( 490)			if (isLocale) {
HXLINE( 490)				if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("characters/big_monikia_death",17,df,45,c7)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library),null())) {
HXLINE( 490)					 ::flixel::graphics::FlxGraphic _hx_tmp1 = ::Paths_obj::loadImage(HX_("characters/big_monikia_death",17,df,45,c7),library,isLocale);
HXDLIN( 490)					_hx_tmp = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp1,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("characters/big_monikia_death",17,df,45,c7)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library));
            				}
            				else {
HXLINE( 490)					 ::flixel::graphics::FlxGraphic _hx_tmp1 = ::Paths_obj::loadImage(HX_("characters/big_monikia_death",17,df,45,c7),library,isLocale);
HXDLIN( 490)					_hx_tmp = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp1,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("characters/big_monikia_death",17,df,45,c7)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
            				}
            			}
            			else {
HXLINE( 490)				 ::flixel::graphics::FlxGraphic _hx_tmp1 = ::Paths_obj::loadImage(HX_("characters/big_monikia_death",17,df,45,c7),library,null());
HXDLIN( 490)				_hx_tmp = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp1,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/big_monikia_death",17,df,45,c7)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
            			}
HXDLIN( 490)			this->set_frames(_hx_tmp);
HXLINE( 491)			this->animation->addByPrefix(HX_("singUP",6a,52,21,b9),HX_("Big Monika Retry Start",5d,cc,5c,92),24,false,null(),null());
HXLINE( 492)			this->animation->addByPrefix(HX_("firstDeath",e4,d8,fc,14),HX_("Big Monika Retry Start",5d,cc,5c,92),24,false,null(),null());
HXLINE( 493)			this->animation->addByPrefix(HX_("deathLoop",b8,0b,79,2e),HX_("Big Monika Retry Loop",c9,a6,86,2e),24,true,null(),null());
HXLINE( 494)			this->animation->addByPrefix(HX_("deathConfirm",2c,44,2b,12),HX_("Big Monika Retry End",16,d7,16,aa),24,false,null(),null());
HXLINE( 495)			this->animation->addByPrefix(HX_("crashDeath",cd,39,f8,a5),HX_("Big Monika SCARY",6b,b2,53,b9),24,false,null(),null());
HXLINE( 496)			this->animation->play(HX_("firstDeath",e4,d8,fc,14),null(),null(),null());
HXLINE( 498)			this->loadOffsetFile(this->curCharacter);
HXLINE( 500)			this->set_flipX(true);
HXLINE( 501)			this->playAnim(HX_("firstDeath",e4,d8,fc,14),null(),null(),null());
HXLINE( 502)			this->updateHitbox();
HXLINE( 489)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("dad",47,36,4c,00)) ){
HXLINE( 116)			::String library = null();
HXDLIN( 116)			bool isLocale = false;
HXDLIN( 116)			if (isLocale) {
HXLINE( 116)				if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("characters/DADDY_DEAREST",4c,60,28,2b)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library),null())) {
HXLINE( 116)					 ::flixel::graphics::FlxGraphic tex1 = ::Paths_obj::loadImage(HX_("characters/DADDY_DEAREST",4c,60,28,2b),library,isLocale);
HXDLIN( 116)					tex = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex1,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("characters/DADDY_DEAREST",4c,60,28,2b)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library));
            				}
            				else {
HXLINE( 116)					 ::flixel::graphics::FlxGraphic tex1 = ::Paths_obj::loadImage(HX_("characters/DADDY_DEAREST",4c,60,28,2b),library,isLocale);
HXDLIN( 116)					tex = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex1,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("characters/DADDY_DEAREST",4c,60,28,2b)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
            				}
            			}
            			else {
HXLINE( 116)				 ::flixel::graphics::FlxGraphic tex1 = ::Paths_obj::loadImage(HX_("characters/DADDY_DEAREST",4c,60,28,2b),library,null());
HXDLIN( 116)				tex = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex1,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/DADDY_DEAREST",4c,60,28,2b)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
            			}
HXLINE( 117)			this->set_frames(tex);
HXLINE( 118)			this->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("Dad idle dance",80,2a,95,5c),24,false,null(),null());
HXLINE( 119)			this->animation->addByPrefix(HX_("singUP",6a,52,21,b9),HX_("Dad Sing Note UP",91,e8,1d,0c),24,false,null(),null());
HXLINE( 120)			this->animation->addByPrefix(HX_("singRIGHT",0d,6f,70,ac),HX_("Dad Sing Note RIGHT",46,eb,bc,9e),24,false,null(),null());
HXLINE( 121)			this->animation->addByPrefix(HX_("singDOWN",31,2a,ad,36),HX_("Dad Sing Note DOWN",18,d8,98,b2),24,false,null(),null());
HXLINE( 122)			this->animation->addByPrefix(HX_("singLEFT",d6,39,ef,3b),HX_("Dad Sing Note LEFT",bd,e7,da,b7),24,false,null(),null());
HXLINE( 123)			this->animation->addByIndices(HX_("idleLoop",98,93,a7,3c),HX_("Dad idle dance",80,2a,95,5c),::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_2,2),HX_("",00,00,00,00),12,true,null(),null());
HXLINE( 125)			this->loadOffsetFile(this->curCharacter);
HXLINE( 127)			this->playAnim(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 114)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("duet",40,76,72,42)) ){
HXLINE( 351)			::String library = null();
HXDLIN( 351)			bool isLocale = false;
HXDLIN( 351)			 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp;
HXDLIN( 351)			if (isLocale) {
HXLINE( 351)				if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("characters/Duet_Assets",bd,07,31,92)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library),null())) {
HXLINE( 351)					 ::flixel::graphics::FlxGraphic _hx_tmp1 = ::Paths_obj::loadImage(HX_("characters/Duet_Assets",bd,07,31,92),library,isLocale);
HXDLIN( 351)					_hx_tmp = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp1,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("characters/Duet_Assets",bd,07,31,92)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library));
            				}
            				else {
HXLINE( 351)					 ::flixel::graphics::FlxGraphic _hx_tmp1 = ::Paths_obj::loadImage(HX_("characters/Duet_Assets",bd,07,31,92),library,isLocale);
HXDLIN( 351)					_hx_tmp = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp1,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("characters/Duet_Assets",bd,07,31,92)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
            				}
            			}
            			else {
HXLINE( 351)				 ::flixel::graphics::FlxGraphic _hx_tmp1 = ::Paths_obj::loadImage(HX_("characters/Duet_Assets",bd,07,31,92),library,null());
HXDLIN( 351)				_hx_tmp = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp1,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/Duet_Assets",bd,07,31,92)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
            			}
HXDLIN( 351)			this->set_frames(_hx_tmp);
HXLINE( 352)			this->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("Duet Idle",f4,24,eb,92),24,false,null(),null());
HXLINE( 353)			this->animation->addByPrefix(HX_("singUP",6a,52,21,b9),HX_("Duet Monika UP NOTE",8a,7b,63,11),24,false,null(),null());
HXLINE( 354)			this->animation->addByPrefix(HX_("singLEFT",d6,39,ef,3b),HX_("Duet Monika LEFT NOTE",1e,79,c8,6c),24,false,null(),null());
HXLINE( 355)			this->animation->addByPrefix(HX_("singRIGHT",0d,6f,70,ac),HX_("Duet Monika RIGHT NOTE",03,f5,c9,23),24,false,null(),null());
HXLINE( 356)			this->animation->addByPrefix(HX_("singDOWN",31,2a,ad,36),HX_("Duet Monika DOWN NOTE",e3,5e,fe,6d),24,false,null(),null());
HXLINE( 358)			this->animation->addByPrefix(HX_("singUP-alt",86,62,b4,5f),HX_("Duet Senpai UP NOTE",d3,10,a6,82),24,false,null(),null());
HXLINE( 359)			this->animation->addByPrefix(HX_("singDOWN-alt",cd,29,35,ba),HX_("Duet Senpai DOWN NOTE",6c,98,07,a5),24,false,null(),null());
HXLINE( 360)			this->animation->addByPrefix(HX_("singLEFT-alt",f2,6f,48,8c),HX_("Duet Senpai LEFT NOTE",a7,b2,d1,a3),24,false,null(),null());
HXLINE( 361)			this->animation->addByPrefix(HX_("singRIGHT-alt",a9,0c,12,b9),HX_("Duet Senpai RIGHT NOTE",5a,13,d3,14),24,false,null(),null());
HXLINE( 363)			this->animation->addByPrefix(HX_("cutsceneidle",9e,d0,c6,25),HX_("cutscene idle",6a,66,37,e3),24,false,null(),null());
HXLINE( 364)			this->animation->addByPrefix(HX_("cutscenetransition",9f,7a,99,63),HX_("cutscene transition",6b,71,42,f6),24,false,null(),null());
HXLINE( 366)			this->loadOffsetFile(this->curCharacter);
HXLINE( 368)			this->playAnim(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 370)			this->setGraphicSize(::Std_obj::_hx_int((this->get_width() * ( (Float)(6) ))),null());
HXLINE( 371)			this->updateHitbox();
HXLINE( 373)			this->set_antialiasing(false);
HXLINE( 350)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("gf",1f,5a,00,00)) ){
HXLINE(  35)			::String library = null();
HXDLIN(  35)			bool isLocale = false;
HXDLIN(  35)			if (isLocale) {
HXLINE(  35)				if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("characters/GF_assets",fe,40,c5,18)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library),null())) {
HXLINE(  35)					 ::flixel::graphics::FlxGraphic tex1 = ::Paths_obj::loadImage(HX_("characters/GF_assets",fe,40,c5,18),library,isLocale);
HXDLIN(  35)					tex = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex1,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("characters/GF_assets",fe,40,c5,18)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library));
            				}
            				else {
HXLINE(  35)					 ::flixel::graphics::FlxGraphic tex1 = ::Paths_obj::loadImage(HX_("characters/GF_assets",fe,40,c5,18),library,isLocale);
HXDLIN(  35)					tex = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex1,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("characters/GF_assets",fe,40,c5,18)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
            				}
            			}
            			else {
HXLINE(  35)				 ::flixel::graphics::FlxGraphic tex1 = ::Paths_obj::loadImage(HX_("characters/GF_assets",fe,40,c5,18),library,null());
HXDLIN(  35)				tex = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex1,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/GF_assets",fe,40,c5,18)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
            			}
HXLINE(  36)			this->set_frames(tex);
HXLINE(  37)			this->animation->addByPrefix(HX_("cheer",8d,9a,b6,45),HX_("GF Cheer",ac,b5,2b,e0),24,false,null(),null());
HXLINE(  38)			this->animation->addByPrefix(HX_("singLEFT",d6,39,ef,3b),HX_("GF left note",6a,dd,c6,b9),24,false,null(),null());
HXLINE(  39)			this->animation->addByPrefix(HX_("singRIGHT",0d,6f,70,ac),HX_("GF Right Note",57,7f,86,75),24,false,null(),null());
HXLINE(  40)			this->animation->addByPrefix(HX_("singUP",6a,52,21,b9),HX_("GF Up Note",d6,e4,46,60),24,false,null(),null());
HXLINE(  41)			this->animation->addByPrefix(HX_("singDOWN",31,2a,ad,36),HX_("GF Down Note",2f,cf,a8,47),24,false,null(),null());
HXLINE(  42)			this->animation->addByIndices(HX_("sad",16,98,57,00),HX_("gf sad",95,c1,1f,ff),::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_3,13),HX_("",00,00,00,00),24,false,null(),null());
HXLINE(  43)			this->animation->addByIndices(HX_("danceLeft",da,cc,f9,df),HX_("GF Dancing Beat",47,47,24,df),::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_4,16),HX_("",00,00,00,00),24,false,null(),null());
HXLINE(  44)			this->animation->addByIndices(HX_("danceRight",a9,7f,a6,91),HX_("GF Dancing Beat",47,47,24,df),::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_5,15),HX_("",00,00,00,00),24,false,null(),null());
HXLINE(  45)			this->animation->addByIndices(HX_("hairBlow",b4,c9,39,c9),HX_("GF Dancing Beat Hair blowing",4b,14,4a,db),::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_6,4),HX_("",00,00,00,00),24,null(),null(),null());
HXLINE(  46)			this->animation->addByIndices(HX_("hairFall",bd,48,d6,cb),HX_("GF Dancing Beat Hair Landing",52,45,8f,42),::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_7,12),HX_("",00,00,00,00),24,false,null(),null());
HXLINE(  47)			this->animation->addByPrefix(HX_("scared",20,78,2a,3c),HX_("GF FEAR",91,45,bb,20),24,null(),null(),null());
HXLINE(  49)			this->loadOffsetFile(this->curCharacter);
HXLINE(  51)			this->playAnim(HX_("danceRight",a9,7f,a6,91),null(),null(),null());
HXLINE(  33)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("gf-doki",17,9e,ff,ae)) ){
HXLINE( 101)			::String library = null();
HXDLIN( 101)			bool isLocale = false;
HXDLIN( 101)			if (isLocale) {
HXLINE( 101)				if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("characters/gfdoki",8d,81,2c,41)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library),null())) {
HXLINE( 101)					 ::flixel::graphics::FlxGraphic tex1 = ::Paths_obj::loadImage(HX_("characters/gfdoki",8d,81,2c,41),library,isLocale);
HXDLIN( 101)					tex = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex1,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("characters/gfdoki",8d,81,2c,41)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library));
            				}
            				else {
HXLINE( 101)					 ::flixel::graphics::FlxGraphic tex1 = ::Paths_obj::loadImage(HX_("characters/gfdoki",8d,81,2c,41),library,isLocale);
HXDLIN( 101)					tex = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex1,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("characters/gfdoki",8d,81,2c,41)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
            				}
            			}
            			else {
HXLINE( 101)				 ::flixel::graphics::FlxGraphic tex1 = ::Paths_obj::loadImage(HX_("characters/gfdoki",8d,81,2c,41),library,null());
HXDLIN( 101)				tex = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex1,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/gfdoki",8d,81,2c,41)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
            			}
HXLINE( 102)			this->set_frames(tex);
HXLINE( 103)			this->animation->addByIndices(HX_("singUP",6a,52,21,b9),HX_("GF IDLE",b5,30,b6,22),::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_8,1),HX_("",00,00,00,00),24,false,null(),null());
HXLINE( 104)			this->animation->addByIndices(HX_("danceLeft",da,cc,f9,df),HX_("GF IDLE",b5,30,b6,22),::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_9,16),HX_("",00,00,00,00),24,false,null(),null());
HXLINE( 105)			this->animation->addByIndices(HX_("danceRight",a9,7f,a6,91),HX_("GF IDLE",b5,30,b6,22),::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_10,15),HX_("",00,00,00,00),24,false,null(),null());
HXLINE( 107)			this->loadOffsetFile(this->curCharacter);
HXLINE( 108)			this->playAnim(HX_("danceRight",a9,7f,a6,91),null(),null(),null());
HXLINE( 110)			Float _hx_tmp = this->get_width();
HXDLIN( 110)			this->setGraphicSize(::Std_obj::_hx_int((_hx_tmp * ::PlayState_obj::daPixelZoom)),null());
HXLINE( 111)			this->updateHitbox();
HXLINE( 112)			this->set_antialiasing(false);
HXLINE( 100)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("gf-pixel",98,3e,8c,55)) ){
HXLINE(  71)			::String library = null();
HXDLIN(  71)			bool isLocale = false;
HXDLIN(  71)			if (isLocale) {
HXLINE(  71)				if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("characters/gfPixel",42,d2,d3,3d)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library),null())) {
HXLINE(  71)					 ::flixel::graphics::FlxGraphic tex1 = ::Paths_obj::loadImage(HX_("characters/gfPixel",42,d2,d3,3d),library,isLocale);
HXDLIN(  71)					tex = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex1,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("characters/gfPixel",42,d2,d3,3d)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library));
            				}
            				else {
HXLINE(  71)					 ::flixel::graphics::FlxGraphic tex1 = ::Paths_obj::loadImage(HX_("characters/gfPixel",42,d2,d3,3d),library,isLocale);
HXDLIN(  71)					tex = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex1,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("characters/gfPixel",42,d2,d3,3d)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
            				}
            			}
            			else {
HXLINE(  71)				 ::flixel::graphics::FlxGraphic tex1 = ::Paths_obj::loadImage(HX_("characters/gfPixel",42,d2,d3,3d),library,null());
HXDLIN(  71)				tex = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex1,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/gfPixel",42,d2,d3,3d)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
            			}
HXLINE(  72)			this->set_frames(tex);
HXLINE(  73)			this->animation->addByIndices(HX_("singUP",6a,52,21,b9),HX_("GF IDLE",b5,30,b6,22),::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_11,1),HX_("",00,00,00,00),24,false,null(),null());
HXLINE(  74)			this->animation->addByIndices(HX_("danceLeft",da,cc,f9,df),HX_("GF IDLE",b5,30,b6,22),::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_12,16),HX_("",00,00,00,00),24,false,null(),null());
HXLINE(  75)			this->animation->addByIndices(HX_("danceRight",a9,7f,a6,91),HX_("GF IDLE",b5,30,b6,22),::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_13,15),HX_("",00,00,00,00),24,false,null(),null());
HXLINE(  77)			this->loadOffsetFile(this->curCharacter);
HXLINE(  79)			this->playAnim(HX_("danceRight",a9,7f,a6,91),null(),null(),null());
HXLINE(  81)			Float _hx_tmp = this->get_width();
HXDLIN(  81)			this->setGraphicSize(::Std_obj::_hx_int((_hx_tmp * ::PlayState_obj::daPixelZoom)),null());
HXLINE(  82)			this->updateHitbox();
HXLINE(  83)			this->set_antialiasing(false);
HXLINE(  70)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("gf-realdoki",75,9f,59,a6)) ){
HXLINE(  55)			::String library = null();
HXDLIN(  55)			bool isLocale = false;
HXDLIN(  55)			if (isLocale) {
HXLINE(  55)				if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("characters/DDLCGF_ass_sets",b3,21,2f,cb)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library),null())) {
HXLINE(  55)					 ::flixel::graphics::FlxGraphic tex1 = ::Paths_obj::loadImage(HX_("characters/DDLCGF_ass_sets",b3,21,2f,cb),library,isLocale);
HXDLIN(  55)					tex = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex1,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("characters/DDLCGF_ass_sets",b3,21,2f,cb)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library));
            				}
            				else {
HXLINE(  55)					 ::flixel::graphics::FlxGraphic tex1 = ::Paths_obj::loadImage(HX_("characters/DDLCGF_ass_sets",b3,21,2f,cb),library,isLocale);
HXDLIN(  55)					tex = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex1,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("characters/DDLCGF_ass_sets",b3,21,2f,cb)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
            				}
            			}
            			else {
HXLINE(  55)				 ::flixel::graphics::FlxGraphic tex1 = ::Paths_obj::loadImage(HX_("characters/DDLCGF_ass_sets",b3,21,2f,cb),library,null());
HXDLIN(  55)				tex = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex1,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/DDLCGF_ass_sets",b3,21,2f,cb)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
            			}
HXLINE(  56)			this->set_frames(tex);
HXLINE(  57)			this->animation->addByIndices(HX_("sad",16,98,57,00),HX_("gf sad",95,c1,1f,ff),::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_14,13),HX_("",00,00,00,00),24,false,null(),null());
HXLINE(  58)			this->animation->addByIndices(HX_("danceLeft",da,cc,f9,df),HX_("GF Dancing Beat",47,47,24,df),::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_15,16),HX_("",00,00,00,00),24,false,null(),null());
HXLINE(  59)			this->animation->addByIndices(HX_("danceRight",a9,7f,a6,91),HX_("GF Dancing Beat",47,47,24,df),::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_16,15),HX_("",00,00,00,00),24,false,null(),null());
HXLINE(  60)			this->animation->addByIndices(HX_("countdownThree",ed,51,f1,3a),HX_("GF countdown",70,07,ed,eb),::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_17,7),HX_("",00,00,00,00),24,false,null(),null());
HXLINE(  61)			this->animation->addByIndices(HX_("countdownTwo",5b,99,bb,2b),HX_("GF countdown",70,07,ed,eb),::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_18,9),HX_("",00,00,00,00),24,false,null(),null());
HXLINE(  62)			this->animation->addByIndices(HX_("countdownOne",35,c6,b7,2b),HX_("GF countdown",70,07,ed,eb),::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_19,8),HX_("",00,00,00,00),24,false,null(),null());
HXLINE(  63)			this->animation->addByIndices(HX_("countdownGo",39,dd,2f,3e),HX_("GF countdown",70,07,ed,eb),::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_20,11),HX_("",00,00,00,00),24,false,null(),null());
HXLINE(  64)			this->animation->addByPrefix(HX_("necksnap",69,04,31,79),HX_("GF NECKSNAP",8a,3a,f0,82),24,true,null(),null());
HXLINE(  66)			this->loadOffsetFile(this->curCharacter);
HXLINE(  68)			this->playAnim(HX_("danceRight",a9,7f,a6,91),null(),null(),null());
HXLINE(  53)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("monika",f3,3a,66,c7)) ){
HXLINE( 328)			::String library = null();
HXDLIN( 328)			bool isLocale = false;
HXDLIN( 328)			 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp;
HXDLIN( 328)			if (isLocale) {
HXLINE( 328)				if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("characters/monika",f8,78,83,dc)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library),null())) {
HXLINE( 328)					 ::flixel::graphics::FlxGraphic _hx_tmp1 = ::Paths_obj::loadImage(HX_("characters/monika",f8,78,83,dc),library,isLocale);
HXDLIN( 328)					_hx_tmp = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp1,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("characters/monika",f8,78,83,dc)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library));
            				}
            				else {
HXLINE( 328)					 ::flixel::graphics::FlxGraphic _hx_tmp1 = ::Paths_obj::loadImage(HX_("characters/monika",f8,78,83,dc),library,isLocale);
HXDLIN( 328)					_hx_tmp = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp1,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("characters/monika",f8,78,83,dc)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
            				}
            			}
            			else {
HXLINE( 328)				 ::flixel::graphics::FlxGraphic _hx_tmp1 = ::Paths_obj::loadImage(HX_("characters/monika",f8,78,83,dc),library,null());
HXDLIN( 328)				_hx_tmp = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp1,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/monika",f8,78,83,dc)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
            			}
HXDLIN( 328)			this->set_frames(_hx_tmp);
HXLINE( 329)			this->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("Monika Idle",61,2f,12,04),24,false,null(),null());
HXLINE( 330)			this->animation->addByPrefix(HX_("singUP",6a,52,21,b9),HX_("Monika UP NOTE",ca,79,c5,c6),24,false,null(),null());
HXLINE( 331)			this->animation->addByPrefix(HX_("singLEFT",d6,39,ef,3b),HX_("Monika LEFT NOTE",5e,87,56,bd),24,false,null(),null());
HXLINE( 332)			this->animation->addByPrefix(HX_("singRIGHT",0d,6f,70,ac),HX_("Monika RIGHT NOTE",c3,5e,88,4f),24,false,null(),null());
HXLINE( 333)			this->animation->addByPrefix(HX_("singDOWN",31,2a,ad,36),HX_("Monika DOWN NOTE",23,6d,8c,be),24,false,null(),null());
HXLINE( 335)			this->animation->addByPrefix(HX_("singUP-alt",86,62,b4,5f),HX_("Monika UP NOTE",ca,79,c5,c6),24,false,null(),null());
HXLINE( 336)			this->animation->addByPrefix(HX_("singDOWN-alt",cd,29,35,ba),HX_("Monika DOWN NOTE",23,6d,8c,be),24,false,null(),null());
HXLINE( 337)			this->animation->addByPrefix(HX_("singLEFT-alt",f2,6f,48,8c),HX_("Monika LEFT NOTE",5e,87,56,bd),24,false,null(),null());
HXLINE( 338)			this->animation->addByPrefix(HX_("singRIGHT-alt",a9,0c,12,b9),HX_("Monika RIGHT NOTE",c3,5e,88,4f),24,false,null(),null());
HXLINE( 340)			this->loadOffsetFile(this->curCharacter);
HXLINE( 342)			this->playAnim(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 344)			this->setGraphicSize(::Std_obj::_hx_int((this->get_width() * ( (Float)(6) ))),null());
HXLINE( 345)			this->updateHitbox();
HXLINE( 347)			this->set_antialiasing(false);
HXLINE( 327)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("monika-angry",07,f9,9e,ce)) ){
HXLINE( 376)			::String library = null();
HXDLIN( 376)			bool isLocale = false;
HXDLIN( 376)			 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp;
HXDLIN( 376)			if (isLocale) {
HXLINE( 376)				if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("characters/Monika_Finale",d6,13,af,89)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library),null())) {
HXLINE( 376)					 ::flixel::graphics::FlxGraphic _hx_tmp1 = ::Paths_obj::loadImage(HX_("characters/Monika_Finale",d6,13,af,89),library,isLocale);
HXDLIN( 376)					_hx_tmp = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp1,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("characters/Monika_Finale",d6,13,af,89)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library));
            				}
            				else {
HXLINE( 376)					 ::flixel::graphics::FlxGraphic _hx_tmp1 = ::Paths_obj::loadImage(HX_("characters/Monika_Finale",d6,13,af,89),library,isLocale);
HXDLIN( 376)					_hx_tmp = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp1,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("characters/Monika_Finale",d6,13,af,89)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
            				}
            			}
            			else {
HXLINE( 376)				 ::flixel::graphics::FlxGraphic _hx_tmp1 = ::Paths_obj::loadImage(HX_("characters/Monika_Finale",d6,13,af,89),library,null());
HXDLIN( 376)				_hx_tmp = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp1,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/Monika_Finale",d6,13,af,89)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
            			}
HXDLIN( 376)			this->set_frames(_hx_tmp);
HXLINE( 377)			this->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("MONIKA IDLE",61,07,15,78),24,false,null(),null());
HXLINE( 378)			this->animation->addByPrefix(HX_("singUP",6a,52,21,b9),HX_("MONIKA UP NOTE",aa,91,7e,53),24,false,null(),null());
HXLINE( 379)			this->animation->addByPrefix(HX_("singLEFT",d6,39,ef,3b),HX_("MONIKA LEFT NOTE",3e,57,6d,bc),24,false,null(),null());
HXLINE( 380)			this->animation->addByPrefix(HX_("singRIGHT",0d,6f,70,ac),HX_("MONIKA RIGHT NOTE",e3,72,67,84),24,false,null(),null());
HXLINE( 381)			this->animation->addByPrefix(HX_("singDOWN",31,2a,ad,36),HX_("MONIKA DOWN NOTE",03,3d,a3,bd),24,false,null(),null());
HXLINE( 383)			this->animation->addByPrefix(HX_("singUP-alt",86,62,b4,5f),HX_("MONIKA UP GLITCH",ad,cf,98,8f),24,false,null(),null());
HXLINE( 384)			this->animation->addByPrefix(HX_("singLEFT-alt",f2,6f,48,8c),HX_("MONIKA LEFT GLITCH",41,22,f3,25),24,false,null(),null());
HXLINE( 385)			this->animation->addByPrefix(HX_("singRIGHT-alt",a9,0c,12,b9),HX_("MONIKA RIGHT GLITCH",26,31,67,75),24,false,null(),null());
HXLINE( 386)			this->animation->addByPrefix(HX_("singDOWN-alt",cd,29,35,ba),HX_("MONIKA DOWN GLITCH",46,c3,c1,4c),24,false,null(),null());
HXLINE( 388)			this->loadOffsetFile(this->curCharacter);
HXLINE( 390)			this->playAnim(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 392)			this->setGraphicSize(::Std_obj::_hx_int((this->get_width() * ( (Float)(6) ))),null());
HXLINE( 393)			this->updateHitbox();
HXLINE( 395)			this->set_antialiasing(false);
HXLINE( 375)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("monika-real",38,9a,2f,b7)) ){
HXLINE( 458)			::String library = null();
HXDLIN( 458)			bool isLocale = false;
HXDLIN( 458)			if (isLocale) {
HXLINE( 458)				if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("characters/Doki_MonikaNonPixel_Assets",e5,4f,91,26)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library),null())) {
HXLINE( 458)					 ::flixel::graphics::FlxGraphic tex1 = ::Paths_obj::loadImage(HX_("characters/Doki_MonikaNonPixel_Assets",e5,4f,91,26),library,isLocale);
HXDLIN( 458)					tex = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex1,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("characters/Doki_MonikaNonPixel_Assets",e5,4f,91,26)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library));
            				}
            				else {
HXLINE( 458)					 ::flixel::graphics::FlxGraphic tex1 = ::Paths_obj::loadImage(HX_("characters/Doki_MonikaNonPixel_Assets",e5,4f,91,26),library,isLocale);
HXDLIN( 458)					tex = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex1,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("characters/Doki_MonikaNonPixel_Assets",e5,4f,91,26)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
            				}
            			}
            			else {
HXLINE( 458)				 ::flixel::graphics::FlxGraphic tex1 = ::Paths_obj::loadImage(HX_("characters/Doki_MonikaNonPixel_Assets",e5,4f,91,26),library,null());
HXDLIN( 458)				tex = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex1,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/Doki_MonikaNonPixel_Assets",e5,4f,91,26)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
            			}
HXLINE( 459)			this->set_frames(tex);
HXLINE( 460)			this->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("Monika Returns Idle",fe,47,ef,96),24,false,null(),null());
HXLINE( 461)			this->animation->addByPrefix(HX_("singUP",6a,52,21,b9),HX_("Monika Returns Up",c5,18,5b,bf),24,false,null(),null());
HXLINE( 462)			this->animation->addByPrefix(HX_("singRIGHT",0d,6f,70,ac),HX_("Monika Returns Right",b2,37,55,ac),24,false,null(),null());
HXLINE( 463)			this->animation->addByPrefix(HX_("singDOWN",31,2a,ad,36),HX_("Monika Returns Down",4c,99,a9,93),24,false,null(),null());
HXLINE( 464)			this->animation->addByPrefix(HX_("singLEFT",d6,39,ef,3b),HX_("Monika Returns Left",f1,a8,eb,98),24,false,null(),null());
HXLINE( 466)			this->animation->addByPrefix(HX_("singUP-alt",86,62,b4,5f),HX_("Monika Returns Up",c5,18,5b,bf),24,false,null(),null());
HXLINE( 467)			this->animation->addByPrefix(HX_("singRIGHT-alt",a9,0c,12,b9),HX_("Monika Returns Right",b2,37,55,ac),24,false,null(),null());
HXLINE( 468)			this->animation->addByPrefix(HX_("singDOWN-alt",cd,29,35,ba),HX_("Monika Returns Down",4c,99,a9,93),24,false,null(),null());
HXLINE( 469)			this->animation->addByPrefix(HX_("singLEFT-alt",f2,6f,48,8c),HX_("Monika Returns Left",f1,a8,eb,98),24,false,null(),null());
HXLINE( 471)			this->loadOffsetFile(this->curCharacter);
HXLINE( 473)			this->setGraphicSize(::Std_obj::_hx_int((this->get_width() * ((Float).9))),null());
HXLINE( 474)			this->playAnim(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 456)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("natsuki",21,00,af,bd)) ){
HXLINE( 398)			::String library = null();
HXDLIN( 398)			bool isLocale = false;
HXDLIN( 398)			if (isLocale) {
HXLINE( 398)				if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("characters/Doki_Nat_Assets",b2,fa,52,f5)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library),null())) {
HXLINE( 398)					 ::flixel::graphics::FlxGraphic tex1 = ::Paths_obj::loadImage(HX_("characters/Doki_Nat_Assets",b2,fa,52,f5),library,isLocale);
HXDLIN( 398)					tex = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex1,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("characters/Doki_Nat_Assets",b2,fa,52,f5)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library));
            				}
            				else {
HXLINE( 398)					 ::flixel::graphics::FlxGraphic tex1 = ::Paths_obj::loadImage(HX_("characters/Doki_Nat_Assets",b2,fa,52,f5),library,isLocale);
HXDLIN( 398)					tex = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex1,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("characters/Doki_Nat_Assets",b2,fa,52,f5)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
            				}
            			}
            			else {
HXLINE( 398)				 ::flixel::graphics::FlxGraphic tex1 = ::Paths_obj::loadImage(HX_("characters/Doki_Nat_Assets",b2,fa,52,f5),library,null());
HXDLIN( 398)				tex = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex1,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/Doki_Nat_Assets",b2,fa,52,f5)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
            			}
HXLINE( 399)			this->set_frames(tex);
HXLINE( 400)			this->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("Nat Idle",f3,02,c6,2d),24,false,null(),null());
HXLINE( 401)			this->animation->addByPrefix(HX_("singUP",6a,52,21,b9),HX_("Nat Sing Note Up",d7,b9,d4,fe),24,false,null(),null());
HXLINE( 402)			this->animation->addByPrefix(HX_("singRIGHT",0d,6f,70,ac),HX_("Nat Sing Note Right",e0,0d,bc,15),24,false,null(),null());
HXLINE( 403)			this->animation->addByPrefix(HX_("singDOWN",31,2a,ad,36),HX_("Nat Sing Note DOWN",be,be,82,dd),24,false,null(),null());
HXLINE( 404)			this->animation->addByPrefix(HX_("singLEFT",d6,39,ef,3b),HX_("Nat Sing Note Left",83,32,dd,e2),24,false,null(),null());
HXLINE( 406)			this->loadOffsetFile(this->curCharacter);
HXLINE( 408)			this->playAnim(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 397)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("nogf-pixel",d9,47,38,6c)) ){
HXLINE(  86)			::String library = null();
HXDLIN(  86)			bool isLocale = false;
HXDLIN(  86)			if (isLocale) {
HXLINE(  86)				if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("characters/nogfPixel",e1,f8,80,83)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library),null())) {
HXLINE(  86)					 ::flixel::graphics::FlxGraphic tex1 = ::Paths_obj::loadImage(HX_("characters/nogfPixel",e1,f8,80,83),library,isLocale);
HXDLIN(  86)					tex = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex1,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("characters/nogfPixel",e1,f8,80,83)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library));
            				}
            				else {
HXLINE(  86)					 ::flixel::graphics::FlxGraphic tex1 = ::Paths_obj::loadImage(HX_("characters/nogfPixel",e1,f8,80,83),library,isLocale);
HXDLIN(  86)					tex = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex1,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("characters/nogfPixel",e1,f8,80,83)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
            				}
            			}
            			else {
HXLINE(  86)				 ::flixel::graphics::FlxGraphic tex1 = ::Paths_obj::loadImage(HX_("characters/nogfPixel",e1,f8,80,83),library,null());
HXDLIN(  86)				tex = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex1,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/nogfPixel",e1,f8,80,83)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
            			}
HXLINE(  87)			this->set_frames(tex);
HXLINE(  88)			this->animation->addByIndices(HX_("singUP",6a,52,21,b9),HX_("GF IDLE",b5,30,b6,22),::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_21,1),HX_("",00,00,00,00),24,false,null(),null());
HXLINE(  89)			this->animation->addByIndices(HX_("danceLeft",da,cc,f9,df),HX_("GF IDLE",b5,30,b6,22),::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_22,16),HX_("",00,00,00,00),24,false,null(),null());
HXLINE(  90)			this->animation->addByIndices(HX_("danceRight",a9,7f,a6,91),HX_("GF IDLE",b5,30,b6,22),::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_23,15),HX_("",00,00,00,00),24,false,null(),null());
HXLINE(  92)			this->loadOffsetFile(this->curCharacter);
HXLINE(  94)			this->playAnim(HX_("danceRight",a9,7f,a6,91),null(),null(),null());
HXLINE(  96)			Float _hx_tmp = this->get_width();
HXDLIN(  96)			this->setGraphicSize(::Std_obj::_hx_int((_hx_tmp * ::PlayState_obj::daPixelZoom)),null());
HXLINE(  97)			this->updateHitbox();
HXLINE(  98)			this->set_antialiasing(false);
HXLINE(  85)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("playablesenpai",4a,23,22,fd)) ){
HXLINE( 264)			::String library = null();
HXDLIN( 264)			bool isLocale = false;
HXDLIN( 264)			 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp;
HXDLIN( 264)			if (isLocale) {
HXLINE( 264)				if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("characters/playablesenpai",4f,6e,64,8d)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library),null())) {
HXLINE( 264)					 ::flixel::graphics::FlxGraphic _hx_tmp1 = ::Paths_obj::loadImage(HX_("characters/playablesenpai",4f,6e,64,8d),library,isLocale);
HXDLIN( 264)					_hx_tmp = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp1,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("characters/playablesenpai",4f,6e,64,8d)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library));
            				}
            				else {
HXLINE( 264)					 ::flixel::graphics::FlxGraphic _hx_tmp1 = ::Paths_obj::loadImage(HX_("characters/playablesenpai",4f,6e,64,8d),library,isLocale);
HXDLIN( 264)					_hx_tmp = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp1,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("characters/playablesenpai",4f,6e,64,8d)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
            				}
            			}
            			else {
HXLINE( 264)				 ::flixel::graphics::FlxGraphic _hx_tmp1 = ::Paths_obj::loadImage(HX_("characters/playablesenpai",4f,6e,64,8d),library,null());
HXDLIN( 264)				_hx_tmp = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp1,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/playablesenpai",4f,6e,64,8d)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
            			}
HXDLIN( 264)			this->set_frames(_hx_tmp);
HXLINE( 265)			this->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("Senpai Idle",78,62,c5,a9),24,true,null(),null());
HXLINE( 266)			this->animation->addByPrefix(HX_("singUP",6a,52,21,b9),HX_("SENPAI UP NOTE",f3,26,c1,c4),24,false,null(),null());
HXLINE( 267)			this->animation->addByPrefix(HX_("singLEFT",d6,39,ef,3b),HX_("SENPAI LEFT NOTE",c7,90,76,f3),24,false,null(),null());
HXLINE( 268)			this->animation->addByPrefix(HX_("singRIGHT",0d,6f,70,ac),HX_("SENPAI RIGHT NOTE",3a,91,70,75),24,false,null(),null());
HXLINE( 269)			this->animation->addByPrefix(HX_("singDOWN",31,2a,ad,36),HX_("SENPAI DOWN NOTE",8c,76,ac,f4),24,false,null(),null());
HXLINE( 270)			this->animation->addByPrefix(HX_("singUPmiss",66,22,08,8a),HX_("miss Senpai UP NOTE",b7,6f,34,d7),24,false,null(),null());
HXLINE( 271)			this->animation->addByPrefix(HX_("singLEFTmiss",d2,2f,9c,b6),HX_("miss Senpai LEFT NOTE",8b,92,e0,ff),24,false,null(),null());
HXLINE( 272)			this->animation->addByPrefix(HX_("singRIGHTmiss",89,cc,65,e3),HX_("miss Senpai RIGHT NOTE",f6,1a,c8,45),24,false,null(),null());
HXLINE( 273)			this->animation->addByPrefix(HX_("singDOWNmiss",ad,e9,88,e4),HX_("miss Senpai DOWN NOTE",50,78,16,01),24,false,null(),null());
HXLINE( 275)			this->animation->addByPrefix(HX_("firstDeath",e4,d8,fc,14),HX_("BF Dies pixel",d5,56,ac,77),24,false,null(),null());
HXLINE( 276)			this->animation->addByPrefix(HX_("deathLoop",b8,0b,79,2e),HX_("senpai retry",84,97,fb,b6),24,true,null(),null());
HXLINE( 277)			this->animation->addByPrefix(HX_("deathConfirm",2c,44,2b,12),HX_("RETRY CONFIRM",08,8c,5f,fd),24,false,null(),null());
HXLINE( 282)			this->loadOffsetFile(this->curCharacter);
HXLINE( 284)			this->setGraphicSize(::Std_obj::_hx_int((this->get_width() * ( (Float)(6) ))),null());
HXLINE( 285)			this->updateHitbox();
HXLINE( 287)			this->set_flipX(true);
HXLINE( 289)			this->playAnim(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 291)			this->set_antialiasing(false);
HXLINE( 263)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("sayori",9b,32,38,25)) ){
HXLINE( 412)			::String library = null();
HXDLIN( 412)			bool isLocale = false;
HXDLIN( 412)			if (isLocale) {
HXLINE( 412)				if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("characters/Doki_Sayo_Assets",8d,24,60,d4)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library),null())) {
HXLINE( 412)					 ::flixel::graphics::FlxGraphic tex1 = ::Paths_obj::loadImage(HX_("characters/Doki_Sayo_Assets",8d,24,60,d4),library,isLocale);
HXDLIN( 412)					tex = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex1,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("characters/Doki_Sayo_Assets",8d,24,60,d4)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library));
            				}
            				else {
HXLINE( 412)					 ::flixel::graphics::FlxGraphic tex1 = ::Paths_obj::loadImage(HX_("characters/Doki_Sayo_Assets",8d,24,60,d4),library,isLocale);
HXDLIN( 412)					tex = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex1,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("characters/Doki_Sayo_Assets",8d,24,60,d4)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
            				}
            			}
            			else {
HXLINE( 412)				 ::flixel::graphics::FlxGraphic tex1 = ::Paths_obj::loadImage(HX_("characters/Doki_Sayo_Assets",8d,24,60,d4),library,null());
HXDLIN( 412)				tex = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex1,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/Doki_Sayo_Assets",8d,24,60,d4)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
            			}
HXLINE( 413)			this->set_frames(tex);
HXLINE( 414)			this->animation->addByIndices(HX_("danceLeft",da,cc,f9,df),HX_("Sayo Idle nrw test",2f,9f,df,3b),::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_24,14),HX_("",00,00,00,00),24,false,null(),null());
HXLINE( 415)			this->animation->addByIndices(HX_("danceRight",a9,7f,a6,91),HX_("Sayo Idle nrw test",2f,9f,df,3b),::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_25,12),HX_("",00,00,00,00),24,false,null(),null());
HXLINE( 417)			this->animation->addByPrefix(HX_("singUP",6a,52,21,b9),HX_("Sayo Sing Note Up",b4,36,a9,66),24,false,null(),null());
HXLINE( 418)			this->animation->addByPrefix(HX_("singRIGHT",0d,6f,70,ac),HX_("Sayo Sing Note Right",23,39,f1,d2),24,false,null(),null());
HXLINE( 419)			this->animation->addByPrefix(HX_("singDOWN",31,2a,ad,36),HX_("Sayo Sing Note Down",fb,50,2e,41),24,false,null(),null());
HXLINE( 420)			this->animation->addByPrefix(HX_("singLEFT",d6,39,ef,3b),HX_("Sayo Sing Note Left",a0,60,70,46),24,false,null(),null());
HXLINE( 421)			this->animation->addByPrefix(HX_("nara",a2,76,ff,48),HX_("Sayo Nara animated",a5,ac,e2,f9),24,false,null(),null());
HXLINE( 423)			this->loadOffsetFile(this->curCharacter);
HXLINE( 425)			this->playAnim(HX_("danceRight",a9,7f,a6,91),null(),null(),null());
HXLINE( 410)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("senpai",3c,df,8d,6b)) ){
HXLINE( 247)			::String library = null();
HXDLIN( 247)			bool isLocale = false;
HXDLIN( 247)			 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp;
HXDLIN( 247)			if (isLocale) {
HXLINE( 247)				if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("characters/senpai",41,1d,ab,80)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library),null())) {
HXLINE( 247)					 ::flixel::graphics::FlxGraphic _hx_tmp1 = ::Paths_obj::loadImage(HX_("characters/senpai",41,1d,ab,80),library,isLocale);
HXDLIN( 247)					_hx_tmp = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp1,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("characters/senpai",41,1d,ab,80)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library));
            				}
            				else {
HXLINE( 247)					 ::flixel::graphics::FlxGraphic _hx_tmp1 = ::Paths_obj::loadImage(HX_("characters/senpai",41,1d,ab,80),library,isLocale);
HXDLIN( 247)					_hx_tmp = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp1,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("characters/senpai",41,1d,ab,80)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
            				}
            			}
            			else {
HXLINE( 247)				 ::flixel::graphics::FlxGraphic _hx_tmp1 = ::Paths_obj::loadImage(HX_("characters/senpai",41,1d,ab,80),library,null());
HXDLIN( 247)				_hx_tmp = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp1,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/senpai",41,1d,ab,80)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
            			}
HXDLIN( 247)			this->set_frames(_hx_tmp);
HXLINE( 248)			this->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("Senpai Idle",78,62,c5,a9),24,false,null(),null());
HXLINE( 249)			this->animation->addByPrefix(HX_("singUP",6a,52,21,b9),HX_("SENPAI UP NOTE",f3,26,c1,c4),24,false,null(),null());
HXLINE( 250)			this->animation->addByPrefix(HX_("singLEFT",d6,39,ef,3b),HX_("SENPAI LEFT NOTE",c7,90,76,f3),24,false,null(),null());
HXLINE( 251)			this->animation->addByPrefix(HX_("singRIGHT",0d,6f,70,ac),HX_("SENPAI RIGHT NOTE",3a,91,70,75),24,false,null(),null());
HXLINE( 252)			this->animation->addByPrefix(HX_("singDOWN",31,2a,ad,36),HX_("SENPAI DOWN NOTE",8c,76,ac,f4),24,false,null(),null());
HXLINE( 254)			this->loadOffsetFile(this->curCharacter);
HXLINE( 256)			this->playAnim(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 258)			this->setGraphicSize(::Std_obj::_hx_int((this->get_width() * ( (Float)(6) ))),null());
HXLINE( 259)			this->updateHitbox();
HXLINE( 261)			this->set_antialiasing(false);
HXLINE( 246)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("senpai-angry",10,7a,b8,25)) ){
HXLINE( 294)			::String library = null();
HXDLIN( 294)			bool isLocale = false;
HXDLIN( 294)			 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp;
HXDLIN( 294)			if (isLocale) {
HXLINE( 294)				if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("characters/senpai",41,1d,ab,80)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library),null())) {
HXLINE( 294)					 ::flixel::graphics::FlxGraphic _hx_tmp1 = ::Paths_obj::loadImage(HX_("characters/senpai",41,1d,ab,80),library,isLocale);
HXDLIN( 294)					_hx_tmp = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp1,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("characters/senpai",41,1d,ab,80)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library));
            				}
            				else {
HXLINE( 294)					 ::flixel::graphics::FlxGraphic _hx_tmp1 = ::Paths_obj::loadImage(HX_("characters/senpai",41,1d,ab,80),library,isLocale);
HXDLIN( 294)					_hx_tmp = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp1,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("characters/senpai",41,1d,ab,80)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
            				}
            			}
            			else {
HXLINE( 294)				 ::flixel::graphics::FlxGraphic _hx_tmp1 = ::Paths_obj::loadImage(HX_("characters/senpai",41,1d,ab,80),library,null());
HXDLIN( 294)				_hx_tmp = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp1,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/senpai",41,1d,ab,80)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
            			}
HXDLIN( 294)			this->set_frames(_hx_tmp);
HXLINE( 295)			this->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("Angry Senpai Idle",d9,cc,b4,52),24,false,null(),null());
HXLINE( 296)			this->animation->addByPrefix(HX_("singUP",6a,52,21,b9),HX_("Angry Senpai UP NOTE",52,97,34,df),24,false,null(),null());
HXLINE( 297)			this->animation->addByPrefix(HX_("singLEFT",d6,39,ef,3b),HX_("Angry Senpai LEFT NOTE",e6,16,ee,25),24,false,null(),null());
HXLINE( 298)			this->animation->addByPrefix(HX_("singRIGHT",0d,6f,70,ac),HX_("Angry Senpai RIGHT NOTE",3b,66,8e,6b),24,false,null(),null());
HXLINE( 299)			this->animation->addByPrefix(HX_("singDOWN",31,2a,ad,36),HX_("Angry Senpai DOWN NOTE",ab,fc,23,27),24,false,null(),null());
HXLINE( 301)			this->loadOffsetFile(this->curCharacter);
HXLINE( 303)			this->playAnim(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 305)			this->setGraphicSize(::Std_obj::_hx_int((this->get_width() * ( (Float)(6) ))),null());
HXLINE( 306)			this->updateHitbox();
HXLINE( 308)			this->set_antialiasing(false);
HXLINE( 293)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("spirit",31,bb,a9,bd)) ){
HXLINE( 311)			::String library = null();
HXDLIN( 311)			 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("characters/spirit",36,f9,c6,d2),library,null());
HXDLIN( 311)			this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSpriteSheetPacker(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/spirit",36,f9,c6,d2)) + HX_(".txt",02,3f,c0,1e)),HX_("TEXT",ad,94,ba,37),library)));
HXLINE( 312)			this->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("idle spirit_",02,2f,37,04),24,false,null(),null());
HXLINE( 313)			this->animation->addByPrefix(HX_("singUP",6a,52,21,b9),HX_("up_",a4,29,59,00),24,false,null(),null());
HXLINE( 314)			this->animation->addByPrefix(HX_("singRIGHT",0d,6f,70,ac),HX_("right_",03,55,26,4e),24,false,null(),null());
HXLINE( 315)			this->animation->addByPrefix(HX_("singLEFT",d6,39,ef,3b),HX_("left_",78,fe,56,72),24,false,null(),null());
HXLINE( 316)			this->animation->addByPrefix(HX_("singDOWN",31,2a,ad,36),HX_("spirit down_",8e,9f,fa,ae),24,false,null(),null());
HXLINE( 318)			this->loadOffsetFile(this->curCharacter);
HXLINE( 320)			this->setGraphicSize(::Std_obj::_hx_int((this->get_width() * ( (Float)(6) ))),null());
HXLINE( 321)			this->updateHitbox();
HXLINE( 323)			this->playAnim(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 325)			this->set_antialiasing(false);
HXLINE( 310)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("yuri",93,fc,53,50)) ){
HXLINE( 429)			::String library = null();
HXDLIN( 429)			bool isLocale = false;
HXDLIN( 429)			if (isLocale) {
HXLINE( 429)				if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("characters/Doki_Yuri_Assets",be,79,9f,c3)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library),null())) {
HXLINE( 429)					 ::flixel::graphics::FlxGraphic tex1 = ::Paths_obj::loadImage(HX_("characters/Doki_Yuri_Assets",be,79,9f,c3),library,isLocale);
HXDLIN( 429)					tex = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex1,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("characters/Doki_Yuri_Assets",be,79,9f,c3)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library));
            				}
            				else {
HXLINE( 429)					 ::flixel::graphics::FlxGraphic tex1 = ::Paths_obj::loadImage(HX_("characters/Doki_Yuri_Assets",be,79,9f,c3),library,isLocale);
HXDLIN( 429)					tex = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex1,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("characters/Doki_Yuri_Assets",be,79,9f,c3)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
            				}
            			}
            			else {
HXLINE( 429)				 ::flixel::graphics::FlxGraphic tex1 = ::Paths_obj::loadImage(HX_("characters/Doki_Yuri_Assets",be,79,9f,c3),library,null());
HXDLIN( 429)				tex = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex1,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/Doki_Yuri_Assets",be,79,9f,c3)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
            			}
HXLINE( 430)			this->set_frames(tex);
HXLINE( 431)			this->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("Yuri Idle",c1,d1,62,97),24,false,null(),null());
HXLINE( 432)			this->animation->addByPrefix(HX_("singUP",6a,52,21,b9),HX_("Yuri Sing Note Up",a5,06,32,65),24,false,null(),null());
HXLINE( 433)			this->animation->addByPrefix(HX_("singRIGHT",0d,6f,70,ac),HX_("Yuri Sing Note Right",d2,35,e0,0b),24,false,null(),null());
HXLINE( 434)			this->animation->addByPrefix(HX_("singDOWN",31,2a,ad,36),HX_("Yuri Sing Note Down",2c,bf,7f,8f),24,false,null(),null());
HXLINE( 435)			this->animation->addByPrefix(HX_("singLEFT",d6,39,ef,3b),HX_("Yuri Sing Note Left",d1,ce,c1,94),24,false,null(),null());
HXLINE( 436)			this->animation->addByPrefix(HX_("breath",a0,0a,b4,15),HX_("Yuri Breath",8d,fa,84,91),24,false,null(),null());
HXLINE( 438)			this->loadOffsetFile(this->curCharacter);
HXLINE( 440)			this->playAnim(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 427)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("yuri-crazy",97,2f,ab,1c)) ){
HXLINE( 444)			::String library = null();
HXDLIN( 444)			bool isLocale = false;
HXDLIN( 444)			if (isLocale) {
HXLINE( 444)				if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("characters/Doki_Crazy_Yuri_Assets",70,48,32,6f)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library),null())) {
HXLINE( 444)					 ::flixel::graphics::FlxGraphic tex1 = ::Paths_obj::loadImage(HX_("characters/Doki_Crazy_Yuri_Assets",70,48,32,6f),library,isLocale);
HXDLIN( 444)					tex = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex1,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("characters/Doki_Crazy_Yuri_Assets",70,48,32,6f)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library));
            				}
            				else {
HXLINE( 444)					 ::flixel::graphics::FlxGraphic tex1 = ::Paths_obj::loadImage(HX_("characters/Doki_Crazy_Yuri_Assets",70,48,32,6f),library,isLocale);
HXDLIN( 444)					tex = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex1,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("characters/Doki_Crazy_Yuri_Assets",70,48,32,6f)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
            				}
            			}
            			else {
HXLINE( 444)				 ::flixel::graphics::FlxGraphic tex1 = ::Paths_obj::loadImage(HX_("characters/Doki_Crazy_Yuri_Assets",70,48,32,6f),library,null());
HXDLIN( 444)				tex = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex1,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/Doki_Crazy_Yuri_Assets",70,48,32,6f)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
            			}
HXLINE( 445)			this->set_frames(tex);
HXLINE( 446)			this->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("Yuri Crazy Idle",10,ea,9e,a6),24,false,null(),null());
HXLINE( 447)			this->animation->addByPrefix(HX_("singUP",6a,52,21,b9),HX_("Yuri Crazy Up",57,b2,83,c0),24,false,null(),null());
HXLINE( 448)			this->animation->addByPrefix(HX_("singRIGHT",0d,6f,70,ac),HX_("Yuri Crazy Right",60,65,53,56),24,false,null(),null());
HXLINE( 449)			this->animation->addByPrefix(HX_("singDOWN",31,2a,ad,36),HX_("Yuri Crazy Down",5e,3b,59,a3),24,false,null(),null());
HXLINE( 450)			this->animation->addByPrefix(HX_("singLEFT",d6,39,ef,3b),HX_("Yuri Crazy Left",03,4b,9b,a8),24,false,null(),null());
HXLINE( 452)			this->loadOffsetFile(this->curCharacter);
HXLINE( 454)			this->playAnim(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 442)			goto _hx_goto_0;
            		}
            		_hx_goto_0:;
HXLINE( 505)		this->dance(null());
HXLINE( 507)		if (( (bool)(isPlayer) )) {
HXLINE( 509)			this->set_flipX(!(this->flipX));
HXLINE( 512)			bool _hx_tmp;
HXDLIN( 512)			bool _hx_tmp1;
HXDLIN( 512)			if (!(::StringTools_obj::startsWith(this->curCharacter,HX_("bf",c4,55,00,00)))) {
HXLINE( 512)				_hx_tmp1 = !(::StringTools_obj::startsWith(this->curCharacter,HX_("playablesenpai",4a,23,22,fd)));
            			}
            			else {
HXLINE( 512)				_hx_tmp1 = false;
            			}
HXDLIN( 512)			if (_hx_tmp1) {
HXLINE( 512)				_hx_tmp = !(::StringTools_obj::startsWith(this->curCharacter,HX_("bigmonika-dead",be,1c,41,44)));
            			}
            			else {
HXLINE( 512)				_hx_tmp = false;
            			}
HXDLIN( 512)			if (_hx_tmp) {
HXLINE( 515)				::Array< int > oldRight = ( ( ::flixel::animation::FlxAnimation)(this->animation->_animations->get(HX_("singRIGHT",0d,6f,70,ac))) )->frames;
HXLINE( 516)				( ( ::flixel::animation::FlxAnimation)(this->animation->_animations->get(HX_("singRIGHT",0d,6f,70,ac))) )->frames = ( ( ::flixel::animation::FlxAnimation)(this->animation->_animations->get(HX_("singLEFT",d6,39,ef,3b))) )->frames;
HXLINE( 517)				( ( ::flixel::animation::FlxAnimation)(this->animation->_animations->get(HX_("singLEFT",d6,39,ef,3b))) )->frames = oldRight;
HXLINE( 520)				if (::hx::IsNotNull( this->animation->_animations->get(HX_("singRIGHTmiss",89,cc,65,e3)) )) {
HXLINE( 522)					::Array< int > oldMiss = ( ( ::flixel::animation::FlxAnimation)(this->animation->_animations->get(HX_("singRIGHTmiss",89,cc,65,e3))) )->frames;
HXLINE( 523)					( ( ::flixel::animation::FlxAnimation)(this->animation->_animations->get(HX_("singRIGHTmiss",89,cc,65,e3))) )->frames = ( ( ::flixel::animation::FlxAnimation)(this->animation->_animations->get(HX_("singLEFTmiss",d2,2f,9c,b6))) )->frames;
HXLINE( 524)					( ( ::flixel::animation::FlxAnimation)(this->animation->_animations->get(HX_("singLEFTmiss",d2,2f,9c,b6))) )->frames = oldMiss;
            				}
            			}
            		}
            	}

Dynamic Character_obj::__CreateEmpty() { return new Character_obj; }

void *Character_obj::_hx_vtable = 0;

Dynamic Character_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Character_obj > _hx_result = new Character_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool Character_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x55af02e5) {
		if (inClassId<=(int)0x2c01639b) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2c01639b;
		} else {
			return inClassId==(int)0x55af02e5;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void Character_obj::loadOffsetFile(::String character){
            	HX_STACKFRAME(&_hx_pos_ae240c01d039da8e_531_loadOffsetFile)
HXLINE( 532)		::String key = ((HX_("images/characters/",2e,e1,08,ac) + character) + HX_("Offsets",60,31,b6,a4));
HXDLIN( 532)		::String library = null();
HXDLIN( 532)		::String offset = ::Paths_obj::getPath(((HX_("",00,00,00,00) + key) + HX_(".txt",02,3f,c0,1e)),HX_("TEXT",ad,94,ba,37),library);
HXDLIN( 532)		::Array< ::String > offset1 = ::CoolUtil_obj::coolTextFile(offset);
HXLINE( 534)		{
HXLINE( 534)			int _g = 0;
HXDLIN( 534)			int _g1 = offset1->length;
HXDLIN( 534)			while((_g < _g1)){
HXLINE( 534)				_g = (_g + 1);
HXDLIN( 534)				int i = (_g - 1);
HXLINE( 536)				::Array< ::String > data = offset1->__get(i).split(HX_(" ",20,00,00,00));
HXLINE( 537)				::String data1 = data->__get(0);
HXDLIN( 537)				 ::Dynamic _hx_tmp = ::Std_obj::parseInt(data->__get(1));
HXDLIN( 537)				this->addOffset(data1,_hx_tmp,::Std_obj::parseInt(data->__get(2)));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Character_obj,loadOffsetFile,(void))

void Character_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_ae240c01d039da8e_542_update)
HXLINE( 543)		if (!(this->isPlayer)) {
HXLINE( 545)			if (::StringTools_obj::startsWith(this->animation->_curAnim->name,HX_("sing",4f,96,53,4c))) {
HXLINE( 547)				 ::Character _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 547)				_hx_tmp->holdTimer = (_hx_tmp->holdTimer + elapsed);
            			}
HXLINE( 550)			if (::hx::IsNotNull( this->animation->_animations->get(HX_("idleLoop",98,93,a7,3c)) )) {
HXLINE( 552)				bool _hx_tmp;
HXDLIN( 552)				if (!(::StringTools_obj::startsWith(this->animation->_curAnim->name,HX_("sing",4f,96,53,4c)))) {
HXLINE( 552)					_hx_tmp = this->animation->_curAnim->finished;
            				}
            				else {
HXLINE( 552)					_hx_tmp = false;
            				}
HXDLIN( 552)				if (_hx_tmp) {
HXLINE( 553)					this->playAnim(HX_("idleLoop",98,93,a7,3c),null(),null(),null());
            				}
            			}
HXLINE( 556)			Float dadVar = ( (Float)(6) );
HXLINE( 558)			if ((this->curCharacter == HX_("yuri-crazy",97,2f,ab,1c))) {
HXLINE( 559)				dadVar = ( (Float)(4) );
            			}
HXLINE( 561)			if ((this->holdTimer >= ((::Conductor_obj::stepCrochet * dadVar) * ((Float)0.001)))) {
HXLINE( 563)				this->dance(null());
HXLINE( 564)				this->holdTimer = ( (Float)(0) );
            			}
            		}
HXLINE( 568)		if ((this->curCharacter == HX_("gf",1f,5a,00,00))) {
HXLINE( 571)			bool _hx_tmp;
HXDLIN( 571)			if ((this->animation->_curAnim->name == HX_("hairFall",bd,48,d6,cb))) {
HXLINE( 571)				_hx_tmp = this->animation->_curAnim->finished;
            			}
            			else {
HXLINE( 571)				_hx_tmp = false;
            			}
HXDLIN( 571)			if (_hx_tmp) {
HXLINE( 572)				this->playAnim(HX_("danceRight",a9,7f,a6,91),null(),null(),null());
            			}
            		}
HXLINE( 575)		this->super::update(elapsed);
            	}


void Character_obj::dance(::hx::Null< bool >  __o_altAnim){
            		bool altAnim = __o_altAnim.Default(false);
            	HX_STACKFRAME(&_hx_pos_ae240c01d039da8e_584_dance)
HXLINE( 585)		::String altSuffix = HX_("",00,00,00,00);
HXLINE( 587)		if (!(this->debugMode)) {
HXLINE( 589)			if (altAnim) {
HXLINE( 590)				altSuffix = HX_("-alt",1c,93,08,1e);
            			}
HXLINE( 592)			::String _hx_switch_0 = this->curCharacter;
            			if (  (_hx_switch_0==HX_("bigmonika",b3,03,a4,b8)) ){
HXLINE( 621)				if ((this->animation->_curAnim->name != HX_("lastNOTE",48,cd,3a,dc))) {
HXLINE( 622)					this->playAnim((HX_("idle",14,a7,b3,45) + altSuffix),null(),null(),null());
            				}
HXLINE( 621)				goto _hx_goto_29;
            			}
            			if (  (_hx_switch_0==HX_("gf",1f,5a,00,00)) ||  (_hx_switch_0==HX_("gf-doki",17,9e,ff,ae)) ||  (_hx_switch_0==HX_("gf-pixel",98,3e,8c,55)) ||  (_hx_switch_0==HX_("gf-realdoki",75,9f,59,a6)) ||  (_hx_switch_0==HX_("nogf-pixel",d9,47,38,6c)) ){
HXLINE( 595)				if (!(::StringTools_obj::startsWith(this->animation->_curAnim->name,HX_("hair",22,27,08,45)))) {
HXLINE( 597)					this->danced = !(this->danced);
HXLINE( 599)					if (this->danced) {
HXLINE( 600)						this->playAnim(HX_("danceRight",a9,7f,a6,91),null(),null(),null());
            					}
            					else {
HXLINE( 602)						this->playAnim(HX_("danceLeft",da,cc,f9,df),null(),null(),null());
            					}
            				}
HXLINE( 595)				goto _hx_goto_29;
            			}
            			if (  (_hx_switch_0==HX_("sayori",9b,32,38,25)) ){
HXLINE( 606)				if ((this->animation->_curAnim->name != HX_("nara",a2,76,ff,48))) {
HXLINE( 608)					this->danced = !(this->danced);
HXLINE( 610)					if (this->danced) {
HXLINE( 611)						this->playAnim(HX_("danceRight",a9,7f,a6,91),null(),null(),null());
            					}
            					else {
HXLINE( 613)						this->playAnim(HX_("danceLeft",da,cc,f9,df),null(),null(),null());
            					}
            				}
HXLINE( 606)				goto _hx_goto_29;
            			}
            			if (  (_hx_switch_0==HX_("yuri",93,fc,53,50)) ){
HXLINE( 617)				if ((this->animation->_curAnim->name != HX_("breath",a0,0a,b4,15))) {
HXLINE( 618)					this->playAnim((HX_("idle",14,a7,b3,45) + altSuffix),null(),null(),null());
            				}
HXLINE( 617)				goto _hx_goto_29;
            			}
            			/* default */{
HXLINE( 625)				this->playAnim((HX_("idle",14,a7,b3,45) + altSuffix),null(),null(),null());
            			}
            			_hx_goto_29:;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Character_obj,dance,(void))

void Character_obj::playAnim(::String AnimName,::hx::Null< bool >  __o_Force,::hx::Null< bool >  __o_Reversed,::hx::Null< int >  __o_Frame){
            		bool Force = __o_Force.Default(false);
            		bool Reversed = __o_Reversed.Default(false);
            		int Frame = __o_Frame.Default(0);
            	HX_STACKFRAME(&_hx_pos_ae240c01d039da8e_631_playAnim)
HXLINE( 632)		bool _hx_tmp;
HXDLIN( 632)		if (::StringTools_obj::endsWith(AnimName,HX_("alt",29,f9,49,00))) {
HXLINE( 632)			_hx_tmp = ::hx::IsNull( this->animation->_animations->get(AnimName) );
            		}
            		else {
HXLINE( 632)			_hx_tmp = false;
            		}
HXDLIN( 632)		if (_hx_tmp) {
HXLINE( 637)			AnimName = AnimName.split(HX_("-",2d,00,00,00))->__get(0);
            		}
HXLINE( 640)		this->animation->play(AnimName,Force,Reversed,Frame);
HXLINE( 642)		::cpp::VirtualArray daOffset = ( (::cpp::VirtualArray)(this->animOffsets->get(AnimName)) );
HXLINE( 643)		if (this->animOffsets->exists(AnimName)) {
HXLINE( 645)			this->offset->set(daOffset->__get(0),daOffset->__get(1));
            		}
            		else {
HXLINE( 648)			this->offset->set(0,0);
            		}
HXLINE( 650)		if ((this->curCharacter == HX_("gf",1f,5a,00,00))) {
HXLINE( 652)			if ((AnimName == HX_("singLEFT",d6,39,ef,3b))) {
HXLINE( 654)				this->danced = true;
            			}
            			else {
HXLINE( 656)				if ((AnimName == HX_("singRIGHT",0d,6f,70,ac))) {
HXLINE( 658)					this->danced = false;
            				}
            			}
HXLINE( 661)			bool _hx_tmp;
HXDLIN( 661)			if ((AnimName != HX_("singUP",6a,52,21,b9))) {
HXLINE( 661)				_hx_tmp = (AnimName == HX_("singDOWN",31,2a,ad,36));
            			}
            			else {
HXLINE( 661)				_hx_tmp = true;
            			}
HXDLIN( 661)			if (_hx_tmp) {
HXLINE( 663)				this->danced = !(this->danced);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(Character_obj,playAnim,(void))

void Character_obj::addOffset(::String name,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y){
            		Float x = __o_x.Default(0);
            		Float y = __o_y.Default(0);
            	HX_STACKFRAME(&_hx_pos_ae240c01d039da8e_670_addOffset)
HXDLIN( 670)		::cpp::VirtualArray v = ::Array_obj< Float >::__new(2)->init(0,x)->init(1,y);
HXDLIN( 670)		this->animOffsets->set(name,v);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Character_obj,addOffset,(void))


::hx::ObjectPtr< Character_obj > Character_obj::__new(Float x,Float y,::String __o_character, ::Dynamic __o_isPlayer) {
	::hx::ObjectPtr< Character_obj > __this = new Character_obj();
	__this->__construct(x,y,__o_character,__o_isPlayer);
	return __this;
}

::hx::ObjectPtr< Character_obj > Character_obj::__alloc(::hx::Ctx *_hx_ctx,Float x,Float y,::String __o_character, ::Dynamic __o_isPlayer) {
	Character_obj *__this = (Character_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Character_obj), true, "Character"));
	*(void **)__this = Character_obj::_hx_vtable;
	__this->__construct(x,y,__o_character,__o_isPlayer);
	return __this;
}

Character_obj::Character_obj()
{
}

void Character_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Character);
	HX_MARK_MEMBER_NAME(animOffsets,"animOffsets");
	HX_MARK_MEMBER_NAME(debugMode,"debugMode");
	HX_MARK_MEMBER_NAME(isPlayer,"isPlayer");
	HX_MARK_MEMBER_NAME(curCharacter,"curCharacter");
	HX_MARK_MEMBER_NAME(holdTimer,"holdTimer");
	HX_MARK_MEMBER_NAME(danced,"danced");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Character_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(animOffsets,"animOffsets");
	HX_VISIT_MEMBER_NAME(debugMode,"debugMode");
	HX_VISIT_MEMBER_NAME(isPlayer,"isPlayer");
	HX_VISIT_MEMBER_NAME(curCharacter,"curCharacter");
	HX_VISIT_MEMBER_NAME(holdTimer,"holdTimer");
	HX_VISIT_MEMBER_NAME(danced,"danced");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Character_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"dance") ) { return ::hx::Val( dance_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		if (HX_FIELD_EQ(inName,"danced") ) { return ::hx::Val( danced ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isPlayer") ) { return ::hx::Val( isPlayer ); }
		if (HX_FIELD_EQ(inName,"playAnim") ) { return ::hx::Val( playAnim_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"debugMode") ) { return ::hx::Val( debugMode ); }
		if (HX_FIELD_EQ(inName,"holdTimer") ) { return ::hx::Val( holdTimer ); }
		if (HX_FIELD_EQ(inName,"addOffset") ) { return ::hx::Val( addOffset_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"animOffsets") ) { return ::hx::Val( animOffsets ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"curCharacter") ) { return ::hx::Val( curCharacter ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"loadOffsetFile") ) { return ::hx::Val( loadOffsetFile_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Character_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"danced") ) { danced=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isPlayer") ) { isPlayer=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"debugMode") ) { debugMode=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"holdTimer") ) { holdTimer=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"animOffsets") ) { animOffsets=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"curCharacter") ) { curCharacter=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Character_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("animOffsets",6f,ff,7a,f8));
	outFields->push(HX_("debugMode",56,77,ac,2b));
	outFields->push(HX_("isPlayer",eb,86,22,90));
	outFields->push(HX_("curCharacter",09,86,7c,d7));
	outFields->push(HX_("holdTimer",06,82,13,a9));
	outFields->push(HX_("danced",d1,49,8f,1e));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Character_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(Character_obj,animOffsets),HX_("animOffsets",6f,ff,7a,f8)},
	{::hx::fsBool,(int)offsetof(Character_obj,debugMode),HX_("debugMode",56,77,ac,2b)},
	{::hx::fsBool,(int)offsetof(Character_obj,isPlayer),HX_("isPlayer",eb,86,22,90)},
	{::hx::fsString,(int)offsetof(Character_obj,curCharacter),HX_("curCharacter",09,86,7c,d7)},
	{::hx::fsFloat,(int)offsetof(Character_obj,holdTimer),HX_("holdTimer",06,82,13,a9)},
	{::hx::fsBool,(int)offsetof(Character_obj,danced),HX_("danced",d1,49,8f,1e)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Character_obj_sStaticStorageInfo = 0;
#endif

static ::String Character_obj_sMemberFields[] = {
	HX_("animOffsets",6f,ff,7a,f8),
	HX_("debugMode",56,77,ac,2b),
	HX_("isPlayer",eb,86,22,90),
	HX_("curCharacter",09,86,7c,d7),
	HX_("holdTimer",06,82,13,a9),
	HX_("loadOffsetFile",75,61,84,d6),
	HX_("update",09,86,05,87),
	HX_("danced",d1,49,8f,1e),
	HX_("dance",33,83,83,d4),
	HX_("playAnim",25,ea,84,30),
	HX_("addOffset",94,cc,63,18),
	::String(null()) };

::hx::Class Character_obj::__mClass;

void Character_obj::__register()
{
	Character_obj _hx_dummy;
	Character_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Character",89,bb,a4,e3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Character_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Character_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Character_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Character_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

