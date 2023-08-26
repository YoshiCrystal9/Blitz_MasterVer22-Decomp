#include "Game/Cmn/CmnActor.h"

namespace Cmn {

    int Actor::getDefaultCalcTiming() {
        return 40;
    }

    int Actor::getDefaultCalcByParent() {
        return 7;
    }

    void Actor::getDbgMtx() const {
        ;
    }

    void Actor::load() {

    }

    void Actor::postLoad() {

    }

    void Actor::enter() {

    }

    void Actor::postEnter() {

    }

    void Actor::exit() {

    }

    void Actor::destroy() {

    }

    void Actor::secondCalc() {

    }

    void Actor::thirdCalc() {

    }

    void Actor::fourthCalc() {

    }

    void Actor::fifthCalc() {

    }

    void Actor::xlinkCalc() {

    }

    void Actor::calc_PostChildCalcByThis() {

    }

    void Actor::onCreate() {

    }

    void Actor::onActivate() {

    }

    void Actor::onSleep() {

    }

    void Actor::prepareReset(Cmn::Def::ResetType) {

    }

    void Actor::postReset(Cmn::Def::ResetType) {

    }

    int Actor::setXLinkLocalPropertyDefinition_(int var) {
        return var;
    }

    void Actor::createAdditionalActionSlot(sead::Heap *) {

    }

    int Actor::createComponentHolder_() {
        return 0;
    }

    void Actor::executeStateMachine_() {

    }

    void Actor::resetState_() {

    }

    void Actor::changeFirstState_() {

    }
} // Cmn