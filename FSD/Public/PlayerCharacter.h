#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: Engine Character
//CROSS-MODULE INCLUDE: Engine Vector_NetQuantize
//CROSS-MODULE INCLUDE: GameplayTags GameplayTagAssetInterface
#include "Targetable.h"
#include "RejoinListener.h"
#include "PlaySoundInterface.h"
#include "LaserPointerTarget.h"
#include "ECharacterCameraMode.h"
#include "ECharacterState.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
//CROSS-MODULE INCLUDE: GameplayTags GameplayTagContainer
#include "CoolDownProgressStyle.h"
#include "DownCameraSettings.h"
#include "PlatformComponent.h"
//CROSS-MODULE INCLUDE: CoreUObject Guid
#include "HoldButton.h"
#include "AnalogAimSettings.h"
#include "HeroInfo.h"
#include "CameraSpringSettings.h"
//CROSS-MODULE INCLUDE: CoreUObject Rotator
//CROSS-MODULE INCLUDE: Engine EAttachLocation
#include "EInputKeys.h"
//CROSS-MODULE INCLUDE: Engine Vector_NetQuantizeNormal
//CROSS-MODULE INCLUDE: CoreUObject LinearColor
#include "PlayerCharacter.generated.h"

class USingleUsableComponent;
class USchematic;
class UVictoryPose;
class AItem;
class UCharacterCameraController;
class UDrinkableDataAsset;
class UItemSkin;
class UItemID;
class USpringArmComponent;
class UPlayerCharacterID;
class UZipLineStateComponent;
class AActor;
class UPickaxePart;
class UVanityItem;
class APlayerCharacter;
class AFSDPhysicsActor;
class UHealth;
class IHealth;
class UPhysicsAsset;
class USoundConcurrency;
class UPerkHUDActivationWidget;
class USoundCue;
class UStatusEffectsComponent;
class UObject;
class UCharacterRecoilComponent;
class UPlayerTemperatureComponent;
class UPlayerHealthComponent;
class APlayerController;
class UWidgetInteractionComponent;
class AShieldGeneratorActor;
class UCommunicationComponent;
class USkeletalMeshComponent;
class UCharacterUseComponent;
class UInstantUsable;
class ATutorialManager;
class UCameraComponent;
class UActorTrackingComponent;
class USceneComponent;
class UCharacterIntoxicationComponent;
class UMissionStatsCollector;
class UPointLightComponent;
class UCharacterSightComponent;
class USoundAttenuation;
class UInventoryComponent;
class UOutlineComponent;
class UPlayerAfflictionComponent;
class UTrailComponent;
class UPawnStatsComponent;
class UPlayerAttackPositionComponent;
class UPlayerReactiveTerrainTrackerComponent;
class UPawnAffliction;
class UParticleSystem;
class UAudioComponent;
class UStatusEffect;
class UCharacterStateComponent;
class UFSDAchievement;
class UAnimMontage;
class UDialogDataAsset;
class UMaterialInterface;
class UMaterialInstanceDynamic;
class UFSDPhysicalMaterial;
class UCharacterVanityComponent;
class AZipLineProjectile;
class USoundBase;
class AEventRewardDispenser;
class UCappedResource;
class UPlayerTPAnimInstance;
class AFSDPlayerState;
class AFSDPlayerController;
class UInventoryList;
class UTexture2D;
class UPlayerFPAnimInstance;
class UPlayerAnimInstance;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerCharacterOnStoppedUsingItem, AItem*, Item);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerCharacterOnStartedUsingItem, AItem*, Item);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerCharacterOnCollectedEverything, FText, InMessage);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPlayerCharacterOnSaluteEvent);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerCharacterOnToggleMapTool, bool, Visible);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPlayerCharacterOnFirePressed);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPlayerCharacterOnFireReleased);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPlayerCharacterOnCollectedSkin, UItemSkin*, Skin, UItemID*, ItemID);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPlayerCharacterOnPerkInitialized);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPlayerCharacterOnCameraModeChanged, ECharacterCameraMode, NewCameraMode, ECharacterCameraMode, OldCameraMode);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerCharacterOnGrenadePressed, bool, boolValue);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerCharacterOnInstantRevivePossibleEvent, bool, boolValue);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerCharacterOnDownCameraTargetChanged, APlayerCharacter*, Target);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerCharacterOnCollectedSchematic, USchematic*, Schematic);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerCharacterOnReviveCallEvent, AActor*, ReviveTarget);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerCharacterOnCollectedDrink, UDrinkableDataAsset*, Drinkable);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPlayerCharacterOnCollectedVictoryPose, UVictoryPose*, pose, UPlayerCharacterID*, characterID);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerCharacterOnToggleScanTool, bool, Visible);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerCharacterOnCollectedPickaxePart, UPickaxePart*, PickaxePart);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPlayerCharacterOnCollectedVanityItem, UVanityItem*, Item, UPlayerCharacterID*, characterID);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPlayerCharacterOnSecondaryLaserPointerEvent, AActor*, aTarget, const FVector&, aTargetLocation);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPlayerCharacterOnActionHoldProgress, FText, Description, float, Progress);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FPlayerCharacterOnThrowCarriableProgress, float, Progress, float, timeToCancel, bool, isDone);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerCharacterOnCanEscapeGrabberChanged, bool, bCanEscape);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPlayerCharacterOnJumpPressed);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPlayerCharacterOnTerrainScannerPressed);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPlayerCharacterOnJumpReleased);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPlayerCharacterOnDropItem);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPlayerCharacterOnSecondaryFirePressed);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPlayerCharacterOnSecondaryFireReleased);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPlayerCharacterOnManualMiningBegin);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPlayerCharacterOnLaserPointerReleased);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPlayerCharacterOnManualMiningEnd);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerCharacterOnCharacterStateChanged, ECharacterState, NewState);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPlayerCharacterOnFlareThrown);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPlayerCharacterOnLaserPointerPressed);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPlayerCharacterOnUpdateMeshes);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPlayerCharacterOnTerrainScannerReleased);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPlayerCharacterOnOpenChat);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPlayerCharacterOnAcceptInvite);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerCharacterOnPlayerShout, APlayerCharacter*, ShoutingPlayer);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPlayerCharacterOnRejectInvite);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPlayerCharacterOnIgnoreInvite);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerCharacterOnToggleOutline, bool, Visible);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerCharacterOnDepthChanged, int32, Depth);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerCharacterOnCharacterDeathChange, APlayerCharacter*, Character);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPlayerCharacterOnPerkActivationTimerFinished);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_SixParams(FPlayerCharacterOnDamagedEnemy, const TScriptInterface<IHealth>&, EnemyHealth, float, Damage, float, DamageModifier, float, HealthRemaining, bool, IsWeakPoint, bool, IsRadial);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerCharacterOnLaserPointerEvent, const FLaserPointerTarget&, HitInfo);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPlayerCharacterOnCallDonkey);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerCharacterOnBoscoSalute, APlayerCharacter*, ShoutingPlayer);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPlayerCharacterOnRevivedEvent);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPlayerCharacterOnRevivedOtherCharacter);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerCharacterOnHeadlightOnChanged, bool, IsOn);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerCharacterOnEnemyStartedTracking, AActor*, InTrackingEnemy);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerCharacterOnEnemyEndedTracking, AActor*, InTrackingEnemy);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerCharacterOnKilledGrabber, AActor*, Grabber);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FPlayerCharacterOnCoolDownProgress, UObject*, CoolDownObject, const FCoolDownProgressStyle&, Style, float, Progress);

