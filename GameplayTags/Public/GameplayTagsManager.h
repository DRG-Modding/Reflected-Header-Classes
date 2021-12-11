#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "GameplayTagSource.h"
#include "GameplayTagsManager.generated.h"

class UDataTable;

UCLASS()
class GAMEPLAYTAGS_API UGameplayTagsManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<FGameplayTagSource> TagSources;
    
    UPROPERTY()
    TArray<UDataTable*> GameplayTagTables;
    
public:
    UGameplayTagsManager();
};

