// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ShootingSamGameMode.generated.h"

/**
 *  Simple GameMode for a third person game
 */
UCLASS(abstract)
class AShootingSamGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	
	/** Constructor */
	AShootingSamGameMode();
};



