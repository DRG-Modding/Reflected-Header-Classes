#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "ETetherMessageDirection.h"
#include "ETetherConnectionMode.h"
#include "TetherMessageSettings.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "TetherComponent.generated.h"

class UMeshComponent;
class UTetherComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTetherComponentOnPowerChanged, bool, hasPower);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTetherComponentOnConnectionRangeUpdated, float, range);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTetherComponentOnConnectionChanged, UTetherComponent*, frontConnection, UTetherComponent*, backConnection);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTetherComponentOnTetherMessage, const FName&, Message);

UCLASS(BlueprintType)
class FSD_API UTetherComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FTetherComponentOnPowerChanged OnPowerChanged;
    
    UPROPERTY(BlueprintAssignable)
    FTetherComponentOnConnectionChanged OnConnectionChanged;
    
    UPROPERTY(BlueprintAssignable)
    FTetherComponentOnTetherMessage OnTetherMessage;
    
    UPROPERTY(BlueprintAssignable)
    FTetherComponentOnConnectionRangeUpdated OnConnectionRangeUpdated;
    
protected:
    UPROPERTY(Export, Transient)
    UMeshComponent* TetherMesh;
    
    UPROPERTY(EditAnywhere)
    bool AutoSetup;
    
    UPROPERTY(Export, Transient)
    TArray<UTetherComponent*> ConnectionHistory;
    
    UPROPERTY(EditAnywhere)
    FName ConnectionPointName;
    
    UPROPERTY(Export, Transient, ReplicatedUsing=OnRep_ForwardConnection)
    UTetherComponent* ForwardConnection;
    
    UPROPERTY(Export, Transient, ReplicatedUsing=OnRep_BackConnection)
    UTetherComponent* backConnection;
    
    UPROPERTY(EditAnywhere)
    float ConnectionDistance;
    
    UPROPERTY(EditAnywhere)
    ETetherConnectionMode ConnectionMode;
    
    UPROPERTY(EditAnywhere)
    int32 ConnectionPriority;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 ConnectionHistorySize;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool GeneratesPower;
    
    UPROPERTY(EditAnywhere)
    bool PeriodicConnectionValidation;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_HasPower)
    bool hasPower;
    
public:
    UFUNCTION(BlueprintCallable)
    void ToggleConnectionValidation(bool Enabled, bool reactivate);
    
    UFUNCTION(BlueprintCallable)
    void StopLoSTimer();
    
    UFUNCTION(BlueprintCallable)
    void StartLoSTimer();
    
    UFUNCTION(BlueprintCallable)
    void SetupConnectionpoint(UMeshComponent* Mesh, const FName& SocketName);
    
    UFUNCTION(BlueprintCallable)
    void SetConnectionRange(float range);
    
    UFUNCTION(BlueprintCallable)
    void ResetConnectionHistory();
    
protected:
    UFUNCTION()
    void OnRep_HasPower();
    
    UFUNCTION()
    void OnRep_ForwardConnection();
    
    UFUNCTION()
    void OnRep_BackConnection();
    
public:
    UFUNCTION(BlueprintCallable)
    void MessageTetherLine(const FName& Message, float Delay, ETetherMessageDirection messageDirection);
    
protected:
    UFUNCTION()
    void MessageBody(const FTetherMessageSettings& Message);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsStartOfLine() const;
    
    UFUNCTION(BlueprintPure)
    bool IsFullyConnected() const;
    
    UFUNCTION(BlueprintPure)
    bool IsEndOfLine() const;
    
    UFUNCTION(BlueprintPure)
    bool IsConnected() const;
    
    UFUNCTION(BlueprintCallable)
    UTetherComponent* GetTetherlineEnd(bool front);
    
    UFUNCTION(BlueprintPure)
    bool GetHasPower() const;
    
    UFUNCTION(BlueprintCallable)
    UTetherComponent* GetForwardConnection();
    
    UFUNCTION(BlueprintPure)
    float GetConnectionRange() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetConnectionPoint() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<UTetherComponent*> GetConnectionHistory();
    
    UFUNCTION(BlueprintCallable)
    UTetherComponent* GetBackConnection();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void DisconnectFromTetherLine(bool Deactivate);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool ConnectToTetherLine();
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UTetherComponent();
};

