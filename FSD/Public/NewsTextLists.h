#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "NewsTextLists.generated.h"

UCLASS(BlueprintType)
class UNewsTextLists : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FText> Verb;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FText> Person;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FText> Creature;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FText> Resource;
    
    UNewsTextLists();
};

