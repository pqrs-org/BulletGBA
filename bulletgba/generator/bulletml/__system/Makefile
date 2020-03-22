# -*- Mode: Makefile; -*-

BNMLFILES=$(wildcard *.bnml)
XMLFILES=$(BNMLFILES:.bnml=.xml)

all: $(XMLFILES)
	$(MAKE) -C ../../ copy-systembullet all

compile: $(XMLFILES)

clean:
	-rm -f *.xml

%.xml: %.bnml
	~/gba/tools/testbul.sh $< batch
