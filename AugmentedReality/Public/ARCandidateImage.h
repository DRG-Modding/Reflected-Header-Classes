#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "EARCandidateImageOrientation.h"
#include "ARCandidateImage.generated.h"

class UTexture2D;

UCLASS(BlueprintType)
class AUGMENTEDREALITY_API UARCandidateImage : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UTexture2D* CandidateTexture;
    
    UPROPERTY(EditAnywhere)
    FString FriendlyName;
    
    UPROPERTY(EditAnywhere)
    float Width;
    
    UPROPERTY(EditAnywhere)
    float Height;
    
    UPROPERTY(EditAnywhere)
    EARCandidateImageOrientation Orientation;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPhysicalWidth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPhysicalHeight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EARCandidateImageOrientation GetOrientation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetFriendlyName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetCandidateTexture() const;
    
    UARCandidateImage();
};

