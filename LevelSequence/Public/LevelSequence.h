#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSequence -FallbackName=MovieSceneSequence
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Interface_AssetUserData -FallbackName=Interface_AssetUserData
#include "LevelSequenceObjectReferenceMap.h"
#include "LevelSequenceBindingReferences.h"
#include "LevelSequenceObject.h"
#include "LevelSequence.generated.h"

class UMovieScene;
class UObject;
class UAssetUserData;

UCLASS()
class LEVELSEQUENCE_API ULevelSequence : public UMovieSceneSequence, public IInterface_AssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    UMovieScene* MovieScene;
    
protected:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FLevelSequenceObjectReferenceMap ObjectReferences;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FLevelSequenceBindingReferences BindingReferences;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TMap<FString, FLevelSequenceObject> PossessedObjects;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UClass* DirectorClass;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UAssetUserData*> AssetUserData;
    
public:
    ULevelSequence();
    UFUNCTION(BlueprintCallable)
    void RemoveMetaDataByClass(UClass* InClass);
    
    UFUNCTION(BlueprintCallable)
    UObject* FindOrAddMetaDataByClass(UClass* InClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObject* FindMetaDataByClass(UClass* InClass) const;
    
    UFUNCTION(BlueprintCallable)
    UObject* CopyMetaData(UObject* InMetaData);
    
    
    // Fix for true pure virtual functions not being implemented
};

