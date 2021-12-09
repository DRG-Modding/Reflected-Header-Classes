#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Color
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "AISenseConfig.generated.h"

UCLASS(Abstract, BlueprintType, EditInlineNew, Config=Game)
class AIMODULE_API UAISenseConfig : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    FColor DebugColor;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MaxAge;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bStartsEnabled: 1;
    
public:
    UAISenseConfig();
};

