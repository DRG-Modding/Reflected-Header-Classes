#pragma once
#include "CoreMinimal.h"
#include "EInputKeys.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "ActivationObject.generated.h"

class USingleUsableComponent;
class APlayerCharacter;

UCLASS(Abstract, Blueprintable)
class AActivationObject : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USingleUsableComponent* Usable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasBeenUsed;
    
public:
    AActivationObject();
protected:
    UFUNCTION(BlueprintCallable)
    void OnUsedBy(APlayerCharacter* User, EInputKeys Key);
    
};

