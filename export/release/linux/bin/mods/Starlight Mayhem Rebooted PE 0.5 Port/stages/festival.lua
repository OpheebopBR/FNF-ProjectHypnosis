function onCreate()
	-- setting the sprites up
	makeLuaSprite('morning', 'morning', -580, -360);
	makeLuaSprite('stage', 'stage', -610, -360);
	makeLuaSprite('logo1', 'logo1', -620, -362);

	-- animated sprites :cry:
	makeAnimatedLuaSprite('headlights', 'headlights', -580, -360); --need to set up
	makeAnimatedLuaSprite('headlightsRGB','headlightsRGB',x,y); --for the night stage
	makeAnimatedLuaSprite('frontboppers','frontboppers',-550,900);
	makeAnimatedLuaSprite('RGBfrontboppers','RGBfrontboppers',x,y); --for the night stage

	-- setting scroll factors for the camera to not have a stroke
	setScrollFactor('morning', 0.5, 0.5);
	setScrollFactor('stage', 0.9, 0.9);
	setScrollFactor('frontboppers', 0.9, 0.9);
	setScrollFactor('RGBfrontboppers', 0.5, 0.5);
	setScrollFactor('headlights', 0.5, 0.5);
	setScrollFactor('headlightsRGB', 0.9, 0.9);

	-- setting scales for specific objects
	scaleObject('stage', 1.1, 1.1);
	scaleObject('logo1', 1.1, 1.1);
	scaleObject('frontboppers', 1.1, 1.1);

	-- adding them.
	addLuaSprite('morning', false);
	addLuaSprite('stage', false);
	addLuaSprite('logo1', false);
	addLuaSprite('frontboppers', false);
	addLuaSprite('headlights', false);
	
	close(true); --For performance reasons, close this script once the stage is fully loaded, as this script won't be used anymore after loading the stage
end