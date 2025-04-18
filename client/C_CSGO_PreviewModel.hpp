#pragma once
#include "source2sdk/client/AnimLoopMode_t.hpp"
#include "source2sdk/client/C_BaseFlex.hpp"
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
    // Size: 0x1650
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class C_CSGO_PreviewModel : public client::C_BaseFlex
    {
    public:
        CUtlString m_animgraph; // 0x1120        
        CGlobalSymbol m_animgraphCharacterModeString; // 0x1128        
        CUtlString m_defaultAnim; // 0x1130        
        client::AnimLoopMode_t m_nDefaultAnimLoopMode; // 0x1138        
        float m_flInitialModelScale; // 0x113c        
        CUtlString m_sInitialWeaponState; // 0x1140        
        [[maybe_unused]] std::uint8_t pad_0x1148[0x508];
        
        // Datamap fields:
        // CUtlSymbolLarge InputSetItem; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_CSGO_PreviewModel because it is not a standard-layout class
    static_assert(sizeof(C_CSGO_PreviewModel) == 0x1650);
};
