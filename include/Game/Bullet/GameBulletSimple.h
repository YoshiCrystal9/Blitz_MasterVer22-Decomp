#ifndef BLITZ_GAMEBULLETSIMPLE_H
#define BLITZ_GAMEBULLETSIMPLE_H

#include "Game/Cmn/CmnKDGndCol.h"

namespace Game {

    class BulletSimple {
    public:
       static int reset();
       bool isPaintLocalType(Cmn::KDGndCol::HitInfo::PaintType type, bool var1) const;
    };

} // Game

#endif //BLITZ_GAMEBULLETSIMPLE_H
