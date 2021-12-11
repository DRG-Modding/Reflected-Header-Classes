#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "BTDecoratorLogic.h"
#include "BlackboardAssetProvider.h"
#include "BehaviorTree.generated.h"

class UBTCompositeNode;
class UBlackboardData;
class UBTDecorator;

UCLASS()
class AIMODULE_API UBehaviorTree : public UObject, public IBlackboardAssetProvider {
    GENERATED_BODY()
public:
    UPROPERTY()
    UBTCompositeNode* RootNode;
    
    UPROPERTY()
    UBlackboardData* BlackboardAsset;
    
    UPROPERTY()
    TArray<UBTDecorator*> RootDecorators;
    
    UPROPERTY()
    TArray<FBTDecoratorLogic> RootDecoratorOps;
    
    UBehaviorTree();
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    UBlackboardData* GetBlackboardAsset() const override PURE_VIRTUAL(GetBlackboardAsset, return NULL;);
    
};

