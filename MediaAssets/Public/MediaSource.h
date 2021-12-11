#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "MediaSource.generated.h"

UCLASS(Abstract, BlueprintType, EditInlineNew)
class MEDIAASSETS_API UMediaSource : public UObject {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool Validate() const;
    
    UFUNCTION(BlueprintCallable)
    void SetMediaOptionString(const FName& Key, const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetMediaOptionInt64(const FName& Key, int64 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetMediaOptionFloat(const FName& Key, float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetMediaOptionBool(const FName& Key, bool Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetUrl() const;
    
    UMediaSource();
};

