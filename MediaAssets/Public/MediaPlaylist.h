#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "MediaPlaylist.generated.h"

class UMediaSource;

UCLASS(BlueprintType)
class MEDIAASSETS_API UMediaPlaylist : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TArray<UMediaSource*> Items;
    
public:
    UFUNCTION(BlueprintCallable)
    bool Replace(int32 Index, UMediaSource* Replacement);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveAt(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    bool Remove(UMediaSource* MediaSource);
    
    UFUNCTION(BlueprintCallable)
    int32 Num();
    
    UFUNCTION(BlueprintCallable)
    void Insert(UMediaSource* MediaSource, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    UMediaSource* GetRandom(int32& OutIndex);
    
    UFUNCTION(BlueprintCallable)
    UMediaSource* GetPrevious(int32& InOutIndex);
    
    UFUNCTION(BlueprintCallable)
    UMediaSource* GetNext(int32& InOutIndex);
    
    UFUNCTION(BlueprintCallable)
    UMediaSource* Get(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    bool AddUrl(const FString& URL);
    
    UFUNCTION(BlueprintCallable)
    bool AddFile(const FString& FilePath);
    
    UFUNCTION(BlueprintCallable)
    bool Add(UMediaSource* MediaSource);
    
    UMediaPlaylist();
};

