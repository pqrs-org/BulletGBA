CXXFLAGS += -I. -I../src -O3 -fomit-frame-pointer -ffast-math -fno-exceptions

all: make-table.o
	gcc -o make-table make-table.o -lm
	./make-table > ../src/fixed_table.cpp

clean:
	rm -f *.o
