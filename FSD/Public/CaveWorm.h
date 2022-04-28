#pragma once
#include "CoreMinimal.h"
#include "DeepPathfinderCharacter.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "CaveWorm.generated.h"

class USimpleHealthComponent;
class AResourceChunk;
class UObject;
class UHealthComponentBase;
class UResourceData;

UCLASS(Blueprintable, MinimalAPI)
class ACaveWorm : public ADeepPathfinderCharacter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USimpleHealthComponent* Health;
    
    UPROPERTY(EditAnywhere)
    float SearchChunksRadius;
    
    UPROPERTY(EditAnywhere)
    float SearchChunksInterval;
    
public:
    ACaveWorm();
    UFUNCTION(BlueprintCallable)
    static AResourceChunk* SpawnResource(UObject* WorldContext, UResourceData* Data, float Size, FTransform Transform, FVector Impulse, FVector DropOffset);
    
protected:
    UFUNCTION(BlueprintCallable)
    void Search();
    
    UFUNCTION(BlueprintCallable)
    void IncrementKillCount(UHealthComponentBase* HealthComponent);
    
public:
    UFUNCTION(BlueprintCallable)
    void DropResource(UResourceData* Data, float Size, FVector Impulse, FVector DropOffset);
    
};

