ws = 1.5
wd = math.pi*4/6
fp = math.random(-25,25)
sp = math.random(-1,1)
bs = 0
dk = 0
frame = 0

function wall1()
	local rank = getRank()
	local turn = getTurn()
	for c=1,25 do
		if (turn == frame * c) then
			fire( -ws*math.cos(wd) , ws*math.sin(wd))
		end
	end
end

function wall2()
	local rank = getRank()
	local turn = getTurn()
	for c=1,25 do
		if (turn == frame * c) then
			fire(  ws*math.cos(wd) , ws*math.sin(wd))
		end
	end
end

function null1()
	local rank = getRank()
	local turn = getTurn()
	for c=1,25 do
		if (turn == frame * c) then
			fire( -ws*math.cos(wd) , ws*math.sin(wd) , "null2")
		end
	end
end

function null2()
	vanish()
end

function top()
	local turn = getTurn()
	local rank = getRank()
	if(rank<=0.2) then
		frame = 8
	elseif(rank<=0.4) then
		frame = 7
	elseif(rank<=0.6) then
		frame = 6
	elseif(rank<=0.8) then
		frame = 5
	elseif(rank<=1) then
		frame = 4
	end
	dk = 20 + rank^0.3 * 10
	if (turn == 0) then
		setPos(fp+getMaxX()/2, 5)
	elseif (turn > 960) then
		quit()
	elseif (turn > 870) then
	elseif (turn > 800) then
		setSpeed(0,0)
		fire( 6*math.cos(wd) , 6*math.sin(wd) , "wall1")
		fire(-6*math.cos(wd) , 6*math.sin(wd) , "wall2")
		cnt = 0
	elseif (turn > 450) then
		setSpeed(-sp/10,0)
		wd = wd - math.pi*dk/350/360
		fire( 6*math.cos(wd) , 6*math.sin(wd) , "wall1")
		fire(-6*math.cos(wd) , 6*math.sin(wd) , "wall2")
		cnt = 0
	elseif (turn > 300) then
		fire( 6*math.cos(wd) , 6*math.sin(wd) , "wall1")
		fire(-6*math.cos(wd) , 6*math.sin(wd) , "wall2")
		cnt = 0
	elseif (turn > 150) then
		ws = ws + 0.02
		fire( 6*math.cos(wd) , 6*math.sin(wd) , "wall1")
		fire(-6*math.cos(wd) , 6*math.sin(wd) , "wall2")
		cnt = 0
	elseif (turn > 30) then
		fire( 6*math.cos(wd) , 6*math.sin(wd) , "wall1")
		fire(-6*math.cos(wd) , 6*math.sin(wd) , "wall2")
		cnt = 0
	elseif (turn > 15)then
		fire( 6*math.cos(wd) , 6*math.sin(wd) , "null1")
		fire(-6*math.cos(wd) , 6*math.sin(wd) , "null1")
		cnt = 0
	end
end