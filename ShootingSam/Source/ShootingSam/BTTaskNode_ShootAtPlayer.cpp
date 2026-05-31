// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTaskNode_ShootAtPlayer.h"
#include "ShooterAI.h"

UBTTaskNode_ShootAtPlayer::UBTTaskNode_ShootAtPlayer()
{
	NodeName = ("Shoot At Player");
}

EBTNodeResult::Type UBTTaskNode_ShootAtPlayer::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::ExecuteTask(OwnerComp, NodeMemory);

	EBTNodeResult::Type result = EBTNodeResult::Failed;
	AShooterAI* ShooterAIOwner = Cast<AShooterAI>(OwnerComp.GetAIOwner());

	if (ShooterAIOwner)
	{
		AShootingSamCharacter* PlayerCharacter = ShooterAIOwner->PlayerCharacter;
		AShootingSamCharacter* OwnerCharacter = ShooterAIOwner->MyCharacter;

		if (OwnerCharacter && PlayerCharacter && PlayerCharacter->IsAlive)
		{
			OwnerCharacter->Shoot();
			result = EBTNodeResult::Succeeded;
		}
	}
	return result;
}
