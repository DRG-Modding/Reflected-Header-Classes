#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=RichTextBlockDecorator -FallbackName=RichTextBlockDecorator
#include "CustomRichTextDecorator.generated.h"

class URichTextBlock;

UCLASS(Abstract, Blueprintable, HideDropdown)
class UCustomRichTextDecorator : public URichTextBlockDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    URichTextBlock* RichTextBlock;
    
public:
    UCustomRichTextDecorator();
};

