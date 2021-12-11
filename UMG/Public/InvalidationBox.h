#pragma once
#include "CoreMinimal.h"
#include "ContentWidget.h"
#include "InvalidationBox.generated.h"

UCLASS()
class UMG_API UInvalidationBox : public UContentWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool bCanCache;
    
    UPROPERTY()
    bool CacheRelativeTransforms;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetCanCache(bool CanCache);
    
    UFUNCTION(BlueprintCallable)
    void InvalidateCache();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCanCache() const;
    
    UInvalidationBox();
};

