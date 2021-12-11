#pragma once
#include "CoreMinimal.h"
#include "DynamicPropertyPath.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "PropertyBinding.generated.h"

UCLASS()
class UMG_API UPropertyBinding : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TWeakObjectPtr<UObject> SourceObject;
    
    UPROPERTY()
    FDynamicPropertyPath SourcePath;
    
    UPROPERTY()
    FName DestinationProperty;
    
    UPropertyBinding();
};

