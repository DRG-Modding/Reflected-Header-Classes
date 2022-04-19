#pragma once
#include "CoreMinimal.h"
#include "ModioLink.h"
#include "ModioTerms.generated.h"

USTRUCT(BlueprintType)
struct MODIO_API FModioTerms {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString AgreeButtonText;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString DisagreeButtonText;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FModioLink WebsiteLink;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FModioLink TermsLink;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FModioLink PrivacyLink;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FModioLink ManageLink;
    
    FModioTerms();
};

