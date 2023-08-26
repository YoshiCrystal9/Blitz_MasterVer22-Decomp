#ifndef BLITZ_GAMEPLAYERMISSION_H
#define BLITZ_GAMEPLAYERMISSION_H

namespace Game {

    class PlayerMission {

    };

    class PlayerMissionSeqWeaponDrone{
    public:
        void stateEnterNone();
        void stateNone();
        void stateEnterAppear();
        void stateEnterWait();

    };

} // Game

#endif //BLITZ_GAMEPLAYERMISSION_H
