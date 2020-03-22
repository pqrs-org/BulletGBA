CXXFLAGS += -Wall -I. -Itest -Isrc -O3 -fomit-frame-pointer -ffast-math -fno-exceptions

OBJS = test/test.o

all: $(OBJS)
	gcc -o libmisc-test $(OBJS)

clean:
	rm -f src/*.o test/*.o libmisc-test
