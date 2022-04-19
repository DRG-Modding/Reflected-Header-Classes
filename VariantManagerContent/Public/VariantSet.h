#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "VariantSet.generated.h"

class UTexture2D;
class ULevelVariantSets;
class UVariant;

UCLASS(BlueprintType)
class VARIANTMANAGERCONTENT_API UVariantSet : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FText DisplayText;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bExpanded;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<UVariant*> Variants;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UTexture2D* Thumbnail;
    
public:
    UVariantSet();
    UFUNCTION(BlueprintCallable)
    void SetThumbnailFromTexture(UTexture2D* NewThumbnail);
    
    UFUNCTION(BlueprintCallable)
    void SetThumbnailFromFile(const FString& FilePath);
    
    UFUNCTION(BlueprintCallable)
    void SetThumbnailFromEditorViewport();
    
    UFUNCTION(BlueprintCallable)
    void SetThumbnailFromCamera(UObject* WorldContextObject, const FTransform& CameraTransform, float FOVDegrees, float MinZ, float Gamma);
    
    UFUNCTION(BlueprintCallable)
    void SetDisplayText(const FText& NewDisplayText);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVariant* GetVariantByName(const FString& VariantName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVariant* GetVariant(int32 VariantIndex);
    
    UFUNCTION(BlueprintCallable)
    UTexture2D* GetThumbnail();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULevelVariantSets* GetParent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumVariants() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetDisplayText() const;
    
};

