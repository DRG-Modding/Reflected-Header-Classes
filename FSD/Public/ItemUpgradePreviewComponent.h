#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "ItemUpgradePreviewComponent.generated.h"

class UItemUpgrade;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class UItemUpgradePreviewComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FItemUpgradeDelegate, UItemUpgrade*, PreviewUpgrade);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FItemUpgradeDelegate OnPreviewUpgradeChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UItemUpgrade* PreviewUpgrade;
    
public:
    UItemUpgradePreviewComponent();
    UFUNCTION(BlueprintCallable)
    void SetPreviewUpgrade(UItemUpgrade* InUpgrade);
    
    UFUNCTION(BlueprintCallable)
    void RefreshPreviewUpgrade();
    
};

