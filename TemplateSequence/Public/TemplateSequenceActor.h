#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSequenceActor -FallbackName=MovieSceneSequenceActor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieScenePlaybackClient -FallbackName=MovieScenePlaybackClient
#include "TemplateSequenceBindingOverrideData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSequencePlaybackSettings -FallbackName=MovieSceneSequencePlaybackSettings
#include "TemplateSequenceActor.generated.h"

class UTemplateSequencePlayer;
class UTemplateSequence;

UCLASS()
class TEMPLATESEQUENCE_API ATemplateSequenceActor : public AActor, public IMovieSceneSequenceActor, public IMovieScenePlaybackClient {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneSequencePlaybackSettings PlaybackSettings;
    
    UPROPERTY(BlueprintReadWrite, Instanced, Replicated, Transient, meta=(AllowPrivateAccess=true))
    UTemplateSequencePlayer* SequencePlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath TemplateSequence;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FTemplateSequenceBindingOverrideData BindingOverride;
    
    ATemplateSequenceActor();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetSequence(UTemplateSequence* InSequence);
    
    UFUNCTION(BlueprintCallable)
    void SetBinding(AActor* Actor, bool bOverridesDefault);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTemplateSequence* LoadSequence() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTemplateSequencePlayer* GetSequencePlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTemplateSequence* GetSequence() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

