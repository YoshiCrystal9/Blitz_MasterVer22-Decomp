#ifndef BLITZ_GAMEDECOY_H
#define BLITZ_GAMEDECOY_H

namespace Game {

    class Decoy {
    public:
        bool isAbleToBeCulled() const;
        bool isCompatibleWithNetwork_() const;
    };

} // Game

#endif //BLITZ_GAMEDECOY_H
