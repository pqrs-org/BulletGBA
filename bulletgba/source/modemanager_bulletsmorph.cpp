#include "modemanager_bulletsmorph.hpp"

int ModeManager_BulletsMorph::frameCounter;

void
ModeManager_BulletsMorph::doLoop(void)
{
  GameEngine::doLoop<false, initializeFunc, nextBulletFunc, extraFunc>();
}
