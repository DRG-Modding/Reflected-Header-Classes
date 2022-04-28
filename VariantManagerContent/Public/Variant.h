#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "VariantDependency.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "Variant.generated.h"

class UVariantObjectBinding;
class UTexture2D;
class UVariantSet;
class UVariant;
class ULevelVariantSets;
class AActor;

UCLASS(Blueprintable)
class VARIANTMANAGERCONTENT_API UVariant : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVariantDependency> Dependencies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UVariantObjectBinding*> ObjectBindings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Thumbnail;
    
public:
    UVariant();
    UFUNCTION(BlueprintCallable)
    void SwitchOn();
    
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
    
    UFUNCTION(BlueprintCallable)
    void SetDependency(int32 Index, FVariantDependency& Dependency);
    
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
    UFUNCTION(BlueprintCallable)
    UTexture2D* GetThumbnail();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVariantSet* GetParent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumDependencies();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumActors();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetDisplayText() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<UVariant*> GetDependents(ULevelVariantSets* LevelVariantSets, bool bOnlyEnabledDependencies);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVariantDependency GetDependency(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetActor(int32 ActorIndex);
    
    UFUNCTION(BlueprintCallable)
    void DeleteDependency(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    int32 AddDependency(FVariantDependency& Dependency);
    
};

