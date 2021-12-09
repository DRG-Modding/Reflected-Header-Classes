#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
//CROSS-MODULE INCLUDE: CoreUObject Guid
#include "MovieSceneSignedObject.generated.h"

UCLASS()
class MOVIESCENE_API UMovieSceneSignedObject : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FGuid Signature;
    
public:
    UMovieSceneSignedObject();
};

