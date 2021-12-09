#pragma once
#include "CoreMinimal.h"
#include "BlackboardKeyType.h"
#include "BlackboardKeyType_Enum.generated.h"

class UEnum;

UCLASS(CollapseCategories, EditInlineNew)
class AIMODULE_API UBlackboardKeyType_Enum : public UBlackboardKeyType {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UEnum* EnumType;
    
    UPROPERTY(EditDefaultsOnly)
    FString EnumName;
    
    UPROPERTY(VisibleDefaultsOnly)
    uint8 bIsEnumNameValid: 1;
    
    UBlackboardKeyType_Enum();
};

