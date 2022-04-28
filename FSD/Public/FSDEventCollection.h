#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "FSDEventActivateChangedDelegate.h"
#include "FSDEventCollection.generated.h"

class UFSDEvent;

UCLASS(Blueprintable)
class FSD_API UFSDEventCollection : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<UFSDEvent*> Events;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFSDEventActivateChanged OnEventActiveChanged;
    
    UFSDEventCollection();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFSDEvent* FindEventHandler(const FName& EventName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UFSDEvent*> FindAllEventHandlers(const FName& EventName) const;
    
};

