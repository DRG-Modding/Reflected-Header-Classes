#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine Character
#include "EnvNamedValue.h"
#include "EQSQueryResultSourceInterface.h"
//CROSS-MODULE INCLUDE: Engine NavAgentProperties
#include "EEnvQueryHightlightMode.h"
#include "AIDynamicParam.h"
#include "EEnvQueryRunMode.h"
#include "EQSTestingPawn.generated.h"

class UEnvQuery;

UCLASS(Abstract)
class AIMODULE_API AEQSTestingPawn : public ACharacter, public IEQSQueryResultSourceInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UEnvQuery* QueryTemplate;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FEnvNamedValue> QueryParams;
    
    UPROPERTY(EditAnywhere)
    TArray<FAIDynamicParam> QueryConfig;
    
    UPROPERTY(EditAnywhere)
    float TimeLimitPerStep;
    
    UPROPERTY(EditAnywhere)
    int32 StepToDebugDraw;
    
    UPROPERTY(EditAnywhere)
    EEnvQueryHightlightMode HighlightMode;
    
    UPROPERTY(EditAnywhere)
    uint8 bDrawLabels: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bDrawFailedItems: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bReRunQueryOnlyOnFinishedMove: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bShouldBeVisibleInGame: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bTickDuringGame: 1;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EEnvQueryRunMode::Type> QueryingMode;
    
    UPROPERTY(EditAnywhere)
    FNavAgentProperties NavAgentProperties;
    
    AEQSTestingPawn();
    
    // Fix for true pure virtual functions not being implemented
};

