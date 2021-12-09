#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Transform
#include "SteamVRSkeletonTransform.generated.h"

USTRUCT(BlueprintType)
struct STEAMVRINPUTDEVICE_API FSteamVRSkeletonTransform {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FTransform Root;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FTransform wrist;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FTransform Thumb_0;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FTransform Thumb_1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FTransform Thumb_2;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FTransform Thumb_3;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FTransform Index_0;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FTransform Index_1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FTransform Index_2;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FTransform Index_3;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FTransform Index_4;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FTransform Middle_0;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FTransform Middle_1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FTransform Middle_2;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FTransform Middle_3;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FTransform Middle_4;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FTransform Ring_0;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FTransform Ring_1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FTransform Ring_2;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FTransform Ring_3;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FTransform Ring_4;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FTransform Pinky_0;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FTransform Pinky_1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FTransform Pinky_2;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FTransform Pinky_3;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FTransform Pinky_4;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FTransform Aux_Thumb;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FTransform Aux_Index;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FTransform Aux_Middle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FTransform Aux_Ring;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FTransform Aux_Pinky;
    
    FSteamVRSkeletonTransform();
};

