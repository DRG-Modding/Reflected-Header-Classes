#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EWidgetTimingPolicy.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=MeshComponent -FallbackName=MeshComponent
#include "EWidgetSpace.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntPoint -FallbackName=IntPoint
#include "EWidgetGeometryMode.h"
#include "EWindowVisibility.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "EWidgetBlendMode.h"
#include "ETickMode.h"
#include "WidgetComponent.generated.h"

class UUserWidget;
class ULocalPlayer;
class UTextureRenderTarget2D;
class UBodySetup;
class UMaterialInterface;
class UMaterialInstanceDynamic;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UMG_API UWidgetComponent : public UMeshComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWidgetSpace Space;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWidgetTimingPolicy TimingPolicy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> WidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntPoint DrawSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bManuallyRedraw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRedrawRequested;
    
    UPROPERTY(EditAnywhere)
    float RedrawTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntPoint CurrentDrawSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawAtDesiredSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Pivot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReceiveHardwareInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWindowFocusable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWindowVisibility WindowVisibility;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyGammaCorrection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULocalPlayer* OwnerPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor BackgroundColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor TintColorAndOpacity;
    
    UPROPERTY(EditAnywhere)
    float OpacityFromTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWidgetBlendMode BlendMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTwoSided;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TickWhenOffscreen;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBodySetup* BodySetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* TranslucentMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* TranslucentMaterial_OneSided;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* OpaqueMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* OpaqueMaterial_OneSided;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* MaskedMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* MaskedMaterial_OneSided;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* RenderTarget;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* MaterialInstance;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bAddedToScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEditTimeUsable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SharedLayerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LayerZOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWidgetGeometryMode GeometryMode;
    
    UPROPERTY(EditAnywhere)
    float CylinderArcAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETickMode TickMode;
    
private:
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UUserWidget* Widget;
    
public:
    UWidgetComponent();
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
    void SetTickMode(ETickMode InTickMode);
    
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
    void RequestRenderUpdate();
    
    UFUNCTION(BlueprintCallable)
    void RequestRedraw();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWidgetVisible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EWindowVisibility GetWindowVisiblility() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetWindowFocusable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EWidgetSpace GetWidgetSpace() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUserWidget* GetWidget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUserWidget* GetUserWidgetObject() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetTwoSided() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetTickWhenOffscreen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTextureRenderTarget2D* GetRenderTarget() const;
    
    UFUNCTION(BlueprintPure)
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
    
    UFUNCTION(BlueprintPure)
    float GetCylinderArcAngle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetCurrentDrawSize() const;
    
};

