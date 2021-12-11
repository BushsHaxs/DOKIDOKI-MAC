package;


import haxe.io.Bytes;
import lime.utils.AssetBundle;
import lime.utils.AssetLibrary;
import lime.utils.AssetManifest;
import lime.utils.Assets;

#if sys
import sys.FileSystem;
#end

@:access(lime.utils.Assets)


@:keep @:dox(hide) class ManifestResources {


	public static var preloadLibraries:Array<AssetLibrary>;
	public static var preloadLibraryNames:Array<String>;
	public static var rootPath:String;


	public static function init (config:Dynamic):Void {

		preloadLibraries = new Array ();
		preloadLibraryNames = new Array ();

		rootPath = null;

		if (config != null && Reflect.hasField (config, "rootPath")) {

			rootPath = Reflect.field (config, "rootPath");

		}

		if (rootPath == null) {

			#if (ios || tvos || emscripten)
			rootPath = "assets/";
			#elseif android
			rootPath = "";
			#elseif console
			rootPath = lime.system.System.applicationDirectory;
			#else
			rootPath = "./";
			#end

		}

		#if (openfl && !flash && !display)
		openfl.text.Font.registerFont (__ASSET__OPENFL__assets_fonts_aller_rg_ttf);
		openfl.text.Font.registerFont (__ASSET__OPENFL__assets_fonts_vcr_ttf);
		openfl.text.Font.registerFont (__ASSET__OPENFL__assets_fonts_riffic_ttf);
		openfl.text.Font.registerFont (__ASSET__OPENFL__assets_fonts_ubuntu_b_ttf);
		openfl.text.Font.registerFont (__ASSET__OPENFL__assets_fonts_lanapixel_ttf);
		openfl.text.Font.registerFont (__ASSET__OPENFL__flixel_fonts_nokiafc22_ttf);
		openfl.text.Font.registerFont (__ASSET__OPENFL__flixel_fonts_monsterrat_ttf);
		
		#end

		var data, manifest, library, bundle;

		#if kha

		null
		library = AssetLibrary.fromManifest (manifest);
		Assets.registerLibrary ("null", library);

		if (library != null) preloadLibraries.push (library);
		else preloadLibraryNames.push ("null");

		#else

		Assets.libraryPaths["songs"] = rootPath + "manifest/songs.json";
		Assets.libraryPaths["shared"] = rootPath + "manifest/shared.json";
		Assets.libraryPaths["week6"] = rootPath + "manifest/week6.json";
		Assets.libraryPaths["monika"] = rootPath + "manifest/monika.json";
		Assets.libraryPaths["doki"] = rootPath + "manifest/doki.json";
		Assets.libraryPaths["default"] = rootPath + "manifest/default.json";
		

		library = Assets.getLibrary ("songs");
		if (library != null) preloadLibraries.push (library);
		else preloadLibraryNames.push ("songs");
		library = Assets.getLibrary ("shared");
		if (library != null) preloadLibraries.push (library);
		else preloadLibraryNames.push ("shared");
		library = Assets.getLibrary ("week6");
		if (library != null) preloadLibraries.push (library);
		else preloadLibraryNames.push ("week6");
		library = Assets.getLibrary ("monika");
		if (library != null) preloadLibraries.push (library);
		else preloadLibraryNames.push ("monika");
		library = Assets.getLibrary ("doki");
		if (library != null) preloadLibraries.push (library);
		else preloadLibraryNames.push ("doki");
		library = Assets.getLibrary ("default");
		if (library != null) preloadLibraries.push (library);
		else preloadLibraryNames.push ("default");
		

		#end

	}


}


#if kha

null

#else

#if !display
#if flash

