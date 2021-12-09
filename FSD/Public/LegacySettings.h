#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "LegacySettings.generated.h"

class USkeletalMesh;

UCLASS()
class FSD_API ULegacySettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<TSoftObjectPtr<USkeletalMesh>> ArmorMeshes;
    
    ULegacySettings();
};
