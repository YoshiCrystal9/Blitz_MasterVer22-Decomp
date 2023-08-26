#ifndef BLITZ_CMNSCENEBASE_H
#define BLITZ_CMNSCENEBASE_H

namespace Cmn {

    class SceneBase {
    public:
        void load();
        void enter();
        void preActorCalc();
        void exit();

    };

} // Cmn

#endif //BLITZ_CMNSCENEBASE_H
