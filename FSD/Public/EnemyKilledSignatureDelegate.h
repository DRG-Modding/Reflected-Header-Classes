#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "EnemyKilledSignatureDelegate.generated.h"

class AActor;
class UDamageClass;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEnemyKilledSignature, const FGameplayTagContainer&, enemyTags, AActor*, enemy, UDamageClass*, DamageClass);

