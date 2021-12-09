#pragma once
#include "CoreMinimal.h"
#include "FSDAIController.h"
#include "AsyncPathRequestsInterface.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
//CROSS-MODULE INCLUDE: CoreUObject RandomStream
#include "EscortMuleAIController.generated.h"

class UEscortObjective;

UCLASS()
class AEscortMuleAIController : public AFSDAIController, public IAsyncPathRequestsInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite)
    TArray<FVector> CurrentPath;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<FVector> GaragePath;
    
    UPROPERTY(BlueprintReadWrite)
    int32 PathIndex;
    
    UPROPERTY(BlueprintReadWrite)
    int32 CurrentRoom;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UEscortObjective* EscortObj;
    
    UPROPERTY(BlueprintReadOnly)
    int32 TunnelStartIndex;
    
    UPROPERTY(BlueprintReadOnly)
    int32 TunnelEndIndex;
    
    UPROPERTY(BlueprintReadWrite)
    FRandomStream RandomStream;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetDozerNextPathSegment();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnPathComplete();
    
public:
    UFUNCTION(BlueprintCallable)
    TArray<FVector> GetPathForDebug(int32 Segment);
    
    UFUNCTION(BlueprintPure)
    FVector GetPathEndTagent();
    
    UFUNCTION(BlueprintCallable)
    void FindDozerPath(FVector StartPosition);
    
    AEscortMuleAIController();
};

