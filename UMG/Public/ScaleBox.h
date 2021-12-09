#pragma once
#include "CoreMinimal.h"
#include "ContentWidget.h"
//CROSS-MODULE INCLUDE: Slate EStretch
//CROSS-MODULE INCLUDE: Slate EStretchDirection
#include "ScaleBox.generated.h"

UCLASS()
class UMG_API UScaleBox : public UContentWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EStretch::Type> Stretch;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EStretchDirection::Type> StretchDirection;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float UserSpecifiedScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IgnoreInheritedScale;
    
    UFUNCTION(BlueprintCallable)
    void SetUserSpecifiedScale(float InUserSpecifiedScale);
    
    UFUNCTION(BlueprintCallable)
    void SetStretchDirection(TEnumAsByte<EStretchDirection::Type> InStretchDirection);
    
    UFUNCTION(BlueprintCallable)
    void SetStretch(TEnumAsByte<EStretch::Type> InStretch);
    
    UFUNCTION(BlueprintCallable)
    void SetIgnoreInheritedScale(bool bInIgnoreInheritedScale);
    
    UScaleBox();
};

