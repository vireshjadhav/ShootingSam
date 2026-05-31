// Copyright Epic Games, Inc. All Rights Reserved.

#include "ShootingSamGameMode.h"
#include "Kismet/GameplayStatics.h"
#include "ShootingSamCharacter.h"
#include "ShooterAI.h"

AShootingSamGameMode::AShootingSamGameMode()
{
	// stub
}

void AShootingSamGameMode::BeginPlay()
{
	Super::BeginPlay();

	AShootingSamCharacter* Player = Cast<AShootingSamCharacter>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));

	TArray<AActor*> ShooterAIActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AShooterAI::StaticClass(), ShooterAIActors);

	/*
	for (int32 i = 0; i < ShooterAIActors.Num(); ++i)
	{
		AActor* ShooterAIActor = ShooterAIActors[i];
		AShooterAI* ShooterAI = Cast<AShooterAI>(ShooterAIActor);

		if (ShooterAI)
		{
			ShooterAI->StartBehaviorTree(Player);
			UE_LOG(LogTemp, Display, TEXT("%s starting behavior tree"), *ShooterAI->GetActorNameOrLabel());
		}
	}
	*/


	for (AActor* ShooterAIActor : ShooterAIActors)
	{
		AShooterAI* ShooterAI = Cast<AShooterAI>(ShooterAIActor);

		if(ShooterAI)
		{
			ShooterAI->StartBehaviorTree(Player);
			UE_LOG(LogTemp, Display, TEXT("%s starting behavior tree"), *ShooterAI->GetActorNameOrLabel());
		}
	}
}
