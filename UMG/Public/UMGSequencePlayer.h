#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "UMGSequencePlayer.generated.h"

class UWidgetAnimation;

UCLASS(BlueprintType, Transient)
class UMG_API UUMGSequencePlayer : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UWidgetAnimation* Animation;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetUserTag(FName InUserTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetUserTag() const;
    
    UUMGSequencePlayer();
};

