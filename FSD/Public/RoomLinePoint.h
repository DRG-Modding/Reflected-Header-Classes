#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RoomLinePoint.generated.h"

USTRUCT(BlueprintType)
struct FRoomLinePoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(EditAnywhere)
    float HRange;
    
    UPROPERTY(EditAnywhere)
    float VRange;
    
    UPROPERTY(EditAnywhere)
    float CielingNoiseRange;
    
    UPROPERTY(EditAnywhere)
    float WallNoiseRange;
    
    UPROPERTY(EditAnywhere)
    float FloorNoiseRange;
    
    UPROPERTY(EditAnywhere)
    float Cielingheight;
    
    UPROPERTY(EditAnywhere)
    float HeightScale;
    
    UPROPERTY(EditAnywhere)
    float FloorDepth;
    
    UPROPERTY(EditAnywhere)
    float FloorAngle;
    
    FSD_API FRoomLinePoint();
};

