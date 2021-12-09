#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
//CROSS-MODULE INCLUDE: CoreUObject Guid
#include "GeneralProjectSettings.generated.h"

UCLASS(DefaultConfig, Config=Game)
class ENGINESETTINGS_API UGeneralProjectSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FString CompanyName;
    
    UPROPERTY(Config, EditAnywhere)
    FString CompanyDistinguishedName;
    
    UPROPERTY(Config, EditAnywhere)
    FString CopyrightNotice;
    
    UPROPERTY(Config, EditAnywhere)
    FString Description;
    
    UPROPERTY(Config, EditAnywhere)
    FString Homepage;
    
    UPROPERTY(Config, EditAnywhere)
    FString LicensingTerms;
    
    UPROPERTY(Config, EditAnywhere)
    FString PrivacyPolicy;
    
    UPROPERTY(Config, EditAnywhere)
    FGuid ProjectID;
    
    UPROPERTY(Config, EditAnywhere)
    FString ProjectName;
    
    UPROPERTY(Config, EditAnywhere)
    FString ProjectVersion;
    
    UPROPERTY(Config, EditAnywhere)
    FString SupportContact;
    
    UPROPERTY(Config, EditAnywhere)
    FText ProjectDisplayedTitle;
    
    UPROPERTY(Config, EditAnywhere)
    FText ProjectDebugTitleInfo;
    
    UPROPERTY(Config, EditAnywhere)
    bool bShouldWindowPreserveAspectRatio;
    
    UPROPERTY(Config, EditAnywhere)
    bool bUseBorderlessWindow;
    
    UPROPERTY(Config, EditAnywhere)
    bool bStartInVR;
    
    UPROPERTY()
    bool bStartInAR;
    
    UPROPERTY()
    bool bSupportAR;
    
    UPROPERTY(Config, EditAnywhere)
    bool bAllowWindowResize;
    
    UPROPERTY(Config, EditAnywhere)
    bool bAllowClose;
    
    UPROPERTY(Config, EditAnywhere)
    bool bAllowMaximize;
    
    UPROPERTY(Config, EditAnywhere)
    bool bAllowMinimize;
    
    UGeneralProjectSettings();
};

