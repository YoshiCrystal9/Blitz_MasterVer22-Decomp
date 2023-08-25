#ifndef BLITZ_GAMEBULLETSIMPLE_H
#define BLITZ_GAMEBULLETSIMPLE_H

#include "Game/Cmn/CmnKDGndCol.h"
#include "Game/Cmn/CmnDef.h"

namespace Game {

    class BulletSimple {
    public:
       static void reset(Cmn::Def::ResetType);
       bool isPaintLocalType(Cmn::KDGndCol::HitInfo::PaintType type, bool var1) const;
    };

} // Game

#endif //BLITZ_GAMEBULLETSIMPLE_H
