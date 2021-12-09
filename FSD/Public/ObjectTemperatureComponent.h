#pragma once
#include "CoreMinimal.h"
#include "TemperatureComponent.h"
#include "ObjectTemperatureComponent.generated.h"

class UHealthComponentBase;

UDELEGATE(BlueprintAuthorityOnly) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FObjectTemperatureComponentOnStartBurning);

UCLASS()
class UObjectTemperatureComponent : public UTemperatureComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FObjectTemperatureComponentOnStartBurning OnStartBurning;
    
protected:
    UPROPERTY(EditAnywhere)
    float TemperatureChangeScale;
    
    UPROPERTY(EditAnywhere)
    float BurnTemperature;
    
    UPROPERTY(EditAnywhere)
    float DouseFireTemperature;
    
    UPROPERTY(EditAnywhere)
    int32 CoolingRate;
    
    UPROPERTY(EditAnywhere)
    bool IsHeatsourceWhenOnFire;
    
    UPROPERTY(EditAnywhere)
    float OnFireHeatRange;
    
    UFUNCTION()
    void TimerCallback();
    
    UFUNCTION()
    void OnDeath(UHealthComponentBase* HealthComponent);
    
public:
    UObjectTemperatureComponent();
};

