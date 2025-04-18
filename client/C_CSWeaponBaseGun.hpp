#pragma once
#include "source2sdk/client/C_CSWeaponBase.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x10
    // Alignment: 0x10
    // Standard-layout class: false
    // Size: 0x1b40
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "int m_zoomLevel"
    // static metadata: MNetworkVarNames "int m_iBurstShotsRemaining"
    // static metadata: MNetworkVarNames "bool m_bNeedsBoltAction"
    #pragma pack(push, 1)
    class C_CSWeaponBaseGun : public client::C_CSWeaponBase
    {
    public:
        // metadata: MNetworkEnable
        int32_t m_zoomLevel; // 0x1b20        
        // metadata: MNetworkEnable
        int32_t m_iBurstShotsRemaining; // 0x1b24        
        int32_t m_iSilencerBodygroup; // 0x1b28        
        [[maybe_unused]] std::uint8_t pad_0x1b2c[0xc]; // 0x1b2c
        int32_t m_silencedModelIndex; // 0x1b38        
        bool m_inPrecache; // 0x1b3c        
        // metadata: MNetworkEnable
        bool m_bNeedsBoltAction; // 0x1b3d        
        [[maybe_unused]] std::uint8_t pad_0x1b3e[0x2];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_CSWeaponBaseGun because it is not a standard-layout class
    static_assert(sizeof(C_CSWeaponBaseGun) == 0x1b40);
};
