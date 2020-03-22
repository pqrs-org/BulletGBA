CXXFLAGS += -Wall -I. -Itest -Isrc -O3 -fomit-frame-pointer -ffast-math -fno-exceptions -DFIXEDNUM_TEST

OBJS = src/fixed.o src/fixed_table.o src/mt19937ar.o test/test.o 

all: $(OBJS)
	gcc -o fixed-test $(OBJS) -lm

run:
	./fixed-test

clean:
	rm -f src/*.o test/*.o fixed-test
