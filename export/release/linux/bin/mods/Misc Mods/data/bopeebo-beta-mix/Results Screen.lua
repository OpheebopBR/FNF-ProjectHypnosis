local allowCountdown = false

function onEndSong()
    if not allowCountdown then
        runTimer('endText', 0.1);
		allowCountdown = true;
		startCountdown()
        return Function_Stop;
    end
    return Function_Continue;
end

function onTimerCompleted(tag, loops, loopsLeft)
	if tag == 'endText' then
        noteTweenAlpha('1', 1, 0, 1, 'linear')
        noteTweenAlpha('2', 2, 0, 1, 'linear')
        noteTweenAlpha('3', 3, 0, 1, 'linear')
        noteTweenAlpha('4', 4, 0, 1, 'linear')
        noteTweenAlpha('5', 5, 0, 1, 'linear')
        noteTweenAlpha('6', 6, 0, 1, 'linear')
        noteTweenAlpha('7', 7, 0, 1, 'linear')
        noteTweenAlpha('0', 0, 0, 1, 'linear')
        doTweenAlpha('GUItween', 'camHUD', 0, 1, 'linear');
        --Separation To Keep My Brain From Exploding
        makeLuaSprite('fade', 'blackscreen', 0, 0)
		setObjectCamera('fade', 'other')
		addLuaSprite('fade', true)
        doTweenAlpha('firstTween', 'fade', 0.5, 0.1, 'linear')
		makeLuaSprite('circle2', 'CircleUp', 777, 0)
		setObjectCamera('circle2', 'other')
		addLuaSprite('circle2', true)
		makeLuaSprite('text2', 'TextAct1Up', -1200, 0)
		setObjectCamera('text2', 'other')
		addLuaSprite('text2', true)
        makeLuaSprite('resultText', 'Results', 0, 1200)
        setObjectCamera('resultText', 'other')
        addLuaSprite('resultText', true)
        makeLuaText('miss', getProperty('songMisses'), 200, 8000, 600)
        setObjectCamera('miss', 'other')
        setTextSize('miss', 70)
        addLuaText('miss', true)
        makeLuaText('hits', getProperty('songHits'), 200, 8000, 450)
        setObjectCamera('hits', 'other')
        setTextSize('hits', 70)
        addLuaText('hits', true)
        makeLuaText('score', getProperty('songScore'), 500, 8000, 300)
        setObjectCamera('score', 'other')
        setTextSize('score', 70)
        addLuaText('score', true)
		runTimer('end', 8)
        playMusic('ActClear', 1, false)
		doTweenX('circletween2', 'circle2', 0, 1.5, 'elasticInOut')
		doTweenX('texttween2', 'text2', 0, 1.5, 'elasticInOut')
        doTweenY('resultsTween', 'resultText', 0, 1.5, 'elasticInOut')
        function onTweenCompleted(tag)
            if tag == 'resultsTween' then
                doTweenX('missTween', 'miss', 760, 1.5, 'elasticInOut')
                doTweenX('hitsTween', 'hits', 777, 1.5, 'elasticInOut')
                doTweenX('scoreTween', 'score', 677, 1.5, 'elasticInOut')
            end
        end
    end
    if tag == 'end' then
        endSong()
    end
end