#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EWidgetGeometryMode.h"
//CROSS-MODULE INCLUDE: Engine MeshComponent
#include "EWindowVisibility.h"
#include "EWidgetSpace.h"
#include "EWidgetTimingPolicy.h"
//CROSS-MODULE INCLUDE: CoreUObject IntPoint
//CROSS-MODULE INCLUDE: CoreUObject Vector2D
//CROSS-MODULE INCLUDE: CoreUObject LinearColor
#include "EWidgetBlendMode.h"
#include "WidgetComponent.generated.h"

class ULocalPlayer;
class UBodySetup;
class UUserWidget;
class UMaterialInterface;
class UTextureRenderTarget2D;
class UMaterialInstanceDynamic;

UCLASS(EditInlineNew)
class UMG_API UWidgetComponent : public UMeshComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    EWidgetSpace Space;
    
    UPROPERTY(EditAnywhere)
    EWidgetTimingPolicy TimingPolicy;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UUserWidget> WidgetClass;
    
    UPROPERTY(EditAnywhere)
    FIntPoint DrawSize;
    
    UPROPERTY(EditAnywhere)
    bool bManuallyRedraw;
    
    UPROPERTY()
    bool bRedrawRequested;
    
    UPROPERTY(EditAnywhere)
    float RedrawTime;
    
    UPROPERTY()
    FIntPoint CurrentDrawSize;
    
    UPROPERTY(EditAnywhere)
    bool bDrawAtDesiredSize;
    
    UPROPERTY(EditAnywhere)
    FVector2D Pivot;
    
    UPROPERTY(EditAnywhere)
    bool bReceiveHardwareInput;
    
    UPROPERTY(EditAnywhere)
    bool bWindowFocusable;
    
    UPROPERTY(EditAnywhere)
    EWindowVisibility WindowVisibility;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bApplyGammaCorrection;
    
    UPROPERTY()
    ULocalPlayer* OwnerPlayer;
    
    UPROPERTY(EditAnywhere)
    FLinearColor BackgroundColor;
    
    UPROPERTY(EditAnywhere)
    FLinearColor TintColorAndOpacity;
    
    UPROPERTY(EditAnywhere)
    float OpacityFromTexture;
    
    UPROPERTY(EditAnywhere)
    EWidgetBlendMode BlendMode;
    
    UPROPERTY(EditAnywhere)
    bool bIsTwoSided;
    
    UPROPERTY(EditAnywhere)
    bool TickWhenOffscreen;
    
    UPROPERTY(DuplicateTransient, Export, Transient)
    UUserWidget* Widget;
    
    UPROPERTY(DuplicateTransient, Transient)
    UBodySetup* BodySetup;
    
    UPROPERTY()
    UMaterialInterface* TranslucentMaterial;
    
    UPROPERTY()
    UMaterialInterface* TranslucentMaterial_OneSided;
    
    UPROPERTY()
    UMaterialInterface* OpaqueMaterial;
    
    UPROPERTY()
    UMaterialInterface* OpaqueMaterial_OneSided;
    
    UPROPERTY()
    UMaterialInterface* MaskedMaterial;
    
    UPROPERTY()
    UMaterialInterface* MaskedMaterial_OneSided;
    
    UPROPERTY(DuplicateTransient, Transient)
    UTextureRenderTarget2D* RenderTarget;
    
    UPROPERTY(DuplicateTransient, Transient)
    UMaterialInstanceDynamic* MaterialInstance;
    
    UPROPERTY(DuplicateTransient, Transient)
    bool bAddedToScreen;
    
    UPROPERTY()
    bool bEditTimeUsable;
    
    UPROPERTY(EditDefaultsOnly)
    FName SharedLayerName;
    
    UPROPERTY(EditDefaultsOnly)
    int32 LayerZOrder;
    
    UPROPERTY(EditAnywhere)
    EWidgetGeometryMode GeometryMode;
    
    UPROPERTY(EditAnywhere)
    float CylinderArcAngle;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetWindowVisibility(EWindowVisibility InVisibility);
    
    UFUNCTION(BlueprintCallable)
    void SetWindowFocusable(bool bInWindowFocusable);
    
    UFUNCTION(BlueprintCallable)
    void SetWidgetSpace(EWidgetSpace NewSpace);
    
    UFUNCTION(BlueprintCallable)
    void SetWidget(UUserWidget* NewWidget);
    
    UFUNCTION(BlueprintCallable)
    void SetTwoSided(const bool bWantTwoSided);
    
    UFUNCTION(BlueprintCallable)
    void SetTintColorAndOpacity(const FLinearColor NewTintColorAndOpacity);
    
    UFUNCTION(BlueprintCallable)
    void SetTickWhenOffscreen(const bool bWantTickWhenOffscreen);
    
    UFUNCTION(BlueprintCallable)
    void SetRedrawTime(float InRedrawTime);
    
    UFUNCTION(BlueprintCallable)
    void SetPivot(const FVector2D& InPivot);
    
    UFUNCTION(BlueprintCallable)
    void SetOwnerPlayer(ULocalPlayer* LocalPlayer);
    
    UFUNCTION(BlueprintCallable)
    void SetManuallyRedraw(bool bUseManualRedraw);
    
    UFUNCTION(BlueprintCallable)
    void SetGeometryMode(EWidgetGeometryMode InGeometryMode);
    
    UFUNCTION(BlueprintCallable)
    void SetDrawSize(FVector2D Size);
    
    UFUNCTION(BlueprintCallable)
    void SetDrawAtDesiredSize(bool bInDrawAtDesiredSize);
    
    UFUNCTION(BlueprintCallable)
    void SetCylinderArcAngle(const float InCylinderArcAngle);
    
    UFUNCTION(BlueprintCallable)
    void SetBackgroundColor(const FLinearColor NewBackgroundColor);
    
    UFUNCTION(BlueprintCallable)
    void RequestRedraw();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EWindowVisibility GetWindowVisiblility() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetWindowFocusable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EWidgetSpace GetWidgetSpace() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUserWidget* GetUserWidgetObject() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetTwoSided() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetTickWhenOffscreen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTextureRenderTarget2D* GetRenderTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRedrawTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetPivot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULocalPlayer* GetOwnerPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMaterialInstanceDynamic* GetMaterialInstance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetManuallyRedraw() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EWidgetGeometryMode GetGeometryMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetDrawSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDrawAtDesiredSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCylinderArcAngle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetCurrentDrawSize() const;
    
    UWidgetComponent();
};

