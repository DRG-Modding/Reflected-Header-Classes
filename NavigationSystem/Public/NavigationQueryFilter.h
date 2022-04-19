#pragma once
#include "CoreMinimal.h"
#include "NavigationFilterArea.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "NavigationFilterFlags.h"
#include "NavigationQueryFilter.generated.h"

UCLASS(Abstract)
class NAVIGATIONSYSTEM_API UNavigationQueryFilter : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNavigationFilterArea> Areas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNavigationFilterFlags IncludeFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNavigationFilterFlags ExcludeFlags;
    
    UNavigationQueryFilter();
};

