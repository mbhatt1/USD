//
// Copyright 2016 Pixar
//
// Licensed under the Apache License, Version 2.0 (the "Apache License")
// with the following modification; you may not use this file except in
// compliance with the Apache License and the following modification to it:
// Section 6. Trademarks. is deleted and replaced with:
//
// 6. Trademarks. This License does not grant permission to use the trade
//    names, trademarks, service marks, or product names of the Licensor
//    and its affiliates, except as required to comply with Section 4(c) of
//    the License and to reproduce the content of the NOTICE file.
//
// You may obtain a copy of the Apache License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the Apache License with the above modification is
// distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
// KIND, either express or implied. See the Apache License for the specific
// language governing permissions and limitations under the Apache License.
//
#include "pxr/usd/usdPhysics/tokens.h"

PXR_NAMESPACE_OPEN_SCOPE

UsdPhysicsTokensType::UsdPhysicsTokensType() :
    acceleration("acceleration", TfToken::Immortal),
    angular("angular", TfToken::Immortal),
    boundingCube("boundingCube", TfToken::Immortal),
    boundingSphere("boundingSphere", TfToken::Immortal),
    colliders("colliders", TfToken::Immortal),
    convexDecomposition("convexDecomposition", TfToken::Immortal),
    convexHull("convexHull", TfToken::Immortal),
    distance("distance", TfToken::Immortal),
    drive("drive", TfToken::Immortal),
    drive_MultipleApplyTemplate_PhysicsDamping("drive:__INSTANCE_NAME__:physics:damping", TfToken::Immortal),
    drive_MultipleApplyTemplate_PhysicsMaxForce("drive:__INSTANCE_NAME__:physics:maxForce", TfToken::Immortal),
    drive_MultipleApplyTemplate_PhysicsStiffness("drive:__INSTANCE_NAME__:physics:stiffness", TfToken::Immortal),
    drive_MultipleApplyTemplate_PhysicsTargetPosition("drive:__INSTANCE_NAME__:physics:targetPosition", TfToken::Immortal),
    drive_MultipleApplyTemplate_PhysicsTargetVelocity("drive:__INSTANCE_NAME__:physics:targetVelocity", TfToken::Immortal),
    drive_MultipleApplyTemplate_PhysicsType("drive:__INSTANCE_NAME__:physics:type", TfToken::Immortal),
    force("force", TfToken::Immortal),
    kilogramsPerUnit("kilogramsPerUnit", TfToken::Immortal),
    limit("limit", TfToken::Immortal),
    limit_MultipleApplyTemplate_PhysicsHigh("limit:__INSTANCE_NAME__:physics:high", TfToken::Immortal),
    limit_MultipleApplyTemplate_PhysicsLow("limit:__INSTANCE_NAME__:physics:low", TfToken::Immortal),
    linear("linear", TfToken::Immortal),
    meshSimplification("meshSimplification", TfToken::Immortal),
    none("none", TfToken::Immortal),
    physicsAngularVelocity("physics:angularVelocity", TfToken::Immortal),
    physicsApproximation("physics:approximation", TfToken::Immortal),
    physicsAxis("physics:axis", TfToken::Immortal),
    physicsBody0("physics:body0", TfToken::Immortal),
    physicsBody1("physics:body1", TfToken::Immortal),
    physicsBreakForce("physics:breakForce", TfToken::Immortal),
    physicsBreakTorque("physics:breakTorque", TfToken::Immortal),
    physicsCenterOfMass("physics:centerOfMass", TfToken::Immortal),
    physicsCollisionEnabled("physics:collisionEnabled", TfToken::Immortal),
    physicsConeAngle0Limit("physics:coneAngle0Limit", TfToken::Immortal),
    physicsConeAngle1Limit("physics:coneAngle1Limit", TfToken::Immortal),
    physicsDensity("physics:density", TfToken::Immortal),
    physicsDiagonalInertia("physics:diagonalInertia", TfToken::Immortal),
    physicsDynamicFriction("physics:dynamicFriction", TfToken::Immortal),
    physicsExcludeFromArticulation("physics:excludeFromArticulation", TfToken::Immortal),
    physicsFilteredGroups("physics:filteredGroups", TfToken::Immortal),
    physicsFilteredPairs("physics:filteredPairs", TfToken::Immortal),
    physicsGravityDirection("physics:gravityDirection", TfToken::Immortal),
    physicsGravityMagnitude("physics:gravityMagnitude", TfToken::Immortal),
    physicsJointEnabled("physics:jointEnabled", TfToken::Immortal),
    physicsKinematicEnabled("physics:kinematicEnabled", TfToken::Immortal),
    physicsLocalPos0("physics:localPos0", TfToken::Immortal),
    physicsLocalPos1("physics:localPos1", TfToken::Immortal),
    physicsLocalRot0("physics:localRot0", TfToken::Immortal),
    physicsLocalRot1("physics:localRot1", TfToken::Immortal),
    physicsLowerLimit("physics:lowerLimit", TfToken::Immortal),
    physicsMass("physics:mass", TfToken::Immortal),
    physicsMaxDistance("physics:maxDistance", TfToken::Immortal),
    physicsMinDistance("physics:minDistance", TfToken::Immortal),
    physicsPrincipalAxes("physics:principalAxes", TfToken::Immortal),
    physicsRestitution("physics:restitution", TfToken::Immortal),
    physicsRigidBodyEnabled("physics:rigidBodyEnabled", TfToken::Immortal),
    physicsSimulationOwner("physics:simulationOwner", TfToken::Immortal),
    physicsStartsAsleep("physics:startsAsleep", TfToken::Immortal),
    physicsStaticFriction("physics:staticFriction", TfToken::Immortal),
    physicsUpperLimit("physics:upperLimit", TfToken::Immortal),
    physicsVelocity("physics:velocity", TfToken::Immortal),
    rotX("rotX", TfToken::Immortal),
    rotY("rotY", TfToken::Immortal),
    rotZ("rotZ", TfToken::Immortal),
    transX("transX", TfToken::Immortal),
    transY("transY", TfToken::Immortal),
    transZ("transZ", TfToken::Immortal),
    x("X", TfToken::Immortal),
    y("Y", TfToken::Immortal),
    z("Z", TfToken::Immortal),
    allTokens({
        acceleration,
        angular,
        boundingCube,
        boundingSphere,
        colliders,
        convexDecomposition,
        convexHull,
        distance,
        drive,
        drive_MultipleApplyTemplate_PhysicsDamping,
        drive_MultipleApplyTemplate_PhysicsMaxForce,
        drive_MultipleApplyTemplate_PhysicsStiffness,
        drive_MultipleApplyTemplate_PhysicsTargetPosition,
        drive_MultipleApplyTemplate_PhysicsTargetVelocity,
        drive_MultipleApplyTemplate_PhysicsType,
        force,
        kilogramsPerUnit,
        limit,
        limit_MultipleApplyTemplate_PhysicsHigh,
        limit_MultipleApplyTemplate_PhysicsLow,
        linear,
        meshSimplification,
        none,
        physicsAngularVelocity,
        physicsApproximation,
        physicsAxis,
        physicsBody0,
        physicsBody1,
        physicsBreakForce,
        physicsBreakTorque,
        physicsCenterOfMass,
        physicsCollisionEnabled,
        physicsConeAngle0Limit,
        physicsConeAngle1Limit,
        physicsDensity,
        physicsDiagonalInertia,
        physicsDynamicFriction,
        physicsExcludeFromArticulation,
        physicsFilteredGroups,
        physicsFilteredPairs,
        physicsGravityDirection,
        physicsGravityMagnitude,
        physicsJointEnabled,
        physicsKinematicEnabled,
        physicsLocalPos0,
        physicsLocalPos1,
        physicsLocalRot0,
        physicsLocalRot1,
        physicsLowerLimit,
        physicsMass,
        physicsMaxDistance,
        physicsMinDistance,
        physicsPrincipalAxes,
        physicsRestitution,
        physicsRigidBodyEnabled,
        physicsSimulationOwner,
        physicsStartsAsleep,
        physicsStaticFriction,
        physicsUpperLimit,
        physicsVelocity,
        rotX,
        rotY,
        rotZ,
        transX,
        transY,
        transZ,
        x,
        y,
        z
    })
{
}

TfStaticData<UsdPhysicsTokensType> UsdPhysicsTokens;

PXR_NAMESPACE_CLOSE_SCOPE
