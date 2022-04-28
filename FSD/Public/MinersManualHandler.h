#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "EMinersManualSinglePage.h"
#include "EMinersManualSection.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "MinersManualHandler.generated.h"

UINTERFACE(Blueprintable)
class UMinersManualHandler : public UInterface {
    GENERATED_BODY()
};

class IMinersManualHandler : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenMinersManualPage(EMinersManualSinglePage page);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenMinersManualFromID(EMinersManualSection Section, const FGuid& ID);
    
};

