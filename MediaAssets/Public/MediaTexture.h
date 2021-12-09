#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject LinearColor
//CROSS-MODULE INCLUDE: Engine Texture
//CROSS-MODULE INCLUDE: Engine TextureAddress
#include "MediaTexture.generated.h"

class UMediaPlayer;

UCLASS()
class MEDIAASSETS_API UMediaTexture : public UTexture {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<TextureAddress> AddressX;
    
    UPROPERTY(AdvancedDisplay, AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<TextureAddress> AddressY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool AutoClear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor ClearColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool EnableGenMips;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 NumMips;
    
protected:
    UPROPERTY(EditAnywhere)
    UMediaPlayer* MediaPlayer;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetMediaPlayer(UMediaPlayer* NewMediaPlayer);
    
    UFUNCTION(BlueprintPure)
    int32 GetWidth() const;
    
    UFUNCTION(BlueprintPure)
    UMediaPlayer* GetMediaPlayer() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetHeight() const;
    
    UFUNCTION(BlueprintPure)
    float GetAspectRatio() const;
    
    UMediaTexture();
};

