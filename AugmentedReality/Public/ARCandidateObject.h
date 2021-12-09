#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
//CROSS-MODULE INCLUDE: CoreUObject Box
#include "ARCandidateObject.generated.h"

UCLASS(BlueprintType)
class AUGMENTEDREALITY_API UARCandidateObject : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TArray<uint8> CandidateObjectData;
    
    UPROPERTY(EditAnywhere)
    FString FriendlyName;
    
    UPROPERTY(EditAnywhere)
    FBox BoundingBox;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetFriendlyName(const FString& NewName);
    
    UFUNCTION(BlueprintCallable)
    void SetCandidateObjectData(const TArray<uint8>& InCandidateObject);
    
    UFUNCTION(BlueprintCallable)
    void SetBoundingBox(const FBox& InBoundingBox);
    
    UFUNCTION(BlueprintPure)
    FString GetFriendlyName() const;
    
    UFUNCTION(BlueprintPure)
    TArray<uint8> GetCandidateObjectData() const;
    
    UFUNCTION(BlueprintPure)
    FBox GetBoundingBox() const;
    
    UARCandidateObject();
};