UCLASS(Abstract)
class FSD_API APlayerCharacter : public ACharacter, public IGameplayTagAssetInterface, public ITargetable, public IRejoinListener, public IPlaySoundInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FPlayerCharacterOnStartedUsingItem OnStartedUsingItem;
    
    UPROPERTY(BlueprintAssignable)
    FPlayerCharacterOnStoppedUsingItem OnStoppedUsingItem;
    
    UPROPERTY(BlueprintAssignable)
    FPlayerCharacterOnFirePressed OnFirePressed;
    
    UPROPERTY(BlueprintAssignable)
    FPlayerCharacterOnFireReleased OnFireReleased;
    
    UPROPERTY(BlueprintAssignable)
    FPlayerCharacterOnGrenadePressed OnGrenadePressed;
    
    UPROPERTY(BlueprintAssignable)
    FPlayerCharacterOnPerkInitialized OnPerkInitialized;
    
    UPROPERTY(BlueprintAssignable)
    FPlayerCharacterOnInstantRevivePossibleEvent OnInstantRevivePossibleEvent;
    
    UPROPERTY(BlueprintAssignable)
    FPlayerCharacterOnCollectedEverything OnCollectedEverything;
    
    UPROPERTY(BlueprintAssignable)
    FPlayerCharacterOnCollectedSchematic OnCollectedSchematic;
    
    UPROPERTY(BlueprintAssignable)
    FPlayerCharacterOnCollectedSkin OnCollectedSkin;
    
    UPROPERTY(BlueprintAssignable)
    FPlayerCharacterOnCollectedDrink OnCollectedDrink;
    
    UPROPERTY(BlueprintAssignable)
    FPlayerCharacterOnCollectedVictoryPose OnCollectedVictoryPose;
    
    UPROPERTY(BlueprintAssignable)
    FPlayerCharacterOnCollectedPickaxePart OnCollectedPickaxePart;
    
    UPROPERTY(BlueprintAssignable)
    FPlayerCharacterOnCollectedVanityItem OnCollectedVanityItem;
    
    UPROPERTY(BlueprintAssignable)
    FPlayerCharacterOnCameraModeChanged OnCameraModeChanged;
    
    UPROPERTY(BlueprintAssignable)
    FPlayerCharacterOnDownCameraTargetChanged OnDownCameraTargetChanged;
    
    UPROPERTY(BlueprintAssignable)
    FPlayerCharacterOnActionHoldProgress OnActionHoldProgress;
    
    UPROPERTY(BlueprintAssignable)
    FPlayerCharacterOnThrowCarriableProgress OnThrowCarriableProgress;
    
    UPROPERTY(BlueprintAssignable)
    FPlayerCharacterOnJumpPressed OnJumpPressed;
    
    UPROPERTY(BlueprintAssignable)
    FPlayerCharacterOnJumpReleased OnJumpReleased;
    
    UPROPERTY(BlueprintAssignable)
    FPlayerCharacterOnSecondaryFirePressed OnSecondaryFirePressed;
    
    UPROPERTY(BlueprintAssignable)
    FPlayerCharacterOnSecondaryFireReleased OnSecondaryFireReleased;
    
    UPROPERTY(BlueprintAssignable)
    FPlayerCharacterOnManualMiningBegin OnManualMiningBegin;
    
    UPROPERTY(BlueprintAssignable)
    FPlayerCharacterOnManualMiningEnd OnManualMiningEnd;
    
    UPROPERTY(BlueprintAssignable)
    FPlayerCharacterOnLaserPointerPressed OnLaserPointerPressed;
    
    UPROPERTY(BlueprintAssignable)
    FPlayerCharacterOnLaserPointerReleased OnLaserPointerReleased;
    
    UPROPERTY(BlueprintAssignable)
    FPlayerCharacterOnTerrainScannerPressed OnTerrainScannerPressed;
    
    UPROPERTY(BlueprintAssignable)
    FPlayerCharacterOnTerrainScannerReleased OnTerrainScannerReleased;
    
    UPROPERTY(BlueprintAssignable)
    FPlayerCharacterOnFlareThrown OnFlareThrown;
    
    UPROPERTY(BlueprintAssignable)
    FPlayerCharacterOnDropItem OnDropItem;
    
    UPROPERTY(BlueprintAssignable)
    FPlayerCharacterOnUpdateMeshes OnUpdateMeshes;
    
    UPROPERTY(BlueprintAssignable)
    FPlayerCharacterOnOpenChat OnOpenChat;
    
    UPROPERTY(BlueprintAssignable)
    FPlayerCharacterOnAcceptInvite OnAcceptInvite;
    
    UPROPERTY(BlueprintAssignable)
    FPlayerCharacterOnRejectInvite OnRejectInvite;
    
    UPROPERTY(BlueprintAssignable)
    FPlayerCharacterOnIgnoreInvite OnIgnoreInvite;
    
    UPROPERTY(BlueprintAssignable)
    FPlayerCharacterOnToggleOutline OnToggleOutline;
    
    UPROPERTY(BlueprintAssignable)
    FPlayerCharacterOnToggleMapTool OnToggleMapTool;
    
    UPROPERTY(BlueprintAssignable)
    FPlayerCharacterOnToggleScanTool OnToggleScanTool;
    
    UPROPERTY(BlueprintAssignable)
    FPlayerCharacterOnDepthChanged OnDepthChanged;
    
    UPROPERTY(BlueprintAssignable)
    FPlayerCharacterOnCharacterStateChanged OnCharacterStateChanged;
    
    UPROPERTY(BlueprintAssignable)
    FPlayerCharacterOnCharacterDeathChange OnCharacterDeathChange;
    
    UPROPERTY(BlueprintAssignable)
    FPlayerCharacterOnDamagedEnemy OnDamagedEnemy;
    
    UPROPERTY(BlueprintAssignable)
    FPlayerCharacterOnLaserPointerEvent OnLaserPointerEvent;
    
    UPROPERTY(BlueprintAssignable)
    FPlayerCharacterOnSecondaryLaserPointerEvent OnSecondaryLaserPointerEvent;
    
    UPROPERTY(BlueprintAssignable)
    FPlayerCharacterOnSaluteEvent OnSaluteEvent;
    
    UPROPERTY(BlueprintAssignable)
    FPlayerCharacterOnPlayerShout OnPlayerShout;
    
    UPROPERTY(BlueprintAssignable)
    FPlayerCharacterOnBoscoSalute OnBoscoSalute;
    
    UPROPERTY(BlueprintAssignable, BlueprintAuthorityOnly)
    FPlayerCharacterOnRevivedEvent OnRevivedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FPlayerCharacterOnReviveCallEvent OnReviveCallEvent;
    
    UPROPERTY(BlueprintAssignable)
    FPlayerCharacterOnRevivedOtherCharacter OnRevivedOtherCharacter;
    
    UPROPERTY(BlueprintAssignable)
    FPlayerCharacterOnHeadlightOnChanged OnHeadlightOnChanged;
    
    UPROPERTY(BlueprintAssignable)
    FPlayerCharacterOnCallDonkey OnCallDonkey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer GameplayTags;
    
    UPROPERTY(Export, Transient)
    UZipLineStateComponent* ZipLineStateComponent;
    
    UPROPERTY(Transient)
    TArray<TSubclassOf<AActor>> EscapableGrabberEnemies;
    
    UPROPERTY(BlueprintAssignable)
    FPlayerCharacterOnEnemyStartedTracking OnEnemyStartedTracking;
    
    UPROPERTY(BlueprintAssignable)
    FPlayerCharacterOnEnemyEndedTracking OnEnemyEndedTracking;
    
    UPROPERTY(BlueprintAssignable)
    FPlayerCharacterOnKilledGrabber OnKilledGrabber;
    
    UPROPERTY(BlueprintAssignable)
    FPlayerCharacterOnPerkActivationTimerFinished OnPerkActivationTimerFinished;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UPerkHUDActivationWidget* BoundPerkActivationW;
    
    UPROPERTY(BlueprintReadWrite)
    float PerkActivationTimer;
    
