#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "InteractiveToolPropertySet.generated.h"

class UInteractiveToolPropertySet;

UCLASS(Transient)
class INTERACTIVETOOLSFRAMEWORK_API UInteractiveToolPropertySet : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UInteractiveToolPropertySet* CachedProperties;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bIsPropertySetEnabled;
    
public:
    UInteractiveToolPropertySet();
};

