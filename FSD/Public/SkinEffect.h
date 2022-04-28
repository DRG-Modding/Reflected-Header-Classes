#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SkinEffect.generated.h"

class UMeshComponent;
class AActor;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FSD_API USkinEffect : public UObject {
    GENERATED_BODY()
public:
    USkinEffect();
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Receive_AddToItem(UMeshComponent* Mesh, AActor* Skinnable, bool IsFirstPerson) const;
    
};

