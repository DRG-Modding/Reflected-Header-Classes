#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject RandomStream
#include "FSDAIController.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "AsyncPathRequestsInterface.h"
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
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPathComplete();
    
public:
    UFUNCTION(BlueprintCallable)
    TArray<FVector> GetPathForDebug(int32 Segment);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetPathEndTagent();
    
    UFUNCTION(BlueprintCallable)
    void FindDozerPath(FVector StartPosition);
    
    AEscortMuleAIController();
    
    // Fix for true pure virtual functions not being implemented
};

