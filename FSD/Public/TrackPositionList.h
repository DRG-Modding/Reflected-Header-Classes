#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "TrackPositionList.generated.h"

class UGemTracker;
class UMaterialInstanceDynamic;

USTRUCT(BlueprintType)
struct FTrackPositionList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TrackName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> Positions;
    
    UPROPERTY(EditAnywhere, Export)
    TArray<TWeakObjectPtr<UGemTracker>> Trackers;
    
    UPROPERTY(EditAnywhere)
    TArray<TWeakObjectPtr<UMaterialInstanceDynamic>> DynamicMaterials;
    
    FSD_API FTrackPositionList();
};

