#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "BakeSettings.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=RandomStream -FallbackName=RandomStream
#include "BakeConfig.generated.h"

class UBuilderBase;

UCLASS(Blueprintable)
class FSDENGINE_API UBakeConfig : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FBakeSettings Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, UBuilderBase*> Objects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FString> Warnings;
    
    UBakeConfig();
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
    
};

