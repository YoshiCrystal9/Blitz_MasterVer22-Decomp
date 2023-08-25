#ifndef BLITZ_GAMEBULLETROLLERCORE_H
#define BLITZ_GAMEBULLETROLLERCORE_H

#include <math/seadVector.h>
#include "Game/Cmn/CmnDef.h"
#include "Game/Cmn/CmnKDGndCol.h"

namespace Game {

    class BulletRollerCore {
    public:
        void paintImpl_KingSquid(int var1, int var2, Cmn::Def::Team team, sead::Vector3f const& float1, sead::Vector2f const& float2, sead::Vector3f const& float3, Cmn::KDGndCol::HitInfo::PaintType painttype, unsigned char uchar, float floatidk) const;

    };

} // Game

#endif //BLITZ_GAMEBULLETROLLERCORE_H
