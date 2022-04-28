#pragma once
#include "CoreMinimal.h"
#include "RoomFeature.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "FloodFillProceduralPillar.generated.h"

class UPillarSettings;

UCLASS(Blueprintable, EditInlineNew)
class UFloodFillProceduralPillar : public URoomFeature {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> Points;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPillarSettings* PillarSettings;
    
public:
    UFloodFillProceduralPillar();
};

