#ifndef BLITZ_CMNBCATMGR_H
#define BLITZ_CMNBCATMGR_H

#include "Lp/Sys/LpSys.h"

namespace Cmn {

    class BcatMgr {
    public:
        void prepare();
        void genMessage(Lp::Sys::HioContext*);
    };

} // Cmn

#endif //BLITZ_CMNBCATMGR_H
