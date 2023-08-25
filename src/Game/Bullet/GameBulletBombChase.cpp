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
        int result;
        result = 0;//Game::BulletSimple::reset(Cmn::Def::ResetType);

    }

    int BulletBombChase::initializeSender(Cmn::Actor const*, int, int, sead::Vector3f const&, sead::Vector3f const&, short, Game::SighterTarget const*, Game::EnemyBase const*, bool, unsigned int, unsigned int) {}

    int BulletBombChase::getSameBombChaseBurstGameFrameNum(unsigned int burstgameframenum) const {
        return burstgameframenum >> 4;
    }

    int BulletBombChase::initialize_(Cmn::Actor const*, int, int, sead::Vector3f const&, sead::Vector3<float> const&, short, Game::SighterTarget const*, Game::EnemyBase const*, bool, bool, unsigned int){};

    int BulletBombChase::initializeReceiver(Cmn::Actor const*, int, int, sead::Vector3f const&, sead::Vector3f const&, short, unsigned int, unsigned int){};

    void BulletBombChase::enter() {}

    void BulletBombChase::genMessage(Lp::Sys::HioContext*) {
        ;
    }

    float BulletBombChase::getCheckColSkipNrmDot() const{
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

    int BulletBombChase::getActorTypeId() const {
        return 66;
    }

    int BulletBombChase::getClassIterNode() {
        return BulletBombChase::getClassIterNodeStatic();
    }

    void BulletBombChase::emitObjSplash_(sead::Vector3f const& vec1, sead::Vector3f const& vec2, Game::Bullet::ArmorType armortype, Cmn::Def::Team team, bool var){
        ;
    }

    bool BulletBombChase::isThroughControlledPlayer() const {
        return true;
    }

    bool BulletBombChase::isHitActionGndAndWall() const {
        return true;
    }

    bool BulletBombChase::isUseCollisionMoveInfo() const {
        return true;
    }

    bool BulletBombChase::isPaintLocalType(Cmn::KDGndCol::HitInfo::PaintType type, bool var1) const {
        return (var1 == 2) | 0 & 1; // 0 is a placeholder for Game::BulletSimple::isPaintLocalType(type, var1), needs to be finished
    }
}