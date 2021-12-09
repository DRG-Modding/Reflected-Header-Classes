#pragma once
#include "CoreMinimal.h"
#include "CameraFocusSettings.h"
//CROSS-MODULE INCLUDE: Engine CameraComponent
#include "CameraFilmbackSettings.h"
#include "NamedLensPreset.h"
#include "CameraLensSettings.h"
#include "NamedFilmbackPreset.h"
#include "CineCameraComponent.generated.h"

UCLASS()
class CINEMATICCAMERA_API UCineCameraComponent : public UCameraComponent {
    GENERATED_BODY()
public:
    UPROPERTY()
    FCameraFilmbackSettings FilmbackSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FCameraFilmbackSettings Filmback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCameraLensSettings LensSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCameraFocusSettings FocusSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float CurrentFocalLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float CurrentAperture;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float CurrentFocusDistance;
    
protected:
    UPROPERTY(Config)
    TArray<FNamedFilmbackPreset> FilmbackPresets;
    
    UPROPERTY(Config)
    TArray<FNamedLensPreset> LensPresets;
    
    UPROPERTY(Config)
    FString DefaultFilmbackPresetName;
    
    UPROPERTY(Config)
    FString DefaultFilmbackPreset;
    
    UPROPERTY(Config)
    FString DefaultLensPresetName;
    
    UPROPERTY(Config)
    float DefaultLensFocalLength;
    
    UPROPERTY(Config)
    float DefaultLensFStop;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetLensPresetByName(const FString& InPresetName);
    
    UFUNCTION(BlueprintCallable)
    void SetFilmbackPresetByName(const FString& InPresetName);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentFocalLength(const float& InFocalLength);
    
    UFUNCTION(BlueprintPure)
    float GetVerticalFieldOfView() const;
    
    UFUNCTION(BlueprintCallable)
    static TArray<FNamedLensPreset> GetLensPresetsCopy();
    
    UFUNCTION(BlueprintPure)
    FString GetLensPresetName() const;
    
    UFUNCTION(BlueprintPure)
    float GetHorizontalFieldOfView() const;
    
    UFUNCTION(BlueprintPure)
    FString GetFilmbackPresetName() const;
    
    UFUNCTION(BlueprintPure)
    FString GetDefaultFilmbackPresetName() const;
    
    UCineCameraComponent();
};

