id = 0
table = {}
xfact = 0
yfact = 0

function curve(id)
	local turn = getTurn()
	local ratio = getRank() * 0.03 + 0.03
	x = table[id][0]
	y = table[id][1]
	setPos(150+150*math.cos(turn*ratio)^x, 100+turn+100*math.sin(turn*ratio)^y)

	if (getX() < 15) then
		fire(getX()*0.04, 2)
	elseif (getX() > getMaxX() - 15) then
		fire((getX()-getMaxX())*0.04, 2)
	end
end

function top()
	local turn = getTurn()
	if (turn > 400) then
		quit()
	elseif (turn > 250) then
		return
	end
	if (math.mod(turn, 60) == 0) then
		xfact = math.random(3)
		yfact = math.random(3)
		id = id + 1
	end
	if (math.mod(turn, 60) < 10) then
		table[id] = {}
		table[id][0] = xfact
		table[id][1] = yfact
		fire(0, 0, "curve", id)
	end
end
