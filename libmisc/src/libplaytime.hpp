#ifndef LIBPLAYTIME_HPP
#define LIBPLAYTIME_HPP

class PlayTime {
public:
  PlayTime(void) { initialize(); }
  PlayTime(int intVal) { initialize(intVal); }

  void initialize(void) {
    min = 0;
    sec = 0;
    frame = 0;
  }

  void initialize(int intVal) {
    frame = intVal & 0xff;
    intVal >>= 8;
    sec = intVal & 0xff;
    intVal >>= 8;
    min = intVal & 0xff;
  }

  int toInt(void) const {
    return (min << 16) | (sec << 8) | frame;
  }

  void succFrame(void) {
    ++frame;
    if (frame == 60) {
      frame = 0;
      ++sec;
      if (sec == 60) {
        sec = 0;
        ++min;
      }
    }
  }

  int getMin(void) const {return min;}
  int getSec(void) const {return sec;}
  int getMilliSec(void) const {
    return Div(frame * (1000 / 60), 10);
  }

  int getTotalFrame(void) const {
    return frame + sec * 60 + min * 60 * 60;
  }

private:
  char min;
  char sec;
  char frame; // 1/60
};

#endif
