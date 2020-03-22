#ifndef MENU_TITLE_HPP
#define MENU_TITLE_HPP

#include "main.hpp"
#include "fonthandler.hpp"

class MenuTitle {
public:
  enum GameMode {
    GAMEMODE_SELECT_BARRAGE = 0,
    GAMEMODE_SHOOTING_LEVEL1,
    GAMEMODE_SHOOTING_LEVEL2,
    GAMEMODE_SHOOTING_LEVEL3,
    GAMEMODE_SHOOTING_LEVEL4,
    GAMEMODE_BULLETSMORPH,
    GAMEMODE_VIEW_REPLAY,
    GAMEMODE_CREDITS,
    END_OF_GAMEMODE,
  };

  void doLoop(void);
  GameMode getGameMode(void) const {
    return static_cast<GameMode>(selectedIndex);
  }
  void resetPos(void) {
    selectedIndex = 0;
  }

  bool isGameMode_shooting(void) const;
  int getGameLevel(void) const;

private:
  void drawAllText(void);
  void setupFont(void);

  int selectedIndex;

  FontHandler::StringInfo si_selectMode;
  FontHandler::StringInfo si_selectBarrage;
  FontHandler::StringInfo si_shooting_L1;
  FontHandler::StringInfo si_shooting_L2;
  FontHandler::StringInfo si_shooting_L3;
  FontHandler::StringInfo si_shooting_L4;
  FontHandler::StringInfo si_bulletsMorph;
  FontHandler::StringInfo si_viewReplay;
  FontHandler::StringInfo si_credits;
};

#endif
