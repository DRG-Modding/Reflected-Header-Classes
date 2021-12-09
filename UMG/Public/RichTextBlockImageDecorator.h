#pragma once
#include "CoreMinimal.h"
#include "RichTextBlockDecorator.h"
#include "RichTextBlockImageDecorator.generated.h"

class UDataTable;

UCLASS(Abstract)
class UMG_API URichTextBlockImageDecorator : public URichTextBlockDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UDataTable* ImageSet;
    
public:
    URichTextBlockImageDecorator();
};

