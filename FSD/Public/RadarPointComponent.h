#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "RadarPointComponent.generated.h"

class UUserWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FRadarPointComponentOnRemove);

UCLASS(BlueprintType)
class URadarPointComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FRadarPointComponentOnRemove OnRemove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PointPriority;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UUserWidget> WidgetClass;
    
    UFUNCTION(BlueprintCallable)
    static void MapToRadarPosition(FVector playerPos, FVector playerForward, FVector Pos, bool snap, FVector& radarPos, float& alpha);
    
    URadarPointComponent();
};

