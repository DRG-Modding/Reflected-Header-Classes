#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Volume -FallbackName=Volume
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NavRelevantInterface -FallbackName=NavRelevantInterface
#include "NavModifierVolume.generated.h"

class UNavArea;

UCLASS(Blueprintable)
class NAVIGATIONSYSTEM_API ANavModifierVolume : public AVolume, public INavRelevantInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavArea> AreaClass;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMaskFillCollisionUnderneathForNavmesh;
    
public:
    ANavModifierVolume();
    UFUNCTION(BlueprintCallable)
    void SetAreaClass(TSubclassOf<UNavArea> NewAreaClass);
    
    
    // Fix for true pure virtual functions not being implemented
};

