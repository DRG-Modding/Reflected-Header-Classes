#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "DatasmithSceneActor.generated.h"

class UDatasmithScene;

UCLASS(Blueprintable)
class DATASMITHCONTENT_API ADatasmithSceneActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDatasmithScene* Scene;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, TSoftObjectPtr<AActor>> RelatedActors;
    
    ADatasmithSceneActor();
};

