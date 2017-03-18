// Copyright 2016 - Sea of Blood Entertainment - David Rood - Udemy Unreal C++ Tutorial

#include "TheGauntlet.h"
#include "PatrolRoute.h"

TArray<AActor*> UPatrolRoute::GetPatrolPoints() const
{
	return PatrolPoints;
}