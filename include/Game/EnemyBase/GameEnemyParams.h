#ifndef BLITZ_GAMEENEMYPARAMS_H
#define BLITZ_GAMEENEMYPARAMS_H

#include "prim/seadSafeString.h"
#include "Game/Cmn/CmnMuObj.h"
#include "Lp/Sys/LpSys.h"

namespace Game {

    class EnemyParams {
    public:
        static int readMuObj(Cmn::MuObj const*, sead::SafeStringBase<char> const&);
        static void genMessage(Lp::Sys::HioContext*);

    };

} // Game

#endif //BLITZ_GAMEENEMYPARAMS_H
