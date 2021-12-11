#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "MusicLibrary.generated.h"

class UMusicCategory;
class USoundCue;

UCLASS()
class UMusicLibrary : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<USoundCue*> MusicCues;
    
    UPROPERTY(EditAnywhere)
    UMusicCategory* Category;
    
    UMusicLibrary();
};

