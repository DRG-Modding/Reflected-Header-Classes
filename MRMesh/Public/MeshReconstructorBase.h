#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "MeshReconstructorBase.generated.h"

class UMRMeshComponent;

UCLASS(BlueprintType)
class MRMESH_API UMeshReconstructorBase : public UObject {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    void StopReconstruction();
    
    UFUNCTION(BlueprintCallable)
    void StartReconstruction();
    
    UFUNCTION(BlueprintCallable)
    void PauseReconstruction();
    
    UFUNCTION(BlueprintPure)
    bool IsReconstructionStarted() const;
    
    UFUNCTION(BlueprintPure)
    bool IsReconstructionPaused() const;
    
    UFUNCTION()
    void DisconnectMRMesh();
    
    UFUNCTION()
    void ConnectMRMesh(UMRMeshComponent* Mesh);
    
    UMeshReconstructorBase();
};