protected:
    UPROPERTY(BlueprintAssignable)
    FPlayerCharacterOnCanEscapeGrabberChanged OnCanEscapeGrabberChanged;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TSubclassOf<AActor> GrabbedByClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundCue* PowerAttackRefreshedSound;
    
    UPROPERTY(BlueprintAssignable)
    FPlayerCharacterOnCoolDownProgress OnCoolDownProgress;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bIsBeingBittenByCaveLeech;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UWidgetInteractionComponent* WidgetInteraction;
    
    UPROPERTY(Config)
    TArray<FPlatformComponent> PlatformComponentClasses;
    
    UPROPERTY(EditAnywhere)
    FDownCameraSettings DownCameraSettings;
    
    UPROPERTY(Transient)
    TArray<TWeakObjectPtr<AShieldGeneratorActor>> ActiveShieldGenerators;
    
    UPROPERTY(EditAnywhere)
    FGuid SaveGameID;
    
    UPROPERTY(BlueprintReadOnly)
    FVector EstimatedVelocity;
    
    UPROPERTY(EditAnywhere)
    FHoldButton FlareHeadlightButton;
    
    UPROPERTY(EditAnywhere)
    FHoldButton CycleItemButton;
    
    UPROPERTY(EditAnywhere)
    FHoldButton ToggleHUDButton;
    
    UPROPERTY(EditAnywhere)
    float EquipLaserpointerHoldDuration;
    
    UPROPERTY(Replicated, Transient)
    bool IsPressingMovementInputKey;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UPlayerCharacterID* characterID;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<ATutorialManager> TutorialManagerType;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<ATutorialManager> TutorialManagerSpacerig;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USkeletalMeshComponent* FPMesh;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UCameraComponent* FirstPersonCamera;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USceneComponent* FirstPersonRoot;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UActorTrackingComponent* ActorTracking;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    UCharacterIntoxicationComponent* IntoxicationComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UMissionStatsCollector* MissionStatsCollector;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USpringArmComponent* ThirdPersonSpringArm;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UCameraComponent* ThirdPersonCamera;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UPointLightComponent* ThirdPersonLight;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USpringArmComponent* FollowSpringArm;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UCameraComponent* FollowCamera;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UCameraComponent* DownCamera;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UCharacterCameraController* CameraController;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UPlayerHealthComponent* HealthComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UCharacterSightComponent* SightComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UInventoryComponent* InventoryComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UCharacterUseComponent* UseComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USingleUsableComponent* UsableComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UOutlineComponent* OutlineComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTrailComponent* TrailComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UCharacterRecoilComponent* RecoilComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UStatusEffectsComponent* StatusEffectsComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UPawnStatsComponent* PawnStatsComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UPlayerAfflictionComponent* PawnAfflictionComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UPlayerAttackPositionComponent* AttackerPositioningComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UCommunicationComponent* CommunicationComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UPlayerTemperatureComponent* TemperatureComponent;
    
    UPROPERTY(Export, VisibleAnywhere)
    UPlayerReactiveTerrainTrackerComponent* ReactiveTerrainTracker;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UInstantUsable* TrackGrindUsableComponent;
    
    UPROPERTY(EditAnywhere)
    float RunningSpeed;
    
    UPROPERTY(BlueprintReadWrite)
    float RunBoost;
    
    UPROPERTY(BlueprintReadWrite)
    float RunBoostChargeTime;
    
    UPROPERTY(EditAnywhere)
    USoundCue* RunBoostActivationSound;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* RunBoostParticles;
    
    UPROPERTY(EditAnywhere)
    UPawnAffliction* RunBoostAffliction;
    
    UPROPERTY(EditAnywhere)
    UPhysicsAsset* HangingPhysicsAsset;
    
    UPROPERTY(EditAnywhere)
    float HangingSimulationBlend;
    
    UPROPERTY(EditAnywhere)
    bool IsPlayableCharacter;
    
    UPROPERTY(Export, Transient)
    UAudioComponent* SprintSoundComponent;
    
    UPROPERTY(EditAnywhere)
    USoundCue* SpringSound;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FAnalogAimSettings AimSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DownedCameraMinPitch;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DownedCameraMaxPitch;
    
    UPROPERTY(EditAnywhere)
    float TurnToFaceScannerAngularSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CarryingMovementSpeedPenalty;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CarryingMaxFallVelocity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxThrowProgress;
    
    UPROPERTY(EditAnywhere)
    float MaxThrowHoldDuration;
    
    UPROPERTY(EditAnywhere)
    float CarryingThrowMinForce;
    
    UPROPERTY(EditAnywhere)
    float CarryingThrowMaxForce;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UStatusEffect> CarryingThrowingStatusEffect;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float ThrowCarriableProgress;
    
    UPROPERTY(Export, Transient)
    TMap<uint8, UCharacterStateComponent*> CharacterStates;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<ATutorialManager> TutorialManager;
    
    UPROPERTY(Export, Transient, ReplicatedUsing=OnRep_CharacterState)
    UCharacterStateComponent* ActiveCharacterState;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool IsInDropPod;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool IsInEscapePod;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ButtonMemoryDuration;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    bool IsRunning;
    
    UPROPERTY(BlueprintReadWrite)
    bool CanDash;
    
    UPROPERTY(EditAnywhere)
    float DashInputWindow;
    
    UPROPERTY(EditAnywhere)
    float DashFowardMovementMinRequirement;
    
    UPROPERTY(EditAnywhere)
    float DashRightMovementMaxRequirement;
    
    UPROPERTY(EditAnywhere)
    float DashControllerMinValueRequired;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    float DashCooldown;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UStatusEffect> DashStatusEffect;
    
    UPROPERTY(Transient)
    float ForwardInput;
    
    UPROPERTY(Transient)
    float RightInput;
    
    UPROPERTY(Transient)
    float StoppedRunningTime;
    
    UPROPERTY(Transient)
    float ShoutPressedTime;
    
    UPROPERTY(Transient)
    bool bIsUsingItemPressed;
    
    UPROPERTY(Transient)
    bool bIsUsingPressed;
    
    UPROPERTY(Transient)
    float UsingDelay;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_HeadLightOn)
    bool HeadLightOn;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    bool IsUsing;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float JumpPressedTime;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool CanMove;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool CanAim;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool CanUseItem;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool CanChangeItems;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool CanMine;
    
    UPROPERTY(BlueprintReadWrite, Transient, ReplicatedUsing=OnRep_IsStandingDown)
    bool IsStandingDown;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool InDanceRange;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_IsDancing)
    bool IsDancing;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float DanceStartTime;
    
    UPROPERTY(EditAnywhere)
    UFSDAchievement* HappyFeetAchievement;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_DanceMove)
    int32 DanceMove;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    ECharacterCameraMode CameraMode;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool IsInCharacterSelectionWorld;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float IdleTime;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* FPDrinkSalute;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* TPDrinkSalute;
    
    UPROPERTY(EditAnywhere)
    UDialogDataAsset* SaluteShout;
    
    UPROPERTY(EditAnywhere)
    UDialogDataAsset* DrinkShout;
    
    UPROPERTY(Transient)
    UAnimMontage* CurrentSaluteMontage;
    
    UPROPERTY(Transient)
    TArray<UMaterialInterface*> CachedMaterials;
    
    UPROPERTY(Transient)
    bool BlockTrackGrindOnLanded;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FHeroInfo HeroInfo;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString SteamClassID;
    
    UPROPERTY(Transient)
    UMaterialInstanceDynamic* RadarMaterialInstance;
    
    UPROPERTY(Transient)
    int32 RadarMaterialAngleParameterIndex;
    
    UPROPERTY(Transient)
    FVector LastUpdateVisibiltyPos;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FVector SpawnLocation;
    
    UPROPERTY(Transient)
    UFSDPhysicalMaterial* FallbackPhysicalMaterial;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool ClientReady;
    
    UPROPERTY(Export, Transient)
    UCharacterStateComponent* NextCharacterState;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient)
    bool PlayerIsLeavingInDroppod;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool CanInstantRevive;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool HasInitializedPerks;
    
    UPROPERTY(Export, VisibleAnywhere)
    UCharacterVanityComponent* CharacterVanity;
    
    UPROPERTY(EditAnywhere)
    FCameraSpringSettings CameraSpringSettings;
    
