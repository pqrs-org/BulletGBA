#include "modemanager_normal.hpp"
#include "list.hpp"

EWRAM_DATA MenuList ModeManager_Normal::menuSelectBarrageGroup;
EWRAM_DATA MenuList ModeManager_Normal::menuSelectBarrageList;

void
ModeManager_Normal::initialize(void)
{
  menuSelectBarrageGroup.initialize("[ Select Group ]", listBulletGroups);
}

void
ModeManager_Normal::setBulletMenu(void)
{
  const char * const *list = listBulletGroupsNames[menuSelectBarrageGroup.getSelectedIndex()];
  menuSelectBarrageList.initialize("[ Select Barrage ]", list);
}

void
ModeManager_Normal::doLoop(void)
{
  for (;;) {
    if (! menuSelectBarrageGroup.doLoop()) {
      break;
    }

    setBulletMenu();
    for (;;) {
      if (! menuSelectBarrageList.doLoop()) {
        break;
      }
      GameEngine::doLoop<false, initializeFunc, nextBulletFunc, extraFunc>();
    }
  }
}

BulletGenerateFunc
ModeManager_Normal::getCurrentBullet(void)
{
  return listBulletGroupsFuncs[menuSelectBarrageGroup.getSelectedIndex()][menuSelectBarrageList.getSelectedIndex()];
}

BulletGenerateFunc
ModeManager_Normal::getNextBullet(void)
{
  if (! menuSelectBarrageList.succ()) {
    if (! menuSelectBarrageGroup.succ()) {
      menuSelectBarrageGroup.resetPos();
    }
    setBulletMenu();
  }
  return getCurrentBullet();
}
