#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "NewMessageSigDelegate.h"
#include "FSDChatMessage.h"
#include "MessagingSubSystem.generated.h"

UCLASS(BlueprintType)
class UMessagingSubSystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FNewMessageSig OnNewMessage;
    
    UMessagingSubSystem();
    UFUNCTION(BlueprintCallable)
    static float MessageAge(const FFSDChatMessage& Msg);
    
    UFUNCTION(BlueprintCallable)
    void LatestMessages(int32 Num, bool resetAge, TArray<FFSDChatMessage>& OutMessages);
    
    UFUNCTION(BlueprintCallable)
    void ClearMessages();
    
};

