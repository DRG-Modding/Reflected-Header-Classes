#pragma once
#include "CoreMinimal.h"
#include "SoftMinersManualDescription.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "MinersManualData.generated.h"

class UTexture2D;

UCLASS(BlueprintType)
class UMinersManualData : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FSoftMinersManualDescription Description;
    
public:
    UFUNCTION(BlueprintPure)
    void GetText(FText& Headline, FText& richText);
    
    UFUNCTION(BlueprintPure)
    UTexture2D* GetFrontImage();
    
    UFUNCTION(BlueprintPure)
    UTexture2D* GetBackgroundImage();
    
    UMinersManualData();
};

