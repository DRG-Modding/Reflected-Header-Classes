#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
//CROSS-MODULE INCLUDE: Engine Interface_AssetUserData
#include "DatasmithScene.generated.h"

UCLASS()
class DATASMITHCONTENT_API UDatasmithScene : public UObject, public IInterface_AssetUserData {
    GENERATED_BODY()
public:
    UDatasmithScene();
};