public:
    UFUNCTION(BlueprintCallable)
    void UseZipLine(AZipLineProjectile* ZipLine, const FVector& Start, const FVector& End);
    
    UFUNCTION(BlueprintCallable)
    void Unparalyze();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ToggleScanTool(bool Visible);
    
    UFUNCTION()
    void ToggleHUDReleased();
    
    UFUNCTION()
    void ToggleHUDPressed();
    
public:
    UFUNCTION(BlueprintCallable)
    void ToggleHeadLight();
    
protected:
    UFUNCTION()
    void ThrowFlareReleased();
    
    UFUNCTION()
    void ThrowFlarePressed();
    
public:
    UFUNCTION()
    void ThrowFlare();
    
protected:
    UFUNCTION(BlueprintCallable)
    void StopUsingItem();
    
public:
    UFUNCTION(BlueprintCallable)
    void StartTutorials(bool ResetTutorials);
    
    UFUNCTION(BlueprintCallable)
    void StartPerkActivation(UPerkHUDActivationWidget* PerkActivationWidget, float HoldTime);
    
    UFUNCTION(BlueprintCallable)
    UAudioComponent* SpawnSoundAttached(USoundBase* Sound, USceneComponent* AttachToComponent, float PriorityOverride, FName AttachPointName, FVector Location, FRotator Rotation, TEnumAsByte<EAttachLocation::Type> LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, bool bAutoDestroy, bool SendVibration);
    
    UFUNCTION(BlueprintCallable)
    UAudioComponent* SpawnSoundAtLocation(USoundBase* Sound, FVector Location, FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, bool bAutoDestroy, bool SendVibration);
    
    UFUNCTION(BlueprintCallable)
    UAudioComponent* SpawnSound2D(USoundBase* Sound, float PriorityOverride, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundConcurrency* ConcurrencySettings, bool bPersistAcrossLevelTransition, bool bAutoDestroy, bool SendVibration);
    
