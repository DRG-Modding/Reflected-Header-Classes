#pragma once
#include "CoreMinimal.h"
#include "Widget.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector2D
#include "Spacer.generated.h"

UCLASS()
class UMG_API USpacer : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D Size;
    
    UFUNCTION(BlueprintCallable)
    void SetSize(FVector2D InSize);
    
    USpacer();
};

