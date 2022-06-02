#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSequence -FallbackName=MovieSceneSequence
#include "LevelSequenceObjectReferenceMap.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Interface_AssetUserData -FallbackName=Interface_AssetUserData
#include "LevelSequenceBindingReferences.h"
#include "LevelSequenceObject.h"
#include "LevelSequence.generated.h"

class UMovieScene;
class UObject;
class UAssetUserData;

UCLASS(Blueprintable)
class LEVELSEQUENCE_API ULevelSequence : public UMovieSceneSequence, public IInterface_AssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UMovieScene* MovieScene;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLevelSequenceObjectReferenceMap ObjectReferences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLevelSequenceBindingReferences BindingReferences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FLevelSequenceObject> PossessedObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
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

