#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBaseTrigger.hpp"
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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x9f0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "bool m_bBombPlantedHere"
    #pragma pack(push, 1)
    class CBombTarget : public server::CBaseTrigger
    {
    public:
        entity2::CEntityIOOutput m_OnBombExplode; // 0x960        
        entity2::CEntityIOOutput m_OnBombPlanted; // 0x988        
        entity2::CEntityIOOutput m_OnBombDefused; // 0x9b0        
        bool m_bIsBombSiteB; // 0x9d8        
        bool m_bIsHeistBombTarget; // 0x9d9        
        // metadata: MNetworkEnable
        bool m_bBombPlantedHere; // 0x9da        
        [[maybe_unused]] std::uint8_t pad_0x9db[0x5]; // 0x9db
        CUtlSymbolLarge m_szMountTarget; // 0x9e0        
        // m_hInstructorHint has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hInstructorHint;
        char m_hInstructorHint[0x4]; // 0x9e8        
        int32_t m_nBombSiteDesignation; // 0x9ec        
        
        // Datamap fields:
        // void CBombTargetCBombTargetShim::Touch; // 0x0
        // void CBombTargetCBombTargetShim::BombTargetUse; // 0x0
        // void OnBombExplode; // 0x0
        // void OnBombPlanted; // 0x0
        // void OnBombDefused; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBombTarget because it is not a standard-layout class
    static_assert(sizeof(CBombTarget) == 0x9f0);
};
