dir = 0
cnt = 0
time = 0

function reflect()
	local turn= getTurn()
	if(turn > 10) then
		local x = getX()
		if (x < 10   or   x > getMaxX() - 10) then
			fire(-getSpeedX() ,  getSpeedY() , "reflect")
			quit()
		end
		local y = getY()
		if (y < 10   or   y > getMaxY() - 10) then
			fire( getSpeedX() , -getSpeedY() , "reflect")
			quit()
		end
	end
	if (time ~= 0) then
			quit()
	end
end

function top()
	local turn = getTurn()
	local rank = getRank()
	if (turn > 10   and   cnt > 30-rank*15) then
		dir = 2 * math.pi * math.random()
		fire((1+rank)*math.cos(dir) , (1+rank)*math.sin(dir) , "reflect")
		cnt = 0
	end
	if (turn>1799) then
		time = 1
	end
	if (turn>1800) then
		time = 0
		quit()
	end
	cnt = cnt + 1
end