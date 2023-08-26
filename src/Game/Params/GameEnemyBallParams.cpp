#include "Game/Params/GameEnemyBallParams.h"
#include "Game/Params/GameEnemyParams.h"

namespace Game {
    EnemyBallParams::EnemyBallParams(){

    }
    EnemyBallParams::~EnemyBallParams(){

    };
    EnemyBallParamsDesigner::EnemyBallParamsDesigner(){

    }
    EnemyBallParamsDesigner::~EnemyBallParamsDesigner(){

    };
    int EnemyBallParams::readMuObj(Cmn::MuObj const*, sead::SafeStringBase<char> const&) {
        return EnemyParams::readMuObj();
    }

    int EnemyBallParams::genMessage(Lp::Sys::HioContext* xd) {
        return 0;//Game::EnemyParams::genMessage();
    }

} // Game