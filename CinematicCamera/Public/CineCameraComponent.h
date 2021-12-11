#pragma once
#include "CoreMinimal.h"
#include "CameraLensSettings.h"
//CROSS-MODULE INCLUDE: Engine CameraComponent
#include "NamedFilmbackPreset.h"
#include "CameraFilmbackSettings.h"
#include "CameraFocusSettings.h"
#include "NamedLensPreset.h"
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
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetVerticalFieldOfView() const;
    
    UFUNCTION(BlueprintCallable)
    static TArray<FNamedLensPreset> GetLensPresetsCopy();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetLensPresetName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHorizontalFieldOfView() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetFilmbackPresetName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetDefaultFilmbackPresetName() const;
    
    UCineCameraComponent();
};

