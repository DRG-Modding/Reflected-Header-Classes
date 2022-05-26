#pragma once
#include "CoreMinimal.h"
#include "OnLoadImageDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ModioImageWrapper.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "EModioImageState.h"
#include "EModioLogoSize.h"
#include "EModioGallerySize.h"
#include "EModioAvatarSize.h"
#include "ModioImageLibrary.generated.h"

class UTexture;
class UTexture2DDynamic;

UCLASS(Blueprintable)
class MODIO_API UModioImageLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UModioImageLibrary();
    UFUNCTION(BlueprintCallable)
    static void LoadAsync(const FModioImageWrapper& Image, FOnLoadImageDelegate OnImageLoaded);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UTexture2DDynamic* GetTexture(const FModioImageWrapper& Image);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EModioImageState GetState(const FModioImageWrapper& Image);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D GetLogoSize(UTexture* Logo, EModioLogoSize LogoSize);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D GetGallerySize(UTexture* GalleryImage, EModioGallerySize GallerySize);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D GetAvatarSize(UTexture* avatar, EModioAvatarSize AvatarSize);
    
};

