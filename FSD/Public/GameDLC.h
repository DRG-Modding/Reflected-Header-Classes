#pragma once
#include "CoreMinimal.h"
#include "DLCBase.h"
#include "SaveGameIDInterface.h"
//CROSS-MODULE INCLUDE: CoreUObject Guid
#include "GameDLC.generated.h"

class UObject;
class UTexture2D;
class UWindowWidget;
class UResourceData;
class UFileMediaSource;

UCLASS()
class UGameDLC : public UDLCBase, public ISaveGameIDInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 SteamID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString SteamName;
    
    UPROPERTY(EditAnywhere)
    FString OddishID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString XBoxDLCName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<FString, FString> SonyAdditionalContentLabelMap;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString UWPStoreID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool ShowOnDLCScreen;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UTexture2D> Banner;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UTexture2D> Banner_16_9;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<UWindowWidget> AnnouncementWidget;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FGuid SaveGameID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<UResourceData*, int32> Resources;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 PerformancePoints;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UFileMediaSource> Movie;
    
public:
    UFUNCTION(BlueprintPure)
    bool ShouldBeAnnounced(UObject* WorldContext) const;
    
    UFUNCTION(BlueprintCallable)
    bool OpenStorePage(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable)
    void MarkAnnounced(UObject* WorldContext);
    
    UFUNCTION(BlueprintPure)
    FString GetSonyAdditionalContentId() const;
    
    UFUNCTION(BlueprintPure)
    UTexture2D* GetBanner_16_9() const;
    
    UFUNCTION(BlueprintPure)
    UTexture2D* GetBanner() const;
    
    UGameDLC();
};

