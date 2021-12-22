function onCreate()
	
	makeAnimatedLuaSprite('bg','boxwall',0,400)
	addAnimationByPrefix('bg','wallbop','wallboom instance',24,true)
	addLuaSprite('bg',false)
	objectPlayAnimation('bg','wallbop',true)

	makeAnimatedLuaSprite('flooring','boxfloor',0,400)
	addAnimationByPrefix('flooring','bop','bg instance',24,true)
	addLuaSprite('flooring',false)
	objectPlayAnimation('flooring','bop',true)
	
	close(true)
end