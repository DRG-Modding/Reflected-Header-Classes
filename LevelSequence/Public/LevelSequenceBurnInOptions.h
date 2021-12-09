#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
//CROSS-MODULE INCLUDE: CoreUObject SoftClassPath
#include "LevelSequenceBurnInOptions.generated.h"

class ULevelSequenceBurnInInitSettings;

UCLASS(BlueprintType, DefaultToInstanced, PerObjectConfig, Config=EditorPerProjectUserSettings)
class LEVELSEQUENCE_API ULevelSequenceBurnInOptions : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    bool bUseBurnIn;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    FSoftClassPath BurnInClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    ULevelSequenceBurnInInitSettings* Settings;
    
    UFUNCTION(BlueprintCallable)
    void SetBurnIn(FSoftClassPath InBurnInClass);
    
    ULevelSequenceBurnInOptions();
};

