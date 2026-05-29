// Fill out your copyright notice in the Description page of Project Settings.


#include "ShooterAI.h"

#include "Kismet/GameplayStatics.h"

void AShooterAI::BeginPlay()
{
	Super::BeginPlay();


}

void AShooterAI::Tick(float deltaTime)
{
	Super::Tick(deltaTime);
	/*
	APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
	if (PlayerPawn)
	{
		if (LineOfSightTo(PlayerPawn))
		{
			SetFocus(PlayerPawn);
			MoveToActor(PlayerPawn, 200.0f);
		}
		else
		{
			ClearFocus(EAIFocusPriority::Gameplay);
			StopMovement();
		}
	}
	*/
}

void AShooterAI::StartBehaviorTree(AShootingSamCharacter* Player)
{
	if (EnemyAIBehaviorTree)
	{
		MyCharacter = Cast<AShootingSamCharacter>(GetPawn());

		if (Player)
		{
			PlayerCharacter = Player;
		}

		RunBehaviorTree(EnemyAIBehaviorTree);
	}
}
