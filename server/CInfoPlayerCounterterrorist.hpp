#pragma once
#include "source2sdk/server/SpawnPoint.hpp"
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
    // Size: 0x4f0
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CInfoPlayerCounterterrorist : public server::SpawnPoint
    {
    public:
        // No schema binary for binding
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CInfoPlayerCounterterrorist) == 0x4f0);
};
