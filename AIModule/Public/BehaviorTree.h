#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "BTDecoratorLogic.h"
#include "BlackboardAssetProvider.h"
#include "BehaviorTree.generated.h"

class UBTDecorator;
class UBTCompositeNode;
class UBlackboardData;

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
};

