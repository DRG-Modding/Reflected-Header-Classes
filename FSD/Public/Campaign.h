#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ECampaignMutators.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
//CROSS-MODULE INCLUDE: CoreUObject Guid
#include "ECampaignType.h"
#include "Campaign.generated.h"

class UPlayerCharacterID;
class UCampaignMission;
class UDifficultySetting;
class UCampaignRequirement;
class UTexture2D;
class UMissionStat;
class UGameActivityAssignmentType;
class UCampaign;
class AFSDPlayerController;
class APlayerController;

UCLASS(Abstract, BlueprintType)
class UCampaign : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    TArray<UCampaignMission*> missions;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    TArray<UCampaignRequirement*> Requirements;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    TArray<UCampaignRequirement*> VisibilityRequirements;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UPlayerCharacterID* RequiredCharacterID;
    
    UPROPERTY(EditAnywhere)
    TArray<UDifficultySetting*> RestrictedToDifficulties;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 Progress;
    
    UPROPERTY(EditAnywhere)
    FGuid SaveGameID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool CanAbort;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool CanSkip;
    
    UPROPERTY(EditAnywhere)
    ECampaignMutators Mutators;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText TitlePrefix;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Title;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText DescriptionHeader;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText RewardText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText RewardFlavorText;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTexture2D* Icon;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UTexture2D> Picture;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ECampaignType campaigntype;
    
    UPROPERTY(EditAnywhere)
    UMissionStat* CampaignCompletedMissionStat;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UGameActivityAssignmentType* CampaignActivity;
    
    UFUNCTION(BlueprintPure)
    bool IsComplete() const;
    
    UFUNCTION(BlueprintPure)
    static bool IsCampaignComplete(UObject* WorldContext, TSubclassOf<UCampaign> Campaign);
    
    UFUNCTION(BlueprintPure)
    static UCampaign* GetReference(TSubclassOf<UCampaign> Campaign);
    
    UFUNCTION(BlueprintPure)
    UCampaignMission* GetPreviousMission() const;
    
    UFUNCTION(BlueprintPure)
    UTexture2D* GetPicture() const;
    
    UFUNCTION(BlueprintPure)
    static FText GetCampaignTitle(TSubclassOf<UCampaign> Campaign);
    
    UFUNCTION(BlueprintPure)
    UCampaignMission* GetActiveMission() const;
    
    UFUNCTION(BlueprintPure)
    bool CanStartCampaign(AFSDPlayerController* Player) const;
    
    UFUNCTION(BlueprintPure)
    bool CanSeeCampaign(APlayerController* PlayerController) const;
    
    UFUNCTION(BlueprintPure)
    bool AreRestrictionsMet(AFSDPlayerController* Player, UDifficultySetting* optionalDifficulty) const;
    
    UCampaign();
};

