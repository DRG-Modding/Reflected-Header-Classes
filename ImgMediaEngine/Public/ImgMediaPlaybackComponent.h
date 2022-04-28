#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "ImgMediaPlaybackComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class IMGMEDIAENGINE_API UImgMediaPlaybackComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Width;
    
    UPROPERTY(EditAnywhere)
    float LODBias;
    
    UImgMediaPlaybackComponent();
};

