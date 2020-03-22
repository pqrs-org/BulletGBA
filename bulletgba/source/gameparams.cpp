#include "gameparams.hpp"

BossCore<GameParams::BOSS_CORE_POSX, GameParams::BOSS_CORE_POSY, ImageHandler::BGMAP_INDEX_GAME_BOSS> GameParams::bossCore;
BossBody<ImageHandler::BGMAP_INDEX_GAME_BOSS> GameParams::bossBody;
LifeFrame GameParams::lifeFrame;
