#ifndef BLITZ_GAMEPLAYERINKACTION_H
#define BLITZ_GAMEPLAYERINKACTION_H

#include <math/seadVector.h>

namespace Game {

    class PlayerInkAction {
    public:
        int getSuperLaserShotGuide(sead::Vector3f* varfloat) const;
        int calcSuperLaserShotGuideMuzzle(sead::Vector3f* varfloat2, sead::Vector3f* varfloat3) const;
        int shotSuperLaser(sead::Vector3f const& variable, sead::Vector3f const& anothervar);

    };

} // Game

#endif //BLITZ_GAMEPLAYERINKACTION_H
