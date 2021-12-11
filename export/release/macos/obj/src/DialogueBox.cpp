#include <hxcpp.h>

#ifndef INCLUDED_Alphabet
#include <Alphabet.h>
#endif
#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_DialogueBox
#include <DialogueBox.h>
#endif
#ifndef INCLUDED_LangUtil
#include <LangUtil.h>
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
#ifndef INCLUDED_PlayerSettings
#include <PlayerSettings.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
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
#ifndef INCLUDED_flixel_addons_effects_chainable_FlxEffectSprite
#include <flixel/addons/effects/chainable/FlxEffectSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_effects_chainable_FlxGlitchDirection
#include <flixel/addons/effects/chainable/FlxGlitchDirection.h>
#endif
#ifndef INCLUDED_flixel_addons_effects_chainable_FlxGlitchEffect
#include <flixel/addons/effects/chainable/FlxGlitchEffect.h>
#endif
#ifndef INCLUDED_flixel_addons_effects_chainable_IFlxEffect
#include <flixel/addons/effects/chainable/IFlxEffect.h>
#endif
#ifndef INCLUDED_flixel_addons_text_FlxTypeText
#include <flixel/addons/text/FlxTypeText.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxAction
#include <flixel/input/actions/FlxAction.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionDigital
#include <flixel/input/actions/FlxActionDigital.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionSet
#include <flixel/input/actions/FlxActionSet.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMatrix
#include <flixel/math/FlxMatrix.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSoundGroup
#include <flixel/system/FlxSoundGroup.h>
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
#ifndef INCLUDED_flixel_tweens_FlxEase
#include <flixel/tweens/FlxEase.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_NumTween
#include <flixel/tweens/misc/NumTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_VarTween
#include <flixel/tweens/misc/VarTween.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimerManager
#include <flixel/util/FlxTimerManager.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
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
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_abff9fa8c13cc7a0_71_new,"DialogueBox","new",0x1f391625,"DialogueBox.new","DialogueBox.hx",71,0x0149b4eb)
HX_DEFINE_STACK_FRAME(_hx_pos_abff9fa8c13cc7a0_26_new,"DialogueBox","new",0x1f391625,"DialogueBox.new","DialogueBox.hx",26,0x0149b4eb)
static const int _hx_array_data_ffc81fb3_2[] = {
	(int)4,
};
static const int _hx_array_data_ffc81fb3_3[] = {
	(int)9,
};
HX_LOCAL_STACK_FRAME(_hx_pos_abff9fa8c13cc7a0_223_update,"DialogueBox","update",0x23306964,"DialogueBox.update","DialogueBox.hx",223,0x0149b4eb)
HX_LOCAL_STACK_FRAME(_hx_pos_abff9fa8c13cc7a0_274_endinstantly,"DialogueBox","endinstantly",0x206ef20e,"DialogueBox.endinstantly","DialogueBox.hx",274,0x0149b4eb)
HX_LOCAL_STACK_FRAME(_hx_pos_abff9fa8c13cc7a0_288_endinstantly,"DialogueBox","endinstantly",0x206ef20e,"DialogueBox.endinstantly","DialogueBox.hx",288,0x0149b4eb)
HX_LOCAL_STACK_FRAME(_hx_pos_abff9fa8c13cc7a0_265_endinstantly,"DialogueBox","endinstantly",0x206ef20e,"DialogueBox.endinstantly","DialogueBox.hx",265,0x0149b4eb)
HX_LOCAL_STACK_FRAME(_hx_pos_abff9fa8c13cc7a0_297_enddialogue,"DialogueBox","enddialogue",0xf69916b8,"DialogueBox.enddialogue","DialogueBox.hx",297,0x0149b4eb)
HX_LOCAL_STACK_FRAME(_hx_pos_abff9fa8c13cc7a0_310_enddialogue,"DialogueBox","enddialogue",0xf69916b8,"DialogueBox.enddialogue","DialogueBox.hx",310,0x0149b4eb)
HX_LOCAL_STACK_FRAME(_hx_pos_abff9fa8c13cc7a0_323_enddialogue,"DialogueBox","enddialogue",0xf69916b8,"DialogueBox.enddialogue","DialogueBox.hx",323,0x0149b4eb)
HX_LOCAL_STACK_FRAME(_hx_pos_abff9fa8c13cc7a0_342_startDialogue,"DialogueBox","startDialogue",0x59859d9f,"DialogueBox.startDialogue","DialogueBox.hx",342,0x0149b4eb)
HX_LOCAL_STACK_FRAME(_hx_pos_abff9fa8c13cc7a0_552_startDialogue,"DialogueBox","startDialogue",0x59859d9f,"DialogueBox.startDialogue","DialogueBox.hx",552,0x0149b4eb)
HX_LOCAL_STACK_FRAME(_hx_pos_abff9fa8c13cc7a0_1212_startDialogue,"DialogueBox","startDialogue",0x59859d9f,"DialogueBox.startDialogue","DialogueBox.hx",1212,0x0149b4eb)
HX_LOCAL_STACK_FRAME(_hx_pos_abff9fa8c13cc7a0_1237_cleanDialog,"DialogueBox","cleanDialog",0x0fc249f6,"DialogueBox.cleanDialog","DialogueBox.hx",1237,0x0149b4eb)
HX_LOCAL_STACK_FRAME(_hx_pos_abff9fa8c13cc7a0_1281_funnyGlitch,"DialogueBox","funnyGlitch",0x6309e8a4,"DialogueBox.funnyGlitch","DialogueBox.hx",1281,0x0149b4eb)
HX_LOCAL_STACK_FRAME(_hx_pos_abff9fa8c13cc7a0_1254_funnyGlitch,"DialogueBox","funnyGlitch",0x6309e8a4,"DialogueBox.funnyGlitch","DialogueBox.hx",1254,0x0149b4eb)
HX_LOCAL_STACK_FRAME(_hx_pos_abff9fa8c13cc7a0_35_boot,"DialogueBox","boot",0x2ad34acd,"DialogueBox.boot","DialogueBox.hx",35,0x0149b4eb)
HX_LOCAL_STACK_FRAME(_hx_pos_abff9fa8c13cc7a0_36_boot,"DialogueBox","boot",0x2ad34acd,"DialogueBox.boot","DialogueBox.hx",36,0x0149b4eb)

void DialogueBox_obj::__construct(::hx::Null< bool >  __o_isPixel,::Array< ::String > dialogueList){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::DialogueBox,_gthis) HXARGC(1)
            		void _hx_run( ::flixel::util::FlxTimer tmr){
            			HX_GC_STACKFRAME(&_hx_pos_abff9fa8c13cc7a0_71_new)
HXLINE(  72)			 ::flixel::FlxSprite fh = _gthis->bgFade;
HXDLIN(  72)			fh->set_alpha((fh->alpha + ((Float)0.139999999999999986)));
HXLINE(  73)			if ((_gthis->bgFade->alpha > ((Float)0.7))) {
HXLINE(  74)				_gthis->bgFade->set_alpha(((Float)0.7));
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            		bool isPixel = __o_isPixel.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_abff9fa8c13cc7a0_26_new)
HXLINE( 339)		this->isCommand = false;
HXLINE( 338)		this->isEnding = false;
HXLINE( 220)		this->stopspamming = false;
HXLINE( 218)		this->dialogueStarted = false;
HXLINE( 217)		this->dialogueOpened = false;
HXLINE(  39)		this->canFullSkip = true;
HXLINE(  38)		this->canSkip = true;
HXLINE(  33)		this->dialogueList = ::Array_obj< ::String >::__new(0);
HXLINE(  30)		this->curCharacter = HX_("",00,00,00,00);
HXLINE(  60)		 ::DialogueBox _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  61)		super::__construct(null(),null(),null());
HXLINE(  63)		 ::flixel::FlxSprite _hx_tmp =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-200,-200,null());
HXDLIN(  63)		int _hx_tmp1 = ::Std_obj::_hx_int((( (Float)(::flixel::FlxG_obj::width) ) * ((Float)1.3)));
HXDLIN(  63)		this->bgFade = _hx_tmp->makeGraphic(_hx_tmp1,::Std_obj::_hx_int((( (Float)(::flixel::FlxG_obj::height) ) * ((Float)1.3))),-4988968,null(),null());
HXLINE(  64)		this->bgFade->scrollFactor->set(null(),null());
HXLINE(  65)		this->bgFade->set_alpha(( (Float)(0) ));
HXLINE(  67)		if ((( (::String)(::PlayState_obj::SONG->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic)) ).toLowerCase() != HX_("epiphany",96,01,ad,7f))) {
HXLINE(  68)			this->add(this->bgFade);
            		}
HXLINE(  70)		 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(((Float)0.83), ::Dynamic(new _hx_Closure_0(_gthis)),5);
HXLINE(  77)		this->box =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-20,45,null());
HXLINE(  79)		bool hasDialog = false;
HXLINE(  80)		bool _hx_tmp2;
HXDLIN(  80)		if (::hx::IsNotEq( ::PlayState_obj::SONG->__Field(HX_("noteStyle",df,ef,aa,c1),::hx::paccDynamic),HX_("pixel",86,c6,a3,c2) )) {
HXLINE(  80)			_hx_tmp2 = isPixel;
            		}
            		else {
HXLINE(  80)			_hx_tmp2 = true;
            		}
HXDLIN(  80)		if (_hx_tmp2) {
HXLINE(  82)			hasDialog = true;
HXLINE(  83)			 ::flixel::FlxSprite _hx_tmp = this->box;
HXDLIN(  83)			::String library = null();
HXDLIN(  83)			bool isLocale = false;
HXDLIN(  83)			 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp1;
HXDLIN(  83)			if (isLocale) {
HXLINE(  83)				if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("weeb/pixelUI/dialogueBox-monika",26,f8,4c,3e)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library),null())) {
HXLINE(  83)					 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("weeb/pixelUI/dialogueBox-monika",26,f8,4c,3e),library,isLocale);
HXDLIN(  83)					_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("weeb/pixelUI/dialogueBox-monika",26,f8,4c,3e)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),library));
            				}
            				else {
HXLINE(  83)					 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("weeb/pixelUI/dialogueBox-monika",26,f8,4c,3e),library,isLocale);
HXDLIN(  83)					_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("weeb/pixelUI/dialogueBox-monika",26,f8,4c,3e)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
            				}
            			}
            			else {
HXLINE(  83)				 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("weeb/pixelUI/dialogueBox-monika",26,f8,4c,3e),library,null());
HXDLIN(  83)				_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("weeb/pixelUI/dialogueBox-monika",26,f8,4c,3e)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
            			}
HXDLIN(  83)			_hx_tmp->set_frames(_hx_tmp1);
HXLINE(  84)			this->box->animation->addByPrefix(HX_("normalOpen",91,41,38,70),HX_("Text Box Appear",bd,48,54,1a),24,false,null(),null());
HXLINE(  85)			this->box->animation->addByIndices(HX_("normal",27,72,69,30),HX_("Text Box Appear",bd,48,54,1a),::Array_obj< int >::fromData( _hx_array_data_ffc81fb3_2,1),HX_("",00,00,00,00),24,null(),null(),null());
            		}
            		else {
HXLINE(  89)			hasDialog = true;
HXLINE(  90)			 ::flixel::FlxSprite _hx_tmp = this->box;
HXDLIN(  90)			 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp1;
HXDLIN(  90)			if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/Text_Boxes",be,a1,19,d1)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("preload",c9,47,43,35)),null())) {
HXLINE(  90)				 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/Text_Boxes",be,a1,19,d1),HX_("preload",c9,47,43,35),true);
HXDLIN(  90)				_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/Text_Boxes",be,a1,19,d1)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("preload",c9,47,43,35)));
            			}
            			else {
HXLINE(  90)				 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/Text_Boxes",be,a1,19,d1),HX_("preload",c9,47,43,35),true);
HXDLIN(  90)				_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("dialogue/Text_Boxes",be,a1,19,d1)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("preload",c9,47,43,35)));
            			}
HXDLIN(  90)			_hx_tmp->set_frames(_hx_tmp1);
HXLINE(  91)			this->box->animation->addByPrefix(HX_("normalOpen",91,41,38,70),HX_("Doki Dialogue Blank",83,0e,43,d7),24,false,null(),null());
HXLINE(  92)			this->box->animation->addByIndices(HX_("normal",27,72,69,30),HX_("Doki Dialogue Blank",83,0e,43,d7),::Array_obj< int >::fromData( _hx_array_data_ffc81fb3_3,1),HX_("",00,00,00,00),24,null(),null(),null());
HXLINE(  93)			this->box->animation->addByPrefix(HX_("blankbox",37,2b,14,d6),HX_("Doki Dialogue noone",14,d8,ea,2e),24,false,null(),null());
HXLINE(  94)			this->box->animation->addByPrefix(HX_("bf",c4,55,00,00),HX_("Doki Dialogue BF",15,63,e6,b3),24,false,null(),null());
HXLINE(  95)			this->box->animation->addByPrefix(HX_("gf",1f,5a,00,00),HX_("Doki Dialogue GF",70,67,e6,b3),24,false,null(),null());
HXLINE(  96)			this->box->animation->addByPrefix(HX_("monika",f3,3a,66,c7),HX_("Doki Dialogue Moni",ce,e7,f9,4b),24,false,null(),null());
HXLINE(  97)			this->box->animation->addByPrefix(HX_("natsuki",21,00,af,bd),HX_("Doki Dialogue Natsu",f2,1a,db,b8),24,false,null(),null());
HXLINE(  98)			this->box->animation->addByPrefix(HX_("sayori",9b,32,38,25),HX_("Doki Dialogue Sayo",95,99,e6,4f),24,false,null(),null());
HXLINE(  99)			this->box->animation->addByPrefix(HX_("yuri",93,fc,53,50),HX_("Doki Dialogue Yuri0",6c,33,7a,1b),24,false,null(),null());
HXLINE( 100)			this->box->animation->addByPrefix(HX_("yuri_glitch",61,b1,9a,42),HX_("Doki Dialogue Yuri Glitch",71,28,b6,83),24,false,null(),null());
HXLINE( 101)			this->box->animation->addByPrefix(HX_("mc",56,5f,00,00),HX_("Doki Dialogue Protag",3e,ae,15,9a),24,false,null(),null());
HXLINE( 102)			this->box->set_antialiasing(true);
            		}
HXLINE( 105)		this->dialogueList = dialogueList;
HXLINE( 107)		this->backgroundImage =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXLINE( 108)		this->backgroundImage->set_x(( (Float)(0) ));
HXLINE( 109)		this->backgroundImage->set_y(( (Float)(0) ));
HXLINE( 110)		this->backgroundImage->set_antialiasing(!(isPixel));
HXLINE( 111)		this->add(this->backgroundImage);
HXLINE( 112)		this->backgroundImage->set_visible(false);
HXLINE( 114)		if (!(hasDialog)) {
HXLINE( 115)			return;
            		}
HXLINE( 117)		bool _hx_tmp3;
HXDLIN( 117)		if (::hx::IsNotEq( ::PlayState_obj::SONG->__Field(HX_("noteStyle",df,ef,aa,c1),::hx::paccDynamic),HX_("pixel",86,c6,a3,c2) )) {
HXLINE( 117)			_hx_tmp3 = isPixel;
            		}
            		else {
HXLINE( 117)			_hx_tmp3 = true;
            		}
HXDLIN( 117)		if (_hx_tmp3) {
HXLINE( 119)			this->portraitLeft =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-20,40,null());
HXLINE( 120)			 ::flixel::FlxSprite _hx_tmp = this->portraitLeft;
HXDLIN( 120)			bool isLocale = false;
HXDLIN( 120)			 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp1;
HXDLIN( 120)			if (isLocale) {
HXLINE( 120)				if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/monika",4a,2e,8d,d7)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("monika",f3,3a,66,c7)),null())) {
HXLINE( 120)					 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/monika",4a,2e,8d,d7),HX_("monika",f3,3a,66,c7),isLocale);
HXDLIN( 120)					_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/monika",4a,2e,8d,d7)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("monika",f3,3a,66,c7)));
            				}
            				else {
HXLINE( 120)					 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/monika",4a,2e,8d,d7),HX_("monika",f3,3a,66,c7),isLocale);
HXDLIN( 120)					_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("dialogue/monika",4a,2e,8d,d7)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("monika",f3,3a,66,c7)));
            				}
            			}
            			else {
HXLINE( 120)				 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/monika",4a,2e,8d,d7),HX_("monika",f3,3a,66,c7),null());
HXDLIN( 120)				_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("dialogue/monika",4a,2e,8d,d7)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("monika",f3,3a,66,c7)));
            			}
HXDLIN( 120)			_hx_tmp->set_frames(_hx_tmp1);
HXLINE( 121)			this->portraitLeft->animation->addByPrefix(HX_("enter",18,6d,86,70),HX_("Portrait Enter instance",c2,80,da,6d),24,false,null(),null());
HXLINE( 122)			 ::flixel::FlxSprite _hx_tmp2 = this->portraitLeft;
HXDLIN( 122)			Float _hx_tmp3 = this->portraitLeft->get_width();
HXDLIN( 122)			_hx_tmp2->setGraphicSize(::Std_obj::_hx_int(((_hx_tmp3 * ::PlayState_obj::daPixelZoom) * ((Float)0.9))),null());
HXLINE( 123)			this->portraitLeft->updateHitbox();
HXLINE( 124)			this->portraitLeft->scrollFactor->set(null(),null());
HXLINE( 125)			this->add(this->portraitLeft);
HXLINE( 126)			this->portraitLeft->set_visible(false);
HXLINE( 127)			this->portraitRight =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,40,null());
HXLINE( 128)			 ::flixel::FlxSprite _hx_tmp4 = this->portraitRight;
HXDLIN( 128)			bool isLocale1 = false;
HXDLIN( 128)			 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp5;
HXDLIN( 128)			if (isLocale1) {
HXLINE( 128)				if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/bf",9b,11,87,1b)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("monika",f3,3a,66,c7)),null())) {
HXLINE( 128)					 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/bf",9b,11,87,1b),HX_("monika",f3,3a,66,c7),isLocale1);
HXDLIN( 128)					_hx_tmp5 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/bf",9b,11,87,1b)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("monika",f3,3a,66,c7)));
            				}
            				else {
HXLINE( 128)					 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/bf",9b,11,87,1b),HX_("monika",f3,3a,66,c7),isLocale1);
HXDLIN( 128)					_hx_tmp5 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("dialogue/bf",9b,11,87,1b)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("monika",f3,3a,66,c7)));
            				}
            			}
            			else {
HXLINE( 128)				 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/bf",9b,11,87,1b),HX_("monika",f3,3a,66,c7),null());
HXDLIN( 128)				_hx_tmp5 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("dialogue/bf",9b,11,87,1b)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("monika",f3,3a,66,c7)));
            			}
HXDLIN( 128)			_hx_tmp4->set_frames(_hx_tmp5);
HXLINE( 129)			this->portraitRight->animation->addByPrefix(HX_("enter",18,6d,86,70),HX_("Portrait Enter instance",c2,80,da,6d),24,false,null(),null());
HXLINE( 130)			 ::flixel::FlxSprite _hx_tmp6 = this->portraitRight;
HXDLIN( 130)			Float _hx_tmp7 = this->portraitRight->get_width();
HXDLIN( 130)			_hx_tmp6->setGraphicSize(::Std_obj::_hx_int(((_hx_tmp7 * ::PlayState_obj::daPixelZoom) * ((Float)0.9))),null());
HXLINE( 131)			this->portraitRight->updateHitbox();
HXLINE( 132)			this->portraitRight->scrollFactor->set(null(),null());
HXLINE( 133)			this->add(this->portraitRight);
HXLINE( 134)			this->portraitRight->set_visible(false);
            		}
            		else {
HXLINE( 138)			int posY = 50;
HXLINE( 140)			this->portraitLeft =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,200,posY,null());
HXLINE( 141)			 ::flixel::FlxSprite _hx_tmp = this->portraitLeft;
HXDLIN( 141)			bool isLocale = false;
HXDLIN( 141)			 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp1;
HXDLIN( 141)			if (isLocale) {
HXLINE( 141)				if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/sayo_dialogue",9c,ef,a7,aa)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)),null())) {
HXLINE( 141)					 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/sayo_dialogue",9c,ef,a7,aa),HX_("doki",e9,ed,6d,42),isLocale);
HXDLIN( 141)					_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/sayo_dialogue",9c,ef,a7,aa)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            				}
            				else {
HXLINE( 141)					 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/sayo_dialogue",9c,ef,a7,aa),HX_("doki",e9,ed,6d,42),isLocale);
HXDLIN( 141)					_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("dialogue/sayo_dialogue",9c,ef,a7,aa)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            				}
            			}
            			else {
HXLINE( 141)				 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/sayo_dialogue",9c,ef,a7,aa),HX_("doki",e9,ed,6d,42),null());
HXDLIN( 141)				_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("dialogue/sayo_dialogue",9c,ef,a7,aa)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            			}
HXDLIN( 141)			_hx_tmp->set_frames(_hx_tmp1);
HXLINE( 142)			this->portraitLeft->animation->addByPrefix(HX_("sayo",e4,8d,4d,4c),HX_("sayo",e4,8d,4d,4c),24,false,null(),null());
HXLINE( 143)			 ::flixel::FlxSprite _hx_tmp2 = this->portraitLeft;
HXDLIN( 143)			_hx_tmp2->setGraphicSize(::Std_obj::_hx_int((this->portraitLeft->get_width() * ((Float).9))),null());
HXLINE( 144)			this->portraitLeft->updateHitbox();
HXLINE( 145)			this->portraitLeft->scrollFactor->set(null(),null());
HXLINE( 146)			this->portraitLeft->set_antialiasing(true);
HXLINE( 147)			this->add(this->portraitLeft);
HXLINE( 148)			this->portraitLeft->set_visible(false);
HXLINE( 150)			this->portraitRight =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,600,posY,null());
HXLINE( 151)			 ::flixel::FlxSprite _hx_tmp3 = this->portraitRight;
HXDLIN( 151)			bool isLocale1 = false;
HXDLIN( 151)			 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp4;
HXDLIN( 151)			if (isLocale1) {
HXLINE( 151)				if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/bf_dialogue",7c,87,cf,09)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)),null())) {
HXLINE( 151)					 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/bf_dialogue",7c,87,cf,09),HX_("doki",e9,ed,6d,42),isLocale1);
HXDLIN( 151)					_hx_tmp4 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/bf_dialogue",7c,87,cf,09)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            				}
            				else {
HXLINE( 151)					 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/bf_dialogue",7c,87,cf,09),HX_("doki",e9,ed,6d,42),isLocale1);
HXDLIN( 151)					_hx_tmp4 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("dialogue/bf_dialogue",7c,87,cf,09)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            				}
            			}
            			else {
HXLINE( 151)				 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/bf_dialogue",7c,87,cf,09),HX_("doki",e9,ed,6d,42),null());
HXDLIN( 151)				_hx_tmp4 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("dialogue/bf_dialogue",7c,87,cf,09)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            			}
HXDLIN( 151)			_hx_tmp3->set_frames(_hx_tmp4);
HXLINE( 152)			this->portraitRight->animation->addByPrefix(HX_("bf",c4,55,00,00),HX_("bf",c4,55,00,00),24,false,null(),null());
HXLINE( 153)			 ::flixel::FlxSprite _hx_tmp5 = this->portraitRight;
HXDLIN( 153)			_hx_tmp5->setGraphicSize(::Std_obj::_hx_int((this->portraitRight->get_width() * ((Float).9))),null());
HXLINE( 154)			this->portraitRight->updateHitbox();
HXLINE( 155)			this->portraitRight->scrollFactor->set(null(),null());
HXLINE( 156)			this->portraitRight->set_antialiasing(true);
HXLINE( 157)			this->add(this->portraitRight);
HXLINE( 158)			this->portraitRight->set_visible(false);
            		}
HXLINE( 161)		this->box->animation->play(HX_("normalOpen",91,41,38,70),null(),null(),null());
HXLINE( 162)		bool _hx_tmp4;
HXDLIN( 162)		if (::hx::IsNotEq( ::PlayState_obj::SONG->__Field(HX_("noteStyle",df,ef,aa,c1),::hx::paccDynamic),HX_("pixel",86,c6,a3,c2) )) {
HXLINE( 162)			_hx_tmp4 = isPixel;
            		}
            		else {
HXLINE( 162)			_hx_tmp4 = true;
            		}
HXDLIN( 162)		if (_hx_tmp4) {
HXLINE( 164)			 ::flixel::FlxSprite _hx_tmp = this->box;
HXDLIN( 164)			Float _hx_tmp1 = this->box->get_width();
HXDLIN( 164)			_hx_tmp->setGraphicSize(::Std_obj::_hx_int(((_hx_tmp1 * ::PlayState_obj::daPixelZoom) * ((Float)0.9))),null());
            		}
            		else {
HXLINE( 168)			 ::flixel::FlxSprite fh = this->box;
HXDLIN( 168)			fh->set_y((fh->y + 400));
HXLINE( 169)			 ::flixel::FlxSprite _hx_tmp = this->box;
HXDLIN( 169)			_hx_tmp->setGraphicSize(::Std_obj::_hx_int((this->box->get_width() * ((Float)1.2))),null());
            		}
HXLINE( 172)		this->box->updateHitbox();
HXLINE( 173)		this->add(this->box);
HXLINE( 175)		this->box->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
HXLINE( 176)		bool _hx_tmp5;
HXDLIN( 176)		if (::hx::IsNotEq( ::PlayState_obj::SONG->__Field(HX_("noteStyle",df,ef,aa,c1),::hx::paccDynamic),HX_("pixel",86,c6,a3,c2) )) {
HXLINE( 176)			_hx_tmp5 = isPixel;
            		}
            		else {
HXLINE( 176)			_hx_tmp5 = true;
            		}
HXDLIN( 176)		if (_hx_tmp5) {
HXLINE( 177)			this->portraitLeft->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
            		}
HXLINE( 179)		bool _hx_tmp6;
HXDLIN( 179)		if (::hx::IsNotEq( ::PlayState_obj::SONG->__Field(HX_("noteStyle",df,ef,aa,c1),::hx::paccDynamic),HX_("pixel",86,c6,a3,c2) )) {
HXLINE( 179)			_hx_tmp6 = isPixel;
            		}
            		else {
HXLINE( 179)			_hx_tmp6 = true;
            		}
