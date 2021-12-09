#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
#include "DatasmithContentBlueprintLibrary.generated.h"

class UObject;
class UDatasmithAssetUserData;

UCLASS(BlueprintType)
class DATASMITHCONTENT_API UDatasmithContentBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static FString GetDatasmithUserDataValueForKey(UObject* Object, FName Key);
    
    UFUNCTION(BlueprintCallable)
    static void GetDatasmithUserDataKeysAndValuesForValue(UObject* Object, const FString& StringToMatch, TArray<FName>& OutKeys, TArray<FString>& OutValues);
    
    UFUNCTION(BlueprintCallable)
    static UDatasmithAssetUserData* GetDatasmithUserData(UObject* Object);
    
    UDatasmithContentBlueprintLibrary();
};

