#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BoxComponent
#include "TerrainDetectInterface.h"
#include "TerrainDetectBoxComponent.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTerrainDetectBoxComponentOnBoxExcavated);

UCLASS(EditInlineNew)
class UTerrainDetectBoxComponent : public UBoxComponent, public ITerrainDetectInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FTerrainDetectBoxComponentOnBoxExcavated OnBoxExcavated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool StartDetectOnBeginPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool OnlyDetectOnServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 NumCornersToExcavate;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 NumCornersExcavated;
    
    UPROPERTY(EditAnywhere)
    bool KillActorOnPointRemoved;
    
    UFUNCTION(BlueprintCallable)
    void StartDetect();
    
    UTerrainDetectBoxComponent();
};

