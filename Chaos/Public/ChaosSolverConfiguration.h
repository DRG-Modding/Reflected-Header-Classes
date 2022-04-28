#pragma once
#include "CoreMinimal.h"
#include "EClusterUnionMethod.h"
#include "SolverCollisionFilterSettings.h"
#include "SolverBreakingFilterSettings.h"
#include "SolverTrailingFilterSettings.h"
#include "ChaosSolverConfiguration.generated.h"

USTRUCT(BlueprintType)
struct FChaosSolverConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Iterations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CollisionPairIterations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PushOutIterations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CollisionPushOutPairIterations;
    
    UPROPERTY(EditAnywhere)
    float CollisionMarginFraction;
    
    UPROPERTY(EditAnywhere)
    float CollisionMarginMax;
    
    UPROPERTY(EditAnywhere)
    float CollisionCullDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 JointPairIterations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 JointPushOutPairIterations;
    
    UPROPERTY(EditAnywhere)
    float ClusterConnectionFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EClusterUnionMethod ClusterUnionConnectionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGenerateCollisionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSolverCollisionFilterSettings CollisionFilterSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGenerateBreakData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSolverBreakingFilterSettings BreakingFilterSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGenerateTrailingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSolverTrailingFilterSettings TrailingFilterSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGenerateContactGraph;
    
    CHAOS_API FChaosSolverConfiguration();
};

