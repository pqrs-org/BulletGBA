CXXFLAGS += -Wall -I. -Itest -Isrc -O3 -fomit-frame-pointer -ffast-math -fno-exceptions -DFIXEDNUM_TEST

OBJS = test/test.o 

all: $(OBJS)
	gcc -o libstack-test $(OBJS) 

clean:
	rm -f src/*.o test/*.o libstack-test
