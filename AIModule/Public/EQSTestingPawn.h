#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Character -FallbackName=Character
#include "EQSQueryResultSourceInterface.h"
#include "EnvNamedValue.h"
#include "EEnvQueryRunMode.h"
#include "AIDynamicParam.h"
#include "EEnvQueryHightlightMode.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NavAgentProperties -FallbackName=NavAgentProperties
#include "EQSTestingPawn.generated.h"

class UEnvQuery;

UCLASS(Abstract)
class AIMODULE_API AEQSTestingPawn : public ACharacter, public IEQSQueryResultSourceInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* QueryTemplate;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEnvNamedValue> QueryParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAIDynamicParam> QueryConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeLimitPerStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StepToDebugDraw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEnvQueryHightlightMode HighlightMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDrawLabels: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDrawFailedItems: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bReRunQueryOnlyOnFinishedMove: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShouldBeVisibleInGame: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bTickDuringGame: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EEnvQueryRunMode::Type> QueryingMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNavAgentProperties NavAgentProperties;
    
    AEQSTestingPawn();
    
    // Fix for true pure virtual functions not being implemented
};

