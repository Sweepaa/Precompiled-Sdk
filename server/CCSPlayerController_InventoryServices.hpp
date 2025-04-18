#pragma once
#include "source2sdk/client/CPlayerControllerComponent.hpp"
#include "source2sdk/client/MedalRank_t.hpp"
#include "source2sdk/server/ServerAuthoritativeWeaponSlot_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xfc0
    // Has VTable
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "item_definition_index_t m_unMusicID"
    // static metadata: MNetworkVarNames "MedalRank_t m_rank"
    // static metadata: MNetworkVarNames "int m_nPersonaDataPublicLevel"
    // static metadata: MNetworkVarNames "int m_nPersonaDataPublicCommendsLeader"
    // static metadata: MNetworkVarNames "int m_nPersonaDataPublicCommendsTeacher"
    // static metadata: MNetworkVarNames "int m_nPersonaDataPublicCommendsFriendly"
    // static metadata: MNetworkVarNames "int m_nPersonaDataXpTrailLevel"
    // static metadata: MNetworkVarNames "ServerAuthoritativeWeaponSlot_t m_vecServerAuthoritativeWeaponSlots"
    #pragma pack(push, 1)
    class CCSPlayerController_InventoryServices : public client::CPlayerControllerComponent
    {
    public:
        // metadata: MNetworkEnable
        uint16_t m_unMusicID; // 0x40        
        [[maybe_unused]] std::uint8_t pad_0x42[0x2]; // 0x42
        // metadata: MNetworkEnable
        client::MedalRank_t m_rank[6]; // 0x44        
        // metadata: MNetworkEnable
        int32_t m_nPersonaDataPublicLevel; // 0x5c        
        // metadata: MNetworkEnable
        int32_t m_nPersonaDataPublicCommendsLeader; // 0x60        
        // metadata: MNetworkEnable
        int32_t m_nPersonaDataPublicCommendsTeacher; // 0x64        
        // metadata: MNetworkEnable
        int32_t m_nPersonaDataPublicCommendsFriendly; // 0x68        
        // metadata: MNetworkEnable
        int32_t m_nPersonaDataXpTrailLevel; // 0x6c        
        [[maybe_unused]] std::uint8_t pad_0x70[0xed8]; // 0x70
        uint32_t m_unEquippedPlayerSprayIDs[1]; // 0xf48        
        [[maybe_unused]] std::uint8_t pad_0xf4c[0x4]; // 0xf4c
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        // m_vecServerAuthoritativeWeaponSlots has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVectorEmbeddedNetworkVar<server::ServerAuthoritativeWeaponSlot_t> m_vecServerAuthoritativeWeaponSlots;
        char m_vecServerAuthoritativeWeaponSlots[0x70]; // 0xf50        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCSPlayerController_InventoryServices because it is not a standard-layout class
    static_assert(sizeof(CCSPlayerController_InventoryServices) == 0xfc0);
};
