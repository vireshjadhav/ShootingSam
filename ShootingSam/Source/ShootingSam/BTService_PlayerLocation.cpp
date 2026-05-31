// Fill out your copyright notice in the Description page of Project Settings.


#include "BTService_PlayerLocation.h"
#include "Kismet/GameplayStatics.h"
//#include "ShooterAI.h"
#include "ShootingSamCharacter.h"
#include "BehaviorTree/BlackboardComponent.h"

UBTService_PlayerLocation::UBTService_PlayerLocation()
{
	NodeName = TEXT("Get Player Location");
}

void UBTService_PlayerLocation::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

	/*
	AShooterAI* ShooterAIOwner = Cast<AShooterAI>(OwnerComp.GetAIOwner());
	AShootingSamCharacter* Player = ShooterAIOwner->PlayerCharacter;
	UBlackboardComponent* BlackBoardComp = ShooterAIOwner->GetBlackboardComponent();
	*/

	APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
	UBlackboardComponent* BlackBoardComp = OwnerComp.GetBlackboardComponent();

	if (PlayerPawn && BlackBoardComp)
	{
		BlackBoardComp->SetValueAsVector(GetSelectedBlackboardKey(), PlayerPawn->GetActorLocation());
	}
}
