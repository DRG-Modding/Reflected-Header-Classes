#pragma once
#include "CoreMinimal.h"
#include "EModioAvatarSize.h"
#include "EModioLogoSize.h"
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
#include "EModioGallerySize.h"
#include "ModioImage.h"
#include "EModioImageState.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector2D
#include "ModioImageLibrary.generated.h"

class UTexture;
class UTexture2DDynamic;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FModioImageLibraryOnImageLoaded, UTexture2DDynamic*, Texture);

UCLASS(BlueprintType)
class MODIO_API UModioImageLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static void LoadAsync(const FModioImage& Image, FModioImageLibraryOnImageLoaded OnImageLoaded);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UTexture2DDynamic* GetTexture(const FModioImage& Image);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EModioImageState GetState(const FModioImage& Image);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D GetLogoSize(UTexture* Logo, EModioLogoSize LogoSize);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D GetGallerySize(UTexture* GalleryImage, EModioGallerySize GallerySize);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D GetAvatarSize(UTexture* avatar, EModioAvatarSize AvatarSize);
    
    UModioImageLibrary();
};

