#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "SkinEffect.generated.h"

class AActor;
class UMeshComponent;

UCLASS(Abstract, BlueprintType, EditInlineNew)
class FSD_API USkinEffect : public UObject {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Receive_AddToItem(UMeshComponent* Mesh, AActor* Skinnable, bool IsFirstPerson) const;
    
    USkinEffect();
};

