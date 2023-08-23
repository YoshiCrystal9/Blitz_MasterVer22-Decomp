#ifndef BLITZ_GAMEBULLETBOMBCHASE_H
#define BLITZ_GAMEBULLETBOMBCHASE_H

#include <math/seadVector.h>

namespace Game{
    class BulletBombChase{
    public:
        BulletBombChase();
        ~BulletBombChase();
        //virtual int reset(Cmn::Def::ResetType) = 0;
        //virtual int initializeSender(Cmn::Actor const*, int, int, sead::Vector3f const&, sead::Vector3f const&, short, Game::SighterTarget const*, Game::EnemyBase const*, bool, unsigned int, unsigned int) = 0;
        virtual int getSameBombChaseBurstGameFrameNum(unsigned int) const = 0;
        //virtual int initialize_(Cmn::Actor const*, int, int, sead::Vector3f const&, sead::Vector3<float> const&, short, Game::SighterTarget const*, Game::EnemyBase const*, bool, bool, unsigned int) = 0;
        //virtual int initializeReceiver(Cmn::Actor const*, int, int, sead::Vector3f const&, sead::Vector3f const&, short, unsigned int, unsigned int) = 0;
        virtual void setXLinkLocalPropertyDefinition() = 0;
        virtual void enter() = 0;
        virtual void genMessage() = 0;
        virtual float getCheckColSkipNrmDot() = 0;
        virtual char* getClassName() const = 0;
        virtual char* getWeaponName() const = 0;
        virtual bool hasAttackerPriority_() const = 0;
        virtual bool isBulletThrough() const = 0;
        virtual bool isCheckNoPaintBackCollision(sead::Vector3<float> const&, sead::Vector3<float> const&) const = 0;
        virtual bool isNoBurst() const = 0;
        virtual bool isUseMuzzlePos() const = 0;
        virtual void setCurPos(sead::Vector3f const&)  = 0;
        virtual void setNoBurst() = 0;
    };
}

#endif //BLITZ_GAMEBULLETBOMBCHASE_H
