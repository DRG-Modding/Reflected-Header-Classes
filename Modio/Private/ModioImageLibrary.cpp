#include "ModioImageLibrary.h"

class UTexture2DDynamic;
class UTexture;

void UModioImageLibrary::LoadAsync(const FModioImage& Image, FModioImageLibraryOnImageLoaded OnImageLoaded) {
}

UTexture2DDynamic* UModioImageLibrary::GetTexture(const FModioImage& Image) {
    return NULL;
}

EModioImageState UModioImageLibrary::GetState(const FModioImage& Image) {
    return EModioImageState::OnDisc;
}

FVector2D UModioImageLibrary::GetLogoSize(UTexture* Logo, EModioLogoSize LogoSize) {
    return FVector2D{};
}

FVector2D UModioImageLibrary::GetGallerySize(UTexture* GalleryImage, EModioGallerySize GallerySize) {
    return FVector2D{};
}

FVector2D UModioImageLibrary::GetAvatarSize(UTexture* avatar, EModioAvatarSize AvatarSize) {
    return FVector2D{};
}

UModioImageLibrary::UModioImageLibrary() {
}

