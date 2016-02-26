// Fill out your copyright notice in the Description page of Project Settings.

#include "Programming101.h"
#include "FloatingActor.h"

DEFINE_LOG_CATEGORY_STATIC(LogFloatingActor, Log, All);

// Sets default values
AFloatingActor::AFloatingActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AFloatingActor::BeginPlay()
{
	Super::BeginPlay();
	StartLocation = GetActorLocation();
	
}

// Called every frame
void AFloatingActor::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );
	FVector DeltaNewLocation;
	float DeltaHeight = FMath::Sin(RunningTime);
	float DeltaStrafe = FMath::Cos(RunningTime);
	UE_LOG(LogFloatingActor, Log, TEXT("Running Time: %f DeltaTime: %f DeltaHeight %f DeltaStrafe %f StartLocation (%f, %f, %f)"), RunningTime, DeltaTime, DeltaHeight, DeltaStrafe, StartLocation.X, StartLocation.Y, StartLocation.Z);
	DeltaNewLocation.Z = DeltaHeight * Height; //scale height by 20
	DeltaNewLocation.Y = DeltaStrafe * Strafe; //scale strafe by 20 :D
	RunningTime += DeltaTime;
	SetActorLocation(StartLocation + DeltaNewLocation);
}

