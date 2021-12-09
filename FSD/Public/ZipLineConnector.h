#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine Actor
//CROSS-MODULE INCLUDE: CoreUObject Rotator
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "ZipLineConnector.generated.h"

class APlayerCharacter;

UCLASS(Abstract)
class AZipLineConnector : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    TWeakObjectPtr<APlayerCharacter> Character;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector ZipLineLocation;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector ZipLineDirection;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FRotator RotationOffset;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bSpeeding;
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveUpdateZipLinePoint(const FVector& WorldLocation, const FVector& Directioy, bool Speeding);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveDisconnected();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveConnected(const FVector& WorldLocation, const FVector& Direction);
    
    AZipLineConnector();
};

