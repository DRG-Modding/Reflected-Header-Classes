#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Guid
#include "SchematicSave.generated.h"

USTRUCT(BlueprintType)
struct FSchematicSave {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FGuid> ForgedSchematics;
    
    UPROPERTY()
    FGuid PendingReward;
    
protected:
    UPROPERTY()
    TArray<FGuid> OwnedSchematics;
    
    UPROPERTY()
    int32 SkinFixupCounter;
    
    UPROPERTY()
    bool bFirstSchematicMessageShown;
    
public:
    FSD_API FSchematicSave();
};

