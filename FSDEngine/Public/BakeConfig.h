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
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetVectorSetting(FName Name, FVector defaultVal);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRandomStream GetRandomStream();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBuilderBase* GetObject(FName Name);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetIntSetting(FName Name, int32 defaultVal);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFloatSetting(FName Name, float defaultVal);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetBoolSetting(FName Name, bool defaultVal);
    
    UBakeConfig();
};

