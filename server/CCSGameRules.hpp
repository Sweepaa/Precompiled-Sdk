#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CRetakeGameRules.hpp"
#include "source2sdk/server/CTeamplayRules.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    class CCSGameModeRules;
};

namespace source2sdk::server
{
    class SpawnPoint;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x15838
    // Has VTable
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "bool m_bFreezePeriod"
    // static metadata: MNetworkVarNames "bool m_bWarmupPeriod"
    // static metadata: MNetworkVarNames "GameTime_t m_fWarmupPeriodEnd"
    // static metadata: MNetworkVarNames "GameTime_t m_fWarmupPeriodStart"
    // static metadata: MNetworkVarNames "bool m_bServerPaused"
    // static metadata: MNetworkVarNames "bool m_bTerroristTimeOutActive"
    // static metadata: MNetworkVarNames "bool m_bCTTimeOutActive"
    // static metadata: MNetworkVarNames "float m_flTerroristTimeOutRemaining"
    // static metadata: MNetworkVarNames "float m_flCTTimeOutRemaining"
    // static metadata: MNetworkVarNames "int m_nTerroristTimeOuts"
    // static metadata: MNetworkVarNames "int m_nCTTimeOuts"
    // static metadata: MNetworkVarNames "bool m_bTechnicalTimeOut"
    // static metadata: MNetworkVarNames "bool m_bMatchWaitingForResume"
    // static metadata: MNetworkVarNames "int m_iRoundTime"
    // static metadata: MNetworkVarNames "float m_fMatchStartTime"
    // static metadata: MNetworkVarNames "GameTime_t m_fRoundStartTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flRestartRoundTime"
    // static metadata: MNetworkVarNames "bool m_bGameRestart"
    // static metadata: MNetworkVarNames "float m_flGameStartTime"
    // static metadata: MNetworkVarNames "float m_timeUntilNextPhaseStarts"
    // static metadata: MNetworkVarNames "int m_gamePhase"
    // static metadata: MNetworkVarNames "int m_totalRoundsPlayed"
    // static metadata: MNetworkVarNames "int m_nRoundsPlayedThisPhase"
    // static metadata: MNetworkVarNames "int m_nOvertimePlaying"
    // static metadata: MNetworkVarNames "int m_iHostagesRemaining"
    // static metadata: MNetworkVarNames "bool m_bAnyHostageReached"
    // static metadata: MNetworkVarNames "bool m_bMapHasBombTarget"
    // static metadata: MNetworkVarNames "bool m_bMapHasRescueZone"
    // static metadata: MNetworkVarNames "bool m_bMapHasBuyZone"
    // static metadata: MNetworkVarNames "bool m_bIsQueuedMatchmaking"
    // static metadata: MNetworkVarNames "int m_nQueuedMatchmakingMode"
    // static metadata: MNetworkVarNames "bool m_bIsValveDS"
    // static metadata: MNetworkVarNames "bool m_bLogoMap"
    // static metadata: MNetworkVarNames "bool m_bPlayAllStepSoundsOnServer"
    // static metadata: MNetworkVarNames "int m_iSpectatorSlotCount"
    // static metadata: MNetworkVarNames "int m_MatchDevice"
    // static metadata: MNetworkVarNames "bool m_bHasMatchStarted"
    // static metadata: MNetworkVarNames "int m_nNextMapInMapgroup"
    // static metadata: MNetworkVarNames "char m_szTournamentEventName"
    // static metadata: MNetworkVarNames "char m_szTournamentEventStage"
    // static metadata: MNetworkVarNames "char m_szMatchStatTxt"
    // static metadata: MNetworkVarNames "char m_szTournamentPredictionsTxt"
    // static metadata: MNetworkVarNames "int m_nTournamentPredictionsPct"
    // static metadata: MNetworkVarNames "GameTime_t m_flCMMItemDropRevealStartTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flCMMItemDropRevealEndTime"
    // static metadata: MNetworkVarNames "bool m_bIsDroppingItems"
    // static metadata: MNetworkVarNames "bool m_bIsQuestEligible"
    // static metadata: MNetworkVarNames "bool m_bIsHltvActive"
    // static metadata: MNetworkVarNames "uint16 m_arrProhibitedItemIndices"
    // static metadata: MNetworkVarNames "uint32 m_arrTournamentActiveCasterAccounts"
    // static metadata: MNetworkVarNames "int m_numBestOfMaps"
    // static metadata: MNetworkVarNames "int m_nHalloweenMaskListSeed"
    // static metadata: MNetworkVarNames "bool m_bBombDropped"
    // static metadata: MNetworkVarNames "bool m_bBombPlanted"
    // static metadata: MNetworkVarNames "int m_iRoundWinStatus"
    // static metadata: MNetworkVarNames "int m_eRoundWinReason"
    // static metadata: MNetworkVarNames "bool m_bTCantBuy"
    // static metadata: MNetworkVarNames "bool m_bCTCantBuy"
    // static metadata: MNetworkVarNames "int m_iMatchStats_RoundResults"
    // static metadata: MNetworkVarNames "int m_iMatchStats_PlayersAlive_CT"
    // static metadata: MNetworkVarNames "int m_iMatchStats_PlayersAlive_T"
    // static metadata: MNetworkVarNames "float m_TeamRespawnWaveTimes"
    // static metadata: MNetworkVarNames "GameTime_t m_flNextRespawnWave"
    // static metadata: MNetworkVarNames "int m_nServerQuestID"
    // static metadata: MNetworkVarNames "Vector m_vMinimapMins"
    // static metadata: MNetworkVarNames "Vector m_vMinimapMaxs"
    // static metadata: MNetworkVarNames "float m_MinimapVerticalSectionHeights"
    // static metadata: MNetworkVarNames "int m_nEndMatchMapGroupVoteTypes"
    // static metadata: MNetworkVarNames "int m_nEndMatchMapGroupVoteOptions"
    // static metadata: MNetworkVarNames "int m_nEndMatchMapVoteWinner"
    // static metadata: MNetworkVarNames "int m_iNumConsecutiveCTLoses"
    // static metadata: MNetworkVarNames "int m_iNumConsecutiveTerroristLoses"
    // static metadata: MNetworkVarNames "int m_nMatchAbortedEarlyReason"
    // static metadata: MNetworkVarNames "CCSGameModeRules * m_pGameModeRules"
    // static metadata: MNetworkVarNames "CRetakeGameRules m_RetakeRules"
    // static metadata: MNetworkVarNames "uint8 m_nMatchEndCount"
    // static metadata: MNetworkVarNames "int m_nTTeamIntroVariant"
    // static metadata: MNetworkVarNames "int m_nCTTeamIntroVariant"
    // static metadata: MNetworkVarNames "bool m_bTeamIntroPeriod"
    // static metadata: MNetworkVarNames "int m_iRoundEndWinnerTeam"
    // static metadata: MNetworkVarNames "int m_eRoundEndReason"
    // static metadata: MNetworkVarNames "bool m_bRoundEndShowTimerDefend"
    // static metadata: MNetworkVarNames "int m_iRoundEndTimerTime"
    // static metadata: MNetworkVarNames "CUtlString m_sRoundEndFunFactToken"
    // static metadata: MNetworkVarNames "CPlayerSlot m_iRoundEndFunFactPlayerSlot"
    // static metadata: MNetworkVarNames "int m_iRoundEndFunFactData1"
    // static metadata: MNetworkVarNames "int m_iRoundEndFunFactData2"
    // static metadata: MNetworkVarNames "int m_iRoundEndFunFactData3"
    // static metadata: MNetworkVarNames "CUtlString m_sRoundEndMessage"
    // static metadata: MNetworkVarNames "int m_iRoundEndPlayerCount"
    // static metadata: MNetworkVarNames "bool m_bRoundEndNoMusic"
    // static metadata: MNetworkVarNames "int m_iRoundEndLegacy"
    // static metadata: MNetworkVarNames "uint8 m_nRoundEndCount"
    // static metadata: MNetworkVarNames "int m_iRoundStartRoundNumber"
    // static metadata: MNetworkVarNames "uint8 m_nRoundStartCount"
    #pragma pack(push, 1)
    class CCSGameRules : public server::CTeamplayRules
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc0[0x8]; // 0xc0
        // metadata: MNetworkEnable
        bool m_bFreezePeriod; // 0xc8        
        // metadata: MNetworkEnable
        bool m_bWarmupPeriod; // 0xc9        
        [[maybe_unused]] std::uint8_t pad_0xca[0x2]; // 0xca
        // metadata: MNetworkEnable
        entity2::GameTime_t m_fWarmupPeriodEnd; // 0xcc        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_fWarmupPeriodStart; // 0xd0        
        // metadata: MNetworkEnable
        bool m_bServerPaused; // 0xd4        
        // metadata: MNetworkEnable
        bool m_bTerroristTimeOutActive; // 0xd5        
        // metadata: MNetworkEnable
        bool m_bCTTimeOutActive; // 0xd6        
        [[maybe_unused]] std::uint8_t pad_0xd7[0x1]; // 0xd7
        // metadata: MNetworkEnable
        float m_flTerroristTimeOutRemaining; // 0xd8        
        // metadata: MNetworkEnable
        float m_flCTTimeOutRemaining; // 0xdc        
        // metadata: MNetworkEnable
        int32_t m_nTerroristTimeOuts; // 0xe0        
        // metadata: MNetworkEnable
        int32_t m_nCTTimeOuts; // 0xe4        
        // metadata: MNetworkEnable
        bool m_bTechnicalTimeOut; // 0xe8        
        // metadata: MNetworkEnable
        bool m_bMatchWaitingForResume; // 0xe9        
        [[maybe_unused]] std::uint8_t pad_0xea[0x2]; // 0xea
        // metadata: MNetworkEnable
        int32_t m_iRoundTime; // 0xec        
        // metadata: MNetworkEnable
        float m_fMatchStartTime; // 0xf0        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_fRoundStartTime; // 0xf4        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flRestartRoundTime; // 0xf8        
        // metadata: MNetworkEnable
        bool m_bGameRestart; // 0xfc        
        [[maybe_unused]] std::uint8_t pad_0xfd[0x3]; // 0xfd
        // metadata: MNetworkEnable
        float m_flGameStartTime; // 0x100        
        // metadata: MNetworkEnable
        float m_timeUntilNextPhaseStarts; // 0x104        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnGamePhaseChanged"
        int32_t m_gamePhase; // 0x108        
        // metadata: MNetworkEnable
        int32_t m_totalRoundsPlayed; // 0x10c        
        // metadata: MNetworkEnable
        int32_t m_nRoundsPlayedThisPhase; // 0x110        
        // metadata: MNetworkEnable
        int32_t m_nOvertimePlaying; // 0x114        
        // metadata: MNetworkEnable
        int32_t m_iHostagesRemaining; // 0x118        
        // metadata: MNetworkEnable
        bool m_bAnyHostageReached; // 0x11c        
        // metadata: MNetworkEnable
        bool m_bMapHasBombTarget; // 0x11d        
        // metadata: MNetworkEnable
        bool m_bMapHasRescueZone; // 0x11e        
        // metadata: MNetworkEnable
        bool m_bMapHasBuyZone; // 0x11f        
        // metadata: MNetworkEnable
        bool m_bIsQueuedMatchmaking; // 0x120        
        [[maybe_unused]] std::uint8_t pad_0x121[0x3]; // 0x121
        // metadata: MNetworkEnable
        int32_t m_nQueuedMatchmakingMode; // 0x124        
        // metadata: MNetworkEnable
        bool m_bIsValveDS; // 0x128        
        // metadata: MNetworkEnable
        bool m_bLogoMap; // 0x129        
        // metadata: MNetworkEnable
        bool m_bPlayAllStepSoundsOnServer; // 0x12a        
        [[maybe_unused]] std::uint8_t pad_0x12b[0x1]; // 0x12b
        // metadata: MNetworkEnable
        int32_t m_iSpectatorSlotCount; // 0x12c        
        // metadata: MNetworkEnable
        int32_t m_MatchDevice; // 0x130        
        // metadata: MNetworkEnable
        bool m_bHasMatchStarted; // 0x134        
        [[maybe_unused]] std::uint8_t pad_0x135[0x3]; // 0x135
        // metadata: MNetworkEnable
        int32_t m_nNextMapInMapgroup; // 0x138        
        // metadata: MNetworkEnable
        char m_szTournamentEventName[512]; // 0x13c        
        // metadata: MNetworkEnable
        char m_szTournamentEventStage[512]; // 0x33c        
        // metadata: MNetworkEnable
        char m_szMatchStatTxt[512]; // 0x53c        
        // metadata: MNetworkEnable
        char m_szTournamentPredictionsTxt[512]; // 0x73c        
        // metadata: MNetworkEnable
        int32_t m_nTournamentPredictionsPct; // 0x93c        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flCMMItemDropRevealStartTime; // 0x940        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flCMMItemDropRevealEndTime; // 0x944        
        // metadata: MNetworkEnable
        bool m_bIsDroppingItems; // 0x948        
        // metadata: MNetworkEnable
        bool m_bIsQuestEligible; // 0x949        
        // metadata: MNetworkEnable
        bool m_bIsHltvActive; // 0x94a        
        [[maybe_unused]] std::uint8_t pad_0x94b[0x1]; // 0x94b
        // metadata: MNetworkEnable
        uint16_t m_arrProhibitedItemIndices[100]; // 0x94c        
        // metadata: MNetworkEnable
        uint32_t m_arrTournamentActiveCasterAccounts[4]; // 0xa14        
        // metadata: MNetworkEnable
        int32_t m_numBestOfMaps; // 0xa24        
        // metadata: MNetworkEnable
        int32_t m_nHalloweenMaskListSeed; // 0xa28        
        // metadata: MNetworkEnable
        bool m_bBombDropped; // 0xa2c        
        // metadata: MNetworkEnable
        bool m_bBombPlanted; // 0xa2d        
        [[maybe_unused]] std::uint8_t pad_0xa2e[0x2]; // 0xa2e
        // metadata: MNetworkEnable
        int32_t m_iRoundWinStatus; // 0xa30        
        // metadata: MNetworkEnable
        int32_t m_eRoundWinReason; // 0xa34        
        // metadata: MNetworkEnable
        bool m_bTCantBuy; // 0xa38        
        // metadata: MNetworkEnable
        bool m_bCTCantBuy; // 0xa39        
        [[maybe_unused]] std::uint8_t pad_0xa3a[0x2]; // 0xa3a
        // metadata: MNetworkEnable
        int32_t m_iMatchStats_RoundResults[30]; // 0xa3c        
        // metadata: MNetworkEnable
        int32_t m_iMatchStats_PlayersAlive_CT[30]; // 0xab4        
        // metadata: MNetworkEnable
        int32_t m_iMatchStats_PlayersAlive_T[30]; // 0xb2c        
        // metadata: MNetworkEnable
        float m_TeamRespawnWaveTimes[32]; // 0xba4        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flNextRespawnWave[32]; // 0xc24        
        // metadata: MNetworkEnable
        int32_t m_nServerQuestID; // 0xca4        
        // metadata: MNetworkEnable
        Vector m_vMinimapMins; // 0xca8        
        // metadata: MNetworkEnable
        Vector m_vMinimapMaxs; // 0xcb4        
        // metadata: MNetworkEnable
        float m_MinimapVerticalSectionHeights[8]; // 0xcc0        
        bool m_bSpawnedTerrorHuntHeavy; // 0xce0        
        [[maybe_unused]] std::uint8_t pad_0xce1[0x7]; // 0xce1
        uint64_t m_ullLocalMatchID; // 0xce8        
        // metadata: MNetworkEnable
        int32_t m_nEndMatchMapGroupVoteTypes[10]; // 0xcf0        
        // metadata: MNetworkEnable
        int32_t m_nEndMatchMapGroupVoteOptions[10]; // 0xd18        
        // metadata: MNetworkEnable
        int32_t m_nEndMatchMapVoteWinner; // 0xd40        
        // metadata: MNetworkEnable
        int32_t m_iNumConsecutiveCTLoses; // 0xd44        
        // metadata: MNetworkEnable
        int32_t m_iNumConsecutiveTerroristLoses; // 0xd48        
        [[maybe_unused]] std::uint8_t pad_0xd4c[0x1c]; // 0xd4c
        bool m_bHasHostageBeenTouched; // 0xd68        
        [[maybe_unused]] std::uint8_t pad_0xd69[0x3]; // 0xd69
        entity2::GameTime_t m_flIntermissionStartTime; // 0xd6c        
        entity2::GameTime_t m_flIntermissionEndTime; // 0xd70        
        bool m_bLevelInitialized; // 0xd74        
        [[maybe_unused]] std::uint8_t pad_0xd75[0x3]; // 0xd75
        int32_t m_iTotalRoundsPlayed; // 0xd78        
        int32_t m_iUnBalancedRounds; // 0xd7c        
        bool m_endMatchOnRoundReset; // 0xd80        
        bool m_endMatchOnThink; // 0xd81        
        [[maybe_unused]] std::uint8_t pad_0xd82[0x2]; // 0xd82
        int32_t m_iFreezeTime; // 0xd84        
        int32_t m_iNumTerrorist; // 0xd88        
        int32_t m_iNumCT; // 0xd8c        
        int32_t m_iNumSpawnableTerrorist; // 0xd90        
        int32_t m_iNumSpawnableCT; // 0xd94        
        // m_arrSelectedHostageSpawnIndices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<int32_t> m_arrSelectedHostageSpawnIndices;
        char m_arrSelectedHostageSpawnIndices[0x18]; // 0xd98        
        int32_t m_nSpawnPointsRandomSeed; // 0xdb0        
        bool m_bFirstConnected; // 0xdb4        
        bool m_bCompleteReset; // 0xdb5        
        bool m_bPickNewTeamsOnReset; // 0xdb6        
        bool m_bScrambleTeamsOnRestart; // 0xdb7        
        bool m_bSwapTeamsOnRestart; // 0xdb8        
        [[maybe_unused]] std::uint8_t pad_0xdb9[0x7]; // 0xdb9
        // m_nEndMatchTiedVotes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<int32_t> m_nEndMatchTiedVotes;
        char m_nEndMatchTiedVotes[0x18]; // 0xdc0        
        [[maybe_unused]] std::uint8_t pad_0xdd8[0x4]; // 0xdd8
        bool m_bNeedToAskPlayersForContinueVote; // 0xddc        
        [[maybe_unused]] std::uint8_t pad_0xddd[0x3]; // 0xddd
        uint32_t m_numQueuedMatchmakingAccounts; // 0xde0        
        float m_fAvgPlayerRank; // 0xde4        
        char* m_pQueuedMatchmakingReservationString; // 0xde8        
        uint32_t m_numTotalTournamentDrops; // 0xdf0        
        uint32_t m_numSpectatorsCountMax; // 0xdf4        
        uint32_t m_numSpectatorsCountMaxTV; // 0xdf8        
        uint32_t m_numSpectatorsCountMaxLnk; // 0xdfc        
        [[maybe_unused]] std::uint8_t pad_0xe00[0x8]; // 0xe00
        bool m_bForceTeamChangeSilent; // 0xe08        
        bool m_bLoadingRoundBackupData; // 0xe09        
        [[maybe_unused]] std::uint8_t pad_0xe0a[0x36]; // 0xe0a
        int32_t m_nMatchInfoShowType; // 0xe40        
        float m_flMatchInfoDecidedTime; // 0xe44        
        [[maybe_unused]] std::uint8_t pad_0xe48[0x18]; // 0xe48
        int32_t mTeamDMLastWinningTeamNumber; // 0xe60        
        float mTeamDMLastThinkTime; // 0xe64        
        float m_flTeamDMLastAnnouncementTime; // 0xe68        
        int32_t m_iAccountTerrorist; // 0xe6c        
        int32_t m_iAccountCT; // 0xe70        
        int32_t m_iSpawnPointCount_Terrorist; // 0xe74        
        int32_t m_iSpawnPointCount_CT; // 0xe78        
        int32_t m_iMaxNumTerrorists; // 0xe7c        
        int32_t m_iMaxNumCTs; // 0xe80        
        int32_t m_iLoserBonusMostRecentTeam; // 0xe84        
        float m_tmNextPeriodicThink; // 0xe88        
        bool m_bVoiceWonMatchBragFired; // 0xe8c        
        [[maybe_unused]] std::uint8_t pad_0xe8d[0x3]; // 0xe8d
        float m_fWarmupNextChatNoticeTime; // 0xe90        
        [[maybe_unused]] std::uint8_t pad_0xe94[0x4]; // 0xe94
        int32_t m_iHostagesRescued; // 0xe98        
        int32_t m_iHostagesTouched; // 0xe9c        
        float m_flNextHostageAnnouncement; // 0xea0        
        bool m_bNoTerroristsKilled; // 0xea4        
        bool m_bNoCTsKilled; // 0xea5        
        bool m_bNoEnemiesKilled; // 0xea6        
        bool m_bCanDonateWeapons; // 0xea7        
        [[maybe_unused]] std::uint8_t pad_0xea8[0x4]; // 0xea8
        float m_firstKillTime; // 0xeac        
        [[maybe_unused]] std::uint8_t pad_0xeb0[0x4]; // 0xeb0
        float m_firstBloodTime; // 0xeb4        
        [[maybe_unused]] std::uint8_t pad_0xeb8[0x18]; // 0xeb8
        bool m_hostageWasInjured; // 0xed0        
        bool m_hostageWasKilled; // 0xed1        
        [[maybe_unused]] std::uint8_t pad_0xed2[0xe]; // 0xed2
        bool m_bVoteCalled; // 0xee0        
        bool m_bServerVoteOnReset; // 0xee1        
        [[maybe_unused]] std::uint8_t pad_0xee2[0x2]; // 0xee2
        float m_flVoteCheckThrottle; // 0xee4        
        bool m_bBuyTimeEnded; // 0xee8        
        [[maybe_unused]] std::uint8_t pad_0xee9[0x3]; // 0xee9
        int32_t m_nLastFreezeEndBeep; // 0xeec        
        bool m_bTargetBombed; // 0xef0        
        bool m_bBombDefused; // 0xef1        
        bool m_bMapHasBombZone; // 0xef2        
        [[maybe_unused]] std::uint8_t pad_0xef3[0x4d]; // 0xef3
        Vector m_vecMainCTSpawnPos; // 0xf40        
        [[maybe_unused]] std::uint8_t pad_0xf4c[0x4]; // 0xf4c
        // m_CTSpawnPointsMasterList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<server::SpawnPoint*> m_CTSpawnPointsMasterList;
        char m_CTSpawnPointsMasterList[0x18]; // 0xf50        
        // m_TerroristSpawnPointsMasterList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<server::SpawnPoint*> m_TerroristSpawnPointsMasterList;
        char m_TerroristSpawnPointsMasterList[0x18]; // 0xf68        
        bool m_bRespawningAllRespawnablePlayers; // 0xf80        
        [[maybe_unused]] std::uint8_t pad_0xf81[0x3]; // 0xf81
        int32_t m_iNextCTSpawnPoint; // 0xf84        
        float m_flCTSpawnPointUsedTime; // 0xf88        
        int32_t m_iNextTerroristSpawnPoint; // 0xf8c        
        float m_flTerroristSpawnPointUsedTime; // 0xf90        
        [[maybe_unused]] std::uint8_t pad_0xf94[0x4]; // 0xf94
        // m_CTSpawnPoints has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<server::SpawnPoint*> m_CTSpawnPoints;
        char m_CTSpawnPoints[0x18]; // 0xf98        
        // m_TerroristSpawnPoints has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<server::SpawnPoint*> m_TerroristSpawnPoints;
        char m_TerroristSpawnPoints[0x18]; // 0xfb0        
        bool m_bIsUnreservedGameServer; // 0xfc8        
        [[maybe_unused]] std::uint8_t pad_0xfc9[0x3]; // 0xfc9
        float m_fAutobalanceDisplayTime; // 0xfcc        
        [[maybe_unused]] std::uint8_t pad_0xfd0[0x268]; // 0xfd0
        bool m_bAllowWeaponSwitch; // 0x1238        
        bool m_bRoundTimeWarningTriggered; // 0x1239        
        [[maybe_unused]] std::uint8_t pad_0x123a[0x2]; // 0x123a
        entity2::GameTime_t m_phaseChangeAnnouncementTime; // 0x123c        
        float m_fNextUpdateTeamClanNamesTime; // 0x1240        
        entity2::GameTime_t m_flLastThinkTime; // 0x1244        
        float m_fAccumulatedRoundOffDamage; // 0x1248        
        int32_t m_nShorthandedBonusLastEvalRound; // 0x124c        
        [[maybe_unused]] std::uint8_t pad_0x1250[0x278]; // 0x1250
        // metadata: MNetworkEnable
        int32_t m_nMatchAbortedEarlyReason; // 0x14c8        
        bool m_bHasTriggeredRoundStartMusic; // 0x14cc        
        bool m_bSwitchingTeamsAtRoundReset; // 0x14cd        
        [[maybe_unused]] std::uint8_t pad_0x14ce[0x1a]; // 0x14ce
        // metadata: MNetworkEnable
        // metadata: MNetworkPolymorphic
        server::CCSGameModeRules* m_pGameModeRules; // 0x14e8        
        KeyValues3 m_BtGlobalBlackboard; // 0x14f0        
        [[maybe_unused]] std::uint8_t pad_0x1500[0x80]; // 0x1500
        // m_hPlayerResource has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hPlayerResource;
        char m_hPlayerResource[0x4]; // 0x1580        
        [[maybe_unused]] std::uint8_t pad_0x1584[0x4]; // 0x1584
        // metadata: MNetworkEnable
        server::CRetakeGameRules m_RetakeRules; // 0x1588        
        // m_arrTeamUniqueKillWeaponsMatch has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<int32_t> m_arrTeamUniqueKillWeaponsMatch[4];
        char m_arrTeamUniqueKillWeaponsMatch[0x60]; // 0x1720        
        bool m_bTeamLastKillUsedUniqueWeaponMatch[4]; // 0x1780        
        [[maybe_unused]] std::uint8_t pad_0x1784[0x24]; // 0x1784
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnMatchEndCountChanged"
        uint8_t m_nMatchEndCount; // 0x17a8        
        [[maybe_unused]] std::uint8_t pad_0x17a9[0x3]; // 0x17a9
        // metadata: MNetworkEnable
        int32_t m_nTTeamIntroVariant; // 0x17ac        
        // metadata: MNetworkEnable
        int32_t m_nCTTeamIntroVariant; // 0x17b0        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnTeamIntroPeriodChanged"
        bool m_bTeamIntroPeriod; // 0x17b4        
        [[maybe_unused]] std::uint8_t pad_0x17b5[0x3]; // 0x17b5
        entity2::GameTime_t m_fTeamIntroPeriodEnd; // 0x17b8        
        bool m_bPlayedTeamIntroVO; // 0x17bc        
        [[maybe_unused]] std::uint8_t pad_0x17bd[0x3]; // 0x17bd
        // metadata: MNetworkEnable
        int32_t m_iRoundEndWinnerTeam; // 0x17c0        
        // metadata: MNetworkEnable
        int32_t m_eRoundEndReason; // 0x17c4        
        // metadata: MNetworkEnable
        bool m_bRoundEndShowTimerDefend; // 0x17c8        
        [[maybe_unused]] std::uint8_t pad_0x17c9[0x3]; // 0x17c9
        // metadata: MNetworkEnable
        int32_t m_iRoundEndTimerTime; // 0x17cc        
        // metadata: MNetworkEnable
        CUtlString m_sRoundEndFunFactToken; // 0x17d0        
        // metadata: MNetworkEnable
        CPlayerSlot m_iRoundEndFunFactPlayerSlot; // 0x17d8        
        // metadata: MNetworkEnable
        int32_t m_iRoundEndFunFactData1; // 0x17dc        
        // metadata: MNetworkEnable
        int32_t m_iRoundEndFunFactData2; // 0x17e0        
        // metadata: MNetworkEnable
        int32_t m_iRoundEndFunFactData3; // 0x17e4        
        // metadata: MNetworkEnable
        CUtlString m_sRoundEndMessage; // 0x17e8        
        // metadata: MNetworkEnable
        int32_t m_iRoundEndPlayerCount; // 0x17f0        
        // metadata: MNetworkEnable
        bool m_bRoundEndNoMusic; // 0x17f4        
        [[maybe_unused]] std::uint8_t pad_0x17f5[0x3]; // 0x17f5
        // metadata: MNetworkEnable
        int32_t m_iRoundEndLegacy; // 0x17f8        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnRoundEndCountChanged"
        uint8_t m_nRoundEndCount; // 0x17fc        
        [[maybe_unused]] std::uint8_t pad_0x17fd[0x3]; // 0x17fd
        // metadata: MNetworkEnable
        int32_t m_iRoundStartRoundNumber; // 0x1800        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnRoundStartCountChanged"
        uint8_t m_nRoundStartCount; // 0x1804        
        [[maybe_unused]] std::uint8_t pad_0x1805[0x400b]; // 0x1805
        double m_flLastPerfSampleTime; // 0x5810        
        [[maybe_unused]] std::uint8_t pad_0x5818[0x10020];
        
        // Static fields:
        static int64_t &Get_m_nMapCycleTimeStamp() {return *reinterpret_cast<int64_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCSGameRules")->GetStaticFields()[0]->m_pInstance);};
        static int32_t &Get_m_nMapCycleindex() {return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCSGameRules")->GetStaticFields()[1]->m_pInstance);};
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCSGameRules because it is not a standard-layout class
    static_assert(sizeof(CCSGameRules) == 0x15838);
};
