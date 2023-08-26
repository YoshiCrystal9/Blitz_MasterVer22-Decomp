#ifndef BLITZ_CMNAMIIBOREADSEQ_H
#define BLITZ_CMNAMIIBOREADSEQ_H

namespace Cmn {

    class AmiiboReadSeq {
    public:
        void stateSleep();
        void stateEnterSearching();
        void stateEnterCheckResult();
        void setEnableDbgContinuousAmiiboReadTest();
        char* getClassName() const;
    };

} // Cmn

#endif //BLITZ_CMNAMIIBOREADSEQ_H