HXDLIN( 179)		if (_hx_tmp6) {
HXLINE( 181)			this->dropText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,242,502,::Std_obj::_hx_int((this->box->get_width() * ((Float)0.6))),HX_("",00,00,00,00),42,null());
HXLINE( 182)			 ::flixel::text::FlxText _hx_tmp = this->dropText;
HXDLIN( 182)			_hx_tmp->set_font(::LangUtil_obj::getFont(HX_("pixel",86,c6,a3,c2)));
HXLINE( 183)			this->dropText->set_color(-2583404);
HXLINE( 184)			this->add(this->dropText);
HXLINE( 186)			this->swagDialogue =  ::flixel::addons::text::FlxTypeText_obj::__alloc( HX_CTX ,( (Float)(240) ),( (Float)(500) ),::Std_obj::_hx_int((this->box->get_width() * ((Float)0.6))),HX_("",00,00,00,00),42,null());
HXLINE( 187)			 ::flixel::addons::text::FlxTypeText _hx_tmp1 = this->swagDialogue;
HXDLIN( 187)			_hx_tmp1->set_font(::LangUtil_obj::getFont(HX_("pixel",86,c6,a3,c2)));
HXLINE( 188)			this->swagDialogue->set_color(-12640223);
HXLINE( 189)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp2 = ::flixel::FlxG_obj::sound;
HXDLIN( 189)			 ::flixel::_hx_system::FlxSound _hx_tmp3 = _hx_tmp2->load(::Paths_obj::sound(HX_("pixelText",53,7a,83,06),null()),((Float)0.8),null(),null(),null(),null(),null(),null(),null());
HXDLIN( 189)			this->swagDialogue->sounds = ::Array_obj< ::Dynamic>::__new(1)->init(0,_hx_tmp3);
HXLINE( 190)			this->add(this->swagDialogue);
            		}
            		else {
HXLINE( 194)			this->swagDialogue =  ::flixel::addons::text::FlxTypeText_obj::__alloc( HX_CTX ,( (Float)(220) ),( (Float)(520) ),::Std_obj::_hx_int((this->box->get_width() * ((Float)0.85))),HX_("",00,00,00,00),28,null());
HXLINE( 195)			 ::flixel::addons::text::FlxTypeText _hx_tmp = this->swagDialogue;
HXDLIN( 195)			_hx_tmp->set_font(::LangUtil_obj::getFont(HX_("aller",ce,9b,93,21)));
HXLINE( 196)			this->swagDialogue->set_color(-1);
HXLINE( 197)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp1 = ::flixel::FlxG_obj::sound;
HXDLIN( 197)			 ::flixel::_hx_system::FlxSound _hx_tmp2 = _hx_tmp1->load(::Paths_obj::sound(HX_("pixelText",53,7a,83,06),null()),((Float)0.8),null(),null(),null(),null(),null(),null(),null());
HXDLIN( 197)			this->swagDialogue->sounds = ::Array_obj< ::Dynamic>::__new(1)->init(0,_hx_tmp2);
HXLINE( 198)			{
HXLINE( 198)				 ::flixel::addons::text::FlxTypeText _this = this->swagDialogue;
HXDLIN( 198)				_this->set_borderStyle(::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn());
HXDLIN( 198)				_this->set_borderColor(-16777216);
HXDLIN( 198)				_this->set_borderSize(( (Float)(1) ));
HXDLIN( 198)				_this->set_borderQuality(( (Float)(1) ));
            			}
HXLINE( 199)			this->swagDialogue->set_antialiasing(true);
HXLINE( 200)			this->add(this->swagDialogue);
            		}
HXLINE( 203)		this->skipText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,5,695,640,::LangUtil_obj::getString(HX_("descDialogueSkip",a8,3b,f0,dd)),40,null());
HXLINE( 204)		this->skipText->scrollFactor->set(0,0);
HXLINE( 205)		 ::flixel::text::FlxText _hx_tmp7 = this->skipText;
HXDLIN( 205)		_hx_tmp7->setFormat(::LangUtil_obj::getFont(null()),20,-1,HX_("left",07,08,b0,47),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE( 206)		this->skipText->set_borderSize(( (Float)(2) ));
HXLINE( 207)		this->skipText->set_borderQuality(( (Float)(1) ));
HXLINE( 208)		this->skipText->set_antialiasing(true);
HXLINE( 209)		this->add(this->skipText);
HXLINE( 211)		 ::flixel::FlxSprite _hx_tmp8 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN( 211)		int _hx_tmp9 = ::Std_obj::_hx_int((( (Float)(::flixel::FlxG_obj::width) ) * ((Float)1.3)));
HXDLIN( 211)		this->blackscreen = _hx_tmp8->makeGraphic(_hx_tmp9,::Std_obj::_hx_int((( (Float)(::flixel::FlxG_obj::height) ) * ((Float)1.3))),-16777216,null(),null());
HXLINE( 212)		this->blackscreen->scrollFactor->set(null(),null());
HXLINE( 213)		this->blackscreen->set_alpha(( (Float)(0) ));
HXLINE( 214)		this->dialogue =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(80) ),HX_("",00,00,00,00),false,true);
            	}

Dynamic DialogueBox_obj::__CreateEmpty() { return new DialogueBox_obj; }

void *DialogueBox_obj::_hx_vtable = 0;

Dynamic DialogueBox_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DialogueBox_obj > _hx_result = new DialogueBox_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool DialogueBox_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2c01639b) {
		if (inClassId<=(int)0x288ce903) {
			if (inClassId<=(int)0x04b35cb7) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x04b35cb7;
			} else {
				return inClassId==(int)0x288ce903;
			}
		} else {
			return inClassId==(int)0x2c01639b;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void DialogueBox_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_abff9fa8c13cc7a0_223_update)
HXLINE( 224)		bool _hx_tmp;
HXDLIN( 224)		if (::hx::IsNotEq( ::PlayState_obj::SONG->__Field(HX_("noteStyle",df,ef,aa,c1),::hx::paccDynamic),HX_("pixel",86,c6,a3,c2) )) {
HXLINE( 224)			_hx_tmp = ::DialogueBox_obj::isPixel;
            		}
            		else {
HXLINE( 224)			_hx_tmp = true;
            		}
HXDLIN( 224)		if (_hx_tmp) {
HXLINE( 226)			this->dropText->set_text(this->swagDialogue->text);
            		}
HXLINE( 229)		if (::hx::IsNotNull( this->box->animation->_curAnim )) {
HXLINE( 231)			bool _hx_tmp;
HXDLIN( 231)			if ((this->box->animation->_curAnim->name == HX_("normalOpen",91,41,38,70))) {
HXLINE( 231)				_hx_tmp = this->box->animation->_curAnim->finished;
            			}
            			else {
HXLINE( 231)				_hx_tmp = false;
            			}
HXDLIN( 231)			if (_hx_tmp) {
HXLINE( 233)				this->box->animation->play(HX_("normal",27,72,69,30),null(),null(),null());
HXLINE( 234)				this->dialogueOpened = true;
            			}
            		}
HXLINE( 238)		bool _hx_tmp1;
HXDLIN( 238)		if (this->dialogueOpened) {
HXLINE( 238)			_hx_tmp1 = !(this->dialogueStarted);
            		}
            		else {
HXLINE( 238)			_hx_tmp1 = false;
            		}
HXDLIN( 238)		if (_hx_tmp1) {
HXLINE( 240)			this->startDialogue();
HXLINE( 241)			this->dialogueStarted = true;
            		}
HXLINE( 244)		bool _hx_tmp2;
HXDLIN( 244)		bool _hx_tmp3;
HXDLIN( 244)		bool _hx_tmp4;
HXDLIN( 244)		bool _hx_tmp5;
HXDLIN( 244)		if (::PlayerSettings_obj::player1->controls->_back->check()) {
HXLINE( 244)			_hx_tmp5 = !(this->stopspamming);
            		}
            		else {
HXLINE( 244)			_hx_tmp5 = false;
            		}
HXDLIN( 244)		if (_hx_tmp5) {
HXLINE( 244)			_hx_tmp4 = this->canSkip;
            		}
            		else {
HXLINE( 244)			_hx_tmp4 = false;
            		}
HXDLIN( 244)		if (_hx_tmp4) {
HXLINE( 244)			_hx_tmp3 = this->canFullSkip;
            		}
            		else {
HXLINE( 244)			_hx_tmp3 = false;
            		}
HXDLIN( 244)		if (_hx_tmp3) {
HXLINE( 244)			_hx_tmp2 = this->dialogueStarted;
            		}
            		else {
HXLINE( 244)			_hx_tmp2 = false;
            		}
HXDLIN( 244)		if (_hx_tmp2) {
HXLINE( 246)			this->isEnding = true;
HXLINE( 247)			this->stopspamming = true;
HXLINE( 248)			this->remove(this->dialogue,null());
HXLINE( 249)			this->dialogueStarted = false;
HXLINE( 250)			this->endinstantly();
            		}
HXLINE( 253)		bool _hx_tmp6;
HXDLIN( 253)		bool _hx_tmp7;
HXDLIN( 253)		if (::PlayerSettings_obj::player1->controls->_accept->check()) {
HXLINE( 253)			_hx_tmp7 = this->dialogueStarted;
            		}
            		else {
HXLINE( 253)			_hx_tmp7 = false;
            		}
HXDLIN( 253)		if (_hx_tmp7) {
HXLINE( 253)			_hx_tmp6 = this->canSkip;
            		}
            		else {
HXLINE( 253)			_hx_tmp6 = false;
            		}
HXDLIN( 253)		if (_hx_tmp6) {
HXLINE( 255)			this->remove(this->dialogue,null());
HXLINE( 257)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 257)			_hx_tmp->play(::Paths_obj::sound(HX_("clickText",15,39,f9,2b),null()),((Float)0.8),null(),null(),null(),null());
HXLINE( 258)			this->enddialogue();
            		}
HXLINE( 261)		this->super::update(elapsed);
            	}


void DialogueBox_obj::endinstantly(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::DialogueBox,_gthis) HXARGC(1)
            		void _hx_run( ::flixel::util::FlxTimer tmr){
            			HX_GC_STACKFRAME(&_hx_pos_abff9fa8c13cc7a0_274_endinstantly)
HXLINE( 275)			 ::flixel::text::FlxText fh = _gthis->skipText;
HXDLIN( 275)			fh->set_alpha((fh->alpha - ((Float)1.)));
HXLINE( 276)			 ::flixel::FlxSprite fh1 = _gthis->box;
HXDLIN( 276)			fh1->set_alpha((fh1->alpha - ((Float)0.2)));
HXLINE( 277)			 ::flixel::FlxSprite fh2 = _gthis->bgFade;
HXDLIN( 277)			fh2->set_alpha((fh2->alpha - ((Float)0.139999999999999986)));
HXLINE( 278)			_gthis->portraitLeft->set_visible(false);
HXLINE( 279)			_gthis->portraitRight->set_visible(false);
HXLINE( 280)			 ::flixel::addons::text::FlxTypeText fh3 = _gthis->swagDialogue;
HXDLIN( 280)			fh3->set_alpha((fh3->alpha - ((Float)1.)));
HXLINE( 281)			bool _hx_tmp;
HXDLIN( 281)			if (::hx::IsNotEq( ::PlayState_obj::SONG->__Field(HX_("noteStyle",df,ef,aa,c1),::hx::paccDynamic),HX_("pixel",86,c6,a3,c2) )) {
HXLINE( 281)				_hx_tmp = ::DialogueBox_obj::isPixel;
            			}
            			else {
HXLINE( 281)				_hx_tmp = true;
            			}
HXDLIN( 281)			if (_hx_tmp) {
HXLINE( 283)				_gthis->dropText->set_alpha(_gthis->swagDialogue->alpha);
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::DialogueBox,_gthis) HXARGC(1)
            		void _hx_run( ::flixel::util::FlxTimer tmr){
            			HX_GC_STACKFRAME(&_hx_pos_abff9fa8c13cc7a0_288_endinstantly)
HXLINE( 289)			::DialogueBox_obj::isPixel = false;
HXLINE( 290)			::DialogueBox_obj::isEpiphany = false;
HXLINE( 291)			_gthis->finishThing();
HXLINE( 292)			_gthis->kill();
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_abff9fa8c13cc7a0_265_endinstantly)
HXDLIN( 265)		 ::DialogueBox _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 266)		this->canSkip = false;
HXLINE( 267)		this->isEnding = true;
HXLINE( 268)		this->dialogueList->remove(this->dialogueList->__get(0));
HXLINE( 270)		if (::hx::IsNotNull( ::flixel::FlxG_obj::sound->music )) {
HXLINE( 271)			 ::flixel::_hx_system::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN( 271)			 ::Dynamic To = 0;
HXDLIN( 271)			 ::Dynamic onComplete = null();
HXDLIN( 271)			if (::hx::IsNull( To )) {
HXLINE( 271)				To = 0;
            			}
HXDLIN( 271)			if (::hx::IsNotNull( _this->fadeTween )) {
HXLINE( 271)				_this->fadeTween->cancel();
            			}
HXDLIN( 271)			_this->fadeTween = ::flixel::tweens::FlxTween_obj::num(_this->_volume,( (Float)(To) ),((Float)0.5), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("onComplete",f8,d4,7e,5d),onComplete)),_this->volumeTween_dyn());
            		}
HXLINE( 273)		 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(((Float)0.2), ::Dynamic(new _hx_Closure_0(_gthis)),5);
HXLINE( 287)		 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(((Float)1.2), ::Dynamic(new _hx_Closure_1(_gthis)),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(DialogueBox_obj,endinstantly,(void))

void DialogueBox_obj::enddialogue(){
            	HX_GC_STACKFRAME(&_hx_pos_abff9fa8c13cc7a0_297_enddialogue)
HXDLIN( 297)		 ::DialogueBox _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 298)		this->canSkip = true;
HXLINE( 299)		bool _hx_tmp;
HXDLIN( 299)		if (::hx::IsNull( this->dialogueList->__get(1) )) {
HXLINE( 299)			_hx_tmp = ::hx::IsNotNull( this->dialogueList->__get(0) );
            		}
            		else {
HXLINE( 299)			_hx_tmp = false;
            		}
HXDLIN( 299)		if (_hx_tmp) {
HXLINE( 301)			if (!(this->isEnding)) {
            				HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::DialogueBox,_gthis) HXARGC(1)
            				void _hx_run( ::flixel::util::FlxTimer tmr){
            					HX_GC_STACKFRAME(&_hx_pos_abff9fa8c13cc7a0_310_enddialogue)
HXLINE( 311)					 ::flixel::FlxSprite fh = _gthis->box;
HXDLIN( 311)					fh->set_alpha((fh->alpha - ((Float)0.2)));
HXLINE( 312)					 ::flixel::FlxSprite fh1 = _gthis->bgFade;
HXDLIN( 312)					fh1->set_alpha((fh1->alpha - ((Float)0.139999999999999986)));
HXLINE( 313)					_gthis->portraitLeft->set_visible(false);
HXLINE( 314)					_gthis->portraitRight->set_visible(false);
HXLINE( 315)					 ::flixel::addons::text::FlxTypeText fh2 = _gthis->swagDialogue;
HXDLIN( 315)					fh2->set_alpha((fh2->alpha - ((Float)0.2)));
HXLINE( 316)					bool _hx_tmp;
HXDLIN( 316)					if (::hx::IsNotEq( ::PlayState_obj::SONG->__Field(HX_("noteStyle",df,ef,aa,c1),::hx::paccDynamic),HX_("pixel",86,c6,a3,c2) )) {
HXLINE( 316)						_hx_tmp = ::DialogueBox_obj::isPixel;
            					}
            					else {
HXLINE( 316)						_hx_tmp = true;
            					}
HXDLIN( 316)					if (_hx_tmp) {
HXLINE( 318)						_gthis->dropText->set_alpha(_gthis->swagDialogue->alpha);
            					}
            				}
            				HX_END_LOCAL_FUNC1((void))

            				HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::DialogueBox,_gthis) HXARGC(1)
            				void _hx_run( ::flixel::util::FlxTimer tmr){
            					HX_GC_STACKFRAME(&_hx_pos_abff9fa8c13cc7a0_323_enddialogue)
HXLINE( 324)					::DialogueBox_obj::isPixel = false;
HXLINE( 325)					::DialogueBox_obj::isEpiphany = false;
HXLINE( 326)					_gthis->finishThing();
HXLINE( 327)					_gthis->kill();
            				}
            				HX_END_LOCAL_FUNC1((void))

HXLINE( 303)				this->canSkip = false;
HXLINE( 304)				this->isEnding = true;
HXLINE( 306)				if (::hx::IsNotNull( ::flixel::FlxG_obj::sound->music )) {
HXLINE( 307)					 ::flixel::_hx_system::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN( 307)					 ::Dynamic To = 0;
HXDLIN( 307)					 ::Dynamic onComplete = null();
HXDLIN( 307)					if (::hx::IsNull( To )) {
HXLINE( 307)						To = 0;
            					}
HXDLIN( 307)					if (::hx::IsNotNull( _this->fadeTween )) {
HXLINE( 307)						_this->fadeTween->cancel();
            					}
HXDLIN( 307)					_this->fadeTween = ::flixel::tweens::FlxTween_obj::num(_this->_volume,( (Float)(To) ),((Float)0.5), ::Dynamic(::hx::Anon_obj::Create(1)
            						->setFixed(0,HX_("onComplete",f8,d4,7e,5d),onComplete)),_this->volumeTween_dyn());
            				}
HXLINE( 309)				 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(((Float)0.2), ::Dynamic(new _hx_Closure_0(_gthis)),5);
HXLINE( 322)				 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(((Float)1.2), ::Dynamic(new _hx_Closure_1(_gthis)),null());
            			}
            		}
            		else {
HXLINE( 333)			this->dialogueList->remove(this->dialogueList->__get(0));
HXLINE( 334)			this->startDialogue();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(DialogueBox_obj,enddialogue,(void))

void DialogueBox_obj::startDialogue(){
            	HX_STACKFRAME(&_hx_pos_abff9fa8c13cc7a0_342_startDialogue)
HXDLIN( 342)		 ::DialogueBox _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 343)		this->isCommand = false;
HXLINE( 344)		this->cleanDialog();
HXLINE( 345)		if ((this->box->visible == false)) {
HXLINE( 347)			this->bgFade->set_visible(true);
HXLINE( 348)			this->box->set_visible(true);
            		}
HXLINE( 351)		this->swagDialogue->resetText(this->dialogueList->__get(0));
HXLINE( 352)		this->swagDialogue->start(((Float)0.04),true,null(),null(),null());
HXLINE( 353)		bool _hx_tmp;
HXDLIN( 353)		if (::hx::IsNotEq( ::PlayState_obj::SONG->__Field(HX_("noteStyle",df,ef,aa,c1),::hx::paccDynamic),HX_("pixel",86,c6,a3,c2) )) {
HXLINE( 353)			_hx_tmp = ::DialogueBox_obj::isPixel;
            		}
            		else {
HXLINE( 353)			_hx_tmp = true;
            		}
HXDLIN( 353)		if (_hx_tmp) {
HXLINE( 355)			::String _hx_switch_0 = this->curCharacter;
            			if (  (_hx_switch_0==HX_("autoskip",6e,d9,a1,44)) ){
HXLINE( 526)				this->canSkip = false;
HXLINE( 527)				this->swagDialogue->completeCallback = this->enddialogue_dyn();
HXLINE( 525)				goto _hx_goto_11;
            			}
            			if (  (_hx_switch_0==HX_("bf",c4,55,00,00)) ){
HXLINE( 438)				this->portraitRight->set_visible(false);
HXLINE( 439)				this->portraitLeft->set_visible(false);
HXLINE( 440)				if (!(this->portraitRight->visible)) {
HXLINE( 442)					this->portraitRight->set_visible(true);
HXLINE( 443)					 ::flixel::FlxSprite _hx_tmp = this->portraitRight;
HXDLIN( 443)					bool isLocale = false;
HXDLIN( 443)					 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp1;
HXDLIN( 443)					if (isLocale) {
HXLINE( 443)						if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/bf",9b,11,87,1b)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("monika",f3,3a,66,c7)),null())) {
HXLINE( 443)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/bf",9b,11,87,1b),HX_("monika",f3,3a,66,c7),isLocale);
HXDLIN( 443)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/bf",9b,11,87,1b)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("monika",f3,3a,66,c7)));
            						}
            						else {
HXLINE( 443)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/bf",9b,11,87,1b),HX_("monika",f3,3a,66,c7),isLocale);
HXDLIN( 443)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("dialogue/bf",9b,11,87,1b)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("monika",f3,3a,66,c7)));
            						}
            					}
            					else {
HXLINE( 443)						 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/bf",9b,11,87,1b),HX_("monika",f3,3a,66,c7),null());
HXDLIN( 443)						_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("dialogue/bf",9b,11,87,1b)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("monika",f3,3a,66,c7)));
            					}
HXDLIN( 443)					_hx_tmp->set_frames(_hx_tmp1);
HXLINE( 444)					this->portraitRight->animation->addByPrefix(HX_("enter",18,6d,86,70),HX_("Portrait Enter instance",c2,80,da,6d),24,false,null(),null());
HXLINE( 445)					this->portraitRight->animation->play(HX_("enter",18,6d,86,70),null(),null(),null());
            				}
HXLINE( 437)				goto _hx_goto_11;
            			}
            			if (  (_hx_switch_0==HX_("bfangry",dd,8c,80,d6)) ){
HXLINE( 458)				this->portraitRight->set_visible(false);
HXLINE( 459)				this->portraitLeft->set_visible(false);
HXLINE( 460)				if (!(this->portraitRight->visible)) {
HXLINE( 462)					this->portraitRight->set_visible(true);
HXLINE( 463)					 ::flixel::FlxSprite _hx_tmp = this->portraitRight;
HXDLIN( 463)					bool isLocale = false;
HXDLIN( 463)					 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp1;
HXDLIN( 463)					if (isLocale) {
HXLINE( 463)						if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/bfangry",a6,85,6e,e8)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("monika",f3,3a,66,c7)),null())) {
HXLINE( 463)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/bfangry",a6,85,6e,e8),HX_("monika",f3,3a,66,c7),isLocale);
HXDLIN( 463)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/bfangry",a6,85,6e,e8)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("monika",f3,3a,66,c7)));
            						}
            						else {
HXLINE( 463)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/bfangry",a6,85,6e,e8),HX_("monika",f3,3a,66,c7),isLocale);
HXDLIN( 463)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("dialogue/bfangry",a6,85,6e,e8)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("monika",f3,3a,66,c7)));
            						}
            					}
            					else {
HXLINE( 463)						 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/bfangry",a6,85,6e,e8),HX_("monika",f3,3a,66,c7),null());
HXDLIN( 463)						_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("dialogue/bfangry",a6,85,6e,e8)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("monika",f3,3a,66,c7)));
            					}
HXDLIN( 463)					_hx_tmp->set_frames(_hx_tmp1);
HXLINE( 464)					this->portraitRight->animation->addByPrefix(HX_("enter",18,6d,86,70),HX_("Portrait Enter instance",c2,80,da,6d),24,false,null(),null());
HXLINE( 465)					this->portraitRight->animation->play(HX_("enter",18,6d,86,70),null(),null(),null());
            				}
HXLINE( 457)				goto _hx_goto_11;
            			}
            			if (  (_hx_switch_0==HX_("bfwhat",08,2b,d0,38)) ){
HXLINE( 448)				this->portraitRight->set_visible(false);
HXLINE( 449)				this->portraitLeft->set_visible(false);
HXLINE( 450)				if (!(this->portraitRight->visible)) {
HXLINE( 452)					this->portraitRight->set_visible(true);
HXLINE( 453)					 ::flixel::FlxSprite _hx_tmp = this->portraitRight;
HXDLIN( 453)					bool isLocale = false;
HXDLIN( 453)					 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp1;
HXDLIN( 453)					if (isLocale) {
HXLINE( 453)						if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/bfwhat",5f,1e,f7,48)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("monika",f3,3a,66,c7)),null())) {
HXLINE( 453)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/bfwhat",5f,1e,f7,48),HX_("monika",f3,3a,66,c7),isLocale);
HXDLIN( 453)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/bfwhat",5f,1e,f7,48)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("monika",f3,3a,66,c7)));
            						}
            						else {
HXLINE( 453)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/bfwhat",5f,1e,f7,48),HX_("monika",f3,3a,66,c7),isLocale);
HXDLIN( 453)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("dialogue/bfwhat",5f,1e,f7,48)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("monika",f3,3a,66,c7)));
            						}
            					}
            					else {
HXLINE( 453)						 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/bfwhat",5f,1e,f7,48),HX_("monika",f3,3a,66,c7),null());
HXDLIN( 453)						_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("dialogue/bfwhat",5f,1e,f7,48)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("monika",f3,3a,66,c7)));
            					}
HXDLIN( 453)					_hx_tmp->set_frames(_hx_tmp1);
HXLINE( 454)					this->portraitRight->animation->addByPrefix(HX_("enter",18,6d,86,70),HX_("Portrait Enter instance",c2,80,da,6d),24,false,null(),null());
HXLINE( 455)					this->portraitRight->animation->play(HX_("enter",18,6d,86,70),null(),null(),null());
            				}
HXLINE( 447)				goto _hx_goto_11;
            			}
            			if (  (_hx_switch_0==HX_("crash",e7,bf,4f,4c)) ){
HXLINE( 531)				::Sys_obj::exit(0);
HXDLIN( 531)				goto _hx_goto_11;
            			}
            			if (  (_hx_switch_0==HX_("disableskip",67,94,8c,31)) ){
HXLINE( 559)				this->skipText->set_visible(false);
HXLINE( 560)				this->canFullSkip = false;
HXLINE( 561)				this->enddialogue();
HXLINE( 558)				goto _hx_goto_11;
            			}
            			if (  (_hx_switch_0==HX_("endmusic",ea,f2,2a,7b)) ){
HXLINE( 516)				if (::hx::IsNotNull( ::flixel::FlxG_obj::sound->music )) {
HXLINE( 517)					 ::flixel::_hx_system::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN( 517)					 ::Dynamic To = 0;
HXDLIN( 517)					 ::Dynamic onComplete = null();
HXDLIN( 517)					if (::hx::IsNull( To )) {
HXLINE( 517)						To = 0;
            					}
HXDLIN( 517)					if (::hx::IsNotNull( _this->fadeTween )) {
HXLINE( 517)						_this->fadeTween->cancel();
            					}
HXDLIN( 517)					_this->fadeTween = ::flixel::tweens::FlxTween_obj::num(_this->_volume,( (Float)(To) ),((Float)0.5), ::Dynamic(::hx::Anon_obj::Create(1)
            						->setFixed(0,HX_("onComplete",f8,d4,7e,5d),onComplete)),_this->volumeTween_dyn());
            				}
HXLINE( 518)				this->enddialogue();
HXLINE( 515)				goto _hx_goto_11;
            			}
            			if (  (_hx_switch_0==HX_("fadeout",92,80,54,31)) ){
            				HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::DialogueBox,_gthis) HXARGC(1)
            				void _hx_run( ::flixel::tweens::FlxTween twn){
            					HX_STACKFRAME(&_hx_pos_abff9fa8c13cc7a0_552_startDialogue)
HXLINE( 553)					::haxe::Log_obj::trace(HX_("Did I work?",36,ee,a9,1b),::hx::SourceInfo(HX_("source/DialogueBox.hx",df,86,e3,ca),553,HX_("DialogueBox",b3,1f,c8,ff),HX_("startDialogue",9a,8f,4f,ac)));
HXLINE( 554)					_gthis->endinstantly();
            				}
            				HX_END_LOCAL_FUNC1((void))

HXLINE( 546)				this->canSkip = false;
HXLINE( 547)				this->add(this->blackscreen);
HXLINE( 548)				this->blackscreen->set_alpha(( (Float)(0) ));
HXLINE( 549)				::flixel::tweens::FlxTween_obj::tween(this->blackscreen, ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("alpha",5e,a7,96,21),1)),5, ::Dynamic(::hx::Anon_obj::Create(2)
            					->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::expoOut_dyn())
            					->setFixed(1,HX_("onComplete",f8,d4,7e,5d), ::Dynamic(new _hx_Closure_0(_gthis)))));
