cnt = 0
gtime = 0

function tora2()
	local rank=getRank()
	local x=getSpeedX()
	local y=getSpeedY()
	if( x*x+y*y > 1+rank*0.5)then
		quit()
	elseif (gtime > 10-rank*7) then
		local sx=getSpeedX()*1.2
		local sy=getSpeedY()*1.2
		setSpeed(sx,sy)
		count = 0
	end
	
end

function tora1()
	local bx = math.random() * getMaxX()
	local by = math.random() * getMaxY()
	local px = getPlayerX()
	local py = getPlayerY()
	if( bx*bx-2*bx*px+px*px+by*by-2*by*py+py*py > 3600 ) then
		setPos(bx,by)
		dir = getPlayerAngle()
		fire(0.1*math.sin(dir) , 0.1*-math.cos(dir) , "tora2")
		vanish()
	end
end


function top()
	local turn = getTurn()
	local rank = getRank()
	if (turn == 0) then
		setPos(getMaxX()/2, 5)
	elseif (turn > 1800) then
		quit()
	elseif (turn > 1620) then
	elseif (turn > 60 and cnt > 10-rank*7) then
		fire(0 , 0 , "tora1")
		cnt = 0
		if(rank == 1) then
			fire(0 , 0 , "tora1")
		end
	end
	if (gtime > 10-rank*6) then
		gtime = 0
	end
	cnt = cnt + 1
	gtime = gtime + 1
end