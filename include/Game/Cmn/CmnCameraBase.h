#ifndef BLITZ_CMNCAMERABASE_H
#define BLITZ_CMNCAMERABASE_H

namespace Cmn{
    class CameraBase{
    public:
        void onRegist();
        void onUnregist();
        void onDeactive();
        bool isOverwritePushInterpolation() const;
        bool isOverwritePopInterpolation() const;
        int getInterpolateFrame() const;
        void calcInterpolation();
    };
}

#endif //BLITZ_CMNCAMERABASE_H