protected:
    UFUNCTION(BlueprintCallable)
    static void ShowSimpleHoldProgress(APlayerController* PlayerController, const FText& InDescription, float InProgress);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetStandingDown(bool standingDown);
    
    UFUNCTION(BlueprintCallable)
    void SetRadarMaterialInstance(UMaterialInstanceDynamic* matInstance);
    
    UFUNCTION(BlueprintCallable)
    void SetOutsideShieldGenerator(AShieldGeneratorActor* Shield);
    
    UFUNCTION(BlueprintCallable)
    void SetIsCharacterSelectionModel();
    
    UFUNCTION(BlueprintCallable)
    void SetInsideShieldGenerator(AShieldGeneratorActor* Shield);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetInCharacterSelectionWorld();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetHeadLight(bool On);
    
    UFUNCTION(BlueprintCallable)
    void SetFallbackPhysicalMaterial(UFSDPhysicalMaterial* PhysMat);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraMode(ECharacterCameraMode NewCameraMode);
    
    UFUNCTION(BlueprintCallable)
    void SetAttached(USceneComponent* AttachTo, bool DelayUntilLanded);
    
protected:
    UFUNCTION(Reliable, Server)
    void Server_TriggerDash();
    
public:
    UFUNCTION(Reliable, Server)
    void Server_ThrowCarriedItem(FVector_NetQuantize force);
    
