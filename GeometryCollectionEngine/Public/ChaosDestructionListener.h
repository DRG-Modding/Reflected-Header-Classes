#pragma once
#include "CoreMinimal.h"
#include "OnChaosCollisionEventsDelegate.h"
#include "ChaosCollisionEventRequestSettings.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "ChaosBreakingEventRequestSettings.h"
#include "ChaosTrailingEventRequestSettings.h"
#include "OnChaosBreakingEventsDelegate.h"
#include "OnChaosTrailingEventsDelegate.h"
#include "ChaosTrailingEventData.h"
#include "EChaosTrailingSortMethod.h"
#include "ChaosBreakingEventData.h"
#include "ChaosCollisionEventData.h"
#include "EChaosCollisionSortMethod.h"
#include "EChaosBreakingSortMethod.h"
#include "ChaosDestructionListener.generated.h"

class AGeometryCollectionActor;
class AChaosSolverActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GEOMETRYCOLLECTIONENGINE_API UChaosDestructionListener : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsCollisionEventListeningEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsBreakingEventListeningEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsTrailingEventListeningEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChaosCollisionEventRequestSettings CollisionEventRequestSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChaosBreakingEventRequestSettings BreakingEventRequestSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChaosTrailingEventRequestSettings TrailingEventRequestSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<AChaosSolverActor*> ChaosSolverActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<AGeometryCollectionActor*> GeometryCollectionActors;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChaosCollisionEvents OnCollisionEvents;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChaosBreakingEvents OnBreakingEvents;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChaosTrailingEvents OnTrailingEvents;
    
    UChaosDestructionListener();
    UFUNCTION(BlueprintCallable)
    void SortTrailingEvents(UPARAM(Ref) TArray<FChaosTrailingEventData>& TrailingEvents, EChaosTrailingSortMethod SortMethod);
    
    UFUNCTION(BlueprintCallable)
    void SortCollisionEvents(UPARAM(Ref) TArray<FChaosCollisionEventData>& CollisionEvents, EChaosCollisionSortMethod SortMethod);
    
    UFUNCTION(BlueprintCallable)
    void SortBreakingEvents(UPARAM(Ref) TArray<FChaosBreakingEventData>& BreakingEvents, EChaosBreakingSortMethod SortMethod);
    
    UFUNCTION(BlueprintCallable)
    void SetTrailingEventRequestSettings(const FChaosTrailingEventRequestSettings& InSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetTrailingEventEnabled(bool bIsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetCollisionEventRequestSettings(const FChaosCollisionEventRequestSettings& InSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetCollisionEventEnabled(bool bIsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetBreakingEventRequestSettings(const FChaosBreakingEventRequestSettings& InSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetBreakingEventEnabled(bool bIsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void RemoveGeometryCollectionActor(AGeometryCollectionActor* GeometryCollectionActor);
    
    UFUNCTION(BlueprintCallable)
    void RemoveChaosSolverActor(AChaosSolverActor* ChaosSolverActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEventListening() const;
    
    UFUNCTION(BlueprintCallable)
    void AddGeometryCollectionActor(AGeometryCollectionActor* GeometryCollectionActor);
    
    UFUNCTION(BlueprintCallable)
    void AddChaosSolverActor(AChaosSolverActor* ChaosSolverActor);
    
};

