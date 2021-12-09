#include "NiagaraDataInterfaceSkeletalMesh.h"

UNiagaraDataInterfaceSkeletalMesh::UNiagaraDataInterfaceSkeletalMesh() {
    this->Source = NULL;
    this->SourceComponent = NULL;
    this->SkinningMode = ENDISkeletalMesh_SkinningMode::SkinOnTheFly;
    this->WholeMeshLOD = -1;
    this->ExcludeBoneName = TEXT("Root");
    this->bExcludeBone = false;
}

