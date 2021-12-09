#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Transform
//CROSS-MODULE INCLUDE: CoreUObject Guid
#include "ESpawnOwnership.h"
#include "MovieSceneSpawnable.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FMovieSceneSpawnable {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FTransform SpawnTransform;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    TArray<FName> Tags;
    
    UPROPERTY(EditAnywhere)
    bool bContinuouslyRespawn;
    
private:
    UPROPERTY()
    FGuid Guid;
    
    UPROPERTY()
    FString Name;
    
    UPROPERTY()
    UObject* ObjectTemplate;
    
    UPROPERTY()
    TArray<FGuid> ChildPossessables;
    
    UPROPERTY()
    ESpawnOwnership Ownership;
    
public:
    UPROPERTY()
    FName LevelName;
    
    MOVIESCENE_API FMovieSceneSpawnable();
};

