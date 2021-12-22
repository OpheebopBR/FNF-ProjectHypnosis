function onCreate()

	makeLuaSprite('Arena', 'arena-bg', 0, 500)
	addLuaSprite('Arena', false)

	makeAnimatedLuaSprite('people', 'arena-characters', 0, 864)
	addAnimationByPrefix('people', 'bounce', 'bg-characters', 24, true)
	addLuaSprite('people', false)
	objectPlayAnimation('people', 'bounce', true)

	makeLuaSprite('railingpeople', 'railing', 0, 1020)
	addLuaSprite('railingpeople', false)

	close(true)

end