#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MovieSceneFolder.generated.h"

class UMovieSceneFolder;
class UMovieSceneTrack;

UCLASS(DefaultToInstanced)
class MOVIESCENE_API UMovieSceneFolder : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FName FolderName;
    
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    TArray<UMovieSceneFolder*> ChildFolders;
    
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    TArray<UMovieSceneTrack*> ChildMasterTracks;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FString> ChildObjectBindingStrings;
    
public:
    UMovieSceneFolder();
};

