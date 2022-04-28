#pragma once
#include "CoreMinimal.h"
#include "MovieSceneChannel.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
#include "MovieSceneByteChannel.generated.h"

class UEnum;

USTRUCT(BlueprintType)
struct MOVIESCENE_API FMovieSceneByteChannel : public FMovieSceneChannel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFrameNumber> Times;
    
    UPROPERTY(EditAnywhere)
    uint8 DefaultValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasDefaultValue;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> Values;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnum* Enum;
    
public:
    FMovieSceneByteChannel();
};

