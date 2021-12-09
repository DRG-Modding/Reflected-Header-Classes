#pragma once
#include "CoreMinimal.h"
#include "DeepPathfinderCharacter.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
//CROSS-MODULE INCLUDE: CoreUObject Transform
#include "CaveWorm.generated.h"

class UHealthComponentBase;
class USimpleHealthComponent;
class AResourceChunk;
class UObject;
class UResourceData;

UCLASS(MinimalAPI)
class ACaveWorm : public ADeepPathfinderCharacter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USimpleHealthComponent* Health;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SearchChunksRadius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SearchChunksInterval;
    
public:
    UFUNCTION(BlueprintCallable)
    static AResourceChunk* SpawnResource(UObject* WorldContext, UResourceData* Data, float Size, FTransform Transform, FVector Impulse, FVector DropOffset);
    
protected:
    UFUNCTION()
    void Search();
    
    UFUNCTION()
    void IncrementKillCount(UHealthComponentBase* HealthComponent);
    
public:
    UFUNCTION(BlueprintCallable)
    void DropResource(UResourceData* Data, float Size, FVector Impulse, FVector DropOffset);
    
    ACaveWorm();
};
