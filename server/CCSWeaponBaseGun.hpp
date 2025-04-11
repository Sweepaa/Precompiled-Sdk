#pragma once
#include "source2sdk/server/CCSWeaponBase.hpp"
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
    // Size: 0xf88
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "int m_zoomLevel"
    // static metadata: MNetworkVarNames "int m_iBurstShotsRemaining"
    // static metadata: MNetworkVarNames "bool m_bNeedsBoltAction"
    #pragma pack(push, 1)
    class CCSWeaponBaseGun : public server::CCSWeaponBase
    {
    public:
        // metadata: MNetworkEnable
        int32_t m_zoomLevel; // 0xf68        
        // metadata: MNetworkEnable
        int32_t m_iBurstShotsRemaining; // 0xf6c        
        [[maybe_unused]] std::uint8_t pad_0xf70[0x8]; // 0xf70
        int32_t m_silencedModelIndex; // 0xf78        
        bool m_inPrecache; // 0xf7c        
        // metadata: MNetworkEnable
        bool m_bNeedsBoltAction; // 0xf7d        
        bool m_bSkillReloadAvailable; // 0xf7e        
        bool m_bSkillReloadLiftedReloadKey; // 0xf7f        
        bool m_bSkillBoltInterruptAvailable; // 0xf80        
        bool m_bSkillBoltLiftedFireKey; // 0xf81        
        [[maybe_unused]] std::uint8_t pad_0xf82[0x6];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCSWeaponBaseGun because it is not a standard-layout class
    static_assert(sizeof(CCSWeaponBaseGun) == 0xf88);
};
