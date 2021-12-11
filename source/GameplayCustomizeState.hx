import flixel.tweens.FlxEase;
import flixel.tweens.FlxTween;
import flixel.util.FlxColor;
import flixel.text.FlxText;
import flixel.math.FlxMath;
import flixel.FlxCamera;
import flixel.math.FlxPoint;
import flixel.FlxObject;

import flixel.group.FlxGroup.FlxTypedGroup;
import openfl.ui.Keyboard;
import flixel.FlxSprite;
import flixel.FlxG;

class GameplayCustomizeState extends MusicBeatState
{
	var defaultX:Float = FlxG.width * 0.55 - 135;
	var defaultY:Float = FlxG.height / 2 - 50;

	var background:FlxSprite;
	var curt:FlxSprite;
	var front:FlxSprite;

	var sick:FlxSprite;

	var text:FlxText;
	var blackBorder:FlxSprite;

	var bf:Boyfriend;
	var dad:Character;
	var gf:Character;

	public var laneunderlay:FlxSprite;
	public var laneunderlayOpponent:FlxSprite;

	var strumLine:FlxSprite;
	var strumLineNotes:FlxTypedGroup<FlxSprite>;
	var playerStrums:FlxTypedGroup<FlxSprite>;
	var cpuStrums:FlxTypedGroup<FlxSprite>;

	private var camHUD:FlxCamera;
	private var camGame:FlxCamera;

	public override function create()
	{


		background = new FlxSprite(-600, -200).loadGraphic(Paths.image('stageback', 'shared'));
		front = new FlxSprite(-650, 600).loadGraphic(Paths.image('stagefront', 'shared'));
		curt = new FlxSprite(-500, -300).loadGraphic(Paths.image('stagecurtains', 'shared'));
		background.antialiasing = true;
		front.antialiasing = true;
		curt.antialiasing = true;

		super.create();

		camGame = new FlxCamera();
		camHUD = new FlxCamera();
		camHUD.bgColor.alpha = 0;

		FlxG.cameras.reset(camGame);
		FlxG.cameras.add(camHUD);

		camHUD.zoom = FlxG.save.data.zoom;

		FlxCamera.defaultCameras = [camGame];

		persistentUpdate = true;
		persistentDraw = true;

		background.scrollFactor.set(0.9, 0.9);
		front.scrollFactor.set(0.9, 0.9);
		curt.scrollFactor.set(0.9, 0.9);

		add(background);
		add(front);
		add(curt);

		var camFollow = new FlxObject(0, 0, 1, 1);

		dad = new Character(100, 100, 'dad');

		bf = new Boyfriend(770, 450, 'bf');

		gf = new Character(400, 130, 'gf');
		gf.scrollFactor.set(0.95, 0.95);

		var camPos:FlxPoint = new FlxPoint(dad.getGraphicMidpoint().x + 400, dad.getGraphicMidpoint().y);

		camFollow.setPosition(camPos.x, camPos.y);

		add(gf);
		add(bf);
		add(dad);

		add(camFollow);

		FlxG.camera.follow(camFollow, LOCKON, 0.01);
		// FlxG.camera.setScrollBounds(0, FlxG.width, 0, FlxG.height);
		FlxG.camera.zoom = 0.9;
		FlxG.camera.focusOn(camFollow.getPosition());

		strumLine = new FlxSprite(0, 50).makeGraphic(FlxG.width, 10);
		strumLine.scrollFactor.set();
		strumLine.alpha = 0.4;
		// add(strumLine);

		if (FlxG.save.data.downscroll)
			strumLine.y = FlxG.height - 165;

		laneunderlayOpponent = new FlxSprite(70, 0).makeGraphic(500, FlxG.height * 2, FlxColor.BLACK);
		laneunderlayOpponent.alpha = 1 - FlxG.save.data.laneTransparency;
		laneunderlayOpponent.scrollFactor.set();
		laneunderlayOpponent.screenCenter(Y);
		laneunderlayOpponent.cameras = [camHUD];

		laneunderlay = new FlxSprite(70 + (FlxG.width / 2), 0).makeGraphic(500, FlxG.height * 2, FlxColor.BLACK);
		laneunderlay.alpha = 1 - FlxG.save.data.laneTransparency;
		laneunderlay.scrollFactor.set();
		laneunderlay.screenCenter(Y);
		laneunderlay.cameras = [camHUD];

		if (FlxG.save.data.laneUnderlay)
		{
			add(laneunderlayOpponent);
			add(laneunderlay);
		}

		strumLineNotes = new FlxTypedGroup<FlxSprite>();
		add(strumLineNotes);

		playerStrums = new FlxTypedGroup<FlxSprite>();
		cpuStrums = new FlxTypedGroup<FlxSprite>();

		sick = new FlxSprite().loadGraphic(Paths.image('sick', 'shared'));
		sick.setGraphicSize(Std.int(sick.width * 0.7));
		sick.antialiasing = true;
		sick.scrollFactor.set();
		sick.updateHitbox();
		add(sick);

		if (!FlxG.save.data.changedHit)
		{
			FlxG.save.data.changedHitX = defaultX;
			FlxG.save.data.changedHitY = defaultY;
		}

		sick.x = FlxG.save.data.changedHitX;
		sick.y = FlxG.save.data.changedHitY;

		strumLine.cameras = [camHUD];
		strumLineNotes.cameras = [camHUD];
		sick.cameras = [camHUD];

		generateStaticArrows(0);
		generateStaticArrows(1);

		if (FlxG.save.data.middleScroll)
		{
			laneunderlayOpponent.alpha = 0;
			laneunderlay.screenCenter(X);
		}

		text = new FlxText(5, FlxG.height + 40, 0, LangUtil.getString('descCustomizeState'), 12);
		text.antialiasing = true;
		text.scrollFactor.set();
		text.setFormat(LangUtil.getFont(), 16, FlxColor.WHITE, LEFT, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);

		blackBorder = new FlxSprite(-30, FlxG.height + 40).makeGraphic((Std.int(text.width + 900)), Std.int(text.height + 600), FlxColor.BLACK);
		blackBorder.alpha = 0.5;

		blackBorder.cameras = [camHUD];
		text.cameras = [camHUD];

		text.scrollFactor.set();
		background.scrollFactor.set();

		add(blackBorder);

		add(text);

		FlxTween.tween(text, {y: FlxG.height - 18}, 2, {ease: FlxEase.elasticInOut});
		FlxTween.tween(blackBorder, {y: FlxG.height - 18}, 2, {ease: FlxEase.elasticInOut});

		FlxG.mouse.visible = true;
	}

