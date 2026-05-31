// Fill out your copyright notice in the Description page of Project Settings.


#include "BTService_PlayerLocationIfSeen.h"
#include "ShooterAI.h"
#include "BehaviorTree/BlackboardComponent.h"

UBTService_PlayerLocationIfSeen::UBTService_PlayerLocationIfSeen()
{
	NodeName = TEXT("Update PlayerLocation If Seen");
}

void UBTService_PlayerLocationIfSeen::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

	AShooterAI* ShooterAIOwner = Cast<AShooterAI>(OwnerComp.GetAIOwner());
	AShootingSamCharacter* Player = ShooterAIOwner->PlayerCharacter;
	UBlackboardComponent* BlackBoardComp = ShooterAIOwner->GetBlackboardComponent();
	if (ShooterAIOwner && Player && BlackBoardComp)
	{
		if (ShooterAIOwner->LineOfSightTo(Player))
		{
			BlackBoardComp->SetValueAsVector(GetSelectedBlackboardKey(), Player->GetActorLocation());
			ShooterAIOwner->SetFocus(Player);
		}
		else
		{
			BlackBoardComp->ClearValue(GetSelectedBlackboardKey());
			ShooterAIOwner->ClearFocus(EAIFocusPriority::Gameplay);
		}
	}
}
