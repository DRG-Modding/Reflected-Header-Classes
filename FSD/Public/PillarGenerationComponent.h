#pragma once
#include "CoreMinimal.h"
#include "GenerationComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PillarGenerationComponent.generated.h"

class UPillarSettings;

UCLASS(meta=(BlueprintSpawnableComponent))
class FSD_API UPillarGenerationComponent : public UGenerationComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> Points;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Visible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPillarSettings* PillarSettings;
    
    UPillarGenerationComponent();
};

