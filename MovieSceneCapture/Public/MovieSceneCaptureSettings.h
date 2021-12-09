#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "CaptureResolution.h"
//CROSS-MODULE INCLUDE: Engine DirectoryPath
//CROSS-MODULE INCLUDE: CoreUObject FrameRate
#include "MovieSceneCaptureSettings.generated.h"

class AGameModeBase;

USTRUCT(BlueprintType)
struct MOVIESCENECAPTURE_API FMovieSceneCaptureSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    FDirectoryPath OutputDirectory;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere)
    TSubclassOf<AGameModeBase> GameModeOverride;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    FString OutputFormat;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere)
    bool bOverwriteExisting;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere)
    bool bUseRelativeFrameNumbers;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere)
    int32 HandleFrames;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere)
    FString MovieExtension;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere)
    uint8 ZeroPadFrameNumbers;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FFrameRate FrameRate;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    bool bUseCustomFrameRate;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    FFrameRate CustomFrameRate;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    FCaptureResolution Resolution;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere)
    bool bEnableTextureStreaming;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    bool bCinematicEngineScalability;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    bool bCinematicMode;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere)
    bool bAllowMovement;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere)
    bool bAllowTurning;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere)
    bool bShowPlayer;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere)
    bool bShowHUD;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere)
    bool bUsePathTracer;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere)
    int32 PathTracerSamplePerPixel;
    
    FMovieSceneCaptureSettings();
};

