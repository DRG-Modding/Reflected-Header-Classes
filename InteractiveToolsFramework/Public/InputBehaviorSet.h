#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "BehaviorInfo.h"
#include "InputBehaviorSet.generated.h"

UCLASS(Blueprintable, Transient)
class INTERACTIVETOOLSFRAMEWORK_API UInputBehaviorSet : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBehaviorInfo> Behaviors;
    
public:
    UInputBehaviorSet();
};