HXLINE( 545)				goto _hx_goto_11;
            			}
            			if (  (_hx_switch_0==HX_("glitch",f5,93,c8,a3)) ){
HXLINE( 520)				this->canSkip = false;
HXLINE( 521)				this->isCommand = true;
HXLINE( 523)				this->funnyGlitch();
HXLINE( 519)				goto _hx_goto_11;
            			}
            			if (  (_hx_switch_0==HX_("hidebackground",30,0f,02,5f)) ){
HXLINE( 542)				this->enddialogue();
HXLINE( 543)				this->backgroundImage->set_visible(false);
HXLINE( 541)				goto _hx_goto_11;
            			}
            			if (  (_hx_switch_0==HX_("hidebgfade",03,04,e6,23)) ){
HXLINE( 567)				this->bgFade->set_alpha(( (Float)(0) ));
HXDLIN( 567)				goto _hx_goto_11;
            			}
            			if (  (_hx_switch_0==HX_("hidedialogue",da,f3,e7,8e)) ){
HXLINE( 563)				this->box->set_visible(false);
HXLINE( 564)				this->portraitRight->set_visible(false);
HXLINE( 565)				this->portraitLeft->set_visible(false);
HXLINE( 562)				goto _hx_goto_11;
            			}
            			if (  (_hx_switch_0==HX_("monika",f3,3a,66,c7)) ){
HXLINE( 358)				this->portraitRight->set_visible(false);
HXLINE( 359)				this->portraitLeft->set_visible(false);
HXLINE( 360)				if (!(this->portraitLeft->visible)) {
HXLINE( 362)					this->portraitLeft->set_visible(true);
HXLINE( 363)					 ::flixel::FlxSprite _hx_tmp = this->portraitLeft;
HXDLIN( 363)					bool isLocale = false;
HXDLIN( 363)					 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp1;
HXDLIN( 363)					if (isLocale) {
HXLINE( 363)						if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/monika",4a,2e,8d,d7)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("monika",f3,3a,66,c7)),null())) {
HXLINE( 363)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/monika",4a,2e,8d,d7),HX_("monika",f3,3a,66,c7),isLocale);
HXDLIN( 363)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/monika",4a,2e,8d,d7)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("monika",f3,3a,66,c7)));
            						}
            						else {
HXLINE( 363)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/monika",4a,2e,8d,d7),HX_("monika",f3,3a,66,c7),isLocale);
HXDLIN( 363)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("dialogue/monika",4a,2e,8d,d7)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("monika",f3,3a,66,c7)));
            						}
            					}
            					else {
HXLINE( 363)						 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/monika",4a,2e,8d,d7),HX_("monika",f3,3a,66,c7),null());
HXDLIN( 363)						_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("dialogue/monika",4a,2e,8d,d7)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("monika",f3,3a,66,c7)));
            					}
HXDLIN( 363)					_hx_tmp->set_frames(_hx_tmp1);
HXLINE( 364)					this->portraitLeft->animation->addByPrefix(HX_("enter",18,6d,86,70),HX_("Portrait Enter instance",c2,80,da,6d),24,false,null(),null());
HXLINE( 365)					this->portraitLeft->animation->play(HX_("enter",18,6d,86,70),null(),null(),null());
            				}
HXLINE( 357)				goto _hx_goto_11;
            			}
            			if (  (_hx_switch_0==HX_("monikagasp",aa,29,c9,de)) ){
HXLINE( 378)				this->portraitRight->set_visible(false);
HXLINE( 379)				this->portraitLeft->set_visible(false);
HXLINE( 380)				if (!(this->portraitRight->visible)) {
HXLINE( 382)					this->portraitRight->set_visible(true);
HXLINE( 383)					 ::flixel::FlxSprite _hx_tmp = this->portraitRight;
HXDLIN( 383)					bool isLocale = false;
HXDLIN( 383)					 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp1;
HXDLIN( 383)					if (isLocale) {
HXLINE( 383)						if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/monikagasp",81,14,c2,70)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("monika",f3,3a,66,c7)),null())) {
HXLINE( 383)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/monikagasp",81,14,c2,70),HX_("monika",f3,3a,66,c7),isLocale);
HXDLIN( 383)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/monikagasp",81,14,c2,70)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("monika",f3,3a,66,c7)));
            						}
            						else {
HXLINE( 383)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/monikagasp",81,14,c2,70),HX_("monika",f3,3a,66,c7),isLocale);
HXDLIN( 383)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("dialogue/monikagasp",81,14,c2,70)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("monika",f3,3a,66,c7)));
            						}
            					}
            					else {
HXLINE( 383)						 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/monikagasp",81,14,c2,70),HX_("monika",f3,3a,66,c7),null());
HXDLIN( 383)						_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("dialogue/monikagasp",81,14,c2,70)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("monika",f3,3a,66,c7)));
            					}
HXDLIN( 383)					_hx_tmp->set_frames(_hx_tmp1);
HXLINE( 384)					this->portraitRight->animation->addByPrefix(HX_("enter",18,6d,86,70),HX_("Portrait Enter instance",c2,80,da,6d),24,false,null(),null());
HXLINE( 385)					this->portraitRight->animation->play(HX_("enter",18,6d,86,70),null(),null(),null());
            				}
HXLINE( 377)				goto _hx_goto_11;
            			}
            			if (  (_hx_switch_0==HX_("monikagaspleft",b1,4e,e0,0e)) ){
HXLINE( 388)				this->portraitRight->set_visible(false);
HXLINE( 389)				this->portraitLeft->set_visible(false);
HXLINE( 390)				if (!(this->portraitRight->visible)) {
HXLINE( 392)					this->portraitRight->set_visible(true);
HXLINE( 393)					 ::flixel::FlxSprite _hx_tmp = this->portraitRight;
HXDLIN( 393)					bool isLocale = false;
HXDLIN( 393)					 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp1;
HXDLIN( 393)					if (isLocale) {
HXLINE( 393)						if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/monikagaspleft",08,f1,bc,8b)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("monika",f3,3a,66,c7)),null())) {
HXLINE( 393)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/monikagaspleft",08,f1,bc,8b),HX_("monika",f3,3a,66,c7),isLocale);
HXDLIN( 393)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/monikagaspleft",08,f1,bc,8b)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("monika",f3,3a,66,c7)));
            						}
            						else {
HXLINE( 393)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/monikagaspleft",08,f1,bc,8b),HX_("monika",f3,3a,66,c7),isLocale);
HXDLIN( 393)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("dialogue/monikagaspleft",08,f1,bc,8b)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("monika",f3,3a,66,c7)));
            						}
            					}
            					else {
HXLINE( 393)						 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/monikagaspleft",08,f1,bc,8b),HX_("monika",f3,3a,66,c7),null());
HXDLIN( 393)						_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("dialogue/monikagaspleft",08,f1,bc,8b)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("monika",f3,3a,66,c7)));
            					}
HXDLIN( 393)					_hx_tmp->set_frames(_hx_tmp1);
HXLINE( 394)					this->portraitRight->animation->addByPrefix(HX_("enter",18,6d,86,70),HX_("Portrait Enter instance",c2,80,da,6d),24,false,null(),null());
HXLINE( 395)					this->portraitRight->animation->play(HX_("enter",18,6d,86,70),null(),null(),null());
            				}
HXLINE( 387)				goto _hx_goto_11;
            			}
            			if (  (_hx_switch_0==HX_("monikahappy",4d,99,9f,a4)) ){
HXLINE( 368)				this->portraitRight->set_visible(false);
HXLINE( 369)				this->portraitLeft->set_visible(false);
HXLINE( 370)				if (!(this->portraitLeft->visible)) {
HXLINE( 372)					this->portraitLeft->set_visible(true);
HXLINE( 373)					 ::flixel::FlxSprite _hx_tmp = this->portraitLeft;
HXDLIN( 373)					bool isLocale = false;
HXDLIN( 373)					 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp1;
HXDLIN( 373)					if (isLocale) {
HXLINE( 373)						if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/monikahappy",96,2a,74,cc)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("monika",f3,3a,66,c7)),null())) {
HXLINE( 373)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/monikahappy",96,2a,74,cc),HX_("monika",f3,3a,66,c7),isLocale);
HXDLIN( 373)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/monikahappy",96,2a,74,cc)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("monika",f3,3a,66,c7)));
            						}
            						else {
HXLINE( 373)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/monikahappy",96,2a,74,cc),HX_("monika",f3,3a,66,c7),isLocale);
HXDLIN( 373)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("dialogue/monikahappy",96,2a,74,cc)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("monika",f3,3a,66,c7)));
            						}
            					}
            					else {
HXLINE( 373)						 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/monikahappy",96,2a,74,cc),HX_("monika",f3,3a,66,c7),null());
HXDLIN( 373)						_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("dialogue/monikahappy",96,2a,74,cc)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("monika",f3,3a,66,c7)));
            					}
HXDLIN( 373)					_hx_tmp->set_frames(_hx_tmp1);
HXLINE( 374)					this->portraitLeft->animation->addByPrefix(HX_("enter",18,6d,86,70),HX_("Portrait Enter instance",c2,80,da,6d),24,false,null(),null());
HXLINE( 375)					this->portraitLeft->animation->play(HX_("enter",18,6d,86,70),null(),null(),null());
            				}
HXLINE( 367)				goto _hx_goto_11;
            			}
            			if (  (_hx_switch_0==HX_("monikahmm",b5,28,a8,53)) ){
HXLINE( 398)				this->portraitRight->set_visible(false);
HXLINE( 399)				this->portraitLeft->set_visible(false);
HXLINE( 400)				if (!(this->portraitRight->visible)) {
HXLINE( 402)					this->portraitRight->set_visible(true);
HXLINE( 403)					 ::flixel::FlxSprite _hx_tmp = this->portraitRight;
HXDLIN( 403)					bool isLocale = false;
HXDLIN( 403)					 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp1;
HXDLIN( 403)					if (isLocale) {
HXLINE( 403)						if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/monikahmm",be,a5,9c,37)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("monika",f3,3a,66,c7)),null())) {
HXLINE( 403)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/monikahmm",be,a5,9c,37),HX_("monika",f3,3a,66,c7),isLocale);
HXDLIN( 403)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/monikahmm",be,a5,9c,37)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("monika",f3,3a,66,c7)));
            						}
            						else {
HXLINE( 403)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/monikahmm",be,a5,9c,37),HX_("monika",f3,3a,66,c7),isLocale);
HXDLIN( 403)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("dialogue/monikahmm",be,a5,9c,37)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("monika",f3,3a,66,c7)));
            						}
            					}
            					else {
HXLINE( 403)						 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/monikahmm",be,a5,9c,37),HX_("monika",f3,3a,66,c7),null());
HXDLIN( 403)						_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("dialogue/monikahmm",be,a5,9c,37)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("monika",f3,3a,66,c7)));
            					}
HXDLIN( 403)					_hx_tmp->set_frames(_hx_tmp1);
HXLINE( 404)					this->portraitRight->animation->addByPrefix(HX_("enter",18,6d,86,70),HX_("Portrait Enter instance",c2,80,da,6d),24,false,null(),null());
HXLINE( 405)					this->portraitRight->animation->play(HX_("enter",18,6d,86,70),null(),null(),null());
            				}
HXLINE( 397)				goto _hx_goto_11;
            			}
            			if (  (_hx_switch_0==HX_("monikasad",03,77,b0,53)) ){
HXLINE( 428)				this->portraitRight->set_visible(false);
HXLINE( 429)				this->portraitLeft->set_visible(false);
HXLINE( 430)				if (!(this->portraitRight->visible)) {
HXLINE( 432)					this->portraitRight->set_visible(true);
HXLINE( 433)					 ::flixel::FlxSprite _hx_tmp = this->portraitRight;
HXDLIN( 433)					bool isLocale = false;
HXDLIN( 433)					 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp1;
HXDLIN( 433)					if (isLocale) {
HXLINE( 433)						if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/monikasad",0c,f4,a4,37)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("monika",f3,3a,66,c7)),null())) {
HXLINE( 433)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/monikasad",0c,f4,a4,37),HX_("monika",f3,3a,66,c7),isLocale);
HXDLIN( 433)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/monikasad",0c,f4,a4,37)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("monika",f3,3a,66,c7)));
            						}
            						else {
HXLINE( 433)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/monikasad",0c,f4,a4,37),HX_("monika",f3,3a,66,c7),isLocale);
HXDLIN( 433)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("dialogue/monikasad",0c,f4,a4,37)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("monika",f3,3a,66,c7)));
            						}
            					}
            					else {
HXLINE( 433)						 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/monikasad",0c,f4,a4,37),HX_("monika",f3,3a,66,c7),null());
HXDLIN( 433)						_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("dialogue/monikasad",0c,f4,a4,37)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("monika",f3,3a,66,c7)));
            					}
HXDLIN( 433)					_hx_tmp->set_frames(_hx_tmp1);
HXLINE( 434)					this->portraitRight->animation->addByPrefix(HX_("enter",18,6d,86,70),HX_("Portrait Enter instance",c2,80,da,6d),24,false,null(),null());
HXLINE( 435)					this->portraitRight->animation->play(HX_("enter",18,6d,86,70),null(),null(),null());
            				}
HXLINE( 427)				goto _hx_goto_11;
            			}
            			if (  (_hx_switch_0==HX_("monikauhoh",9f,72,0f,e8)) ){
HXLINE( 408)				this->portraitRight->set_visible(false);
HXLINE( 409)				this->portraitLeft->set_visible(false);
HXLINE( 410)				if (!(this->portraitRight->visible)) {
HXLINE( 412)					this->portraitRight->set_visible(true);
HXLINE( 413)					 ::flixel::FlxSprite _hx_tmp = this->portraitRight;
HXDLIN( 413)					bool isLocale = false;
HXDLIN( 413)					 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp1;
HXDLIN( 413)					if (isLocale) {
HXLINE( 413)						if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/monikauhohright",a6,22,07,71)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("monika",f3,3a,66,c7)),null())) {
HXLINE( 413)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/monikauhohright",a6,22,07,71),HX_("monika",f3,3a,66,c7),isLocale);
HXDLIN( 413)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/monikauhohright",a6,22,07,71)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("monika",f3,3a,66,c7)));
            						}
            						else {
HXLINE( 413)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/monikauhohright",a6,22,07,71),HX_("monika",f3,3a,66,c7),isLocale);
HXDLIN( 413)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("dialogue/monikauhohright",a6,22,07,71)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("monika",f3,3a,66,c7)));
            						}
            					}
            					else {
HXLINE( 413)						 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/monikauhohright",a6,22,07,71),HX_("monika",f3,3a,66,c7),null());
HXDLIN( 413)						_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("dialogue/monikauhohright",a6,22,07,71)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("monika",f3,3a,66,c7)));
            					}
HXDLIN( 413)					_hx_tmp->set_frames(_hx_tmp1);
HXLINE( 414)					this->portraitRight->animation->addByPrefix(HX_("enter",18,6d,86,70),HX_("Portrait Enter instance",c2,80,da,6d),24,false,null(),null());
HXLINE( 415)					this->portraitRight->animation->play(HX_("enter",18,6d,86,70),null(),null(),null());
            				}
HXLINE( 407)				goto _hx_goto_11;
            			}
            			if (  (_hx_switch_0==HX_("monikauhohleft",26,b6,16,1e)) ){
HXLINE( 418)				this->portraitRight->set_visible(false);
HXLINE( 419)				this->portraitLeft->set_visible(false);
HXLINE( 420)				if (!(this->portraitRight->visible)) {
HXLINE( 422)					this->portraitRight->set_visible(true);
HXLINE( 423)					 ::flixel::FlxSprite _hx_tmp = this->portraitRight;
HXDLIN( 423)					bool isLocale = false;
HXDLIN( 423)					 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp1;
HXDLIN( 423)					if (isLocale) {
HXLINE( 423)						if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/monikauhohleft",7d,58,f3,9a)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("monika",f3,3a,66,c7)),null())) {
HXLINE( 423)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/monikauhohleft",7d,58,f3,9a),HX_("monika",f3,3a,66,c7),isLocale);
HXDLIN( 423)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/monikauhohleft",7d,58,f3,9a)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("monika",f3,3a,66,c7)));
            						}
            						else {
HXLINE( 423)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/monikauhohleft",7d,58,f3,9a),HX_("monika",f3,3a,66,c7),isLocale);
HXDLIN( 423)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("dialogue/monikauhohleft",7d,58,f3,9a)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("monika",f3,3a,66,c7)));
            						}
            					}
            					else {
HXLINE( 423)						 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/monikauhohleft",7d,58,f3,9a),HX_("monika",f3,3a,66,c7),null());
HXDLIN( 423)						_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("dialogue/monikauhohleft",7d,58,f3,9a)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("monika",f3,3a,66,c7)));
            					}
HXDLIN( 423)					_hx_tmp->set_frames(_hx_tmp1);
HXLINE( 424)					this->portraitRight->animation->addByPrefix(HX_("enter",18,6d,86,70),HX_("Portrait Enter instance",c2,80,da,6d),24,false,null(),null());
HXLINE( 425)					this->portraitRight->animation->play(HX_("enter",18,6d,86,70),null(),null(),null());
            				}
HXLINE( 417)				goto _hx_goto_11;
            			}
            			if (  (_hx_switch_0==HX_("playsound",5b,4a,83,0e)) ){
HXLINE( 510)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 510)				_hx_tmp->play(::Paths_obj::sound(this->dialogueList->__get(0),HX_("shared",a5,5e,2b,1d)),null(),null(),null(),null(),null());
HXLINE( 511)				this->enddialogue();
HXLINE( 509)				goto _hx_goto_11;
            			}
            			if (  (_hx_switch_0==HX_("senpai",3c,df,8d,6b)) ){
HXLINE( 468)				this->portraitRight->set_visible(false);
HXLINE( 469)				this->portraitLeft->set_visible(false);
HXLINE( 470)				if (!(this->portraitLeft->visible)) {
HXLINE( 472)					this->portraitLeft->set_visible(true);
HXLINE( 473)					 ::flixel::FlxSprite _hx_tmp = this->portraitLeft;
HXDLIN( 473)					bool isLocale = false;
HXDLIN( 473)					 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp1;
HXDLIN( 473)					if (isLocale) {
HXLINE( 473)						if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/senpai",93,d2,b4,7b)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("monika",f3,3a,66,c7)),null())) {
HXLINE( 473)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/senpai",93,d2,b4,7b),HX_("monika",f3,3a,66,c7),isLocale);
HXDLIN( 473)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/senpai",93,d2,b4,7b)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("monika",f3,3a,66,c7)));
            						}
            						else {
HXLINE( 473)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/senpai",93,d2,b4,7b),HX_("monika",f3,3a,66,c7),isLocale);
HXDLIN( 473)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("dialogue/senpai",93,d2,b4,7b)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("monika",f3,3a,66,c7)));
            						}
            					}
            					else {
HXLINE( 473)						 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/senpai",93,d2,b4,7b),HX_("monika",f3,3a,66,c7),null());
HXDLIN( 473)						_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("dialogue/senpai",93,d2,b4,7b)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("monika",f3,3a,66,c7)));
            					}
HXDLIN( 473)					_hx_tmp->set_frames(_hx_tmp1);
HXLINE( 474)					this->portraitLeft->animation->addByPrefix(HX_("enter",18,6d,86,70),HX_("Portrait Enter instance",c2,80,da,6d),24,false,null(),null());
HXLINE( 475)					this->portraitLeft->animation->play(HX_("enter",18,6d,86,70),null(),null(),null());
            				}
HXLINE( 467)				goto _hx_goto_11;
            			}
            			if (  (_hx_switch_0==HX_("senpaihappy",64,cc,52,4a)) ){
HXLINE( 478)				this->portraitRight->set_visible(false);
HXLINE( 479)				this->portraitLeft->set_visible(false);
HXLINE( 480)				if (!(this->portraitLeft->visible)) {
HXLINE( 482)					this->portraitLeft->set_visible(true);
HXLINE( 483)					 ::flixel::FlxSprite _hx_tmp = this->portraitLeft;
HXDLIN( 483)					bool isLocale = false;
HXDLIN( 483)					 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp1;
HXDLIN( 483)					if (isLocale) {
HXLINE( 483)						if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/senpaihappy",ad,5d,27,72)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("monika",f3,3a,66,c7)),null())) {
HXLINE( 483)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/senpaihappy",ad,5d,27,72),HX_("monika",f3,3a,66,c7),isLocale);
HXDLIN( 483)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/senpaihappy",ad,5d,27,72)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("monika",f3,3a,66,c7)));
            						}
            						else {
HXLINE( 483)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/senpaihappy",ad,5d,27,72),HX_("monika",f3,3a,66,c7),isLocale);
HXDLIN( 483)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("dialogue/senpaihappy",ad,5d,27,72)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("monika",f3,3a,66,c7)));
            						}
            					}
            					else {
HXLINE( 483)						 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/senpaihappy",ad,5d,27,72),HX_("monika",f3,3a,66,c7),null());
HXDLIN( 483)						_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("dialogue/senpaihappy",ad,5d,27,72)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("monika",f3,3a,66,c7)));
            					}
HXDLIN( 483)					_hx_tmp->set_frames(_hx_tmp1);
HXLINE( 484)					this->portraitLeft->animation->addByPrefix(HX_("enter",18,6d,86,70),HX_("Portrait Enter instance",c2,80,da,6d),24,false,null(),null());
HXLINE( 485)					this->portraitLeft->animation->play(HX_("enter",18,6d,86,70),null(),null(),null());
            				}
HXLINE( 477)				goto _hx_goto_11;
            			}
            			if (  (_hx_switch_0==HX_("senpaihmm",0c,98,1f,19)) ){
HXLINE( 488)				this->portraitRight->set_visible(false);
HXLINE( 489)				this->portraitLeft->set_visible(false);
HXLINE( 490)				if (!(this->portraitLeft->visible)) {
HXLINE( 492)					this->portraitLeft->set_visible(true);
HXLINE( 493)					 ::flixel::FlxSprite _hx_tmp = this->portraitLeft;
HXDLIN( 493)					bool isLocale = false;
HXDLIN( 493)					 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp1;
HXDLIN( 493)					if (isLocale) {
HXLINE( 493)						if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/senpaihmm",15,15,14,fd)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("monika",f3,3a,66,c7)),null())) {
HXLINE( 493)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/senpaihmm",15,15,14,fd),HX_("monika",f3,3a,66,c7),isLocale);
HXDLIN( 493)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/senpaihmm",15,15,14,fd)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("monika",f3,3a,66,c7)));
            						}
            						else {
HXLINE( 493)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/senpaihmm",15,15,14,fd),HX_("monika",f3,3a,66,c7),isLocale);
HXDLIN( 493)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("dialogue/senpaihmm",15,15,14,fd)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("monika",f3,3a,66,c7)));
            						}
            					}
            					else {
HXLINE( 493)						 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/senpaihmm",15,15,14,fd),HX_("monika",f3,3a,66,c7),null());
HXDLIN( 493)						_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("dialogue/senpaihmm",15,15,14,fd)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("monika",f3,3a,66,c7)));
            					}
HXDLIN( 493)					_hx_tmp->set_frames(_hx_tmp1);
HXLINE( 494)					this->portraitLeft->animation->addByPrefix(HX_("enter",18,6d,86,70),HX_("Portrait Enter instance",c2,80,da,6d),24,false,null(),null());
HXLINE( 495)					this->portraitLeft->animation->play(HX_("enter",18,6d,86,70),null(),null(),null());
            				}
HXLINE( 487)				goto _hx_goto_11;
            			}
            			if (  (_hx_switch_0==HX_("showbackgroundimage",50,dc,ba,09)) ){
HXLINE( 538)				 ::flixel::FlxSprite _hx_tmp = this->backgroundImage;
HXDLIN( 538)				::String key = (HX_("dialogue/bgs/",f8,14,a4,58) + this->dialogueList->__get(0));
HXDLIN( 538)				::String _hx_tmp1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + key) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),HX_("doki",e9,ed,6d,42));
HXDLIN( 538)				_hx_tmp->loadGraphic(_hx_tmp1,null(),null(),null(),null(),null());
HXLINE( 539)				this->enddialogue();
HXLINE( 540)				this->backgroundImage->set_visible(true);
HXLINE( 537)				goto _hx_goto_11;
            			}
            			if (  (_hx_switch_0==HX_("startmusic",03,39,44,99)) ){
HXLINE( 513)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 513)				::String result = ::Paths_obj::getPath((((HX_("music/",ea,bf,1b,3f) + this->dialogueList->__get(0)) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)),HX_("MUSIC",85,08,49,8e),HX_("shared",a5,5e,2b,1d));
HXDLIN( 513)				::String _hx_tmp1;
HXDLIN( 513)				if (::Paths_obj::doesSoundAssetExist(result)) {
HXLINE( 513)					_hx_tmp1 = result;
            				}
            				else {
HXLINE( 513)					_hx_tmp1 = null();
            				}
HXDLIN( 513)				_hx_tmp->playMusic(_hx_tmp1,null(),null(),null());
HXLINE( 514)				this->enddialogue();
HXLINE( 512)				goto _hx_goto_11;
            			}
            			if (  (_hx_switch_0==HX_("whodis",d0,30,cf,bf)) ){
HXLINE( 498)				this->portraitRight->set_visible(false);
HXLINE( 499)				this->portraitLeft->set_visible(false);
HXLINE( 500)				if (!(this->portraitLeft->visible)) {
HXLINE( 502)					this->portraitLeft->set_visible(true);
HXLINE( 503)					 ::flixel::FlxSprite _hx_tmp = this->portraitLeft;
HXDLIN( 503)					bool isLocale = false;
HXDLIN( 503)					 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp1;
HXDLIN( 503)					if (isLocale) {
HXLINE( 503)						if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/whodis",27,24,f6,cf)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("monika",f3,3a,66,c7)),null())) {
HXLINE( 503)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/whodis",27,24,f6,cf),HX_("monika",f3,3a,66,c7),isLocale);
HXDLIN( 503)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/whodis",27,24,f6,cf)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("monika",f3,3a,66,c7)));
            						}
            						else {
HXLINE( 503)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/whodis",27,24,f6,cf),HX_("monika",f3,3a,66,c7),isLocale);
HXDLIN( 503)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("dialogue/whodis",27,24,f6,cf)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("monika",f3,3a,66,c7)));
            						}
            					}
            					else {
HXLINE( 503)						 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/whodis",27,24,f6,cf),HX_("monika",f3,3a,66,c7),null());
HXDLIN( 503)						_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("dialogue/whodis",27,24,f6,cf)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("monika",f3,3a,66,c7)));
            					}
HXDLIN( 503)					_hx_tmp->set_frames(_hx_tmp1);
HXLINE( 504)					this->portraitLeft->animation->addByPrefix(HX_("enter",18,6d,86,70),HX_("Portrait Enter instance",c2,80,da,6d),24,false,null(),null());
HXLINE( 505)					this->portraitLeft->animation->play(HX_("enter",18,6d,86,70),null(),null(),null());
            				}
