#include "MoviePlayerSettings.h"

UMoviePlayerSettings::UMoviePlayerSettings() {
    this->bWaitForMoviesToComplete = false;
    this->bMoviesAreSkippable = true;
    this->StartupMovies.AddDefaulted(2);
}

