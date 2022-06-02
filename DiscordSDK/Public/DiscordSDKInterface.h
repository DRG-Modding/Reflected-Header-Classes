#pragma once
#include "CoreMinimal.h"
#include "DiscordSDKJoinRequestDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "DiscordSDKInterface.generated.h"

class UDiscordSDKInterface;

UCLASS(Blueprintable)
class DISCORDSDK_API UDiscordSDKInterface : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordSDKJoinRequest OnJoinRequest;
    
    UDiscordSDKInterface();
protected:
    UFUNCTION(BlueprintCallable)
    void RejectInvite(const FString& UserId);
    
    UFUNCTION(BlueprintCallable)
    void IgnoreInvite(const FString& UserId);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UDiscordSDKInterface* Get();
    
protected:
    UFUNCTION(BlueprintCallable)
    void AcceptInvite(const FString& UserId);
    
};

