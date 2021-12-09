#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "ModioTermsWrapper.generated.h"

UCLASS(BlueprintType)
class SIMPLEUGC_API UModioTermsWrapper : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FString AgreeButtonText;
    
    UPROPERTY(BlueprintReadOnly)
    FString DisagreeButtonText;
    
    UPROPERTY(BlueprintReadOnly)
    FString TermsLink;
    
    UPROPERTY(BlueprintReadOnly)
    FString TermsText;
    
    UPROPERTY(BlueprintReadOnly)
    FString PrivacyLink;
    
    UPROPERTY(BlueprintReadOnly)
    FString PrivacyText;
    
    UPROPERTY(BlueprintReadOnly)
    FString TermsOfUseText;
    
    UFUNCTION(BlueprintPure)
    bool isEmpty();
    
    UModioTermsWrapper();
};

