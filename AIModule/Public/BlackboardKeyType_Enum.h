#pragma once
#include "CoreMinimal.h"
#include "BlackboardKeyType.h"
#include "BlackboardKeyType_Enum.generated.h"

class UEnum;

UCLASS(CollapseCategories, EditInlineNew)
class AIMODULE_API UBlackboardKeyType_Enum : public UBlackboardKeyType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    UEnum* EnumType;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    FString EnumName;
    
    UPROPERTY(BlueprintReadWrite, VisibleDefaultsOnly, meta=(AllowPrivateAccess=true))
    uint8 bIsEnumNameValid: 1;
    
    UBlackboardKeyType_Enum();
};

