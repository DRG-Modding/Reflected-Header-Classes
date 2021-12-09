#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "DefaultPickaxeParts.h"
#include "PickaxeSettings.generated.h"

class UPlayerCharacterID;
class UAnimMontage;
class APickaxePreviewActor;
class UPickaxePart;
class UItemID;

UCLASS(BlueprintType)
class UPickaxeSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<UPlayerCharacterID*, TSubclassOf<APickaxePreviewActor>> PickaxePreviewActors;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* Salute_FP;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* Salute_TP;
    
protected:
    UPROPERTY(Transient)
    TArray<UPickaxePart*> Parts;
    
    UPROPERTY(EditAnywhere)
    TMap<UItemID*, FDefaultPickaxeParts> DefaultParts;
    
public:
    UPickaxeSettings();
};

