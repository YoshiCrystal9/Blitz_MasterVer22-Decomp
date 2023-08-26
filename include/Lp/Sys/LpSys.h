#ifndef BLITZ_LPSYS_H
#define BLITZ_LPSYS_H

namespace Lp{
    class Sys{
    public:
        class Actor{
        public:
            void actorOnRemove();
            void dbgOnAfterSleepBeforeReActivate(bool a);
        };
        enum HioContext{
            test

        };
    };
}

#endif //BLITZ_LPSYS_H