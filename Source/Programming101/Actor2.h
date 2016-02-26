// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "Actor2.generated.h"

UCLASS()
class PROGRAMMING101_API AActor2 : public AActor
{
	GENERATED_BODY()

public:	
	// Sets default values for this actor's properties
	AActor2();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	// something something updates properties. 
	virtual void PostInitProperties() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Deeps")
	int32 TotalDamage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Deeps")
	float DamageTimeInSeconds;

	// makes it so that blueprints and the editor can only see it, transient tells unreal its suppost to be math'd. 
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Transient, Category = "Deeps")
	float DEEPS;
};
