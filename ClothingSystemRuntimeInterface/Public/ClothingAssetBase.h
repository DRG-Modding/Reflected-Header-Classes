#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
//CROSS-MODULE INCLUDE: CoreUObject Guid
#include "ClothingAssetBase.generated.h"

UCLASS(Abstract)
class CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClothingAssetBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FString ImportedFilePath;
    
protected:
    UPROPERTY()
    FGuid AssetGuid;
    
public:
    UClothingAssetBase();
};

