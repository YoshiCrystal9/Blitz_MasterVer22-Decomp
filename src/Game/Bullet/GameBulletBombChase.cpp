#include "Game/Bullet/GameBulletBombChase.h"
#include <math/seadVector.h>

namespace Game{
    void BulletBombChase::setXLinkLocalPropertyDefinition() {
        //not matching yet
    }

    BulletBombChase::BulletBombChase(){

    }

    BulletBombChase::~BulletBombChase()= default;

    /*
    int BulletBombChase::reset(Cmn::Def::ResetType) {
        //implementar cmn def reset type
    }
     */

    //int BulletBombChase::initializeSender(const int *, int, int, const sead::Vector3<float> &, const sead::Vector3<float> &, short, const int *, const int *, bool, unsigned int, unsigned int) {}

    int BulletBombChase::getSameBombChaseBurstGameFrameNum(unsigned int) const {}

    //void BulletBombChase::initialize_(){};

    //void BulletBombChase::initializeReceiver(){};

    void BulletBombChase::enter() {}

    /*
    void BulletBombChase::genMessage(Lp::Sys::HioContext*) {
        //not matching yet, needs Lp implementation
    }
     */

    float BulletBombChase::getCheckColSkipNrmDot() {
        return 0.0f;
    }
    char* BulletBombChase::getClassName() const{
        return "BulletBombChase";
    }
    char* BulletBombChase::getWeaponName() const {
        return "Bomb_Chase";
    }

    void BulletBombChase::setNoBurst() {}

    bool BulletBombChase::hasAttackerPriority_() const {
        return false;
    }

    bool BulletBombChase::isBulletThrough() const {
        return false;
    }

    bool BulletBombChase::isCheckNoPaintBackCollision(sead::Vector3f const&, sead::Vector3f const&) const {
        return false;
    }

    bool BulletBombChase::isNoBurst() const {
        return false;
    }

    bool BulletBombChase::isUseMuzzlePos() const {
        return false;
    }

    void BulletBombChase::setCurPos(sead::Vector3<float> const&) {}
}