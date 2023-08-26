#include "Game/Cmn/CmnCameraBase.h"

namespace Cmn{

    void CameraBase::onRegist() {

    }

    void CameraBase::onUnregist() {

    }

    void CameraBase::onDeactive() {

    }

    bool CameraBase::isOverwritePushInterpolation() const {
        return false;
    }

    bool CameraBase::isOverwritePopInterpolation() const {
        return false;
    }

    int CameraBase::getInterpolateFrame() const {
        return 0;
    }

    void CameraBase::calcInterpolation() {

    }
}