HXLINE( 497)				goto _hx_goto_11;
            			}
            			_hx_goto_11:;
            		}
            		else {
HXLINE( 572)			::String _hx_switch_1 = this->curCharacter;
            			if (  (_hx_switch_1==HX_("all_gasp",55,64,26,5d)) ){
HXLINE(1130)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(1130)				 ::flixel::_hx_system::FlxSound _hx_tmp1 = _hx_tmp->load(::Paths_obj::sound(HX_("pixelText",53,7a,83,06),null()),((Float)0.8),null(),null(),null(),null(),null(),null(),null());
HXDLIN(1130)				this->swagDialogue->sounds = ::Array_obj< ::Dynamic>::__new(1)->init(0,_hx_tmp1);
HXLINE(1131)				this->portraitLeft->set_visible(false);
HXLINE(1132)				this->box->animation->play(HX_("blankbox",37,2b,14,d6),null(),null(),null());
HXLINE(1133)				if (!(this->portraitLeft->visible)) {
HXLINE(1135)					this->portraitLeft->set_visible(true);
HXLINE(1136)					 ::flixel::FlxSprite _hx_tmp = this->portraitLeft;
HXDLIN(1136)					bool isLocale = false;
HXDLIN(1136)					 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp1;
HXDLIN(1136)					if (isLocale) {
HXLINE(1136)						if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/all_dialogue",cd,0d,1d,08)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)),null())) {
HXLINE(1136)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/all_dialogue",cd,0d,1d,08),HX_("doki",e9,ed,6d,42),isLocale);
HXDLIN(1136)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/all_dialogue",cd,0d,1d,08)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            						}
            						else {
HXLINE(1136)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/all_dialogue",cd,0d,1d,08),HX_("doki",e9,ed,6d,42),isLocale);
HXDLIN(1136)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("dialogue/all_dialogue",cd,0d,1d,08)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            						}
            					}
            					else {
HXLINE(1136)						 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/all_dialogue",cd,0d,1d,08),HX_("doki",e9,ed,6d,42),null());
HXDLIN(1136)						_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("dialogue/all_dialogue",cd,0d,1d,08)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            					}
HXDLIN(1136)					_hx_tmp->set_frames(_hx_tmp1);
HXLINE(1137)					this->portraitLeft->animation->addByPrefix(HX_("play",f4,2d,5a,4a),HX_("all_gasp",55,64,26,5d),24,false,null(),null());
HXLINE(1138)					this->portraitLeft->animation->play(HX_("play",f4,2d,5a,4a),null(),null(),null());
HXLINE(1139)					this->portraitLeft->set_flipX(false);
            				}
HXLINE(1129)				goto _hx_goto_12;
            			}
            			if (  (_hx_switch_1==HX_("all_neutral",e9,c8,6b,16)) ){
HXLINE(1118)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(1118)				 ::flixel::_hx_system::FlxSound _hx_tmp1 = _hx_tmp->load(::Paths_obj::sound(HX_("pixelText",53,7a,83,06),null()),((Float)0.8),null(),null(),null(),null(),null(),null(),null());
HXDLIN(1118)				this->swagDialogue->sounds = ::Array_obj< ::Dynamic>::__new(1)->init(0,_hx_tmp1);
HXLINE(1119)				this->portraitLeft->set_visible(false);
HXLINE(1120)				this->box->animation->play(HX_("blankbox",37,2b,14,d6),null(),null(),null());
HXLINE(1121)				if (!(this->portraitLeft->visible)) {
HXLINE(1123)					this->portraitLeft->set_visible(true);
HXLINE(1124)					 ::flixel::FlxSprite _hx_tmp = this->portraitLeft;
HXDLIN(1124)					bool isLocale = false;
HXDLIN(1124)					 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp1;
HXDLIN(1124)					if (isLocale) {
HXLINE(1124)						if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/all_dialogue",cd,0d,1d,08)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)),null())) {
HXLINE(1124)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/all_dialogue",cd,0d,1d,08),HX_("doki",e9,ed,6d,42),isLocale);
HXDLIN(1124)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/all_dialogue",cd,0d,1d,08)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            						}
            						else {
HXLINE(1124)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/all_dialogue",cd,0d,1d,08),HX_("doki",e9,ed,6d,42),isLocale);
HXDLIN(1124)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("dialogue/all_dialogue",cd,0d,1d,08)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            						}
            					}
            					else {
HXLINE(1124)						 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/all_dialogue",cd,0d,1d,08),HX_("doki",e9,ed,6d,42),null());
HXDLIN(1124)						_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("dialogue/all_dialogue",cd,0d,1d,08)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            					}
HXDLIN(1124)					_hx_tmp->set_frames(_hx_tmp1);
HXLINE(1125)					this->portraitLeft->animation->addByPrefix(HX_("play",f4,2d,5a,4a),HX_("all_neutral",e9,c8,6b,16),24,false,null(),null());
HXLINE(1126)					this->portraitLeft->animation->play(HX_("play",f4,2d,5a,4a),null(),null(),null());
HXLINE(1127)					this->portraitLeft->set_flipX(false);
            				}
HXLINE(1117)				goto _hx_goto_12;
            			}
            			if (  (_hx_switch_1==HX_("autoskip",6e,d9,a1,44)) ){
HXLINE(1177)				this->canSkip = false;
HXLINE(1178)				this->swagDialogue->completeCallback = this->enddialogue_dyn();
HXLINE(1176)				goto _hx_goto_12;
            			}
            			if (  (_hx_switch_1==HX_("bf_beep",89,44,c3,a7)) ){
HXLINE( 977)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 977)				 ::flixel::_hx_system::FlxSound _hx_tmp1 = _hx_tmp->load(::Paths_obj::sound(HX_("BFText",91,64,6d,e9),null()),((Float)0.8),null(),null(),null(),null(),null(),null(),null());
HXDLIN( 977)				this->swagDialogue->sounds = ::Array_obj< ::Dynamic>::__new(1)->init(0,_hx_tmp1);
HXLINE( 978)				this->portraitRight->set_visible(false);
HXLINE( 979)				this->box->animation->play(HX_("bf",c4,55,00,00),null(),null(),null());
HXLINE( 980)				if (!(this->portraitRight->visible)) {
HXLINE( 982)					this->portraitRight->set_visible(true);
HXLINE( 983)					 ::flixel::FlxSprite _hx_tmp = this->portraitRight;
HXDLIN( 983)					bool isLocale = false;
HXDLIN( 983)					 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp1;
HXDLIN( 983)					if (isLocale) {
HXLINE( 983)						if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/bf_dialogue",7c,87,cf,09)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)),null())) {
HXLINE( 983)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/bf_dialogue",7c,87,cf,09),HX_("doki",e9,ed,6d,42),isLocale);
HXDLIN( 983)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/bf_dialogue",7c,87,cf,09)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            						}
            						else {
HXLINE( 983)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/bf_dialogue",7c,87,cf,09),HX_("doki",e9,ed,6d,42),isLocale);
HXDLIN( 983)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("dialogue/bf_dialogue",7c,87,cf,09)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            						}
            					}
            					else {
HXLINE( 983)						 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/bf_dialogue",7c,87,cf,09),HX_("doki",e9,ed,6d,42),null());
HXDLIN( 983)						_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("dialogue/bf_dialogue",7c,87,cf,09)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            					}
HXDLIN( 983)					_hx_tmp->set_frames(_hx_tmp1);
HXLINE( 984)					this->portraitRight->animation->addByPrefix(HX_("play",f4,2d,5a,4a),HX_("bfbeep",b2,6c,ec,2a),24,false,null(),null());
HXLINE( 985)					this->portraitRight->animation->play(HX_("play",f4,2d,5a,4a),null(),null(),null());
            				}
HXLINE( 976)				goto _hx_goto_12;
            			}
            			if (  (_hx_switch_1==HX_("bf_hmph",d8,a7,c0,ab)) ){
HXLINE(1033)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(1033)				 ::flixel::_hx_system::FlxSound _hx_tmp1 = _hx_tmp->load(::Paths_obj::sound(HX_("BFText",91,64,6d,e9),null()),((Float)0.8),null(),null(),null(),null(),null(),null(),null());
HXDLIN(1033)				this->swagDialogue->sounds = ::Array_obj< ::Dynamic>::__new(1)->init(0,_hx_tmp1);
HXLINE(1034)				this->portraitRight->set_visible(false);
HXLINE(1035)				this->box->animation->play(HX_("bf",c4,55,00,00),null(),null(),null());
HXLINE(1036)				if (!(this->portraitRight->visible)) {
HXLINE(1038)					this->portraitRight->set_visible(true);
HXLINE(1039)					 ::flixel::FlxSprite _hx_tmp = this->portraitRight;
HXDLIN(1039)					bool isLocale = false;
HXDLIN(1039)					 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp1;
HXDLIN(1039)					if (isLocale) {
HXLINE(1039)						if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/bf_dialogue",7c,87,cf,09)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)),null())) {
HXLINE(1039)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/bf_dialogue",7c,87,cf,09),HX_("doki",e9,ed,6d,42),isLocale);
HXDLIN(1039)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/bf_dialogue",7c,87,cf,09)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            						}
            						else {
HXLINE(1039)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/bf_dialogue",7c,87,cf,09),HX_("doki",e9,ed,6d,42),isLocale);
HXDLIN(1039)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("dialogue/bf_dialogue",7c,87,cf,09)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            						}
            					}
            					else {
HXLINE(1039)						 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/bf_dialogue",7c,87,cf,09),HX_("doki",e9,ed,6d,42),null());
HXDLIN(1039)						_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("dialogue/bf_dialogue",7c,87,cf,09)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            					}
HXDLIN(1039)					_hx_tmp->set_frames(_hx_tmp1);
HXLINE(1040)					this->portraitRight->animation->addByPrefix(HX_("play",f4,2d,5a,4a),HX_("bf_hmph",d8,a7,c0,ab),24,false,null(),null());
HXLINE(1041)					this->portraitRight->animation->play(HX_("play",f4,2d,5a,4a),null(),null(),null());
            				}
HXLINE(1032)				goto _hx_goto_12;
            			}
            			if (  (_hx_switch_1==HX_("bf_neutral",8c,00,94,cd)) ){
HXLINE( 966)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 966)				 ::flixel::_hx_system::FlxSound _hx_tmp1 = _hx_tmp->load(::Paths_obj::sound(HX_("BFText",91,64,6d,e9),null()),((Float)0.8),null(),null(),null(),null(),null(),null(),null());
HXDLIN( 966)				this->swagDialogue->sounds = ::Array_obj< ::Dynamic>::__new(1)->init(0,_hx_tmp1);
HXLINE( 967)				this->portraitRight->set_visible(false);
HXLINE( 968)				this->box->animation->play(HX_("bf",c4,55,00,00),null(),null(),null());
HXLINE( 969)				if (!(this->portraitRight->visible)) {
HXLINE( 971)					this->portraitRight->set_visible(true);
HXLINE( 972)					 ::flixel::FlxSprite _hx_tmp = this->portraitRight;
HXDLIN( 972)					bool isLocale = false;
HXDLIN( 972)					 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp1;
HXDLIN( 972)					if (isLocale) {
HXLINE( 972)						if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/bf_dialogue",7c,87,cf,09)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)),null())) {
HXLINE( 972)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/bf_dialogue",7c,87,cf,09),HX_("doki",e9,ed,6d,42),isLocale);
HXDLIN( 972)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/bf_dialogue",7c,87,cf,09)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            						}
            						else {
HXLINE( 972)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/bf_dialogue",7c,87,cf,09),HX_("doki",e9,ed,6d,42),isLocale);
HXDLIN( 972)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("dialogue/bf_dialogue",7c,87,cf,09)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            						}
            					}
            					else {
HXLINE( 972)						 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/bf_dialogue",7c,87,cf,09),HX_("doki",e9,ed,6d,42),null());
HXDLIN( 972)						_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("dialogue/bf_dialogue",7c,87,cf,09)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            					}
HXDLIN( 972)					_hx_tmp->set_frames(_hx_tmp1);
HXLINE( 973)					this->portraitRight->animation->addByPrefix(HX_("play",f4,2d,5a,4a),HX_("bfneutral",03,98,ad,75),24,false,null(),null());
HXLINE( 974)					this->portraitRight->animation->play(HX_("play",f4,2d,5a,4a),null(),null(),null());
            				}
HXLINE( 965)				goto _hx_goto_12;
            			}
            			if (  (_hx_switch_1==HX_("bf_scared",7b,34,25,35)) ){
HXLINE(1022)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(1022)				 ::flixel::_hx_system::FlxSound _hx_tmp1 = _hx_tmp->load(::Paths_obj::sound(HX_("BFText",91,64,6d,e9),null()),((Float)0.8),null(),null(),null(),null(),null(),null(),null());
HXDLIN(1022)				this->swagDialogue->sounds = ::Array_obj< ::Dynamic>::__new(1)->init(0,_hx_tmp1);
HXLINE(1023)				this->portraitRight->set_visible(false);
HXLINE(1024)				this->box->animation->play(HX_("bf",c4,55,00,00),null(),null(),null());
HXLINE(1025)				if (!(this->portraitRight->visible)) {
HXLINE(1027)					this->portraitRight->set_visible(true);
HXLINE(1028)					 ::flixel::FlxSprite _hx_tmp = this->portraitRight;
HXDLIN(1028)					bool isLocale = false;
HXDLIN(1028)					 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp1;
HXDLIN(1028)					if (isLocale) {
HXLINE(1028)						if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/bf_dialogue",7c,87,cf,09)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)),null())) {
HXLINE(1028)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/bf_dialogue",7c,87,cf,09),HX_("doki",e9,ed,6d,42),isLocale);
HXDLIN(1028)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/bf_dialogue",7c,87,cf,09)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            						}
            						else {
HXLINE(1028)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/bf_dialogue",7c,87,cf,09),HX_("doki",e9,ed,6d,42),isLocale);
HXDLIN(1028)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("dialogue/bf_dialogue",7c,87,cf,09)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            						}
            					}
            					else {
HXLINE(1028)						 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/bf_dialogue",7c,87,cf,09),HX_("doki",e9,ed,6d,42),null());
HXDLIN(1028)						_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("dialogue/bf_dialogue",7c,87,cf,09)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            					}
HXDLIN(1028)					_hx_tmp->set_frames(_hx_tmp1);
HXLINE(1029)					this->portraitRight->animation->addByPrefix(HX_("play",f4,2d,5a,4a),HX_("bf_scared",7b,34,25,35),24,false,null(),null());
HXLINE(1030)					this->portraitRight->animation->play(HX_("play",f4,2d,5a,4a),null(),null(),null());
            				}
HXLINE(1021)				goto _hx_goto_12;
            			}
            			if (  (_hx_switch_1==HX_("bf_think",f7,cf,4d,82)) ){
HXLINE(1011)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(1011)				 ::flixel::_hx_system::FlxSound _hx_tmp1 = _hx_tmp->load(::Paths_obj::sound(HX_("BFText",91,64,6d,e9),null()),((Float)0.8),null(),null(),null(),null(),null(),null(),null());
HXDLIN(1011)				this->swagDialogue->sounds = ::Array_obj< ::Dynamic>::__new(1)->init(0,_hx_tmp1);
HXLINE(1012)				this->portraitRight->set_visible(false);
HXLINE(1013)				this->box->animation->play(HX_("bf",c4,55,00,00),null(),null(),null());
HXLINE(1014)				if (!(this->portraitRight->visible)) {
HXLINE(1016)					this->portraitRight->set_visible(true);
HXLINE(1017)					 ::flixel::FlxSprite _hx_tmp = this->portraitRight;
HXDLIN(1017)					bool isLocale = false;
HXDLIN(1017)					 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp1;
HXDLIN(1017)					if (isLocale) {
HXLINE(1017)						if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/bf_dialogue",7c,87,cf,09)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)),null())) {
HXLINE(1017)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/bf_dialogue",7c,87,cf,09),HX_("doki",e9,ed,6d,42),isLocale);
HXDLIN(1017)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/bf_dialogue",7c,87,cf,09)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            						}
            						else {
HXLINE(1017)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/bf_dialogue",7c,87,cf,09),HX_("doki",e9,ed,6d,42),isLocale);
HXDLIN(1017)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("dialogue/bf_dialogue",7c,87,cf,09)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            						}
            					}
            					else {
HXLINE(1017)						 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/bf_dialogue",7c,87,cf,09),HX_("doki",e9,ed,6d,42),null());
HXDLIN(1017)						_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("dialogue/bf_dialogue",7c,87,cf,09)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            					}
HXDLIN(1017)					_hx_tmp->set_frames(_hx_tmp1);
HXLINE(1018)					this->portraitRight->animation->addByPrefix(HX_("play",f4,2d,5a,4a),HX_("bf_think",f7,cf,4d,82),24,false,null(),null());
HXLINE(1019)					this->portraitRight->animation->play(HX_("play",f4,2d,5a,4a),null(),null(),null());
            				}
HXLINE(1010)				goto _hx_goto_12;
            			}
            			if (  (_hx_switch_1==HX_("bf_yeah",4e,29,f7,b6)) ){
HXLINE( 988)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 988)				 ::flixel::_hx_system::FlxSound _hx_tmp1 = _hx_tmp->load(::Paths_obj::sound(HX_("BFText",91,64,6d,e9),null()),((Float)0.8),null(),null(),null(),null(),null(),null(),null());
HXDLIN( 988)				this->swagDialogue->sounds = ::Array_obj< ::Dynamic>::__new(1)->init(0,_hx_tmp1);
HXLINE( 989)				this->portraitRight->set_visible(false);
HXLINE( 990)				this->box->animation->play(HX_("bf",c4,55,00,00),null(),null(),null());
HXLINE( 991)				if (!(this->portraitRight->visible)) {
HXLINE( 993)					this->portraitRight->set_visible(true);
HXLINE( 994)					 ::flixel::FlxSprite _hx_tmp = this->portraitRight;
HXDLIN( 994)					bool isLocale = false;
HXDLIN( 994)					 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp1;
HXDLIN( 994)					if (isLocale) {
HXLINE( 994)						if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/bf_dialogue",7c,87,cf,09)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)),null())) {
HXLINE( 994)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/bf_dialogue",7c,87,cf,09),HX_("doki",e9,ed,6d,42),isLocale);
HXDLIN( 994)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/bf_dialogue",7c,87,cf,09)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            						}
            						else {
HXLINE( 994)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/bf_dialogue",7c,87,cf,09),HX_("doki",e9,ed,6d,42),isLocale);
HXDLIN( 994)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("dialogue/bf_dialogue",7c,87,cf,09)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            						}
            					}
            					else {
HXLINE( 994)						 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/bf_dialogue",7c,87,cf,09),HX_("doki",e9,ed,6d,42),null());
HXDLIN( 994)						_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("dialogue/bf_dialogue",7c,87,cf,09)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            					}
HXDLIN( 994)					_hx_tmp->set_frames(_hx_tmp1);
HXLINE( 995)					this->portraitRight->animation->addByPrefix(HX_("play",f4,2d,5a,4a),HX_("bf_yeah",4e,29,f7,b6),24,false,null(),null());
HXLINE( 996)					this->portraitRight->animation->play(HX_("play",f4,2d,5a,4a),null(),null(),null());
            				}
HXLINE( 987)				goto _hx_goto_12;
            			}
            			if (  (_hx_switch_1==HX_("bf_yeah_left",d8,7f,0b,76)) ){
HXLINE( 999)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 999)				 ::flixel::_hx_system::FlxSound _hx_tmp1 = _hx_tmp->load(::Paths_obj::sound(HX_("BFText",91,64,6d,e9),null()),((Float)0.8),null(),null(),null(),null(),null(),null(),null());
HXDLIN( 999)				this->swagDialogue->sounds = ::Array_obj< ::Dynamic>::__new(1)->init(0,_hx_tmp1);
HXLINE(1000)				this->portraitLeft->set_visible(false);
HXLINE(1001)				this->box->animation->play(HX_("bf",c4,55,00,00),null(),null(),null());
HXLINE(1002)				if (!(this->portraitLeft->visible)) {
HXLINE(1004)					this->portraitLeft->set_visible(true);
HXLINE(1005)					 ::flixel::FlxSprite _hx_tmp = this->portraitLeft;
HXDLIN(1005)					bool isLocale = false;
HXDLIN(1005)					 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp1;
HXDLIN(1005)					if (isLocale) {
HXLINE(1005)						if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/bf_dialogue",7c,87,cf,09)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)),null())) {
HXLINE(1005)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/bf_dialogue",7c,87,cf,09),HX_("doki",e9,ed,6d,42),isLocale);
HXDLIN(1005)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/bf_dialogue",7c,87,cf,09)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            						}
            						else {
HXLINE(1005)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/bf_dialogue",7c,87,cf,09),HX_("doki",e9,ed,6d,42),isLocale);
HXDLIN(1005)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("dialogue/bf_dialogue",7c,87,cf,09)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            						}
            					}
            					else {
HXLINE(1005)						 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/bf_dialogue",7c,87,cf,09),HX_("doki",e9,ed,6d,42),null());
HXDLIN(1005)						_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("dialogue/bf_dialogue",7c,87,cf,09)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            					}
HXDLIN(1005)					_hx_tmp->set_frames(_hx_tmp1);
HXLINE(1006)					this->portraitLeft->animation->addByPrefix(HX_("play",f4,2d,5a,4a),HX_("bf_yeah",4e,29,f7,b6),24,false,null(),null());
HXLINE(1007)					this->portraitLeft->animation->play(HX_("play",f4,2d,5a,4a),null(),null(),null());
HXLINE(1008)					this->portraitLeft->set_flipX(true);
            				}
HXLINE( 998)				goto _hx_goto_12;
            			}
            			if (  (_hx_switch_1==HX_("crash",e7,bf,4f,4c)) ){
HXLINE(1190)				::Sys_obj::exit(0);
HXDLIN(1190)				goto _hx_goto_12;
            			}
            			if (  (_hx_switch_1==HX_("disableskip",67,94,8c,31)) ){
HXLINE(1219)				this->skipText->set_visible(false);
HXLINE(1220)				this->canFullSkip = false;
HXLINE(1221)				this->enddialogue();
HXLINE(1218)				goto _hx_goto_12;
            			}
            			if (  (_hx_switch_1==HX_("endmusic",ea,f2,2a,7b)) ){
HXLINE(1167)				if (::hx::IsNotNull( ::flixel::FlxG_obj::sound->music )) {
HXLINE(1168)					 ::flixel::_hx_system::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN(1168)					 ::Dynamic To = 0;
HXDLIN(1168)					 ::Dynamic onComplete = null();
HXDLIN(1168)					if (::hx::IsNull( To )) {
HXLINE(1168)						To = 0;
            					}
HXDLIN(1168)					if (::hx::IsNotNull( _this->fadeTween )) {
HXLINE(1168)						_this->fadeTween->cancel();
            					}
HXDLIN(1168)					_this->fadeTween = ::flixel::tweens::FlxTween_obj::num(_this->_volume,( (Float)(To) ),((Float)0.5), ::Dynamic(::hx::Anon_obj::Create(1)
            						->setFixed(0,HX_("onComplete",f8,d4,7e,5d),onComplete)),_this->volumeTween_dyn());
            				}
HXLINE(1169)				this->enddialogue();
HXLINE(1166)				goto _hx_goto_12;
            			}
            			if (  (_hx_switch_1==HX_("fadeout",92,80,54,31)) ){
            				HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::DialogueBox,_gthis) HXARGC(1)
            				void _hx_run( ::flixel::tweens::FlxTween twn){
            					HX_STACKFRAME(&_hx_pos_abff9fa8c13cc7a0_1212_startDialogue)
HXLINE(1213)					::haxe::Log_obj::trace(HX_("Did I work?",36,ee,a9,1b),::hx::SourceInfo(HX_("source/DialogueBox.hx",df,86,e3,ca),1213,HX_("DialogueBox",b3,1f,c8,ff),HX_("startDialogue",9a,8f,4f,ac)));
HXLINE(1214)					_gthis->endinstantly();
            				}
            				HX_END_LOCAL_FUNC1((void))

HXLINE(1206)				this->canSkip = false;
HXLINE(1207)				this->add(this->blackscreen);
HXLINE(1208)				this->blackscreen->set_alpha(( (Float)(0) ));
HXLINE(1209)				::flixel::tweens::FlxTween_obj::tween(this->blackscreen, ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("alpha",5e,a7,96,21),1)),5, ::Dynamic(::hx::Anon_obj::Create(2)
            					->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::expoOut_dyn())
            					->setFixed(1,HX_("onComplete",f8,d4,7e,5d), ::Dynamic(new _hx_Closure_1(_gthis)))));
