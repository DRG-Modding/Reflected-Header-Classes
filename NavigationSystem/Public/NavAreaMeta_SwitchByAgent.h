#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "NavAreaMeta.h"
#include "NavAreaMeta_SwitchByAgent.generated.h"

class UNavArea;

UCLASS(Abstract)
class NAVIGATIONSYSTEM_API UNavAreaMeta_SwitchByAgent : public UNavAreaMeta {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UNavArea> Agent0Area;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UNavArea> Agent1Area;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UNavArea> Agent2Area;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UNavArea> Agent3Area;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UNavArea> Agent4Area;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UNavArea> Agent5Area;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UNavArea> Agent6Area;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UNavArea> Agent7Area;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UNavArea> Agent8Area;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UNavArea> Agent9Area;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UNavArea> Agent10Area;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UNavArea> Agent11Area;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UNavArea> Agent12Area;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UNavArea> Agent13Area;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UNavArea> Agent14Area;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UNavArea> Agent15Area;
    
    UNavAreaMeta_SwitchByAgent();
};

