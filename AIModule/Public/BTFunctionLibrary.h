#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
#include "BlackboardKeySelector.h"
//CROSS-MODULE INCLUDE: CoreUObject Rotator
#include "BTFunctionLibrary.generated.h"

class UBTNode;
class AActor;
class UBlackboardComponent;
class UObject;
class UBehaviorTreeComponent;

UCLASS(BlueprintType)
class AIMODULE_API UBTFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static void StopUsingExternalEvent(UBTNode* NodeOwner);
    
    UFUNCTION(BlueprintCallable)
    static void StartUsingExternalEvent(UBTNode* NodeOwner, AActor* owningActor);
    
    UFUNCTION(BlueprintCallable)
    static void SetBlackboardValueAsVector(UBTNode* NodeOwner, const FBlackboardKeySelector& Key, FVector Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetBlackboardValueAsString(UBTNode* NodeOwner, const FBlackboardKeySelector& Key, const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetBlackboardValueAsRotator(UBTNode* NodeOwner, const FBlackboardKeySelector& Key, FRotator Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetBlackboardValueAsObject(UBTNode* NodeOwner, const FBlackboardKeySelector& Key, UObject* Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetBlackboardValueAsName(UBTNode* NodeOwner, const FBlackboardKeySelector& Key, FName Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetBlackboardValueAsInt(UBTNode* NodeOwner, const FBlackboardKeySelector& Key, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetBlackboardValueAsFloat(UBTNode* NodeOwner, const FBlackboardKeySelector& Key, float Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetBlackboardValueAsEnum(UBTNode* NodeOwner, const FBlackboardKeySelector& Key, uint8 Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetBlackboardValueAsClass(UBTNode* NodeOwner, const FBlackboardKeySelector& Key, UClass* Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetBlackboardValueAsBool(UBTNode* NodeOwner, const FBlackboardKeySelector& Key, bool Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UBlackboardComponent* GetOwnersBlackboard(UBTNode* NodeOwner);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UBehaviorTreeComponent* GetOwnerComponent(UBTNode* NodeOwner);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetBlackboardValueAsVector(UBTNode* NodeOwner, const FBlackboardKeySelector& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetBlackboardValueAsString(UBTNode* NodeOwner, const FBlackboardKeySelector& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator GetBlackboardValueAsRotator(UBTNode* NodeOwner, const FBlackboardKeySelector& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UObject* GetBlackboardValueAsObject(UBTNode* NodeOwner, const FBlackboardKeySelector& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetBlackboardValueAsName(UBTNode* NodeOwner, const FBlackboardKeySelector& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetBlackboardValueAsInt(UBTNode* NodeOwner, const FBlackboardKeySelector& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetBlackboardValueAsFloat(UBTNode* NodeOwner, const FBlackboardKeySelector& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 GetBlackboardValueAsEnum(UBTNode* NodeOwner, const FBlackboardKeySelector& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UClass* GetBlackboardValueAsClass(UBTNode* NodeOwner, const FBlackboardKeySelector& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetBlackboardValueAsBool(UBTNode* NodeOwner, const FBlackboardKeySelector& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AActor* GetBlackboardValueAsActor(UBTNode* NodeOwner, const FBlackboardKeySelector& Key);
    
    UFUNCTION(BlueprintCallable)
    static void ClearBlackboardValueAsVector(UBTNode* NodeOwner, const FBlackboardKeySelector& Key);
    
    UFUNCTION(BlueprintCallable)
    static void ClearBlackboardValue(UBTNode* NodeOwner, const FBlackboardKeySelector& Key);
    
    UBTFunctionLibrary();
};

