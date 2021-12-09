#include "ModioSDKLibrary.h"

float UModioSDKLibrary::Pct_Int64Int64(int64 Dividend, int64 Divisor) {
    return 0.0f;
}

bool UModioSDKLibrary::IsValidSecurityCodeFormat(const FString& String) {
    return false;
}

bool UModioSDKLibrary::IsValidEmailAddressFormat(const FString& String) {
    return false;
}

FModioInitializeOptions UModioSDKLibrary::GetProjectInitializeOptions() {
    return FModioInitializeOptions{};
}

FModioGameID UModioSDKLibrary::GetProjectGameId() {
    return FModioGameID{};
}

EModioEnvironment UModioSDKLibrary::GetProjectEnvironment() {
    return EModioEnvironment::Test;
}

FModioApiKey UModioSDKLibrary::GetProjectApiKey() {
    return FModioApiKey{};
}

FText UModioSDKLibrary::Filesize_ToString(int64 Filesize, int32 MaxDecimals, TEnumAsByte<EFileSizeUnit> Unit) {
    return FText::GetEmpty();
}

FText UModioSDKLibrary::Conv_Int64ToText(int64 Value, bool bAlwaysSign, bool bUseGrouping, int32 MinimumIntegralDigits, int32 MaximumIntegralDigits) {
    return FText::GetEmpty();
}

FString UModioSDKLibrary::Conv_Int64ToString(int64 inInt) {
    return TEXT("");
}

UModioSDKLibrary::UModioSDKLibrary() {
}

