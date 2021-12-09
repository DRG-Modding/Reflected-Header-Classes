#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
#include "EModioImageState.h"
#include "ModioImage.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector2D
#include "EModioLogoSize.h"
#include "EModioGallerySize.h"
#include "EModioAvatarSize.h"
#include "ModioImageLibrary.generated.h"

class UTexture;
class UTexture2DDynamic;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FModioImageLibraryOnImageLoaded, UTexture2DDynamic*, Texture);

UCLASS(BlueprintType)
class MODIO_API UModioImageLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static void LoadAsync(const FModioImage& Image, FModioImageLibraryOnImageLoaded OnImageLoaded);
    
    UFUNCTION(BlueprintPure)
    static UTexture2DDynamic* GetTexture(const FModioImage& Image);
    
    UFUNCTION(BlueprintPure)
    static EModioImageState GetState(const FModioImage& Image);
    
    UFUNCTION(BlueprintPure)
    static FVector2D GetLogoSize(UTexture* Logo, EModioLogoSize LogoSize);
    
    UFUNCTION(BlueprintPure)
    static FVector2D GetGallerySize(UTexture* GalleryImage, EModioGallerySize GallerySize);
    
    UFUNCTION(BlueprintPure)
    static FVector2D GetAvatarSize(UTexture* avatar, EModioAvatarSize AvatarSize);
    
    UModioImageLibrary();
};

