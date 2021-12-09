#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject FloatRange
//CROSS-MODULE INCLUDE: MediaUtils MediaPlayerOptions
//CROSS-MODULE INCLUDE: CoreUObject Object
//CROSS-MODULE INCLUDE: CoreUObject Rotator
//CROSS-MODULE INCLUDE: CoreUObject Timespan
//CROSS-MODULE INCLUDE: CoreUObject Guid
#include "EMediaPlayerTrack.h"
//CROSS-MODULE INCLUDE: Engine LatentActionInfo
//CROSS-MODULE INCLUDE: CoreUObject IntPoint
#include "MediaPlayer.generated.h"

class UMediaPlaylist;
class UMediaSource;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMediaPlayerOnMediaOpenFailed, const FString&, FailedUrl);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMediaPlayerOnEndReached);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMediaPlayerOnTracksChanged);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMediaPlayerOnMediaClosed);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMediaPlayerOnMediaOpened, const FString&, OpenedUrl);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMediaPlayerOnPlaybackResumed);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMediaPlayerOnPlaybackSuspended);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMediaPlayerOnSeekCompleted);

UCLASS(BlueprintType)
class MEDIAASSETS_API UMediaPlayer : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FMediaPlayerOnEndReached OnEndReached;
    
    UPROPERTY(BlueprintAssignable)
    FMediaPlayerOnMediaClosed OnMediaClosed;
    
    UPROPERTY(BlueprintAssignable)
    FMediaPlayerOnMediaOpened OnMediaOpened;
    
    UPROPERTY(BlueprintAssignable)
    FMediaPlayerOnMediaOpenFailed OnMediaOpenFailed;
    
    UPROPERTY(BlueprintAssignable)
    FMediaPlayerOnPlaybackResumed OnPlaybackResumed;
    
    UPROPERTY(BlueprintAssignable)
    FMediaPlayerOnPlaybackSuspended OnPlaybackSuspended;
    
    UPROPERTY(BlueprintAssignable)
    FMediaPlayerOnSeekCompleted OnSeekCompleted;
    
    UPROPERTY(BlueprintAssignable)
    FMediaPlayerOnTracksChanged OnTracksChanged;
    
    UPROPERTY(BlueprintReadWrite)
    FTimespan CacheAhead;
    
    UPROPERTY(BlueprintReadWrite)
    FTimespan CacheBehind;
    
    UPROPERTY(BlueprintReadWrite)
    FTimespan CacheBehindGame;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite)
    bool NativeAudioOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool PlayOnOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 Shuffle: 1;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 Loop: 1;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UMediaPlaylist* Playlist;
    
    UPROPERTY(BlueprintReadOnly)
    int32 PlaylistIndex;
    
    UPROPERTY(BlueprintReadOnly)
    FTimespan TimeDelay;
    
    UPROPERTY(EditAnywhere)
    float HorizontalFieldOfView;
    
    UPROPERTY(EditAnywhere)
    float VerticalFieldOfView;
    
    UPROPERTY(EditAnywhere)
    FRotator ViewRotation;
    
private:
    UPROPERTY()
    FGuid PlayerGuid;
    
