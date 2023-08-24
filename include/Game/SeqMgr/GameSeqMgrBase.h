#ifndef BLITZ_GAMESEQMGRBASE_H
#define BLITZ_GAMESEQMGRBASE_H

namespace Game {

    class SeqMgrBase {
    public:
        bool isUseXLink() const;
        int getIkuraNum() const;
        bool isNetworkSilentPlayerNoControl() const;
        int getSeqNum() const;
    };

} // Game

#endif //BLITZ_GAMESEQMGRBASE_H
