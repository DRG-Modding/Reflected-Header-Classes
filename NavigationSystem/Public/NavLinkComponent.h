#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine PrimitiveComponent
#include "NavLinkHostInterface.h"
//CROSS-MODULE INCLUDE: Engine NavigationLink
#include "NavLinkComponent.generated.h"

UCLASS()
class NAVIGATIONSYSTEM_API UNavLinkComponent : public UPrimitiveComponent, public INavLinkHostInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FNavigationLink> Links;
    
    UNavLinkComponent();
    
    // Fix for true pure virtual functions not being implemented
};

