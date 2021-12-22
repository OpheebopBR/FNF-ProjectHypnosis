function onCreate()
	-- background shit
	makeLuaSprite('wrath1', 'wrath1', -600, -600);
	setScrollFactor('wrath1', 0.9, 0.9);
	
	makeLuaSprite('wrathground', 'wrathground', -650, 600);
	setScrollFactor('wrathground', 0.9, 0.9);
	scaleObject('wrathground', 1.1, 1.1);

	addLuaSprite('wrath1', false);
	addLuaSprite('wrathground', false);
	
	close(true); --For performance reasons, close this script once the stage is fully loaded, as this script won't be used anymore after loading the stage
end