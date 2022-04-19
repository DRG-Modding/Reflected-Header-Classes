#pragma once
#include "CoreMinimal.h"
#include "EClusterUnionMethod.generated.h"

UENUM()
enum class EClusterUnionMethod : uint8 {
    PointImplicit,
    DelaunayTriangulation,
    MinimalSpanningSubsetDelaunayTriangulation,
    PointImplicitAugmentedWithMinimalDelaunay,
    None,
};

