#ifndef MENU_CREDITS_HPP
#define MENU_CREDITS_HPP

#include "main.hpp"
#include "fonthandler.hpp"

class MenuCredits {
public:
  void doLoop(void);

private:
  void drawAllText(void);
  void setupFont(void);

  FontHandler::StringInfo si_credits;
  FontHandler::StringInfo si_design;
  FontHandler::StringInfo si_designStaffName;
  FontHandler::StringInfo si_designStaffURL;
  FontHandler::StringInfo si_music;
  FontHandler::StringInfo si_musicStaffName;
  FontHandler::StringInfo si_musicStaffURL;

  FontHandler::StringInfo si_howtoResetSRAM1;
  FontHandler::StringInfo si_howtoResetSRAM2;
  FontHandler::StringInfo si_sramResetDone;

  bool isSRAMResetDone;
};

#endif
