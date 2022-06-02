#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UGCLatentActionManager.generated.h"

class UModioTermsWrapper;
class UTexture2DDynamic;
class UModioModInfoWrapper;

UCLASS(Blueprintable)
class UUGCLatentActionManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<UModioTermsWrapper> LatestModioTermsAndConditions;
    
    UPROPERTY(EditAnywhere, Transient)
    TMap<int64, UTexture2DDynamic*> ModioModThumbnails;
    
    UUGCLatentActionManager();
    UFUNCTION(BlueprintPure)
    UModioModInfoWrapper* GetCachedModioModMetaData(int64 ModId);
    
};

