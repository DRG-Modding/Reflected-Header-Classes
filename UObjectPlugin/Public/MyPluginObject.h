#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "MyPluginStruct.h"
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

