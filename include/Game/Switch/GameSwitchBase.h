#ifndef BLITZ_GAMESWITCHBASE_H
#define BLITZ_GAMESWITCHBASE_H

namespace Game {

    class SwitchBase {
    public:
        bool isAbleToBeCulled() const;
        bool isAllowNoSwitchDst_() const;
        bool isActivateOnMissionRespawn() const;
    };

} // Game

#endif //BLITZ_GAMESWITCHBASE_H
