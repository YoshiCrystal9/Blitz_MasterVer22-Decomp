#include "Game/Switch/GameSwitchBase.h"

namespace Game {
    bool SwitchBase::isAbleToBeCulled() const {
        return false;
    }

    bool SwitchBase::isAllowNoSwitchDst_() const {
        return false;
    }

    bool SwitchBase::isActivateOnMissionRespawn() const {
        return false;
    }
} // Game