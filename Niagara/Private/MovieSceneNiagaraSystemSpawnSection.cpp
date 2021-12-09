#include "MovieSceneNiagaraSystemSpawnSection.h"

UMovieSceneNiagaraSystemSpawnSection::UMovieSceneNiagaraSystemSpawnSection() {
    this->SectionStartBehavior = ENiagaraSystemSpawnSectionStartBehavior::Activate;
    this->SectionEvaluateBehavior = ENiagaraSystemSpawnSectionEvaluateBehavior::None;
    this->SectionEndBehavior = ENiagaraSystemSpawnSectionEndBehavior::SetSystemInactive;
    this->AgeUpdateMode = ENiagaraAgeUpdateMode::TickDeltaTime;
}

