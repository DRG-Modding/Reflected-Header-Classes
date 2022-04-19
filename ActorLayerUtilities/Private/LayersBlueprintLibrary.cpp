#include "LayersBlueprintLibrary.h"

class AActor;
class UObject;

void ULayersBlueprintLibrary::RemoveActorFromLayer(AActor* InActor, const FActorLayer& Layer) {
}

TArray<AActor*> ULayersBlueprintLibrary::GetActors(UObject* WorldContextObject, const FActorLayer& ActorLayer) {
    return TArray<AActor*>();
}

void ULayersBlueprintLibrary::AddActorToLayer(AActor* InActor, const FActorLayer& Layer) {
}

ULayersBlueprintLibrary::ULayersBlueprintLibrary() {
}