HXLINE(1205)				goto _hx_goto_12;
            			}
            			if (  (_hx_switch_1==HX_("gf_ehh",45,99,b9,28)) ){
HXLINE(1090)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(1090)				 ::flixel::_hx_system::FlxSound _hx_tmp1 = _hx_tmp->load(::Paths_obj::sound(HX_("GFText",6c,32,36,e9),null()),((Float)0.8),null(),null(),null(),null(),null(),null(),null());
HXDLIN(1090)				this->swagDialogue->sounds = ::Array_obj< ::Dynamic>::__new(1)->init(0,_hx_tmp1);
HXLINE(1091)				this->portraitRight->set_visible(false);
HXLINE(1092)				this->box->animation->play(HX_("gf",1f,5a,00,00),null(),null(),null());
HXLINE(1093)				if (!(this->portraitRight->visible)) {
HXLINE(1095)					this->portraitRight->set_visible(true);
HXLINE(1096)					 ::flixel::FlxSprite _hx_tmp = this->portraitRight;
HXDLIN(1096)					bool isLocale = false;
HXDLIN(1096)					 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp1;
HXDLIN(1096)					if (isLocale) {
HXLINE(1096)						if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/gf_dialogue",c1,9f,27,8e)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)),null())) {
HXLINE(1096)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/gf_dialogue",c1,9f,27,8e),HX_("doki",e9,ed,6d,42),isLocale);
HXDLIN(1096)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/gf_dialogue",c1,9f,27,8e)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            						}
            						else {
HXLINE(1096)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/gf_dialogue",c1,9f,27,8e),HX_("doki",e9,ed,6d,42),isLocale);
HXDLIN(1096)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("dialogue/gf_dialogue",c1,9f,27,8e)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            						}
            					}
            					else {
HXLINE(1096)						 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/gf_dialogue",c1,9f,27,8e),HX_("doki",e9,ed,6d,42),null());
HXDLIN(1096)						_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("dialogue/gf_dialogue",c1,9f,27,8e)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            					}
HXDLIN(1096)					_hx_tmp->set_frames(_hx_tmp1);
HXLINE(1097)					this->portraitRight->animation->addByPrefix(HX_("play",f4,2d,5a,4a),HX_("gf_ehh",45,99,b9,28),24,false,null(),null());
HXLINE(1098)					this->portraitRight->animation->play(HX_("play",f4,2d,5a,4a),null(),null(),null());
            				}
HXLINE(1089)				goto _hx_goto_12;
            			}
            			if (  (_hx_switch_1==HX_("gf_giggle",1b,5d,ea,ff)) ){
HXLINE(1057)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(1057)				 ::flixel::_hx_system::FlxSound _hx_tmp1 = _hx_tmp->load(::Paths_obj::sound(HX_("GFText",6c,32,36,e9),null()),((Float)0.8),null(),null(),null(),null(),null(),null(),null());
HXDLIN(1057)				this->swagDialogue->sounds = ::Array_obj< ::Dynamic>::__new(1)->init(0,_hx_tmp1);
HXLINE(1058)				this->portraitRight->set_visible(false);
HXLINE(1059)				this->box->animation->play(HX_("gf",1f,5a,00,00),null(),null(),null());
HXLINE(1060)				if (!(this->portraitRight->visible)) {
HXLINE(1062)					this->portraitRight->set_visible(true);
HXLINE(1063)					 ::flixel::FlxSprite _hx_tmp = this->portraitRight;
HXDLIN(1063)					bool isLocale = false;
HXDLIN(1063)					 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp1;
HXDLIN(1063)					if (isLocale) {
HXLINE(1063)						if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/gf_dialogue",c1,9f,27,8e)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)),null())) {
HXLINE(1063)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/gf_dialogue",c1,9f,27,8e),HX_("doki",e9,ed,6d,42),isLocale);
HXDLIN(1063)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/gf_dialogue",c1,9f,27,8e)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            						}
            						else {
HXLINE(1063)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/gf_dialogue",c1,9f,27,8e),HX_("doki",e9,ed,6d,42),isLocale);
HXDLIN(1063)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("dialogue/gf_dialogue",c1,9f,27,8e)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            						}
            					}
            					else {
HXLINE(1063)						 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/gf_dialogue",c1,9f,27,8e),HX_("doki",e9,ed,6d,42),null());
HXDLIN(1063)						_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("dialogue/gf_dialogue",c1,9f,27,8e)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            					}
HXDLIN(1063)					_hx_tmp->set_frames(_hx_tmp1);
HXLINE(1064)					this->portraitRight->animation->addByPrefix(HX_("play",f4,2d,5a,4a),HX_("gf_giggle",1b,5d,ea,ff),24,false,null(),null());
HXLINE(1065)					this->portraitRight->animation->play(HX_("play",f4,2d,5a,4a),null(),null(),null());
            				}
HXLINE(1056)				goto _hx_goto_12;
            			}
            			if (  (_hx_switch_1==HX_("gf_gone",bf,45,04,7b)) ){
HXLINE(1112)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(1112)				 ::flixel::_hx_system::FlxSound _hx_tmp1 = _hx_tmp->load(::Paths_obj::sound(HX_("GFText",6c,32,36,e9),null()),((Float)0.8),null(),null(),null(),null(),null(),null(),null());
HXDLIN(1112)				this->swagDialogue->sounds = ::Array_obj< ::Dynamic>::__new(1)->init(0,_hx_tmp1);
HXLINE(1113)				this->portraitRight->set_visible(false);
HXLINE(1114)				this->box->animation->play(HX_("gf",1f,5a,00,00),null(),null(),null());
HXLINE(1111)				goto _hx_goto_12;
            			}
            			if (  (_hx_switch_1==HX_("gf_neutral",e7,57,08,8f)) ){
HXLINE(1046)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(1046)				 ::flixel::_hx_system::FlxSound _hx_tmp1 = _hx_tmp->load(::Paths_obj::sound(HX_("GFText",6c,32,36,e9),null()),((Float)0.8),null(),null(),null(),null(),null(),null(),null());
HXDLIN(1046)				this->swagDialogue->sounds = ::Array_obj< ::Dynamic>::__new(1)->init(0,_hx_tmp1);
HXLINE(1047)				this->portraitRight->set_visible(false);
HXLINE(1048)				this->box->animation->play(HX_("gf",1f,5a,00,00),null(),null(),null());
HXLINE(1049)				if (!(this->portraitRight->visible)) {
HXLINE(1051)					this->portraitRight->set_visible(true);
HXLINE(1052)					 ::flixel::FlxSprite _hx_tmp = this->portraitRight;
HXDLIN(1052)					bool isLocale = false;
HXDLIN(1052)					 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp1;
HXDLIN(1052)					if (isLocale) {
HXLINE(1052)						if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/gf_dialogue",c1,9f,27,8e)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)),null())) {
HXLINE(1052)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/gf_dialogue",c1,9f,27,8e),HX_("doki",e9,ed,6d,42),isLocale);
HXDLIN(1052)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/gf_dialogue",c1,9f,27,8e)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            						}
            						else {
HXLINE(1052)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/gf_dialogue",c1,9f,27,8e),HX_("doki",e9,ed,6d,42),isLocale);
HXDLIN(1052)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("dialogue/gf_dialogue",c1,9f,27,8e)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            						}
            					}
            					else {
HXLINE(1052)						 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/gf_dialogue",c1,9f,27,8e),HX_("doki",e9,ed,6d,42),null());
HXDLIN(1052)						_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("dialogue/gf_dialogue",c1,9f,27,8e)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            					}
HXDLIN(1052)					_hx_tmp->set_frames(_hx_tmp1);
HXLINE(1053)					this->portraitRight->animation->addByPrefix(HX_("play",f4,2d,5a,4a),HX_("gfneutral",08,a5,64,94),24,false,null(),null());
HXLINE(1054)					this->portraitRight->animation->play(HX_("play",f4,2d,5a,4a),null(),null(),null());
            				}
HXLINE(1045)				goto _hx_goto_12;
            			}
            			if (  (_hx_switch_1==HX_("gf_scared",80,41,dc,53)) ){
HXLINE(1068)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(1068)				 ::flixel::_hx_system::FlxSound _hx_tmp1 = _hx_tmp->load(::Paths_obj::sound(HX_("GFText",6c,32,36,e9),null()),((Float)0.8),null(),null(),null(),null(),null(),null(),null());
HXDLIN(1068)				this->swagDialogue->sounds = ::Array_obj< ::Dynamic>::__new(1)->init(0,_hx_tmp1);
HXLINE(1069)				this->portraitRight->set_visible(false);
HXLINE(1070)				this->box->animation->play(HX_("gf",1f,5a,00,00),null(),null(),null());
HXLINE(1071)				if (!(this->portraitRight->visible)) {
HXLINE(1073)					this->portraitRight->set_visible(true);
HXLINE(1074)					 ::flixel::FlxSprite _hx_tmp = this->portraitRight;
HXDLIN(1074)					bool isLocale = false;
HXDLIN(1074)					 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp1;
HXDLIN(1074)					if (isLocale) {
HXLINE(1074)						if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/gf_dialogue",c1,9f,27,8e)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)),null())) {
HXLINE(1074)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/gf_dialogue",c1,9f,27,8e),HX_("doki",e9,ed,6d,42),isLocale);
HXDLIN(1074)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/gf_dialogue",c1,9f,27,8e)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            						}
            						else {
HXLINE(1074)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/gf_dialogue",c1,9f,27,8e),HX_("doki",e9,ed,6d,42),isLocale);
HXDLIN(1074)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("dialogue/gf_dialogue",c1,9f,27,8e)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            						}
            					}
            					else {
HXLINE(1074)						 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/gf_dialogue",c1,9f,27,8e),HX_("doki",e9,ed,6d,42),null());
HXDLIN(1074)						_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("dialogue/gf_dialogue",c1,9f,27,8e)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            					}
HXDLIN(1074)					_hx_tmp->set_frames(_hx_tmp1);
HXLINE(1075)					this->portraitRight->animation->addByPrefix(HX_("play",f4,2d,5a,4a),HX_("gf_scared",80,41,dc,53),24,false,null(),null());
HXLINE(1076)					this->portraitRight->animation->play(HX_("play",f4,2d,5a,4a),null(),null(),null());
            				}
HXLINE(1067)				goto _hx_goto_12;
            			}
            			if (  (_hx_switch_1==HX_("gf_spook",6e,b9,31,12)) ){
HXLINE(1101)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(1101)				 ::flixel::_hx_system::FlxSound _hx_tmp1 = _hx_tmp->load(::Paths_obj::sound(HX_("GFText",6c,32,36,e9),null()),((Float)0.8),null(),null(),null(),null(),null(),null(),null());
HXDLIN(1101)				this->swagDialogue->sounds = ::Array_obj< ::Dynamic>::__new(1)->init(0,_hx_tmp1);
HXLINE(1102)				this->portraitRight->set_visible(false);
HXLINE(1103)				this->box->animation->play(HX_("gf",1f,5a,00,00),null(),null(),null());
HXLINE(1104)				if (!(this->portraitRight->visible)) {
HXLINE(1106)					this->portraitRight->set_visible(true);
HXLINE(1107)					 ::flixel::FlxSprite _hx_tmp = this->portraitRight;
HXDLIN(1107)					bool isLocale = false;
HXDLIN(1107)					 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp1;
HXDLIN(1107)					if (isLocale) {
HXLINE(1107)						if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/gf_dialogue",c1,9f,27,8e)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)),null())) {
HXLINE(1107)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/gf_dialogue",c1,9f,27,8e),HX_("doki",e9,ed,6d,42),isLocale);
HXDLIN(1107)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/gf_dialogue",c1,9f,27,8e)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            						}
            						else {
HXLINE(1107)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/gf_dialogue",c1,9f,27,8e),HX_("doki",e9,ed,6d,42),isLocale);
HXDLIN(1107)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("dialogue/gf_dialogue",c1,9f,27,8e)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            						}
            					}
            					else {
HXLINE(1107)						 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/gf_dialogue",c1,9f,27,8e),HX_("doki",e9,ed,6d,42),null());
HXDLIN(1107)						_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("dialogue/gf_dialogue",c1,9f,27,8e)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            					}
HXDLIN(1107)					_hx_tmp->set_frames(_hx_tmp1);
HXLINE(1108)					this->portraitRight->animation->addByPrefix(HX_("play",f4,2d,5a,4a),HX_("gf_spook",6e,b9,31,12),24,true,null(),null());
HXLINE(1109)					this->portraitRight->animation->play(HX_("play",f4,2d,5a,4a),null(),null(),null());
            				}
HXLINE(1100)				goto _hx_goto_12;
            			}
            			if (  (_hx_switch_1==HX_("gf_yeah",13,7b,e2,86)) ){
HXLINE(1079)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(1079)				 ::flixel::_hx_system::FlxSound _hx_tmp1 = _hx_tmp->load(::Paths_obj::sound(HX_("GFText",6c,32,36,e9),null()),((Float)0.8),null(),null(),null(),null(),null(),null(),null());
HXDLIN(1079)				this->swagDialogue->sounds = ::Array_obj< ::Dynamic>::__new(1)->init(0,_hx_tmp1);
HXLINE(1080)				this->portraitRight->set_visible(false);
HXLINE(1081)				this->box->animation->play(HX_("gf",1f,5a,00,00),null(),null(),null());
HXLINE(1082)				if (!(this->portraitRight->visible)) {
HXLINE(1084)					this->portraitRight->set_visible(true);
HXLINE(1085)					 ::flixel::FlxSprite _hx_tmp = this->portraitRight;
HXDLIN(1085)					bool isLocale = false;
HXDLIN(1085)					 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp1;
HXDLIN(1085)					if (isLocale) {
HXLINE(1085)						if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/gf_dialogue",c1,9f,27,8e)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)),null())) {
HXLINE(1085)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/gf_dialogue",c1,9f,27,8e),HX_("doki",e9,ed,6d,42),isLocale);
HXDLIN(1085)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/gf_dialogue",c1,9f,27,8e)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            						}
            						else {
HXLINE(1085)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/gf_dialogue",c1,9f,27,8e),HX_("doki",e9,ed,6d,42),isLocale);
HXDLIN(1085)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("dialogue/gf_dialogue",c1,9f,27,8e)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            						}
            					}
            					else {
HXLINE(1085)						 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/gf_dialogue",c1,9f,27,8e),HX_("doki",e9,ed,6d,42),null());
HXDLIN(1085)						_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("dialogue/gf_dialogue",c1,9f,27,8e)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            					}
HXDLIN(1085)					_hx_tmp->set_frames(_hx_tmp1);
HXLINE(1086)					this->portraitRight->animation->addByPrefix(HX_("play",f4,2d,5a,4a),HX_("gf_yeah",13,7b,e2,86),24,false,null(),null());
HXLINE(1087)					this->portraitRight->animation->play(HX_("play",f4,2d,5a,4a),null(),null(),null());
            				}
HXLINE(1078)				goto _hx_goto_12;
            			}
            			if (  (_hx_switch_1==HX_("glitch",f5,93,c8,a3)) ){
HXLINE(1171)				this->canSkip = false;
HXLINE(1172)				this->isCommand = true;
HXLINE(1174)				this->funnyGlitch();
HXLINE(1170)				goto _hx_goto_12;
            			}
            			if (  (_hx_switch_1==HX_("hidebackground",30,0f,02,5f)) ){
HXLINE(1202)				this->enddialogue();
HXLINE(1203)				this->backgroundImage->set_visible(false);
HXLINE(1201)				goto _hx_goto_12;
            			}
            			if (  (_hx_switch_1==HX_("hidebgfade",03,04,e6,23)) ){
HXLINE(1228)				this->bgFade->set_alpha(( (Float)(0) ));
HXDLIN(1228)				goto _hx_goto_12;
            			}
            			if (  (_hx_switch_1==HX_("hidedialogue",da,f3,e7,8e)) ){
HXLINE(1223)				this->bgFade->set_visible(false);
HXLINE(1224)				this->box->set_visible(false);
HXLINE(1225)				this->portraitRight->set_visible(false);
HXLINE(1226)				this->portraitLeft->set_visible(false);
HXLINE(1222)				goto _hx_goto_12;
            			}
            			if (  (_hx_switch_1==HX_("hideleft",c9,c5,a4,b5)) ){
HXLINE(1185)				this->portraitLeft->set_visible(false);
HXLINE(1186)				this->enddialogue();
HXLINE(1184)				goto _hx_goto_12;
            			}
            			if (  (_hx_switch_1==HX_("hideright",da,57,95,b1)) ){
HXLINE(1181)				this->portraitRight->set_visible(false);
HXLINE(1182)				this->enddialogue();
HXLINE(1180)				goto _hx_goto_12;
            			}
            			if (  (_hx_switch_1==HX_("mc_camera",ae,2f,4f,15)) ){
HXLINE( 931)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 931)				 ::flixel::_hx_system::FlxSound _hx_tmp1 = _hx_tmp->load(::Paths_obj::sound(HX_("pixelText",53,7a,83,06),null()),((Float)0.8),null(),null(),null(),null(),null(),null(),null());
HXDLIN( 931)				this->swagDialogue->sounds = ::Array_obj< ::Dynamic>::__new(1)->init(0,_hx_tmp1);
HXLINE( 932)				this->portraitRight->set_visible(false);
HXLINE( 933)				this->box->animation->play(HX_("mc",56,5f,00,00),null(),null(),null());
HXLINE( 934)				if (!(this->portraitRight->visible)) {
HXLINE( 936)					this->portraitRight->set_visible(true);
HXLINE( 937)					 ::flixel::FlxSprite _hx_tmp = this->portraitRight;
HXDLIN( 937)					bool isLocale = false;
HXDLIN( 937)					 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp1;
HXDLIN( 937)					if (isLocale) {
HXLINE( 937)						if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/mc_dialogue",aa,bb,7e,52)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)),null())) {
HXLINE( 937)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/mc_dialogue",aa,bb,7e,52),HX_("doki",e9,ed,6d,42),isLocale);
HXDLIN( 937)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/mc_dialogue",aa,bb,7e,52)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            						}
            						else {
HXLINE( 937)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/mc_dialogue",aa,bb,7e,52),HX_("doki",e9,ed,6d,42),isLocale);
HXDLIN( 937)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("dialogue/mc_dialogue",aa,bb,7e,52)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            						}
            					}
            					else {
HXLINE( 937)						 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/mc_dialogue",aa,bb,7e,52),HX_("doki",e9,ed,6d,42),null());
HXDLIN( 937)						_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("dialogue/mc_dialogue",aa,bb,7e,52)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            					}
HXDLIN( 937)					_hx_tmp->set_frames(_hx_tmp1);
HXLINE( 938)					this->portraitRight->animation->addByPrefix(HX_("play",f4,2d,5a,4a),HX_("mc_camera",ae,2f,4f,15),24,false,null(),null());
HXLINE( 939)					this->portraitRight->animation->play(HX_("play",f4,2d,5a,4a),null(),null(),null());
            				}
HXLINE( 930)				goto _hx_goto_12;
            			}
            			if (  (_hx_switch_1==HX_("mc_happy",37,30,4e,8d)) ){
HXLINE( 942)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 942)				 ::flixel::_hx_system::FlxSound _hx_tmp1 = _hx_tmp->load(::Paths_obj::sound(HX_("pixelText",53,7a,83,06),null()),((Float)0.8),null(),null(),null(),null(),null(),null(),null());
HXDLIN( 942)				this->swagDialogue->sounds = ::Array_obj< ::Dynamic>::__new(1)->init(0,_hx_tmp1);
HXLINE( 943)				this->portraitRight->set_visible(false);
HXLINE( 944)				this->box->animation->play(HX_("mc",56,5f,00,00),null(),null(),null());
HXLINE( 945)				if (!(this->portraitRight->visible)) {
HXLINE( 947)					this->portraitRight->set_visible(true);
HXLINE( 948)					 ::flixel::FlxSprite _hx_tmp = this->portraitRight;
HXDLIN( 948)					bool isLocale = false;
HXDLIN( 948)					 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp1;
HXDLIN( 948)					if (isLocale) {
HXLINE( 948)						if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/mc_dialogue",aa,bb,7e,52)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)),null())) {
HXLINE( 948)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/mc_dialogue",aa,bb,7e,52),HX_("doki",e9,ed,6d,42),isLocale);
HXDLIN( 948)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/mc_dialogue",aa,bb,7e,52)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            						}
            						else {
HXLINE( 948)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/mc_dialogue",aa,bb,7e,52),HX_("doki",e9,ed,6d,42),isLocale);
HXDLIN( 948)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("dialogue/mc_dialogue",aa,bb,7e,52)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            						}
            					}
            					else {
HXLINE( 948)						 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/mc_dialogue",aa,bb,7e,52),HX_("doki",e9,ed,6d,42),null());
HXDLIN( 948)						_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("dialogue/mc_dialogue",aa,bb,7e,52)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            					}
HXDLIN( 948)					_hx_tmp->set_frames(_hx_tmp1);
HXLINE( 949)					this->portraitRight->animation->addByPrefix(HX_("play",f4,2d,5a,4a),HX_("mc_happy",37,30,4e,8d),24,false,null(),null());
HXLINE( 950)					this->portraitRight->animation->play(HX_("play",f4,2d,5a,4a),null(),null(),null());
            				}
HXLINE( 941)				goto _hx_goto_12;
            			}
            			if (  (_hx_switch_1==HX_("mc_neutral",1e,ec,f2,97)) ){
HXLINE( 920)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 920)				 ::flixel::_hx_system::FlxSound _hx_tmp1 = _hx_tmp->load(::Paths_obj::sound(HX_("pixelText",53,7a,83,06),null()),((Float)0.8),null(),null(),null(),null(),null(),null(),null());
HXDLIN( 920)				this->swagDialogue->sounds = ::Array_obj< ::Dynamic>::__new(1)->init(0,_hx_tmp1);
HXLINE( 921)				this->portraitRight->set_visible(false);
HXLINE( 922)				this->box->animation->play(HX_("mc",56,5f,00,00),null(),null(),null());
HXLINE( 923)				if (!(this->portraitRight->visible)) {
HXLINE( 925)					this->portraitRight->set_visible(true);
HXLINE( 926)					 ::flixel::FlxSprite _hx_tmp = this->portraitRight;
HXDLIN( 926)					bool isLocale = false;
HXDLIN( 926)					 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp1;
HXDLIN( 926)					if (isLocale) {
HXLINE( 926)						if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/mc_dialogue",aa,bb,7e,52)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)),null())) {
HXLINE( 926)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/mc_dialogue",aa,bb,7e,52),HX_("doki",e9,ed,6d,42),isLocale);
HXDLIN( 926)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/mc_dialogue",aa,bb,7e,52)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            						}
            						else {
HXLINE( 926)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/mc_dialogue",aa,bb,7e,52),HX_("doki",e9,ed,6d,42),isLocale);
HXDLIN( 926)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("dialogue/mc_dialogue",aa,bb,7e,52)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            						}
            					}
            					else {
HXLINE( 926)						 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/mc_dialogue",aa,bb,7e,52),HX_("doki",e9,ed,6d,42),null());
HXDLIN( 926)						_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("dialogue/mc_dialogue",aa,bb,7e,52)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            					}
HXDLIN( 926)					_hx_tmp->set_frames(_hx_tmp1);
HXLINE( 927)					this->portraitRight->animation->addByPrefix(HX_("play",f4,2d,5a,4a),HX_("mc_neutral",1e,ec,f2,97),24,false,null(),null());
HXLINE( 928)					this->portraitRight->animation->play(HX_("play",f4,2d,5a,4a),null(),null(),null());
            				}
HXLINE( 919)				goto _hx_goto_12;
            			}
            			if (  (_hx_switch_1==HX_("mc_sigh",00,f5,5c,49)) ){
HXLINE( 953)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 953)				 ::flixel::_hx_system::FlxSound _hx_tmp1 = _hx_tmp->load(::Paths_obj::sound(HX_("pixelText",53,7a,83,06),null()),((Float)0.8),null(),null(),null(),null(),null(),null(),null());
HXDLIN( 953)				this->swagDialogue->sounds = ::Array_obj< ::Dynamic>::__new(1)->init(0,_hx_tmp1);
HXLINE( 954)				this->portraitRight->set_visible(false);
HXLINE( 955)				this->box->animation->play(HX_("mc",56,5f,00,00),null(),null(),null());
HXLINE( 956)				if (!(this->portraitRight->visible)) {
HXLINE( 958)					this->portraitRight->set_visible(true);
HXLINE( 959)					 ::flixel::FlxSprite _hx_tmp = this->portraitRight;
HXDLIN( 959)					bool isLocale = false;
HXDLIN( 959)					 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp1;
HXDLIN( 959)					if (isLocale) {
HXLINE( 959)						if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/mc_dialogue",aa,bb,7e,52)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)),null())) {
HXLINE( 959)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/mc_dialogue",aa,bb,7e,52),HX_("doki",e9,ed,6d,42),isLocale);
HXDLIN( 959)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/mc_dialogue",aa,bb,7e,52)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            						}
            						else {
HXLINE( 959)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/mc_dialogue",aa,bb,7e,52),HX_("doki",e9,ed,6d,42),isLocale);
HXDLIN( 959)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("dialogue/mc_dialogue",aa,bb,7e,52)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            						}
            					}
            					else {
HXLINE( 959)						 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/mc_dialogue",aa,bb,7e,52),HX_("doki",e9,ed,6d,42),null());
HXDLIN( 959)						_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("dialogue/mc_dialogue",aa,bb,7e,52)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            					}
HXDLIN( 959)					_hx_tmp->set_frames(_hx_tmp1);
HXLINE( 960)					this->portraitRight->animation->addByPrefix(HX_("play",f4,2d,5a,4a),HX_("mc_sigh",00,f5,5c,49),24,false,null(),null());
HXLINE( 961)					this->portraitRight->animation->play(HX_("play",f4,2d,5a,4a),null(),null(),null());
            				}
HXLINE( 952)				goto _hx_goto_12;
            			}
            			if (  (_hx_switch_1==HX_("monika_ahaha",87,25,7b,c8)) ){
HXLINE( 906)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 906)				 ::flixel::_hx_system::FlxSound _hx_tmp1 = _hx_tmp->load(::Paths_obj::sound(HX_("MoniText",8a,63,22,e4),null()),((Float)0.8),null(),null(),null(),null(),null(),null(),null());
HXDLIN( 906)				this->swagDialogue->sounds = ::Array_obj< ::Dynamic>::__new(1)->init(0,_hx_tmp1);
HXLINE( 907)				this->portraitLeft->set_visible(false);
HXLINE( 908)				this->box->animation->play(HX_("monika",f3,3a,66,c7),null(),null(),null());
HXLINE( 909)				if (!(this->portraitLeft->visible)) {
HXLINE( 911)					this->portraitLeft->set_visible(true);
HXLINE( 912)					 ::flixel::FlxSprite _hx_tmp = this->portraitLeft;
HXDLIN( 912)					bool isLocale = false;
HXDLIN( 912)					 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp1;
HXDLIN( 912)					if (isLocale) {
HXLINE( 912)						if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/moni_dialogue",43,92,4f,95)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)),null())) {
HXLINE( 912)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/moni_dialogue",43,92,4f,95),HX_("doki",e9,ed,6d,42),isLocale);
HXDLIN( 912)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/moni_dialogue",43,92,4f,95)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            						}
            						else {
HXLINE( 912)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/moni_dialogue",43,92,4f,95),HX_("doki",e9,ed,6d,42),isLocale);
HXDLIN( 912)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("dialogue/moni_dialogue",43,92,4f,95)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            						}
            					}
            					else {
HXLINE( 912)						 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/moni_dialogue",43,92,4f,95),HX_("doki",e9,ed,6d,42),null());
HXDLIN( 912)						_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("dialogue/moni_dialogue",43,92,4f,95)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            					}
HXDLIN( 912)					_hx_tmp->set_frames(_hx_tmp1);
HXLINE( 913)					this->portraitLeft->animation->addByPrefix(HX_("play",f4,2d,5a,4a),HX_("monika_ahaha",87,25,7b,c8),24,false,null(),null());
HXLINE( 914)					this->portraitLeft->animation->play(HX_("play",f4,2d,5a,4a),null(),null(),null());
HXLINE( 915)					this->portraitLeft->set_flipX(false);
            				}
HXLINE( 905)				goto _hx_goto_12;
            			}
            			if (  (_hx_switch_1==HX_("monika_ahh",15,6b,7f,d9)) ){
HXLINE( 894)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 894)				 ::flixel::_hx_system::FlxSound _hx_tmp1 = _hx_tmp->load(::Paths_obj::sound(HX_("MoniText",8a,63,22,e4),null()),((Float)0.8),null(),null(),null(),null(),null(),null(),null());
HXDLIN( 894)				this->swagDialogue->sounds = ::Array_obj< ::Dynamic>::__new(1)->init(0,_hx_tmp1);
HXLINE( 895)				this->portraitLeft->set_visible(false);
HXLINE( 896)				this->box->animation->play(HX_("monika",f3,3a,66,c7),null(),null(),null());
HXLINE( 897)				if (!(this->portraitLeft->visible)) {
HXLINE( 899)					this->portraitLeft->set_visible(true);
HXLINE( 900)					 ::flixel::FlxSprite _hx_tmp = this->portraitLeft;
HXDLIN( 900)					bool isLocale = false;
HXDLIN( 900)					 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp1;
HXDLIN( 900)					if (isLocale) {
HXLINE( 900)						if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/moni_dialogue",43,92,4f,95)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)),null())) {
HXLINE( 900)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/moni_dialogue",43,92,4f,95),HX_("doki",e9,ed,6d,42),isLocale);
HXDLIN( 900)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/moni_dialogue",43,92,4f,95)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            						}
            						else {
HXLINE( 900)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/moni_dialogue",43,92,4f,95),HX_("doki",e9,ed,6d,42),isLocale);
HXDLIN( 900)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("dialogue/moni_dialogue",43,92,4f,95)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            						}
            					}
            					else {
HXLINE( 900)						 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/moni_dialogue",43,92,4f,95),HX_("doki",e9,ed,6d,42),null());
HXDLIN( 900)						_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("dialogue/moni_dialogue",43,92,4f,95)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            					}
HXDLIN( 900)					_hx_tmp->set_frames(_hx_tmp1);
HXLINE( 901)					this->portraitLeft->animation->addByPrefix(HX_("play",f4,2d,5a,4a),HX_("monika_ahh",15,6b,7f,d9),24,false,null(),null());
HXLINE( 902)					this->portraitLeft->animation->play(HX_("play",f4,2d,5a,4a),null(),null(),null());
HXLINE( 903)					this->portraitLeft->set_flipX(false);
            				}
HXLINE( 893)				goto _hx_goto_12;
            			}
            			if (  (_hx_switch_1==HX_("monika_eeh",7c,71,82,d9)) ){
HXLINE( 882)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 882)				 ::flixel::_hx_system::FlxSound _hx_tmp1 = _hx_tmp->load(::Paths_obj::sound(HX_("MoniText",8a,63,22,e4),null()),((Float)0.8),null(),null(),null(),null(),null(),null(),null());
HXDLIN( 882)				this->swagDialogue->sounds = ::Array_obj< ::Dynamic>::__new(1)->init(0,_hx_tmp1);
HXLINE( 883)				this->portraitLeft->set_visible(false);
HXLINE( 884)				this->box->animation->play(HX_("monika",f3,3a,66,c7),null(),null(),null());
HXLINE( 885)				if (!(this->portraitLeft->visible)) {
HXLINE( 887)					this->portraitLeft->set_visible(true);
HXLINE( 888)					 ::flixel::FlxSprite _hx_tmp = this->portraitLeft;
HXDLIN( 888)					bool isLocale = false;
HXDLIN( 888)					 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp1;
HXDLIN( 888)					if (isLocale) {
HXLINE( 888)						if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/moni_dialogue",43,92,4f,95)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)),null())) {
HXLINE( 888)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/moni_dialogue",43,92,4f,95),HX_("doki",e9,ed,6d,42),isLocale);
HXDLIN( 888)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/moni_dialogue",43,92,4f,95)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            						}
            						else {
HXLINE( 888)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/moni_dialogue",43,92,4f,95),HX_("doki",e9,ed,6d,42),isLocale);
HXDLIN( 888)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("dialogue/moni_dialogue",43,92,4f,95)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            						}
            					}
            					else {
HXLINE( 888)						 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/moni_dialogue",43,92,4f,95),HX_("doki",e9,ed,6d,42),null());
HXDLIN( 888)						_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("dialogue/moni_dialogue",43,92,4f,95)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            					}
HXDLIN( 888)					_hx_tmp->set_frames(_hx_tmp1);
HXLINE( 889)					this->portraitLeft->animation->addByPrefix(HX_("play",f4,2d,5a,4a),HX_("monika_eeh",7c,71,82,d9),24,false,null(),null());
HXLINE( 890)					this->portraitLeft->animation->play(HX_("play",f4,2d,5a,4a),null(),null(),null());
HXLINE( 891)					this->portraitLeft->set_flipX(false);
            				}
