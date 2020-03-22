all:
	./convall.php data/xml
	./make-list.php > data/code/list.hpp
	./make-callingvector.php > data/code/callingvector.cpp
	./make-barragelist.php > data/code/barragelist.hpp

copy: copy-systembullet
	./copyXML.php ../sdmkun/bosses.d
	./copyXML.php bulletml/bulletgba
	./copyBML.php ../sdmkun/user

	rm data/xml/bulletsmorph/kunekune_plus_homing.xml # too large loop
	rm data/xml/chaosseed/big_monkey_boss.xml # endless
	rm data/xml/kotuanzenx/bb03-winderjiki.xml # too large object filesize
	rm data/xml/aaaaagokumaru/random.xml # impossible to escape

copy-systembullet:
	$(MAKE) -C bulletml/__system compile
	./copyXML.php bulletml/__system

clean:
	rm -rf tmp
	rm -rf data
	$(MAKE) -C bulletml/__system clean
