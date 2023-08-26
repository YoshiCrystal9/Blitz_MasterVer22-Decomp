#ifndef BLITZ_GAMEENEMYBALLPARAMS_H
#define BLITZ_GAMEENEMYBALLPARAMS_H

#include "prim/seadSafeString.h"
#include "Game/Cmn/CmnMuObj.h"
#include "Lp/Sys/LpSys.h"

namespace Game {

    class EnemyBallParams {
    public:
        EnemyBallParams();
        ~EnemyBallParams();
        int readMuObj(Cmn::MuObj const*, sead::SafeStringBase<char> const&);
        int genMessage(Lp::Sys::HioContext*);
    };

    class EnemyBallParamsDesigner{
    public:
        EnemyBallParamsDesigner();
        ~EnemyBallParamsDesigner();
    };

} // Game

#endif //BLITZ_GAMEENEMYBALLPARAMS_H
