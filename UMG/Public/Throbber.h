#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SlateCore SlateBrush
#include "Widget.h"
#include "Throbber.generated.h"

class USlateBrushAsset;

UCLASS()
class UMG_API UThrobber : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 NumberOfPieces;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bAnimateHorizontally;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bAnimateVertically;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bAnimateOpacity;
    
    UPROPERTY()
    USlateBrushAsset* PieceImage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateBrush Image;
    
    UFUNCTION(BlueprintCallable)
    void SetNumberOfPieces(int32 InNumberOfPieces);
    
    UFUNCTION(BlueprintCallable)
    void SetAnimateVertically(bool bInAnimateVertically);
    
    UFUNCTION(BlueprintCallable)
    void SetAnimateOpacity(bool bInAnimateOpacity);
    
    UFUNCTION(BlueprintCallable)
    void SetAnimateHorizontally(bool bInAnimateHorizontally);
    
    UThrobber();
};

