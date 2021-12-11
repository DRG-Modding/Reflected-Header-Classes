#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "GameplayTagTableRow.h"
#include "GameplayTagsList.generated.h"

UCLASS(NotPlaceable, Config=GameplayTagsList)
class GAMEPLAYTAGS_API UGameplayTagsList : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString ConfigFileName;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FGameplayTagTableRow> GameplayTagList;
    
    UGameplayTagsList();
};

