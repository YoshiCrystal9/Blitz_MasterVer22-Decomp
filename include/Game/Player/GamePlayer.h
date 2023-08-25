#ifndef BLITZ_GAMEPLAYER_H
#define BLITZ_GAMEPLAYER_H

namespace Game {

    class Player {
    public:
        bool isInSpecial_KingSquid_Attack() const;
        int getKingSquid_AttackEffectMinFrame() const;
        bool isInSpecial_Shelter() const;

    };

} // Game

#endif //BLITZ_GAMEPLAYER_H
