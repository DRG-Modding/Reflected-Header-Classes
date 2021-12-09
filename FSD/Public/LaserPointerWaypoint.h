#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine Actor
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "LaserPointerWaypoint.generated.h"

class APlayerCharacter;
class ALaserPointerItem;

UCLASS(Abstract)
class ALaserPointerWaypoint : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    TWeakObjectPtr<APlayerCharacter> Character;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TWeakObjectPtr<ALaserPointerItem> LaserPointer;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector Normal;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 Index;
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnShow();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnHide();
    
public:
    ALaserPointerWaypoint();
};

