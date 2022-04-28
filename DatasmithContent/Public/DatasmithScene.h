#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Interface_AssetUserData -FallbackName=Interface_AssetUserData
#include "DatasmithScene.generated.h"

UCLASS(Blueprintable)
class DATASMITHCONTENT_API UDatasmithScene : public UObject, public IInterface_AssetUserData {
    GENERATED_BODY()
public:
    UDatasmithScene();
    
    // Fix for true pure virtual functions not being implemented
};

