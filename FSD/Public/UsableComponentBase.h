#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "UsedBySignatureDelegate.h"
#include "EInputKeys.h"
#include "UsableComponentBase.generated.h"

class UUseConditionSet;
class UUseAnimationSetting;
class USceneComponent;
class APlayerCharacter;
class UTexture2D;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FSD_API UUsableComponentBase : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUsedBySignature OnClientBeginUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CallbackKeys;
    
protected:
    UPROPERTY(EditAnywhere)
    float UseCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUseAnimationSetting* AnimationSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* RestrictToCollider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsRayTraceTriggered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ResetUsingOnCompletion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUseConditionSet* UseConditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsClientPredictive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ThirdPersonWhileUsing;
    
public:
    UUsableComponentBase();
    UFUNCTION(BlueprintCallable)
    void SetRayTraceTriggered(bool rayTraceTriggered);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FText GetUseText(APlayerCharacter* User);
    
    UFUNCTION(BlueprintPure)
    float GetUseProgressInPercent(APlayerCharacter* User) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetUsableIcon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShowUsingUI() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsRayTraceTriggerd() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetHideProgressBar(APlayerCharacter* User) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetHideActionText(APlayerCharacter* User) const;
    
    UFUNCTION(BlueprintCallable)
    void EndUse(APlayerCharacter* User);
    
    UFUNCTION(BlueprintCallable)
    void BeginUse(APlayerCharacter* User, EInputKeys Key);
    
};

