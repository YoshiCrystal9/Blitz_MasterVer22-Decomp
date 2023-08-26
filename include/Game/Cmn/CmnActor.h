#ifndef BLITZ_CMNACTOR_H
#define BLITZ_CMNACTOR_H

//#include <agl>

#include "CmnDef.h"
#include "heap/seadHeap.h"

namespace Cmn {

    class Actor {
    public:
        int getDefaultCalcTiming();
        int getDefaultCalcByParent();
        //void actorDbgDraw3D(agl::lyr::RenderInfo const&) const;
        void getDbgMtx() const; //no match
        void load();
        void postLoad();
        void enter();
        void postEnter();
        void exit();
        void destroy();
        void secondCalc();
        void thirdCalc();
        void fourthCalc();
        void fifthCalc();
        void xlinkCalc();
        void calc_PostChildCalcByThis();
        void onCreate();
        void onActivate();
        void onSleep();
        void prepareReset(Cmn::Def::ResetType);
        void postReset(Cmn::Def::ResetType);
        int setXLinkLocalPropertyDefinition_(int var);
        void createAdditionalActionSlot(sead::Heap*);
        int createComponentHolder_();
        void executeStateMachine_();
        void resetState_();
        void changeFirstState_();

    };

} // Cmn

#endif //BLITZ_CMNACTOR_H
