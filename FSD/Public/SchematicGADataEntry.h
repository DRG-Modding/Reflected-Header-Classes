#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine TableRowBase
#include "SchematicGADataEntry.generated.h"

USTRUCT()
struct FSchematicGADataEntry : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    int32 SchematicGAID;
    
    UPROPERTY(VisibleAnywhere)
    FString SchematicName;
    
    FSD_API FSchematicGADataEntry();
};

