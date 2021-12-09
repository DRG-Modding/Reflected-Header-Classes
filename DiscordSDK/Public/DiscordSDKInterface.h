#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "DiscordUserDataSDK.h"
#include "DiscordSDKInterface.generated.h"

class UDiscordSDKInterface;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDiscordSDKInterfaceOnJoinRequest, const FDiscordUserDataSDK&, joinRequest);

UCLASS(BlueprintType)
class DISCORDSDK_API UDiscordSDKInterface : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FDiscordSDKInterfaceOnJoinRequest OnJoinRequest;
    
protected:
    UFUNCTION(BlueprintCallable)
    void RejectInvite(const FString& UserId);
    
    UFUNCTION(BlueprintCallable)
    void IgnoreInvite(const FString& UserId);
    
public:
    UFUNCTION(BlueprintPure)
    static UDiscordSDKInterface* Get();
    
protected:
    UFUNCTION(BlueprintCallable)
    void AcceptInvite(const FString& UserId);
    
public:
    UDiscordSDKInterface();
};
