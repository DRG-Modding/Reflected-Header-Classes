#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "BlackboardAssetProvider.h"
#include "BTDecoratorLogic.h"
#include "BehaviorTree.generated.h"

class UBTCompositeNode;
class UBlackboardData;
class UBTDecorator;

UCLASS()
class AIMODULE_API UBehaviorTree : public UObject, public IBlackboardAssetProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UBTCompositeNode* RootNode;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UBlackboardData* BlackboardAsset;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<UBTDecorator*> RootDecorators;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FBTDecoratorLogic> RootDecoratorOps;
    
    UBehaviorTree();
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    UBlackboardData* GetBlackboardAsset() const override PURE_VIRTUAL(GetBlackboardAsset, return NULL;);
    
};

