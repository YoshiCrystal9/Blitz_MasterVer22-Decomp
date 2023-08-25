#include "Game/Bullet/GameBulletBombChaseMissionBase.h"

namespace Game {
    BulletBombChaseMissionBase::BulletBombChaseMissionBase()= default;

    BulletBombChaseMissionBase::~BulletBombChaseMissionBase(){
        operator delete(this);
    }
    void BulletBombChaseMissionBase::initializeReceiver(const Cmn::Actor *, int, int, const sead::Vector3<float> &,
                                                       const sead::Vector3<float> &, const Game::EnemyBase *,
                                                       unsigned int, unsigned int) {
        ;
    }

    void BulletBombChaseMissionBase::enter() {
        Game::BulletBombChase::enter();
    }

    char *BulletBombChaseMissionBase::getClassName() const {
        return "BulletBombChaseMissionBase";
    }

    int BulletBombChaseMissionBase::getClassIterNode() {
        return BulletBombChaseMissionBase::getClassIterNodeStatic();
    }
} // Game