#include "ModioErrorCodeLibrary.h"

bool UModioErrorCodeLibrary::IsError(const FModioErrorCode& Error) {
    return false;
}

int32 UModioErrorCodeLibrary::GetValue(const FModioErrorCode& Error) {
    return 0;
}

FString UModioErrorCodeLibrary::GetMessage(const FModioErrorCode& Error) {
    return TEXT("");
}

UModioErrorCodeLibrary::UModioErrorCodeLibrary() {
}

