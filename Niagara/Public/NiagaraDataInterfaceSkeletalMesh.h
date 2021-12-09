#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterface.h"
#include "NiagaraUserParameterBinding.h"
#include "ENDISkeletalMesh_SkinningMode.h"
#include "NiagaraDataInterfaceSkeletalMesh.generated.h"

class AActor;
class USkeletalMeshComponent;

UCLASS(EditInlineNew)
class NIAGARA_API UNiagaraDataInterfaceSkeletalMesh : public UNiagaraDataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    AActor* Source;
    
    UPROPERTY(EditAnywhere)
    FNiagaraUserParameterBinding MeshUserParameter;
    
    UPROPERTY(Export, Transient)
    USkeletalMeshComponent* SourceComponent;
    
    UPROPERTY(EditAnywhere)
    ENDISkeletalMesh_SkinningMode SkinningMode;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> SamplingRegions;
    
    UPROPERTY(EditAnywhere)
    int32 WholeMeshLOD;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> FilteredBones;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> FilteredSockets;
    
    UPROPERTY(EditAnywhere)
    FName ExcludeBoneName;
    
    UPROPERTY(EditAnywhere)
    uint8 bExcludeBone: 1;
    
    UNiagaraDataInterfaceSkeletalMesh();
};

