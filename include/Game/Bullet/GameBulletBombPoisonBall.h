#ifndef BLITZ_GAMEBULLETBOMBPOISONBALL_H
#define BLITZ_GAMEBULLETBOMBPOISONBALL_H

#include "Lp/Sys/LpSys.h"

namespace Game {

    class BulletBombPoisonBall {
    public:
        BulletBombPoisonBall();
        ~BulletBombPoisonBall();
        int getBurst_WaitFrm() const;
        int getBurst_WarnFrm() const;
        int getBurst_SeFrm() const;
        int getFly_AirFrm() const;
        int getCollisionSeSilentFrame() const;
        int getBurst_SplashNum() const;
        int getActorTypeId() const;
        void enter();
        void genMessage(Lp::Sys::HioContext*);
        char* getClassName() const;
        int getClassIterNode() ;
        int getClassIterNodeStatic() ;
        bool hasAttackerPriority_() const;
        int getBombCmnCoreType() const;



    };

} // Game

#endif //BLITZ_GAMEBULLETBOMBPOISONBALL_H
