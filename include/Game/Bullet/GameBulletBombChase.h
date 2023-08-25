#ifndef BLITZ_GAMEBULLETBOMBCHASE_H
#define BLITZ_GAMEBULLETBOMBCHASE_H

#include <math/seadVector.h>
#include "Game/Cmn/CmnActor.h"
#include "Game/Cmn/CmnDef.h"
#include "Game/SighterTarget/GameSighterTarget.h"
#include "Game/EnemyBase/GameEnemyBase.h"
#include "Lp/Sys/LpSys.h"
#include "Game/Bullet/GameBulletSimple.h"
#include "Game/Cmn/CmnKDGndCol.h"
#include "Game/Bullet/GameBullet.h"

namespace Game{
    class BulletBombChase{
    public:
        BulletBombChase();
        ~BulletBombChase();
        int reset(Cmn::Def::ResetType);
        int initializeSender(Cmn::Actor const*, int, int, sead::Vector3f const&, sead::Vector3f const&, short, Game::SighterTarget const*, Game::EnemyBase const*, bool, unsigned int, unsigned int);
        int getSameBombChaseBurstGameFrameNum(unsigned int burstgameframenum) const;
        int initialize_(Cmn::Actor const*, int, int, sead::Vector3f const&, sead::Vector3f const&, short, Game::SighterTarget const*, Game::EnemyBase const*, bool, bool, unsigned int);
        int initializeReceiver(Cmn::Actor const*, int, int, sead::Vector3f const&, sead::Vector3f const&, short, unsigned int, unsigned int);
        void setXLinkLocalPropertyDefinition();
        static void enter();
        void genMessage(Lp::Sys::HioContext*);
        float getCheckColSkipNrmDot() const;
        char* getClassName() const;
        char* getWeaponName() const;
        bool hasAttackerPriority_() const;
        bool isBulletThrough() const;
        bool isCheckNoPaintBackCollision(sead::Vector3f const&, sead::Vector3f const&) const;
        bool isNoBurst() const;
        bool isUseMuzzlePos() const;
        void setCurPos(sead::Vector3f const&);
        void setNoBurst();
        int getActorTypeId() const;
        bool isPaintLocalType(Cmn::KDGndCol::HitInfo::PaintType type, bool var1) const;
        int getClassIterNode();
        int getClassIterNodeStatic();
        void emitObjSplash_(sead::Vector3f const& vec1, sead::Vector3f const& vec2, Game::Bullet::ArmorType armortype, Cmn::Def::Team team, bool var);
        bool isThroughControlledPlayer() const;
        bool isHitActionGndAndWall() const;
        bool isUseCollisionMoveInfo() const;

    };
}

#endif //BLITZ_GAMEBULLETBOMBCHASE_H
