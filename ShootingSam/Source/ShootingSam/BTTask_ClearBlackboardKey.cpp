// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_ClearBlackboardKey.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Kismet/GameplayStatics.h"

UBTTask_ClearBlackboardKey::UBTTask_ClearBlackboardKey()
{
	NodeName = TEXT("Clear Key");
}

EBTNodeResult::Type UBTTask_ClearBlackboardKey::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::ExecuteTask(OwnerComp, NodeMemory);

	UBlackboardComponent* BlackBoardComp = OwnerComp.GetBlackboardComponent();

	if (BlackBoardComp)
	{
		BlackBoardComp->ClearValue(GetSelectedBlackboardKey());
	}

	return EBTNodeResult::Succeeded;
}


