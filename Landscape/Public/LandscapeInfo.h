#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
//CROSS-MODULE INCLUDE: CoreUObject Vector
//CROSS-MODULE INCLUDE: CoreUObject Guid
#include "LandscapeInfo.generated.h"

class ALandscapeStreamingProxy;
class ALandscape;

UCLASS(Transient)
class ULandscapeInfo : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    TLazyObjectPtr<ALandscape> LandscapeActor;
    
    UPROPERTY()
    FGuid LandscapeGuid;
    
    UPROPERTY()
    int32 ComponentSizeQuads;
    
    UPROPERTY()
    int32 SubsectionSizeQuads;
    
    UPROPERTY()
    int32 ComponentNumSubsections;
    
    UPROPERTY()
    FVector DrawScale;
    
    UPROPERTY()
    TArray<ALandscapeStreamingProxy*> Proxies;
    
    ULandscapeInfo();
};

