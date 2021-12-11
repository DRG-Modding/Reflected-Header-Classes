#pragma once
#include "CoreMinimal.h"
#include "FieldSystemMetaData.h"
#include "FieldSystemMetaDataIteration.generated.h"

class UFieldSystemMetaDataIteration;

UCLASS(BlueprintType)
class FIELDSYSTEMENGINE_API UFieldSystemMetaDataIteration : public UFieldSystemMetaData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Iterations;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFieldSystemMetaDataIteration* SetMetaDataIteration(int32 NewIterations);
    
    UFieldSystemMetaDataIteration();
};

