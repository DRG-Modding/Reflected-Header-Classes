#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "InteractiveToolPropertySet.generated.h"

UCLASS(Transient)
class INTERACTIVETOOLSFRAMEWORK_API UInteractiveToolPropertySet : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UObject* CachedProperties;
    
    UPROPERTY()
    bool bIsPropertySetEnabled;
    
public:
    UInteractiveToolPropertySet();
};

