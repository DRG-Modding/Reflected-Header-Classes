#pragma once
#include "CoreMinimal.h"
#include "GameplayTagTableRow.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "GameplayTagsList.generated.h"

UCLASS(NotPlaceable, Config=GameplayTagsList)
class GAMEPLAYTAGS_API UGameplayTagsList : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString ConfigFileName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTagTableRow> GameplayTagList;
    
    UGameplayTagsList();
};

