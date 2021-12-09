#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine StereoLayerShapeQuad
#include "SteamVRHQStereoLayerShape.generated.h"

UCLASS(BlueprintType, CollapseCategories, EditInlineNew)
class STEAMVR_API USteamVRHQStereoLayerShape : public UStereoLayerShapeQuad {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    bool bCurved;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    bool bAntiAlias;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    float AutoCurveMinDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    float AutoCurveMaxDistance;
    
    UFUNCTION(BlueprintCallable)
    void SetCurved(bool InCurved);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoCurveMinDistance(float InDistance);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoCurveMaxDistance(float InDistance);
    
    UFUNCTION(BlueprintCallable)
    void SetAntiAlias(bool InAntiAlias);
    
    USteamVRHQStereoLayerShape();
};

