#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "MediaComponent.generated.h"

class UMediaPlayer;
class UMediaTexture;

UCLASS(BlueprintType)
class MEDIAASSETS_API UMediaComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMediaTexture* MediaTexture;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced, Interp, Transient, meta=(AllowPrivateAccess=true))
    UMediaPlayer* MediaPlayer;
    
public:
    UFUNCTION(BlueprintPure)
    UMediaTexture* GetMediaTexture() const;
    
    UFUNCTION(BlueprintPure)
    UMediaPlayer* GetMediaPlayer() const;
    
    UMediaComponent();
};

