#ifndef MENU_LIST_HPP
#define MENU_LIST_HPP

class MenuList {
public:
  enum {
    PAGEITEM = 10,
  };

  struct Line {
    FontHandler::StringInfo si;
    bool initializedFlag;
  };

  bool doLoop(void);
  int getSelectedIndex(void) const {
    return page * PAGEITEM + index;
  }

  void initialize(const char *_title, const char * const *_list);
  void resetPos(void) {
    page = 0;
    index = 0;
  }

  // ----------------------------------------
  // for Select Barrage Mode
  bool succ(void);

private:
  void drawAllText(void);
  void setupFont(void);
  int getLastPage(void) const;
  int getLastItemInPage(void) const;

  const char *title;
  const char * const *list;
  int listSize;

  int page;
  int index;

  FontHandler::StringInfo si_title;
  FontHandler::StringInfo si_page;
  Line line[PAGEITEM];
};


#endif
