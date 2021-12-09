#pragma once
#include "CoreMinimal.h"
#include "MyPluginStruct.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "MyPluginObject.generated.h"

UCLASS()
class UMyPluginObject : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FMyPluginStruct MyStruct;
    
public:
    UMyPluginObject();
};

