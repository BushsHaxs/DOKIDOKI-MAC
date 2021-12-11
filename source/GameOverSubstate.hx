package;

import flixel.tweens.FlxEase;
import flixel.tweens.FlxTween;
import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxSubState;
import flixel.math.FlxPoint;
import flixel.util.FlxColor;
import flixel.util.FlxTimer;
import flixel.addons.transition.FlxTransitionableState;

class GameOverSubstate extends MusicBeatSubstate
{
	var bf:Boyfriend;
	var camFollow:FlxObject;

	var stageSuffix:String = "";

	public static var crashdeath:Bool = false;

	public function new(x:Float, y:Float)
	{
		var daStage = PlayState.curStage;
		var daBf:String = '';
		switch (PlayState.SONG.player1)
		{
			case 'bf-pixel' | 'bf-pixelangry':
				stageSuffix = '-pixel';
				daBf = 'bf-pixel-dead';
			case 'playablesenpai':
				stageSuffix = '-senpai';
				daBf = 'playablesenpai';
			default:
				daBf = 'bf';
		}

		switch (PlayState.SONG.player2)
		{
			case 'bigmonika':
				stageSuffix = '';
				daBf = 'bigmonika-dead';
		}

		super();

		Conductor.songPosition = 0;

		bf = new Boyfriend(x, y, daBf);
		trace(bf == null ? "bf if hella dumb" : "bf has a big forehead");
		add(bf);

		camFollow = new FlxObject(bf.getGraphicMidpoint().x, bf.getGraphicMidpoint().y, 1, 1);
		add(camFollow);

		if (!crashdeath)
		{
			if (PlayState.SONG.player2 == 'bigmonika')
				FlxG.sound.play(Paths.sound('fnf_loss_sfx-bigmonika'));
			else
				FlxG.sound.play(Paths.sound('fnf_loss_sfx' + stageSuffix));
		}
		Conductor.changeBPM(100);

		// FlxG.camera.followLerp = 1;
		// FlxG.camera.focusOn(FlxPoint.get(FlxG.width / 2, FlxG.height / 2));
		FlxG.camera.scroll.set();
		FlxG.camera.target = null;

		if (bf.curCharacter == "playablesenpai")
		{
			// FlxG.camera.zoom = FlxG.camera.zoom - 0.25;
			camFollow.setPosition(bf.getGraphicMidpoint().x - 74, bf.getGraphicMidpoint().y - 150);

			FlxTween.tween(FlxG.camera, {zoom: FlxG.camera.zoom - 0.15}, 0.35, {
				ease: FlxEase.quadOut
			});
		}

		if (!crashdeath)
			bf.playAnim('firstDeath');
		else
		{
			FlxG.sound.play(Paths.sound('JarringMonikaSound'));
			bf.playAnim('crashDeath');
		}
	}

	override function update(elapsed:Float)
	{
		super.update(elapsed);

		if (controls.ACCEPT && !crashdeath)
		{
			endBullshit();
		}

		if (controls.BACK && !crashdeath)
		{
			FlxG.sound.music.stop();
			HealthIcon.isEpiphany = false;
			PlayState.showCutscene = true;
			if (PlayState.isStoryMode)
				FlxG.switchState(new DokiStoryState());
			else
				FlxG.switchState(new DokiFreeplayState());
			PlayState.loadRep = false;
		}

		if (bf.animation.curAnim.name == 'crashDeath' && bf.animation.finished)
		{
			new FlxTimer().start(.5, function(timer:FlxTimer)
			{
				#if FEATURE_FILESYSTEM
				Sys.exit(0);
				#else
				FlxTransitionableState.skipNextTransOut = true;
				FlxTransitionableState.skipNextTransIn = true;
				FlxG.switchState(new CrashState());
				#end
			});
		}

		if (bf.animation.curAnim.name == 'firstDeath' && bf.animation.curAnim.curFrame == 12 && !crashdeath)
		{
			FlxG.camera.follow(camFollow, LOCKON, 0.01);
		}

		if (bf.animation.curAnim.name == 'firstDeath' && bf.animation.curAnim.finished && !crashdeath)
		{
			FlxG.sound.playMusic(Paths.music('gameOver' + stageSuffix));
		}

		if (FlxG.sound.music.playing)
		{
			Conductor.songPosition = FlxG.sound.music.time;
		}
	}

	override function beatHit()
	{
		super.beatHit();

		FlxG.log.add('beat');
	}

	var isEnding:Bool = false;

	function endBullshit():Void
	{
		if (!isEnding)
		{
			isEnding = true;
			bf.playAnim('deathConfirm', true);
			FlxG.sound.music.stop();
			FlxG.sound.play(Paths.music('gameOverEnd' + stageSuffix));

			new FlxTimer().start(0.7, function(tmr:FlxTimer)
			{
				FlxG.camera.fade(FlxColor.BLACK, 2, false, function()
				{
					LoadingState.loadAndSwitchState(new PlayState());
				});
			});
		}
	}
}
