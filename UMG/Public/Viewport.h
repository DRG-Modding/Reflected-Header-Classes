#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ContentWidget.h"
//CROSS-MODULE INCLUDE: CoreUObject LinearColor
//CROSS-MODULE INCLUDE: CoreUObject Rotator
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "Viewport.generated.h"

class UWorld;
class AActor;

UCLASS()
class UMG_API UViewport : public UContentWidget {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FLinearColor BackgroundColor;
    
    UFUNCTION(BlueprintCallable)
    AActor* Spawn(TSubclassOf<AActor> ActorClass);
    
    UFUNCTION(BlueprintCallable)
    void SetViewRotation(FRotator Rotation);
    
    UFUNCTION(BlueprintCallable)
    void SetViewLocation(FVector Location);
    
    UFUNCTION(BlueprintPure)
    FRotator GetViewRotation() const;
    
    UFUNCTION(BlueprintPure)
    UWorld* GetViewportWorld() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetViewLocation() const;
    
    UViewport();
};

