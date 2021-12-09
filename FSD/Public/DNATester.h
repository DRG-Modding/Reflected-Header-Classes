#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: Engine Actor
#include "DNATester.generated.h"

class URoomGeneratorGroup;
class UMissionDNA;

UCLASS()
class ADNATester : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UMissionDNA> DNA;
    
    UPROPERTY(EditAnywhere)
    URoomGeneratorGroup* Group;
    
    ADNATester();
};

