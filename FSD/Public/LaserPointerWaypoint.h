#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "LaserPointerWaypoint.generated.h"

class APlayerCharacter;
class ALaserPointerItem;

UCLASS(Abstract, Blueprintable)
class ALaserPointerWaypoint : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<APlayerCharacter> Character;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<ALaserPointerItem> LaserPointer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector Normal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 Index;
    
public:
    ALaserPointerWaypoint();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHide();
    
};

