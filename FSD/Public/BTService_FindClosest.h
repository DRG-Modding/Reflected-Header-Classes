#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BlackboardKeySelector -FallbackName=BlackboardKeySelector
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTService -FallbackName=BTService
#include "BTService_FindClosest.generated.h"

class UTargetValidator;

UCLASS(Blueprintable)
class FSD_API UBTService_FindClosest : public UBTService {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector TargetKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTargetValidator* TargetValidator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MustBeAlive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OwnerIsMultiTargeter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ClearTargetIfNotValid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetingRange;
    
public:
    UBTService_FindClosest();
};

