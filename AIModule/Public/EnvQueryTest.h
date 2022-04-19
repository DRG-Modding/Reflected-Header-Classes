#pragma once
#include "CoreMinimal.h"
#include "EnvQueryNode.h"
#include "EEnvTestPurpose.h"
#include "EEnvTestFilterOperator.h"
#include "AIDataProviderFloatValue.h"
#include "EEnvTestScoreOperator.h"
#include "EEnvTestScoreEquation.h"
#include "EEnvTestFilterType.h"
#include "AIDataProviderBoolValue.h"
#include "EEnvQueryTestClamping.h"
#include "EEQSNormalizationType.h"
#include "EnvQueryTest.generated.h"

UCLASS(Abstract)
class AIMODULE_API UEnvQueryTest : public UEnvQueryNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 TestOrder;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EEnvTestPurpose::Type> TestPurpose;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    FString TestComment;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EEnvTestFilterOperator::Type> MultipleContextFilterOp;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EEnvTestScoreOperator::Type> MultipleContextScoreOp;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EEnvTestFilterType::Type> FilterType;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    FAIDataProviderBoolValue boolValue;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue FloatValueMin;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue FloatValueMax;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EEnvTestScoreEquation::Type> ScoringEquation;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EEnvQueryTestClamping::Type> ClampMinType;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EEnvQueryTestClamping::Type> ClampMaxType;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    EEQSNormalizationType NormalizationType;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue ScoreClampMin;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue ScoreClampMax;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue ScoringFactor;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue ReferenceValue;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    bool bDefineReferenceValue;
    
private:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    uint8 bWorkOnFloatValues: 1;
    
public:
    UEnvQueryTest();
};

