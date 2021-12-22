function onCreate()
	-- background
	makeLuaSprite('sky', 'tankSky', -335, -330);
	setScrollFactor('sky', 0.1, 0.1);
	scaleObject('sky', 1.2, 1.2);

	makeLuaSprite('clouds', 'tankClouds', 0, 25);
	setScrollFactor('clouds', 0.1, 0.1);

	makeLuaSprite('mountains', 'tankMountains', -288, -10);
	setScrollFactor('mountains', 0.2, 0.2);
	scaleObject('mountains', 1.2, 1.2);

	if not lowQuality then
		makeLuaSprite('buildings', 'tankBuildings', -185, 50);
		setScrollFactor('buildings', 0.35, 0.35);

		makeLuaSprite('ruins', 'tankRuins', -185, 50);
		setScrollFactor('ruins', 0.4, 0.4);
	end

	if not lowQuality then
		makeAnimatedLuaSprite('smokeLeft', 'smokeLeft', -190, -100);
		addAnimationByPrefix('smokeLeft', 'idle', 'SmokeBlurLeft');
		setScrollFactor('smokeLeft', 0.4, 0.4);

		makeAnimatedLuaSprite('smokeRight', 'smokeRight', 1000, -100);
		addAnimationByPrefix('smokeRight', 'idle', 'SmokeRight');
		setScrollFactor('smokeRight', 0.4, 0.4);
	end

	makeAnimatedLuaSprite('watchtower', 'tankWatchtower', 135, 75);
	addAnimationByPrefix('watchtower', 'idle', 'watchtower');
	setScrollFactor('watchtower', 0.5, 0.5);

	makeLuaSprite('ground', 'tankGround', -400, -150);
	scaleObject('ground', 1.2, 1.2);

	-- soldiers (named by 'sold')
	if not lowQuality then
		makeAnimatedLuaSprite('sold0', 'tank0', -400, 780);
		addAnimationByPrefix('sold0', 'idle', 'tankhead');
		setScrollFactor('sold0', 1.85, 1.85);

		makeAnimatedLuaSprite('sold1', 'tank1', -50, 1147);
		addAnimationByPrefix('sold1', 'idle', 'tankhead');
		setScrollFactor('sold1', 1.85, 1.85);

		makeAnimatedLuaSprite('sold2', 'tank2', 560, 1015);
		addAnimationByPrefix('sold2', 'idle', 'tankhead');
		setScrollFactor('sold2', 1.5, 1.5);

		makeAnimatedLuaSprite('sold3', 'tank3', 993, 1165);
		addAnimationByPrefix('sold3', 'idle', 'tankhead');
		setScrollFactor('sold3', 1.85, 1.85);

		makeAnimatedLuaSprite('sold4', 'tank4', 1560, 1065);
		addAnimationByPrefix('sold4', 'idle', 'tankhead');
		setScrollFactor('sold4', 1.85, 1.85);

		makeAnimatedLuaSprite('sold5', 'tank5', 1880, 865);
		addAnimationByPrefix('sold5', 'idle', 'tankhead');
		setScrollFactor('sold5', 1.85, 1.85);
	end

	addLuaSprite('sky', false);
	addLuaSprite('clouds', false);
	addLuaSprite('mountains', false);
	if not lowQuality then
		addLuaSprite('buildings', false);
		addLuaSprite('ruins', false);
		addLuaSprite('smokeLeft', false);
		addLuaSprite('smokeRight', false);
	end
	addLuaSprite('watchtower', false);
	addLuaSprite('ground', false);
	if not lowQuality then
		addLuaSprite('sold0', true);
		addLuaSprite('sold1', true);
		addLuaSprite('sold2', true);
		addLuaSprite('sold3', true);
		addLuaSprite('sold4', true);
		addLuaSprite('sold5', true);
	end

	local cloudsMoveTime = 500000;
	doTweenX('cloudsMove', 'clouds', cloudsMoveTime, cloudsMoveTime / 10, 'linear');
	
	close(true);
end