#ifndef BLITZ_GAMEPLAZACHARADIRECTOR_H
#define BLITZ_GAMEPLAZACHARADIRECTOR_H

#include "Lp/Sys/LpSys.h"
#include "heap/seadHeap.h"
#include "Game/Seq/GameSeqBase.h"
#include "Game/Cmn/CmnDef.h"

namespace Game {

    class PlazaCharaDirector {
    public:
        void prepareNews();

    };

    class PlazaCoconutShot{
    public:
        void stateEnterInit();
        void stateEnterWait();
        void genMessage(Lp::Sys::HioContext*);
        void listenPropertyEvent(Lp::Sys::HioPropertyEvent const*);
        //int getBoundingSphere(gsys::ModelRenderUnit const*, sead::Sphere<sead::Vector3<float> >*) const;

    };

    class PlazaGfxMgr{
    public:
        char* getConfigName_() const;
        void createMapModelScene_(sead::Heap*);
    };

    class PlazaPBRDataCreateCallback{
    public:
        void retake();
    };

    class PlazaParams{
    public:
        ~PlazaParams();
        class DofParams{
        public:
            ~DofParams();
        };
    };

    class SeqPlazaAmiibo{
    public:
        void stateEnterGreeting();
        void stateEnterGoToVersusTwoShot();
        void stateGoToVersusTwoShot();
    };

    class SeqPlazaIntro{
    public:
        void stateEnterIntroToCamera();
        void load();
    };

    class SeqPlazaNews{
    public:
        void stateFadeMissionEnding();
        void exit();
    };

    class SeqPlazaNpc{
    public:
        void stateEnterShowStatusNpc();

    };

    class SeqPlazaOekaki{
    public:
        void prepareSleep();
    };

    class SeqPlazaStartOcta{
    public:
        void stateGotoOcta();
        void stateEnterFinish();
        void exit();
        void reset(Cmn::Def::ResetType);
    };
} // Game

#endif //BLITZ_GAMEPLAZACHARADIRECTOR_H
