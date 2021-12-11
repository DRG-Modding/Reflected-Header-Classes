#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Interface
#include "CopyBoneVisibilityCompleted.generated.h"

UINTERFACE()
class UCopyBoneVisibilityCompleted : public UInterface {
    GENERATED_BODY()
};

class ICopyBoneVisibilityCompleted : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual void CopyBoneVisibilityCompleted(int32 BoneIndex) PURE_VIRTUAL(CopyBoneVisibilityCompleted,);
    
};

