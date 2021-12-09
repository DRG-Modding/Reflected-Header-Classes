#pragma once
#include "CoreMinimal.h"
#include "FSDHUD.h"
#include "SpaceRigHUD.generated.h"

class UObject;
class UDialogDataAsset;
class UWindowWidget;

UCLASS(NonTransient)
class ASpaceRigHUD : public AFSDHUD {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TArray<UObject*> NotificationQueue;
    
    UPROPERTY(BlueprintReadOnly)
    bool bNotificationQueueActive;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetNotificationQueueActive(bool Inactive);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveNotificationQueueActivated();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveNotificationAdded(UObject* InNotification);
    
public:
    UFUNCTION(BlueprintCallable)
    UWindowWidget* QueueWindowClass(TSoftClassPtr<UWindowWidget> InWindowType);
    
    UFUNCTION(BlueprintCallable)
    void QueueWindow(UWindowWidget* InWindow);
    
    UFUNCTION(BlueprintCallable)
    void QueueNotificationObject(UObject* InObject);
    
    UFUNCTION(BlueprintCallable)
    void QueueMissionShout(TSoftObjectPtr<UDialogDataAsset> InShout);
    
    UFUNCTION(BlueprintPure)
    bool IsNotificationQueueEmpty() const;
    
    UFUNCTION(BlueprintCallable)
    UObject* DequeueNotificationObject();
    
    ASpaceRigHUD();
};

