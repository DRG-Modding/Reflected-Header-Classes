#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "Variant.generated.h"

class AActor;
class UVariantObjectBinding;
class UTexture2D;

UCLASS(BlueprintType)
class VARIANTMANAGERCONTENT_API UVariant : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FText DisplayText;
    
    UPROPERTY(Export)
    TArray<UVariantObjectBinding*> ObjectBindings;
    
    UPROPERTY()
    UTexture2D* Thumbnail;
    
public:
    UFUNCTION(BlueprintCallable)
    void SwitchOn();
    
    UFUNCTION(BlueprintCallable)
    void SetDisplayText(const FText& NewDisplayText);
    
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
    UFUNCTION(BlueprintCallable)
    UTexture2D* GetThumbnail();
    
    UFUNCTION(BlueprintPure)
    int32 GetNumActors();
    
    UFUNCTION(BlueprintPure)
    FText GetDisplayText() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetActor(int32 ActorIndex);
    
    UVariant();
};

