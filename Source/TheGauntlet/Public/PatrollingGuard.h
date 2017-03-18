// Copyright 2016 - Sea of Blood Entertainment - David Rood - Udemy Unreal C++ Tutorial

#pragma once

#include "TP_ThirdPerson/TP_ThirdPersonCharacter.h"
#include "PatrollingGuard.generated.h"

/**
 * 
 */
UCLASS()
class THEGAUNTLET_API APatrollingGuard : public ATP_ThirdPersonCharacter
{
	GENERATED_BODY()
public:
	UPROPERTY(EditInstanceOnly, Category = "Patrol Route")
	TArray<AActor*> PatrolPointsCPP;

	
	
};
