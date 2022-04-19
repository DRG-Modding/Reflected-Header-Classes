#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "FadeData.h"
#include "FadingDoneDelegate.h"
#include "FadeScreenSubSystem.generated.h"

class UTexture;
class UObject;

UCLASS(Abstract, BlueprintType)
class FSD_API UFadeScreenSubSystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FFadingDone OnFadeInComplete;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFadeData Fading;
    
public:
    UFadeScreenSubSystem();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsScreenFadingToBlack(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsScreenFadingFromBlack(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsScreenFading(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentFadeAmount() const;
    
    UFUNCTION(BlueprintCallable)
    static void FadeScreenToBlack(UObject* WorldContext, float FadeTime, float Delay, bool ResetExistingFades, bool CapFramerate, bool FadeWorldOnly, bool ToSpaceRig, UTexture* LoadingImage);
    
    UFUNCTION(BlueprintCallable)
    static void FadeScreenFromBlack(UObject* WorldContext, float FadeTime, float Delay, bool ResetExistingFades, bool CapFramerate, bool FadeWorldOnly, bool ToSpaceRig);
    
    UFUNCTION(BlueprintCallable)
    static void BlackoutScreen(UObject* WorldContext, bool FadeWorldOnly);
    
};