HXLINE( 881)				goto _hx_goto_12;
            			}
            			if (  (_hx_switch_1==HX_("monika_neutral",bb,2c,39,af)) ){
HXLINE( 858)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 858)				 ::flixel::_hx_system::FlxSound _hx_tmp1 = _hx_tmp->load(::Paths_obj::sound(HX_("MoniText",8a,63,22,e4),null()),((Float)0.8),null(),null(),null(),null(),null(),null(),null());
HXDLIN( 858)				this->swagDialogue->sounds = ::Array_obj< ::Dynamic>::__new(1)->init(0,_hx_tmp1);
HXLINE( 859)				this->portraitLeft->set_visible(false);
HXLINE( 860)				this->box->animation->play(HX_("monika",f3,3a,66,c7),null(),null(),null());
HXLINE( 861)				if (!(this->portraitLeft->visible)) {
HXLINE( 863)					this->portraitLeft->set_visible(true);
HXLINE( 864)					 ::flixel::FlxSprite _hx_tmp = this->portraitLeft;
HXDLIN( 864)					bool isLocale = false;
HXDLIN( 864)					 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp1;
HXDLIN( 864)					if (isLocale) {
HXLINE( 864)						if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/moni_dialogue",43,92,4f,95)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)),null())) {
HXLINE( 864)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/moni_dialogue",43,92,4f,95),HX_("doki",e9,ed,6d,42),isLocale);
HXDLIN( 864)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/moni_dialogue",43,92,4f,95)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            						}
            						else {
HXLINE( 864)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/moni_dialogue",43,92,4f,95),HX_("doki",e9,ed,6d,42),isLocale);
HXDLIN( 864)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("dialogue/moni_dialogue",43,92,4f,95)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            						}
            					}
            					else {
HXLINE( 864)						 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/moni_dialogue",43,92,4f,95),HX_("doki",e9,ed,6d,42),null());
HXDLIN( 864)						_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("dialogue/moni_dialogue",43,92,4f,95)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            					}
HXDLIN( 864)					_hx_tmp->set_frames(_hx_tmp1);
HXLINE( 865)					this->portraitLeft->animation->addByPrefix(HX_("play",f4,2d,5a,4a),HX_("monika_neutral",bb,2c,39,af),24,false,null(),null());
HXLINE( 866)					this->portraitLeft->animation->play(HX_("play",f4,2d,5a,4a),null(),null(),null());
HXLINE( 867)					this->portraitLeft->set_flipX(false);
            				}
HXLINE( 857)				goto _hx_goto_12;
            			}
            			if (  (_hx_switch_1==HX_("monika_upset",9b,1a,d6,51)) ){
HXLINE( 870)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 870)				 ::flixel::_hx_system::FlxSound _hx_tmp1 = _hx_tmp->load(::Paths_obj::sound(HX_("MoniText",8a,63,22,e4),null()),((Float)0.8),null(),null(),null(),null(),null(),null(),null());
HXDLIN( 870)				this->swagDialogue->sounds = ::Array_obj< ::Dynamic>::__new(1)->init(0,_hx_tmp1);
HXLINE( 871)				this->portraitLeft->set_visible(false);
HXLINE( 872)				this->box->animation->play(HX_("monika",f3,3a,66,c7),null(),null(),null());
HXLINE( 873)				if (!(this->portraitLeft->visible)) {
HXLINE( 875)					this->portraitLeft->set_visible(true);
HXLINE( 876)					 ::flixel::FlxSprite _hx_tmp = this->portraitLeft;
HXDLIN( 876)					bool isLocale = false;
HXDLIN( 876)					 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp1;
HXDLIN( 876)					if (isLocale) {
HXLINE( 876)						if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/moni_dialogue",43,92,4f,95)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)),null())) {
HXLINE( 876)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/moni_dialogue",43,92,4f,95),HX_("doki",e9,ed,6d,42),isLocale);
HXDLIN( 876)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/moni_dialogue",43,92,4f,95)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            						}
            						else {
HXLINE( 876)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/moni_dialogue",43,92,4f,95),HX_("doki",e9,ed,6d,42),isLocale);
HXDLIN( 876)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("dialogue/moni_dialogue",43,92,4f,95)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            						}
            					}
            					else {
HXLINE( 876)						 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/moni_dialogue",43,92,4f,95),HX_("doki",e9,ed,6d,42),null());
HXDLIN( 876)						_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("dialogue/moni_dialogue",43,92,4f,95)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            					}
HXDLIN( 876)					_hx_tmp->set_frames(_hx_tmp1);
HXLINE( 877)					this->portraitLeft->animation->addByPrefix(HX_("play",f4,2d,5a,4a),HX_("monika_upset",9b,1a,d6,51),24,false,null(),null());
HXLINE( 878)					this->portraitLeft->animation->play(HX_("play",f4,2d,5a,4a),null(),null(),null());
HXLINE( 879)					this->portraitLeft->set_flipX(false);
            				}
HXLINE( 869)				goto _hx_goto_12;
            			}
            			if (  (_hx_switch_1==HX_("natsuki_angy",7d,88,3a,6d)) ){
HXLINE( 682)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 682)				 ::flixel::_hx_system::FlxSound _hx_tmp1 = _hx_tmp->load(::Paths_obj::sound(HX_("NatText",0e,72,76,76),null()),((Float)0.8),null(),null(),null(),null(),null(),null(),null());
HXDLIN( 682)				this->swagDialogue->sounds = ::Array_obj< ::Dynamic>::__new(1)->init(0,_hx_tmp1);
HXLINE( 683)				this->portraitLeft->set_visible(false);
HXLINE( 684)				this->box->animation->play(HX_("natsuki",21,00,af,bd),null(),null(),null());
HXLINE( 685)				if (!(this->portraitLeft->visible)) {
HXLINE( 687)					this->portraitLeft->set_visible(true);
HXLINE( 688)					 ::flixel::FlxSprite _hx_tmp = this->portraitLeft;
HXDLIN( 688)					bool isLocale = false;
HXDLIN( 688)					 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp1;
HXDLIN( 688)					if (isLocale) {
HXLINE( 688)						if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/nat_dialogue",0d,c2,9a,d7)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)),null())) {
HXLINE( 688)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/nat_dialogue",0d,c2,9a,d7),HX_("doki",e9,ed,6d,42),isLocale);
HXDLIN( 688)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/nat_dialogue",0d,c2,9a,d7)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            						}
            						else {
HXLINE( 688)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/nat_dialogue",0d,c2,9a,d7),HX_("doki",e9,ed,6d,42),isLocale);
HXDLIN( 688)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("dialogue/nat_dialogue",0d,c2,9a,d7)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            						}
            					}
            					else {
HXLINE( 688)						 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/nat_dialogue",0d,c2,9a,d7),HX_("doki",e9,ed,6d,42),null());
HXDLIN( 688)						_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("dialogue/nat_dialogue",0d,c2,9a,d7)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            					}
HXDLIN( 688)					_hx_tmp->set_frames(_hx_tmp1);
HXLINE( 689)					this->portraitLeft->animation->addByPrefix(HX_("play",f4,2d,5a,4a),HX_("nat_angy",bd,83,37,aa),24,false,null(),null());
HXLINE( 690)					this->portraitLeft->animation->play(HX_("play",f4,2d,5a,4a),null(),null(),null());
HXLINE( 691)					this->portraitLeft->set_flipX(false);
            				}
HXLINE( 681)				goto _hx_goto_12;
            			}
            			if (  (_hx_switch_1==HX_("natsuki_gone",7d,98,32,71)) ){
HXLINE( 754)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 754)				 ::flixel::_hx_system::FlxSound _hx_tmp1 = _hx_tmp->load(::Paths_obj::sound(HX_("NatText",0e,72,76,76),null()),((Float)0.8),null(),null(),null(),null(),null(),null(),null());
HXDLIN( 754)				this->swagDialogue->sounds = ::Array_obj< ::Dynamic>::__new(1)->init(0,_hx_tmp1);
HXLINE( 755)				this->portraitLeft->set_visible(false);
HXLINE( 756)				this->box->animation->play(HX_("natsuki",21,00,af,bd),null(),null(),null());
HXLINE( 757)				if (!(this->portraitLeft->visible)) {
HXLINE( 759)					this->portraitLeft->set_flipX(false);
            				}
HXLINE( 753)				goto _hx_goto_12;
            			}
            			if (  (_hx_switch_1==HX_("natsuki_hmmph",e2,43,26,2d)) ){
HXLINE( 694)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 694)				 ::flixel::_hx_system::FlxSound _hx_tmp1 = _hx_tmp->load(::Paths_obj::sound(HX_("NatText",0e,72,76,76),null()),((Float)0.8),null(),null(),null(),null(),null(),null(),null());
HXDLIN( 694)				this->swagDialogue->sounds = ::Array_obj< ::Dynamic>::__new(1)->init(0,_hx_tmp1);
HXLINE( 695)				this->portraitLeft->set_visible(false);
HXLINE( 696)				this->box->animation->play(HX_("natsuki",21,00,af,bd),null(),null(),null());
HXLINE( 697)				if (!(this->portraitLeft->visible)) {
HXLINE( 699)					this->portraitLeft->set_visible(true);
HXLINE( 700)					 ::flixel::FlxSprite _hx_tmp = this->portraitLeft;
HXDLIN( 700)					bool isLocale = false;
HXDLIN( 700)					 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp1;
HXDLIN( 700)					if (isLocale) {
HXLINE( 700)						if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/nat_dialogue",0d,c2,9a,d7)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)),null())) {
HXLINE( 700)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/nat_dialogue",0d,c2,9a,d7),HX_("doki",e9,ed,6d,42),isLocale);
HXDLIN( 700)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/nat_dialogue",0d,c2,9a,d7)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            						}
            						else {
HXLINE( 700)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/nat_dialogue",0d,c2,9a,d7),HX_("doki",e9,ed,6d,42),isLocale);
HXDLIN( 700)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("dialogue/nat_dialogue",0d,c2,9a,d7)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            						}
            					}
            					else {
HXLINE( 700)						 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/nat_dialogue",0d,c2,9a,d7),HX_("doki",e9,ed,6d,42),null());
HXDLIN( 700)						_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("dialogue/nat_dialogue",0d,c2,9a,d7)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            					}
HXDLIN( 700)					_hx_tmp->set_frames(_hx_tmp1);
HXLINE( 701)					this->portraitLeft->animation->addByPrefix(HX_("play",f4,2d,5a,4a),HX_("nat_hmmph",a2,20,85,4d),24,false,null(),null());
HXLINE( 702)					this->portraitLeft->animation->play(HX_("play",f4,2d,5a,4a),null(),null(),null());
HXLINE( 703)					this->portraitLeft->set_flipX(false);
            				}
HXLINE( 693)				goto _hx_goto_12;
            			}
            			if (  (_hx_switch_1==HX_("natsuki_neutral",e9,cf,af,da)) ){
HXLINE( 670)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 670)				 ::flixel::_hx_system::FlxSound _hx_tmp1 = _hx_tmp->load(::Paths_obj::sound(HX_("NatText",0e,72,76,76),null()),((Float)0.8),null(),null(),null(),null(),null(),null(),null());
HXDLIN( 670)				this->swagDialogue->sounds = ::Array_obj< ::Dynamic>::__new(1)->init(0,_hx_tmp1);
HXLINE( 671)				this->portraitLeft->set_visible(false);
HXLINE( 672)				this->box->animation->play(HX_("natsuki",21,00,af,bd),null(),null(),null());
HXLINE( 673)				if (!(this->portraitLeft->visible)) {
HXLINE( 675)					this->portraitLeft->set_visible(true);
HXLINE( 676)					 ::flixel::FlxSprite _hx_tmp = this->portraitLeft;
HXDLIN( 676)					bool isLocale = false;
HXDLIN( 676)					 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp1;
HXDLIN( 676)					if (isLocale) {
HXLINE( 676)						if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/nat_dialogue",0d,c2,9a,d7)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)),null())) {
HXLINE( 676)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/nat_dialogue",0d,c2,9a,d7),HX_("doki",e9,ed,6d,42),isLocale);
HXDLIN( 676)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/nat_dialogue",0d,c2,9a,d7)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            						}
            						else {
HXLINE( 676)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/nat_dialogue",0d,c2,9a,d7),HX_("doki",e9,ed,6d,42),isLocale);
HXDLIN( 676)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("dialogue/nat_dialogue",0d,c2,9a,d7)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            						}
            					}
            					else {
HXLINE( 676)						 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/nat_dialogue",0d,c2,9a,d7),HX_("doki",e9,ed,6d,42),null());
HXDLIN( 676)						_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("dialogue/nat_dialogue",0d,c2,9a,d7)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            					}
HXDLIN( 676)					_hx_tmp->set_frames(_hx_tmp1);
HXLINE( 677)					this->portraitLeft->animation->addByPrefix(HX_("play",f4,2d,5a,4a),HX_("natneutral",86,ee,7d,63),24,false,null(),null());
HXLINE( 678)					this->portraitLeft->animation->play(HX_("play",f4,2d,5a,4a),null(),null(),null());
HXLINE( 679)					this->portraitLeft->set_flipX(false);
            				}
HXLINE( 669)				goto _hx_goto_12;
            			}
            			if (  (_hx_switch_1==HX_("natsuki_sick",dc,90,1c,79)) ){
HXLINE( 742)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 742)				 ::flixel::_hx_system::FlxSound _hx_tmp1 = _hx_tmp->load(::Paths_obj::sound(HX_("NatText",0e,72,76,76),null()),((Float)0.8),null(),null(),null(),null(),null(),null(),null());
HXDLIN( 742)				this->swagDialogue->sounds = ::Array_obj< ::Dynamic>::__new(1)->init(0,_hx_tmp1);
HXLINE( 743)				this->portraitLeft->set_visible(false);
HXLINE( 744)				this->box->animation->play(HX_("natsuki",21,00,af,bd),null(),null(),null());
HXLINE( 745)				if (!(this->portraitLeft->visible)) {
HXLINE( 747)					this->portraitLeft->set_visible(true);
HXLINE( 748)					 ::flixel::FlxSprite _hx_tmp = this->portraitLeft;
HXDLIN( 748)					bool isLocale = false;
HXDLIN( 748)					 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp1;
HXDLIN( 748)					if (isLocale) {
HXLINE( 748)						if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/nat_dialogue",0d,c2,9a,d7)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)),null())) {
HXLINE( 748)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/nat_dialogue",0d,c2,9a,d7),HX_("doki",e9,ed,6d,42),isLocale);
HXDLIN( 748)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/nat_dialogue",0d,c2,9a,d7)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            						}
            						else {
HXLINE( 748)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/nat_dialogue",0d,c2,9a,d7),HX_("doki",e9,ed,6d,42),isLocale);
HXDLIN( 748)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("dialogue/nat_dialogue",0d,c2,9a,d7)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            						}
            					}
            					else {
HXLINE( 748)						 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/nat_dialogue",0d,c2,9a,d7),HX_("doki",e9,ed,6d,42),null());
HXDLIN( 748)						_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("dialogue/nat_dialogue",0d,c2,9a,d7)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            					}
HXDLIN( 748)					_hx_tmp->set_frames(_hx_tmp1);
HXLINE( 749)					this->portraitLeft->animation->addByPrefix(HX_("play",f4,2d,5a,4a),HX_("nat_sick",1c,8c,19,b6),24,false,null(),null());
HXLINE( 750)					this->portraitLeft->animation->play(HX_("play",f4,2d,5a,4a),null(),null(),null());
HXLINE( 751)					this->portraitLeft->set_flipX(false);
            				}
HXLINE( 741)				goto _hx_goto_12;
            			}
            			if (  (_hx_switch_1==HX_("natsuki_spook",f0,cc,8b,84)) ){
HXLINE( 730)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 730)				 ::flixel::_hx_system::FlxSound _hx_tmp1 = _hx_tmp->load(::Paths_obj::sound(HX_("NatText",0e,72,76,76),null()),((Float)0.8),null(),null(),null(),null(),null(),null(),null());
HXDLIN( 730)				this->swagDialogue->sounds = ::Array_obj< ::Dynamic>::__new(1)->init(0,_hx_tmp1);
HXLINE( 731)				this->portraitLeft->set_visible(false);
HXLINE( 732)				this->box->animation->play(HX_("natsuki",21,00,af,bd),null(),null(),null());
HXLINE( 733)				if (!(this->portraitLeft->visible)) {
HXLINE( 735)					this->portraitLeft->set_visible(true);
HXLINE( 736)					 ::flixel::FlxSprite _hx_tmp = this->portraitLeft;
HXDLIN( 736)					bool isLocale = false;
HXDLIN( 736)					 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp1;
HXDLIN( 736)					if (isLocale) {
HXLINE( 736)						if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/nat_dialogue",0d,c2,9a,d7)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)),null())) {
HXLINE( 736)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/nat_dialogue",0d,c2,9a,d7),HX_("doki",e9,ed,6d,42),isLocale);
HXDLIN( 736)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/nat_dialogue",0d,c2,9a,d7)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            						}
            						else {
HXLINE( 736)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/nat_dialogue",0d,c2,9a,d7),HX_("doki",e9,ed,6d,42),isLocale);
HXDLIN( 736)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("dialogue/nat_dialogue",0d,c2,9a,d7)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            						}
            					}
            					else {
HXLINE( 736)						 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/nat_dialogue",0d,c2,9a,d7),HX_("doki",e9,ed,6d,42),null());
HXDLIN( 736)						_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("dialogue/nat_dialogue",0d,c2,9a,d7)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            					}
HXDLIN( 736)					_hx_tmp->set_frames(_hx_tmp1);
HXLINE( 737)					this->portraitLeft->animation->addByPrefix(HX_("play",f4,2d,5a,4a),HX_("nat_spook",b0,a9,ea,a4),24,true,null(),null());
HXLINE( 738)					this->portraitLeft->animation->play(HX_("play",f4,2d,5a,4a),null(),null(),null());
HXLINE( 739)					this->portraitLeft->set_flipX(false);
            				}
HXLINE( 729)				goto _hx_goto_12;
            			}
            			if (  (_hx_switch_1==HX_("natsuki_wah",c0,0a,8e,00)) ){
HXLINE( 718)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 718)				 ::flixel::_hx_system::FlxSound _hx_tmp1 = _hx_tmp->load(::Paths_obj::sound(HX_("NatText",0e,72,76,76),null()),((Float)0.8),null(),null(),null(),null(),null(),null(),null());
HXDLIN( 718)				this->swagDialogue->sounds = ::Array_obj< ::Dynamic>::__new(1)->init(0,_hx_tmp1);
HXLINE( 719)				this->portraitLeft->set_visible(false);
HXLINE( 720)				this->box->animation->play(HX_("natsuki",21,00,af,bd),null(),null(),null());
HXLINE( 721)				if (!(this->portraitLeft->visible)) {
HXLINE( 723)					this->portraitLeft->set_visible(true);
HXLINE( 724)					 ::flixel::FlxSprite _hx_tmp = this->portraitLeft;
HXDLIN( 724)					bool isLocale = false;
HXDLIN( 724)					 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp1;
HXDLIN( 724)					if (isLocale) {
HXLINE( 724)						if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/nat_dialogue",0d,c2,9a,d7)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)),null())) {
HXLINE( 724)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/nat_dialogue",0d,c2,9a,d7),HX_("doki",e9,ed,6d,42),isLocale);
HXDLIN( 724)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/nat_dialogue",0d,c2,9a,d7)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            						}
            						else {
HXLINE( 724)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/nat_dialogue",0d,c2,9a,d7),HX_("doki",e9,ed,6d,42),isLocale);
HXDLIN( 724)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("dialogue/nat_dialogue",0d,c2,9a,d7)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            						}
            					}
            					else {
HXLINE( 724)						 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/nat_dialogue",0d,c2,9a,d7),HX_("doki",e9,ed,6d,42),null());
HXDLIN( 724)						_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("dialogue/nat_dialogue",0d,c2,9a,d7)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            					}
HXDLIN( 724)					_hx_tmp->set_frames(_hx_tmp1);
HXLINE( 725)					this->portraitLeft->animation->addByPrefix(HX_("play",f4,2d,5a,4a),HX_("nat_wah",80,37,78,b0),24,false,null(),null());
HXLINE( 726)					this->portraitLeft->animation->play(HX_("play",f4,2d,5a,4a),null(),null(),null());
HXLINE( 727)					this->portraitLeft->set_flipX(false);
            				}
HXLINE( 717)				goto _hx_goto_12;
            			}
            			if (  (_hx_switch_1==HX_("natsuki_what",62,a7,c0,7b)) ){
HXLINE( 706)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 706)				 ::flixel::_hx_system::FlxSound _hx_tmp1 = _hx_tmp->load(::Paths_obj::sound(HX_("NatText",0e,72,76,76),null()),((Float)0.8),null(),null(),null(),null(),null(),null(),null());
HXDLIN( 706)				this->swagDialogue->sounds = ::Array_obj< ::Dynamic>::__new(1)->init(0,_hx_tmp1);
HXLINE( 707)				this->portraitLeft->set_visible(false);
HXLINE( 708)				this->box->animation->play(HX_("natsuki",21,00,af,bd),null(),null(),null());
HXLINE( 709)				if (!(this->portraitLeft->visible)) {
HXLINE( 711)					this->portraitLeft->set_visible(true);
HXLINE( 712)					 ::flixel::FlxSprite _hx_tmp = this->portraitLeft;
HXDLIN( 712)					bool isLocale = false;
HXDLIN( 712)					 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp1;
HXDLIN( 712)					if (isLocale) {
HXLINE( 712)						if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/nat_dialogue",0d,c2,9a,d7)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)),null())) {
HXLINE( 712)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/nat_dialogue",0d,c2,9a,d7),HX_("doki",e9,ed,6d,42),isLocale);
HXDLIN( 712)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/nat_dialogue",0d,c2,9a,d7)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            						}
            						else {
HXLINE( 712)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/nat_dialogue",0d,c2,9a,d7),HX_("doki",e9,ed,6d,42),isLocale);
HXDLIN( 712)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("dialogue/nat_dialogue",0d,c2,9a,d7)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            						}
            					}
            					else {
HXLINE( 712)						 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/nat_dialogue",0d,c2,9a,d7),HX_("doki",e9,ed,6d,42),null());
HXDLIN( 712)						_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("dialogue/nat_dialogue",0d,c2,9a,d7)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            					}
HXDLIN( 712)					_hx_tmp->set_frames(_hx_tmp1);
HXLINE( 713)					this->portraitLeft->animation->addByPrefix(HX_("play",f4,2d,5a,4a),HX_("nat_what",a2,a2,bd,b8),24,false,null(),null());
HXLINE( 714)					this->portraitLeft->animation->play(HX_("play",f4,2d,5a,4a),null(),null(),null());
HXLINE( 715)					this->portraitLeft->set_flipX(false);
            				}
HXLINE( 705)				goto _hx_goto_12;
            			}
            			if (  (_hx_switch_1==HX_("no_one_left",be,1e,57,0f)) ){
HXLINE(1144)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(1144)				 ::flixel::_hx_system::FlxSound _hx_tmp1 = _hx_tmp->load(::Paths_obj::sound(HX_("pixelText",53,7a,83,06),null()),((Float)0.8),null(),null(),null(),null(),null(),null(),null());
HXDLIN(1144)				this->swagDialogue->sounds = ::Array_obj< ::Dynamic>::__new(1)->init(0,_hx_tmp1);
HXLINE(1145)				this->portraitLeft->set_visible(false);
HXLINE(1146)				this->box->animation->play(HX_("blankbox",37,2b,14,d6),null(),null(),null());
HXLINE(1147)				if (!(this->portraitLeft->visible)) {
HXLINE(1149)					this->portraitLeft->set_flipX(false);
            				}
HXLINE(1143)				goto _hx_goto_12;
            			}
            			if (  (_hx_switch_1==HX_("no_one_right",45,d5,f0,d3)) ){
HXLINE(1152)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(1152)				 ::flixel::_hx_system::FlxSound _hx_tmp1 = _hx_tmp->load(::Paths_obj::sound(HX_("pixelText",53,7a,83,06),null()),((Float)0.8),null(),null(),null(),null(),null(),null(),null());
HXDLIN(1152)				this->swagDialogue->sounds = ::Array_obj< ::Dynamic>::__new(1)->init(0,_hx_tmp1);
HXLINE(1153)				this->portraitRight->set_visible(false);
HXLINE(1154)				this->box->animation->play(HX_("blankbox",37,2b,14,d6),null(),null(),null());
HXLINE(1155)				bool _hx_tmp2 = !(this->portraitRight->visible);
HXLINE(1151)				goto _hx_goto_12;
            			}
            			if (  (_hx_switch_1==HX_("playsound",5b,4a,83,0e)) ){
HXLINE(1161)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(1161)				_hx_tmp->play(::Paths_obj::sound(this->dialogueList->__get(0),HX_("shared",a5,5e,2b,1d)),null(),null(),null(),null(),null());
HXLINE(1162)				this->enddialogue();
HXLINE(1160)				goto _hx_goto_12;
            			}
            			if (  (_hx_switch_1==HX_("sayori_concern",3c,0f,d8,43)) ){
HXLINE( 836)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 836)				 ::flixel::_hx_system::FlxSound _hx_tmp1 = _hx_tmp->load(::Paths_obj::sound(HX_("SayoText",d1,04,79,cf),null()),((Float)0.8),null(),null(),null(),null(),null(),null(),null());
HXDLIN( 836)				this->swagDialogue->sounds = ::Array_obj< ::Dynamic>::__new(1)->init(0,_hx_tmp1);
HXLINE( 837)				this->portraitLeft->set_visible(false);
HXLINE( 838)				this->box->animation->play(HX_("sayori",9b,32,38,25),null(),null(),null());
HXLINE( 839)				if (!(this->portraitLeft->visible)) {
HXLINE( 841)					this->portraitLeft->set_visible(true);
HXLINE( 842)					 ::flixel::FlxSprite _hx_tmp = this->portraitLeft;
HXDLIN( 842)					bool isLocale = false;
HXDLIN( 842)					 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp1;
HXDLIN( 842)					if (isLocale) {
HXLINE( 842)						if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/sayo_dialogue",9c,ef,a7,aa)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)),null())) {
HXLINE( 842)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/sayo_dialogue",9c,ef,a7,aa),HX_("doki",e9,ed,6d,42),isLocale);
HXDLIN( 842)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/sayo_dialogue",9c,ef,a7,aa)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            						}
            						else {
HXLINE( 842)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/sayo_dialogue",9c,ef,a7,aa),HX_("doki",e9,ed,6d,42),isLocale);
HXDLIN( 842)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("dialogue/sayo_dialogue",9c,ef,a7,aa)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            						}
            					}
            					else {
HXLINE( 842)						 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/sayo_dialogue",9c,ef,a7,aa),HX_("doki",e9,ed,6d,42),null());
HXDLIN( 842)						_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("dialogue/sayo_dialogue",9c,ef,a7,aa)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            					}
HXDLIN( 842)					_hx_tmp->set_frames(_hx_tmp1);
HXLINE( 843)					this->portraitLeft->animation->addByPrefix(HX_("play",f4,2d,5a,4a),HX_("sayo_concern",85,5b,17,ff),24,false,null(),null());
HXLINE( 844)					this->portraitLeft->animation->play(HX_("play",f4,2d,5a,4a),null(),null(),null());
HXLINE( 845)					this->portraitLeft->set_flipX(false);
            				}
