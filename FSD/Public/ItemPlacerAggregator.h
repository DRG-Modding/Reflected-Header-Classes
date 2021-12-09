#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ItemAggregator.h"
//CROSS-MODULE INCLUDE: GameplayTags GameplayTagQuery
//CROSS-MODULE INCLUDE: CoreUObject Transform
#include "ItemPlacerAggregator.generated.h"

class AActor;
class AItem;
class UDialogDataAsset;
class AItemMarker;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FItemPlacerAggregatorOnMarkerSpawned, AItemMarker*, Marker);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FItemPlacerAggregatorOnPlacementChanged, bool, InPlacementValid, const FTransform&, InPlacement);

UCLASS()
class UItemPlacerAggregator : public UItemAggregator {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TArray<TWeakObjectPtr<AActor>> IgnoreActors;
    
protected:
    UPROPERTY(BlueprintAssignable)
    FItemPlacerAggregatorOnMarkerSpawned OnMarkerSpawned;
    
    UPROPERTY(BlueprintAssignable)
    FItemPlacerAggregatorOnPlacementChanged OnPlacementChanged;
    
    UPROPERTY(EditAnywhere)
    float PlacementDistance;
    
    UPROPERTY(EditAnywhere)
    float MaxOffsetZ;
    
    UPROPERTY(EditAnywhere)
    float MinOffsetZ;
    
    UPROPERTY(EditAnywhere)
    float ItemHeight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDialogDataAsset* ShoutOnPlaced;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AItemMarker> MarkerType;
    
    UPROPERTY(EditAnywhere)
    bool CanOnlyPlaceOnTerrain;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagQuery ExcludeTags;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    AItemMarker* PlacementMarker;
    
    UPROPERTY(Transient)
    AItem* Item;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bIsPlacementActive;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bIsMarkerHidden;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bIsMarkerValid;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bCanPlaceMarker;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FTransform LastPlacement;
    
public:
    UFUNCTION(BlueprintCallable)
    void ToggleValid(bool Valid);
    
    UFUNCTION(BlueprintCallable)
    void TogglePlacement(bool Inactive);
    
    UFUNCTION(BlueprintCallable)
    void ToggleMarkerHidden(bool InHidden);
    
    UFUNCTION(BlueprintPure)
    void GetPlacementEx(FTransform& Placement, bool& OutValidLocation, bool& OutValidMarker) const;
    
    UFUNCTION(BlueprintPure)
    bool GetPlacement(FTransform& Placement) const;
    
    UFUNCTION(BlueprintCallable)
    void ClearIgnoredActors();
    
    UFUNCTION(BlueprintCallable)
    void AddIgnoredActor(AActor* InActor);
    
    UItemPlacerAggregator();
};
