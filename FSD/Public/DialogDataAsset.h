#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "DialogStruct.h"
#include "DialogDataAsset.generated.h"

class USoundSubmixBase;
class UObject;

UCLASS(BlueprintType)
class UDialogDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool Enabled;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool AudioOnly;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ShoutDelay;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ShoutCoolDown;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ShoutChance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FDialogStruct> Entries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<USoundSubmixBase*> SubmixSends;
    
protected:
    UPROPERTY(Transient)
    TArray<int32> ShuffledIndices;
    
public:
    UFUNCTION(BlueprintPure)
    int32 SelectIndex(UObject* WorldContext);
    
    UFUNCTION(BlueprintPure)
    bool SelectEntry(UObject* WorldContext, FDialogStruct& Dialog);
    
    UFUNCTION(BlueprintPure)
    FDialogStruct GetShout(int32 Index) const;
    
    UDialogDataAsset();
};
