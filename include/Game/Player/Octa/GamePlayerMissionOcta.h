#ifndef BLITZ_GAMEPLAYERMISSIONOCTA_H
#define BLITZ_GAMEPLAYERMISSIONOCTA_H

namespace Game {

    class PlayerMissionOctaSeqEntrance {
    public:
        void stateEnterNone();
        void stateNone();
        void stateEnterDashReady();
        void stateDashReady();
        void stateEnterJumpMove();
        //int stateEnterDashMove();
    };

    class PlayerMissionOctaSeqPinch{
    public:
        void stateNone();
        void stateSmall();
        void stateBig();
        void stateBigNoControl();

    };

} // Game

#endif //BLITZ_GAMEPLAYERMISSIONOCTA_H
