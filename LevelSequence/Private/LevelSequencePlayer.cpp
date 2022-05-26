#include "LevelSequencePlayer.h"

class ULevelSequencePlayer;
class UCameraComponent;
class UObject;
class ULevelSequence;
class ALevelSequenceActor;

UCameraComponent* ULevelSequencePlayer::GetActiveCameraComponent() const {
    return NULL;
}

ULevelSequencePlayer* ULevelSequencePlayer::CreateLevelSequencePlayer(UObject* WorldContextObject, ULevelSequence* LevelSequence, FMovieSceneSequencePlaybackSettings Settings, ALevelSequenceActor*& OutActor) {
    return NULL;
}

ULevelSequencePlayer::ULevelSequencePlayer() {
}

