#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "FSDTranslationProgress.h"
#include "FSDLocalizationSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class UFSDLocalizationSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFSDTranslationProgress> CommunityTranslationProgress;
    
public:
    UFSDLocalizationSettings();
};

