#pragma once
#include "source2sdk/client/CPlayerPawnComponent.hpp"
#include "source2sdk/server/WeaponPurchaseTracker_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBasePlayerWeapon;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x300
    // Has VTable
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "bool m_bIsRescuing"
    // static metadata: MNetworkVarNames "WeaponPurchaseTracker_t m_weaponPurchasesThisMatch"
    // static metadata: MNetworkVarNames "WeaponPurchaseTracker_t m_weaponPurchasesThisRound"
    #pragma pack(push, 1)
    class CCSPlayer_ActionTrackingServices : public client::CPlayerPawnComponent
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x40[0x1d8]; // 0x40
        // m_hLastWeaponBeforeC4AutoSwitch has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBasePlayerWeapon> m_hLastWeaponBeforeC4AutoSwitch;
        char m_hLastWeaponBeforeC4AutoSwitch[0x4]; // 0x218        
        [[maybe_unused]] std::uint8_t pad_0x21c[0x28]; // 0x21c
        // metadata: MNetworkEnable
        bool m_bIsRescuing; // 0x244        
        [[maybe_unused]] std::uint8_t pad_0x245[0x3]; // 0x245
        // metadata: MNetworkEnable
        server::WeaponPurchaseTracker_t m_weaponPurchasesThisMatch; // 0x248        
        // metadata: MNetworkEnable
        server::WeaponPurchaseTracker_t m_weaponPurchasesThisRound; // 0x2a0        
        [[maybe_unused]] std::uint8_t pad_0x2f8[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCSPlayer_ActionTrackingServices because it is not a standard-layout class
    static_assert(sizeof(CCSPlayer_ActionTrackingServices) == 0x300);
};
