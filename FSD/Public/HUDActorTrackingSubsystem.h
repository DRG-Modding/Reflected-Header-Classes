#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "BoolDelegateDelegate.h"
#include "DelegateDelegate.h"
#include "HUDActorTrackingSubsystem.generated.h"

UCLASS(Blueprintable)
class UHUDActorTrackingSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoolDelegate OnToggleTrackingEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnShowAlwaysTrackedEvent;
    
    UHUDActorTrackingSubsystem();
};