public:
    UFUNCTION(BlueprintPure)
    bool SupportsSeeking() const;
    
    UFUNCTION(BlueprintPure)
    bool SupportsScrubbing() const;
    
    UFUNCTION(BlueprintPure)
    bool SupportsRate(float Rate, bool Unthinned) const;
    
    UFUNCTION(BlueprintCallable)
    bool SetViewRotation(const FRotator& Rotation, bool Absolute);
    
    UFUNCTION(BlueprintCallable)
    bool SetViewField(float Horizontal, float Vertical, bool Absolute);
    
    UFUNCTION(BlueprintCallable)
    bool SetVideoTrackFrameRate(int32 TrackIndex, int32 FormatIndex, float FrameRate);
    
    UFUNCTION(BlueprintCallable)
    bool SetTrackFormat(EMediaPlayerTrack TrackType, int32 TrackIndex, int32 FormatIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetTimeDelay(FTimespan NewTimeDelay);
    
    UFUNCTION(BlueprintCallable)
    bool SetRate(float Rate);
    
    UFUNCTION(BlueprintCallable)
    bool SetNativeVolume(float Volume);
    
    UFUNCTION(BlueprintCallable)
    void SetMediaOptions(const UMediaSource* options);
    
    UFUNCTION(BlueprintCallable)
    bool SetLooping(bool Looping);
    
    UFUNCTION(BlueprintCallable)
    void SetDesiredPlayerName(FName PlayerName);
    
    UFUNCTION(BlueprintCallable)
    void SetBlockOnTime(const FTimespan& Time);
    
    UFUNCTION(BlueprintCallable)
    bool SelectTrack(EMediaPlayerTrack TrackType, int32 TrackIndex);
    
    UFUNCTION(BlueprintCallable)
    bool Seek(const FTimespan& Time);
    
    UFUNCTION(BlueprintCallable)
    bool Rewind();
    
    UFUNCTION(BlueprintCallable)
    bool Reopen();
    
    UFUNCTION(BlueprintCallable)
    bool Previous();
    
    UFUNCTION(BlueprintCallable)
    void PlayAndSeek();
    
    UFUNCTION(BlueprintCallable)
    bool Play();
    
    UFUNCTION(BlueprintCallable)
    bool Pause();
    
    UFUNCTION(BlueprintCallable)
    bool OpenUrl(const FString& URL);
    
    UFUNCTION(BlueprintCallable)
    bool OpenSourceWithOptions(UMediaSource* MediaSource, const FMediaPlayerOptions& options);
    
    UFUNCTION(BlueprintCallable)
    void OpenSourceLatent(const UObject* WorldContextObject, FLatentActionInfo LatentInfo, UMediaSource* MediaSource, const FMediaPlayerOptions& options, bool& bSuccess);
    
    UFUNCTION(BlueprintCallable)
    bool OpenSource(UMediaSource* MediaSource);
    
    UFUNCTION(BlueprintCallable)
    bool OpenPlaylistIndex(UMediaPlaylist* InPlaylist, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    bool OpenPlaylist(UMediaPlaylist* InPlaylist);
    
    UFUNCTION(BlueprintCallable)
    bool OpenFile(const FString& FilePath);
    
    UFUNCTION(BlueprintCallable)
    bool Next();
    
    UFUNCTION(BlueprintPure)
    bool IsReady() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPreparing() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPlaying() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPaused() const;
    
    UFUNCTION(BlueprintPure)
    bool IsLooping() const;
    
    UFUNCTION(BlueprintPure)
    bool IsConnecting() const;
    
    UFUNCTION(BlueprintPure)
    bool IsClosed() const;
    
    UFUNCTION(BlueprintPure)
    bool IsBuffering() const;
    
    UFUNCTION(BlueprintPure)
    bool HasError() const;
    
    UFUNCTION(BlueprintPure)
    FRotator GetViewRotation() const;
    
    UFUNCTION(BlueprintPure)
    FString GetVideoTrackType(int32 TrackIndex, int32 FormatIndex) const;
    
    UFUNCTION(BlueprintPure)
    FFloatRange GetVideoTrackFrameRates(int32 TrackIndex, int32 FormatIndex) const;
    
    UFUNCTION(BlueprintPure)
    float GetVideoTrackFrameRate(int32 TrackIndex, int32 FormatIndex) const;
    
    UFUNCTION(BlueprintPure)
    FIntPoint GetVideoTrackDimensions(int32 TrackIndex, int32 FormatIndex) const;
    
    UFUNCTION(BlueprintPure)
    float GetVideoTrackAspectRatio(int32 TrackIndex, int32 FormatIndex) const;
    
    UFUNCTION(BlueprintPure)
    float GetVerticalFieldOfView() const;
    
    UFUNCTION(BlueprintPure)
    FString GetUrl() const;
    
    UFUNCTION(BlueprintPure)
    FString GetTrackLanguage(EMediaPlayerTrack TrackType, int32 TrackIndex) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetTrackFormat(EMediaPlayerTrack TrackType, int32 TrackIndex) const;
    
    UFUNCTION(BlueprintPure)
    FText GetTrackDisplayName(EMediaPlayerTrack TrackType, int32 TrackIndex) const;
    
    UFUNCTION(BlueprintPure)
    FTimespan GetTimeDelay() const;
    
    UFUNCTION(BlueprintPure)
    FTimespan GetTime() const;
    
    UFUNCTION(BlueprintPure)
    void GetSupportedRates(TArray<FFloatRange>& OutRates, bool Unthinned) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetSelectedTrack(EMediaPlayerTrack TrackType) const;
    
    UFUNCTION(BlueprintPure)
    float GetRate() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetPlaylistIndex() const;
    
    UFUNCTION(BlueprintPure)
    UMediaPlaylist* GetPlaylist() const;
    
    UFUNCTION(BlueprintPure)
    FName GetPlayerName() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetNumTracks(EMediaPlayerTrack TrackType) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetNumTrackFormats(EMediaPlayerTrack TrackType, int32 TrackIndex) const;
    
    UFUNCTION(BlueprintPure)
    FText GetMediaName() const;
    
    UFUNCTION(BlueprintPure)
    FTimespan GetLastVideoSampleProcessedTime() const;
    
    UFUNCTION(BlueprintPure)
    FTimespan GetLastAudioSampleProcessedTime() const;
    
    UFUNCTION(BlueprintPure)
    float GetHorizontalFieldOfView() const;
    
    UFUNCTION(BlueprintPure)
    FTimespan GetDuration() const;
    
    UFUNCTION(BlueprintPure)
    FName GetDesiredPlayerName() const;
    
    UFUNCTION(BlueprintPure)
    FString GetAudioTrackType(int32 TrackIndex, int32 FormatIndex) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetAudioTrackSampleRate(int32 TrackIndex, int32 FormatIndex) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetAudioTrackChannels(int32 TrackIndex, int32 FormatIndex) const;
    
    UFUNCTION(BlueprintCallable)
    void Close();
    
    UFUNCTION(BlueprintCallable)
    bool CanPlayUrl(const FString& URL);
    
    UFUNCTION(BlueprintCallable)
    bool CanPlaySource(UMediaSource* MediaSource);
    
    UFUNCTION(BlueprintPure)
    bool CanPause() const;
    
    UMediaPlayer();
};

