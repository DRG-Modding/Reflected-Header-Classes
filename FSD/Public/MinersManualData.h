#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "SoftMinersManualDescription.h"
#include "MinersManualData.generated.h"

class UTexture2D;

UCLASS(BlueprintType)
class UMinersManualData : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftMinersManualDescription Description;
    
public:
    UMinersManualData();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetText(FText& Headline, FText& richText);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetFrontImage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetBackgroundImage();
    
};

