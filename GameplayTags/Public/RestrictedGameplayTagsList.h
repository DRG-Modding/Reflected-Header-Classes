#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "RestrictedGameplayTagTableRow.h"
#include "RestrictedGameplayTagsList.generated.h"

UCLASS(NotPlaceable, Config=GameplayTags)
class GAMEPLAYTAGS_API URestrictedGameplayTagsList : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString ConfigFileName;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FRestrictedGameplayTagTableRow> RestrictedGameplayTagList;
    
    URestrictedGameplayTagsList();
};

