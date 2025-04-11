#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCSWeaponBase.hpp"
#include "source2sdk/server/EntitySpottedState_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xfe8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "bool m_bStartedArming"
    // static metadata: MNetworkVarNames "GameTime_t m_fArmedTime"
    // static metadata: MNetworkVarNames "bool m_bBombPlacedAnimation"
    // static metadata: MNetworkVarNames "bool m_bIsPlantingViaUse"
    // static metadata: MNetworkVarNames "EntitySpottedState_t m_entitySpottedState"
    #pragma pack(push, 1)
    class CC4 : public server::CCSWeaponBase
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xf68[0x30]; // 0xf68
        Vector m_vecLastValidPlayerHeldPosition; // 0xf98        
        Vector m_vecLastValidDroppedPosition; // 0xfa4        
        bool m_bDoValidDroppedPositionCheck; // 0xfb0        
        // metadata: MNetworkEnable
        bool m_bStartedArming; // 0xfb1        
        [[maybe_unused]] std::uint8_t pad_0xfb2[0x2]; // 0xfb2
        // metadata: MNetworkEnable
        entity2::GameTime_t m_fArmedTime; // 0xfb4        
        // metadata: MNetworkEnable
        bool m_bBombPlacedAnimation; // 0xfb8        
        // metadata: MNetworkEnable
        bool m_bIsPlantingViaUse; // 0xfb9        
        [[maybe_unused]] std::uint8_t pad_0xfba[0x6]; // 0xfba
        // metadata: MNetworkEnable
        server::EntitySpottedState_t m_entitySpottedState; // 0xfc0        
        int32_t m_nSpotRules; // 0xfd8        
        bool m_bPlayedArmingBeeps[7]; // 0xfdc        
        bool m_bBombPlanted; // 0xfe3        
        [[maybe_unused]] std::uint8_t pad_0xfe4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CC4 because it is not a standard-layout class
    static_assert(sizeof(CC4) == 0xfe8);
};
