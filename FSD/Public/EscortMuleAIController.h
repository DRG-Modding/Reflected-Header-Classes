#pragma once
#include "CoreMinimal.h"
#include "FSDAIController.h"
#include "AsyncPathRequestsInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=RandomStream -FallbackName=RandomStream
#include "EscortMuleAIController.generated.h"

class UEscortObjective;

UCLASS(Blueprintable)
class AEscortMuleAIController : public AFSDAIController, public IAsyncPathRequestsInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> CurrentPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> GaragePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PathIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentRoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UEscortObjective* EscortObj;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TunnelStartIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TunnelEndIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRandomStream RandomStream;
    
public:
    AEscortMuleAIController();
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
    
    
    // Fix for true pure virtual functions not being implemented
};

