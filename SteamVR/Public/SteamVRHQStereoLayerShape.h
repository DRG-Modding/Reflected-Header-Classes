#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StereoLayerShapeQuad -FallbackName=StereoLayerShapeQuad
#include "SteamVRHQStereoLayerShape.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class STEAMVR_API USteamVRHQStereoLayerShape : public UStereoLayerShapeQuad {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    bool bCurved;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    bool bAntiAlias;
    
    UPROPERTY(EditAnywhere, Export)
    float AutoCurveMinDistance;
    
    UPROPERTY(EditAnywhere, Export)
    float AutoCurveMaxDistance;
    
    USteamVRHQStereoLayerShape();
    UFUNCTION(BlueprintCallable)
    void SetCurved(bool InCurved);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoCurveMinDistance(float InDistance);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoCurveMaxDistance(float InDistance);
    
    UFUNCTION(BlueprintCallable)
    void SetAntiAlias(bool InAntiAlias);
    
};

