#pragma once
#include "CoreMinimal.h"
#include "DamageSubsystemItem.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "DamageSubsystem.generated.h"

UCLASS()
class UDamageSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<FDamageSubsystemItem> Items;
    
public:
    UDamageSubsystem();
};

