#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ClothingSystemRuntimeInterface -ObjectName=ClothPhysicalMeshDataBase_Legacy -FallbackName=ClothPhysicalMeshDataBase_Legacy
#include "ClothPhysicalMeshDataNv_Legacy.generated.h"

UCLASS()
class CLOTHINGSYSTEMRUNTIMENV_API UClothPhysicalMeshDataNv_Legacy : public UClothPhysicalMeshDataBase_Legacy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<float> MaxDistances;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<float> BackstopDistances;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<float> BackstopRadiuses;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<float> AnimDriveMultipliers;
    
    UClothPhysicalMeshDataNv_Legacy();
};

