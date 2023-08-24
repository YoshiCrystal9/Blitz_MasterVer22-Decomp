#ifndef BLITZ_CSTMDBGMODE_H
#define BLITZ_CSTMDBGMODE_H

namespace Cstm {

    class DbgMode {
    public:
        int addOrIf_IsOnOffDbgMode() const;
        int isGoAheadFrameIfDbgCtrlBtnHold() const;
    };

} // Cstm

#endif //BLITZ_CSTMDBGMODE_H
