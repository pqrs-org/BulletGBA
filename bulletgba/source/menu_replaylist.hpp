#ifndef MENU_REPLAYLIST_HPP
#define MENU_REPLAYLIST_HPP

#include "main.hpp"
#include "libsram_fs.hpp"
#include "replay.hpp"
#include <string.h>
#include "libplaytime.hpp"
#include "fonthandler.hpp"

class MenuReplayList {
public:
  enum {
    MAX_LEVEL = 4,
    MAX_REPLAY_NUM = MAX_LEVEL * 2, /* BestPlay, BestScore DemoPlay x 4 */
  };

  struct Line {
    Replay::Header replayHeader;
    bool isDemoPlay;
  };

  bool doLoop(void);
  const Line *getSelectedLine(void) const { return line + selectedIndex; }

  void resetPos(void) {
    selectedIndex = 0;
    isDemoPlay = false;
  }

private:
  void drawAllText(void);
  void setupFont(void);
  void initialize();
  void pushToList(Replay::ReplayType type, bool isDemoPlay);

  void setPosTop(void);
  void setPosBottom(void);
  bool isPosValid(void);

  Line line[MAX_REPLAY_NUM];
  int lineSize;
  int selectedIndex;
  bool isDemoPlay;

  FontHandler::StringInfo si_selectReplay;
  FontHandler::StringInfo si_lineTitle[MAX_LEVEL];
  FontHandler::StringInfo si_lineInfo1[MAX_LEVEL];
  FontHandler::StringInfo si_lineInfo2[MAX_LEVEL];
};

#endif