@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_freakymenu_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_languagelist_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_ru_ru_images_dokistory_song_list_lazy_smile_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_ru_ru_images_dokistory_difficulties_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_ru_ru_images_dokistory_difficulties_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_ru_ru_images_dialogue_text_boxes_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_ru_ru_images_dialogue_text_boxes_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_ru_ru_images_credits_assets_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_ru_ru_images_credits_assets_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_ru_ru_images_ddlcintrowarning_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_ru_ru_images_titleenter_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_ru_ru_images_titleenter_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_ru_ru_data_reconciliation_introdialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_ru_ru_data_epiphany_introdialogue_obs_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_ru_ru_data_epiphany_introdialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_ru_ru_data_textdata_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_ru_ru_data_dual_demise_introdialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_ru_ru_data_glitcher__monika_mix__enddialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_ru_ru_data_glitcher__monika_mix__enddialogue_2_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_ru_ru_data_glitcher__monika_mix__introdialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_ru_ru_data_deep_breaths_introdialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_ru_ru_data_it_s_complicated__sayori_mix__introdialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_ru_ru_data_baka_enddialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_ru_ru_data_baka_introdialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_ru_ru_data_your_demise_your_demisedialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_ru_ru_data_your_demise_your_demiseenddialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_ru_ru_data_your_demise_finalcutscenedialouge_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_ru_ru_data_weeknames_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_ru_ru_data_rain_clouds_introdialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_ru_ru_data_beathoven__natsuki_mix__introdialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_ru_ru_data_crucify__yuri_mix__preintrodialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_ru_ru_data_crucify__yuri_mix__introdialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_ru_ru_data_poems_n_thorns_dialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_ru_ru_data_erb_testdialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_ru_ru_data_bara_no_yume_bara_no_yume_dialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_ru_ru_data_bara_no_yume_bara_no_yume_enddialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_ru_ru_data_high_school_conflict_high_school_conflictdialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_ru_ru_data_high_school_conflict_high_school_conflictenddialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_ru_ru_data_obsession_preintrodialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_ru_ru_data_obsession_enddialogue1_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_ru_ru_data_obsession_introdialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_ru_ru_data_obsession_enddialogue3_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_ru_ru_data_obsession_enddialogue2_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_ru_ru_data_my_confession_enddialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_ru_ru_data_my_confession_introdialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_ru_ru_data_my_sweets_introdialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_nl_nl_images_dokistory_song_list_lazy_smile_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_nl_nl_images_dokistory_difficulties_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_nl_nl_images_dokistory_difficulties_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_nl_nl_images_dialogue_text_boxes_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_nl_nl_images_dialogue_text_boxes_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_nl_nl_images_credits_assets_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_nl_nl_images_credits_assets_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_nl_nl_images_ddlcintrowarning_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_nl_nl_images_titleenter_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_nl_nl_images_titleenter_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_nl_nl_data_reconciliation_introdialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_nl_nl_data_epiphany_introdialogue_obs_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_nl_nl_data_epiphany_introdialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_nl_nl_data_textdata_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_nl_nl_data_dual_demise_introdialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_nl_nl_data_glitcher__monika_mix__enddialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_nl_nl_data_glitcher__monika_mix__enddialogue_2_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_nl_nl_data_glitcher__monika_mix__introdialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_nl_nl_data_deep_breaths_introdialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_nl_nl_data_it_s_complicated__sayori_mix__introdialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_nl_nl_data_baka_enddialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_nl_nl_data_baka_introdialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_nl_nl_data_your_demise_your_demisedialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_nl_nl_data_your_demise_your_demiseenddialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_nl_nl_data_your_demise_finalcutscenedialouge_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_nl_nl_data_weeknames_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_nl_nl_data_rain_clouds_introdialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_nl_nl_data_beathoven__natsuki_mix__introdialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_nl_nl_data_crucify__yuri_mix__preintrodialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_nl_nl_data_crucify__yuri_mix__introdialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_nl_nl_data_poems_n_thorns_dialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_nl_nl_data_erb_testdialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_nl_nl_data_bara_no_yume_bara_no_yume_dialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_nl_nl_data_bara_no_yume_bara_no_yume_enddialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_nl_nl_data_high_school_conflict_high_school_conflictdialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_nl_nl_data_high_school_conflict_high_school_conflictenddialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_nl_nl_data_obsession_preintrodialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_nl_nl_data_obsession_enddialogue1_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_nl_nl_data_obsession_introdialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_nl_nl_data_obsession_enddialogue3_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_nl_nl_data_obsession_enddialogue2_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_nl_nl_data_my_confession_enddialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_nl_nl_data_my_confession_introdialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_nl_nl_data_my_sweets_introdialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_fr_ca_images_dokistory_song_list_lazy_smile_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_fr_ca_images_dokistory_difficulties_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_fr_ca_images_dokistory_difficulties_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_fr_ca_images_dialogue_text_boxes_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_fr_ca_images_dialogue_text_boxes_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_fr_ca_images_credits_assets_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_fr_ca_images_credits_assets_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_fr_ca_images_ddlcintrowarning_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_fr_ca_images_titleenter_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_fr_ca_images_titleenter_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_fr_ca_data_reconciliation_introdialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_fr_ca_data_epiphany_introdialogue_obs_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_fr_ca_data_epiphany_introdialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_fr_ca_data_textdata_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_fr_ca_data_dual_demise_introdialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_fr_ca_data_glitcher__monika_mix__enddialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_fr_ca_data_glitcher__monika_mix__enddialogue_2_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_fr_ca_data_glitcher__monika_mix__introdialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_fr_ca_data_deep_breaths_introdialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_fr_ca_data_it_s_complicated__sayori_mix__introdialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_fr_ca_data_baka_enddialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_fr_ca_data_baka_introdialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_fr_ca_data_your_demise_your_demisedialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_fr_ca_data_your_demise_your_demiseenddialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_fr_ca_data_your_demise_finalcutscenedialouge_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_fr_ca_data_weeknames_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_fr_ca_data_rain_clouds_introdialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_fr_ca_data_beathoven__natsuki_mix__introdialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_fr_ca_data_crucify__yuri_mix__preintrodialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_fr_ca_data_crucify__yuri_mix__introdialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_fr_ca_data_poems_n_thorns_dialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_fr_ca_data_erb_testdialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_fr_ca_data_bara_no_yume_bara_no_yume_dialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_fr_ca_data_bara_no_yume_bara_no_yume_enddialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_fr_ca_data_high_school_conflict_high_school_conflictdialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_fr_ca_data_high_school_conflict_high_school_conflictenddialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_fr_ca_data_obsession_preintrodialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_fr_ca_data_obsession_enddialogue1_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_fr_ca_data_obsession_introdialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_fr_ca_data_obsession_enddialogue3_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_fr_ca_data_obsession_enddialogue2_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_fr_ca_data_my_confession_enddialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_fr_ca_data_my_confession_introdialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_fr_ca_data_my_sweets_introdialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_pt_br_images_dokistory_song_list_lazy_smile_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_pt_br_images_dokistory_difficulties_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_pt_br_images_dokistory_difficulties_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_pt_br_images_dialogue_text_boxes_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_pt_br_images_dialogue_text_boxes_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_pt_br_images_credits_assets_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_pt_br_images_credits_assets_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_pt_br_images_ddlcintrowarning_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_pt_br_images_titleenter_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_pt_br_images_titleenter_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_pt_br_data_reconciliation_introdialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_pt_br_data_epiphany_introdialogue_obs_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_pt_br_data_epiphany_introdialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_pt_br_data_textdata_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_pt_br_data_dual_demise_introdialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_pt_br_data_glitcher__monika_mix__enddialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_pt_br_data_glitcher__monika_mix__enddialogue_2_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_pt_br_data_glitcher__monika_mix__introdialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_pt_br_data_deep_breaths_introdialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_pt_br_data_it_s_complicated__sayori_mix__introdialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_pt_br_data_baka_enddialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_pt_br_data_baka_introdialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_pt_br_data_your_demise_your_demisedialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_pt_br_data_your_demise_your_demiseenddialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_pt_br_data_your_demise_finalcutscenedialouge_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_pt_br_data_weeknames_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_pt_br_data_rain_clouds_introdialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_pt_br_data_beathoven__natsuki_mix__introdialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_pt_br_data_crucify__yuri_mix__preintrodialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_pt_br_data_crucify__yuri_mix__introdialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_pt_br_data_poems_n_thorns_dialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_pt_br_data_erb_testdialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_pt_br_data_bara_no_yume_bara_no_yume_dialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_pt_br_data_bara_no_yume_bara_no_yume_enddialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_pt_br_data_high_school_conflict_high_school_conflictdialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_pt_br_data_high_school_conflict_high_school_conflictenddialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_pt_br_data_obsession_preintrodialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_pt_br_data_obsession_enddialogue1_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_pt_br_data_obsession_introdialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_pt_br_data_obsession_enddialogue3_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_pt_br_data_obsession_enddialogue2_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_pt_br_data_my_confession_enddialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_pt_br_data_my_confession_introdialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_pt_br_data_my_sweets_introdialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_en_us_images_dokistory_song_list_lazy_smile_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_en_us_images_dokistory_difficulties_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_en_us_images_dokistory_difficulties_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_en_us_images_dialogue_text_boxes_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_en_us_images_dialogue_text_boxes_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_en_us_images_credits_assets_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_en_us_images_credits_assets_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_en_us_images_ddlcintrowarning_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_en_us_images_titleenter_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_en_us_images_titleenter_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_en_us_data_reconciliation_introdialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_en_us_data_epiphany_introdialogue_obs_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_en_us_data_epiphany_introdialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_en_us_data_textdata_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_en_us_data_dual_demise_introdialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_en_us_data_glitcher__monika_mix__enddialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_en_us_data_glitcher__monika_mix__enddialogue_2_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_en_us_data_glitcher__monika_mix__introdialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_en_us_data_deep_breaths_introdialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_en_us_data_it_s_complicated__sayori_mix__introdialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_en_us_data_baka_enddialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_en_us_data_baka_introdialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_en_us_data_your_demise_your_demisedialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_en_us_data_your_demise_your_demiseenddialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_en_us_data_your_demise_finalcutscenedialouge_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_en_us_data_weeknames_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_en_us_data_rain_clouds_introdialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_en_us_data_beathoven__natsuki_mix__introdialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_en_us_data_crucify__yuri_mix__preintrodialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_en_us_data_crucify__yuri_mix__introdialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_en_us_data_poems_n_thorns_dialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_en_us_data_erb_testdialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_en_us_data_bara_no_yume_bara_no_yume_dialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_en_us_data_bara_no_yume_bara_no_yume_enddialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_en_us_data_high_school_conflict_high_school_conflictdialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_en_us_data_high_school_conflict_high_school_conflictenddialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_en_us_data_obsession_preintrodialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_en_us_data_obsession_enddialogue1_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_en_us_data_obsession_introdialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_en_us_data_obsession_enddialogue3_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_en_us_data_obsession_enddialogue2_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_en_us_data_my_confession_enddialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_en_us_data_my_confession_introdialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_en_us_data_my_sweets_introdialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_es_us_images_dokistory_song_list_lazy_smile_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_es_us_images_dokistory_difficulties_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_es_us_images_dokistory_difficulties_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_es_us_images_dialogue_text_boxes_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_es_us_images_dialogue_text_boxes_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_es_us_images_credits_assets_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_es_us_images_credits_assets_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_es_us_images_ddlcintrowarning_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_es_us_images_titleenter_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_es_us_images_titleenter_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_es_us_data_reconciliation_introdialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_es_us_data_epiphany_introdialogue_obs_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_es_us_data_epiphany_introdialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_es_us_data_textdata_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_es_us_data_dual_demise_introdialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_es_us_data_glitcher__monika_mix__enddialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_es_us_data_glitcher__monika_mix__enddialogue_2_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_es_us_data_glitcher__monika_mix__introdialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_es_us_data_deep_breaths_introdialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_es_us_data_it_s_complicated__sayori_mix__introdialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_es_us_data_baka_enddialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_es_us_data_baka_introdialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_es_us_data_your_demise_your_demisedialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_es_us_data_your_demise_your_demiseenddialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_es_us_data_your_demise_finalcutscenedialouge_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_es_us_data_weeknames_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_es_us_data_rain_clouds_introdialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_es_us_data_beathoven__natsuki_mix__introdialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_es_us_data_crucify__yuri_mix__preintrodialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_es_us_data_crucify__yuri_mix__introdialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_es_us_data_poems_n_thorns_dialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_es_us_data_erb_testdialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_es_us_data_bara_no_yume_bara_no_yume_dialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_es_us_data_bara_no_yume_bara_no_yume_enddialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_es_us_data_high_school_conflict_high_school_conflictdialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_es_us_data_high_school_conflict_high_school_conflictenddialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_es_us_data_obsession_preintrodialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_es_us_data_obsession_enddialogue1_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_es_us_data_obsession_introdialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_es_us_data_obsession_enddialogue3_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_es_us_data_obsession_enddialogue2_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_es_us_data_my_confession_enddialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_es_us_data_my_confession_introdialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_locale_es_us_data_my_sweets_introdialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_dokistory_cursor_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_dokistory_secret2_story_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_dokistory_secret2_story_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_dokistory_yuri_story_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_dokistory_yuri_story_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_dokistory_moni_story_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_dokistory_moni_story_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_dokistory_sayo_story_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_dokistory_sayo_story_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_dokistory_popup_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_dokistory_popup_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_dokistory_nat_story_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_dokistory_nat_story_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_dokistory_secret_story_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_dokistory_secret_story_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_storymenu_week3_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_storymenu_week2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_storymenu_week0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_storymenu_week1_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_storymenu_week5_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_storymenu_week4_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_storymenu_week6_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_sayori_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_sayori_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_cyrixstaticmenu_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_senpai_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_cyrixstaticmenu_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_senpai_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_akihamoniduo_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_akihamoniduo_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_dokitogetheralt_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_dokitogetheralt_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_tabiandyuri_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_tabiandyuri_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_natsuki_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_natsuki_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_minusmonikapixel_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_minusmonikapixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_sunnat_menu_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_sunnat_menu_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_yuri_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_yuri_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_protag_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_protag_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_dokitogether_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_dokitogether_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_fumo_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_fumo_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_pixelmonika_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_monika_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_monika_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_pixelmonika_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_sayozip_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_sayozip_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_thanksicon_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menubg_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_num4_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_num5_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_num7_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_dokitakeoverlogo_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_credits_leftside_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_num6_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_scrolling_bg_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_num2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_num3_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_gfdancetitle_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_num1_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_gfdancetitle_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_ddlcstart_screen_assets_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_freeplay_freeplaybook1_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_freeplay_freeplaybook2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_freeplay_freeplaybook3_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_freeplay_freeplaybook4_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_freeplay_songlist_page_1_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_freeplay_songlist_page_1_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_freeplay_chibidorks_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_freeplay_chibidorks_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_newgrounds_logo_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_ddlcstart_screen_assets_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_campaign_menu_ui_characters_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_num0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_campaign_menu_ui_characters_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_alphabet_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_alphabet_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menutransrights_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_logo_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_icons_icon_bigmonika_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_icons_icon_monika_real_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_icons_icon_yuri_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_icons_icon_sayori_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_icons_icon_monika_angry_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_icons_icon_senpai_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_icons_icon_dad_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_icons_icon_natsuki_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_icons_icon_yuri_crazy_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_icons_icon_bf_pixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_icons_icon_bf_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_icons_icon_monika_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_icons_icon_dual_demise_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_icons_icon_duet_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_icons_icon_spirit_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_icons_icon_bf_old_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_num8_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_num9_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_campaign_menu_ui_assets_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_campaign_menu_ui_assets_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menubgfriends_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_fumo_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_characters_boyfriend_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_characters_boyfriend_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_characters_bfoffsets_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_characters_gfoffsets_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_characters_dadoffsets_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_characters_gf_assets_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_characters_gf_assets_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_characters_daddy_dearest_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_characters_daddy_dearest_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_fnf_main_menu_assets_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_fnf_main_menu_assets_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_scrollmenu_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_cancelmenu_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_confirmmenu_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_videos_daweirdvid_dontdelete_webm extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_videos_sayointro_intro_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_videos_sayointro_intro_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_videos_sayointro_intro_webm extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_videos_ugh_ugh_webm extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_videos_ugh_ugh_mp4 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_videos_ugh_ugh_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_videos_ugh_ugh_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_videos_monika_fakeout_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_videos_monika_fakeout_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_videos_monika_fakeout_webm extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_videos_credits_credits_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_videos_credits_credits_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_videos_credits_credits_webm extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_data_goes_here_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_reconciliation_reconciliation_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_reconciliation_reconciliation_easy_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_reconciliation_reconciliation_hard_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_epiphany_epiphany_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_epiphany_name_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_epiphany_epiphany_hard_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_epiphany_epiphany_easy_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_main_view_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_gfversionlist_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_dual_demise_dual_demise_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_dual_demise_dual_demise_easy_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_dual_demise_dual_demise_hard_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_introtext_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_glitcher__monika_mix__glitcher__monika_mix__easy_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_glitcher__monika_mix__glitcher__monika_mix__hard_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_glitcher__monika_mix__glitcher__monika_mix__json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_deep_breaths_deep_breaths_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_deep_breaths_deep_breaths_hard_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_deep_breaths_deep_breaths_easy_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_it_s_complicated__sayori_mix__it_s_complicated__sayori_mix__hard_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_it_s_complicated__sayori_mix__it_s_complicated__sayori_mix__easy_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_it_s_complicated__sayori_mix__it_s_complicated__sayori_mix__json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_baka_baka_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_baka_baka_easy_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_baka_baka_hard_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_specialthanks_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_your_demise_your_demise_hard_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_your_demise_your_demise_easy_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_your_demise_your_demise_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_notestylelist_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_stagelist_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_freeplaysonglist_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_controls_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_page4_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_rain_clouds_rain_clouds_hard_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_rain_clouds_rain_clouds_easy_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_rain_clouds_rain_clouds_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_beathoven__natsuki_mix__beathoven__natsuki_mix__json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_beathoven__natsuki_mix__beathoven__natsuki_mix__hard_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_beathoven__natsuki_mix__beathoven__natsuki_mix__easy_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_page1_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_page2_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_crucify__yuri_mix__crucify__yuri_mix__json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_crucify__yuri_mix__crucify__yuri_mix__easy_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_crucify__yuri_mix__crucify__yuri_mix__hard_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_page3_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_your_reality_your_reality_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_poems_n_thorns_poems_n_thorns_easy_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_poems_n_thorns_poems_n_thorns_hard_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_poems_n_thorns_poems_n_thorns_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_erb_erb_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_erb_erb_easy_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_erb_erb_hard_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_bara_no_yume_bara_no_yume_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_bara_no_yume_bara_no_yume_easy_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_bara_no_yume_bara_no_yume_hard_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_high_school_conflict_high_school_conflict_easy_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_high_school_conflict_high_school_conflict_hard_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_high_school_conflict_high_school_conflict_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_obsession_obsession_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_obsession_obsession_easy_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_obsession_obsession_hard_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_characterlist_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_my_confession_my_confession_hard_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_my_confession_my_confession_easy_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_my_confession_my_confession_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_my_sweets_my_sweets_easy_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_my_sweets_my_sweets_hard_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_my_sweets_my_sweets_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_songs_reconciliation_voices_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_songs_reconciliation_inst_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_songs_epiphany_voices_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_songs_epiphany_inst_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_songs_dual_demise_voices_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_songs_dual_demise_inst_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_songs_glitcher__monika_mix__voices_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_songs_glitcher__monika_mix__inst_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_songs_deep_breaths_voices_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_songs_deep_breaths_inst_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_songs_it_s_complicated__sayori_mix__voices_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_songs_it_s_complicated__sayori_mix__inst_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_songs_baka_voices_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_songs_baka_inst_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_songs_your_demise_voices_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_songs_your_demise_inst_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_songs_rain_clouds_voices_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_songs_rain_clouds_inst_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_songs_beathoven__natsuki_mix__voices_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_songs_beathoven__natsuki_mix__inst_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_songs_crucify__yuri_mix__voices_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_songs_crucify__yuri_mix__inst_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_songs_your_reality_voices_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_songs_your_reality_inst_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_songs_poems_n_thorns_voices_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_songs_poems_n_thorns_inst_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_songs_erb_voices_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_songs_erb_inst_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_songs_bara_no_yume_voices_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_songs_bara_no_yume_inst_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_songs_high_school_conflict_voices_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_songs_high_school_conflict_inst_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_songs_obsession_voices_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_songs_obsession_inst_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_songs_my_confession_voices_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_songs_my_confession_inst_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_songs_my_sweets_voices_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_songs_my_sweets_inst_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_music_gameover_pixel_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_music_gameover_senpai_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_music_ghost_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_music_monic_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_music_lunchboxscary_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_music_yuric_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_music_gameoverend_pixel_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_music_monika_dia2_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_music_lunchbox_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_music_cutscene_jargon_shmargon_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_music_gameover_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_music_sayoc_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_music_gameoverend_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_music_natsc_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_music_gameoverend_senpai_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_music_disco_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_stage_light_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_good_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_shit_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_combo_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_weeb_senpai_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_weeb_senpai_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_weeb_monikagasp_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_weeb_monikagasp_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_weeb_monikauhohleft_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_weeb_monikauhohleft_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_weeb_pixelui_arrowends_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_weeb_pixelui_hand_textbox_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_weeb_pixelui_num7_pixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_weeb_pixelui_date_pixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_weeb_pixelui_dialoguebox_pixel_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_weeb_pixelui_dialoguebox_pixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_weeb_pixelui_num1_pixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_weeb_pixelui_dialoguebox_senpaimad_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_weeb_pixelui_demise_date_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_weeb_pixelui_dialoguebox_senpaimad_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_weeb_pixelui_good_pixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_weeb_pixelui_num6_pixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_weeb_pixelui_sick_pixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_weeb_pixelui_set_pixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_weeb_pixelui_num0_pixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_weeb_pixelui_num8_pixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_weeb_pixelui_combo_pixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_weeb_pixelui_num5_pixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_weeb_pixelui_arrows_pixels_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_weeb_pixelui_num3_pixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_weeb_pixelui_dialoguebox_monika_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_weeb_pixelui_dialoguebox_monika_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_weeb_pixelui_shit_pixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_weeb_pixelui_num9_pixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_weeb_pixelui_dialoguebox_evil_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_weeb_pixelui_dialoguebox_evil_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_weeb_pixelui_ready_pixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_weeb_pixelui_num4_pixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_weeb_pixelui_bad_pixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_weeb_pixelui_num2_pixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_weeb_monikahmm_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_weeb_monikahmm_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_weeb_bfangry_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_weeb_bfangry_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_weeb_whodis_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_weeb_whodis_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_weeb_monikagaspleft_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_weeb_monikagaspleft_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_weeb_senpaihappy_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_weeb_senpaihappy_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_weeb_senpaihmm_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_weeb_senpaihmm_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_weeb_bfwhat_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_weeb_bfwhat_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_weeb_monikauhohright_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_weeb_monikauhohright_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_weeb_monikahappy_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_weeb_monikahappy_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_weeb_monika_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_weeb_monika_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_weeb_monikasad_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_weeb_monikasad_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_weeb_bf_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_weeb_bf_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_stagecurtains_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_pausealt_bflol_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_pausealt_bflol_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_pausealt_pauseui_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_pausealt_pauseui_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_pausealt_pausebg_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_ready_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_gf_fakeout_cryemoji_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_gf_fakeout_cryemoji_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_restart_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_lose_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_lose_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_set_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_funnicutscene_end1_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_funnicutscene_end1_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_funnicutscene_monikasenpaistanding_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_funnicutscene_monikasenpaistanding_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_speech_bubble_talking_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_note_assets_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_speech_bubble_talking_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_note_assets_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_backspace_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_backspace_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_go_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_stagefront_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_stageback_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_look_at_em_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_sick_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_senpai_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_senpai_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_spiritoffsets_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_bf_pixelangryoffsets_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_bf_pixel_deadoffsets_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_nogf_pixeloffsets_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_bf_dokioffsets_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_big_monikia_base_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_big_monikia_base_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_natsukioffsets_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_doki_yuri_assets_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_doki_yuri_assets_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_senpaioffsets_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_monika_realoffsets_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_yurioffsets_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_gfdoki_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_gfdoki_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_gfpixel_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_gf_dokioffsets_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_gfpixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_bigmonika_deadoffsets_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_gf_realdokioffsets_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_ddlcboyfriend_assets_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_ddlcboyfriend_assets_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_doki_sayo_assets_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_doki_sayo_assets_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_monika_angryoffsets_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_doki_monikanonpixel_assets_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_doki_monikanonpixel_assets_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_big_monikia_death_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_big_monikia_death_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_spirit_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_doki_crazy_yuri_assets_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_doki_crazy_yuri_assets_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_bfpixelsdead_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_bfpixelsdead_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_ddlcgf_ass_sets_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_ddlcgf_ass_sets_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_duetoffsets_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_playablesenpai_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_playablesenpai_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_duet_assets_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_duet_assets_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_bigmonikaoffsets_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_bfpixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_bfpixel_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_spirit_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_doki_nat_assets_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_doki_nat_assets_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_nogfpixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_nogfpixel_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_monikaoffsets_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_monika_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_monika_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_gf_pixeloffsets_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_gfoffsets_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_sayorioffsets_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_yuri_crazyoffsets_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_bf_pixeloffsets_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_bfpixelangry_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_senpai_angryoffsets_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_gf_assets_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_monika_finale_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_bfpixelangry_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_gf_assets_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_monika_finale_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_playablesenpaioffsets_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_bad_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_grafix_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_images_go_here_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_finalebgmybeloved_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_thunder_1_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_gftext_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_badnoise2_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_sayotext_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_intro3_pixel_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_badnoise3_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_introgo_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_thunder_2_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_badnoise1_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_awhellnaw_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_intro2_glitch_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_gffakeout_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_senpai_dies_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_soundtest_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_angry_text_box_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_intro2_pixel_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_fnf_loss_sfx_bigmonika_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_dah_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_glitchin_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_missnote3_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_missnote2_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_flip_page_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_introgo_pixel_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_missnote1_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_intro1_pixel_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_clap_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_exhale_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_intro3_glitch_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_jarringmonikasound_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_lights_shut_off_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_gf_4_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_nattext_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_yuritext_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_monikapound_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_gf_1_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_fnf_loss_sfx_pixel_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_pixeltext_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_gf_3_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_gf_2_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_fnf_loss_sfx_senpai_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_fnf_loss_sfx_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_glitch1_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_pixeltononpixel_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_sounds_go_here_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_bftext_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_carpass0_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_glitch2_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_intro1_glitch_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_introgo_glitch_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_carpass1_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_intro1_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_monitext_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_lights_turn_on_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_angry_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_intro2_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_train_passes_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_clicktext_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_intro3_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_snap_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_week6_music_lunchbox_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_week6_images_weeb_weebtreesback_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_week6_images_weeb_weebtrees_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_week6_images_weeb_pixelui_arrowends_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_week6_images_weeb_pixelui_hand_textbox_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_week6_images_weeb_pixelui_num7_pixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_week6_images_weeb_pixelui_date_pixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_week6_images_weeb_pixelui_dialoguebox_pixel_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_week6_images_weeb_pixelui_dialoguebox_pixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_week6_images_weeb_pixelui_num1_pixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_week6_images_weeb_pixelui_dialoguebox_senpaimad_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_week6_images_weeb_pixelui_demise_date_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_week6_images_weeb_pixelui_dialoguebox_senpaimad_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_week6_images_weeb_pixelui_good_pixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_week6_images_weeb_pixelui_num6_pixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_week6_images_weeb_pixelui_sick_pixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_week6_images_weeb_pixelui_set_pixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_week6_images_weeb_pixelui_num0_pixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_week6_images_weeb_pixelui_num8_pixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_week6_images_weeb_pixelui_combo_pixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_week6_images_weeb_pixelui_num5_pixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_week6_images_weeb_pixelui_arrows_pixels_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_week6_images_weeb_pixelui_num3_pixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_week6_images_weeb_pixelui_dialoguebox_monika_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_week6_images_weeb_pixelui_dialoguebox_monika_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_week6_images_weeb_pixelui_shit_pixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_week6_images_weeb_pixelui_num9_pixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_week6_images_weeb_pixelui_dialoguebox_evil_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_week6_images_weeb_pixelui_dialoguebox_evil_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_week6_images_weeb_pixelui_ready_pixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_week6_images_weeb_pixelui_num4_pixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_week6_images_weeb_pixelui_bad_pixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_week6_images_weeb_pixelui_num2_pixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_week6_images_weeb_spiritfaceforward_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_week6_images_weeb_evilschoolfg_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_week6_images_weeb_weebstreet_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_week6_images_weeb_weebtrees_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_week6_images_weeb_weebschool_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_week6_images_weeb_weebsky_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_week6_images_weeb_petals_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_week6_images_weeb_petals_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_week6_images_weeb_bgfreaks_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_week6_images_weeb_bgfreaks_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_week6_images_weeb_bfportrait_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_week6_images_weeb_bfportrait_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_week6_images_weeb_animatedevilschool_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_week6_images_weeb_animatedevilschool_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_week6_images_weeb_evilschoolbg_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_week6_week6_stuff_here_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_monika_images_finalefg_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_monika_images_finalebg_1_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_monika_images_finalebg_2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_monika_images_dialogue_senpai_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_monika_images_dialogue_senpai_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_monika_images_dialogue_monikagasp_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_monika_images_dialogue_monikagasp_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_monika_images_dialogue_monikauhohleft_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_monika_images_dialogue_monikauhohleft_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_monika_images_dialogue_monikahmm_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_monika_images_dialogue_monikahmm_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_monika_images_dialogue_bfangry_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_monika_images_dialogue_bfangry_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_monika_images_dialogue_whodis_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_monika_images_dialogue_whodis_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_monika_images_dialogue_monikagaspleft_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_monika_images_dialogue_monikagaspleft_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_monika_images_dialogue_senpaihappy_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_monika_images_dialogue_senpaihappy_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_monika_images_dialogue_senpaihmm_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_monika_images_dialogue_senpaihmm_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_monika_images_dialogue_bfwhat_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_monika_images_dialogue_bfwhat_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_monika_images_dialogue_monikauhohright_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_monika_images_dialogue_monikauhohright_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_monika_images_dialogue_monikahappy_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_monika_images_dialogue_monikahappy_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_monika_images_dialogue_monika_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_monika_images_dialogue_monika_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_monika_images_dialogue_monikasad_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_monika_images_dialogue_monikasad_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_monika_images_dialogue_bf_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_monika_images_dialogue_bf_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_monika_images_cutscene_end1_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_monika_images_cutscene_end1_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_monika_images_cutscene_monikasenpaistanding_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_monika_images_cutscene_monikasenpaistanding_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_bgdoki_sayori_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_bgdoki_sayori_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_bgdoki_natsuki_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_bgdoki_natsuki_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_bgdoki_yuri_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_bgdoki_yuri_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_bgdoki_protag_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_bgdoki_protag_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_bgdoki_monika_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_bgdoki_monika_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_bigmonika_fg_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_bigmonika_sky_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_bigmonika_bg_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_bigmonika_bigika_delete_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_bigmonika_bigika_delete_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_dialogue_mc_dialogue_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_dialogue_mc_dialogue_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_dialogue_all_dialogue_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_dialogue_all_dialogue_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_dialogue_bgs_evil3_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_dialogue_bgs_evil2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_dialogue_bgs_evil1_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_dialogue_bgs_flashback1_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_dialogue_bgs_festivalbeginning_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_dialogue_bgs_flashback3_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_dialogue_bgs_flashback2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_dialogue_bgs_evilcutin_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_dialogue_bgs_pixeltononpixel_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_dialogue_bgs_pixeltononpixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_dialogue_bgs_festivalend_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_dialogue_bgs_ending5_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_dialogue_bgs_ending4_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_dialogue_bgs_ending6_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_dialogue_bgs_ending3_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_dialogue_bgs_ending2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_dialogue_bgs_ending1_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_dialogue_bgs_example_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_dialogue_bf_dialogue_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_dialogue_bf_dialogue_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_dialogue_yuri_dialogue_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_dialogue_yuri_dialogue_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_dialogue_nat_dialogue_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_dialogue_nat_dialogue_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_dialogue_portraits_yuri_smile_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_dialogue_portraits_gf_spook1_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_dialogue_portraits_mc_neutral_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_dialogue_portraits_yuri_ahaha_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_dialogue_portraits_gf_giggle_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_dialogue_portraits_nat_wah_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_dialogue_portraits_gf_spook2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_dialogue_portraits_sayo_ooh_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_dialogue_portraits_all_neutral_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_dialogue_portraits_bf_yeah_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_dialogue_portraits_sayo_concern_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_dialogue_portraits_yuri_ehh_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_dialogue_portraits_bfbeep_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_dialogue_portraits_nat_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_dialogue_portraits_bf_scared_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_dialogue_portraits_monika_ahh_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_dialogue_portraits_monika_ahaha_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_dialogue_portraits_mc_happy_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_dialogue_portraits_gf_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_dialogue_portraits_all_gasp_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_dialogue_portraits_bf_think_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_dialogue_portraits_monika_eeh_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_dialogue_portraits_nat_angy_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_dialogue_portraits_sayo_happ_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_dialogue_portraits_yuri_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_dialogue_portraits_nat_hmmph_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_dialogue_portraits_gf_scared_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_dialogue_portraits_monika_neutral_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_dialogue_portraits_nat_spook2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_dialogue_portraits_yuri_blush_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_dialogue_portraits_nat_spook1_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_dialogue_portraits_mc_sigh_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_dialogue_portraits_sayo_ehh_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_dialogue_portraits_gf_ehh_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_dialogue_portraits_mc_camera_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_dialogue_portraits_bf_hmph_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_dialogue_portraits_yuri_aah_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_dialogue_portraits_sayo_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_dialogue_portraits_monika_upset_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_dialogue_portraits_nat_sick_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_dialogue_portraits_yuri_crazy_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_dialogue_portraits_sayo_yeah_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_dialogue_portraits_nat_what_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_dialogue_portraits_bf_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_dialogue_portraits_sayo_grumpy_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_dialogue_portraits_gf_yeah_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_dialogue_moni_dialogue_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_dialogue_moni_dialogue_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_dialogue_gf_dialogue_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_dialogue_gf_dialogue_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_dialogue_sayo_dialogue_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_dialogue_sayo_dialogue_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_clubroom_staticshock_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_clubroom_staticshock_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_clubroom_bakabgdoodles_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_clubroom_bakabgdoodles_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_clubroom_yurisparklefg_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_clubroom_ddlcbg_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_clubroom_desksfront_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_clubroom_ddlcfarbg_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_clubroom_yurisparklebg_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_vignette_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_festival_lights_back_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_festival_lights_back_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_festival_festivalbanner_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_festival_mainbg_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_festival_lights_front_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_festival_lights_front_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_festival_desksfestival_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_doki_images_festival_farback_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__do_not_readme_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__doki_readme_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__license_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_fonts_aller_rg_ttf extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_fonts_vcr_ttf extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_fonts_riffic_ttf extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_fonts_ubuntu_b_ttf extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_fonts_fonts_go_here_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_fonts_lanapixel_ttf extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_sounds_beep_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_sounds_flixel_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_fonts_nokiafc22_ttf extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_fonts_monsterrat_ttf extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_images_ui_button_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_images_logo_default_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_dropdown_mark_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_plus_mark_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_radio_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_button_arrow_left_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_button_thin_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_tab_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_finger_big_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_invis_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_chrome_inset_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_tooltip_arrow_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_button_arrow_right_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_radio_dot_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_chrome_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_check_box_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_button_toggle_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_button_arrow_up_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_minus_mark_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_chrome_flat_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_swatch_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_chrome_light_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_hilight_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_check_mark_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_tab_back_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_box_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_finger_small_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_button_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_button_arrow_down_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_xml_default_popup_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_xml_default_loading_screen_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_xml_defaults_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__manifest_songs_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__manifest_shared_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__manifest_week6_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__manifest_monika_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__manifest_doki_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__manifest_default_json extends null { }


