#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "ToolContextTransactionProvider.h"
#include "InteractiveToolManager.generated.h"

class UInteractiveToolBuilder;
class UInteractiveTool;

UCLASS(Transient)
class INTERACTIVETOOLSFRAMEWORK_API UInteractiveToolManager : public UObject, public IToolContextTransactionProvider {
    GENERATED_BODY()
public:
    UPROPERTY()
    UInteractiveTool* ActiveLeftTool;
    
    UPROPERTY()
    UInteractiveTool* ActiveRightTool;
    
protected:
    UPROPERTY()
    TMap<FString, UInteractiveToolBuilder*> ToolBuilders;
    
public:
    UInteractiveToolManager();
};

