#pragma once
#include "CoreMinimal.h"
#include "EnvQueryNode.h"
#include "EEnvTestPurpose.h"
#include "EEnvTestScoreEquation.h"
#include "EEnvTestFilterType.h"
#include "EEnvTestScoreOperator.h"
#include "EEnvTestFilterOperator.h"
#include "AIDataProviderBoolValue.h"
#include "AIDataProviderFloatValue.h"
#include "EEnvQueryTestClamping.h"
#include "EEQSNormalizationType.h"
#include "EnvQueryTest.generated.h"

UCLASS(Abstract, Blueprintable)
class AIMODULE_API UEnvQueryTest : public UEnvQueryNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TestOrder;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EEnvTestPurpose::Type> TestPurpose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TestComment;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    TEnumAsByte<EEnvTestFilterOperator::Type> MultipleContextFilterOp;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    TEnumAsByte<EEnvTestScoreOperator::Type> MultipleContextScoreOp;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EEnvTestFilterType::Type> FilterType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderBoolValue boolValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue FloatValueMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue FloatValueMax;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EEnvTestScoreEquation::Type> ScoringEquation;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EEnvQueryTestClamping::Type> ClampMinType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EEnvQueryTestClamping::Type> ClampMaxType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEQSNormalizationType NormalizationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue ScoreClampMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue ScoreClampMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue ScoringFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue ReferenceValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDefineReferenceValue;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bWorkOnFloatValues: 1;
    
public:
    UEnvQueryTest();
};

