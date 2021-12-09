#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine Actor
#include "DatasmithImportedSequencesActor.generated.h"

class ULevelSequence;

UCLASS()
class DATASMITHCONTENT_API ADatasmithImportedSequencesActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<ULevelSequence*> ImportedSequences;
    
    UFUNCTION(BlueprintCallable)
    void PlayLevelSequence(ULevelSequence* SequenceToPlay);
    
    ADatasmithImportedSequencesActor();
};

