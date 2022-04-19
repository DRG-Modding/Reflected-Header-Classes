#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "TemporaryBuff.generated.h"

class AFSDPlayerController;
class UTexture2D;
class APlayerCharacter;

UCLASS(Abstract, BlueprintType)
class UTemporaryBuff : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Icon;
    
public:
    UTemporaryBuff();
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void DeActivateBuff(AFSDPlayerController* Player) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ActivateBuffOnPlayer(APlayerCharacter* Player) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ActivateBuffOnController(AFSDPlayerController* Player) const;
    
};