protected:
    UFUNCTION(Reliable, Server)
    void Server_StartSalute(UAnimMontage* startSalute);
    
public:
    UFUNCTION(Reliable, Server)
    void Server_Shouted();
    
protected:
    UFUNCTION(Reliable, Server)
    void Server_SetUsing(bool characterIsUsing);
    
    UFUNCTION(Reliable, Server)
    void Server_SetRunning(bool characterIsRunning);
    
    UFUNCTION(Reliable, Server)
    void Server_SetRunBoostActive(bool IsActive);
    
    UFUNCTION(Reliable, Server)
    void Server_SetIsThrowingCarriable(bool isThrowing);
    
public:
    UFUNCTION(Reliable, Server)
    void Server_SetIsPressingMovementInput(bool aIsPushingInput);
    
protected:
    UFUNCTION(Reliable, Server)
    void Server_SetIsJumpPressed(bool InJumpPressed);
    
public:
    UFUNCTION(Reliable, Server)
    void Server_SetDispenserReward(AEventRewardDispenser* Dispenser, USchematic* Reward);
    
protected:
    UFUNCTION(Reliable, Server)
    void Server_SetClientReady();
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_InstantRevive(APlayerCharacter* ReviveTarget, EInputKeys Key);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_EscapeFromGrabber();
    
    UFUNCTION(Reliable, Server)
    void Server_CancelThrowingCarriable();
    
    UFUNCTION(Reliable, Server)
    void Server_CallDonkey();
    
