#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "Boil.generated.h"

class UFSDPhysicalMaterial;

UCLASS(Blueprintable)
class ABoil : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFSDPhysicalMaterial*> PhysicalMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MaterialIndex, meta=(AllowPrivateAccess=true))
    int32 MaterialIndex;
    
public:
    ABoil();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_MaterialIndex();
    
};