HXLINE( 835)				goto _hx_goto_12;
            			}
            			if (  (_hx_switch_1==HX_("sayori_ehh",c1,5f,6d,a8)) ){
HXLINE( 788)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 788)				 ::flixel::_hx_system::FlxSound _hx_tmp1 = _hx_tmp->load(::Paths_obj::sound(HX_("SayoText",d1,04,79,cf),null()),((Float)0.8),null(),null(),null(),null(),null(),null(),null());
HXDLIN( 788)				this->swagDialogue->sounds = ::Array_obj< ::Dynamic>::__new(1)->init(0,_hx_tmp1);
HXLINE( 789)				this->portraitLeft->set_visible(false);
HXLINE( 790)				this->box->animation->play(HX_("sayori",9b,32,38,25),null(),null(),null());
HXLINE( 791)				if (!(this->portraitLeft->visible)) {
HXLINE( 793)					this->portraitLeft->set_visible(true);
HXLINE( 794)					 ::flixel::FlxSprite _hx_tmp = this->portraitLeft;
HXDLIN( 794)					bool isLocale = false;
HXDLIN( 794)					 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp1;
HXDLIN( 794)					if (isLocale) {
HXLINE( 794)						if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/sayo_dialogue",9c,ef,a7,aa)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)),null())) {
HXLINE( 794)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/sayo_dialogue",9c,ef,a7,aa),HX_("doki",e9,ed,6d,42),isLocale);
HXDLIN( 794)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/sayo_dialogue",9c,ef,a7,aa)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            						}
            						else {
HXLINE( 794)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/sayo_dialogue",9c,ef,a7,aa),HX_("doki",e9,ed,6d,42),isLocale);
HXDLIN( 794)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("dialogue/sayo_dialogue",9c,ef,a7,aa)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            						}
            					}
            					else {
HXLINE( 794)						 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/sayo_dialogue",9c,ef,a7,aa),HX_("doki",e9,ed,6d,42),null());
HXDLIN( 794)						_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("dialogue/sayo_dialogue",9c,ef,a7,aa)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            					}
HXDLIN( 794)					_hx_tmp->set_frames(_hx_tmp1);
HXLINE( 795)					this->portraitLeft->animation->addByPrefix(HX_("play",f4,2d,5a,4a),HX_("sayo_ehh",8a,93,0c,fd),24,false,null(),null());
HXLINE( 796)					this->portraitLeft->animation->play(HX_("play",f4,2d,5a,4a),null(),null(),null());
HXLINE( 797)					this->portraitLeft->set_flipX(false);
            				}
HXLINE( 787)				goto _hx_goto_12;
            			}
            			if (  (_hx_switch_1==HX_("sayori_gone",c3,2b,9e,b8)) ){
HXLINE( 848)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 848)				 ::flixel::_hx_system::FlxSound _hx_tmp1 = _hx_tmp->load(::Paths_obj::sound(HX_("SayoText",d1,04,79,cf),null()),((Float)0.8),null(),null(),null(),null(),null(),null(),null());
HXDLIN( 848)				this->swagDialogue->sounds = ::Array_obj< ::Dynamic>::__new(1)->init(0,_hx_tmp1);
HXLINE( 849)				this->portraitLeft->set_visible(false);
HXLINE( 850)				this->box->animation->play(HX_("sayori",9b,32,38,25),null(),null(),null());
HXLINE( 851)				if (!(this->portraitLeft->visible)) {
HXLINE( 853)					this->portraitLeft->set_flipX(false);
            				}
HXLINE( 847)				goto _hx_goto_12;
            			}
            			if (  (_hx_switch_1==HX_("sayori_grumpy",70,92,2d,7c)) ){
HXLINE( 800)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 800)				 ::flixel::_hx_system::FlxSound _hx_tmp1 = _hx_tmp->load(::Paths_obj::sound(HX_("SayoText",d1,04,79,cf),null()),((Float)0.8),null(),null(),null(),null(),null(),null(),null());
HXDLIN( 800)				this->swagDialogue->sounds = ::Array_obj< ::Dynamic>::__new(1)->init(0,_hx_tmp1);
HXLINE( 801)				this->portraitLeft->set_visible(false);
HXLINE( 802)				this->box->animation->play(HX_("sayori",9b,32,38,25),null(),null(),null());
HXLINE( 803)				if (!(this->portraitLeft->visible)) {
HXLINE( 805)					this->portraitLeft->set_visible(true);
HXLINE( 806)					 ::flixel::FlxSprite _hx_tmp = this->portraitLeft;
HXDLIN( 806)					bool isLocale = false;
HXDLIN( 806)					 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp1;
HXDLIN( 806)					if (isLocale) {
HXLINE( 806)						if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/sayo_dialogue",9c,ef,a7,aa)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)),null())) {
HXLINE( 806)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/sayo_dialogue",9c,ef,a7,aa),HX_("doki",e9,ed,6d,42),isLocale);
HXDLIN( 806)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/sayo_dialogue",9c,ef,a7,aa)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            						}
            						else {
HXLINE( 806)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/sayo_dialogue",9c,ef,a7,aa),HX_("doki",e9,ed,6d,42),isLocale);
HXDLIN( 806)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("dialogue/sayo_dialogue",9c,ef,a7,aa)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            						}
            					}
            					else {
HXLINE( 806)						 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/sayo_dialogue",9c,ef,a7,aa),HX_("doki",e9,ed,6d,42),null());
HXDLIN( 806)						_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("dialogue/sayo_dialogue",9c,ef,a7,aa)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            					}
HXDLIN( 806)					_hx_tmp->set_frames(_hx_tmp1);
HXLINE( 807)					this->portraitLeft->animation->addByPrefix(HX_("play",f4,2d,5a,4a),HX_("sayo_grumpy",47,22,ac,cf),24,false,null(),null());
HXLINE( 808)					this->portraitLeft->animation->play(HX_("play",f4,2d,5a,4a),null(),null(),null());
HXLINE( 809)					this->portraitLeft->set_flipX(false);
            				}
HXLINE( 799)				goto _hx_goto_12;
            			}
            			if (  (_hx_switch_1==HX_("sayori_happ",9d,c4,3c,b9)) ){
HXLINE( 776)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 776)				 ::flixel::_hx_system::FlxSound _hx_tmp1 = _hx_tmp->load(::Paths_obj::sound(HX_("SayoText",d1,04,79,cf),null()),((Float)0.8),null(),null(),null(),null(),null(),null(),null());
HXDLIN( 776)				this->swagDialogue->sounds = ::Array_obj< ::Dynamic>::__new(1)->init(0,_hx_tmp1);
HXLINE( 777)				this->portraitLeft->set_visible(false);
HXLINE( 778)				this->box->animation->play(HX_("sayori",9b,32,38,25),null(),null(),null());
HXLINE( 779)				if (!(this->portraitLeft->visible)) {
HXLINE( 781)					this->portraitLeft->set_visible(true);
HXLINE( 782)					 ::flixel::FlxSprite _hx_tmp = this->portraitLeft;
HXDLIN( 782)					bool isLocale = false;
HXDLIN( 782)					 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp1;
HXDLIN( 782)					if (isLocale) {
HXLINE( 782)						if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/sayo_dialogue",9c,ef,a7,aa)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)),null())) {
HXLINE( 782)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/sayo_dialogue",9c,ef,a7,aa),HX_("doki",e9,ed,6d,42),isLocale);
HXDLIN( 782)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/sayo_dialogue",9c,ef,a7,aa)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            						}
            						else {
HXLINE( 782)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/sayo_dialogue",9c,ef,a7,aa),HX_("doki",e9,ed,6d,42),isLocale);
HXDLIN( 782)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("dialogue/sayo_dialogue",9c,ef,a7,aa)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            						}
            					}
            					else {
HXLINE( 782)						 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/sayo_dialogue",9c,ef,a7,aa),HX_("doki",e9,ed,6d,42),null());
HXDLIN( 782)						_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("dialogue/sayo_dialogue",9c,ef,a7,aa)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            					}
HXDLIN( 782)					_hx_tmp->set_frames(_hx_tmp1);
HXLINE( 783)					this->portraitLeft->animation->addByPrefix(HX_("play",f4,2d,5a,4a),HX_("sayo_happ",b4,e0,ea,6f),24,false,null(),null());
HXLINE( 784)					this->portraitLeft->animation->play(HX_("play",f4,2d,5a,4a),null(),null(),null());
HXLINE( 785)					this->portraitLeft->set_flipX(false);
            				}
HXLINE( 775)				goto _hx_goto_12;
            			}
            			if (  (_hx_switch_1==HX_("sayori_neutral",63,0c,c7,20)) ){
HXLINE( 764)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 764)				 ::flixel::_hx_system::FlxSound _hx_tmp1 = _hx_tmp->load(::Paths_obj::sound(HX_("SayoText",d1,04,79,cf),null()),((Float)0.8),null(),null(),null(),null(),null(),null(),null());
HXDLIN( 764)				this->swagDialogue->sounds = ::Array_obj< ::Dynamic>::__new(1)->init(0,_hx_tmp1);
HXLINE( 765)				this->portraitLeft->set_visible(false);
HXLINE( 766)				this->box->animation->play(HX_("sayori",9b,32,38,25),null(),null(),null());
HXLINE( 767)				if (!(this->portraitLeft->visible)) {
HXLINE( 769)					this->portraitLeft->set_visible(true);
HXLINE( 770)					 ::flixel::FlxSprite _hx_tmp = this->portraitLeft;
HXDLIN( 770)					bool isLocale = false;
HXDLIN( 770)					 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp1;
HXDLIN( 770)					if (isLocale) {
HXLINE( 770)						if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/sayo_dialogue",9c,ef,a7,aa)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)),null())) {
HXLINE( 770)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/sayo_dialogue",9c,ef,a7,aa),HX_("doki",e9,ed,6d,42),isLocale);
HXDLIN( 770)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/sayo_dialogue",9c,ef,a7,aa)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            						}
            						else {
HXLINE( 770)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/sayo_dialogue",9c,ef,a7,aa),HX_("doki",e9,ed,6d,42),isLocale);
HXDLIN( 770)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("dialogue/sayo_dialogue",9c,ef,a7,aa)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            						}
            					}
            					else {
HXLINE( 770)						 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/sayo_dialogue",9c,ef,a7,aa),HX_("doki",e9,ed,6d,42),null());
HXDLIN( 770)						_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("dialogue/sayo_dialogue",9c,ef,a7,aa)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            					}
HXDLIN( 770)					_hx_tmp->set_frames(_hx_tmp1);
HXLINE( 771)					this->portraitLeft->animation->addByPrefix(HX_("play",f4,2d,5a,4a),HX_("sayoneutral",e3,a3,45,2c),24,false,null(),null());
HXLINE( 772)					this->portraitLeft->animation->play(HX_("play",f4,2d,5a,4a),null(),null(),null());
HXLINE( 773)					this->portraitLeft->set_flipX(false);
            				}
HXLINE( 763)				goto _hx_goto_12;
            			}
            			if (  (_hx_switch_1==HX_("sayori_ooh",64,fc,74,a8)) ){
HXLINE( 812)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 812)				 ::flixel::_hx_system::FlxSound _hx_tmp1 = _hx_tmp->load(::Paths_obj::sound(HX_("SayoText",d1,04,79,cf),null()),((Float)0.8),null(),null(),null(),null(),null(),null(),null());
HXDLIN( 812)				this->swagDialogue->sounds = ::Array_obj< ::Dynamic>::__new(1)->init(0,_hx_tmp1);
HXLINE( 813)				this->portraitLeft->set_visible(false);
HXLINE( 814)				this->box->animation->play(HX_("sayori",9b,32,38,25),null(),null(),null());
HXLINE( 815)				if (!(this->portraitLeft->visible)) {
HXLINE( 817)					this->portraitLeft->set_visible(true);
HXLINE( 818)					 ::flixel::FlxSprite _hx_tmp = this->portraitLeft;
HXDLIN( 818)					bool isLocale = false;
HXDLIN( 818)					 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp1;
HXDLIN( 818)					if (isLocale) {
HXLINE( 818)						if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/sayo_dialogue",9c,ef,a7,aa)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)),null())) {
HXLINE( 818)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/sayo_dialogue",9c,ef,a7,aa),HX_("doki",e9,ed,6d,42),isLocale);
HXDLIN( 818)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/sayo_dialogue",9c,ef,a7,aa)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            						}
            						else {
HXLINE( 818)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/sayo_dialogue",9c,ef,a7,aa),HX_("doki",e9,ed,6d,42),isLocale);
HXDLIN( 818)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("dialogue/sayo_dialogue",9c,ef,a7,aa)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            						}
            					}
            					else {
HXLINE( 818)						 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/sayo_dialogue",9c,ef,a7,aa),HX_("doki",e9,ed,6d,42),null());
HXDLIN( 818)						_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("dialogue/sayo_dialogue",9c,ef,a7,aa)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            					}
HXDLIN( 818)					_hx_tmp->set_frames(_hx_tmp1);
HXLINE( 819)					this->portraitLeft->animation->addByPrefix(HX_("play",f4,2d,5a,4a),HX_("sayo_ooh",2d,30,14,fd),24,false,null(),null());
HXLINE( 820)					this->portraitLeft->animation->play(HX_("play",f4,2d,5a,4a),null(),null(),null());
HXLINE( 821)					this->portraitLeft->set_flipX(false);
            				}
HXLINE( 811)				goto _hx_goto_12;
            			}
            			if (  (_hx_switch_1==HX_("sayori_yeah",17,61,7c,c4)) ){
HXLINE( 824)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 824)				 ::flixel::_hx_system::FlxSound _hx_tmp1 = _hx_tmp->load(::Paths_obj::sound(HX_("SayoText",d1,04,79,cf),null()),((Float)0.8),null(),null(),null(),null(),null(),null(),null());
HXDLIN( 824)				this->swagDialogue->sounds = ::Array_obj< ::Dynamic>::__new(1)->init(0,_hx_tmp1);
HXLINE( 825)				this->portraitLeft->set_visible(false);
HXLINE( 826)				this->box->animation->play(HX_("sayori",9b,32,38,25),null(),null(),null());
HXLINE( 827)				if (!(this->portraitLeft->visible)) {
HXLINE( 829)					this->portraitLeft->set_visible(true);
HXLINE( 830)					 ::flixel::FlxSprite _hx_tmp = this->portraitLeft;
HXDLIN( 830)					bool isLocale = false;
HXDLIN( 830)					 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp1;
HXDLIN( 830)					if (isLocale) {
HXLINE( 830)						if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/sayo_dialogue",9c,ef,a7,aa)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)),null())) {
HXLINE( 830)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/sayo_dialogue",9c,ef,a7,aa),HX_("doki",e9,ed,6d,42),isLocale);
HXDLIN( 830)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/sayo_dialogue",9c,ef,a7,aa)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            						}
            						else {
HXLINE( 830)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/sayo_dialogue",9c,ef,a7,aa),HX_("doki",e9,ed,6d,42),isLocale);
HXDLIN( 830)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("dialogue/sayo_dialogue",9c,ef,a7,aa)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            						}
            					}
            					else {
HXLINE( 830)						 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/sayo_dialogue",9c,ef,a7,aa),HX_("doki",e9,ed,6d,42),null());
HXDLIN( 830)						_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("dialogue/sayo_dialogue",9c,ef,a7,aa)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            					}
HXDLIN( 830)					_hx_tmp->set_frames(_hx_tmp1);
HXLINE( 831)					this->portraitLeft->animation->addByPrefix(HX_("play",f4,2d,5a,4a),HX_("sayo_yeah",2e,7d,2a,7b),24,false,null(),null());
HXLINE( 832)					this->portraitLeft->animation->play(HX_("play",f4,2d,5a,4a),null(),null(),null());
HXLINE( 833)					this->portraitLeft->set_flipX(false);
            				}
HXLINE( 823)				goto _hx_goto_12;
            			}
            			if (  (_hx_switch_1==HX_("showbackgroundimage",50,dc,ba,09)) ){
HXLINE(1198)				 ::flixel::FlxSprite _hx_tmp = this->backgroundImage;
HXDLIN(1198)				::String key = (HX_("dialogue/bgs/",f8,14,a4,58) + this->dialogueList->__get(0));
HXDLIN(1198)				::String _hx_tmp1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + key) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),HX_("doki",e9,ed,6d,42));
HXDLIN(1198)				_hx_tmp->loadGraphic(_hx_tmp1,null(),null(),null(),null(),null());
HXLINE(1199)				this->enddialogue();
HXLINE(1200)				this->backgroundImage->set_visible(true);
HXLINE(1197)				goto _hx_goto_12;
            			}
            			if (  (_hx_switch_1==HX_("startmusic",03,39,44,99)) ){
HXLINE(1164)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(1164)				::String result = ::Paths_obj::getPath((((HX_("music/",ea,bf,1b,3f) + this->dialogueList->__get(0)) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)),HX_("MUSIC",85,08,49,8e),HX_("shared",a5,5e,2b,1d));
HXDLIN(1164)				::String _hx_tmp1;
HXDLIN(1164)				if (::Paths_obj::doesSoundAssetExist(result)) {
HXLINE(1164)					_hx_tmp1 = result;
            				}
            				else {
HXLINE(1164)					_hx_tmp1 = null();
            				}
HXDLIN(1164)				_hx_tmp->playMusic(_hx_tmp1,null(),null(),null());
HXLINE(1165)				this->enddialogue();
HXLINE(1163)				goto _hx_goto_12;
            			}
            			if (  (_hx_switch_1==HX_("yuri_ahaha",27,df,19,ed)) ){
HXLINE( 648)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 648)				 ::flixel::_hx_system::FlxSound _hx_tmp1 = _hx_tmp->load(::Paths_obj::sound(HX_("YuriText",00,f7,6d,25),null()),((Float)0.8),null(),null(),null(),null(),null(),null(),null());
HXDLIN( 648)				this->swagDialogue->sounds = ::Array_obj< ::Dynamic>::__new(1)->init(0,_hx_tmp1);
HXLINE( 649)				this->portraitLeft->set_visible(false);
HXLINE( 650)				this->box->animation->play(HX_("yuri",93,fc,53,50),null(),null(),null());
HXLINE( 651)				if (!(this->portraitLeft->visible)) {
HXLINE( 653)					this->portraitLeft->set_visible(true);
HXLINE( 654)					 ::flixel::FlxSprite _hx_tmp = this->portraitLeft;
HXDLIN( 654)					bool isLocale = false;
HXDLIN( 654)					 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp1;
HXDLIN( 654)					if (isLocale) {
HXLINE( 654)						if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/yuri_dialogue",0d,b3,4b,68)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)),null())) {
HXLINE( 654)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/yuri_dialogue",0d,b3,4b,68),HX_("doki",e9,ed,6d,42),isLocale);
HXDLIN( 654)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/yuri_dialogue",0d,b3,4b,68)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            						}
            						else {
HXLINE( 654)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/yuri_dialogue",0d,b3,4b,68),HX_("doki",e9,ed,6d,42),isLocale);
HXDLIN( 654)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("dialogue/yuri_dialogue",0d,b3,4b,68)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            						}
            					}
            					else {
HXLINE( 654)						 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/yuri_dialogue",0d,b3,4b,68),HX_("doki",e9,ed,6d,42),null());
HXDLIN( 654)						_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("dialogue/yuri_dialogue",0d,b3,4b,68)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            					}
HXDLIN( 654)					_hx_tmp->set_frames(_hx_tmp1);
HXLINE( 655)					this->portraitLeft->animation->addByPrefix(HX_("play",f4,2d,5a,4a),HX_("yuri_ahaha",27,df,19,ed),24,false,null(),null());
HXLINE( 656)					this->portraitLeft->animation->play(HX_("play",f4,2d,5a,4a),null(),null(),null());
HXLINE( 657)					this->portraitLeft->set_flipX(false);
            				}
HXLINE( 647)				goto _hx_goto_12;
            			}
            			if (  (_hx_switch_1==HX_("yuri_ahh",b5,7c,fe,52)) ){
HXLINE( 636)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 636)				 ::flixel::_hx_system::FlxSound _hx_tmp1 = _hx_tmp->load(::Paths_obj::sound(HX_("YuriText",00,f7,6d,25),null()),((Float)0.8),null(),null(),null(),null(),null(),null(),null());
HXDLIN( 636)				this->swagDialogue->sounds = ::Array_obj< ::Dynamic>::__new(1)->init(0,_hx_tmp1);
HXLINE( 637)				this->portraitLeft->set_visible(false);
HXLINE( 638)				this->box->animation->play(HX_("yuri",93,fc,53,50),null(),null(),null());
HXLINE( 639)				if (!(this->portraitLeft->visible)) {
HXLINE( 641)					this->portraitLeft->set_visible(true);
HXLINE( 642)					 ::flixel::FlxSprite _hx_tmp = this->portraitLeft;
HXDLIN( 642)					bool isLocale = false;
HXDLIN( 642)					 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp1;
HXDLIN( 642)					if (isLocale) {
HXLINE( 642)						if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/yuri_dialogue",0d,b3,4b,68)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)),null())) {
HXLINE( 642)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/yuri_dialogue",0d,b3,4b,68),HX_("doki",e9,ed,6d,42),isLocale);
HXDLIN( 642)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/yuri_dialogue",0d,b3,4b,68)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            						}
            						else {
HXLINE( 642)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/yuri_dialogue",0d,b3,4b,68),HX_("doki",e9,ed,6d,42),isLocale);
HXDLIN( 642)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("dialogue/yuri_dialogue",0d,b3,4b,68)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            						}
            					}
            					else {
HXLINE( 642)						 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/yuri_dialogue",0d,b3,4b,68),HX_("doki",e9,ed,6d,42),null());
HXDLIN( 642)						_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("dialogue/yuri_dialogue",0d,b3,4b,68)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            					}
HXDLIN( 642)					_hx_tmp->set_frames(_hx_tmp1);
HXLINE( 643)					this->portraitLeft->animation->addByPrefix(HX_("play",f4,2d,5a,4a),HX_("yuri_ahh",b5,7c,fe,52),24,false,null(),null());
HXLINE( 644)					this->portraitLeft->animation->play(HX_("play",f4,2d,5a,4a),null(),null(),null());
HXLINE( 645)					this->portraitLeft->set_flipX(false);
            				}
HXLINE( 635)				goto _hx_goto_12;
            			}
            			if (  (_hx_switch_1==HX_("yuri_blush",d4,84,34,83)) ){
HXLINE( 600)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 600)				 ::flixel::_hx_system::FlxSound _hx_tmp1 = _hx_tmp->load(::Paths_obj::sound(HX_("YuriText",00,f7,6d,25),null()),((Float)0.8),null(),null(),null(),null(),null(),null(),null());
HXDLIN( 600)				this->swagDialogue->sounds = ::Array_obj< ::Dynamic>::__new(1)->init(0,_hx_tmp1);
HXLINE( 601)				this->portraitLeft->set_visible(false);
HXLINE( 602)				this->box->animation->play(HX_("yuri",93,fc,53,50),null(),null(),null());
HXLINE( 603)				if (!(this->portraitLeft->visible)) {
HXLINE( 605)					this->portraitLeft->set_visible(true);
HXLINE( 606)					 ::flixel::FlxSprite _hx_tmp = this->portraitLeft;
HXDLIN( 606)					bool isLocale = false;
HXDLIN( 606)					 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp1;
HXDLIN( 606)					if (isLocale) {
HXLINE( 606)						if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/yuri_dialogue",0d,b3,4b,68)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)),null())) {
HXLINE( 606)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/yuri_dialogue",0d,b3,4b,68),HX_("doki",e9,ed,6d,42),isLocale);
HXDLIN( 606)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/yuri_dialogue",0d,b3,4b,68)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            						}
            						else {
HXLINE( 606)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/yuri_dialogue",0d,b3,4b,68),HX_("doki",e9,ed,6d,42),isLocale);
HXDLIN( 606)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("dialogue/yuri_dialogue",0d,b3,4b,68)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            						}
            					}
            					else {
HXLINE( 606)						 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/yuri_dialogue",0d,b3,4b,68),HX_("doki",e9,ed,6d,42),null());
HXDLIN( 606)						_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("dialogue/yuri_dialogue",0d,b3,4b,68)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            					}
HXDLIN( 606)					_hx_tmp->set_frames(_hx_tmp1);
HXLINE( 607)					this->portraitLeft->animation->addByPrefix(HX_("play",f4,2d,5a,4a),HX_("yuri_blush",d4,84,34,83),24,false,null(),null());
HXLINE( 608)					this->portraitLeft->animation->play(HX_("play",f4,2d,5a,4a),null(),null(),null());
HXLINE( 609)					this->portraitLeft->set_flipX(false);
            				}
HXLINE( 599)				goto _hx_goto_12;
            			}
            			if (  (_hx_switch_1==HX_("yuri_crazy",25,3a,83,1a)) ){
HXLINE( 612)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 612)				 ::flixel::_hx_system::FlxSound _hx_tmp1 = _hx_tmp->load(::Paths_obj::sound(HX_("YuriText",00,f7,6d,25),null()),((Float)0.8),null(),null(),null(),null(),null(),null(),null());
HXDLIN( 612)				this->swagDialogue->sounds = ::Array_obj< ::Dynamic>::__new(1)->init(0,_hx_tmp1);
HXLINE( 613)				this->portraitLeft->set_visible(false);
HXLINE( 614)				this->box->animation->play(HX_("yuri_glitch",61,b1,9a,42),null(),null(),null());
HXLINE( 615)				if (!(this->portraitLeft->visible)) {
HXLINE( 617)					this->portraitLeft->set_visible(true);
HXLINE( 618)					 ::flixel::FlxSprite _hx_tmp = this->portraitLeft;
HXDLIN( 618)					bool isLocale = false;
HXDLIN( 618)					 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp1;
HXDLIN( 618)					if (isLocale) {
HXLINE( 618)						if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/yuri_dialogue",0d,b3,4b,68)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)),null())) {
HXLINE( 618)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/yuri_dialogue",0d,b3,4b,68),HX_("doki",e9,ed,6d,42),isLocale);
HXDLIN( 618)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/yuri_dialogue",0d,b3,4b,68)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            						}
            						else {
HXLINE( 618)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/yuri_dialogue",0d,b3,4b,68),HX_("doki",e9,ed,6d,42),isLocale);
HXDLIN( 618)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("dialogue/yuri_dialogue",0d,b3,4b,68)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            						}
            					}
            					else {
HXLINE( 618)						 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/yuri_dialogue",0d,b3,4b,68),HX_("doki",e9,ed,6d,42),null());
HXDLIN( 618)						_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("dialogue/yuri_dialogue",0d,b3,4b,68)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            					}
HXDLIN( 618)					_hx_tmp->set_frames(_hx_tmp1);
HXLINE( 619)					this->portraitLeft->animation->addByPrefix(HX_("play",f4,2d,5a,4a),HX_("yuri_crazy",25,3a,83,1a),24,false,null(),null());
HXLINE( 620)					this->portraitLeft->animation->play(HX_("play",f4,2d,5a,4a),null(),null(),null());
HXLINE( 621)					this->portraitLeft->set_flipX(false);
            				}
HXLINE( 611)				goto _hx_goto_12;
            			}
            			if (  (_hx_switch_1==HX_("yuri_ehh",b9,85,01,53)) ){
HXLINE( 588)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 588)				 ::flixel::_hx_system::FlxSound _hx_tmp1 = _hx_tmp->load(::Paths_obj::sound(HX_("YuriText",00,f7,6d,25),null()),((Float)0.8),null(),null(),null(),null(),null(),null(),null());
HXDLIN( 588)				this->swagDialogue->sounds = ::Array_obj< ::Dynamic>::__new(1)->init(0,_hx_tmp1);
HXLINE( 589)				this->portraitLeft->set_visible(false);
HXLINE( 590)				this->box->animation->play(HX_("yuri",93,fc,53,50),null(),null(),null());
HXLINE( 591)				if (!(this->portraitLeft->visible)) {
HXLINE( 593)					this->portraitLeft->set_visible(true);
HXLINE( 594)					 ::flixel::FlxSprite _hx_tmp = this->portraitLeft;
HXDLIN( 594)					bool isLocale = false;
HXDLIN( 594)					 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp1;
HXDLIN( 594)					if (isLocale) {
HXLINE( 594)						if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/yuri_dialogue",0d,b3,4b,68)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)),null())) {
HXLINE( 594)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/yuri_dialogue",0d,b3,4b,68),HX_("doki",e9,ed,6d,42),isLocale);
HXDLIN( 594)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/yuri_dialogue",0d,b3,4b,68)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            						}
            						else {
HXLINE( 594)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/yuri_dialogue",0d,b3,4b,68),HX_("doki",e9,ed,6d,42),isLocale);
HXDLIN( 594)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("dialogue/yuri_dialogue",0d,b3,4b,68)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            						}
            					}
            					else {
HXLINE( 594)						 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/yuri_dialogue",0d,b3,4b,68),HX_("doki",e9,ed,6d,42),null());
HXDLIN( 594)						_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("dialogue/yuri_dialogue",0d,b3,4b,68)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            					}
HXDLIN( 594)					_hx_tmp->set_frames(_hx_tmp1);
HXLINE( 595)					this->portraitLeft->animation->addByPrefix(HX_("play",f4,2d,5a,4a),HX_("yuri_ehh",b9,85,01,53),24,false,null(),null());
HXLINE( 596)					this->portraitLeft->animation->play(HX_("play",f4,2d,5a,4a),null(),null(),null());
HXLINE( 597)					this->portraitLeft->set_flipX(false);
            				}