	override function update(elapsed:Float)
	{
		if (FlxG.sound.music != null)
			Conductor.songPosition = FlxG.sound.music.time;

		super.update(elapsed);

		if (FlxG.save.data.zoom < 0.8)
			FlxG.save.data.zoom = 0.8;

		if (FlxG.save.data.zoom > 1.1)
			FlxG.save.data.zoom = 1.1;

		FlxG.camera.zoom = FlxMath.lerp(0.9, FlxG.camera.zoom, 0.95);
		camHUD.zoom = FlxMath.lerp(FlxG.save.data.zoom, camHUD.zoom, 0.95);

		if (FlxG.mouse.overlaps(sick) && FlxG.mouse.pressed)
		{
			sick.x = (FlxG.mouse.x - sick.width / 2) - 60;
			sick.y = (FlxG.mouse.y - sick.height) - 60;
		}

		for (i in playerStrums)
			i.y = strumLine.y;
		for (i in strumLineNotes)
			i.y = strumLine.y;

		if (FlxG.keys.justPressed.Q)
		{
			FlxG.save.data.zoom -= 0.02;
			camHUD.zoom = FlxG.save.data.zoom;
		}

		if (FlxG.keys.justPressed.E)
		{
			FlxG.save.data.zoom += 0.02;
			camHUD.zoom = FlxG.save.data.zoom;
		}

		if (FlxG.mouse.overlaps(sick) && FlxG.mouse.justReleased)
		{
			FlxG.save.data.changedHitX = sick.x;
			FlxG.save.data.changedHitY = sick.y;
			FlxG.save.data.changedHit = true;
		}

		if (FlxG.keys.justPressed.C)
		{
			var seperatedScore:Array<Int> = [];

			var comboSplit:Array<String> = (FlxG.random.int(10, 420) + "").split('');

			// make sure theres a 0 in front or it looks weird lol!
			if (comboSplit.length == 1)
			{
				seperatedScore.push(0);
				seperatedScore.push(0);
			}
			else if (comboSplit.length == 2)
				seperatedScore.push(0);

			for (i in 0...comboSplit.length)
			{
				var str:String = comboSplit[i];
				seperatedScore.push(Std.parseInt(str));
			}

			var daLoop:Int = 0;
			for (i in seperatedScore)
			{
				var numScore:FlxSprite = new FlxSprite().loadGraphic(Paths.image('num' + Std.int(i)));
				numScore.screenCenter();
				numScore.x = sick.x + (43 * daLoop) - 50;
				numScore.y = sick.y + 100;
				numScore.cameras = [camHUD];
				numScore.antialiasing = true;
				numScore.setGraphicSize(Std.int(numScore.width * 0.5));
				numScore.updateHitbox();

				numScore.acceleration.y = FlxG.random.int(200, 300);
				numScore.velocity.y -= FlxG.random.int(140, 160);
				numScore.velocity.x = FlxG.random.float(-5, 5);

				add(numScore);

				FlxTween.tween(numScore, {alpha: 0}, 0.2, {
					onComplete: function(tween:FlxTween)
					{
						numScore.destroy();
					},
					startDelay: Conductor.crochet * 0.002
				});

				daLoop++;
			}
		}

		if (FlxG.keys.justPressed.R)
		{
			sick.x = defaultX;
			sick.y = defaultY;
			FlxG.save.data.zoom = 1;
			camHUD.zoom = FlxG.save.data.zoom;
			FlxG.save.data.changedHitX = sick.x;
			FlxG.save.data.changedHitY = sick.y;
			FlxG.save.data.changedHit = false;
		}

		if (controls.BACK)
		{
			FlxG.mouse.visible = false;
			FlxG.sound.play(Paths.sound('cancelMenu'));
			FlxG.switchState(new OptionsMenu());
		}
	}

