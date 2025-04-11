#pragma once
#include "source2sdk/entity2/GameTick_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    class CCSWeaponBase;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xfa0
    // Has VTable
    // Construct disallowed
    // MConstructibleClassBase
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "bool m_bRedraw"
    // static metadata: MNetworkVarNames "bool m_bIsHeldByPlayer"
    // static metadata: MNetworkVarNames "bool m_bPinPulled"
    // static metadata: MNetworkVarNames "bool m_bJumpThrow"
    // static metadata: MNetworkVarNames "bool m_bThrowAnimating"
    // static metadata: MNetworkVarNames "GameTime_t m_fThrowTime"
    // static metadata: MNetworkVarNames "float m_flThrowStrength"
    // static metadata: MNetworkVarNames "float m_flThrowStrengthApproach"
    // static metadata: MNetworkVarNames "GameTime_t m_fDropTime"
    // static metadata: MNetworkVarNames "GameTime_t m_fPinPullTime"
    // static metadata: MNetworkVarNames "bool m_bJustPulledPin"
    // static metadata: MNetworkVarNames "GameTick_t m_nNextHoldTick"
    // static metadata: MNetworkVarNames "float m_flNextHoldFrac"
    // static metadata: MNetworkVarNames "CHandle< CCSWeaponBase> m_hSwitchToWeaponAfterThrow"
    #pragma pack(push, 1)
    class CBaseCSGrenade : public server::CCSWeaponBase
    {
    public:
        // metadata: MNetworkEnable
        bool m_bRedraw; // 0xf68        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnGrenadeStateChanged"
        bool m_bIsHeldByPlayer; // 0xf69        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnGrenadeStateChanged"
        bool m_bPinPulled; // 0xf6a        
        // metadata: MNetworkEnable
        bool m_bJumpThrow; // 0xf6b        
        // metadata: MNetworkEnable
        bool m_bThrowAnimating; // 0xf6c        
        [[maybe_unused]] std::uint8_t pad_0xf6d[0x3]; // 0xf6d
        // metadata: MNetworkEnable
        entity2::GameTime_t m_fThrowTime; // 0xf70        
        // metadata: MNetworkEnable
        float m_flThrowStrength; // 0xf74        
        // metadata: MNetworkEnable
        float m_flThrowStrengthApproach; // 0xf78        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_fDropTime; // 0xf7c        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_fPinPullTime; // 0xf80        
        // metadata: MNetworkEnable
        bool m_bJustPulledPin; // 0xf84        
        [[maybe_unused]] std::uint8_t pad_0xf85[0x3]; // 0xf85
        // metadata: MNetworkEnable
        entity2::GameTick_t m_nNextHoldTick; // 0xf88        
        // metadata: MNetworkEnable
        float m_flNextHoldFrac; // 0xf8c        
        // metadata: MNetworkEnable
        // m_hSwitchToWeaponAfterThrow has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CCSWeaponBase> m_hSwitchToWeaponAfterThrow;
        char m_hSwitchToWeaponAfterThrow[0x4]; // 0xf90        
        [[maybe_unused]] std::uint8_t pad_0xf94[0xc];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBaseCSGrenade because it is not a standard-layout class
    static_assert(sizeof(CBaseCSGrenade) == 0xfa0);
};
