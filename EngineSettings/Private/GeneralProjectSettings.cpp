#include "GeneralProjectSettings.h"

UGeneralProjectSettings::UGeneralProjectSettings() {
    this->CompanyName = TEXT("Ghost Ship Games");
    this->CompanyDistinguishedName = TEXT("CN=Coffee Stain Publishing");
    this->CopyrightNotice = TEXT("Copyright Ghost Ship Games");
    this->Homepage = TEXT("www.ghostship.dk");
    this->ProjectName = TEXT("Deep Rock Galactic");
    this->ProjectVersion = TEXT("1.35.64707.0");
    this->ProjectDisplayedTitle = INVTEXT("Deep Rock Galactic");
    this->bShouldWindowPreserveAspectRatio = false;
    this->bUseBorderlessWindow = false;
    this->bStartInVR = false;
    this->bStartInAR = false;
    this->bSupportAR = false;
    this->bAllowWindowResize = true;
    this->bAllowClose = true;
    this->bAllowMaximize = true;
    this->bAllowMinimize = true;
}

