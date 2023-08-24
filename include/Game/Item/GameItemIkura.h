#ifndef BLITZ_GAMEITEMIKURA_H
#define BLITZ_GAMEITEMIKURA_H

namespace Game {

    class ItemIkura {
    public:
        bool isUseEffectPillar_() const;
        bool isSleepWithFall_() const;
        bool isPlayPlayerVoice_() const;
        bool isTwinkle() const;
        bool isCheckFieldAbnormalPos() const;
    };

} // Game

#endif //BLITZ_GAMEITEMIKURA_H
