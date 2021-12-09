#pragma once
#include "CoreMinimal.h"
#include "AnimNode_BlendListBase.h"
#include "AnimNode_BlendListByEnum.generated.h"

USTRUCT(BlueprintType)
struct ANIMGRAPHRUNTIME_API FAnimNode_BlendListByEnum : public FAnimNode_BlendListBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<int32> EnumToPoseIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 ActiveEnumValue;
    
    FAnimNode_BlendListByEnum();
};

