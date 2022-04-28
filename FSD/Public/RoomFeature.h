#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "RoomFeature.generated.h"

class URoomFeature;

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class URoomFeature : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<URoomFeature*> RoomFeatures;
    
public:
    URoomFeature();
};

