#pragma once
#include "CoreMinimal.h"
#include "ContentWidget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Slate -ObjectName=EStretch -FallbackName=EStretch
//CROSS-MODULE INCLUDE V2: -ModuleName=Slate -ObjectName=EStretchDirection -FallbackName=EStretchDirection
#include "ScaleBox.generated.h"

UCLASS()
class UMG_API UScaleBox : public UContentWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EStretch::Type> Stretch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EStretchDirection::Type> StretchDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UserSpecifiedScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IgnoreInheritedScale;
    
    UScaleBox();
    UFUNCTION(BlueprintCallable)
    void SetUserSpecifiedScale(float InUserSpecifiedScale);
    
    UFUNCTION(BlueprintCallable)
    void SetStretchDirection(TEnumAsByte<EStretchDirection::Type> InStretchDirection);
    
    UFUNCTION(BlueprintCallable)
    void SetStretch(TEnumAsByte<EStretch::Type> InStretch);
    
    UFUNCTION(BlueprintCallable)
    void SetIgnoreInheritedScale(bool bInIgnoreInheritedScale);
    
};

