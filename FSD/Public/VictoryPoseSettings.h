#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "VictoryPoseSettings.generated.h"

class UTexture2D;
class UActorComponent;
class UVictoryPose;
class AActor;

UCLASS(BlueprintType)
class UVictoryPoseSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UTexture2D* GenericVictoryPoseIcon;
    
protected:
    UPROPERTY(Transient)
    TArray<UVictoryPose*> LoadedVictoryPoses;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UVictoryPose* RandomVictoryPose;
    
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<UActorComponent>> ModReferencesHack;
    
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<AActor>> ModProxyHack;
    
public:
    UFUNCTION(BlueprintPure)
    TArray<UVictoryPose*> GetVictoryPoses() const;
    
    UVictoryPoseSettings();
};

