#pragma once
#include "CoreMinimal.h"
#include "MovieScene3DConstraintSection.h"
//CROSS-MODULE INCLUDE: Engine EDetachmentRule
//CROSS-MODULE INCLUDE: Engine EAttachmentRule
#include "MovieScene3DAttachSection.generated.h"

UCLASS(MinimalAPI)
class UMovieScene3DAttachSection : public UMovieScene3DConstraintSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName AttachSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName AttachComponentName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EAttachmentRule AttachmentLocationRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EAttachmentRule AttachmentRotationRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EAttachmentRule AttachmentScaleRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EDetachmentRule DetachmentLocationRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EDetachmentRule DetachmentRotationRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EDetachmentRule DetachmentScaleRule;
    
    UMovieScene3DAttachSection();
};

