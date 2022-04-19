#pragma once
#include "CoreMinimal.h"
#include "CameraLensSettings.h"
#include "CameraFilmbackSettings.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CameraComponent -FallbackName=CameraComponent
#include "CameraFocusSettings.h"
#include "NamedFilmbackPreset.h"
#include "NamedLensPreset.h"
#include "CineCameraComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class CINEMATICCAMERA_API UCineCameraComponent : public UCameraComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FCameraFilmbackSettings FilmbackSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FCameraFilmbackSettings Filmback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraLensSettings LensSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraFocusSettings FocusSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float CurrentFocalLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float CurrentAperture;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentFocusDistance;
    
protected:
    UPROPERTY(BlueprintReadWrite, Config, meta=(AllowPrivateAccess=true))
    TArray<FNamedFilmbackPreset> FilmbackPresets;
    
    UPROPERTY(BlueprintReadWrite, Config, meta=(AllowPrivateAccess=true))
    TArray<FNamedLensPreset> LensPresets;
    
    UPROPERTY(BlueprintReadWrite, Config, meta=(AllowPrivateAccess=true))
    FString DefaultFilmbackPresetName;
    
    UPROPERTY(BlueprintReadWrite, Config, meta=(AllowPrivateAccess=true))
    FString DefaultFilmbackPreset;
    
    UPROPERTY(BlueprintReadWrite, Config, meta=(AllowPrivateAccess=true))
    FString DefaultLensPresetName;
    
    UPROPERTY(BlueprintReadWrite, Config, meta=(AllowPrivateAccess=true))
    float DefaultLensFocalLength;
    
    UPROPERTY(BlueprintReadWrite, Config, meta=(AllowPrivateAccess=true))
    float DefaultLensFStop;
    
public:
    UCineCameraComponent();
    UFUNCTION(BlueprintCallable)
    void SetLensPresetByName(const FString& InPresetName);
    
    UFUNCTION(BlueprintCallable)
    void SetFilmbackPresetByName(const FString& InPresetName);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentFocalLength(float InFocalLength);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetVerticalFieldOfView() const;
    
    UFUNCTION(BlueprintCallable)
    static TArray<FNamedLensPreset> GetLensPresetsCopy();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetLensPresetName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHorizontalFieldOfView() const;
    
    UFUNCTION(BlueprintCallable)
    static TArray<FNamedFilmbackPreset> GetFilmbackPresetsCopy();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetFilmbackPresetName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetDefaultFilmbackPresetName() const;
    
};

