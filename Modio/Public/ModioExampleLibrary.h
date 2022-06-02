#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ModioFilterParams.h"
#include "OnListAllModsDelegateDelegate.h"
#include "EModioLogoSize.h"
#include "EModioAvatarSize.h"
#include "ModioExampleLibrary.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UModioExampleLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UModioExampleLibrary();
    UFUNCTION(BlueprintCallable)
    static void ListUserSubscriptionAsync(const FModioFilterParams& FilterParams, FOnListAllModsDelegate Callback);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EModioLogoSize GetLogoThumbnailSize();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EModioLogoSize GetLogoFullSize();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EModioAvatarSize GetAvatarThumbnailSize();
    
};

