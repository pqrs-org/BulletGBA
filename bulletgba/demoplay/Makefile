all:
	cp bulletgba.sav demoplaysavedata.sav
	$(DEVKITARM)/bin/raw2c demoplaysavedata.sav
	mv demoplaysavedata.[ch] code

clean:
	rm -f code/*.[ch]
