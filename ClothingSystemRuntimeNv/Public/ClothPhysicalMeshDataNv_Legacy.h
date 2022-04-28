#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ClothingSystemRuntimeInterface -ObjectName=ClothPhysicalMeshDataBase_Legacy -FallbackName=ClothPhysicalMeshDataBase_Legacy
#include "ClothPhysicalMeshDataNv_Legacy.generated.h"

UCLASS(Blueprintable)
class CLOTHINGSYSTEMRUNTIMENV_API UClothPhysicalMeshDataNv_Legacy : public UClothPhysicalMeshDataBase_Legacy {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<float> MaxDistances;
    
    UPROPERTY(EditAnywhere)
    TArray<float> BackstopDistances;
    
    UPROPERTY(EditAnywhere)
    TArray<float> BackstopRadiuses;
    
    UPROPERTY(EditAnywhere)
    TArray<float> AnimDriveMultipliers;
    
    UClothPhysicalMeshDataNv_Legacy();
};

