#pragma once
#include "CoreMinimal.h"
#include "ContentWidget.h"
#include "SizeBox.generated.h"

UCLASS()
class UMG_API USizeBox : public UContentWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float WidthOverride;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float HeightOverride;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinDesiredWidth;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinDesiredHeight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxDesiredWidth;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxDesiredHeight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinAspectRatio;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxAspectRatio;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverride_WidthOverride: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverride_HeightOverride: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverride_MinDesiredWidth: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverride_MinDesiredHeight: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverride_MaxDesiredWidth: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverride_MaxDesiredHeight: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverride_MinAspectRatio: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverride_MaxAspectRatio: 1;
    
    UFUNCTION(BlueprintCallable)
    void SetWidthOverride(float InWidthOverride);
    
    UFUNCTION(BlueprintCallable)
    void SetMinDesiredWidth(float InMinDesiredWidth);
    
    UFUNCTION(BlueprintCallable)
    void SetMinDesiredHeight(float InMinDesiredHeight);
    
    UFUNCTION(BlueprintCallable)
    void SetMinAspectRatio(float InMinAspectRatio);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxDesiredWidth(float InMaxDesiredWidth);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxDesiredHeight(float InMaxDesiredHeight);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxAspectRatio(float InMaxAspectRatio);
    
    UFUNCTION(BlueprintCallable)
    void SetHeightOverride(float InHeightOverride);
    
    UFUNCTION(BlueprintCallable)
    void ClearWidthOverride();
    
    UFUNCTION(BlueprintCallable)
    void ClearMinDesiredWidth();
    
    UFUNCTION(BlueprintCallable)
    void ClearMinDesiredHeight();
    
    UFUNCTION(BlueprintCallable)
    void ClearMinAspectRatio();
    
    UFUNCTION(BlueprintCallable)
    void ClearMaxDesiredWidth();
    
    UFUNCTION(BlueprintCallable)
    void ClearMaxDesiredHeight();
    
    UFUNCTION(BlueprintCallable)
    void ClearMaxAspectRatio();
    
    UFUNCTION(BlueprintCallable)
    void ClearHeightOverride();
    
    USizeBox();
};

