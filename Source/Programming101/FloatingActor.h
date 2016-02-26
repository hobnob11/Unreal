// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "FloatingActor.generated.h"

UCLASS()
class PROGRAMMING101_API AFloatingActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFloatingActor();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	float RunningTime;
	FVector StartLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Circle)
		float Strafe = 20.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Circle)
		float Height = 20.f;
};
