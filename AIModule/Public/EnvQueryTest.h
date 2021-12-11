#pragma once
#include "CoreMinimal.h"
#include "EnvQueryNode.h"
#include "EEnvTestFilterType.h"
#include "EEnvTestPurpose.h"
#include "EEnvTestScoreOperator.h"
#include "EEnvTestFilterOperator.h"
#include "AIDataProviderBoolValue.h"
#include "AIDataProviderFloatValue.h"
#include "EEnvTestScoreEquation.h"
#include "EEnvQueryTestClamping.h"
#include "EEQSNormalizationType.h"
#include "EnvQueryTest.generated.h"

UCLASS(Abstract)
class AIMODULE_API UEnvQueryTest : public UEnvQueryNode {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 TestOrder;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<EEnvTestPurpose::Type> TestPurpose;
    
    UPROPERTY(EditDefaultsOnly)
    FString TestComment;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    TEnumAsByte<EEnvTestFilterOperator::Type> MultipleContextFilterOp;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    TEnumAsByte<EEnvTestScoreOperator::Type> MultipleContextScoreOp;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<EEnvTestFilterType::Type> FilterType;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderBoolValue boolValue;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue FloatValueMin;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue FloatValueMax;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<EEnvTestScoreEquation::Type> ScoringEquation;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<EEnvQueryTestClamping::Type> ClampMinType;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<EEnvQueryTestClamping::Type> ClampMaxType;
    
    UPROPERTY(EditDefaultsOnly)
    EEQSNormalizationType NormalizationType;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue ScoreClampMin;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue ScoreClampMax;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue ScoringFactor;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue ReferenceValue;
    
    UPROPERTY(EditDefaultsOnly)
    bool bDefineReferenceValue;
    
private:
    UPROPERTY()
    uint8 bWorkOnFloatValues: 1;
    
public:
    UEnvQueryTest();
};

