#ifndef BLITZ_GAMEBULLETBOMBCHASEMISSIONBASE_H
#define BLITZ_GAMEBULLETBOMBCHASEMISSIONBASE_H

#include "GameBulletBombChase.h"

namespace Game {

class BulletBombChaseMissionBase{
public:
    BulletBombChaseMissionBase();
    ~BulletBombChaseMissionBase();
    void initializeReceiver(Cmn::Actor const*, int, int, sead::Vector3<float> const&, sead::Vector3<float> const&, Game::EnemyBase const*, unsigned int, unsigned int);
    char* getClassName() const;
    void enter();
    int getClassIterNode();
    int getClassIterNodeStatic();
};

} // Game

#endif //BLITZ_GAMEBULLETBOMBCHASEMISSIONBASE_H
