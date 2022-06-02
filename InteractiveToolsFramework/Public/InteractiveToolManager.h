#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ToolContextTransactionProvider.h"
#include "InteractiveToolManager.generated.h"

class UInteractiveToolBuilder;
class UInteractiveTool;

UCLASS(Blueprintable, Transient)
class INTERACTIVETOOLSFRAMEWORK_API UInteractiveToolManager : public UObject, public IToolContextTransactionProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInteractiveTool* ActiveLeftTool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInteractiveTool* ActiveRightTool;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, UInteractiveToolBuilder*> ToolBuilders;
    
public:
    UInteractiveToolManager();
    
    // Fix for true pure virtual functions not being implemented
};

