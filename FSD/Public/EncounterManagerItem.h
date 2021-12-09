#pragma once
#include "CoreMinimal.h"
#include "ManagedEncounterItem.h"
#include "PrePlacedEncounterItem.h"
#include "EncounterManagerItem.generated.h"

class APawn;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FEncounterManagerItemCallback, APawn*, enemy);

USTRUCT(BlueprintType)
struct FEncounterManagerItem {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TArray<FManagedEncounterItem> ManagedEcnounterItems;
    
    UPROPERTY(Transient)
    TArray<FPrePlacedEncounterItem> PrePlacedEncounterItems;
    
    UPROPERTY(Transient)
    int32 ID;
    
    UPROPERTY(Transient)
    bool IsRoom;
    
    UPROPERTY(Transient)
    FEncounterManagerItemCallback Callback;
    
    FSD_API FEncounterManagerItem();
};

