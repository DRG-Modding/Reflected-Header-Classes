#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ELaserPointerMarkerType.h"
#include "LaserPointerData.h"
#include "ELaserPointerTargetType.h"
#include "AnimatedItem.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
//CROSS-MODULE INCLUDE: CoreUObject LinearColor
//CROSS-MODULE INCLUDE: Engine HitResult
//CROSS-MODULE INCLUDE: CoreUObject Guid
//CROSS-MODULE INCLUDE: CoreUObject Transform
#include "LaserPointerItem.generated.h"

class UTexture2D;
class UObject;
class ALaserPointerMarker;
class AActor;
class ALaserPointerWaypoint;
class UDialogDataAsset;
class USceneComponent;
class UObjectInfoComponent;
class UTerrainMaterial;
class AFSDGameState;
class UPrimitiveComponent;
class UHealthComponentBase;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FLaserPointerItemOnMarkerPlaced, FVector, Location, const FText&, Name, FLinearColor, Color, AActor*, Target, ELaserPointerTargetType, TypeOfTarget);

UCLASS(Abstract)
class ALaserPointerItem : public AAnimatedItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FLaserPointerItemOnMarkerPlaced OnMarkerPlaced;
    
protected:
    UPROPERTY(EditAnywhere)
    TSubclassOf<ALaserPointerMarker> MarkerType;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<ALaserPointerMarker> SecondaryMarkerType;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<ALaserPointerMarker> ActiveMarker;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<ALaserPointerWaypoint> WaypointType;
    
    UPROPERTY(EditAnywhere)
    int32 MaxWaypoints;
    
    UPROPERTY(Transient)
    TArray<ALaserPointerWaypoint*> Waypoints;
    
    UPROPERTY(Transient)
    int32 NextWaypointIndex;
    
    UPROPERTY(EditAnywhere)
    float MarkerLifeTime;
    
    UPROPERTY(EditAnywhere)
    FLinearColor ColorMinerals;
    
    UPROPERTY(EditAnywhere)
    FLinearColor ColorEnemy;
    
    UPROPERTY(EditAnywhere)
    FLinearColor ColorOther;
    
    UPROPERTY(EditAnywhere)
    UDialogDataAsset* DefaultLookAtShout;
    
    UPROPERTY(EditAnywhere)
    UDialogDataAsset* DefaultEnemyShout;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USceneComponent* PointerComponent;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FHitResult LookAtHit;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    TWeakObjectPtr<UObjectInfoComponent> LookAtInfo;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TWeakObjectPtr<UTerrainMaterial> LookAtTerrainMaterial;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FLaserPointerData LookAtData;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float LookAtDistance;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UDialogDataAsset* LookAtShout;
    
    UPROPERTY(Transient)
    AFSDGameState* GameState;
    
    UFUNCTION(BlueprintCallable)
    void UnlockToMinersManual(UObject* WorldContextObject, FGuid ObjectID);
    
public:
    UFUNCTION(BlueprintNativeEvent)
    void ToggleLaserVisible(bool aVisible);
    
protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerPlaceMarker(FVector Location, AActor* Actor, UPrimitiveComponent* Cmponent, UTerrainMaterial* TerrainMaterial, ELaserPointerMarkerType eMarkerType);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SecondaryUse();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPointOfInterest(AActor* TargetActor, FVector TargetLocation, UTexture2D* TargetIcon);
    
    UFUNCTION()
    void OnDeath(UHealthComponentBase* Health);
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    void GetPointTransform(FTransform& PointTransform);
    
public:
    ALaserPointerItem();
};

