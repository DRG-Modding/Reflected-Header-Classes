#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Box
//CROSS-MODULE INCLUDE: Engine DataAsset
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
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetFriendlyName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<uint8> GetCandidateObjectData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBox GetBoundingBox() const;
    
    UARCandidateObject();
};

