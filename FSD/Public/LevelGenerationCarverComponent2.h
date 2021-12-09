#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: FSDEngine BakeSettings
//CROSS-MODULE INCLUDE: Engine PrimitiveComponent
#include "LevelGenerationCarverComponent2.generated.h"

class ACSGBuilder;
class UCSGPreviewComponent;

UCLASS()
class ULevelGenerationCarverComponent2 : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<ACSGBuilder> Carver;
    
    UPROPERTY(EditAnywhere)
    bool CarvingDisabled;
    
    UPROPERTY(EditAnywhere)
    int32 PreviewSeed;
    
    UPROPERTY(EditAnywhere)
    FBakeSettings CarverSettings;
    
protected:
    UPROPERTY(EditAnywhere)
    bool SelfActivate;
    
    UPROPERTY(Export, Transient)
    UCSGPreviewComponent* PreviewComponent;
    
public:
    ULevelGenerationCarverComponent2();
};

