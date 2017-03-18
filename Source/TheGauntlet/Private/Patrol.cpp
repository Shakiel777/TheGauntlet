// Copyright 2016 - Sea of Blood Entertainment - David Rood - Udemy Unreal C++ Tutorial

#include "TheGauntlet.h"
#include "Patrol.h"


// Sets default values for this component's properties
UPatrol::UPatrol()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UPatrol::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UPatrol::TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction )
{
	Super::TickComponent( DeltaTime, TickType, ThisTickFunction );

	// ...
}

