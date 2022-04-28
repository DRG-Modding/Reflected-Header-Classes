#include "GeneralProjectSettings.h"

UGeneralProjectSettings::UGeneralProjectSettings() {
    this->CompanyName = TEXT("Ghost Ship Games");
    this->CompanyDistinguishedName = TEXT("CN=Coffee Stain Publishing");
    this->CopyrightNotice = TEXT("Copyright Ghost Ship Games");
    this->Homepage = TEXT("www.ghostship.dk");
    this->ProjectName = TEXT("Deep Rock Galactic");
    this->ProjectVersion = TEXT("1.36.70633.0");
    this->ProjectDisplayedTitle = FText::FromString(TEXT("Deep Rock Galactic"));
    this->bShouldWindowPreserveAspectRatio = false;
    this->bUseBorderlessWindow = false;
    this->bStartInVR = false;
    this->bAllowWindowResize = true;
    this->bAllowClose = true;
    this->bAllowMaximize = true;
    this->bAllowMinimize = true;
}

