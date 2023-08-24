#ifndef BLITZ_GAMEBULLETBOMBCHASE_H
#define BLITZ_GAMEBULLETBOMBCHASE_H

#include <math/seadVector.h>
#include "Game/Cmn/CmnActor.h"
#include "Game/Cmn/CmnDef.h"
#include "Game/SighterTarget/GameSighterTarget.h"
#include "Game/EnemyBase/GameEnemyBase.h"

namespace Game{
    class BulletBombChase{
    public:
        BulletBombChase();
        ~BulletBombChase();
        int reset(Cmn::Def::ResetType);
        int initializeSender(Cmn::Actor const*, int, int, sead::Vector3f const&, sead::Vector3f const&, short, Game::SighterTarget const*, Game::EnemyBase const*, bool, unsigned int, unsigned int);
        int getSameBombChaseBurstGameFrameNum(unsigned int) const;
        //virtual int initialize_(Cmn::Actor const*, int, int, sead::Vector3f const&, sead::Vector3<float> const&, short, Game::SighterTarget const*, Game::EnemyBase const*, bool, bool, unsigned int) = 0;
        //virtual int initializeReceiver(Cmn::Actor const*, int, int, sead::Vector3f const&, sead::Vector3f const&, short, unsigned int, unsigned int) = 0;
        void setXLinkLocalPropertyDefinition();
        void enter();
        void genMessage();
        float getCheckColSkipNrmDot();
        char* getClassName() const;
        char* getWeaponName() const;
        bool hasAttackerPriority_() const;
        bool isBulletThrough() const;
        bool isCheckNoPaintBackCollision(sead::Vector3<float> const&, sead::Vector3<float> const&) const;
        bool isNoBurst() const;
        bool isUseMuzzlePos() const;
        void setCurPos(sead::Vector3f const&);
        void setNoBurst();
    };
}

#endif //BLITZ_GAMEBULLETBOMBCHASE_H
