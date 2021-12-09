#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
//CROSS-MODULE INCLUDE: CoreUObject Guid
#include "RejoinFloat.h"
#include "RejoinInt.h"
#include "PlayerRejoinState.generated.h"

UCLASS(BlueprintType)
class UPlayerRejoinState : public UActorComponent {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_Reset();
    
protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_AddIntValue_Internal(const FGuid& ItemKey, const FName& ValueKey, int32 Value);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_AddFloatValue_Internal(const FGuid& ItemKey, const FName& ValueKey, float Value);
    
    UFUNCTION(Client, Reliable)
    void Client_SetValues(const TArray<FRejoinFloat>& floatValues, const TArray<FRejoinInt>& intValues);
    
public:
    UPlayerRejoinState();
};

