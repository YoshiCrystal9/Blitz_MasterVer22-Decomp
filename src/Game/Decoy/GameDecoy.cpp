#include "Game/Decoy/GameDecoy.h"

namespace Game {
    bool Decoy::isAbleToBeCulled() const {
        return false;
    }

    bool Decoy::isCompatibleWithNetwork_() const {
        return false;
    }
} // Game