#include "Game/Player/GamePlayer.h"

namespace Game {
    bool Player::isInSpecial_KingSquid_Attack() const {
        return false;
    }

    int Player::getKingSquid_AttackEffectMinFrame() const {
        return 15;
    }

    bool Player::isInSpecial_Shelter() const {
        return false;
    }

    void PlayerSquidCannon::calc() {

    }

    void PlayerSuperArmor::setup() {

    }

    void PlayerSuperLanding::stateNone() {

    }

    void PlayerSuperLanding::stateEnterWaitN() {

    }

    void PlayerSuperLanding::stateEnterDropD() {

    }
} // Game