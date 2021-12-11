#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine Actor
#include "SwitchActor.generated.h"

class USceneComponent;

UCLASS()
class VARIANTMANAGERCONTENT_API ASwitchActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, VisibleAnywhere)
    USceneComponent* SceneComponent;
    
    UPROPERTY()
    int32 LastSelectedOption;
    
public:
    UFUNCTION(BlueprintCallable)
    void SelectOption(int32 OptionIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSelectedOption() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AActor*> GetOptions() const;
    
    ASwitchActor();
};

