#pragma once
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x608
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CEnvSoundscape : public client::C_BaseEntity
    {
    public:
        entity2::CEntityIOOutput m_OnPlay; // 0x568        
        float m_flRadius; // 0x590        
        [[maybe_unused]] std::uint8_t pad_0x594[0x4]; // 0x594
        CUtlSymbolLarge m_soundEventName; // 0x598        
        bool m_bOverrideWithEvent; // 0x5a0        
        [[maybe_unused]] std::uint8_t pad_0x5a1[0x3]; // 0x5a1
        int32_t m_soundscapeIndex; // 0x5a4        
        int32_t m_soundscapeEntityListId; // 0x5a8        
        [[maybe_unused]] std::uint8_t pad_0x5ac[0x4]; // 0x5ac
        CUtlSymbolLarge m_positionNames[8]; // 0x5b0        
        // m_hProxySoundscape has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::CEnvSoundscape> m_hProxySoundscape;
        char m_hProxySoundscape[0x4]; // 0x5f0        
        bool m_bDisabled; // 0x5f4        
        [[maybe_unused]] std::uint8_t pad_0x5f5[0x3]; // 0x5f5
        CUtlSymbolLarge m_soundscapeName; // 0x5f8        
        uint32_t m_soundEventHash; // 0x600        
        [[maybe_unused]] std::uint8_t pad_0x604[0x4];
        
        // Datamap fields:
        // void InputEnable; // 0x0
        // void InputDisable; // 0x0
        // void InputToggleEnabled; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CEnvSoundscape because it is not a standard-layout class
    static_assert(sizeof(CEnvSoundscape) == 0x608);
};
