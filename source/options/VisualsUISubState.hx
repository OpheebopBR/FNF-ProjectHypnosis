package options;

#if desktop
import Discord.DiscordClient;
#end
import flash.text.TextField;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.addons.display.FlxGridOverlay;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.math.FlxMath;
import flixel.text.FlxText;
import flixel.util.FlxColor;
import lime.utils.Assets;
import flixel.FlxSubState;
import flash.text.TextField;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.util.FlxSave;
import haxe.Json;
import flixel.tweens.FlxEase;
import flixel.tweens.FlxTween;
import flixel.util.FlxTimer;
import flixel.input.keyboard.FlxKey;
import flixel.graphics.FlxGraphic;
import Controls;

using StringTools;

class VisualsUISubState extends BaseOptionsMenu
{
	public function new()
	{
		title = 'Visuals and UI';
		rpcTitle = 'Visuals & UI Settings Menu'; //for Discord Rich Presence

			var option:Option = new Option('Camera Zooms',
			"If unchecked, the camera won't zoom in on a beat hit.",
			'camZooms',
			'bool',
			true);
		addOption(option);

			var option:Option = new Option('Flashing Lights',
			"Uncheck this if you're sensitive to flashing lights!",
			'flashing',
			'bool',
			true);
		addOption(option);
	
			#if !mobile
			var option:Option = new Option('FPS Counter',
			'If unchecked, hides FPS Counter.',
			'showFPS',
			'bool',
			true);
		addOption(option);
		option.onChange = onChangeFPSCounter;

			var option:Option = new Option('Hide HUD',
			'If checked, hides most HUD elements.',
			'hideHud',
			'bool',
			false);
		addOption(option);

			var option:Option = new Option('Letter Grades',
			"If checked, Ratings will follow a more Competitive System, \nbased on many rythm games that use this same grading system",
			'osuRatings',
			'bool',
			false);
		addOption(option);

			var option:Option = new Option('Note Splashes',
			"If unchecked, hitting \"Sick!\" notes won't show particles.",
			'noteSplashes',
			'bool',
			true);
		addOption(option);

			var option:Option = new Option('Score Text Zoom on Hit',
			"If unchecked, disables the Score text zooming\neverytime you hit a note.",
			'scoreZoom',
			'bool',
			true);
		addOption(option);

			var option:Option = new Option('Separate Accuracy from Rating',
			'If checked, the game will \nShow Accuracy Percentage and Ratings in separate boxes on the Info Bar',
			'foreverInfo',
			'bool',
			false);
		addOption(option); //yes this one is based on Forever Engine's info bar


			var option:Option = new Option('Health Bar Transparency',
			'How much transparent should the health bar and icons be.',
			'healthBarAlpha',
			'percent',
			1);
			option.scrollSpeed = 1.6;
			option.minValue = 0.0;
			option.maxValue = 1;
			option.changeValue = 0.1;
			option.decimals = 1;
		addOption(option);

			var option:Option = new Option('Text Borders:',
			"What should the Info Bar and Botplay Text Border look like?",
			'infoTextBorder',
			'string',
			'Outline',
			['Outline', 'Shadow', 'Outline Fast', 'None']);
		addOption(option); //used the same code that was used on Time Bar bcs idk how to make unique code lol
		
		var option:Option = new Option('Lane Transparency',
		"Change your lane underlay's transparency here",
		'underlay',
		'float',
		true);
		option.displayFormat = '%v';
		option.scrollSpeed = 100;
		option.changeValue = 0.1;
		option.decimals = 1;
		option.minValue = 0;
		option.maxValue = 1;
	addOption(option);
		
		var option:Option = new Option('Time Bar:',
		"What should the Time Bar display?",
		'timeBarType',
		'string',
		'Time Left',
		['Time Left', 'Time Elapsed', 'Song Name', 'Disabled']);
	addOption(option);

		var option:Option = new Option('UI Skin:',
		"What should your Judgements look like?",
		'uiSkin',
		'string',
		'Default',
		['Default', 'Forever', 'Kade', 'Simplylove']);
	addOption(option);

		#end

		super();
	}

	#if !mobile
	function onChangeFPSCounter()
	{
		if(Main.fpsVar != null)
			Main.fpsVar.visible = ClientPrefs.showFPS;
	}
	#end
}