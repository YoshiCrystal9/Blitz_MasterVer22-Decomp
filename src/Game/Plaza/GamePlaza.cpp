#include "Game/Plaza/GamePlaza.h"

namespace Game {
    void PlazaCharaDirector::prepareNews() {

    }

    void PlazaCoconutShot::stateEnterInit() {

    }

    void PlazaCoconutShot::stateEnterWait() {

    }

    void PlazaCoconutShot::genMessage(Lp::Sys::HioContext *) {

    }

    void PlazaCoconutShot::listenPropertyEvent(const Lp::Sys::HioPropertyEvent *) {

    }

    char *PlazaGfxMgr::getConfigName_() const {
        return "Plaza";
    }

    void PlazaGfxMgr::createMapModelScene_(sead::Heap*) {

    }

    void PlazaPBRDataCreateCallback::retake() {

    }

    PlazaParams::~PlazaParams() {

    }

    PlazaParams::DofParams::~DofParams() {

    }

    void SeqPlazaAmiibo::stateEnterGreeting() {

    }

    void SeqPlazaAmiibo::stateEnterGoToVersusTwoShot() {

    }

    void SeqPlazaAmiibo::stateGoToVersusTwoShot() {

    }

    void SeqPlazaIntro::stateEnterIntroToCamera() {

    }

    void SeqPlazaIntro::load() {

    }

    void SeqPlazaNews::stateFadeMissionEnding() {

    }

    void SeqPlazaNews::exit() {

    }

    void SeqPlazaNpc::stateEnterShowStatusNpc() {

    }

    void SeqPlazaOekaki::prepareSleep() {

    }

    void SeqPlazaStartOcta::stateGotoOcta() {

    }

    void SeqPlazaStartOcta::stateEnterFinish() {

    }

    void SeqPlazaStartOcta::exit() {

    }
/* idk atm
    void SeqPlazaStartOcta::reset(Cmn::Def::ResetType) {
        Game::SeqBase::reset(Cmn::Def::ResetType::Test);
    }
    */

} // Game