// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"

#include "ShootingSamCharacter.h"

#include "ShooterAI.generated.h"

/**
 * 
 */
UCLASS()
class SHOOTINGSAM_API AShooterAI : public AAIController
{
	GENERATED_BODY()
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void Tick(float deltaTime) override;

public:

	UPROPERTY(EditAnywhere)
	UBehaviorTree* EnemyAIBehaviorTree;

	AShootingSamCharacter* PlayerCharacter;
	AShootingSamCharacter* MyCharacter;

	void StartBehaviorTree(AShootingSamCharacter* Player);
};
