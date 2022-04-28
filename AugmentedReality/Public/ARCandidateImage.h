#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "EARCandidateImageOrientation.h"
#include "ARCandidateImage.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class AUGMENTEDREALITY_API UARCandidateImage : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* CandidateTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FriendlyName;
    
    UPROPERTY(EditAnywhere)
    float Width;
    
    UPROPERTY(EditAnywhere)
    float Height;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EARCandidateImageOrientation Orientation;
    
public:
    UARCandidateImage();
    UFUNCTION(BlueprintPure)
    float GetPhysicalWidth() const;
    
    UFUNCTION(BlueprintPure)
    float GetPhysicalHeight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EARCandidateImageOrientation GetOrientation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetFriendlyName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetCandidateTexture() const;
    
};

