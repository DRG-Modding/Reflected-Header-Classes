#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE: CoreUObject Vector
//CROSS-MODULE INCLUDE: CoreUObject Rotator
#include "AIBlueprintHelperLibrary.generated.h"

class AAIController;
class AActor;
class UObject;
class UAnimInstance;
class APawn;
class UBehaviorTree;
class AController;
class UNavigationPath;
class UBlackboardComponent;
class UAIAsyncTaskBlueprintProxy;

UCLASS(BlueprintType)
class AIMODULE_API UAIBlueprintHelperLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void UnlockAIResourcesWithAnimation(UAnimInstance* AnimInstance, bool bUnlockMovement, bool UnlockAILogic);
    
    UFUNCTION(BlueprintCallable)
    static APawn* SpawnAIFromClass(UObject* WorldContextObject, TSubclassOf<APawn> PawnClass, UBehaviorTree* BehaviorTree, FVector Location, FRotator Rotation, bool bNoCollisionFail, AActor* Owner);
    
    UFUNCTION(BlueprintCallable)
    static void SimpleMoveToLocation(AController* Controller, const FVector& Goal);
    
    UFUNCTION(BlueprintCallable)
    static void SimpleMoveToActor(AController* Controller, const AActor* Goal);
    
    UFUNCTION(BlueprintCallable)
    static void SendAIMessage(APawn* Target, FName Message, UObject* MessageSource, bool bSuccess);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void LockAIResourcesWithAnimation(UAnimInstance* AnimInstance, bool bLockMovement, bool LockAILogic);
    
    UFUNCTION(BlueprintPure)
    static bool IsValidAIRotation(FRotator Rotation);
    
    UFUNCTION(BlueprintPure)
    static bool IsValidAILocation(FVector Location);
    
    UFUNCTION(BlueprintPure)
    static bool IsValidAIDirection(FVector DirectionVector);
    
    UFUNCTION(BlueprintPure)
    static UNavigationPath* GetCurrentPath(AController* Controller);
    
    UFUNCTION(BlueprintPure)
    static UBlackboardComponent* GetBlackboard(AActor* Target);
    
    UFUNCTION(BlueprintPure)
    static AAIController* GetAIController(AActor* ControlledActor);
    
    UFUNCTION(BlueprintCallable)
    static UAIAsyncTaskBlueprintProxy* CreateMoveToProxyObject(UObject* WorldContextObject, APawn* Pawn, FVector Destination, AActor* TargetActor, float AcceptanceRadius, bool bStopOnOverlap);
    
    UAIBlueprintHelperLibrary();
};

