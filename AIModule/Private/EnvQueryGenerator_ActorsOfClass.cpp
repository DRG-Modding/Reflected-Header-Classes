#include "EnvQueryGenerator_ActorsOfClass.h"
#include "EnvQueryContext_Querier.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor

UEnvQueryGenerator_ActorsOfClass::UEnvQueryGenerator_ActorsOfClass() {
    this->SearchedActorClass = AActor::StaticClass();
    this->SearchCenter = UEnvQueryContext_Querier::StaticClass();
}

