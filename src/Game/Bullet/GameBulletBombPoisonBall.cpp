#include "Game/Bullet/GameBulletBombPoisonBall.h"

namespace Game {
    int BulletBombPoisonBall::getBurst_WaitFrm() const {
        return 0;
    }

    int BulletBombPoisonBall::getBurst_WarnFrm() const {
        return 0;
    }

    int BulletBombPoisonBall::getBurst_SeFrm() const {
        return 0;
    }

    int BulletBombPoisonBall::getFly_AirFrm() const {
        return 0;
    }

    int BulletBombPoisonBall::getCollisionSeSilentFrame() const {
        return 0;
    }

    int BulletBombPoisonBall::getBurst_SplashNum() const {
        return 0;
    }

    int BulletBombPoisonBall::getActorTypeId() const {
        return 90;
    }

    void BulletBombPoisonBall::enter(){
        ;
    }
    void BulletBombPoisonBall::genMessage(Lp::Sys::HioContext*) {
        ;
    }

    char *BulletBombPoisonBall::getClassName() const {
        return "BulletBombPoisonBall";
    }

    int BulletBombPoisonBall::getClassIterNode(){
        return BulletBombPoisonBall::getClassIterNodeStatic();
    }

    bool BulletBombPoisonBall::hasAttackerPriority_() const {
        return true;
    }

    int BulletBombPoisonBall::getBombCmnCoreType() const {
        return 18;
    }
} // Game