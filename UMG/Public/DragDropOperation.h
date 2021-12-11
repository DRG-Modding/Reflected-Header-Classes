#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "EDragPivot.h"
//CROSS-MODULE INCLUDE: SlateCore PointerEvent
//CROSS-MODULE INCLUDE: CoreUObject Vector2D
#include "DragDropOperation.generated.h"

class UWidget;
class UDragDropOperation;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDragDropOperationOnDrop, UDragDropOperation*, Operation);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDragDropOperationOnDragCancelled, UDragDropOperation*, Operation);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDragDropOperationOnDragged, UDragDropOperation*, Operation);

UCLASS(Blueprintable)
class UMG_API UDragDropOperation : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UObject* Payload;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    UWidget* DefaultDragVisual;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EDragPivot Pivot;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    FVector2D Offset;
    
    UPROPERTY(BlueprintAssignable)
    FDragDropOperationOnDrop OnDrop;
    
    UPROPERTY(BlueprintAssignable)
    FDragDropOperationOnDragCancelled OnDragCancelled;
    
    UPROPERTY(BlueprintAssignable)
    FDragDropOperationOnDragged OnDragged;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Drop(const FPointerEvent& PointerEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Dragged(const FPointerEvent& PointerEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DragCancelled(const FPointerEvent& PointerEvent);
    
    UDragDropOperation();
};

