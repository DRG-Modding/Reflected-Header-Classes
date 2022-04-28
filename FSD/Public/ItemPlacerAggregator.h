#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagQuery -FallbackName=GameplayTagQuery
#include "ItemAggregator.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "ItemPlacerAggregator.generated.h"

class AItemMarker;
class AActor;
class UDialogDataAsset;
class AItem;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UItemPlacerAggregator : public UItemAggregator {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPlacementUpdatedDelegate, bool, InPlacementValid, const FTransform&, InPlacement);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMarkerDelegate, AItemMarker*, Marker);
    
    UPROPERTY(EditAnywhere, Transient)
    TArray<TWeakObjectPtr<AActor>> IgnoreActors;
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMarkerDelegate OnMarkerSpawned;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlacementUpdatedDelegate OnPlacementChanged;
    
    UPROPERTY(EditAnywhere)
    float PlacementDistance;
    
    UPROPERTY(EditAnywhere)
    float MaxOffsetZ;
    
    UPROPERTY(EditAnywhere)
    float MinOffsetZ;
    
    UPROPERTY(EditAnywhere)
    float ItemHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* ShoutOnPlaced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AItemMarker> MarkerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanOnlyPlaceOnTerrain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery ExcludeTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AItemMarker* PlacementMarker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AItem* Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsPlacementActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsMarkerHidden;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsMarkerValid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCanPlaceMarker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTransform LastPlacement;
    
public:
    UItemPlacerAggregator();
    UFUNCTION(BlueprintCallable)
    void ToggleValid(bool Valid);
    
    UFUNCTION(BlueprintCallable)
    void TogglePlacement(bool Inactive);
    
    UFUNCTION(BlueprintCallable)
    void ToggleMarkerHidden(bool InHidden);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPlacementEx(FTransform& Placement, bool& OutValidLocation, bool& OutValidMarker) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPlacement(FTransform& Placement) const;
    
    UFUNCTION(BlueprintCallable)
    void ClearIgnoredActors();
    
    UFUNCTION(BlueprintCallable)
    void AddIgnoredActor(AActor* InActor);
    
};

