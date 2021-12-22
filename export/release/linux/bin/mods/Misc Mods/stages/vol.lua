function onCreate()

	makeAnimatedLuaSprite('vol','volcano',0,500)
	addAnimationByPrefix('vol','volswim','BUBBLE',24,true)
	addLuaSprite('vol',false)
	objectPlayAnimation('vol','volswim',true)

	close(true)

end