dir = 0
cnt = 0

function reflect()
	local x = getX()
	if (x < 10 or x > getMaxX() - 10) then
		fire(-getSpeedX(), getSpeedY())
		vanish()
	end
end

function top()
	local turn = getTurn()
	local rank = getRank()
	if (turn == 0) then
		setSpeed(0, 4)
	elseif (turn == 10) then
		setSpeed(0, 0)
	elseif (turn > 700) then
		quit()
	elseif (turn > 630) then
	elseif (turn > 10 and cnt > 14-rank*8) then
		for d=0,3 do
			local dt = dir + d * math.pi * 0.5
			fire(math.cos(dt+0.15), math.sin(dt+0.15), "reflect")
			fire(math.cos(dt-0.15), math.sin(dt-0.15), "reflect")
		end
		dir = 0.04 + dir
		cnt = 0
	end
	cnt = cnt + 1
end