HXLINE( 587)				goto _hx_goto_12;
            			}
            			if (  (_hx_switch_1==HX_("yuri_gone",cb,3e,ab,4f)) ){
HXLINE( 660)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 660)				 ::flixel::_hx_system::FlxSound _hx_tmp1 = _hx_tmp->load(::Paths_obj::sound(HX_("YuriText",00,f7,6d,25),null()),((Float)0.8),null(),null(),null(),null(),null(),null(),null());
HXDLIN( 660)				this->swagDialogue->sounds = ::Array_obj< ::Dynamic>::__new(1)->init(0,_hx_tmp1);
HXLINE( 661)				this->portraitLeft->set_visible(false);
HXLINE( 662)				this->box->animation->play(HX_("yuri",93,fc,53,50),null(),null(),null());
HXLINE( 663)				if (!(this->portraitLeft->visible)) {
HXLINE( 665)					this->portraitLeft->set_flipX(false);
            				}
HXLINE( 659)				goto _hx_goto_12;
            			}
            			if (  (_hx_switch_1==HX_("yuri_neutral",5b,8e,31,44)) ){
HXLINE( 576)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 576)				 ::flixel::_hx_system::FlxSound _hx_tmp1 = _hx_tmp->load(::Paths_obj::sound(HX_("YuriText",00,f7,6d,25),null()),((Float)0.8),null(),null(),null(),null(),null(),null(),null());
HXDLIN( 576)				this->swagDialogue->sounds = ::Array_obj< ::Dynamic>::__new(1)->init(0,_hx_tmp1);
HXLINE( 577)				this->portraitLeft->set_visible(false);
HXLINE( 578)				this->box->animation->play(HX_("yuri",93,fc,53,50),null(),null(),null());
HXLINE( 579)				if (!(this->portraitLeft->visible)) {
HXLINE( 581)					this->portraitLeft->set_visible(true);
HXLINE( 582)					 ::flixel::FlxSprite _hx_tmp = this->portraitLeft;
HXDLIN( 582)					bool isLocale = false;
HXDLIN( 582)					 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp1;
HXDLIN( 582)					if (isLocale) {
HXLINE( 582)						if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/yuri_dialogue",0d,b3,4b,68)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)),null())) {
HXLINE( 582)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/yuri_dialogue",0d,b3,4b,68),HX_("doki",e9,ed,6d,42),isLocale);
HXDLIN( 582)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/yuri_dialogue",0d,b3,4b,68)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            						}
            						else {
HXLINE( 582)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/yuri_dialogue",0d,b3,4b,68),HX_("doki",e9,ed,6d,42),isLocale);
HXDLIN( 582)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("dialogue/yuri_dialogue",0d,b3,4b,68)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            						}
            					}
            					else {
HXLINE( 582)						 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/yuri_dialogue",0d,b3,4b,68),HX_("doki",e9,ed,6d,42),null());
HXDLIN( 582)						_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("dialogue/yuri_dialogue",0d,b3,4b,68)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            					}
HXDLIN( 582)					_hx_tmp->set_frames(_hx_tmp1);
HXLINE( 583)					this->portraitLeft->animation->addByPrefix(HX_("play",f4,2d,5a,4a),HX_("yurineutral",14,f9,84,1b),24,false,null(),null());
HXLINE( 584)					this->portraitLeft->animation->play(HX_("play",f4,2d,5a,4a),null(),null(),null());
HXLINE( 585)					this->portraitLeft->set_flipX(false);
            				}
HXLINE( 575)				goto _hx_goto_12;
            			}
            			if (  (_hx_switch_1==HX_("yuri_smile",dc,76,a4,4d)) ){
HXLINE( 624)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 624)				 ::flixel::_hx_system::FlxSound _hx_tmp1 = _hx_tmp->load(::Paths_obj::sound(HX_("YuriText",00,f7,6d,25),null()),((Float)0.8),null(),null(),null(),null(),null(),null(),null());
HXDLIN( 624)				this->swagDialogue->sounds = ::Array_obj< ::Dynamic>::__new(1)->init(0,_hx_tmp1);
HXLINE( 625)				this->portraitLeft->set_visible(false);
HXLINE( 626)				this->box->animation->play(HX_("yuri",93,fc,53,50),null(),null(),null());
HXLINE( 627)				if (!(this->portraitLeft->visible)) {
HXLINE( 629)					this->portraitLeft->set_visible(true);
HXLINE( 630)					 ::flixel::FlxSprite _hx_tmp = this->portraitLeft;
HXDLIN( 630)					bool isLocale = false;
HXDLIN( 630)					 ::flixel::graphics::frames::FlxAtlasFrames _hx_tmp1;
HXDLIN( 630)					if (isLocale) {
HXLINE( 630)						if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/yuri_dialogue",0d,b3,4b,68)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)),null())) {
HXLINE( 630)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/yuri_dialogue",0d,b3,4b,68),HX_("doki",e9,ed,6d,42),isLocale);
HXDLIN( 630)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/",55,92,c6,2d) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic)))) + ((HX_("/images/",28,44,b7,41) + HX_("dialogue/yuri_dialogue",0d,b3,4b,68)) + HX_(".xml",69,3e,c3,1e))),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            						}
            						else {
HXLINE( 630)							 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/yuri_dialogue",0d,b3,4b,68),HX_("doki",e9,ed,6d,42),isLocale);
HXDLIN( 630)							_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("locale/en-US/images/",b5,71,94,96) + HX_("dialogue/yuri_dialogue",0d,b3,4b,68)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            						}
            					}
            					else {
HXLINE( 630)						 ::flixel::graphics::FlxGraphic _hx_tmp = ::Paths_obj::loadImage(HX_("dialogue/yuri_dialogue",0d,b3,4b,68),HX_("doki",e9,ed,6d,42),null());
HXDLIN( 630)						_hx_tmp1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("dialogue/yuri_dialogue",0d,b3,4b,68)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("doki",e9,ed,6d,42)));
            					}
HXDLIN( 630)					_hx_tmp->set_frames(_hx_tmp1);
HXLINE( 631)					this->portraitLeft->animation->addByPrefix(HX_("play",f4,2d,5a,4a),HX_("yuri_smile",dc,76,a4,4d),24,false,null(),null());
HXLINE( 632)					this->portraitLeft->animation->play(HX_("play",f4,2d,5a,4a),null(),null(),null());
HXLINE( 633)					this->portraitLeft->set_flipX(false);
            				}
HXLINE( 623)				goto _hx_goto_12;
            			}
            			_hx_goto_12:;
            		}
HXLINE(1232)		bool _hx_tmp1;
HXDLIN(1232)		bool _hx_tmp2;
HXDLIN(1232)		if ((this->dialogueList->__get(0) == HX_("",00,00,00,00))) {
HXLINE(1232)			_hx_tmp2 = !(this->isCommand);
            		}
            		else {
HXLINE(1232)			_hx_tmp2 = false;
            		}
HXDLIN(1232)		if (_hx_tmp2) {
HXLINE(1232)			_hx_tmp1 = (this->curCharacter != HX_("hidedialogue",da,f3,e7,8e));
            		}
            		else {
HXLINE(1232)			_hx_tmp1 = false;
            		}
HXDLIN(1232)		if (_hx_tmp1) {
HXLINE(1233)			this->enddialogue();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(DialogueBox_obj,startDialogue,(void))

void DialogueBox_obj::cleanDialog(){
            	HX_STACKFRAME(&_hx_pos_abff9fa8c13cc7a0_1237_cleanDialog)
HXLINE(1238)		::Array< ::String > splitName = this->dialogueList->__get(0).split(HX_(":",3a,00,00,00));
HXLINE(1239)		this->curCharacter = splitName->__get(1);
HXLINE(1249)		this->dialogueList[0] = ::StringTools_obj::replace(::StringTools_obj::trim(this->dialogueList->__get(0).substr((splitName->__get(1).length + 2),null())),HX_("{USERNAME}",cc,d5,49,0c),HX_("Player",81,5f,4d,6c));
            	}


HX_DEFINE_DYNAMIC_FUNC0(DialogueBox_obj,cleanDialog,(void))

void DialogueBox_obj::funnyGlitch(){
            		HX_BEGIN_LOCAL_FUNC_S4(::hx::LocalFunc,_hx_Closure_0, ::DialogueBox,_gthis, ::flixel::addons::effects::chainable::FlxEffectSprite,glitchSprite, ::flixel::FlxSprite,screenHUD, ::flixel::addons::effects::chainable::FlxGlitchEffect,glitchEffect) HXARGC(1)
            		void _hx_run( ::flixel::util::FlxTimer tmr){
            			HX_GC_STACKFRAME(&_hx_pos_abff9fa8c13cc7a0_1281_funnyGlitch)
HXLINE(1283)			glitchEffect->active = false;
HXLINE(1284)			_gthis->remove(glitchSprite,null()).StaticCast<  ::flixel::FlxSprite >();
HXLINE(1285)			_gthis->remove(screenHUD,null()).StaticCast<  ::flixel::FlxSprite >();
HXLINE(1287)			_gthis->enddialogue();
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_abff9fa8c13cc7a0_1254_funnyGlitch)
HXDLIN(1254)		 ::DialogueBox _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(1260)		 ::flixel::FlxSprite screenHUD =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null())->makeGraphic(::flixel::FlxG_obj::width,::flixel::FlxG_obj::height,0,null(),null());
HXLINE(1261)		screenHUD->set_antialiasing(true);
HXLINE(1262)		screenHUD->drawFrame(null());
HXLINE(1263)		 ::openfl::display::BitmapData screenPixels = screenHUD->framePixels;
HXLINE(1265)		if (::flixel::FlxG_obj::renderBlit) {
HXLINE(1266)			 ::openfl::display::BitmapData _hx_tmp = ::flixel::FlxG_obj::camera->buffer;
HXDLIN(1266)			 ::openfl::geom::Rectangle _hx_tmp1 = ::flixel::FlxG_obj::camera->buffer->rect;
HXDLIN(1266)			screenPixels->copyPixels(_hx_tmp,_hx_tmp1, ::openfl::geom::Point_obj::__alloc( HX_CTX ,null(),null()),null(),null(),null());
            		}
            		else {
HXLINE(1268)			 ::openfl::display::Sprite _hx_tmp = ::flixel::FlxG_obj::camera->canvas;
HXDLIN(1268)			screenPixels->draw(_hx_tmp, ::flixel::math::FlxMatrix_obj::__alloc( HX_CTX ,1,0,0,1,0,0),null(),null(),null(),null());
            		}
HXLINE(1270)		 ::flixel::addons::effects::chainable::FlxGlitchEffect glitchEffect =  ::flixel::addons::effects::chainable::FlxGlitchEffect_obj::__alloc( HX_CTX ,10,2,((Float)0.05),::flixel::addons::effects::chainable::FlxGlitchDirection_obj::HORIZONTAL_dyn());
HXLINE(1271)		 ::flixel::addons::effects::chainable::FlxEffectSprite glitchSprite =  ::flixel::addons::effects::chainable::FlxEffectSprite_obj::__alloc( HX_CTX ,screenHUD,::Array_obj< ::Dynamic>::__new(1)->init(0,glitchEffect));
HXLINE(1272)		glitchSprite->set_antialiasing(true);
HXLINE(1273)		this->add(glitchSprite);
HXLINE(1275)		glitchEffect->active = true;
HXLINE(1278)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(1278)		_hx_tmp->play(::Paths_obj::sound(HX_("glitchin",1a,97,0d,96),null()),null(),null(),null(),null(),null());
HXLINE(1280)		 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(((Float)0.5), ::Dynamic(new _hx_Closure_0(_gthis,glitchSprite,screenHUD,glitchEffect)),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(DialogueBox_obj,funnyGlitch,(void))

bool DialogueBox_obj::isPixel;

bool DialogueBox_obj::isEpiphany;


::hx::ObjectPtr< DialogueBox_obj > DialogueBox_obj::__new(::hx::Null< bool >  __o_isPixel,::Array< ::String > dialogueList) {
	::hx::ObjectPtr< DialogueBox_obj > __this = new DialogueBox_obj();
	__this->__construct(__o_isPixel,dialogueList);
	return __this;
}

::hx::ObjectPtr< DialogueBox_obj > DialogueBox_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< bool >  __o_isPixel,::Array< ::String > dialogueList) {
	DialogueBox_obj *__this = (DialogueBox_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DialogueBox_obj), true, "DialogueBox"));
	*(void **)__this = DialogueBox_obj::_hx_vtable;
	__this->__construct(__o_isPixel,dialogueList);
	return __this;
}

DialogueBox_obj::DialogueBox_obj()
{
}

void DialogueBox_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DialogueBox);
	HX_MARK_MEMBER_NAME(box,"box");
	HX_MARK_MEMBER_NAME(curCharacter,"curCharacter");
	HX_MARK_MEMBER_NAME(dialogue,"dialogue");
	HX_MARK_MEMBER_NAME(dialogueList,"dialogueList");
	HX_MARK_MEMBER_NAME(canSkip,"canSkip");
	HX_MARK_MEMBER_NAME(canFullSkip,"canFullSkip");
	HX_MARK_MEMBER_NAME(swagDialogue,"swagDialogue");
	HX_MARK_MEMBER_NAME(dropText,"dropText");
	HX_MARK_MEMBER_NAME(skipText,"skipText");
	HX_MARK_MEMBER_NAME(finishThing,"finishThing");
	HX_MARK_MEMBER_NAME(backgroundImage,"backgroundImage");
	HX_MARK_MEMBER_NAME(portraitLeft,"portraitLeft");
	HX_MARK_MEMBER_NAME(portraitRight,"portraitRight");
	HX_MARK_MEMBER_NAME(blackscreen,"blackscreen");
	HX_MARK_MEMBER_NAME(handSelect,"handSelect");
	HX_MARK_MEMBER_NAME(bgFade,"bgFade");
	HX_MARK_MEMBER_NAME(dialogueOpened,"dialogueOpened");
	HX_MARK_MEMBER_NAME(dialogueStarted,"dialogueStarted");
	HX_MARK_MEMBER_NAME(stopspamming,"stopspamming");
	HX_MARK_MEMBER_NAME(isEnding,"isEnding");
	HX_MARK_MEMBER_NAME(isCommand,"isCommand");
	 ::flixel::group::FlxTypedSpriteGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DialogueBox_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(box,"box");
	HX_VISIT_MEMBER_NAME(curCharacter,"curCharacter");
	HX_VISIT_MEMBER_NAME(dialogue,"dialogue");
	HX_VISIT_MEMBER_NAME(dialogueList,"dialogueList");
	HX_VISIT_MEMBER_NAME(canSkip,"canSkip");
	HX_VISIT_MEMBER_NAME(canFullSkip,"canFullSkip");
	HX_VISIT_MEMBER_NAME(swagDialogue,"swagDialogue");
	HX_VISIT_MEMBER_NAME(dropText,"dropText");
	HX_VISIT_MEMBER_NAME(skipText,"skipText");
	HX_VISIT_MEMBER_NAME(finishThing,"finishThing");
	HX_VISIT_MEMBER_NAME(backgroundImage,"backgroundImage");
	HX_VISIT_MEMBER_NAME(portraitLeft,"portraitLeft");
	HX_VISIT_MEMBER_NAME(portraitRight,"portraitRight");
	HX_VISIT_MEMBER_NAME(blackscreen,"blackscreen");
	HX_VISIT_MEMBER_NAME(handSelect,"handSelect");
	HX_VISIT_MEMBER_NAME(bgFade,"bgFade");
	HX_VISIT_MEMBER_NAME(dialogueOpened,"dialogueOpened");
	HX_VISIT_MEMBER_NAME(dialogueStarted,"dialogueStarted");
	HX_VISIT_MEMBER_NAME(stopspamming,"stopspamming");
	HX_VISIT_MEMBER_NAME(isEnding,"isEnding");
	HX_VISIT_MEMBER_NAME(isCommand,"isCommand");
	 ::flixel::group::FlxTypedSpriteGroup_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val DialogueBox_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"box") ) { return ::hx::Val( box ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bgFade") ) { return ::hx::Val( bgFade ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"canSkip") ) { return ::hx::Val( canSkip ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"dialogue") ) { return ::hx::Val( dialogue ); }
		if (HX_FIELD_EQ(inName,"dropText") ) { return ::hx::Val( dropText ); }
		if (HX_FIELD_EQ(inName,"skipText") ) { return ::hx::Val( skipText ); }
		if (HX_FIELD_EQ(inName,"isEnding") ) { return ::hx::Val( isEnding ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isCommand") ) { return ::hx::Val( isCommand ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"handSelect") ) { return ::hx::Val( handSelect ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"canFullSkip") ) { return ::hx::Val( canFullSkip ); }
		if (HX_FIELD_EQ(inName,"finishThing") ) { return ::hx::Val( finishThing ); }
		if (HX_FIELD_EQ(inName,"blackscreen") ) { return ::hx::Val( blackscreen ); }
		if (HX_FIELD_EQ(inName,"enddialogue") ) { return ::hx::Val( enddialogue_dyn() ); }
		if (HX_FIELD_EQ(inName,"cleanDialog") ) { return ::hx::Val( cleanDialog_dyn() ); }
		if (HX_FIELD_EQ(inName,"funnyGlitch") ) { return ::hx::Val( funnyGlitch_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"curCharacter") ) { return ::hx::Val( curCharacter ); }
		if (HX_FIELD_EQ(inName,"dialogueList") ) { return ::hx::Val( dialogueList ); }
		if (HX_FIELD_EQ(inName,"swagDialogue") ) { return ::hx::Val( swagDialogue ); }
		if (HX_FIELD_EQ(inName,"portraitLeft") ) { return ::hx::Val( portraitLeft ); }
		if (HX_FIELD_EQ(inName,"stopspamming") ) { return ::hx::Val( stopspamming ); }
		if (HX_FIELD_EQ(inName,"endinstantly") ) { return ::hx::Val( endinstantly_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"portraitRight") ) { return ::hx::Val( portraitRight ); }
		if (HX_FIELD_EQ(inName,"startDialogue") ) { return ::hx::Val( startDialogue_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"dialogueOpened") ) { return ::hx::Val( dialogueOpened ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"backgroundImage") ) { return ::hx::Val( backgroundImage ); }
		if (HX_FIELD_EQ(inName,"dialogueStarted") ) { return ::hx::Val( dialogueStarted ); }
	}
	return super::__Field(inName,inCallProp);
}

bool DialogueBox_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"isPixel") ) { outValue = ( isPixel ); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isEpiphany") ) { outValue = ( isEpiphany ); return true; }
	}
	return false;
}

::hx::Val DialogueBox_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"box") ) { box=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bgFade") ) { bgFade=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"canSkip") ) { canSkip=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"dialogue") ) { dialogue=inValue.Cast<  ::Alphabet >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dropText") ) { dropText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"skipText") ) { skipText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isEnding") ) { isEnding=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isCommand") ) { isCommand=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"handSelect") ) { handSelect=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"canFullSkip") ) { canFullSkip=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"finishThing") ) { finishThing=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blackscreen") ) { blackscreen=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"curCharacter") ) { curCharacter=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dialogueList") ) { dialogueList=inValue.Cast< ::Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"swagDialogue") ) { swagDialogue=inValue.Cast<  ::flixel::addons::text::FlxTypeText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"portraitLeft") ) { portraitLeft=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stopspamming") ) { stopspamming=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"portraitRight") ) { portraitRight=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"dialogueOpened") ) { dialogueOpened=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"backgroundImage") ) { backgroundImage=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dialogueStarted") ) { dialogueStarted=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool DialogueBox_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"isPixel") ) { isPixel=ioValue.Cast< bool >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isEpiphany") ) { isEpiphany=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

void DialogueBox_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("box",0b,be,4a,00));
	outFields->push(HX_("curCharacter",09,86,7c,d7));
	outFields->push(HX_("dialogue",18,2d,94,a7));
	outFields->push(HX_("dialogueList",96,e1,d8,0d));
	outFields->push(HX_("canSkip",af,fe,ac,6a));
	outFields->push(HX_("canFullSkip",de,5f,10,90));
	outFields->push(HX_("swagDialogue",c2,ad,00,ad));
	outFields->push(HX_("dropText",7c,74,94,f2));
	outFields->push(HX_("skipText",cc,ba,4e,c3));
	outFields->push(HX_("backgroundImage",8d,fc,53,80));
	outFields->push(HX_("portraitLeft",02,9f,53,0d));
	outFields->push(HX_("portraitRight",81,90,e4,12));
	outFields->push(HX_("blackscreen",6b,6a,60,29));
	outFields->push(HX_("handSelect",cb,77,90,7c));
	outFields->push(HX_("bgFade",e1,fd,cd,ab));
	outFields->push(HX_("dialogueOpened",e1,e5,9f,10));
	outFields->push(HX_("dialogueStarted",09,77,22,70));
	outFields->push(HX_("stopspamming",e0,83,63,4e));
	outFields->push(HX_("isEnding",71,3f,f2,52));
	outFields->push(HX_("isCommand",81,ee,6b,85));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DialogueBox_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(DialogueBox_obj,box),HX_("box",0b,be,4a,00)},
	{::hx::fsString,(int)offsetof(DialogueBox_obj,curCharacter),HX_("curCharacter",09,86,7c,d7)},
	{::hx::fsObject /*  ::Alphabet */ ,(int)offsetof(DialogueBox_obj,dialogue),HX_("dialogue",18,2d,94,a7)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(DialogueBox_obj,dialogueList),HX_("dialogueList",96,e1,d8,0d)},
	{::hx::fsBool,(int)offsetof(DialogueBox_obj,canSkip),HX_("canSkip",af,fe,ac,6a)},
	{::hx::fsBool,(int)offsetof(DialogueBox_obj,canFullSkip),HX_("canFullSkip",de,5f,10,90)},
	{::hx::fsObject /*  ::flixel::addons::text::FlxTypeText */ ,(int)offsetof(DialogueBox_obj,swagDialogue),HX_("swagDialogue",c2,ad,00,ad)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(DialogueBox_obj,dropText),HX_("dropText",7c,74,94,f2)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(DialogueBox_obj,skipText),HX_("skipText",cc,ba,4e,c3)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(DialogueBox_obj,finishThing),HX_("finishThing",9b,aa,8e,36)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(DialogueBox_obj,backgroundImage),HX_("backgroundImage",8d,fc,53,80)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(DialogueBox_obj,portraitLeft),HX_("portraitLeft",02,9f,53,0d)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(DialogueBox_obj,portraitRight),HX_("portraitRight",81,90,e4,12)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(DialogueBox_obj,blackscreen),HX_("blackscreen",6b,6a,60,29)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(DialogueBox_obj,handSelect),HX_("handSelect",cb,77,90,7c)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(DialogueBox_obj,bgFade),HX_("bgFade",e1,fd,cd,ab)},
	{::hx::fsBool,(int)offsetof(DialogueBox_obj,dialogueOpened),HX_("dialogueOpened",e1,e5,9f,10)},
	{::hx::fsBool,(int)offsetof(DialogueBox_obj,dialogueStarted),HX_("dialogueStarted",09,77,22,70)},
	{::hx::fsBool,(int)offsetof(DialogueBox_obj,stopspamming),HX_("stopspamming",e0,83,63,4e)},
	{::hx::fsBool,(int)offsetof(DialogueBox_obj,isEnding),HX_("isEnding",71,3f,f2,52)},
	{::hx::fsBool,(int)offsetof(DialogueBox_obj,isCommand),HX_("isCommand",81,ee,6b,85)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo DialogueBox_obj_sStaticStorageInfo[] = {
	{::hx::fsBool,(void *) &DialogueBox_obj::isPixel,HX_("isPixel",3c,6a,29,5f)},
	{::hx::fsBool,(void *) &DialogueBox_obj::isEpiphany,HX_("isEpiphany",a0,13,5c,fa)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String DialogueBox_obj_sMemberFields[] = {
	HX_("box",0b,be,4a,00),
	HX_("curCharacter",09,86,7c,d7),
	HX_("dialogue",18,2d,94,a7),
	HX_("dialogueList",96,e1,d8,0d),
	HX_("canSkip",af,fe,ac,6a),
	HX_("canFullSkip",de,5f,10,90),
	HX_("swagDialogue",c2,ad,00,ad),
	HX_("dropText",7c,74,94,f2),
	HX_("skipText",cc,ba,4e,c3),
	HX_("finishThing",9b,aa,8e,36),
	HX_("backgroundImage",8d,fc,53,80),
	HX_("portraitLeft",02,9f,53,0d),
	HX_("portraitRight",81,90,e4,12),
	HX_("blackscreen",6b,6a,60,29),
	HX_("handSelect",cb,77,90,7c),
	HX_("bgFade",e1,fd,cd,ab),
	HX_("dialogueOpened",e1,e5,9f,10),
	HX_("dialogueStarted",09,77,22,70),
	HX_("stopspamming",e0,83,63,4e),
	HX_("update",09,86,05,87),
	HX_("endinstantly",73,98,56,b8),
	HX_("enddialogue",f3,03,a1,85),
	HX_("isEnding",71,3f,f2,52),
	HX_("isCommand",81,ee,6b,85),
	HX_("startDialogue",9a,8f,4f,ac),
	HX_("cleanDialog",31,37,ca,9e),
	HX_("funnyGlitch",df,d5,11,f2),
	::String(null()) };

static void DialogueBox_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DialogueBox_obj::isPixel,"isPixel");
	HX_MARK_MEMBER_NAME(DialogueBox_obj::isEpiphany,"isEpiphany");
};

#ifdef HXCPP_VISIT_ALLOCS
static void DialogueBox_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DialogueBox_obj::isPixel,"isPixel");
	HX_VISIT_MEMBER_NAME(DialogueBox_obj::isEpiphany,"isEpiphany");
};

#endif

::hx::Class DialogueBox_obj::__mClass;

static ::String DialogueBox_obj_sStaticFields[] = {
	HX_("isPixel",3c,6a,29,5f),
	HX_("isEpiphany",a0,13,5c,fa),
	::String(null())
};

void DialogueBox_obj::__register()
{
	DialogueBox_obj _hx_dummy;
	DialogueBox_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("DialogueBox",b3,1f,c8,ff);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DialogueBox_obj::__GetStatic;
	__mClass->mSetStaticField = &DialogueBox_obj::__SetStatic;
	__mClass->mMarkFunc = DialogueBox_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(DialogueBox_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DialogueBox_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DialogueBox_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = DialogueBox_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DialogueBox_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DialogueBox_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void DialogueBox_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_abff9fa8c13cc7a0_35_boot)
HXDLIN(  35)		isPixel = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_abff9fa8c13cc7a0_36_boot)
HXDLIN(  36)		isEpiphany = false;
            	}
}

