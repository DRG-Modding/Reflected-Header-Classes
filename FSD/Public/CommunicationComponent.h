#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "MixerAnnouncement.h"
//CROSS-MODULE INCLUDE: GameplayTags GameplayTagContainer
#include "MissionShoutQueueItem.h"
#include "ActiveOutline.h"
#include "EShoutType.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "CommunicationComponent.generated.h"

class UDialogDataAsset;
class APlayerCharacter;
class UShoutWidget;
class UCharacterShoutsData;
class UAudioComponent;
class UObject;
class USoundBase;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCommunicationComponentOnMissionControlFinished);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCommunicationComponentOnMissionShout, const FText&, Text, float, Duration);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCommunicationComponentOnMissionShoutEnd);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCommunicationComponentOnMixerAnnouncement, const FMixerAnnouncement&, Announcement);

UCLASS(BlueprintType)
class UCommunicationComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FCommunicationComponentOnMissionShout OnMissionShout;
    
    UPROPERTY(BlueprintAssignable)
    FCommunicationComponentOnMissionShoutEnd OnMissionShoutEnd;
    
    UPROPERTY(BlueprintAssignable)
    FCommunicationComponentOnMixerAnnouncement OnMixerAnnouncement;
    
    UPROPERTY(BlueprintAssignable)
    FCommunicationComponentOnMissionControlFinished OnMissionControlFinished;
    
protected:
    UPROPERTY(BlueprintReadWrite, Transient)
    bool ShoutingEnabled;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UShoutWidget> ShoutWidgetType;
    
    UPROPERTY(EditAnywhere)
    UCharacterShoutsData* CharacterShouts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PitchMultiplier;
    
    UPROPERTY(EditAnywhere)
    float MinShoutDelay;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CloseRangeShoutDistance;
    
    UPROPERTY(Transient)
    TMap<UDialogDataAsset*, float> DelayedShouts;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer KillShoutAllowedTags;
    
    UPROPERTY(BlueprintReadOnly)
    bool bMissionControlPaused;
    
    UPROPERTY(Export)
    UAudioComponent* MissionControlAudioComponent;
    
private:
    UPROPERTY(Export, Transient)
    TMap<APlayerCharacter*, UShoutWidget*> ActiveShouts;
    
    UPROPERTY(Transient)
    TArray<FActiveOutline> ActiveOutlines;
    
    UPROPERTY(Transient)
    APlayerCharacter* Character;
    
    UPROPERTY(Transient)
    UDialogDataAsset* LastShout;
    
    UPROPERTY(Export, Transient)
    UAudioComponent* ShoutAudioComponent;
    
    UPROPERTY(Transient)
    TMap<UDialogDataAsset*, float> ShoutHistory;
    
    UPROPERTY(Transient)
    TArray<FMissionShoutQueueItem> MissionShoutQueue;
    
public:
    UFUNCTION(BlueprintCallable)
    void ShoutCustomOrDefault(UDialogDataAsset* CustomShout, EShoutType DefaultShout);
    
    UFUNCTION(BlueprintCallable)
    void ShoutCustomLocalOnly(UDialogDataAsset* NewShout);
    
    UFUNCTION(BlueprintCallable)
    static void ShoutCustomClosestDwarf(UObject* WorldContext, UDialogDataAsset* NewShout, FVector TargetLocation);
    
    UFUNCTION(BlueprintCallable)
    void ShoutCustom(UDialogDataAsset* NewShout);
    
    UFUNCTION(BlueprintCallable)
    void Shout(EShoutType NewShout);
    
    UFUNCTION(BlueprintCallable)
    void SetMissionControlPaused(bool IsPaused);
    
protected:
    UFUNCTION(Server, Unreliable, WithValidation)
    void ServerShout(UDialogDataAsset* NewShout);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerMixerAnnouncement(const FMixerAnnouncement& Announcement);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerMissionShout(UDialogDataAsset* NewShout, int32 Index, bool bPriority);
    
public:
    UFUNCTION(BlueprintCallable)
    static UAudioComponent* PlayPitchedByClass(UObject* WorldContextObject, TSubclassOf<APlayerCharacter> CharacterClass, USoundBase* Sound, UDialogDataAsset* NewShout, EShoutType ShoutType, UAudioComponent* AudioComponent);
    
    UFUNCTION(BlueprintCallable)
    void PlayPitchedAsync(UDialogDataAsset* NewShout, EShoutType ShoutType, bool IgnoreCoolDown, UAudioComponent* AudioComponent, UObject* WorldContextObject, float shoutVolumeMultiplier);
    
    UFUNCTION(BlueprintCallable)
    UAudioComponent* PlayPitched(USoundBase* Sound, UDialogDataAsset* NewShout, EShoutType ShoutType, bool IgnoreCoolDown, UAudioComponent* AudioComponent, UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void MixerAnnouncementLocalOnly(UObject* WorldContext, const FMixerAnnouncement& Announcement);
    
    UFUNCTION(BlueprintCallable)
    static void MixerAnnouncement(UObject* WorldContext, const FMixerAnnouncement& Announcement);
    
    UFUNCTION(BlueprintCallable)
    static int32 MissionShoutLocally(UObject* WorldContext, UDialogDataAsset* NewShout);
    
    UFUNCTION(BlueprintCallable)
    static void MissionShout(UObject* WorldContext, UDialogDataAsset* NewShout, bool bPriority);
    
    UFUNCTION(BlueprintPure)
    bool IsMissionControlSpeaking() const;
    
protected:
    UFUNCTION(Client, Unreliable, WithValidation)
    void ClientShout(APlayerCharacter* Sender, UDialogDataAsset* NewShout, int32 Index);
    
    UFUNCTION(Client, Reliable, WithValidation)
    void ClientMixerAnnouncement(const FMixerAnnouncement& Announcement);
    
    UFUNCTION(Client, Reliable, WithValidation)
    void ClientMissionShout(UDialogDataAsset* NewShout, int32 Index, bool bPriority);
    
public:
    UCommunicationComponent();
};

