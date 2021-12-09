#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "BakeSettings.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
//CROSS-MODULE INCLUDE: CoreUObject RandomStream
#include "BakeConfig.generated.h"

class UBuilderBase;

UCLASS(BlueprintType)
class UBakeConfig : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FBakeSettings Settings;
    
    UPROPERTY(Transient)
    TMap<FName, UBuilderBase*> Objects;
    
    UPROPERTY(Transient)
    TArray<FString> Warnings;
    
    UFUNCTION(BlueprintPure)
    FVector GetVectorSetting(FName Name, FVector defaultVal);
    
    UFUNCTION(BlueprintPure)
    FRandomStream GetRandomStream();
    
    UFUNCTION(BlueprintPure)
    UBuilderBase* GetObject(FName Name);
    
    UFUNCTION(BlueprintPure)
    int32 GetIntSetting(FName Name, int32 defaultVal);
    
    UFUNCTION(BlueprintPure)
    float GetFloatSetting(FName Name, float defaultVal);
    
    UFUNCTION(BlueprintPure)
    bool GetBoolSetting(FName Name, bool defaultVal);
    
    UBakeConfig();
};

