#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: Engine Actor
#include "Skinnable.h"
#include "IconGeneratable.h"
#include "ItemPreviewActor.generated.h"

class USkinEffect;
class UItemSkin;
class UIconGenerationCameraKey;

UCLASS()
class AItemPreviewActor : public AActor, public ISkinnable, public IIconGeneratable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    UItemSkin* CurrentSkinColor;
    
    UPROPERTY(Transient)
    UItemSkin* CurrentSkinMesh;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    TSubclassOf<AActor> itemClass;
    
    UPROPERTY(EditAnywhere)
    UIconGenerationCameraKey* CameraKey_Normal;
    
    UPROPERTY(EditAnywhere)
    UIconGenerationCameraKey* CameraKey_CloseUp;
    
public:
    UFUNCTION(BlueprintCallable)
    void SkinItem(USkinEffect* Skin);
    
    UFUNCTION(BlueprintCallable)
    void SetItemClass(TSubclassOf<AActor> NewItemClass);
    
protected:
    UFUNCTION()
    void OnSkinPreviewChanged(UItemSkin* PreviewSkin);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnSkinItem(USkinEffect* Skin);
    
    UFUNCTION()
    void OnSkinChanged();
    
    UFUNCTION()
    void ChangeSkin(UItemSkin* skinMesh, UItemSkin* skinColor, bool isPreview);
    
public:
    AItemPreviewActor();
};