	override function beatHit()
	{
		super.beatHit();

		if (curBeat % 2 == 0)
		{
			bf.dance();
			dad.dance();
		}
		else if (dad.curCharacter == 'sayori')
			dad.dance();

		gf.dance();

		if (!FlxG.keys.pressed.SPACE)
		{
			FlxG.camera.zoom += 0.015;
			camHUD.zoom += 0.010;
		}
	}

	// ripped from play state cuz im lazy
	private function generateStaticArrows(player:Int):Void
	{
		for (i in 0...4)
		{
			// FlxG.log.add(i);
			var babyArrow:FlxSprite = new FlxSprite(0, strumLine.y);
			babyArrow.frames = Paths.getSparrowAtlas('NOTE_assets', 'shared');
			babyArrow.animation.addByPrefix('green', 'arrowUP');
			babyArrow.animation.addByPrefix('blue', 'arrowDOWN');
			babyArrow.animation.addByPrefix('purple', 'arrowLEFT');
			babyArrow.animation.addByPrefix('red', 'arrowRIGHT');
			babyArrow.antialiasing = true;
			babyArrow.setGraphicSize(Std.int(babyArrow.width * 0.7));
			switch (Math.abs(i))
			{
				case 0:
					babyArrow.x += Note.swagWidth * 0;
					babyArrow.animation.addByPrefix('static', 'arrowLEFT');
					babyArrow.animation.addByPrefix('pressed', 'left press', 24, false);
					babyArrow.animation.addByPrefix('confirm', 'left confirm', 24, false);
				case 1:
					babyArrow.x += Note.swagWidth * 1;
					babyArrow.animation.addByPrefix('static', 'arrowDOWN');
					babyArrow.animation.addByPrefix('pressed', 'down press', 24, false);
					babyArrow.animation.addByPrefix('confirm', 'down confirm', 24, false);
				case 2:
					babyArrow.x += Note.swagWidth * 2;
					babyArrow.animation.addByPrefix('static', 'arrowUP');
					babyArrow.animation.addByPrefix('pressed', 'up press', 24, false);
					babyArrow.animation.addByPrefix('confirm', 'up confirm', 24, false);
				case 3:
					babyArrow.x += Note.swagWidth * 3;
					babyArrow.animation.addByPrefix('static', 'arrowRIGHT');
					babyArrow.animation.addByPrefix('pressed', 'right press', 24, false);
					babyArrow.animation.addByPrefix('confirm', 'right confirm', 24, false);
			}

			babyArrow.updateHitbox();
			babyArrow.scrollFactor.set();

			babyArrow.ID = i;

			switch (player)
			{
				case 0:
					if (FlxG.save.data.middleScroll)
						babyArrow.visible = false;
					cpuStrums.add(babyArrow);
				case 1:
					playerStrums.add(babyArrow);
			}

			babyArrow.animation.play('static');
			babyArrow.x += 98;
			babyArrow.x += ((FlxG.width / 2) * player);

			if (FlxG.save.data.middleScroll)
				babyArrow.x -= 320;

			cpuStrums.forEach(function(spr:FlxSprite)
			{
				spr.centerOffsets(); // CPU arrows start out slightly off-center
			});

			strumLineNotes.add(babyArrow);
		}
	}
}
