#include "Game/DesignerObj/GameDesignerObj.h"

namespace Game {
    bool DesignerObj::isHalfDrawFPS_() const {
        return false;
    }

    bool DesignerObjNoCulling::isAbleToBeCulled() const {
        return false;
    }
} // Game