cnt = 0
left = 1

function top()
	local turn = getTurn()
	if (turn > 600) then
		quit()
	elseif (turn > 520) then
		return
	end
	local rank = getRank()
	cnt = cnt + 1
	if (cnt > 30-rank*15) then
		cnt = 0
		left = left * -1
		num = rank * 10 + 7
		d = getPlayerAngle() + math.pi * (1 - 0.5 / num) * left
		for i=0,num do
			d = d + math.pi / num * 0.9 * left
			fire(1.3*math.sin(d), -1.3*math.cos(d), "blue")
		end
	end
end

function blue()
	if (getTurn() == 30) then
		local dir = math.pi * 0.8
		local x = getSpeedX() * math.cos(dir) + getSpeedY() * math.sin(dir)
		local y = -getSpeedX() * math.sin(dir) + getSpeedY() * math.cos(dir)
		fire(x, y)
	end
	if (getY() < 8) then
		fire(0, 1.3)
		vanish()
	elseif ((getX() < 8 or getX() > getMaxX() - 8) and
			getY() < getMaxY() * 0.333) then
		local dir = getPlayerAngle()
		fire(1.3*math.sin(dir), -1.3*math.cos(dir), "needle")
		vanish()
	end
end

function needle()
	fire(getSpeedX(), getSpeedY())
	vanish()
end