public:
    UFUNCTION(Reliable, Server)
    void Server_AddImpulseToActor(AFSDPhysicsActor* Target, FVector_NetQuantize Impulse, FVector_NetQuantize Location, FVector_NetQuantize AngularImpulse);
    
    UFUNCTION(Reliable, Server)
    void Server_AddImpulse(const FVector_NetQuantizeNormal& Direction, float force);
    
    UFUNCTION()
    void SendLevelUpStatistics(const int32 currentRank);
    
    UFUNCTION()
    void ReviveProgress(float Progress);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void RequestChangeInGravityScale(float newGravityScale);
    
protected:
    UFUNCTION()
    void RejectInvite();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveOnHeadlightOn();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveEscapedFromGrabber();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void Receive_ShowFieldMedicInstantReviveEffects();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PrepareForEndScreen();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void PilotVehicle(AActor* Vehicle);
    
    UFUNCTION(BlueprintCallable)
    void Paralyze(AActor* ParalyzedBy);
    
protected:
    UFUNCTION()
    void OpenChat();
    
    UFUNCTION()
    void OnResourceFull(UCappedResource* Resource);
    
    UFUNCTION()
    void OnRep_IsStandingDown();
    
    UFUNCTION()
    void OnRep_IsDancing();
    
    UFUNCTION()
    void OnRep_HeadLightOn();
    
    UFUNCTION()
    void OnRep_DanceMove();
    
    UFUNCTION()
    void OnRep_CharacterState(UCharacterStateComponent* oldState);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnPerkActivationFinished();
    