#elseif (desktop || cpp)

@:keep @:font("assets/fonts/Aller_Rg.ttf") @:noCompletion #if display private #end class __ASSET__assets_fonts_aller_rg_ttf extends lime.text.Font {}
@:keep @:font("assets/fonts/vcr.ttf") @:noCompletion #if display private #end class __ASSET__assets_fonts_vcr_ttf extends lime.text.Font {}
@:keep @:font("assets/fonts/riffic.ttf") @:noCompletion #if display private #end class __ASSET__assets_fonts_riffic_ttf extends lime.text.Font {}
@:keep @:font("assets/fonts/Ubuntu-B.ttf") @:noCompletion #if display private #end class __ASSET__assets_fonts_ubuntu_b_ttf extends lime.text.Font {}
@:keep @:file("assets/fonts/fonts-go-here.txt") @:noCompletion #if display private #end class __ASSET__assets_fonts_fonts_go_here_txt extends haxe.io.Bytes {}
@:keep @:font("assets/fonts/LanaPixel.ttf") @:noCompletion #if display private #end class __ASSET__assets_fonts_lanapixel_ttf extends lime.text.Font {}
@:keep @:file("/Users/bobbylopez/Desktop/users/fnf/flixel/4,10,0/assets/sounds/beep.ogg") @:noCompletion #if display private #end class __ASSET__flixel_sounds_beep_ogg extends haxe.io.Bytes {}
@:keep @:file("/Users/bobbylopez/Desktop/users/fnf/flixel/4,10,0/assets/sounds/flixel.ogg") @:noCompletion #if display private #end class __ASSET__flixel_sounds_flixel_ogg extends haxe.io.Bytes {}
@:keep @:font("/Users/bobbylopez/Desktop/users/fnf/flixel/4,10,0/assets/fonts/nokiafc22.ttf") @:noCompletion #if display private #end class __ASSET__flixel_fonts_nokiafc22_ttf extends lime.text.Font {}
@:keep @:font("/Users/bobbylopez/Desktop/users/fnf/flixel/4,10,0/assets/fonts/monsterrat.ttf") @:noCompletion #if display private #end class __ASSET__flixel_fonts_monsterrat_ttf extends lime.text.Font {}
@:keep @:image("/Users/bobbylopez/Desktop/users/fnf/flixel/4,10,0/assets/images/ui/button.png") @:noCompletion #if display private #end class __ASSET__flixel_images_ui_button_png extends lime.graphics.Image {}
@:keep @:image("/Users/bobbylopez/Desktop/users/fnf/flixel/4,10,0/assets/images/logo/default.png") @:noCompletion #if display private #end class __ASSET__flixel_images_logo_default_png extends lime.graphics.Image {}
@:keep @:image("/Users/bobbylopez/Desktop/users/fnf/flixel-ui/git/assets/images/dropdown_mark.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_dropdown_mark_png extends lime.graphics.Image {}
@:keep @:image("/Users/bobbylopez/Desktop/users/fnf/flixel-ui/git/assets/images/plus_mark.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_plus_mark_png extends lime.graphics.Image {}
@:keep @:image("/Users/bobbylopez/Desktop/users/fnf/flixel-ui/git/assets/images/radio.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_radio_png extends lime.graphics.Image {}
@:keep @:image("/Users/bobbylopez/Desktop/users/fnf/flixel-ui/git/assets/images/button_arrow_left.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_button_arrow_left_png extends lime.graphics.Image {}
@:keep @:image("/Users/bobbylopez/Desktop/users/fnf/flixel-ui/git/assets/images/button_thin.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_button_thin_png extends lime.graphics.Image {}
@:keep @:image("/Users/bobbylopez/Desktop/users/fnf/flixel-ui/git/assets/images/tab.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_tab_png extends lime.graphics.Image {}
@:keep @:image("/Users/bobbylopez/Desktop/users/fnf/flixel-ui/git/assets/images/finger_big.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_finger_big_png extends lime.graphics.Image {}
@:keep @:image("/Users/bobbylopez/Desktop/users/fnf/flixel-ui/git/assets/images/invis.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_invis_png extends lime.graphics.Image {}
@:keep @:image("/Users/bobbylopez/Desktop/users/fnf/flixel-ui/git/assets/images/chrome_inset.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_chrome_inset_png extends lime.graphics.Image {}
@:keep @:image("/Users/bobbylopez/Desktop/users/fnf/flixel-ui/git/assets/images/tooltip_arrow.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_tooltip_arrow_png extends lime.graphics.Image {}
@:keep @:image("/Users/bobbylopez/Desktop/users/fnf/flixel-ui/git/assets/images/button_arrow_right.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_button_arrow_right_png extends lime.graphics.Image {}
@:keep @:image("/Users/bobbylopez/Desktop/users/fnf/flixel-ui/git/assets/images/radio_dot.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_radio_dot_png extends lime.graphics.Image {}
@:keep @:image("/Users/bobbylopez/Desktop/users/fnf/flixel-ui/git/assets/images/chrome.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_chrome_png extends lime.graphics.Image {}
@:keep @:image("/Users/bobbylopez/Desktop/users/fnf/flixel-ui/git/assets/images/check_box.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_check_box_png extends lime.graphics.Image {}
@:keep @:image("/Users/bobbylopez/Desktop/users/fnf/flixel-ui/git/assets/images/button_toggle.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_button_toggle_png extends lime.graphics.Image {}
@:keep @:image("/Users/bobbylopez/Desktop/users/fnf/flixel-ui/git/assets/images/button_arrow_up.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_button_arrow_up_png extends lime.graphics.Image {}
@:keep @:image("/Users/bobbylopez/Desktop/users/fnf/flixel-ui/git/assets/images/minus_mark.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_minus_mark_png extends lime.graphics.Image {}
@:keep @:image("/Users/bobbylopez/Desktop/users/fnf/flixel-ui/git/assets/images/chrome_flat.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_chrome_flat_png extends lime.graphics.Image {}
@:keep @:image("/Users/bobbylopez/Desktop/users/fnf/flixel-ui/git/assets/images/swatch.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_swatch_png extends lime.graphics.Image {}
@:keep @:image("/Users/bobbylopez/Desktop/users/fnf/flixel-ui/git/assets/images/chrome_light.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_chrome_light_png extends lime.graphics.Image {}
@:keep @:image("/Users/bobbylopez/Desktop/users/fnf/flixel-ui/git/assets/images/hilight.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_hilight_png extends lime.graphics.Image {}
@:keep @:image("/Users/bobbylopez/Desktop/users/fnf/flixel-ui/git/assets/images/check_mark.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_check_mark_png extends lime.graphics.Image {}
@:keep @:image("/Users/bobbylopez/Desktop/users/fnf/flixel-ui/git/assets/images/tab_back.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_tab_back_png extends lime.graphics.Image {}
@:keep @:image("/Users/bobbylopez/Desktop/users/fnf/flixel-ui/git/assets/images/box.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_box_png extends lime.graphics.Image {}
@:keep @:image("/Users/bobbylopez/Desktop/users/fnf/flixel-ui/git/assets/images/finger_small.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_finger_small_png extends lime.graphics.Image {}
@:keep @:image("/Users/bobbylopez/Desktop/users/fnf/flixel-ui/git/assets/images/button.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_button_png extends lime.graphics.Image {}
@:keep @:image("/Users/bobbylopez/Desktop/users/fnf/flixel-ui/git/assets/images/button_arrow_down.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_button_arrow_down_png extends lime.graphics.Image {}
@:keep @:file("/Users/bobbylopez/Desktop/users/fnf/flixel-ui/git/assets/xml/default_popup.xml") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_xml_default_popup_xml extends haxe.io.Bytes {}
@:keep @:file("/Users/bobbylopez/Desktop/users/fnf/flixel-ui/git/assets/xml/default_loading_screen.xml") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_xml_default_loading_screen_xml extends haxe.io.Bytes {}
@:keep @:file("/Users/bobbylopez/Desktop/users/fnf/flixel-ui/git/assets/xml/defaults.xml") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_xml_defaults_xml extends haxe.io.Bytes {}



#else

@:keep @:expose('__ASSET__assets_fonts_aller_rg_ttf') @:noCompletion #if display private #end class __ASSET__assets_fonts_aller_rg_ttf extends lime.text.Font { public function new () { #if !html5 __fontPath = "assets/fonts/Aller_Rg.ttf"; #else ascender = null; descender = null; height = null; numGlyphs = null; underlinePosition = null; underlineThickness = null; unitsPerEM = null; #end name = "Aller"; super (); }}
@:keep @:expose('__ASSET__assets_fonts_vcr_ttf') @:noCompletion #if display private #end class __ASSET__assets_fonts_vcr_ttf extends lime.text.Font { public function new () { #if !html5 __fontPath = "assets/fonts/vcr.ttf"; #else ascender = null; descender = null; height = null; numGlyphs = null; underlinePosition = null; underlineThickness = null; unitsPerEM = null; #end name = "VCR OSD Mono"; super (); }}
@:keep @:expose('__ASSET__assets_fonts_riffic_ttf') @:noCompletion #if display private #end class __ASSET__assets_fonts_riffic_ttf extends lime.text.Font { public function new () { #if !html5 __fontPath = "assets/fonts/riffic.ttf"; #else ascender = null; descender = null; height = null; numGlyphs = null; underlinePosition = null; underlineThickness = null; unitsPerEM = null; #end name = "Riffic Free Bold"; super (); }}
@:keep @:expose('__ASSET__assets_fonts_ubuntu_b_ttf') @:noCompletion #if display private #end class __ASSET__assets_fonts_ubuntu_b_ttf extends lime.text.Font { public function new () { #if !html5 __fontPath = "assets/fonts/Ubuntu-B.ttf"; #else ascender = null; descender = null; height = null; numGlyphs = null; underlinePosition = null; underlineThickness = null; unitsPerEM = null; #end name = "Ubuntu Bold"; super (); }}
@:keep @:expose('__ASSET__assets_fonts_lanapixel_ttf') @:noCompletion #if display private #end class __ASSET__assets_fonts_lanapixel_ttf extends lime.text.Font { public function new () { #if !html5 __fontPath = "assets/fonts/LanaPixel.ttf"; #else ascender = null; descender = null; height = null; numGlyphs = null; underlinePosition = null; underlineThickness = null; unitsPerEM = null; #end name = "LanaPixel"; super (); }}
@:keep @:expose('__ASSET__flixel_fonts_nokiafc22_ttf') @:noCompletion #if display private #end class __ASSET__flixel_fonts_nokiafc22_ttf extends lime.text.Font { public function new () { #if !html5 __fontPath = "flixel/fonts/nokiafc22.ttf"; #else ascender = null; descender = null; height = null; numGlyphs = null; underlinePosition = null; underlineThickness = null; unitsPerEM = null; #end name = "Nokia Cellphone FC Small"; super (); }}
@:keep @:expose('__ASSET__flixel_fonts_monsterrat_ttf') @:noCompletion #if display private #end class __ASSET__flixel_fonts_monsterrat_ttf extends lime.text.Font { public function new () { #if !html5 __fontPath = "flixel/fonts/monsterrat.ttf"; #else ascender = null; descender = null; height = null; numGlyphs = null; underlinePosition = null; underlineThickness = null; unitsPerEM = null; #end name = "Monsterrat"; super (); }}


#end

#if (openfl && !flash)

#if html5
@:keep @:expose('__ASSET__OPENFL__assets_fonts_aller_rg_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__assets_fonts_aller_rg_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__assets_fonts_aller_rg_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__assets_fonts_vcr_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__assets_fonts_vcr_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__assets_fonts_vcr_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__assets_fonts_riffic_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__assets_fonts_riffic_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__assets_fonts_riffic_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__assets_fonts_ubuntu_b_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__assets_fonts_ubuntu_b_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__assets_fonts_ubuntu_b_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__assets_fonts_lanapixel_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__assets_fonts_lanapixel_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__assets_fonts_lanapixel_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__flixel_fonts_nokiafc22_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__flixel_fonts_nokiafc22_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__flixel_fonts_nokiafc22_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__flixel_fonts_monsterrat_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__flixel_fonts_monsterrat_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__flixel_fonts_monsterrat_ttf ()); super (); }}

#else
@:keep @:expose('__ASSET__OPENFL__assets_fonts_aller_rg_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__assets_fonts_aller_rg_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__assets_fonts_aller_rg_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__assets_fonts_vcr_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__assets_fonts_vcr_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__assets_fonts_vcr_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__assets_fonts_riffic_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__assets_fonts_riffic_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__assets_fonts_riffic_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__assets_fonts_ubuntu_b_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__assets_fonts_ubuntu_b_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__assets_fonts_ubuntu_b_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__assets_fonts_lanapixel_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__assets_fonts_lanapixel_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__assets_fonts_lanapixel_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__flixel_fonts_nokiafc22_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__flixel_fonts_nokiafc22_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__flixel_fonts_nokiafc22_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__flixel_fonts_monsterrat_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__flixel_fonts_monsterrat_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__flixel_fonts_monsterrat_ttf ()); super (); }}

#end

#end
#end

#end
