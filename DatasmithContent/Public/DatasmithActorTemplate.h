#pragma once
#include "CoreMinimal.h"
#include "DatasmithObjectTemplate.h"
#include "DatasmithActorTemplate.generated.h"

UCLASS()
class DATASMITHCONTENT_API UDatasmithActorTemplate : public UDatasmithObjectTemplate {
    GENERATED_BODY()
public:
    UPROPERTY()
    TSet<FName> Layers;
    
    UPROPERTY()
    TSet<FName> Tags;
    
    UDatasmithActorTemplate();
};

