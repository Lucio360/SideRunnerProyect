// Fill out your copyright notice in the Description page of Project Settings.


#include "WallSpike.h"

AWallSpike::AWallSpike()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AWallSpike::BeginPlay()
{
	Super::BeginPlay();

	this->GetRootComponent()->ComponentVelocity = FVector(0.f, 25.f, 0.f);
}

void AWallSpike::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	SetActorLocation(GetActorLocation() + FVector(0.f, 400.f * DeltaTime, 0.f), true);
}

