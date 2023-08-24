#include "Game/Bullet/GameBulletBombChase.h"

namespace Game{

    void BulletBombChase::setXLinkLocalPropertyDefinition() {
        //not matching yet
    }

    BulletBombChase::BulletBombChase()= default;

    BulletBombChase::~BulletBombChase(){
        operator delete(this);
    }

    int BulletBombChase::reset(Cmn::Def::ResetType) {

    }

    int BulletBombChase::initializeSender(Cmn::Actor const*, int, int, sead::Vector3f const&, sead::Vector3f const&, short, Game::SighterTarget const*, Game::EnemyBase const*, bool, unsigned int, unsigned int) {}

    int BulletBombChase::getSameBombChaseBurstGameFrameNum(unsigned int burstgameframenum) const {
        return burstgameframenum >> 4;
    }

    int BulletBombChase::initialize_(Cmn::Actor const*, int, int, sead::Vector3f const&, sead::Vector3<float> const&, short, Game::SighterTarget const*, Game::EnemyBase const*, bool, bool, unsigned int){};

    int BulletBombChase::initializeReceiver(Cmn::Actor const*, int, int, sead::Vector3f const&, sead::Vector3f const&, short, unsigned int, unsigned int){};

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

    void BulletBombChase::setCurPos(sead::Vector3f const&) {}
}