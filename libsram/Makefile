CXXFLAGS += -Wall -I. -Itest -Isrc -I../libstack/src -I$(DEVKITPRO)/libgba/include -I.. -O3 -fomit-frame-pointer -ffast-math -fno-exceptions -DSRAM_TEST -Wall

OBJS = src/libsram_ptr.o src/libsram_fs.o test/test.o

all: $(OBJS)
	gcc -o libsram-test $(OBJS) -lm

clean:
	rm -f src/*.o test/*.o libsram-test *.sav *.raw
