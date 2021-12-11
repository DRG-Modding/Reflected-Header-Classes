#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: Engine NavRelevantInterface
//CROSS-MODULE INCLUDE: Engine Volume
#include "NavModifierVolume.generated.h"

class UNavArea;

UCLASS()
class NAVIGATIONSYSTEM_API ANavModifierVolume : public AVolume, public INavRelevantInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UNavArea> AreaClass;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetAreaClass(TSubclassOf<UNavArea> NewAreaClass);
    
    ANavModifierVolume();
    
    // Fix for true pure virtual functions not being implemented
};

