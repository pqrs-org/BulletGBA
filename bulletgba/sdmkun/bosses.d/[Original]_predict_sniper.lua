function bomb()
	local turn = getTurn()
	if (turn > 30) then
		for i = 1,30 do
			fire(getSpeedX()*(math.random()+0.8), getSpeedY()*(math.random()+0.8))
		end
		vanish()
	end
end

function top()
	local rank = getRank()
	local turn = getTurn()
	if (math.random(5-rank*2) < 2) then
		dir = getPlayerAngle() + math.random() * math.pi / 6 - math.pi / 12
		fire(math.sin(dir), -math.cos(dir))
	end
	if (math.random(40-rank*20) < 2) then
		dir = getPlayerAngle() - getPlayerSpeedX() * 0.15
		fire((2+2*rank)*math.sin(dir), -(2+2*rank)*math.cos(dir), "bomb")
	end
	if (turn > 500) then
		quit()
	end
end
