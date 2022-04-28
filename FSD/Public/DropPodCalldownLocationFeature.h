#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "RoomFeature.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "DropPodCalldownLocationFeature.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class UDropPodCalldownLocationFeature : public URoomFeature {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> CalldownClass;
    
public:
    UDropPodCalldownLocationFeature();
};

