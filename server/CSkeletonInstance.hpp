#pragma once
#include "source2sdk/server/CGameSceneNode.hpp"
#include "source2sdk/server/CModelState.hpp"
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
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x440
    // Has VTable
    // MClassHasEntityLimitedDataDesc
    // 
    // static metadata: MNetworkVarNames "CModelState m_modelState"
    // static metadata: MNetworkVarNames "bool m_bIsAnimationEnabled"
    // static metadata: MNetworkVarNames "bool m_bUseParentRenderBounds"
    // static metadata: MNetworkVarNames "CUtlStringToken m_materialGroup"
    // static metadata: MNetworkVarNames "uint8 m_nHitboxSet"
    #pragma pack(push, 1)
    class CSkeletonInstance : public server::CGameSceneNode
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x160[0x10]; // 0x160
        // metadata: MNetworkEnable
        server::CModelState m_modelState; // 0x170        
        // metadata: MNetworkEnable
        bool m_bIsAnimationEnabled; // 0x3a0        
        // metadata: MNetworkEnable
        bool m_bUseParentRenderBounds; // 0x3a1        
        // metadata: MNetworkDisable
        bool m_bDisableSolidCollisionsForHierarchy; // 0x3a2        
        // start of bitfield block at 0x3a3
        // metadata: MNetworkDisable
        uint8_t m_bDirtyMotionType: 1;
        // metadata: MNetworkDisable
        uint8_t m_bIsGeneratingLatchedParentSpaceState: 1;
        // end of bitfield block // 2 bits
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "skeletonMaterialGroupChanged"
        CUtlStringToken m_materialGroup; // 0x3a4        
        // metadata: MNetworkEnable
        uint8_t m_nHitboxSet; // 0x3a8        
        [[maybe_unused]] std::uint8_t pad_0x3a9[0x97];
        
        // Datamap fields:
        // Vector velocity; // 0x7fffffff
        // Vector rotationAxis; // 0x7fffffff
        // float rotationSpeed; // 0x7fffffff
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSkeletonInstance because it is not a standard-layout class
    static_assert(sizeof(CSkeletonInstance) == 0x440);
};
