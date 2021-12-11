#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MovieScene MovieSceneSequence
#include "LevelSequenceObjectReferenceMap.h"
#include "LevelSequenceBindingReferences.h"
#include "LevelSequenceObject.h"
#include "LevelSequence.generated.h"

class UObject;
class UMovieScene;

UCLASS()
class LEVELSEQUENCE_API ULevelSequence : public UMovieSceneSequence {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UMovieScene* MovieScene;
    
protected:
    UPROPERTY()
    FLevelSequenceObjectReferenceMap ObjectReferences;
    
    UPROPERTY()
    FLevelSequenceBindingReferences BindingReferences;
    
    UPROPERTY()
    TMap<FString, FLevelSequenceObject> PossessedObjects;
    
    UPROPERTY()
    UClass* DirectorClass;
    
public:
    UFUNCTION(BlueprintCallable)
    void RemoveMetaDataByClass(UClass* InClass);
    
    UFUNCTION(BlueprintCallable)
    UObject* FindOrAddMetaDataByClass(UClass* InClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObject* FindMetaDataByClass(UClass* InClass) const;
    
    UFUNCTION(BlueprintCallable)
    UObject* CopyMetaData(UObject* InMetaData);
    
    ULevelSequence();
};

