cmake_minimum_required(VERSION 3.13)
project(BLITZ CXX)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
# Use response files when linking objects because of the large number of source files
set(CMAKE_CXX_USE_RESPONSE_FILE_FOR_OBJECTS ON)
if ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU")
  add_compile_options(-fdiagnostics-color=always)
elseif ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "Clang")
  add_compile_options(-fcolor-diagnostics)
  # Required to silence "unused argument" warnings for -stdlib=libc++ when using distcc
  add_compile_options(-Wno-unused-command-line-argument)
  # Required to fix source paths in debug info when using distcc
  add_compile_options(-fdebug-prefix-map=/tmp=${CMAKE_CURRENT_BINARY_DIR})
endif()

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(BLITZ
        src/Game/Bullet/GameBulletBombChase.cpp
        include/Game/Bullet/GameBulletBombChase.h
        src/Game/Cmn/CmnDef.cpp
        src/Game/Cmn/CmnAmiiboReadSeq.cpp
        src/Game/Cmn/CmnCameraBase.cpp
        include/Game/Cmn/CmnDef.h
        src/Game/Cmn/CmnActor.cpp
        src/Game/EnemyBase/GameEnemyBase.cpp
        src/Game/SighterTarget/GameSighterTarget.cpp
        include/Lp/Sys/LpSys.h
        src/Lp/Sys/LpSys.cpp
        src/Lp/Utl/LpUtl.cpp
        src/Game/Cmn/CmnSaveData.cpp
        src/Game/Cmn/CmnGachiParamInfo.cpp
        src/Game/Cmn/CmnBgmExecution.cpp
        src/Game/Cmn/CmnSceneBgm.cpp
        src/Game/Cmn/CmnSceneBridgeBgm.cpp
        src/Game/Cstm/CstmResMgr.cpp
        src/Game/Cstm/CstmDbgMode.cpp
        src/Game/Cstm/CstmParamMgr.cpp
        src/Game/Cstm/CstmXLinkMgr.cpp
        src/Game/MapObj/GameMapObjBase.cpp
        src/Game/RivalSquad/GameRivalSquad.cpp
        src/Game/SeqMgr/GameSeqMgrBase.cpp
        src/Game/Switch/GameSwitchBase.cpp
        src/Game/DemoObj/GameDemoObjBase.cpp
        src/Game/DesignerObj/GameDesignerObj.cpp
        src/Game/Gateway/GameGatewayBase.cpp
        src/Game/InkPond/Octa/GameInkPondOcta.cpp
        src/Game/Item/GameItemCardKey.cpp
        src/Game/Item/GameItemIkura.cpp
        src/Game/Item/Octa/GameItemCardKeyOcta.cpp
        src/Game/Item/Octa/GameItemIkuraOcta.cpp
        src/Game/BaseCamp/Octa/GameBaseCampNpcLocatorOcta.cpp
        src/Game/AirBall/GameAirBall.cpp
        src/Game/AirBall/GameAttachableAirBall.cpp
        src/Game/Decoy/GameDecoy.cpp
        src/Game/GameExplanationText.cpp
        src/Game/GameFlyingHoheiLauncher.cpp
        src/Game/InkRail/GameInkRail.cpp
        src/Game/Lift/GameLift.cpp
        src/Game/Bullet/GameBulletSimple.cpp
        src/Game/Cmn/CmnKDGndCol.cpp
        src/Game/Bullet/GameBullet.cpp
        src/Game/Bullet/GameBulletBombChaseMissionBase.cpp
        src/Game/Bullet/GameBulletBombPoisonBall.cpp
        src/Game/Bullet/GameBulletRollerCore.cpp
        src/Game/Player/GamePlayer.cpp
        src/Game/Player/GamePlayerNetControl.cpp
        src/Game/Player/GamePlayerInkAction.cpp
        include/Game/EnemyBase/GameEnemyBallParams.h
        src/Game/Params/GameEnemyBallParams.cpp
        src/Game/Params/GameEnemyParams.cpp
        src/Game/Cmn/CmnMuObj.cpp
        src/Game/Cmn/CmnBcatFileCache.cpp
        src/Game/Cmn/CmnBcatMgr.cpp
        src/Game/Cmn/CmnLeaguePointCalculator.cpp
        src/Game/Cmn/CmnPlayerInfoAry.cpp
        src/Game/Cmn/CmnCameraAccessor.cpp
        src/Game/Cmn/CmnSceneBase.cpp
        src/Game/Player/Octa/GamePlayerMissionOcta.cpp
        src/Game/Player/GamePlayerMission.cpp
        src/Game/Player/GamePlayerSpectator.cpp
        src/Game/Plaza/GamePlaza.cpp
        src/Game/Cmn/CmnNewsDef.cpp
        src/Game/Seq/GameSeqBase.cpp
)

target_include_directories(BLITZ PRIVATE include)
target_include_directories(BLITZ PRIVATE src)
target_compile_definitions(BLITZ PRIVATE NON_MATCHING)
target_compile_options(BLITZ PRIVATE -fno-rtti -fno-exceptions)
target_compile_options(BLITZ PRIVATE -Wall -Wextra -Wdeprecated)
target_compile_options(BLITZ PRIVATE -Wno-unused-parameter -Wno-unused-private-field)
target_compile_options(BLITZ PRIVATE -fno-strict-aliasing)
target_compile_options(BLITZ PRIVATE -Wno-invalid-offsetof)

set(NN_SDK_MAJOR 4)
set(NN_SDK_MINOR 4)
set(NN_SDK_PATCH 0)
set(NN_SDK_TYPE "Release")

set(NN_WARE_MAJOR 1)
set(NN_WARE_MINOR 6)
set(NN_WARE_PATCH 1)

include_directories(lib)

add_subdirectory(lib/NintendoSDK)
target_link_libraries(BLITZ PUBLIC NintendoSDK)

add_subdirectory(lib/sead)
target_link_libraries(BLITZ PUBLIC sead)

add_subdirectory(lib/agl)
target_link_libraries(BLITZ PUBLIC agl)