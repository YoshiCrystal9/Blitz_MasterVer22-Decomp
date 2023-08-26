#include "Game/EnemyBase/GameEnemyBallParams.h"
#include "Game/EnemyBase/GameEnemyParams.h"

namespace Game {
    EnemyBallParams::EnemyBallParams(){

    }
    EnemyBallParams::~EnemyBallParams(){

    };
    EnemyBallParamsDesigner::EnemyBallParamsDesigner(){

    }
    EnemyBallParamsDesigner::~EnemyBallParamsDesigner(){

    };

    int EnemyBallParams::readMuObj(Cmn::MuObj const* lol , sead::SafeStringBase<char> const& jaja ) {
        return EnemyParams::readMuObj(lol, jaja);
    }

    int EnemyBallParams::genMessage(Lp::Sys::HioContext* xd) {
        return 0;//Game::EnemyParams::genMessage();
    }

} // Game