protected:
    UFUNCTION()
    void OnItemEquipped(AItem* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterUsed(APlayerCharacter* User, EInputKeys Key);
    
    UFUNCTION()
    void OnCharacterBeginUse(APlayerCharacter* User, EInputKeys Key);
    
    UFUNCTION()
    void MouseWheelUp();
    
    UFUNCTION()
    void MouseWheelDown();
    
public:
    UFUNCTION(BlueprintCallable)
    bool LockIfState(ECharacterState LockIf, ECharacterState LockTo, bool canMoveAndAim);
    
protected:
    UFUNCTION()
    void JumpRelease();
    
    UFUNCTION()
    void JumpPress();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsWithinDistance(AActor* Source, float Distance) const;
    
    UFUNCTION(BlueprintPure)
    bool IsWalking() const;
    
protected:
    UFUNCTION(BlueprintPure)
    bool IsStateActive(ECharacterState State) const;
    
public:
    UFUNCTION(BlueprintPure)
    bool IsSaluting() const;
    
    UFUNCTION(BlueprintPure)
    bool IsParalyzed() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsMovementInputPressed();
    
    UFUNCTION(BlueprintPure)
    bool IsMining() const;
    
    UFUNCTION(BlueprintPure)
    bool IsLyingDown() const;
    
    UFUNCTION(BlueprintPure)
    bool IsJumpPressed() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInState(ECharacterState aState) const;
    
    UFUNCTION(BlueprintPure)
    bool IsFrozen() const;
    
    UFUNCTION(BlueprintPure)
    bool IsFirstPerson() const;
    
    UFUNCTION(BlueprintPure)
    bool IsDown() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAlive() const;
    
protected:
    UFUNCTION()
    void IgnoreInvite();
    
public:
    UFUNCTION(BlueprintPure)
    bool HasBeenRevived() const;
    
    UFUNCTION(BlueprintPure)
    UTrailComponent* GetTrailComponent() const;
    
    UFUNCTION(BlueprintPure)
    UPlayerTPAnimInstance* GetTPAnimInstance() const;
    
    UFUNCTION(BlueprintPure)
    float GetTimeSinceLastRevival() const;
    
    UFUNCTION(BlueprintPure)
    ECharacterState GetPreviousState() const;
    
    UFUNCTION(BlueprintPure)
    AFSDPlayerState* GetPlayerState() const;
    
    UFUNCTION(BlueprintPure)
    FString GetPlayerName() const;
    
    UFUNCTION(BlueprintPure)
    AFSDPlayerController* GetPlayerController() const;
    
    UFUNCTION(BlueprintPure)
    UInventoryList* GetInventoryList() const;
    
    UFUNCTION(BlueprintPure)
    FText GetHeroSwitchToMessage() const;
    
    UFUNCTION(BlueprintPure)
    FText GetHeroName() const;
    
    UFUNCTION(BlueprintPure)
    UTexture2D* GetHeroIcon() const;
    
    UFUNCTION(BlueprintPure)
    FLinearColor GetHeroColor() const;
    
    UFUNCTION(BlueprintPure)
    UPlayerFPAnimInstance* GetFPAnimInstance() const;
    
    UFUNCTION(BlueprintPure)
    AItem* GetEquippedItem() const;
    
    UFUNCTION(BlueprintPure)
    float GetDownTime() const;
    
    UFUNCTION(BlueprintPure)
    APlayerCharacter* GetDownCameraTarget() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    USceneComponent* GetDownCameraRotationPoint();
    
    UFUNCTION(BlueprintImplementableEvent)
    USceneComponent* GetDownCameraAttachPoint();
    
    UFUNCTION(BlueprintPure)
    ECharacterState GetCurrentState() const;
    
    UFUNCTION(BlueprintPure)
    float GetClassXP();
    
    UFUNCTION(BlueprintPure)
    UCharacterVanityComponent* GetCharacterVanity() const;
    
    UFUNCTION(BlueprintPure)
    UCharacterStateComponent* GetCharacterStateComponent(ECharacterState State) const;
    
    UFUNCTION(BlueprintPure)
    float GetBeginRevivedProgress() const;
    
    UFUNCTION(BlueprintPure)
    FString GetAnalyticsClass() const;
    
    UFUNCTION(BlueprintPure)
    FRotator GetAimRotation() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetActorGroundLocation() const;
    
    UFUNCTION(BlueprintPure)
    TArray<AShieldGeneratorActor*> GetActiveShieldGenerators();
    
    UFUNCTION(BlueprintPure)
    UPlayerAnimInstance* GetActiveAnimInstance() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceIsPressingMovementInputKey();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ExitVehicle();
    
protected:
    UFUNCTION()
    void CycleItemUp();
    
    UFUNCTION()
    void CycleItemReleased();
    
    UFUNCTION()
    void CycleItemPressed();
    
    UFUNCTION()
    void CycleItemDown();
    
public:
    UFUNCTION(BlueprintCallable)
    void ConsumeCycleItemButton();
    
protected:
    UFUNCTION(Client, Unreliable)
    void Client_TargetDamaged(UObject* Health, float Damage, float DamageModifier, bool IsWeakPoint, bool IsRadial);
    
public:
    UFUNCTION(Client, Reliable)
    void Client_AddImpulse(const FVector_NetQuantizeNormal& Direction, float force);
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void CheckWithoutAPaddleAchievement();
    
public:
    UFUNCTION(Reliable, Server)
    void CheatRevive();
    
    UFUNCTION(Reliable, Server)
    void CheatGodMode();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ChangeState(ECharacterState NewState);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ChangeIfDifferentState(ECharacterState NewState);
    
    UFUNCTION(BlueprintPure)
    bool CanEscapeFromGrabber() const;
    
protected:
    UFUNCTION()
    void CallDonkeyReleased();
    
    UFUNCTION()
    void CallDonkeyPressed();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnUpdateMeshes();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnControllerReady();
    
public:
    UFUNCTION(BlueprintCallable)
    void AnnounceSchematicCollected(USchematic* InSchematic);
    
protected:
    UFUNCTION(NetMulticast, Unreliable)
    void All_StartSalute(UAnimMontage* saluteMontage);
    
    UFUNCTION(NetMulticast, Unreliable)
    void All_ShowImpactEffects(UParticleSystem* Particles, FVector_NetQuantize Location, FVector_NetQuantizeNormal Orientation) const;
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_ShowFieldMedicInstantReviveEffects();
    
    UFUNCTION(BlueprintCallable)
    void AddImpulseToActor(AFSDPhysicsActor* Target, FVector_NetQuantize Impulse, FVector_NetQuantize Location, FVector_NetQuantize AngularImpulse);
    
    UFUNCTION(BlueprintCallable)
    void AddImpulseFromVector(const FVector& Vector);
    
    UFUNCTION(BlueprintCallable)
    void AddImpulseFromDirectionAndForce(const FVector& Direction, float force);
    
    UFUNCTION(BlueprintCallable)
    float AddClassXP(float Amount);
    
protected:
    UFUNCTION(Reliable, Server)
    void AcknowledgeCharacterState(ECharacterState eState);
    
    UFUNCTION()
    void AcceptInvite();
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    APlayerCharacter();
};

