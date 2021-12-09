#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SlateCore SlateBrush
#include "Widget.h"
#include "CircularThrobber.generated.h"

class USlateBrushAsset;

UCLASS()
class UMG_API UCircularThrobber : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 NumberOfPieces;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Period;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Radius;
    
    UPROPERTY()
    USlateBrushAsset* PieceImage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateBrush Image;
    
private:
    UPROPERTY(EditAnywhere, Transient)
    bool bEnableRadius;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetRadius(float InRadius);
    
    UFUNCTION(BlueprintCallable)
    void SetPeriod(float InPeriod);
    
    UFUNCTION(BlueprintCallable)
    void SetNumberOfPieces(int32 InNumberOfPieces);
    
    UCircularThrobber();
};

