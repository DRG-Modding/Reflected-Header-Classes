#pragma once
#include "CoreMinimal.h"
#include "ContentWidget.h"
#include "SafeZone.generated.h"

UCLASS()
class UMG_API USafeZone : public UContentWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool PadLeft;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool PadRight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool PadTop;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool PadBottom;
    
    UFUNCTION(BlueprintCallable)
    void SetSidesToPad(bool InPadLeft, bool InPadRight, bool InPadTop, bool InPadBottom);
    
    USafeZone();
};

