#include "ScriptTestActor.h"

float AScriptTestActor::TestFunction(float InValue, float InFactor, bool bMultiply) {
    return 0.0f;
}

AScriptTestActor::AScriptTestActor() {
    this->TestValue = 0.00f;
    this->TestBool = false;
}

