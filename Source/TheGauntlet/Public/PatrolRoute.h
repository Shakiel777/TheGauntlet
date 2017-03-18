// Copyright 2016 - Sea of Blood Entertainment - David Rood - Udemy Unreal C++ Tutorial

#pragma once

#include "Components/ActorComponent.h"
#include "PatrolRoute.generated.h"

/**
* A "Route Crad to help the AI choose thier next waypoint.
*/
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class THEGAUNTLET_API UPatrolRoute : public UActorComponent
{
	GENERATED_BODY()

public:	
	TArray<AActor*> GetPatrolPoints() const;


private:
	UPROPERTY(EditInstanceOnly, Category = "Patrol Route")
	TArray<AActor*> PatrolPoints;

		
	
};
