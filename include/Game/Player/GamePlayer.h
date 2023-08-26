#ifndef BLITZ_GAMEPLAYER_H
#define BLITZ_GAMEPLAYER_H

namespace Game {

    class Player {
    public:
        bool isInSpecial_KingSquid_Attack() const;
        int getKingSquid_AttackEffectMinFrame() const;
        bool isInSpecial_Shelter() const;
    };

    class PlayerSquidCannon{
    public:
        void calc();
    };

    class PlayerSuperArmor{
    public:
        void setup();
    };

    class PlayerSuperLanding{
    public:
        void stateNone();
        void stateEnterWaitN();
        void stateEnterDropD();
    };

} // Game

#endif //BLITZ_GAMEPLAYER_H
